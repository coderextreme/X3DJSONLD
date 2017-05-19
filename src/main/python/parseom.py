from bs4 import BeautifulSoup
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
            self.name = node["name"]
            self.node = node

    def findParents(self):
        if self.node:
            inhers = self.node.find_all("Inheritance")
            for inher in inhers:
                self.parents.update({ inher['baseType'] : 1} )
                self.parents.update(classes[inher['baseType']].findParents())
    
            addinhers = self.node.find_all("AdditionalInheritance")
            for addinher in addinhers:
                self.parents.update({ addinher['baseType'] : 1} )
                self.parents.update(classes[addinher['baseType']].findParents())

            return self.parents;

    def findChildren(self):
        if self.node:
            inhers = self.node.find_all("Inheritance")
            for inher in inhers:
                classes[inher['baseType']].children.append(self.name)
    
            addinhers = self.node.find_all("AdditionalInheritance")
            for addinher in addinhers:
                classes[addinher['baseType']].children.append(self.name)

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
            fields = self.node.find_all("field")
            for field in fields:
                if field["type"] == "MFNode" or field["type"] == "SFNode":
                    acnts = field["acceptableNodeTypes"].split("|")
                    for acnt in acnts:
                        str += classes[acnt].listChildren(field["name"], field["type"])
                        str += classes[acnt].listParents(field["name"], field["type"])
        str += '},\n'
        self.printed = True
        return str

code = "var mapToMethod = {"

soup = BeautifulSoup(open("../../specifications/X3DObjectModel-3.3.xml"), "xml")

classes = {}

ants = soup.find_all("AbstractNodeType")
for ant in ants:
    classes[ant['name']] = ClassPrinter(ant, {})

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {})
classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {})

aots = soup.find_all("AbstractObjectType")
for aot in aots:
    classes[aot['name']] = ClassPrinter(aot, {})

cns = soup.find_all("ConcreteNode")
for cn in cns:
    classes[cn['name']] = ClassPrinter(cn, { "X3DConcreteNode" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteNode"].children.append(cn["name"])
    classes["X3DChildNode"].children.append(cn["name"])

sts = soup.find_all("Statement")
for st in sts:
    classes[st['name']] = ClassPrinter(st, { "X3DConcreteStatement" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteStatement"].children.append(st["name"])
    classes["X3DChildNode"].children.append(st["name"])

for k,v in classes.items():
    v.findChildren()

for k,v in classes.items():
    v.findParents()

for k,v in classes.items():
    code += v.printClass()

code += "};"

code  += "if (typeof module === 'object')  {\n";
code  += "    module.exports = mapToMethod;\n";
code  += "}\n";

f = open("../node/mapToMethod.js", "w")
f.write(code)
f.close()
