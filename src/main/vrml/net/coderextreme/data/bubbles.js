let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
//component name='EnvironmentalEffects' level='1'/
let component2 = browser.currentScene.createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Shape";
component7.level = 4;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "title";
meta9.content = "bubbles.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "creator";
meta10.content = "John Carlson";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "generator";
meta11.content = "manual";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "https://coderextreme.net/X3DJSONLD/bubbles.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "description";
meta13.content = "not sure what this is";
head1.meta[11] = meta13;

head = head1;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo15.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.DEF = "Tour";
Viewpoint16.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,0,4]);
Viewpoint17.description = "sphere in road";
browser.currentScene.children[2] = Viewpoint17;

let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "Rose01";
let Shape20 = browser.currentScene.createNode("Shape");
let Sphere21 = browser.currentScene.createNode("Sphere");
Shape20.geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
Appearance22.DEF = "_01_-_Default";
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

let ComposedCubeMapTexture24 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x_ite";
ComposedShader31.language = "GLSL";
let field32 = browser.currentScene.createNode("field");
field32.name = "cube";
field32.accessType = "inputOutput";
field32.type = "SFInt32";
field32.value = "0";
ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader31.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "bias";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader31.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "scale";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader31.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "power";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "2";
ComposedShader31.field[4] = field36;

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart37.type = "VERTEX";
ComposedShader31.parts[5] = ShaderPart37;

let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart38.type = "FRAGMENT";
ComposedShader31.parts[6] = ShaderPart38;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

let ComposedShader39 = browser.currentScene.createNode("ComposedShader");
ComposedShader39.DEF = "x3dom";
ComposedShader39.language = "GLSL";
let field40 = browser.currentScene.createNode("field");
field40.name = "cube";
field40.accessType = "inputOutput";
field40.type = "SFInt32";
field40.value = "0";
ComposedShader39.field = new MFNode();

ComposedShader39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "chromaticDispertion";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "0.98 1 1.033";
ComposedShader39.field[1] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "bias";
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.value = "0.5";
ComposedShader39.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "scale";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "0.5";
ComposedShader39.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "power";
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.value = "2";
ComposedShader39.field[4] = field44;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart45.type = "VERTEX";
ComposedShader39.parts[5] = ShaderPart45;

let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart46.type = "FRAGMENT";
ComposedShader39.parts[6] = ShaderPart46;

Appearance22.shaders[1] = ComposedShader39;

Shape20.appearance = Appearance22;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

browser.currentScene.children[4] = Transform19;

let TimeSensor47 = browser.currentScene.createNode("TimeSensor");
TimeSensor47.DEF = "TourTime";
TimeSensor47.cycleInterval = 5;
TimeSensor47.loop = True;
browser.currentScene.children[5] = TimeSensor47;

let PositionInterpolator48 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator48.DEF = "TourPosition";
PositionInterpolator48.key = new MFFloat(new float[0,1]);
PositionInterpolator48.keyValue = new MFVec3f(new float[0,0,10,0,0,-10]);
browser.currentScene.children[6] = PositionInterpolator48;

let OrientationInterpolator49 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator49.DEF = "TourOrientation";
OrientationInterpolator49.key = new MFFloat(new float[0,1]);
OrientationInterpolator49.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.1416]);
browser.currentScene.children[7] = OrientationInterpolator49;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "RandomTourTime";
let field51 = browser.currentScene.createNode("field");
field51.name = "set_cycle";
field51.accessType = "inputOnly";
field51.type = "SFTime";
Script50.field = new MFNode();

Script50.field[0] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "lastKey";
field52.accessType = "inputOutput";
field52.type = "SFFloat";
field52.value = "0";
Script50.field[1] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "orientations";
field53.accessType = "inputOutput";
field53.type = "MFRotation";
field53.value = "0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0";
Script50.field[2] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "positions";
field54.accessType = "inputOutput";
field54.type = "MFVec3f";
field54.value = "0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10";
Script50.field[3] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "fraction_changed";
field55.accessType = "outputOnly";
field55.type = "SFFloat";
Script50.field[4] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "position_changed";
field56.accessType = "outputOnly";
field56.type = "MFVec3f";
Script50.field[5] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "set_orientation";
field57.accessType = "inputOnly";
field57.type = "MFRotation";
Script50.field[6] = field57;

let field58 = browser.currentScene.createNode("field");
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
browser.currentScene.children[8] = Script50;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "TourTime";
ROUTE59.fromField = "cycleTime";
ROUTE59.toNode = "RandomTourTime";
ROUTE59.toField = "set_cycle";
browser.currentScene.children[9] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "RandomTourTime";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "TourOrientation";
ROUTE60.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "RandomTourTime";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "TourPosition";
ROUTE61.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "RandomTourTime";
ROUTE62.fromField = "orientation_changed";
ROUTE62.toNode = "TourOrientation";
ROUTE62.toField = "set_keyValue";
browser.currentScene.children[12] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "RandomTourTime";
ROUTE63.fromField = "position_changed";
ROUTE63.toNode = "TourPosition";
ROUTE63.toField = "set_keyValue";
browser.currentScene.children[13] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "TourTime";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "TourOrientation";
ROUTE64.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "TourOrientation";
ROUTE65.fromField = "value_changed";
ROUTE65.toNode = "Tour";
ROUTE65.toField = "set_orientation";
browser.currentScene.children[15] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "TourTime";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "TourPosition";
ROUTE66.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "TourPosition";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "Tour";
ROUTE67.toField = "set_position";
browser.currentScene.children[17] = ROUTE67;

