let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Default View";
Viewpoint3.position = new SFVec3f(new float[0,0,15]);
browser.currentScene.children[1] = Viewpoint3;

let Shape4 = browser.currentScene.createNode("Shape");
// Empty string \"\" means to skip a line 
// The ampersand escape characters are based on XML rules 
// apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute 
// ampersand & is &amp; and needs to be escaped 
// quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute 
// quotation \" can be used within an X3D string if escaped with backslash \\ as \\\" 
// backslash \\ is used as escape character for \" (and itself) in X3D 
// character entities are listed in HTML specification and are good for any XML 
let Text5 = browser.currentScene.createNode("Text");
Text5.DEF = "DefaultText";
Text5.string = new MFString(new java.lang.String["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe  '  is &apos;","ampersand & is &amp;","quote mark  \"  is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi Π is &#928; XML character entity"]);
let FontStyle6 = browser.currentScene.createNode("FontStyle");
FontStyle6.DEF = "CenteredFontStyle";
FontStyle6.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text5.fontStyle = FontStyle6;

Shape4.geometry = Text5;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.DEF = "DefaultMaterial";
Material8.diffuseColor = new SFColor(new float[0.2,0.2,0.2]);
Appearance7.material = Material8;

Shape4.appearance = Appearance7;

browser.currentScene.children[2] = Shape4;

