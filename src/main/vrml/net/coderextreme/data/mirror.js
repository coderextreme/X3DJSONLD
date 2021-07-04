let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
ComposedCubeMapTexture14.topTexture = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.DEF = "bottomShader";
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture14.topTexture = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.DEF = "frontShader";
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture14.topTexture = ImageTexture17;

let ImageTexture18 = browser.currentScene.createNode("ImageTexture");
ImageTexture18.DEF = "leftShader";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture14.topTexture = ImageTexture18;

let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "rightShader";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture14.topTexture = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "topShader";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture14.topTexture = ImageTexture20;

Appearance12.texture = ComposedCubeMapTexture14;

//<ComposedShader DEF=\"x3dom\" language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'/> <field name='cube' accessType='inputOutput' type='SFInt32' value='0'/> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'/> <field name='power' accessType='inputOutput' type='SFFloat' value='2'/> <ShaderPart url='\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/mix.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
let ComposedShader21 = browser.currentScene.createNode("ComposedShader");
ComposedShader21.DEF = "x_ite";
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
ShaderPart27.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart27.type = "VERTEX";
ComposedShader21.parts[5] = ShaderPart27;

let ShaderPart28 = browser.currentScene.createNode("ShaderPart");
ShaderPart28.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart28.type = "FRAGMENT";
ComposedShader21.parts[6] = ShaderPart28;

Appearance12.shaders = new MFNode();

Appearance12.shaders[0] = ComposedShader21;

Shape11.appearance = Appearance12;

let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 30;
Shape11.geometry = Sphere29;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

let Script30 = browser.currentScene.createNode("Script");
Script30.DEF = "UrlSelector";
Script30.directOutput = True;
let field31 = browser.currentScene.createNode("field");
field31.name = "frontUrls";
field31.type = "MFString";
field31.accessType = "initializeOnly";
field31.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script30.field = new MFNode();

Script30.field[0] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "backUrls";
field32.type = "MFString";
field32.accessType = "initializeOnly";
field32.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script30.field[1] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "leftUrls";
field33.type = "MFString";
field33.accessType = "initializeOnly";
field33.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script30.field[2] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "rightUrls";
field34.type = "MFString";
field34.accessType = "initializeOnly";
field34.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script30.field[3] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "topUrls";
field35.type = "MFString";
field35.accessType = "initializeOnly";
field35.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script30.field[4] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "bottomUrls";
field36.type = "MFString";
field36.accessType = "initializeOnly";
field36.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script30.field[5] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "front_changed";
field37.type = "MFString";
field37.accessType = "outputOnly";
Script30.field[6] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "back_changed";
field38.type = "MFString";
field38.accessType = "outputOnly";
Script30.field[7] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "left_changed";
field39.type = "MFString";
field39.accessType = "outputOnly";
Script30.field[8] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "right_changed";
field40.type = "MFString";
field40.accessType = "outputOnly";
Script30.field[9] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "top_changed";
field41.type = "MFString";
field41.accessType = "outputOnly";
Script30.field[10] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "bottom_changed";
field42.type = "MFString";
field42.accessType = "outputOnly";
Script30.field[11] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "set_fraction";
field43.type = "SFFloat";
field43.accessType = "inputOnly";
Script30.field[12] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "old";
field44.type = "SFInt32";
field44.accessType = "inputOutput";
field44.value = "-1";
Script30.field[13] = field44;


Script30.setSourceCode(`ecmascript:\n"+
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
Transform10.children[1] = Script30;

let TimeSensor45 = browser.currentScene.createNode("TimeSensor");
TimeSensor45.DEF = "Clock";
TimeSensor45.cycleInterval = 45;
TimeSensor45.loop = True;
Transform10.children[2] = TimeSensor45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "Clock";
ROUTE46.fromField = "fraction_changed";
ROUTE46.toNode = "UrlSelector";
ROUTE46.toField = "set_fraction";
Transform10.children[3] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "UrlSelector";
ROUTE47.fromField = "front_changed";
ROUTE47.toNode = "frontBack";
ROUTE47.toField = "url";
Transform10.children[4] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "UrlSelector";
ROUTE48.fromField = "back_changed";
ROUTE48.toNode = "backBack";
ROUTE48.toField = "url";
Transform10.children[5] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "UrlSelector";
ROUTE49.fromField = "left_changed";
ROUTE49.toNode = "leftBack";
ROUTE49.toField = "url";
Transform10.children[6] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "UrlSelector";
ROUTE50.fromField = "right_changed";
ROUTE50.toNode = "rightBack";
ROUTE50.toField = "url";
Transform10.children[7] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "UrlSelector";
ROUTE51.fromField = "top_changed";
ROUTE51.toNode = "topBack";
ROUTE51.toField = "url";
Transform10.children[8] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "UrlSelector";
ROUTE52.fromField = "bottom_changed";
ROUTE52.toNode = "bottomBack";
ROUTE52.toField = "url";
Transform10.children[9] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "UrlSelector";
ROUTE53.fromField = "front_changed";
ROUTE53.toNode = "frontShader";
ROUTE53.toField = "url";
Transform10.children[10] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "UrlSelector";
ROUTE54.fromField = "back_changed";
ROUTE54.toNode = "backShader";
ROUTE54.toField = "url";
Transform10.children[11] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "UrlSelector";
ROUTE55.fromField = "left_changed";
ROUTE55.toNode = "leftShader";
ROUTE55.toField = "url";
Transform10.children[12] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "UrlSelector";
ROUTE56.fromField = "right_changed";
ROUTE56.toNode = "rightShader";
ROUTE56.toField = "url";
Transform10.children[13] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "UrlSelector";
ROUTE57.fromField = "top_changed";
ROUTE57.toNode = "topShader";
ROUTE57.toField = "url";
Transform10.children[14] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "UrlSelector";
ROUTE58.fromField = "bottom_changed";
ROUTE58.toNode = "bottomShader";
ROUTE58.toField = "url";
Transform10.children[15] = ROUTE58;

browser.currentScene.children[2] = Transform10;

