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
meta11.content = "flowers7.x3d";
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
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "description";
meta15.content = "a flower";
head1.meta[13] = meta15;

head = head1;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo17;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background18 = createNode("Background");
Background18.DEF = "background";
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
children[1] = Background18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.position = new SFVec3f(new float[0,0,40]);
Viewpoint19.description = "Transparent rose";
children[2] = Viewpoint19;

Transform Transform20 = createNode("Transform");
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

ComposedCubeMapTexture ComposedCubeMapTexture24 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.DEF = "backShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.DEF = "bottomShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.DEF = "frontShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.DEF = "leftShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.DEF = "rightShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.DEF = "topShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

ComposedShader ComposedShader31 = createNode("ComposedShader");
ComposedShader31.DEF = "x3dom";
ComposedShader31.language = "GLSL";
field field32 = createNode("field");
field32.name = "cube";
field32.type = "SFInt32";
field32.accessType = "inputOutput";
field32.value = "0";
ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

field field33 = createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader31.field[1] = field33;

field field34 = createNode("field");
field34.name = "bias";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "0.5";
ComposedShader31.field[2] = field34;

field field35 = createNode("field");
field35.name = "scale";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "0.5";
ComposedShader31.field[3] = field35;

field field36 = createNode("field");
field36.name = "power";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "2";
ComposedShader31.field[4] = field36;

field field37 = createNode("field");
field37.name = "a";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "10";
ComposedShader31.field[5] = field37;

field field38 = createNode("field");
field38.name = "b";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "1";
ComposedShader31.field[6] = field38;

field field39 = createNode("field");
field39.name = "c";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "20";
ComposedShader31.field[7] = field39;

field field40 = createNode("field");
field40.name = "d";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "20";
ComposedShader31.field[8] = field40;

field field41 = createNode("field");
field41.name = "tdelta";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "0";
ComposedShader31.field[9] = field41;

field field42 = createNode("field");
field42.name = "pdelta";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "0";
ComposedShader31.field[10] = field42;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart ShaderPart43 = createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart43.type = "VERTEX";
ComposedShader31.parts[11] = ShaderPart43;

ShaderPart ShaderPart44 = createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart44.type = "FRAGMENT";
ComposedShader31.parts[12] = ShaderPart44;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

ComposedShader ComposedShader45 = createNode("ComposedShader");
ComposedShader45.DEF = "x_ite";
ComposedShader45.language = "GLSL";
field field46 = createNode("field");
field46.name = "cube";
field46.type = "SFNode";
field46.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture47 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture47.USE = "texture";
field46.children = new MFNode();

field46.children[0] = ComposedCubeMapTexture47;

ComposedShader45.field = new MFNode();

ComposedShader45.field[0] = field46;

field field48 = createNode("field");
field48.name = "chromaticDispertion";
field48.accessType = "initializeOnly";
field48.type = "SFVec3f";
field48.value = "0.98 1 1.033";
ComposedShader45.field[1] = field48;

field field49 = createNode("field");
field49.name = "bias";
field49.type = "SFFloat";
field49.accessType = "inputOnly";
field49.value = "0.5";
ComposedShader45.field[2] = field49;

field field50 = createNode("field");
field50.name = "scale";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "0.5";
ComposedShader45.field[3] = field50;

field field51 = createNode("field");
field51.name = "power";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "2";
ComposedShader45.field[4] = field51;

field field52 = createNode("field");
field52.name = "a";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "10";
ComposedShader45.field[5] = field52;

field field53 = createNode("field");
field53.name = "b";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "1";
ComposedShader45.field[6] = field53;

field field54 = createNode("field");
field54.name = "c";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "20";
ComposedShader45.field[7] = field54;

field field55 = createNode("field");
field55.name = "d";
field55.type = "SFFloat";
field55.accessType = "inputOnly";
field55.value = "20";
ComposedShader45.field[8] = field55;

field field56 = createNode("field");
field56.name = "tdelta";
field56.type = "SFFloat";
field56.accessType = "inputOnly";
field56.value = "0";
ComposedShader45.field[9] = field56;

field field57 = createNode("field");
field57.name = "pdelta";
field57.type = "SFFloat";
field57.accessType = "inputOnly";
field57.value = "0";
ComposedShader45.field[10] = field57;

ShaderPart ShaderPart58 = createNode("ShaderPart");
ShaderPart58.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart58.type = "VERTEX";
ComposedShader45.parts[11] = ShaderPart58;

ShaderPart ShaderPart59 = createNode("ShaderPart");
ShaderPart59.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart59.type = "FRAGMENT";
ComposedShader45.parts[12] = ShaderPart59;

Appearance22.shaders[1] = ComposedShader45;

Shape21.appearance = Appearance22;

Sphere Sphere60 = createNode("Sphere");
Shape21.geometry = Sphere60;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

children[3] = Transform20;

Script Script61 = createNode("Script");
Script61.DEF = "UrlSelector";
Script61.directOutput = True;
field field62 = createNode("field");
field62.name = "frontUrls";
field62.type = "MFString";
field62.accessType = "initializeOnly";
field62.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script61.field = new MFNode();

Script61.field[0] = field62;

field field63 = createNode("field");
field63.name = "backUrls";
field63.type = "MFString";
field63.accessType = "initializeOnly";
field63.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script61.field[1] = field63;

field field64 = createNode("field");
field64.name = "leftUrls";
field64.type = "MFString";
field64.accessType = "initializeOnly";
field64.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script61.field[2] = field64;

