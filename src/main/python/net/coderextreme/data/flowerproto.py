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
meta7.content = "flowerproto.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "description"
meta9.content = "A flower proto with configurable shaders"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.name = "FlowerProto"
ProtoInterface13 = x3d.ProtoInterface()
field14 = x3d.field()
field14.accessType = "inputOnly"
field14.type = "MFString"
field14.name = "vertex"

ProtoInterface13.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOnly"
field15.type = "MFString"
field15.name = "fragment"

ProtoInterface13.field.append(field15)

ProtoDeclare12.ProtoInterface = ProtoInterface13
ProtoBody16 = x3d.ProtoBody()
Transform17 = x3d.Transform(DEF="transform")
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [0.7,0.7,0.7]
Material20.specularColor = [0.5,0.5,0.5]

Appearance19.material = Material20
ComposedCubeMapTexture21 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture21.frontTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture21.backTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture21.leftTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture21.rightTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture21.topTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture21.bottomTexture = ImageTexture27

Appearance19.texture = ComposedCubeMapTexture21
ComposedShader28 = x3d.ComposedShader(DEF="shader")
ComposedShader28.language = "GLSL"
ShaderPart29 = x3d.ShaderPart()
IS30 = x3d.IS()
connect31 = x3d.connect()
connect31.nodeField = "url"
connect31.protoField = "vertex"

IS30.connect.append(connect31)

ShaderPart29.IS = IS30

ComposedShader28.parts.append(ShaderPart29)
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.type = "FRAGMENT"
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.nodeField = "url"
connect34.protoField = "fragment"

IS33.connect.append(connect34)

ShaderPart32.IS = IS33

ComposedShader28.parts.append(ShaderPart32)
field35 = x3d.field()
field35.accessType = "inputOnly"
field35.type = "SFNode"
field35.name = "cube"

ComposedShader28.field.append(field35)
field36 = x3d.field()
field36.accessType = "initializeOnly"
field36.type = "SFVec3f"
field36.name = "chromaticDispertion"
field36.value = [0.98,1,1.033]

ComposedShader28.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOnly"
field37.type = "SFFloat"
field37.name = "bias"

ComposedShader28.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOnly"
field38.type = "SFFloat"
field38.name = "scale"

ComposedShader28.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOnly"
field39.type = "SFFloat"
field39.name = "power"

ComposedShader28.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOnly"
field40.type = "SFFloat"
field40.name = "a"

ComposedShader28.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOnly"
field41.type = "SFFloat"
field41.name = "b"

ComposedShader28.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOnly"
field42.type = "SFFloat"
field42.name = "c"

ComposedShader28.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOnly"
field43.type = "SFFloat"
field43.name = "d"

ComposedShader28.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "SFFloat"
field44.name = "tdelta"

ComposedShader28.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOnly"
field45.type = "SFFloat"
field45.name = "pdelta"

ComposedShader28.field.append(field45)

Appearance19.shaders.append(ComposedShader28)

Shape18.appearance = Appearance19
Sphere46 = x3d.Sphere()

Shape18.geometry = Sphere46

Transform17.children.append(Shape18)
Script47 = x3d.Script(DEF="Animate")
Script47.directOutput = True
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFVec3f"
field48.name = "translation"

Script47.field.append(field48)
field49 = x3d.field()
field49.accessType = "outputOnly"
field49.type = "SFVec3f"
field49.name = "velocity"

Script47.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOnly"
field50.type = "SFFloat"
field50.name = "set_fraction"

Script47.field.append(field50)
field51 = x3d.field()
field51.accessType = "outputOnly"
field51.type = "SFFloat"
field51.name = "a"

Script47.field.append(field51)
field52 = x3d.field()
field52.accessType = "outputOnly"
field52.type = "SFFloat"
field52.name = "b"

Script47.field.append(field52)
field53 = x3d.field()
field53.accessType = "outputOnly"
field53.type = "SFFloat"
field53.name = "c"

Script47.field.append(field53)
field54 = x3d.field()
field54.accessType = "outputOnly"
field54.type = "SFFloat"
field54.name = "d"

Script47.field.append(field54)
field55 = x3d.field()
field55.accessType = "outputOnly"
field55.type = "SFFloat"
field55.name = "tdelta"

Script47.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "SFFloat"
field56.name = "pdelta"

Script47.field.append(field56)

Script47.sourceCode = '''ecmascript:\n"+
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

Transform17.children.append(Script47)
TimeSensor57 = x3d.TimeSensor(DEF="TourTime")
TimeSensor57.cycleInterval = 5
TimeSensor57.loop = True

Transform17.children.append(TimeSensor57)

ProtoBody16.children.append(Transform17)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "TourTime"
ROUTE58.fromField = "fraction_changed"
ROUTE58.toNode = "Animate"
ROUTE58.toField = "set_fraction"

ProtoBody16.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "translation_changed"
ROUTE59.toNode = "transform"
ROUTE59.toField = "set_translation"

ProtoBody16.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "a"
ROUTE60.toNode = "shader"
ROUTE60.toField = "a"

ProtoBody16.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "b"
ROUTE61.toNode = "shader"
ROUTE61.toField = "b"

ProtoBody16.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "c"
ROUTE62.toNode = "shader"
ROUTE62.toField = "c"

ProtoBody16.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Animate"
ROUTE63.fromField = "d"
ROUTE63.toNode = "shader"
ROUTE63.toField = "d"

ProtoBody16.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "Animate"
ROUTE64.fromField = "tdelta"
ROUTE64.toNode = "shader"
ROUTE64.toField = "tdelta"

ProtoBody16.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "Animate"
ROUTE65.fromField = "pdelta"
ROUTE65.toNode = "shader"
ROUTE65.toField = "pdelta"

ProtoBody16.children.append(ROUTE65)

ProtoDeclare12.ProtoBody = ProtoBody16

Scene11.children.append(ProtoDeclare12)

X3D0.Scene = Scene11
f = open("../data/flowerproto.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowerproto.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowerproto.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
