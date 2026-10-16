#!/usr/bin/env python3
"""
x3d_to_glb_interactivity.py

Practical X3D XML -> GLB converter bootstrap.

What it does:
  * Uses trimesh's X3D importer for geometry/materials/transforms supported by
    the installed trimesh version.
  * Writes a binary GLB.
  * Adds KHR_interactivity to the GLB JSON chunk.
  * Preserves X3D DEF/USE/ROUTE/Sensor/Interpolator/Script inventory in extras
    so unsupported semantics are not silently lost.
  * Creates a valid-shaped, empty behavior graph when no operations can safely
    be lowered. This is deliberately NOT presented as executable ROUTE
    translation: X3D ROUTEs need semantic/type analysis and target-runtime
    mappings before they can be translated correctly.

Install:
    python -m pip install trimesh pygltflib

Usage:
    python x3d_to_glb_interactivity.py input.x3d output.glb
    python x3d_to_glb_interactivity.py input.x3d output.glb --strict

Notes:
  * X3D import support depends on the installed trimesh version and optional
    dependencies. Check the report JSON emitted beside the GLB.
  * Arbitrary X3D Script ECMAScript, external Inline/IMPORT/EXPORT, and many
    sensors cannot be translated portably into KHR_interactivity.
  * This file uses a GLB JSON-chunk rewrite so unknown glTF extensions and
    existing glTF JSON properties are preserved.
"""
from __future__ import annotations

import argparse
import json
import math
import struct
import sys
import xml.etree.ElementTree as ET
from pathlib import Path
from typing import Any

GLB_MAGIC = 0x46546C67
JSON_CHUNK = 0x4E4F534A
BIN_CHUNK = 0x004E4942
KHR = "KHR_interactivity"


def local_name(tag: str) -> str:
    return tag.rsplit("}", 1)[-1]


def parse_x3d_inventory(x3d_path: Path) -> dict[str, Any]:
    """Collects behavior/source metadata without claiming semantic conversion."""
    root = ET.parse(x3d_path).getroot()
    defs: dict[str, str] = {}
    uses: list[dict[str, str]] = []
    routes: list[dict[str, str]] = []
    nodes: list[dict[str, Any]] = []
    scripts: list[dict[str, Any]] = []
    warnings: list[str] = []

    for elem in root.iter():
        tag = local_name(elem.tag)
        attrs = dict(elem.attrib)
        if "DEF" in attrs:
            defs[attrs["DEF"]] = tag
        if "USE" in attrs:
            uses.append({"nodeType": tag, "USE": attrs["USE"]})
        if tag == "ROUTE":
            routes.append({
                "fromNode": attrs.get("fromNode", ""),
                "fromField": attrs.get("fromField", ""),
                "toNode": attrs.get("toNode", ""),
                "toField": attrs.get("toField", ""),
            })
        if tag in {
            "TimeSensor", "TouchSensor", "PlaneSensor", "CylinderSensor",
            "SphereSensor", "ProximitySensor", "VisibilitySensor",
            "Collision", "PositionInterpolator", "OrientationInterpolator",
            "ScalarInterpolator", "ColorInterpolator", "CoordinateInterpolator",
            "NormalInterpolator", "BooleanFilter", "BooleanSequencer",
            "IntegerSequencer", "Script", "Switch", "BooleanToggle",
            "BooleanTrigger", "IntegerTrigger", "TimeTrigger",
        }:
            record = {"type": tag, "DEF": attrs.get("DEF")}
            # Keep source attributes for diagnostics/possible later lowering.
            record["attributes"] = attrs
            nodes.append(record)
        if tag == "Script":
            scripts.append({
                "DEF": attrs.get("DEF"),
                "url": attrs.get("url", ""),
                "directOutput": attrs.get("directOutput", ""),
                "mustEvaluate": attrs.get("mustEvaluate", ""),
                "sourceTextPresent": bool((elem.text or "").strip()),
            })

    for route in routes:
        if route["fromNode"] not in defs:
            warnings.append(f"ROUTE source DEF not found: {route['fromNode']}")
        if route["toNode"] not in defs:
            warnings.append(f"ROUTE target DEF not found: {route['toNode']}")

    return {
        "source": x3d_path.name,
        "defs": defs,
        "uses": uses,
        "routes": routes,
        "behaviorNodes": nodes,
        "scripts": scripts,
        "warnings": warnings,
        "conversionNotes": [
            "ROUTE inventory is preserved as metadata; ROUTEs are not yet executable KHR_interactivity connections.",
            "X3D Script source is not translated to KHR_interactivity because arbitrary ECMAScript is not portable.",
            "Check geometry, coordinate-system, and material conversion in the target runtime.",
        ],
    }


def read_glb(path: Path) -> tuple[dict[str, Any], bytes | None]:
    raw = path.read_bytes()
    if len(raw) < 12:
        raise ValueError("GLB is shorter than the 12-byte header")
    magic, version, total_length = struct.unpack_from("<III", raw, 0)
    if magic != GLB_MAGIC or version != 2 or total_length != len(raw):
        raise ValueError("Invalid GLB header or length")
    offset = 12
    doc = None
    binary = None
    while offset < len(raw):
        if offset + 8 > len(raw):
            raise ValueError("Truncated GLB chunk header")
        length, chunk_type = struct.unpack_from("<II", raw, offset)
        offset += 8
        chunk = raw[offset:offset + length]
        if len(chunk) != length:
            raise ValueError("Truncated GLB chunk")
        offset += length
        if chunk_type == JSON_CHUNK:
            doc = json.loads(chunk.decode("utf-8").rstrip(" \t\r\n\0"))
        elif chunk_type == BIN_CHUNK:
            binary = chunk
    if doc is None:
        raise ValueError("GLB has no JSON chunk")
    return doc, binary


