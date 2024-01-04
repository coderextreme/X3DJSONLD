let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "flowers7.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[3] = meta5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Shape";
component12.level = 4;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Grouping";
component13.level = 3;
head1.component[11] = component13;

let component14 = browser.currentScene.createNode("component");
component14.name = "Core";
component14.level = 1;
head1.component[12] = component14;

head = head1;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.DEF = "background";
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
browser.currentScene.children[1] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Transparent rose";
Viewpoint18.position = new SFVec3f(new float[0,0,40]);
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
Appearance21.texture = ComposedCubeMapTexture23;

let ComposedShader24 = browser.currentScene.createNode("ComposedShader");
ComposedShader24.DEF = "x3dom";
ComposedShader24.language = "GLSL";
let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ComposedShader24.parts = new MFNode();

ComposedShader24.parts[0] = ShaderPart25;

let ShaderPart26 = browser.currentScene.createNode("ShaderPart");
ShaderPart26.type = "FRAGMENT";
ShaderPart26.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ComposedShader24.parts[1] = ShaderPart26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "inputOutput";
field27.type = "SFInt32";
field27.name = "cube";
ComposedShader24.field[2] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "initializeOnly";
field28.type = "SFVec3f";
field28.name = "chromaticDispertion";
field28.value = "0.98 1 1.033";
ComposedShader24.field[3] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "inputOutput";
field29.type = "SFFloat";
field29.name = "bias";
field29.value = "0.5";
ComposedShader24.field[4] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.name = "scale";
field30.value = "0.5";
ComposedShader24.field[5] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.name = "power";
field31.value = "2";
ComposedShader24.field[6] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.name = "a";
field32.value = "10";
ComposedShader24.field[7] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.name = "b";
field33.value = "1";
ComposedShader24.field[8] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.name = "c";
field34.value = "20";
ComposedShader24.field[9] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.name = "d";
field35.value = "20";
ComposedShader24.field[10] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.name = "tdelta";
ComposedShader24.field[11] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.name = "pdelta";
ComposedShader24.field[12] = field37;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader24;

let ComposedShader38 = browser.currentScene.createNode("ComposedShader");
ComposedShader38.DEF = "x_ite";
ComposedShader38.language = "GLSL";
let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ComposedShader38.parts = new MFNode();

ComposedShader38.parts[0] = ShaderPart39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.type = "FRAGMENT";
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ComposedShader38.parts[1] = ShaderPart40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFNode";
field41.name = "cube";
let ComposedCubeMapTexture42 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture42.USE = "texture";
field41.children = new MFNode();

field41.children[0] = ComposedCubeMapTexture42;

ComposedShader38.field[2] = field41;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "initializeOnly";
field43.type = "SFVec3f";
field43.name = "chromaticDispertion";
field43.value = "0.98 1 1.033";
ComposedShader38.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "inputOnly";
field44.type = "SFFloat";
field44.name = "bias";
ComposedShader38.field[4] = field44;

let field45 = browser.currentScene.createNode("field");
field45.accessType = "inputOnly";
field45.type = "SFFloat";
field45.name = "scale";
ComposedShader38.field[5] = field45;

let field46 = browser.currentScene.createNode("field");
field46.accessType = "inputOnly";
field46.type = "SFFloat";
field46.name = "power";
ComposedShader38.field[6] = field46;

let field47 = browser.currentScene.createNode("field");
field47.accessType = "inputOnly";
field47.type = "SFFloat";
field47.name = "a";
ComposedShader38.field[7] = field47;

let field48 = browser.currentScene.createNode("field");
field48.accessType = "inputOnly";
field48.type = "SFFloat";
field48.name = "b";
ComposedShader38.field[8] = field48;

let field49 = browser.currentScene.createNode("field");
field49.accessType = "inputOnly";
field49.type = "SFFloat";
field49.name = "c";
ComposedShader38.field[9] = field49;

let field50 = browser.currentScene.createNode("field");
field50.accessType = "inputOnly";
field50.type = "SFFloat";
field50.name = "d";
ComposedShader38.field[10] = field50;

let field51 = browser.currentScene.createNode("field");
field51.accessType = "inputOnly";
field51.type = "SFFloat";
field51.name = "tdelta";
ComposedShader38.field[11] = field51;

let field52 = browser.currentScene.createNode("field");
field52.accessType = "inputOnly";
field52.type = "SFFloat";
field52.name = "pdelta";
ComposedShader38.field[12] = field52;

Appearance21.shaders[1] = ComposedShader38;

Shape20.appearance = Appearance21;

let Sphere53 = browser.currentScene.createNode("Sphere");
Shape20.geometry = Sphere53;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

browser.currentScene.children[3] = Transform19;

let Script54 = browser.currentScene.createNode("Script");
Script54.DEF = "UrlSelector";
Script54.directOutput = True;
let field55 = browser.currentScene.createNode("field");
field55.accessType = "initializeOnly";
field55.type = "MFString";
field55.name = "frontUrls";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script54.field = new MFNode();

Script54.field[0] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "initializeOnly";
field56.type = "MFString";
field56.name = "backUrls";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script54.field[1] = field56;

let field57 = browser.currentScene.createNode("field");
field57.accessType = "initializeOnly";
field57.type = "MFString";
field57.name = "leftUrls";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script54.field[2] = field57;

let field58 = browser.currentScene.createNode("field");
field58.accessType = "initializeOnly";
field58.type = "MFString";
field58.name = "rightUrls";
field58.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script54.field[3] = field58;

let field59 = browser.currentScene.createNode("field");
field59.accessType = "initializeOnly";
field59.type = "MFString";
field59.name = "topUrls";
field59.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script54.field[4] = field59;

