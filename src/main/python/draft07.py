VERSION = "2.15.1"
import re, pickle
from fastjsonschema import JsonSchemaValueException


REGEX_PATTERNS = pickle.loads(b"\x80\x04\x95\x93\x00\x00\x00\x00\x00\x00\x00}\x94(\x8c\x18uri-reference_re_pattern\x94\x8c\x02re\x94\x8c\x08_compile\x94\x93\x94\x8c'^(\\w+:(\\/?\\/?))?[^#\\\\\\s]*(#[^\\\\\\s]*)?\\Z\x94K \x86\x94R\x94\x8c\x0euri_re_pattern\x94h\x04\x8c\x15^\\w+:(\\/?\\/?)[^\\s]+\\Z\x94K \x86\x94R\x94u.")

NoneType = type(None)

def validate_http___json_schema_org_draft_07_schema(data):
    if not isinstance(data, (dict, bool)):
        raise JsonSchemaValueException("data must be object or boolean", value=data, name="data", definition={'$schema': 'http://json-schema.org/draft-07/schema#', '$id': 'http://json-schema.org/draft-07/schema#', 'title': 'Core schema meta-schema', 'definitions': {'schemaArray': {'type': 'array', 'minItems': 1, 'items': {'$ref': 'http://json-schema.org/draft-07/schema'}}, 'nonNegativeInteger': {'type': 'integer', 'minimum': 0}, 'nonNegativeIntegerDefault0': {'allOf': [{'$ref': '#/definitions/nonNegativeInteger'}, {'default': 0}]}, 'simpleTypes': {'enum': ['array', 'boolean', 'integer', 'null', 'number', 'object', 'string']}, 'stringArray': {'type': 'array', 'items': {'type': 'string'}, 'uniqueItems': True, 'default': []}}, 'type': ['object', 'boolean'], 'properties': {'$id': {'type': 'string', 'format': 'uri-reference'}, '$schema': {'type': 'string', 'format': 'uri'}, '$ref': {'type': 'string', 'format': 'uri-reference'}, '$comment': {'type': 'string'}, 'title': {'type': 'string'}, 'description': {'type': 'string'}, 'default': True, 'readOnly': {'type': 'boolean', 'default': False}, 'writeOnly': {'type': 'boolean', 'default': False}, 'examples': {'type': 'array', 'items': True}, 'multipleOf': {'type': 'number', 'exclusiveMinimum': 0}, 'maximum': {'type': 'number'}, 'exclusiveMaximum': {'type': 'number'}, 'minimum': {'type': 'number'}, 'exclusiveMinimum': {'type': 'number'}, 'maxLength': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/nonNegativeInteger'}, 'minLength': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/nonNegativeIntegerDefault0'}, 'pattern': {'type': 'string', 'format': 'regex'}, 'additionalItems': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'items': {'anyOf': [{'$ref': '#'}, {'$ref': '#/definitions/schemaArray'}], 'default': True}, 'maxItems': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/nonNegativeInteger'}, 'minItems': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/nonNegativeIntegerDefault0'}, 'uniqueItems': {'type': 'boolean', 'default': False}, 'contains': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'maxProperties': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/nonNegativeInteger'}, 'minProperties': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/nonNegativeIntegerDefault0'}, 'required': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/stringArray'}, 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'definitions': {'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'default': {}}, 'properties': {'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'default': {}}, 'patternProperties': {'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'propertyNames': {'format': 'regex'}, 'default': {}}, 'dependencies': {'type': 'object', 'additionalProperties': {'anyOf': [{'$ref': '#'}, {'$ref': '#/definitions/stringArray'}]}}, 'propertyNames': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'const': True, 'enum': {'type': 'array', 'items': True, 'minItems': 1, 'uniqueItems': True}, 'type': {'anyOf': [{'$ref': '#/definitions/simpleTypes'}, {'type': 'array', 'items': {'$ref': '#/definitions/simpleTypes'}, 'minItems': 1, 'uniqueItems': True}]}, 'format': {'type': 'string'}, 'contentMediaType': {'type': 'string'}, 'contentEncoding': {'type': 'string'}, 'if': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'then': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'else': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'allOf': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/schemaArray'}, 'anyOf': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/schemaArray'}, 'oneOf': {'$ref': 'http://json-schema.org/draft-07/schema#/definitions/schemaArray'}, 'not': {'$ref': 'http://json-schema.org/draft-07/schema'}}, 'default': True}, rule='type')
    data_is_dict = isinstance(data, dict)
    if data_is_dict:
        data_keys = set(data.keys())
        if "$id" in data_keys:
            data_keys.remove("$id")
            data__id = data["$id"]
            if not isinstance(data__id, (str)):
                raise JsonSchemaValueException("data.$id must be string", value=data__id, name="data.$id", definition={'type': 'string', 'format': 'uri-reference'}, rule='type')
            if isinstance(data__id, str):
                if not REGEX_PATTERNS["uri-reference_re_pattern"].match(data__id):
                    raise JsonSchemaValueException("data.$id must be uri-reference", value=data__id, name="data.$id", definition={'type': 'string', 'format': 'uri-reference'}, rule='format')
        if "$schema" in data_keys:
            data_keys.remove("$schema")
            data__schema = data["$schema"]
            if not isinstance(data__schema, (str)):
                raise JsonSchemaValueException("data.$schema must be string", value=data__schema, name="data.$schema", definition={'type': 'string', 'format': 'uri'}, rule='type')
            if isinstance(data__schema, str):
                if not REGEX_PATTERNS["uri_re_pattern"].match(data__schema):
                    raise JsonSchemaValueException("data.$schema must be uri", value=data__schema, name="data.$schema", definition={'type': 'string', 'format': 'uri'}, rule='format')
        if "$ref" in data_keys:
            data_keys.remove("$ref")
            data__ref = data["$ref"]
            if not isinstance(data__ref, (str)):
                raise JsonSchemaValueException("data.$ref must be string", value=data__ref, name="data.$ref", definition={'type': 'string', 'format': 'uri-reference'}, rule='type')
            if isinstance(data__ref, str):
                if not REGEX_PATTERNS["uri-reference_re_pattern"].match(data__ref):
                    raise JsonSchemaValueException("data.$ref must be uri-reference", value=data__ref, name="data.$ref", definition={'type': 'string', 'format': 'uri-reference'}, rule='format')
        if "$comment" in data_keys:
            data_keys.remove("$comment")
            data__comment = data["$comment"]
            if not isinstance(data__comment, (str)):
                raise JsonSchemaValueException("data.$comment must be string", value=data__comment, name="data.$comment", definition={'type': 'string'}, rule='type')
        if "title" in data_keys:
            data_keys.remove("title")
            data__title = data["title"]
            if not isinstance(data__title, (str)):
                raise JsonSchemaValueException("data.title must be string", value=data__title, name="data.title", definition={'type': 'string'}, rule='type')
        if "description" in data_keys:
            data_keys.remove("description")
            data__description = data["description"]
            if not isinstance(data__description, (str)):
                raise JsonSchemaValueException("data.description must be string", value=data__description, name="data.description", definition={'type': 'string'}, rule='type')
        if "default" in data_keys:
            data_keys.remove("default")
            data__default = data["default"]
        if "readOnly" in data_keys:
            data_keys.remove("readOnly")
            data__readOnly = data["readOnly"]
            if not isinstance(data__readOnly, (bool)):
                raise JsonSchemaValueException("data.readOnly must be boolean", value=data__readOnly, name="data.readOnly", definition={'type': 'boolean', 'default': False}, rule='type')
        else: data["readOnly"] = False
        if "writeOnly" in data_keys:
            data_keys.remove("writeOnly")
            data__writeOnly = data["writeOnly"]
            if not isinstance(data__writeOnly, (bool)):
                raise JsonSchemaValueException("data.writeOnly must be boolean", value=data__writeOnly, name="data.writeOnly", definition={'type': 'boolean', 'default': False}, rule='type')
        else: data["writeOnly"] = False
        if "examples" in data_keys:
            data_keys.remove("examples")
            data__examples = data["examples"]
            if not isinstance(data__examples, (list, tuple)):
                raise JsonSchemaValueException("data.examples must be array", value=data__examples, name="data.examples", definition={'type': 'array', 'items': True}, rule='type')
        if "multipleOf" in data_keys:
            data_keys.remove("multipleOf")
            data__multipleOf = data["multipleOf"]
            if not isinstance(data__multipleOf, (int, float)) or isinstance(data__multipleOf, bool):
                raise JsonSchemaValueException("data.multipleOf must be number", value=data__multipleOf, name="data.multipleOf", definition={'type': 'number', 'exclusiveMinimum': 0}, rule='type')
            if isinstance(data__multipleOf, (int, float)):
                if data__multipleOf <= 0:
                    raise JsonSchemaValueException("data.multipleOf must be bigger than 0", value=data__multipleOf, name="data.multipleOf", definition={'type': 'number', 'exclusiveMinimum': 0}, rule='exclusiveMinimum')
        if "maximum" in data_keys:
            data_keys.remove("maximum")
            data__maximum = data["maximum"]
            if not isinstance(data__maximum, (int, float)) or isinstance(data__maximum, bool):
                raise JsonSchemaValueException("data.maximum must be number", value=data__maximum, name="data.maximum", definition={'type': 'number'}, rule='type')
        if "exclusiveMaximum" in data_keys:
            data_keys.remove("exclusiveMaximum")
            data__exclusiveMaximum = data["exclusiveMaximum"]
            if not isinstance(data__exclusiveMaximum, (int, float)) or isinstance(data__exclusiveMaximum, bool):
                raise JsonSchemaValueException("data.exclusiveMaximum must be number", value=data__exclusiveMaximum, name="data.exclusiveMaximum", definition={'type': 'number'}, rule='type')
        if "minimum" in data_keys:
            data_keys.remove("minimum")
            data__minimum = data["minimum"]
            if not isinstance(data__minimum, (int, float)) or isinstance(data__minimum, bool):
                raise JsonSchemaValueException("data.minimum must be number", value=data__minimum, name="data.minimum", definition={'type': 'number'}, rule='type')
        if "exclusiveMinimum" in data_keys:
            data_keys.remove("exclusiveMinimum")
            data__exclusiveMinimum = data["exclusiveMinimum"]
            if not isinstance(data__exclusiveMinimum, (int, float)) or isinstance(data__exclusiveMinimum, bool):
                raise JsonSchemaValueException("data.exclusiveMinimum must be number", value=data__exclusiveMinimum, name="data.exclusiveMinimum", definition={'type': 'number'}, rule='type')
        if "maxLength" in data_keys:
            data_keys.remove("maxLength")
            data__maxLength = data["maxLength"]
            validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeinteger(data__maxLength)
        if "minLength" in data_keys:
            data_keys.remove("minLength")
            data__minLength = data["minLength"]
            validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeintegerdefault0(data__minLength)
        if "pattern" in data_keys:
            data_keys.remove("pattern")
            data__pattern = data["pattern"]
            if not isinstance(data__pattern, (str)):
                raise JsonSchemaValueException("data.pattern must be string", value=data__pattern, name="data.pattern", definition={'type': 'string', 'format': 'regex'}, rule='type')
            if isinstance(data__pattern, str):
                try:
                    re.compile(data__pattern)
                except Exception:
                    raise JsonSchemaValueException("data.pattern must be a valid regex", value=data__pattern, name="data.pattern", definition={'type': 'string', 'format': 'regex'}, rule='format')
        if "additionalItems" in data_keys:
            data_keys.remove("additionalItems")
            data__additionalItems = data["additionalItems"]
            validate_http___json_schema_org_draft_07_schema(data__additionalItems)
        if "items" in data_keys:
            data_keys.remove("items")
            data__items = data["items"]
            data__items_any_of_count = 0
            if not data__items_any_of_count:
                try:
                    validate_http___json_schema_org_draft_07_schema(data__items)
                    data__items_any_of_count += 1
                except JsonSchemaValueException: pass
            if not data__items_any_of_count:
                try:
                    validate_http___json_schema_org_draft_07_schema__definitions_schemaarray(data__items)
                    data__items_any_of_count += 1
                except JsonSchemaValueException: pass
            if not data__items_any_of_count:
                raise JsonSchemaValueException("data.items must be valid by one of anyOf definition", value=data__items, name="data.items", definition={'anyOf': [{'$ref': '#'}, {'$ref': '#/definitions/schemaArray'}], 'default': True}, rule='anyOf')
        else: data["items"] = True
        if "maxItems" in data_keys:
            data_keys.remove("maxItems")
            data__maxItems = data["maxItems"]
            validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeinteger(data__maxItems)
        if "minItems" in data_keys:
            data_keys.remove("minItems")
            data__minItems = data["minItems"]
            validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeintegerdefault0(data__minItems)
        if "uniqueItems" in data_keys:
            data_keys.remove("uniqueItems")
            data__uniqueItems = data["uniqueItems"]
            if not isinstance(data__uniqueItems, (bool)):
                raise JsonSchemaValueException("data.uniqueItems must be boolean", value=data__uniqueItems, name="data.uniqueItems", definition={'type': 'boolean', 'default': False}, rule='type')
        else: data["uniqueItems"] = False
        if "contains" in data_keys:
            data_keys.remove("contains")
            data__contains = data["contains"]
            validate_http___json_schema_org_draft_07_schema(data__contains)
        if "maxProperties" in data_keys:
            data_keys.remove("maxProperties")
            data__maxProperties = data["maxProperties"]
            validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeinteger(data__maxProperties)
        if "minProperties" in data_keys:
            data_keys.remove("minProperties")
            data__minProperties = data["minProperties"]
            validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeintegerdefault0(data__minProperties)
        if "required" in data_keys:
            data_keys.remove("required")
            data__required = data["required"]
            validate_http___json_schema_org_draft_07_schema__definitions_stringarray(data__required)
        if "additionalProperties" in data_keys:
            data_keys.remove("additionalProperties")
            data__additionalProperties = data["additionalProperties"]
            validate_http___json_schema_org_draft_07_schema(data__additionalProperties)
        if "definitions" in data_keys:
            data_keys.remove("definitions")
            data__definitions = data["definitions"]
            if not isinstance(data__definitions, (dict)):
                raise JsonSchemaValueException("data.definitions must be object", value=data__definitions, name="data.definitions", definition={'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'default': {}}, rule='type')
            data__definitions_is_dict = isinstance(data__definitions, dict)
            if data__definitions_is_dict:
                data__definitions_keys = set(data__definitions.keys())
                for data__definitions_key in data__definitions_keys:
                    if data__definitions_key not in []:
                        data__definitions_value = data__definitions.get(data__definitions_key)
                        validate_http___json_schema_org_draft_07_schema(data__definitions_value)
        else: data["definitions"] = {}
        if "properties" in data_keys:
            data_keys.remove("properties")
            data__properties = data["properties"]
            if not isinstance(data__properties, (dict)):
                raise JsonSchemaValueException("data.properties must be object", value=data__properties, name="data.properties", definition={'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'default': {}}, rule='type')
            data__properties_is_dict = isinstance(data__properties, dict)
            if data__properties_is_dict:
                data__properties_keys = set(data__properties.keys())
                for data__properties_key in data__properties_keys:
                    if data__properties_key not in []:
                        data__properties_value = data__properties.get(data__properties_key)
                        validate_http___json_schema_org_draft_07_schema(data__properties_value)
        else: data["properties"] = {}
        if "patternProperties" in data_keys:
            data_keys.remove("patternProperties")
            data__patternProperties = data["patternProperties"]
            if not isinstance(data__patternProperties, (dict)):
                raise JsonSchemaValueException("data.patternProperties must be object", value=data__patternProperties, name="data.patternProperties", definition={'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'propertyNames': {'format': 'regex'}, 'default': {}}, rule='type')
            data__patternProperties_is_dict = isinstance(data__patternProperties, dict)
            if data__patternProperties_is_dict:
                data__patternProperties_keys = set(data__patternProperties.keys())
                for data__patternProperties_key in data__patternProperties_keys:
                    if data__patternProperties_key not in []:
                        data__patternProperties_value = data__patternProperties.get(data__patternProperties_key)
                        validate_http___json_schema_org_draft_07_schema(data__patternProperties_value)
                data__patternProperties_len = len(data__patternProperties)
                if data__patternProperties_len != 0:
                    data__patternProperties_property_names = True
                    for data__patternProperties_key in data__patternProperties:
                        try:
                            if isinstance(data__patternProperties_key, str):
                                try:
                                    re.compile(data__patternProperties_key)
                                except Exception:
                                    raise JsonSchemaValueException("data.patternProperties must be a valid regex", value=data__patternProperties_key, name="data.patternProperties", definition={'format': 'regex'}, rule='format')
                        except JsonSchemaValueException:
                            data__patternProperties_property_names = False
                    if not data__patternProperties_property_names:
                        raise JsonSchemaValueException("data.patternProperties must be named by propertyName definition", value=data__patternProperties, name="data.patternProperties", definition={'type': 'object', 'additionalProperties': {'$ref': 'http://json-schema.org/draft-07/schema'}, 'propertyNames': {'format': 'regex'}, 'default': {}}, rule='propertyNames')
        else: data["patternProperties"] = {}
        if "dependencies" in data_keys:
            data_keys.remove("dependencies")
            data__dependencies = data["dependencies"]
            if not isinstance(data__dependencies, (dict)):
                raise JsonSchemaValueException("data.dependencies must be object", value=data__dependencies, name="data.dependencies", definition={'type': 'object', 'additionalProperties': {'anyOf': [{'$ref': '#'}, {'$ref': '#/definitions/stringArray'}]}}, rule='type')
            data__dependencies_is_dict = isinstance(data__dependencies, dict)
            if data__dependencies_is_dict:
                data__dependencies_keys = set(data__dependencies.keys())
                for data__dependencies_key in data__dependencies_keys:
                    if data__dependencies_key not in []:
                        data__dependencies_value = data__dependencies.get(data__dependencies_key)
                        data__dependencies_value_any_of_count = 0
                        if not data__dependencies_value_any_of_count:
                            try:
                                validate_http___json_schema_org_draft_07_schema(data__dependencies_value)
                                data__dependencies_value_any_of_count += 1
                            except JsonSchemaValueException: pass
                        if not data__dependencies_value_any_of_count:
                            try:
                                validate_http___json_schema_org_draft_07_schema__definitions_stringarray(data__dependencies_value)
                                data__dependencies_value_any_of_count += 1
                            except JsonSchemaValueException: pass
                        if not data__dependencies_value_any_of_count:
                            raise JsonSchemaValueException(""+"data.dependencies.{data__dependencies_key}".format(**locals())+" must be valid by one of anyOf definition", value=data__dependencies_value, name=""+"data.dependencies.{data__dependencies_key}".format(**locals())+"", definition={'anyOf': [{'$ref': '#'}, {'$ref': '#/definitions/stringArray'}]}, rule='anyOf')
        if "propertyNames" in data_keys:
            data_keys.remove("propertyNames")
            data__propertyNames = data["propertyNames"]
            validate_http___json_schema_org_draft_07_schema(data__propertyNames)
        if "const" in data_keys:
            data_keys.remove("const")
            data__const = data["const"]
        if "enum" in data_keys:
            data_keys.remove("enum")
            data__enum = data["enum"]
            if not isinstance(data__enum, (list, tuple)):
                raise JsonSchemaValueException("data.enum must be array", value=data__enum, name="data.enum", definition={'type': 'array', 'items': True, 'minItems': 1, 'uniqueItems': True}, rule='type')
            data__enum_is_list = isinstance(data__enum, (list, tuple))
            if data__enum_is_list:
                data__enum_len = len(data__enum)
                if data__enum_len < 1:
                    raise JsonSchemaValueException("data.enum must contain at least 1 items", value=data__enum, name="data.enum", definition={'type': 'array', 'items': True, 'minItems': 1, 'uniqueItems': True}, rule='minItems')
                if data__enum_len > len(set(str(data__enum_x) for data__enum_x in data__enum)):
                    raise JsonSchemaValueException("data.enum must contain unique items", value=data__enum, name="data.enum", definition={'type': 'array', 'items': True, 'minItems': 1, 'uniqueItems': True}, rule='uniqueItems')
        if "type" in data_keys:
            data_keys.remove("type")
            data__type = data["type"]
            data__type_any_of_count = 0
            if not data__type_any_of_count:
                try:
                    validate_http___json_schema_org_draft_07_schema__definitions_simpletypes(data__type)
                    data__type_any_of_count += 1
                except JsonSchemaValueException: pass
            if not data__type_any_of_count:
                try:
                    if not isinstance(data__type, (list, tuple)):
                        raise JsonSchemaValueException("data.type must be array", value=data__type, name="data.type", definition={'type': 'array', 'items': {'$ref': '#/definitions/simpleTypes'}, 'minItems': 1, 'uniqueItems': True}, rule='type')
                    data__type_is_list = isinstance(data__type, (list, tuple))
                    if data__type_is_list:
                        data__type_len = len(data__type)
                        if data__type_len < 1:
                            raise JsonSchemaValueException("data.type must contain at least 1 items", value=data__type, name="data.type", definition={'type': 'array', 'items': {'$ref': '#/definitions/simpleTypes'}, 'minItems': 1, 'uniqueItems': True}, rule='minItems')
                        if data__type_len > len(set(str(data__type_x) for data__type_x in data__type)):
                            raise JsonSchemaValueException("data.type must contain unique items", value=data__type, name="data.type", definition={'type': 'array', 'items': {'$ref': '#/definitions/simpleTypes'}, 'minItems': 1, 'uniqueItems': True}, rule='uniqueItems')
                        for data__type_x, data__type_item in enumerate(data__type):
                            validate_http___json_schema_org_draft_07_schema__definitions_simpletypes(data__type_item)
                    data__type_any_of_count += 1
                except JsonSchemaValueException: pass
            if not data__type_any_of_count:
                raise JsonSchemaValueException("data.type must be valid by one of anyOf definition", value=data__type, name="data.type", definition={'anyOf': [{'$ref': '#/definitions/simpleTypes'}, {'type': 'array', 'items': {'$ref': '#/definitions/simpleTypes'}, 'minItems': 1, 'uniqueItems': True}]}, rule='anyOf')
        if "format" in data_keys:
            data_keys.remove("format")
            data__format = data["format"]
            if not isinstance(data__format, (str)):
                raise JsonSchemaValueException("data.format must be string", value=data__format, name="data.format", definition={'type': 'string'}, rule='type')
        if "contentMediaType" in data_keys:
            data_keys.remove("contentMediaType")
            data__contentMediaType = data["contentMediaType"]
            if not isinstance(data__contentMediaType, (str)):
                raise JsonSchemaValueException("data.contentMediaType must be string", value=data__contentMediaType, name="data.contentMediaType", definition={'type': 'string'}, rule='type')
        if "contentEncoding" in data_keys:
            data_keys.remove("contentEncoding")
            data__contentEncoding = data["contentEncoding"]
            if not isinstance(data__contentEncoding, (str)):
                raise JsonSchemaValueException("data.contentEncoding must be string", value=data__contentEncoding, name="data.contentEncoding", definition={'type': 'string'}, rule='type')
        if "if" in data_keys:
            data_keys.remove("if")
            data__if = data["if"]
            validate_http___json_schema_org_draft_07_schema(data__if)
        if "then" in data_keys:
            data_keys.remove("then")
            data__then = data["then"]
            validate_http___json_schema_org_draft_07_schema(data__then)
        if "else" in data_keys:
            data_keys.remove("else")
            data__else = data["else"]
            validate_http___json_schema_org_draft_07_schema(data__else)
        if "allOf" in data_keys:
            data_keys.remove("allOf")
            data__allOf = data["allOf"]
            validate_http___json_schema_org_draft_07_schema__definitions_schemaarray(data__allOf)
        if "anyOf" in data_keys:
            data_keys.remove("anyOf")
            data__anyOf = data["anyOf"]
            validate_http___json_schema_org_draft_07_schema__definitions_schemaarray(data__anyOf)
        if "oneOf" in data_keys:
            data_keys.remove("oneOf")
            data__oneOf = data["oneOf"]
            validate_http___json_schema_org_draft_07_schema__definitions_schemaarray(data__oneOf)
        if "not" in data_keys:
            data_keys.remove("not")
            data__not = data["not"]
            validate_http___json_schema_org_draft_07_schema(data__not)
    return data

def validate_http___json_schema_org_draft_07_schema__definitions_simpletypes(data):
    if data not in ['array', 'boolean', 'integer', 'null', 'number', 'object', 'string']:
        raise JsonSchemaValueException("data must be one of ['array', 'boolean', 'integer', 'null', 'number', 'object', 'string']", value=data, name="data", definition={'enum': ['array', 'boolean', 'integer', 'null', 'number', 'object', 'string']}, rule='enum')
    return data

def validate_http___json_schema_org_draft_07_schema__definitions_stringarray(data):
    if not isinstance(data, (list, tuple)):
        raise JsonSchemaValueException("data must be array", value=data, name="data", definition={'type': 'array', 'items': {'type': 'string'}, 'uniqueItems': True, 'default': []}, rule='type')
    data_is_list = isinstance(data, (list, tuple))
    if data_is_list:
        data_len = len(data)
        if data_len > len(set(str(data_x) for data_x in data)):
            raise JsonSchemaValueException("data must contain unique items", value=data, name="data", definition={'type': 'array', 'items': {'type': 'string'}, 'uniqueItems': True, 'default': []}, rule='uniqueItems')
        for data_x, data_item in enumerate(data):
            if not isinstance(data_item, (str)):
                raise JsonSchemaValueException(""+"data[{data_x}]".format(**locals())+" must be string", value=data_item, name=""+"data[{data_x}]".format(**locals())+"", definition={'type': 'string'}, rule='type')
    return data

def validate_http___json_schema_org_draft_07_schema__definitions_schemaarray(data):
    if not isinstance(data, (list, tuple)):
        raise JsonSchemaValueException("data must be array", value=data, name="data", definition={'type': 'array', 'minItems': 1, 'items': {'$ref': 'http://json-schema.org/draft-07/schema'}}, rule='type')
    data_is_list = isinstance(data, (list, tuple))
    if data_is_list:
        data_len = len(data)
        if data_len < 1:
            raise JsonSchemaValueException("data must contain at least 1 items", value=data, name="data", definition={'type': 'array', 'minItems': 1, 'items': {'$ref': 'http://json-schema.org/draft-07/schema'}}, rule='minItems')
        for data_x, data_item in enumerate(data):
            validate_http___json_schema_org_draft_07_schema(data_item)
    return data

def validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeintegerdefault0(data):
    validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeinteger(data)
    return data

def validate_http___json_schema_org_draft_07_schema__definitions_nonnegativeinteger(data):
    if not isinstance(data, (int)) and not (isinstance(data, float) and data.is_integer()) or isinstance(data, bool):
        raise JsonSchemaValueException("data must be integer", value=data, name="data", definition={'type': 'integer', 'minimum': 0}, rule='type')
    if isinstance(data, (int, float)):
        if data < 0:
            raise JsonSchemaValueException("data must be bigger than or equal to 0", value=data, name="data", definition={'type': 'integer', 'minimum': 0}, rule='minimum')
    return data
