# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=Pyhead(
children=[
Pycomponent(name="Scripting", level=1),
Pycomponent(name="EnvironmentalEffects", level=3),
Pycomponent(name="Shaders", level=1),
Pycomponent(name="CubeMapTexturing", level=1),
Pycomponent(name="Texturing", level=1),
Pycomponent(name="Rendering", level=1),
Pycomponent(name="Shape", level=4),
Pycomponent(name="Grouping", level=3),
Pycomponent(name="Core", level=1),
Pymeta(name="title", content="flowers.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="description", content="5 or more prismatic flowers"),
Pymeta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
NavigationInfo(),
Comment(value=''' Images courtesy of Paul Debevec's Light Probe Image Gallery '''),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
ProtoDeclare(name="flower", 
ProtoBody=PyProtoBody(children=[
Transform(DEF="animate_transform", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5))), 
texture=
ComposedCubeMapTexture(DEF="texture", 
backTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]), 
bottomTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]), 
frontTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]), 
leftTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]), 
rightTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]), 
topTexture=
ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])), shaders=[
ComposedShader(DEF="x3dom", language="GLSL", field=[Pyfield(name="cube", type="SFInt32", accessType="inputOutput", value=0),
Pyfield(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1.0,1.033)),
Pyfield(name="bias", type="SFFloat", accessType="inputOutput", value=0.5),
Pyfield(name="scale", type="SFFloat", accessType="inputOutput", value=0.5),
Pyfield(name="power", type="SFFloat", accessType="inputOutput", value=2),
Pyfield(name="a", type="SFFloat", accessType="inputOutput", value=10),
Pyfield(name="b", type="SFFloat", accessType="inputOutput", value=1),
Pyfield(name="c", type="SFFloat", accessType="inputOutput", value=20),
Pyfield(name="d", type="SFFloat", accessType="inputOutput", value=20),
Pyfield(name="tdelta", type="SFFloat", accessType="inputOutput", value=0),
Pyfield(name="pdelta", type="SFFloat", accessType="inputOutput", value=0)
], parts=[
ShaderPart(url=["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], type="FRAGMENT")]),
ComposedShader(DEF="x_ite", language="GLSL", field=[Pyfield(name="cube", type="SFNode", accessType="inputOutput", children=[
ComposedCubeMapTexture(USE="texture")]),
Pyfield(name="chromaticDispertion", accessType="initializeOnly", type="SFVec3f", value=(0.98,1.0,1.033)),
Pyfield(name="bias", type="SFFloat", accessType="inputOnly", value=0.5),
Pyfield(name="scale", type="SFFloat", accessType="inputOnly", value=0.5),
Pyfield(name="power", type="SFFloat", accessType="inputOnly", value=2),
Pyfield(name="a", type="SFFloat", accessType="inputOnly", value=10),
Pyfield(name="b", type="SFFloat", accessType="inputOnly", value=1),
Pyfield(name="c", type="SFFloat", accessType="inputOnly", value=20),
Pyfield(name="d", type="SFFloat", accessType="inputOnly", value=20),
Pyfield(name="tdelta", type="SFFloat", accessType="inputOnly", value=0),
Pyfield(name="pdelta", type="SFFloat", accessType="inputOnly", value=0)
], parts=[
ShaderPart(url=["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"], type="FRAGMENT")])]), 
geometry=
Sphere())]),
Script(DEF="Animate", field=[Pyfield(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="velocity", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="set_fraction", accessType="inputOnly", type="SFFloat"),
Pyfield(name="a", type="SFFloat", accessType="inputOutput", value=0.5),
Pyfield(name="b", type="SFFloat", accessType="inputOutput", value=0.5),
Pyfield(name="c", type="SFFloat", accessType="inputOutput", value=3),
Pyfield(name="d", type="SFFloat", accessType="inputOutput", value=3),
Pyfield(name="tdelta", type="SFFloat", accessType="inputOutput", value=0.5),
Pyfield(name="pdelta", type="SFFloat", accessType="inputOutput", value=0.5)
], sourceCode="""['', '', 'ecmascript:', '', '\t\t\tfunction initialize() {', '\t\t\t    translation = new SFVec3f(0, 0, 0);', '\t\t\t    velocity = new SFVec3f(', '\t\t\t    \tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5,', '\t\t\t\tMath.random() - 0.5);', '\t\t\t}', '\t\t\tfunction set_fraction() {', '\t\t\t    translation = new SFVec3f(', '\t\t\t    \ttranslation.x + velocity.x,', '\t\t\t\ttranslation.y + velocity.y,', '\t\t\t\ttranslation.z + velocity.z);', '\t\t\t    for (var j = 0; j <= 2; j++) {', '\t\t\t\t    if (Math.abs(translation.x) > 10) {', '\t\t\t\t\tinitialize();', '\t\t\t\t    } else if (Math.abs(translation.y) > 10) {', '\t\t\t\t\tinitialize();', '\t\t\t\t    } else if (Math.abs(translation.z) > 10) {', '\t\t\t\t\tinitialize();', '\t\t\t\t    } else {', '\t\t\t\t\tvelocity.x += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tvelocity.y += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tvelocity.z += Math.random() * 0.2 - 0.1;', '\t\t\t\t    }', '\t\t\t    }', '\t\t\t    animate_flowers();', '\t\t\t}', '', '\t\t\tfunction animate_flowers(fraction, eventTime) {', '\t\t\t\tvar choice = Math.floor(Math.random() * 4);', '\t\t\t\tswitch (choice) {', '\t\t\t\tcase 0:', '\t\t\t\t\ta += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 1:', '\t\t\t\t\tb += Math.random() * 0.2 - 0.1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 2:', '\t\t\t\t\tc += Math.random() * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 3:', '\t\t\t\t\td += Math.random() * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\t}', '\t\t\t\ttdelta = tdelta + 0.5;', '\t\t\t\tpdelta = pdelta + 0.5;', '\t\t\t\tif (a > 1) {', '\t\t\t\t\ta =  0.5;', '\t\t\t\t}', '\t\t\t\tif (b > 1) {', '\t\t\t\t\tb =  0.5;', '\t\t\t\t}', '\t\t\t\tif (c < 1) {', '\t\t\t\t\tc =  4;', '\t\t\t\t}', '\t\t\t\tif (d < 1) {', '\t\t\t\t\td =  4;', '\t\t\t\t}', '\t\t\t\tif (c > 10) {', '\t\t\t\t\tc = 4;', '\t\t\t\t}', '\t\t\t\tif (d > 10) {', '\t\t\t\t\td = 4;', '\t\t\t\t}', '\t\t\t}', '', '']""",),
TimeSensor(DEF="TourTime", cycleInterval=5, loop=True),
ROUTE(fromNode="TourTime", fromField="fraction_changed", toNode="Animate", toField="set_fraction"),
ROUTE(fromNode="Animate", fromField="translation_changed", toNode="animate_transform", toField="set_translation"),
ROUTE(fromNode="Animate", fromField="a", toNode="x_ite", toField="a"),
ROUTE(fromNode="Animate", fromField="b", toNode="x_ite", toField="b"),
ROUTE(fromNode="Animate", fromField="c", toNode="x_ite", toField="c"),
ROUTE(fromNode="Animate", fromField="d", toNode="x_ite", toField="d"),
ROUTE(fromNode="Animate", fromField="pdelta", toNode="x_ite", toField="pdelta"),
ROUTE(fromNode="Animate", fromField="tdelta", toNode="x_ite", toField="tdelta"),
ROUTE(fromNode="Animate", fromField="a", toNode="x3dom", toField="a"),
ROUTE(fromNode="Animate", fromField="b", toNode="x3dom", toField="b"),
ROUTE(fromNode="Animate", fromField="c", toNode="x3dom", toField="c"),
ROUTE(fromNode="Animate", fromField="d", toNode="x3dom", toField="d"),
ROUTE(fromNode="Animate", fromField="pdelta", toNode="x3dom", toField="pdelta"),
ROUTE(fromNode="Animate", fromField="tdelta", toNode="x3dom", toField="tdelta")])),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),])))
output = model.JSON()
json.loads(output)
