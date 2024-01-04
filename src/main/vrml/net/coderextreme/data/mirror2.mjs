let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "mirror2.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[3] = meta5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Shape";
component12.level = 4;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Grouping";
component13.level = 3;
head1.component[11] = component13;

let component14 = browser.currentScene.createNode("component");
component14.name = "Core";
component14.level = 1;
head1.component[12] = component14;

head = head1;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "Switch background and images texture";
Viewpoint16.position = new SFVec3f(new float[0,5,100]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint16;

let Background17 = browser.currentScene.createNode("Background");
Background17.DEF = "cube";
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
browser.currentScene.children[1] = Background17;

let Transform18 = browser.currentScene.createNode("Transform");
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material21.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance20.material = Material21;

let ComposedCubeMapTexture22 = browser.currentScene.createNode("ComposedCubeMapTexture");
Appearance20.texture = ComposedCubeMapTexture22;

let ComposedShader23 = browser.currentScene.createNode("ComposedShader");
ComposedShader23.DEF = "x_ite";
ComposedShader23.language = "GLSL";
let ShaderPart24 = browser.currentScene.createNode("ShaderPart");
ShaderPart24.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ComposedShader23.parts = new MFNode();

ComposedShader23.parts[0] = ShaderPart24;

let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.type = "FRAGMENT";
ShaderPart25.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ComposedShader23.parts[1] = ShaderPart25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "inputOutput";
field26.type = "SFVec3f";
field26.name = "chromaticDispertion";
field26.value = "0.98 1 1.033";
ComposedShader23.field[2] = field26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "inputOutput";
field27.type = "SFInt32";
field27.name = "cube";
ComposedShader23.field[3] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "inputOutput";
field28.type = "SFFloat";
field28.name = "bias";
field28.value = "0.5";
ComposedShader23.field[4] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "inputOutput";
field29.type = "SFFloat";
field29.name = "scale";
field29.value = "0.5";
ComposedShader23.field[5] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.name = "power";
field30.value = "2";
ComposedShader23.field[6] = field30;

Appearance20.shaders = new MFNode();

Appearance20.shaders[0] = ComposedShader23;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x3dom";
ComposedShader31.language = "GLSL";
let ShaderPart32 = browser.currentScene.createNode("ShaderPart");
ShaderPart32.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ComposedShader31.parts = new MFNode();

ComposedShader31.parts[0] = ShaderPart32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.type = "FRAGMENT";
ShaderPart33.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ComposedShader31.parts[1] = ShaderPart33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.name = "chromaticDispertion";
field34.value = "0.98 1 1.033";
ComposedShader31.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "inputOutput";
field35.type = "SFInt32";
field35.name = "cube";
ComposedShader31.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.name = "bias";
field36.value = "0.5";
ComposedShader31.field[4] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.name = "scale";
field37.value = "0.5";
ComposedShader31.field[5] = field37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.name = "power";
field38.value = "2";
ComposedShader31.field[6] = field38;

Appearance20.shaders[1] = ComposedShader31;

Shape19.appearance = Appearance20;

let Sphere39 = browser.currentScene.createNode("Sphere");
Sphere39.radius = 30;
Shape19.geometry = Sphere39;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "UrlSelector";
Script40.directOutput = True;
let field41 = browser.currentScene.createNode("field");
field41.accessType = "initializeOnly";
field41.type = "MFString";
field41.name = "frontUrls";
field41.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script40.field = new MFNode();

Script40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "initializeOnly";
field42.type = "MFString";
field42.name = "backUrls";
field42.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script40.field[1] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "initializeOnly";
field43.type = "MFString";
field43.name = "leftUrls";
field43.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script40.field[2] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "initializeOnly";
field44.type = "MFString";
field44.name = "rightUrls";
field44.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script40.field[3] = field44;

let field45 = browser.currentScene.createNode("field");
field45.accessType = "initializeOnly";
field45.type = "MFString";
field45.name = "topUrls";
field45.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script40.field[4] = field45;

let field46 = browser.currentScene.createNode("field");
field46.accessType = "initializeOnly";
field46.type = "MFString";
field46.name = "bottomUrls";
field46.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script40.field[5] = field46;

let field47 = browser.currentScene.createNode("field");
field47.accessType = "outputOnly";
field47.type = "MFString";
field47.name = "front_changed";
Script40.field[6] = field47;

let field48 = browser.currentScene.createNode("field");
field48.accessType = "outputOnly";
field48.type = "MFString";
field48.name = "back_changed";
Script40.field[7] = field48;

let field49 = browser.currentScene.createNode("field");
field49.accessType = "outputOnly";
field49.type = "MFString";
field49.name = "left_changed";
Script40.field[8] = field49;

let field50 = browser.currentScene.createNode("field");
field50.accessType = "outputOnly";
field50.type = "MFString";
field50.name = "right_changed";
Script40.field[9] = field50;

let field51 = browser.currentScene.createNode("field");
field51.accessType = "outputOnly";
field51.type = "MFString";
field51.name = "top_changed";
Script40.field[10] = field51;

let field52 = browser.currentScene.createNode("field");
field52.accessType = "outputOnly";
field52.type = "MFString";
field52.name = "bottom_changed";
Script40.field[11] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "inputOnly";
field53.type = "SFFloat";
field53.name = "set_fraction";
Script40.field[12] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "inputOutput";
field54.type = "SFInt32";
field54.name = "old";
field54.value = "-1";
Script40.field[13] = field54;


Script40.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform18.children[1] = Script40;

let TimeSensor55 = browser.currentScene.createNode("TimeSensor");
TimeSensor55.DEF = "Clock";
TimeSensor55.cycleInterval = 45;
TimeSensor55.loop = True;
Transform18.children[2] = TimeSensor55;

browser.currentScene.children[2] = Transform18;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "Clock";
ROUTE56.fromField = "fraction_changed";
ROUTE56.toNode = "UrlSelector";
ROUTE56.toField = "set_fraction";
browser.currentScene.children[3] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "UrlSelector";
ROUTE57.fromField = "front_changed";
ROUTE57.toNode = "cube";
ROUTE57.toField = "frontUrl";
browser.currentScene.children[4] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "UrlSelector";
ROUTE58.fromField = "back_changed";
ROUTE58.toNode = "cube";
ROUTE58.toField = "backUrl";
browser.currentScene.children[5] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "UrlSelector";
ROUTE59.fromField = "left_changed";
ROUTE59.toNode = "cube";
ROUTE59.toField = "leftUrl";
browser.currentScene.children[6] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "UrlSelector";
ROUTE60.fromField = "right_changed";
ROUTE60.toNode = "cube";
ROUTE60.toField = "rightUrl";
browser.currentScene.children[7] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "UrlSelector";
ROUTE61.fromField = "top_changed";
ROUTE61.toNode = "cube";
ROUTE61.toField = "topUrl";
browser.currentScene.children[8] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "UrlSelector";
ROUTE62.fromField = "bottom_changed";
ROUTE62.toNode = "cube";
ROUTE62.toField = "bottomUrl";
browser.currentScene.children[9] = ROUTE62;

