print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bumpyfreewrlsliders.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Bumpy Orbitals with Sliders for FreeWRL"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
ProtoDeclare7 = x3d.ProtoDeclare()
ProtoDeclare7.name = "SliderProto"
ProtoInterface8 = x3d.ProtoInterface()
field9 = x3d.field()
field9.accessType = "inputOutput"
field9.type = "SFVec3f"
field9.name = "sliderTranslation"
field9.value = [0,0.7,0]

ProtoInterface8.field.append(field9)
field10 = x3d.field()
field10.accessType = "inputOutput"
field10.type = "SFVec3f"
field10.name = "transformTranslation"

ProtoInterface8.field.append(field10)
field11 = x3d.field()
field11.accessType = "inputOutput"
field11.type = "SFVec3f"
field11.name = "sensorTranslation"

ProtoInterface8.field.append(field11)
field12 = x3d.field()
field12.accessType = "inputOutput"
field12.type = "SFVec3f"
field12.name = "numberTranslation"
field12.value = [0.2,0,0]

ProtoInterface8.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "MFString"
field13.name = "textString"
field13.value = ["a="]

ProtoInterface8.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "SFString"
field14.name = "parameterName"
field14.value = "a"

ProtoInterface8.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOutput"
field15.type = "SFFloat"
field15.name = "parameterScale"
field15.value = 30

ProtoInterface8.field.append(field15)
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFNode"
field16.name = "shaderNode"

ProtoInterface8.field.append(field16)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody17 = x3d.ProtoBody()
Group18 = x3d.Group()
Transform19 = x3d.Transform(DEF="protoSlider")
Transform20 = x3d.Transform(DEF="protoTransform")
PlaneSensor21 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor21.maxPosition = [2,0]

Transform20.children.append(PlaneSensor21)
Transform22 = x3d.Transform()
TouchSensor23 = x3d.TouchSensor(DEF="protoTS")

Transform22.children.append(TouchSensor23)

Transform20.children.append(Transform22)
Transform24 = x3d.Transform()
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.diffuseColor = [1,1,1]

Appearance26.material = Material27

Shape25.appearance = Appearance26
Text28 = x3d.Text(DEF="protoText")
FontStyle29 = x3d.FontStyle()
FontStyle29.size = 0.2

Text28.fontStyle = FontStyle29
IS30 = x3d.IS()
connect31 = x3d.connect()
connect31.nodeField = "string"
connect31.protoField = "textString"

IS30.connect.append(connect31)

Text28.IS = IS30

Shape25.geometry = Text28

Transform24.children.append(Shape25)
Transform32 = x3d.Transform()
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.diffuseColor = [1,1,1]

Appearance34.material = Material35

Shape33.appearance = Appearance34
Text36 = x3d.Text(DEF="protoNumber")
Text36.string = ["0"]
FontStyle37 = x3d.FontStyle()
FontStyle37.size = 0.2

Text36.fontStyle = FontStyle37

Shape33.geometry = Text36

Transform32.children.append(Shape33)
IS38 = x3d.IS()
connect39 = x3d.connect()
connect39.nodeField = "translation"
connect39.protoField = "numberTranslation"

IS38.connect.append(connect39)

Transform32.IS = IS38

Transform24.children.append(Transform32)

Transform20.children.append(Transform24)
IS40 = x3d.IS()
connect41 = x3d.connect()
connect41.nodeField = "translation"
connect41.protoField = "transformTranslation"

IS40.connect.append(connect41)
connect42 = x3d.connect()
connect42.nodeField = "translation"
connect42.protoField = "sensorTranslation"

IS40.connect.append(connect42)

Transform20.IS = IS40

Transform19.children.append(Transform20)
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.nodeField = "translation"
connect44.protoField = "sliderTranslation"

IS43.connect.append(connect44)

Transform19.IS = IS43

Group18.children.append(Transform19)
Script45 = x3d.Script(DEF="protoValueTransformerScript")
Script45.directOutput = True
Script45.mustEvaluate = True
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFFloat"
field46.name = "protoScale"

Script45.field.append(field46)
field47 = x3d.field()
field47.accessType = "inputOutput"
field47.type = "SFNode"
field47.name = "shader"

Script45.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFVec3f"
field48.name = "newTranslation"
field48.value = [1,1,1]

Script45.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFFloat"
field49.name = "protoValue_changed"
field49.value = 1

Script45.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "MFString"
field50.name = "protoNumber_changed"
field50.value = ["0.0"]

