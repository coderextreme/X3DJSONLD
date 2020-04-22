var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
Transform2 = browser.currentScene.createNode("Transform");
Transform2.translation = new SFVec3f(new float[0,2,0]);
Shape3 = browser.currentScene.createNode("Shape");
Text4 = browser.currentScene.createNode("Text");
Text4.string = new MFString(new java.lang.String["Compare special character escaping"]);
FontStyle5 = browser.currentScene.createNode("FontStyle");
FontStyle5.DEF = "testFontStyle";
FontStyle5.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle5.size = 0.8;
Text4.fontStyle = FontStyle5;

Shape3.geometry = Text4;

Appearance6 = browser.currentScene.createNode("Appearance");
Appearance6.DEF = "LightBlueAppearance";
Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.1,0.7,0.7]);
Appearance6.material = Material7;

Shape3.appearance = Appearance6;

Transform2.children = new MFNode();

Transform2.children[0] = Shape3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform2;

Transform8 = browser.currentScene.createNode("Transform");
Transform8.translation = new SFVec3f(new float[-3,0,0]);
Shape9 = browser.currentScene.createNode("Shape");
Text10 = browser.currentScene.createNode("Text");
Text10.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
FontStyle11 = browser.currentScene.createNode("FontStyle");
FontStyle11.USE = "testFontStyle";
Text10.fontStyle = FontStyle11;

Shape9.geometry = Text10;

Appearance12 = browser.currentScene.createNode("Appearance");
Appearance12.USE = "LightBlueAppearance";
Shape9.appearance = Appearance12;

Transform8.children = new MFNode();

Transform8.children[0] = Shape9;

browser.currentScene.children[1] = Transform8;

Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[3,0,0]);
Shape14 = browser.currentScene.createNode("Shape");
Text15 = browser.currentScene.createNode("Text");
Text15.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
FontStyle16 = browser.currentScene.createNode("FontStyle");
FontStyle16.USE = "testFontStyle";
Text15.fontStyle = FontStyle16;

Shape14.geometry = Text15;

Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.USE = "LightBlueAppearance";
Shape14.appearance = Appearance17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

browser.currentScene.children[2] = Transform13;

