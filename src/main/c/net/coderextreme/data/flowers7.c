#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "CubeMapTexturing";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Shape";
component6.level = 4;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "flowers7.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "John Carlson";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "manual";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://coderextreme.net/X3DJSONLD/flowers7.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "a flower";
head1.meta[10] = meta12;

head = head1;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo14;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background15 = createNode("Background");
Background15.DEF = "background";
Background15.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
Background15.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
Background15.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
Background15.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
Background15.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
Background15.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
children[1] = Background15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.position = new SFVec3f(new float[0,0,40]);
Viewpoint16.description = "Transparent rose";
children[2] = Viewpoint16;

Transform Transform17 = createNode("Transform");
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material20.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance19.material = Material20;

ComposedCubeMapTexture ComposedCubeMapTexture21 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture21.DEF = "texture";
ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.DEF = "backShader";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.DEF = "bottomShader";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture23;

ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.DEF = "frontShader";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.DEF = "leftShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.DEF = "rightShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.DEF = "topShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture27;

Appearance19.texture = ComposedCubeMapTexture21;

ComposedShader ComposedShader28 = createNode("ComposedShader");
ComposedShader28.DEF = "x3dom";
ComposedShader28.language = "GLSL";
field field29 = createNode("field");
field29.name = "cube";
field29.type = "SFInt32";
field29.accessType = "inputOutput";
field29.value = "0";
ComposedShader28.field = new MFNode();

ComposedShader28.field[0] = field29;

field field30 = createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "initializeOnly";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader28.field[1] = field30;

field field31 = createNode("field");
field31.name = "bias";
field31.type = "SFFloat";
field31.accessType = "inputOutput";
field31.value = "0.5";
ComposedShader28.field[2] = field31;

field field32 = createNode("field");
field32.name = "scale";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "0.5";
ComposedShader28.field[3] = field32;

field field33 = createNode("field");
field33.name = "power";
field33.type = "SFFloat";
field33.accessType = "inputOutput";
field33.value = "2";
ComposedShader28.field[4] = field33;

field field34 = createNode("field");
field34.name = "a";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "10";
ComposedShader28.field[5] = field34;

field field35 = createNode("field");
field35.name = "b";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "1";
ComposedShader28.field[6] = field35;

field field36 = createNode("field");
field36.name = "c";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "20";
ComposedShader28.field[7] = field36;

field field37 = createNode("field");
field37.name = "d";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "20";
ComposedShader28.field[8] = field37;

field field38 = createNode("field");
field38.name = "tdelta";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "0";
ComposedShader28.field[9] = field38;

field field39 = createNode("field");
field39.name = "pdelta";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "0";
ComposedShader28.field[10] = field39;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart ShaderPart40 = createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader28.parts[11] = ShaderPart40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader28.parts[12] = ShaderPart41;

Appearance19.shaders = new MFNode();

Appearance19.shaders[0] = ComposedShader28;

ComposedShader ComposedShader42 = createNode("ComposedShader");
ComposedShader42.DEF = "x_ite";
ComposedShader42.language = "GLSL";
field field43 = createNode("field");
field43.name = "cube";
field43.type = "SFNode";
field43.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture44 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture44.USE = "texture";
field43.children = new MFNode();

field43.children[0] = ComposedCubeMapTexture44;

ComposedShader42.field = new MFNode();

ComposedShader42.field[0] = field43;

field field45 = createNode("field");
field45.name = "chromaticDispertion";
field45.accessType = "initializeOnly";
field45.type = "SFVec3f";
field45.value = "0.98 1 1.033";
ComposedShader42.field[1] = field45;

field field46 = createNode("field");
field46.name = "bias";
field46.type = "SFFloat";
field46.accessType = "inputOnly";
field46.value = "0.5";
ComposedShader42.field[2] = field46;

field field47 = createNode("field");
field47.name = "scale";
field47.type = "SFFloat";
field47.accessType = "inputOnly";
field47.value = "0.5";
ComposedShader42.field[3] = field47;

