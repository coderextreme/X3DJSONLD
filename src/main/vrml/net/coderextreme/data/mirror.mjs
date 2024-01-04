let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "mirror.x3d";
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

let TextureBackground17 = browser.currentScene.createNode("TextureBackground");
let ImageTexture18 = browser.currentScene.createNode("ImageTexture");
ImageTexture18.DEF = "frontBackgroundTexture";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground17.topTexture = ImageTexture18;

let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "backBackgroundTexture";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground17.topTexture = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "leftBackgroundTexture";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground17.topTexture = ImageTexture20;

let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.DEF = "rightBackgroundTexture";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground17.topTexture = ImageTexture21;

let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "topBackgroundTexture";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground17.topTexture = ImageTexture22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "bottomBackgroundTexture";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground17.topTexture = ImageTexture23;

browser.currentScene.children[1] = TextureBackground17;

let Transform24 = browser.currentScene.createNode("Transform");
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material27.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance26.material = Material27;

let ComposedCubeMapTexture28 = browser.currentScene.createNode("ComposedCubeMapTexture");
Appearance26.texture = ComposedCubeMapTexture28;

let ComposedShader29 = browser.currentScene.createNode("ComposedShader");
ComposedShader29.DEF = "x3dom";
ComposedShader29.language = "GLSL";
let ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ShaderPart30.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ComposedShader29.parts = new MFNode();

ComposedShader29.parts[0] = ShaderPart30;

let ShaderPart31 = browser.currentScene.createNode("ShaderPart");
ShaderPart31.type = "FRAGMENT";
ShaderPart31.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ComposedShader29.parts[1] = ShaderPart31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.name = "chromaticDispertion";
field32.value = "0.98 1 1.033";
ComposedShader29.field[2] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "inputOutput";
field33.type = "SFInt32";
field33.name = "cube";
ComposedShader29.field[3] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.name = "bias";
field34.value = "0.5";
ComposedShader29.field[4] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.name = "scale";
field35.value = "0.5";
ComposedShader29.field[5] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.name = "power";
field36.value = "2";
ComposedShader29.field[6] = field36;

Appearance26.shaders = new MFNode();

Appearance26.shaders[0] = ComposedShader29;

let ComposedShader37 = browser.currentScene.createNode("ComposedShader");
ComposedShader37.DEF = "x_ite";
ComposedShader37.language = "GLSL";
let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ComposedShader37.parts = new MFNode();

ComposedShader37.parts[0] = ShaderPart38;

let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.type = "FRAGMENT";
ShaderPart39.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ComposedShader37.parts[1] = ShaderPart39;

let field40 = browser.currentScene.createNode("field");
field40.accessType = "inputOutput";
field40.type = "SFVec3f";
field40.name = "chromaticDispertion";
field40.value = "0.98 1 1.033";
ComposedShader37.field[2] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFInt32";
field41.name = "cube";
ComposedShader37.field[3] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.name = "bias";
field42.value = "0.5";
ComposedShader37.field[4] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.name = "scale";
field43.value = "0.5";
ComposedShader37.field[5] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.name = "power";
field44.value = "2";
ComposedShader37.field[6] = field44;

Appearance26.shaders[1] = ComposedShader37;

Shape25.appearance = Appearance26;

let Sphere45 = browser.currentScene.createNode("Sphere");
Sphere45.radius = 30;
Shape25.geometry = Sphere45;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "UrlSelector";
Script46.directOutput = True;
let field47 = browser.currentScene.createNode("field");
field47.accessType = "initializeOnly";
field47.type = "MFString";
field47.name = "frontUrls";
field47.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script46.field = new MFNode();

Script46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.accessType = "initializeOnly";
field48.type = "MFString";
field48.name = "backUrls";
field48.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.accessType = "initializeOnly";
field49.type = "MFString";
field49.name = "leftUrls";
field49.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script46.field[2] = field49;

let field50 = browser.currentScene.createNode("field");
field50.accessType = "initializeOnly";
field50.type = "MFString";
field50.name = "rightUrls";
field50.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script46.field[3] = field50;

let field51 = browser.currentScene.createNode("field");
field51.accessType = "initializeOnly";
field51.type = "MFString";
field51.name = "topUrls";
field51.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script46.field[4] = field51;

let field52 = browser.currentScene.createNode("field");
field52.accessType = "initializeOnly";
field52.type = "MFString";
field52.name = "bottomUrls";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script46.field[5] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "outputOnly";
field53.type = "MFString";
field53.name = "front_changed";
Script46.field[6] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "outputOnly";
field54.type = "MFString";
field54.name = "back_changed";
Script46.field[7] = field54;

let field55 = browser.currentScene.createNode("field");
field55.accessType = "outputOnly";
field55.type = "MFString";
field55.name = "left_changed";
Script46.field[8] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "outputOnly";
field56.type = "MFString";
field56.name = "right_changed";
Script46.field[9] = field56;

let field57 = browser.currentScene.createNode("field");
field57.accessType = "outputOnly";
field57.type = "MFString";
field57.name = "top_changed";
Script46.field[10] = field57;

let field58 = browser.currentScene.createNode("field");
field58.accessType = "outputOnly";
field58.type = "MFString";
field58.name = "bottom_changed";
Script46.field[11] = field58;

let field59 = browser.currentScene.createNode("field");
field59.accessType = "inputOnly";
field59.type = "SFFloat";
field59.name = "set_fraction";
Script46.field[12] = field59;

let field60 = browser.currentScene.createNode("field");
field60.accessType = "inputOutput";
field60.type = "SFInt32";
field60.name = "old";
field60.value = "-1";
Script46.field[13] = field60;


Script46.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform24.children[1] = Script46;

let TimeSensor61 = browser.currentScene.createNode("TimeSensor");
TimeSensor61.DEF = "Clock";
TimeSensor61.cycleInterval = 45;
TimeSensor61.loop = True;
Transform24.children[2] = TimeSensor61;

browser.currentScene.children[2] = Transform24;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Clock";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "UrlSelector";
ROUTE62.toField = "set_fraction";
browser.currentScene.children[3] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "UrlSelector";
ROUTE63.fromField = "front_changed";
ROUTE63.toNode = "frontBackgroundTexture";
ROUTE63.toField = "url";
browser.currentScene.children[4] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "UrlSelector";
ROUTE64.fromField = "back_changed";
ROUTE64.toNode = "backBackgroundTexture";
ROUTE64.toField = "url";
browser.currentScene.children[5] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "UrlSelector";
ROUTE65.fromField = "left_changed";
ROUTE65.toNode = "leftBackgroundTexture";
ROUTE65.toField = "url";
browser.currentScene.children[6] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "UrlSelector";
ROUTE66.fromField = "right_changed";
ROUTE66.toNode = "rightBackgroundTexture";
ROUTE66.toField = "url";
browser.currentScene.children[7] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "UrlSelector";
ROUTE67.fromField = "top_changed";
ROUTE67.toNode = "topBackgroundTexture";
ROUTE67.toField = "url";
browser.currentScene.children[8] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "bottom_changed";
ROUTE68.toNode = "bottomBackgroundTexture";
ROUTE68.toField = "url";
browser.currentScene.children[9] = ROUTE68;

