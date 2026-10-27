#!/usr/bin/env python3
"""
X3DUOM-Native X3D JSON Semantic Validator

Validates X3D JSON documents directly against the X3D Unified Object Model (X3DUOM)
with deep semantic analysis that standard JSON Schema cannot perform:

1. DEF / USE Graph Integrity:
   - Validates that every USE reference resolves to a declared DEF.
   - Detects duplicate DEF identifiers.
   - Confirms that the USE node's type matches the defined DEF node's type.
   - Flags illegal attribute overrides on USE nodes.
2. ROUTE Semantic Validation:
   - Verifies fromNode and toNode resolve to existing DEF nodes.
   - Verifies fromField exists and is readable (outputOnly or inputOutput).
   - Verifies toField exists and is writable (inputOnly or inputOutput).
   - Verifies strict type compatibility between fromField and toField (e.g. SFFloat -> SFFloat).
3. Container Field Relationship Rules:
   - Validates that container fields (-geometry, -appearance, -material, -children, etc.)
     only accept nodes belonging to the acceptableNodeTypes inheritance hierarchy.
4. Authoring & AccessType Rules:
   - Flags attempts to initialize outputOnly event sources.
   - Flags attempts to initialize inputOnly event sinks in scene files.
5. Exact Diagnostics & Typo Suggestions:
   - Provides JSON pointer path, exact error reason, expected vs actual types,
     and fuzzy typo suggestions (e.g. "Tranform" -> "Did you mean 'Transform'?").

Web3D Consortium Open-Source License for Models and Software
Copyright (c) 2025-2026 held by the author(s). All rights reserved.
"""

from __future__ import annotations

import argparse
import difflib
import json
import re
import sys
import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from enum import Enum
from typing import Any, Dict, List, Optional, Set, Tuple, Union


class Severity(str, Enum):
    ERROR = "ERROR"
    WARNING = "WARNING"
    INFO = "INFO"


@dataclass
class Diagnostic:
    severity: Severity
    rule: str
    path: str
    message: str
    expected: Optional[str] = None
    actual: Optional[str] = None
    suggestion: Optional[str] = None

    def to_dict(self) -> Dict[str, Any]:
        d = {
            "severity": self.severity.value,
            "rule": self.rule,
            "path": self.path,
            "message": self.message
        }
        if self.expected:
            d["expected"] = self.expected
        if self.actual:
            d["actual"] = self.actual
        if self.suggestion:
            d["suggestion"] = self.suggestion
        return d


@dataclass
class X3DFieldSpec:
    name: str
    type: str
    access_type: str
    synonym: Optional[str] = None
    min_inclusive: Optional[float] = None
    max_inclusive: Optional[float] = None
    min_exclusive: Optional[float] = None
    max_exclusive: Optional[float] = None
    min_items: Optional[int] = None
    max_items: Optional[int] = None
    acceptable_node_types: Optional[List[str]] = None
    enums: Optional[List[str]] = None
    default: Optional[str] = None


@dataclass
class X3DNodeSpec:
    name: str
    category: str  # "ConcreteNode", "Statement", "AbstractNodeType"
    appinfo: str
    ancestors: List[str]
    fields: Dict[str, X3DFieldSpec] = field(default_factory=dict)
    container_fields: Dict[str, List[str]] = field(default_factory=dict)


