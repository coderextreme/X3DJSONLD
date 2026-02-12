print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 12:22:57 GMT"

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

X3D0.head = head1
Scene11 = x3d.Scene()
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.name = "ArchPrototype"
ProtoDeclare12.appinfo = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."
ProtoInterface13 = x3d.ProtoInterface()
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "SFColor"
field14.name = "diffuseColor"
field14.value = [0.2,0.8,0.8]
field14.appinfo = "color of arch"

ProtoInterface13.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOutput"
field15.type = "SFColor"
field15.name = "emissiveColor"
field15.value = [0.2,0.8,0.8]
field15.appinfo = "color of arch"

ProtoInterface13.field.append(field15)
field16 = x3d.field()
field16.accessType = "initializeOnly"
field16.type = "SFFloat"
field16.name = "clearSpanWidth"
field16.value = 4
field16.appinfo = "clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"

ProtoInterface13.field.append(field16)
field17 = x3d.field()
field17.accessType = "initializeOnly"
field17.type = "SFFloat"
field17.name = "riseHeight"
field17.value = 2
field17.appinfo = "riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"

ProtoInterface13.field.append(field17)
field18 = x3d.field()
field18.accessType = "initializeOnly"
field18.type = "SFFloat"
field18.name = "depth"
field18.value = 3
field18.appinfo = "depth"

ProtoInterface13.field.append(field18)
field19 = x3d.field()
field19.accessType = "initializeOnly"
field19.type = "SFFloat"
field19.name = "topAbutmentHeight"
field19.value = 0.5
field19.appinfo = "topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"

ProtoInterface13.field.append(field19)
field20 = x3d.field()
field20.accessType = "initializeOnly"
field20.type = "SFFloat"
field20.name = "pierWidth"
field20.value = 0.5
field20.appinfo = "pierWidth:pierWidtht=0 means no pierWidth"

ProtoInterface13.field.append(field20)
field21 = x3d.field()
field21.accessType = "initializeOnly"
field21.type = "SFFloat"
field21.name = "pierHeight"
field21.value = 1
field21.appinfo = "pierHeight: pierHeight=0 means no pierHeight"

ProtoInterface13.field.append(field21)
field22 = x3d.field()
field22.accessType = "initializeOnly"
field22.type = "SFBool"
field22.name = "archHalf"
field22.appinfo = "archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"

ProtoInterface13.field.append(field22)
field23 = x3d.field()
field23.accessType = "initializeOnly"
field23.type = "SFFloat"
field23.name = "archHalfExtensionWidth"
field23.appinfo = "archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."

ProtoInterface13.field.append(field23)
field24 = x3d.field()
field24.accessType = "initializeOnly"
field24.type = "SFBool"
field24.name = "onlyIntrados"
field24.appinfo = "onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."

ProtoInterface13.field.append(field24)
field25 = x3d.field()
field25.accessType = "initializeOnly"
field25.type = "SFBool"
field25.name = "archFilled"
field25.appinfo = "archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."

ProtoInterface13.field.append(field25)
field26 = x3d.field()
field26.accessType = "initializeOnly"
field26.type = "SFBool"
field26.name = "archHalfFilled"
field26.appinfo = "archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."

ProtoInterface13.field.append(field26)
field27 = x3d.field()
field27.accessType = "initializeOnly"
field27.type = "SFBool"
field27.name = "lintel"
field27.appinfo = "lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."

ProtoInterface13.field.append(field27)

ProtoDeclare12.ProtoInterface = ProtoInterface13
ProtoBody28 = x3d.ProtoBody()
Transform29 = x3d.Transform(DEF="ArchTransform")
Shape30 = x3d.Shape(DEF="Arch")
Appearance31 = x3d.Appearance()
Material32 = x3d.Material(DEF="MaterialNode")
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "diffuseColor"
connect34.protoField = "diffuseColor"

IS33.connect.append(connect34)
connect35 = x3d.connect()
connect35.nodeField = "emissiveColor"
connect35.protoField = "emissiveColor"

IS33.connect.append(connect35)

