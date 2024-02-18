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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

//<component name='Shape' level='4'></component>
let meta10 = browser.currentScene.createNode("meta");
meta10.name = "title";
meta10.content = "flowers7.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "manual";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "description";
meta14.content = "a flower";
head1.meta[12] = meta14;

head = head1;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo16;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background17 = browser.currentScene.createNode("Background");
Background17.DEF = "background";
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
browser.currentScene.children[1] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.position = new SFVec3f(new float[0,0,40]);
Viewpoint18.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint18;

let Transform19 = browser.currentScene.createNode("Transform");
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.DEF = "backShader";
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "bottomShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "frontShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "leftShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.DEF = "rightShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.DEF = "topShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "x3dom";
ComposedShader30.language = "GLSL";
let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.type = "SFInt32";
field31.accessType = "inputOutput";
field31.value = "0";
ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "chromaticDispertion";
field32.accessType = "initializeOnly";
field32.type = "SFVec3f";
field32.value = "0.98 1 1.033";
ComposedShader30.field[1] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "bias";
field33.type = "SFFloat";
field33.accessType = "inputOutput";
field33.value = "0.5";
ComposedShader30.field[2] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "scale";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "0.5";
ComposedShader30.field[3] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "power";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "2";
ComposedShader30.field[4] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "a";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "10";
ComposedShader30.field[5] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "b";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "1";
ComposedShader30.field[6] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "c";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "20";
ComposedShader30.field[7] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "d";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "20";
ComposedShader30.field[8] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "tdelta";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "0";
ComposedShader30.field[9] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "pdelta";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "0";
ComposedShader30.field[10] = field41;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart42.type = "VERTEX";
ComposedShader30.parts[11] = ShaderPart42;

let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart43.type = "FRAGMENT";
ComposedShader30.parts[12] = ShaderPart43;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

let ComposedShader44 = browser.currentScene.createNode("ComposedShader");
ComposedShader44.DEF = "x_ite";
ComposedShader44.language = "GLSL";
let field45 = browser.currentScene.createNode("field");
field45.name = "cube";
field45.type = "SFNode";
field45.accessType = "inputOutput";
let ComposedCubeMapTexture46 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture46.USE = "texture";
field45.children = new MFNode();

field45.children[0] = ComposedCubeMapTexture46;

ComposedShader44.field = new MFNode();

ComposedShader44.field[0] = field45;

let field47 = browser.currentScene.createNode("field");
field47.name = "chromaticDispertion";
field47.accessType = "initializeOnly";
field47.type = "SFVec3f";
field47.value = "0.98 1 1.033";
ComposedShader44.field[1] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "bias";
field48.type = "SFFloat";
field48.accessType = "inputOnly";
field48.value = "0.5";
ComposedShader44.field[2] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "scale";
field49.type = "SFFloat";
field49.accessType = "inputOnly";
field49.value = "0.5";
ComposedShader44.field[3] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "power";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "2";
ComposedShader44.field[4] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "a";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "10";
ComposedShader44.field[5] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "b";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "1";
ComposedShader44.field[6] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "c";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "20";
ComposedShader44.field[7] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "d";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "20";
ComposedShader44.field[8] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "tdelta";
field55.type = "SFFloat";
field55.accessType = "inputOnly";
field55.value = "0";
ComposedShader44.field[9] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "pdelta";
field56.type = "SFFloat";
field56.accessType = "inputOnly";
field56.value = "0";
ComposedShader44.field[10] = field56;

let ShaderPart57 = browser.currentScene.createNode("ShaderPart");
ShaderPart57.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart57.type = "VERTEX";
ComposedShader44.parts[11] = ShaderPart57;

let ShaderPart58 = browser.currentScene.createNode("ShaderPart");
ShaderPart58.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart58.type = "FRAGMENT";
ComposedShader44.parts[12] = ShaderPart58;

Appearance21.shaders[1] = ComposedShader44;

Shape20.appearance = Appearance21;

let Sphere59 = browser.currentScene.createNode("Sphere");
Shape20.geometry = Sphere59;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

browser.currentScene.children[3] = Transform19;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "UrlSelector";
Script60.directOutput = True;
let field61 = browser.currentScene.createNode("field");
field61.name = "frontUrls";
field61.type = "MFString";
field61.accessType = "initializeOnly";
field61.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script60.field = new MFNode();

