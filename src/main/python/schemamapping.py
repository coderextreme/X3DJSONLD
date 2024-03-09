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

    def printClass(self):
        s = ""
        if not self.printed:
            self.printed = True
            for parent in self.parents:
                try:
                    s += classes[parent].printClass()
                except:
                    pass
            s += "<tr>"
            s += "<td>"
            s += self.name
            s += "</td>"
            s += "<td>"
            s += "<pre>"
            if self.node:
                s += "XML "
                nodes = soup.findall(".//AbstractNodeType[@name='"+self.name+"']")
                for node in nodes:
                    s += str(xml.etree.ElementTree.tostring(node, encoding='utf8')).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot").replace("\\'", "&apos;").replace("\\n", "<br>")
                nodes = soup.findall(".//AbstractObjectType[@name='"+self.name+"']")
                for node in nodes:
                    s += str(xml.etree.ElementTree.tostring(node, encoding='utf8')).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot").replace("\\'", "&apos;").replace("\\n", "<br>")
                nodes = soup.findall(".//ConcreteNode[@name='"+self.name+"']")
                for node in nodes:
                    s += str(xml.etree.ElementTree.tostring(node, encoding='utf8')).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot").replace("\\'", "&apos;").replace("\\n", "<br>")
                nodes = soup.findall(".//Statement[@name='"+self.name+"']")
                for node in nodes:
                    s += str(xml.etree.ElementTree.tostring(node, encoding='utf8')).replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace('"', "&quot").replace("\\'", "&apos;").replace("\\n", "<br>")
            else:
                s += "None"
            s += "</pre>"
            s += "</td>"
            s += "<td>"
            s += "<pre>"
            if self.name in x3duom['$defs']:
                s += "JSON "
                s += '"'+self.name+'": '
                s += json.dumps(x3duom['$defs'][self.name], indent=2)
            else:
                s += "None"
            s += "</pre>"
            s += "</td>"
            s += "</tr>\n"
        return s

with open('../schema/x3d-4.0-JSONSchema.json') as json_data:
    x3duom = json.load(json_data)


soup = xml.etree.ElementTree.parse(sys.stdin).getroot()

classes = {}
regex = {}
containerFields = {}
code = ""

code += """<!DOCTYPE html>
<html>
<head>
</head>
<body>
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
    code += v.printClass()

for k,v in containerFields.items():
    code += v

code += """
</body>
</html>
"""
f = sys.stdout
f.write(code)
f.close()
