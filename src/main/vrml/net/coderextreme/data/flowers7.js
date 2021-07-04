let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background3 = browser.currentScene.createNode("Background");
Background3.DEF = "background";
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.position = new SFVec3f(new float[0,0,40]);
Viewpoint4.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material8.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance7.material = Material8;

let ComposedCubeMapTexture9 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture9.DEF = "texture";
let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "backShader";
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture9.topTexture = ImageTexture10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.DEF = "bottomShader";
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture9.topTexture = ImageTexture11;

let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.DEF = "frontShader";
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture9.topTexture = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.DEF = "leftShader";
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture9.topTexture = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.DEF = "rightShader";
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture9.topTexture = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.DEF = "topShader";
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture9.topTexture = ImageTexture15;

Appearance7.texture = ComposedCubeMapTexture9;

let ComposedShader16 = browser.currentScene.createNode("ComposedShader");
ComposedShader16.DEF = "x3dom";
ComposedShader16.language = "GLSL";
let field17 = browser.currentScene.createNode("field");
field17.name = "cube";
field17.type = "SFInt32";
field17.accessType = "inputOutput";
field17.value = "0";
ComposedShader16.field = new MFNode();

ComposedShader16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "chromaticDispertion";
field18.accessType = "initializeOnly";
field18.type = "SFVec3f";
field18.value = "0.98 1 1.033";
ComposedShader16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "bias";
field19.type = "SFFloat";
field19.accessType = "inputOutput";
field19.value = "0.5";
ComposedShader16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "scale";
field20.type = "SFFloat";
field20.accessType = "inputOutput";
field20.value = "0.5";
ComposedShader16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "power";
field21.type = "SFFloat";
field21.accessType = "inputOutput";
field21.value = "2";
ComposedShader16.field[4] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "a";
field22.type = "SFFloat";
field22.accessType = "inputOutput";
field22.value = "10";
ComposedShader16.field[5] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "b";
field23.type = "SFFloat";
field23.accessType = "inputOutput";
field23.value = "1";
ComposedShader16.field[6] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "c";
field24.type = "SFFloat";
field24.accessType = "inputOutput";
field24.value = "20";
ComposedShader16.field[7] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "d";
field25.type = "SFFloat";
field25.accessType = "inputOutput";
field25.value = "20";
ComposedShader16.field[8] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "tdelta";
field26.type = "SFFloat";
field26.accessType = "inputOutput";
field26.value = "0";
ComposedShader16.field[9] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "pdelta";
field27.type = "SFFloat";
field27.accessType = "inputOutput";
field27.value = "0";
ComposedShader16.field[10] = field27;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart28 = browser.currentScene.createNode("ShaderPart");
ShaderPart28.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart28.type = "VERTEX";
ComposedShader16.parts[11] = ShaderPart28;

let ShaderPart29 = browser.currentScene.createNode("ShaderPart");
ShaderPart29.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart29.type = "FRAGMENT";
ComposedShader16.parts[12] = ShaderPart29;

Appearance7.shaders = new MFNode();

Appearance7.shaders[0] = ComposedShader16;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "x_ite";
ComposedShader30.language = "GLSL";
let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.type = "SFNode";
field31.accessType = "inputOutput";
let ComposedCubeMapTexture32 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture32.USE = "texture";
field31.children = new MFNode();

field31.children[0] = ComposedCubeMapTexture32;

ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader30.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "bias";
field34.type = "SFFloat";
field34.accessType = "inputOnly";
field34.value = "0.5";
ComposedShader30.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "scale";
field35.type = "SFFloat";
field35.accessType = "inputOnly";
field35.value = "0.5";
ComposedShader30.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "power";
field36.type = "SFFloat";
field36.accessType = "inputOnly";
field36.value = "2";
ComposedShader30.field[4] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "a";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "10";
ComposedShader30.field[5] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "b";
field38.type = "SFFloat";
field38.accessType = "inputOnly";
field38.value = "1";
ComposedShader30.field[6] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "c";
field39.type = "SFFloat";
field39.accessType = "inputOnly";
field39.value = "20";
ComposedShader30.field[7] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "d";
field40.type = "SFFloat";
field40.accessType = "inputOnly";
field40.value = "20";
ComposedShader30.field[8] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "tdelta";
field41.type = "SFFloat";
field41.accessType = "inputOnly";
field41.value = "0";
ComposedShader30.field[9] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "pdelta";
field42.type = "SFFloat";
field42.accessType = "inputOnly";
field42.value = "0";
ComposedShader30.field[10] = field42;

let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart43.type = "VERTEX";
ComposedShader30.parts[11] = ShaderPart43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart44.type = "FRAGMENT";
ComposedShader30.parts[12] = ShaderPart44;

Appearance7.shaders[1] = ComposedShader30;

Shape6.appearance = Appearance7;

let Sphere45 = browser.currentScene.createNode("Sphere");
Shape6.geometry = Sphere45;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

browser.currentScene.children[3] = Transform5;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "UrlSelector";
Script46.directOutput = True;
let field47 = browser.currentScene.createNode("field");
field47.name = "frontUrls";
field47.type = "MFString";
field47.accessType = "initializeOnly";
field47.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
Script46.field = new MFNode();

