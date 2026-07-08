print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
head1.children.append(x3d.Comment("""<component name='Shape' level='4'></component>"""))
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 3

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Texturing"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Rendering"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Grouping"
component6.level = 3

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Core"
component7.level = 1

head1.children.append(component7)
meta8 = x3d.meta()
meta8.name = "title"
meta8.content = "sliders.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "8 August 2025"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "description"
meta10.content = "*Bumpy flower with prototype sliders*"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "license"
meta13.content = "license.html"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "Vim, VI Improved"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
LayerSet16 = x3d.LayerSet()
LayerSet16.activeLayer = 1
LayerSet16.order = [1,2,3]
Layer17 = x3d.Layer()
Layer17.pickable = True
Layer17.objectType = ["ALL"]
NavigationInfo18 = x3d.NavigationInfo()
NavigationInfo18.type = ["EXAMINE"]
NavigationInfo18.avatarSize = [0.25,1.75,0.75]

Layer17.children.append(NavigationInfo18)
DirectionalLight19 = x3d.DirectionalLight()
DirectionalLight19.ambientIntensity = 0.2
DirectionalLight19.direction = [0,-1,0]

Layer17.children.append(DirectionalLight19)
DirectionalLight20 = x3d.DirectionalLight()
DirectionalLight20.ambientIntensity = 0.2
DirectionalLight20.direction = [-1,-0.1,-1]

