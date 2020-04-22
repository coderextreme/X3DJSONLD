let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,5,100]);
Viewpoint2.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let TextureBackground3 = browser.currentScene.createNode("TextureBackground");
let ImageTexture4 = browser.currentScene.createNode("ImageTexture");
ImageTexture4.DEF = "leftBack";
ImageTexture4.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground3.topTexture = ImageTexture4;

let ImageTexture5 = browser.currentScene.createNode("ImageTexture");
ImageTexture5.DEF = "rightBack";
ImageTexture5.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground3.topTexture = ImageTexture5;

let ImageTexture6 = browser.currentScene.createNode("ImageTexture");
ImageTexture6.DEF = "frontBack";
ImageTexture6.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground3.topTexture = ImageTexture6;

let ImageTexture7 = browser.currentScene.createNode("ImageTexture");
ImageTexture7.DEF = "backBack";
ImageTexture7.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground3.topTexture = ImageTexture7;

let ImageTexture8 = browser.currentScene.createNode("ImageTexture");
ImageTexture8.DEF = "topBack";
ImageTexture8.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground3.topTexture = ImageTexture8;

let ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.DEF = "bottomBack";
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground3.topTexture = ImageTexture9;

browser.currentScene.children[1] = TextureBackground3;

let Transform10 = browser.currentScene.createNode("Transform");
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material13.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance12.material = Material13;

let ComposedCubeMapTexture14 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.DEF = "backShader";
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture14.top = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.DEF = "bottomShader";
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture14.top = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.DEF = "frontShader";
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture14.top = ImageTexture17;

let ImageTexture18 = browser.currentScene.createNode("ImageTexture");
ImageTexture18.DEF = "leftShader";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture14.top = ImageTexture18;

let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "rightShader";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture14.top = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "topShader";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture14.top = ImageTexture20;

Appearance12.texture = ComposedCubeMapTexture14;

let ComposedShader21 = browser.currentScene.createNode("ComposedShader");
ComposedShader21.DEF = "x3dom";
ComposedShader21.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field22 = browser.currentScene.createNode("field");
field22.name = "chromaticDispertion";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "0.98 1 1.033";
ComposedShader21.field = new MFNode();

ComposedShader21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "cube";
field23.accessType = "inputOutput";
field23.type = "SFInt32";
field23.value = "0";
ComposedShader21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "bias";
field24.accessType = "inputOutput";
field24.type = "SFFloat";
field24.value = "0.5";
ComposedShader21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "scale";
field25.accessType = "inputOutput";
field25.type = "SFFloat";
field25.value = "0.5";
ComposedShader21.field[3] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "power";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.value = "2";
ComposedShader21.field[4] = field26;

let ShaderPart27 = browser.currentScene.createNode("ShaderPart");
ShaderPart27.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart27.type = "VERTEX";
ComposedShader21.parts[5] = ShaderPart27;

let ShaderPart28 = browser.currentScene.createNode("ShaderPart");
ShaderPart28.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart28.type = "FRAGMENT";
ComposedShader21.parts[6] = ShaderPart28;

Appearance12.shaders = new MFNode();

Appearance12.shaders[0] = ComposedShader21;

let ComposedShader29 = browser.currentScene.createNode("ComposedShader");
ComposedShader29.DEF = "x_ite";
ComposedShader29.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field30 = browser.currentScene.createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader29.field = new MFNode();

ComposedShader29.field[0] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.accessType = "inputOutput";
field31.type = "SFInt32";
field31.value = "0";
ComposedShader29.field[1] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "bias";
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.value = "0.5";
ComposedShader29.field[2] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "scale";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "0.5";
ComposedShader29.field[3] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "power";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "2";
ComposedShader29.field[4] = field34;

let ShaderPart35 = browser.currentScene.createNode("ShaderPart");
ShaderPart35.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"]);
ShaderPart35.type = "VERTEX";
ComposedShader29.parts[5] = ShaderPart35;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/mix.fs"]);
ShaderPart36.type = "FRAGMENT";
ComposedShader29.parts[6] = ShaderPart36;

Appearance12.shaders[1] = ComposedShader29;

Shape11.appearance = Appearance12;

let Sphere37 = browser.currentScene.createNode("Sphere");
Sphere37.radius = 30;
Shape11.geometry = Sphere37;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

