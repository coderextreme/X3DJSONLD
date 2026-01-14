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
component8.name = "Grouping"
component8.level = 3

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Core"
component9.level = 1

head1.children.append(component9)
"""<component name='Shape' level='4'></component>"""
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "bub.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "3 prismatic spheres"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/bub.x3d"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.children.append(NavigationInfo16)
Background17 = x3d.Background()
Background17.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background17.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background17.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background17.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background17.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background17.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene15.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.position = [0,0,20]
Viewpoint18.description = "Look at the bubbles flying"

Scene15.children.append(Viewpoint18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.name = "Bubble"
ProtoBody20 = x3d.ProtoBody()
Transform21 = x3d.Transform()
Transform21.DEF = "transform"
Shape22 = x3d.Shape()
Shape22.DEF = "myShape"
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
"""<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""
"""<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.DEF = "x3dom"
ComposedShader32.language = "GLSL"
field33 = x3d.field()
field33.name = "cube"
field33.type = "SFInt32"
field33.accessType = "inputOutput"
field33.value = 0

ComposedShader32.field.append(field33)
field34 = x3d.field()
field34.name = "chromaticDispertion"
field34.type = "SFVec3f"
field34.accessType = "inputOutput"
field34.value = [0.98,1,1.033]

ComposedShader32.field.append(field34)
field35 = x3d.field()
field35.name = "bias"
field35.type = "SFFloat"
field35.accessType = "inputOutput"
field35.value = 0.5

ComposedShader32.field.append(field35)
field36 = x3d.field()
field36.name = "scale"
field36.type = "SFFloat"
field36.accessType = "inputOutput"
field36.value = 0.5

ComposedShader32.field.append(field36)
field37 = x3d.field()
field37.name = "power"
field37.type = "SFFloat"
field37.accessType = "inputOutput"
field37.value = 2

ComposedShader32.field.append(field37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]
ShaderPart38.type = "VERTEX"

ComposedShader32.parts.append(ShaderPart38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.url = ["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]
ShaderPart39.type = "FRAGMENT"

ComposedShader32.parts.append(ShaderPart39)

Appearance23.shaders.append(ComposedShader32)
ComposedShader40 = x3d.ComposedShader()
ComposedShader40.DEF = "x_ite"
ComposedShader40.language = "GLSL"
field41 = x3d.field()
field41.name = "cube"
field41.type = "SFNode"
field41.accessType = "inputOutput"
ComposedCubeMapTexture42 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture42.USE = "texture"

field41.children.append(ComposedCubeMapTexture42)

ComposedShader40.field.append(field41)
field43 = x3d.field()
field43.name = "chromaticDispertion"
field43.type = "SFVec3f"
field43.accessType = "inputOutput"
field43.value = [0.98,1,1.033]

ComposedShader40.field.append(field43)
field44 = x3d.field()
field44.name = "bias"
field44.type = "SFFloat"
field44.accessType = "inputOutput"
field44.value = 0.5

ComposedShader40.field.append(field44)
field45 = x3d.field()
field45.name = "scale"
field45.type = "SFFloat"
field45.accessType = "inputOutput"
field45.value = 0.5

ComposedShader40.field.append(field45)
field46 = x3d.field()
field46.name = "power"
field46.type = "SFFloat"
field46.accessType = "inputOutput"
field46.value = 2

ComposedShader40.field.append(field46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]
ShaderPart47.type = "VERTEX"

ComposedShader40.parts.append(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.url = ["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]
ShaderPart48.type = "FRAGMENT"

ComposedShader40.parts.append(ShaderPart48)

Appearance23.shaders.append(ComposedShader40)

Shape22.appearance = Appearance23
Sphere49 = x3d.Sphere()

Shape22.geometry = Sphere49

Transform21.children.append(Shape22)

ProtoBody20.children.append(Transform21)
Script50 = x3d.Script()
Script50.DEF = "Bounce"
field51 = x3d.field()
field51.name = "translation"
field51.accessType = "inputOutput"
field51.type = "SFVec3f"
field51.value = [0,0,0]

Script50.field.append(field51)
field52 = x3d.field()
field52.name = "velocity"
field52.accessType = "inputOutput"
field52.type = "SFVec3f"
field52.value = [0,0,0]

Script50.field.append(field52)
field53 = x3d.field()
field53.name = "set_fraction"
field53.accessType = "inputOnly"
field53.type = "SFTime"

Script50.field.append(field53)

Script50.sourceCode = '''ecmascript:\n"+
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
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}'''

ProtoBody20.children.append(Script50)
TimeSensor54 = x3d.TimeSensor()
TimeSensor54.DEF = "TourTime"
TimeSensor54.cycleInterval = 0.15
TimeSensor54.loop = True

ProtoBody20.children.append(TimeSensor54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "TourTime"
ROUTE55.fromField = "cycleTime"
ROUTE55.toNode = "Bounce"
ROUTE55.toField = "set_fraction"

ProtoBody20.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "Bounce"
ROUTE56.fromField = "translation_changed"
ROUTE56.toNode = "transform"
ROUTE56.toField = "set_translation"

ProtoBody20.children.append(ROUTE56)

ProtoDeclare19.ProtoBody = ProtoBody20

Scene15.children.append(ProtoDeclare19)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.name = "Bubble"

Scene15.children.append(ProtoInstance57)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.name = "Bubble"

Scene15.children.append(ProtoInstance58)
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.name = "Bubble"

Scene15.children.append(ProtoInstance59)

X3D0.Scene = Scene15
f = open("../personal/bub.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/bub.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
