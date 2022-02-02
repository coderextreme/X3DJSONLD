#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Shape";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Grouping";
component8.level = 1;
head1.component[6] = component8;

meta meta9 = createNode("meta");
meta9.name = "title";
meta9.content = "mirror.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "creator";
meta10.content = "John Carlson";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "manual";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://coderextreme.net/X3DJSONLD/mirror.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "description";
meta13.content = "sphere with alternating backgrounds";
head1.meta[11] = meta13;

head = head1;

Viewpoint Viewpoint15 = createNode("Viewpoint");
Viewpoint15.position = new SFVec3f(new float[0,5,100]);
Viewpoint15.description = "Switch background and images texture";
children = new MFNode();

children[0] = Viewpoint15;

TextureBackground TextureBackground16 = createNode("TextureBackground");
ImageTexture ImageTexture17 = createNode("ImageTexture");
ImageTexture17.DEF = "leftBackgroundTexture";
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground16.topTexture = ImageTexture17;

ImageTexture ImageTexture18 = createNode("ImageTexture");
ImageTexture18.DEF = "rightBackgroundTexture";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground16.topTexture = ImageTexture18;

ImageTexture ImageTexture19 = createNode("ImageTexture");
ImageTexture19.DEF = "frontBackgroundTexture";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground16.topTexture = ImageTexture19;

ImageTexture ImageTexture20 = createNode("ImageTexture");
ImageTexture20.DEF = "backBackgroundTexture";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground16.topTexture = ImageTexture20;

ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.DEF = "topBackgroundTexture";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground16.topTexture = ImageTexture21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.DEF = "bottomBackgroundTexture";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground16.topTexture = ImageTexture22;

children[1] = TextureBackground16;

Transform Transform23 = createNode("Transform");
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material26.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance25.material = Material26;

ComposedCubeMapTexture ComposedCubeMapTexture27 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.DEF = "backShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.DEF = "bottomShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.DEF = "frontShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.DEF = "leftShader";
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.DEF = "rightShader";
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.DEF = "topShader";
ImageTexture33.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

Appearance25.texture = ComposedCubeMapTexture27;

ComposedShader ComposedShader34 = createNode("ComposedShader");
ComposedShader34.DEF = "x3dom";
ComposedShader34.language = "GLSL";
field field35 = createNode("field");
field35.name = "chromaticDispertion";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0.98 1 1.033";
ComposedShader34.field = new MFNode();

ComposedShader34.field[0] = field35;

field field36 = createNode("field");
field36.name = "cube";
field36.accessType = "inputOutput";
field36.type = "SFInt32";
field36.value = "0";
ComposedShader34.field[1] = field36;

field field37 = createNode("field");
field37.name = "bias";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader34.field[2] = field37;

field field38 = createNode("field");
field38.name = "scale";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader34.field[3] = field38;

field field39 = createNode("field");
field39.name = "power";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "2";
ComposedShader34.field[4] = field39;

ShaderPart ShaderPart40 = createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader34.parts[5] = ShaderPart40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader34.parts[6] = ShaderPart41;

Appearance25.shaders = new MFNode();

Appearance25.shaders[0] = ComposedShader34;

ComposedShader ComposedShader42 = createNode("ComposedShader");
ComposedShader42.DEF = "x_ite";
ComposedShader42.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field field43 = createNode("field");
field43.name = "chromaticDispertion";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "0.98 1 1.033";
ComposedShader42.field = new MFNode();

ComposedShader42.field[0] = field43;

field field44 = createNode("field");
field44.name = "cube";
field44.accessType = "inputOutput";
field44.type = "SFInt32";
field44.value = "0";
ComposedShader42.field[1] = field44;

field field45 = createNode("field");
field45.name = "bias";
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.value = "0.5";
ComposedShader42.field[2] = field45;

field field46 = createNode("field");
field46.name = "scale";
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.value = "0.5";
ComposedShader42.field[3] = field46;

field field47 = createNode("field");
field47.name = "power";
field47.accessType = "inputOutput";
field47.type = "SFFloat";
field47.value = "2";
ComposedShader42.field[4] = field47;

ShaderPart ShaderPart48 = createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart48.type = "VERTEX";
ComposedShader42.parts[5] = ShaderPart48;

ShaderPart ShaderPart49 = createNode("ShaderPart");
ShaderPart49.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart49.type = "FRAGMENT";
ComposedShader42.parts[6] = ShaderPart49;

Appearance25.shaders[1] = ComposedShader42;

Shape24.appearance = Appearance25;

