import xml.etree.ElementTree as ET
import sys
import json

PY3 = sys.version_info[0] == 3


def isString(obj):
    if PY3:
        return isinstance(obj, str)
    else:
        return isinstance(obj, basestring)

def recurse(node, parent):
    object = {}
    fields = {}
    cf = "-children"
    oldcf = cf
    children = []
    for attrib,value in node.attrib.items():
        fields['@'+attrib] = value
    if node.text and node.text.strip():
        object["#sourceCode"] = node.text.strip().split("\n")
    for element in node:
        try:
            if element.attrib["containerField"]:
                cf = '-'+element.attrib["containerField"]
                children = []
        except:
            pass
        if element.tag == "head":
            cf = element.tag
            children = {}
        if element.tag == "meta" or element.tag == "unit" or element.tag == "component" or element.tag == "field" or element.tag == "fieldValue" or element.tag == "connect" or element.tag == "ROUTE":
            cf = element.tag
            if (oldcf != cf):
                children = []
        if element.tag == "Scene":
            cf = "Scene"
            children = {}
        try:
            children.append(recurse(element, node))
        except:
            fields[element.tag] = recurse(element, node)
        if children:
            fields[cf] = children
        oldcf = cf
    if children:
        fields[cf] = children
    if node.tag == "meta" or node.tag == "unit" or node.tag == "component" or node.tag == "field" or node.tag == "fieldValue" or node.tag == "connect" or node.tag == "ROUTE" or node.tag == "head" or node.tag == "Scene":
        object = fields
    else:
        object[node.tag] =  fields
    if node.tail and node.tail.strip():
        object["#sourceCode"] = node.tail.strip().split("\n")
    return object

soup = ET.parse("../data/flowers.x3d").getroot()

f = open('foo.json', 'w')
json.dump(recurse(soup, None), f, indent=2)
f.close()

