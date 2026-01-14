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
scene.addMetaData("title", "mirror.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d");
scene.addMetaData("description", "sphere with alternating backgrounds");
await browser .loadComponents (scene);
let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.position = new X3D.SFVec3f([0,5,100]);
Viewpoint16.description = "Switch background and images texture";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint16;

let TextureBackground17 = browser.currentScene.createNode("TextureBackground");
let ImageTexture18 = browser.currentScene.createNode("ImageTexture");
ImageTexture18.DEF = "leftBackgroundTexture";
ImageTexture18.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_left.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]);
topTexture = ImageTexture18;

let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "rightBackgroundTexture";
ImageTexture19.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_right.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]);
topTexture = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "frontBackgroundTexture";
ImageTexture20.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_front.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]);
topTexture = ImageTexture20;

let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.DEF = "backBackgroundTexture";
ImageTexture21.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_back.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]);
topTexture = ImageTexture21;

let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "topBackgroundTexture";
ImageTexture22.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_top.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]);
topTexture = ImageTexture22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "bottomBackgroundTexture";
ImageTexture23.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]);
topTexture = ImageTexture23;

browser.currentScene.children[1] = TextureBackground17;

let Transform24 = browser.currentScene.createNode("Transform");
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material27.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material27;

let ComposedCubeMapTexture28 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.DEF = "backShader";
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_back.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.DEF = "bottomShader";
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.DEF = "frontShader";
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_front.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.DEF = "leftShader";
ImageTexture32.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_left.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]);
topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.DEF = "rightShader";
ImageTexture33.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_right.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]);
topTexture = ImageTexture33;

let ImageTexture34 = browser.currentScene.createNode("ImageTexture");
ImageTexture34.DEF = "topShader";
ImageTexture34.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/beach_cross/beach_top.png"), new X3D.SFString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]);
topTexture = ImageTexture34;

texture = ComposedCubeMapTexture28;

let ComposedShader35 = browser.currentScene.createNode("ComposedShader");
ComposedShader35.DEF = "x3dom";
ComposedShader35.language = "GLSL";
ComposedShader36.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader35YYY.field = new X3D.MFNode();

ComposedShader37.getField("cube").setValue("0");
ComposedShader35YYY.field = new X3D.MFNode();

ComposedShader38.getField("bias").setValue("0.5");
ComposedShader35YYY.field = new X3D.MFNode();

ComposedShader39.getField("scale").setValue("0.5");
ComposedShader35YYY.field = new X3D.MFNode();

ComposedShader40.getField("power").setValue("2");
ComposedShader35YYY.field = new X3D.MFNode();

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new X3D.MFString([new X3D.SFString("../shaders/x3dom.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")]);
ShaderPart41.type = "VERTEX";
ComposedShader35YYY.parts = new X3D.MFNode();

ComposedShader35ZZZ.parts[0] = ShaderPart41;

let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.url = new X3D.MFString([new X3D.SFString("../shaders/mix.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")]);
ShaderPart42.type = "FRAGMENT";
ComposedShader35ZZZ.parts[1] = ShaderPart42;

Appearance26YYY.shaders = new X3D.MFNode();

Appearance26ZZZ.shaders[0] = ComposedShader35;

let ComposedShader43 = browser.currentScene.createNode("ComposedShader");
ComposedShader43.DEF = "x_ite";
ComposedShader43.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
ComposedShader44.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader43YYY.field = new X3D.MFNode();

ComposedShader45.getField("cube").setValue("0");
ComposedShader43YYY.field = new X3D.MFNode();

ComposedShader46.getField("bias").setValue("0.5");
ComposedShader43YYY.field = new X3D.MFNode();

ComposedShader47.getField("scale").setValue("0.5");
ComposedShader43YYY.field = new X3D.MFNode();

ComposedShader48.getField("power").setValue("2");
ComposedShader43YYY.field = new X3D.MFNode();

let ShaderPart49 = browser.currentScene.createNode("ShaderPart");
ShaderPart49.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]);
ShaderPart49.type = "VERTEX";
ComposedShader43YYY.parts = new X3D.MFNode();

ComposedShader43ZZZ.parts[0] = ShaderPart49;

let ShaderPart50 = browser.currentScene.createNode("ShaderPart");
ShaderPart50.url = new X3D.MFString([new X3D.SFString("../shaders/x_itemix.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")]);
ShaderPart50.type = "FRAGMENT";
ComposedShader43ZZZ.parts[1] = ShaderPart50;

