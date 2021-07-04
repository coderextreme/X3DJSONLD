let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,5,100]);
Viewpoint2.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.DEF = "cube";
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
let Shape5 = browser.currentScene.createNode("Shape");
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material7.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance6.material = Material7;

let ComposedCubeMapTexture8 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.DEF = "backShader";
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture8.topTexture = ImageTexture9;

let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "bottomShader";
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture8.topTexture = ImageTexture10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.DEF = "frontShader";
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture8.topTexture = ImageTexture11;

let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.DEF = "leftShader";
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture8.topTexture = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.DEF = "rightShader";
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture8.topTexture = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.DEF = "topShader";
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture8.topTexture = ImageTexture14;

Appearance6.texture = ComposedCubeMapTexture8;

let ComposedShader15 = browser.currentScene.createNode("ComposedShader");
ComposedShader15.DEF = "x_ite";
ComposedShader15.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field16 = browser.currentScene.createNode("field");
field16.name = "chromaticDispertion";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0.98 1 1.033";
ComposedShader15.field = new MFNode();

ComposedShader15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "cube";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
field17.value = "0";
ComposedShader15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "bias";
field18.accessType = "inputOutput";
field18.type = "SFFloat";
field18.value = "0.5";
ComposedShader15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "scale";
field19.accessType = "inputOutput";
field19.type = "SFFloat";
field19.value = "0.5";
ComposedShader15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "power";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.value = "2";
ComposedShader15.field[4] = field20;

let ShaderPart21 = browser.currentScene.createNode("ShaderPart");
ShaderPart21.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart21.type = "VERTEX";
ComposedShader15.parts[5] = ShaderPart21;

let ShaderPart22 = browser.currentScene.createNode("ShaderPart");
ShaderPart22.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart22.type = "FRAGMENT";
ComposedShader15.parts[6] = ShaderPart22;

Appearance6.shaders = new MFNode();

Appearance6.shaders[0] = ComposedShader15;

//<ComposedShader DEF=\"x3dom\" language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'/> <field name='cube' accessType='inputOutput' type='SFInt32' value='0'/> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='power' accessType='inputOutput' type='SFFloat' value='2'/> <ShaderPart url='\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/mix.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
Shape5.appearance = Appearance6;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 30;
Shape5.geometry = Sphere23;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let Script24 = browser.currentScene.createNode("Script");
Script24.DEF = "UrlSelector";
Script24.directOutput = True;
let field25 = browser.currentScene.createNode("field");
field25.name = "frontUrls";
field25.type = "MFString";
field25.accessType = "initializeOnly";
field25.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script24.field = new MFNode();

Script24.field[0] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "backUrls";
field26.type = "MFString";
field26.accessType = "initializeOnly";
field26.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script24.field[1] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "leftUrls";
field27.type = "MFString";
field27.accessType = "initializeOnly";
field27.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script24.field[2] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "rightUrls";
field28.type = "MFString";
field28.accessType = "initializeOnly";
field28.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script24.field[3] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "topUrls";
field29.type = "MFString";
field29.accessType = "initializeOnly";
field29.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script24.field[4] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "bottomUrls";
field30.type = "MFString";
field30.accessType = "initializeOnly";
field30.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script24.field[5] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "front_changed";
field31.type = "MFString";
field31.accessType = "outputOnly";
Script24.field[6] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "back_changed";
field32.type = "MFString";
field32.accessType = "outputOnly";
Script24.field[7] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "left_changed";
field33.type = "MFString";
field33.accessType = "outputOnly";
Script24.field[8] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "right_changed";
field34.type = "MFString";
field34.accessType = "outputOnly";
Script24.field[9] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "top_changed";
field35.type = "MFString";
field35.accessType = "outputOnly";
Script24.field[10] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "bottom_changed";
field36.type = "MFString";
field36.accessType = "outputOnly";
Script24.field[11] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "set_fraction";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
Script24.field[12] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "old";
field38.type = "SFInt32";
field38.accessType = "inputOutput";
field38.value = "-1";
Script24.field[13] = field38;


Script24.setSourceCode(`ecmascript:\n"+
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
Transform4.children[1] = Script24;

let TimeSensor39 = browser.currentScene.createNode("TimeSensor");
TimeSensor39.DEF = "Clock";
TimeSensor39.cycleInterval = 45;
TimeSensor39.loop = True;
Transform4.children[2] = TimeSensor39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "Clock";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "UrlSelector";
ROUTE40.toField = "set_fraction";
Transform4.children[3] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "UrlSelector";
ROUTE41.fromField = "front_changed";
ROUTE41.toNode = "cube";
ROUTE41.toField = "frontUrl";
Transform4.children[4] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "UrlSelector";
ROUTE42.fromField = "back_changed";
ROUTE42.toNode = "cube";
ROUTE42.toField = "backUrl";
Transform4.children[5] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "UrlSelector";
ROUTE43.fromField = "left_changed";
ROUTE43.toNode = "cube";
ROUTE43.toField = "leftUrl";
Transform4.children[6] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "UrlSelector";
ROUTE44.fromField = "right_changed";
ROUTE44.toNode = "cube";
ROUTE44.toField = "rightUrl";
Transform4.children[7] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "UrlSelector";
ROUTE45.fromField = "top_changed";
ROUTE45.toNode = "cube";
ROUTE45.toField = "topUrl";
Transform4.children[8] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "UrlSelector";
ROUTE46.fromField = "bottom_changed";
ROUTE46.toNode = "cube";
ROUTE46.toField = "bottomUrl";
Transform4.children[9] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "UrlSelector";
ROUTE47.fromField = "front_changed";
ROUTE47.toNode = "frontShader";
ROUTE47.toField = "url";
Transform4.children[10] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "UrlSelector";
ROUTE48.fromField = "back_changed";
ROUTE48.toNode = "backShader";
ROUTE48.toField = "url";
Transform4.children[11] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "UrlSelector";
ROUTE49.fromField = "left_changed";
ROUTE49.toNode = "leftShader";
ROUTE49.toField = "url";
Transform4.children[12] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "UrlSelector";
ROUTE50.fromField = "right_changed";
ROUTE50.toNode = "rightShader";
ROUTE50.toField = "url";
Transform4.children[13] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "UrlSelector";
ROUTE51.fromField = "top_changed";
ROUTE51.toNode = "topShader";
ROUTE51.toField = "url";
Transform4.children[14] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "UrlSelector";
ROUTE52.fromField = "bottom_changed";
ROUTE52.toNode = "bottomShader";
ROUTE52.toField = "url";
Transform4.children[15] = ROUTE52;

browser.currentScene.children[2] = Transform4;

