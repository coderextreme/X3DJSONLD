print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "flowerproto.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "A flower proto with configurable shaders"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
ProtoDeclare7 = x3d.ProtoDeclare()
ProtoDeclare7.name = "FlowerProto"
ProtoInterface8 = x3d.ProtoInterface()
field9 = x3d.field()
field9.accessType = "inputOnly"
field9.type = "MFString"
field9.name = "vertex"

ProtoInterface8.field.append(field9)
field10 = x3d.field()
field10.accessType = "inputOnly"
field10.type = "MFString"
field10.name = "fragment"

ProtoInterface8.field.append(field10)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody11 = x3d.ProtoBody()
Transform12 = x3d.Transform(DEF="transform")
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [0.7,0.7,0.7]
Material15.specularColor = [0.5,0.5,0.5]

Appearance14.material = Material15
ComposedCubeMapTexture16 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture17 = x3d.ImageTexture()
ImageTexture17.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture16.frontTexture = ImageTexture17
ImageTexture18 = x3d.ImageTexture()
ImageTexture18.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture16.backTexture = ImageTexture18
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture16.leftTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture16.rightTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture16.topTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture16.bottomTexture = ImageTexture22

Appearance14.texture = ComposedCubeMapTexture16
ComposedShader23 = x3d.ComposedShader(DEF="shader")
ComposedShader23.language = "GLSL"
ShaderPart24 = x3d.ShaderPart()
IS25 = x3d.IS()
connect26 = x3d.connect()
connect26.nodeField = "url"
connect26.protoField = "vertex"

IS25.connect.append(connect26)

ShaderPart24.IS = IS25

ComposedShader23.parts.append(ShaderPart24)
ShaderPart27 = x3d.ShaderPart()
ShaderPart27.type = "FRAGMENT"
IS28 = x3d.IS()
connect29 = x3d.connect()
connect29.nodeField = "url"
connect29.protoField = "fragment"

IS28.connect.append(connect29)

ShaderPart27.IS = IS28

ComposedShader23.parts.append(ShaderPart27)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFInt32"
field30.name = "fw_textureCoordGenType"

ComposedShader23.field.append(field30)
field31 = x3d.field()
field31.accessType = "initializeOnly"
field31.type = "SFVec3f"
field31.name = "chromaticDispertion"
field31.value = [0.98,1,1.033]

ComposedShader23.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "bias"
field32.value = 0.5

ComposedShader23.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFFloat"
field33.name = "scale"
field33.value = 0.5

ComposedShader23.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.name = "power"
field34.value = 2

ComposedShader23.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "a"
field35.value = 5

ComposedShader23.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "b"
field36.value = 5

ComposedShader23.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "c"
field37.value = 20

ComposedShader23.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "d"
field38.value = 20

ComposedShader23.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "tdelta"

ComposedShader23.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "pdelta"

ComposedShader23.field.append(field40)

Appearance14.shaders.append(ComposedShader23)

Shape13.appearance = Appearance14
Sphere41 = x3d.Sphere()
Sphere41.radius = 5

Shape13.geometry = Sphere41

Transform12.children.append(Shape13)
Script42 = x3d.Script(DEF="Animate")
Script42.directOutput = True
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
field45.accessType = "inputOutput"
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
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
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

Transform12.children.append(Script42)
TimeSensor52 = x3d.TimeSensor(DEF="TourTime")
TimeSensor52.cycleInterval = 5
TimeSensor52.loop = True

Transform12.children.append(TimeSensor52)

ProtoBody11.children.append(Transform12)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "TourTime"
ROUTE53.fromField = "fraction_changed"
ROUTE53.toNode = "Animate"
ROUTE53.toField = "set_set_fraction"

ProtoBody11.children.append(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "Animate"
ROUTE54.fromField = "translation_changed"
ROUTE54.toNode = "transform"
ROUTE54.toField = "set_translation"

ProtoBody11.children.append(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "Animate"
ROUTE55.fromField = "a_changed"
ROUTE55.toNode = "shader"
ROUTE55.toField = "set_a"

ProtoBody11.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "Animate"
ROUTE56.fromField = "b_changed"
ROUTE56.toNode = "shader"
ROUTE56.toField = "set_b"

ProtoBody11.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "Animate"
ROUTE57.fromField = "c_changed"
ROUTE57.toNode = "shader"
ROUTE57.toField = "set_c"

ProtoBody11.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Animate"
ROUTE58.fromField = "d_changed"
ROUTE58.toNode = "shader"
ROUTE58.toField = "set_d"

ProtoBody11.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "tdelta_changed"
ROUTE59.toNode = "shader"
ROUTE59.toField = "set_tdelta"

ProtoBody11.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "pdelta_changed"
ROUTE60.toNode = "shader"
ROUTE60.toField = "set_pdelta"

ProtoBody11.children.append(ROUTE60)

ProtoDeclare7.ProtoBody = ProtoBody11

Scene6.children.append(ProtoDeclare7)
NavigationInfo61 = x3d.NavigationInfo()

Scene6.children.append(NavigationInfo61)
Viewpoint62 = x3d.Viewpoint()
Viewpoint62.description = "Tour Views"
Viewpoint62.position = [0,0,50]

Scene6.children.append(Viewpoint62)
Background63 = x3d.Background()
Background63.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background63.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background63.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background63.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background63.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background63.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene6.children.append(Background63)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.name = "FlowerProto"

Scene6.children.append(ProtoInstance64)

X3D0.Scene = Scene6
f = open("../data/flowerprotofreewrl.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowerprotofreewrl.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowerprotofreewrl.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
