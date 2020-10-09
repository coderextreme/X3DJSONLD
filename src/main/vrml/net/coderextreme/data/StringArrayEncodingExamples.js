let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.DEF = "EntryView";
Viewpoint2.description = "Hello MFString syntax";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.6,1,0.8]);
browser.currentScene.children[1] = Background3;

let Shape4 = browser.currentScene.createNode("Shape");
let Text5 = browser.currentScene.createNode("Text");
Text5.string = new MFString(new java.lang.String["One, Two, Three","","He said, \"Immel did it!\""]);
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
let FontStyle6 = browser.currentScene.createNode("FontStyle");
FontStyle6.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle6.style = "BOLD";
Text5.fontStyle = FontStyle6;

Shape4.geometry = Text5;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.6,0.4,0.2]);
Appearance7.material = Material8;

Shape4.appearance = Appearance7;

browser.currentScene.children[2] = Shape4;