Script45.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFString"
field51.name = "protoParameterName"

Script45.field.append(field51)

Script45.sourceCode = '''ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};'''
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "protoScale"
connect53.protoField = "parameterScale"

IS52.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "shader"
connect54.protoField = "shaderNode"

IS52.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "protoParameterName"
connect55.protoField = "parameterName"

IS52.connect.append(connect55)

Script45.IS = IS52

Group18.children.append(Script45)

ProtoBody17.children.append(Group18)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "protoSensor"
ROUTE56.fromField = "translation_changed"
ROUTE56.toNode = "protoTransform"
ROUTE56.toField = "set_translation"

ProtoBody17.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "protoSensor"
ROUTE57.fromField = "translation_changed"
ROUTE57.toNode = "protoValueTransformerScript"
ROUTE57.toField = "set_newTranslation"

ProtoBody17.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "protoValueTransformerScript"
ROUTE58.fromField = "protoNumber_changed_changed"
ROUTE58.toNode = "protoNumber"
ROUTE58.toField = "set_string"

ProtoBody17.children.append(ROUTE58)

ProtoDeclare7.ProtoBody = ProtoBody17

Scene6.children.append(ProtoDeclare7)
LayerSet59 = x3d.LayerSet()
LayerSet59.activeLayer = 1
LayerSet59.order = [1,2]
Layer60 = x3d.Layer()
NavigationInfo61 = x3d.NavigationInfo()
NavigationInfo61.type = ["EXAMINE","FLY","LOOKAT","ANY"]
NavigationInfo61.avatarSize = [0.25,1.75,0.75]

Layer60.children.append(NavigationInfo61)
DirectionalLight62 = x3d.DirectionalLight()
DirectionalLight62.ambientIntensity = 0.2
DirectionalLight62.direction = [0,-1,0]

Layer60.children.append(DirectionalLight62)
DirectionalLight63 = x3d.DirectionalLight()
DirectionalLight63.ambientIntensity = 0.2
DirectionalLight63.direction = [-1,-0.1,-1]

Layer60.children.append(DirectionalLight63)
Viewpoint64 = x3d.Viewpoint()
Viewpoint64.description = "My Overview"
Viewpoint64.position = [0,1.75,60]
Viewpoint64.fieldOfView = 1.570796

Layer60.children.append(Viewpoint64)
Group65 = x3d.Group()
Transform66 = x3d.Transform()
Transform66.translation = [25,0,0]
Transform66.rotation = [0,0,-1,1.57]
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material(DEF="RED")
Material69.diffuseColor = [1,0,0]
Material69.emissiveColor = [1,0,0]

Appearance68.material = Material69

Shape67.appearance = Appearance68
Cylinder70 = x3d.Cylinder(DEF="Shaft")
Cylinder70.height = 50
Cylinder70.radius = 0.35

Shape67.geometry = Cylinder70

Transform66.children.append(Shape67)

Group65.children.append(Transform66)
Transform71 = x3d.Transform()
Transform71.translation = [50,0,0]
Transform71.rotation = [0,0,-1,1.57]
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material(USE="RED")

Appearance73.material = Material74

Shape72.appearance = Appearance73
Cone75 = x3d.Cone(DEF="Tip")
Cone75.height = 3
Cone75.bottomRadius = 0.8

Shape72.geometry = Cone75

Transform71.children.append(Shape72)

Group65.children.append(Transform71)
Transform76 = x3d.Transform()
Transform76.translation = [0,25,0]
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material(DEF="GREEN")
Material79.diffuseColor = [0,1,0]
Material79.emissiveColor = [0,1,0]

Appearance78.material = Material79

Shape77.appearance = Appearance78
Cylinder80 = x3d.Cylinder(USE="Shaft")

Shape77.geometry = Cylinder80

Transform76.children.append(Shape77)

Group65.children.append(Transform76)
Transform81 = x3d.Transform()
Transform81.translation = [0,50,0]
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Material84 = x3d.Material(USE="GREEN")

Appearance83.material = Material84

Shape82.appearance = Appearance83
Cone85 = x3d.Cone(USE="Tip")

Shape82.geometry = Cone85

Transform81.children.append(Shape82)

Group65.children.append(Transform81)
Transform86 = x3d.Transform()
Transform86.translation = [0,0,25]
Transform86.rotation = [1,0,0,1.57]
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Material89 = x3d.Material(DEF="BLUE")
Material89.diffuseColor = [0,0,1]
Material89.emissiveColor = [0,0,1]

Appearance88.material = Material89

