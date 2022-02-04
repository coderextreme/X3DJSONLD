import xml.etree.ElementTree
import sys
import re

# childStatements and geoSystem are currently hardcoded.  We want to generated these from X3DUOM

PY3 = sys.version_info[0] == 3


rules = ""


def isString(obj):
    if PY3:
        return isinstance(obj, str)
    else:
        return isinstance(obj, basestring)


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
            self.node = node

    def findParents(self):
        if self.node is not None:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                self.parents.update({ inher.get('baseType') : 1} )
                if inher.get("baseType") is not None:
                    self.parents.update(classes[inher.get('baseType')].findParents())
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                self.parents.update({ addinher.get('baseType') : 1} )
                self.parents.update(classes[addinher.get('baseType')].findParents())

            return self.parents

    def findChildren(self):
        if self.node is not None:
            inhers = self.node.iter("Inheritance")
            for inher in inhers:
                if inher.get("baseType") is not None:
                    classes[inher.get('baseType')].children[self.name] = self.name
    
            addinhers = self.node.iter("AdditionalInheritance")
            for addinher in addinhers:
                classes[addinher.get('baseType')].children[self.name] = self.name

            return self.children

    def printList(self, doList):
        str = ""
        for k,v in doList.items():
            if not k.startswith("X3D"):
                rules += "If "+k+" starts with X3D, put out reference\n"
                str += '\t\t\t\t\t\t\t\t"' + k + '" : {\n'
                str += '\t\t\t\t\t\t\t\t\t"$ref":"#/$defs/'+k+'"\n'
                str += '\t\t\t\t\t\t\t\t},\n'
        return str

    def listChildren(self, doList):
            try:
                if doList[self.name] == True:
                    pass
            except:
                doList[self.name] = True
            for k,v in self.children.items():
               doList = classes[k].listChildren(doList)
            return doList

    def listParents(self):
            str = ""
                rules += "put out  "+self.name+" reference\n"
            str += '\t\t\t\t\t\t\t\t"' + self.name + '" : {\n'
            str += '\t\t\t\t\t\t\t\t\t"$ref":"#/$defs/'+self.name+'"\n'
            str += '\t\t\t\t\t\t\t\t},\n'
            for parent in self.parents:
               str += classes[parent].listParents()
            return str

    def printTypeMinMax(self, field):
        str = ""
        try:
            str += '\t\t\t\t\t\t"exclusiveMaximum" : '+field.get("maxExclusive") + ',\n'
        except:
            pass
        try:
            str += '\t\t\t\t\t\t"maximum" : '+field.get("maxInclusive") + ',\n'
        except:
            pass
        
        try:
            str += '\t\t\t\t\t\t"exclusiveMinimum" : '+field.get("minExclusive") + ',\n'
        except:
            pass
        try:
            str += '\t\t\t\t\t\t"minimum" : '+field.get("minInclusive") + ',\n'
        except:
            pass
        # if not field.get("type").startswith("MF") and not field.get("type") == "SFVec3f":
            # str += '\t\t\t\t\t\t"$comment":"'+field.get("type")+' '+field.get("accessType")+'",\n'
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

    def printField(self, field, namesyn):
        if field.get("accessType") == "inputOnly" or field.get("accessType") == "outputOnly":
            return ""
        if field.get(namesyn) == "geoSystem":
            str = '''\
            "@geoSystem": {
		"$ref": "#/$defs/@geoSystem"
            },
'''
            rules += "put out @geoSystem reference\n"
            return str
        str = '\t\t\t\t\t"@' + field.get(namesyn) + '" : {\n'
        rules += "put out field \n"
        #try:
        #    if regex[field.get("type")] is not None:
        #        str += '\t\t\t\t\t\t"pattern" : "^' + regex[field.get("type")].replace("\\", "\\\\") + '$",\n'
        #except KeyError:
        #    pass

        if field.get(namesyn) != "value" or  (self.name != 'field' and self.name != 'fieldValue'):
            rules += "if field name or synonym is not value, field or fieldValue \n"
            if not field.get("type").startswith("MF"):
                rules += "if field type starts with MF\n"