field field48 = createNode("field");
field48.name = "power";
field48.type = "SFFloat";
field48.accessType = "inputOnly";
field48.value = "2";
ComposedShader42.field[4] = field48;

field field49 = createNode("field");
field49.name = "a";
field49.type = "SFFloat";
field49.accessType = "inputOnly";
field49.value = "10";
ComposedShader42.field[5] = field49;

field field50 = createNode("field");
field50.name = "b";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "1";
ComposedShader42.field[6] = field50;

field field51 = createNode("field");
field51.name = "c";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "20";
ComposedShader42.field[7] = field51;

field field52 = createNode("field");
field52.name = "d";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "20";
ComposedShader42.field[8] = field52;

field field53 = createNode("field");
field53.name = "tdelta";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "0";
ComposedShader42.field[9] = field53;

field field54 = createNode("field");
field54.name = "pdelta";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "0";
ComposedShader42.field[10] = field54;

ShaderPart ShaderPart55 = createNode("ShaderPart");
ShaderPart55.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart55.type = "VERTEX";
ComposedShader42.parts[11] = ShaderPart55;

ShaderPart ShaderPart56 = createNode("ShaderPart");
ShaderPart56.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart56.type = "FRAGMENT";
ComposedShader42.parts[12] = ShaderPart56;

Appearance19.shaders[1] = ComposedShader42;

Shape18.appearance = Appearance19;

Sphere Sphere57 = createNode("Sphere");
Shape18.geometry = Sphere57;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

children[3] = Transform17;

Script Script58 = createNode("Script");
Script58.DEF = "UrlSelector";
Script58.directOutput = True;
field field59 = createNode("field");
field59.name = "frontUrls";
field59.type = "MFString";
field59.accessType = "initializeOnly";
field59.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script58.field = new MFNode();

Script58.field[0] = field59;

field field60 = createNode("field");
field60.name = "backUrls";
field60.type = "MFString";
field60.accessType = "initializeOnly";
field60.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script58.field[1] = field60;

field field61 = createNode("field");
field61.name = "leftUrls";
field61.type = "MFString";
field61.accessType = "initializeOnly";
field61.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script58.field[2] = field61;

field field62 = createNode("field");
field62.name = "rightUrls";
field62.type = "MFString";
field62.accessType = "initializeOnly";
field62.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script58.field[3] = field62;

field field63 = createNode("field");
field63.name = "topUrls";
field63.type = "MFString";
field63.accessType = "initializeOnly";
field63.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script58.field[4] = field63;

field field64 = createNode("field");
field64.name = "bottomUrls";
field64.type = "MFString";
field64.accessType = "initializeOnly";
field64.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script58.field[5] = field64;

field field65 = createNode("field");
field65.name = "front";
field65.type = "MFString";
field65.accessType = "inputOutput";
Script58.field[6] = field65;

field field66 = createNode("field");
field66.name = "back";
field66.type = "MFString";
field66.accessType = "inputOutput";
Script58.field[7] = field66;

field field67 = createNode("field");
field67.name = "left";
field67.type = "MFString";
field67.accessType = "inputOutput";
Script58.field[8] = field67;

field field68 = createNode("field");
field68.name = "right";
field68.type = "MFString";
field68.accessType = "inputOutput";
Script58.field[9] = field68;

field field69 = createNode("field");
field69.name = "top";
field69.type = "MFString";
field69.accessType = "inputOutput";
Script58.field[10] = field69;

field field70 = createNode("field");
field70.name = "bottom";
field70.type = "MFString";
field70.accessType = "inputOutput";
Script58.field[11] = field70;

field field71 = createNode("field");
field71.name = "set_fraction";
field71.type = "SFFloat";
field71.accessType = "inputOnly";
Script58.field[12] = field71;

