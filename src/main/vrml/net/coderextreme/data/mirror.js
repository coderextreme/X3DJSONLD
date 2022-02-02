let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
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
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Grouping";
component8.level = 1;
head1.component[6] = component8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "title";
meta9.content = "mirror.x3d";
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
meta12.content = "https://coderextreme.net/X3DJSONLD/mirror.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "description";
meta13.content = "sphere with alternating backgrounds";
head1.meta[11] = meta13;

head = head1;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.position = new SFVec3f(new float[0,5,100]);
Viewpoint15.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint15;

let TextureBackground16 = browser.currentScene.createNode("TextureBackground");
let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.DEF = "leftBackgroundTexture";
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground16.topTexture = ImageTexture17;

let ImageTexture18 = browser.currentScene.createNode("ImageTexture");
ImageTexture18.DEF = "rightBackgroundTexture";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground16.topTexture = ImageTexture18;

let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "frontBackgroundTexture";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground16.topTexture = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "backBackgroundTexture";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground16.topTexture = ImageTexture20;

let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.DEF = "topBackgroundTexture";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground16.topTexture = ImageTexture21;

let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "bottomBackgroundTexture";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground16.topTexture = ImageTexture22;

browser.currentScene.children[1] = TextureBackground16;

let Transform23 = browser.currentScene.createNode("Transform");
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material26.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance25.material = Material26;

let ComposedCubeMapTexture27 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.DEF = "backShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.DEF = "bottomShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.DEF = "frontShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.DEF = "leftShader";
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.DEF = "rightShader";
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.DEF = "topShader";
ImageTexture33.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

Appearance25.texture = ComposedCubeMapTexture27;

let ComposedShader34 = browser.currentScene.createNode("ComposedShader");
ComposedShader34.DEF = "x3dom";
ComposedShader34.language = "GLSL";
let field35 = browser.currentScene.createNode("field");
field35.name = "chromaticDispertion";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0.98 1 1.033";
ComposedShader34.field = new MFNode();

ComposedShader34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "cube";
field36.accessType = "inputOutput";
field36.type = "SFInt32";
field36.value = "0";
ComposedShader34.field[1] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "bias";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader34.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "scale";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader34.field[3] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "power";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "2";
ComposedShader34.field[4] = field39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader34.parts[5] = ShaderPart40;

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader34.parts[6] = ShaderPart41;

Appearance25.shaders = new MFNode();

Appearance25.shaders[0] = ComposedShader34;

let ComposedShader42 = browser.currentScene.createNode("ComposedShader");
ComposedShader42.DEF = "x_ite";
ComposedShader42.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field43 = browser.currentScene.createNode("field");
field43.name = "chromaticDispertion";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "0.98 1 1.033";
ComposedShader42.field = new MFNode();

ComposedShader42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "cube";
field44.accessType = "inputOutput";
field44.type = "SFInt32";
field44.value = "0";
ComposedShader42.field[1] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "bias";
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.value = "0.5";
ComposedShader42.field[2] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "scale";
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.value = "0.5";
ComposedShader42.field[3] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "power";
field47.accessType = "inputOutput";
field47.type = "SFFloat";
field47.value = "2";
ComposedShader42.field[4] = field47;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart48.type = "VERTEX";
ComposedShader42.parts[5] = ShaderPart48;

let ShaderPart49 = browser.currentScene.createNode("ShaderPart");
ShaderPart49.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart49.type = "FRAGMENT";
ComposedShader42.parts[6] = ShaderPart49;

Appearance25.shaders[1] = ComposedShader42;

Shape24.appearance = Appearance25;

let Sphere50 = browser.currentScene.createNode("Sphere");
Sphere50.radius = 30;
Shape24.geometry = Sphere50;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

let Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "UrlSelector";
Script51.directOutput = True;
let field52 = browser.currentScene.createNode("field");
field52.name = "frontUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script51.field = new MFNode();

