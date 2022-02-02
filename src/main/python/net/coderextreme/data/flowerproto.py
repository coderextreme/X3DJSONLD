#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
ProtoDeclare(name="FlowerProto", 
ProtoInterface=ProtoInterface(field=[field(name="vertex", accessType="inputOutput", type="MFString", value=["../shaders/gl_flowers_chromatic.vs"]),
field(name="fragment", accessType="inputOutput", type="MFString", value=["../shaders/pc_flowers.fs"])
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="transform", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5))), 
texture=
ComposedCubeMapTexture(DEF="texture", 
backTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]), 
bottomTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]), 
frontTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]), 
leftTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]), 
rightTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]), 
topTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])), shaders=(
ComposedShader(DEF="shader", language="GLSL", field=[field(name="cube", type="SFInt32", accessType="inputOutput", value=0),
field(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1.0,1.033)),
field(name="bias", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="scale", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="power", type="SFFloat", accessType="inputOutput", value=2),
field(name="a", type="SFFloat", accessType="inputOutput", value=10),
field(name="b", type="SFFloat", accessType="inputOutput", value=1),
field(name="c", type="SFFloat", accessType="inputOutput", value=20),
field(name="d", type="SFFloat", accessType="inputOutput", value=20),
field(name="tdelta", type="SFFloat", accessType="inputOutput", value=0),
field(name="pdelta", type="SFFloat", accessType="inputOutput", value=0)
], parts=(
ShaderPart(type="VERTEX", 
IS=IS(connect=[connect(nodeField="url", protoField="vertex")
])),
ShaderPart(type="FRAGMENT", 
IS=IS(connect=[connect(nodeField="url", protoField="fragment")
])))))), 
geometry=
Sphere()),
Script(DEF="Animate", field=[field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
field(name="a", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="b", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="c", type="SFFloat", accessType="inputOutput", value=3),
field(name="d", type="SFFloat", accessType="inputOutput", value=3),
field(name="tdelta", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="pdelta", type="SFFloat", accessType="inputOutput", value=0.5)
], 
#['', '', '', 'ecmascript:', '\t\t\tfunction initialize() {', '\t\t\t    translation = new SFVec3f(0, 0, 0);', '\t\t\t    velocity = new SFVec3f(', '\t\t\t    \tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5);', '\t\t\t}', '\t\t\tfunction set_fraction() {', '\t\t\t    translation = new SFVec3f(', '\t\t\t    \ttranslation.x + velocity.x,', '\t\t\t\ttranslation.y + velocity.y,', '\t\t\t\ttranslation.z + velocity.z);', '\t\t\t    for (var j = 0; j <= 2; j++) {', '\t\t\t\t    if (Math.abs(translation.x) > 10) {', '\t\t\t\t\tinitialize();', '\t\t\t\t    } else if (Math.abs(translation.y) > 10) {', '\t\t\t\t\tinitialize();', '\t\t\t\t    } else if (Math.abs(translation.z) > 10) {', '\t\t\t\t\tinitialize();', '\t\t\t\t    } else {', '\t\t\t\t\tvelocity.x += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tvelocity.y += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tvelocity.z += Math.random() * 0.2 - 0.1;', '\t\t\t\t    }', '\t\t\t    }', '\t\t\t    animate_flowers();', '\t\t\t}', '', '\t\t\tfunction animate_flowers(fraction, eventTime) {', '\t\t\t\tvar choice = Math.floor(Math.random() * 4);', '\t\t\t\tswitch (choice) {', '\t\t\t\tcase 0:', '\t\t\t\t\ta += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 1:', '\t\t\t\t\tb += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 2:', '\t\t\t\t\tc += Math.random() * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 3:', '\t\t\t\t\td += Math.random() * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\t}', '\t\t\t\ttdelta += 0.5;', '\t\t\t\tpdelta += 0.5;', '\t\t\t\tif (a > 1) {', '\t\t\t\t\ta =  0.5;', '\t\t\t\t}', '\t\t\t\tif (b > 1) {', '\t\t\t\t\tb =  0.5;', '\t\t\t\t}', '\t\t\t\tif (c < 1) {', '\t\t\t\t\tc =  4;', '\t\t\t\t}', '\t\t\t\tif (d < 1) {', '\t\t\t\t\td =  4;', '\t\t\t\t}', '\t\t\t\tif (c > 10) {', '\t\t\t\t\tc = 4;', '\t\t\t\t}', '\t\t\t\tif (d > 10) {', '\t\t\t\t\td = 4;', '\t\t\t\t}', '\t\t\t}', '', '', '']
),
TimeSensor(DEF="TourTime", cycleInterval=5, loop=True),
ROUTE(fromNode="TourTime", fromField="fraction_changed", toNode="Animate", toField="set_fraction"),
ROUTE(fromNode="Animate", fromField="translation_changed", toNode="transform", toField="set_translation"),
ROUTE(fromNode="Animate", fromField="a", toNode="shader", toField="a"),
ROUTE(fromNode="Animate", fromField="b", toNode="shader", toField="b"),
ROUTE(fromNode="Animate", fromField="c", toNode="shader", toField="c"),
ROUTE(fromNode="Animate", fromField="d", toNode="shader", toField="d"),
ROUTE(fromNode="Animate", fromField="tdelta", toNode="shader", toField="tdelta"),
ROUTE(fromNode="Animate", fromField="pdelta", toNode="shader", toField="pdelta")])]))]))
.XML())
