from bs4 import BeautifulSoup
import re

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
            package = self.componentInfo['name']
        except:
            package = "fields"
        package = re.sub(r"-", "", package)
        superpackage = "jsail"
        try:
            if self.node['name'] in ["X3DBoundedObject", "X3DPickableObject", "X3DPrototypeInstance", "X3DUrlObject", "X3DFogObject", "X3DMetadataObject", "X3DProgrammableShaderObject"] or self.node['name'].endswith("Node") and not self.node['name'] in ["SFNode", "MFNode", "X3DConcreteNode"]:
                superpackage = "sai"
            str += self.node['name'] + self.metaInfo + " = Java.type('net.coderextreme.remove.New" + self.node['name'] + self.metaInfo + "')\n"
        except:
            if self.node['type'] in ["X3DBoundedObject", "X3DPickableObject", "X3DPrototypeInstance", "X3DUrlObject", "X3DFogObject", "X3DMetadataObject", "X3DProgrammableShaderObject"] or self.node['type'].endswith("Node") and not self.node['type'] in ["SFNode", "MFNode", "X3DConcreteNode"]:
                superpackage = "sai"
            str += self.node['type'] + self.metaInfo + " = Java.type('org.web3d.x3d."+superpackage+"."+package+"." + self.node['type'] + self.metaInfo + "')\n"
        self.printed = True
        return str

code = ""
code += 'CommentsBlock = Java.type("org.web3d.x3d.jsail.Core.CommentsBlock")\n'

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

f = open("../graaljs/net/remove/data/X3DautoclassNew.js", "w")
f.write(code)
f.close()
