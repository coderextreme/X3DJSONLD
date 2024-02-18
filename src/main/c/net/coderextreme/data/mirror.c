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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

//<component name='Shape' level='4'></component>
meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "mirror.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "manual";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "sphere with alternating backgrounds";
head1.meta[12] = meta14;

head = head1;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.position = new SFVec3f(new float[0,5,100]);
Viewpoint16.description = "Switch background and images texture";
children = new MFNode();

children[0] = Viewpoint16;

TextureBackground TextureBackground17 = createNode("TextureBackground");
ImageTexture ImageTexture18 = createNode("ImageTexture");
ImageTexture18.DEF = "leftBackgroundTexture";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground17.topTexture = ImageTexture18;

ImageTexture ImageTexture19 = createNode("ImageTexture");
ImageTexture19.DEF = "rightBackgroundTexture";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground17.topTexture = ImageTexture19;

ImageTexture ImageTexture20 = createNode("ImageTexture");
ImageTexture20.DEF = "frontBackgroundTexture";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground17.topTexture = ImageTexture20;

ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.DEF = "backBackgroundTexture";
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground17.topTexture = ImageTexture21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.DEF = "topBackgroundTexture";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground17.topTexture = ImageTexture22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.DEF = "bottomBackgroundTexture";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground17.topTexture = ImageTexture23;

children[1] = TextureBackground17;

Transform Transform24 = createNode("Transform");
Shape Shape25 = createNode("Shape");
Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material27.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance26.material = Material27;

ComposedCubeMapTexture ComposedCubeMapTexture28 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.DEF = "backShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture28.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.DEF = "bottomShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture28.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.DEF = "frontShader";
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture28.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.DEF = "leftShader";
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture28.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.DEF = "rightShader";
ImageTexture33.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture28.topTexture = ImageTexture33;

ImageTexture ImageTexture34 = createNode("ImageTexture");
ImageTexture34.DEF = "topShader";
ImageTexture34.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture28.topTexture = ImageTexture34;

Appearance26.texture = ComposedCubeMapTexture28;

ComposedShader ComposedShader35 = createNode("ComposedShader");
ComposedShader35.DEF = "x3dom";
ComposedShader35.language = "GLSL";
field field36 = createNode("field");
field36.name = "chromaticDispertion";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0.98 1 1.033";
ComposedShader35.field = new MFNode();

ComposedShader35.field[0] = field36;

field field37 = createNode("field");
field37.name = "cube";
field37.accessType = "inputOutput";
field37.type = "SFInt32";
field37.value = "0";
ComposedShader35.field[1] = field37;

field field38 = createNode("field");
field38.name = "bias";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader35.field[2] = field38;

field field39 = createNode("field");
field39.name = "scale";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader35.field[3] = field39;

field field40 = createNode("field");
field40.name = "power";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.value = "2";
ComposedShader35.field[4] = field40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart41.type = "VERTEX";
ComposedShader35.parts[5] = ShaderPart41;

ShaderPart ShaderPart42 = createNode("ShaderPart");
ShaderPart42.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart42.type = "FRAGMENT";
ComposedShader35.parts[6] = ShaderPart42;

Appearance26.shaders = new MFNode();

Appearance26.shaders[0] = ComposedShader35;

ComposedShader ComposedShader43 = createNode("ComposedShader");
ComposedShader43.DEF = "x_ite";
ComposedShader43.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field field44 = createNode("field");
field44.name = "chromaticDispertion";
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.value = "0.98 1 1.033";
ComposedShader43.field = new MFNode();

ComposedShader43.field[0] = field44;

field field45 = createNode("field");
field45.name = "cube";
field45.accessType = "inputOutput";
field45.type = "SFInt32";
field45.value = "0";
ComposedShader43.field[1] = field45;

field field46 = createNode("field");
field46.name = "bias";
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.value = "0.5";
ComposedShader43.field[2] = field46;

field field47 = createNode("field");
field47.name = "scale";
field47.accessType = "inputOutput";
field47.type = "SFFloat";
field47.value = "0.5";
ComposedShader43.field[3] = field47;

field field48 = createNode("field");
field48.name = "power";
field48.accessType = "inputOutput";
field48.type = "SFFloat";
field48.value = "2";
ComposedShader43.field[4] = field48;

ShaderPart ShaderPart49 = createNode("ShaderPart");
ShaderPart49.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart49.type = "VERTEX";
ComposedShader43.parts[5] = ShaderPart49;

ShaderPart ShaderPart50 = createNode("ShaderPart");
ShaderPart50.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart50.type = "FRAGMENT";
ComposedShader43.parts[6] = ShaderPart50;

Appearance26.shaders[1] = ComposedShader43;

Shape25.appearance = Appearance26;

