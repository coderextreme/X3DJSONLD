print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "comment"
meta2.content = "World of Titania"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "created"
meta3.content = "Fri, 04 Sep 2015 10:19:01 GMT"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Holger Seelig"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "Titania V3.0.4, https://titania.create3000.de"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Tue, 25 Jul 2017 09:42:17 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "title"
meta8.content = "Connectors"

head1.children.append(meta8)

X3D0.head = head1
Scene9 = x3d.Scene()
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "RoundedRectangle2D"
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.name = "cornerRadius"
field12.accessType = "initializeOnly"
field12.type = "SFFloat"
field12.value = 1

ProtoInterface11.field.append(field12)
field13 = x3d.field()
field13.name = "size"
field13.accessType = "initializeOnly"
field13.type = "SFVec2f"
field13.value = [2,2]

ProtoInterface11.field.append(field13)
field14 = x3d.field()
field14.name = "solid"
field14.accessType = "initializeOnly"
field14.type = "SFBool"
field14.value = True

ProtoInterface11.field.append(field14)

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody15 = x3d.ProtoBody()
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.DEF = "Geometry"
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.nodeField = "solid"
connect18.protoField = "solid"

IS17.connect.append(connect18)

IndexedFaceSet16.IS = IS17
Coordinate19 = x3d.Coordinate()

IndexedFaceSet16.coord = Coordinate19

ProtoBody15.children.append(IndexedFaceSet16)
Script20 = x3d.Script()
Script20.DEF = "RoundedRectangle2D"
Script20.directOutput = True
field21 = x3d.field()
field21.name = "cornerDimension"
field21.accessType = "initializeOnly"
field21.type = "SFFloat"
field21.value = 10

Script20.field.append(field21)
field22 = x3d.field()
field22.name = "cornerRadius"
field22.accessType = "initializeOnly"
field22.type = "SFFloat"

Script20.field.append(field22)
field23 = x3d.field()
field23.name = "size"
field23.accessType = "initializeOnly"
field23.type = "SFVec2f"

Script20.field.append(field23)
field24 = x3d.field()
field24.name = "geometry"
field24.accessType = "initializeOnly"
field24.type = "SFNode"
IndexedFaceSet25 = x3d.IndexedFaceSet()
IndexedFaceSet25.USE = "Geometry"

field24.children.append(IndexedFaceSet25)

Script20.field.append(field24)
IS26 = x3d.IS()
connect27 = x3d.connect()
connect27.nodeField = "cornerRadius"
connect27.protoField = "cornerRadius"

IS26.connect.append(connect27)
connect28 = x3d.connect()
connect28.nodeField = "size"
connect28.protoField = "size"

IS26.connect.append(connect28)

Script20.IS = IS26

Script20.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	var point         = new SFVec3f (cornerRadius, 0, 0);\n"+
"	var startRotation = new SFRotation ();\n"+
"	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);\n"+
"	var corner        = new MFVec3f ();\n"+
"	var coordIndex    = new MFInt32 ();\n"+
"	var points        = new MFVec3f ();\n"+
"\n"+
"	for (var i = 0; i < cornerDimension * 4; ++ i)\n"+
"		coordIndex [coordIndex .length] = i;\n"+
"\n"+
"	geometry .coordIndex = coordIndex;\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++i)\n"+
"		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = corner [i] .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	geometry .coord .point = points;\n"+
"}'''

ProtoBody15.children.append(Script20)

ProtoDeclare10.ProtoBody = ProtoBody15

Scene9.children.append(ProtoDeclare10)
ProtoDeclare29 = x3d.ProtoDeclare()
ProtoDeclare29.name = "Widget"
ProtoInterface30 = x3d.ProtoInterface()
field31 = x3d.field()
field31.name = "fillColor"
field31.accessType = "inputOutput"
field31.type = "SFColor"
field31.value = [0.1,0.1,0.1]

ProtoInterface30.field.append(field31)
field32 = x3d.field()
field32.name = "lineColor"
field32.accessType = "inputOutput"
field32.type = "SFColor"
field32.value = [0.4,0.4,0.4]

ProtoInterface30.field.append(field32)
field33 = x3d.field()
field33.name = "linewidthScaleFactor"
field33.accessType = "inputOutput"
field33.type = "SFFloat"
field33.value = 1

