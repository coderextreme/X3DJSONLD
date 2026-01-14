print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 3

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Shaders"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "CubeMapTexturing"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Texturing"
component6.level = 1

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Rendering"
component7.level = 1

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Shape"
component8.level = 4

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Grouping"
component9.level = 3

head1.children.append(component9)
component10 = x3d.component()
component10.name = "Core"
component10.level = 1

head1.children.append(component10)
meta11 = x3d.meta()
meta11.name = "title"
meta11.content = "flowerproto.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "creator"
meta12.content = "John Carlson"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "description"
meta13.content = "A flower proto with configurable shaders"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "FlowerProto"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.name = "vertex"
field19.accessType = "inputOnly"
field19.type = "MFString"
field19.value = ["../shaders/gl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs"]

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.name = "fragment"
field20.accessType = "inputOnly"
field20.type = "MFString"
field20.value = ["../shaders/pc_flowers.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs"]

ProtoInterface18.field.append(field20)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
Transform22.DEF = "transform"
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.diffuseColor = [0.7,0.7,0.7]
Material25.specularColor = [0.5,0.5,0.5]

Appearance24.material = Material25
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.DEF = "texture"
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture26.backTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture26.bottomTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture26.frontTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture26.leftTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture26.rightTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture26.topTexture = ImageTexture32

Appearance24.texture = ComposedCubeMapTexture26
ComposedShader33 = x3d.ComposedShader()
ComposedShader33.DEF = "shader"
ComposedShader33.language = "GLSL"
"""<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>"""
field34 = x3d.field()
field34.name = "cube"
field34.type = "SFNode"
field34.accessType = "inputOnly"
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.USE = "texture"

field34.children.append(ComposedCubeMapTexture35)

ComposedShader33.field.append(field34)
field36 = x3d.field()
field36.name = "chromaticDispertion"
field36.accessType = "initializeOnly"
field36.type = "SFVec3f"
field36.value = [0.98,1,1.033]

ComposedShader33.field.append(field36)
field37 = x3d.field()
field37.name = "bias"
field37.type = "SFFloat"
field37.accessType = "inputOnly"
field37.value = 0.5

ComposedShader33.field.append(field37)
field38 = x3d.field()
field38.name = "scale"
field38.type = "SFFloat"
field38.accessType = "inputOnly"
field38.value = 0.5

ComposedShader33.field.append(field38)
field39 = x3d.field()
field39.name = "power"
field39.type = "SFFloat"
field39.accessType = "inputOnly"
field39.value = 2

ComposedShader33.field.append(field39)
field40 = x3d.field()
field40.name = "a"
field40.type = "SFFloat"
field40.accessType = "inputOnly"
field40.value = 10

ComposedShader33.field.append(field40)
field41 = x3d.field()
field41.name = "b"
field41.type = "SFFloat"
field41.accessType = "inputOnly"
field41.value = 1

ComposedShader33.field.append(field41)
field42 = x3d.field()
field42.name = "c"
field42.type = "SFFloat"
field42.accessType = "inputOnly"
field42.value = 20

ComposedShader33.field.append(field42)
field43 = x3d.field()
field43.name = "d"
field43.type = "SFFloat"
field43.accessType = "inputOnly"
field43.value = 20

ComposedShader33.field.append(field43)
field44 = x3d.field()
field44.name = "tdelta"
field44.type = "SFFloat"
field44.accessType = "inputOnly"
field44.value = 0

ComposedShader33.field.append(field44)
field45 = x3d.field()
field45.name = "pdelta"
field45.type = "SFFloat"
field45.accessType = "inputOnly"
field45.value = 0

