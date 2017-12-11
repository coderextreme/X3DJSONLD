import xml.etree.ElementTree
import sys
import json

PY3 = sys.version_info[0] == 3


def isString(obj):
    if PY3:
        return isinstance(obj, str)
    else:
        return isinstance(obj, basestring)

def recurse(node):
    object = {}
    fields = {}
    children = []
    for attrib,value in node.attrib.items():
        fields['@'+attrib] = value
    if node.text and node.text.strip():
        children.append(node.text.strip())
    for element in node:
        children.append(recurse(element))
    if node.tail and node.tail.strip():
        children.append(node.tail.strip())
    if children:
        fields["-children"] = children
    object[node.tag] =  fields
    return object

soup = xml.etree.ElementTree.parse("../data/flowers.x3d").getroot()

f = open('foo.json', 'w')
json.dump(recurse(soup), f, indent=2)
f.close()

