# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=head(
children=[
component(name="Scripting", level=1),
meta(name="title", content="MyBounce.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="description", content="3 prismatic spheres"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d"),
meta(name="translated", content="02 September 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(),
Transform(DEF="transform", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5)))), 
geometry=
Sphere())]),
Script(DEF="Bounce2", field=[field(name="set_translation", accessType="inputOnly", type="SFVec3f", value=(0,0,0)),
field(name="translation_changed", accessType="outputOnly", type="SFVec3f", value=(0,0,0)),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFTime")
], sourceCode="""['', 'ecmascript:', '\t\t\tfunction newBubble() {', '\t\t\t    translation = new SFVec3f(0, 0, 0);', '\t\t\t    velocity = new SFVec3f(', '\t\t\t    \tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5);', '\t\t\t}', '\t\t\tfunction set_fraction() {', '\t\t\t    translation = new SFVec3f(', '\t\t\t    \ttranslation.x + velocity.x,', '\t\t\t\ttranslation.y + velocity.y,', '\t\t\t\ttranslation.z + velocity.z);', '\t\t\t\tif (Math.abs(translation.x) > 10) {', '\t\t\t\t\tnewBubble();', '\t\t\t\t} else if (Math.abs(translation.y) > 10) {', '\t\t\t\t\tnewBubble();', '\t\t\t\t} else if (Math.abs(translation.z) > 10) {', '\t\t\t\t\tnewBubble();', '\t\t\t\t} else {', '\t\t\t\t\tvelocity = new SFVec3f(', '\t\t\t\t\t\tvelocity.x + Math.random() * 0.2 - 0.1,', '\t\t\t\t\t\tvelocity.y + Math.random() * 0.2 - 0.1,', '\t\t\t\t\t\tvelocity.z + Math.random() * 0.2 - 0.1', '\t\t\t\t\t);', '\t\t\t\t}', '\t\t\t}', '', '\t\t\tfunction initialize() {', '\t\t\t     newBubble();', '\t\t\t}', '', '', '']""",),
TimeSensor(DEF="TourTime", cycleInterval=0.15, loop=True),
ROUTE(fromNode="TourTime", fromField="cycleTime", toNode="Bounce2", toField="set_fraction"),
ROUTE(fromNode="Bounce2", fromField="translation_changed", toNode="transform", toField="set_translation")])))
output = model.JSON()
json.loads(output)
