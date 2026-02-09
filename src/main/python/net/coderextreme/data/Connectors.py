print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
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
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "Titania V3.0.4, https://titania.create3000.de"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
ProtoDeclare8 = x3d.ProtoDeclare()
ProtoDeclare8.name = "RoundedRectangle2D"
ProtoInterface9 = x3d.ProtoInterface()
field10 = x3d.field()
field10.accessType = "initializeOnly"
field10.type = "SFFloat"
field10.name = "cornerRadius"
field10.value = 1

ProtoInterface9.field.append(field10)
field11 = x3d.field()
field11.accessType = "initializeOnly"
field11.type = "SFVec2f"
field11.name = "size"
field11.value = [2,2]

ProtoInterface9.field.append(field11)
field12 = x3d.field()
field12.accessType = "initializeOnly"
field12.type = "SFBool"
field12.name = "solid"
field12.value = True

ProtoInterface9.field.append(field12)

ProtoDeclare8.ProtoInterface = ProtoInterface9
ProtoBody13 = x3d.ProtoBody()
IndexedFaceSet14 = x3d.IndexedFaceSet(DEF="Geometry")
Coordinate15 = x3d.Coordinate()

IndexedFaceSet14.coord = Coordinate15
IS16 = x3d.IS()
connect17 = x3d.connect()
connect17.nodeField = "solid"
connect17.protoField = "solid"

IS16.connect.append(connect17)

IndexedFaceSet14.IS = IS16

ProtoBody13.children.append(IndexedFaceSet14)
Script18 = x3d.Script(DEF="RoundedRectangle2D")
Script18.directOutput = True
field19 = x3d.field()
field19.accessType = "initializeOnly"
field19.type = "SFFloat"
field19.name = "cornerDimension"
field19.value = 10

Script18.field.append(field19)
field20 = x3d.field()
field20.accessType = "initializeOnly"
field20.type = "SFFloat"
field20.name = "cornerRadius"

Script18.field.append(field20)
field21 = x3d.field()
field21.accessType = "initializeOnly"
field21.type = "SFVec2f"
field21.name = "size"

Script18.field.append(field21)
field22 = x3d.field()
field22.accessType = "initializeOnly"
field22.type = "SFNode"
field22.name = "geometry"
IndexedFaceSet23 = x3d.IndexedFaceSet(USE="Geometry")

field22.children.append(IndexedFaceSet23)

Script18.field.append(field22)

