var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = [1,1,1];
browser.currentScene.children = [];

browser.currentScene.children[0] = Background2;

Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Default View";
Viewpoint3.position = [0,0,15];
browser.currentScene.children[1] = Viewpoint3;

Shape4 = browser.currentScene.createNode("Shape");
//Empty string \"\" means to skip a line
//The ampersand escape characters are based on XML rules
//apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute
//ampersand & is &amp; and needs to be escaped
//quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute
//quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\"
//backslash \\ is used as escape character for \" (and itself) in X3D
//character entities are listed in HTML specification and are good for any XML
Text5 = browser.currentScene.createNode("Text");
Text5.DEF = "DefaultText";
Text5.string = ["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi Π is &#928; XML character entity"];
FontStyle6 = browser.currentScene.createNode("FontStyle");
FontStyle6.DEF = "CenteredFontStyle";
FontStyle6.justify = ["MIDDLE","MIDDLE"];
Text5.fontStyle = FontStyle6;

Shape4.geometry = Text5;

Appearance7 = browser.currentScene.createNode("Appearance");
Material8 = browser.currentScene.createNode("Material");
Material8.DEF = "DefaultMaterial";
Material8.diffuseColor = [0.2,0.2,0.2];
Appearance7.material = Material8;

Shape4.appearance = Appearance7;

browser.currentScene.children[2] = Shape4;

