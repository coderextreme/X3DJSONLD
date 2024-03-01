import json
import sys
from x3d import *

def parse_dict(value, class_name):
    kwargs = {}
    children = []
    for k, v in value.items():
        #print(k)
        if k in ("encoding", "@xsd:noNamespaceSchemaLocation", "JSON schema", "-children") and class_name == "X3D":
            pass
        else:
            if k in ("@class", "@style"):
                k = k+"_"
            k = k.lstrip('@').lstrip('-')
            if k in ('component', 'unit', 'meta') and class_name == 'head':
                k = "children"
            if k == "children":
                 children.append(parse_json(v, k))
            else:
                kwargs.update({k: parse_json(v, k)})
    try:
        class_obj = globals()[class_name]
        if len(children) > 0:
            kwargs.update({"children" : (children)})

        return class_obj(**kwargs)
    except TypeError:
        print(f"TypeErrror in {class_name}", file=sys.stderr)
        raise

# Parse the JSON data to create X3D Python instances
def parse_json(json_obj, class_name):
    if isinstance(json_obj, dict):
        x3dout = parse_dict(json_obj, class_name)
    elif isinstance(json_obj, list):
        x3dout = (parse_json(item, class_name) for item in json_obj)
    elif isinstance(json_obj, str):
        x3dout = json_obj
    elif isinstance(json_obj, int):
        x3dout = SFInt32(json_obj)
    elif isinstance(json_obj, bool):
        x3dout = SFBoolean(json_obj)
    elif isinstance(json_obj, float):
        x3dout = SFFloat(json_obj)
    return x3dout

# Load the JSON data (assuming it's stored in a file named 'scene.json')
with open('../data/ball.json', 'r') as file:
    json_data = json.load(file)
    newModel = parse_json(json_data["X3D"], "X3D")
    print(newModel.VRML())