ComposedShader33.field.append(field45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.type = "VERTEX"
IS47 = x3d.IS()
connect48 = x3d.connect()
connect48.nodeField = "url"
connect48.protoField = "vertex"

IS47.connect.append(connect48)

ShaderPart46.IS = IS47

ComposedShader33.parts.append(ShaderPart46)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.type = "FRAGMENT"
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.nodeField = "url"
connect51.protoField = "fragment"

IS50.connect.append(connect51)

ShaderPart49.IS = IS50

ComposedShader33.parts.append(ShaderPart49)

Appearance24.shaders.append(ComposedShader33)

Shape23.appearance = Appearance24
Sphere52 = x3d.Sphere()

Shape23.geometry = Sphere52

Transform22.children.append(Shape23)
Script53 = x3d.Script()
Script53.DEF = "Animate"
Script53.directOutput = True
field54 = x3d.field()
field54.name = "translation"
field54.accessType = "inputOutput"
field54.type = "SFVec3f"
field54.value = [0,0,0]

Script53.field.append(field54)
field55 = x3d.field()
field55.name = "velocity"
field55.accessType = "outputOnly"
field55.type = "SFVec3f"
field55.value = [0,0,0]

Script53.field.append(field55)
field56 = x3d.field()
field56.name = "set_fraction"
field56.accessType = "inputOnly"
field56.type = "SFFloat"

Script53.field.append(field56)
field57 = x3d.field()
field57.name = "a"
field57.type = "SFFloat"
field57.accessType = "outputOnly"
field57.value = 0.5

Script53.field.append(field57)
field58 = x3d.field()
field58.name = "b"
field58.type = "SFFloat"
field58.accessType = "outputOnly"
field58.value = 0.5

Script53.field.append(field58)
field59 = x3d.field()
field59.name = "c"
field59.type = "SFFloat"
field59.accessType = "outputOnly"
field59.value = 3

Script53.field.append(field59)
field60 = x3d.field()
field60.name = "d"
field60.type = "SFFloat"
field60.accessType = "outputOnly"
field60.value = 3

Script53.field.append(field60)
field61 = x3d.field()
field61.name = "tdelta"
field61.type = "SFFloat"
field61.accessType = "outputOnly"
field61.value = 0.5

Script53.field.append(field61)
field62 = x3d.field()
field62.name = "pdelta"
field62.type = "SFFloat"
field62.accessType = "outputOnly"
field62.value = 0.5

Script53.field.append(field62)

Script53.sourceCode = '''ecmascript:\n"+
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

Transform22.children.append(Script53)
TimeSensor63 = x3d.TimeSensor()
TimeSensor63.DEF = "TourTime"
TimeSensor63.cycleInterval = 5
TimeSensor63.loop = True

Transform22.children.append(TimeSensor63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "TourTime"
ROUTE64.fromField = "fraction_changed"
ROUTE64.toNode = "Animate"
ROUTE64.toField = "set_fraction"

Transform22.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "Animate"
ROUTE65.fromField = "translation_changed"
ROUTE65.toNode = "transform"
ROUTE65.toField = "set_translation"

Transform22.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "Animate"
ROUTE66.fromField = "a"
ROUTE66.toNode = "shader"
ROUTE66.toField = "a"

Transform22.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "Animate"
ROUTE67.fromField = "b"
ROUTE67.toNode = "shader"
ROUTE67.toField = "b"

Transform22.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "Animate"
ROUTE68.fromField = "c"
ROUTE68.toNode = "shader"
ROUTE68.toField = "c"

Transform22.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "Animate"
ROUTE69.fromField = "d"
ROUTE69.toNode = "shader"
ROUTE69.toField = "d"

Transform22.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "Animate"
ROUTE70.fromField = "tdelta"
ROUTE70.toNode = "shader"
ROUTE70.toField = "tdelta"

Transform22.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "Animate"
ROUTE71.fromField = "pdelta"
ROUTE71.toNode = "shader"
ROUTE71.toField = "pdelta"

Transform22.children.append(ROUTE71)

ProtoBody21.children.append(Transform22)

ProtoDeclare17.ProtoBody = ProtoBody21

Scene16.children.append(ProtoDeclare17)

X3D0.Scene = Scene16
f = open("../data/flowerproto.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowerproto.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowerproto.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