ProtoInterface30.field.append(field33)
field34 = x3d.field()
field34.name = "geometry"
field34.accessType = "inputOutput"
field34.type = "SFNode"

ProtoInterface30.field.append(field34)

ProtoDeclare29.ProtoInterface = ProtoInterface30
ProtoBody35 = x3d.ProtoBody()
Transform36 = x3d.Transform()
Transform36.DEF = "Shape"
Shape37 = x3d.Shape()
IS38 = x3d.IS()
connect39 = x3d.connect()
connect39.nodeField = "geometry"
connect39.protoField = "geometry"

IS38.connect.append(connect39)

Shape37.IS = IS38
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
IS42 = x3d.IS()
connect43 = x3d.connect()
connect43.nodeField = "diffuseColor"
connect43.protoField = "fillColor"

IS42.connect.append(connect43)

Material41.IS = IS42

Appearance40.material = Material41

Shape37.appearance = Appearance40

Transform36.children.append(Shape37)
Shape44 = x3d.Shape()
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "geometry"
connect46.protoField = "geometry"

IS45.connect.append(connect46)

Shape44.IS = IS45
Appearance47 = x3d.Appearance()
FillProperties48 = x3d.FillProperties()
FillProperties48.filled = False
FillProperties48.hatched = False

Appearance47.fillProperties = FillProperties48
LineProperties49 = x3d.LineProperties()
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.nodeField = "linewidthScaleFactor"
connect51.protoField = "linewidthScaleFactor"

IS50.connect.append(connect51)

LineProperties49.IS = IS50

Appearance47.lineProperties = LineProperties49
Material52 = x3d.Material()
Material52.diffuseColor = [0,0,0]
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.nodeField = "emissiveColor"
connect54.protoField = "lineColor"

IS53.connect.append(connect54)

Material52.IS = IS53

Appearance47.material = Material52

Shape44.appearance = Appearance47

Transform36.children.append(Shape44)

ProtoBody35.children.append(Transform36)

ProtoDeclare29.ProtoBody = ProtoBody35

Scene9.children.append(ProtoDeclare29)
ProtoDeclare55 = x3d.ProtoDeclare()
ProtoDeclare55.name = "Node"
ProtoInterface56 = x3d.ProtoInterface()
field57 = x3d.field()
field57.name = "translation"
field57.accessType = "inputOutput"
field57.type = "SFVec3f"

ProtoInterface56.field.append(field57)

ProtoDeclare55.ProtoInterface = ProtoInterface56
ProtoBody58 = x3d.ProtoBody()
Group59 = x3d.Group()
PlaneSensor60 = x3d.PlaneSensor()
PlaneSensor60.DEF = "PlaneSensor"

Group59.children.append(PlaneSensor60)
Transform61 = x3d.Transform()
Transform61.DEF = "Node"
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "translation"
connect63.protoField = "translation"

IS62.connect.append(connect63)

Transform61.IS = IS62
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "Widget"
fieldValue65 = x3d.fieldValue()
fieldValue65.name = "geometry"
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "RoundedRectangle2D"
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "cornerRadius"
fieldValue67.value = "0.12"