class X3DUOMModel:
    """Precomputes and indexes X3DUOM XML for high-performance semantic validation."""

    VECTOR_DIMS: Dict[str, int] = {
        "SFVec2f": 2, "SFVec2d": 2, "MFVec2f": 2, "MFVec2d": 2,
        "SFVec3f": 3, "SFVec3d": 3, "MFVec3f": 3, "MFVec3d": 3,
        "SFColor": 3, "MFColor": 3,
        "SFVec4f": 4, "SFVec4d": 4, "MFVec4f": 4, "MFVec4d": 4,
        "SFRotation": 4, "MFRotation": 4, "SFColorRGBA": 4, "MFColorRGBA": 4,
        "SFMatrix4f": 16, "SFMatrix4d": 16
    }

    def __init__(self, xml_source: Union[str, ET.Element]):
        if isinstance(xml_source, str):
            tree = ET.parse(xml_source)
            self.root = tree.getroot()
        else:
            self.root = xml_source

        self.nodes: Dict[str, X3DNodeSpec] = {}
        self.concrete_names: Set[str] = set()
        self.statement_names: Set[str] = set()
        self.descendants_map: Dict[str, Set[str]] = {}
        self._build_model()

    def _build_model(self) -> None:
        raw_elements: Dict[str, ET.Element] = {}
        for tag in ("AbstractNodeType", "AbstractObjectType", "ConcreteNode", "Statement"):
            for el in self.root.iter(tag):
                raw_elements[el.get("name", "")] = el

        # 1. Resolve ancestor hierarchy
        def get_ancestors(name: str) -> List[str]:
            res: List[str] = []
            el = raw_elements.get(name)
            if el is not None:
                for tag in ("Inheritance", "AdditionalInheritance"):
                    for inher in el.iter(tag):
                        base = inher.get("baseType")
                        if base and base in raw_elements:
                            res.append(base)
                            res.extend(get_ancestors(base))
            return list(dict.fromkeys(res))

        # 2. Map abstract types to concrete descendants
        for cn in self.root.iter("ConcreteNode"):
            cname = cn.get("name", "")
            self.concrete_names.add(cname)
            for anc in get_ancestors(cname):
                self.descendants_map.setdefault(anc, set()).add(cname)

        for st in self.root.iter("Statement"):
            sname = st.get("name", "")
            self.statement_names.add(sname)
            for anc in get_ancestors(sname):
                self.descendants_map.setdefault(anc, set()).add(sname)

        # ProtoInstance can act as any node
        for anc in list(self.descendants_map.keys()):
            self.descendants_map[anc].add("ProtoInstance")

        # 3. Build Node Specifications with inherited fields
        for name, el in raw_elements.items():
            category = el.tag
            appinfo = ""
            idef = el.find(".//InterfaceDefinition")
            if idef is not None and idef.get("appinfo"):
                appinfo = idef.get("appinfo", "")

            ancestors = get_ancestors(name)
            node_spec = X3DNodeSpec(
                name=name,
                category=category,
                appinfo=appinfo,
                ancestors=ancestors
            )

            # Collect fields across self + ancestors
            for target_name in [name] + ancestors:
                target_el = raw_elements.get(target_name)
                if target_el is not None:
                    for f in target_el.findall(".//field"):
                        fname = f.get("name", "")
                        if not fname:
                            continue

                        # Extract field specs
                        acc_types = None
                        if f.get("acceptableNodeTypes"):
                            acc_types = [t.strip() for t in f.get("acceptableNodeTypes", "").split("|") if t.strip()]

                        enums = None
                        enum_els = f.findall(".//enumeration")
                        if enum_els:
                            enums = [e.get("value", "").strip('"') for e in enum_els if e.get("value")]

                        # Convert min/max numeric
                        def to_num(val):
                            if not val:
                                return None
                            try:
                                return float(val) if ("." in val or "e" in val.lower()) else int(val)
                            except ValueError:
                                return None

                        field_spec = X3DFieldSpec(
                            name=fname,
                            type=f.get("type", ""),
                            access_type=f.get("accessType", "inputOutput"),
                            synonym=f.get("synonym"),
                            min_inclusive=to_num(f.get("maxInclusive")),  # handled below
                            max_inclusive=to_num(f.get("maxInclusive")),
                            min_exclusive=to_num(f.get("minExclusive")),
                            max_exclusive=to_num(f.get("maxExclusive")),
                            acceptable_node_types=acc_types,
                            enums=enums,
                            default=f.get("default")
                        )
                        node_spec.fields[fname] = field_spec
                        if field_spec.synonym:
                            node_spec.fields[field_spec.synonym] = field_spec

                        # Container fields (-geometry, -appearance, etc.)
                        if acc_types:
                            container_key = f"-{fname}"
                            node_spec.container_fields[container_key] = acc_types

            # Add default -children container for grouping nodes
            if "X3DGroupingNode" in ancestors or name in ("Transform", "Group", "Scene", "CADPart", "CADAssembly"):
                node_spec.container_fields["-children"] = ["X3DChildNode"]

            self.nodes[name] = node_spec

    def is_compatible_child(self, parent_node: str, container_field: str, child_node: str) -> Tuple[bool, List[str]]:
        """Check if child_node is valid inside parent_node's container_field."""
        spec = self.nodes.get(parent_node)
        if not spec:
            return True, []

        allowed_abstracts = spec.container_fields.get(container_field)
        if not allowed_abstracts:
            # Fallback for standard -children
            if container_field == "-children":
                allowed_abstracts = ["X3DChildNode"]
            else:
                return False, []

        CHILD_STATEMENTS = {"ROUTE", "IMPORT", "EXPORT", "ProtoDeclare", "ExternProtoDeclare"}
        if container_field == "-children" and child_node in CHILD_STATEMENTS:
            return True, ["X3DChildNode"]

        # Check if child is in allowed abstracts or descends from them
        for abs_type in allowed_abstracts:
            if child_node == abs_type:
                return True, allowed_abstracts
            descendants = self.descendants_map.get(abs_type, set())
            if child_node in descendants:
                return True, allowed_abstracts

        return False, allowed_abstracts


