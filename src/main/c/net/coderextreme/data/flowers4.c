#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "CubeMapTexturing";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Shape";
component6.level = 4;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "flowers4.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "John Carlson";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "manual";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://coderextreme.net/X3DJSONLD/flowers4.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "an animated flower";
head1.meta[10] = meta12;

head = head1;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo14;

Background Background15 = createNode("Background");
Background15.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background15.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background15.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background15.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background15.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background15.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background15;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "transform";
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material19.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance18.material = Material19;

ComposedCubeMapTexture ComposedCubeMapTexture20 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture23;

ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture26;

Appearance18.texture = ComposedCubeMapTexture20;

ComposedShader ComposedShader27 = createNode("ComposedShader");
ComposedShader27.DEF = "shader";
ComposedShader27.language = "GLSL";
field field28 = createNode("field");
field28.name = "cube";
field28.type = "SFInt32";
field28.accessType = "inputOutput";
field28.value = "0";
ComposedShader27.field = new MFNode();

ComposedShader27.field[0] = field28;

field field29 = createNode("field");
field29.name = "chromaticDispertion";
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.value = "0.98 1 1.033";
ComposedShader27.field[1] = field29;

field field30 = createNode("field");
field30.name = "bias";
field30.type = "SFFloat";
field30.accessType = "inputOutput";
field30.value = "0.5";
ComposedShader27.field[2] = field30;

field field31 = createNode("field");
field31.name = "scale";
field31.type = "SFFloat";
field31.accessType = "inputOutput";
field31.value = "0.5";
ComposedShader27.field[3] = field31;

field field32 = createNode("field");
field32.name = "power";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "2";
ComposedShader27.field[4] = field32;

ShaderPart ShaderPart33 = createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart33.type = "VERTEX";
ComposedShader27.parts[5] = ShaderPart33;

ShaderPart ShaderPart34 = createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart34.type = "FRAGMENT";
ComposedShader27.parts[6] = ShaderPart34;

Appearance18.shaders = new MFNode();

Appearance18.shaders[0] = ComposedShader27;

Shape17.appearance = Appearance18;

//<Sphere>
IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.convex = False;
IndexedFaceSet35.DEF = "Orbit";
Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.DEF = "OrbitCoordinates";
IndexedFaceSet35.coord = Coordinate36;

Shape17.geometry = IndexedFaceSet35;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

children[2] = Transform16;

Script Script37 = createNode("Script");
Script37.DEF = "OrbitScript";
field field38 = createNode("field");
field38.name = "set_fraction";
field38.accessType = "inputOnly";
field38.type = "SFFloat";
Script37.field = new MFNode();

Script37.field[0] = field38;

field field39 = createNode("field");
field39.name = "coordinates";
field39.accessType = "inputOutput";
field39.type = "MFVec3f";
Script37.field[1] = field39;

field field40 = createNode("field");
field40.name = "coordIndexes";
field40.accessType = "outputOnly";
field40.type = "MFInt32";
Script37.field[2] = field40;


Script37.setSourceCode(`ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	var resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}`)
children[3] = Script37;

TimeSensor TimeSensor41 = createNode("TimeSensor");
TimeSensor41.DEF = "Clock";
TimeSensor41.cycleInterval = 16;
TimeSensor41.loop = True;
children[4] = TimeSensor41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromField = "coordIndexes";
ROUTE42.fromNode = "OrbitScript";
ROUTE42.toField = "set_coordIndex";
ROUTE42.toNode = "Orbit";
children[5] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromField = "coordinates";
ROUTE43.fromNode = "OrbitScript";
ROUTE43.toField = "set_point";
ROUTE43.toNode = "OrbitCoordinates";
children[6] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromField = "fraction_changed";
ROUTE44.fromNode = "Clock";
ROUTE44.toField = "set_fraction";
ROUTE44.toNode = "OrbitScript";
children[7] = ROUTE44;

}