Script51.field[0] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "backUrls";
field53.type = "MFString";
field53.accessType = "initializeOnly";
field53.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script51.field[1] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "leftUrls";
field54.type = "MFString";
field54.accessType = "initializeOnly";
field54.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script51.field[2] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "rightUrls";
field55.type = "MFString";
field55.accessType = "initializeOnly";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script51.field[3] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "topUrls";
field56.type = "MFString";
field56.accessType = "initializeOnly";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script51.field[4] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "bottomUrls";
field57.type = "MFString";
field57.accessType = "initializeOnly";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script51.field[5] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "front_changed";
field58.type = "MFString";
field58.accessType = "outputOnly";
Script51.field[6] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "back_changed";
field59.type = "MFString";
field59.accessType = "outputOnly";
Script51.field[7] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "left_changed";
field60.type = "MFString";
field60.accessType = "outputOnly";
Script51.field[8] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "right_changed";
field61.type = "MFString";
field61.accessType = "outputOnly";
Script51.field[9] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "top_changed";
field62.type = "MFString";
field62.accessType = "outputOnly";
Script51.field[10] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "bottom_changed";
field63.type = "MFString";
field63.accessType = "outputOnly";
Script51.field[11] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "set_fraction";
field64.type = "SFFloat";
field64.accessType = "inputOnly";
Script51.field[12] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "old";
field65.type = "SFInt32";
field65.accessType = "inputOutput";
field65.value = "-1";
Script51.field[13] = field65;


Script51.setSourceCode(`ecmascript:\n"+
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
Transform23.children[1] = Script51;

let TimeSensor66 = browser.currentScene.createNode("TimeSensor");
TimeSensor66.DEF = "Clock";
TimeSensor66.cycleInterval = 45;
TimeSensor66.loop = True;
Transform23.children[2] = TimeSensor66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Clock";
ROUTE67.fromField = "fraction_changed";
ROUTE67.toNode = "UrlSelector";
ROUTE67.toField = "set_fraction";
Transform23.children[3] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "front_changed";
ROUTE68.toNode = "frontBackgroundTexture";
ROUTE68.toField = "url";
Transform23.children[4] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "back_changed";
ROUTE69.toNode = "backBackgroundTexture";
ROUTE69.toField = "url";
Transform23.children[5] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "left_changed";
ROUTE70.toNode = "leftBackgroundTexture";
ROUTE70.toField = "url";
Transform23.children[6] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "right_changed";
ROUTE71.toNode = "rightBackgroundTexture";
ROUTE71.toField = "url";
Transform23.children[7] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "top_changed";
ROUTE72.toNode = "topBackgroundTexture";
ROUTE72.toField = "url";
Transform23.children[8] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "bottom_changed";
ROUTE73.toNode = "bottomBackgroundTexture";
ROUTE73.toField = "url";
Transform23.children[9] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "front_changed";
ROUTE74.toNode = "frontShader";
ROUTE74.toField = "url";
Transform23.children[10] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "back_changed";
ROUTE75.toNode = "backShader";
ROUTE75.toField = "url";
Transform23.children[11] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "UrlSelector";
ROUTE76.fromField = "left_changed";
ROUTE76.toNode = "leftShader";
ROUTE76.toField = "url";
Transform23.children[12] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "UrlSelector";
ROUTE77.fromField = "right_changed";
ROUTE77.toNode = "rightShader";
ROUTE77.toField = "url";
Transform23.children[13] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "UrlSelector";
ROUTE78.fromField = "top_changed";
ROUTE78.toNode = "topShader";
ROUTE78.toField = "url";
Transform23.children[14] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "UrlSelector";
ROUTE79.fromField = "bottom_changed";
ROUTE79.toNode = "bottomShader";
ROUTE79.toField = "url";
Transform23.children[15] = ROUTE79;

browser.currentScene.children[2] = Transform23;

