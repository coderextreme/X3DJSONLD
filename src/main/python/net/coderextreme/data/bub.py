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
component5.name = "Grouping"
component5.level = 3

head1.children.append(component5)
meta6 = x3d.meta()
meta6.name = "title"
meta6.content = "bub.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "3 prismatic spheres"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.name = "Bubble"
ProtoInterface12 = x3d.ProtoInterface()

ProtoDeclare11.ProtoInterface = ProtoInterface12
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform(DEF="transform")
Shape15 = x3d.Shape(DEF="myShape")
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [0.7,0.7,0.7]
Material17.specularColor = [0.5,0.5,0.5]

Appearance16.material = Material17
ComposedCubeMapTexture18 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture18.frontTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture18.backTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture18.leftTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture18.rightTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture18.topTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture18.bottomTexture = ImageTexture24

Appearance16.texture = ComposedCubeMapTexture18
ComposedShader25 = x3d.ComposedShader(DEF="x3dom")
ComposedShader25.language = "GLSL"
ShaderPart26 = x3d.ShaderPart()
ShaderPart26.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]

ComposedShader25.parts.append(ShaderPart26)
ShaderPart27 = x3d.ShaderPart()
ShaderPart27.type = "FRAGMENT"
ShaderPart27.url = ["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]

ComposedShader25.parts.append(ShaderPart27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFInt32"
field28.name = "cube"

ComposedShader25.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.name = "chromaticDispertion"
field29.value = [0.98,1,1.033]

ComposedShader25.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFFloat"
field30.name = "bias"
field30.value = 0.5

ComposedShader25.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFFloat"
field31.name = "scale"
field31.value = 0.5

ComposedShader25.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "power"
field32.value = 2

ComposedShader25.field.append(field32)

Appearance16.shaders.append(ComposedShader25)
ComposedShader33 = x3d.ComposedShader(DEF="x_ite")
ComposedShader33.language = "GLSL"
ShaderPart34 = x3d.ShaderPart()
ShaderPart34.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]

ComposedShader33.parts.append(ShaderPart34)
ShaderPart35 = x3d.ShaderPart()
ShaderPart35.type = "FRAGMENT"
ShaderPart35.url = ["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]

ComposedShader33.parts.append(ShaderPart35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFNode"
field36.name = "cube"
ComposedCubeMapTexture37 = x3d.ComposedCubeMapTexture(USE="texture")

field36.children.append(ComposedCubeMapTexture37)

ComposedShader33.field.append(field36)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFVec3f"
field38.name = "chromaticDispertion"
field38.value = [0.98,1,1.033]

ComposedShader33.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "bias"
field39.value = 0.5

ComposedShader33.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "scale"
field40.value = 0.5

ComposedShader33.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.name = "power"
field41.value = 2

ComposedShader33.field.append(field41)

Appearance16.shaders.append(ComposedShader33)

Shape15.appearance = Appearance16
Sphere42 = x3d.Sphere()

Shape15.geometry = Sphere42

Transform14.children.append(Shape15)

ProtoBody13.children.append(Transform14)
Script43 = x3d.Script(DEF="Bounce")
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFVec3f"
field44.name = "translation"

Script43.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "SFVec3f"
field45.name = "velocity"

Script43.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOnly"
field46.type = "SFTime"
field46.name = "set_fraction"

Script43.field.append(field46)

Script43.sourceCode = '''ecmascript:\n"+
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

ProtoBody13.children.append(Script43)
TimeSensor47 = x3d.TimeSensor(DEF="TourTime")
TimeSensor47.cycleInterval = 0.15
TimeSensor47.loop = True

ProtoBody13.children.append(TimeSensor47)
ROUTE48 = x3d.ROUTE()
ROUTE48.fromNode = "TourTime"
ROUTE48.fromField = "cycleTime"
ROUTE48.toNode = "Bounce"
ROUTE48.toField = "set_fraction"

ProtoBody13.children.append(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "Bounce"
ROUTE49.fromField = "translation_changed"
ROUTE49.toNode = "transform"
ROUTE49.toField = "set_translation"

ProtoBody13.children.append(ROUTE49)

ProtoDeclare11.ProtoBody = ProtoBody13

Scene10.children.append(ProtoDeclare11)
NavigationInfo50 = x3d.NavigationInfo()

Scene10.children.append(NavigationInfo50)
Background51 = x3d.Background()
Background51.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background51.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background51.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background51.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background51.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background51.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene10.children.append(Background51)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.description = "Look at the bubbles flying"
Viewpoint52.position = [0,0,20]

Scene10.children.append(Viewpoint52)
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.name = "Bubble"

Scene10.children.append(ProtoInstance53)
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.name = "Bubble"

Scene10.children.append(ProtoInstance54)
ProtoInstance55 = x3d.ProtoInstance()
ProtoInstance55.name = "Bubble"

Scene10.children.append(ProtoInstance55)

X3D0.Scene = Scene10
f = open("../data/bub.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bub.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bub.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
