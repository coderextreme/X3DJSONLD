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
        str += '"'+self.node.get('name')+'" : {\n'   # class
        fields = self.node.iter("field")
        for field in fields:
            # print(field.get("accessType"))
            fieldname = field.get("name")
            methodname = field.get("name")
            if fieldname in ("meta", "component", "unit"):
                methodname = "children"
                str += '\t"' + methodname + '" : '+self.node.get('name')+"."+methodname+',\n';
            if methodname in ("http-equiv"):
                methodname = "httpequiv"
            if field.get("accessType") != "outputOnly" and methodname not in ("next", "previous", "activate") and not methodname.startswith("set_"):   # can't handle these
                if methodname in ("id", "class", "style", "global"):
                    methodname += "_"
                if methodname in ("addChildren", "addGeometry", "addTrimmingContour"):
                    methodname = methodname[3].lower()+methodname[4:]
                if methodname in ("removeChildren", "removeGeometry", "removeTrimmingContour"):
                    methodname = methodname[6].lower()+methodname[7:]
                str += '\t"' + fieldname + '" : '+self.node.get('name')+"."+methodname+',\n';
        str += '},\n'
        self.printed = True
        return str

code = ""
code += "from x3d import *\n"
code += "from X3Dautoclass import X3dClassLookup\n\n\n"
code += "X3dMethodLookup = {\n"

soup = xml.etree.ElementTree.parse(open("../../specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()

classes = {}

#ants = soup.iter("AbstractNodeType")
#for ant in ants:
#    classes[ant.get('name')] = ClassPrinter(ant, "")

#aots = soup.iter("AbstractObjectType")
#for aot in aots:
#    classes[aot.get('name')] = ClassPrinter(aot, "")

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, "")

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, "")

for k,v in classes.items():
    code += v.printClass()

code += "};\n"

f = open("X3Dmethods.py", "w")
f.write(code)
f.close()