Script60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "backUrls";
field62.type = "MFString";
field62.accessType = "initializeOnly";
field62.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script60.field[1] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "leftUrls";
field63.type = "MFString";
field63.accessType = "initializeOnly";
field63.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script60.field[2] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "rightUrls";
field64.type = "MFString";
field64.accessType = "initializeOnly";
field64.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script60.field[3] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "topUrls";
field65.type = "MFString";
field65.accessType = "initializeOnly";
field65.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script60.field[4] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "bottomUrls";
field66.type = "MFString";
field66.accessType = "initializeOnly";
field66.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script60.field[5] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "front";
field67.type = "MFString";
field67.accessType = "inputOutput";
Script60.field[6] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "back";
field68.type = "MFString";
field68.accessType = "inputOutput";
Script60.field[7] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "left";
field69.type = "MFString";
field69.accessType = "inputOutput";
Script60.field[8] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "right";
field70.type = "MFString";
field70.accessType = "inputOutput";
Script60.field[9] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "top";
field71.type = "MFString";
field71.accessType = "inputOutput";
Script60.field[10] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "bottom";
field72.type = "MFString";
field72.accessType = "inputOutput";
Script60.field[11] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "set_fraction";
field73.type = "SFFloat";
field73.accessType = "inputOnly";
Script60.field[12] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "old";
field74.type = "SFInt32";
field74.accessType = "inputOutput";
field74.value = "-1";
Script60.field[13] = field74;


Script60.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[4] = Script60;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
let Script75 = browser.currentScene.createNode("Script");
Script75.DEF = "Animate";
Script75.directOutput = True;
let field76 = browser.currentScene.createNode("field");
field76.name = "set_fraction";
field76.type = "SFFloat";
field76.accessType = "inputOnly";
Script75.field = new MFNode();

Script75.field[0] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "a";
field77.type = "SFFloat";
field77.accessType = "inputOutput";
field77.value = "10";
Script75.field[1] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "b";
field78.type = "SFFloat";
field78.accessType = "inputOutput";
field78.value = "1";
Script75.field[2] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "c";
field79.type = "SFFloat";
field79.accessType = "inputOutput";
field79.value = "20";
Script75.field[3] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "d";
field80.type = "SFFloat";
field80.accessType = "inputOutput";
field80.value = "20";
Script75.field[4] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "tdelta";
field81.type = "SFFloat";
field81.accessType = "inputOutput";
field81.value = "0";
Script75.field[5] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "pdelta";
field82.type = "SFFloat";
field82.accessType = "inputOutput";
field82.value = "0";
Script75.field[6] = field82;


Script75.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[5] = Script75;

let TimeSensor83 = browser.currentScene.createNode("TimeSensor");
TimeSensor83.DEF = "TourTime";
TimeSensor83.cycleInterval = 5;
TimeSensor83.loop = True;
browser.currentScene.children[6] = TimeSensor83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "TourTime";
ROUTE84.fromField = "fraction_changed";
ROUTE84.toNode = "Animate";
ROUTE84.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "Animate";
ROUTE85.fromField = "a";
ROUTE85.toNode = "x_ite";
ROUTE85.toField = "a";
browser.currentScene.children[8] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "Animate";
ROUTE86.fromField = "b";
ROUTE86.toNode = "x_ite";
ROUTE86.toField = "b";
browser.currentScene.children[9] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "Animate";
ROUTE87.fromField = "c";
ROUTE87.toNode = "x_ite";
ROUTE87.toField = "c";
browser.currentScene.children[10] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "Animate";
ROUTE88.fromField = "d";
ROUTE88.toNode = "x_ite";
ROUTE88.toField = "d";
browser.currentScene.children[11] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "Animate";
ROUTE89.fromField = "pdelta";
ROUTE89.toNode = "x_ite";
ROUTE89.toField = "pdelta";
browser.currentScene.children[12] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "Animate";
ROUTE90.fromField = "tdelta";
ROUTE90.toNode = "x_ite";
ROUTE90.toField = "tdelta";
browser.currentScene.children[13] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromNode = "Animate";
ROUTE91.fromField = "a";
ROUTE91.toNode = "x3dom";
ROUTE91.toField = "a";
browser.currentScene.children[14] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromNode = "Animate";
ROUTE92.fromField = "b";
ROUTE92.toNode = "x3dom";
ROUTE92.toField = "b";
browser.currentScene.children[15] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromNode = "Animate";
ROUTE93.fromField = "c";
ROUTE93.toNode = "x3dom";
ROUTE93.toField = "c";
browser.currentScene.children[16] = ROUTE93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromNode = "Animate";
ROUTE94.fromField = "d";
ROUTE94.toNode = "x3dom";
ROUTE94.toField = "d";
browser.currentScene.children[17] = ROUTE94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromNode = "Animate";
ROUTE95.fromField = "pdelta";
ROUTE95.toNode = "x3dom";
ROUTE95.toField = "pdelta";
browser.currentScene.children[18] = ROUTE95;

let ROUTE96 = browser.currentScene.createNode("ROUTE");
ROUTE96.fromNode = "Animate";
ROUTE96.fromField = "tdelta";
ROUTE96.toNode = "x3dom";
ROUTE96.toField = "tdelta";
browser.currentScene.children[19] = ROUTE96;

