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
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
//<component name='Shape' level='4'></component>
scene.addMetaData("title", "mirror2.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/mirror2.x3d");
scene.addMetaData("description", "a mirrored sphere");
await browser .loadComponents (scene);
let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.position = new X3D.SFVec3f([0,5,100]);
Viewpoint16.description = "Switch background and images texture";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint16;

let Background17 = browser.currentScene.createNode("Background");
Background17.DEF = "cube";
Background17.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]);
Background17.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]);
Background17.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]);
Background17.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]);
Background17.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]);
Background17.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]);
browser.currentScene.children[1] = Background17;

let Transform18 = browser.currentScene.createNode("Transform");
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material21.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material21;

let ComposedCubeMapTexture22 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "backShader";
ImageTexture23.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]);
topTexture = ImageTexture23;

let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.DEF = "bottomShader";
ImageTexture24.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]);
topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.DEF = "frontShader";
ImageTexture25.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.DEF = "leftShader";
ImageTexture26.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "rightShader";
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.DEF = "topShader";
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]);
topTexture = ImageTexture28;

texture = ComposedCubeMapTexture22;

let ComposedShader29 = browser.currentScene.createNode("ComposedShader");
ComposedShader29.DEF = "x_ite";
ComposedShader29.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
ComposedShader30.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader29YYY.field = new X3D.MFNode();

ComposedShader31.getField("cube").setValue("0");
ComposedShader29YYY.field = new X3D.MFNode();

ComposedShader32.getField("bias").setValue("0.5");
ComposedShader29YYY.field = new X3D.MFNode();

ComposedShader33.getField("scale").setValue("0.5");
ComposedShader29YYY.field = new X3D.MFNode();

ComposedShader34.getField("power").setValue("2");
ComposedShader29YYY.field = new X3D.MFNode();

let ShaderPart35 = browser.currentScene.createNode("ShaderPart");
ShaderPart35.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]);
ShaderPart35.type = "VERTEX";
ComposedShader29YYY.parts = new X3D.MFNode();

ComposedShader29ZZZ.parts[0] = ShaderPart35;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.url = new X3D.MFString([new X3D.SFString("../shaders/x_itemix.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")]);
ShaderPart36.type = "FRAGMENT";
ComposedShader29ZZZ.parts[1] = ShaderPart36;

Appearance20YYY.shaders = new X3D.MFNode();

Appearance20ZZZ.shaders[0] = ComposedShader29;

let ComposedShader37 = browser.currentScene.createNode("ComposedShader");
ComposedShader37.DEF = "x3dom";
ComposedShader37.language = "GLSL";
ComposedShader38.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader37YYY.field = new X3D.MFNode();

ComposedShader39.getField("cube").setValue("0");
ComposedShader37YYY.field = new X3D.MFNode();

ComposedShader40.getField("bias").setValue("0.5");
ComposedShader37YYY.field = new X3D.MFNode();

ComposedShader41.getField("scale").setValue("0.5");
ComposedShader37YYY.field = new X3D.MFNode();

ComposedShader42.getField("power").setValue("2");
ComposedShader37YYY.field = new X3D.MFNode();

let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new X3D.MFString([new X3D.SFString("../shaders/x3dom.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")]);
ShaderPart43.type = "VERTEX";
ComposedShader37YYY.parts = new X3D.MFNode();

ComposedShader37ZZZ.parts[0] = ShaderPart43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new X3D.MFString([new X3D.SFString("../shaders/mix.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")]);
ShaderPart44.type = "FRAGMENT";
ComposedShader37ZZZ.parts[1] = ShaderPart44;

Appearance20ZZZ.shaders[1] = ComposedShader37;

appearance = Appearance20;

let Sphere45 = browser.currentScene.createNode("Sphere");
Sphere45.radius = 30;
geometry = Sphere45;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape19;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "UrlSelector";
Script46.directOutput = True;
Script47.getField("frontUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script46YYY.field = new X3D.MFNode();

Script48.getField("backUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script46YYY.field = new X3D.MFNode();

Script49.getField("leftUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script46YYY.field = new X3D.MFNode();

Script50.getField("rightUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script46YYY.field = new X3D.MFNode();

Script51.getField("topUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script46YYY.field = new X3D.MFNode();

Script52.getField("bottomUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script46YYY.field = new X3D.MFNode();

Script53.getField("front_changed")Script46YYY.field = new X3D.MFNode();

Script54.getField("back_changed")Script46YYY.field = new X3D.MFNode();

Script55.getField("left_changed")Script46YYY.field = new X3D.MFNode();

Script56.getField("right_changed")Script46YYY.field = new X3D.MFNode();

Script57.getField("top_changed")Script46YYY.field = new X3D.MFNode();

Script58.getField("bottom_changed")Script46YYY.field = new X3D.MFNode();

Script59.getField("set_fraction")Script46YYY.field = new X3D.MFNode();

Script60.getField("old").setValue("-1");
Script46YYY.field = new X3D.MFNode();


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
Transform18ZZZ.children[1] = Script46;

let TimeSensor61 = browser.currentScene.createNode("TimeSensor");
TimeSensor61.DEF = "Clock";
TimeSensor61.cycleInterval = 45;
TimeSensor61.loop = True;
Transform18ZZZ.children[2] = TimeSensor61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Clock";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "UrlSelector";
ROUTE62.toField = "set_fraction";
Transform18ZZZ.children[3] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "UrlSelector";
ROUTE63.fromField = "front_changed";
ROUTE63.toNode = "cube";
ROUTE63.toField = "frontUrl";
Transform18ZZZ.children[4] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "UrlSelector";
ROUTE64.fromField = "back_changed";
ROUTE64.toNode = "cube";
ROUTE64.toField = "backUrl";
Transform18ZZZ.children[5] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "UrlSelector";
ROUTE65.fromField = "left_changed";
ROUTE65.toNode = "cube";
ROUTE65.toField = "leftUrl";
Transform18ZZZ.children[6] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "UrlSelector";
ROUTE66.fromField = "right_changed";
ROUTE66.toNode = "cube";
ROUTE66.toField = "rightUrl";
Transform18ZZZ.children[7] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "UrlSelector";
ROUTE67.fromField = "top_changed";
ROUTE67.toNode = "cube";
ROUTE67.toField = "topUrl";
Transform18ZZZ.children[8] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "UrlSelector";
ROUTE68.fromField = "bottom_changed";
ROUTE68.toNode = "cube";
ROUTE68.toField = "bottomUrl";
Transform18ZZZ.children[9] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "front_changed";
ROUTE69.toNode = "frontShader";
ROUTE69.toField = "url";
Transform18ZZZ.children[10] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "back_changed";
ROUTE70.toNode = "backShader";
ROUTE70.toField = "url";
Transform18ZZZ.children[11] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "left_changed";
ROUTE71.toNode = "leftShader";
ROUTE71.toField = "url";
Transform18ZZZ.children[12] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "right_changed";
ROUTE72.toNode = "rightShader";
ROUTE72.toField = "url";
Transform18ZZZ.children[13] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "top_changed";
ROUTE73.toNode = "topShader";
ROUTE73.toField = "url";
Transform18ZZZ.children[14] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "bottom_changed";
ROUTE74.toNode = "bottomShader";
ROUTE74.toField = "url";
Transform18ZZZ.children[15] = ROUTE74;

browser.currentScene.children[2] = Transform18;

}
main ();
