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
meta8.content = "flowers7.x3d";
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
meta11.content = "https://coderextreme.net/X3DJSONLD/flowers7.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "a flower";
head1.meta[10] = meta12;

head = head1;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo14;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background15 = browser.currentScene.createNode("Background");
Background15.DEF = "background";
Background15.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
Background15.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
Background15.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
Background15.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
Background15.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
Background15.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
browser.currentScene.children[1] = Background15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.position = new SFVec3f(new float[0,0,40]);
Viewpoint16.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint16;

let Transform17 = browser.currentScene.createNode("Transform");
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material20.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance19.material = Material20;

let ComposedCubeMapTexture21 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture21.DEF = "texture";
let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "backShader";
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "bottomShader";
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture23;

let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.DEF = "frontShader";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "leftShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "rightShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "topShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture21.topTexture = ImageTexture27;

Appearance19.texture = ComposedCubeMapTexture21;

let ComposedShader28 = browser.currentScene.createNode("ComposedShader");
ComposedShader28.DEF = "x3dom";
ComposedShader28.language = "GLSL";
let field29 = browser.currentScene.createNode("field");
field29.name = "cube";
field29.type = "SFInt32";
field29.accessType = "inputOutput";
field29.value = "0";
ComposedShader28.field = new MFNode();

ComposedShader28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "initializeOnly";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "bias";
field31.type = "SFFloat";
field31.accessType = "inputOutput";
field31.value = "0.5";
ComposedShader28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "scale";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "0.5";
ComposedShader28.field[3] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "power";
field33.type = "SFFloat";
field33.accessType = "inputOutput";
field33.value = "2";
ComposedShader28.field[4] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "a";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "10";
ComposedShader28.field[5] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "b";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "1";
ComposedShader28.field[6] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "c";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "20";
ComposedShader28.field[7] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "d";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "20";
ComposedShader28.field[8] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "tdelta";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "0";
ComposedShader28.field[9] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "pdelta";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "0";
ComposedShader28.field[10] = field39;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader28.parts[11] = ShaderPart40;

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader28.parts[12] = ShaderPart41;

Appearance19.shaders = new MFNode();

Appearance19.shaders[0] = ComposedShader28;

let ComposedShader42 = browser.currentScene.createNode("ComposedShader");
ComposedShader42.DEF = "x_ite";
ComposedShader42.language = "GLSL";
let field43 = browser.currentScene.createNode("field");
field43.name = "cube";
field43.type = "SFNode";
field43.accessType = "inputOutput";
let ComposedCubeMapTexture44 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture44.USE = "texture";
field43.children = new MFNode();

field43.children[0] = ComposedCubeMapTexture44;

ComposedShader42.field = new MFNode();

ComposedShader42.field[0] = field43;

let field45 = browser.currentScene.createNode("field");
field45.name = "chromaticDispertion";
field45.accessType = "initializeOnly";
field45.type = "SFVec3f";
field45.value = "0.98 1 1.033";
ComposedShader42.field[1] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "bias";
field46.type = "SFFloat";
field46.accessType = "inputOnly";
field46.value = "0.5";
ComposedShader42.field[2] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "scale";
field47.type = "SFFloat";
field47.accessType = "inputOnly";
field47.value = "0.5";
ComposedShader42.field[3] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "power";
field48.type = "SFFloat";
field48.accessType = "inputOnly";
field48.value = "2";
ComposedShader42.field[4] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "a";
field49.type = "SFFloat";
field49.accessType = "inputOnly";
field49.value = "10";
ComposedShader42.field[5] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "b";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "1";
ComposedShader42.field[6] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "c";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "20";
ComposedShader42.field[7] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "d";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "20";
ComposedShader42.field[8] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "tdelta";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "0";
ComposedShader42.field[9] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "pdelta";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "0";
ComposedShader42.field[10] = field54;

let ShaderPart55 = browser.currentScene.createNode("ShaderPart");
ShaderPart55.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart55.type = "VERTEX";
ComposedShader42.parts[11] = ShaderPart55;

let ShaderPart56 = browser.currentScene.createNode("ShaderPart");
ShaderPart56.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart56.type = "FRAGMENT";
ComposedShader42.parts[12] = ShaderPart56;

Appearance19.shaders[1] = ComposedShader42;

Shape18.appearance = Appearance19;

let Sphere57 = browser.currentScene.createNode("Sphere");
Shape18.geometry = Sphere57;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

browser.currentScene.children[3] = Transform17;

let Script58 = browser.currentScene.createNode("Script");
Script58.DEF = "UrlSelector";
Script58.directOutput = True;
let field59 = browser.currentScene.createNode("field");
field59.name = "frontUrls";
field59.type = "MFString";
field59.accessType = "initializeOnly";
field59.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script58.field = new MFNode();

