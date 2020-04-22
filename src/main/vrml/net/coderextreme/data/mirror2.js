var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,5,100]);
Viewpoint2.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

Background3 = browser.currentScene.createNode("Background");
Background3.DEF = "cube";
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
browser.currentScene.children[1] = Background3;

Transform4 = browser.currentScene.createNode("Transform");
Shape5 = browser.currentScene.createNode("Shape");
Appearance6 = browser.currentScene.createNode("Appearance");
Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material7.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance6.material = Material7;

ComposedCubeMapTexture8 = browser.currentScene.createNode("ComposedCubeMapTexture");
ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.DEF = "backShader";
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture8.top = ImageTexture9;

ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "bottomShader";
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture8.top = ImageTexture10;

ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.DEF = "frontShader";
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture8.top = ImageTexture11;

ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.DEF = "leftShader";
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture8.top = ImageTexture12;

ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.DEF = "rightShader";
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture8.top = ImageTexture13;

ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.DEF = "topShader";
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture8.top = ImageTexture14;

Appearance6.texture = ComposedCubeMapTexture8;

ComposedShader15 = browser.currentScene.createNode("ComposedShader");
ComposedShader15.DEF = "x_ite";
ComposedShader15.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field16 = browser.currentScene.createNode("field");
field16.name = "chromaticDispertion";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0.98 1 1.033";
ComposedShader15.field = new MFNode();

ComposedShader15.field[0] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "cube";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
field17.value = "0";
ComposedShader15.field[1] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "bias";
field18.accessType = "inputOutput";
field18.type = "SFFloat";
field18.value = "0.5";
ComposedShader15.field[2] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "scale";
field19.accessType = "inputOutput";
field19.type = "SFFloat";
field19.value = "0.5";
ComposedShader15.field[3] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "power";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.value = "2";
ComposedShader15.field[4] = field20;

ShaderPart21 = browser.currentScene.createNode("ShaderPart");
ShaderPart21.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart21.type = "VERTEX";
ComposedShader15.parts[5] = ShaderPart21;

ShaderPart22 = browser.currentScene.createNode("ShaderPart");
ShaderPart22.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart22.type = "FRAGMENT";
ComposedShader15.parts[6] = ShaderPart22;

Appearance6.shaders = new MFNode();

Appearance6.shaders[0] = ComposedShader15;

ComposedShader23 = browser.currentScene.createNode("ComposedShader");
ComposedShader23.DEF = "x3dom";
ComposedShader23.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field24 = browser.currentScene.createNode("field");
field24.name = "chromaticDispertion";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0.98 1 1.033";
ComposedShader23.field = new MFNode();

ComposedShader23.field[0] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "cube";
field25.accessType = "inputOutput";
field25.type = "SFInt32";
field25.value = "0";
ComposedShader23.field[1] = field25;

field26 = browser.currentScene.createNode("field");
field26.name = "bias";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.value = "0.5";
ComposedShader23.field[2] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "scale";
field27.accessType = "inputOutput";
field27.type = "SFFloat";
field27.value = "0.5";
ComposedShader23.field[3] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "power";
field28.accessType = "inputOutput";
field28.type = "SFFloat";
field28.value = "2";
ComposedShader23.field[4] = field28;

ShaderPart29 = browser.currentScene.createNode("ShaderPart");
ShaderPart29.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart29.type = "VERTEX";
ComposedShader23.parts[5] = ShaderPart29;

ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ShaderPart30.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart30.type = "FRAGMENT";
ComposedShader23.parts[6] = ShaderPart30;

Appearance6.shaders[1] = ComposedShader23;

Shape5.appearance = Appearance6;

Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 30;
Shape5.geometry = Sphere31;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

Script32 = browser.currentScene.createNode("Script");
Script32.DEF = "UrlSelector";
Script32.directOutput = True;
field33 = browser.currentScene.createNode("field");
field33.name = "frontUrls";
field33.type = "MFString";
field33.accessType = "initializeOnly";
field33.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script32.field = new MFNode();

Script32.field[0] = field33;