Appearance26ZZZ.shaders[1] = ComposedShader43;

appearance = Appearance26;

let Sphere51 = browser.currentScene.createNode("Sphere");
Sphere51.radius = 30;
geometry = Sphere51;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "UrlSelector";
Script52.directOutput = True;
Script53.getField("frontUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script52YYY.field = new X3D.MFNode();

Script54.getField("backUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script52YYY.field = new X3D.MFNode();

Script55.getField("leftUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script52YYY.field = new X3D.MFNode();

Script56.getField("rightUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script52YYY.field = new X3D.MFNode();

Script57.getField("topUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script52YYY.field = new X3D.MFNode();

Script58.getField("bottomUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script52YYY.field = new X3D.MFNode();

Script59.getField("front_changed")Script52YYY.field = new X3D.MFNode();

Script60.getField("back_changed")Script52YYY.field = new X3D.MFNode();

Script61.getField("left_changed")Script52YYY.field = new X3D.MFNode();

Script62.getField("right_changed")Script52YYY.field = new X3D.MFNode();

Script63.getField("top_changed")Script52YYY.field = new X3D.MFNode();

Script64.getField("bottom_changed")Script52YYY.field = new X3D.MFNode();

Script65.getField("set_fraction")Script52YYY.field = new X3D.MFNode();

Script66.getField("old").setValue("-1");
Script52YYY.field = new X3D.MFNode();


Script52.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform24ZZZ.children[1] = Script52;

let TimeSensor67 = browser.currentScene.createNode("TimeSensor");
TimeSensor67.DEF = "Clock";
TimeSensor67.cycleInterval = 45;
TimeSensor67.loop = True;
Transform24ZZZ.children[2] = TimeSensor67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Clock";
ROUTE68.fromField = "fraction_changed";
ROUTE68.toNode = "UrlSelector";
ROUTE68.toField = "set_fraction";
Transform24ZZZ.children[3] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "UrlSelector";
ROUTE69.fromField = "front_changed";
ROUTE69.toNode = "frontBackgroundTexture";
ROUTE69.toField = "url";
Transform24ZZZ.children[4] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "UrlSelector";
ROUTE70.fromField = "back_changed";
ROUTE70.toNode = "backBackgroundTexture";
ROUTE70.toField = "url";
Transform24ZZZ.children[5] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "UrlSelector";
ROUTE71.fromField = "left_changed";
ROUTE71.toNode = "leftBackgroundTexture";
ROUTE71.toField = "url";
Transform24ZZZ.children[6] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "UrlSelector";
ROUTE72.fromField = "right_changed";
ROUTE72.toNode = "rightBackgroundTexture";
ROUTE72.toField = "url";
Transform24ZZZ.children[7] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "UrlSelector";
ROUTE73.fromField = "top_changed";
ROUTE73.toNode = "topBackgroundTexture";
ROUTE73.toField = "url";
Transform24ZZZ.children[8] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "UrlSelector";
ROUTE74.fromField = "bottom_changed";
ROUTE74.toNode = "bottomBackgroundTexture";
ROUTE74.toField = "url";
Transform24ZZZ.children[9] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "UrlSelector";
ROUTE75.fromField = "front_changed";
ROUTE75.toNode = "frontShader";
ROUTE75.toField = "url";
Transform24ZZZ.children[10] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "UrlSelector";
ROUTE76.fromField = "back_changed";
ROUTE76.toNode = "backShader";
ROUTE76.toField = "url";
Transform24ZZZ.children[11] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "UrlSelector";
ROUTE77.fromField = "left_changed";
ROUTE77.toNode = "leftShader";
ROUTE77.toField = "url";
Transform24ZZZ.children[12] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "UrlSelector";
ROUTE78.fromField = "right_changed";
ROUTE78.toNode = "rightShader";
ROUTE78.toField = "url";
Transform24ZZZ.children[13] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "UrlSelector";
ROUTE79.fromField = "top_changed";
ROUTE79.toNode = "topShader";
ROUTE79.toField = "url";
Transform24ZZZ.children[14] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "UrlSelector";
ROUTE80.fromField = "bottom_changed";
ROUTE80.toNode = "bottomShader";
ROUTE80.toField = "url";
Transform24ZZZ.children[15] = ROUTE80;

browser.currentScene.children[2] = Transform24;

}
main ();
