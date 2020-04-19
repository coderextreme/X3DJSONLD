var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.DEF = "EntryView";
Viewpoint2.description = "Hello MFString syntax";
browser.currentScene.children = [];

browser.currentScene.children[0] = Viewpoint2;

Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = [0.6,1,0.8];
browser.currentScene.children[1] = Background3;

Shape4 = browser.currentScene.createNode("Shape");
Text5 = browser.currentScene.createNode("Text");
Text5.string = ["One, Two, Three","","He said, \"Immel did it!\""];
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
FontStyle6 = browser.currentScene.createNode("FontStyle");
FontStyle6.justify = ["MIDDLE","MIDDLE"];
FontStyle6.style = "BOLD";
Text5.fontStyle = FontStyle6;

Shape4.geometry = Text5;

Appearance7 = browser.currentScene.createNode("Appearance");
Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = [0.6,0.4,0.2];
Appearance7.material = Material8;

Shape4.appearance = Appearance7;

browser.currentScene.children[2] = Shape4;