Material32.IS = IS33

Appearance31.material = Material32

Shape30.appearance = Appearance31
IndexedFaceSet36 = x3d.IndexedFaceSet(DEF="ArchIndex")
IndexedFaceSet36.solid = False
IndexedFaceSet36.convex = False
Coordinate37 = x3d.Coordinate(DEF="ArchChord")

IndexedFaceSet36.coord = Coordinate37

Shape30.geometry = IndexedFaceSet36

Transform29.children.append(Shape30)

ProtoBody28.children.append(Transform29)
Script38 = x3d.Script(DEF="ArchPrototypeScript")
Script38.url = ["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]
field39 = x3d.field()
field39.accessType = "initializeOnly"
field39.type = "SFFloat"
field39.name = "clearSpanWidth"
field39.appinfo = "user or default input for clearSpanWidth parameter"

Script38.field.append(field39)
field40 = x3d.field()
field40.accessType = "initializeOnly"
field40.type = "SFFloat"
field40.name = "riseHeight"
field40.appinfo = "user or default input for riseHeight parameter"

Script38.field.append(field40)
field41 = x3d.field()
field41.accessType = "initializeOnly"
field41.type = "SFFloat"
field41.name = "depth"
field41.appinfo = "user or default input for depth parameter"

Script38.field.append(field41)
field42 = x3d.field()
field42.accessType = "initializeOnly"
field42.type = "SFFloat"
field42.name = "topAbutmentHeight"
field42.appinfo = "user or default input for topAbutmentHeight parameter"

Script38.field.append(field42)
field43 = x3d.field()
field43.accessType = "initializeOnly"
field43.type = "SFFloat"
field43.name = "pierWidth"
field43.appinfo = "user or default input for pierWidth parameter"

Script38.field.append(field43)
field44 = x3d.field()
field44.accessType = "initializeOnly"
field44.type = "SFFloat"
field44.name = "pierHeight"
field44.appinfo = "user or default input for pierHeight parameter"

Script38.field.append(field44)
field45 = x3d.field()
field45.accessType = "initializeOnly"
field45.type = "SFBool"
field45.name = "archHalf"
field45.appinfo = "user or default input for archHalf parameter"

Script38.field.append(field45)
field46 = x3d.field()
field46.accessType = "initializeOnly"
field46.type = "SFFloat"
field46.name = "archHalfExtensionWidth"
field46.appinfo = "user or default input for archHalfExtensionWidth parameter"

Script38.field.append(field46)
field47 = x3d.field()
field47.accessType = "initializeOnly"
field47.type = "SFBool"
field47.name = "onlyIntrados"
field47.appinfo = "user or default input for onlyIntrados parameter"

Script38.field.append(field47)
field48 = x3d.field()
field48.accessType = "initializeOnly"
field48.type = "SFBool"
field48.name = "archFilled"
field48.appinfo = "user or default input for archFilled parameter"

Script38.field.append(field48)
field49 = x3d.field()
field49.accessType = "initializeOnly"
field49.type = "SFBool"
field49.name = "archHalfFilled"
field49.appinfo = "user or default input for archHalfFilled parameter"

Script38.field.append(field49)
field50 = x3d.field()
field50.accessType = "initializeOnly"
field50.type = "SFBool"
field50.name = "lintel"
field50.appinfo = "user or default input for lintel parameter"

Script38.field.append(field50)
field51 = x3d.field()
field51.accessType = "outputOnly"
field51.type = "SFVec3f"
field51.name = "computedScale"
field51.appinfo = "computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"

Script38.field.append(field51)
field52 = x3d.field()
field52.accessType = "outputOnly"
field52.type = "MFVec3f"
field52.name = "pointOut"
field52.appinfo = "send computed points to the Coordinate node"

Script38.field.append(field52)
field53 = x3d.field()
field53.accessType = "outputOnly"
field53.type = "MFInt32"
field53.name = "indexOut"
field53.appinfo = "send computed indices to the IndexedFaceSet node"

Script38.field.append(field53)
IS54 = x3d.IS()
connect55 = x3d.connect()
connect55.nodeField = "clearSpanWidth"
connect55.protoField = "clearSpanWidth"

IS54.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "riseHeight"
connect56.protoField = "riseHeight"

IS54.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "depth"
connect57.protoField = "depth"

IS54.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "topAbutmentHeight"
connect58.protoField = "topAbutmentHeight"

IS54.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "pierWidth"
connect59.protoField = "pierWidth"

IS54.connect.append(connect59)
connect60 = x3d.connect()
connect60.nodeField = "pierHeight"
connect60.protoField = "pierHeight"

IS54.connect.append(connect60)
connect61 = x3d.connect()
connect61.nodeField = "archHalf"
connect61.protoField = "archHalf"

IS54.connect.append(connect61)
connect62 = x3d.connect()
connect62.nodeField = "archHalfExtensionWidth"
connect62.protoField = "archHalfExtensionWidth"

IS54.connect.append(connect62)
connect63 = x3d.connect()
connect63.nodeField = "onlyIntrados"
connect63.protoField = "onlyIntrados"

IS54.connect.append(connect63)
connect64 = x3d.connect()
connect64.nodeField = "archFilled"
connect64.protoField = "archFilled"

IS54.connect.append(connect64)
connect65 = x3d.connect()
connect65.nodeField = "archHalfFilled"
connect65.protoField = "archHalfFilled"

IS54.connect.append(connect65)
connect66 = x3d.connect()
connect66.nodeField = "lintel"
connect66.protoField = "lintel"

IS54.connect.append(connect66)

Script38.IS = IS54

ProtoBody28.children.append(Script38)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "ArchPrototypeScript"
ROUTE67.fromField = "computedScale"
ROUTE67.toNode = "ArchTransform"
ROUTE67.toField = "set_scale"

ProtoBody28.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "ArchPrototypeScript"
ROUTE68.fromField = "pointOut"
ROUTE68.toNode = "ArchChord"
ROUTE68.toField = "set_point"

ProtoBody28.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "ArchPrototypeScript"
ROUTE69.fromField = "indexOut"
ROUTE69.toNode = "ArchIndex"
ROUTE69.toField = "set_coordIndex"

ProtoBody28.children.append(ROUTE69)

ProtoDeclare12.ProtoBody = ProtoBody28

Scene11.children.append(ProtoDeclare12)
ProtoInstance70 = x3d.ProtoInstance(DEF="ArchInstance")
ProtoInstance70.name = "ArchPrototype"
fieldValue71 = x3d.fieldValue()
fieldValue71.name = "diffuseColor"
fieldValue71.value = "0.5 0.3 0.6"

ProtoInstance70.fieldValue.append(fieldValue71)
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "emissiveColor"
fieldValue72.value = "0.5 0.3 0.6"

ProtoInstance70.fieldValue.append(fieldValue72)
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "clearSpanWidth"
fieldValue73.value = "5"

ProtoInstance70.fieldValue.append(fieldValue73)
fieldValue74 = x3d.fieldValue()
fieldValue74.name = "riseHeight"
fieldValue74.value = "2.5"

ProtoInstance70.fieldValue.append(fieldValue74)
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "depth"
fieldValue75.value = "2"

ProtoInstance70.fieldValue.append(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "topAbutmentHeight"
fieldValue76.value = "0.6"

ProtoInstance70.fieldValue.append(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.name = "pierWidth"
fieldValue77.value = "1"

ProtoInstance70.fieldValue.append(fieldValue77)
fieldValue78 = x3d.fieldValue()
fieldValue78.name = "pierHeight"
fieldValue78.value = "2"

ProtoInstance70.fieldValue.append(fieldValue78)

Scene11.children.append(ProtoInstance70)
Inline79 = x3d.Inline(DEF="CoordinateAxes")
Inline79.url = ["../data/CoordinateAxes.x3d"]

Scene11.children.append(Inline79)

X3D0.Scene = Scene11
f = open("../data/ArchPrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ArchPrototype.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ArchPrototype.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