Layer17.children.append(DirectionalLight20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.description = "My Overview"
Viewpoint21.fieldOfView = 1.570796
Viewpoint21.position = [0,1.75,60]

Layer17.children.append(Viewpoint21)
Group22 = x3d.Group()
Group22.children.append(x3d.Comment("""Arrow X"""))
Transform23 = x3d.Transform()
Transform23.translation = [25,0,0]
Transform23.rotation = [0,0,-1,1.57]
Shape24 = x3d.Shape()
Cylinder25 = x3d.Cylinder(DEF="Shaft")
Cylinder25.radius = 0.35
Cylinder25.height = 50

Shape24.geometry = Cylinder25
Appearance26 = x3d.Appearance()
Material27 = x3d.Material(DEF="RED")
Material27.diffuseColor = [1,0,0]
Material27.emissiveColor = [1,0,0]

Appearance26.material = Material27

Shape24.appearance = Appearance26

Transform23.children.append(Shape24)

Group22.children.append(Transform23)
Transform28 = x3d.Transform()
Transform28.translation = [50,0,0]
Transform28.rotation = [0,0,-1,1.57]
Shape29 = x3d.Shape()
Cone30 = x3d.Cone(DEF="Tip")
Cone30.bottomRadius = 0.8
Cone30.height = 3

Shape29.geometry = Cone30
Appearance31 = x3d.Appearance()
Material32 = x3d.Material(USE="RED")

Appearance31.material = Material32

Shape29.appearance = Appearance31

Transform28.children.append(Shape29)

Group22.children.append(Transform28)
Group22.children.append(x3d.Comment("""Arrow Y"""))
Transform33 = x3d.Transform()
Transform33.translation = [0,25,0]
Shape34 = x3d.Shape()
Cylinder35 = x3d.Cylinder(USE="Shaft")

Shape34.geometry = Cylinder35
Appearance36 = x3d.Appearance()
Material37 = x3d.Material(DEF="GREEN")
Material37.diffuseColor = [0,1,0]
Material37.emissiveColor = [0,1,0]

Appearance36.material = Material37

Shape34.appearance = Appearance36

Transform33.children.append(Shape34)

Group22.children.append(Transform33)
Transform38 = x3d.Transform()
Transform38.translation = [0,50,0]
Shape39 = x3d.Shape()
Cone40 = x3d.Cone(USE="Tip")

Shape39.geometry = Cone40
Appearance41 = x3d.Appearance()
Material42 = x3d.Material(USE="GREEN")

Appearance41.material = Material42

Shape39.appearance = Appearance41

Transform38.children.append(Shape39)

Group22.children.append(Transform38)
Group22.children.append(x3d.Comment("""Arrow Z"""))
Transform43 = x3d.Transform()
Transform43.translation = [0,0,25]
Transform43.rotation = [1,0,0,1.57]
Shape44 = x3d.Shape()
Cylinder45 = x3d.Cylinder(USE="Shaft")

Shape44.geometry = Cylinder45
Appearance46 = x3d.Appearance()
Material47 = x3d.Material(DEF="BLUE")
Material47.diffuseColor = [0,0,1]
Material47.emissiveColor = [0,0,1]

Appearance46.material = Material47

Shape44.appearance = Appearance46

Transform43.children.append(Shape44)

Group22.children.append(Transform43)
Transform48 = x3d.Transform()
Transform48.translation = [0,0,50]
Transform48.rotation = [1,0,0,1.57]
Shape49 = x3d.Shape()
Cone50 = x3d.Cone(USE="Tip")

Shape49.geometry = Cone50
Appearance51 = x3d.Appearance()
Material52 = x3d.Material(USE="BLUE")

Appearance51.material = Material52

Shape49.appearance = Appearance51

Transform48.children.append(Shape49)

Group22.children.append(Transform48)

Layer17.children.append(Group22)
Layer17.children.append(x3d.Comment("""the model that is being reviewed by the users of this scene"""))
Transform53 = x3d.Transform(DEF="FlowerTransform")
Transform54 = x3d.Transform()
Shape55 = x3d.Shape()
IndexedFaceSet56 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet56.convex = False
Coordinate57 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet56.coord = Coordinate57

Shape55.geometry = IndexedFaceSet56
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.diffuseColor = [0.7,0.7,0.7]
Material59.specularColor = [0.5,0.5,0.5]

Appearance58.material = Material59

Shape55.appearance = Appearance58

Transform54.children.append(Shape55)

Transform53.children.append(Transform54)

Layer17.children.append(Transform53)
Script60 = x3d.Script(DEF="OrbitScript")
field61 = x3d.field()
field61.name = "coordinates"
field61.type = "MFVec3f"
field61.accessType = "inputOutput"

Script60.field.append(field61)
field62 = x3d.field()
field62.name = "coordIndexes"
field62.type = "MFInt32"
field62.accessType = "inputOutput"

Script60.field.append(field62)
field63 = x3d.field()
field63.name = "a"
field63.type = "SFFloat"
field63.accessType = "inputOutput"
field63.value = 5

Script60.field.append(field63)
field64 = x3d.field()
field64.name = "b"
field64.type = "SFFloat"
field64.accessType = "inputOutput"
field64.value = 5

Script60.field.append(field64)
field65 = x3d.field()
field65.name = "c"
field65.type = "SFFloat"
field65.accessType = "inputOutput"
field65.value = 5

Script60.field.append(field65)
field66 = x3d.field()
field66.name = "d"
field66.type = "SFFloat"
field66.accessType = "inputOutput"
field66.value = 5

Script60.field.append(field66)
field67 = x3d.field()
field67.name = "pdelta"
field67.type = "SFFloat"
field67.accessType = "inputOutput"
field67.value = 0

Script60.field.append(field67)
field68 = x3d.field()
field68.name = "tdelta"
field68.type = "SFFloat"
field68.accessType = "inputOutput"
field68.value = 0

Script60.field.append(field68)
field69 = x3d.field()
field69.name = "resolution"
field69.type = "SFInt32"
field69.accessType = "inputOutput"
field69.value = 50

Script60.field.append(field69)

Script60.sourceCode = '''ecmascript:\n"+
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

Layer17.children.append(Script60)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromField = "coordIndexes"
ROUTE70.fromNode = "OrbitScript"
ROUTE70.toField = "set_coordIndex"
ROUTE70.toNode = "Orbit"

Layer17.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromField = "coordinates"
ROUTE71.fromNode = "OrbitScript"
ROUTE71.toField = "set_point"
ROUTE71.toNode = "OrbitCoordinates"

Layer17.children.append(ROUTE71)

LayerSet16.layers.append(Layer17)
LayoutLayer72 = x3d.LayoutLayer()
LayoutLayer72.pickable = True
LayoutLayer72.objectType = ["ALL"]
Layout73 = x3d.Layout()
Layout73.align = ["LEFT","BOTTOM"]
Layout73.offset = [-0.2,0.19]
Layout73.size = [0.4,0.6]

LayoutLayer72.layout = Layout73
Viewport74 = x3d.Viewport()
Viewport74.clipBoundary = [0,1,0,1]

LayoutLayer72.viewport = Viewport74
Transform75 = x3d.Transform()
Transform75.translation = [0,0,-3]
Shape76 = x3d.Shape()
Appearance77 = x3d.Appearance()
Material78 = x3d.Material()
Material78.diffuseColor = [0,0,0]
Material78.transparency = 0.7

Appearance77.material = Material78

Shape76.appearance = Appearance77
Box79 = x3d.Box()
Box79.size = [100,100,0.02]

Shape76.geometry = Box79

Transform75.children.append(Shape76)

LayoutLayer72.children.append(Transform75)
Transform80 = x3d.Transform(DEF="equationTransform")
Transform81 = x3d.Transform()
Transform81.translation = [0,0,-20]
Shape82 = x3d.Shape()
Text83 = x3d.Text(DEF="equation")
Text83.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle84 = x3d.FontStyle()
FontStyle84.size = 0.09

Text83.fontStyle = FontStyle84

Shape82.geometry = Text83
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.diffuseColor = [1,1,0]

Appearance85.material = Material86

Shape82.appearance = Appearance85

Transform81.children.append(Shape82)

Transform80.children.append(Transform81)

LayoutLayer72.children.append(Transform80)
LayoutLayer72.children.append(x3d.Comment("""The slider parameters"""))
ProtoDeclare87 = x3d.ProtoDeclare()
ProtoDeclare87.name = "SliderProto"
ProtoInterface88 = x3d.ProtoInterface()
field89 = x3d.field()
field89.name = "sliderTranslation"
field89.accessType = "inputOutput"
field89.type = "SFVec3f"
field89.value = [0,0,0]

ProtoInterface88.field.append(field89)
field90 = x3d.field()
field90.name = "textString"
field90.accessType = "inputOutput"
field90.type = "MFString"
field90.value = ["x="]

ProtoInterface88.field.append(field90)
field91 = x3d.field()
field91.name = "parameterScale"
field91.accessType = "inputOutput"
field91.type = "SFFloat"
field91.value = 15

ProtoInterface88.field.append(field91)
field92 = x3d.field()
field92.name = "parameterName"
field92.accessType = "inputOutput"
field92.type = "SFString"
field92.value = "x"

ProtoInterface88.field.append(field92)
field93 = x3d.field()
field93.name = "orbScript"
field93.accessType = "inputOutput"
field93.type = "SFNode"

ProtoInterface88.field.append(field93)

ProtoDeclare87.ProtoInterface = ProtoInterface88
ProtoBody94 = x3d.ProtoBody()
Group95 = x3d.Group()
Transform96 = x3d.Transform(DEF="protoSlider")
Transform96.translation = [0,0.7,0]
IS97 = x3d.IS()
connect98 = x3d.connect()
connect98.nodeField = "translation"
connect98.protoField = "sliderTranslation"

IS97.connect.append(connect98)

Transform96.IS = IS97
Transform99 = x3d.Transform(DEF="protoTransform")
Transform99.translation = [0,0,0.1]
PlaneSensor100 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor100.description = "Grab with mouse to adjust slider"
PlaneSensor100.maxPosition = [1,0]

Transform99.children.append(PlaneSensor100)
Transform101 = x3d.Transform()
Transform101.translation = [0,0,0]
TouchSensor102 = x3d.TouchSensor(DEF="protoTS")
TouchSensor102.description = "Maybe start dragging this?"

Transform101.children.append(TouchSensor102)

Transform99.children.append(Transform101)
Transform103 = x3d.Transform()
Shape104 = x3d.Shape()
Text105 = x3d.Text(DEF="protoText")
Text105.string = ["a="]
IS106 = x3d.IS()
connect107 = x3d.connect()
connect107.nodeField = "string"
connect107.protoField = "textString"

IS106.connect.append(connect107)

Text105.IS = IS106
FontStyle108 = x3d.FontStyle()
FontStyle108.style = "BOLD"
FontStyle108.size = 0.23

Text105.fontStyle = FontStyle108

Shape104.geometry = Text105
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()

Appearance109.material = Material110

Shape104.appearance = Appearance109

Transform103.children.append(Shape104)

Transform99.children.append(Transform103)

Transform96.children.append(Transform99)

Group95.children.append(Transform96)
Script111 = x3d.Script(DEF="protoValueTransformerScript")
field112 = x3d.field()
field112.name = "protoScale"
field112.accessType = "inputOutput"
field112.type = "SFFloat"

Script111.field.append(field112)
field113 = x3d.field()
field113.name = "protoParameterName"
field113.accessType = "inputOutput"
field113.type = "SFString"

Script111.field.append(field113)
field114 = x3d.field()
field114.name = "newTranslation"
field114.accessType = "inputOnly"
field114.type = "SFVec3f"
field114.value = [1,1,1]

Script111.field.append(field114)
field115 = x3d.field()
field115.name = "protoScript"
field115.accessType = "inputOutput"
field115.type = "SFNode"

Script111.field.append(field115)
field116 = x3d.field()
field116.name = "protoValue"
field116.accessType = "inputOutput"
field116.type = "SFFloat"
field116.value = 1

Script111.field.append(field116)
field117 = x3d.field()
field117.name = "protoText"
field117.accessType = "inputOutput"
field117.type = "MFString"
field117.value = ["1.0"]

Script111.field.append(field117)
IS118 = x3d.IS()
connect119 = x3d.connect()
connect119.nodeField = "protoScale"
connect119.protoField = "parameterScale"

IS118.connect.append(connect119)
connect120 = x3d.connect()
connect120.nodeField = "protoParameterName"
connect120.protoField = "parameterName"

IS118.connect.append(connect120)
connect121 = x3d.connect()
connect121.nodeField = "protoScript"
connect121.protoField = "orbScript"

IS118.connect.append(connect121)

Script111.IS = IS118

Script111.sourceCode = '''ecmascript:\n"+
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

Group95.children.append(Script111)
ROUTE122 = x3d.ROUTE()
ROUTE122.fromField = "translation_changed"
ROUTE122.fromNode = "protoSensor"
ROUTE122.toField = "set_translation"
ROUTE122.toNode = "protoTransform"

Group95.children.append(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.fromField = "translation_changed"
ROUTE123.fromNode = "protoSensor"
ROUTE123.toField = "newTranslation"
ROUTE123.toNode = "protoValueTransformerScript"

Group95.children.append(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromField = "protoText"
ROUTE124.fromNode = "protoValueTransformerScript"
ROUTE124.toField = "string"
ROUTE124.toNode = "protoText"

Group95.children.append(ROUTE124)

ProtoBody94.children.append(Group95)

ProtoDeclare87.ProtoBody = ProtoBody94

LayoutLayer72.children.append(ProtoDeclare87)
ProtoInstance125 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance125.name = "SliderProto"
fieldValue126 = x3d.fieldValue()
fieldValue126.name = "sliderTranslation"
fieldValue126.value = "0 0.7 0"

ProtoInstance125.fieldValue.append(fieldValue126)
fieldValue127 = x3d.fieldValue()
fieldValue127.name = "textString"
fieldValue127.value = "\"a=\""

ProtoInstance125.fieldValue.append(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.name = "parameterScale"
fieldValue128.value = "30"

ProtoInstance125.fieldValue.append(fieldValue128)
fieldValue129 = x3d.fieldValue()
fieldValue129.name = "parameterName"
fieldValue129.value = "a"

ProtoInstance125.fieldValue.append(fieldValue129)
fieldValue130 = x3d.fieldValue()
fieldValue130.name = "orbScript"
Script131 = x3d.Script(USE="OrbitScript")

fieldValue130.children.append(Script131)

ProtoInstance125.fieldValue.append(fieldValue130)

LayoutLayer72.children.append(ProtoInstance125)
ProtoInstance132 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance132.name = "SliderProto"
fieldValue133 = x3d.fieldValue()
fieldValue133.name = "sliderTranslation"
fieldValue133.value = "0 0.4 0"

ProtoInstance132.fieldValue.append(fieldValue133)
fieldValue134 = x3d.fieldValue()
fieldValue134.name = "textString"
fieldValue134.value = "\"b=\""

ProtoInstance132.fieldValue.append(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.name = "parameterScale"
fieldValue135.value = "30"

ProtoInstance132.fieldValue.append(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.name = "parameterName"
fieldValue136.value = "b"

ProtoInstance132.fieldValue.append(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.name = "orbScript"
Script138 = x3d.Script(USE="OrbitScript")

fieldValue137.children.append(Script138)

ProtoInstance132.fieldValue.append(fieldValue137)

LayoutLayer72.children.append(ProtoInstance132)
ProtoInstance139 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance139.name = "SliderProto"
fieldValue140 = x3d.fieldValue()
fieldValue140.name = "sliderTranslation"
fieldValue140.value = "0 0.1 0"

ProtoInstance139.fieldValue.append(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.name = "textString"
fieldValue141.value = "\"c=\""

ProtoInstance139.fieldValue.append(fieldValue141)
fieldValue142 = x3d.fieldValue()
fieldValue142.name = "parameterScale"
fieldValue142.value = "20"

ProtoInstance139.fieldValue.append(fieldValue142)
fieldValue143 = x3d.fieldValue()
fieldValue143.name = "parameterName"
fieldValue143.value = "c"

ProtoInstance139.fieldValue.append(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.name = "orbScript"
Script145 = x3d.Script(USE="OrbitScript")

fieldValue144.children.append(Script145)

ProtoInstance139.fieldValue.append(fieldValue144)

LayoutLayer72.children.append(ProtoInstance139)
ProtoInstance146 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance146.name = "SliderProto"
fieldValue147 = x3d.fieldValue()
fieldValue147.name = "sliderTranslation"
fieldValue147.value = "0 -0.2 0"

ProtoInstance146.fieldValue.append(fieldValue147)
fieldValue148 = x3d.fieldValue()
fieldValue148.name = "textString"
fieldValue148.value = "\"d=\""

ProtoInstance146.fieldValue.append(fieldValue148)
fieldValue149 = x3d.fieldValue()
fieldValue149.name = "parameterScale"
fieldValue149.value = "20"

ProtoInstance146.fieldValue.append(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.name = "parameterName"
fieldValue150.value = "d"

ProtoInstance146.fieldValue.append(fieldValue150)
fieldValue151 = x3d.fieldValue()
fieldValue151.name = "orbScript"
Script152 = x3d.Script(USE="OrbitScript")

fieldValue151.children.append(Script152)

ProtoInstance146.fieldValue.append(fieldValue151)

LayoutLayer72.children.append(ProtoInstance146)
ProtoInstance153 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance153.name = "SliderProto"
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "sliderTranslation"
fieldValue154.value = "0 -0.5 0"

ProtoInstance153.fieldValue.append(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.name = "textString"
fieldValue155.value = "\"tdelta=\""

ProtoInstance153.fieldValue.append(fieldValue155)
fieldValue156 = x3d.fieldValue()
fieldValue156.name = "parameterScale"
fieldValue156.value = "6.28"

ProtoInstance153.fieldValue.append(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.name = "parameterName"
fieldValue157.value = "tdelta"

ProtoInstance153.fieldValue.append(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.name = "orbScript"
Script159 = x3d.Script(USE="OrbitScript")

fieldValue158.children.append(Script159)

ProtoInstance153.fieldValue.append(fieldValue158)

LayoutLayer72.children.append(ProtoInstance153)
ProtoInstance160 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance160.name = "SliderProto"
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "sliderTranslation"
fieldValue161.value = "0 -0.8 0"

ProtoInstance160.fieldValue.append(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "textString"
fieldValue162.value = "\"pdelta=\""

ProtoInstance160.fieldValue.append(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "parameterScale"
fieldValue163.value = "6.28"

ProtoInstance160.fieldValue.append(fieldValue163)
fieldValue164 = x3d.fieldValue()
fieldValue164.name = "parameterName"
fieldValue164.value = "pdelta"

ProtoInstance160.fieldValue.append(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "orbScript"
Script166 = x3d.Script(USE="OrbitScript")

fieldValue165.children.append(Script166)

ProtoInstance160.fieldValue.append(fieldValue165)

LayoutLayer72.children.append(ProtoInstance160)

LayerSet16.layers.append(LayoutLayer72)
Layer167 = x3d.Layer()
Layer167.pickable = True
Layer167.objectType = ["ALL"]
Viewpoint168 = x3d.Viewpoint()
Viewpoint168.description = "My Humanoids"
Viewpoint168.fieldOfView = 1.570796
Viewpoint168.position = [0,1.75,80]

Layer167.children.append(Viewpoint168)

LayerSet16.layers.append(Layer167)

Scene15.layerSet = LayerSet16

X3D0.Scene = Scene15
f = open("../data/sliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/sliders.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/sliders.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
