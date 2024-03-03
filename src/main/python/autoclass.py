from bs4 import BeautifulSoup
import re

class ClassPrinter:
    def __init__(self, node, metaInfo):
        self.node = node
        self.parents = []

        addinhers = self.node.find_all("AdditionalInheritance")
        for addinher in addinhers:
            self.parents.append(addinher['baseType'])

        inhers = self.node.find_all("Inheritance")
        for inher in inhers:
            if inher.get('baseType') is not None:
                self.parents.append(inher['baseType'])

        self.componentInfo = self.node.find("InterfaceDefinition").find("componentInfo")
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
            str += self.node['name'] + " = autoclass('org.web3d.x3d."+superpackage+"."+package+"." + self.node['name'] + self.metaInfo + "')\n"
        except:
            if self.node['type'] in ["X3DBoundedObject", "X3DPickableObject", "X3DPrototypeInstance", "X3DUrlObject", "X3DFogObject", "X3DMetadataObject", "X3DProgrammableShaderObject"] or self.node['type'].endswith("Node") and not self.node['type'] in ["SFNode", "MFNode", "X3DConcreteNode"]:
                superpackage = "sai"
            str += self.node['type'] + " = autoclass('org.web3d.x3d."+superpackage+"."+package+"." + self.node['type'] + self.metaInfo + "')\n"
        self.printed = True
        return str

code = ""
code += "CommentsBlock = autoclass('org.web3d.x3d.jsail.Core.CommentsBlock')\n"

classes = {}

with open("../../specifications/X3dUnifiedObjectModel-4.0.xml") as fp:
    soup = BeautifulSoup(fp, 'xml')


#    ants = soup.find_all("AbstractNodeType")
#    for ant in ants:
#        classes[ant['name']] = ClassPrinter(ant, "")
#
#    aots = soup.find_all("AbstractObjectType")
#    for aot in aots:
#        classes[aot['name']] = ClassPrinter(aot, "")

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
    cls = v.printClass()
    if cls != None:
        code +=  cls

f = open("x3dpsail.py", "w")
f.write("import jnius_config\n")
f.write("jnius_config.set_classpath('.', 'c:/x3d-code/www.web3d.org/x3d/stylesheets/java/jars/X3DJSAIL.4.0.full.jar', '/c/x3d-code/www.web3d.org/x3d/stylesheets/java/jars/X3DJSAIL.4.0.full.jar', './X3DJSAIL.4.0.full.jar')\n")

f.write('from jnius import autoclass\n')
f.write(code)
f.close()
