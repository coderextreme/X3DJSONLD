# Copyright 2021 by John Carlson.  All rights reserved.
import xml.etree.ElementTree
import re

class alone_field(object):
    def __init__(self, name, type):
        self.attrs = {}
        self.attrs['name'] = name
        self.attrs['type'] = type
        return None
    def get(self, field):
        return self.attrs[field]
    def __getitem__(self, field):
        return self.attrs[field]
    def iter(self, field):
        return []

class ClassPrinter(object):
    def __init__(self, node, name, meta = ""):
        self.__choice_table = \
        {
            "initializeOnly": self.initialize,
            "inputOnly": self.setter,
            "inputOutput": self.settergetter,
            "outputOnly": self.getter,
            # "toXMLNode": self.toXMLNode,
            None: self.getter
        }
        self.node = node
        self.name = name
        self.superclasses = []
        self.interfaces = []
        self.setterDefined = {}
        self.getterDefined = {}
        self.fieldDefined = {}
        self.paramDefined = {}
        self.metaInfo = meta

        addinhers = self.node.iter("AdditionalInheritance")
        for addinher in addinhers:
            self.interfaces.append(addinher.get('baseType'))

        inhers = self.node.iter("Inheritance")
        for inher in inhers:
            self.superclasses.append(inher.get('baseType'))

        self.printed = False

    def private(self, fld):
        if fld == "Children":
                fld = "children"
        return "this."+fld

    def getField(self, name):
        start = self.getStart(name)
        name = self.getName(name)
        if name == 'class':
            fld = 'class'
        elif name == 'Children':
            fld = "children"
        elif name == "http-equiv":
            fld = "http_equiv"
        else:
            fld = name
        return fld+"_"

    def getName(self, name):
        start = self.getStart(name)
        if name == "address":
            pass
        elif re.search(r"_changed$", name):
            name = name[:-8]
        elif re.search(r"^addSet", name):
            name = name[start+3:start+4].upper() + name[start+4:]
        elif re.search(r"^removeSet", name):
            name = name[start+3:start+4].upper() + name[start+4:]
        elif re.search(r"^getSet", name):
            name = name[start+3:start+4].upper() + name[start+4:]
        elif re.search(r"^added", name):
            name = name[start:start+3].upper() + name[start+3:]
        elif re.search(r"^add", name):
            name = name[start:start+1].upper() + name[start+1:]
        elif re.search(r"^removed", name):
            name = name[start:start+1].upper() + name[start+1:]
        elif re.search(r"^remove", name):
            name = name[start:start+1].upper() + name[start+1:]
        elif re.search(r"^set_", name):
            name = name[start:]
        elif re.search(r"^set", name):
            name = name[start:start+1].lower() + name[start+1:]
        elif re.search(r"^get", name):
            name = name[start:start+1].lower() + name[start+1:]
        return name

    def getFunctionName(self, name):
        start = self.getStart(name)
        functionName = name[:start] + self.getName(name)
        return functionName

    def getStart(self, name):
        start = 0
        if name == "address":
            start = 0
        elif re.search(r"_changed$", name):
            start = 0
        elif re.search(r"^addSet", name):
            start = 3
        elif re.search(r"^removeSet", name):
            start = 6
        elif re.search(r"^getSet", name):
            start = 3
        elif re.search(r"^added", name):
            start = 5
        elif re.search(r"^add", name):
            start = 3
        elif re.search(r"^removed", name):
            start = 7
        elif re.search(r"^remove", name):
            start = 6
        elif re.search(r"^is", name):
            start = 0
        elif re.search(r"^set_", name):
            start = 4
        elif re.search(r"^set", name):
            start = 3
        elif re.search(r"^get", name):
            start = 3
        return start


    def getDefault(self, field):
        str = ""
        try:
            if field.get('type').startswith("MF") or field.get('type') == "SFColor" or field.get('type') == "SFVec2f" or field.get('type') == "SFVec3f":
                els = re.split("[, \r\n\t]+", field.get('default'))
                str += '[' + (", ".join(els)) + ']'
            elif field.get('type') == 'SFString':
                str += '"'+field.get('default')+'"'
            elif re.search(r"\s", field.get('default')):
                str += '[' + ", ".join(field.get('default').split()) + ']'
            else:
                if field.get('default') == 'true':
                    field.set('default', 'true')
                if field.get('default') == 'false':
                    field.set('default', 'false')
                if field.get('default') == 'NULL':
                    field.set('default', 'null')
                str += field.get('default')
        except:
                str += "null"
        return str

