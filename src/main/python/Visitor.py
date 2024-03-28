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
            self.package = "yyy"
        else:
            self.name = node.get("name")
            if self.name is None:
                self.name = node.get("type")
            self.node = node
            try:
                if self.node:
                    self.package = "fields"
                    i = 0
                    for ver in self.node.findall('.//InterfaceDefinition/componentInfo'):
                        self.package = ver.attrib.get('name', None)   # TODO to many components?
                        i = i + 1
                        # print(i, self.name, self.package)
                else:
                    self.package = "xxx"
            except:
                self.package = "zzz"
                raise
        # print(self.package)

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
        if not self.printed:
            self.printed = True
            if self.node:
                self.package = re.sub(r"-", "", self.package)
                superpackage = "jsail."
                inheritance = "extends"
                additionalInheritance = "implements"
                abstract = ""
                if self.name.startswith("X3D") and not self.name in [ "X3D" ]:
                    superpackage = "sai"
                    inheritance = "implements"
                    additionalInheritance = ", "
                    if self.name in [ "X3DMetadataObject" ]:
                        abstract = "abstract"
                    if self.name in [ "X3DField", "X3DArrayField" ]:
                        self.package = ""
                    else:
                        superpackage += "."
                if self.name != "MFNode":
                    str += "public "+abstract+" class "+self.name+"Element "+inheritance+" org.web3d.x3d."+superpackage+""+self.package+"."+self.name+" "+additionalInheritance+" VisitableElement\n"
                    str += "{\n"
                    str += "\tprivate org.web3d.x3d."+superpackage+""+self.package+"."+self.name+" delegate = null;\n"
                    str += "\tpublic "+self.name+"Element(org.web3d.x3d."+superpackage+""+self.package+"."+self.name+" delegate) {\n"
                    str += "\t\tthis.delegate = delegate;\n"
                    str += "\t}\n"
                else:
                    str += "public "+abstract+" class "+self.name+"Element<P extends org.web3d.x3d.sai.Core.X3DNode> "+inheritance+" org.web3d.x3d."+superpackage+""+self.package+"."+self.name+" "+additionalInheritance+" VisitableElement\n"
                    str += "{\n"

                    str += "\tprivate org.web3d.x3d."+superpackage+""+self.package+"."+self.name+" delegate = null;\n"

                    str += "\tpublic "+self.name+"Element(org.web3d.x3d."+superpackage+""+self.package+"."+self.name+" delegate) {\n"
                    str += "\t\tthis.delegate = delegate;\n"
                    str += "\t}\n"

                    str += "\tpublic "+self.name+"Element(P[] delegate) {\n"
                    str += "\t\tthis.delegate = new org.web3d.x3d."+superpackage+""+self.package+"."+self.name+"(delegate);\n"
                    str += "\t}\n"

                    str += "\tpublic "+self.name+"Element(java.util.ArrayList<P> delegate) {\n"
                    str += "\t\tthis.delegate = new org.web3d.x3d."+superpackage+""+self.package+"."+self.name+"(delegate.toArray(new org.web3d.x3d.sai.Core.X3DNode[0]));\n"
                    str += "\t}\n"

                str += "\tpublic void accept(Visitor v) {\n"
                flds = []
                fields = self.node.iter("field")
                str += "\t\tv.visit(this);\n"
                for field in fields:
                    if field.get("accessType") == "inputOnly":
                        continue
                    fieldname = re.sub(r"-", "_", field.get("name"))
                    # fieldname = re.sub(r"^set_", "", fieldname)
                    fieldname = re.sub(r"_changed$", "", fieldname)
                    fieldname = re.sub(r"^class$", "cssClass", fieldname)
                    fieldname = re.sub(r"^style$", "cssStyle", fieldname)
                    if fieldname not in [ "id", "addGeometry", "addedEntities", "removedEntities", "addTrimmingContour", "addChildren", "removeGeometry", "removeTrimmingContour", "removeChildren" ]:
                    #  or field.get("type") not in [ "SFTime", "SFString", "SFBool", "SFInt32", "SFFloat", "SFDouble" ]:
                        flds.append("\t\tget"+fieldname[0].upper()+fieldname[1:]+"Element().accept(v);")
                str += "\n".join(flds)+"\n"
                str += "\t}\n"
                flds = []
                fields = self.node.iter("field")
                for field in fields:
                    if field.get("accessType") == "inputOnly":
                        continue
                    fieldname = re.sub(r"-", "_", field.get("name"))
                    # fieldname = re.sub(r"^set_", "", fieldname)
                    fieldname = re.sub(r"_changed$", "", fieldname)
                    fieldname = re.sub(r"^class$", "cssClass", fieldname)
                    fieldname = re.sub(r"^style$", "cssStyle", fieldname)
                    returntype = field.get("type")+"Element"
                    newobject = "new "+returntype
                    fieldtype = field.get("type")
                    basefieldtype = fieldtype
                    #print(fieldtype)
                    match fieldtype:
                        #case "SFNode":
                        #    fieldtype = "new org.web3d.x3d.sai.Core.X3DNode"
                        #case "MFNode":
                        #    fieldtype = "new org.web3d.x3d.sai.Core.X3DNode[]"
                        #    pass
                        case _:
                            fieldtype = "new org.web3d.x3d.jsail.fields."+fieldtype
                    match field.get("acceptableNodeTypes"):
                        case "X3DMetadataObject":
                            #jfieldtype = "new X3DMetadataObjectElement"
                            # fieldtype = "new org.web3d.x3d.sai.Core."+field.get("acceptableNodeTypes")+"Element"
                            fieldtype = "new "+field.get("acceptableNodeTypes")+"Element"
                            #newobject = ""
                        case "IS":
                            fieldtype = "new "+field.get("acceptableNodeTypes")+"Element"
                            #newobject = ""
                            # fieldtype = "new org.web3d.x3d.jsail.Core."+field.get("acceptableNodeTypes")
                    # print("new "+fieldtype)

                            
                    if fieldname not in [ "id", "addGeometry", "removeGeometry", "addedEntities", "removedEntities", "addTrimmingContour", "removeTrimmingContour", "addChildren", "removeChildren" ]:
                        str += "\tpublic "+returntype+" get"+fieldname[0].upper()+fieldname[1:]+"Element() { "+("//"+field.get("acceptableNodeTypes") if field.get("acceptableNodeTypes") else "")+"\n"
                        match basefieldtype:
                            case "MFNode":
                                if fieldname in [ "children", "field" ]:
                                    str += "\t\t return "+newobject+"(delegate.get"+fieldname[0].upper()+fieldname[1:]+"());\n"
                                elif fieldname in [ "org.web3d.x3d.jsail.Core.component", "org.web3d.x3d.jsail.Core.unit", "org.web3d.x3d.jsail.Core.meta" ]:
                                   lst = fieldname[fieldname.rfind(".")+1]
                                   str += "\t\t return "+newobject+"("+fieldtype+"((java.util.ArrayList<"+fieldname+">)delegate.get"+lst[0].upper()+lst[1:]+"List()));\n"
                                else:
                                    str += "\t\t return "+newobject+"("+fieldtype+"(delegate.get"+fieldname[0].upper()+fieldname[1:]+"()));\n"
                            case _:
                                str += "\t\t return "+newobject+"("+fieldtype+"(delegate.get"+fieldname[0].upper()+fieldname[1:]+"()));\n"
                        str += "}\n"
                str += "}\n"
        return str

classes = {}

soup = xml.etree.ElementTree.parse(sys.stdin).getroot()

sits = soup.iter("SimpleType")
for sit in sits:
    values = []

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, {}, True)

fts = soup.iter("FieldType")
for ft in fts:
    classes[ft.get('type')] = ClassPrinter(ft, {}, False)
    if ft.get("type").startswith("MF"):
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
    clazz = v.printClass()
    with open("../java/net/coderextreme/visitor/"+v.name+"Element.java", "w") as f:
        code = 'package net.coderextreme.visitor;\n'
        code += clazz
        f.write(code)

with open("../java/net/coderextreme/visitor/VisitableElement.java", "w") as f:
    code = 'package net.coderextreme.visitor;\n'
    code += 'public interface VisitableElement {\n'
    code += '\tpublic abstract void accept(Visitor v);\n'
    code += '}\n'
    f.write(code)

with open("../java/net/coderextreme/visitor/Visitor.java", "w") as f:
    code = 'package net.coderextreme.visitor;\n'
    code += 'public interface Visitor {\n'
    code += '\tpublic void visit(VisitableElement v);\n'
    code += '}\n'
    f.write(code)
