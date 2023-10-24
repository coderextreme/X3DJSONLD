import xml.etree.ElementTree
import xml.etree.ElementTree as ET
import sys
import re
import datetime
import pprint

def isString(obj):
        return isinstance(obj, str)

class ClassPrinter:
    def __init__(self, node, interface, hasIS):
        self.parents = interface
        self.children = {}
        self.printed = False
        self.hasIS = hasIS
        if isString(node):
            self.name = node
            self.node = None
        else:
            self.name = node.get("name")
            if self.name is None:
                self.name = node.get("type")
            self.node = node

    def findChildren(self):
        if self.node is not None:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                try:
                    if inher.get("baseType") is not None and self.name is not None:
                        classes[inher.get('baseType')].children[self.name] = self.name
                except:
                    pass
                if inher.get("x3dType") is not None and self.name is not None:
                    classes[inher.get('x3dType')].children[self.name] = self.name
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                if self.name is not None:
                    classes[addinher.get('baseType')].children[self.name] = self.name

        return self.children

    def listChildren(self, doList):
            try:
                if doList[self.name] == True:
                    pass
            except:
                doList[self.name] = True
            for k,v in self.children.items():
                #if not k.startswith("SF") and not k.startswith("MF"):
                doList = classes[k].listChildren(doList)
            return doList

    def printClass(self):
        str = ""
        if self.name is not None and self.name.startswith("X3D") and not self.name == 'X3D':
            str += self.name+"\n"
            str += "(\n"
            doList = {}
            children = []
            for child,b in self.listChildren(doList).items():
                if child is not None and child != self.name:
                    children.append(child)
            str += "\n|".join(children)
            str += "\n)\n"
            str += ";\n"
        elif self.node is not None and self.node.get("name") is not None:
            # print(ET.tostring(self.node))
            useFound = False
            defFound = False
            optDEF = ""
            fields = self.node.iter("field")
            for field in fields:
                if field.get("name") in ("DEF"):
                    defFound = True
                    optDEF = "('DEF' xsID)?"
                elif field.get("name") in ("USE"):
                    useFound = True

            try:
                str += self.node.get("name")+"\n"
                str += ": "+optDEF+" '"+self.node.get("name")+"' '{'\n"
            except:
                str += self.node.get("type")+"\n"
                str += ": "+optDEF+" '"+self.node.get("type")+"' '{'\n"
            str += "(\n"
            flds = []
            str += " "
            fields = self.node.iter("field")
            for field in fields:
                # print(field)
                field_name = field.get("name") 
                field_type = field.get("type") 
                if field_name == 'profile':
                    field_name = 'PROFILE'
                elif field_name == 'component':
                    field_name = 'COMPONENT'
                elif field_name == 'unit':
                    field_name = 'UNIT'
                elif field_name == 'meta':
                    field_name = 'META'
                if field_name in ("DEF"):
                    pass
                elif field_name in ("USE"):
                    pass
                elif field_type.endswith("SFNode"):
                    flds.append("  '"+field_name+"' ("+field.get("acceptableNodeTypes")+")")
                elif field_type.endswith("MFNode"):
                    flds.append("  '"+field_name+"' '[' ("+field.get("acceptableNodeTypes")+")* ']'")
                elif field.get("simpleType") is not None and field_type.startswith("SF"):
                    flds.append("  '"+field_name+"' "+field.get("simpleType"))
                elif field.get("simpleType") is not None and field_type.startswith("MF"):
                    flds.append("  '"+field_name+"' '[' ("+field.get("simpleType")+")* ']'")
                elif field.get("baseType") is not None:
                    flds.append("  '"+field_name+"' "+field.get("baseType").replace(":",""))
                else:
                    flds.append("  '"+field_name+"' "+field_type)
            str += "\n|".join(flds)
            str += "\n)*\n"
            str += "'}'\n"
            if useFound:
                str += "| 'USE' xsIDREF"
            str += ";\n"
        return str

code = ''
classes = {}

soup = xml.etree.ElementTree.parse(sys.stdin).getroot()


code += "NCNameStartChar :	[A-Z] | '_' | [a-z] | [#xC0-#xD6] | [#xD8-#xF6] | [#xF8-#x2FF] | [#x370-#x37D] | [#x37F-#x1FFF] | [#x200C-#x200D] | [#x2070-#x218F] | [#x2C00-#x2FEF] | [#x3001-#xD7FF] | [#xF900-#xFDCF] | [#xFDF0-#xFFFD] | [#x10000-#xEFFFF];\n"
code += "NCNameChar : NCNameStartChar | '-' | '.' | [0-9] | #xB7 | [#x0300-#x036F] | [#x203F-#x2040];\n"
code += "NCName	: NCNameStartChar (NCNameChar)*;\n"

