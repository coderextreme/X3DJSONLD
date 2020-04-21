import xml.etree.ElementTree
import re

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
            package = self.componentInfo.get('name')
        except:
            package = "fields"
        package = re.sub(r"-", "", package)
        superpackage = "sai"
        if self.metaInfo == "Object":
                superpackage = "jsail"
        if self.node.get('type') in ['SFNode', 'MFNode']:
            return str
        try:
            str += self.node.get('name') + " = autoclass('org.web3d.x3d."+superpackage+"."+package+"." + self.node.get('name') + self.metaInfo + "')\n"
        except:
            str += self.node.get('type') + " = autoclass('org.web3d.x3d."+superpackage+"."+package+"." + self.node.get('type') + self.metaInfo + "')\n"
        self.printed = True
        return str

code = ""
code += "CommentsBlock = autoclass('org.web3d.x3d.jsail.Core.CommentsBlock')\n"

soup = xml.etree.ElementTree.parse(open("../../specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()


classes = {}

#ants = soup.iter("AbstractNodeType")
#for ant in ants:
#    classes[ant.get('name')] = ClassPrinter(ant, "")
#
#aots = soup.iter("AbstractObjectType")
#for aot in aots:
#    classes[aot.get('name')] = ClassPrinter(aot, "")
cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, "Object")

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, "Object")

fts = soup.iter("FieldType")
for ft in fts:
    classes[ft.get('type')] = ClassPrinter(ft, "Object")

for k,v in classes.items():
    cls = v.printClass()
    if cls != None:
        code +=  cls

f = open("x3dpsail.py", "w")

f.write("""
# Configuration file for Pyjnius to map X3DJSAIL concrete classes to native Python classes
# Note that no abstract base classes are included, only nodes and simple types

""")
#f.write("import classpath\n") # note alternate form:
f.write("import jnius_config\n")
f.write("jnius_config.set_classpath('c:/x3d-code/www.web3d.org/x3d/stylesheets/java/jars/X3DJSAIL.4.0.full.jar', '../../../jars/X3DJSAIL.4.0.full.jar', '.')\n")

f.write('from jnius import autoclass\n')
f.write(code)
f.close()