let Script38 = browser.currentScene.createNode("Script");
Script38.DEF = "UrlSelector";
Script38.directOutput = True;
let field39 = browser.currentScene.createNode("field");
field39.name = "frontUrls";
field39.type = "MFString";
field39.accessType = "initializeOnly";
field39.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script38.field = new MFNode();

Script38.field[0] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "backUrls";
field40.type = "MFString";
field40.accessType = "initializeOnly";
field40.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script38.field[1] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "leftUrls";
field41.type = "MFString";
field41.accessType = "initializeOnly";
field41.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script38.field[2] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "rightUrls";
field42.type = "MFString";
field42.accessType = "initializeOnly";
field42.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script38.field[3] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "topUrls";
field43.type = "MFString";
field43.accessType = "initializeOnly";
field43.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script38.field[4] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "bottomUrls";
field44.type = "MFString";
field44.accessType = "initializeOnly";
field44.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script38.field[5] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "front_changed";
field45.type = "MFString";
field45.accessType = "outputOnly";
Script38.field[6] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "back_changed";
field46.type = "MFString";
field46.accessType = "outputOnly";
Script38.field[7] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "left_changed";
field47.type = "MFString";
field47.accessType = "outputOnly";
Script38.field[8] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "right_changed";
field48.type = "MFString";
field48.accessType = "outputOnly";
Script38.field[9] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "top_changed";
field49.type = "MFString";
field49.accessType = "outputOnly";
Script38.field[10] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "bottom_changed";
field50.type = "MFString";
field50.accessType = "outputOnly";
Script38.field[11] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "set_fraction";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
Script38.field[12] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "old";
field52.type = "SFInt32";
field52.accessType = "inputOutput";
field52.value = "-1";
Script38.field[13] = field52;


Script38.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform10.children[1] = Script38;

let TimeSensor53 = browser.currentScene.createNode("TimeSensor");
TimeSensor53.DEF = "Clock";
TimeSensor53.cycleInterval = 45;
TimeSensor53.loop = True;
Transform10.children[2] = TimeSensor53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "Clock";
ROUTE54.fromField = "fraction_changed";
ROUTE54.toNode = "UrlSelector";
ROUTE54.toField = "set_fraction";
Transform10.children[3] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "UrlSelector";
ROUTE55.fromField = "front_changed";
ROUTE55.toNode = "frontBack";
ROUTE55.toField = "url";
Transform10.children[4] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "UrlSelector";
ROUTE56.fromField = "back_changed";
ROUTE56.toNode = "backBack";
ROUTE56.toField = "url";
Transform10.children[5] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "UrlSelector";
ROUTE57.fromField = "left_changed";
ROUTE57.toNode = "leftBack";
ROUTE57.toField = "url";
Transform10.children[6] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "UrlSelector";
ROUTE58.fromField = "right_changed";
ROUTE58.toNode = "rightBack";
ROUTE58.toField = "url";
Transform10.children[7] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "UrlSelector";
ROUTE59.fromField = "top_changed";
ROUTE59.toNode = "topBack";
ROUTE59.toField = "url";
Transform10.children[8] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "UrlSelector";
ROUTE60.fromField = "bottom_changed";
ROUTE60.toNode = "bottomBack";
ROUTE60.toField = "url";
Transform10.children[9] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "UrlSelector";
ROUTE61.fromField = "front_changed";
ROUTE61.toNode = "frontShader";
ROUTE61.toField = "url";
Transform10.children[10] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "UrlSelector";
ROUTE62.fromField = "back_changed";
ROUTE62.toNode = "backShader";
ROUTE62.toField = "url";
Transform10.children[11] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "UrlSelector";
ROUTE63.fromField = "left_changed";
ROUTE63.toNode = "leftShader";
ROUTE63.toField = "url";
Transform10.children[12] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "UrlSelector";
ROUTE64.fromField = "right_changed";
ROUTE64.toNode = "rightShader";
ROUTE64.toField = "url";
Transform10.children[13] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "UrlSelector";
ROUTE65.fromField = "top_changed";
ROUTE65.toNode = "topShader";
ROUTE65.toField = "url";
Transform10.children[14] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "UrlSelector";
ROUTE66.fromField = "bottom_changed";
ROUTE66.toNode = "bottomShader";
ROUTE66.toField = "url";
Transform10.children[15] = ROUTE66;

browser.currentScene.children[2] = Transform10;