code += "NameStartChar : ':' | NCNameStartChar;\n"
code += "NameChar : NameStartChar | '-' | '.' | [0-9] | #xB7 | [#x0300-#x036F] | [#x203F-#x2040];\n"
code += "Name : NameStartChar (NameChar)*;\n"

code += "xsID : NCName\n"
code += "xsIDREF : NCName\n"
code += "xsNMTOKEN : (NameChar)+\n"
code += "xsNMTOKENS : xsNMTOKEN (#x20 xsNMTOKEN)*\n"
code += "xsstring : \S+( \S+)*\n"
code += "SFBool : 'TRUE' | 'FALSE';\n"
code += "SFColor : SFFloat SFFloat SFFloat;\n"
code += "SFColorRGBA : SFFloat SFFloat SFFloat SFFloat;\n"
code += "SFDouble : [+-]?((0|[1-9][0-9]*)(\.[0-9]*)?|\.[0-9]+)([Ee][+-]?[0-9]+)?);\n"
code += "SFFloat : [+-]?((0|[1-9][0-9]*)(\.[0-9]*)?|\.[0-9]+)([Ee][+-]?[0-9]+)?);\n"
code += "SFImage : SFInt32 SFInt32 SFInt32 (SFInt32 | HexSFInt32)*;\n"
code += "SFInt32\n"
code += """: DecimalSFInt32
| HexSFInt32
| OctalSFInt32
| BinarySFInt32
;\n"""
code += "DecimalSFInt32 : ('+' | '-')? [1-9][0-9_]* [lL]?;\n"
code += "OctalSFInt32 : ('+' | '-')? '0' [0-7][0-7_]* [lL]?;\n"
code += "HexSFInt32 : ('+' | '-')? '0' [xX] [0-9A-Fa-f][0-9A-Fa-f_]* [lL]?;\n"
code += "BinarySFInt32 : ('+' | '-')? '0' [bB] [0-1][0-1_]* [lL]?;\n"
code += "SFMatrix3d : SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble;\n"
code += "SFMatrix3f : SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat;\n"
code += "SFMatrix4d : SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble;\n"
code += "SFMatrix4f : SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat;\n"
code += "SFRotation : SFFloatOrDouble SFFloatOrDouble SFFloatOrDouble SFFloatOrDouble;\n"
code += "SFString : TODO;\n"
code += "SFTime : SFDouble;\n"
code += "SFVec2d : SFDouble SFDouble;\n"
code += "SFVec2f : SFFloat SFFloat;\n"
code += "SFVec3d : SFDouble SFDouble SFDouble;\n"
code += "SFVec3f : SFFloat SFFloat SFFloat;\n"
code += "SFVec4d : SFDouble SFDouble  SFDouble SFDouble;\n"
code += "SFVec4f : SFFloat SFFloat SFFloat SFFloat;\n"

sits = soup.iter("SimpleType")
for sit in sits:
    values = []
    for enum in sit.findall("enumeration"):
        values.append(enum.get("value"))
    if len(values) > 0:
        code += sit.get("name")+" : ('"+("'|'".join(values))+"');\n"
    elif sit.get("baseType") is not None and sit.get("baseType").startswith("SF"):
        code += sit.get("name")+" : "+sit.get("baseType").replace(":","")+";\n"
    elif sit.get("baseType") is not None and sit.get("baseType").startswith("MF"):
        code += sit.get("name")+" : '[' ("+sit.get("baseType").replace(":","")+")* ']';\n"

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, {}, True)

fts = soup.iter("FieldType")
for ft in fts:
    classes[ft.get('type')] = ClassPrinter(ft, {}, False)
    if ft.get("type").startswith("MF"):
        code += ft.get("type")+" : "+"'[' (S"+ft.get("type")[1:]+")* ']';\n"
        classes["X3DArrayField"].children[ft.get("type")] = ft.get("type")
    else:
        classes["X3DField"].children[ft.get("type")] = ft.get("type")

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {}, True)
classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {}, False)

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, {}, False)

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, { "X3DConcreteNode" : 1 }, True)
    classes["X3DConcreteNode"].children[cn.get("name")] = cn.get("name")
    # classes["X3DChildNode"].children[cn.get("name")] = cn.get("name")

sts = soup.iter("Statement")
for st in sts:
    if st.get("name") in ["ExternProtoDeclare", "ProtoDeclare", "IMPORT", "EXPORT", "ROUTE" ]:
        classes[st.get('name')] = ClassPrinter(st, { "X3DConcreteStatement" : 1, "X3DChildNode" : 1 }, False)
        classes["X3DChildNode"].children[st.get("name")] = st.get("name")
    else:
        classes[st.get('name')] = ClassPrinter(st, { "X3DConcreteStatement" : 1 }, False)
    classes["X3DConcreteStatement"].children[st.get("name")] = st.get("name")

for k,v in classes.items():
    v.findChildren()

for k,v in classes.items():
    code += v.printClass()

f = sys.stdout
f.write(code)
f.close()
