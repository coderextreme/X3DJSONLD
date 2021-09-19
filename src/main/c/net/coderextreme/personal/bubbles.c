#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
//component name='EnvironmentalEffects' level='1'/
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Shape";
component7.level = 4;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

meta meta9 = createNode("meta");
meta9.name = "title";
meta9.content = "bubbles.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "creator";
meta10.content = "John Carlson";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "manual";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://coderextreme.net/X3DJSONLD/bubbles.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "description";
meta13.content = "not sure what this is";
head1.meta[11] = meta13;

head = head1;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
NavigationInfo15.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.DEF = "Tour";
Viewpoint16.description = "Tour Views";
children[1] = Viewpoint16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,0,4]);
Viewpoint17.description = "sphere in road";
children[2] = Viewpoint17;

Background Background18 = createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "Rose01";
Shape Shape20 = createNode("Shape");
Sphere Sphere21 = createNode("Sphere");
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Appearance22.DEF = "_01_-_Default";
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

ComposedCubeMapTexture ComposedCubeMapTexture24 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

ComposedShader ComposedShader31 = createNode("ComposedShader");
ComposedShader31.DEF = "x_ite";
ComposedShader31.language = "GLSL";
field field32 = createNode("field");
field32.name = "cube";
field32.accessType = "inputOutput";
field32.type = "SFInt32";
field32.value = "0";
ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

field field33 = createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader31.field[1] = field33;

field field34 = createNode("field");
field34.name = "bias";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader31.field[2] = field34;

field field35 = createNode("field");
field35.name = "scale";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader31.field[3] = field35;

field field36 = createNode("field");
field36.name = "power";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "2";
ComposedShader31.field[4] = field36;

ShaderPart ShaderPart37 = createNode("ShaderPart");
ShaderPart37.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart37.type = "VERTEX";
ComposedShader31.parts[5] = ShaderPart37;

ShaderPart ShaderPart38 = createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart38.type = "FRAGMENT";
ComposedShader31.parts[6] = ShaderPart38;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

ComposedShader ComposedShader39 = createNode("ComposedShader");
ComposedShader39.DEF = "x3dom";
ComposedShader39.language = "GLSL";
field field40 = createNode("field");
field40.name = "cube";
field40.accessType = "inputOutput";
field40.type = "SFInt32";
field40.value = "0";
ComposedShader39.field = new MFNode();

ComposedShader39.field[0] = field40;

field field41 = createNode("field");
field41.name = "chromaticDispertion";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "0.98 1 1.033";
ComposedShader39.field[1] = field41;

field field42 = createNode("field");
field42.name = "bias";
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.value = "0.5";
ComposedShader39.field[2] = field42;

field field43 = createNode("field");
field43.name = "scale";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "0.5";
ComposedShader39.field[3] = field43;

field field44 = createNode("field");
field44.name = "power";
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.value = "2";
ComposedShader39.field[4] = field44;

ShaderPart ShaderPart45 = createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart45.type = "VERTEX";
ComposedShader39.parts[5] = ShaderPart45;

ShaderPart ShaderPart46 = createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart46.type = "FRAGMENT";
ComposedShader39.parts[6] = ShaderPart46;

Appearance22.shaders[1] = ComposedShader39;

Shape20.appearance = Appearance22;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

children[4] = Transform19;

TimeSensor TimeSensor47 = createNode("TimeSensor");
TimeSensor47.DEF = "TourTime";
TimeSensor47.cycleInterval = 5;
TimeSensor47.loop = True;
children[5] = TimeSensor47;

PositionInterpolator PositionInterpolator48 = createNode("PositionInterpolator");
PositionInterpolator48.DEF = "TourPosition";
PositionInterpolator48.key = new MFFloat(new float[0,1]);
PositionInterpolator48.keyValue = new MFVec3f(new float[0,0,10,0,0,-10]);
children[6] = PositionInterpolator48;

OrientationInterpolator OrientationInterpolator49 = createNode("OrientationInterpolator");
OrientationInterpolator49.DEF = "TourOrientation";
OrientationInterpolator49.key = new MFFloat(new float[0,1]);
OrientationInterpolator49.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.1416]);
children[7] = OrientationInterpolator49;

Script Script50 = createNode("Script");
Script50.DEF = "RandomTourTime";
field field51 = createNode("field");
field51.name = "set_cycle";
field51.accessType = "inputOnly";
field51.type = "SFTime";
Script50.field = new MFNode();

Script50.field[0] = field51;

field field52 = createNode("field");
field52.name = "lastKey";
field52.accessType = "inputOutput";
field52.type = "SFFloat";
field52.value = "0";
Script50.field[1] = field52;

field field53 = createNode("field");
field53.name = "orientations";
field53.accessType = "inputOutput";
field53.type = "MFRotation";
field53.value = "0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0";
Script50.field[2] = field53;

field field54 = createNode("field");
field54.name = "positions";
field54.accessType = "inputOutput";
field54.type = "MFVec3f";
field54.value = "0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10";
Script50.field[3] = field54;

field field55 = createNode("field");
field55.name = "fraction_changed";
field55.accessType = "outputOnly";
field55.type = "SFFloat";
Script50.field[4] = field55;

field field56 = createNode("field");
field56.name = "position_changed";
field56.accessType = "outputOnly";
field56.type = "MFVec3f";
Script50.field[5] = field56;

field field57 = createNode("field");
field57.name = "set_orientation";
field57.accessType = "inputOnly";
field57.type = "MFRotation";
Script50.field[6] = field57;

field field58 = createNode("field");
field58.name = "orientation_changed";
field58.accessType = "outputOnly";
field58.type = "MFRotation";
Script50.field[7] = field58;


Script50.setSourceCode(`ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed[0] = positions[ov];\n"+
"                        position_changed[1] = positions[vc];\n"+
"\n"+
"                        orientation_changed[0] = orientations[ov];\n"+
"                        orientation_changed[1] = orientations[vc];\n"+
"\n"+
"                        fraction_changed = 0;\n"+
"		   } catch (e) {\n"+
"		   	if (typeof console.log === 'function') {\n"+
"				console.log(e);\n"+
"			}\n"+
"		   }\n"+
"               }`)
children[8] = Script50;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "TourTime";
ROUTE59.fromField = "cycleTime";
ROUTE59.toNode = "RandomTourTime";
ROUTE59.toField = "set_cycle";
children[9] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "RandomTourTime";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "TourOrientation";
ROUTE60.toField = "set_fraction";
children[10] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "RandomTourTime";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "TourPosition";
ROUTE61.toField = "set_fraction";
children[11] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "RandomTourTime";
ROUTE62.fromField = "orientation_changed";
ROUTE62.toNode = "TourOrientation";
ROUTE62.toField = "set_keyValue";
children[12] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "RandomTourTime";
ROUTE63.fromField = "position_changed";
ROUTE63.toNode = "TourPosition";
ROUTE63.toField = "set_keyValue";
children[13] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "TourTime";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "TourOrientation";
ROUTE64.toField = "set_fraction";
children[14] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "TourOrientation";
ROUTE65.fromField = "value_changed";
ROUTE65.toNode = "Tour";
ROUTE65.toField = "set_orientation";
children[15] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "TourTime";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "TourPosition";
ROUTE66.toField = "set_fraction";
children[16] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "TourPosition";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "Tour";
ROUTE67.toField = "set_position";
children[17] = ROUTE67;

}