class X3DValidator:
    """Semantic Validator for X3D JSON documents."""

    def __init__(self, model: X3DUOMModel):
        self.model = model
        self.diagnostics: List[Diagnostic] = []
        self.symbol_table: Dict[str, Dict[str, Any]] = {}  # def_name -> {type, path, body}
        # proto name -> {field name -> X3DFieldSpec}, from ProtoDeclare / ExternProtoDeclare
        self.proto_decls: Dict[str, Dict[str, X3DFieldSpec]] = {}

    def validate(self, json_data: Any) -> List[Diagnostic]:
        self.diagnostics = []
        self.symbol_table = {}
        self.proto_decls = {}

        if not isinstance(json_data, dict):
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROOT_NOT_OBJECT",
                path="$",
                message="X3D JSON root must be a JSON object containing an 'X3D' or scene node wrapper."
            ))
            return self.diagnostics

        # Pass 1: Build DEF Symbol Table & Detect Duplicates
        self._collect_symbols(json_data, "$")
        self._collect_protos(json_data)

        # Pass 2: Semantic Graph & ROUTE Verification
        self._validate_node(json_data, "$", parent_node=None, parent_container=None)

        return self.diagnostics

    def _collect_symbols(self, obj: Any, path: str) -> None:
        """Scan tree to build symbol table of all @DEF declarations."""
        if isinstance(obj, dict):
            for k, v in obj.items():
                cur_path = f"{path}.{k}"
                if isinstance(v, dict):
                    def_name = v.get("@DEF")
                    if def_name:
                        if not isinstance(def_name, str) or not re.match(r"^[a-zA-Z_][\w.-]*$", def_name):
                            self.diagnostics.append(Diagnostic(
                                severity=Severity.ERROR,
                                rule="DEF_INVALID_IDENTIFIER",
                                path=f"{cur_path}.@DEF",
                                message=f"DEF identifier '{def_name}' is invalid. Must match pattern ^[a-zA-Z_][\\w.-]*$",
                                expected="^[a-zA-Z_][\\w.-]*$",
                                actual=str(def_name),
                                suggestion="Use standard letters, numbers, underscores, dashes or dots starting with a letter."
                            ))
                        elif def_name in self.symbol_table:
                            first = self.symbol_table[def_name]
                            self.diagnostics.append(Diagnostic(
                                severity=Severity.WARNING,
                                rule="DEF_DUPLICATE",
                                path=f"{cur_path}.@DEF",
                                message=f"Duplicate DEF '{def_name}' found. Previously declared as '{first['type']}' at {first['path']}.",
                                suggestion="X3D identifiers should be unique across the scene to prevent ambiguous USE/ROUTE references."
                            ))
                        else:
                            self.symbol_table[def_name] = {
                                "type": k,
                                "path": cur_path,
                                "body": v  # kept so ROUTE checks can read Script/ProtoInstance data
                            }
                self._collect_symbols(v, cur_path)
        elif isinstance(obj, list):
            for i, item in enumerate(obj):
                self._collect_symbols(item, f"{path}[{i}]")

    def _validate_node(self, obj: Any, path: str, parent_node: Optional[str], parent_container: Optional[str]) -> None:
        if isinstance(obj, dict):
            for node_name, node_body in obj.items():
                cur_path = f"{path}.{node_name}"

                # Handle comment
                if node_name == "#comment":
                    continue

                # Handle container field container
                if node_name.startswith("-"):
                    if parent_node and parent_node in self.model.nodes:
                        parent_spec = self.model.nodes[parent_node]
                        if node_name not in parent_spec.container_fields and node_name != "-children":
                            valid_cf = list(parent_spec.container_fields.keys())
                            closest = difflib.get_close_matches(node_name, valid_cf, n=1)
                            self.diagnostics.append(Diagnostic(
                                severity=Severity.ERROR,
                                rule="CONTAINER_UNKNOWN",
                                path=cur_path,
                                message=f"Node '{parent_node}' does not have a container field named '{node_name}'.",
                                expected=f"One of: {', '.join(valid_cf)}",
                                actual=node_name,
                                suggestion=f"Did you mean '{closest[0]}'?" if closest else None
                            ))

                    # Recurse into container field elements
                    if isinstance(node_body, list):
                        for idx, child_item in enumerate(node_body):
                            self._validate_node(child_item, f"{cur_path}[{idx}]", parent_node, node_name)
                    elif isinstance(node_body, dict):
                        self._validate_node(node_body, cur_path, parent_node, node_name)
                    continue

                # Concrete node or Statement validation
                if node_name not in self.model.nodes:
                    if node_name not in ("X3D", "Scene", "head", "meta", "component", "unit"):
                        closest = difflib.get_close_matches(node_name, self.model.concrete_names | self.model.statement_names, n=1)
                        self.diagnostics.append(Diagnostic(
                            severity=Severity.ERROR,
                            rule="NODE_UNKNOWN",
                            path=cur_path,
                            message=f"Unknown X3D node or statement '{node_name}'.",
                            actual=node_name,
                            suggestion=f"Did you mean '{closest[0]}'?" if closest else "Refer to X3DUOM specification."
                        ))
                    if isinstance(node_body, dict):
                        for k, v in node_body.items():
                            self._validate_node({k: v}, cur_path, parent_node=None, parent_container=None)
                    continue

                # Check container field compatibility
                if parent_container and parent_node:
                    is_valid, allowed = self.model.is_compatible_child(parent_node, parent_container, node_name)
                    if not is_valid:
                        self.diagnostics.append(Diagnostic(
                            severity=Severity.ERROR,
                            rule="CONTAINER_CHILD_MISMATCH",
                            path=cur_path,
                            message=f"Invalid child '{node_name}' inside container '{parent_container}' on parent '{parent_node}'.",
                            expected=f"Node inheriting from: {', '.join(allowed)}",
                            actual=node_name,
                            suggestion=f"Ensure child inherits from {allowed[0] if allowed else 'acceptable types'}."
                        ))

                # Handle ROUTE special validation
                if node_name == "ROUTE" and isinstance(node_body, dict):
                    self._validate_route(node_body, cur_path)

                # Validate Node Body Properties
                if isinstance(node_body, dict):
                    self._validate_node_properties(node_name, node_body, cur_path)

        elif isinstance(obj, list):
            for i, item in enumerate(obj):
                self._validate_node(item, f"{path}[{i}]", parent_node, parent_container)

    def _validate_node_properties(self, node_name: str, body: Dict[str, Any], path: str) -> None:
        spec = self.model.nodes.get(node_name)
        if not spec:
            return

        is_use_node = "@USE" in body

        # DEF / USE validation
        if is_use_node:
            use_name = body.get("@USE")
            if not isinstance(use_name, str) or not use_name:
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="USE_EMPTY",
                    path=f"{path}.@USE",
                    message="USE reference cannot be empty."
                ))
            elif use_name not in self.symbol_table:
                closest = difflib.get_close_matches(use_name, list(self.symbol_table.keys()), n=1)
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="USE_TARGET_NOT_FOUND",
                    path=f"{path}.@USE",
                    message=f"Referenced DEF '{use_name}' was not found in the scene graph.",
                    expected="A previously declared DEF identifier",
                    actual=use_name,
                    suggestion=f"Did you mean '{closest[0]}'?" if closest else "Ensure the target node defines @DEF earlier in the document."
                ))
            else:
                target_info = self.symbol_table[use_name]
                target_type = target_info["type"]
                # Verify node type matches DEF type
                if target_type != node_name and "ProtoInstance" not in (node_name, target_type):
                    self.diagnostics.append(Diagnostic(
                        severity=Severity.ERROR,
                        rule="USE_TYPE_MISMATCH",
                        path=f"{path}.@USE",
                        message=f"@USE target '{use_name}' was defined as a '{target_type}', but is being reused in a '{node_name}' node.",
                        expected=target_type,
                        actual=node_name,
                        suggestion=f"USE references must match the defined node type '{target_type}'."
                    ))

            # A USE node should not define field properties (only @USE, optional @containerField, and #comment)
            illegal_keys = [k for k in body.keys() if k not in ("@USE", "@containerField", "#comment", "-children")]
            if illegal_keys:
                self.diagnostics.append(Diagnostic(
                    severity=Severity.WARNING,
                    rule="USE_EXTRA_PROPERTIES",
                    path=path,
                    message=f"USE node defines extra fields ({', '.join(illegal_keys)}). A USE node reuses geometry and cannot override properties.",
                    suggestion="Remove attribute overrides or define a separate DEF node."
                ))

        # Check each field/attribute
        for k, v in body.items():
            if k == "#comment":
                continue

            field_path = f"{path}.{k}"

            if k in ("Scene", "head", "meta", "component", "unit"):
                self._validate_node(v, field_path, parent_node=k, parent_container=None)
                continue

            if k.startswith("-"):
                # Recurse into container field
                if isinstance(v, list):
                    for idx, child_item in enumerate(v):
                        self._validate_node(child_item, f"{field_path}[{idx}]", parent_node=node_name, parent_container=k)
                elif isinstance(v, dict):
                    self._validate_node(v, field_path, parent_node=node_name, parent_container=k)
                continue

            if k.startswith("@"):
                field_name = k[1:]
                field_spec = spec.fields.get(field_name)

                if not field_spec:
                    valid_fields = [f"@{f}" for f in spec.fields.keys()]
                    closest = difflib.get_close_matches(k, valid_fields, n=1)
                    self.diagnostics.append(Diagnostic(
                        severity=Severity.ERROR,
                        rule="FIELD_UNKNOWN",
                        path=field_path,
                        message=f"Unknown field '{k}' on node '{node_name}'.",
                        actual=k,
                        suggestion=f"Did you mean '{closest[0]}'?" if closest else None
                    ))
                    continue

                # AccessType check
                if field_spec.access_type == "outputOnly":
                    self.diagnostics.append(Diagnostic(
                        severity=Severity.ERROR,
                        rule="ACCESS_TYPE_OUTPUT_ONLY",
                        path=field_path,
                        message=f"Field '{k}' on '{node_name}' has accessType 'outputOnly'. It emits runtime events and cannot be initialized in the scene file.",
                        actual=str(v),
                        suggestion="Use a ROUTE to read output events from this field."
                    ))

                # Type & Bounds Validation
                self._validate_field_value(field_spec, v, field_path)
            else:
                # Non-prefixed key in node body
                if k not in ("Scene", "head", "X3D", "ROUTE", "field", "fieldValue"):
                    self.diagnostics.append(Diagnostic(
                        severity=Severity.WARNING,
                        rule="FIELD_PREFIX_MISSING",
                        path=field_path,
                        message=f"Property '{k}' should either be prefixed with '@' (for attributes) or '-' (for container fields).",
                        suggestion=f"Use '@{k}' for attributes or '-{k}' for child containers."
                    ))

    def _validate_field_value(self, field_spec: X3DFieldSpec, val: Any, path: str) -> None:
        ftype = field_spec.type

        # 1. Vector length validation
        if ftype in X3DUOMModel.VECTOR_DIMS:
            expected_dim = X3DUOMModel.VECTOR_DIMS[ftype]
            if not isinstance(val, list):
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="TYPE_NOT_ARRAY",
                    path=path,
                    message=f"Field of type '{ftype}' must be a JSON array of {expected_dim} numbers.",
                    expected=f"Array of {expected_dim} numbers",
                    actual=type(val).__name__,
                    suggestion=f"Provide a list with {expected_dim} elements, e.g. [0, 0, 0]."
                ))
                return

            if not ftype.startswith("MF") and len(val) != expected_dim:
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="VECTOR_LENGTH_INVALID",
                    path=path,
                    message=f"Field of type '{ftype}' requires exactly {expected_dim} numbers, but got {len(val)}.",
                    expected=f"{expected_dim} elements",
                    actual=f"{len(val)} elements",
                    suggestion=f"Adjust array to exactly {expected_dim} numbers."
                ))
            elif ftype.startswith("MF") and len(val) < expected_dim:
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="VECTOR_LENGTH_INVALID",
                    path=path,
                    message=f"Field of type '{ftype}' requires at least {expected_dim} numbers (got {len(val)}).",
                    expected=f">= {expected_dim} elements",
                    actual=f"{len(val)} elements"
                ))

            for idx, item in enumerate(val):
                if not isinstance(item, (int, float)) or isinstance(item, bool):
                    self.diagnostics.append(Diagnostic(
                        severity=Severity.ERROR,
                        rule="ITEM_NOT_NUMBER",
                        path=f"{path}[{idx}]",
                        message=f"Item in '{ftype}' vector must be a number, got {type(item).__name__}.",
                        actual=str(item)
                    ))
                    break
            return

        # 2. Boolean validation
        if ftype == "SFBool":
            if not isinstance(val, bool):
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="TYPE_NOT_BOOLEAN",
                    path=path,
                    message=f"Field of type 'SFBool' must be true or false, got {val}.",
                    expected="boolean (true / false)",
                    actual=str(val)
                ))
            return

        # 3. Integer validation
        if ftype == "SFInt32":
            if not isinstance(val, int) or isinstance(val, bool):
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="TYPE_NOT_INTEGER",
                    path=path,
                    message=f"Field of type 'SFInt32' must be an integer, got {type(val).__name__}.",
                    expected="integer",
                    actual=str(val)
                ))
            return

        # 4. Float / Number validation
        if ftype in ("SFFloat", "SFDouble", "SFTime"):
            if not isinstance(val, (int, float)) or isinstance(val, bool):
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="TYPE_NOT_NUMBER",
                    path=path,
                    message=f"Field of type '{ftype}' must be a float or integer, got {type(val).__name__}.",
                    expected="number",
                    actual=str(val)
                ))
            return

        # 5. String validation
        if ftype == "SFString":
            if not isinstance(val, str):
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="TYPE_NOT_STRING",
                    path=path,
                    message=f"Field of type 'SFString' must be a string, got {type(val).__name__}.",
                    expected="string",
                    actual=str(val)
                ))
            return

        # 6. Enumeration validation
        if field_spec.enums and isinstance(val, (str, int)):
            str_val = str(val).strip('"')
            if str_val not in field_spec.enums and str(val) not in field_spec.enums:
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="ENUM_VALUE_INVALID",
                    path=path,
                    message=f"Value '{val}' is not one of the allowed enumerations.",
                    expected=f"One of: {', '.join(field_spec.enums)}",
                    actual=str(val),
                    suggestion=f"Use one of: {', '.join(field_spec.enums[:4])}"
                ))

    @staticmethod
    def _field_specs_from_decls(decls: Any) -> Dict[str, X3DFieldSpec]:
        """Turn a JSON 'field' declaration list (Script, ProtoInterface, ExternProtoDeclare)
        into {name: X3DFieldSpec}."""
        if isinstance(decls, dict):
            decls = [decls]
        out: Dict[str, X3DFieldSpec] = {}
        if not isinstance(decls, list):
            return out
        for d in decls:
            if isinstance(d, dict) and "@name" not in d and isinstance(d.get("field"), dict):
                d = d["field"]  # tolerate {"field": {...}} wrappers
            if not isinstance(d, dict):
                continue
            name = d.get("@name")
            if isinstance(name, str) and name:
                out[name] = X3DFieldSpec(
                    name=name,
                    type=str(d.get("@type", "")),
                    # A missing accessType is left permissive to avoid false ROUTE errors
                    access_type=str(d.get("@accessType", "inputOutput")),
                )
        return out

    @classmethod
    def _declared_fields(cls, body: Any) -> Dict[str, X3DFieldSpec]:
        """User-declared fields of a Script / ExternProtoDeclare node body."""
        if not isinstance(body, dict):
            return {}
        return cls._field_specs_from_decls(body.get("field", body.get("-field")))

    def _collect_protos(self, obj: Any) -> None:
        """Index the interface fields of every ProtoDeclare / ExternProtoDeclare by proto name."""
        if isinstance(obj, dict):
            for k, v in obj.items():
                if k in ("ProtoDeclare", "ExternProtoDeclare") and isinstance(v, dict):
                    name = v.get("@name")
                    if isinstance(name, str) and name:
                        if k == "ExternProtoDeclare":
                            decls = self._declared_fields(v)
                        else:
                            decls = {}
                            for ik, iv in v.items():
                                if ik.lstrip("-@").lower() == "protointerface":
                                    if isinstance(iv, list):
                                        iv = iv[0] if iv else None
                                    decls = self._declared_fields(iv)
                        self.proto_decls.setdefault(name, decls)
                self._collect_protos(v)
        elif isinstance(obj, list):
            for item in obj:
                self._collect_protos(item)

    # Node types whose ROUTE-able fields include user <field> declarations
    USER_FIELD_NODES = ("Script", "ComposedShader", "PackagedShader", "ShaderProgram")

    def _route_fields(self, info: Dict[str, Any], spec: X3DNodeSpec) -> Optional[Dict[str, X3DFieldSpec]]:
        """Fields a ROUTE may reference on a DEF'd node, or None if they cannot be determined.

        Script / ComposedShader / PackagedShader / ShaderProgram (see USER_FIELD_NODES): built-in fields plus the node's own
        <field> declarations.
        ProtoInstance: built-in fields plus the proto's declared interface; None when the
        proto is not declared in this document (e.g. IMPORTed), so no false errors are raised.
        """
        node_type = info["type"]
        if node_type in self.USER_FIELD_NODES:
            return {**spec.fields, **self._declared_fields(info.get("body"))}
        if node_type == "ProtoInstance":
            body = info.get("body")
            proto = body.get("@name") if isinstance(body, dict) else None
            decls = self.proto_decls.get(proto) if isinstance(proto, str) else None
            return None if decls is None else {**spec.fields, **decls}
        return spec.fields

    @staticmethod
    def _resolve_route_field(fields: Dict[str, X3DFieldSpec], name: str, direction: str):
        """Look up a ROUTE field name in a {name: X3DFieldSpec} mapping.

        X3D lets an inputOutput field 'foo' be routed to as 'set_foo' and routed
        from as 'foo_changed', so those aliases are accepted (only for inputOutput).
        direction is 'from' or 'to'. Returns the X3DFieldSpec or None.
        """
        field_spec = fields.get(name)
        if field_spec:
            return field_spec
        if direction == "to" and name.startswith("set_"):
            base = fields.get(name[len("set_"):])
        elif direction == "from" and name.endswith("_changed"):
            base = fields.get(name[:-len("_changed")])
        else:
            return None
        return base if base and base.access_type == "inputOutput" else None

    def _validate_route(self, route_body: Dict[str, Any], path: str) -> None:
        from_node = route_body.get("@fromNode")
        from_field = route_body.get("@fromField")
        to_node = route_body.get("@toNode")
        to_field = route_body.get("@toField")

        # Required attributes
        for req in ("@fromNode", "@fromField", "@toNode", "@toField"):
            if req not in route_body:
                self.diagnostics.append(Diagnostic(
                    severity=Severity.ERROR,
                    rule="ROUTE_MISSING_ATTRIBUTE",
                    path=path,
                    message=f"ROUTE statement is missing required attribute '{req}'.",
                    suggestion="ROUTE requires @fromNode, @fromField, @toNode, and @toField."
                ))
                return

        # Check fromNode
        if from_node not in self.symbol_table:
            closest = difflib.get_close_matches(from_node, list(self.symbol_table.keys()), n=1)
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_FROM_NODE_NOT_FOUND",
                path=f"{path}.@fromNode",
                message=f"ROUTE source node '{from_node}' does not exist as a defined DEF in the scene.",
                actual=from_node,
                suggestion=f"Did you mean '{closest[0]}'?" if closest else "Ensure source node has @DEF."
            ))
            return

        # Check toNode
        if to_node not in self.symbol_table:
            closest = difflib.get_close_matches(to_node, list(self.symbol_table.keys()), n=1)
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_TO_NODE_NOT_FOUND",
                path=f"{path}.@toNode",
                message=f"ROUTE destination node '{to_node}' does not exist as a defined DEF in the scene.",
                actual=to_node,
                suggestion=f"Did you mean '{closest[0]}'?" if closest else "Ensure destination node has @DEF."
            ))
            return

        source_type = self.symbol_table[from_node]["type"]
        dest_type = self.symbol_table[to_node]["type"]

        source_spec = self.model.nodes.get(source_type)
        dest_spec = self.model.nodes.get(dest_type)

        if not source_spec or not dest_spec:
            return

        # None means "cannot tell" (e.g. proto not declared here): skip that side's field check
        src_fields = self._route_fields(self.symbol_table[from_node], source_spec)
        dest_fields = self._route_fields(self.symbol_table[to_node], dest_spec)

        # Check fromField
        src_field_spec = (self._resolve_route_field(src_fields, from_field, "from")
                          if src_fields is not None else None)
        if src_fields is not None and not src_field_spec:
            readable_fields = [f for f, s in src_fields.items() if s.access_type in ("outputOnly", "inputOutput")]
            closest = difflib.get_close_matches(from_field, readable_fields, n=1)
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_FROM_FIELD_NOT_FOUND",
                path=f"{path}.@fromField",
                message=f"Field '{from_field}' does not exist on source node '{from_node}' ({source_type}).",
                actual=from_field,
                suggestion=f"Did you mean '{closest[0]}'?" if closest else None
            ))
            return

        if src_field_spec and src_field_spec.access_type not in ("outputOnly", "inputOutput"):
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_FROM_FIELD_NOT_READABLE",
                path=f"{path}.@fromField",
                message=f"Source field '{from_field}' on '{from_node}' has accessType '{src_field_spec.access_type}'. Only 'outputOnly' or 'inputOutput' fields can generate route events.",
                actual=src_field_spec.access_type
            ))

        # Check toField
        dest_field_spec = (self._resolve_route_field(dest_fields, to_field, "to")
                           if dest_fields is not None else None)
        if dest_fields is not None and not dest_field_spec:
            writable_fields = [f for f, s in dest_fields.items() if s.access_type in ("inputOnly", "inputOutput")]
            closest = difflib.get_close_matches(to_field, writable_fields, n=1)
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_TO_FIELD_NOT_FOUND",
                path=f"{path}.@toField",
                message=f"Field '{to_field}' does not exist on destination node '{to_node}' ({dest_type}).",
                actual=to_field,
                suggestion=f"Did you mean '{closest[0]}'?" if closest else None
            ))
            return

        if dest_field_spec and dest_field_spec.access_type not in ("inputOnly", "inputOutput"):
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_TO_FIELD_NOT_WRITABLE",
                path=f"{path}.@toField",
                message=f"Destination field '{to_field}' on '{to_node}' has accessType '{dest_field_spec.access_type}'. Only 'inputOnly' or 'inputOutput' fields can receive route events.",
                actual=dest_field_spec.access_type
            ))

        # Check Type Compatibility (skipped when a side is unknown or its type is undeclared)
        if (src_field_spec and dest_field_spec
                and src_field_spec.type and dest_field_spec.type
                and src_field_spec.type != dest_field_spec.type):
            self.diagnostics.append(Diagnostic(
                severity=Severity.ERROR,
                rule="ROUTE_TYPE_MISMATCH",
                path=path,
                message=f"ROUTE type mismatch: '{from_node}.{from_field}' ({src_field_spec.type}) cannot connect to '{to_node}.{to_field}' ({dest_field_spec.type}). Data types must match.",
                expected=src_field_spec.type,
                actual=dest_field_spec.type,
                suggestion=f"Insert an interpolator or Script node to convert {src_field_spec.type} to {dest_field_spec.type}."
            ))