Shape87.appearance = Appearance88
Cylinder90 = x3d.Cylinder(USE="Shaft")

Shape87.geometry = Cylinder90

Transform86.children.append(Shape87)

Group65.children.append(Transform86)
Transform91 = x3d.Transform()
Transform91.translation = [0,0,50]
Transform91.rotation = [1,0,0,1.57]
Shape92 = x3d.Shape()
Appearance93 = x3d.Appearance()
Material94 = x3d.Material(USE="BLUE")

Appearance93.material = Material94

Shape92.appearance = Appearance93
Cone95 = x3d.Cone(USE="Tip")

Shape92.geometry = Cone95

Transform91.children.append(Shape92)

Group65.children.append(Transform91)

Layer60.children.append(Group65)
Transform96 = x3d.Transform(DEF="FlowerTransform")
Background97 = x3d.Background()
Background97.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background97.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background97.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background97.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background97.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background97.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Transform96.children.append(Background97)
Transform98 = x3d.Transform()
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.diffuseColor = [0.7,0.7,0.7]
Material101.specularColor = [0.5,0.5,0.5]

Appearance100.material = Material101
ComposedCubeMapTexture102 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture103 = x3d.ImageTexture()
ImageTexture103.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture102.frontTexture = ImageTexture103
ImageTexture104 = x3d.ImageTexture()
ImageTexture104.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture102.backTexture = ImageTexture104
ImageTexture105 = x3d.ImageTexture()
ImageTexture105.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture102.leftTexture = ImageTexture105
ImageTexture106 = x3d.ImageTexture()
ImageTexture106.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture102.rightTexture = ImageTexture106
ImageTexture107 = x3d.ImageTexture()
ImageTexture107.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture102.topTexture = ImageTexture107
ImageTexture108 = x3d.ImageTexture()
ImageTexture108.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture102.bottomTexture = ImageTexture108

Appearance100.texture = ComposedCubeMapTexture102
ComposedShader109 = x3d.ComposedShader(DEF="freewrlShader")
ComposedShader109.language = "GLSL"
ShaderPart110 = x3d.ShaderPart()

ComposedShader109.parts.append(ShaderPart110)
ShaderPart111 = x3d.ShaderPart()
ShaderPart111.type = "FRAGMENT"

ComposedShader109.parts.append(ShaderPart111)
field112 = x3d.field()
field112.accessType = "inputOutput"
field112.type = "SFInt32"
field112.name = "fw_textureCoordGenType"

ComposedShader109.field.append(field112)
field113 = x3d.field()
field113.accessType = "initializeOnly"
field113.type = "SFVec3f"
field113.name = "chromaticDispertion"
field113.value = [0.98,1,1.033]

ComposedShader109.field.append(field113)
field114 = x3d.field()
field114.accessType = "inputOutput"
field114.type = "SFFloat"
field114.name = "bias"
field114.value = 0.5

ComposedShader109.field.append(field114)
field115 = x3d.field()
field115.accessType = "inputOutput"
field115.type = "SFFloat"
field115.name = "scale"
field115.value = 0.5

ComposedShader109.field.append(field115)
field116 = x3d.field()
field116.accessType = "inputOutput"
field116.type = "SFFloat"
field116.name = "power"
field116.value = 2

ComposedShader109.field.append(field116)
field117 = x3d.field()
field117.accessType = "inputOutput"
field117.type = "SFFloat"
field117.name = "a"
field117.value = 15

ComposedShader109.field.append(field117)
field118 = x3d.field()
field118.accessType = "inputOutput"
field118.type = "SFFloat"
field118.name = "b"
field118.value = 5

ComposedShader109.field.append(field118)
field119 = x3d.field()
field119.accessType = "inputOutput"
field119.type = "SFFloat"
field119.name = "c"
field119.value = 20

ComposedShader109.field.append(field119)
field120 = x3d.field()
field120.accessType = "inputOutput"
field120.type = "SFFloat"
field120.name = "d"
field120.value = 20

ComposedShader109.field.append(field120)
field121 = x3d.field()
field121.accessType = "inputOutput"
field121.type = "SFFloat"
field121.name = "tdelta"

ComposedShader109.field.append(field121)
field122 = x3d.field()
field122.accessType = "inputOutput"
field122.type = "SFFloat"
field122.name = "pdelta"

ComposedShader109.field.append(field122)

Appearance100.shaders.append(ComposedShader109)

Shape99.appearance = Appearance100
Sphere123 = x3d.Sphere()
Sphere123.radius = 5

