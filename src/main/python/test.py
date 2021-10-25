import os
from jsonschema import validate
import json


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
    def validate_with_schemas(self, entryPath, schemas, pres):
        result = [ "jsonSkipped", "jwcSkipped", "dbSkipped"]

        try:
            result[0] = "jsonDidNotParse"
            instance = self.load_json("x3d", entryPath)
            result[0] = "jsonParsed"
            for si in range(len(schemas)):
                result[si+1] = pres[si]+"Invalid"
                validate(schema=schemas[si], instance=instance)
                result[si+1] = pres[si]+"Valid"
        except:
            pass
        print(result[0], result[1], result[2], end=" ")

    def fileList(self, dirpath):
        for base, directories, filenames in list(os.walk(dirpath)):
            for filename in filenames:
                if filename.endswith(".json"):
                    fullpath = os.path.join(base, filename)
                    yield fullpath



if __name__ == "__main__":
    X3DJSONValidator = ValidateX3DJSON()
    pre = ["jwc", "db"]
    metaschema = X3DJSONValidator.load_json("meta", "../schema/2020-12-JSONSchema.json")
    schemafiles = ('../schema/x3d-4.0-JSONSchema.json', '../schema/X3dXml4.0SchemaConvertedToJson2020-12Schema.json')
    schemas = []
    for s in range(len(schemafiles)):
        schemas.append(X3DJSONValidator.load_json(pre[s], schemafiles[s]))
        validate(schema=metaschema, instance=schemas[s])
    for entryPath in X3DJSONValidator.fileList("/c/x3d-code/www.web3d.org/x3d/content/examples"):
        X3DJSONValidator.validate_with_schemas(entryPath, schemas, pre)
        print(entryPath)
