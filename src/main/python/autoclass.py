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
            str += self.node['name'] + " = java.type('org.web3d.x3d."+superpackage+"."+package+"." + self.node['name'] + self.metaInfo + "')\n"
        except:
            if self.node['type'] in ["X3DBoundedObject", "X3DPickableObject", "X3DPrototypeInstance", "X3DUrlObject", "X3DFogObject", "X3DMetadataObject", "X3DProgrammableShaderObject"] or self.node['type'].endswith("Node") and not self.node['type'] in ["SFNode", "MFNode", "X3DConcreteNode"]:
                superpackage = "sai"
            str += self.node['type'] + " = java.type('org.web3d.x3d."+superpackage+"."+package+"." + self.node['type'] + self.metaInfo + "')\n"
        self.printed = True
        return str

code = ""
code += "CommentsBlock = java.type('org.web3d.x3d.jsail.Core.CommentsBlock')\n"
code += "ConfigurationProperties = java.type('org.web3d.x3d.jsail.ConfigurationProperties')\n"

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
f.write("import java\n")
f.write('FloatArray = java.type("float[]")\n')
f.write('DoubleArray = java.type("double[]")\n')
f.write('JavaFloat = java.type("java.lang.Float")\n')
f.write('JavaDouble = java.type("java.lang.Double")\n')
f.write('\n')
f.write('def doubleToFloat(d):\n')
f.write('    arr = FloatArray(len(d))\n')
f.write('    for i, value in enumerate(d):\n')
f.write('        arr[i] = JavaFloat(value)  # Use Java Float wrapper\n')
f.write('    return arr\n')
f.write('\n')
f.write('def doubleToDouble(d):\n')
f.write('    arr = DoubleArray(len(d))\n')
f.write('    for i, value in enumerate(d):\n')
f.write('        arr[i] = JavaDouble(value)  # Use Java Double wrapper\n')
f.write('    return arr\n')
f.write(code)
f.close()
