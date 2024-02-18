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
meta11.content = "flowers7.x3d";
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
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "description";
meta15.content = "a flower";
head1.meta[13] = meta15;

head = head1;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo17;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background18 = browser.currentScene.createNode("Background");
Background18.DEF = "background";
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
browser.currentScene.children[1] = Background18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.position = new SFVec3f(new float[0,0,40]);
Viewpoint19.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint19;

let Transform20 = browser.currentScene.createNode("Transform");
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

let ComposedCubeMapTexture24 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "backShader";
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "bottomShader";
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "frontShader";
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.DEF = "leftShader";
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.DEF = "rightShader";
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.DEF = "topShader";
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x_ite";
ComposedShader31.language = "GLSL";
let field32 = browser.currentScene.createNode("field");
field32.name = "cube";
field32.type = "SFNode";
field32.accessType = "inputOutput";
let ComposedCubeMapTexture33 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture33.USE = "texture";
field32.children = new MFNode();

field32.children[0] = ComposedCubeMapTexture33;

ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

let field34 = browser.currentScene.createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader31.field[1] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "bias";
field35.type = "SFFloat";
field35.accessType = "inputOnly";
field35.value = "0.5";
ComposedShader31.field[2] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "scale";
field36.type = "SFFloat";
field36.accessType = "inputOnly";
field36.value = "0.5";
ComposedShader31.field[3] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "power";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "2";
ComposedShader31.field[4] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "a";
field38.type = "SFFloat";
field38.accessType = "inputOnly";
field38.value = "10";
ComposedShader31.field[5] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "b";
field39.type = "SFFloat";
field39.accessType = "inputOnly";
field39.value = "1";
ComposedShader31.field[6] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "c";
field40.type = "SFFloat";
field40.accessType = "inputOnly";
field40.value = "20";
ComposedShader31.field[7] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "d";
field41.type = "SFFloat";
field41.accessType = "inputOnly";
field41.value = "20";
ComposedShader31.field[8] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "tdelta";
field42.type = "SFFloat";
field42.accessType = "inputOnly";
field42.value = "0";
ComposedShader31.field[9] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "pdelta";
field43.type = "SFFloat";
field43.accessType = "inputOnly";
field43.value = "0";
ComposedShader31.field[10] = field43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart44.type = "VERTEX";
ComposedShader31.parts[11] = ShaderPart44;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart45.type = "FRAGMENT";
ComposedShader31.parts[12] = ShaderPart45;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

Shape21.appearance = Appearance22;

let Sphere46 = browser.currentScene.createNode("Sphere");
Shape21.geometry = Sphere46;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

browser.currentScene.children[3] = Transform20;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "UrlSelector";
Script47.directOutput = True;
let field48 = browser.currentScene.createNode("field");
field48.name = "frontUrls";
field48.type = "MFString";
field48.accessType = "initializeOnly";
field48.value = "\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script47.field = new MFNode();

Script47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "backUrls";
field49.type = "MFString";
field49.accessType = "initializeOnly";
field49.value = "\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "leftUrls";
field50.type = "MFString";
field50.accessType = "initializeOnly";
field50.value = "\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script47.field[2] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "rightUrls";
field51.type = "MFString";
field51.accessType = "initializeOnly";
field51.value = "\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script47.field[3] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "topUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script47.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "bottomUrls";
field53.type = "MFString";
field53.accessType = "initializeOnly";
field53.value = "\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script47.field[5] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "front";
field54.type = "MFString";
field54.accessType = "inputOutput";
Script47.field[6] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "back";
field55.type = "MFString";
field55.accessType = "inputOutput";
Script47.field[7] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "left";
field56.type = "MFString";
field56.accessType = "inputOutput";
Script47.field[8] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "right";
field57.type = "MFString";
field57.accessType = "inputOutput";
Script47.field[9] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "top";
field58.type = "MFString";
field58.accessType = "inputOutput";
Script47.field[10] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "bottom";
field59.type = "MFString";
field59.accessType = "inputOutput";
Script47.field[11] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "set_fraction";
field60.type = "SFFloat";
field60.accessType = "inputOnly";
Script47.field[12] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "old";
field61.type = "SFInt32";
field61.accessType = "inputOutput";
field61.value = "-1";
Script47.field[13] = field61;


