import os
import sys
from jsonschema import validate
import json

# validate the X3D Resources examples with draft 2020-12 JSON schema
# validate one instance "instance" against X3D JSON Schema 4.0
def validate_one40(schema, instance):
    v = []
    errors = []

    v = validate(instance=instance, schema=schema)
    try:
        errors = sorted(v.iter_errors(instance), key=lambda e: e.path)
        for error in errors:
            print(error.message)
    except:
        pass

for base, directories, filenames in list(os.walk("/c/Users/jcarl/www.web3d.org/x3d/content/examples")):
    for filename in filenames:
        if filename.endswith(".json"):
            fullpath = os.path.join(base, filename)
            try:
                f = open(fullpath, "r")
                instance = json.load(f)
                f.close()
                print("jsonValid", end=" ")
            except:
                print("jsonInvalid", end=" ")


            schemapre = "jwc"
            #try:
            with open('../schema/x3d-4.0-JSONSchema.json', 'r') as schemafile:
                schema = json.load(schemafile)
                validate_one40(schema, instance)
                print(f"{schemapre}Valid", end=" ")
           # except:
           #    print(f"{schemapre}Invalid", end=" ")



            schemapre = "db"
            #try:
            #with open('../schema/X3dXml4.0SchemaConvertedToJson2020-12Schema.json', 'r') as schemafile:
            #    schema = json.load(schemafile)
            #    validate_one40(schema, instance)
            #    print(f"{schemapre}Valid", end=" ")
            #except:
            #    print(f"{schemapre}Invalid", end=" ")

            print(fullpath)