Script18.sourceCode = '''ecmascript:\n"+
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
IS24 = x3d.IS()
connect25 = x3d.connect()
connect25.nodeField = "cornerRadius"
connect25.protoField = "cornerRadius"

IS24.connect.append(connect25)
connect26 = x3d.connect()
connect26.nodeField = "size"
connect26.protoField = "size"

IS24.connect.append(connect26)

Script18.IS = IS24

ProtoBody13.children.append(Script18)

ProtoDeclare8.ProtoBody = ProtoBody13

Scene7.children.append(ProtoDeclare8)
ProtoDeclare27 = x3d.ProtoDeclare()
ProtoDeclare27.name = "Widget"
ProtoInterface28 = x3d.ProtoInterface()
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFColor"
field29.name = "fillColor"
field29.value = [0.1,0.1,0.1]

ProtoInterface28.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFColor"
field30.name = "lineColor"
field30.value = [0.4,0.4,0.4]

ProtoInterface28.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFFloat"
field31.name = "linewidthScaleFactor"
field31.value = 1

ProtoInterface28.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFNode"
field32.name = "geometry"

ProtoInterface28.field.append(field32)

ProtoDeclare27.ProtoInterface = ProtoInterface28
ProtoBody33 = x3d.ProtoBody()
Transform34 = x3d.Transform(DEF="Shape")
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
IS38 = x3d.IS()
connect39 = x3d.connect()
connect39.nodeField = "diffuseColor"
connect39.protoField = "fillColor"

IS38.connect.append(connect39)

Material37.IS = IS38

Appearance36.material = Material37

Shape35.appearance = Appearance36
IS40 = x3d.IS()
connect41 = x3d.connect()
connect41.nodeField = "geometry"
connect41.protoField = "geometry"

IS40.connect.append(connect41)

Shape35.IS = IS40

Transform34.children.append(Shape35)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
LineProperties44 = x3d.LineProperties()
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "linewidthScaleFactor"
connect46.protoField = "linewidthScaleFactor"

IS45.connect.append(connect46)

LineProperties44.IS = IS45

Appearance43.lineProperties = LineProperties44
FillProperties47 = x3d.FillProperties()
FillProperties47.filled = False
FillProperties47.hatched = False

Appearance43.fillProperties = FillProperties47
Material48 = x3d.Material()
Material48.diffuseColor = [0,0,0]
IS49 = x3d.IS()
connect50 = x3d.connect()
connect50.nodeField = "emissiveColor"
connect50.protoField = "lineColor"

IS49.connect.append(connect50)

Material48.IS = IS49

Appearance43.material = Material48

Shape42.appearance = Appearance43
IS51 = x3d.IS()
connect52 = x3d.connect()
connect52.nodeField = "geometry"
connect52.protoField = "geometry"

IS51.connect.append(connect52)

Shape42.IS = IS51

Transform34.children.append(Shape42)

ProtoBody33.children.append(Transform34)

ProtoDeclare27.ProtoBody = ProtoBody33

Scene7.children.append(ProtoDeclare27)
ProtoDeclare53 = x3d.ProtoDeclare()
ProtoDeclare53.name = "Node"
ProtoInterface54 = x3d.ProtoInterface()
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "SFVec3f"
field55.name = "translation"

ProtoInterface54.field.append(field55)

ProtoDeclare53.ProtoInterface = ProtoInterface54
ProtoBody56 = x3d.ProtoBody()
Group57 = x3d.Group()
PlaneSensor58 = x3d.PlaneSensor(DEF="PlaneSensor")

Group57.children.append(PlaneSensor58)
Transform59 = x3d.Transform(DEF="Node")
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "Widget"
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "geometry"
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.name = "RoundedRectangle2D"
fieldValue63 = x3d.fieldValue()
fieldValue63.name = "cornerRadius"
fieldValue63.value = "0.12"

ProtoInstance62.fieldValue.append(fieldValue63)
fieldValue64 = x3d.fieldValue()
fieldValue64.name = "size"
fieldValue64.value = "2 1"

ProtoInstance62.fieldValue.append(fieldValue64)

fieldValue61.children.append(ProtoInstance62)

ProtoInstance60.fieldValue.append(fieldValue61)

Transform59.children.append(ProtoInstance60)
Transform65 = x3d.Transform(DEF="Input")
Transform65.translation = [-1,0,0]
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.name = "Widget"
fieldValue67 = x3d.fieldValue()
fieldValue67.name = "lineColor"
fieldValue67.value = "0.72 0.14 0.23"

ProtoInstance66.fieldValue.append(fieldValue67)
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "geometry"
Disk2D69 = x3d.Disk2D(DEF="Connector")
Disk2D69.outerRadius = 0.2

fieldValue68.children.append(Disk2D69)

ProtoInstance66.fieldValue.append(fieldValue68)

Transform65.children.append(ProtoInstance66)

Transform59.children.append(Transform65)
Transform70 = x3d.Transform(DEF="Output")
Transform70.translation = [1,0,0]
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.name = "Widget"
fieldValue72 = x3d.fieldValue()
fieldValue72.name = "lineColor"
fieldValue72.value = "0.44 0.5 0.72"

ProtoInstance71.fieldValue.append(fieldValue72)
fieldValue73 = x3d.fieldValue()
fieldValue73.name = "geometry"
Disk2D74 = x3d.Disk2D(USE="Connector")

fieldValue73.children.append(Disk2D74)

ProtoInstance71.fieldValue.append(fieldValue73)

Transform70.children.append(ProtoInstance71)

Transform59.children.append(Transform70)
IS75 = x3d.IS()
connect76 = x3d.connect()
connect76.nodeField = "translation"
connect76.protoField = "translation"

IS75.connect.append(connect76)

Transform59.IS = IS75

Group57.children.append(Transform59)

ProtoBody56.children.append(Group57)
Script77 = x3d.Script()
Script77.directOutput = True
field78 = x3d.field()
field78.accessType = "inputOutput"
field78.type = "SFVec3f"
field78.name = "translation"

Script77.field.append(field78)
field79 = x3d.field()
field79.accessType = "initializeOnly"
field79.type = "SFNode"
field79.name = "sensor"
PlaneSensor80 = x3d.PlaneSensor(USE="PlaneSensor")

field79.children.append(PlaneSensor80)

Script77.field.append(field79)
field81 = x3d.field()
field81.accessType = "initializeOnly"
field81.type = "SFNode"
field81.name = "transform"
Transform82 = x3d.Transform(USE="Node")

field81.children.append(Transform82)

Script77.field.append(field81)

Script77.sourceCode = '''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}'''
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.nodeField = "translation"
connect84.protoField = "translation"

IS83.connect.append(connect84)

Script77.IS = IS83

ProtoBody56.children.append(Script77)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "PlaneSensor"
ROUTE85.fromField = "translation_changed"
ROUTE85.toNode = "Node"
ROUTE85.toField = "set_translation"

ProtoBody56.children.append(ROUTE85)

ProtoDeclare53.ProtoBody = ProtoBody56

Scene7.children.append(ProtoDeclare53)
ProtoDeclare86 = x3d.ProtoDeclare()
ProtoDeclare86.name = "Route"
ProtoInterface87 = x3d.ProtoInterface()
field88 = x3d.field()
field88.accessType = "inputOutput"
field88.type = "SFColor"
field88.name = "lineColor"
field88.value = [0.43,0.43,0.98]

ProtoInterface87.field.append(field88)
field89 = x3d.field()
field89.accessType = "inputOutput"
field89.type = "SFFloat"
field89.name = "linewidthScaleFactor"
field89.value = 2

ProtoInterface87.field.append(field89)
field90 = x3d.field()
field90.accessType = "initializeOnly"
field90.type = "SFNode"
field90.name = "output"

ProtoInterface87.field.append(field90)
field91 = x3d.field()
field91.accessType = "initializeOnly"
field91.type = "SFNode"
field91.name = "input"

ProtoInterface87.field.append(field91)

ProtoDeclare86.ProtoInterface = ProtoInterface87
ProtoBody92 = x3d.ProtoBody()
Shape93 = x3d.Shape()
Appearance94 = x3d.Appearance()
LineProperties95 = x3d.LineProperties()
IS96 = x3d.IS()
connect97 = x3d.connect()
connect97.nodeField = "linewidthScaleFactor"
connect97.protoField = "linewidthScaleFactor"

IS96.connect.append(connect97)

LineProperties95.IS = IS96

Appearance94.lineProperties = LineProperties95
Material98 = x3d.Material()
Material98.diffuseColor = [0,0,0]
IS99 = x3d.IS()
connect100 = x3d.connect()
connect100.nodeField = "emissiveColor"
connect100.protoField = "lineColor"

IS99.connect.append(connect100)

Material98.IS = IS99

Appearance94.material = Material98

Shape93.appearance = Appearance94
LineSet101 = x3d.LineSet(DEF="Geometry_1")
LineSet101.vertexCount = [2]
Coordinate102 = x3d.Coordinate()
Coordinate102.point = [(-1, 0, 0),(1, 0, 0)]

LineSet101.coord = Coordinate102

Shape93.geometry = LineSet101

ProtoBody92.children.append(Shape93)
Script103 = x3d.Script(DEF="Route")
Script103.directOutput = True
field104 = x3d.field()
field104.accessType = "inputOnly"
field104.type = "SFVec3f"
field104.name = "set_translation"

Script103.field.append(field104)
field105 = x3d.field()
field105.accessType = "initializeOnly"
field105.type = "SFInt32"
field105.name = "routeDimension"
field105.value = 21

Script103.field.append(field105)
field106 = x3d.field()
field106.accessType = "initializeOnly"
field106.type = "SFNode"
field106.name = "output"

Script103.field.append(field106)
field107 = x3d.field()
field107.accessType = "initializeOnly"
field107.type = "SFNode"
field107.name = "input"

Script103.field.append(field107)
field108 = x3d.field()
field108.accessType = "initializeOnly"
field108.type = "SFNode"
field108.name = "geometry"
LineSet109 = x3d.LineSet(USE="Geometry_1")

field108.children.append(LineSet109)

Script103.field.append(field108)
field110 = x3d.field()
field110.accessType = "initializeOnly"
field110.type = "SFNode"
field110.name = "self"
Script111 = x3d.Script(USE="Route")

field110.children.append(Script111)

Script103.field.append(field110)

Script103.sourceCode = '''ecmascript:\n"+
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
IS112 = x3d.IS()
connect113 = x3d.connect()
connect113.nodeField = "output"
connect113.protoField = "output"

