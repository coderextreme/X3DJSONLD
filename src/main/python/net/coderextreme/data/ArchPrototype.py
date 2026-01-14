print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ArchPrototype.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Michele Foti, Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "15 December 2014"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "27 November 2015"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "ArchModelingDiagrams.pdf"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://en.wikipedia.org/wiki/Arch"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "license"
meta12.content = "../license.html"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "ArchPrototype"
ProtoDeclare14.appinfo = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."
ProtoInterface15 = x3d.ProtoInterface()
"""COLOR OF ARCH"""
"""INPUT PARAMETERS"""
"""General parameters: measures in meters"""
"""Parameters to create to create shapes related to arch: put true to apply"""
field16 = x3d.field()
field16.name = "diffuseColor"
field16.accessType = "inputOutput"
field16.appinfo = "color of arch"
field16.type = "SFColor"
field16.value = [0.2,0.8,0.8]

ProtoInterface15.field.append(field16)
field17 = x3d.field()
field17.name = "emissiveColor"
field17.accessType = "inputOutput"
field17.appinfo = "color of arch"
field17.type = "SFColor"
field17.value = [0.2,0.8,0.8]

ProtoInterface15.field.append(field17)
field18 = x3d.field()
field18.name = "clearSpanWidth"
field18.accessType = "initializeOnly"
field18.appinfo = "clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"
field18.type = "SFFloat"
field18.value = 4

ProtoInterface15.field.append(field18)
field19 = x3d.field()
field19.name = "riseHeight"
field19.accessType = "initializeOnly"
field19.appinfo = "riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"
field19.type = "SFFloat"
field19.value = 2

ProtoInterface15.field.append(field19)
field20 = x3d.field()
field20.name = "depth"
field20.accessType = "initializeOnly"
field20.appinfo = "depth"
field20.type = "SFFloat"
field20.value = 3

ProtoInterface15.field.append(field20)
field21 = x3d.field()
field21.name = "topAbutmentHeight"
field21.accessType = "initializeOnly"
field21.appinfo = "topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"
field21.type = "SFFloat"
field21.value = 0.5

ProtoInterface15.field.append(field21)
field22 = x3d.field()
field22.name = "pierWidth"
field22.accessType = "initializeOnly"
field22.appinfo = "pierWidth:pierWidtht=0 means no pierWidth"
field22.type = "SFFloat"
field22.value = 0.5

ProtoInterface15.field.append(field22)
field23 = x3d.field()
field23.name = "pierHeight"
field23.accessType = "initializeOnly"
field23.appinfo = "pierHeight: pierHeight=0 means no pierHeight"
field23.type = "SFFloat"
field23.value = 1

ProtoInterface15.field.append(field23)
field24 = x3d.field()
field24.name = "archHalf"
field24.accessType = "initializeOnly"
field24.appinfo = "archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"
field24.type = "SFBool"
field24.value = False

ProtoInterface15.field.append(field24)
field25 = x3d.field()
field25.name = "archHalfExtensionWidth"
field25.accessType = "initializeOnly"
field25.appinfo = "archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."
field25.type = "SFFloat"
field25.value = 0

ProtoInterface15.field.append(field25)
field26 = x3d.field()
field26.name = "onlyIntrados"
field26.accessType = "initializeOnly"
field26.appinfo = "onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."
field26.type = "SFBool"
field26.value = False

ProtoInterface15.field.append(field26)
field27 = x3d.field()
field27.name = "archFilled"
field27.accessType = "initializeOnly"
field27.appinfo = "archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."
field27.type = "SFBool"
field27.value = False

ProtoInterface15.field.append(field27)
field28 = x3d.field()
field28.name = "archHalfFilled"
field28.accessType = "initializeOnly"
field28.appinfo = "archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."
field28.type = "SFBool"
field28.value = False

ProtoInterface15.field.append(field28)
field29 = x3d.field()
field29.name = "lintel"
field29.accessType = "initializeOnly"
field29.appinfo = "lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."
field29.type = "SFBool"
field29.value = False

ProtoInterface15.field.append(field29)

ProtoDeclare14.ProtoInterface = ProtoInterface15
ProtoBody30 = x3d.ProtoBody()
"""First node determines node type of this prototype"""
"""IndexedFaceset creates arch"""
Transform31 = x3d.Transform()
Transform31.DEF = "ArchTransform"
Shape32 = x3d.Shape()
Shape32.DEF = "Arch"
"""note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly"""
IndexedFaceSet33 = x3d.IndexedFaceSet()
IndexedFaceSet33.DEF = "ArchIndex"
IndexedFaceSet33.convex = False
IndexedFaceSet33.solid = False
Coordinate34 = x3d.Coordinate()
Coordinate34.DEF = "ArchChord"

