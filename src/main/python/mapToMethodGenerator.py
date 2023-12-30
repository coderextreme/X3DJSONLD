import xml.etree.ElementTree
import re
import sys

PY3 = sys.version_info[0] == 3


def isString(obj):
    if PY3:
        return isinstance(obj, str)
    else:
        return isinstance(obj, basestring)


class ClassPrinter:
    def __init__(self, node, interface):
        self.parents = interface
        self.children = []
        self.printed = False
        if isString(node):
            self.name = node
            self.node = False
        else:
            self.name = node.get("name")
            self.node = node

    def findParents(self):
        if self.node:
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                self.parents.update({ addinher.get('baseType') : 1} )
                self.parents.update(classes[addinher.get('baseType')].findParents())

            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                if inher.get('baseType') is not None:
                    self.parents.update({ inher.get('baseType') : 1} )
                    self.parents.update(classes[inher.get('baseType')].findParents())
    
            return self.parents;

    def findChildren(self):
        if self.node:
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                classes[addinher.get('baseType')].children.append(self.name)

            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                if inher.get('baseType') is not None:
                    classes[inher.get('baseType')].children.append(self.name)
    
            return self.children;

    def listChildren(self, fieldName, fieldType):
            str = ""
            if fieldName.startswith("add") or fieldName.startswith("remove"):
                return str
            if fieldType == "SFNode":
                str += '\t"' + self.name + '" : "set' + fieldName[:1].upper() + fieldName[1:] + '",\n';
            else:
                str += '\t"' + self.name + '" : "add' + fieldName[:1].upper() + fieldName[1:] + '",\n';
            for child in self.children:
               str += classes[child].listChildren(fieldName, fieldType)
            return str;

    def listParents(self, fieldName, fieldType):
            str = ""
            if fieldName.startswith("add") or fieldName.startswith("remove"):
                return str
            if fieldType == "SFNode":
                str += '\t"' + self.name + '" : "set' + fieldName[:1].upper() + fieldName[1:] + '",\n';
            else:
                str += '\t"' + self.name + '" : "add' + fieldName[:1].upper() + fieldName[1:] + '",\n';
            for parent in self.parents:
               str += classes[parent].listParents(fieldName, fieldType)
            return str;

    def printClass(self):
        str = ""
        if self.printed:
            return str
        for parent in self.parents:
            try:
                str += classes[parent].printClass()
            except:
                pass
        str += '"'+self.name+'" : {\n'
        if self.node:
            fields = self.node.iter("field")
            for field in fields:
                if field.get("type") == "MFNode" or field.get("type") == "SFNode":
                    if field.get("acceptableNodeTypes"):
                        acnts = field.get("acceptableNodeTypes").split("|")
                        for acnt in acnts:
                            str += classes[acnt].listChildren(field.get("name"), field.get("type"))
                            str += classes[acnt].listParents(field.get("name"), field.get("type"))
        str += '},\n'
        self.printed = True
        return str

code = "var mapToMethod = {"

soup = xml.etree.ElementTree.parse(open("../../specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()

classes = {}

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, {})

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {})
classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {})

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, {})

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, { "X3DConcreteNode" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteNode"].children.append(cn.get("name"))
    classes["X3DChildNode"].children.append(cn.get("name"))

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, { "X3DConcreteStatement" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteStatement"].children.append(st.get("name"))
    classes["X3DChildNode"].children.append(st.get("name"))

for k,v in classes.items():
    v.findChildren()

for k,v in classes.items():
    v.findParents()

for k,v in classes.items():
    code += v.printClass()

code += "}\n"

code += "module.exports = mapToMethod;\n"

f = open("../node/mapToMethod.js", "w")
f.write(code)
f.close()