IS112.connect.append(connect113)
connect114 = x3d.connect()
connect114.nodeField = "input"
connect114.protoField = "input"

IS112.connect.append(connect114)

Script103.IS = IS112

ProtoBody92.children.append(Script103)

ProtoDeclare86.ProtoBody = ProtoBody92

Scene7.children.append(ProtoDeclare86)
NavigationInfo115 = x3d.NavigationInfo()
NavigationInfo115.type = ["FLY","ANY"]

Scene7.children.append(NavigationInfo115)
Background116 = x3d.Background()
Background116.skyColor = [(0.2, 0.2, 0.2)]

Scene7.children.append(Background116)
OrthoViewpoint117 = x3d.OrthoViewpoint()
OrthoViewpoint117.description = "OthoViewpoint"
OrthoViewpoint117.position = [-3.13496,-4.19776,10]
OrthoViewpoint117.centerOfRotation = [-3.13496,-4.19776,0]
OrthoViewpoint117.fieldOfView = [0,0,10,10]

Scene7.children.append(OrthoViewpoint117)
Viewpoint118 = x3d.Viewpoint()
Viewpoint118.description = "Viewpoint"

Scene7.children.append(Viewpoint118)
Transform119 = x3d.Transform(DEF="Connectors")
ProtoInstance120 = x3d.ProtoInstance()
ProtoInstance120.name = "Route"
fieldValue121 = x3d.fieldValue()
fieldValue121.name = "output"
ProtoInstance122 = x3d.ProtoInstance(DEF="N1")
ProtoInstance122.name = "Node"
fieldValue123 = x3d.fieldValue()
fieldValue123.name = "translation"
fieldValue123.value = "-3.98323 2.88948 0"

