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
meta11.content = "mirror.x3d";
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
meta14.content = "https://coderextreme.net/X3DJSONLD/mirror.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "description";
meta15.content = "sphere with alternating backgrounds";
head1.meta[13] = meta15;

head = head1;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,5,100]);
Viewpoint17.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint17;

let TextureBackground18 = browser.currentScene.createNode("TextureBackground");
let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "leftBackgroundTexture";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground18.topTexture = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "rightBackgroundTexture";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground18.topTexture = ImageTexture20;

let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.DEF = "frontBackgroundTexture";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground18.topTexture = ImageTexture21;

let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "backBackgroundTexture";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground18.topTexture = ImageTexture22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "topBackgroundTexture";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground18.topTexture = ImageTexture23;

let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.DEF = "bottomBackgroundTexture";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground18.topTexture = ImageTexture24;

browser.currentScene.children[1] = TextureBackground18;

let Transform25 = browser.currentScene.createNode("Transform");
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material28.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance27.material = Material28;

let ComposedCubeMapTexture29 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.DEF = "backShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.DEF = "bottomShader";
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.DEF = "frontShader";
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.DEF = "leftShader";
ImageTexture33.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture33;

let ImageTexture34 = browser.currentScene.createNode("ImageTexture");
ImageTexture34.DEF = "rightShader";
ImageTexture34.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture34;

let ImageTexture35 = browser.currentScene.createNode("ImageTexture");
ImageTexture35.DEF = "topShader";
ImageTexture35.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture35;

Appearance27.texture = ComposedCubeMapTexture29;

let ComposedShader36 = browser.currentScene.createNode("ComposedShader");
ComposedShader36.DEF = "x3dom";
ComposedShader36.language = "GLSL";
let field37 = browser.currentScene.createNode("field");
field37.name = "chromaticDispertion";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0.98 1 1.033";
ComposedShader36.field = new MFNode();

ComposedShader36.field[0] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "cube";
field38.accessType = "inputOutput";
field38.type = "SFInt32";
field38.value = "0";
ComposedShader36.field[1] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "bias";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader36.field[2] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "scale";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.value = "0.5";
ComposedShader36.field[3] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "power";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.value = "2";
ComposedShader36.field[4] = field41;

let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart42.type = "VERTEX";
ComposedShader36.parts[5] = ShaderPart42;

let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart43.type = "FRAGMENT";
ComposedShader36.parts[6] = ShaderPart43;

Appearance27.shaders = new MFNode();

Appearance27.shaders[0] = ComposedShader36;

let ComposedShader44 = browser.currentScene.createNode("ComposedShader");
ComposedShader44.DEF = "x_ite";
ComposedShader44.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field45 = browser.currentScene.createNode("field");
field45.name = "chromaticDispertion";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.value = "0.98 1 1.033";
ComposedShader44.field = new MFNode();

ComposedShader44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "cube";
field46.accessType = "inputOutput";
field46.type = "SFInt32";
field46.value = "0";
ComposedShader44.field[1] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "bias";
field47.accessType = "inputOutput";
field47.type = "SFFloat";
field47.value = "0.5";
ComposedShader44.field[2] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "scale";
field48.accessType = "inputOutput";
field48.type = "SFFloat";
field48.value = "0.5";
ComposedShader44.field[3] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "power";
field49.accessType = "inputOutput";
field49.type = "SFFloat";
field49.value = "2";
ComposedShader44.field[4] = field49;

let ShaderPart50 = browser.currentScene.createNode("ShaderPart");
ShaderPart50.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart50.type = "VERTEX";
ComposedShader44.parts[5] = ShaderPart50;

let ShaderPart51 = browser.currentScene.createNode("ShaderPart");
ShaderPart51.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart51.type = "FRAGMENT";
ComposedShader44.parts[6] = ShaderPart51;

Appearance27.shaders[1] = ComposedShader44;

Shape26.appearance = Appearance27;

let Sphere52 = browser.currentScene.createNode("Sphere");
Sphere52.radius = 30;
Shape26.geometry = Sphere52;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

