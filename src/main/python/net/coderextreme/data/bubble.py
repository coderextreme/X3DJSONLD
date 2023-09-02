# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
meta(name="title", content="bubble.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="description", content="Tour around a prismatic sphere"),
meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d"),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Sat, 02 Sep 2023 10:59:05 GMT")
]), 
Scene=Scene(children=[
ProtoDeclare(name="Bubble", 
ProtoInterface=ProtoInterface(), 
ProtoBody=ProtoBody(children=[
Transform(DEF="transform", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2)), 
geometry=
Sphere(radius=0.25)),
Script(DEF="bounce", field=[field(accessType="inputOutput", type="SFVec3f", name="scale", value=(1,1,1)),
field(accessType="inputOutput", type="SFVec3f", name="translation"),
field(accessType="inputOutput", type="SFVec3f", name="velocity"),
field(accessType="inputOutput", type="SFVec3f", name="scalvel"),
field(accessType="inputOnly", type="SFFloat", name="set_fraction")
], sourceCode="""['ecmascript:\r', 'function initialize() {\r', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r', '\r', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r', '}\r', '\r', 'function set_fraction(value) {\r', '\ttranslation = new SFVec3f(\r', '\t\ttranslation.x + velocity.x,\r', '\t\ttranslation.y + velocity.y,\r', '\t\ttranslation.z + velocity.z);\r', '\tscale = new SFVec3f(\r', '\t\tscale.x + scalvel.x,\r', '\t\tscale.y + scalvel.y,\r', '\t\tscale.z + scalvel.z);\r', '        // if you get to far away or too big, explode\r', '        if ( Math.abs(translation.x) > 256) {\r', '\t\ttranslation.x = 0;\r', '\t\tinitialize();\r', '\t}\r', '        if ( Math.abs(translation.y) > 256) {\r', '\t\ttranslation.y = 0;\r', '\t\tinitialize();\r', '\t}\r', '        if ( Math.abs(translation.z) > 256) {\r', '\t\ttranslation.z = 0;\r', '\t\tinitialize();\r', '\t}\r', '\tif (Math.abs(scale.x) > 20) {\r', '\t\tscale.x = scale.x/2;\r', '\t\ttranslation.x = 0;\r', '\t\tinitialize();\r', '\t}\r', '\tif (Math.abs(scale.y) > 20) {\r', '\t\tscale.y = scale.y/2;\r', '\t\ttranslation.y = 0;\r', '\t\tinitialize();\r', '\t}\r', '\tif (Math.abs(scale.z) > 20) {\r', '\t\tscale.z = scale.z/2;\r', '\t\ttranslation.z = 0;\r', '\t\tinitialize();\r', '\t}\r', '}\r', '']""",),
TimeSensor(DEF="bubbleClock", cycleInterval=10, loop=True)]),
ROUTE(fromNode="bounce", fromField="translation", toNode="transform", toField="translation"),
ROUTE(fromNode="bounce", fromField="scale", toNode="transform", toField="scale"),
ROUTE(fromNode="bubbleClock", fromField="fraction_changed", toNode="bounce", toField="set_fraction")])),
NavigationInfo(type=("EXAMINE")),
Viewpoint(description="Bubble in action", position=((0,0,4))),
ProtoInstance(DEF="bubbleA", name="Bubble")])))
output = model.JSON()
json.loads(output)