ProtoInstance122.fieldValue.append(fieldValue123)

fieldValue121.children.append(ProtoInstance122)

ProtoInstance120.fieldValue.append(fieldValue121)
fieldValue124 = x3d.fieldValue()
fieldValue124.name = "input"
ProtoInstance125 = x3d.ProtoInstance(DEF="N2")
ProtoInstance125.name = "Node"
fieldValue126 = x3d.fieldValue()
fieldValue126.name = "translation"
fieldValue126.value = "-0.0890862 2.96049 0"

ProtoInstance125.fieldValue.append(fieldValue126)

fieldValue124.children.append(ProtoInstance125)

ProtoInstance120.fieldValue.append(fieldValue124)

Transform119.children.append(ProtoInstance120)
ProtoInstance127 = x3d.ProtoInstance()
ProtoInstance127.name = "Route"
fieldValue128 = x3d.fieldValue()
fieldValue128.name = "output"
ProtoInstance129 = x3d.ProtoInstance(USE="N1")
ProtoInstance129.name = "Node"

fieldValue128.children.append(ProtoInstance129)

ProtoInstance127.fieldValue.append(fieldValue128)
fieldValue130 = x3d.fieldValue()
fieldValue130.name = "input"
ProtoInstance131 = x3d.ProtoInstance(DEF="N3")
ProtoInstance131.name = "Node"
fieldValue132 = x3d.fieldValue()
fieldValue132.name = "translation"
fieldValue132.value = "-0.104169 1.16371 0"

