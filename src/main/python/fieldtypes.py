from bs4 import BeautifulSoup

class ClassPrinter:
    def __init__(self, node, metaInfo):
        self.node = node
        self.parents = []
        inhers = self.node.find_all("Inheritance")
        for inher in inhers:
            self.parents.append(inher['baseType'])
        addinhers = self.node.find_all("AdditionalInheritance")
        for addinher in addinhers:
            self.parents.append(addinher['baseType'])
        self.metaInfo = metaInfo
        self.printed = False

    def printClass(self):
        str = ""
        if self.printed:
            return str
        for parent in self.parents:
            try:
                str += classes[parent].printClass()
            except:
                pass
        str += '"'+self.node['name']+'" : {\n'
        fields = self.node.find_all("field")
        for field in fields:
            str += '\t"' + field["name"] + '" : "'+field["type"]+'",\n';
        str += '},\n'
        self.printed = True
        return str

code = "var fieldTypes = {"

soup = BeautifulSoup(open("../../specifications/X3DObjectModel-3.3.xml"), "xml")

classes = {}

ants = soup.find_all("AbstractNodeType")
for ant in ants:
    classes[ant['name']] = ClassPrinter(ant, "")

aots = soup.find_all("AbstractObjectType")
for aot in aots:
    classes[aot['name']] = ClassPrinter(aot, "")

cns = soup.find_all("ConcreteNode")
for cn in cns:
    classes[cn['name']] = ClassPrinter(cn, "Object")

sts = soup.find_all("Statement")
for st in sts:
    classes[st['name']] = ClassPrinter(st, "Object")

for k,v in classes.items():
    code += v.printClass()

code += "};"

code  += "if (typeof module === 'object')  {\n";
code  += "    module.exports = fieldTypes;\n";
code  += "}\n";

f = open("../node/fieldTypes.js", "w")
f.write(code)
f.close()
