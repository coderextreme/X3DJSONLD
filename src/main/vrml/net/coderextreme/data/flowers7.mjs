const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Shape", 4));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "flowers7.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d");
scene.addMetaData("description", "a flower");
await browser .loadComponents (scene);
let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo17;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background18 = browser.currentScene.createNode("Background");
Background18.DEF = "background";
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]);
browser.currentScene.children[1] = Background18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.position = new X3D.SFVec3f([0,0,40]);
Viewpoint19.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint19;

let Transform20 = browser.currentScene.createNode("Transform");
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material23.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material23;

let ComposedCubeMapTexture24 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "backShader";
ImageTexture25.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "bottomShader";
ImageTexture26.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "frontShader";
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.DEF = "leftShader";
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.DEF = "rightShader";
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.DEF = "topShader";
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]);
topTexture = ImageTexture30;

texture = ComposedCubeMapTexture24;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x3dom";
ComposedShader31.language = "GLSL";
//TODO VERIFY
//<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
ComposedShader32.getField("cube")let ComposedCubeMapTexture33 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture33.USE = "texture";
field32YYY.children = new X3D.MFNode();

field32ZZZ.children[0] = ComposedCubeMapTexture33;

ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader34.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader35.getField("bias").setValue("0.5");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader36.getField("scale").setValue("0.5");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader37.getField("power").setValue("2");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader38.getField("a").setValue("10");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader39.getField("b").setValue("1");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader40.getField("c").setValue("20");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader41.getField("d").setValue("20");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader42.getField("tdelta").setValue("0");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader43.getField("pdelta").setValue("0");
ComposedShader31YYY.field = new X3D.MFNode();

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs")]);
ShaderPart44.type = "VERTEX";
ComposedShader31YYY.parts = new X3D.MFNode();

ComposedShader31ZZZ.parts[0] = ShaderPart44;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")]);
ShaderPart45.type = "FRAGMENT";
ComposedShader31ZZZ.parts[1] = ShaderPart45;

Appearance22YYY.shaders = new X3D.MFNode();

Appearance22ZZZ.shaders[0] = ComposedShader31;

let ComposedShader46 = browser.currentScene.createNode("ComposedShader");
ComposedShader46.DEF = "x_ite";
ComposedShader46.language = "GLSL";
ComposedShader47.getField("cube")let ComposedCubeMapTexture48 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture48.USE = "texture";
field47YYY.children = new X3D.MFNode();

field47ZZZ.children[0] = ComposedCubeMapTexture48;

ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader49.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader50.getField("bias").setValue("0.5");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader51.getField("scale").setValue("0.5");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader52.getField("power").setValue("2");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader53.getField("a").setValue("10");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader54.getField("b").setValue("1");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader55.getField("c").setValue("20");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader56.getField("d").setValue("20");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader57.getField("tdelta").setValue("0");
ComposedShader46YYY.field = new X3D.MFNode();

ComposedShader58.getField("pdelta").setValue("0");
ComposedShader46YYY.field = new X3D.MFNode();

let ShaderPart59 = browser.currentScene.createNode("ShaderPart");
ShaderPart59.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")]);
ShaderPart59.type = "VERTEX";
ComposedShader46YYY.parts = new X3D.MFNode();

ComposedShader46ZZZ.parts[0] = ShaderPart59;

let ShaderPart60 = browser.currentScene.createNode("ShaderPart");
ShaderPart60.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]);
ShaderPart60.type = "FRAGMENT";
ComposedShader46ZZZ.parts[1] = ShaderPart60;

Appearance22ZZZ.shaders[1] = ComposedShader46;

appearance = Appearance22;

let Sphere61 = browser.currentScene.createNode("Sphere");
geometry = Sphere61;

Transform20YYY.child = new X3D.undefined();

Transform20ZZZ.child[0] = Shape21;

browser.currentScene.children[3] = Transform20;

let Script62 = browser.currentScene.createNode("Script");
Script62.DEF = "UrlSelector";
Script62.directOutput = True;
Script63.getField("frontUrls").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script62YYY.field = new X3D.MFNode();

Script64.getField("backUrls").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script62YYY.field = new X3D.MFNode();

Script65.getField("leftUrls").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script62YYY.field = new X3D.MFNode();

Script66.getField("rightUrls").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script62YYY.field = new X3D.MFNode();

Script67.getField("topUrls").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script62YYY.field = new X3D.MFNode();