ProtoInstance66.fieldValue.append(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "size"
fieldValue68.value = "2 1"

ProtoInstance66.fieldValue.append(fieldValue68)

fieldValue65.children.append(ProtoInstance66)

ProtoInstance64.fieldValue.append(fieldValue65)

Transform61.children.append(ProtoInstance64)
Transform69 = x3d.Transform()
Transform69.DEF = "Input"
Transform69.translation = [-1,0,0]
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.name = "Widget"
fieldValue71 = x3d.fieldValue()
fieldValue71.name = "lineColor"
fieldValue71.value = "0.72 0.14 0.23"

ProtoInstance70.fieldValue.append(fieldValue71)
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "geometry"
Disk2D73 = x3d.Disk2D()
Disk2D73.DEF = "Connector"
Disk2D73.outerRadius = 0.2

fieldValue72.children.append(Disk2D73)

ProtoInstance70.fieldValue.append(fieldValue72)

Transform69.children.append(ProtoInstance70)

Transform61.children.append(Transform69)
Transform74 = x3d.Transform()
Transform74.DEF = "Output"
Transform74.translation = [1,0,0]
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.name = "Widget"
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "lineColor"
fieldValue76.value = "0.44 0.5 0.72"

ProtoInstance75.fieldValue.append(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.name = "geometry"
Disk2D78 = x3d.Disk2D()
Disk2D78.USE = "Connector"

fieldValue77.children.append(Disk2D78)

ProtoInstance75.fieldValue.append(fieldValue77)

Transform74.children.append(ProtoInstance75)

Transform61.children.append(Transform74)

Group59.children.append(Transform61)

ProtoBody58.children.append(Group59)
Script79 = x3d.Script()
Script79.directOutput = True
field80 = x3d.field()
field80.name = "translation"
field80.accessType = "inputOutput"
field80.type = "SFVec3f"

Script79.field.append(field80)
field81 = x3d.field()
field81.name = "sensor"
field81.accessType = "initializeOnly"
field81.type = "SFNode"
PlaneSensor82 = x3d.PlaneSensor()
PlaneSensor82.USE = "PlaneSensor"

field81.children.append(PlaneSensor82)

Script79.field.append(field81)
field83 = x3d.field()
field83.name = "transform"
field83.accessType = "initializeOnly"
field83.type = "SFNode"
Transform84 = x3d.Transform()
Transform84.USE = "Node"

field83.children.append(Transform84)

Script79.field.append(field83)
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.nodeField = "translation"
connect86.protoField = "translation"

IS85.connect.append(connect86)

Script79.IS = IS85

Script79.sourceCode = '''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}'''

ProtoBody58.children.append(Script79)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "PlaneSensor"
ROUTE87.fromField = "translation_changed"
ROUTE87.toNode = "Node"
ROUTE87.toField = "set_translation"

ProtoBody58.children.append(ROUTE87)

ProtoDeclare55.ProtoBody = ProtoBody58

Scene9.children.append(ProtoDeclare55)
ProtoDeclare88 = x3d.ProtoDeclare()
ProtoDeclare88.name = "Route"
ProtoInterface89 = x3d.ProtoInterface()
field90 = x3d.field()
field90.name = "lineColor"
field90.accessType = "inputOutput"
field90.type = "SFColor"
field90.value = [0.43,0.43,0.98]

ProtoInterface89.field.append(field90)
field91 = x3d.field()
field91.name = "linewidthScaleFactor"
field91.accessType = "inputOutput"
field91.type = "SFFloat"
field91.value = 2

ProtoInterface89.field.append(field91)
field92 = x3d.field()
field92.name = "output"
field92.accessType = "initializeOnly"
field92.type = "SFNode"

ProtoInterface89.field.append(field92)
field93 = x3d.field()
field93.name = "input"
field93.accessType = "initializeOnly"
field93.type = "SFNode"

ProtoInterface89.field.append(field93)

ProtoDeclare88.ProtoInterface = ProtoInterface89
ProtoBody94 = x3d.ProtoBody()
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
LineProperties97 = x3d.LineProperties()
IS98 = x3d.IS()
connect99 = x3d.connect()
connect99.nodeField = "linewidthScaleFactor"
connect99.protoField = "linewidthScaleFactor"

IS98.connect.append(connect99)

LineProperties97.IS = IS98

Appearance96.lineProperties = LineProperties97
Material100 = x3d.Material()
Material100.diffuseColor = [0,0,0]
IS101 = x3d.IS()
connect102 = x3d.connect()
connect102.nodeField = "emissiveColor"
connect102.protoField = "lineColor"

IS101.connect.append(connect102)

Material100.IS = IS101

Appearance96.material = Material100

Shape95.appearance = Appearance96
LineSet103 = x3d.LineSet()
LineSet103.DEF = "Geometry_1"
LineSet103.vertexCount = [2]
Coordinate104 = x3d.Coordinate()
Coordinate104.point = [(-1, 0, 0),(1, 0, 0)]

LineSet103.coord = Coordinate104

Shape95.geometry = LineSet103

ProtoBody94.children.append(Shape95)
Script105 = x3d.Script()
Script105.DEF = "Route"
Script105.directOutput = True
field106 = x3d.field()
field106.name = "set_translation"
field106.accessType = "inputOnly"
field106.type = "SFVec3f"

Script105.field.append(field106)
field107 = x3d.field()
field107.name = "routeDimension"
field107.accessType = "initializeOnly"
field107.type = "SFInt32"
field107.value = 21

Script105.field.append(field107)
field108 = x3d.field()
field108.name = "output"
field108.accessType = "initializeOnly"
field108.type = "SFNode"

Script105.field.append(field108)
field109 = x3d.field()
field109.name = "input"
field109.accessType = "initializeOnly"
field109.type = "SFNode"

Script105.field.append(field109)
field110 = x3d.field()
field110.name = "geometry"
field110.accessType = "initializeOnly"
field110.type = "SFNode"
LineSet111 = x3d.LineSet()
LineSet111.USE = "Geometry_1"

field110.children.append(LineSet111)

Script105.field.append(field110)
field112 = x3d.field()
field112.name = "self"
field112.accessType = "initializeOnly"
field112.type = "SFNode"
Script113 = x3d.Script()
Script113.USE = "Route"

field112.children.append(Script113)

Script105.field.append(field112)
IS114 = x3d.IS()
connect115 = x3d.connect()
connect115.nodeField = "output"
connect115.protoField = "output"

IS114.connect.append(connect115)
connect116 = x3d.connect()
connect116.nodeField = "input"
connect116.protoField = "input"

IS114.connect.append(connect116)

Script105.IS = IS114

Script105.sourceCode = '''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .addRoute (output, 'translation_changed', self, 'set_translation');\n"+
"	Browser .addRoute (input,  'translation_changed', self, 'set_translation');\n"+
"\n"+
"	set_translation ();\n"+
"}\n"+
"\n"+
"function set_translation ()\n"+
"{\n"+
"	geometry .vertexCount [0] = routeDimension;\n"+
"\n"+
"	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));\n"+
"	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));\n"+
"\n"+
"	var w = inPoint .x - outPoint .x;\n"+
"	var h = outPoint .y - inPoint .y;\n"+
"\n"+
"	for (var i = 0; i < routeDimension; ++ i)\n"+
"	{\n"+
"		var t = i / (routeDimension - 1);\n"+
"		var y = h / 2 * (Math .cos (t * Math .PI) - 1);\n"+
"\n"+
"		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));\n"+
"	}\n"+
"}'''

ProtoBody94.children.append(Script105)

ProtoDeclare88.ProtoBody = ProtoBody94

Scene9.children.append(ProtoDeclare88)
NavigationInfo117 = x3d.NavigationInfo()
NavigationInfo117.type = ["FLY","ANY"]

Scene9.children.append(NavigationInfo117)
Background118 = x3d.Background()
Background118.skyColor = [(0.2, 0.2, 0.2)]

Scene9.children.append(Background118)
OrthoViewpoint119 = x3d.OrthoViewpoint()
OrthoViewpoint119.description = "OthoViewpoint"
OrthoViewpoint119.position = [-3.13496,-4.19776,10]
OrthoViewpoint119.centerOfRotation = [-3.13496,-4.19776,0]
OrthoViewpoint119.fieldOfView = [0,0,10,10]

Scene9.children.append(OrthoViewpoint119)
Viewpoint120 = x3d.Viewpoint()
Viewpoint120.description = "Viewpoint"

Scene9.children.append(Viewpoint120)
Transform121 = x3d.Transform()
Transform121.DEF = "Connectors"
ProtoInstance122 = x3d.ProtoInstance()
ProtoInstance122.name = "Route"
fieldValue123 = x3d.fieldValue()
fieldValue123.name = "output"
ProtoInstance124 = x3d.ProtoInstance()
ProtoInstance124.name = "Node"
ProtoInstance124.DEF = "N1"
fieldValue125 = x3d.fieldValue()
fieldValue125.name = "translation"
fieldValue125.value = "-3.98323 2.88948 0"

ProtoInstance124.fieldValue.append(fieldValue125)

fieldValue123.children.append(ProtoInstance124)

ProtoInstance122.fieldValue.append(fieldValue123)
fieldValue126 = x3d.fieldValue()
fieldValue126.name = "input"
ProtoInstance127 = x3d.ProtoInstance()
ProtoInstance127.name = "Node"
ProtoInstance127.DEF = "N2"
fieldValue128 = x3d.fieldValue()
fieldValue128.name = "translation"
fieldValue128.value = "-0.0890862 2.96049 0"

ProtoInstance127.fieldValue.append(fieldValue128)

fieldValue126.children.append(ProtoInstance127)

ProtoInstance122.fieldValue.append(fieldValue126)

Transform121.children.append(ProtoInstance122)
ProtoInstance129 = x3d.ProtoInstance()
ProtoInstance129.name = "Route"
fieldValue130 = x3d.fieldValue()
fieldValue130.name = "output"
ProtoInstance131 = x3d.ProtoInstance()
ProtoInstance131.name = "Node"
ProtoInstance131.USE = "N1"

fieldValue130.children.append(ProtoInstance131)

ProtoInstance129.fieldValue.append(fieldValue130)
fieldValue132 = x3d.fieldValue()
fieldValue132.name = "input"
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.name = "Node"
ProtoInstance133.DEF = "N3"
fieldValue134 = x3d.fieldValue()
fieldValue134.name = "translation"
fieldValue134.value = "-0.104169 1.16371 0"

ProtoInstance133.fieldValue.append(fieldValue134)

fieldValue132.children.append(ProtoInstance133)

ProtoInstance129.fieldValue.append(fieldValue132)

Transform121.children.append(ProtoInstance129)
ProtoInstance135 = x3d.ProtoInstance()
ProtoInstance135.name = "Route"
fieldValue136 = x3d.fieldValue()
fieldValue136.name = "output"
ProtoInstance137 = x3d.ProtoInstance()
ProtoInstance137.name = "Node"
ProtoInstance137.USE = "N1"

fieldValue136.children.append(ProtoInstance137)

ProtoInstance135.fieldValue.append(fieldValue136)
fieldValue138 = x3d.fieldValue()
fieldValue138.name = "input"
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.name = "Node"
ProtoInstance139.DEF = "N4"
fieldValue140 = x3d.fieldValue()
fieldValue140.name = "translation"
fieldValue140.value = "-0.0998688 -0.40172 0"

ProtoInstance139.fieldValue.append(fieldValue140)

fieldValue138.children.append(ProtoInstance139)

ProtoInstance135.fieldValue.append(fieldValue138)

Transform121.children.append(ProtoInstance135)
ProtoInstance141 = x3d.ProtoInstance()
ProtoInstance141.name = "Route"
fieldValue142 = x3d.fieldValue()
fieldValue142.name = "output"
ProtoInstance143 = x3d.ProtoInstance()
ProtoInstance143.name = "Node"
ProtoInstance143.USE = "N1"

fieldValue142.children.append(ProtoInstance143)

ProtoInstance141.fieldValue.append(fieldValue142)
fieldValue144 = x3d.fieldValue()
fieldValue144.name = "input"
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.name = "Node"
ProtoInstance145.DEF = "N5"
fieldValue146 = x3d.fieldValue()
fieldValue146.name = "translation"
fieldValue146.value = "-0.0998687 -2.14742 0"

ProtoInstance145.fieldValue.append(fieldValue146)

fieldValue144.children.append(ProtoInstance145)

ProtoInstance141.fieldValue.append(fieldValue144)

Transform121.children.append(ProtoInstance141)
ProtoInstance147 = x3d.ProtoInstance()
ProtoInstance147.name = "Route"
fieldValue148 = x3d.fieldValue()
fieldValue148.name = "output"
ProtoInstance149 = x3d.ProtoInstance()
ProtoInstance149.name = "Node"
ProtoInstance149.USE = "N2"

fieldValue148.children.append(ProtoInstance149)

ProtoInstance147.fieldValue.append(fieldValue148)
fieldValue150 = x3d.fieldValue()
fieldValue150.name = "input"
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.name = "Node"
ProtoInstance151.DEF = "N6"
fieldValue152 = x3d.fieldValue()
fieldValue152.name = "translation"
fieldValue152.value = "3.55694 2.4116 0"

ProtoInstance151.fieldValue.append(fieldValue152)

fieldValue150.children.append(ProtoInstance151)

ProtoInstance147.fieldValue.append(fieldValue150)

Transform121.children.append(ProtoInstance147)
ProtoInstance153 = x3d.ProtoInstance()
ProtoInstance153.name = "Route"
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "output"
ProtoInstance155 = x3d.ProtoInstance()
ProtoInstance155.name = "Node"
ProtoInstance155.USE = "N3"

fieldValue154.children.append(ProtoInstance155)

ProtoInstance153.fieldValue.append(fieldValue154)
fieldValue156 = x3d.fieldValue()
fieldValue156.name = "input"
ProtoInstance157 = x3d.ProtoInstance()
ProtoInstance157.name = "Node"
ProtoInstance157.USE = "N6"

fieldValue156.children.append(ProtoInstance157)

ProtoInstance153.fieldValue.append(fieldValue156)

Transform121.children.append(ProtoInstance153)
ProtoInstance158 = x3d.ProtoInstance()
ProtoInstance158.name = "Route"
fieldValue159 = x3d.fieldValue()
fieldValue159.name = "output"
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.name = "Node"
ProtoInstance160.USE = "N4"

fieldValue159.children.append(ProtoInstance160)

ProtoInstance158.fieldValue.append(fieldValue159)
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "input"
ProtoInstance162 = x3d.ProtoInstance()
ProtoInstance162.name = "Node"
ProtoInstance162.DEF = "N7"
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "translation"
fieldValue163.value = "3.75106 -0.0794556 0"

ProtoInstance162.fieldValue.append(fieldValue163)

fieldValue161.children.append(ProtoInstance162)

ProtoInstance158.fieldValue.append(fieldValue161)

Transform121.children.append(ProtoInstance158)
ProtoInstance164 = x3d.ProtoInstance()
ProtoInstance164.name = "Route"
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "output"
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.name = "Node"
ProtoInstance166.USE = "N5"

fieldValue165.children.append(ProtoInstance166)

ProtoInstance164.fieldValue.append(fieldValue165)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "input"
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.name = "Node"
ProtoInstance168.USE = "N7"

fieldValue167.children.append(ProtoInstance168)

ProtoInstance164.fieldValue.append(fieldValue167)

Transform121.children.append(ProtoInstance164)
ProtoInstance169 = x3d.ProtoInstance()
ProtoInstance169.name = "Route"
fieldValue170 = x3d.fieldValue()
fieldValue170.name = "output"
ProtoInstance171 = x3d.ProtoInstance()
ProtoInstance171.name = "Node"
ProtoInstance171.USE = "N6"

fieldValue170.children.append(ProtoInstance171)

ProtoInstance169.fieldValue.append(fieldValue170)
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "input"
ProtoInstance173 = x3d.ProtoInstance()
ProtoInstance173.name = "Node"
ProtoInstance173.DEF = "N8"
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "translation"
fieldValue174.value = "7.68077 1.21228 0"

ProtoInstance173.fieldValue.append(fieldValue174)

fieldValue172.children.append(ProtoInstance173)

ProtoInstance169.fieldValue.append(fieldValue172)

Transform121.children.append(ProtoInstance169)
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.name = "Route"
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "output"
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.name = "Node"
ProtoInstance177.USE = "N7"

fieldValue176.children.append(ProtoInstance177)

ProtoInstance175.fieldValue.append(fieldValue176)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "input"
ProtoInstance179 = x3d.ProtoInstance()
ProtoInstance179.name = "Node"
ProtoInstance179.USE = "N8"

fieldValue178.children.append(ProtoInstance179)

ProtoInstance175.fieldValue.append(fieldValue178)

Transform121.children.append(ProtoInstance175)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.name = "Node"
ProtoInstance180.USE = "N1"

Transform121.children.append(ProtoInstance180)
ProtoInstance181 = x3d.ProtoInstance()
ProtoInstance181.name = "Node"
ProtoInstance181.USE = "N2"

Transform121.children.append(ProtoInstance181)
ProtoInstance182 = x3d.ProtoInstance()
ProtoInstance182.name = "Node"
ProtoInstance182.USE = "N3"

Transform121.children.append(ProtoInstance182)
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.name = "Node"
ProtoInstance183.USE = "N4"

Transform121.children.append(ProtoInstance183)
ProtoInstance184 = x3d.ProtoInstance()
ProtoInstance184.name = "Node"
ProtoInstance184.USE = "N5"

Transform121.children.append(ProtoInstance184)
ProtoInstance185 = x3d.ProtoInstance()
ProtoInstance185.name = "Node"
ProtoInstance185.USE = "N6"

Transform121.children.append(ProtoInstance185)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.name = "Node"
ProtoInstance186.USE = "N7"

Transform121.children.append(ProtoInstance186)
ProtoInstance187 = x3d.ProtoInstance()
ProtoInstance187.name = "Node"
ProtoInstance187.USE = "N8"

Transform121.children.append(ProtoInstance187)

Scene9.children.append(Transform121)

X3D0.Scene = Scene9
f = open("../data/Connectors.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Connectors.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Connectors.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
