print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bumpyx_itesliders.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "*Bumpy flower with prototype sliders*"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
ProtoDeclare8 = x3d.ProtoDeclare()
ProtoDeclare8.name = "SliderProto"
ProtoInterface9 = x3d.ProtoInterface()
field10 = x3d.field()
field10.accessType = "inputOutput"
field10.type = "SFVec3f"
field10.name = "sliderTranslation"
field10.value = [0,0.7,0]

ProtoInterface9.field.append(field10)
field11 = x3d.field()
field11.accessType = "inputOutput"
field11.type = "SFVec3f"
field11.name = "transformTranslation"

ProtoInterface9.field.append(field11)
field12 = x3d.field()
field12.accessType = "inputOutput"
field12.type = "SFVec3f"
field12.name = "sensorTranslation"

ProtoInterface9.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "MFString"
field13.name = "textString"
field13.value = ["a="]

ProtoInterface9.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "SFFloat"
field14.name = "parameterScale"
field14.value = 30

ProtoInterface9.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOutput"
field15.type = "SFString"
field15.name = "parameterName"
field15.value = "a"

ProtoInterface9.field.append(field15)
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "MFString"
field16.name = "petNames"

ProtoInterface9.field.append(field16)
field17 = x3d.field()
field17.accessType = "inputOutput"
field17.type = "SFNode"
field17.name = "shaderNode"

ProtoInterface9.field.append(field17)

ProtoDeclare8.ProtoInterface = ProtoInterface9
ProtoBody18 = x3d.ProtoBody()
Group19 = x3d.Group()
Transform20 = x3d.Transform(DEF="protoSlider")
Transform21 = x3d.Transform(DEF="protoTransform")
PlaneSensor22 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor22.description = "Grab with mouse to adjust slider"
PlaneSensor22.maxPosition = [1,0]

Transform21.children.append(PlaneSensor22)
Transform23 = x3d.Transform()
TouchSensor24 = x3d.TouchSensor(DEF="protoTS")

Transform23.children.append(TouchSensor24)

Transform21.children.append(Transform23)
Transform25 = x3d.Transform()
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()

Appearance27.material = Material28

Shape26.appearance = Appearance27
Text29 = x3d.Text(DEF="protoText")
FontStyle30 = x3d.FontStyle()
FontStyle30.size = 0.23

Text29.fontStyle = FontStyle30
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.nodeField = "string"
connect32.protoField = "textString"

IS31.connect.append(connect32)

Text29.IS = IS31

Shape26.geometry = Text29

Transform25.children.append(Shape26)

Transform21.children.append(Transform25)
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "translation"
connect34.protoField = "transformTranslation"

IS33.connect.append(connect34)
connect35 = x3d.connect()
connect35.nodeField = "translation"
connect35.protoField = "sensorTranslation"

IS33.connect.append(connect35)

Transform21.IS = IS33

Transform20.children.append(Transform21)
IS36 = x3d.IS()
connect37 = x3d.connect()
connect37.nodeField = "translation"
connect37.protoField = "sliderTranslation"

IS36.connect.append(connect37)

Transform20.IS = IS36

Group19.children.append(Transform20)
Script38 = x3d.Script(DEF="protoValueTransformerScript")
Script38.url = ["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"]
Script38.directOutput = True
Script38.mustEvaluate = True
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "protoScale"

Script38.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "MFString"
field40.name = "petNames"

Script38.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFString"
field41.name = "protoParameterName"

Script38.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFNode"
field42.name = "shader"

Script38.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOnly"
field43.type = "SFVec3f"
field43.name = "newTranslation"

Script38.field.append(field43)
field44 = x3d.field()
field44.accessType = "outputOnly"
field44.type = "SFFloat"
field44.name = "protoValue_changed"

Script38.field.append(field44)
field45 = x3d.field()
field45.accessType = "outputOnly"
field45.type = "MFString"
field45.name = "protoText_changed"

