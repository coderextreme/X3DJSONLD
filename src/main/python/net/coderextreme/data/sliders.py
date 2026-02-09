print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "sliders.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "created"
meta3.content = "8 August 2025"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "*Bumpy flower with prototype sliders*"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "license"
meta7.content = "license.html"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "SliderProto"
ProtoInterface10 = x3d.ProtoInterface()
field11 = x3d.field()
field11.accessType = "inputOutput"
field11.type = "SFVec3f"
field11.name = "sliderTranslation"

ProtoInterface10.field.append(field11)
field12 = x3d.field()
field12.accessType = "inputOutput"
field12.type = "MFString"
field12.name = "textString"
field12.value = ["x="]

ProtoInterface10.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "SFFloat"
field13.name = "parameterScale"
field13.value = 15

ProtoInterface10.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "SFString"
field14.name = "parameterName"
field14.value = "x"

ProtoInterface10.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOutput"
field15.type = "SFNode"
field15.name = "orbScript"

ProtoInterface10.field.append(field15)

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody16 = x3d.ProtoBody()
Group17 = x3d.Group()
Transform18 = x3d.Transform(DEF="protoSlider")
Transform19 = x3d.Transform(DEF="protoTransform")
Transform19.translation = [0,0,0.1]
PlaneSensor20 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor20.description = "Grab with mouse to adjust slider"
PlaneSensor20.maxPosition = [1,0]

Transform19.children.append(PlaneSensor20)
Transform21 = x3d.Transform()
TouchSensor22 = x3d.TouchSensor(DEF="protoTS")
TouchSensor22.description = "Maybe start dragging this?"

Transform21.children.append(TouchSensor22)

Transform19.children.append(Transform21)
Transform23 = x3d.Transform()
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()

Appearance25.material = Material26

Shape24.appearance = Appearance25
Text27 = x3d.Text(DEF="protoText")
FontStyle28 = x3d.FontStyle()
FontStyle28.style = "BOLD"
FontStyle28.size = 0.23

Text27.fontStyle = FontStyle28
IS29 = x3d.IS()
connect30 = x3d.connect()
connect30.nodeField = "string"
connect30.protoField = "textString"

IS29.connect.append(connect30)

Text27.IS = IS29

Shape24.geometry = Text27

Transform23.children.append(Shape24)

Transform19.children.append(Transform23)

Transform18.children.append(Transform19)
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.nodeField = "translation"
connect32.protoField = "sliderTranslation"

IS31.connect.append(connect32)

Transform18.IS = IS31

Group17.children.append(Transform18)
Script33 = x3d.Script(DEF="protoValueTransformerScript")
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.name = "protoScale"

Script33.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFString"
field35.name = "protoParameterName"

Script33.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOnly"
field36.type = "SFVec3f"
field36.name = "newTranslation"

Script33.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFNode"
field37.name = "protoScript"

Script33.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "protoValue"
field38.value = 1

Script33.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "MFString"
field39.name = "protoText"
field39.value = ["1.0"]

Script33.field.append(field39)

Script33.sourceCode = '''ecmascript:\n"+
"function set_protoScale(value) {\n"+
"	protoScale = value;\n"+
"}\n"+
"\n"+
"function set_protoParameterName(value) {\n"+
"	protoParameterName = value;\n"+
"}\n"+
"\n"+
"function set_protoScript(value) {\n"+
"	protoScript = value;\n"+
"}\n"+
"\n"+
"function set_protoValue(value) {\n"+
"	protoValue = value;\n"+
"}\n"+
"\n"+
"function set_protoText(value) {\n"+
"	protoText = value;\n"+
"}\n"+
"\n"+
"function newTranslation(value) {\n"+
"       	set_protoValue(value.x * protoScale);\n"+
"       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));\n"+
"	protoScript[protoParameterName] = protoValue;\n"+
"};'''
IS40 = x3d.IS()
connect41 = x3d.connect()
connect41.nodeField = "protoScale"
connect41.protoField = "parameterScale"

IS40.connect.append(connect41)
connect42 = x3d.connect()
connect42.nodeField = "protoParameterName"
connect42.protoField = "parameterName"

IS40.connect.append(connect42)
connect43 = x3d.connect()
connect43.nodeField = "protoScript"
connect43.protoField = "orbScript"