field34 = browser.currentScene.createNode("field");
field34.name = "backUrls";
field34.type = "MFString";
field34.accessType = "initializeOnly";
field34.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script32.field[1] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "leftUrls";
field35.type = "MFString";
field35.accessType = "initializeOnly";
field35.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script32.field[2] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "rightUrls";
field36.type = "MFString";
field36.accessType = "initializeOnly";
field36.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script32.field[3] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "topUrls";
field37.type = "MFString";
field37.accessType = "initializeOnly";
field37.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script32.field[4] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "bottomUrls";
field38.type = "MFString";
field38.accessType = "initializeOnly";
field38.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script32.field[5] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "front_changed";
field39.type = "MFString";
field39.accessType = "outputOnly";
Script32.field[6] = field39;

field40 = browser.currentScene.createNode("field");
field40.name = "back_changed";
field40.type = "MFString";
field40.accessType = "outputOnly";
Script32.field[7] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "left_changed";
field41.type = "MFString";
field41.accessType = "outputOnly";
Script32.field[8] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "right_changed";
field42.type = "MFString";
field42.accessType = "outputOnly";
Script32.field[9] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "top_changed";
field43.type = "MFString";
field43.accessType = "outputOnly";
Script32.field[10] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "bottom_changed";
field44.type = "MFString";
field44.accessType = "outputOnly";
Script32.field[11] = field44;

field45 = browser.currentScene.createNode("field");
field45.name = "set_fraction";
field45.type = "SFFloat";
field45.accessType = "inputOnly";
Script32.field[12] = field45;

field46 = browser.currentScene.createNode("field");
field46.name = "old";
field46.type = "SFInt32";
field46.accessType = "inputOutput";
field46.value = "-1";
Script32.field[13] = field46;


Script32.setSourceCode(`ecmascript:\n"+
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
Transform4.children[1] = Script32;

TimeSensor47 = browser.currentScene.createNode("TimeSensor");
TimeSensor47.DEF = "Clock";
TimeSensor47.cycleInterval = 45;
TimeSensor47.loop = True;
Transform4.children[2] = TimeSensor47;

ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "Clock";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "UrlSelector";
ROUTE48.toField = "set_fraction";
Transform4.children[3] = ROUTE48;

ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "UrlSelector";
ROUTE49.fromField = "front_changed";
ROUTE49.toNode = "cube";
ROUTE49.toField = "frontUrl";
Transform4.children[4] = ROUTE49;

ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "UrlSelector";
ROUTE50.fromField = "back_changed";
ROUTE50.toNode = "cube";
ROUTE50.toField = "backUrl";
Transform4.children[5] = ROUTE50;

ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "UrlSelector";
ROUTE51.fromField = "left_changed";
ROUTE51.toNode = "cube";
ROUTE51.toField = "leftUrl";
Transform4.children[6] = ROUTE51;

ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "UrlSelector";
ROUTE52.fromField = "right_changed";
ROUTE52.toNode = "cube";
ROUTE52.toField = "rightUrl";
Transform4.children[7] = ROUTE52;

ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "UrlSelector";
ROUTE53.fromField = "top_changed";
ROUTE53.toNode = "cube";
ROUTE53.toField = "topUrl";
Transform4.children[8] = ROUTE53;

ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "UrlSelector";
ROUTE54.fromField = "bottom_changed";
ROUTE54.toNode = "cube";
ROUTE54.toField = "bottomUrl";
Transform4.children[9] = ROUTE54;

ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "UrlSelector";
ROUTE55.fromField = "front_changed";
ROUTE55.toNode = "frontShader";
ROUTE55.toField = "url";
Transform4.children[10] = ROUTE55;

ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "UrlSelector";
ROUTE56.fromField = "back_changed";
ROUTE56.toNode = "backShader";
ROUTE56.toField = "url";
Transform4.children[11] = ROUTE56;

ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "UrlSelector";
ROUTE57.fromField = "left_changed";
ROUTE57.toNode = "leftShader";
ROUTE57.toField = "url";
Transform4.children[12] = ROUTE57;

ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "UrlSelector";
ROUTE58.fromField = "right_changed";
ROUTE58.toNode = "rightShader";
ROUTE58.toField = "url";
Transform4.children[13] = ROUTE58;

ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "UrlSelector";
ROUTE59.fromField = "top_changed";
ROUTE59.toNode = "topShader";
ROUTE59.toField = "url";
Transform4.children[14] = ROUTE59;

ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "UrlSelector";
ROUTE60.fromField = "bottom_changed";
ROUTE60.toNode = "bottomShader";
ROUTE60.toField = "url";
Transform4.children[15] = ROUTE60;

browser.currentScene.children[2] = Transform4;