Shape99.geometry = Sphere123

Transform98.children.append(Shape99)

Transform96.children.append(Transform98)

Layer60.children.append(Transform96)
DISEntityManager124 = x3d.DISEntityManager(DEF="EntityManager")
DISEntityTypeMapping125 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping125.url = ["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]
DISEntityTypeMapping125.category = 77
DISEntityTypeMapping125.specific = 1

DISEntityManager124.children.append(DISEntityTypeMapping125)
DISEntityTypeMapping126 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping126.url = ["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]
DISEntityTypeMapping126.category = 77
DISEntityTypeMapping126.specific = 2

DISEntityManager124.children.append(DISEntityTypeMapping126)
DISEntityTypeMapping127 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping127.url = ["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]
DISEntityTypeMapping127.category = 77
DISEntityTypeMapping127.specific = 3

DISEntityManager124.children.append(DISEntityTypeMapping127)
DISEntityTypeMapping128 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping128.url = ["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]
DISEntityTypeMapping128.category = 77
DISEntityTypeMapping128.specific = 4

DISEntityManager124.children.append(DISEntityTypeMapping128)

Layer60.children.append(DISEntityManager124)
Collision129 = x3d.Collision()
Group130 = x3d.Group(DEF="AvatarHolder")

Collision129.proxy = Group130

Layer60.children.append(Collision129)

LayerSet59.layers.append(Layer60)
LayoutLayer131 = x3d.LayoutLayer()
Layout132 = x3d.Layout()
Layout132.align = ["LEFT","BOTTOM"]
Layout132.offset = [-0.5,0]

LayoutLayer131.layout = Layout132
Viewport133 = x3d.Viewport()

LayoutLayer131.viewport = Viewport133
Transform134 = x3d.Transform()
Transform134.translation = [0,0,-3]
Shape135 = x3d.Shape()
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.diffuseColor = [0.1,0.1,0.1]
Material137.transparency = 1

Appearance136.material = Material137

Shape135.appearance = Appearance136
Box138 = x3d.Box()
Box138.size = [100,100,0.02]

Shape135.geometry = Box138

Transform134.children.append(Shape135)

LayoutLayer131.children.append(Transform134)
Transform139 = x3d.Transform(DEF="equationTransform")
Transform140 = x3d.Transform()
Transform140.translation = [0,0,-20]
Shape141 = x3d.Shape()
Appearance142 = x3d.Appearance()
Material143 = x3d.Material()
Material143.diffuseColor = [0,1,1]

Appearance142.material = Material143

Shape141.appearance = Appearance142
Text144 = x3d.Text(DEF="equation")
Text144.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle145 = x3d.FontStyle()
FontStyle145.size = 0.09

Text144.fontStyle = FontStyle145

Shape141.geometry = Text144

Transform140.children.append(Shape141)

Transform139.children.append(Transform140)

LayoutLayer131.children.append(Transform139)
ProtoInstance146 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance146.name = "SliderProto"
fieldValue147 = x3d.fieldValue()
fieldValue147.name = "numberTranslation"
fieldValue147.value = "0.3 0 0"

ProtoInstance146.fieldValue.append(fieldValue147)
fieldValue148 = x3d.fieldValue()
fieldValue148.name = "shaderNode"
ComposedShader149 = x3d.ComposedShader(USE="freewrlShader")

fieldValue148.children.append(ComposedShader149)

ProtoInstance146.fieldValue.append(fieldValue148)

LayoutLayer131.children.append(ProtoInstance146)
ProtoInstance150 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance150.name = "SliderProto"
fieldValue151 = x3d.fieldValue()
fieldValue151.name = "sliderTranslation"
fieldValue151.value = "0 0.4 0"

ProtoInstance150.fieldValue.append(fieldValue151)
fieldValue152 = x3d.fieldValue()
fieldValue152.name = "numberTranslation"
fieldValue152.value = "0.3 0 0"

ProtoInstance150.fieldValue.append(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.name = "textString"
fieldValue153.value = "\"b=\""

ProtoInstance150.fieldValue.append(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "parameterName"
fieldValue154.value = "b"

ProtoInstance150.fieldValue.append(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.name = "shaderNode"
ComposedShader156 = x3d.ComposedShader(USE="freewrlShader")

fieldValue155.children.append(ComposedShader156)

ProtoInstance150.fieldValue.append(fieldValue155)

LayoutLayer131.children.append(ProtoInstance150)
ProtoInstance157 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance157.name = "SliderProto"
fieldValue158 = x3d.fieldValue()
fieldValue158.name = "sliderTranslation"
fieldValue158.value = "0 0.1 0"

ProtoInstance157.fieldValue.append(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.name = "numberTranslation"
fieldValue159.value = "0.3 0 0"

ProtoInstance157.fieldValue.append(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.name = "textString"
fieldValue160.value = "\"c=\""

ProtoInstance157.fieldValue.append(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "parameterName"
fieldValue161.value = "c"

ProtoInstance157.fieldValue.append(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "parameterScale"
fieldValue162.value = "20"

ProtoInstance157.fieldValue.append(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "shaderNode"
ComposedShader164 = x3d.ComposedShader(USE="freewrlShader")

fieldValue163.children.append(ComposedShader164)

ProtoInstance157.fieldValue.append(fieldValue163)

LayoutLayer131.children.append(ProtoInstance157)
ProtoInstance165 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance165.name = "SliderProto"
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "sliderTranslation"
fieldValue166.value = "0 -0.2 0"

ProtoInstance165.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "numberTranslation"
fieldValue167.value = "0.3 0 0"

ProtoInstance165.fieldValue.append(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.name = "textString"
fieldValue168.value = "\"d=\""

ProtoInstance165.fieldValue.append(fieldValue168)
fieldValue169 = x3d.fieldValue()
fieldValue169.name = "parameterName"
fieldValue169.value = "d"

ProtoInstance165.fieldValue.append(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.name = "parameterScale"
fieldValue170.value = "20"

ProtoInstance165.fieldValue.append(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.name = "shaderNode"
ComposedShader172 = x3d.ComposedShader(USE="freewrlShader")

fieldValue171.children.append(ComposedShader172)

ProtoInstance165.fieldValue.append(fieldValue171)

LayoutLayer131.children.append(ProtoInstance165)
ProtoInstance173 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance173.name = "SliderProto"
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "sliderTranslation"
fieldValue174.value = "0 -0.5 0"

ProtoInstance173.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "numberTranslation"
fieldValue175.value = "0.8 0 0"

ProtoInstance173.fieldValue.append(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "textString"
fieldValue176.value = "\"tdelta=\""

ProtoInstance173.fieldValue.append(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "parameterName"
fieldValue177.value = "tdelta"

ProtoInstance173.fieldValue.append(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "parameterScale"
fieldValue178.value = "6.28"

ProtoInstance173.fieldValue.append(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.name = "shaderNode"
ComposedShader180 = x3d.ComposedShader(USE="freewrlShader")

fieldValue179.children.append(ComposedShader180)

ProtoInstance173.fieldValue.append(fieldValue179)

LayoutLayer131.children.append(ProtoInstance173)
ProtoInstance181 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance181.name = "SliderProto"
fieldValue182 = x3d.fieldValue()
fieldValue182.name = "sliderTranslation"
fieldValue182.value = "0 -0.8 0"

ProtoInstance181.fieldValue.append(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "numberTranslation"
fieldValue183.value = "0.8 0 0"

ProtoInstance181.fieldValue.append(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.name = "textString"
fieldValue184.value = "\"pdelta=\""

ProtoInstance181.fieldValue.append(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "parameterName"
fieldValue185.value = "pdelta"

ProtoInstance181.fieldValue.append(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "parameterScale"
fieldValue186.value = "6.28"

ProtoInstance181.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "shaderNode"
ComposedShader188 = x3d.ComposedShader(USE="freewrlShader")

fieldValue187.children.append(ComposedShader188)

ProtoInstance181.fieldValue.append(fieldValue187)

LayoutLayer131.children.append(ProtoInstance181)

LayerSet59.layers.append(LayoutLayer131)

Scene6.layerSet = LayerSet59
ROUTE189 = x3d.ROUTE()
ROUTE189.fromNode = "EntityManager"
ROUTE189.fromField = "addedEntities"
ROUTE189.toNode = "AvatarHolder"
ROUTE189.toField = "addChildren"

Scene6.children.append(ROUTE189)
ROUTE190 = x3d.ROUTE()
ROUTE190.fromNode = "EntityManager"
ROUTE190.fromField = "removedEntities"
ROUTE190.toNode = "AvatarHolder"
ROUTE190.toField = "removeChildren"

Scene6.children.append(ROUTE190)

X3D0.Scene = Scene6
f = open("../data/bumpyfreewrlsliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyfreewrlsliders.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyfreewrlsliders.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