Script46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "backUrls";
field48.type = "MFString";
field48.accessType = "initializeOnly";
field48.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
Script46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "leftUrls";
field49.type = "MFString";
field49.accessType = "initializeOnly";
field49.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
Script46.field[2] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "rightUrls";
field50.type = "MFString";
field50.accessType = "initializeOnly";
field50.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
Script46.field[3] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "topUrls";
field51.type = "MFString";
field51.accessType = "initializeOnly";
field51.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
Script46.field[4] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "bottomUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
Script46.field[5] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "front";
field53.type = "MFString";
field53.accessType = "inputOutput";
Script46.field[6] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "back";
field54.type = "MFString";
field54.accessType = "inputOutput";
Script46.field[7] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "left";
field55.type = "MFString";
field55.accessType = "inputOutput";
Script46.field[8] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "right";
field56.type = "MFString";
field56.accessType = "inputOutput";
Script46.field[9] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "top";
field57.type = "MFString";
field57.accessType = "inputOutput";
Script46.field[10] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "bottom";
field58.type = "MFString";
field58.accessType = "inputOutput";
Script46.field[11] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "set_fraction";
field59.type = "SFFloat";
field59.accessType = "inputOnly";
Script46.field[12] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "old";
field60.type = "SFInt32";
field60.accessType = "inputOutput";
field60.value = "-1";
Script46.field[13] = field60;


Script46.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[4] = Script46;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
let Script61 = browser.currentScene.createNode("Script");
Script61.DEF = "Animate";
Script61.directOutput = True;
let field62 = browser.currentScene.createNode("field");
field62.name = "set_fraction";
field62.type = "SFFloat";
field62.accessType = "inputOnly";
Script61.field = new MFNode();

Script61.field[0] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "a";
field63.type = "SFFloat";
field63.accessType = "inputOutput";
field63.value = "10";
Script61.field[1] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "b";
field64.type = "SFFloat";
field64.accessType = "inputOutput";
field64.value = "1";
Script61.field[2] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "c";
field65.type = "SFFloat";
field65.accessType = "inputOutput";
field65.value = "20";
Script61.field[3] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "d";
field66.type = "SFFloat";
field66.accessType = "inputOutput";
field66.value = "20";
Script61.field[4] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "tdelta";
field67.type = "SFFloat";
field67.accessType = "inputOutput";
field67.value = "0";
Script61.field[5] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "pdelta";
field68.type = "SFFloat";
field68.accessType = "inputOutput";
field68.value = "0";
Script61.field[6] = field68;


Script61.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[5] = Script61;

let TimeSensor69 = browser.currentScene.createNode("TimeSensor");
TimeSensor69.DEF = "TourTime";
TimeSensor69.cycleInterval = 5;
TimeSensor69.loop = True;
browser.currentScene.children[6] = TimeSensor69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "TourTime";
ROUTE70.fromField = "fraction_changed";
ROUTE70.toNode = "Animate";
ROUTE70.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "Animate";
ROUTE71.fromField = "a";
ROUTE71.toNode = "x_ite";
ROUTE71.toField = "a";
browser.currentScene.children[8] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "Animate";
ROUTE72.fromField = "b";
ROUTE72.toNode = "x_ite";
ROUTE72.toField = "b";
browser.currentScene.children[9] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "Animate";
ROUTE73.fromField = "c";
ROUTE73.toNode = "x_ite";
ROUTE73.toField = "c";
browser.currentScene.children[10] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "Animate";
ROUTE74.fromField = "d";
ROUTE74.toNode = "x_ite";
ROUTE74.toField = "d";
browser.currentScene.children[11] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "Animate";
ROUTE75.fromField = "pdelta";
ROUTE75.toNode = "x_ite";
ROUTE75.toField = "pdelta";
browser.currentScene.children[12] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "Animate";
ROUTE76.fromField = "tdelta";
ROUTE76.toNode = "x_ite";
ROUTE76.toField = "tdelta";
browser.currentScene.children[13] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "Animate";
ROUTE77.fromField = "a";
ROUTE77.toNode = "x3dom";
ROUTE77.toField = "a";
browser.currentScene.children[14] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "Animate";
ROUTE78.fromField = "b";
ROUTE78.toNode = "x3dom";
ROUTE78.toField = "b";
browser.currentScene.children[15] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "Animate";
ROUTE79.fromField = "c";
ROUTE79.toNode = "x3dom";
ROUTE79.toField = "c";
browser.currentScene.children[16] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "Animate";
ROUTE80.fromField = "d";
ROUTE80.toNode = "x3dom";
ROUTE80.toField = "d";
browser.currentScene.children[17] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "Animate";
ROUTE81.fromField = "pdelta";
ROUTE81.toNode = "x3dom";
ROUTE81.toField = "pdelta";
browser.currentScene.children[18] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "Animate";
ROUTE82.fromField = "tdelta";
ROUTE82.toNode = "x3dom";
ROUTE82.toField = "tdelta";
browser.currentScene.children[19] = ROUTE82;

