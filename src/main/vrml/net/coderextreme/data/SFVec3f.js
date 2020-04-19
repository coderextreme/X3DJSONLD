var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = [];

browser.currentScene.children[0] = NavigationInfo2;

Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "transform";
Shape4 = browser.currentScene.createNode("Shape");
Appearance5 = browser.currentScene.createNode("Appearance");
Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = [0.7,0.7,0.7];
Material6.specularColor = [0.5,0.5,0.5];
Appearance5.material = Material6;

Shape4.appearance = Appearance5;

Sphere7 = browser.currentScene.createNode("Sphere");
Shape4.geometry = Sphere7;

Transform3.children = [];

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;

Script8 = browser.currentScene.createNode("Script");
Script8.DEF = "Bounce";
field9 = browser.currentScene.createNode("field");
field9.name = "set_translation";
field9.accessType = "inputOnly";
field9.type = "SFVec3f";
field9.value = "0 0 0";
Script8.field = [];

Script8.field[0] = field9;

field10 = browser.currentScene.createNode("field");
field10.name = "translation_changed";
field10.accessType = "outputOnly";
field10.type = "SFVec3f";
field10.value = "0 0 0";
Script8.field[1] = field10;

field11 = browser.currentScene.createNode("field");
field11.name = "translation";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
field11.value = "0 0 0";
Script8.field[2] = field11;

field12 = browser.currentScene.createNode("field");
field12.name = "velocity";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
Script8.field[3] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "set_fraction";
field13.accessType = "inputOnly";
field13.type = "SFTime";
Script8.field[4] = field13;


Script8.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[2] = Script8;

TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "TourTime";
TimeSensor14.cycleInterval = 0.15;
TimeSensor14.loop = True;
browser.currentScene.children[3] = TimeSensor14;

ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromNode = "TourTime";
ROUTE15.fromField = "cycleTime";
ROUTE15.toNode = "Bounce";
ROUTE15.toField = "set_fraction";
browser.currentScene.children[4] = ROUTE15;

ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "Bounce";
ROUTE16.fromField = "translation_changed";
ROUTE16.toNode = "transform";
ROUTE16.toField = "set_translation";
browser.currentScene.children[5] = ROUTE16;

