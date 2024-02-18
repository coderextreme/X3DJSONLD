# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="bubble.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="description", content="Tour around a prismatic sphere"),
Pymeta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(position=((0,0,4)), orientation=((1,0,0,0)), description="Bubble in action"),
ProtoDeclare(name="Bubble", 
ProtoBody=PyProtoBody(children=[
Transform(DEF="transform", children=[
Shape(
geometry=
Sphere(radius=0.25), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2))),
Script(DEF="bounce", field=[Pyfield(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
Pyfield(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="scalvel", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="set_fraction", accessType="inputOnly", type="SFFloat")
], sourceCode="""['', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', '\ttranslation = new SFVec3f(', '\t\ttranslation.x + velocity.x,', '\t\ttranslation.y + velocity.y,', '\t\ttranslation.z + velocity.z);', '\tscale = new SFVec3f(', '\t\tscale.x + scalvel.x,', '\t\tscale.y + scalvel.y,', '\t\tscale.z + scalvel.z);', '        // if you get to far away or too big, explode', '        if ( Math.abs(translation.x) > 256) {', '\t\ttranslation.x = 0;', '\t\tinitialize();', '\t}', '        if ( Math.abs(translation.y) > 256) {', '\t\ttranslation.y = 0;', '\t\tinitialize();', '\t}', '        if ( Math.abs(translation.z) > 256) {', '\t\ttranslation.z = 0;', '\t\tinitialize();', '\t}', '\tif (Math.abs(scale.x) > 20) {', '\t\tscale.x = scale.x/2;', '\t\ttranslation.x = 0;', '\t\tinitialize();', '\t}', '\tif (Math.abs(scale.y) > 20) {', '\t\tscale.y = scale.y/2;', '\t\ttranslation.y = 0;', '\t\tinitialize();', '\t}', '\tif (Math.abs(scale.z) > 20) {', '\t\tscale.z = scale.z/2;', '\t\ttranslation.z = 0;', '\t\tinitialize();', '\t}', '}', '']""",),
TimeSensor(DEF="bubbleClock", cycleInterval=10, loop=True),
ROUTE(fromNode="bounce", fromField="translation_changed", toNode="transform", toField="set_translation"),
ROUTE(fromNode="bounce", fromField="scale_changed", toNode="transform", toField="set_scale"),
ROUTE(fromNode="bubbleClock", fromField="fraction_changed", toNode="bounce", toField="set_fraction")])])),
ProtoInstance(name="Bubble", DEF="bubbleA")])))
output = model.JSON()
json.loads(output)
