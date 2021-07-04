let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.DEF = "Tour";
Viewpoint3.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.position = new SFVec3f(new float[0,0,4]);
Viewpoint4.description = "sphere in road";
browser.currentScene.children[2] = Viewpoint4;

let Background5 = browser.currentScene.createNode("Background");
Background5.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
Background5.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
Background5.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
Background5.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
Background5.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
Background5.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
browser.currentScene.children[3] = Background5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "Rose01";
let Shape7 = browser.currentScene.createNode("Shape");
let Sphere8 = browser.currentScene.createNode("Sphere");
Shape7.geometry = Sphere8;

let Appearance9 = browser.currentScene.createNode("Appearance");
Appearance9.DEF = "_01_-_Default";
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material10.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance9.material = Material10;

let ComposedCubeMapTexture11 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture17;

Appearance9.texture = ComposedCubeMapTexture11;

let ComposedShader18 = browser.currentScene.createNode("ComposedShader");
ComposedShader18.DEF = "x_ite";
ComposedShader18.language = "GLSL";
let field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
field19.value = "0";
ComposedShader18.field = new MFNode();

ComposedShader18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "chromaticDispertion";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0.98 1 1.033";
ComposedShader18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "bias";
field21.accessType = "inputOutput";
field21.type = "SFFloat";
field21.value = "0.5";
ComposedShader18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "scale";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.value = "0.5";
ComposedShader18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "power";
field23.accessType = "inputOutput";
field23.type = "SFFloat";
field23.value = "2";
ComposedShader18.field[4] = field23;

let ShaderPart24 = browser.currentScene.createNode("ShaderPart");
ShaderPart24.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart24.type = "VERTEX";
ComposedShader18.parts[5] = ShaderPart24;

let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart25.type = "FRAGMENT";
ComposedShader18.parts[6] = ShaderPart25;

Appearance9.shaders = new MFNode();

Appearance9.shaders[0] = ComposedShader18;

//<ComposedShader DEF=\"x3dom\" containerField='shaders' language='GLSL'> <field name='cube' accessType='inputOutput' type='SFInt32' value='0'/> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='power' accessType='inputOutput' type='SFFloat' value='2'/> <ShaderPart url='\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
Shape7.appearance = Appearance9;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let TimeSensor26 = browser.currentScene.createNode("TimeSensor");
TimeSensor26.DEF = "TourTime";
TimeSensor26.cycleInterval = 5;
TimeSensor26.loop = True;
browser.currentScene.children[5] = TimeSensor26;

let PositionInterpolator27 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator27.DEF = "TourPosition";
PositionInterpolator27.key = new MFFloat(new float[0,1]);
PositionInterpolator27.keyValue = new MFVec3f(new float[0,0,10,0,0,-10]);
browser.currentScene.children[6] = PositionInterpolator27;

let OrientationInterpolator28 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator28.DEF = "TourOrientation";
OrientationInterpolator28.key = new MFFloat(new float[0,1]);
OrientationInterpolator28.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.1416]);
browser.currentScene.children[7] = OrientationInterpolator28;

let Script29 = browser.currentScene.createNode("Script");
Script29.DEF = "RandomTourTime";
let field30 = browser.currentScene.createNode("field");
field30.name = "set_cycle";
field30.accessType = "inputOnly";
field30.type = "SFTime";
Script29.field = new MFNode();

Script29.field[0] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "lastKey";
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.value = "0";
Script29.field[1] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "orientations";
field32.accessType = "inputOutput";
field32.type = "MFRotation";
field32.value = "0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0";
Script29.field[2] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "positions";
field33.accessType = "inputOutput";
field33.type = "MFVec3f";
field33.value = "0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10";
Script29.field[3] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "position_changed";
field34.accessType = "outputOnly";
field34.type = "MFVec3f";
Script29.field[4] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "set_orientation";
field35.accessType = "inputOnly";
field35.type = "MFRotation";
Script29.field[5] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "orientation_changed";
field36.accessType = "outputOnly";
field36.type = "MFRotation";
Script29.field[6] = field36;


Script29.setSourceCode(`ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed = new MFVec3f();\n"+
"                        position_changed[0] = new SFVec3f(positions[ov].x,positions[ov].y,positions[ov].z);\n"+
"                        position_changed[1] = new SFVec3f(positions[vc].x,positions[vc].y,positions[vc].z);\n"+
"\n"+
"                        orientation_changed = new MFRotation();\n"+
"                        orientation_changed[0] = orientations[ov];\n"+
"                        orientation_changed[1] = orientations[vc];\n"+
"		   } catch (e) {\n"+
"		   	if (typeof console.log === 'function') {\n"+
"				console.log(e);\n"+
"			}\n"+
"		   }\n"+
"               }`)
browser.currentScene.children[8] = Script29;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "TourTime";
ROUTE37.fromField = "cycleTime";
ROUTE37.toNode = "RandomTourTime";
ROUTE37.toField = "set_cycle";
browser.currentScene.children[9] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "RandomTourTime";
ROUTE38.fromField = "orientation_changed";
ROUTE38.toNode = "TourOrientation";
ROUTE38.toField = "set_keyValue";
browser.currentScene.children[10] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "RandomTourTime";
ROUTE39.fromField = "position_changed";
ROUTE39.toNode = "TourPosition";
ROUTE39.toField = "set_keyValue";
browser.currentScene.children[11] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "TourTime";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "TourOrientation";
ROUTE40.toField = "set_fraction";
browser.currentScene.children[12] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "TourOrientation";
ROUTE41.fromField = "value_changed";
ROUTE41.toNode = "Tour";
ROUTE41.toField = "set_orientation";
browser.currentScene.children[13] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "TourTime";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "TourPosition";
ROUTE42.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "TourPosition";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "Tour";
ROUTE43.toField = "set_position";
browser.currentScene.children[15] = ROUTE43;

