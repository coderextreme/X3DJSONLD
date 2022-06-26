# Usage:  python3 x3djsonld.py [ file.json ] # optional X3D JSON formatted file, assumes ../data/abox.json if not specified
print("'''")   # comment out output created by importing x3d (see below)
import json
import sys
from x3d import *
from x3d import SFBool
# from x3d import _X3DBoundedObject
print("'''")   # comment out output created by importing x3d (see below)

def getField(grandparent, parent):
    fieldInfo = {"fieldClass":list, "fieldType":"list", "tupleSize":1}
        
    try:
        cls = eval(grandparent)()
    except NameError as ne:
        cls = list
    if cls != list:
        fields = cls.FIELD_DECLARATIONS()
        for field in fields:
            fieldInfo["fieldType"] = str(field[2]())
            fieldInfo["fieldClass"] = eval(str(field[2]()))
            try:
                if field[0] == parent and (fieldInfo["fieldType"].startswith("MF") or fieldInfo["fieldType"].startswith("SF")):
                    fieldInfo["tupleSize"] = fieldInfo["fieldClass"].TUPLE_SIZE()
                    break
            except AttributeError as ae:
                #print("AE "+ae, file=sys.stderr)
                pass
    #if fieldInfo["tupleSize"] > 1:
    #    print(" GRAND SNOOP "+grandparent, file=sys.stderr)
    #    print(" CHILD SNOOP "+parent, file=sys.stderr)
    #    print(" TUPLE SNUPE "+str(fieldInfo["tupleSize"]), file=sys.stderr)
    #    print(" FIELD SNOOP "+str(fieldInfo["fieldType"]), file=sys.stderr)
    #    print(" CLASS SNOOP "+str(fieldInfo["fieldClass"]), file=sys.stderr)
    return fieldInfo

def parseArray(lead, trail, grandparent, parent, data, indent, fieldType=None):
    out = lead
    els = 0
    lendata = len(data)
    tuplecount = 0
    tupleSize = 1
    fieldInfo = getField(grandparent, parent)
    if fieldType is None:
        fieldType = fieldInfo["fieldType"]
    tupleSize = fieldInfo["tupleSize"]
    ft = eval(fieldType)()
    if fieldType.startswith("MF"):
        tupleSize = ft.TUPLE_SIZE()
    #if tupleSize > 1:
    #    print("'''"+str(fieldType)+" "+grandparent+"."+parent+"["+str(tupleSize)+"]'''", file=sys.stderr)
    for d in data:
        if isinstance(d, dict) and d.get("#comment"):
            out += "\n"+"#" + d.get("#comment") + "\n"
            continue
        if (tupleSize > 1) and (tuplecount % tupleSize == 0):
            out += "("
        if isinstance(d, dict):
            if not d.get("#comment"):
                out += parseObject(parent, d,indent+1)
        elif isinstance(d, str):
            out += '"'
            string = d.replace("\\", "\\\\").replace('"', '\\"')
            out += string
            out += '"'
            # print(parent+" "+string, file=sys.stderr)
        else:
            if fieldType in ("MFFloat"):
                out += "float("+str(d)+")"
            elif fieldType in ("MFRotation"):
                out += "float("+str(d)+")"
            elif fieldType in ("MFDouble"):
                out += "float("+str(d)+")"
            elif fieldType in ("MFInt32"):
                out += "int("+str(d)+")"
            elif fieldType in ("MFString"):
                string = str(d)
                out += '"' + string + '"'
            else:
                out += str(d)
        els += 1
        if (tupleSize > 1) and ((tuplecount % tupleSize) == (tupleSize - 1)):
            out += ")"
        if parent in ("meta") and els < lendata:
            out += ","
        elif parent in ("unit"):
            out += ","
        elif parent in ("field") and els < lendata:
            out += ","
        elif parent in ("component"):
            out += ","
        elif (isinstance(d, dict) or isinstance(d, bool) or isinstance(d, str) or isinstance(d, float) or isinstance(d, int))  and els < lendata:
                out += ","
        # out += "# KEY3 "+fieldType+" COUNT "+str(tuplecount)+" SIZE "+str(tupleSize)+" "
        if parent in ("head", "meta", "unit", "component", "field", "fieldValue", "connect") and isinstance(d, dict):
            out += "\n"
        tuplecount += 1
    out += trail
    return out

