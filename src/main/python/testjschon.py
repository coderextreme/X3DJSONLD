import os
from jschon import create_catalog, JSON, JSONSchema
import json

create_catalog('2020-12')

# validate the X3D Resources examples with draft 2020-12 JSON schema
# validate one instance "instance" against X3D JSON Schema 4.0

class ValidateX3DJSON:
    # load a JSON file called jsonname into obj

    def load_json(self, jsonpre, jsonname):
        try:
            with open(jsonname, 'r') as jsonfile:
                obj = json.load(jsonfile)
                jsonfile.close()
                return obj
        except:
            print(f"{jsonpre}JsonInvalid", end=" ")
            return None

    # validate instance against two schemas
    def validate_with_schemas(self, entryPath, schemas, pre):
        result = [ "jsonSkipped", "jwcSkipped"]

        result[0] = "jsonDidNotParse"
        instance = JSON(self.load_json("x3d", entryPath))
        # print(str(instance))
        result[0] = "jsonParsed"
        for si in range(len(schemas)):
            result[si+1] = pre+"Invalid"
            try:
                schemas[si].evaluate(instance)
                result[si+1] = pre+"Valid"
            except:
                pass
        print(result[0], result[1], end=" ")

    def fileList(self, dirpath):
        for base, directories, filenames in list(os.walk(dirpath)):
            for filename in filenames:
                # print(filename)
                if filename.endswith(".json"):
                    fullpath = os.path.join(base, filename)
                    yield fullpath



if __name__ == "__main__":
    X3DJSONValidator = ValidateX3DJSON()
    pre = "jwc"
    metaschema = JSONSchema(X3DJSONValidator.load_json("meta", "../schema/2020-12-JSONSchema.json"))
    schemafile = '../schema/x3d-4.0-JSONSchema.json'
    schemas = []
    schemas.append(JSONSchema(X3DJSONValidator.load_json(pre, schemafile)))
    try:
        metaschema.evaluate(schemas[0])
        print("Valid "+schemafile)
    except:
        print("Invalid "+schemafile)
    for entryPath in X3DJSONValidator.fileList("C:/Users/jcarl/www.web3d.org/x3d/content/examples"):
        X3DJSONValidator.validate_with_schemas(entryPath, schemas, pre)
        print(entryPath)
