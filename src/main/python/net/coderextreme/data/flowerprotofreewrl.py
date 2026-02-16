print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
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
NavigationInfo17 = x3d.NavigationInfo()

Scene16.children.append(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "Tour Views"
Viewpoint18.position = [0,0,50]

Scene16.children.append(Viewpoint18)
Background19 = x3d.Background()
Background19.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background19.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background19.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background19.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background19.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background19.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene16.children.append(Background19)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.name = "FlowerProto"
ProtoInterface21 = x3d.ProtoInterface()
field22 = x3d.field()
field22.name = "vertex"
field22.accessType = "inputOnly"
field22.type = "MFString"
field22.value = ["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]

ProtoInterface21.field.append(field22)
field23 = x3d.field()
field23.name = "fragment"
field23.accessType = "inputOnly"
field23.type = "MFString"
field23.value = ["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]

ProtoInterface21.field.append(field23)

ProtoDeclare20.ProtoInterface = ProtoInterface21
ProtoBody24 = x3d.ProtoBody()
Transform25 = x3d.Transform(DEF="transform")
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.diffuseColor = [0.7,0.7,0.7]
Material28.specularColor = [0.5,0.5,0.5]

Appearance27.material = Material28
ComposedCubeMapTexture29 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture29.backTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture29.bottomTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture29.frontTexture = ImageTexture32
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture29.leftTexture = ImageTexture33
ImageTexture34 = x3d.ImageTexture()
ImageTexture34.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture29.rightTexture = ImageTexture34
ImageTexture35 = x3d.ImageTexture()
ImageTexture35.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture29.topTexture = ImageTexture35

Appearance27.texture = ComposedCubeMapTexture29
ComposedShader36 = x3d.ComposedShader(DEF="shader")
ComposedShader36.language = "GLSL"
field37 = x3d.field()
field37.name = "fw_textureCoordGenType"
field37.accessType = "inputOutput"
field37.type = "SFInt32"
field37.value = 0

ComposedShader36.field.append(field37)
field38 = x3d.field()
field38.name = "chromaticDispertion"
field38.accessType = "initializeOnly"
field38.type = "SFVec3f"
field38.value = [0.98,1,1.033]

ComposedShader36.field.append(field38)
field39 = x3d.field()
field39.name = "bias"
field39.type = "SFFloat"
field39.accessType = "inputOutput"
field39.value = 0.5

ComposedShader36.field.append(field39)
field40 = x3d.field()
field40.name = "scale"
field40.type = "SFFloat"
field40.accessType = "inputOutput"
field40.value = 0.5

ComposedShader36.field.append(field40)
field41 = x3d.field()
field41.name = "power"
field41.type = "SFFloat"
field41.accessType = "inputOutput"
field41.value = 2

ComposedShader36.field.append(field41)
field42 = x3d.field()
field42.name = "a"
field42.type = "SFFloat"
field42.accessType = "inputOutput"
field42.value = 5

ComposedShader36.field.append(field42)
field43 = x3d.field()
field43.name = "b"
field43.type = "SFFloat"
field43.accessType = "inputOutput"
field43.value = 5

ComposedShader36.field.append(field43)
field44 = x3d.field()
field44.name = "c"
field44.type = "SFFloat"
field44.accessType = "inputOutput"
field44.value = 20

ComposedShader36.field.append(field44)
field45 = x3d.field()
field45.name = "d"
field45.type = "SFFloat"
field45.accessType = "inputOutput"
field45.value = 20

ComposedShader36.field.append(field45)
field46 = x3d.field()
field46.name = "tdelta"
field46.type = "SFFloat"
field46.accessType = "inputOutput"
field46.value = 0

ComposedShader36.field.append(field46)
field47 = x3d.field()
field47.name = "pdelta"
field47.type = "SFFloat"
field47.accessType = "inputOutput"
field47.value = 0

ComposedShader36.field.append(field47)
ComposedShader36.children.append(x3d.Comment("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))
ComposedShader36.children.append(x3d.Comment("""<ComposedCubeMapTexture USE=\"texture\"/>"""))
ComposedShader36.children.append(x3d.Comment("""</field>"""))
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.type = "VERTEX"
IS49 = x3d.IS()
connect50 = x3d.connect()
connect50.nodeField = "url"
connect50.protoField = "vertex"

IS49.connect.append(connect50)

ShaderPart48.IS = IS49

ComposedShader36.parts.append(ShaderPart48)
ShaderPart51 = x3d.ShaderPart()
ShaderPart51.type = "FRAGMENT"
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "url"
connect53.protoField = "fragment"

IS52.connect.append(connect53)

ShaderPart51.IS = IS52

ComposedShader36.parts.append(ShaderPart51)

Appearance27.shaders.append(ComposedShader36)

Shape26.appearance = Appearance27
Sphere54 = x3d.Sphere()
Sphere54.radius = 5

Shape26.geometry = Sphere54

Transform25.children.append(Shape26)
Script55 = x3d.Script(DEF="Animate")
Script55.directOutput = True
field56 = x3d.field()
field56.name = "translation"
field56.accessType = "inputOutput"
field56.type = "SFVec3f"
field56.value = [0,0,0]

Script55.field.append(field56)
field57 = x3d.field()
field57.name = "velocity"
field57.accessType = "inputOutput"
field57.type = "SFVec3f"
field57.value = [0,0,0]

Script55.field.append(field57)
field58 = x3d.field()
field58.name = "set_fraction"
field58.accessType = "inputOutput"
field58.type = "SFFloat"

Script55.field.append(field58)
field59 = x3d.field()
field59.name = "a"
field59.type = "SFFloat"
field59.accessType = "inputOutput"
field59.value = 0.5

Script55.field.append(field59)
field60 = x3d.field()
field60.name = "b"
field60.type = "SFFloat"
field60.accessType = "inputOutput"
field60.value = 0.5

Script55.field.append(field60)
field61 = x3d.field()
field61.name = "c"
field61.type = "SFFloat"
field61.accessType = "inputOutput"
field61.value = 3

Script55.field.append(field61)
field62 = x3d.field()
field62.name = "d"
field62.type = "SFFloat"
field62.accessType = "inputOutput"
field62.value = 3

Script55.field.append(field62)
field63 = x3d.field()
field63.name = "tdelta"
field63.type = "SFFloat"
field63.accessType = "inputOutput"
field63.value = 0.5

Script55.field.append(field63)
field64 = x3d.field()
field64.name = "pdelta"
field64.type = "SFFloat"
field64.accessType = "inputOutput"
field64.value = 0.5

Script55.field.append(field64)

Script55.sourceCode = '''ecmascript:\n"+
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

Transform25.children.append(Script55)
TimeSensor65 = x3d.TimeSensor(DEF="TourTime")
TimeSensor65.cycleInterval = 5
TimeSensor65.loop = True

Transform25.children.append(TimeSensor65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "TourTime"
ROUTE66.fromField = "fraction_changed"
ROUTE66.toNode = "Animate"
ROUTE66.toField = "set_fraction"

Transform25.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "Animate"
ROUTE67.fromField = "translation_changed"
ROUTE67.toNode = "transform"
ROUTE67.toField = "set_translation"

Transform25.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "Animate"
ROUTE68.fromField = "a"
ROUTE68.toNode = "shader"
ROUTE68.toField = "a"

Transform25.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "Animate"
ROUTE69.fromField = "b"
ROUTE69.toNode = "shader"
ROUTE69.toField = "b"

Transform25.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "Animate"
ROUTE70.fromField = "c"
ROUTE70.toNode = "shader"
ROUTE70.toField = "c"

Transform25.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "Animate"
ROUTE71.fromField = "d"
ROUTE71.toNode = "shader"
ROUTE71.toField = "d"

Transform25.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromNode = "Animate"
ROUTE72.fromField = "tdelta"
ROUTE72.toNode = "shader"
ROUTE72.toField = "tdelta"

Transform25.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromNode = "Animate"
ROUTE73.fromField = "pdelta"
ROUTE73.toNode = "shader"
ROUTE73.toField = "pdelta"

Transform25.children.append(ROUTE73)

ProtoBody24.children.append(Transform25)

ProtoDeclare20.ProtoBody = ProtoBody24

Scene16.children.append(ProtoDeclare20)
ProtoInstance74 = x3d.ProtoInstance()
ProtoInstance74.name = "FlowerProto"
fieldValue75 = x3d.fieldValue()
fieldValue75.name = "vertex"
fieldValue75.value = "\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""

ProtoInstance74.fieldValue.append(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.name = "fragment"
fieldValue76.value = "\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""

ProtoInstance74.fieldValue.append(fieldValue76)

Scene16.children.append(ProtoInstance74)

X3D0.Scene = Scene16
f = open("../data/flowerprotofreewrl.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowerprotofreewrl.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowerprotofreewrl.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