let Script53 = browser.currentScene.createNode("Script");
Script53.DEF = "UrlSelector";
Script53.directOutput = True;
let field54 = browser.currentScene.createNode("field");
field54.name = "frontUrls";
field54.type = "MFString";
field54.accessType = "initializeOnly";
field54.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script53.field = new MFNode();

Script53.field[0] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "backUrls";
field55.type = "MFString";
field55.accessType = "initializeOnly";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script53.field[1] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "leftUrls";
field56.type = "MFString";
field56.accessType = "initializeOnly";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script53.field[2] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "rightUrls";
field57.type = "MFString";
field57.accessType = "initializeOnly";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script53.field[3] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "topUrls";
field58.type = "MFString";
field58.accessType = "initializeOnly";
field58.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script53.field[4] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "bottomUrls";
field59.type = "MFString";
field59.accessType = "initializeOnly";
field59.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script53.field[5] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "front_changed";
field60.type = "MFString";
field60.accessType = "outputOnly";
Script53.field[6] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "back_changed";
field61.type = "MFString";
field61.accessType = "outputOnly";
Script53.field[7] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "left_changed";
field62.type = "MFString";
field62.accessType = "outputOnly";
Script53.field[8] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "right_changed";
field63.type = "MFString";
field63.accessType = "outputOnly";
Script53.field[9] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "top_changed";
field64.type = "MFString";
field64.accessType = "outputOnly";
Script53.field[10] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "bottom_changed";
field65.type = "MFString";
field65.accessType = "outputOnly";
Script53.field[11] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "set_fraction";
field66.type = "SFFloat";
field66.accessType = "inputOnly";
Script53.field[12] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "old";
field67.type = "SFInt32";
field67.accessType = "inputOutput";
field67.value = "-1";
Script53.field[13] = field67;


Script53.setSourceCode(`ecmascript:\n"+
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
Transform25.children[1] = Script53;

let TimeSensor68 = browser.currentScene.createNode("TimeSensor");
TimeSensor68.DEF = "Clock";
TimeSensor68.cycleInterval = 45;
TimeSensor68.loop = True;
Transform25.children[2] = TimeSensor68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Clock";
ROUTE69.fromField = "fraction_changed";
ROUTE69.toNode = "UrlSelector";
ROUTE69.toField = "set_fraction";
Transform25.children[3] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "front_changed";
ROUTE70.toNode = "frontBackgroundTexture";
ROUTE70.toField = "url";
Transform25.children[4] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "back_changed";
ROUTE71.toNode = "backBackgroundTexture";
ROUTE71.toField = "url";
Transform25.children[5] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "left_changed";
ROUTE72.toNode = "leftBackgroundTexture";
ROUTE72.toField = "url";
Transform25.children[6] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "right_changed";
ROUTE73.toNode = "rightBackgroundTexture";
ROUTE73.toField = "url";
Transform25.children[7] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "top_changed";
ROUTE74.toNode = "topBackgroundTexture";
ROUTE74.toField = "url";
Transform25.children[8] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "bottom_changed";
ROUTE75.toNode = "bottomBackgroundTexture";
ROUTE75.toField = "url";
Transform25.children[9] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "UrlSelector";
ROUTE76.fromField = "front_changed";
ROUTE76.toNode = "frontShader";
ROUTE76.toField = "url";
Transform25.children[10] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "UrlSelector";
ROUTE77.fromField = "back_changed";
ROUTE77.toNode = "backShader";
ROUTE77.toField = "url";
Transform25.children[11] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "UrlSelector";
ROUTE78.fromField = "left_changed";
ROUTE78.toNode = "leftShader";
ROUTE78.toField = "url";
Transform25.children[12] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "UrlSelector";
ROUTE79.fromField = "right_changed";
ROUTE79.toNode = "rightShader";
ROUTE79.toField = "url";
Transform25.children[13] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "UrlSelector";
ROUTE80.fromField = "top_changed";
ROUTE80.toNode = "topShader";
ROUTE80.toField = "url";
Transform25.children[14] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "UrlSelector";
ROUTE81.fromField = "bottom_changed";
ROUTE81.toNode = "bottomShader";
ROUTE81.toField = "url";
Transform25.children[15] = ROUTE81;

browser.currentScene.children[2] = Transform25;

