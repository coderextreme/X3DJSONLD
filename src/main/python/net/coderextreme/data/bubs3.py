# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="bubs3.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="description", content="Tour around a prismatic sphere"),
meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/bubs.x3d"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(position=((0,0,4)), orientation=((1,0,0,0)), description="Bubbles in action"),
Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"], bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"], frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"], leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"], rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"], topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
Transform(DEF="DECLBubble_bubbleA", children=[
Shape(
geometry=
Sphere(radius=0.25), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2))),
Script(DEF="DECLBubble_bubbleA_bounce", field=[field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="scalvel", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFFloat")
], sourceCode="""['', '', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);', '    // if you get to far away or too big, explode', '    if ( Math.abs(translation.x) > 256) {', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.y) > 256) {', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.z) > 256) {', '\ttranslation.z = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.x) > 20) {', '\tscale.x = scale.x/20;', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.y) > 20) {', '\tscale.y = scale.y/20;', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.z) > 20) {', '\tscale.z = scale.z/20;', '\ttranslation.z = 0;', '\tinitialize();', '    }', '}', '', '\t\t\t', '']""",),
TimeSensor(DEF="DECLBubble_bubbleA_bubbleClock", cycleInterval=10, loop=True),
ROUTE(fromNode="DECLBubble_bubbleA_bounce", fromField="translation_changed", toNode="DECLBubble_transform", toField="set_translation"),
ROUTE(fromNode="DECLBubble_bubbleA_bounce", fromField="scale_changed", toNode="DECLBubble_transform", toField="set_scale"),
ROUTE(fromNode="DECLBubble_bubbleA_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleA_bounce", toField="set_fraction")]),
Transform(DEF="DECLBubble_bubbleB", children=[
Shape(
geometry=
Sphere(radius=0.25), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2))),
Script(DEF="DECLBubble_bubbleB_bounce", field=[field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="scalvel", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFFloat")
], sourceCode="""['', '', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);', '    // if you get to far away or too big, explode', '    if ( Math.abs(translation.x) > 256) {', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.y) > 256) {', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.z) > 256) {', '\ttranslation.z = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.x) > 20) {', '\tscale.x = scale.x/20;', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.y) > 20) {', '\tscale.y = scale.y/20;', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.z) > 20) {', '\tscale.z = scale.z/20;', '\ttranslation.z = 0;', '\tinitialize();', '    }', '}', '', '\t\t\t', '']""",),
TimeSensor(DEF="DECLBubble_bubbleB_bubbleClock", cycleInterval=10, loop=True),
ROUTE(fromNode="DECLBubble_bubbleB_bounce", fromField="translation_changed", toNode="DECLBubble_transform", toField="set_translation"),
ROUTE(fromNode="DECLBubble_bubbleB_bounce", fromField="scale_changed", toNode="DECLBubble_transform", toField="set_scale"),
ROUTE(fromNode="DECLBubble_bubbleB_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleB_bounce", toField="set_fraction")]),
Transform(DEF="DECLBubble_bubbleC", children=[
Shape(
geometry=
Sphere(radius=0.25), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2))),
Script(DEF="DECLBubble_bubbleC_bounce", field=[field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="scalvel", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFFloat")
], sourceCode="""['', '', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);', '    // if you get to far away or too big, explode', '    if ( Math.abs(translation.x) > 256) {', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.y) > 256) {', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.z) > 256) {', '\ttranslation.z = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.x) > 20) {', '\tscale.x = scale.x/20;', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.y) > 20) {', '\tscale.y = scale.y/20;', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.z) > 20) {', '\tscale.z = scale.z/20;', '\ttranslation.z = 0;', '\tinitialize();', '    }', '}', '', '\t\t\t', '']""",),
TimeSensor(DEF="DECLBubble_bubbleC_bubbleClock", cycleInterval=10, loop=True),
ROUTE(fromNode="DECLBubble_bubbleC_bounce", fromField="translation_changed", toNode="DECLBubble_transform", toField="set_translation"),
ROUTE(fromNode="DECLBubble_bubbleC_bounce", fromField="scale_changed", toNode="DECLBubble_transform", toField="set_scale"),
ROUTE(fromNode="DECLBubble_bubbleC_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleC_bounce", toField="set_fraction")]),
Transform(DEF="DECLBubble_bubbleD", children=[
Shape(
geometry=
Sphere(radius=0.25), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2))),
Script(DEF="DECLBubble_bubbleD_bounce", field=[field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="scalvel", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFFloat")
], sourceCode="""['', '', 'ecmascript:', 'function initialize() {', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);', '', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);', '}', '', 'function set_fraction(value) {', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);', '    // if you get to far away or too big, explode', '    if ( Math.abs(translation.x) > 256) {', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.y) > 256) {', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if ( Math.abs(translation.z) > 256) {', '\ttranslation.z = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.x) > 20) {', '\tscale.x = scale.x/20;', '\ttranslation.x = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.y) > 20) {', '\tscale.y = scale.y/20;', '\ttranslation.y = 0;', '\tinitialize();', '    }', '    if (Math.abs(scale.z) > 20) {', '\tscale.z = scale.z/20;', '\ttranslation.z = 0;', '\tinitialize();', '    }', '}', '', '\t\t\t', '']""",),
TimeSensor(DEF="DECLBubble_bubbleD_bubbleClock", cycleInterval=10, loop=True),
ROUTE(fromNode="DECLBubble_bubbleD_bounce", fromField="translation_changed", toNode="DECLBubble_transform", toField="set_translation"),
ROUTE(fromNode="DECLBubble_bubbleD_bounce", fromField="scale_changed", toNode="DECLBubble_transform", toField="set_scale"),
ROUTE(fromNode="DECLBubble_bubbleD_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleD_bounce", toField="set_fraction")])]))
.XML())
