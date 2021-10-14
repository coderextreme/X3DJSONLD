from jsonschema import validate
import json
import sys


try:
    instance = json.loads(sys.stdin.read())
    sys.stdout.write("jsonValid ")
except:
    sys.stdout.write("jsonInvalid ")

# validate stdin against the X3D4 JSON schemas

try:
    with open('../schema/x3d-4.0-JSONSchema.json', 'r') as schemafile:
        schema = json.load(schemafile)
        validate(instance=instance, schema=schema)
        sys.stdout.write("jwcValid ")
except:
        sys.stdout.write("jwcInvalid ")
sys.stdout.flush()

try:
    with open('../schema/X3dXml4.0SchemaConvertedToJson2020-12Schema.json', 'r') as schemafile:
        schema = json.load(schemafile)
        validate(instance=instance, schema=schema)
        sys.stdout.write("dbValid ")
except:
        sys.stdout.write("dbInvalid ")
sys.stdout.flush()