Sphere Sphere50 = createNode("Sphere");
Sphere50.radius = 30;
Shape24.geometry = Sphere50;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Script Script51 = createNode("Script");
Script51.DEF = "UrlSelector";
Script51.directOutput = True;
field field52 = createNode("field");
field52.name = "frontUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script51.field = new MFNode();

Script51.field[0] = field52;

field field53 = createNode("field");
field53.name = "backUrls";
field53.type = "MFString";
field53.accessType = "initializeOnly";
field53.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script51.field[1] = field53;

field field54 = createNode("field");
field54.name = "leftUrls";
field54.type = "MFString";
field54.accessType = "initializeOnly";
field54.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script51.field[2] = field54;

field field55 = createNode("field");
field55.name = "rightUrls";
field55.type = "MFString";
field55.accessType = "initializeOnly";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script51.field[3] = field55;

field field56 = createNode("field");
field56.name = "topUrls";
field56.type = "MFString";
field56.accessType = "initializeOnly";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script51.field[4] = field56;

field field57 = createNode("field");
field57.name = "bottomUrls";
field57.type = "MFString";
field57.accessType = "initializeOnly";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script51.field[5] = field57;

field field58 = createNode("field");
field58.name = "front_changed";
field58.type = "MFString";
field58.accessType = "outputOnly";
Script51.field[6] = field58;

field field59 = createNode("field");
field59.name = "back_changed";
field59.type = "MFString";
field59.accessType = "outputOnly";
Script51.field[7] = field59;

field field60 = createNode("field");
field60.name = "left_changed";
field60.type = "MFString";
field60.accessType = "outputOnly";
Script51.field[8] = field60;

field field61 = createNode("field");
field61.name = "right_changed";
field61.type = "MFString";
field61.accessType = "outputOnly";
Script51.field[9] = field61;

field field62 = createNode("field");
field62.name = "top_changed";
field62.type = "MFString";
field62.accessType = "outputOnly";
Script51.field[10] = field62;

field field63 = createNode("field");
field63.name = "bottom_changed";
field63.type = "MFString";
field63.accessType = "outputOnly";
Script51.field[11] = field63;

field field64 = createNode("field");
field64.name = "set_fraction";
field64.type = "SFFloat";
field64.accessType = "inputOnly";
Script51.field[12] = field64;

field field65 = createNode("field");
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

TimeSensor TimeSensor66 = createNode("TimeSensor");
TimeSensor66.DEF = "Clock";
TimeSensor66.cycleInterval = 45;
TimeSensor66.loop = True;
Transform23.children[2] = TimeSensor66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "Clock";
ROUTE67.fromField = "fraction_changed";
ROUTE67.toNode = "UrlSelector";
ROUTE67.toField = "set_fraction";
Transform23.children[3] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "front_changed";
ROUTE68.toNode = "frontBackgroundTexture";
ROUTE68.toField = "url";
Transform23.children[4] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "back_changed";
ROUTE69.toNode = "backBackgroundTexture";
ROUTE69.toField = "url";
Transform23.children[5] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "left_changed";
ROUTE70.toNode = "leftBackgroundTexture";
ROUTE70.toField = "url";
Transform23.children[6] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "right_changed";
ROUTE71.toNode = "rightBackgroundTexture";
ROUTE71.toField = "url";
Transform23.children[7] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "top_changed";
ROUTE72.toNode = "topBackgroundTexture";
ROUTE72.toField = "url";
Transform23.children[8] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "bottom_changed";
ROUTE73.toNode = "bottomBackgroundTexture";
ROUTE73.toField = "url";
Transform23.children[9] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "front_changed";
ROUTE74.toNode = "frontShader";
ROUTE74.toField = "url";
Transform23.children[10] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "back_changed";
ROUTE75.toNode = "backShader";
ROUTE75.toField = "url";
Transform23.children[11] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "UrlSelector";
ROUTE76.fromField = "left_changed";
ROUTE76.toNode = "leftShader";
ROUTE76.toField = "url";
Transform23.children[12] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "UrlSelector";
ROUTE77.fromField = "right_changed";
ROUTE77.toNode = "rightShader";
ROUTE77.toField = "url";
Transform23.children[13] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "UrlSelector";
ROUTE78.fromField = "top_changed";
ROUTE78.toNode = "topShader";
ROUTE78.toField = "url";
Transform23.children[14] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "UrlSelector";
ROUTE79.fromField = "bottom_changed";
ROUTE79.toNode = "bottomShader";
ROUTE79.toField = "url";
Transform23.children[15] = ROUTE79;

children[2] = Transform23;

}
