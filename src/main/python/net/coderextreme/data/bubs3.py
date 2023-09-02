# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
meta(name="title", content="bubs3.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="description", content="Tour around a prismatic sphere"),
meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Sat, 02 Sep 2023 10:59:22 GMT")
]), 
Scene=Scene(children=[
NavigationInfo(type=("EXAMINE")),
Viewpoint(description="Bubbles in action", position=((0,0,4))),
Background(frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"], backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"], leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"], rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"], topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"], bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]),
Transform(DEF="DECLBubble_bubbleA", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2)), 
geometry=
Sphere(radius=0.25)),
Script(DEF="DECLBubble_bubbleA_bounce", field=[field(accessType="inputOutput", type="SFVec3f", name="scale", value=(1,1,1)),
field(accessType="inputOutput", type="SFVec3f", name="translation"),
field(accessType="inputOutput", type="SFVec3f", name="velocity", value=(-0.06546797,-0.03008557,-0.06917118)),
field(accessType="inputOutput", type="SFVec3f", name="scalvel", value=(0.1409456,0.3065762,0.1946067)),
field(accessType="inputOnly", type="SFFloat", name="set_fraction")
], sourceCode="""[' \r', 'ecmascript:\r', 'function initialize() {\r', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r', '\r', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r', '}\r', '\r', 'function set_fraction(value) {\r', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r', '    // if you get to far away or too big, explode\r', '    if ( Math.abs(translation.x) > 256) {\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.y) > 256) {\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.z) > 256) {\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.x) > 20) {\r', '\tscale.x = scale.x/20;\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.y) > 20) {\r', '\tscale.y = scale.y/20;\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.z) > 20) {\r', '\tscale.z = scale.z/20;\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '}\r', '\r', '\t\t\t\r', ' ']""",),
TimeSensor(DEF="DECLBubble_bubbleA_bubbleClock", cycleInterval=10, loop=True)]),
Transform(DEF="DECLBubble_bubbleB", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2)), 
geometry=
Sphere(radius=0.25)),
Script(DEF="DECLBubble_bubbleB_bounce", field=[field(accessType="inputOutput", type="SFVec3f", name="scale", value=(1,1,1)),
field(accessType="inputOutput", type="SFVec3f", name="translation"),
field(accessType="inputOutput", type="SFVec3f", name="velocity", value=(0.03944817,-0.0568708,0.02348588)),
field(accessType="inputOutput", type="SFVec3f", name="scalvel", value=(0.18832,0.2145365,0.287004)),
field(accessType="inputOnly", type="SFFloat", name="set_fraction")
], sourceCode="""[' \r', 'ecmascript:\r', 'function initialize() {\r', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r', '\r', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r', '}\r', '\r', 'function set_fraction(value) {\r', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r', '    // if you get to far away or too big, explode\r', '    if ( Math.abs(translation.x) > 256) {\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.y) > 256) {\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.z) > 256) {\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.x) > 20) {\r', '\tscale.x = scale.x/20;\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.y) > 20) {\r', '\tscale.y = scale.y/20;\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.z) > 20) {\r', '\tscale.z = scale.z/20;\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '}\r', '\r', '\t\t\t\r', ' ']""",),
TimeSensor(DEF="DECLBubble_bubbleB_bubbleClock", cycleInterval=10, loop=True)]),
Transform(DEF="DECLBubble_bubbleC", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2)), 
geometry=
Sphere(radius=0.25)),
Script(DEF="DECLBubble_bubbleC_bounce", field=[field(accessType="inputOutput", type="SFVec3f", name="scale", value=(1,1,1)),
field(accessType="inputOutput", type="SFVec3f", name="translation"),
field(accessType="inputOutput", type="SFVec3f", name="velocity", value=(-0.1101827,-0.02263848,0.1029681)),
field(accessType="inputOutput", type="SFVec3f", name="scalvel", value=(0.3136794,0.1715386,0.3668027)),
field(accessType="inputOnly", type="SFFloat", name="set_fraction")
], sourceCode="""[' \r', 'ecmascript:\r', 'function initialize() {\r', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r', '\r', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r', '}\r', '\r', 'function set_fraction(value) {\r', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r', '    // if you get to far away or too big, explode\r', '    if ( Math.abs(translation.x) > 256) {\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.y) > 256) {\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.z) > 256) {\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.x) > 20) {\r', '\tscale.x = scale.x/20;\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.y) > 20) {\r', '\tscale.y = scale.y/20;\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.z) > 20) {\r', '\tscale.z = scale.z/20;\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '}\r', '\r', '\t\t\t\r', ' ']""",),
TimeSensor(DEF="DECLBubble_bubbleC_bubbleClock", cycleInterval=10, loop=True)]),
Transform(DEF="DECLBubble_bubbleD", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), transparency=0.2)), 
geometry=
Sphere(radius=0.25)),
Script(DEF="DECLBubble_bubbleD_bounce", field=[field(accessType="inputOutput", type="SFVec3f", name="scale", value=(1,1,1)),
field(accessType="inputOutput", type="SFVec3f", name="translation"),
field(accessType="inputOutput", type="SFVec3f", name="velocity", value=(0.08465735,-0.08655452,-0.07431985)),
field(accessType="inputOutput", type="SFVec3f", name="scalvel", value=(0.2190174,0.1058799,0.04535593)),
field(accessType="inputOnly", type="SFFloat", name="set_fraction")
], sourceCode="""[' \r', 'ecmascript:\r', 'function initialize() {\r', '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r', '\r', '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r', '}\r', '\r', 'function set_fraction(value) {\r', '    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r', '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r', '    // if you get to far away or too big, explode\r', '    if ( Math.abs(translation.x) > 256) {\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.y) > 256) {\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if ( Math.abs(translation.z) > 256) {\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.x) > 20) {\r', '\tscale.x = scale.x/20;\r', '\ttranslation.x = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.y) > 20) {\r', '\tscale.y = scale.y/20;\r', '\ttranslation.y = 0;\r', '\tinitialize();\r', '    }\r', '    if (Math.abs(scale.z) > 20) {\r', '\tscale.z = scale.z/20;\r', '\ttranslation.z = 0;\r', '\tinitialize();\r', '    }\r', '}\r', '\r', '\t\t\t\r', ' ']""",),
TimeSensor(DEF="DECLBubble_bubbleD_bubbleClock", cycleInterval=10, loop=True)]),
ROUTE(fromNode="DECLBubble_bubbleA_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleA_bounce", toField="set_fraction"),
ROUTE(fromNode="DECLBubble_bubbleB_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleB_bounce", toField="set_fraction"),
ROUTE(fromNode="DECLBubble_bubbleC_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleC_bounce", toField="set_fraction"),
ROUTE(fromNode="DECLBubble_bubbleD_bubbleClock", fromField="fraction_changed", toNode="DECLBubble_bubbleD_bounce", toField="set_fraction")])))
output = model.JSON()
json.loads(output)
