# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
component(name="Scripting", level=1),
component(name="EnvironmentalEffects", level=3),
component(name="Shaders", level=1),
component(name="CubeMapTexturing", level=1),
component(name="Texturing", level=1),
component(name="Rendering", level=1),
component(name="Shape", level=4),
component(name="Grouping", level=3),
component(name="Core", level=1),
meta(name="title", content="flowers4.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"),
meta(name="description", content="an animated flower"),
meta(name="translated", content="26 August 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
Transform(DEF="transform", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,0.7,0.7)), specularColor=((0.5,0.5,0.5))), 
texture=
ComposedCubeMapTexture(
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
ComposedShader(DEF="shader", language="GLSL", field=[field(name="cube", type="SFInt32", accessType="inputOutput", value=0),
field(name="chromaticDispertion", accessType="inputOutput", type="SFVec3f", value=(0.98,1.0,1.033)),
field(name="bias", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="scale", type="SFFloat", accessType="inputOutput", value=0.5),
field(name="power", type="SFFloat", accessType="inputOutput", value=2)
], parts=[
ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], type="VERTEX"),
ShaderPart(url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"], type="FRAGMENT")])]), 
geometry=
IndexedFaceSet(convex=False, DEF="Orbit", 
coord=
Coordinate(DEF="OrbitCoordinates")))]),
Script(DEF="OrbitScript", field=[field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
field(name="coordinates", accessType="inputOutput", type="MFVec3f"),
field(name="coordIndexes", accessType="outputOnly", type="MFInt32")
], sourceCode="""['', '', '', 'ecmascript:', '', 'var e = 5;', 'var f = 5;', 'var g = 5;', 'var h = 5;', '', 'function initialize() {', '     var resolution = 100;', '     updateCoordinates(resolution);', '     var cis = [];', '     for ( i = 0; i < resolution-1; i++) {', '     \tfor ( j = 0; j < resolution-1; j++) {', '\t     cis.push(i*resolution+j);', '\t     cis.push(i*resolution+j+1);', '\t     cis.push((i+1)*resolution+j+1);', '\t     cis.push((i+1)*resolution+j);', '\t     cis.push(-1);', '\t}', '    }', '    coordIndexes = new MFInt32(cis);', '}', '', 'function updateCoordinates(resolution) {', '     var theta = 0.0;', '     var phi = 0.0;', '     var delta = (2 * 3.141592653) / (resolution-1);', '     var crds = [];', '     for ( i = 0; i < resolution; i++) {', '     \tfor ( j = 0; j < resolution; j++) {', '\t\tvar rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);', '\t\tcrds.push(new SFVec3f(', '\t\t\trho * Math.cos(phi) * Math.cos(theta),', '\t\t\trho * Math.cos(phi) * Math.sin(theta),', '\t\t\trho * Math.sin(phi)', '\t\t));', '\t\ttheta += delta;', '\t}', '\tphi += delta;', '     }', '     coordinates = new MFVec3f(crds);', '}', '', 'function set_fraction(fraction, eventTime) {', '\tvar choice = Math.floor(Math.random() * 4);', '\tswitch (choice) {', '\tcase 0:', '\t\te += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 1:', '\t\tf += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 2:', '\t\tg += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 3:', '\t\th += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\t}', '\tif (f < 1) {', '\t\tf = 10;', '\t}', '\tif (g < 1) {', '\t\tg = 4;', '\t}', '\tif (h < 1) {', '\t\th = 4;', '\t}', '\tvar resolution = 100;', '\tupdateCoordinates(resolution);', '}', '']""",),
TimeSensor(DEF="Clock", cycleInterval=16, loop=True),
ROUTE(fromField="coordIndexes", fromNode="OrbitScript", toField="set_coordIndex", toNode="Orbit"),
ROUTE(fromField="coordinates", fromNode="OrbitScript", toField="set_point", toNode="OrbitCoordinates"),
ROUTE(fromField="fraction_changed", fromNode="Clock", toField="set_fraction", toNode="OrbitScript")])))
output = model.JSON()
json.loads(output)