const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene.addMetaData("title", "MyBounce.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "3 prismatic spheres");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.DEF = "transform";
let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material12.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material12;

appearance = Appearance11;

let Sphere13 = browser.currentScene.createNode("Sphere");
geometry = Sphere13;

Transform9YYY.child = new X3D.undefined();

Transform9ZZZ.child[0] = Shape10;

browser.currentScene.children[1] = Transform9;

let Script14 = browser.currentScene.createNode("Script");
Script14.DEF = "Bounce2";
Script15.getField("set_translation").setValue("0 0 0");
Script14YYY.field = new X3D.MFNode();

Script16.getField("translation_changed").setValue("0 0 0");
Script14YYY.field = new X3D.MFNode();

Script17.getField("translation").setValue("0 0 0");
Script14YYY.field = new X3D.MFNode();

Script18.getField("velocity").setValue("0 0 0");
Script14YYY.field = new X3D.MFNode();

Script19.getField("set_fraction")Script14YYY.field = new X3D.MFNode();


Script14.setSourceCode(`ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}`)
browser.currentScene.children[2] = Script14;

let TimeSensor20 = browser.currentScene.createNode("TimeSensor");
TimeSensor20.DEF = "TourTime";
TimeSensor20.cycleInterval = 0.15;
TimeSensor20.loop = True;
browser.currentScene.children[3] = TimeSensor20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromNode = "TourTime";
ROUTE21.fromField = "cycleTime";
ROUTE21.toNode = "Bounce2";
ROUTE21.toField = "set_fraction";
browser.currentScene.children[4] = ROUTE21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "Bounce2";
ROUTE22.fromField = "translation_changed";
ROUTE22.toNode = "transform";
ROUTE22.toField = "set_translation";
browser.currentScene.children[5] = ROUTE22;

}
main ();
