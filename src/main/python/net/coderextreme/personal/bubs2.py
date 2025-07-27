print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bubs2.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Tour around a prismatic sphere"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/geo.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "13 March 2016"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"

head1.children.append(meta8)
component9 = x3d.component()
component9.name = "Scripting"
component9.level = 1

head1.children.append(component9)

X3D0.head = head1
Scene10 = x3d.Scene()
NavigationInfo11 = x3d.NavigationInfo()
NavigationInfo11.type = ["EXAMINE"]

Scene10.children.append(NavigationInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.position = [0,0,4]
Viewpoint12.orientation = [1,0,0,0]
Viewpoint12.description = "Bubbles in action"

Scene10.children.append(Viewpoint12)
Background13 = x3d.Background()
Background13.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background13.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]
Background13.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background13.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background13.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background13.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]

Scene10.children.append(Background13)
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "Bubble"
ProtoBody15 = x3d.ProtoBody()
Transform16 = x3d.Transform()
Transform16.DEF = "body_trans"
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()
Sphere18.radius = 0.25

Shape17.geometry = Sphere18
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [1,0,0]
Material20.transparency = 0.2

Appearance19.material = Material20

Shape17.appearance = Appearance19

Transform16.children.append(Shape17)
Script21 = x3d.Script()
Script21.DEF = "bounce"
field22 = x3d.field()
field22.name = "scale"
field22.accessType = "inputOutput"
field22.type = "SFVec3f"
field22.value = [1,1,1]

Script21.field.append(field22)
field23 = x3d.field()
field23.name = "translation"
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.value = [0,0,0]

Script21.field.append(field23)
field24 = x3d.field()
field24.name = "velocity"
field24.accessType = "inputOutput"
field24.type = "SFVec3f"
field24.value = [0,0,0]

Script21.field.append(field24)
field25 = x3d.field()
field25.name = "scalvel"
field25.accessType = "inputOutput"
field25.type = "SFVec3f"
field25.value = [0,0,0]

Script21.field.append(field25)
field26 = x3d.field()
field26.name = "set_fraction"
field26.accessType = "inputOnly"
field26.type = "SFFloat"

Script21.field.append(field26)

Script21.sourceCode = '''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}'''

Transform16.children.append(Script21)
TimeSensor27 = x3d.TimeSensor()
TimeSensor27.DEF = "bubbleClock"
TimeSensor27.cycleInterval = 10
TimeSensor27.loop = True

Transform16.children.append(TimeSensor27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "bounce"
ROUTE28.fromField = "translation_changed"
ROUTE28.toNode = "body_trans"
ROUTE28.toField = "set_translation"

Transform16.children.append(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.fromNode = "bounce"
ROUTE29.fromField = "scale_changed"
ROUTE29.toNode = "body_trans"
ROUTE29.toField = "set_scale"

Transform16.children.append(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.fromNode = "bubbleClock"
ROUTE30.fromField = "fraction_changed"
ROUTE30.toNode = "bounce"
ROUTE30.toField = "set_fraction"

Transform16.children.append(ROUTE30)

ProtoBody15.children.append(Transform16)

ProtoDeclare14.ProtoBody = ProtoBody15

Scene10.children.append(ProtoDeclare14)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.name = "Bubble"
ProtoInstance31.DEF = "bubbleA"

Scene10.children.append(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.name = "Bubble"
ProtoInstance32.DEF = "bubbleB"

Scene10.children.append(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "Bubble"
ProtoInstance33.DEF = "bubbleC"

Scene10.children.append(ProtoInstance33)
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.name = "Bubble"
ProtoInstance34.DEF = "bubbleD"

Scene10.children.append(ProtoInstance34)

X3D0.Scene = Scene10
f = open("../personal/bubs2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/bubs2.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
