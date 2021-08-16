#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
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
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "bubbles.x3d";
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
meta13.content = "https://coderextreme.net/X3DJSONLD/bubbles.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "not sure what this is";
head1.meta[12] = meta14;

head = head1;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.DEF = "Tour";
Viewpoint17.description = "Tour Views";
children[1] = Viewpoint17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.position = new SFVec3f(new float[0,0,4]);
Viewpoint18.description = "sphere in road";
children[2] = Viewpoint18;

Background Background19 = createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
children[3] = Background19;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "Rose01";
Shape Shape21 = createNode("Shape");
Sphere Sphere22 = createNode("Sphere");
Shape21.geometry = Sphere22;

Appearance Appearance23 = createNode("Appearance");
Appearance23.DEF = "_01_-_Default";
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

ComposedCubeMapTexture ComposedCubeMapTexture25 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

ComposedShader ComposedShader32 = createNode("ComposedShader");
ComposedShader32.DEF = "x_ite";
ComposedShader32.language = "GLSL";
field field33 = createNode("field");
field33.name = "cube";
field33.accessType = "inputOutput";
field33.type = "SFInt32";
field33.value = "0";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

field field34 = createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader32.field[1] = field34;

field field35 = createNode("field");
field35.name = "bias";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader32.field[2] = field35;

field field36 = createNode("field");
field36.name = "scale";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "0.5";
ComposedShader32.field[3] = field36;

field field37 = createNode("field");
field37.name = "power";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "2";
ComposedShader32.field[4] = field37;

ShaderPart ShaderPart38 = createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart38.type = "VERTEX";
ComposedShader32.parts[5] = ShaderPart38;

ShaderPart ShaderPart39 = createNode("ShaderPart");
ShaderPart39.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart39.type = "FRAGMENT";
ComposedShader32.parts[6] = ShaderPart39;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

ComposedShader ComposedShader40 = createNode("ComposedShader");
ComposedShader40.DEF = "x3dom";
ComposedShader40.language = "GLSL";
field field41 = createNode("field");
field41.name = "cube";
field41.accessType = "inputOutput";
field41.type = "SFInt32";
field41.value = "0";
ComposedShader40.field = new MFNode();

ComposedShader40.field[0] = field41;

field field42 = createNode("field");
field42.name = "chromaticDispertion";
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
field42.value = "0.98 1 1.033";
ComposedShader40.field[1] = field42;

field field43 = createNode("field");
field43.name = "bias";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "0.5";
ComposedShader40.field[2] = field43;

field field44 = createNode("field");
field44.name = "scale";
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.value = "0.5";
ComposedShader40.field[3] = field44;

field field45 = createNode("field");
field45.name = "power";
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.value = "2";
ComposedShader40.field[4] = field45;

ShaderPart ShaderPart46 = createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart46.type = "VERTEX";
ComposedShader40.parts[5] = ShaderPart46;

ShaderPart ShaderPart47 = createNode("ShaderPart");
ShaderPart47.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart47.type = "FRAGMENT";
ComposedShader40.parts[6] = ShaderPart47;

Appearance23.shaders[1] = ComposedShader40;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

children[4] = Transform20;

TimeSensor TimeSensor48 = createNode("TimeSensor");
TimeSensor48.DEF = "TourTime";
TimeSensor48.cycleInterval = 5;
TimeSensor48.loop = True;
children[5] = TimeSensor48;

PositionInterpolator PositionInterpolator49 = createNode("PositionInterpolator");
PositionInterpolator49.DEF = "TourPosition";
PositionInterpolator49.key = new MFFloat(new float[0,1]);
PositionInterpolator49.keyValue = new MFVec3f(new float[0,0,10,0,0,-10]);
children[6] = PositionInterpolator49;

OrientationInterpolator OrientationInterpolator50 = createNode("OrientationInterpolator");
OrientationInterpolator50.DEF = "TourOrientation";
OrientationInterpolator50.key = new MFFloat(new float[0,1]);
OrientationInterpolator50.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.1416]);
children[7] = OrientationInterpolator50;

Script Script51 = createNode("Script");
Script51.DEF = "RandomTourTime";
field field52 = createNode("field");
field52.name = "set_cycle";
field52.accessType = "inputOnly";
field52.type = "SFTime";
Script51.field = new MFNode();

Script51.field[0] = field52;

field field53 = createNode("field");
field53.name = "lastKey";
field53.accessType = "inputOutput";
field53.type = "SFFloat";
field53.value = "0";
Script51.field[1] = field53;

field field54 = createNode("field");
field54.name = "orientations";
field54.accessType = "inputOutput";
field54.type = "MFRotation";
field54.value = "0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0";
Script51.field[2] = field54;

field field55 = createNode("field");
field55.name = "positions";
field55.accessType = "inputOutput";
field55.type = "MFVec3f";
field55.value = "0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10";
Script51.field[3] = field55;

field field56 = createNode("field");
field56.name = "fraction_changed";
field56.accessType = "outputOnly";
field56.type = "SFFloat";
Script51.field[4] = field56;

field field57 = createNode("field");
field57.name = "position_changed";
field57.accessType = "outputOnly";
field57.type = "MFVec3f";
Script51.field[5] = field57;

field field58 = createNode("field");
field58.name = "set_orientation";
field58.accessType = "inputOnly";
field58.type = "MFRotation";
Script51.field[6] = field58;

field field59 = createNode("field");
field59.name = "orientation_changed";
field59.accessType = "outputOnly";
field59.type = "MFRotation";
Script51.field[7] = field59;


Script51.setSourceCode(`ecmascript:\n"+
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
children[8] = Script51;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "TourTime";
ROUTE60.fromField = "cycleTime";
ROUTE60.toNode = "RandomTourTime";
ROUTE60.toField = "set_cycle";
children[9] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "RandomTourTime";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "TourOrientation";
ROUTE61.toField = "set_fraction";
children[10] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "RandomTourTime";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "TourPosition";
ROUTE62.toField = "set_fraction";
children[11] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "RandomTourTime";
ROUTE63.fromField = "orientation_changed";
ROUTE63.toNode = "TourOrientation";
ROUTE63.toField = "set_keyValue";
children[12] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "RandomTourTime";
ROUTE64.fromField = "position_changed";
ROUTE64.toNode = "TourPosition";
ROUTE64.toField = "set_keyValue";
children[13] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "TourTime";
ROUTE65.fromField = "fraction_changed";
ROUTE65.toNode = "TourOrientation";
ROUTE65.toField = "set_fraction";
children[14] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "TourOrientation";
ROUTE66.fromField = "value_changed";
ROUTE66.toNode = "Tour";
ROUTE66.toField = "set_orientation";
children[15] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "TourTime";
ROUTE67.fromField = "fraction_changed";
ROUTE67.toNode = "TourPosition";
ROUTE67.toField = "set_fraction";
children[16] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "TourPosition";
ROUTE68.fromField = "value_changed";
ROUTE68.toNode = "Tour";
ROUTE68.toField = "set_position";
children[17] = ROUTE68;

}