#    def toXMLNode(self, field, name):
#        str = ''
#        fld = self.getField(name)
#
#        spf = self.private(fld)
#        str += "        if ("+spf+" == null) {\n"
#        str += "            "+spf+" = this.kwargs."+fld+";\n"
#        str += "        }\n"
#        str += "        if ("+spf+" != null && "+spf+".toXMLNode is Function) {\n"
#        str += "                str += ' '+"+spf+".toXMLNode('"+fld+"');\n"
#        str += "        } else if ("+spf+" is String) {\n"
#        str += "            if ("+spf+" != null) {\n"
#        str += "                str += ' "+fld+"=\"'+"+spf+"+'\"';\n"
#        str += "            }\n"
#        #str += "        } else if (Array.isArray( "+spf+")) {\n"
#        #str += "            if ("+spf+"[0].toXMLNode is not Function) {\n"
#        #str += "                if ("+spf+" != null) {\n"
#        #str += "                    str += ' "+fld+"=\"'+"+spf+".join(' ')+'\"';\n"
#        #str += "                }\n"
#        #str += "            } else {\n"
#        #str += "                for (let i in "+spf+") {\n"
#        #str += "                    if ("+spf+"[i].toXMLNode is Function) {\n"
#        #str += "                        str += "+spf+"[i].toXMLNode('"+fld+"');\n"
#        #str += "                    }\n"
#        #str += "                }\n"
#        #str += "            }\n"
#        str += "        } else if ("+spf+" != null) {\n"
#        str += "            str += ' "+fld+"=\"'+"+spf+"+'\"';\n"
#        str += "        }\n"
#        return str

    def initialize(self, field, name):
        str = ""
        fld = self.getField(name)
        # str += self.settervalidate(field, '(kwargs.containsKey("', name, '"))')
        str += '        if (kwargs.' + fld + ') {\n'
        str += '            this.kwargs.'+fld+' = kwargs.'+fld+';\n'
        str += '        }\n'
        return str

    def settervalidate(self, field, head, name, tail):
        fld = self.getField(name)
        str = ""
        str += '            var xxx'+fld+'  = ' + head + fld + tail + ';// || ' + self.getDefault(field) + ";\n"
        try:
            # acceptabletypes = field.get("acceptableNodeTypes").split("|")
            if acceptabletypes is None:
                acceptabletypes = [field.get("type")]
        except:
            acceptabletypes = [field.get("type")]
        if acceptabletypes is not None:
            str += "        if ("
            ats = []
            for at in acceptabletypes:
                if at != "#comment" and at != "#cdata":
                    ats.append(head + fld + tail  + " is " + at)
                else:
                    ats.append("true")
            str += (" || ".join(ats))
            str += ") {\n"
        else:
            str += "        if (true) {\n"
        #  if fld != "accessType":  # hack for now, no check on null accessTypes
        rel = { 'minInclusive':" < ",
                 'maxInclusive':" > ",
                 'minExclusive':" <= ",
                 'maxExclusive':" >= "}
        for k,v in rel.items():
            try:
                if field.get('type').startswith("MF") or field.get('type') == "SFColor" or field.get('type') == "SFVec2f" or field.get('type') == "SFVec3f":
                    str += "        if (xxx"+fld+" == null || xxx"+fld+".length <= 0 || xxx"+fld+".reduce("+k[0:3]+")" + v + " " + field.get(k) + ") {\n"
                    str += "\t}\n"
                else:
                    str += "        if (xxx"+fld+" == null || xxx"+fld+" " + v + " " + field.get(k) + ") {\n"
                    str += "\t}\n"
            
            except:
                pass

        try:
            if field.get('additionalEnumerationValuesAllowed') != "true":
                enumerations = field.iter("enumeration")
                efound = 0
                for enum in enumerations:
                    if efound == 0:
                        str += "        if (" + "'"+enum.get('value')+"'" + ' == this.kwargs.'+fld+') {\n'
                        efound = 1
                    else:
                        str += "        } else if (" + "'"+enum.get('value')+"'" + ' == this.kwargs.'+fld+') {\n'
                if efound == 1:
                    if enum.get('use') == 'required':
                        str +=     "        } else if (" + "'"+enum.get('use')+"'" +" == 'required') {\n"
                        # str +=     "            stderr.write('"+field.get('name')+" required, but does not have legal value (undefined?)');\n"
                        str +=     "\n"
                    str +=     "        }\n"
        except KeyError:
            pass
        str += '        } else if (' + head + fld + tail + ') {\n'
        # str += '            stderr.writeln("'+name+' with value"'+ ', ' + head + fld + tail +', " should be of acceptable type(s) '+(" ".join(acceptabletypes))+'");\n'
        str += '            \n'
        str += '        }\n'
        return str

    def setter(self, field, name):
        str = ""
        fld = self.getField(name)

        if not name.startswith("add") and not name.startswith("remove"):
            functionName = self.getFunctionName(name)
            if functionName == 'class':
                functionName = "class"
            if functionName.startswith("set_"):
                functionName = functionName[4:]
            if functionName.endswith("_changed"):
                functionName = functionName[:-8]
            if not functionName in self.setterDefined.keys():
                self.setterDefined[functionName] = True
                str += '    set ' + functionName +'(' + fld + ") {\n"
                # str += self.settervalidate(field, "", name, "")
                # str += '        '+self.private(fld)+' = ['+fld+"];\n"
                str += '        '+self.private(fld)+' = '+fld+';\n'
                str += "    }\n"

        #if not name.startswith("set") and not name.startswith("remove"):
        #    if name.startswith('add'):
        #        functionName = self.getFunctionName(name)
        #    else:
        #        functionName = self.getFunctionName("add"+name)
        #    str += '    ' + functionName +'(' + fld + ") {\n"
        #    str += self.settervalidate(field, "",  name, "")
        #    str += "        if ("+self.private(fld)+" == null) {\n"
        #    str += '            '+self.private(fld)+' =  [];\n'
        #    str += '        }\n'
        #    str += '        '+self.private(fld)+'.append('+fld+');\n'
        #    str += "        return this;\n\t}\n"

        return str


    def getter(self, field, name):
        str = ""
        fld = self.getField(name)

        #if not name.startswith("is"):
        #    functionName = self.getFunctionName("remove"+name)
        #    str += '    ' + functionName +'('+fld+") {\n"
        #    str += '        for( let i = 0; i < '+self.private(fld)+'.length; i++) {\n'
        #    str += '             if ( '+self.private(fld)+'[i] == '+fld+') {\n'
        #    str += '                 '+self.private(fld)+'.splice(i, 1);\n'
        #    str += '             }\n'
        #    str += '        }\n'
        #    str += '        return ' + self.private(fld) + ";\n\t}\n"

        if field.get('type') == 'SFBool':
            functionName = self.getFunctionName(name)
            if functionName == 'class':
                functionName = "class"
            if not functionName in self.getterDefined.keys():
                self.getterDefined[functionName] = True
                str += '    get '+ functionName + ' {\n'
                str += '        return ' + self.private(fld) + ";\n"
                str += '    }\n'

        elif not name in ("field", "meta", "children") and not name.startswith("is"):
            functionName = self.getFunctionName(name)
            if functionName == 'Children':
                functionName = "children"
            if functionName == 'class':
                functionName = "class"
            if functionName.endswith("_changed"):
                functionName = functionName[:-8]
            if functionName.startswith("set_"):
                functionName = functionName[4:]
            if not functionName in self.getterDefined.keys():
                self.getterDefined[functionName] = True
                str += '    get '+ functionName + ' {\n'
                str += '        return ' + self.private(fld) + ";\n"
                str += '    }\n'
        #
        #    # functionName = self.getFunctionName(name+"_changed")
        #    # str += '    get '+ functionName + ' {\n'
        #    # str += '        return ' + self.private(fld) + ";\n"
        #    # str += '    }\n'

        return str

    def settergetter(self, field, name):
        str = ""
        str += self.setter(field, name)
        str += self.getter(field, name)
        return str

    def processField(self, field):
        name = field.get('name')
        name = re.sub(r"-", "_", name)
        name = re.sub(r":", "_", name)
        return name


    def setUpField(self, field, accessType):
        name = self.processField(field)
        # return self.__choice_table[accessType](field, name)
        return ""

    def setUpAloneField(self, fieldname, fieldtype, accessType):
        field = alone_field(fieldname, fieldtype)
        return self.setUpField(field, accessType)



    def printClass(self):
        str = ""
        if self.printed:
            return str
        for parent in self.interfaces:
            try:
                str += classes[parent].printClass()
            except:
                pass
        for parent in self.superclasses:
            try:
                str += classes[parent].printClass()
            except:
                pass
        str += 'class ' + self.name + self.metaInfo
        strjoin = ", ".join(self.superclasses)
        if self.name in ("X3DNode"):
            # "Shape", "meta"):
            str += " extends SFNode"
        if strjoin != "" and not strjoin.startswith("xs:") and strjoin != "SFString":
            str += " extends "+strjoin
        elif self.name.startswith("MF"):
            str += " "
        strjoin = ", ".join(self.interfaces)
        if strjoin != "" and not strjoin.startswith("xs:") and strjoin != "SFString":
            str += " implements "+strjoin
        str += " {\n"
        # field members
        
        if (self.name.startswith("MF") or self.name.startswith("SF")) and not self.name.startswith("SFNode"):
           type = "dynamic"
           if self.name.startswith("MF"):
                type = "List<SF"+self.name[2:]+">"
           elif self.name.startswith("SFVec") or self.name.startswith("SFMatrix") or self.name.startswith("SFRotation") or \
               self.name.startswith("SFTime") or self.name.startswith("SFImage") or self.name.startswith("SFColor"):
                type = "List<SFDouble>"
           elif self.name.startswith("SFInt32"):
                type = "int"
           elif self.name.startswith("SFBool"):
                type = "bool"
           elif self.name.startswith("SFFloat") or self.name.startswith("SFDouble") or self.name.startswith("SFTime"):
                type = "double"
           elif self.name.startswith("SF"):
                type = self.name[2:]
           # type = "dynamic"
           str += "    "+type+"? value_;\n"

        fields = self.node.iter("field")

        for field in fields:
            name = field.get("name")
            str += "    "
            if not name.startswith("set_") and not name.startswith("addC") and not name.startswith("remove"):
                fld = self.getField(name)
                if not fld in self.fieldDefined.keys():
                    self.fieldDefined[fld] = True

                if name in ("Scene", "head"):
                    str += name
                elif name in ("appearance", "material"):
                    str += name[0:1].upper()+name[1:]
                elif name in ("geometry"):
                    str += "X3DGeometryNode"
                elif name in ("meta"):
                    str += "List<meta>"
                elif name in ("children"):
                    str += "List<SFNode>"
                else:
                    str += field.get("type")
                str += "? "+fld+";\n"
        # constructor
        str += "    "+self.name+"("

        fields = self.node.iter("field")
        params = []
        for field in fields:
            name = field.get("name")
            if not name.startswith("set_") and not name.startswith("addC") and not name.startswith("remove"):
                fld = self.getField(name)
                if not fld in self.paramDefined.keys():
                    self.paramDefined[fld] = True
                params.append("this."+fld)
        if (self.name.startswith("MF") or self.name.startswith("SF")) and not self.name.startswith("SFNode"):
            str += "this.value_"
        elif not self.name.startswith("SFNode"):
            str += "{"
        str += ", ".join(params)
        if (self.name.startswith("MF") or self.name.startswith("SF")) and not self.name.startswith("SFNode"):
            str += ""
        elif not self.name.startswith("SFNode"):
            str += "}"
        str += ")"
