from bs4 import BeautifulSoup
import re

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
            str += self.node['name'] + " : java.import('org.web3d.x3d."+superpackage+"."+package+"." + self.node['name'] + self.metaInfo + "'),\n"
        except:
            if self.node['type'] in ["X3DBoundedObject", "X3DPickableObject", "X3DPrototypeInstance", "X3DUrlObject", "X3DFogObject", "X3DMetadataObject", "X3DProgrammableShaderObject"] or self.node['type'].endswith("Node") and not self.node['type'] in ["SFNode", "MFNode", "X3DConcreteNode"]:
                superpackage = "sai"
            str += self.node['type'] + " : java.import('org.web3d.x3d."+superpackage+"."+package+"." + self.node['type'] + self.metaInfo + "'),\n"
        self.printed = True
        return str

code = "import java from 'java';\n"

code += 'java.options.push("-Djava.awt.headless=true");\n'
code += 'java.options.push("-Xmx1000m");\n'
code += '//java.options.push("-agentlib:jdwp=transport=dt_socket,server=y,suspend=y,address=5005");\n'
code += 'java.classpath.push("C:/Users/coderextreme/pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../../../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../../../../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../../../../../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../../../../../../pythonSAI/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../classes");\n'
code += 'java.classpath.push("../../classes");\n'
code += 'java.classpath.push("jars/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../jars/X3DJSAIL.4.0.full.jar");\n'
code += 'java.classpath.push("../../jars/X3DJSAIL.4.0.full.jar");\n'


classes = {}

with open("../../specifications/X3dUnifiedObjectModel-4.0.xml") as fp:
    soup = BeautifulSoup(fp, 'xml')


# ants = soup.find_all("AbstractNodeType")
# for ant in ants:
#     classes[ant['name']] = ClassPrinter(ant, "")
# 
# aots = soup.find_all("AbstractObjectType")
# for aot in aots:
#     classes[aot['name']] = ClassPrinter(aot, "")

    cns = soup.find_all("ConcreteNode")
    for cn in cns:
        classes[cn['name']] = ClassPrinter(cn, "")

    sts = soup.find_all("Statement")
    for st in sts:
        classes[st['name']] = ClassPrinter(st, "")

    fts = soup.find_all("FieldType")
    for ft in fts:
        classes[ft['type']] = ClassPrinter(ft, "")

    code += 'let autoclass;\n';
    code += 'try {\n';
    code += 'autoclass = {\n';
    for k,v in classes.items():
        code += v.printClass()

code += '   ConfigurationProperties : java.import("org.web3d.x3d.jsail.ConfigurationProperties"),\n'
code += '   CommentsBlock : java.import("org.web3d.x3d.jsail.Core.CommentsBlock")\n'
code += '   };\n'
code += '} catch (e) {\n'
code += '   console.log(e);\n'
code += '   throw e;\n'
code += '};\n'
code += 'export default autoclass;\n';

f = open("../node/X3Dautoclass.mjs", "w")
f.write(code)
f.close()
