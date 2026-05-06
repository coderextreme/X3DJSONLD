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
            str += self.node['name'] + self.metaInfo + " = Java.type('org.web3d.x3d."+superpackage+"."+package+"." + self.node['name'] + self.metaInfo + "')\n"
        except:
            if self.node['type'] in ["X3DBoundedObject", "X3DPickableObject", "X3DPrototypeInstance", "X3DUrlObject", "X3DFogObject", "X3DMetadataObject", "X3DProgrammableShaderObject"] or self.node['type'].endswith("Node") and not self.node['type'] in ["SFNode", "MFNode", "X3DConcreteNode"]:
                superpackage = "sai"
            str += self.node['type'] + self.metaInfo + " = Java.type('org.web3d.x3d."+superpackage+"."+package+"." + self.node['type'] + self.metaInfo + "')\n"
        self.printed = True
        return str


code  = "ConfigurationProperties = Java.type('org.web3d.x3d.jsail.ConfigurationProperties')\n"
code += "CommentsBlock = Java.type('org.web3d.x3d.jsail.Core.CommentsBlock')\n"

classes = {}

with open("../../specifications/X3dUnifiedObjectModel-4.1.xml") as fp:
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

f = open("../truffleruby/x3drsail.rb", "w")
f.write('FloatArray = Java.type("float[]")\n')
f.write('DoubleArray = Java.type("double[]")\n')
f.write('JavaFloat = Java.type("java.lang.Float")\n')
f.write('JavaDouble = Java.type("java.lang.Double")\n')
f.write('\n')

f.write('def to_java_float_array(ruby_array)\n')
f.write('  java_floats = Java.type("float[]").new(ruby_array.length)\n')
f.write('  ruby_array.each_with_index { |val, i| java_floats[i] = JavaFloat.new(val.to_f) }\n')
f.write('  java_floats\n')
f.write('end\n')

f.write('def to_java_double_array(ruby_array)\n')
f.write('  java_doubles = Java.type("double[]").new(ruby_array.length)\n')
f.write('  ruby_array.each_with_index { |val, i| java_doubles[i] = val.to_f }\n')
f.write('  java_doubles\n')
f.write('end\n')

f.write('def to_java_string_array(ruby_array)\n')
f.write('  java_strings = Java.type("java.lang.String[]").new(ruby_array.length)\n')
f.write('  ruby_array.each_with_index { |val, i| java_strings[i] = val }\n')
f.write('  java_strings\n')
f.write('end\n')

f.write('def to_java_int_array(ruby_array)\n')
f.write('  java_ints = Java.type("int[]").new(ruby_array.length)\n')
f.write('  java_Int = Java.type("java.lang.Integer")\n')
f.write('  ruby_array.each_with_index { |val, i| java_ints[i] = java_Int.new(val.to_i) }\n')
f.write('  java_ints\n')
f.write('end\n')

f.write('def to_java_boolean_array(ruby_array)\n')
f.write('  java_bools = Java.type("boolean[]").new(ruby_array.length)\n')
f.write('  java_Bool = Java.type("java.lang.Boolean")\n')
f.write('  ruby_array.each_with_index { |val, i| java_bools[i] = java_Bool.new(val) }\n')
f.write('  java_bools\n')
f.write('end\n')

f.write(code)
f.close()