#        if self.name not in ("X3DPrototypeInstance", "X3DFontStyleNode", "X3DNode", "X3DBoundedObject", "unit", "IS", "X3DMetadataObject", "X3DUrlObject", "X3DProgrammableShaderObject", "Scene", "X3DPickableObject", "IMPORT", "component", "ProtoBody", "ProtoInterface", "EXPORT", "ProtoDeclare", "X3D", "ExternProtoDeclare", "X3DFogObject", "fieldValue", "ROUTE", "head", "connect", "field") and not self.name.startswith("SF") and not self.name.startswith("MF"):
#             str += "\n\t\t : super("
#             params = []
#             # parent is an SF field
#             if self.name not in ("Shape", "meta"):
#                 fields = self.node.iter("field")
#                 for field in fields:
#                     name = field.get("name")
#                     if not name.startswith("set_") and not name.startswith("addC") and not name.startswith("remove"):
#                         fld = self.getField(name)
#                         if not fld in self.paramDefined.keys():
#                             self.paramDefined[fld] = True
#                             params.append(fld+":"+fld)
#             for parent in self.superclasses:
#                 try:
#                     nde = classes[parent].node
#
#                     fields = nde.iter("field")
#                     for field in fields:
#                         name = field.get("name")
#                         if not name.startswith("set_") and not name.startswith("addC") and not name.startswith("remove"):
#                             fld = self.getField(name)
#                             if not fld in self.paramDefined.keys():
#                                 self.paramDefined[fld] = True
#                                 params.append(fld+":"+fld)
#                 except:
#                     pass
#             # parent is an SF field
#             if self.name in ("Shape", "meta"):
#                 pass
#                 # str += "{"
#             str += ", ".join(params)
#             # parent is an SF field
#             if self.name in ("Shape", "meta"):
#                 pass
#                 # str += "}"
#             str += ")"
        str += " {\n"
            
        # create constructor body
        fields = self.node.iter("field")

        #for field in fields:
            #str += self.setUpField(field, "initializeOnly")

        if self.name == "Script":
            str += self.setUpAloneField("field", 'MFNode', "initializeOnly")
            str += self.setUpAloneField("IS", 'MFNode', "initializeOnly")
        if self.name == "ComposedShader":
            str += self.setUpAloneField("field", 'MFNode', "initializeOnly")
        if self.name == "field":
            str += self.setUpAloneField("children", 'MFNode', "initializeOnly")
        if self.name == "Scene":
            str += self.setUpAloneField("LayerSet", 'MFNode', "initializeOnly")

        str += "    }\n"

        # now create other functions
        fields = self.node.iter("field")

        #for field in fields:
        #    str += self.setUpField(field, "inputOutput")

        #if not re.search(r"^SF", self.name) and not re.search(r"^MF", self.name):
        #    str += self.setUpAloneField("comments", '#comment', "inputOnly")

        if self.name == "ComposedShader":
            str += self.setUpAloneField("sourceCode", '#cdata', "inputOnly")
        elif self.name == "Script":
            str += self.setUpAloneField("sourceCode", '#cdata', "inputOnly")
        elif self.name == "Collision":
            str += self.setUpAloneField("proxy", 'MFNode', "inputOnly")
        elif self.name == "LayerSet":
            str += self.setUpAloneField("order", 'MFInt32', "inputOnly")

        if self.name == "ComposedShader":
            str += self.setUpAloneField("field", 'MFNode', "inputOutput")
        elif self.name == "Script":
            str += self.setUpAloneField("field", 'MFNode', "inputOutput")
        elif self.name == "field":
            str += self.setUpAloneField("children", 'MFNode', "inputOutput")
        elif self.name == "head":
            str += self.setUpAloneField("meta", 'MFNode', "inputOutput")
        elif self.name == "Scene":
            str += self.setUpAloneField("LayerSet", 'MFNode', "inputOutput")

        if self.name in [ "TouchSensor", "NavigationInfo", "Viewpoint", "OrientationInterpolator", "PositionInterpolator", "DirectionalLight", "Group", "Transform", "Shape", "Material", "Script", "ProtoInstance", "ShaderPart", "X3DNode" ]:
            str += self.setUpAloneField("IS", 'MFNode', "inputOutput")

        if self.name in [ "X3DNode" ]:
            str += self.setUpAloneField("kwargs", 'Map', "inputOutput")

        # stream to XML
