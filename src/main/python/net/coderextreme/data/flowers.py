print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "EnvironmentalEffects"
component2.level = 3

head1.children.append(component2)
component3 = x3d.component()
component3.name = "Shaders"
component3.level = 1

head1.children.append(component3)
component4 = x3d.component()
component4.name = "CubeMapTexturing"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Shape"
component5.level = 4

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Grouping"
component6.level = 3

head1.children.append(component6)
meta7 = x3d.meta()
meta7.name = "title"
meta7.content = "flowers.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "description"
meta9.content = "5 or more prismatic flowers"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.name = "flower"
ProtoInterface13 = x3d.ProtoInterface()

ProtoDeclare12.ProtoInterface = ProtoInterface13
ProtoBody14 = x3d.ProtoBody()
Transform15 = x3d.Transform(DEF="animate_transform")
Shape16 = x3d.Shape()
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.diffuseColor = [0.7,0.7,0.7]
Material18.specularColor = [0.5,0.5,0.5]

Appearance17.material = Material18
ComposedCubeMapTexture19 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture19.frontTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture19.backTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture19.leftTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture19.rightTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture19.topTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture19.bottomTexture = ImageTexture25

Appearance17.texture = ComposedCubeMapTexture19
ComposedShader26 = x3d.ComposedShader(DEF="x_ite")
ComposedShader26.language = "GLSL"
ShaderPart27 = x3d.ShaderPart()
ShaderPart27.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]

ComposedShader26.parts.append(ShaderPart27)
ShaderPart28 = x3d.ShaderPart()
ShaderPart28.type = "FRAGMENT"
ShaderPart28.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]

ComposedShader26.parts.append(ShaderPart28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFNode"
field29.name = "cube"
ComposedCubeMapTexture30 = x3d.ComposedCubeMapTexture(USE="texture")

field29.children.append(ComposedCubeMapTexture30)

ComposedShader26.field.append(field29)
field31 = x3d.field()
field31.accessType = "initializeOnly"
field31.type = "SFVec3f"
field31.name = "chromaticDispertion"
field31.value = [0.98,1,1.033]

ComposedShader26.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOnly"
field32.type = "SFFloat"
field32.name = "bias"

ComposedShader26.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOnly"
field33.type = "SFFloat"
field33.name = "scale"

ComposedShader26.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOnly"
field34.type = "SFFloat"
field34.name = "power"

ComposedShader26.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOnly"
field35.type = "SFFloat"
field35.name = "a"

ComposedShader26.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOnly"
field36.type = "SFFloat"
field36.name = "b"

ComposedShader26.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOnly"
field37.type = "SFFloat"
field37.name = "c"

ComposedShader26.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOnly"
field38.type = "SFFloat"
field38.name = "d"

ComposedShader26.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOnly"
field39.type = "SFFloat"
field39.name = "tdelta"

ComposedShader26.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOnly"
field40.type = "SFFloat"
field40.name = "pdelta"

ComposedShader26.field.append(field40)

Appearance17.shaders.append(ComposedShader26)

Shape16.appearance = Appearance17
Sphere41 = x3d.Sphere()

Shape16.geometry = Sphere41

Transform15.children.append(Shape16)

ProtoBody14.children.append(Transform15)
Script42 = x3d.Script(DEF="Animate")
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFVec3f"
field43.name = "translation"

Script42.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFVec3f"
field44.name = "velocity"

Script42.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOnly"
field45.type = "SFFloat"
field45.name = "set_fraction"

Script42.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFFloat"
field46.name = "a"
field46.value = 0.5

Script42.field.append(field46)
field47 = x3d.field()
field47.accessType = "inputOutput"
field47.type = "SFFloat"
field47.name = "b"
field47.value = 0.5

Script42.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFFloat"
field48.name = "c"
field48.value = 3

Script42.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFFloat"
field49.name = "d"
field49.value = 3

Script42.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFFloat"
field50.name = "tdelta"
field50.value = 0.5

Script42.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFFloat"
field51.name = "pdelta"
field51.value = 0.5

Script42.field.append(field51)

Script42.sourceCode = '''ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}'''

ProtoBody14.children.append(Script42)
TimeSensor52 = x3d.TimeSensor(DEF="TourTime")
TimeSensor52.cycleInterval = 5
TimeSensor52.loop = True

ProtoBody14.children.append(TimeSensor52)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "TourTime"
ROUTE53.fromField = "fraction_changed"
ROUTE53.toNode = "Animate"
ROUTE53.toField = "set_fraction"

ProtoBody14.children.append(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "Animate"
ROUTE54.fromField = "translation_changed"
ROUTE54.toNode = "animate_transform"
ROUTE54.toField = "set_translation"

ProtoBody14.children.append(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "Animate"
ROUTE55.fromField = "a_changed"
ROUTE55.toNode = "x_ite"
ROUTE55.toField = "a"

ProtoBody14.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "Animate"
ROUTE56.fromField = "b_changed"
ROUTE56.toNode = "x_ite"
ROUTE56.toField = "b"

ProtoBody14.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "Animate"
ROUTE57.fromField = "c_changed"
ROUTE57.toNode = "x_ite"
ROUTE57.toField = "c"

ProtoBody14.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Animate"
ROUTE58.fromField = "d_changed"
ROUTE58.toNode = "x_ite"
ROUTE58.toField = "d"

ProtoBody14.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "pdelta_changed"
ROUTE59.toNode = "x_ite"
ROUTE59.toField = "pdelta"

ProtoBody14.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "tdelta_changed"
ROUTE60.toNode = "x_ite"
ROUTE60.toField = "tdelta"

ProtoBody14.children.append(ROUTE60)

ProtoDeclare12.ProtoBody = ProtoBody14

Scene11.children.append(ProtoDeclare12)
NavigationInfo61 = x3d.NavigationInfo()

Scene11.children.append(NavigationInfo61)
Background62 = x3d.Background()
Background62.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background62.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background62.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background62.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background62.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background62.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene11.children.append(Background62)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.name = "flower"

Scene11.children.append(ProtoInstance63)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "flower"

Scene11.children.append(ProtoInstance64)
ProtoInstance65 = x3d.ProtoInstance()
ProtoInstance65.name = "flower"

Scene11.children.append(ProtoInstance65)

X3D0.Scene = Scene11
f = open("../data/flowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