Script47.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[4] = Script47;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
let Script62 = browser.currentScene.createNode("Script");
Script62.DEF = "Animate";
Script62.directOutput = True;
let field63 = browser.currentScene.createNode("field");
field63.name = "set_fraction";
field63.type = "SFFloat";
field63.accessType = "inputOnly";
Script62.field = new MFNode();

Script62.field[0] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "a";
field64.type = "SFFloat";
field64.accessType = "inputOutput";
field64.value = "10";
Script62.field[1] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "b";
field65.type = "SFFloat";
field65.accessType = "inputOutput";
field65.value = "1";
Script62.field[2] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "c";
field66.type = "SFFloat";
field66.accessType = "inputOutput";
field66.value = "20";
Script62.field[3] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "d";
field67.type = "SFFloat";
field67.accessType = "inputOutput";
field67.value = "20";
Script62.field[4] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "tdelta";
field68.type = "SFFloat";
field68.accessType = "inputOutput";
field68.value = "0";
Script62.field[5] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "pdelta";
field69.type = "SFFloat";
field69.accessType = "inputOutput";
field69.value = "0";
Script62.field[6] = field69;


Script62.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[5] = Script62;

let TimeSensor70 = browser.currentScene.createNode("TimeSensor");
TimeSensor70.DEF = "TourTime";
TimeSensor70.cycleInterval = 5;
TimeSensor70.loop = True;
browser.currentScene.children[6] = TimeSensor70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "TourTime";
ROUTE71.fromField = "fraction_changed";
ROUTE71.toNode = "Animate";
ROUTE71.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "Animate";
ROUTE72.fromField = "a";
ROUTE72.toNode = "x_ite";
ROUTE72.toField = "a";
browser.currentScene.children[8] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "Animate";
ROUTE73.fromField = "b";
ROUTE73.toNode = "x_ite";
ROUTE73.toField = "b";
browser.currentScene.children[9] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "Animate";
ROUTE74.fromField = "c";
ROUTE74.toNode = "x_ite";
ROUTE74.toField = "c";
browser.currentScene.children[10] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "Animate";
ROUTE75.fromField = "d";
ROUTE75.toNode = "x_ite";
ROUTE75.toField = "d";
browser.currentScene.children[11] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "Animate";
ROUTE76.fromField = "pdelta";
ROUTE76.toNode = "x_ite";
ROUTE76.toField = "pdelta";
browser.currentScene.children[12] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "Animate";
ROUTE77.fromField = "tdelta";
ROUTE77.toNode = "x_ite";
ROUTE77.toField = "tdelta";
browser.currentScene.children[13] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "Animate";
ROUTE78.fromField = "a";
ROUTE78.toNode = "x3dom";
ROUTE78.toField = "a";
browser.currentScene.children[14] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "Animate";
ROUTE79.fromField = "b";
ROUTE79.toNode = "x3dom";
ROUTE79.toField = "b";
browser.currentScene.children[15] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "Animate";
ROUTE80.fromField = "c";
ROUTE80.toNode = "x3dom";
ROUTE80.toField = "c";
browser.currentScene.children[16] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "Animate";
ROUTE81.fromField = "d";
ROUTE81.toNode = "x3dom";
ROUTE81.toField = "d";
browser.currentScene.children[17] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "Animate";
ROUTE82.fromField = "pdelta";
ROUTE82.toNode = "x3dom";
ROUTE82.toField = "pdelta";
browser.currentScene.children[18] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "tdelta";
ROUTE83.toNode = "x3dom";
ROUTE83.toField = "tdelta";
browser.currentScene.children[19] = ROUTE83;

