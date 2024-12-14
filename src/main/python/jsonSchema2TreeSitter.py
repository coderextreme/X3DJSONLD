import json
import re
from typing import Dict, Any, Union, List

class JSONSchemaToTreeSitterConverter:
    def __init__(self):
        self.grammar_rules = []
        self.type_mappings = {
            'string': 'string',
            'number': 'number',
            'integer': 'number',
            'boolean': 'boolean',
            'null': 'null',
            'array': 'array',
            'object': 'object'
        }

    def _sanitize_identifier(self, name: str) -> str:
        sanitized = re.sub(r'\W+', '_', name)
        if not re.match(r'^[a-zA-Z_]', sanitized):
            sanitized = f'_{sanitized}'
        return sanitized.lower()

    def _generate_primitive_rule(self, type_name: str) -> str:
        primitive_mappings = {
            'string': r'token(/[a-zA-Z0-9_]+/)',
            'number': r'token(/\d+(\.\d+)?/)',
            'boolean': r'token(/(true|false)/)',
            'null': r'token(/null/)'
        }
        return primitive_mappings.get(type_name, 'token()')

    def _process_object_schema(self, schema: Dict[str, Any], name: str) -> List[str]:
        object_rules = []
        type_name = self._sanitize_identifier(name)
        required_props = schema.get('required', [])
        properties = schema.get('properties', {})
        object_rule = f'{type_name} : $ => seq('
        prop_rules = []
        for prop_name, prop_schema in properties.items():
            prop_type = self._resolve_schema_type(prop_schema)
            prop_rule_name = self._sanitize_identifier(f'{type_name}_{prop_name}')
            is_required = prop_name in required_props
            prop_rule = self._generate_property_rule(prop_schema, prop_rule_name, prop_type, is_required)
            prop_rules.extend(prop_rule)
            object_rule += f'{prop_rule_name}, '
        object_rule = object_rule.rstrip(', ') + ')'
        object_rules.append(object_rule)
        object_rules.extend(prop_rules)
        return object_rules

    def _resolve_schema_type(self, schema: Union[Dict[str, Any], List[Dict[str, Any]]]) -> str:
        if isinstance(schema, list):
            return schema[0].get('type', 'any')
        if '$ref' in schema:
            return self._sanitize_identifier(schema['$ref'].split('/')[-1])
        return schema.get('type', 'any')

    def _generate_property_rule(self, schema: Dict[str, Any], rule_name: str, type_name: str, is_required: bool = False) -> List[str]:
        prop_rules = []
        if type_name == 'object':
            object_rules = self._process_object_schema(schema, rule_name)
            prop_rules.extend(object_rules)
            prop_rule = f'{rule_name} : $ => {self._sanitize_identifier(rule_name)}'
        elif type_name == 'array':
            items_schema = schema.get('items', {})
            items_type = self._resolve_schema_type(items_schema)
            items_rule_name = f'{rule_name}_items'
            array_item_rules = self._generate_property_rule(items_schema, items_rule_name, items_type)
            prop_rules.extend(array_item_rules)
            prop_rule = f'{rule_name} : $ => repeat({items_rule_name})'
        else:
            prop_rule = f'{rule_name} : $ => {self._generate_primitive_rule(type_name)}'
        if not is_required:
            prop_rule = f'{rule_name} : $ => optional({prop_rule})'
        prop_rules.append(prop_rule)
        return prop_rules

    def convert(self, json_schema: Dict[str, Any]) -> str:
        self.grammar_rules = []
        root_type = self._resolve_schema_type(json_schema)
        root_name = self._sanitize_identifier(json_schema.get('title', 'root'))
        root_rules = self._generate_property_rule(json_schema, root_name, root_type)
        full_grammar = "module.exports = grammar({{\n{}\n}});".format('\n'.join(root_rules))
        return full_grammar

def main():
    example_schema = {
        "title": "X3D V4.0 JSON Schema",
        "type": "object",
        "properties": {
            "X3D": {
                "$ref": "#/$defs/X3D"
            }
        },
        "required": ["X3D"],
        "additionalProperties": False,
        "$defs": {
            "-childStatements": {
                "description": "Comments and ROUTEs",
                "type": "array",
                "minItems": 1,
                "items": {
                    "type": "object",
                    "properties": {
                        "#comment": {"type": "string"},
                        "ROUTE": {"$ref": "#/$defs/ROUTE"},
                        "IMPORT": {"$ref": "#/$defs/IMPORT"},
                        "ProtoDeclare": {"$ref": "#/$defs/ProtoDeclare"},
                        "ExternProtoDeclare": {"$ref": "#/$defs/ExternProtoDeclare"},
                        "EXPORT": {"$ref": "#/$defs/EXPORT"}
                    },
                    "additionalProperties": False
                }
            },
            "AcousticProperties": {
                "type": "object",
                "oneOf": [
                    {
                        "type": "object",
                        "properties": {
                            "@class": {"type": "string"},
                            "@USE": {"type": "string"},
                            "-children": {
                                "type": "array",
                                "minItems": 1,
                                "items": {
                                    "type": "object",
                                    "properties": {
                                        "#comment": {"type": "string"}
                                    },
                                    "additionalProperties": False
                                }
                            }
                        },
                        "required": ["@USE"],
                        "additionalProperties": False
                    },
                    {
                        "type": "object",
                        "properties": {
                            "-children": {"$ref": "#/$defs/-childStatements"},
                            "@absorption": {"type": "number"},
                            "@description": {"type": "string"},
                            "@diffuse": {"type": "number"},
                            "@enabled": {"type": "boolean"},
                            "IS": {"$ref": "#/$defs/IS"},
                            "-metadata": {"$ref": "#/$defs/-X3DMetadataObjectSFNode"},
                            "@refraction": {"type": "number"},
                            "@specular": {"type": "number"},
                            "@DEF": {"type": "string"},
                            "@class": {"type": "string"},
                            "@id": {"type": "string"},
                            "@style": {"type": "string"}
                        },
                        "additionalProperties": False
                    }
                ]
            },
            "-X3DChildNode-X3DMetadataObject-LayerSetMFNode": {
                "type": "array",
                "minItems": 1,
                "items": {
                    "type": "object",
                    "properties": {
                        "#comment": {"type": "string"},
                        "EXPORT": {"$ref": "#/$defs/EXPORT"},
                        "ExternProtoDeclare": {"$ref": "#/$defs/ExternProtoDeclare"},
                        "IMPORT": {"$ref": "#/$defs/IMPORT"},
                        "MetadataInteger": {"$ref": "#/$defs/MetadataInteger"},
                        "MetadataSet": {"$ref": "#/$defs/MetadataSet"},
                        "MetadataString": {"$ref": "#/$defs/MetadataString"},
                        "LayerSet": {"$ref": "#/$defs/LayerSet"}
                    },
                    "additionalProperties": False
                }
            }
        }
    }
    converter = JSONSchemaToTreeSitterConverter()
    tree_sitter_grammar = converter.convert(example_schema)
    print(tree_sitter_grammar)

if __name__ == "__main__":
    main()
