import xml.etree.ElementTree
import sys
import re
import datetime
import pprint

sys.stdout.reconfigure(encoding='utf-8')

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
            str += self.name[:1].lower()+self.name[1:]+" : "
            str += "(\n"
            doList = {}
            children = []
            for child,b in self.listChildren(doList).items():
                if child is not None and child != self.name:
                    if child.startswith("MFNode") or child.startswith("SFNode"):
                        children.append(child[:1].lower()+child[1:])
                    elif child.startswith("MF") or child.startswith("SF"):
                        children.append(child)
                    else:
                        children.append(child[:1].lower()+child[1:])
            str += "\n|".join(children)
            str += "\n)\n"
            str += ";\n"
        elif self.node is not None and self.node.get("name") is not None:
            # print(ET.tostring(self.node))
            useFound = False
            defFound = False
            fields = self.node.iter("field")
            for field in fields:
                if field.get("name") in ("DEF"):
                    defFound = True
                elif field.get("name") in ("USE"):
                    useFound = True

            try:
                parserRule = self.node.get("name")[:1].lower()+self.node.get("name")[1:]
                str += parserRule+"\n"
                str += ": dEF '"+self.node.get("name")+"' '{'\n"
            except:
                parserRule = self.node.get("type")
                str += self.node.get("type")+"\n"
                str += ": dEF '"+self.node.get("type")+"' '{'\n"
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
                    try:
                        acceptableNodeTypes = []
                        for at in field.get("acceptableNodeTypes").split("|"):
                            acceptableNodeTypes.append(at[:1].lower()+at[1:])
                        acceptableNodeTypes = "|".join(acceptableNodeTypes)
                        flds.append("  '"+field_name+"' ( "+acceptableNodeTypes+" )")
                    except:
                        pass
                elif field_type.endswith("MFNode"):
                    try:
                        acceptableNodeTypes = []
                        for at in field.get("acceptableNodeTypes").split("|"):
                            acceptableNodeTypes.append(at[:1].lower()+at[1:])
                        acceptableNodeTypes = "|".join(acceptableNodeTypes)
                        flds.append("  '"+field_name+"' '[' ( "+acceptableNodeTypes+" )* ']'")
                    except:
                        pass
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
# run with `antlr4-parse.exe vrml.g4 X3D`
code += "grammar VRMLGrammar;\n\n"



code += "NCNameStartChar :   ( [A-Z] | '_' | [a-z] | '\xC0'..'\xD6' | '\xD8'..'\xF6' | '\xF8'..'\u02FF' | '\u0370'..'\u037D' | '\u037F'..'\u1FFF' | '\u200C'..'\u200D' | '\u2070'..'\u218F' | '\u2C00'..'\u2FEF' | '\u3001'..'\uD7FF' | '\uF900'..'\uFDCF' | '\uFDF0'..'\uFFFD' | '\u10000'..'\uEFFFF' );\n"
code += "NCNameChar : ( NCNameStartChar | '-' | '.' | [0-9] | '\xB7' | '\u0300'..'\u036F' | '\u203F'..'\u2040' );\n"
code += "NCName        : NCNameStartChar (NCNameChar)*;\n"

code += "NameStartChar : ( ':' | [A-Z] | '_' | [a-z] | '\xC0'..'\xD6' | '\xD8'..'\xF6' | '\xF8'..'\u02FF' | '\u0370'..'\u037D' | '\u037F'..'\u1FFF' | '\u200C'..'\u200D' | '\u2070'..'\u218F' | '\u2C00'..'\u2FEF' | '\u3001'..'\uD7FF' | '\uF900'..'\uFDCF' | '\uFDF0'..'\uFFFD' | '\u10000'..'\uEFFFF' );\n"
code += "NameChar :     ( NameStartChar | '-' | '.' | [0-9] | '\xB7' | '\u0300'..'\u036F' | '\u203F'..'\u2040' );\n"
code += "Name : NameStartChar (NameChar)*;\n"

code += "NotWhite :  ~(' '|'\\t'|'\\r'|'\\n');\n"
code += "White :  (' '|'\\t'|'\\r'|'\\n')+;\n"

code += "xsID : NCName\n;"
code += "xsIDREF : NCName;\n"
code += "xsNMTOKEN : (NameChar)+;\n"
code += "xsNMTOKENS : xsNMTOKEN ('\x20' xsNMTOKEN)*;\n"
code += "xsstring : NotWhite+ (White+ NotWhite+)*;\n"
code += "dEF : ('DEF' xsID){0,1};\n"


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
    if ft.get('regex') is not None and ft.get('type') is not None:
        regex = ft.get('regex')
        regex = regex.replace("\s",  "(' '|'\\t'|'\\r'|'\\n')")
        regex = regex.replace("\S", "~(' '|'\\t'|'\\r'|'\\n')")
        regex = regex.replace("\.", "[.]")
        regex = regex.replace("true", "'TRUE'")
        regex = regex.replace("false", "'FALSE'")
        regex = regex.replace(",", "[,]")             # replace commas first, before next 2 lines
        regex = regex.replace("{1[,]16}", "{1,16}")   # switch this comma back
        regex = regex.replace("?", "{0,1}")
        regex = regex.replace("(0(", "([0](")         # ))))
        regex = regex.replace("0x", "[0][x]")
        regex = regex.replace("(0|", "([0]|")         # ))
        regex = regex.replace("]0*", "][0]*")
        regex = regex.replace("|1(", "|[1](")         # ))
        if ft.get("type").startswith("MF"):
            code += ft.get('type')+" : '[' "+regex+" ']';\n"
        elif ft.get("type").startswith("SFString"):
            code += ft.get('type')+" : [\"'] "+regex+" ['\"];\n"
        else:
            code += ft.get('type')+" : "+regex+";\n"
    if ft.get("type").startswith("MFNode"):
        code += ft.get('type')[:1].lower()+ft.get('type')[1:]+" : "+"'[' (s"+ft.get("type")[1:]+")* ']';\n"
        classes["X3DArrayField"].children[ft.get("type")] = ft.get("type")
    else:
        classes["X3DField"].children[ft.get("type")] = ft.get("type")

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {}, True)
# classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {}, False)

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
        classes[st.get('name')] = ClassPrinter(st, { "X3DChildNode" : 1 }, False)
        classes["X3DChildNode"].children[st.get("name")] = st.get("name")
    else:
        classes[st.get('name')] = ClassPrinter(st, { }, False)
    # classes["X3DConcreteStatement"].children[st.get("name")] = st.get("name")

for k,v in classes.items():
    v.findChildren()

for k,v in classes.items():
    code += v.printClass()

nodes = []
for k,v in classes.items():
    if not k.startswith("MF") and not k.startswith("SF"):
        nodes.append(k[:1].lower()+k[1:])

code += "sFNode : ( "+("\n|".join(nodes))+" );\n"
f = sys.stdout
f.write(code)
f.close()
