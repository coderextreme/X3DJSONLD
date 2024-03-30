import xml.etree.ElementTree
import sys
import re
import json

PY3 = sys.version_info[0] == 3


def isString(obj):
    if PY3:
        return isinstance(obj, str)
    else:
        return isinstance(obj, basestring)

class ClassPrinter:
    def __init__(self, node, interface, hasIS):
        self.parents = interface
        self.children = {}
        self.printed = False
        self.hasIS = hasIS
        if isString(node):
            self.name = node
            self.node = None
        else:
            self.name = node.get("name")
            self.node = node

    def findParents(self):
        if self.node is not None:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                self.parents.update({ inher.get('baseType') : 1} )
                if inher.get('baseType'):
                    self.parents.update(classes[inher.get('baseType')].findParents())
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                self.parents.update({ addinher.get('baseType') : 1} )
                self.parents.update(classes[addinher.get('baseType')].findParents())

            return self.parents

    def findChildren(self):
        if self.node is not None:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                if inher.get('baseType'):
                    classes[inher.get('baseType')].children[self.name] = self.name
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                classes[addinher.get('baseType')].children[self.name] = self.name

            return self.children

    def printProperty(self, prop, field, schema, soup):
        fieldname = field.get('name')
        s = ""
        s += "<td style='border: 1px solid black;'>"
        # print(self.node)
        if self.node:
            s += fieldname
            s += "<pre>"
            s += "XML "
            # s += str(fieldname).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot;").replace("\\'", "&apos;").replace("\\n", "<br>")
            s += str(xml.etree.ElementTree.tostring(field, encoding='utf8')).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot;").replace("\\'", "&apos;").replace("\\n", "<br>")
            s += "</pre>"
        s += "<br>"
        s += "<pre>"
        s += "JSON "
        s += '"'+prop+'": '
        s += json.dumps(schema['properties'][prop], indent=2)
        # print(prop+" "+fieldname+" processing "+s)
        s += "</pre>"
        s += "</td>"
        return s;

    def printSchema(self, field, schema, soup):
        s = ""
        fieldname = field.get('name')
        if 'properties' in schema:
            for prop in schema['properties']:
                if prop == "@"+fieldname or prop == "-"+fieldname or prop == "#"+fieldname or prop == fieldname:
                    s += "<tr style='border: 1px solid black;'>"
                    s += self.printProperty(prop, field, schema, soup)
                    s += "</tr>\n"
                elif prop.startswith("@") or prop.startswith("-") or prop.startswith("#"):
                    pass # Unequal
                else:
                    # print("Unhandled "+prop+" "+fieldname)
                    pass
        #else:
        #    print("Unhandled schema for "+self.name+"."+fieldname+" "+str(schema))
        if 'items' in schema:
            s += "<tr style='border: 1px solid black;'>"
            s += "<td style='border: 1px solid black;'>"
            s += "</td>"
            s += self.name+" appears multiple times, with the following attributes, see JSON above.  "
            s += "</td>"
            s += "</tr>\n"
            s += self.printSchema(field, schema['items'], soup)
        return s

    def printNode(self, soup):
        s = ""
        s += "<tr style='border: 1px solid black;'>"
        s += "<td style='border: 1px solid black;'>"
        s += self.name
        s += "</td>"
        s += "</tr>\n"
        if self.node:
            # note that only one of these should return a non-NUL string
            for nodeType in [ "AbstractNodeType", "AbstractObjectType", "ConcreteNode", "Statement" ]:
                # print(nodeType)
                nodes = soup.findall(".//"+nodeType+"[@name='"+self.name+"']")
                for node in nodes:
                    s += "<tr style='border: 1px solid black;'>"
                    s += "<td style='border: 1px solid black;'>"
                    s += "XML "
                    s += "<pre>"
                    s += str(xml.etree.ElementTree.tostring(node, encoding='utf8')).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot;").replace("\\'", "&apos;").replace("\\n", "<br>")
                    s += "</pre>"
                    s += "</td>"
                    s += "</tr>\n"
                    if self.name in x3duom['$defs']:
                        s += "<tr style='border: 1px solid black;'>"
                        s += "<td style='border: 1px solid black;'>"
                        s += "<pre>"
                        s += "JSON "
                        s += '"'+self.name+'": '
                        s += json.dumps(x3duom['$defs'][self.name], indent=2)
                        s += "</pre>"
                        s += "</td>"
                        s += "</tr>\n"
                    s += "<tr style='border: 1px solid black;'>"
                    s += "<td style='border: 1px solid black;'>"
                    s += "<table style='border: 1px solid black;'>"
                    fields = node.findall(".//field")
                    for field in fields:
                        fieldname = field.get('name')
                        # print(fieldname)
                        if self.name in x3duom['$defs']:
                            if 'oneOf' in x3duom['$defs'][self.name]:
                                for schema in x3duom['$defs'][self.name]['oneOf']:
                                    s += self.printSchema(field, schema, soup)
                            else:
                                schema = x3duom['$defs'][self.name]
                                s += self.printSchema(field, schema, soup)
                        else:
                            #s += "None"
                            pass
                    s += "</table>\n"
                    s += "</td>"
                    s += "</tr>\n"
        return s

    def printClass(self, soup):
        s = ""
        if not self.printed:
            self.printed = True
            for parent in self.parents:
                try:
                    s += classes[parent].printClass(soup)
                except:
                    pass
            s += self.printNode(soup)
        return s

def printNodeDefs(soup):
    s = ""
    schema = x3duom['$defs']
    for defs in schema:
        if defs.startswith("-") or defs.startswith("@"):
            s += "<tr style='border: 1px solid black;'>"
            s += "<td style='border: 1px solid black;'>"
            s += "<pre>"
            s += "JSONEX "
            s += '"'+defs+'": '
            s += json.dumps(schema[defs], indent=2)
            s += "</pre>"
            s += "</td>"
            s += "</tr>\n"
    return s


with open('../schema/x3d-4.0-JSONSchema.json') as json_data:
    x3duom = json.load(json_data)


soup = xml.etree.ElementTree.parse(open("../../specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()

classes = {}
regex = {}
code = ""

code += """<!DOCTYPE html>
<html>
<head>
</head>
<body>
<table style="border: 1px solid black;">
"""

fts = soup.iter("FieldType")
for ft in fts:
    if ft.get('regex') != "":
        regex[ft.get('type')] = ft.get('regex')

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, {}, True)

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {}, True)
classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {}, False)

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, {}, False)

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, { "X3DConcreteNode" : 1 }, True)
    classes["X3DConcreteNode"].children[cn.get("name")] = cn.get("name")
    # classes["X3DChildNode"].children[cn.get("name")] = cn.get("name")

sts = soup.iter("Statement")
for st in sts:
    if st.get("name") in ["ExternProtoDeclare", "ProtoDeclare", "IMPORT", "EXPORT", "ROUTE" ]:
        classes[st.get('name')] = ClassPrinter(st, { "X3DConcreteStatement" : 1, "X3DChildNode" : 1 }, False)
        classes["X3DChildNode"].children[st.get("name")] = st.get("name")
    else:
        classes[st.get('name')] = ClassPrinter(st, { "X3DConcreteStatement" : 1 }, False)
    classes["X3DConcreteStatement"].children[st.get("name")] = st.get("name")

for k,v in classes.items():
    v.findChildren()

for k,v in classes.items():
    v.findParents()

for k,v in classes.items():
    code += v.printClass(soup)

code += printNodeDefs(soup)

code += """\n
</table>
</body>
</html>
"""
f = sys.stdout
f.write(code)
f.close()
