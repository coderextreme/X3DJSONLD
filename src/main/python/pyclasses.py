from bs4 import BeautifulSoup


class ClassPrinter:
    def __init__(self, node, metaInfo):
        self.node = node
        self.parents = []

        addinhers = self.node.find_all("AdditionalInheritance")
        for addinher in addinhers:
            try:
                if not addinher['basetype'].startsWith["X3D"] or addinher['basetype'].startswith["X3DConcrete"]:
                    self.parents.append(addinher['baseType'])
            except:
                pass

        inhers = self.node.find_all("Inheritance")
        for inher in inhers:
            try:
                if not inher['basetype'].startsWith["X3D"] or inher['basetype'].startswith["X3DConcrete"]:
                    self.parents.append(inher['baseType'])
            except:
                pass

        self.componentInfo = self.node.find("componentInfo")
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
        try:
                str += "\t\""+ self.node['name'] + self.metaInfo + "\" : " + self.node['name'] + self.metaInfo + ",\n"
        except:
                str += "\t\""+ self.node['type'] + self.metaInfo + "\" : " + self.node['type'] + self.metaInfo + ",\n"
        self.printed = True
        return str


code = "from x3d import *\n\nX3dClassLookup = {\n"

soup = BeautifulSoup(open("../../specifications/X3dUnifiedObjectModel-4.0.xml"), "xml")


classes = {}

#ants = soup.find_all("AbstractNodeType")
#for ant in ants:
#    classes[ant['name']] = ClassPrinter(ant, "")

#aots = soup.find_all("AbstractObjectType")
#for aot in aots:
#    classes[aot['name']] = ClassPrinter(aot, "")

cns = soup.find_all("ConcreteNode")
for cn in cns:
    classes[cn['name']] = ClassPrinter(cn, "")

sts = soup.find_all("Statement")
for st in sts:
    classes[st['name']] = ClassPrinter(st, "")

fts = soup.find_all("FieldType")
for ft in fts:
    classes[ft['type']] = ClassPrinter(ft, "")

for k,v in classes.items():
    code += v.printClass()

code += '\t"Comment" : Comment\n}'

f = open("X3Dautoclass.py", "w")
f.write(code)
f.close()
