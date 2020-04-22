var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Script2 = browser.currentScene.createNode("Script");
Script2.DEF = "Browser";

Script2.setSourceCode(`ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }`)
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Script2;

Script3 = browser.currentScene.createNode("Script");
Script3.DEF = "Clouds";

Script3.setSourceCode(`ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\n"+
"'	Transform		\\n'+\n"+
"'    ' + '               	\\n';\n"+
"\n"+
"}`)
browser.currentScene.children[1] = Script3;

