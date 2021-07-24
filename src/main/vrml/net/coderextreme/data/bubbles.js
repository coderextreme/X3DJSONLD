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

let ComposedShader26 = browser.currentScene.createNode("ComposedShader");
ComposedShader26.DEF = "x3dom";
ComposedShader26.language = "GLSL";
let field27 = browser.currentScene.createNode("field");
field27.name = "cube";
field27.accessType = "inputOutput";
field27.type = "SFInt32";
field27.value = "0";
ComposedShader26.field = new MFNode();

ComposedShader26.field[0] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "chromaticDispertion";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0.98 1 1.033";
ComposedShader26.field[1] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "bias";
field29.accessType = "inputOutput";
field29.type = "SFFloat";
field29.value = "0.5";
ComposedShader26.field[2] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "scale";
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.value = "0.5";
ComposedShader26.field[3] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "power";
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.value = "2";
ComposedShader26.field[4] = field31;

let ShaderPart32 = browser.currentScene.createNode("ShaderPart");
ShaderPart32.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart32.type = "VERTEX";
ComposedShader26.parts[5] = ShaderPart32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart33.type = "FRAGMENT";
ComposedShader26.parts[6] = ShaderPart33;

Appearance9.shaders[1] = ComposedShader26;

Shape7.appearance = Appearance9;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let TimeSensor34 = browser.currentScene.createNode("TimeSensor");
TimeSensor34.DEF = "TourTime";
TimeSensor34.cycleInterval = 5;
TimeSensor34.loop = True;
browser.currentScene.children[5] = TimeSensor34;

let PositionInterpolator35 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator35.DEF = "TourPosition";
PositionInterpolator35.key = new MFFloat(new float[0,1]);
PositionInterpolator35.keyValue = new MFVec3f(new float[0,0,10,0,0,-10]);
browser.currentScene.children[6] = PositionInterpolator35;

let OrientationInterpolator36 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator36.DEF = "TourOrientation";
OrientationInterpolator36.key = new MFFloat(new float[0,1]);
OrientationInterpolator36.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.1416]);
browser.currentScene.children[7] = OrientationInterpolator36;

let Script37 = browser.currentScene.createNode("Script");
Script37.DEF = "RandomTourTime";
let field38 = browser.currentScene.createNode("field");
field38.name = "set_cycle";
field38.accessType = "inputOnly";
field38.type = "SFTime";
Script37.field = new MFNode();

Script37.field[0] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "lastKey";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "0";
Script37.field[1] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "orientations";
field40.accessType = "inputOutput";
field40.type = "MFRotation";
field40.value = "0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0";
Script37.field[2] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "positions";
field41.accessType = "inputOutput";
field41.type = "MFVec3f";
field41.value = "0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10";
Script37.field[3] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "fraction_changed";
field42.accessType = "outputOnly";
field42.type = "SFFloat";
Script37.field[4] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "position_changed";
field43.accessType = "outputOnly";
field43.type = "MFVec3f";
Script37.field[5] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "set_orientation";
field44.accessType = "inputOnly";
field44.type = "MFRotation";
Script37.field[6] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "orientation_changed";
field45.accessType = "outputOnly";
field45.type = "MFRotation";
Script37.field[7] = field45;


Script37.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[8] = Script37;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "TourTime";
ROUTE46.fromField = "cycleTime";
ROUTE46.toNode = "RandomTourTime";
ROUTE46.toField = "set_cycle";
browser.currentScene.children[9] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "RandomTourTime";
ROUTE47.fromField = "fraction_changed";
ROUTE47.toNode = "TourOrientation";
ROUTE47.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "RandomTourTime";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "TourPosition";
ROUTE48.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "RandomTourTime";
ROUTE49.fromField = "orientation_changed";
ROUTE49.toNode = "TourOrientation";
ROUTE49.toField = "set_keyValue";
browser.currentScene.children[12] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "RandomTourTime";
ROUTE50.fromField = "position_changed";
ROUTE50.toNode = "TourPosition";
ROUTE50.toField = "set_keyValue";
browser.currentScene.children[13] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "TourTime";
ROUTE51.fromField = "fraction_changed";
ROUTE51.toNode = "TourOrientation";
ROUTE51.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "TourOrientation";
ROUTE52.fromField = "value_changed";
ROUTE52.toNode = "Tour";
ROUTE52.toField = "set_orientation";
browser.currentScene.children[15] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "TourTime";
ROUTE53.fromField = "fraction_changed";
ROUTE53.toNode = "TourPosition";
ROUTE53.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "TourPosition";
ROUTE54.fromField = "value_changed";
ROUTE54.toNode = "Tour";
ROUTE54.toField = "set_position";
browser.currentScene.children[17] = ROUTE54;