def parseObject(parent, data,indent):
    out = ""
    els = 0
    if parent in ("meta", "unit", "component", "field", "fieldValue", "connect"):
        out += parent+"("
    lendata = len(data) - 1
    fieldType = None
    field = False
    # preprcoess this looking for a field
    for k,v in data.items():
        key = k
        if k.startswith("@") or k.startswith("-"):
            key = k[1:]
        # This is crappy, don't use this
        if key == "name":
            fieldName = v
        if key == "type" and v != "VERTEX" and v != "FRAGMENT":
            fieldType = v
        if key == "accessType":
            field = True
    # we asssume key type is set for field elements
    for k,v in data.items():
        key = k
        if k.startswith("@") or k.startswith("-"):
            key = k[1:]
        if key in ("class", "style", "id", "global"):
            key = key+"_"
        #if k in ("-colorRamp"):
        #    k = "-color"
        #    key = k[1:]
        #if k in ("-texCoordRamp"):
        #    k = "-texCoord"
        #    key = k[1:]
        fieldInfo = getField(parent, key)
        if not field or fieldType is None:
            fieldType = fieldInfo["fieldType"]
            #print("parent "+parent+" key "+key+" type "+fieldType, file=sys.stderr)
        tupleSize = fieldInfo["tupleSize"]
        #if (tupleSize > 1):
            #print("fieldType "+fieldType, file=sys.stderr)
        if key in ("encoding", "xsd:noNamespaceSchemaLocation", "JSON schema"):
            continue
        if parent in ("AudioClip", "MovieTexture", "Sound", "Text", "Script", "IndexedLineSet", "ExternProtoDeclare", "ProtoInterface", "ProtoDeclare", "ComposedShader", "Shape", "Appearance", "Material", "head", "HAnimHumanoid", "X3D", "ProtoInstance", "ColorInterpolator", "MetadataSet", "LineSet") and key in ("children"):  # these don't have children yet, sorry
            # do #comment later
            continue
        if parent in ("Text", "Shape") and key in ("value"):  # don't have value yet, sorry
            # do value later
            continue
        if els > 0 and parent != "head":
            out += ", "
        els += 1
        if k.startswith("#"):
            out += "\n#" + str(v).replace(r"\n", "\n#") + "\n"
            # els = 0
        elif isinstance(v, dict):  # JSON object is parse as a dict
            out += "\n"+key
            if key in ("left", "right", "top", "bottom", "front", "back"):
                out += "Texture"
            if key in ("fontStyle", "color", "colorRamp", "normal", "geometry", "appearance", "material", "texture", "textureTransform", "fontStyle", "source", "texCoord", "coord", "skeleton", "viewpoints", "skin", "displacers", "sites", "parts", "displacements", "segments", "shaders", "programs", "texture", "left", "right", "top", "bottom", "front", "back"):
                out += "="
            elif key not in ("X3D", "ForcePhysicsModel", "WindPhysicsModel", "BoundedPhysicsModel", "AudioClip", "LOD", "PositionInterpolator", "Extrusion", "TextureCoordinate", "Normal", "FontStyle", "ComposedShader", "ImageTexture", "ShaderProgram", "ShaderPart", "ComposedCubeMapTexture", "WorldInfo", "NavigationInfo", "Viewpoint", "Background", "Transform", "Shape", "Sphere", "Appearance", "Material", "Box", "Group", "Script", "Text", "PixelTexture", "IndexedFaceSet", "HAnimDisplacer", "HAnimSite", "HAnimJoint", "HAnimSegment", "HAnimHumanoid", "ParticleSystem", "PointEmitter", "PolylineEmitter", "SurfaceEmitter", "ConeEmitter", "VolumeEmitter", "MetadataBoolean", "MetadataInteger", "MetadataDouble", "MetadataFloat", "MetadataString", "MetadataSet", "ViewpointGroup", "ProtoInstance", "ProtoDeclare", "ExternProtoDeclare", "TouchSensor", "ProgramShader", "VisibilitySensor", "TimeSensor", "PlaneSensor", "Switch", "Layer", "LineProperties", "AcousticProperties", "Sound", "Cylinder", "ROUTE", "PhysicalMaterial", "Color", "ColorRGBA", "Coordinate", "TextureBackground", "Collision", "LineSet", "IndexedLineSet", "Inline", "Anchor", "TextureTransform", "OrientationInterpolator", "ListenerPointSource", "Cone", "LayerSet", "ProximitySensor", "StringSensor", "IMPORT", "EXPORT", "PointLight", "DirectionalLight", "ChannelSplitter", "ChannelMerger", "BooleanFilter", "BooleanToggle", "BiquadFilter", "Fog", "SpotLight", "MovieTexture", "IntegerSequencer", "Billboard", "GeoViewpoint", "GeoPositionInterpolator", "TextureProperties", "ColorInterpolator", "StreamAudioDestination", "SpatialSound", "Analyser", "Gain", "ChannelSelector", "Convolver", "Delay", "DynamicsCompressor", "WaveShaper", "BufferAudioSource", "StreamAudioSource", "MicrophoneSource", "OscillatorSource", "Rectangle2D", "ScalarInterpolator", "CADLayer", "CADAssembly", "CADPart", "CADFace", "EspduTransform", "ReceiverPdu", "SignalPdu", "TransmitterPdu", "DISEntityManager", "DISEntityTypeMapping", "LoadSensor", "GeoMetadata", "ImageCubeMapTexture", "ImageTexture3D", "PackagedShader"):

                out += "="
            if key in ("head"):
                out += key+"("
                #out += "children=["
                #out += parseObject(k, v,indent+2)
                #out += "]"
                out += ")"
            elif key in ("ProtoBody", "Scene", "IS", "ProtoInterface"):
                out += key+"("
                out += parseObject(k, v,indent+1)
                out += ")"
            elif key in ("proxy"):
                for prop,propValue in v.items():
                    out += str(prop)+"("
                    out += parseObject(prop, propValue,indent+1)
                    out += ")"
            elif key in ("skeleton", "viewpoints", "skin", "displacers", "sites", "segments", "parts", "shaders", "programs"):
                out += "["
                out += parseObject(k, v,indent+1)
                out += "]"
            elif key in ("fontStyle", "color", "colorRamp", "normal", "geometry", "appearance", "material", "texture", "textureTransform", "fontStyle", "source", "texCoord", "coord", "displacements", "texture", "left", "right", "top", "bottom", "front", "back"):
                out += parseObject(k, v,indent+1)
            else:
                out += "("
                out += parseObject(k, v,indent+1)
                out += ")"
        elif isinstance(v, list):  # JSON array is parsed as list, may need to convert
            if key in ("meta", "unit", "component"):
                # don't put out enclosing object around the array
                if fieldType.startswith("SF"):
                    out += parseArray("(", ")", parent, key, v,indent+1, fieldType)
                if fieldType.startswith("MF"):
                    out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
            else:
                out += key+"="
            if key in ("meta", "unit", "component"):
                pass
            elif key in ("vertexCount", "range", "children", "url", "frontUrl", "backUrl", "bottomUrl", "topUrl", "leftUrl", "rightUrl", "key", "url", "justify", "string", "field", "fieldValue", "connect", "image", "avatarSize", "skyAngle", "groundAngle", "skinCoordWeight", "skinCoordIndex", "colorIndex", "texCoordIndex", "normalIndex", "coordIndex", "family", "stiffness", "llimit", "ulimit", "info", "skeleton", "viewpoints", "skin", "displacers", "sites", "segments", "parts", "shaders", "programs"):
                out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
            elif key in ("vector", "groundColor", "skyColor", "spine", "crossSection", "point"):
                out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
            elif key in ("displacements"):
                out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
            elif key in ("scale"):
                out += parseArray("(", ")", parent, key, v,indent+1, fieldType)
            elif key in ("translation", "rotation"):
                out += parseArray("(", ")", parent, key, v,indent+1, fieldType)
            elif key in ("value") and "@type" in data:
                # print("TYPE "+data["@type"], file=sys.stderr)
                dt = data["@type"]
                if dt.startswith("SF"):
                    out += parseArray("(", ")", parent, key, v,indent+1, dt)
                else:
                    # out += parseArray(data["@type"]+"(", ")", parent, key, v,indent+1, fieldType)
                    # MF
                    out += parseArray("[", "]", parent, key, v,indent+1, dt)
            elif key in ("color", "colorRamp", "value", "keyValue"):
                #print(">parent "+parent+" key "+key+" fieldType "+fieldType, file=sys.stderr)
                fieldInfo = getField(parent, key)
                fieldType = fieldInfo["fieldType"]
                #print("<parent "+parent+" key "+key+" fieldType "+fieldType, file=sys.stderr)
                if fieldType in ("SFRotation", "SFVec2f", "SFVec3f", "SFColor", "SFColorRGBA"):
                    out += parseArray("(", ")", parent, key, v,indent+1, fieldType)
                #elif len(v) == 1 and (isinstance(v[0], float) or isinstance(v[0], int)):
                #    out += parseArray("", "", parent, key, v,indent+1, fieldType)
                elif fieldType in ("MFInt32", "MFFloat", "MFString"):
                    out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
                elif fieldType.startswith("MF"):
                    out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
                elif parent in ("ProtoInterface", "field", "Script"):
                    out += parseArray("(", ")", parent, key, v,indent+1, fieldType)
                elif fieldType in ("tuple"):
                    out += parseArray("", "", parent, key, v,indent+1, fieldType)
                elif key == "value" and fieldType in ("SFString"):
                    out += parseArray("[", "]", parent, key, v,indent+1, fieldType)
                else:
                    out += str(v)  # a list
            else:
                # x3d.py expects a tuple, convert
                out += parseArray("(", ")", parent, key, v,indent+1, fieldType)
        elif isinstance(v, str):
            string = key+"="
            string += '"' + v.replace('"', '\\"') + '"'
            out += string
        else:
            # assume tuple
            out += key+"="
            out += str(v)
        fieldType = None
    if parent in ("meta", "component", "unit", "field", "fieldValue", "connect"):
        out += ")"
        if els <= lendata:
            out += ","
    return out


with open('HelloWorldProgramOutput.json' if len(sys.argv) == 1 else sys.argv[1], encoding="utf-8") as json_file:
    data = json.load(json_file)
    print("from x3d import *")
    print("from x3d import SFBool")
    # print("from x3d import _X3DBoundedObject")
    print("print(", end="")
    print(parseObject("X3D", data, 0))
    print(".XML())")
