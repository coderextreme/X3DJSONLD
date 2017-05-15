import xml.etree.ElementTree
import re
import sys

PY3 = sys.version_info[0] == 3


def isString(obj):
    if PY3:
        return isinstance(obj, str)
    else:
        return isinstance(obj, basestring)


class ClassPrinter:
    def __init__(self, node, interface):
        self.parents = interface
        self.children = []
        self.printed = False
        if isString(node):
            self.name = node
            self.node = False
        else:
            self.name = node.get("name")
            self.node = node

    def findParents(self):
        if self.node:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                self.parents.update({ inher.get('baseType') : 1} )
                self.parents.update(classes[inher.get('baseType')].findParents())
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                self.parents.update({ addinher.get('baseType') : 1} )
                self.parents.update(classes[addinher.get('baseType')].findParents())

            return self.parents

    def findChildren(self):
        if self.node:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                classes[inher.get('baseType')].children.append(self.name)
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                classes[addinher.get('baseType')].children.append(self.name)

            return self.children

    def listChildren(self, fieldName, fieldType):
            str = ""
            if not self.name.startswith("X3D"):
                str += '\t\t\t\t\t\t\t"' + self.name + '" : {\n'
                str += '\t\t\t\t\t\t\t\t"$ref":"#/definitions/'+self.name+'"\n'
                str += '\t\t\t\t\t\t\t},\n'
            for child in self.children:
               str += classes[child].listChildren(fieldName, fieldType)
            return str

    def listParents(self, fieldName, fieldType):
            str = ""
            str += '\t\t\t\t\t\t\t"' + self.name + '" : {\n'
            str += '\t\t\t\t\t\t\t\t"$ref":"#/definitions/'+self.name+'"\n'
            str += '\t\t\t\t\t\t\t},\n'
            for parent in self.parents:
               str += classes[parent].listParents(fieldName, fieldType)
            return str

    def printTypeMinMax(self, field):
        str = ""
        try:
            str += '\t\t\t\t\t\t"maximum" : '+field.get("maxExclusive") + ',\n'
            str += '\t\t\t\t\t\t"exclusiveMaximum" : true,\n'
        except:
            pass
        try:
            str += '\t\t\t\t\t\t"maximum" : '+field.get("maxInclusive") + ',\n'
        except:
            pass

        try:
            str += '\t\t\t\t\t\t"minimum" : '+field.get("minExclusive") + ',\n'
            str += '\t\t\t\t\t\t"exclusiveMinimum" : true,\n'
        except:
            pass

        try:
            str += '\t\t\t\t\t\t"minimum" : '+field.get("minInclusive") + ',\n'
        except:
            pass
        str += '\t\t\t\t\t\t"type":"'
        if field.get("type") == "MFBool":
            str += 'boolean"\n'
        elif field.get("type") == "MFInt32":
            str += 'integer"\n'
        elif field.get("type") == "MFNode":
            str += 'object"\n'
        elif field.get("type") == "MFString":
            str += 'string"\n'
        else:
            str += 'number"\n'
        return str

    def printField(self, field):
        str = '\t\t\t\t"@' + field.get("name") + '" : {\n'
        if not field.get("type").startswith("MF"):
            try:
                str += '\t\t\t\t\t"maximum" : '+field.get("maxExclusive") + ',\n'
                str += '\t\t\t\t\t"exclusiveMaximum" : true,\n'
            except:
                pass
            try:
                str += '\t\t\t\t\t"maximum" : '+field.get("maxInclusive") + ',\n'
            except:
                pass

            try:
                str += '\t\t\t\t\t"minimum" : '+field.get("minExclusive") + ',\n'
                str += '\t\t\t\t\t"exclusiveMinimum" : true,\n'
            except:
                pass

            try:
                str += '\t\t\t\t\t"minimum" : '+field.get("minInclusive") + ',\n'
            except:
                pass

            # enumerations
            enumerations = field.iter("enumeration")
            enums = []
            if enumerations is not None:
                for enum in enumerations:
                    enums.append(enum.get("value"))
                if enums != []:
                    str += '\t\t\t\t\t"enum": [\n'
                    str += '\t\t\t\t\t\t"'
                    str += '",\n\t\t\t\t\t\t"'.join(enums)
                    str += '"\n\t\t\t\t\t],\n'


            try:  # default value
                if field.get("type") == "SFString":
                    str += '\t\t\t\t\t"default":'+'"'+field.get("default")+'",\n'
                elif field.get("type") == "SFBool":
                    str += '\t\t\t\t\t"default":'+field.get("default")+',\n'
                elif field.get("type") == "SFDouble":
                    str += '\t\t\t\t\t"default":'+field.get("default")+',\n'
                elif field.get("type") == "SFTime":
                    str += '\t\t\t\t\t"default":'+field.get("default")+',\n'
                elif field.get("type") == "SFFloat":
                    str += '\t\t\t\t\t"default":'+field.get("default")+',\n'
                elif field.get("type") == "SFInt32":
                    str += '\t\t\t\t\t"default":'+field.get("default")+',\n'
                elif field.get("type") == "SFNode":
                    str += '__TODO__"\n'
                # don't need to specify default for array here
                #else:
                #   str += '\t\t\t\t\t"default":'+'['+field.get("default").replace(' ',',')+'],\n'
            except:
                pass
        str += '\t\t\t\t\t"type":"'
        if field.get("type") == "SFBool":
            str += 'boolean"\n'
        elif field.get("type") == "SFDouble":
            str += 'number"\n'
        elif field.get("type") == "SFTime":
            str += 'number"\n'
        elif field.get("type") == "SFFloat":
            str += 'number"\n'
        elif field.get("type") == "SFInt32":
            str += 'integer"\n'
        elif field.get("type") == "SFNode":
            str += 'object"\n'
        elif field.get("type") == "SFString":
            str += 'string"\n'
        else:
            str += 'array",\n'
            if field.get("name").endswith("url") or field.get("name").endswith("Url"):
                str += '\t\t\t\t\t"minItems" : 1,\n'
            elif field.get("name") == "ROUTE":
                str += '\t\t\t\t\t"minItems" : 1,\n'
            elif field.get("name") == "Scene":
                str += '\t\t\t\t\t"minItems" : 1,\n'
            elif field.get("type") == "SFVec2f":
                str += '\t\t\t\t\t"minItems" : 2,\n'
                str += '\t\t\t\t\t"maxItems" : 2,\n'
            elif field.get("type") == "MFVec2f":
                str += '\t\t\t\t\t"minItems" : 2,\n'
            elif field.get("type") == "SFVec3f":
                str += '\t\t\t\t\t"minItems" : 3,\n'
                str += '\t\t\t\t\t"maxItems" : 3,\n'
            elif field.get("type") == "MFVec3f":
                str += '\t\t\t\t\t"minItems" : 3,\n'
            elif field.get("type") == "SFVec4f":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field.get("type") == "MFVec4f":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            elif field.get("type") == "SFVec2d":
                str += '\t\t\t\t\t"minItems" : 2,\n'
                str += '\t\t\t\t\t"maxItems" : 2,\n'
            elif field.get("type") == "MFVec2d":
                str += '\t\t\t\t\t"minItems" : 2,\n'
            elif field.get("type") == "SFVec3d":
                str += '\t\t\t\t\t"minItems" : 3,\n'
                str += '\t\t\t\t\t"maxItems" : 3,\n'
            elif field.get("type") == "MFVec3d":
                str += '\t\t\t\t\t"minItems" : 3,\n'
            elif field.get("type") == "SFVec4d":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field.get("type") == "MFVec4d":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            elif field.get("type") == "SFColor":
                str += '\t\t\t\t\t"minItems" : 3,\n'
                str += '\t\t\t\t\t"maxItems" : 3,\n'
            elif field.get("type") == "MFColor":
                str += '\t\t\t\t\t"minItems" : 3,\n'
            elif field.get("type") == "SFColorRGBA":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field.get("type") == "MFColorRGBA":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            elif field.get("type") == "SFRotation":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field.get("type") == "MFRotation":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            else:
                try:
                    str += '\t\t\t\t\t"minItems" : '+field.get("minOccurs") + ',\n'
                except:
                    pass

                try:
                    str += '\t\t\t\t\t"maxItems" : '+field.get("maxOccurs") + ',\n'
                except:
                    pass

            # enumerations
            enumerations = field.iter("enumeration")
            enums = []
            if enumerations is not None:
                for enum in enumerations:
                    enums.append(enum.get("value").replace('"', '\\"'))

            allTheSame = True
            firstValue = None
            str += '\t\t\t\t\t"items": '
            try:
                firstTime = True
                if field.get("type") == "MFString":
                    for item in field.get("default").substring(1, field.get("default").length-2).split('" "'):
                        if firstTime:
                            firstTime = False
                            firstValue = item
                        else:
                            if firstValue != item:
                                allTheSame = False

                else:
                    for item in field.get("default").split(' '):
                        if firstTime:
                            firstTime = False
                            firstValue = item
                        else:
                            if firstValue != item:
                                allTheSame = False
            except:
                pass
            if allTheSame:  # or an exception was thrown
                str += '{\n'
                if field.get("name").endswith("url") or field.get("name").endswith("Url"):
                    str += '\t\t\t\t\t"format":"uri",\n'
                if enums != []:
                    str += '\t\t\t\t\t\t"enum": [\n'
                    str += '\t\t\t\t\t\t\t"'
                    str += '",\n\t\t\t\t\t\t\t"'.join(enums)
                    str += '"\n\t\t\t\t\t\t],\n'
                if firstValue is not None:
                    if field.get("type") == "MFString":
                        str += '\t\t\t\t\t\t"default":"'+firstValue+'",\n'
                    else:
                        str += '\t\t\t\t\t\t"default":'+firstValue+',\n'
                str += self.printTypeMinMax(field)
                str += '\t\t\t\t\t}\n'
            else:
                firstTime = True
                str += '[\n'
                if field.get("type") == "MFString":
                    for item in field.get("default").substring(1, field.get("default").length-2).split('" "'):
                        if firstTime:
                            firstTime = False
                        else:
                            str += ',\n'
                        str += '\t\t\t\t\t{\n'
                        if field.get("name").endswith("url") or field.get("name").endswith("Url"):
                            str += '\t\t\t\t\t\t\t"format":"uri",\n'
                        if enums != []:
                            str += '\t\t\t\t\t\t"enum": [\n'
                            str += '\t\t\t\t\t\t\t"'
                            str += '",\n\t\t\t\t\t\t\t"'.join(enums)
                            str += '"\n\t\t\t\t\t\t],\n'
                        str += '\t\t\t\t\t\t\t"default":"'+item+'",\n'
                        str += self.printTypeMinMax(field)
                        str += '\t\t\t\t\t}'
                else:
                    for item in field.get("default").split(' '):
                        if firstTime:
                            firstTime = False
                        else:
                            str += ',\n'
                        str += '\t\t\t\t\t{\n'
                        if enums != []:
                            str += '\t\t\t\t\t\t"enum": [\n'
                            str += '\t\t\t\t\t\t\t"'
                            str += '",\n\t\t\t\t\t\t\t"'.join(enums)
                            str += '"\n\t\t\t\t\t\t],\n'
                        str += '\t\t\t\t\t\t"default":'+item+',\n'
                        str += self.printTypeMinMax(field)
                        str += '\t\t\t\t\t}\n'
                str += '\t\t\t\t\t],\n'
                str += '\t\t\t\t\t"additionalItems": '
                if field.get('type').startswith("SF"):
                    str += 'false\n'
                elif field.get('type').startswith("MF"):
                    str += '{\n'
                    str += self.printTypeMinMax(field)
                    if allTheSame:  # or an exception was thrown
                        if firstValue is not None:
                            if field.get("type") == "MFString":
                                str += '\t\t\t\t\t\t"default":"'+firstValue+'",\n'
                            else:
                                str += '\t\t\t\t\t\t"default":'+firstValue+',\n'
                    str += '\t\t\t\t\t}'
        str += '\t\t\t\t\t},\n'
        return str

    def printClass(self):
        str = ""
        if self.name.startswith("X3D") and self.name != "X3D":
            return str
        if self.printed:
            return str
        for parent in self.parents:
            try:
                str += classes[parent].printClass()
            except:
                pass
        str += '\t\t"'+self.name+'" : {\n'
        if self.name == "meta" or self.name == 'component' or self.name == 'connect' or self.name == 'unit' or self.name == 'field':
            str += '\t\t\t"type" : "array",\n'
            str += '\t\t\t"items" : {\n'
        str += '\t\t\t"type" : "object",\n'
        str += '\t\t\t"properties" : {\n'
        if self.name == "X3D":
            str += '''\
                                "@xsd:noNamespaceSchemaLocation": {
                                        "type": "string",
                                        "format": "uri"
                                },
                                "JSON schema": {
                                        "type": "string"
                                },
                                "encoding": {
                                        "type": "string",
                                        "enum": [
                                                "UTF-8",
                                                "UTF-16",
                                                "UTF-32"
                                        ]
                                },
                                "-children": {
                                        "type": "array",
                                        "items": {
                                                "type": "object",
                                                "properties": {
                                                        "#comment": {
                                                                "type": "string"
                                                        }
                                                },
                                                "additionalProperties": false
                                        }
                                },

'''
        elif self.name == "head":
            str += '''\
                                "-children": {
                                        "type": "array",
                                        "items": {
                                                "type": "object",
                                                "properties": {
                                                        "#comment": {
                                                                "type": "string"
                                                        }
                                                },
                                                "additionalProperties": false
                                        }
                            },
'''
        # elif self.name != "Anchor" and self.name != 'Billboard' and \
        #      self.name != "CADAssembly" and self.name != 'CADPart' and \
        #      self.name != "Collision" and self.name != 'Contour2D' and \
        #      self.name != "EspduTransform" and self.name != 'EXPORT' and \
        #      self.name != "ExternProtoDeclare" and self.name != 'GeneratedCubeMapTexture' and \
        #      self.name != "GeoLocation" and self.name != 'GeoLOD' and \
        #      self.name != "GeoTransform" and self.name != 'Group' and \
        #      self.name != "HAnimJoint" and self.name != 'HAnimSegment' and \
        #      self.name != "HAnimSite" and self.name != 'IMPORT' and \
        #      self.name != "IS" and self.name != 'Layer' and \
        #      self.name != "LayoutGroup" and self.name != 'LayoutLayer' and \
        #      self.name != "LOD" and self.name != 'PickableGroup' and \
        #      self.name != "ProtoBody" and self.name != 'ProtoDeclare' and \
        #      self.name != "ProtoInstance" and self.name != 'ProtoInterface' and \
        #      self.name != "ROUTE" and self.name != 'Scene' and \
        #      self.name != "ScreenGroup" and self.name != 'StaticGroup' and \
        #      self.name != "Switch" and self.name != 'Transform' and \
        #      self.name != "ViewpointGroup" and self.name != 'Viewport' and \
        #      self.name != "X3D" and self.name != 'field' and \
        #      self.name != "fieldValue" and self.name != 'head' and \
        #      self.name != "meta" and \
        #      self.name != "unit" and self.name != 'component':
        #     str += '''\
        #                         "-children": {
        #                                 "$ref": "#/definitions/-commentRoute"
        #                         },
