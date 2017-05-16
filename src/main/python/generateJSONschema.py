from bs4 import BeautifulSoup
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
            self.node = None
        else:
            self.name = node["name"]
            self.node = node

    def findParents(self):
        if self.node is not None:
            inhers = self.node.find_all("Inheritance")
            for inher in inhers:
                self.parents.update({ inher['baseType'] : 1} )
                self.parents.update(classes[inher['baseType']].findParents())
    
            addinhers = self.node.find_all("AdditionalInheritance")
            for addinher in addinhers:
                self.parents.update({ addinher['baseType'] : 1} )
                self.parents.update(classes[addinher['baseType']].findParents())

            return self.parents

    def findChildren(self):
        if self.node is not None:
            inhers = self.node.find_all("Inheritance")
            for inher in inhers:
                classes[inher['baseType']].children.append(self.name)
    
            addinhers = self.node.find_all("AdditionalInheritance")
            for addinher in addinhers:
                classes[addinher['baseType']].children.append(self.name)

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
            str += '\t\t\t\t\t\t"maximum" : '+field["maxExclusive"] + ',\n'
            str += '\t\t\t\t\t\t"exclusiveMaximum" : true,\n'
        except:
            pass
        try:
            str += '\t\t\t\t\t\t"maximum" : '+field["maxInclusive"] + ',\n'
        except:
            pass

        try:
            str += '\t\t\t\t\t\t"minimum" : '+field["minExclusive"] + ',\n'
            str += '\t\t\t\t\t\t"exclusiveMinimum" : true,\n'
        except:
            pass

        try:
            str += '\t\t\t\t\t\t"minimum" : '+field["minInclusive"] + ',\n'
        except:
            pass
        str += '\t\t\t\t\t\t"type":"'
        if field["type"] == "MFBool":
            str += 'boolean"\n'
        elif field["type"] == "MFInt32":
            str += 'integer"\n'
        elif field["type"] == "MFNode":
            str += 'object"\n'
        elif field["type"] == "MFString":
            str += 'string"\n'
        else:
            str += 'number"\n'
        return str

    def printField(self, field):
        str = '\t\t\t\t"@' + field["name"] + '" : {\n'
        if not field["type"].startswith("MF"):
            try:
                str += '\t\t\t\t\t"maximum" : '+field["maxExclusive"] + ',\n'
                str += '\t\t\t\t\t"exclusiveMaximum" : true,\n'
            except:
                pass
            try:
                str += '\t\t\t\t\t"maximum" : '+field["maxInclusive"] + ',\n'
            except:
                pass

            try:
                str += '\t\t\t\t\t"minimum" : '+field["minExclusive"] + ',\n'
                str += '\t\t\t\t\t"exclusiveMinimum" : true,\n'
            except:
                pass

            try:
                str += '\t\t\t\t\t"minimum" : '+field["minInclusive"] + ',\n'
            except:
                pass

            # enumerations
            enumerations = field.find_all("enumeration")
            enums = []
            if enumerations is not None:
                for enum in enumerations:
                    enums.append(enum["value"])
                if enums != []:
                    str += '\t\t\t\t\t"enum": [\n'
                    str += '\t\t\t\t\t\t"'
                    str += '",\n\t\t\t\t\t\t"'.join(enums)
                    str += '"\n\t\t\t\t\t],\n'


            try:  # default value
                if field["type"] == "SFString":
                    str += '\t\t\t\t\t"default":'+'"'+field["default"]+'",\n'
                elif field["type"] == "SFBool":
                    str += '\t\t\t\t\t"default":'+field["default"]+',\n'
                elif field["type"] == "SFDouble":
                    str += '\t\t\t\t\t"default":'+field["default"]+',\n'
                elif field["type"] == "SFTime":
                    str += '\t\t\t\t\t"default":'+field["default"]+',\n'
                elif field["type"] == "SFFloat":
                    str += '\t\t\t\t\t"default":'+field["default"]+',\n'
                elif field["type"] == "SFInt32":
                    str += '\t\t\t\t\t"default":'+field["default"]+',\n'
                elif field["type"] == "SFNode":
                    str += '__TODO__"\n'
                # don't need to specify default for array here
                #else:
                #   str += '\t\t\t\t\t"default":'+'['+field["default"].replace(' ',',')+'],\n'
            except:
                pass
        str += '\t\t\t\t\t"type":"'
        if field["type"] == "SFBool":
            str += 'boolean"\n'
        elif field["type"] == "SFDouble":
            str += 'number"\n'
        elif field["type"] == "SFTime":
            str += 'number"\n'
        elif field["type"] == "SFFloat":
            str += 'number"\n'
        elif field["type"] == "SFInt32":
            str += 'integer"\n'
        elif field["type"] == "SFNode":
            str += 'object"\n'
        elif field["type"] == "SFString":
            str += 'string"\n'
        else:
            str += 'array",\n'
            if field["name"].endswith("url") or field["name"].endswith("Url"):
                str += '\t\t\t\t\t"minItems" : 1,\n'
            elif field["name"] == "ROUTE":
                str += '\t\t\t\t\t"minItems" : 1,\n'
            elif field["name"] == "Scene":
                str += '\t\t\t\t\t"minItems" : 1,\n'
            elif field["type"] == "SFVec2f":
                str += '\t\t\t\t\t"minItems" : 2,\n'
                str += '\t\t\t\t\t"maxItems" : 2,\n'
            elif field["type"] == "MFVec2f":
                str += '\t\t\t\t\t"minItems" : 2,\n'
            elif field["type"] == "SFVec3f":
                str += '\t\t\t\t\t"minItems" : 3,\n'
                str += '\t\t\t\t\t"maxItems" : 3,\n'
            elif field["type"] == "MFVec3f":
                str += '\t\t\t\t\t"minItems" : 3,\n'
            elif field["type"] == "SFVec4f":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field["type"] == "MFVec4f":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            elif field["type"] == "SFVec2d":
                str += '\t\t\t\t\t"minItems" : 2,\n'
                str += '\t\t\t\t\t"maxItems" : 2,\n'
            elif field["type"] == "MFVec2d":
                str += '\t\t\t\t\t"minItems" : 2,\n'
            elif field["type"] == "SFVec3d":
                str += '\t\t\t\t\t"minItems" : 3,\n'
                str += '\t\t\t\t\t"maxItems" : 3,\n'
            elif field["type"] == "MFVec3d":
                str += '\t\t\t\t\t"minItems" : 3,\n'
            elif field["type"] == "SFVec4d":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field["type"] == "MFVec4d":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            elif field["type"] == "SFColor":
                str += '\t\t\t\t\t"minItems" : 3,\n'
                str += '\t\t\t\t\t"maxItems" : 3,\n'
            elif field["type"] == "MFColor":
                str += '\t\t\t\t\t"minItems" : 3,\n'
            elif field["type"] == "SFColorRGBA":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field["type"] == "MFColorRGBA":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            elif field["type"] == "SFRotation":
                str += '\t\t\t\t\t"minItems" : 4,\n'
                str += '\t\t\t\t\t"maxItems" : 4,\n'
            elif field["type"] == "MFRotation":
                str += '\t\t\t\t\t"minItems" : 4,\n'
            else:
                try:
                    str += '\t\t\t\t\t"minItems" : '+field["minOccurs"] + ',\n'
                except:
                    pass

                try:
                    str += '\t\t\t\t\t"maxItems" : '+field["maxOccurs"] + ',\n'
                except:
                    pass

            # enumerations
            enumerations = field.find_all("enumeration")
            enums = []
            if enumerations is not None:
                for enum in enumerations:
                    enums.append(enum["value"].replace('"', '\\"'))

            allTheSame = True
            firstValue = None
            str += '\t\t\t\t\t"items": '
            try:
                firstTime = True
                if field["type"] == "MFString":
                    for item in field["default"].substring(1, field["default"].length-2).split('" "'):
                        if firstTime:
                            firstTime = False
                            firstValue = item
                        else:
                            if firstValue != item:
                                allTheSame = False

                else:
                    for item in field["default"].split(' '):
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
                if field["name"].endswith("url") or field["name"].endswith("Url"):
                    str += '\t\t\t\t\t"format":"uri",\n'
                if enums != []:
                    str += '\t\t\t\t\t\t"enum": [\n'
                    str += '\t\t\t\t\t\t\t"'
                    str += '",\n\t\t\t\t\t\t\t"'.join(enums)
                    str += '"\n\t\t\t\t\t\t],\n'
                if firstValue is not None:
                    if field["type"] == "MFString":
                        str += '\t\t\t\t\t\t"default":"'+firstValue+'",\n'
                    else:
                        str += '\t\t\t\t\t\t"default":'+firstValue+',\n'
                str += self.printTypeMinMax(field)
                str += '\t\t\t\t\t}\n'
            else:
                firstTime = True
                str += '[\n'
                if field["type"] == "MFString":
                    for item in field["default"].substring(1, field["default"].length-2).split('" "'):
                        if firstTime:
                            firstTime = False
                        else:
                            str += ',\n'
                        str += '\t\t\t\t\t{\n'
                        if field["name"].endswith("url") or field["name"].endswith("Url"):
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
                    for item in field["default"].split(' '):
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
                if field['type'].startswith("SF"):
                    str += 'false\n'
                elif field['type'].startswith("MF"):
                    str += '{\n'
                    str += self.printTypeMinMax(field)
                    if allTheSame:  # or an exception was thrown
                        if firstValue is not None:
                            if field["type"] == "MFString":
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
        elif self.name != "Anchor" and self.name != 'Billboard' and \
             self.name != "CADAssembly" and self.name != 'CADPart' and \
             self.name != "Collision" and self.name != 'Contour2D' and \
             self.name != "EspduTransform" and self.name != 'EXPORT' and \
             self.name != "ExternProtoDeclare" and self.name != 'GeneratedCubeMapTexture' and \
             self.name != "GeoLocation" and self.name != 'GeoLOD' and \
             self.name != "GeoTransform" and self.name != 'Group' and \
             self.name != "HAnimJoint" and self.name != 'HAnimSegment' and \
             self.name != "HAnimSite" and self.name != 'IMPORT' and \
             self.name != "IS" and self.name != 'Layer' and \
             self.name != "LayoutGroup" and self.name != 'LayoutLayer' and \
             self.name != "LOD" and self.name != 'PickableGroup' and \
             self.name != "ProtoBody" and self.name != 'ProtoDeclare' and \
             self.name != "ProtoInstance" and self.name != 'ProtoInterface' and \
             self.name != "ROUTE" and self.name != 'Scene' and \
             self.name != "ScreenGroup" and self.name != 'StaticGroup' and \
             self.name != "Switch" and self.name != 'Transform' and \
             self.name != "ViewpointGroup" and self.name != 'Viewport' and \
             self.name != "X3D" and self.name != 'field' and \
             self.name != "fieldValue" and self.name != 'head' and \
             self.name != "meta" and \
             self.name != "unit" and self.name != 'component':
            str += '''\
                                "-children": {
                                        "$ref": "#/definitions/-commentRoute"
                                },
'''
#        else:
#            str += '''\
#				"-children": {
#					"$ref": "#/definitions/-children"
#				}
#'''
        if self.node is not None:
            fields = self.node.find_all("field")
            required = []
            for field in fields:
                if not field["name"].startswith("X3D") or field["name"] == "X3D":
                    try:
                        if field["use"] == "required":
                            required.append(field["name"])
                    except:
                        pass

                    if not field["name"].startswith("add") and not field["name"].startswith("remove"):
                        if field["type"] == "MFNode" or field["type"] == "SFNode":
                            try:
                                if classes[field["name"]] != None and field["name"] != "X3D":
                                    str += '\t\t\t\t"' + field["name"] + '" : {\n'
                                    str += '\t\t\t\t\t"$ref":"#/definitions/'+ field["name"] +'"\n'
                                    str += '\t\t\t\t},\n'
                            except:
                                str += '\t\t\t\t"-' + field["name"] + '" : {\n'
                                str += '\t\t\t\t\t"$ref":"#/definitions/-'+ field["name"] +'"\n'
                                str += '\t\t\t\t},\n'
                                # container fields
                                cf = '\t\t\t\t"-' + field["name"] + '" : {\n'
                                if field["type"] == "MFNode":
                                    cf += '\t\t\t\t\t"type": "array",\n'
                                    cf += '\t\t\t\t\t"minItems": 1,\n'
                                    cf += '\t\t\t\t\t"items": {\n'
                                cf += '\t\t\t\t\t\t"type": "object",\n'
                                cf += '\t\t\t\t\t\t"properties": {\n'
                                acnts = field["acceptableNodeTypes"].split("|")
                                for acnt in acnts:
                                    cf += classes[acnt].listChildren(field["name"], field["type"])
                                    #str += "___________PARENTS____________\n"
                                    #str += classes[acnt].listParents(field["name"], field["type"])
                                if cf[-2] == ',':
                                     cf = cf[:-2] + '\n' # strip off comma
                                cf += '\t\t\t\t\t\t},\n'
                                cf += '\t\t\t\t\t\t"additionalProperties": false\n'
                                if field["type"] == "MFNode":
                                    cf += '\t\t\t\t\t}\n'
                                cf += '\t\t\t\t},\n'
                                containerFields[field["name"]] = cf
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
        "$schema": "https://json-schema.org/draft-04/schema#",
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


soup = BeautifulSoup(open("../../specifications/X3DObjectModel-3.3.xml"), "xml")

classes = {}
containerFields = {}

ants = soup.find_all("AbstractNodeType")
for ant in ants:
    classes[ant['name']] = ClassPrinter(ant, {})

classes["X3DConcreteNode"] = ClassPrinter("X3DConcreteNode", {})
classes["X3DConcreteStatement"] = ClassPrinter("X3DConcreteStatement", {})

aots = soup.find_all("AbstractObjectType")
for aot in aots:
    classes[aot['name']] = ClassPrinter(aot, {})

cns = soup.find_all("ConcreteNode")
for cn in cns:
    classes[cn['name']] = ClassPrinter(cn, { "X3DConcreteNode" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteNode"].children.append(cn["name"])
    classes["X3DChildNode"].children.append(cn["name"])

sts = soup.find_all("Statement")
for st in sts:
    classes[st['name']] = ClassPrinter(st, { "X3DConcreteStatement" : 1, "X3DChildNode" : 1 })
    classes["X3DConcreteStatement"].children.append(st["name"])
    classes["X3DChildNode"].children.append(st["name"])

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

f = open("../schema/x3d-5.0-JSONSchema.json", "w")
f.write(code)
f.close()