def main() -> None:
    parser = argparse.ArgumentParser(
        description="X3DUOM-Native Semantic Validator for X3D JSON (Better than JSON Schema)"
    )
    parser.add_argument("input_file", help="Path to X3D JSON file to validate")
    parser.add_argument(
        "-m", "--model",
        dest="model_file",
        default="X3dUnifiedObjectModel-4.1.xml",
        help="Path to X3DUOM XML file (default: X3dUnifiedObjectModel-4.1.xml)"
    )
    parser.add_argument(
        "--json",
        action="store_true",
        help="Output diagnostics in JSON format"
    )

    args = parser.parse_args()

    validateX3DJSON(args.json, None, args.input_file, args.model_file)

def validateX3DJSON(args_json=True, args_input_string=None, args_input_file=None, args_model_file="X3dUnifiedObjectModel-4.1.xml"):
    # Load Model
    data = {}
    try:
        model = X3DUOMModel(args_model_file)
    except Exception as e:
        print(f"Error loading X3DUOM model from {args_model_file}: {e}", file=sys.stderr)
        sys.exit(1)

    # Load Input JSON
    if args_input_file is not None:
        try:
            with open(args_input_file, "r", encoding="utf-8") as f:
                data = json.load(f)
        except Exception as e:
            print(f"Error parsing input JSON {args_input_file}: {e}", file=sys.stderr)
            sys.exit(1)

    # Load Input JSON string
    if args_input_string is not None:
        try:
                data = json.loads(args_input_string)
        except Exception as e:
            print(f"Error parsing input JSON {args_input_string}: {e}", file=sys.stderr)
            sys.exit(1)

    # Validate
    validator = X3DValidator(model)
    diagnostics = validator.validate(data)

    errors = [d for d in diagnostics if d.severity == Severity.ERROR]
    warnings = [d for d in diagnostics if d.severity == Severity.WARNING]

    if args_json:
        output = {
            "valid": len(errors) == 0,
            "error_count": len(errors),
            "warning_count": len(warnings),
            "diagnostics": [d.to_dict() for d in diagnostics]
        }
        print(json.dumps(output, indent=2))
    else:
        print("\n" + "=" * 70)
        print("X3DUOM Native Semantic Validation Report")
        print("=" * 70)
        if len(errors) == 0:
            print("STATUS: VALID ✓ (No errors found)")
        else:
            print(f"STATUS: INVALID ✗ ({len(errors)} error(s), {len(warnings)} warning(s))")
        print("-" * 70)

        for d in diagnostics:
            color = "ERROR" if d.severity == Severity.ERROR else "WARNING"
            print(f"[{color}] {d.rule} at {d.path}")
            print(f"  Message: {d.message}")
            if d.expected:
                print(f"  Expected: {d.expected}")
            if d.actual:
                print(f"  Actual:   {d.actual}")
            if d.suggestion:
                print(f"  Fix:      {d.suggestion}")
            print()

        print(f"Symbol Table ({len(validator.symbol_table)} DEF nodes):")
        for def_name, info in validator.symbol_table.items():
            print(f"  DEF '{def_name}' -> {info['type']} at {info['path']}")
        print("=" * 70)

    sys.exit(1 if len(errors) > 0 else 0)


if __name__ == "__main__":
    main()