Script58.field[0] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "backUrls";
field60.type = "MFString";
field60.accessType = "initializeOnly";
field60.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script58.field[1] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "leftUrls";
field61.type = "MFString";
field61.accessType = "initializeOnly";
field61.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script58.field[2] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "rightUrls";
field62.type = "MFString";
field62.accessType = "initializeOnly";
field62.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script58.field[3] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "topUrls";
field63.type = "MFString";
field63.accessType = "initializeOnly";
field63.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script58.field[4] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "bottomUrls";
field64.type = "MFString";
field64.accessType = "initializeOnly";
field64.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script58.field[5] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "front";
field65.type = "MFString";
field65.accessType = "inputOutput";
Script58.field[6] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "back";
field66.type = "MFString";
field66.accessType = "inputOutput";
Script58.field[7] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "left";
field67.type = "MFString";
field67.accessType = "inputOutput";
Script58.field[8] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "right";
field68.type = "MFString";
field68.accessType = "inputOutput";
Script58.field[9] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "top";
field69.type = "MFString";
field69.accessType = "inputOutput";
Script58.field[10] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "bottom";
field70.type = "MFString";
field70.accessType = "inputOutput";
Script58.field[11] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "set_fraction";
field71.type = "SFFloat";
field71.accessType = "inputOnly";
Script58.field[12] = field71;

let field72 = browser.currentScene.createNode("field");
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
browser.currentScene.children[4] = Script58;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
let Script73 = browser.currentScene.createNode("Script");
Script73.DEF = "Animate";
Script73.directOutput = True;
let field74 = browser.currentScene.createNode("field");
field74.name = "set_fraction";
field74.type = "SFFloat";
field74.accessType = "inputOnly";
Script73.field = new MFNode();

Script73.field[0] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "a";
field75.type = "SFFloat";
field75.accessType = "inputOutput";
field75.value = "10";
Script73.field[1] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "b";
field76.type = "SFFloat";
field76.accessType = "inputOutput";
field76.value = "1";
Script73.field[2] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "c";
field77.type = "SFFloat";
field77.accessType = "inputOutput";
field77.value = "20";
Script73.field[3] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "d";
field78.type = "SFFloat";
field78.accessType = "inputOutput";
field78.value = "20";
Script73.field[4] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "tdelta";
field79.type = "SFFloat";
field79.accessType = "inputOutput";
field79.value = "0";
Script73.field[5] = field79;

let field80 = browser.currentScene.createNode("field");
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
browser.currentScene.children[5] = Script73;

let TimeSensor81 = browser.currentScene.createNode("TimeSensor");
TimeSensor81.DEF = "TourTime";
TimeSensor81.cycleInterval = 5;
TimeSensor81.loop = True;
browser.currentScene.children[6] = TimeSensor81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "TourTime";
ROUTE82.fromField = "fraction_changed";
ROUTE82.toNode = "Animate";
ROUTE82.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "a";
ROUTE83.toNode = "x_ite";
ROUTE83.toField = "a";
browser.currentScene.children[8] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "Animate";
ROUTE84.fromField = "b";
ROUTE84.toNode = "x_ite";
ROUTE84.toField = "b";
browser.currentScene.children[9] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "Animate";
ROUTE85.fromField = "c";
ROUTE85.toNode = "x_ite";
ROUTE85.toField = "c";
browser.currentScene.children[10] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "Animate";
ROUTE86.fromField = "d";
ROUTE86.toNode = "x_ite";
ROUTE86.toField = "d";
browser.currentScene.children[11] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "Animate";
ROUTE87.fromField = "pdelta";
ROUTE87.toNode = "x_ite";
ROUTE87.toField = "pdelta";
browser.currentScene.children[12] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "Animate";
ROUTE88.fromField = "tdelta";
ROUTE88.toNode = "x_ite";
ROUTE88.toField = "tdelta";
browser.currentScene.children[13] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "Animate";
ROUTE89.fromField = "a";
ROUTE89.toNode = "x3dom";
ROUTE89.toField = "a";
browser.currentScene.children[14] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "Animate";
ROUTE90.fromField = "b";
ROUTE90.toNode = "x3dom";
ROUTE90.toField = "b";
browser.currentScene.children[15] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromNode = "Animate";
ROUTE91.fromField = "c";
ROUTE91.toNode = "x3dom";
ROUTE91.toField = "c";
browser.currentScene.children[16] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromNode = "Animate";
ROUTE92.fromField = "d";
ROUTE92.toNode = "x3dom";
ROUTE92.toField = "d";
browser.currentScene.children[17] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromNode = "Animate";
ROUTE93.fromField = "pdelta";
ROUTE93.toNode = "x3dom";
ROUTE93.toField = "pdelta";
browser.currentScene.children[18] = ROUTE93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromNode = "Animate";
ROUTE94.fromField = "tdelta";
ROUTE94.toNode = "x3dom";
ROUTE94.toField = "tdelta";
browser.currentScene.children[19] = ROUTE94;