Script38.field.append(field45)
IS46 = x3d.IS()
connect47 = x3d.connect()
connect47.nodeField = "protoScale"
connect47.protoField = "parameterScale"

IS46.connect.append(connect47)
connect48 = x3d.connect()
connect48.nodeField = "petNames"
connect48.protoField = "petNames"

IS46.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "protoParameterName"
connect49.protoField = "parameterName"

IS46.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "shader"
connect50.protoField = "shaderNode"

IS46.connect.append(connect50)

Script38.IS = IS46

Group19.children.append(Script38)

ProtoBody18.children.append(Group19)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "protoSensor"
ROUTE51.fromField = "translation_changed"
ROUTE51.toNode = "protoTransform"
ROUTE51.toField = "set_translation"

ProtoBody18.children.append(ROUTE51)
ROUTE52 = x3d.ROUTE()
ROUTE52.fromNode = "protoSensor"
ROUTE52.fromField = "translation_changed"
ROUTE52.toNode = "protoValueTransformerScript"
ROUTE52.toField = "newTranslation"

ProtoBody18.children.append(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "protoValueTransformerScript"
ROUTE53.fromField = "protoText_changed"
ROUTE53.toNode = "protoText"
ROUTE53.toField = "set_string"

ProtoBody18.children.append(ROUTE53)

ProtoDeclare8.ProtoBody = ProtoBody18

Scene7.children.append(ProtoDeclare8)
LayerSet54 = x3d.LayerSet()
LayerSet54.activeLayer = 1
LayerSet54.order = [1,2,3]
Layer55 = x3d.Layer()
NavigationInfo56 = x3d.NavigationInfo()
NavigationInfo56.type = ["EXAMINE"]
NavigationInfo56.avatarSize = [0.25,1.75,0.75]

Layer55.children.append(NavigationInfo56)
DirectionalLight57 = x3d.DirectionalLight()
DirectionalLight57.ambientIntensity = 0.2
DirectionalLight57.direction = [0,-1,0]

Layer55.children.append(DirectionalLight57)
DirectionalLight58 = x3d.DirectionalLight()
DirectionalLight58.ambientIntensity = 0.2
DirectionalLight58.direction = [-1,-0.1,-1]

Layer55.children.append(DirectionalLight58)
Viewpoint59 = x3d.Viewpoint()
Viewpoint59.description = "My Overview"
Viewpoint59.position = [0,1.75,60]
Viewpoint59.fieldOfView = 1.570796

Layer55.children.append(Viewpoint59)
Group60 = x3d.Group()
Transform61 = x3d.Transform()
Transform61.translation = [25,0,0]
Transform61.rotation = [0,0,-1,1.57]
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material(DEF="RED")
Material64.diffuseColor = [1,0,0]
Material64.emissiveColor = [1,0,0]

Appearance63.material = Material64

Shape62.appearance = Appearance63
Cylinder65 = x3d.Cylinder(DEF="Shaft")
Cylinder65.height = 50
Cylinder65.radius = 0.35

Shape62.geometry = Cylinder65

Transform61.children.append(Shape62)

Group60.children.append(Transform61)
Transform66 = x3d.Transform()
Transform66.translation = [50,0,0]
Transform66.rotation = [0,0,-1,1.57]
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material(USE="RED")

Appearance68.material = Material69

Shape67.appearance = Appearance68
Cone70 = x3d.Cone(DEF="Tip")
Cone70.height = 3
Cone70.bottomRadius = 0.8

Shape67.geometry = Cone70

Transform66.children.append(Shape67)

Group60.children.append(Transform66)
Transform71 = x3d.Transform()
Transform71.translation = [0,25,0]
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material(DEF="GREEN")
Material74.diffuseColor = [0,1,0]
Material74.emissiveColor = [0,1,0]

Appearance73.material = Material74

Shape72.appearance = Appearance73
Cylinder75 = x3d.Cylinder(USE="Shaft")

Shape72.geometry = Cylinder75

Transform71.children.append(Shape72)

Group60.children.append(Transform71)
Transform76 = x3d.Transform()
Transform76.translation = [0,50,0]
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material(USE="GREEN")

Appearance78.material = Material79

Shape77.appearance = Appearance78
Cone80 = x3d.Cone(USE="Tip")

Shape77.geometry = Cone80

Transform76.children.append(Shape77)

Group60.children.append(Transform76)
Transform81 = x3d.Transform()
Transform81.translation = [0,0,25]
Transform81.rotation = [1,0,0,1.57]
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Material84 = x3d.Material(DEF="BLUE")
Material84.diffuseColor = [0,0,1]
Material84.emissiveColor = [0,0,1]

Appearance83.material = Material84

Shape82.appearance = Appearance83
Cylinder85 = x3d.Cylinder(USE="Shaft")

Shape82.geometry = Cylinder85

Transform81.children.append(Shape82)

Group60.children.append(Transform81)
Transform86 = x3d.Transform()
Transform86.translation = [0,0,50]
Transform86.rotation = [1,0,0,1.57]
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Material89 = x3d.Material(USE="BLUE")

Appearance88.material = Material89

Shape87.appearance = Appearance88
Cone90 = x3d.Cone(USE="Tip")

Shape87.geometry = Cone90

Transform86.children.append(Shape87)

Group60.children.append(Transform86)

Layer55.children.append(Group60)
Transform91 = x3d.Transform(DEF="FlowerTransform")
Background92 = x3d.Background()
Background92.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background92.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background92.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background92.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background92.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background92.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Transform91.children.append(Background92)
Transform93 = x3d.Transform()
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.diffuseColor = [0.7,0.7,0.7]
Material96.specularColor = [0.5,0.5,0.5]

Appearance95.material = Material96
ComposedCubeMapTexture97 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture98 = x3d.ImageTexture()
ImageTexture98.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture97.frontTexture = ImageTexture98
ImageTexture99 = x3d.ImageTexture()
ImageTexture99.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture97.backTexture = ImageTexture99
ImageTexture100 = x3d.ImageTexture()
ImageTexture100.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture97.leftTexture = ImageTexture100
ImageTexture101 = x3d.ImageTexture()
ImageTexture101.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture97.rightTexture = ImageTexture101
ImageTexture102 = x3d.ImageTexture()
ImageTexture102.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture97.topTexture = ImageTexture102
ImageTexture103 = x3d.ImageTexture()
ImageTexture103.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture97.bottomTexture = ImageTexture103

Appearance95.texture = ComposedCubeMapTexture97
ComposedShader104 = x3d.ComposedShader(DEF="x_iteShader")
ComposedShader104.language = "GLSL"
ShaderPart105 = x3d.ShaderPart()
ShaderPart105.url = ["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]

ComposedShader104.parts.append(ShaderPart105)
ShaderPart106 = x3d.ShaderPart()
ShaderPart106.type = "FRAGMENT"
ShaderPart106.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]

ComposedShader104.parts.append(ShaderPart106)
field107 = x3d.field()
field107.accessType = "inputOnly"
field107.type = "SFVec3f"
field107.name = "chromaticDispertion"

ComposedShader104.field.append(field107)
field108 = x3d.field()
field108.accessType = "inputOnly"
field108.type = "SFNode"
field108.name = "cube"

ComposedShader104.field.append(field108)
field109 = x3d.field()
field109.accessType = "inputOnly"
field109.type = "SFFloat"
field109.name = "bias"

ComposedShader104.field.append(field109)
field110 = x3d.field()
field110.accessType = "inputOnly"
field110.type = "SFFloat"
field110.name = "scale"

ComposedShader104.field.append(field110)
field111 = x3d.field()
field111.accessType = "inputOnly"
field111.type = "SFFloat"
field111.name = "power"

ComposedShader104.field.append(field111)
field112 = x3d.field()
field112.accessType = "inputOutput"
field112.type = "SFFloat"
field112.name = "a"
field112.value = 15

ComposedShader104.field.append(field112)
field113 = x3d.field()
field113.accessType = "inputOutput"
field113.type = "SFFloat"
field113.name = "b"
field113.value = 5

ComposedShader104.field.append(field113)
field114 = x3d.field()
field114.accessType = "inputOutput"
field114.type = "SFFloat"
field114.name = "c"
field114.value = 5

ComposedShader104.field.append(field114)
field115 = x3d.field()
field115.accessType = "inputOutput"
field115.type = "SFFloat"
field115.name = "d"
field115.value = 5

ComposedShader104.field.append(field115)
field116 = x3d.field()
field116.accessType = "inputOutput"
field116.type = "SFFloat"
field116.name = "tdelta"

ComposedShader104.field.append(field116)
field117 = x3d.field()
field117.accessType = "inputOutput"
field117.type = "SFFloat"
field117.name = "pdelta"

ComposedShader104.field.append(field117)

Appearance95.shaders.append(ComposedShader104)

Shape94.appearance = Appearance95
IndexedFaceSet118 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet118.convex = False
Coordinate119 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet118.coord = Coordinate119

Shape94.geometry = IndexedFaceSet118

Transform93.children.append(Shape94)

Transform91.children.append(Transform93)

Layer55.children.append(Transform91)
Script120 = x3d.Script(DEF="OrbitScript")
field121 = x3d.field()
field121.accessType = "inputOutput"
field121.type = "MFVec3f"
field121.name = "coordinates"

Script120.field.append(field121)
field122 = x3d.field()
field122.accessType = "outputOnly"
field122.type = "MFInt32"
field122.name = "coordIndexes"

Script120.field.append(field122)
field123 = x3d.field()
field123.accessType = "inputOutput"
field123.type = "SFFloat"
field123.name = "a"
field123.value = 10

Script120.field.append(field123)
field124 = x3d.field()
field124.accessType = "inputOutput"
field124.type = "SFFloat"
field124.name = "b"
field124.value = 10

Script120.field.append(field124)
field125 = x3d.field()
field125.accessType = "inputOutput"
field125.type = "SFFloat"
field125.name = "c"
field125.value = 2

Script120.field.append(field125)
field126 = x3d.field()
field126.accessType = "inputOutput"
field126.type = "SFFloat"
field126.name = "d"
field126.value = 2

Script120.field.append(field126)
field127 = x3d.field()
field127.accessType = "inputOutput"
field127.type = "SFFloat"
field127.name = "pdelta"

Script120.field.append(field127)
field128 = x3d.field()
field128.accessType = "inputOutput"
field128.type = "SFFloat"
field128.name = "tdelta"

Script120.field.append(field128)

Script120.sourceCode = '''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}'''

Layer55.children.append(Script120)

LayerSet54.layers.append(Layer55)
LayoutLayer129 = x3d.LayoutLayer()
Layout130 = x3d.Layout()
Layout130.align = ["LEFT","BOTTOM"]
Layout130.offset = [-0.2,0.19]
Layout130.size = [0.4,0.6]

LayoutLayer129.layout = Layout130
Viewport131 = x3d.Viewport()

LayoutLayer129.viewport = Viewport131
Transform132 = x3d.Transform()
Transform132.translation = [0,0,-3]
Shape133 = x3d.Shape()
Appearance134 = x3d.Appearance()
Material135 = x3d.Material()
Material135.diffuseColor = [0,0,0]
Material135.transparency = 0.7

Appearance134.material = Material135

Shape133.appearance = Appearance134
Box136 = x3d.Box()
Box136.size = [100,100,0.02]

Shape133.geometry = Box136

Transform132.children.append(Shape133)

LayoutLayer129.children.append(Transform132)
Transform137 = x3d.Transform(DEF="equationTransform")
Transform138 = x3d.Transform()
Transform138.translation = [0,0,-20]
Shape139 = x3d.Shape()
Appearance140 = x3d.Appearance()
Material141 = x3d.Material()
Material141.diffuseColor = [1,1,0]

Appearance140.material = Material141

Shape139.appearance = Appearance140
Text142 = x3d.Text(DEF="equation")
Text142.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle143 = x3d.FontStyle()
FontStyle143.size = 0.09

Text142.fontStyle = FontStyle143

Shape139.geometry = Text142

Transform138.children.append(Shape139)

Transform137.children.append(Transform138)

LayoutLayer129.children.append(Transform137)
ProtoInstance144 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance144.name = "SliderProto"
fieldValue145 = x3d.fieldValue()
fieldValue145.name = "petNames"
fieldValue145.value = "\"yottzumm\" \"group1-petname\""

ProtoInstance144.fieldValue.append(fieldValue145)
fieldValue146 = x3d.fieldValue()
fieldValue146.name = "shaderNode"
ComposedShader147 = x3d.ComposedShader(USE="x_iteShader")

fieldValue146.children.append(ComposedShader147)

ProtoInstance144.fieldValue.append(fieldValue146)

LayoutLayer129.children.append(ProtoInstance144)
ProtoInstance148 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance148.name = "SliderProto"
fieldValue149 = x3d.fieldValue()
fieldValue149.name = "sliderTranslation"
fieldValue149.value = "0 0.4 0"

ProtoInstance148.fieldValue.append(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.name = "textString"
fieldValue150.value = "\"b=\""

ProtoInstance148.fieldValue.append(fieldValue150)
fieldValue151 = x3d.fieldValue()
fieldValue151.name = "parameterName"
fieldValue151.value = "b"

ProtoInstance148.fieldValue.append(fieldValue151)
fieldValue152 = x3d.fieldValue()
fieldValue152.name = "petNames"
fieldValue152.value = "\"yottzumm\" \"group1-petname\""

ProtoInstance148.fieldValue.append(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.name = "shaderNode"
ComposedShader154 = x3d.ComposedShader(USE="x_iteShader")

fieldValue153.children.append(ComposedShader154)

ProtoInstance148.fieldValue.append(fieldValue153)

LayoutLayer129.children.append(ProtoInstance148)
ProtoInstance155 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance155.name = "SliderProto"
fieldValue156 = x3d.fieldValue()
fieldValue156.name = "sliderTranslation"
fieldValue156.value = "0 0.1 0"

ProtoInstance155.fieldValue.append(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.name = "textString"
fieldValue157.value = "\"c=\""

ProtoInstance155.fieldValue.append(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.name = "parameterScale"
fieldValue158.value = "20"

ProtoInstance155.fieldValue.append(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.name = "parameterName"
fieldValue159.value = "c"

ProtoInstance155.fieldValue.append(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.name = "petNames"
fieldValue160.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\""

ProtoInstance155.fieldValue.append(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "shaderNode"
ComposedShader162 = x3d.ComposedShader(USE="x_iteShader")

fieldValue161.children.append(ComposedShader162)

ProtoInstance155.fieldValue.append(fieldValue161)

LayoutLayer129.children.append(ProtoInstance155)
ProtoInstance163 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance163.name = "SliderProto"
fieldValue164 = x3d.fieldValue()
fieldValue164.name = "sliderTranslation"
fieldValue164.value = "0 -0.2 0"

ProtoInstance163.fieldValue.append(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "textString"
fieldValue165.value = "\"d=\""

ProtoInstance163.fieldValue.append(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "parameterScale"
fieldValue166.value = "20"

ProtoInstance163.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "parameterName"
fieldValue167.value = "d"

ProtoInstance163.fieldValue.append(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.name = "petNames"
fieldValue168.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\""

ProtoInstance163.fieldValue.append(fieldValue168)
fieldValue169 = x3d.fieldValue()
fieldValue169.name = "shaderNode"
ComposedShader170 = x3d.ComposedShader(USE="x_iteShader")

fieldValue169.children.append(ComposedShader170)

ProtoInstance163.fieldValue.append(fieldValue169)

LayoutLayer129.children.append(ProtoInstance163)
ProtoInstance171 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance171.name = "SliderProto"
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "sliderTranslation"
fieldValue172.value = "0 -0.5 0"

ProtoInstance171.fieldValue.append(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.name = "textString"
fieldValue173.value = "\"tdelta=\""

ProtoInstance171.fieldValue.append(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "parameterScale"
fieldValue174.value = "6.28"

ProtoInstance171.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "parameterName"
fieldValue175.value = "tdelta"

ProtoInstance171.fieldValue.append(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "petNames"
fieldValue176.value = "\"yottzumm2\" \"group1-petname\""

ProtoInstance171.fieldValue.append(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "shaderNode"
ComposedShader178 = x3d.ComposedShader(USE="x_iteShader")

fieldValue177.children.append(ComposedShader178)

ProtoInstance171.fieldValue.append(fieldValue177)

LayoutLayer129.children.append(ProtoInstance171)
ProtoInstance179 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance179.name = "SliderProto"
fieldValue180 = x3d.fieldValue()
fieldValue180.name = "sliderTranslation"
fieldValue180.value = "0 -0.8 0"

ProtoInstance179.fieldValue.append(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.name = "textString"
fieldValue181.value = "\"pdelta=\""

ProtoInstance179.fieldValue.append(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.name = "parameterScale"
fieldValue182.value = "6.28"

ProtoInstance179.fieldValue.append(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "parameterName"
fieldValue183.value = "pdelta"

ProtoInstance179.fieldValue.append(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.name = "petNames"
fieldValue184.value = "\"yottzumm2\" \"group1-petname\""

ProtoInstance179.fieldValue.append(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "shaderNode"
ComposedShader186 = x3d.ComposedShader(USE="x_iteShader")

fieldValue185.children.append(ComposedShader186)

ProtoInstance179.fieldValue.append(fieldValue185)

LayoutLayer129.children.append(ProtoInstance179)

LayerSet54.layers.append(LayoutLayer129)
Layer187 = x3d.Layer()
Viewpoint188 = x3d.Viewpoint()
Viewpoint188.description = "My Humanoids"
Viewpoint188.position = [0,1.75,80]
Viewpoint188.fieldOfView = 1.570796

Layer187.children.append(Viewpoint188)
Script189 = x3d.Script(DEF="HumanoidScript")
Script189.url = ["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"]
Script189.directOutput = True
Script189.mustEvaluate = True

Layer187.children.append(Script189)
Group190 = x3d.Group(DEF="humanoidGroup")
Group191 = x3d.Group()

Group190.children.append(Group191)

Layer187.children.append(Group190)

LayerSet54.layers.append(Layer187)

Scene7.layerSet = LayerSet54
ROUTE192 = x3d.ROUTE()
ROUTE192.fromNode = "OrbitScript"
ROUTE192.fromField = "coordIndexes"
ROUTE192.toNode = "Orbit"
ROUTE192.toField = "set_coordIndex"

Scene7.children.append(ROUTE192)
ROUTE193 = x3d.ROUTE()
ROUTE193.fromNode = "OrbitScript"
ROUTE193.fromField = "coordinates_changed"
ROUTE193.toNode = "OrbitCoordinates"
ROUTE193.toField = "set_point"

Scene7.children.append(ROUTE193)

X3D0.Scene = Scene7
f = open("../data/bumpyx_itesliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyx_itesliders.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyx_itesliders.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