field field72 = createNode("field");
field72.name = "old";
field72.type = "SFInt32";
field72.accessType = "inputOutput";
field72.value = "-1";
Script58.field[13] = field72;


Script58.setSourceCode(`ecmascript:\n"+
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
children[4] = Script58;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script Script73 = createNode("Script");
Script73.DEF = "Animate";
Script73.directOutput = True;
field field74 = createNode("field");
field74.name = "set_fraction";
field74.type = "SFFloat";
field74.accessType = "inputOnly";
Script73.field = new MFNode();

Script73.field[0] = field74;

field field75 = createNode("field");
field75.name = "a";
field75.type = "SFFloat";
field75.accessType = "inputOutput";
field75.value = "10";
Script73.field[1] = field75;

field field76 = createNode("field");
field76.name = "b";
field76.type = "SFFloat";
field76.accessType = "inputOutput";
field76.value = "1";
Script73.field[2] = field76;

field field77 = createNode("field");
field77.name = "c";
field77.type = "SFFloat";
field77.accessType = "inputOutput";
field77.value = "20";
Script73.field[3] = field77;

field field78 = createNode("field");
field78.name = "d";
field78.type = "SFFloat";
field78.accessType = "inputOutput";
field78.value = "20";
Script73.field[4] = field78;

field field79 = createNode("field");
field79.name = "tdelta";
field79.type = "SFFloat";
field79.accessType = "inputOutput";
field79.value = "0";
Script73.field[5] = field79;

field field80 = createNode("field");
field80.name = "pdelta";
field80.type = "SFFloat";
field80.accessType = "inputOutput";
field80.value = "0";
Script73.field[6] = field80;


Script73.setSourceCode(`ecmascript:\n"+
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
children[5] = Script73;

TimeSensor TimeSensor81 = createNode("TimeSensor");
TimeSensor81.DEF = "TourTime";
TimeSensor81.cycleInterval = 5;
TimeSensor81.loop = True;
children[6] = TimeSensor81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromNode = "TourTime";
ROUTE82.fromField = "fraction_changed";
ROUTE82.toNode = "Animate";
ROUTE82.toField = "set_fraction";
children[7] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "a";
ROUTE83.toNode = "x_ite";
ROUTE83.toField = "a";
children[8] = ROUTE83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromNode = "Animate";
ROUTE84.fromField = "b";
ROUTE84.toNode = "x_ite";
ROUTE84.toField = "b";
children[9] = ROUTE84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "Animate";
ROUTE85.fromField = "c";
ROUTE85.toNode = "x_ite";
ROUTE85.toField = "c";
children[10] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "Animate";
ROUTE86.fromField = "d";
ROUTE86.toNode = "x_ite";
ROUTE86.toField = "d";
children[11] = ROUTE86;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "Animate";
ROUTE87.fromField = "pdelta";
ROUTE87.toNode = "x_ite";
ROUTE87.toField = "pdelta";
children[12] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "Animate";
ROUTE88.fromField = "tdelta";
ROUTE88.toNode = "x_ite";
ROUTE88.toField = "tdelta";
children[13] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "Animate";
ROUTE89.fromField = "a";
ROUTE89.toNode = "x3dom";
ROUTE89.toField = "a";
children[14] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "Animate";
ROUTE90.fromField = "b";
ROUTE90.toNode = "x3dom";
ROUTE90.toField = "b";
children[15] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "Animate";
ROUTE91.fromField = "c";
ROUTE91.toNode = "x3dom";
ROUTE91.toField = "c";
children[16] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "Animate";
ROUTE92.fromField = "d";
ROUTE92.toNode = "x3dom";
ROUTE92.toField = "d";
children[17] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "Animate";
ROUTE93.fromField = "pdelta";
ROUTE93.toNode = "x3dom";
ROUTE93.toField = "pdelta";
children[18] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "Animate";
ROUTE94.fromField = "tdelta";
ROUTE94.toNode = "x3dom";
ROUTE94.toField = "tdelta";
children[19] = ROUTE94;

}