#'''
#        else:
#            str += '''\
#				"-children": {
#					"$ref": "#/definitions/-children"
#				}\
#'''
        if self.node:
            fields = self.node.iter("field")
            required = []
            for field in fields:
                if not field.get("name").startswith("X3D") or field.get("name") == "X3D":
                    try:
                        if field.get("use") == "required":
                            required.append(field.get("name"))
                    except:
                        pass

                    if not field.get("name").startswith("add") and not field.get("name").startswith("remove"):
                        if field.get("type") == "MFNode" or field.get("type") == "SFNode":
                            try:
                                if classes[field.get("name")] != None and field.get("name") != "X3D":
                                    str += '\t\t\t\t"' + field.get("name") + '" : {\n'
                                    str += '\t\t\t\t\t"$ref":"#/definitions/'+ field.get("name") +'"\n'
                                    str += '\t\t\t\t},\n'
                            except:
                                str += '\t\t\t\t"-' + field.get("acceptableNodeTypes") + '" : {\n'
                                str += '\t\t\t\t\t"$ref":"#/definitions/-'+ field.get("name") +'"\n'
                                str += '\t\t\t\t},\n'
                                # container fields
                                cf = '\t\t\t\t"-' + field.get("acceptableNodeTypes") + '" : {\n'
                                if field.get("type") == "MFNode":
                                    cf += '\t\t\t\t\t"type": "array",\n'
                                    cf += '\t\t\t\t\t"minItems": 1,\n'
                                    cf += '\t\t\t\t\t"items": {\n'
                                cf += '\t\t\t\t\t\t"type": "object",\n'
                                cf += '\t\t\t\t\t\t"properties": {\n'
                                acnts = field.get("acceptableNodeTypes").split("|")
                                for acnt in acnts:
                                    cf += classes[acnt].listChildren(field.get("name"), field.get("type"))
                                    #str += "___________PARENTS____________\n"
                                    #str += classes[acnt].listParents(field.get("name"), field.get("type"))
                                if cf[-2] == ',':
                                     cf = cf[:-2] + '\n' # strip off comma
                                cf += '\t\t\t\t\t\t},\n'
                                cf += '\t\t\t\t\t\t"additionalProperties": false\n'
                                if field.get("type") == "MFNode":
                                    cf += '\t\t\t\t\t}\n'
                                cf += '\t\t\t\t},\n'
                                containerFields[field.get("acceptableNodeTypes")] = cf
                        else:
                            str += self.printField(field)
            if str[-2] == ',':
                str = str[:-2] + '\n' # strip off comma

        str += '\t\t\t},\n'
        if required != []:
            str += '\t\t\t"required": [\n'
            str += '\t\t\t\t"@'
            str += '",\n\t\t\t\t"@'.join(required)
            str += '"\n\t\t\t],\n'
        str += '\t\t\t"additionalProperties": false\n'
        if self.name == 'meta' or self.name == 'component' or self.name == 'connect' or self.name == 'unit' or self.name == 'field':
            str += '\t\t}\n'
        str += '\t\t},\n'
        self.printed = True
        return str

