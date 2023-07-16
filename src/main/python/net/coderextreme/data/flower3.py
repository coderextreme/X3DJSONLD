# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="flower3.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"),
meta(name="description", content="a flower"),
meta(name="translated", content="16 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(),
DirectionalLight(direction=((0,-0.8,-0.2)), intensity=0.5),
Background(skyColor=[(1.0,1.0,1.0)]),
Viewpoint(description="One mathematical orbital", position=((0,0,50))),
Transform(DEF="OrbitTransform", translation=((8,0,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.5,1)), specularColor=((0,0.5,1)))), 
geometry=
IndexedFaceSet(convex=False, DEF="Orbit", 
coord=
Coordinate(DEF="OrbitCoordinates")))]),
Script(DEF="OrbitScript", field=[field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
field(name="coordinates", accessType="outputOnly", type="MFVec3f"),
field(name="coordIndexes", accessType="outputOnly", type="MFInt32")
], sourceCode="""['', 'ecmascript:', '', 'var e = 5;', 'var f = 5;', 'var g = 5;', 'var h = 5;', 'var resolution = 100;', 'var t = 0;', 'var p = 0;', '', 'function initialize() {', '     generateCoordinates(resolution);', '     var localci = [];', '     for ( i = 0; i < resolution-1; i++) {', '     \tfor ( j = 0; j < resolution-1; j++) {', '\t     localci.push(i*resolution+j);', '\t     localci.push(i*resolution+j+1);', '\t     localci.push((i+1)*resolution+j+1);', '\t     localci.push((i+1)*resolution+j);', '\t     localci.push(-1);', '\t}', '    }', '    coordIndexes = new MFInt32(localci);', '}', '', 'function generateCoordinates(resolution) {', '     var theta = 0.0;', '     var phi = 0.0;', '     var delta = (2 * 3.141592653) / (resolution-1);', '     var localc = [];', '     for (var  i = 0; i < resolution; i++) {', '     \tfor (var  j = 0; j < resolution; j++) {', '\t\tvar rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);', '\t\tlocalc.push(new SFVec3f(', '\t\t\trho * Math.cos(phi) * Math.cos(theta),', '\t\t\trho * Math.cos(phi) * Math.sin(theta),', '\t\t\trho * Math.sin(phi)', '\t\t));', '\t\ttheta += delta;', '\t}', '\tphi += delta;', '     }', '     coordinates = new MFVec3f(localc);', '}', '', 'function set_fraction(fraction, eventTime) {', '\tt += 0.5;', '\tp += 0.5;', '\tvar choice = Math.floor(Math.random() * 4);', '\tswitch (choice) {', '\tcase 0:', '\t\te += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 1:', '\t\tf += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 2:', '\t\tg += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\tcase 3:', '\t\th += Math.floor(Math.random() * 2) * 2 - 1;', '\t\tbreak;', '\t}', '\tif (f < 1) {', '\t\tf = 10;', '\t}', '\tif (g < 1) {', '\t\tg = 4;', '\t}', '\tif (h < 1) {', '\t\th = 4;', '\t}', '\tgenerateCoordinates(resolution);', '}', '']""",),
TimeSensor(DEF="Clock", cycleInterval=16, loop=True),
ROUTE(fromNode="OrbitScript", fromField="coordIndexes", toNode="Orbit", toField="set_coordIndex"),
ROUTE(fromNode="OrbitScript", fromField="coordinates", toNode="OrbitCoordinates", toField="point"),
ROUTE(fromNode="Clock", fromField="fraction_changed", toNode="OrbitScript", toField="set_fraction")]))
.XML())
