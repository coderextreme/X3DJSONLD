# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
meta(name="title", content="bubs.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="description", content="Tour around a prismatic sphere"),
meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Sat, 02 Sep 2023 10:59:14 GMT")
component(name="Scripting", level=1),
]), 
Scene=Scene(children=[
ProtoDeclare(name="Bubble", 
ProtoInterface=ProtoInterface(), 
ProtoBody=ProtoBody(children=[
Transform(DEF="body_trans", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2)), 
geometry=
Sphere(radius=0.25)),
Script(DEF="bounce1", field=[field(accessType="inputOutput", type="SFVec3f", name="scale", value=(1,1,1)),
field(accessType="inputOutput", type="SFVec3f", name="translation"),
field(accessType="inputOutput", type="SFVec3f", name="velocity"),
field(accessType="inputOutput", type="SFVec3f", name="scalvel"),
field(accessType="inputOnly", type="SFFloat", name="set_fraction")
], sourceCode="""['ecmascript:\r', 'function initialize() {\r', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r', '\r', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r', '}\r', '\r', 'function set_fraction(value) {\r', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r', '    // if you get to far away or too big, explode\r', '    if ( Math.abs(translation.x) > 256) {\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.y) > 256) {\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.z) > 256) {\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.x) > 20) {\r', '\tscale.x = scale.x/20;\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.y) > 20) {\r', '\tscale.y = scale.y/20;\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.z) > 20) {\r', '\tscale.z = scale.z/20;\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '}\r', '']""",),
TimeSensor(DEF="bubbleClock", cycleInterval=10, loop=True)]),
ROUTE(fromNode="bounce1", fromField="translation", toNode="body_trans", toField="translation"),
ROUTE(fromNode="bounce1", fromField="scale", toNode="body_trans", toField="scale"),
ROUTE(fromNode="bubbleClock", fromField="fraction_changed", toNode="bounce1", toField="set_fraction")])),
NavigationInfo(type=("EXAMINE")),
Viewpoint(description="Bubbles in action", position=((0,0,4))),
Background(frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"], backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"], leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"], rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"], topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"], bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]),
ProtoInstance(DEF="bubbleA", name="Bubble"),
ProtoInstance(DEF="bubbleB", name="Bubble"),
ProtoInstance(DEF="bubbleC", name="Bubble"),
ProtoInstance(DEF="bubbleD", name="Bubble")])))
output = model.JSON()
json.loads(output)
