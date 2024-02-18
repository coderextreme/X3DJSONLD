#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

//<component name='Shape' level='4'></component>
meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "flowers4.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "manual";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "an animated flower";
head1.meta[12] = meta14;

head = head1;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo16;

Background Background17 = createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background17;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "transform";
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material21.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance20.material = Material21;

ComposedCubeMapTexture ComposedCubeMapTexture22 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture23;

ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture28;

Appearance20.texture = ComposedCubeMapTexture22;

ComposedShader ComposedShader29 = createNode("ComposedShader");
ComposedShader29.DEF = "shader";
ComposedShader29.language = "GLSL";
field field30 = createNode("field");
field30.name = "cube";
field30.type = "SFInt32";
field30.accessType = "inputOutput";
field30.value = "0";
ComposedShader29.field = new MFNode();

ComposedShader29.field[0] = field30;

field field31 = createNode("field");
field31.name = "chromaticDispertion";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0.98 1 1.033";
ComposedShader29.field[1] = field31;

field field32 = createNode("field");
field32.name = "bias";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "0.5";
ComposedShader29.field[2] = field32;

field field33 = createNode("field");
field33.name = "scale";
field33.type = "SFFloat";
field33.accessType = "inputOutput";
field33.value = "0.5";
ComposedShader29.field[3] = field33;

field field34 = createNode("field");
field34.name = "power";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "2";
ComposedShader29.field[4] = field34;

ShaderPart ShaderPart35 = createNode("ShaderPart");
ShaderPart35.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart35.type = "VERTEX";
ComposedShader29.parts[5] = ShaderPart35;

ShaderPart ShaderPart36 = createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart36.type = "FRAGMENT";
ComposedShader29.parts[6] = ShaderPart36;

Appearance20.shaders = new MFNode();

Appearance20.shaders[0] = ComposedShader29;

Shape19.appearance = Appearance20;

//<Sphere>
IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.convex = False;
IndexedFaceSet37.DEF = "Orbit";
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.DEF = "OrbitCoordinates";
IndexedFaceSet37.coord = Coordinate38;

Shape19.geometry = IndexedFaceSet37;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

children[2] = Transform18;

Script Script39 = createNode("Script");
Script39.DEF = "OrbitScript";
field field40 = createNode("field");
field40.name = "set_fraction";
field40.accessType = "inputOnly";
field40.type = "SFFloat";
Script39.field = new MFNode();

Script39.field[0] = field40;

field field41 = createNode("field");
field41.name = "coordinates";
field41.accessType = "inputOutput";
field41.type = "MFVec3f";
Script39.field[1] = field41;

field field42 = createNode("field");
field42.name = "coordIndexes";
field42.accessType = "outputOnly";
field42.type = "MFInt32";
Script39.field[2] = field42;


Script39.setSourceCode(`ecmascript:\n"+
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
children[3] = Script39;

TimeSensor TimeSensor43 = createNode("TimeSensor");
TimeSensor43.DEF = "Clock";
TimeSensor43.cycleInterval = 16;
TimeSensor43.loop = True;
children[4] = TimeSensor43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromField = "coordIndexes";
ROUTE44.fromNode = "OrbitScript";
ROUTE44.toField = "set_coordIndex";
ROUTE44.toNode = "Orbit";
children[5] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromField = "coordinates";
ROUTE45.fromNode = "OrbitScript";
ROUTE45.toField = "set_point";
ROUTE45.toNode = "OrbitCoordinates";
children[6] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromField = "fraction_changed";
ROUTE46.fromNode = "Clock";
ROUTE46.toField = "set_fraction";
ROUTE46.toNode = "OrbitScript";
children[7] = ROUTE46;

}
