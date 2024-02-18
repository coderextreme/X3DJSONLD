# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="bubs2.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="description", content="Tour around a prismatic sphere"),
Pymeta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"),
Pymeta(name="translated", content="13 March 2016"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
Pycomponent(name="Scripting", level=1),
]), 
Scene=PyScene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(position=((0,0,4)), orientation=((1,0,0,0)), description="Bubbles in action"),
Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"], bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"], frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"], leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"], rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"], topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]),
ProtoDeclare(name="Bubble", 
ProtoBody=PyProtoBody(children=[
Transform(DEF="body_trans", children=[
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
], sourceCode="""['', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', "    if (typeof translation === 'undefined') {", '\t\ttranslation = new SFVec3f(0, 0, 0);', '    }', "    if (typeof velocity === 'undefined') {", '\t\tvelocity = new SFVec3f(0, 0, 0);', '    }', "    if (typeof scalvel === 'undefined') {", '\t\tscalvel = new SFVec3f(0, 0, 0);', '    }', "    if (typeof scale === 'undefined') {", '\t\tscale = new SFVec3f(1, 1, 1);', '    }', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);', '    // if you get to far away or too big, explode', '    if ( Math.abs(translation.x) > 256) {', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.y) > 256) {', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.z) > 256) {', '\ttranslation.z = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.x) > 20) {', '\tscale.x = scale.x/20;', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.y) > 20) {', '\tscale.y = scale.y/20;', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.z) > 20) {', '\tscale.z = scale.z/20;', '\ttranslation.z = 0;', '\tinitialize();', '    }', '}']""",),
TimeSensor(DEF="bubbleClock", cycleInterval=10, loop=True),
ROUTE(fromNode="bounce", fromField="translation_changed", toNode="body_trans", toField="set_translation"),
ROUTE(fromNode="bounce", fromField="scale_changed", toNode="body_trans", toField="set_scale"),
ROUTE(fromNode="bubbleClock", fromField="fraction_changed", toNode="bounce", toField="set_fraction")])])),
ProtoInstance(name="Bubble", DEF="bubbleA"),
ProtoInstance(name="Bubble", DEF="bubbleB"),
ProtoInstance(name="Bubble", DEF="bubbleC"),
ProtoInstance(name="Bubble", DEF="bubbleD")])))
output = model.JSON()
json.loads(output)