#        str += "    toXMLNode(attrName) {\n"
#        str += "        var str = '';\n"
#        if self.name.startswith("MF"):
#            str += "        for (let i in this.__value) {\n"
#            str += "            if (this.__value[i].toXMLNode is Function) {\n"
#            str += "                str += this.__value[i].toXMLNode(attrName);\n"
#            str += "            } else {\n"
#            str += "                str += this.__value;\n"
#            str += "            }\n"
#            str += "        }\n"
#        elif self.name.startswith("SFNode"):
#            str += "            if (this.__value.toXMLNode is Function) {\n"
#            str += "                str += this.__value.toXMLNode(attrName);\n"
#            str += "            }\n"
#        elif self.name.startswith("SF"):
#            str += "        if (this.__value != null) {\n"
#            str += "            str += ' '+attrName+'='+'\"'+this.__value+'\"';\n"
#            str += "        }\n"
#        else:
#            str += "        str += '<"+self.name+"';\n"
#
#            fields = self.node.iter("field")
#            for field in fields:
#                if field.get("type") not in ['SFNode', 'MFNode']:
#                    str += self.setUpField(field, "toXMLNode")
#            str += "        str += '>';\n"
#
#            fields = self.node.iter("field")
#            for field in fields:
#                if field.get("type") in ['SFNode', 'MFNode']:
#                    str += self.setUpField(field, "toXMLNode")
#            str += "        str += '</"+self.name+">';\n"
#        str += "        return str;\n\t}\n"
#
        str += '}\n\n'



        self.printed = True
        return str
code = "// Do not modify\n"
code += "// Copyright 2021 by John Carlson.  All rights reserved.\n"
# code += "import 'dart:math';\n"

soup = xml.etree.ElementTree.parse(open("/c/x3d-code/www.web3d.org/specifications/X3dUnifiedObjectModel-4.0.xml")).getroot()

classes = {}

fts = soup.iter("FieldType")
for ft in fts:
    classes[ft.get('type')] = ClassPrinter(ft, ft.get('type'), "")

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, st.get('name'), "")

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, ant.get('name'))

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, aot.get('name'))

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, cn.get('name'), "")

for k,v in classes.items():
    code += v.printClass()

f = open("x3d.dart", "w")
f.write(code)
f.close()
