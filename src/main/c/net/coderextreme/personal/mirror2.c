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
meta10.content = "mirror2.x3d";
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
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/mirror2.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "a mirrored sphere";
head1.meta[12] = meta14;

head = head1;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.position = new SFVec3f(new float[0,5,100]);
Viewpoint16.description = "Switch background and images texture";
children = new MFNode();

children[0] = Viewpoint16;

Background Background17 = createNode("Background");
Background17.DEF = "cube";
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
children[1] = Background17;

Transform Transform18 = createNode("Transform");
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material21.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance20.material = Material21;

ComposedCubeMapTexture ComposedCubeMapTexture22 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.DEF = "backShader";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture23;

ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.DEF = "bottomShader";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.DEF = "frontShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.DEF = "leftShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.DEF = "rightShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.DEF = "topShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture28;

Appearance20.texture = ComposedCubeMapTexture22;

ComposedShader ComposedShader29 = createNode("ComposedShader");
ComposedShader29.DEF = "x_ite";
ComposedShader29.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field field30 = createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader29.field = new MFNode();

ComposedShader29.field[0] = field30;

field field31 = createNode("field");
field31.name = "cube";
field31.accessType = "inputOutput";
field31.type = "SFInt32";
field31.value = "0";
ComposedShader29.field[1] = field31;

field field32 = createNode("field");
field32.name = "bias";
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.value = "0.5";
ComposedShader29.field[2] = field32;

field field33 = createNode("field");
field33.name = "scale";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "0.5";
ComposedShader29.field[3] = field33;

field field34 = createNode("field");
field34.name = "power";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "2";
ComposedShader29.field[4] = field34;

ShaderPart ShaderPart35 = createNode("ShaderPart");
ShaderPart35.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart35.type = "VERTEX";
ComposedShader29.parts[5] = ShaderPart35;

ShaderPart ShaderPart36 = createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]);
ShaderPart36.type = "FRAGMENT";
ComposedShader29.parts[6] = ShaderPart36;

Appearance20.shaders = new MFNode();

Appearance20.shaders[0] = ComposedShader29;

ComposedShader ComposedShader37 = createNode("ComposedShader");
ComposedShader37.DEF = "x3dom";
ComposedShader37.language = "GLSL";
field field38 = createNode("field");
field38.name = "chromaticDispertion";
field38.accessType = "inputOutput";
field38.type = "SFVec3f";
field38.value = "0.98 1 1.033";
ComposedShader37.field = new MFNode();

ComposedShader37.field[0] = field38;

field field39 = createNode("field");
field39.name = "cube";
field39.accessType = "inputOutput";
field39.type = "SFInt32";
field39.value = "0";
ComposedShader37.field[1] = field39;

field field40 = createNode("field");
field40.name = "bias";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.value = "0.5";
ComposedShader37.field[2] = field40;

field field41 = createNode("field");
field41.name = "scale";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.value = "0.5";
ComposedShader37.field[3] = field41;

field field42 = createNode("field");
field42.name = "power";
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.value = "2";
ComposedShader37.field[4] = field42;

ShaderPart ShaderPart43 = createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart43.type = "VERTEX";
ComposedShader37.parts[5] = ShaderPart43;

ShaderPart ShaderPart44 = createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart44.type = "FRAGMENT";
ComposedShader37.parts[6] = ShaderPart44;

Appearance20.shaders[1] = ComposedShader37;

Shape19.appearance = Appearance20;

Sphere Sphere45 = createNode("Sphere");
Sphere45.radius = 30;
Shape19.geometry = Sphere45;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Script Script46 = createNode("Script");
Script46.DEF = "UrlSelector";
Script46.directOutput = True;
field field47 = createNode("field");
field47.name = "frontUrls";
field47.type = "MFString";
field47.accessType = "initializeOnly";
field47.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script46.field = new MFNode();

Script46.field[0] = field47;

field field48 = createNode("field");
field48.name = "backUrls";
field48.type = "MFString";
field48.accessType = "initializeOnly";
field48.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script46.field[1] = field48;