let field60 = browser.currentScene.createNode("field");
field60.accessType = "initializeOnly";
field60.type = "MFString";
field60.name = "bottomUrls";
field60.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script54.field[5] = field60;

let field61 = browser.currentScene.createNode("field");
field61.accessType = "inputOutput";
field61.type = "MFString";
field61.name = "front";
Script54.field[6] = field61;

let field62 = browser.currentScene.createNode("field");
field62.accessType = "inputOutput";
field62.type = "MFString";
field62.name = "back";
Script54.field[7] = field62;

let field63 = browser.currentScene.createNode("field");
field63.accessType = "inputOutput";
field63.type = "MFString";
field63.name = "left";
Script54.field[8] = field63;

let field64 = browser.currentScene.createNode("field");
field64.accessType = "inputOutput";
field64.type = "MFString";
field64.name = "right";
Script54.field[9] = field64;

let field65 = browser.currentScene.createNode("field");
field65.accessType = "inputOutput";
field65.type = "MFString";
field65.name = "top";
Script54.field[10] = field65;

let field66 = browser.currentScene.createNode("field");
field66.accessType = "inputOutput";
field66.type = "MFString";
field66.name = "bottom";
Script54.field[11] = field66;

let field67 = browser.currentScene.createNode("field");
field67.accessType = "inputOnly";
field67.type = "SFFloat";
field67.name = "set_fraction";
Script54.field[12] = field67;

let field68 = browser.currentScene.createNode("field");
field68.accessType = "inputOutput";
field68.type = "SFInt32";
field68.name = "old";
field68.value = "-1";
Script54.field[13] = field68;


Script54.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
browser.currentScene.children[4] = Script54;

let Script69 = browser.currentScene.createNode("Script");
Script69.DEF = "Animate";
Script69.directOutput = True;
let field70 = browser.currentScene.createNode("field");
field70.accessType = "inputOnly";
field70.type = "SFFloat";
field70.name = "set_fraction";
Script69.field = new MFNode();

Script69.field[0] = field70;

let field71 = browser.currentScene.createNode("field");
field71.accessType = "inputOutput";
field71.type = "SFFloat";
field71.name = "a";
field71.value = "10";
Script69.field[1] = field71;

let field72 = browser.currentScene.createNode("field");
field72.accessType = "inputOutput";
field72.type = "SFFloat";
field72.name = "b";
field72.value = "1";
Script69.field[2] = field72;

let field73 = browser.currentScene.createNode("field");
field73.accessType = "inputOutput";
field73.type = "SFFloat";
field73.name = "c";
field73.value = "20";
Script69.field[3] = field73;

let field74 = browser.currentScene.createNode("field");
field74.accessType = "inputOutput";
field74.type = "SFFloat";
field74.name = "d";
field74.value = "20";
Script69.field[4] = field74;

let field75 = browser.currentScene.createNode("field");
field75.accessType = "inputOutput";
field75.type = "SFFloat";
field75.name = "tdelta";
Script69.field[5] = field75;

let field76 = browser.currentScene.createNode("field");
field76.accessType = "inputOutput";
field76.type = "SFFloat";
field76.name = "pdelta";
Script69.field[6] = field76;


Script69.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}`)
browser.currentScene.children[5] = Script69;

let TimeSensor77 = browser.currentScene.createNode("TimeSensor");
TimeSensor77.DEF = "TourTime";
TimeSensor77.cycleInterval = 5;
TimeSensor77.loop = True;
browser.currentScene.children[6] = TimeSensor77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "TourTime";
ROUTE78.fromField = "fraction_changed";
ROUTE78.toNode = "Animate";
ROUTE78.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "Animate";
ROUTE79.fromField = "a";
ROUTE79.toNode = "x_ite";
ROUTE79.toField = "a";
browser.currentScene.children[8] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "Animate";
ROUTE80.fromField = "b";
ROUTE80.toNode = "x_ite";
ROUTE80.toField = "b";
browser.currentScene.children[9] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "Animate";
ROUTE81.fromField = "c";
ROUTE81.toNode = "x_ite";
ROUTE81.toField = "c";
browser.currentScene.children[10] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "Animate";
ROUTE82.fromField = "d";
ROUTE82.toNode = "x_ite";
ROUTE82.toField = "d";
browser.currentScene.children[11] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "pdelta";
ROUTE83.toNode = "x_ite";
ROUTE83.toField = "pdelta";
browser.currentScene.children[12] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "Animate";
ROUTE84.fromField = "tdelta";
ROUTE84.toNode = "x_ite";
ROUTE84.toField = "tdelta";
browser.currentScene.children[13] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "Animate";
ROUTE85.fromField = "a";
ROUTE85.toNode = "x3dom";
ROUTE85.toField = "a";
browser.currentScene.children[14] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "Animate";
ROUTE86.fromField = "b";
ROUTE86.toNode = "x3dom";
ROUTE86.toField = "b";
browser.currentScene.children[15] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "Animate";
ROUTE87.fromField = "c";
ROUTE87.toNode = "x3dom";
ROUTE87.toField = "c";
browser.currentScene.children[16] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "Animate";
ROUTE88.fromField = "d";
ROUTE88.toNode = "x3dom";
ROUTE88.toField = "d";
browser.currentScene.children[17] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "Animate";
ROUTE89.fromField = "pdelta";
ROUTE89.toNode = "x3dom";
ROUTE89.toField = "pdelta";
browser.currentScene.children[18] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "Animate";
ROUTE90.fromField = "tdelta";
ROUTE90.toNode = "x3dom";
ROUTE90.toField = "tdelta";
browser.currentScene.children[19] = ROUTE90;