field field65 = createNode("field");
field65.name = "rightUrls";
field65.type = "MFString";
field65.accessType = "initializeOnly";
field65.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script61.field[3] = field65;

field field66 = createNode("field");
field66.name = "topUrls";
field66.type = "MFString";
field66.accessType = "initializeOnly";
field66.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script61.field[4] = field66;

field field67 = createNode("field");
field67.name = "bottomUrls";
field67.type = "MFString";
field67.accessType = "initializeOnly";
field67.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script61.field[5] = field67;

field field68 = createNode("field");
field68.name = "front";
field68.type = "MFString";
field68.accessType = "inputOutput";
Script61.field[6] = field68;

field field69 = createNode("field");
field69.name = "back";
field69.type = "MFString";
field69.accessType = "inputOutput";
Script61.field[7] = field69;

field field70 = createNode("field");
field70.name = "left";
field70.type = "MFString";
field70.accessType = "inputOutput";
Script61.field[8] = field70;

field field71 = createNode("field");
field71.name = "right";
field71.type = "MFString";
field71.accessType = "inputOutput";
Script61.field[9] = field71;

field field72 = createNode("field");
field72.name = "top";
field72.type = "MFString";
field72.accessType = "inputOutput";
Script61.field[10] = field72;

field field73 = createNode("field");
field73.name = "bottom";
field73.type = "MFString";
field73.accessType = "inputOutput";
Script61.field[11] = field73;

field field74 = createNode("field");
field74.name = "set_fraction";
field74.type = "SFFloat";
field74.accessType = "inputOnly";
Script61.field[12] = field74;

field field75 = createNode("field");
field75.name = "old";
field75.type = "SFInt32";
field75.accessType = "inputOutput";
field75.value = "-1";
Script61.field[13] = field75;


Script61.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
children[4] = Script61;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script Script76 = createNode("Script");
Script76.DEF = "Animate";
Script76.directOutput = True;
field field77 = createNode("field");
field77.name = "set_fraction";
field77.type = "SFFloat";
field77.accessType = "inputOnly";
Script76.field = new MFNode();

Script76.field[0] = field77;

field field78 = createNode("field");
field78.name = "a";
field78.type = "SFFloat";
field78.accessType = "inputOutput";
field78.value = "10";
Script76.field[1] = field78;

field field79 = createNode("field");
field79.name = "b";
field79.type = "SFFloat";
field79.accessType = "inputOutput";
field79.value = "1";
Script76.field[2] = field79;

field field80 = createNode("field");
field80.name = "c";
field80.type = "SFFloat";
field80.accessType = "inputOutput";
field80.value = "20";
Script76.field[3] = field80;

field field81 = createNode("field");
field81.name = "d";
field81.type = "SFFloat";
field81.accessType = "inputOutput";
field81.value = "20";
Script76.field[4] = field81;

field field82 = createNode("field");
field82.name = "tdelta";
field82.type = "SFFloat";
field82.accessType = "inputOutput";
field82.value = "0";
Script76.field[5] = field82;

field field83 = createNode("field");
field83.name = "pdelta";
field83.type = "SFFloat";
field83.accessType = "inputOutput";
field83.value = "0";
Script76.field[6] = field83;


Script76.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}`)
children[5] = Script76;

TimeSensor TimeSensor84 = createNode("TimeSensor");
TimeSensor84.DEF = "TourTime";
TimeSensor84.cycleInterval = 5;
TimeSensor84.loop = True;
children[6] = TimeSensor84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "TourTime";
ROUTE85.fromField = "fraction_changed";
ROUTE85.toNode = "Animate";
ROUTE85.toField = "set_fraction";
children[7] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "Animate";
ROUTE86.fromField = "a";
ROUTE86.toNode = "x_ite";
ROUTE86.toField = "a";
children[8] = ROUTE86;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "Animate";
ROUTE87.fromField = "b";
ROUTE87.toNode = "x_ite";
ROUTE87.toField = "b";
children[9] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "Animate";
ROUTE88.fromField = "c";
ROUTE88.toNode = "x_ite";
ROUTE88.toField = "c";
children[10] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "Animate";
ROUTE89.fromField = "d";
ROUTE89.toNode = "x_ite";
ROUTE89.toField = "d";
children[11] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "Animate";
ROUTE90.fromField = "pdelta";
ROUTE90.toNode = "x_ite";
ROUTE90.toField = "pdelta";
children[12] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "Animate";
ROUTE91.fromField = "tdelta";
ROUTE91.toNode = "x_ite";
ROUTE91.toField = "tdelta";
children[13] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "Animate";
ROUTE92.fromField = "a";
ROUTE92.toNode = "x3dom";
ROUTE92.toField = "a";
children[14] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "Animate";
ROUTE93.fromField = "b";
ROUTE93.toNode = "x3dom";
ROUTE93.toField = "b";
children[15] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "Animate";
ROUTE94.fromField = "c";
ROUTE94.toNode = "x3dom";
ROUTE94.toField = "c";
children[16] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "Animate";
ROUTE95.fromField = "d";
ROUTE95.toNode = "x3dom";
ROUTE95.toField = "d";
children[17] = ROUTE95;

ROUTE ROUTE96 = createNode("ROUTE");
ROUTE96.fromNode = "Animate";
ROUTE96.fromField = "pdelta";
ROUTE96.toNode = "x3dom";
ROUTE96.toField = "pdelta";
children[18] = ROUTE96;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromNode = "Animate";
ROUTE97.fromField = "tdelta";
ROUTE97.toNode = "x3dom";
ROUTE97.toField = "tdelta";
children[19] = ROUTE97;

}
