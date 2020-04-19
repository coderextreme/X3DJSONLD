import xml.etree.ElementTree

class ClassPrinter:
    def __init__(self, node, metaInfo):
        self.node = node
        self.parents = []
        addinhers = self.node.iter("AdditionalInheritance")
        for addinher in addinhers:
            self.parents.append(addinher.get('baseType'))
        inhers = self.node.iter("Inheritance")
        for inher in inhers:
            self.parents.append(inher.get('baseType'))
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
        str += '"'+self.node.get('name')+'" : {\n'
        fields = self.node.iter("field")
        for field in fields:
            str += '\t"' + field.get("name") + '" : "'+field.get("type")+'",\n';
        str += '},\n'
        self.printed = True
        return str

code = "var fieldTypes = {"

soup = xml.etree.ElementTree.parse(open("../../specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()

classes = {}

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, "")

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, "")

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, "Object")

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, "Object")

for k,v in classes.items():
    code += v.printClass()

code += "};"

code  += "if (typeof module === 'object')  {\n";
code  += "    module.exports = fieldTypes;\n";
code  += "}\n";

f = open("../node/fieldTypes.js", "w")
f.write(code)
f.close()