field field49 = createNode("field");
field49.name = "leftUrls";
field49.type = "MFString";
field49.accessType = "initializeOnly";
field49.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script46.field[2] = field49;

field field50 = createNode("field");
field50.name = "rightUrls";
field50.type = "MFString";
field50.accessType = "initializeOnly";
field50.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script46.field[3] = field50;

field field51 = createNode("field");
field51.name = "topUrls";
field51.type = "MFString";
field51.accessType = "initializeOnly";
field51.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script46.field[4] = field51;

field field52 = createNode("field");
field52.name = "bottomUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script46.field[5] = field52;

field field53 = createNode("field");
field53.name = "front_changed";
field53.type = "MFString";
field53.accessType = "outputOnly";
Script46.field[6] = field53;

field field54 = createNode("field");
field54.name = "back_changed";
field54.type = "MFString";
field54.accessType = "outputOnly";
Script46.field[7] = field54;

field field55 = createNode("field");
field55.name = "left_changed";
field55.type = "MFString";
field55.accessType = "outputOnly";
Script46.field[8] = field55;

field field56 = createNode("field");
field56.name = "right_changed";
field56.type = "MFString";
field56.accessType = "outputOnly";
Script46.field[9] = field56;

field field57 = createNode("field");
field57.name = "top_changed";
field57.type = "MFString";
field57.accessType = "outputOnly";
Script46.field[10] = field57;

field field58 = createNode("field");
field58.name = "bottom_changed";
field58.type = "MFString";
field58.accessType = "outputOnly";
Script46.field[11] = field58;

field field59 = createNode("field");
field59.name = "set_fraction";
field59.type = "SFFloat";
field59.accessType = "inputOnly";
Script46.field[12] = field59;

field field60 = createNode("field");
field60.name = "old";
field60.type = "SFInt32";
field60.accessType = "inputOutput";
field60.value = "-1";
Script46.field[13] = field60;


Script46.setSourceCode(`ecmascript:\n"+
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
Transform18.children[1] = Script46;

TimeSensor TimeSensor61 = createNode("TimeSensor");
TimeSensor61.DEF = "Clock";
TimeSensor61.cycleInterval = 45;
TimeSensor61.loop = True;
Transform18.children[2] = TimeSensor61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Clock";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "UrlSelector";
ROUTE62.toField = "set_fraction";
Transform18.children[3] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "UrlSelector";
ROUTE63.fromField = "front_changed";
ROUTE63.toNode = "cube";
ROUTE63.toField = "frontUrl";
Transform18.children[4] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "UrlSelector";
ROUTE64.fromField = "back_changed";
ROUTE64.toNode = "cube";
ROUTE64.toField = "backUrl";
Transform18.children[5] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "UrlSelector";
ROUTE65.fromField = "left_changed";
ROUTE65.toNode = "cube";
ROUTE65.toField = "leftUrl";
Transform18.children[6] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "UrlSelector";
ROUTE66.fromField = "right_changed";
ROUTE66.toNode = "cube";
ROUTE66.toField = "rightUrl";
Transform18.children[7] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "UrlSelector";
ROUTE67.fromField = "top_changed";
ROUTE67.toNode = "cube";
ROUTE67.toField = "topUrl";
Transform18.children[8] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "bottom_changed";
ROUTE68.toNode = "cube";
ROUTE68.toField = "bottomUrl";
Transform18.children[9] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "front_changed";
ROUTE69.toNode = "frontShader";
ROUTE69.toField = "url";
Transform18.children[10] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "back_changed";
ROUTE70.toNode = "backShader";
ROUTE70.toField = "url";
Transform18.children[11] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "left_changed";
ROUTE71.toNode = "leftShader";
ROUTE71.toField = "url";
Transform18.children[12] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "right_changed";
ROUTE72.toNode = "rightShader";
ROUTE72.toField = "url";
Transform18.children[13] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "top_changed";
ROUTE73.toNode = "topShader";
ROUTE73.toField = "url";
Transform18.children[14] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "bottom_changed";
ROUTE74.toNode = "bottomShader";
ROUTE74.toField = "url";
Transform18.children[15] = ROUTE74;

children[2] = Transform18;

}