ProtoInstance131.fieldValue.append(fieldValue132)

fieldValue130.children.append(ProtoInstance131)

ProtoInstance127.fieldValue.append(fieldValue130)

Transform119.children.append(ProtoInstance127)
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.name = "Route"
fieldValue134 = x3d.fieldValue()
fieldValue134.name = "output"
ProtoInstance135 = x3d.ProtoInstance(USE="N1")
ProtoInstance135.name = "Node"

fieldValue134.children.append(ProtoInstance135)

ProtoInstance133.fieldValue.append(fieldValue134)
fieldValue136 = x3d.fieldValue()
fieldValue136.name = "input"
ProtoInstance137 = x3d.ProtoInstance(DEF="N4")
ProtoInstance137.name = "Node"
fieldValue138 = x3d.fieldValue()
fieldValue138.name = "translation"
fieldValue138.value = "-0.0998688 -0.40172 0"

ProtoInstance137.fieldValue.append(fieldValue138)

fieldValue136.children.append(ProtoInstance137)

ProtoInstance133.fieldValue.append(fieldValue136)

Transform119.children.append(ProtoInstance133)
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.name = "Route"
fieldValue140 = x3d.fieldValue()
fieldValue140.name = "output"
ProtoInstance141 = x3d.ProtoInstance(USE="N1")
ProtoInstance141.name = "Node"

fieldValue140.children.append(ProtoInstance141)

ProtoInstance139.fieldValue.append(fieldValue140)
fieldValue142 = x3d.fieldValue()
fieldValue142.name = "input"
ProtoInstance143 = x3d.ProtoInstance(DEF="N5")
ProtoInstance143.name = "Node"
fieldValue144 = x3d.fieldValue()
fieldValue144.name = "translation"
fieldValue144.value = "-0.0998687 -2.14742 0"

ProtoInstance143.fieldValue.append(fieldValue144)

fieldValue142.children.append(ProtoInstance143)

ProtoInstance139.fieldValue.append(fieldValue142)

Transform119.children.append(ProtoInstance139)
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.name = "Route"
fieldValue146 = x3d.fieldValue()
fieldValue146.name = "output"
ProtoInstance147 = x3d.ProtoInstance(USE="N2")
ProtoInstance147.name = "Node"

fieldValue146.children.append(ProtoInstance147)

ProtoInstance145.fieldValue.append(fieldValue146)
fieldValue148 = x3d.fieldValue()
fieldValue148.name = "input"
ProtoInstance149 = x3d.ProtoInstance(DEF="N6")
ProtoInstance149.name = "Node"
fieldValue150 = x3d.fieldValue()
fieldValue150.name = "translation"
fieldValue150.value = "3.55694 2.4116 0"

ProtoInstance149.fieldValue.append(fieldValue150)

fieldValue148.children.append(ProtoInstance149)

ProtoInstance145.fieldValue.append(fieldValue148)

Transform119.children.append(ProtoInstance145)
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.name = "Route"
fieldValue152 = x3d.fieldValue()
fieldValue152.name = "output"
ProtoInstance153 = x3d.ProtoInstance(USE="N3")
ProtoInstance153.name = "Node"

fieldValue152.children.append(ProtoInstance153)

ProtoInstance151.fieldValue.append(fieldValue152)
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "input"
ProtoInstance155 = x3d.ProtoInstance(USE="N6")
ProtoInstance155.name = "Node"

fieldValue154.children.append(ProtoInstance155)

ProtoInstance151.fieldValue.append(fieldValue154)

Transform119.children.append(ProtoInstance151)
ProtoInstance156 = x3d.ProtoInstance()
ProtoInstance156.name = "Route"
fieldValue157 = x3d.fieldValue()
fieldValue157.name = "output"
ProtoInstance158 = x3d.ProtoInstance(USE="N4")
ProtoInstance158.name = "Node"

fieldValue157.children.append(ProtoInstance158)