Sphere Sphere51 = createNode("Sphere");
Sphere51.radius = 30;
Shape25.geometry = Sphere51;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Script Script52 = createNode("Script");
Script52.DEF = "UrlSelector";
Script52.directOutput = True;
field field53 = createNode("field");
field53.name = "frontUrls";
field53.type = "MFString";
field53.accessType = "initializeOnly";
field53.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script52.field = new MFNode();

Script52.field[0] = field53;

field field54 = createNode("field");
field54.name = "backUrls";
field54.type = "MFString";
field54.accessType = "initializeOnly";
field54.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script52.field[1] = field54;

field field55 = createNode("field");
field55.name = "leftUrls";
field55.type = "MFString";
field55.accessType = "initializeOnly";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script52.field[2] = field55;

field field56 = createNode("field");
field56.name = "rightUrls";
field56.type = "MFString";
field56.accessType = "initializeOnly";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script52.field[3] = field56;

field field57 = createNode("field");
field57.name = "topUrls";
field57.type = "MFString";
field57.accessType = "initializeOnly";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script52.field[4] = field57;

field field58 = createNode("field");
field58.name = "bottomUrls";
field58.type = "MFString";
field58.accessType = "initializeOnly";
field58.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script52.field[5] = field58;

field field59 = createNode("field");
field59.name = "front_changed";
field59.type = "MFString";
field59.accessType = "outputOnly";
Script52.field[6] = field59;

field field60 = createNode("field");
field60.name = "back_changed";
field60.type = "MFString";
field60.accessType = "outputOnly";
Script52.field[7] = field60;

field field61 = createNode("field");
field61.name = "left_changed";
field61.type = "MFString";
field61.accessType = "outputOnly";
Script52.field[8] = field61;

field field62 = createNode("field");
field62.name = "right_changed";
field62.type = "MFString";
field62.accessType = "outputOnly";
Script52.field[9] = field62;

field field63 = createNode("field");
field63.name = "top_changed";
field63.type = "MFString";
field63.accessType = "outputOnly";
Script52.field[10] = field63;

field field64 = createNode("field");
field64.name = "bottom_changed";
field64.type = "MFString";
field64.accessType = "outputOnly";
Script52.field[11] = field64;

field field65 = createNode("field");
field65.name = "set_fraction";
field65.type = "SFFloat";
field65.accessType = "inputOnly";
Script52.field[12] = field65;

field field66 = createNode("field");
field66.name = "old";
field66.type = "SFInt32";
field66.accessType = "inputOutput";
field66.value = "-1";
Script52.field[13] = field66;


Script52.setSourceCode(`ecmascript:\n"+
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
Transform24.children[1] = Script52;

TimeSensor TimeSensor67 = createNode("TimeSensor");
TimeSensor67.DEF = "Clock";
TimeSensor67.cycleInterval = 45;
TimeSensor67.loop = True;
Transform24.children[2] = TimeSensor67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "Clock";
ROUTE68.fromField = "fraction_changed";
ROUTE68.toNode = "UrlSelector";
ROUTE68.toField = "set_fraction";
Transform24.children[3] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "front_changed";
ROUTE69.toNode = "frontBackgroundTexture";
ROUTE69.toField = "url";
Transform24.children[4] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "back_changed";
ROUTE70.toNode = "backBackgroundTexture";
ROUTE70.toField = "url";
Transform24.children[5] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "left_changed";
ROUTE71.toNode = "leftBackgroundTexture";
ROUTE71.toField = "url";
Transform24.children[6] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "right_changed";
ROUTE72.toNode = "rightBackgroundTexture";
ROUTE72.toField = "url";
Transform24.children[7] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "top_changed";
ROUTE73.toNode = "topBackgroundTexture";
ROUTE73.toField = "url";
Transform24.children[8] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "bottom_changed";
ROUTE74.toNode = "bottomBackgroundTexture";
ROUTE74.toField = "url";
Transform24.children[9] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "front_changed";
ROUTE75.toNode = "frontShader";
ROUTE75.toField = "url";
Transform24.children[10] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "UrlSelector";
ROUTE76.fromField = "back_changed";
ROUTE76.toNode = "backShader";
ROUTE76.toField = "url";
Transform24.children[11] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "UrlSelector";
ROUTE77.fromField = "left_changed";
ROUTE77.toNode = "leftShader";
ROUTE77.toField = "url";
Transform24.children[12] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "UrlSelector";
ROUTE78.fromField = "right_changed";
ROUTE78.toNode = "rightShader";
ROUTE78.toField = "url";
Transform24.children[13] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "UrlSelector";
ROUTE79.fromField = "top_changed";
ROUTE79.toNode = "topShader";
ROUTE79.toField = "url";
Transform24.children[14] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "UrlSelector";
ROUTE80.fromField = "bottom_changed";
ROUTE80.toNode = "bottomShader";
ROUTE80.toField = "url";
Transform24.children[15] = ROUTE80;

children[2] = Transform24;

}