Script68.getField("bottomUrls").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script62YYY.field = new X3D.MFNode();

Script69.getField("front")Script62YYY.field = new X3D.MFNode();

Script70.getField("back")Script62YYY.field = new X3D.MFNode();

Script71.getField("left")Script62YYY.field = new X3D.MFNode();

Script72.getField("right")Script62YYY.field = new X3D.MFNode();

Script73.getField("top")Script62YYY.field = new X3D.MFNode();

Script74.getField("bottom")Script62YYY.field = new X3D.MFNode();

Script75.getField("set_fraction")Script62YYY.field = new X3D.MFNode();

Script76.getField("old").setValue("-1");
Script62YYY.field = new X3D.MFNode();


Script62.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[4] = Script62;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/>
//<ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/>
//<ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
let Script77 = browser.currentScene.createNode("Script");
Script77.DEF = "Animate";
Script77.directOutput = True;
Script78.getField("set_fraction")Script77YYY.field = new X3D.MFNode();

Script79.getField("a").setValue("10");
Script77YYY.field = new X3D.MFNode();

Script80.getField("b").setValue("1");
Script77YYY.field = new X3D.MFNode();

Script81.getField("c").setValue("20");
Script77YYY.field = new X3D.MFNode();

Script82.getField("d").setValue("20");
Script77YYY.field = new X3D.MFNode();

Script83.getField("tdelta").setValue("0");
Script77YYY.field = new X3D.MFNode();

Script84.getField("pdelta").setValue("0");
Script77YYY.field = new X3D.MFNode();


Script77.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[5] = Script77;

let TimeSensor85 = browser.currentScene.createNode("TimeSensor");
TimeSensor85.DEF = "TourTime";
TimeSensor85.cycleInterval = 5;
TimeSensor85.loop = True;
browser.currentScene.children[6] = TimeSensor85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "TourTime";
ROUTE86.fromField = "fraction_changed";
ROUTE86.toNode = "Animate";
ROUTE86.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "Animate";
ROUTE87.fromField = "a";
ROUTE87.toNode = "x_ite";
ROUTE87.toField = "a";
browser.currentScene.children[8] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "Animate";
ROUTE88.fromField = "b";
ROUTE88.toNode = "x_ite";
ROUTE88.toField = "b";
browser.currentScene.children[9] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "Animate";
ROUTE89.fromField = "c";
ROUTE89.toNode = "x_ite";
ROUTE89.toField = "c";
browser.currentScene.children[10] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "Animate";
ROUTE90.fromField = "d";
ROUTE90.toNode = "x_ite";
ROUTE90.toField = "d";
browser.currentScene.children[11] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromNode = "Animate";
ROUTE91.fromField = "pdelta";
ROUTE91.toNode = "x_ite";
ROUTE91.toField = "pdelta";
browser.currentScene.children[12] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromNode = "Animate";
ROUTE92.fromField = "tdelta";
ROUTE92.toNode = "x_ite";
ROUTE92.toField = "tdelta";
browser.currentScene.children[13] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromNode = "Animate";
ROUTE93.fromField = "a";
ROUTE93.toNode = "x3dom";
ROUTE93.toField = "a";
browser.currentScene.children[14] = ROUTE93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromNode = "Animate";
ROUTE94.fromField = "b";
ROUTE94.toNode = "x3dom";
ROUTE94.toField = "b";
browser.currentScene.children[15] = ROUTE94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromNode = "Animate";
ROUTE95.fromField = "c";
ROUTE95.toNode = "x3dom";
ROUTE95.toField = "c";
browser.currentScene.children[16] = ROUTE95;

let ROUTE96 = browser.currentScene.createNode("ROUTE");
ROUTE96.fromNode = "Animate";
ROUTE96.fromField = "d";
ROUTE96.toNode = "x3dom";
ROUTE96.toField = "d";
browser.currentScene.children[17] = ROUTE96;

let ROUTE97 = browser.currentScene.createNode("ROUTE");
ROUTE97.fromNode = "Animate";
ROUTE97.fromField = "pdelta";
ROUTE97.toNode = "x3dom";
ROUTE97.toField = "pdelta";
browser.currentScene.children[18] = ROUTE97;

let ROUTE98 = browser.currentScene.createNode("ROUTE");
ROUTE98.fromNode = "Animate";
ROUTE98.fromField = "tdelta";
ROUTE98.toNode = "x3dom";
ROUTE98.toField = "tdelta";
browser.currentScene.children[19] = ROUTE98;

}
main ();
