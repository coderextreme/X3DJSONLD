# Usage:  python3 x3djsonld.py [ file.json ] # optional file, assumes ../data/abox.json if not specified
print("#", end="")
import json
import sys
from x3d import *

def parseArray(parent, data, indent=0):
    out = ""
    els = 0
    for d in data:
        if els > 0:
                out += (",")
        els += 1
        if isinstance(d, dict):
            if not d.get("#comment"):
                out += parseObject(False, parent, d,indent+1)
            else:
                out += "#" + d.get("#comment") + "\n"
                els = 0
        else:
            if isinstance(d, str):
                out += "'"
                out += d
                out += "'"
            else:
                out +=  str(d)
    return out

def parseObject(nonewline, parent, data,indent=0):
    out = "\n"+(("  ")*indent)
    if nonewline:
        out = ""
    els = 0
    if els == 0:
        ndent = 0
    else:
        ndent = 1
    if parent in ("meta", "component", "field", "fieldValue", "connect"):
        out += parent+"("
    for k,v in data.items():
        if k in ("encoding", "@xsd:noNamespaceSchemaLocation", "JSON schema"):
            continue
        if els > 0:
            out += (", ")
            ndent = 0
        else:
            ndent = 0
        els += 1
        key = k
        if k.startswith("@") or k.startswith("-"):
            key = k[1:]
        if k.startswith("#"):
            out +=  "\n"*ndent+(("  ")*ndent)+ "#" + str(v) +  "\n"+(("  ")*2)+"\n"+(("  ")*2)
            els = 0
        elif isinstance(v, dict):
            if key in ("head"):
                out += "\n"*ndent+(("  ")*ndent)+key+"="+key+"("
                out += "\n"*ndent+(("  ")*(ndent+1))+"children=["
                out += parseObject(False, k, v,indent+2)
                out += "]"
                out += ")"
            elif key in ("Scene", "IS", "ProtoBody", "ProtoInterface"):
                out += "\n"*ndent+(("  ")*ndent)+key+"="+key+"("
                out += parseObject(False, k, v,indent+1)
                out += ")"
            elif key in ("geometry", "appearance", "material", "texture", "fontStyle"):
                out += "\n"*ndent+(("  ")*ndent)+key+"="
                out += parseObject(True, k, v,indent+1)
            else:
                out += "\n"*ndent+(("  ")*ndent)+key+"("
                out += parseObject(False, k, v,indent+1)
                out += ")"
        elif isinstance(v, list):  # JSON array is parsed as list, may need to convert
            if key in ("keyValue", "key", "children", "url", "justify", "string", "field", "fieldValue", "connect"):
                out += "\n"*ndent+(("  ")*ndent)+key
                out += "=["
                out += parseArray(k, v,indent+1)
                out += "]"
            elif key in ("meta", "component"):
                # don't put out enclosing object around the array
                out += parseArray(k, v,indent+1)
            else:
                # x3d.py expects a tuple, convert
                out +=  "\n"*ndent+(("  ")*ndent)+key
                out += "=("
                out += parseArray(k, v,indent+1)
                out += ")"
        elif isinstance(v, str):
            out +=  "\n"*ndent+(("  ")*ndent)+str(key) + "='" + v + "'"
        else:
            # assume tuple
            out +=  "\n"*ndent+(("  ")*ndent)+str(key) + "=" + str(v)
    if parent in ("meta", "component", "field", "fieldValue", "connect"):
        out += ")"
    return out


with open('../data/abox.json' if len(sys.argv) == 1 else sys.argv[1], encoding="utf-8") as json_file:
    data = json.load(json_file)
    print("from x3d import *")
    print("print(", end="")
    print(parseObject(False, "X3D", data))
    print(".XML())")