ProtoInstance156.fieldValue.append(fieldValue157)
fieldValue159 = x3d.fieldValue()
fieldValue159.name = "input"
ProtoInstance160 = x3d.ProtoInstance(DEF="N7")
ProtoInstance160.name = "Node"
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "translation"
fieldValue161.value = "3.75106 -0.0794556 0"

ProtoInstance160.fieldValue.append(fieldValue161)

fieldValue159.children.append(ProtoInstance160)

ProtoInstance156.fieldValue.append(fieldValue159)

Transform119.children.append(ProtoInstance156)
ProtoInstance162 = x3d.ProtoInstance()
ProtoInstance162.name = "Route"
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "output"
ProtoInstance164 = x3d.ProtoInstance(USE="N5")
ProtoInstance164.name = "Node"

fieldValue163.children.append(ProtoInstance164)

ProtoInstance162.fieldValue.append(fieldValue163)
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "input"
ProtoInstance166 = x3d.ProtoInstance(USE="N7")
ProtoInstance166.name = "Node"

fieldValue165.children.append(ProtoInstance166)

ProtoInstance162.fieldValue.append(fieldValue165)

Transform119.children.append(ProtoInstance162)
ProtoInstance167 = x3d.ProtoInstance()
ProtoInstance167.name = "Route"
fieldValue168 = x3d.fieldValue()
fieldValue168.name = "output"
ProtoInstance169 = x3d.ProtoInstance(USE="N6")
ProtoInstance169.name = "Node"

fieldValue168.children.append(ProtoInstance169)

ProtoInstance167.fieldValue.append(fieldValue168)
fieldValue170 = x3d.fieldValue()
fieldValue170.name = "input"
ProtoInstance171 = x3d.ProtoInstance(DEF="N8")
ProtoInstance171.name = "Node"
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "translation"
fieldValue172.value = "7.68077 1.21228 0"

ProtoInstance171.fieldValue.append(fieldValue172)

fieldValue170.children.append(ProtoInstance171)

ProtoInstance167.fieldValue.append(fieldValue170)

Transform119.children.append(ProtoInstance167)
ProtoInstance173 = x3d.ProtoInstance()
ProtoInstance173.name = "Route"
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "output"
ProtoInstance175 = x3d.ProtoInstance(USE="N7")
ProtoInstance175.name = "Node"

fieldValue174.children.append(ProtoInstance175)

ProtoInstance173.fieldValue.append(fieldValue174)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "input"
ProtoInstance177 = x3d.ProtoInstance(USE="N8")
ProtoInstance177.name = "Node"

fieldValue176.children.append(ProtoInstance177)

ProtoInstance173.fieldValue.append(fieldValue176)

Transform119.children.append(ProtoInstance173)
ProtoInstance178 = x3d.ProtoInstance(USE="N1")
ProtoInstance178.name = "Node"

Transform119.children.append(ProtoInstance178)
ProtoInstance179 = x3d.ProtoInstance(USE="N2")
ProtoInstance179.name = "Node"

Transform119.children.append(ProtoInstance179)
ProtoInstance180 = x3d.ProtoInstance(USE="N3")
ProtoInstance180.name = "Node"

Transform119.children.append(ProtoInstance180)
ProtoInstance181 = x3d.ProtoInstance(USE="N4")
ProtoInstance181.name = "Node"

Transform119.children.append(ProtoInstance181)
ProtoInstance182 = x3d.ProtoInstance(USE="N5")
ProtoInstance182.name = "Node"

Transform119.children.append(ProtoInstance182)
ProtoInstance183 = x3d.ProtoInstance(USE="N6")
ProtoInstance183.name = "Node"

Transform119.children.append(ProtoInstance183)
ProtoInstance184 = x3d.ProtoInstance(USE="N7")
ProtoInstance184.name = "Node"

Transform119.children.append(ProtoInstance184)
ProtoInstance185 = x3d.ProtoInstance(USE="N8")
ProtoInstance185.name = "Node"

Transform119.children.append(ProtoInstance185)

Scene7.children.append(Transform119)

X3D0.Scene = Scene7
f = open("../data/Connectors.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Connectors.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Connectors.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