def write_glb(path: Path, doc: dict[str, Any], binary: bytes | None) -> None:
    json_bytes = json.dumps(doc, separators=(",", ":"), ensure_ascii=False).encode("utf-8")
    json_bytes += b" " * ((4 - len(json_bytes) % 4) % 4)
    chunks = [struct.pack("<II", len(json_bytes), JSON_CHUNK), json_bytes]
    if binary is not None:
        binary = binary + b"\0" * ((4 - len(binary) % 4) % 4)
        chunks.extend([struct.pack("<II", len(binary), BIN_CHUNK), binary])
    total = 12 + sum(map(len, chunks))
    path.write_bytes(struct.pack("<III", GLB_MAGIC, 2, total) + b"".join(chunks))


def add_interactivity(doc: dict[str, Any], inventory: dict[str, Any]) -> None:
    """Adds extension metadata and an empty graph; never invents false behavior."""
    extensions_used = doc.setdefault("extensionsUsed", [])
    if KHR not in extensions_used:
        extensions_used.append(KHR)

    # An empty graph is intentional when no behavior can safely be lowered.
    # The source ROUTE graph is retained under extras for a subsequent lowering
    # pass; putting raw ROUTEs into `nodes` would make an invalid extension.
    interactivity = doc.setdefault("extensions", {}).setdefault(KHR, {})
    graphs = interactivity.setdefault("graphs", [])
    graph = {
        "extras": {
            "sourceFormat": "X3D",
            "sourceBehaviorInventory": inventory,
            "status": "metadata-preserved; executable lowering not yet implemented",
        }
    }
    if not graphs:
        graphs.append(graph)
        interactivity.setdefault("graph", 0)
    else:
        # Preserve existing graphs, append this conversion's source inventory.
        doc.setdefault("extras", {}).setdefault("x3dInteractivitySources", []).append(
            inventory
        )


def main() -> int:
    parser = argparse.ArgumentParser(description="Convert X3D XML to GLB and preserve interactivity metadata.")
    parser.add_argument("input_x3d", type=Path)
    parser.add_argument("output_glb", type=Path)
    parser.add_argument(
        "--strict", action="store_true",
        help="fail if X3D contains ROUTEs or behavior nodes that this bootstrap cannot execute",
    )
    args = parser.parse_args()

    if not args.input_x3d.is_file():
        parser.error(f"Input file does not exist: {args.input_x3d}")

    try:
        inventory = parse_x3d_inventory(args.input_x3d)
    except (ET.ParseError, OSError) as exc:
        print(f"ERROR: cannot parse X3D XML: {exc}", file=sys.stderr)
        return 2

    behavior_count = len(inventory["routes"]) + len(inventory["behaviorNodes"])
    if args.strict and behavior_count:
        print(
            f"STRICT: found {len(inventory['routes'])} ROUTEs and "
            f"{len(inventory['behaviorNodes'])} behavior nodes; this bootstrap "
            "does not yet lower them into executable KHR_interactivity operations.",
            file=sys.stderr,
        )
        return 3

    try:
        import trimesh
    except ImportError:
        print("ERROR: install trimesh: python -m pip install trimesh pygltflib", file=sys.stderr)
        return 4

    try:
        scene = trimesh.load(str(args.input_x3d), file_type="x3d", force="scene", process=False)
        if not isinstance(scene, trimesh.Scene):
            scene = trimesh.Scene(scene)
        # Export via trimesh, then patch the GLB JSON chunk to add the extension.
        exported = scene.export(file_type="glb")
        args.output_glb.parent.mkdir(parents=True, exist_ok=True)
        args.output_glb.write_bytes(exported)
        doc, binary = read_glb(args.output_glb)
        doc.setdefault("asset", {}).setdefault("extras", {})["x3dSource"] = args.input_x3d.name
        add_interactivity(doc, inventory)
        write_glb(args.output_glb, doc, binary)
    except Exception as exc:
        print(f"ERROR: conversion failed: {type(exc).__name__}: {exc}", file=sys.stderr)
        print("Some X3D geometry/import features may not be supported by trimesh's X3D loader.", file=sys.stderr)
        return 5

    report_path = args.output_glb.with_suffix(".conversion-report.json")
    report_path.write_text(json.dumps(inventory, indent=2, ensure_ascii=False), encoding="utf-8")
    print(f"GLB written: {args.output_glb}")
    print(f"Report written: {report_path}")
    print(f"X3D DEFs: {len(inventory['defs'])}")
    print(f"USE references: {len(inventory['uses'])}")
    print(f"ROUTEs preserved in report/extension extras: {len(inventory['routes'])}")
    print(f"Behavior nodes inventoried: {len(inventory['behaviorNodes'])}")
    if behavior_count:
        print("WARNING: KHR_interactivity graph contains metadata only; behavior execution is not yet translated.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