IS40.connect.append(connect43)

Script33.IS = IS40

Group17.children.append(Script33)

ProtoBody16.children.append(Group17)
ROUTE44 = x3d.ROUTE()
ROUTE44.fromNode = "protoSensor"
ROUTE44.fromField = "translation_changed"
ROUTE44.toNode = "protoTransform"
ROUTE44.toField = "set_translation"

ProtoBody16.children.append(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.fromNode = "protoSensor"
ROUTE45.fromField = "translation_changed"
ROUTE45.toNode = "protoValueTransformerScript"
ROUTE45.toField = "newTranslation"

ProtoBody16.children.append(ROUTE45)
ROUTE46 = x3d.ROUTE()
ROUTE46.fromNode = "protoValueTransformerScript"
ROUTE46.fromField = "protoText_changed"
ROUTE46.toNode = "protoText"
ROUTE46.toField = "set_string"

ProtoBody16.children.append(ROUTE46)

ProtoDeclare9.ProtoBody = ProtoBody16

Scene8.children.append(ProtoDeclare9)
LayerSet47 = x3d.LayerSet()
LayerSet47.activeLayer = 1
LayerSet47.order = [1,2,3]
Layer48 = x3d.Layer()
NavigationInfo49 = x3d.NavigationInfo()
NavigationInfo49.type = ["EXAMINE"]
NavigationInfo49.avatarSize = [0.25,1.75,0.75]

Layer48.children.append(NavigationInfo49)
DirectionalLight50 = x3d.DirectionalLight()
DirectionalLight50.ambientIntensity = 0.2
DirectionalLight50.direction = [0,-1,0]

Layer48.children.append(DirectionalLight50)
DirectionalLight51 = x3d.DirectionalLight()
DirectionalLight51.ambientIntensity = 0.2
DirectionalLight51.direction = [-1,-0.1,-1]

Layer48.children.append(DirectionalLight51)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.description = "My Overview"
Viewpoint52.position = [0,1.75,60]
Viewpoint52.fieldOfView = 1.570796

Layer48.children.append(Viewpoint52)
Group53 = x3d.Group()
Transform54 = x3d.Transform()
Transform54.translation = [25,0,0]
Transform54.rotation = [0,0,-1,1.57]
Shape55 = x3d.Shape()
Appearance56 = x3d.Appearance()
Material57 = x3d.Material(DEF="RED")
Material57.diffuseColor = [1,0,0]
Material57.emissiveColor = [1,0,0]

Appearance56.material = Material57

Shape55.appearance = Appearance56
Cylinder58 = x3d.Cylinder(DEF="Shaft")
Cylinder58.height = 50
Cylinder58.radius = 0.35

Shape55.geometry = Cylinder58

Transform54.children.append(Shape55)

Group53.children.append(Transform54)
Transform59 = x3d.Transform()
Transform59.translation = [50,0,0]
Transform59.rotation = [0,0,-1,1.57]
Shape60 = x3d.Shape()
Appearance61 = x3d.Appearance()
Material62 = x3d.Material(USE="RED")

Appearance61.material = Material62

Shape60.appearance = Appearance61
Cone63 = x3d.Cone(DEF="Tip")
Cone63.height = 3
Cone63.bottomRadius = 0.8

Shape60.geometry = Cone63

Transform59.children.append(Shape60)

Group53.children.append(Transform59)
Transform64 = x3d.Transform()
Transform64.translation = [0,25,0]
Shape65 = x3d.Shape()
Appearance66 = x3d.Appearance()
Material67 = x3d.Material(DEF="GREEN")
Material67.diffuseColor = [0,1,0]
Material67.emissiveColor = [0,1,0]

Appearance66.material = Material67

Shape65.appearance = Appearance66
Cylinder68 = x3d.Cylinder(USE="Shaft")

Shape65.geometry = Cylinder68

Transform64.children.append(Shape65)

Group53.children.append(Transform64)
Transform69 = x3d.Transform()
Transform69.translation = [0,50,0]
Shape70 = x3d.Shape()
Appearance71 = x3d.Appearance()
Material72 = x3d.Material(USE="GREEN")

Appearance71.material = Material72

Shape70.appearance = Appearance71
Cone73 = x3d.Cone(USE="Tip")

Shape70.geometry = Cone73

Transform69.children.append(Shape70)

Group53.children.append(Transform69)
Transform74 = x3d.Transform()
Transform74.translation = [0,0,25]
Transform74.rotation = [1,0,0,1.57]
Shape75 = x3d.Shape()
Appearance76 = x3d.Appearance()
Material77 = x3d.Material(DEF="BLUE")
Material77.diffuseColor = [0,0,1]
Material77.emissiveColor = [0,0,1]

Appearance76.material = Material77

Shape75.appearance = Appearance76
Cylinder78 = x3d.Cylinder(USE="Shaft")

Shape75.geometry = Cylinder78

Transform74.children.append(Shape75)

Group53.children.append(Transform74)
Transform79 = x3d.Transform()
Transform79.translation = [0,0,50]
Transform79.rotation = [1,0,0,1.57]
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material(USE="BLUE")

Appearance81.material = Material82

Shape80.appearance = Appearance81
Cone83 = x3d.Cone(USE="Tip")

Shape80.geometry = Cone83

Transform79.children.append(Shape80)

Group53.children.append(Transform79)

Layer48.children.append(Group53)
Transform84 = x3d.Transform(DEF="FlowerTransform")
Transform85 = x3d.Transform()
Shape86 = x3d.Shape()
Appearance87 = x3d.Appearance()
Material88 = x3d.Material()
Material88.diffuseColor = [0.7,0.7,0.7]
Material88.specularColor = [0.5,0.5,0.5]

Appearance87.material = Material88

Shape86.appearance = Appearance87
IndexedFaceSet89 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet89.convex = False
Coordinate90 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet89.coord = Coordinate90

Shape86.geometry = IndexedFaceSet89

Transform85.children.append(Shape86)

Transform84.children.append(Transform85)

Layer48.children.append(Transform84)
Script91 = x3d.Script(DEF="OrbitScript")
field92 = x3d.field()
field92.accessType = "inputOutput"
field92.type = "MFVec3f"
field92.name = "coordinates"

Script91.field.append(field92)
field93 = x3d.field()
field93.accessType = "inputOutput"
field93.type = "MFInt32"
field93.name = "coordIndexes"

Script91.field.append(field93)
field94 = x3d.field()
field94.accessType = "inputOutput"
field94.type = "SFFloat"
field94.name = "a"
field94.value = 5

Script91.field.append(field94)
field95 = x3d.field()
field95.accessType = "inputOutput"
field95.type = "SFFloat"
field95.name = "b"
field95.value = 5

Script91.field.append(field95)
field96 = x3d.field()
field96.accessType = "inputOutput"
field96.type = "SFFloat"
field96.name = "c"
field96.value = 5

Script91.field.append(field96)
field97 = x3d.field()
field97.accessType = "inputOutput"
field97.type = "SFFloat"
field97.name = "d"
field97.value = 5

Script91.field.append(field97)
field98 = x3d.field()
field98.accessType = "inputOutput"
field98.type = "SFFloat"
field98.name = "pdelta"

Script91.field.append(field98)
field99 = x3d.field()
field99.accessType = "inputOutput"
field99.type = "SFFloat"
field99.name = "tdelta"

Script91.field.append(field99)
field100 = x3d.field()
field100.accessType = "inputOutput"
field100.type = "SFInt32"
field100.name = "resolution"
field100.value = 50

Script91.field.append(field100)

Script91.sourceCode = '''ecmascript:\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"			function set_a(value) {\n"+
"				a = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_b(value) {\n"+
"				b = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_c(value) {\n"+
"				c = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_d(value) {\n"+
"				d = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_pdelta(value) {\n"+
"				pdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_tdelta(value) {\n"+
"				tdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function resolution(value) {\n"+
"				resolution = value;\n"+
"				initialize();\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}'''

Layer48.children.append(Script91)

LayerSet47.layers.append(Layer48)
LayoutLayer101 = x3d.LayoutLayer()
Layout102 = x3d.Layout()
Layout102.align = ["LEFT","BOTTOM"]
Layout102.offset = [-0.2,0.19]
Layout102.size = [0.4,0.6]

LayoutLayer101.layout = Layout102
Viewport103 = x3d.Viewport()

LayoutLayer101.viewport = Viewport103
Transform104 = x3d.Transform()
Transform104.translation = [0,0,-3]
Shape105 = x3d.Shape()
Appearance106 = x3d.Appearance()
Material107 = x3d.Material()
Material107.diffuseColor = [0,0,0]
Material107.transparency = 0.7

Appearance106.material = Material107

Shape105.appearance = Appearance106
Box108 = x3d.Box()
Box108.size = [100,100,0.02]

Shape105.geometry = Box108

Transform104.children.append(Shape105)

LayoutLayer101.children.append(Transform104)
Transform109 = x3d.Transform(DEF="equationTransform")
Transform110 = x3d.Transform()
Transform110.translation = [0,0,-20]
Shape111 = x3d.Shape()
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()
Material113.diffuseColor = [1,1,0]

Appearance112.material = Material113

Shape111.appearance = Appearance112
Text114 = x3d.Text(DEF="equation")
Text114.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle115 = x3d.FontStyle()
FontStyle115.size = 0.09

Text114.fontStyle = FontStyle115

Shape111.geometry = Text114

Transform110.children.append(Shape111)

Transform109.children.append(Transform110)

LayoutLayer101.children.append(Transform109)
ProtoInstance116 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance116.name = "SliderProto"
fieldValue117 = x3d.fieldValue()
fieldValue117.name = "sliderTranslation"
fieldValue117.value = "0 0.7 0"

ProtoInstance116.fieldValue.append(fieldValue117)
fieldValue118 = x3d.fieldValue()
fieldValue118.name = "textString"
fieldValue118.value = "\"a=\""

ProtoInstance116.fieldValue.append(fieldValue118)
fieldValue119 = x3d.fieldValue()
fieldValue119.name = "parameterScale"
fieldValue119.value = "30"

ProtoInstance116.fieldValue.append(fieldValue119)
fieldValue120 = x3d.fieldValue()
fieldValue120.name = "parameterName"
fieldValue120.value = "a"

ProtoInstance116.fieldValue.append(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.name = "orbScript"
Script122 = x3d.Script(USE="OrbitScript")

fieldValue121.children.append(Script122)

ProtoInstance116.fieldValue.append(fieldValue121)

LayoutLayer101.children.append(ProtoInstance116)
ProtoInstance123 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance123.name = "SliderProto"
fieldValue124 = x3d.fieldValue()
fieldValue124.name = "sliderTranslation"
fieldValue124.value = "0 0.4 0"

ProtoInstance123.fieldValue.append(fieldValue124)
fieldValue125 = x3d.fieldValue()
fieldValue125.name = "textString"
fieldValue125.value = "\"b=\""

ProtoInstance123.fieldValue.append(fieldValue125)
fieldValue126 = x3d.fieldValue()
fieldValue126.name = "parameterScale"
fieldValue126.value = "30"

ProtoInstance123.fieldValue.append(fieldValue126)
fieldValue127 = x3d.fieldValue()
fieldValue127.name = "parameterName"
fieldValue127.value = "b"

ProtoInstance123.fieldValue.append(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.name = "orbScript"
Script129 = x3d.Script(USE="OrbitScript")

fieldValue128.children.append(Script129)

ProtoInstance123.fieldValue.append(fieldValue128)

LayoutLayer101.children.append(ProtoInstance123)
ProtoInstance130 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance130.name = "SliderProto"
fieldValue131 = x3d.fieldValue()
fieldValue131.name = "sliderTranslation"
fieldValue131.value = "0 0.1 0"

ProtoInstance130.fieldValue.append(fieldValue131)
fieldValue132 = x3d.fieldValue()
fieldValue132.name = "textString"
fieldValue132.value = "\"c=\""

ProtoInstance130.fieldValue.append(fieldValue132)
fieldValue133 = x3d.fieldValue()
fieldValue133.name = "parameterScale"
fieldValue133.value = "20"

ProtoInstance130.fieldValue.append(fieldValue133)
fieldValue134 = x3d.fieldValue()
fieldValue134.name = "parameterName"
fieldValue134.value = "c"

ProtoInstance130.fieldValue.append(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.name = "orbScript"
Script136 = x3d.Script(USE="OrbitScript")

fieldValue135.children.append(Script136)

ProtoInstance130.fieldValue.append(fieldValue135)

LayoutLayer101.children.append(ProtoInstance130)
ProtoInstance137 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance137.name = "SliderProto"
fieldValue138 = x3d.fieldValue()
fieldValue138.name = "sliderTranslation"
fieldValue138.value = "0 -0.2 0"

ProtoInstance137.fieldValue.append(fieldValue138)
fieldValue139 = x3d.fieldValue()
fieldValue139.name = "textString"
fieldValue139.value = "\"d=\""

ProtoInstance137.fieldValue.append(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.name = "parameterScale"
fieldValue140.value = "20"

ProtoInstance137.fieldValue.append(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.name = "parameterName"
fieldValue141.value = "d"

ProtoInstance137.fieldValue.append(fieldValue141)
fieldValue142 = x3d.fieldValue()
fieldValue142.name = "orbScript"
Script143 = x3d.Script(USE="OrbitScript")

fieldValue142.children.append(Script143)

ProtoInstance137.fieldValue.append(fieldValue142)

LayoutLayer101.children.append(ProtoInstance137)
ProtoInstance144 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance144.name = "SliderProto"
fieldValue145 = x3d.fieldValue()
fieldValue145.name = "sliderTranslation"
fieldValue145.value = "0 -0.5 0"

ProtoInstance144.fieldValue.append(fieldValue145)
fieldValue146 = x3d.fieldValue()
fieldValue146.name = "textString"
fieldValue146.value = "\"tdelta=\""

ProtoInstance144.fieldValue.append(fieldValue146)
fieldValue147 = x3d.fieldValue()
fieldValue147.name = "parameterScale"
fieldValue147.value = "6.28"

ProtoInstance144.fieldValue.append(fieldValue147)
fieldValue148 = x3d.fieldValue()
fieldValue148.name = "parameterName"
fieldValue148.value = "tdelta"

ProtoInstance144.fieldValue.append(fieldValue148)
fieldValue149 = x3d.fieldValue()
fieldValue149.name = "orbScript"
Script150 = x3d.Script(USE="OrbitScript")

fieldValue149.children.append(Script150)

ProtoInstance144.fieldValue.append(fieldValue149)

LayoutLayer101.children.append(ProtoInstance144)
ProtoInstance151 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance151.name = "SliderProto"
fieldValue152 = x3d.fieldValue()
fieldValue152.name = "sliderTranslation"
fieldValue152.value = "0 -0.8 0"

ProtoInstance151.fieldValue.append(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.name = "textString"
fieldValue153.value = "\"pdelta=\""

ProtoInstance151.fieldValue.append(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "parameterScale"
fieldValue154.value = "6.28"

ProtoInstance151.fieldValue.append(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.name = "parameterName"
fieldValue155.value = "pdelta"

ProtoInstance151.fieldValue.append(fieldValue155)
fieldValue156 = x3d.fieldValue()
fieldValue156.name = "orbScript"
Script157 = x3d.Script(USE="OrbitScript")

fieldValue156.children.append(Script157)

ProtoInstance151.fieldValue.append(fieldValue156)

LayoutLayer101.children.append(ProtoInstance151)

LayerSet47.layers.append(LayoutLayer101)
Layer158 = x3d.Layer()
Viewpoint159 = x3d.Viewpoint()
Viewpoint159.description = "My Humanoids"
Viewpoint159.position = [0,1.75,80]
Viewpoint159.fieldOfView = 1.570796

Layer158.children.append(Viewpoint159)

LayerSet47.layers.append(Layer158)

Scene8.layerSet = LayerSet47
ROUTE160 = x3d.ROUTE()
ROUTE160.fromNode = "OrbitScript"
ROUTE160.fromField = "coordIndexes_changed"
ROUTE160.toNode = "Orbit"
ROUTE160.toField = "set_coordIndex"

Scene8.children.append(ROUTE160)
ROUTE161 = x3d.ROUTE()
ROUTE161.fromNode = "OrbitScript"
ROUTE161.fromField = "coordinates_changed"
ROUTE161.toNode = "OrbitCoordinates"
ROUTE161.toField = "set_point"

Scene8.children.append(ROUTE161)

X3D0.Scene = Scene8
f = open("../data/sliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/sliders.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/sliders.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
