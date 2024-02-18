#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Core";
component10.level = 1;
head1.component[8] = component10;

meta meta11 = createNode("meta");
meta11.name = "title";
meta11.content = "mirror.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "manual";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "description";
meta15.content = "sphere with alternating backgrounds";
head1.meta[13] = meta15;

head = head1;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,5,100]);
Viewpoint17.description = "Switch background and images texture";
children = new MFNode();

children[0] = Viewpoint17;

TextureBackground TextureBackground18 = createNode("TextureBackground");
ImageTexture ImageTexture19 = createNode("ImageTexture");
ImageTexture19.DEF = "leftBackgroundTexture";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground18.topTexture = ImageTexture19;

ImageTexture ImageTexture20 = createNode("ImageTexture");
ImageTexture20.DEF = "rightBackgroundTexture";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground18.topTexture = ImageTexture20;

ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.DEF = "frontBackgroundTexture";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground18.topTexture = ImageTexture21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.DEF = "backBackgroundTexture";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground18.topTexture = ImageTexture22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.DEF = "topBackgroundTexture";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground18.topTexture = ImageTexture23;

ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.DEF = "bottomBackgroundTexture";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground18.topTexture = ImageTexture24;

children[1] = TextureBackground18;

Transform Transform25 = createNode("Transform");
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material28.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance27.material = Material28;

ComposedCubeMapTexture ComposedCubeMapTexture29 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.DEF = "backShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.DEF = "bottomShader";
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.DEF = "frontShader";
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.DEF = "leftShader";
ImageTexture33.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture33;

ImageTexture ImageTexture34 = createNode("ImageTexture");
ImageTexture34.DEF = "rightShader";
ImageTexture34.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture34;

ImageTexture ImageTexture35 = createNode("ImageTexture");
ImageTexture35.DEF = "topShader";
ImageTexture35.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture35;

Appearance27.texture = ComposedCubeMapTexture29;

ComposedShader ComposedShader36 = createNode("ComposedShader");
ComposedShader36.DEF = "x3dom";
ComposedShader36.language = "GLSL";
field field37 = createNode("field");
field37.name = "chromaticDispertion";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0.98 1 1.033";
ComposedShader36.field = new MFNode();

ComposedShader36.field[0] = field37;

field field38 = createNode("field");
field38.name = "cube";
field38.accessType = "inputOutput";
field38.type = "SFInt32";
field38.value = "0";
ComposedShader36.field[1] = field38;

field field39 = createNode("field");
field39.name = "bias";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader36.field[2] = field39;

field field40 = createNode("field");
field40.name = "scale";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.value = "0.5";
ComposedShader36.field[3] = field40;

field field41 = createNode("field");
field41.name = "power";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.value = "2";
ComposedShader36.field[4] = field41;

ShaderPart ShaderPart42 = createNode("ShaderPart");
ShaderPart42.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart42.type = "VERTEX";
ComposedShader36.parts[5] = ShaderPart42;

ShaderPart ShaderPart43 = createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart43.type = "FRAGMENT";
ComposedShader36.parts[6] = ShaderPart43;

Appearance27.shaders = new MFNode();

Appearance27.shaders[0] = ComposedShader36;

ComposedShader ComposedShader44 = createNode("ComposedShader");
ComposedShader44.DEF = "x_ite";
ComposedShader44.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field field45 = createNode("field");
field45.name = "chromaticDispertion";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.value = "0.98 1 1.033";
ComposedShader44.field = new MFNode();

ComposedShader44.field[0] = field45;

field field46 = createNode("field");
field46.name = "cube";
field46.accessType = "inputOutput";
field46.type = "SFInt32";
field46.value = "0";
ComposedShader44.field[1] = field46;

field field47 = createNode("field");
field47.name = "bias";
field47.accessType = "inputOutput";
field47.type = "SFFloat";
field47.value = "0.5";
ComposedShader44.field[2] = field47;

field field48 = createNode("field");
field48.name = "scale";
field48.accessType = "inputOutput";
field48.type = "SFFloat";
field48.value = "0.5";
ComposedShader44.field[3] = field48;

field field49 = createNode("field");
field49.name = "power";
field49.accessType = "inputOutput";
field49.type = "SFFloat";
field49.value = "2";
ComposedShader44.field[4] = field49;

ShaderPart ShaderPart50 = createNode("ShaderPart");
ShaderPart50.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart50.type = "VERTEX";
ComposedShader44.parts[5] = ShaderPart50;

ShaderPart ShaderPart51 = createNode("ShaderPart");
ShaderPart51.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart51.type = "FRAGMENT";
ComposedShader44.parts[6] = ShaderPart51;

Appearance27.shaders[1] = ComposedShader44;

Shape26.appearance = Appearance27;