#                try:
#                    str += '\t\t\t\t\t\t"exclusiveMaximum" : '+field.get("maxExclusive") + ',\n'
#                except:
#                    pass
#                try:
#                    str += '\t\t\t\t\t\t"maximum" : '+field.get("maxInclusive") + ',\n'
#                except:
#                    pass
#
#                try:
#                    str += '\t\t\t\t\t\t"exclusiveMinimum" : '+field.get("minExclusive") + ',\n'
#                except:
#                    pass
#
#                try:
#                    str += '\t\t\t\t\t\t"minimum" : '+field.get("minInclusive") + ',\n'
#                except:
#                    pass

                # enumerations
                enumerations = field.iter("enumeration")
                enums = []
                rules += "get field enumerations\n"
                if enumerations is not None:
                    rules += "if enumerations is not None\n"
                    for enum in enumerations:
                        val = enum.get("value")
                        rules += "collect "+val+" into enumeration\n"
                        if ' ' in val:
                            val = '"'+val.replace('"', '\\"')+'"'
                        elif not '"' in val:
                            val = '"'+val+'"'
                        enums.append(val)
                    if enums != []:
                        rules += "if enumeration is not empty\n"
                        if field.get('additionalEnumerationValuesAllowed') == "true":
                            rules += "if enumeration open ended use anyOf schema\n"
                            str += '\t\t\t\t\t\t"anyOf" : [ {\n'
                        str += '\t\t\t\t\t\t"enum": [\n'
                        str += '\t\t\t\t\t\t\t'
                        str += ',\n\t\t\t\t\t\t\t'.join(enums)
                        str += '\n\t\t\t\t\t\t]'
                        rules += "if print out enumeration\n"
                        if field.get('additionalEnumerationValuesAllowed') == "true":
                            str += '\t\t\t\t\t\t},\n'
                            str += '\t\t\t\t\t\t{ "type" : "string" }\n'
                            str += '\t\t\t\t\t\t],\n'
                            rules += "if enumeration is openended, put out string type\n"
                        else:
                            str += ',\n'


                try:  # default value
                    rules += "Print out defaults for certain SD field types\n"
                    if field.get("type") == "SFString":
                        str += '\t\t\t\t\t\t"default":'+'"'+field.get("default")+'",\n'
                    elif field.get("type") == "SFBool":
                        str += '\t\t\t\t\t\t"default":'+field.get("default")+',\n'
                    elif field.get("type") == "SFDouble":
                        str += '\t\t\t\t\t\t"default":'+field.get("default")+',\n'
                    elif field.get("type") == "SFTime":
                        str += '\t\t\t\t\t\t"default":'+field.get("default")+',\n'
                    elif field.get("type") == "SFFloat":
                        str += '\t\t\t\t\t\t"default":'+field.get("default")+',\n'
                    elif field.get("type") == "SFInt32":
                        str += '\t\t\t\t\t\t"default":'+field.get("default")+',\n'
                    elif field.get("type") == "SFNode":
                        str += '__TODO__"\n'
                    # don't need to specify default for array here
                    #else:
                    #   str += '\t\t\t\t\t"default":'+'['+field.get("default").replace(' ',',')+'],\n'
                except:
                    pass
            if field.get('additionalEnumerationValuesAllowed') == "false" or field.get('additionalEnumeratrionValuesAllowed') is None:
                rules += "if enumeration is not open ended\n"
                rules += "print $comment\n"
                str += '\t\t\t\t\t\t"$comment":"'+field.get("type")+' '+field.get("accessType")+'",\n'
                rules += "print out JSON type for field\n"
                str += '\t\t\t\t\t\t"type":"'
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
                elif field.get("type") == "MFString" and field.get("name") == "type":
                    str += 'string"\n'
                else:
                    str += 'array",\n'
            rules += "Ignore certain SF and MFString fiedl types or field name type\n"
            if field.get("type") == "SFBool":
                pass
            elif field.get("type") == "SFDouble":
                pass
            elif field.get("type") == "SFTime":
                pass
            elif field.get("type") == "SFFloat":
                pass
            elif field.get("type") == "SFInt32":
                pass
            elif field.get("type") == "SFNode":
                pass
            elif field.get("type") == "SFString":
                pass
            elif field.get("type") == "MFString" and field.get("name") == "type":
                pass
            else:
                rules += "print $comment\n"
                str += '\t\t\t\t\t\t"$comment":"'+field.get("type")+' '+field.get("accessType")+'",\n'
                rules += "print out JSON array type\n"
                str += '\t\t\t\t\t\t"type":"'
                str += 'array",\n'
                rules += "print out min/max Items\n"
                if field.get(namesyn).endswith("url") or field.get(namesyn).endswith("Url"):
                    str += '\t\t\t\t\t\t"minItems" : 1,\n'
                elif field.get(namesyn) == "ROUTE":
                    str += '\t\t\t\t\t\t"minItems" : 1,\n'
                elif field.get(namesyn) == "Scene":
                    str += '\t\t\t\t\t\t"minItems" : 1,\n'
                elif field.get("type") == "SFVec2f":
                    str += '\t\t\t\t\t\t"minItems" : 2,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 2,\n'
                elif field.get("type") == "MFVec2f":
                    str += '\t\t\t\t\t\t"minItems" : 2,\n'
                elif field.get("type") == "SFVec3f":
                    str += '\t\t\t\t\t\t"minItems" : 3,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 3,\n'
                elif field.get("type") == "MFVec3f":
                    str += '\t\t\t\t\t\t"minItems" : 3,\n'
                elif field.get("type") == "SFVec4f":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 4,\n'
                elif field.get("type") == "MFVec4f":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                elif field.get("type") == "SFVec2d":
                    str += '\t\t\t\t\t\t"minItems" : 2,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 2,\n'
                elif field.get("type") == "MFVec2d":
                    str += '\t\t\t\t\t\t"minItems" : 2,\n'
                elif field.get("type") == "SFVec3d":
                    str += '\t\t\t\t\t\t"minItems" : 3,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 3,\n'
                elif field.get("type") == "MFVec3d":
                    str += '\t\t\t\t\t\t"minItems" : 3,\n'
                elif field.get("type") == "SFVec4d":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 4,\n'
                elif field.get("type") == "MFVec4d":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                elif field.get("type") == "SFColor":
                    str += '\t\t\t\t\t\t"minItems" : 3,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 3,\n'
                elif field.get("type") == "MFColor":
                    str += '\t\t\t\t\t\t"minItems" : 3,\n'
                elif field.get("type") == "SFColorRGBA":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 4,\n'
                elif field.get("type") == "MFColorRGBA":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                elif field.get("type") == "SFRotation":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                    str += '\t\t\t\t\t\t"maxItems" : 4,\n'
                elif field.get("type") == "MFRotation":
                    str += '\t\t\t\t\t\t"minItems" : 4,\n'
                else:
                    try:
                        str += '\t\t\t\t\t\t"minItems" : '+field.get("minOccurs") + ',\n'
                    except:
                        pass

                    try:
                        str += '\t\t\t\t\t\t"maxItems" : '+field.get("maxOccurs") + ',\n'
                    except:
                        pass

                # enumerations
                rules += "get field enumerations\n"
                enumerations = field.iter("enumeration")
                enums = []
                if enumerations is not None:
                    #  if field.get('additionalEnumerationValuesAllowed') == "true":
                    for enum in enumerations:
                        val = enum.get("value")
                        if ' ' in val:
                            val = '"'+val.replace('"', '\\"')+'"'
                        elif not '"' in val:
                            val = '"'+val+'"'
                        enums.append(val)

                allTheSame = True
                firstValue = None
                # TODO
                try:
                    firstTime = True
                    if field.get("type") == "MFString":
                        for item in field.get("default")[1:-1].split('" "'):
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
                    str += '\t\t\t\t\t\t"items": '
                    str += '{\n'
                    if field.get(namesyn).endswith("url") or field.get(namesyn).endswith("Url"):
                        str += '\t\t\t\t\t\t"format":"uri-reference",\n'
                    if enums != []:
                        if field.get('additionalEnumerationValuesAllowed') == "true":
                            str += '\t\t\t\t\t\t"anyOf" : [ {\n'
                        str += '\t\t\t\t\t\t\t"enum": [\n'
                        str += '\t\t\t\t\t\t\t\t'
                        str += ',\n\t\t\t\t\t\t\t\t'.join(enums)
                        str += '\n\t\t\t\t\t\t\t]\n'
                        if field.get('additionalEnumerationValuesAllowed') == "true":
                            str += '\t\t\t\t\t\t},\n'
                            str += '\t\t\t\t\t\t{ "type" : "string" }\n'
                            str += '\t\t\t\t\t\t],\n'
                        else:
                            str += ',\n'
                    if firstValue is not None:
                        if field.get("type") == "MFString":
                            str += '\t\t\t\t\t\t\t"default":"'+firstValue+'",\n'
                        else:
                            str += '\t\t\t\t\t\t\t"default":'+firstValue+',\n'
                    str += self.printTypeMinMax(field)
                    str += '\t\t\t\t\t\t}'
                else:
                    str += '\t\t\t\t\t\t"prefixItems": '
                    firstTime = True
                    str += '[\n'
                    if field.get("type") == "MFString":
                        for item in field.get("default")[1:-1].split('" "'):
                            if firstTime:
                                firstTime = False
                            else:
                                str += ',\n'
                            str += '\t\t\t\t\t\t{\n'
                            if field.get(namesyn).endswith("url") or field.get(namesyn).endswith("Url"):
                                str += '\t\t\t\t\t\t\t\t"format":"uri-reference",\n'
                            if enums != []:
                                str += '\t\t\t\t\t\t\t"enum": [\n'
                                str += '\t\t\t\t\t\t\t'
                                str += ',\n\t\t\t\t\t\t\t\t'.join(enums)
                                str += '\n\t\t\t\t\t\t\t],\n'
                            str += '\t\t\t\t\t\t\t\t"default":"'+item+'",\n'
                            str += self.printTypeMinMax(field)
                            str += '\t\t\t\t\t\t}'
                    else:
                        for item in field.get("default").split(' '):
                            if firstTime:
                                firstTime = False
                            else:
                                str += ',\n'
                            str += '\t\t\t\t\t\t{\n'
                            if enums != []:
                                str += '\t\t\t\t\t\t\t"enum": [\n'
                                str += '\t\t\t\t\t\t\t\t'
                                str += ',\n\t\t\t\t\t\t\t\t'.join(enums)
                                str += '\n\t\t\t\t\t\t\t],\n'
                            str += '\t\t\t\t\t\t\t"default":'+item+',\n'
                            str += self.printTypeMinMax(field)
                            str += '\t\t\t\t\t\t}\n'
                    str += '\t\t\t\t\t\t],\n'
                    str += '\t\t\t\t\t\t"items": '
                    if field.get('type').startswith("SF"):
                        str += 'false\n'
                    elif field.get('type').startswith("MF"):
                        str += '{\n'
                        str += self.printTypeMinMax(field)
                        if allTheSame:  # or an exception was thrown
                            if firstValue is not None:
                                if field.get("type") == "MFString":
                                    str += '\t\t\t\t\t\t\t"default":"'+firstValue+'",\n'
                                else:
                                    str += '\t\t\t\t\t\t\t"default":'+firstValue+',\n'
                        str += '\t\t\t\t\t\t}'
        if str[-2] == ',':
            str = str[:-2] + '\n' # strip off comma
        str += '\t\t\t\t\t},\n'
        return str

    def printClass(self):
        str = ""
        rules += "For class "+self.name+"\n"
        if self.name.startswith("X3D") and self.name != "X3D":
            rules += "If class "+self.name+" startswith X3D but is not X3D, return empty string\n"
            return str
        if self.printed:
            rules += "If class "+self.name+" has already be written out, issue empty string\n"
            return str
        for parent in self.parents:
            try:
                str += classes[parent].printClass()
            except:
                pass
        str += '\t\t"'+self.name+'" : {\n'
        rules += "For class "+self.name+"\n"
        if self.name == "meta" or self.name == 'component' or self.name == 'connect' or self.name == 'unit' or self.name == 'field' or self.name == 'fieldValue':
            rules += "If class "+self.name+" is meta, component, connect, unit, field or fieldValue, the type is array\n"
            str += '\t\t\t"type" : "array",\n'
            str += '\t\t\t"items" : {\n'
        foundUse = False
        foundChildren = False
        if self.node is not None:
            foundFieldDeclaration = self.node.findall(".//FieldDeclaration");
            rules += "Compute whether this node has a field declaration: "+str(foundFieldDeclaration)+"\n"
            fields = self.node.iter("field")
            for field in fields:
                if field.get("name") == "USE":
                    rules += "If name field is USE: foundUse = True\n"
                    foundUse = True
                else:
                    rules += "foundUse = False\n"
                if field.get("name") == "children":
                    rules += "If name field is childrne: foundChildren = True\n"
                    foundChildren = True
                else:
                    rules += "foundChildren = False\n"
        if foundUse:
	    # #comment is allowed alongside @USE as a child
            rules += "If foundUse, type = object, output @USE+@class schema\n"
            str += '''\
			"type": "object",
			"oneOf": [
				{
					"type": "object",
					"properties": {
						"@class": { "type": "string" },
						"@USE": { "type": "string" },
                                                "-children": {
                                                        "type": "array",
                                                        "minItems": 1,
                                                        "items": {
                                                                "type": "object",
                                                                "properties": {
                                                                        "#comment": { "type": "string", "$comment": "#comment statements are the only allowed in -children node when using a USE field" } 
                                                                },
                                                                "additionalProperties": false
                                                        }
                                                }
                                        },
                                        "required": [ "@USE" ],
					"additionalProperties": false
				},
				{
'''
        rules += "If foundUse, type = object, regular schema, start properties\n"
        str += '''\
                                 "type": "object",
                                 "properties": {
'''

        if self.name == "Script" or self.name == "ShaderProgram" or self.name == "ShaderPart":
            rules += "If name "+self.name+" is Script, ShaderProgram or ShaderPart, emit #sourceCode\n"
            str += '''\
                                "#sourceCode": {
                                        "type": "array",
                                        "minItems": 1,
                                        "items": {
                                                "type": "string"
                                        }
                                },
'''
        #                        "#sourceText": {
        #                                "type": "array",
        #                                "minItems": 1,
        #                                "items": {
        #                                        "type": "string"
        #                                }
        #                        },
        if foundFieldDeclaration:
            rules += "If foundFieldDeclaration = "+foundFieldDeclaration+" emit field property reference pointing at #/$defs/field\n"
            str += '''\
                                "field": {
                                        "$ref": "#/$defs/field"
                                },
'''



        if self.name == "X3D":
            rules += "If name "+self.name+" is X3D, emit schema and encoding properties\n"
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
'''
#        if self.name != "Anchor" and self.name != 'Billboard' and \
#             self.name != "CADAssembly" and self.name != 'CADPart' and \
#             self.name != "Collision" and self.name != 'Contour2D' and \
#             self.name != "EspduTransform" and self.name != 'EXPORT' and \
#             self.name != "ExternProtoDeclare" and self.name != 'GeneratedCubeMapTexture' and \
#             self.name != "GeoLocation" and self.name != 'GeoLOD' and \
#             self.name != "GeoTransform" and self.name != 'Group' and \
#             self.name != "HAnimJoint" and self.name != 'HAnimSegment' and \
#             self.name != "HAnimSite" and self.name != 'IMPORT' and \
#             self.name != "IS" and self.name != 'Layer' and \
#             self.name != "LayoutGroup" and self.name != 'LayoutLayer' and \
#             self.name != "LOD" and self.name != 'PickableGroup' and \
#             self.name != "ProtoBody" and self.name != 'ProtoDeclare' and \
#             self.name != "ProtoInstance" and self.name != 'ProtoInterface' and \
#             self.name != "ROUTE" and self.name != 'Scene' and \
#             self.name != "ScreenGroup" and self.name != 'StaticGroup' and \
#             self.name != "Switch" and self.name != 'Transform' and \
#             self.name != "ViewpointGroup" and self.name != 'Viewport' and \
#             self.name != "X3D" and self.name != 'field' and \
#             self.name != "fieldValue" and self.name != 'head' and \
#             self.name != "meta" and self.name != "CADLayer" and \
#             self.name != "unit" and self.name != 'component':
        if self.name == 'ProtoInstance':
            rules += "If name "+self.name+" is ProtoInstance, emit -children property\n"
            str += '''\
				"-children": {
					"type": "array",
					"minItems": 1,
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
        elif not foundChildren:
            rules += "If not foundChildren ==  "+foundChildren+" emit -children property reference\n"
            str += '''\
                                "-children": {
                                        "$ref": "#/$defs/-childStatements"
                                },
'''
        if self.node is not None:
            rules += "If self node is not None, start processesing fields\n"
            fields = self.node.iter("field")
            required = []
            if self.hasIS:
                rules += "If self.hasIs ==  "+self.hasIS+" emit IS property reference\n"
                str += '''\
                                    "IS": {
                                            "$ref": "#/$defs/IS"
                                    },
'''

            for field in fields:
                if not field.get("name").startswith("X3D") or field.get("name") == "X3D" or field.get("name") == "USE":
                    rules += "If field name starts with X3D, field name is X3D, or field name is USE\n"
                    try:
                        if field.get("use") == "required":
                            rules += "if field use is required, append @fieldname to required\n"
                            required.append("@"+field.get("name"))
                        elif field.get("name") == "Scene" :  # fields for X3D
                            rules += "if field name is Scene, append fieldname and encoding to required\n"
                            required.append(field.get("name"))
                            required.append("encoding")
                    except:
                        pass

                    if field.get("name") == "address" or (not field.get("name").startswith("add") and not field.get("name").startswith("remove")):
                        rules += "If field name is address or not (field starts with add and not field starts with remove)\n"
                        if field.get("type") == "MFNode" or field.get("type") == "SFNode":
                            rules += "If field type is MFNode or field type is SFNode, catch around the following\n"
                            try:
                                if classes[field.get("name")] != None and field.get("name") != "X3D":
                                    rules += "if field name is a class and field name is not X3D, emit def for reference for "+field.get("name")+"\n"
                                    str += '\t\t\t\t\t"' + field.get("name") + '" : {\n'
                                    str += '\t\t\t\t\t\t"$ref":"#/$defs/'+ field.get("name") +'"\n'
                                    str += '\t\t\t\t\t},\n'

                                    if field.get("synonym") != None:
                                        rules += "if field synonym is not None, but "+field.get("synonym")+", emit reference\n"
                                        str += '\t\t\t\t\t"' + field.get("synonym") + '" : {\n'
                                        str += '\t\t\t\t\t\t"$ref":"#/$defs/'+ field.get("synonym") +'"\n'
                                        str += '\t\t\t\t\t},\n'
                            except:
                                rules += "Except, emit def for reference for "+field.get("name")+", with acceptable node types "+ field.get("acceptableNodeTypes").replace("|", "-") + field.get("type") +'"\n'
                                str += '\t\t\t\t\t"-' + field.get("name") + '" : {\n'
                                str += '\t\t\t\t\t\t"$ref":"#/$defs/-'+ field.get("acceptableNodeTypes").replace("|", "-") + field.get("type") +'"\n'
                                str += '\t\t\t\t\t},\n'

                                if field.get("synonym") != None:
                                    rules += "if field synonym is not None, but "+field.get("synonym")+", emit reference with acceptable node types "+ field.get("acceptableNodeTypes").replace("|", "-") + field.get("type") +'"\n'
                                    str += '\t\t\t\t\t"-' + field.get("synonym") + '" : {\n'
                                    str += '\t\t\t\t\t\t"$ref":"#/$defs/-'+ field.get("acceptableNodeTypes").replace("|", "-") + field.get("type") +'"\n'
                                    str += '\t\t\t\t\t},\n'
                                # container fields
                                cf = '\t\t\t\t\t"-' + field.get("acceptableNodeTypes").replace("|", "-") + field.get("type") + '" : {\n'
                                rules += "for containerField, declare acceptable node types "+ field.get("acceptableNodeTypes").replace("|", "-") + field.get("type") +'"\n'
                                if field.get("type") == "MFNode":
                                    rules += "If field type is MFNode, put out $comment with type and accessType, set type to array wiht minItems 1\n"
                                    cf += '\t\t\t\t\t\t"$comment":"'+field.get("type")+' '+field.get("accessType")+'",\n'
                                    cf += '\t\t\t\t\t\t"type": "array",\n'
                                    cf += '\t\t\t\t\t\t"minItems": 1,\n'
                                    cf += '\t\t\t\t\t\t"items": {\n'
                                rules += "Fill in items in array with type = object and the followin properties\n"
                                cf += '\t\t\t\t\t\t\t"type": "object",\n'
                                cf += '\t\t\t\t\t\t\t"properties": {\n'
                                if field.get("type") == "MFNode":
                                    rules += "Create #comment type with string type\n"
                                    cf += '\t\t\t\t\t\t\t\t"#comment": {\n'
                                    cf += '\t\t\t\t\t\t\t\t\t"type": "string"\n'
                                    cf += '\t\t\t\t\t\t\t\t},\n'
                                acnts = field.get("acceptableNodeTypes").split("|")
                                rules += "Get list of acceptable node types, and add ProtoInstance to the list\n"
                                # add properties that appear in all SFNode, MFNode
                                acnts.append("ProtoInstance")
                                doList = {}
                                rules += "For each acceptable node type (or ProtoInstance), add to containerField string\n"
                                for acnt in acnts:
                                    doList = classes[acnt].listChildren(doList)
                                cf += self.printList(doList)
                                    #str += "___________PARENTS____________\n"
                                    #str += classes[acnt].listParents()
                                if cf[-2] == ',':
                                     cf = cf[:-2] + '\n' # strip off comma
                                cf += '\t\t\t\t\t\t\t},\n'
                                rules += "No additional properties\n"
                                cf += '\t\t\t\t\t\t\t"additionalProperties": false\n'
                                if field.get("type") == "MFNode":
                                    rules += "If field type is MFNode, end\n"
                                    cf += '\t\t\t\t\t\t}\n'
                                rules += "end\n"
                                cf += '\t\t\t\t\t},\n'
                                containerFields[field.get("acceptableNodeTypes").replace("|", "-") + field.get("type")] = cf
                                rules += "assign container field for "+field.get("acceptableNodeTypes").replace("|", "-") + field.get("type")+" to "+cf+"\n"
                        elif field.get("name") != "USE":
                            rules += "If field name, "+field.get("name")+" is not USE\n"
                            str += self.printField(field, "name")
                            rules += "print out field\n"
                            if field.get("synonym") != None:
                                str += self.printField(field, "synonym")
                                rules += "print out synonym\n"
            if str[-2] == ',':
                str = str[:-2] + '\n' # strip off comma
            rules += "end\n"

        str += '\t\t\t\t},\n'
        if required != []:
            str += '\t\t\t\t"required": [\n'
            str += '\t\t\t\t\t"'
            str += '",\n\t\t\t\t\t"'.join(required)
            str += '"\n\t\t\t\t],\n'
            rules += "required fields: "+(", ").join(required)+"\n"
        str += '\t\t\t\t"additionalProperties": false\n'
        rules += "no additional properties\n"
        if foundUse:
            str += '\t\t\t}\n'
            str += '\t\t]\n'
            rules += "if foundUse, end, end\n"
        if self.name == 'meta' or self.name == 'component' or self.name == 'connect' or self.name == 'unit' or self.name == 'field' or self.name == 'fieldValue':
            rules += "If class "+self.name+" is meta, component, connect, unit, field or fieldValue, end\n"
            str += '\t\t\t}\n'
        str += '\t\t},\n'
        rules += "end\n"
        self.printed = True
        return str

code = '''{
        "$schema": "https://json-schema.org/draft/2020-12/schema",
        "$id": "https://www.web3d.org/specifications/x3d-'''+sys.argv[1]+'''-JSONSchema.json",
        "title": "JSON Schema X3D V'''+sys.argv[1]+'''",
        "description": "Experimental JSON Schema for X3D V'''+sys.argv[1]+'''",
        "type": "object",
        "properties": {
                "X3D": {
                        "$ref": "#/$defs/X3D"
                }
        },
        "required": [
                "X3D"
        ],
        "additionalProperties": false,
        "$defs": {
                "-childStatements": {
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
                                                "$ref": "#/$defs/ROUTE"
                                        },
                                        "IMPORT": {
                                                "$ref": "#/$defs/IMPORT"
                                        },
                                        "ProtoDeclare": {
                                                "$ref": "#/$defs/ProtoDeclare"
                                        },
                                        "ExternProtoDeclare": {
                                                "$ref": "#/$defs/ExternProtoDeclare"
                                        },
                                        "EXPORT": {
                                                "$ref": "#/$defs/EXPORT"
                                        }
                                },
                                "additionalProperties": false
                        }
                },
		"@geoSystem": {
			"description": "Attempts to validate all possible combinations",
			"oneOf": [
				{
					"type": "array",
					"minItems": 2,
					"maxItems": 3,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"GD",
								"GDC"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"WGS84"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"AM",
							"AN",
							"BN",
							"BR",
							"CC",
							"CD",
							"EA",
							"EB",
							"EC",
							"ED",
							"EE",
							"EF",
							"FA",
							"HE",
							"HO",
							"ID",
							"IN",
							"KA",
							"RF",
							"SA",
							"WD",
							"WE"
						],
						"default": "WE"
					}
				},
				{
					"type": "array",
					"minItems": 1,
					"maxItems": 3,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"GD",
								"GDC"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"AM",
								"AN",
								"BN",
								"BR",
								"CC",
								"CD",
								"EA",
								"EB",
								"EC",
								"ED",
								"EE",
								"EF",
								"FA",
								"HE",
								"HO",
								"ID",
								"IN",
								"KA",
								"RF",
								"SA",
								"WD",
								"WE"
							],
							"default": "WE"
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"WGS84"
						]
					}
				},
				{
					"type": "array",
					"minItems": 4,
					"maxItems": 5,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"UTM"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"Z01",
								"Z1",
								"Z02",
								"Z2",
								"Z03",
								"Z3",
								"Z04",
								"Z4",
								"Z05",
								"Z5",
								"Z06",
								"Z6",
								"Z07",
								"Z7",
								"Z08",
								"Z8",
								"Z09",
								"Z9",
								"Z10",
								"Z11",
								"Z12",
								"Z13",
								"Z14",
								"Z15",
								"Z16",
								"Z17",
								"Z18",
								"Z19",
								"Z20",
								"Z21",
								"Z22",
								"Z23",
								"Z24",
								"Z25",
								"Z26",
								"Z27",
								"Z28",
								"Z29",
								"Z30",
								"Z31",
								"Z32",
								"Z33",
								"Z34",
								"Z35",
								"Z36",
								"Z37",
								"Z38",
								"Z39",
								"Z40",
								"Z41",
								"Z42",
								"Z43",
								"Z44",
								"Z45",
								"Z46",
								"Z47",
								"Z48",
								"Z49",
								"Z50",
								"Z51",
								"Z52",
								"Z53",
								"Z54",
								"Z55",
								"Z56",
								"Z57",
								"Z58",
								"Z59",
								"Z60"
							],
							"default": "WE"
						},
						{
							"type": "string",
							"enum": [
								"AM",
								"AN",
								"BN",
								"BR",
								"CC",
								"CD",
								"EA",
								"EB",
								"EC",
								"ED",
								"EE",
								"EF",
								"FA",
								"HE",
								"HO",
								"ID",
								"IN",
								"KA",
								"RF",
								"SA",
								"WD",
								"WE"
							]
						},
						{
							"type": "string",
							"enum": [
								"WGS84"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"S",
							"N"
						]
					}
				},
				{
					"type": "array",
					"minItems": 3,
					"maxItems": 5,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"UTM"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"Z01",
								"Z1",
								"Z02",
								"Z2",
								"Z03",
								"Z3",
								"Z04",
								"Z4",
								"Z05",
								"Z5",
								"Z06",
								"Z6",
								"Z07",
								"Z7",
								"Z08",
								"Z8",
								"Z09",
								"Z9",
								"Z10",
								"Z11",
								"Z12",
								"Z13",
								"Z14",
								"Z15",
								"Z16",
								"Z17",
								"Z18",
								"Z19",
								"Z20",
								"Z21",
								"Z22",
								"Z23",
								"Z24",
								"Z25",
								"Z26",
								"Z27",
								"Z28",
								"Z29",
								"Z30",
								"Z31",
								"Z32",
								"Z33",
								"Z34",
								"Z35",
								"Z36",
								"Z37",
								"Z38",
								"Z39",
								"Z40",
								"Z41",
								"Z42",
								"Z43",
								"Z44",
								"Z45",
								"Z46",
								"Z47",
								"Z48",
								"Z49",
								"Z50",
								"Z51",
								"Z52",
								"Z53",
								"Z54",
								"Z55",
								"Z56",
								"Z57",
								"Z58",
								"Z59",
								"Z60"
							],
							"default": "WE"
						},
						{
							"type": "string",
							"enum": [
								"AM",
								"AN",
								"BN",
								"BR",
								"CC",
								"CD",
								"EA",
								"EB",
								"EC",
								"ED",
								"EE",
								"EF",
								"FA",
								"HE",
								"HO",
								"ID",
								"IN",
								"KA",
								"RF",
								"SA",
								"WD",
								"WE"
							]
						},
						{
							"type": "string",
							"enum": [
								"S",
								"N"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"WGS84"
						]
					}
				},
				{
					"type": "array",
					"minItems": 4,
					"maxItems": 5,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"UTM"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"Z01",
								"Z1",
								"Z02",
								"Z2",
								"Z03",
								"Z3",
								"Z04",
								"Z4",
								"Z05",
								"Z5",
								"Z06",
								"Z6",
								"Z07",
								"Z7",
								"Z08",
								"Z8",
								"Z09",
								"Z9",
								"Z10",
								"Z11",
								"Z12",
								"Z13",
								"Z14",
								"Z15",
								"Z16",
								"Z17",
								"Z18",
								"Z19",
								"Z20",
								"Z21",
								"Z22",
								"Z23",
								"Z24",
								"Z25",
								"Z26",
								"Z27",
								"Z28",
								"Z29",
								"Z30",
								"Z31",
								"Z32",
								"Z33",
								"Z34",
								"Z35",
								"Z36",
								"Z37",
								"Z38",
								"Z39",
								"Z40",
								"Z41",
								"Z42",
								"Z43",
								"Z44",
								"Z45",
								"Z46",
								"Z47",
								"Z48",
								"Z49",
								"Z50",
								"Z51",
								"Z52",
								"Z53",
								"Z54",
								"Z55",
								"Z56",
								"Z57",
								"Z58",
								"Z59",
								"Z60"
							],
							"default": "WE"
						},
						{
							"type": "string",
							"enum": [
								"WGS84"
							]
						},
						{
							"type": "string",
							"enum": [
								"AM",
								"AN",
								"BN",
								"BR",
								"CC",
								"CD",
								"EA",
								"EB",
								"EC",
								"ED",
								"EE",
								"EF",
								"FA",
								"HE",
								"HO",
								"ID",
								"IN",
								"KA",
								"RF",
								"SA",
								"WD",
								"WE"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"S",
							"N"
						]
					}
				},
				{
					"type": "array",
					"minItems": 3,
					"maxItems": 5,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"UTM"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"Z01",
								"Z1",
								"Z02",
								"Z2",
								"Z03",
								"Z3",
								"Z04",
								"Z4",
								"Z05",
								"Z5",
								"Z06",
								"Z6",
								"Z07",
								"Z7",
								"Z08",
								"Z8",
								"Z09",
								"Z9",
								"Z10",
								"Z11",
								"Z12",
								"Z13",
								"Z14",
								"Z15",
								"Z16",
								"Z17",
								"Z18",
								"Z19",
								"Z20",
								"Z21",
								"Z22",
								"Z23",
								"Z24",
								"Z25",
								"Z26",
								"Z27",
								"Z28",
								"Z29",
								"Z30",
								"Z31",
								"Z32",
								"Z33",
								"Z34",
								"Z35",
								"Z36",
								"Z37",
								"Z38",
								"Z39",
								"Z40",
								"Z41",
								"Z42",
								"Z43",
								"Z44",
								"Z45",
								"Z46",
								"Z47",
								"Z48",
								"Z49",
								"Z50",
								"Z51",
								"Z52",
								"Z53",
								"Z54",
								"Z55",
								"Z56",
								"Z57",
								"Z58",
								"Z59",
								"Z60"
							],
							"default": "WE"
						},
						{
							"type": "string",
							"enum": [
								"WGS84"
							]
						},
						{
							"type": "string",
							"enum": [
								"S",
								"N"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"AM",
							"AN",
							"BN",
							"BR",
							"CC",
							"CD",
							"EA",
							"EB",
							"EC",
							"ED",
							"EE",
							"EF",
							"FA",
							"HE",
							"HO",
							"ID",
							"IN",
							"KA",
							"RF",
							"SA",
							"WD",
							"WE"
						]
					}
				},
				{
					"type": "array",
					"minItems": 4,
					"maxItems": 5,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"UTM"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"Z01",
								"Z1",
								"Z02",
								"Z2",
								"Z03",
								"Z3",
								"Z04",
								"Z4",
								"Z05",
								"Z5",
								"Z06",
								"Z6",
								"Z07",
								"Z7",
								"Z08",
								"Z8",
								"Z09",
								"Z9",
								"Z10",
								"Z11",
								"Z12",
								"Z13",
								"Z14",
								"Z15",
								"Z16",
								"Z17",
								"Z18",
								"Z19",
								"Z20",
								"Z21",
								"Z22",
								"Z23",
								"Z24",
								"Z25",
								"Z26",
								"Z27",
								"Z28",
								"Z29",
								"Z30",
								"Z31",
								"Z32",
								"Z33",
								"Z34",
								"Z35",
								"Z36",
								"Z37",
								"Z38",
								"Z39",
								"Z40",
								"Z41",
								"Z42",
								"Z43",
								"Z44",
								"Z45",
								"Z46",
								"Z47",
								"Z48",
								"Z49",
								"Z50",
								"Z51",
								"Z52",
								"Z53",
								"Z54",
								"Z55",
								"Z56",
								"Z57",
								"Z58",
								"Z59",
								"Z60"
							],
							"default": "WE"
						},
						{
							"type": "string",
							"enum": [
								"S",
								"N"
							]
						},
						{
							"type": "string",
							"enum": [
								"WGS84"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"AM",
							"AN",
							"BN",
							"BR",
							"CC",
							"CD",
							"EA",
							"EB",
							"EC",
							"ED",
							"EE",
							"EF",
							"FA",
							"HE",
							"HO",
							"ID",
							"IN",
							"KA",
							"RF",
							"SA",
							"WD",
							"WE"
						]
					}
				},
				{
					"type": "array",
					"minItems": 2,
					"maxItems": 5,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"UTM"
							],
							"default": "GD"
						},
						{
							"type": "string",
							"enum": [
								"Z01",
								"Z1",
								"Z02",
								"Z2",
								"Z03",
								"Z3",
								"Z04",
								"Z4",
								"Z05",
								"Z5",
								"Z06",
								"Z6",
								"Z07",
								"Z7",
								"Z08",
								"Z8",
								"Z09",
								"Z9",
								"Z10",
								"Z11",
								"Z12",
								"Z13",
								"Z14",
								"Z15",
								"Z16",
								"Z17",
								"Z18",
								"Z19",
								"Z20",
								"Z21",
								"Z22",
								"Z23",
								"Z24",
								"Z25",
								"Z26",
								"Z27",
								"Z28",
								"Z29",
								"Z30",
								"Z31",
								"Z32",
								"Z33",
								"Z34",
								"Z35",
								"Z36",
								"Z37",
								"Z38",
								"Z39",
								"Z40",
								"Z41",
								"Z42",
								"Z43",
								"Z44",
								"Z45",
								"Z46",
								"Z47",
								"Z48",
								"Z49",
								"Z50",
								"Z51",
								"Z52",
								"Z53",
								"Z54",
								"Z55",
								"Z56",
								"Z57",
								"Z58",
								"Z59",
								"Z60"
							],
							"default": "WE"
						},
						{
							"type": "string",
							"enum": [
								"S",
								"N"
							]
						},
						{
							"type": "string",
							"enum": [
								"AM",
								"AN",
								"BN",
								"BR",
								"CC",
								"CD",
								"EA",
								"EB",
								"EC",
								"ED",
								"EE",
								"EF",
								"FA",
								"HE",
								"HO",
								"ID",
								"IN",
								"KA",
								"RF",
								"SA",
								"WD",
								"WE"
							]
						}
					],
					"items": {
						"type": "string",
						"enum": [
							"WGS84"
						]
					}
				},
				{
					"type": "array",
					"minItems": 1,
					"maxItems": 1,
					"prefixItems": [
						{
							"type": "string",
							"enum": [
								"GC",
								"GCC"
							],
							"default": "GD"
						}
					],
					"items": false
				}
			]
		},
'''


soup = xml.etree.ElementTree.parse(sys.stdin).getroot()

classes = {}
regex = {}
containerFields = {}

fts = soup.iter("FieldType")
for ft in fts:
    if ft.get('regex') != "":
        regex[ft.get('type')] = ft.get('regex')

ants = soup.iter("AbstractNodeType")
for ant in ants:
    classes[ant.get('name')] = ClassPrinter(ant, {}, True)

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
    v.findParents()

for k,v in classes.items():
    code += v.printClass()

for k,v in containerFields.items():
    code += v

if code[-2] == ',':
    code = code[:-2] + '\n' # strip off comma
code += '\t}\n}\n'

f = sys.stdout
f.write(code)
f.close()
