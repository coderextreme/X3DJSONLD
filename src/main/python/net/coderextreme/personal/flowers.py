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
meta11.content = "flowers.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "creator"
meta12.content = "John Carlson"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "description"
meta13.content = "5 or more prismatic flowers"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers.x3d"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.children.append(NavigationInfo17)
"""Images courtesy of Paul Debevec's Light Probe Image Gallery"""
Background18 = x3d.Background()
Background18.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene16.children.append(Background18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.name = "flower"
ProtoBody20 = x3d.ProtoBody()
Transform21 = x3d.Transform()
Transform21.DEF = "animate_transform"
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.diffuseColor = [0.7,0.7,0.7]
Material24.specularColor = [0.5,0.5,0.5]

Appearance23.material = Material24
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture25.DEF = "texture"
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture25.backTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture25.bottomTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture25.frontTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture25.leftTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture25.rightTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture25.topTexture = ImageTexture31

Appearance23.texture = ComposedCubeMapTexture25
"""<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>"""
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.DEF = "x_ite"
ComposedShader32.language = "GLSL"
field33 = x3d.field()
field33.name = "cube"
field33.type = "SFNode"
field33.accessType = "inputOutput"
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture34.USE = "texture"

field33.children.append(ComposedCubeMapTexture34)

ComposedShader32.field.append(field33)
field35 = x3d.field()
field35.name = "chromaticDispertion"
field35.accessType = "initializeOnly"
field35.type = "SFVec3f"
field35.value = [0.98,1,1.033]

ComposedShader32.field.append(field35)
field36 = x3d.field()
field36.name = "bias"
field36.type = "SFFloat"
field36.accessType = "inputOnly"
field36.value = 0.5

ComposedShader32.field.append(field36)
field37 = x3d.field()
field37.name = "scale"
field37.type = "SFFloat"
field37.accessType = "inputOnly"
field37.value = 0.5

ComposedShader32.field.append(field37)
field38 = x3d.field()
field38.name = "power"
field38.type = "SFFloat"
field38.accessType = "inputOnly"
field38.value = 2

ComposedShader32.field.append(field38)
field39 = x3d.field()
field39.name = "a"
field39.type = "SFFloat"
field39.accessType = "inputOnly"
field39.value = 10

ComposedShader32.field.append(field39)
field40 = x3d.field()
field40.name = "b"
field40.type = "SFFloat"
field40.accessType = "inputOnly"
field40.value = 1

ComposedShader32.field.append(field40)
field41 = x3d.field()
field41.name = "c"
field41.type = "SFFloat"
field41.accessType = "inputOnly"
field41.value = 20

ComposedShader32.field.append(field41)
field42 = x3d.field()
field42.name = "d"
field42.type = "SFFloat"
field42.accessType = "inputOnly"
field42.value = 20

ComposedShader32.field.append(field42)
field43 = x3d.field()
field43.name = "tdelta"
field43.type = "SFFloat"
field43.accessType = "inputOnly"
field43.value = 0

ComposedShader32.field.append(field43)
field44 = x3d.field()
field44.name = "pdelta"
field44.type = "SFFloat"
field44.accessType = "inputOnly"
field44.value = 0

ComposedShader32.field.append(field44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]
ShaderPart45.type = "VERTEX"

ComposedShader32.parts.append(ShaderPart45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]
ShaderPart46.type = "FRAGMENT"

ComposedShader32.parts.append(ShaderPart46)

Appearance23.shaders.append(ComposedShader32)

Shape22.appearance = Appearance23
Sphere47 = x3d.Sphere()

Shape22.geometry = Sphere47

Transform21.children.append(Shape22)

ProtoBody20.children.append(Transform21)
Script48 = x3d.Script()
Script48.DEF = "Animate"
field49 = x3d.field()
field49.name = "translation"
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.value = [0,0,0]

Script48.field.append(field49)
field50 = x3d.field()
field50.name = "velocity"
field50.accessType = "inputOutput"
field50.type = "SFVec3f"
field50.value = [0,0,0]

Script48.field.append(field50)
field51 = x3d.field()
field51.name = "set_fraction"
field51.accessType = "inputOnly"
field51.type = "SFFloat"

Script48.field.append(field51)
field52 = x3d.field()
field52.name = "a"
field52.type = "SFFloat"
field52.accessType = "inputOutput"
field52.value = 0.5

Script48.field.append(field52)
field53 = x3d.field()
field53.name = "b"
field53.type = "SFFloat"
field53.accessType = "inputOutput"
field53.value = 0.5

Script48.field.append(field53)
field54 = x3d.field()
field54.name = "c"
field54.type = "SFFloat"
field54.accessType = "inputOutput"
field54.value = 3

Script48.field.append(field54)
field55 = x3d.field()
field55.name = "d"
field55.type = "SFFloat"
field55.accessType = "inputOutput"
field55.value = 3

Script48.field.append(field55)
field56 = x3d.field()
field56.name = "tdelta"
field56.type = "SFFloat"
field56.accessType = "inputOutput"
field56.value = 0.5

Script48.field.append(field56)
field57 = x3d.field()
field57.name = "pdelta"
field57.type = "SFFloat"
field57.accessType = "inputOutput"
field57.value = 0.5

Script48.field.append(field57)

Script48.sourceCode = '''ecmascript:\n"+
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

ProtoBody20.children.append(Script48)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.DEF = "TourTime"
TimeSensor58.cycleInterval = 5
TimeSensor58.loop = True

ProtoBody20.children.append(TimeSensor58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "TourTime"
ROUTE59.fromField = "fraction_changed"
ROUTE59.toNode = "Animate"
ROUTE59.toField = "set_fraction"

ProtoBody20.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "translation_changed"
ROUTE60.toNode = "animate_transform"
ROUTE60.toField = "set_translation"

ProtoBody20.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "a"
ROUTE61.toNode = "x_ite"
ROUTE61.toField = "a"

ProtoBody20.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "b"
ROUTE62.toNode = "x_ite"
ROUTE62.toField = "b"

ProtoBody20.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Animate"
ROUTE63.fromField = "c"
ROUTE63.toNode = "x_ite"
ROUTE63.toField = "c"

ProtoBody20.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "Animate"
ROUTE64.fromField = "d"
ROUTE64.toNode = "x_ite"
ROUTE64.toField = "d"

ProtoBody20.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "Animate"
ROUTE65.fromField = "pdelta"
ROUTE65.toNode = "x_ite"
ROUTE65.toField = "pdelta"

ProtoBody20.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "Animate"
ROUTE66.fromField = "tdelta"
ROUTE66.toNode = "x_ite"
ROUTE66.toField = "tdelta"

ProtoBody20.children.append(ROUTE66)
"""<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>"""

ProtoDeclare19.ProtoBody = ProtoBody20

Scene16.children.append(ProtoDeclare19)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.name = "flower"

Scene16.children.append(ProtoInstance67)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.name = "flower"

Scene16.children.append(ProtoInstance68)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.name = "flower"

Scene16.children.append(ProtoInstance69)

X3D0.Scene = Scene16
f = open("../personal/flowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/flowers.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
