from jsonschema import validate
import json
import sys

# validate stdin against the 2020-12 JSON schema

try:
    instance = json.loads(sys.stdin.read())
    with open('../schema/2020-12-JSONSchema.json', 'r') as schemafile:
        schema = json.load(schemafile)
        validate(instance=instance, schema=schema)
        sys.stdout.write("Valid ")
except:
        sys.stdout.write("Invalid ")
sys.stdout.flush()