IndexedFaceSet33.coord = Coordinate34

Shape32.geometry = IndexedFaceSet33
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.DEF = "MaterialNode"
IS37 = x3d.IS()
connect38 = x3d.connect()
connect38.nodeField = "emissiveColor"
connect38.protoField = "emissiveColor"

IS37.connect.append(connect38)
connect39 = x3d.connect()
connect39.nodeField = "diffuseColor"
connect39.protoField = "diffuseColor"

IS37.connect.append(connect39)

Material36.IS = IS37

Appearance35.material = Material36

Shape32.appearance = Appearance35

Transform31.children.append(Shape32)

ProtoBody30.children.append(Transform31)
"""Subsequent nodes do not render, but still must be a valid X3D subgraph"""
"""This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs"""
Script40 = x3d.Script()
Script40.DEF = "ArchPrototypeScript"
Script40.url = ["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]
"""INPUT PARAMETERS"""
"""General parameters"""
"""Parameters to create to create shapes related to arch: put true to apply"""
"""OUTPUT PARAMETERS"""
field41 = x3d.field()
field41.name = "clearSpanWidth"
field41.accessType = "initializeOnly"
field41.appinfo = "user or default input for clearSpanWidth parameter"
field41.type = "SFFloat"

Script40.field.append(field41)
field42 = x3d.field()
field42.name = "riseHeight"
field42.accessType = "initializeOnly"
field42.appinfo = "user or default input for riseHeight parameter"
field42.type = "SFFloat"

Script40.field.append(field42)
field43 = x3d.field()
field43.name = "depth"
field43.accessType = "initializeOnly"
field43.appinfo = "user or default input for depth parameter"
field43.type = "SFFloat"

Script40.field.append(field43)
field44 = x3d.field()
field44.name = "topAbutmentHeight"
field44.accessType = "initializeOnly"
field44.appinfo = "user or default input for topAbutmentHeight parameter"
field44.type = "SFFloat"

Script40.field.append(field44)
field45 = x3d.field()
field45.name = "pierWidth"
field45.accessType = "initializeOnly"
field45.appinfo = "user or default input for pierWidth parameter"
field45.type = "SFFloat"

Script40.field.append(field45)
field46 = x3d.field()
field46.name = "pierHeight"
field46.accessType = "initializeOnly"
field46.appinfo = "user or default input for pierHeight parameter"
field46.type = "SFFloat"

Script40.field.append(field46)
field47 = x3d.field()
field47.name = "archHalf"
field47.accessType = "initializeOnly"
field47.appinfo = "user or default input for archHalf parameter"
field47.type = "SFBool"

Script40.field.append(field47)
field48 = x3d.field()
field48.name = "archHalfExtensionWidth"
field48.accessType = "initializeOnly"
field48.appinfo = "user or default input for archHalfExtensionWidth parameter"
field48.type = "SFFloat"

Script40.field.append(field48)
field49 = x3d.field()
field49.name = "onlyIntrados"
field49.accessType = "initializeOnly"
field49.appinfo = "user or default input for onlyIntrados parameter"
field49.type = "SFBool"

Script40.field.append(field49)
field50 = x3d.field()
field50.name = "archFilled"
field50.accessType = "initializeOnly"
field50.appinfo = "user or default input for archFilled parameter"
field50.type = "SFBool"

Script40.field.append(field50)
field51 = x3d.field()
field51.name = "archHalfFilled"
field51.accessType = "initializeOnly"
field51.appinfo = "user or default input for archHalfFilled parameter"
field51.type = "SFBool"

Script40.field.append(field51)
field52 = x3d.field()
field52.name = "lintel"
field52.accessType = "initializeOnly"
field52.appinfo = "user or default input for lintel parameter"
field52.type = "SFBool"

Script40.field.append(field52)
field53 = x3d.field()
field53.name = "computedScale"
field53.accessType = "outputOnly"
field53.appinfo = "computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"
field53.type = "SFVec3f"

Script40.field.append(field53)
field54 = x3d.field()
field54.name = "pointOut"
field54.accessType = "outputOnly"
field54.appinfo = "send computed points to the Coordinate node"
field54.type = "MFVec3f"

Script40.field.append(field54)
field55 = x3d.field()
field55.name = "indexOut"
field55.accessType = "outputOnly"
field55.appinfo = "send computed indices to the IndexedFaceSet node"
field55.type = "MFInt32"

Script40.field.append(field55)
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.nodeField = "clearSpanWidth"
connect57.protoField = "clearSpanWidth"

IS56.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "riseHeight"
connect58.protoField = "riseHeight"

IS56.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "depth"
connect59.protoField = "depth"

IS56.connect.append(connect59)
connect60 = x3d.connect()
connect60.nodeField = "pierWidth"
connect60.protoField = "pierWidth"

IS56.connect.append(connect60)
connect61 = x3d.connect()
connect61.nodeField = "topAbutmentHeight"
connect61.protoField = "topAbutmentHeight"

IS56.connect.append(connect61)
connect62 = x3d.connect()
connect62.nodeField = "pierHeight"
connect62.protoField = "pierHeight"

IS56.connect.append(connect62)
connect63 = x3d.connect()
connect63.nodeField = "archHalf"
connect63.protoField = "archHalf"

IS56.connect.append(connect63)
connect64 = x3d.connect()
connect64.nodeField = "archHalfExtensionWidth"
connect64.protoField = "archHalfExtensionWidth"

IS56.connect.append(connect64)
connect65 = x3d.connect()
connect65.nodeField = "onlyIntrados"
connect65.protoField = "onlyIntrados"

IS56.connect.append(connect65)
connect66 = x3d.connect()
connect66.nodeField = "archFilled"
connect66.protoField = "archFilled"

IS56.connect.append(connect66)
connect67 = x3d.connect()
connect67.nodeField = "archHalfFilled"
connect67.protoField = "archHalfFilled"

IS56.connect.append(connect67)
connect68 = x3d.connect()
connect68.nodeField = "lintel"
connect68.protoField = "lintel"

IS56.connect.append(connect68)

Script40.IS = IS56

ProtoBody30.children.append(Script40)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromField = "computedScale"
ROUTE69.fromNode = "ArchPrototypeScript"
ROUTE69.toField = "scale"
ROUTE69.toNode = "ArchTransform"

ProtoBody30.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromField = "pointOut"
ROUTE70.fromNode = "ArchPrototypeScript"
ROUTE70.toField = "point"
ROUTE70.toNode = "ArchChord"

ProtoBody30.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromField = "indexOut"
ROUTE71.fromNode = "ArchPrototypeScript"
ROUTE71.toField = "set_coordIndex"
ROUTE71.toNode = "ArchIndex"

ProtoBody30.children.append(ROUTE71)

ProtoDeclare14.ProtoBody = ProtoBody30

Scene13.children.append(ProtoDeclare14)
ProtoInstance72 = x3d.ProtoInstance()
ProtoInstance72.name = "ArchPrototype"
ProtoInstance72.DEF = "ArchInstance"
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "diffuseColor"
fieldValue73.value = "0.5 0.3 0.6"

ProtoInstance72.fieldValue.append(fieldValue73)
fieldValue74 = x3d.fieldValue()
fieldValue74.name = "emissiveColor"
fieldValue74.value = "0.5 0.3 0.6"

ProtoInstance72.fieldValue.append(fieldValue74)
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "clearSpanWidth"
fieldValue75.value = "5"

ProtoInstance72.fieldValue.append(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "riseHeight"
fieldValue76.value = "2.5"

ProtoInstance72.fieldValue.append(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.name = "depth"
fieldValue77.value = "2"

ProtoInstance72.fieldValue.append(fieldValue77)
fieldValue78 = x3d.fieldValue()
fieldValue78.name = "topAbutmentHeight"
fieldValue78.value = "0.6"

ProtoInstance72.fieldValue.append(fieldValue78)
fieldValue79 = x3d.fieldValue()
fieldValue79.name = "pierWidth"
fieldValue79.value = "1"

ProtoInstance72.fieldValue.append(fieldValue79)
fieldValue80 = x3d.fieldValue()
fieldValue80.name = "pierHeight"
fieldValue80.value = "2"

ProtoInstance72.fieldValue.append(fieldValue80)

Scene13.children.append(ProtoInstance72)
"""Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)"""
Inline81 = x3d.Inline()
Inline81.DEF = "CoordinateAxes"
Inline81.url = ["../data/CoordinateAxes.x3d"]

Scene13.children.append(Inline81)

X3D0.Scene = Scene13
f = open("../data/ArchPrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ArchPrototype.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ArchPrototype.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