Sphere Sphere52 = createNode("Sphere");
Sphere52.radius = 30;
Shape26.geometry = Sphere52;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Script Script53 = createNode("Script");
Script53.DEF = "UrlSelector";
Script53.directOutput = True;
field field54 = createNode("field");
field54.name = "frontUrls";
field54.type = "MFString";
field54.accessType = "initializeOnly";
field54.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script53.field = new MFNode();

Script53.field[0] = field54;

field field55 = createNode("field");
field55.name = "backUrls";
field55.type = "MFString";
field55.accessType = "initializeOnly";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script53.field[1] = field55;

field field56 = createNode("field");
field56.name = "leftUrls";
field56.type = "MFString";
field56.accessType = "initializeOnly";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script53.field[2] = field56;

field field57 = createNode("field");
field57.name = "rightUrls";
field57.type = "MFString";
field57.accessType = "initializeOnly";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script53.field[3] = field57;

field field58 = createNode("field");
field58.name = "topUrls";
field58.type = "MFString";
field58.accessType = "initializeOnly";
field58.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script53.field[4] = field58;

field field59 = createNode("field");
field59.name = "bottomUrls";
field59.type = "MFString";
field59.accessType = "initializeOnly";
field59.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script53.field[5] = field59;

field field60 = createNode("field");
field60.name = "front_changed";
field60.type = "MFString";
field60.accessType = "outputOnly";
Script53.field[6] = field60;

field field61 = createNode("field");
field61.name = "back_changed";
field61.type = "MFString";
field61.accessType = "outputOnly";
Script53.field[7] = field61;

field field62 = createNode("field");
field62.name = "left_changed";
field62.type = "MFString";
field62.accessType = "outputOnly";
Script53.field[8] = field62;

field field63 = createNode("field");
field63.name = "right_changed";
field63.type = "MFString";
field63.accessType = "outputOnly";
Script53.field[9] = field63;

field field64 = createNode("field");
field64.name = "top_changed";
field64.type = "MFString";
field64.accessType = "outputOnly";
Script53.field[10] = field64;

field field65 = createNode("field");
field65.name = "bottom_changed";
field65.type = "MFString";
field65.accessType = "outputOnly";
Script53.field[11] = field65;

field field66 = createNode("field");
field66.name = "set_fraction";
field66.type = "SFFloat";
field66.accessType = "inputOnly";
Script53.field[12] = field66;

field field67 = createNode("field");
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

TimeSensor TimeSensor68 = createNode("TimeSensor");
TimeSensor68.DEF = "Clock";
TimeSensor68.cycleInterval = 45;
TimeSensor68.loop = True;
Transform25.children[2] = TimeSensor68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "Clock";
ROUTE69.fromField = "fraction_changed";
ROUTE69.toNode = "UrlSelector";
ROUTE69.toField = "set_fraction";
Transform25.children[3] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "front_changed";
ROUTE70.toNode = "frontBackgroundTexture";
ROUTE70.toField = "url";
Transform25.children[4] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "back_changed";
ROUTE71.toNode = "backBackgroundTexture";
ROUTE71.toField = "url";
Transform25.children[5] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "left_changed";
ROUTE72.toNode = "leftBackgroundTexture";
ROUTE72.toField = "url";
Transform25.children[6] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "right_changed";
ROUTE73.toNode = "rightBackgroundTexture";
ROUTE73.toField = "url";
Transform25.children[7] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "top_changed";
ROUTE74.toNode = "topBackgroundTexture";
ROUTE74.toField = "url";
Transform25.children[8] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "bottom_changed";
ROUTE75.toNode = "bottomBackgroundTexture";
ROUTE75.toField = "url";
Transform25.children[9] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "UrlSelector";
ROUTE76.fromField = "front_changed";
ROUTE76.toNode = "frontShader";
ROUTE76.toField = "url";
Transform25.children[10] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "UrlSelector";
ROUTE77.fromField = "back_changed";
ROUTE77.toNode = "backShader";
ROUTE77.toField = "url";
Transform25.children[11] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "UrlSelector";
ROUTE78.fromField = "left_changed";
ROUTE78.toNode = "leftShader";
ROUTE78.toField = "url";
Transform25.children[12] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "UrlSelector";
ROUTE79.fromField = "right_changed";
ROUTE79.toNode = "rightShader";
ROUTE79.toField = "url";
Transform25.children[13] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "UrlSelector";
ROUTE80.fromField = "top_changed";
ROUTE80.toNode = "topShader";
ROUTE80.toField = "url";
Transform25.children[14] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromNode = "UrlSelector";
ROUTE81.fromField = "bottom_changed";
ROUTE81.toNode = "bottomShader";
ROUTE81.toField = "url";
Transform25.children[15] = ROUTE81;

children[2] = Transform25;

}
