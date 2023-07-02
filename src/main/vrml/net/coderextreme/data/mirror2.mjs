let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Core";
component10.level = 1;
head1.component[8] = component10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "title";
meta11.content = "mirror2.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "manual";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "description";
meta15.content = "a mirrored sphere";
head1.meta[13] = meta15;

head = head1;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,5,100]);
Viewpoint17.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint17;

let Background18 = browser.currentScene.createNode("Background");
Background18.DEF = "cube";
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
browser.currentScene.children[1] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.DEF = "backShader";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "bottomShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "frontShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "leftShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.DEF = "rightShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.DEF = "topShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "x_ite";
ComposedShader30.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field31 = browser.currentScene.createNode("field");
field31.name = "chromaticDispertion";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0.98 1 1.033";
ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "cube";
field32.accessType = "inputOutput";
field32.type = "SFInt32";
field32.value = "0";
ComposedShader30.field[1] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "bias";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "0.5";
ComposedShader30.field[2] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "scale";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader30.field[3] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "power";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "2";
ComposedShader30.field[4] = field35;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart36.type = "VERTEX";
ComposedShader30.parts[5] = ShaderPart36;

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart37.type = "FRAGMENT";
ComposedShader30.parts[6] = ShaderPart37;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

let ComposedShader38 = browser.currentScene.createNode("ComposedShader");
ComposedShader38.DEF = "x3dom";
ComposedShader38.language = "GLSL";
let field39 = browser.currentScene.createNode("field");
field39.name = "chromaticDispertion";
field39.accessType = "inputOutput";
field39.type = "SFVec3f";
field39.value = "0.98 1 1.033";
ComposedShader38.field = new MFNode();

ComposedShader38.field[0] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "cube";
field40.accessType = "inputOutput";
field40.type = "SFInt32";
field40.value = "0";
ComposedShader38.field[1] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "bias";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.value = "0.5";
ComposedShader38.field[2] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "scale";
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.value = "0.5";
ComposedShader38.field[3] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "power";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "2";
ComposedShader38.field[4] = field43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart44.type = "VERTEX";
ComposedShader38.parts[5] = ShaderPart44;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart45.type = "FRAGMENT";
ComposedShader38.parts[6] = ShaderPart45;

Appearance21.shaders[1] = ComposedShader38;

Shape20.appearance = Appearance21;

let Sphere46 = browser.currentScene.createNode("Sphere");
Sphere46.radius = 30;
Shape20.geometry = Sphere46;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "UrlSelector";
Script47.directOutput = True;
let field48 = browser.currentScene.createNode("field");
field48.name = "frontUrls";
field48.type = "MFString";
field48.accessType = "initializeOnly";
field48.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script47.field = new MFNode();

Script47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "backUrls";
field49.type = "MFString";
field49.accessType = "initializeOnly";
field49.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "leftUrls";
field50.type = "MFString";
field50.accessType = "initializeOnly";
field50.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script47.field[2] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "rightUrls";
field51.type = "MFString";
field51.accessType = "initializeOnly";
field51.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script47.field[3] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "topUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script47.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "bottomUrls";
field53.type = "MFString";
field53.accessType = "initializeOnly";
field53.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script47.field[5] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "front_changed";
field54.type = "MFString";
field54.accessType = "outputOnly";
Script47.field[6] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "back_changed";
field55.type = "MFString";
field55.accessType = "outputOnly";
Script47.field[7] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "left_changed";
field56.type = "MFString";
field56.accessType = "outputOnly";
Script47.field[8] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "right_changed";
field57.type = "MFString";
field57.accessType = "outputOnly";
Script47.field[9] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "top_changed";
field58.type = "MFString";
field58.accessType = "outputOnly";
Script47.field[10] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "bottom_changed";
field59.type = "MFString";
field59.accessType = "outputOnly";
Script47.field[11] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "set_fraction";
field60.type = "SFFloat";
field60.accessType = "inputOnly";
Script47.field[12] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "old";
field61.type = "SFInt32";
field61.accessType = "inputOutput";
field61.value = "-1";
Script47.field[13] = field61;


Script47.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform19.children[1] = Script47;

let TimeSensor62 = browser.currentScene.createNode("TimeSensor");
TimeSensor62.DEF = "Clock";
TimeSensor62.cycleInterval = 45;
TimeSensor62.loop = True;
Transform19.children[2] = TimeSensor62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Clock";
ROUTE63.fromField = "fraction_changed";
ROUTE63.toNode = "UrlSelector";
ROUTE63.toField = "set_fraction";
Transform19.children[3] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "UrlSelector";
ROUTE64.fromField = "front_changed";
ROUTE64.toNode = "cube";
ROUTE64.toField = "frontUrl";
Transform19.children[4] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "UrlSelector";
ROUTE65.fromField = "back_changed";
ROUTE65.toNode = "cube";
ROUTE65.toField = "backUrl";
Transform19.children[5] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "UrlSelector";
ROUTE66.fromField = "left_changed";
ROUTE66.toNode = "cube";
ROUTE66.toField = "leftUrl";
Transform19.children[6] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "UrlSelector";
ROUTE67.fromField = "right_changed";
ROUTE67.toNode = "cube";
ROUTE67.toField = "rightUrl";
Transform19.children[7] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "top_changed";
ROUTE68.toNode = "cube";
ROUTE68.toField = "topUrl";
Transform19.children[8] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "bottom_changed";
ROUTE69.toNode = "cube";
ROUTE69.toField = "bottomUrl";
Transform19.children[9] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "front_changed";
ROUTE70.toNode = "frontShader";
ROUTE70.toField = "url";
Transform19.children[10] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "back_changed";
ROUTE71.toNode = "backShader";
ROUTE71.toField = "url";
Transform19.children[11] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "left_changed";
ROUTE72.toNode = "leftShader";
ROUTE72.toField = "url";
Transform19.children[12] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "right_changed";
ROUTE73.toNode = "rightShader";
ROUTE73.toField = "url";
Transform19.children[13] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "top_changed";
ROUTE74.toNode = "topShader";
ROUTE74.toField = "url";
Transform19.children[14] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "bottom_changed";
ROUTE75.toNode = "bottomShader";
ROUTE75.toField = "url";
Transform19.children[15] = ROUTE75;

browser.currentScene.children[2] = Transform19;