code = '''{
        "$schema": "http://json-schema.org/draft-04/schema#",
        "title": "JSON Schema X3D V3.3",
        "description": "Experimental JSON Schema for X3D V3.3 ",
        "type": "object",
        "properties": {
                "X3D": {
                        "$ref": "#/definitions/X3D"
                }
        },
        "required": [
                "X3D"
        ],
        "additionalProperties": false,
        "definitions": {
                "-commentRoute": {
                        "description": "Comments and ROUTEs",
                        "type": "array",
                        "minItems": 1,
                        "items": {
                                "type": "object",
                                "properties": {
                                        "#comment": {
                                                "type": "string"
                                        },
                                        "ROUTE": {
                                                "$ref": "#/definitions/ROUTE"
                                        },
                                        "IMPORT": {
                                                "$ref": "#/definitions/IMPORT"
                                        },
                                        "EXPORT": {
                                                "$ref": "#/definitions/EXPORT"
                                        }
                                },
                                "additionalProperties": false
                        }
                },
'''


soup = xml.etree.ElementTree.parse("X3DObjectModel-3.3.xml").getroot()

classes = {}
containerFields = {}

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, {})

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {})
classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {})

aots = soup.iter("AbstractObjectType")
for aot in aots:
    classes[aot.get('name')] = ClassPrinter(aot, {})

cns = soup.iter("ConcreteNode")
for cn in cns:
    classes[cn.get('name')] = ClassPrinter(cn, { "X3DConcreteNode" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteNode"].children.append(cn.get("name"))
    classes["X3DChildNode"].children.append(cn.get("name"))

sts = soup.iter("Statement")
for st in sts:
    classes[st.get('name')] = ClassPrinter(st, { "X3DConcreteStatement" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteStatement"].children.append(st.get("name"))
    classes["X3DChildNode"].children.append(st.get("name"))

for k,v in classes.items():
    v.findChildren()

for k,v in classes.items():
    v.findParents()

for k,v in classes.items():
    code += v.printClass()

for k,v in containerFields.items():
    code += v

if code[-2] == ',':
    code = code[:-2] + '\n' # strip off comma
code += '\t}\n}\n'

f = open("x3d-5.0-JSONSchema.json", "w")
f.write(code)
f.close()
