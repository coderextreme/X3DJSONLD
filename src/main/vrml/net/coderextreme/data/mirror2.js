let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "CubeMapTexturing";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Shape";
component6.level = 4;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "title";
meta8.content = "mirror2.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "creator";
meta9.content = "John Carlson";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "manual";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "a mirrored sphere";
head1.meta[10] = meta12;

head = head1;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.position = new SFVec3f(new float[0,5,100]);
Viewpoint14.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint14;

let Background15 = browser.currentScene.createNode("Background");
Background15.DEF = "cube";
Background15.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background15.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background15.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background15.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background15.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background15.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
browser.currentScene.children[1] = Background15;

let Transform16 = browser.currentScene.createNode("Transform");
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material19.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance18.material = Material19;

let ComposedCubeMapTexture20 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.DEF = "backShader";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture21;

let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "bottomShader";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "frontShader";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture23;

let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.DEF = "leftShader";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "rightShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "topShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture26;

Appearance18.texture = ComposedCubeMapTexture20;

let ComposedShader27 = browser.currentScene.createNode("ComposedShader");
ComposedShader27.DEF = "x_ite";
ComposedShader27.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field28 = browser.currentScene.createNode("field");
field28.name = "chromaticDispertion";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0.98 1 1.033";
ComposedShader27.field = new MFNode();

ComposedShader27.field[0] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "cube";
field29.accessType = "inputOutput";
field29.type = "SFInt32";
field29.value = "0";
ComposedShader27.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "bias";
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.value = "0.5";
ComposedShader27.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "scale";
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.value = "0.5";
ComposedShader27.field[3] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "power";
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.value = "2";
ComposedShader27.field[4] = field32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart33.type = "VERTEX";
ComposedShader27.parts[5] = ShaderPart33;

let ShaderPart34 = browser.currentScene.createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart34.type = "FRAGMENT";
ComposedShader27.parts[6] = ShaderPart34;

Appearance18.shaders = new MFNode();

Appearance18.shaders[0] = ComposedShader27;

let ComposedShader35 = browser.currentScene.createNode("ComposedShader");
ComposedShader35.DEF = "x3dom";
ComposedShader35.language = "GLSL";
let field36 = browser.currentScene.createNode("field");
field36.name = "chromaticDispertion";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0.98 1 1.033";
ComposedShader35.field = new MFNode();

ComposedShader35.field[0] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "cube";
field37.accessType = "inputOutput";
field37.type = "SFInt32";
field37.value = "0";
ComposedShader35.field[1] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "bias";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader35.field[2] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "scale";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader35.field[3] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "power";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.value = "2";
ComposedShader35.field[4] = field40;

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart41.type = "VERTEX";
ComposedShader35.parts[5] = ShaderPart41;

let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart42.type = "FRAGMENT";
ComposedShader35.parts[6] = ShaderPart42;

Appearance18.shaders[1] = ComposedShader35;

Shape17.appearance = Appearance18;

let Sphere43 = browser.currentScene.createNode("Sphere");
Sphere43.radius = 30;
Shape17.geometry = Sphere43;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

let Script44 = browser.currentScene.createNode("Script");
Script44.DEF = "UrlSelector";
Script44.directOutput = True;
let field45 = browser.currentScene.createNode("field");
field45.name = "frontUrls";
field45.type = "MFString";
field45.accessType = "initializeOnly";
field45.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script44.field = new MFNode();

Script44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "backUrls";
field46.type = "MFString";
field46.accessType = "initializeOnly";
field46.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script44.field[1] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "leftUrls";
field47.type = "MFString";
field47.accessType = "initializeOnly";
field47.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script44.field[2] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "rightUrls";
field48.type = "MFString";
field48.accessType = "initializeOnly";
field48.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script44.field[3] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "topUrls";
field49.type = "MFString";
field49.accessType = "initializeOnly";
field49.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script44.field[4] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "bottomUrls";
field50.type = "MFString";
field50.accessType = "initializeOnly";
field50.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script44.field[5] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "front_changed";
field51.type = "MFString";
field51.accessType = "outputOnly";
Script44.field[6] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "back_changed";
field52.type = "MFString";
field52.accessType = "outputOnly";
Script44.field[7] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "left_changed";
field53.type = "MFString";
field53.accessType = "outputOnly";
Script44.field[8] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "right_changed";
field54.type = "MFString";
field54.accessType = "outputOnly";
Script44.field[9] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "top_changed";
field55.type = "MFString";
field55.accessType = "outputOnly";
Script44.field[10] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "bottom_changed";
field56.type = "MFString";
field56.accessType = "outputOnly";
Script44.field[11] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "set_fraction";
field57.type = "SFFloat";
field57.accessType = "inputOnly";
Script44.field[12] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "old";
field58.type = "SFInt32";
field58.accessType = "inputOutput";
field58.value = "-1";
Script44.field[13] = field58;


Script44.setSourceCode(`ecmascript:\n"+
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
Transform16.children[1] = Script44;

let TimeSensor59 = browser.currentScene.createNode("TimeSensor");
TimeSensor59.DEF = "Clock";
TimeSensor59.cycleInterval = 45;
TimeSensor59.loop = True;
Transform16.children[2] = TimeSensor59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Clock";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "UrlSelector";
ROUTE60.toField = "set_fraction";
Transform16.children[3] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "UrlSelector";
ROUTE61.fromField = "front_changed";
ROUTE61.toNode = "cube";
ROUTE61.toField = "frontUrl";
Transform16.children[4] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "UrlSelector";
ROUTE62.fromField = "back_changed";
ROUTE62.toNode = "cube";
ROUTE62.toField = "backUrl";
Transform16.children[5] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "UrlSelector";
ROUTE63.fromField = "left_changed";
ROUTE63.toNode = "cube";
ROUTE63.toField = "leftUrl";
Transform16.children[6] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "UrlSelector";
ROUTE64.fromField = "right_changed";
ROUTE64.toNode = "cube";
ROUTE64.toField = "rightUrl";
Transform16.children[7] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "UrlSelector";
ROUTE65.fromField = "top_changed";
ROUTE65.toNode = "cube";
ROUTE65.toField = "topUrl";
Transform16.children[8] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "UrlSelector";
ROUTE66.fromField = "bottom_changed";
ROUTE66.toNode = "cube";
ROUTE66.toField = "bottomUrl";
Transform16.children[9] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "UrlSelector";
ROUTE67.fromField = "front_changed";
ROUTE67.toNode = "frontShader";
ROUTE67.toField = "url";
Transform16.children[10] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "back_changed";
ROUTE68.toNode = "backShader";
ROUTE68.toField = "url";
Transform16.children[11] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "left_changed";
ROUTE69.toNode = "leftShader";
ROUTE69.toField = "url";
Transform16.children[12] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "right_changed";
ROUTE70.toNode = "rightShader";
ROUTE70.toField = "url";
Transform16.children[13] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "top_changed";
ROUTE71.toNode = "topShader";
ROUTE71.toField = "url";
Transform16.children[14] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "bottom_changed";
ROUTE72.toNode = "bottomShader";
ROUTE72.toField = "url";
Transform16.children[15] = ROUTE72;

browser.currentScene.children[2] = Transform16;

