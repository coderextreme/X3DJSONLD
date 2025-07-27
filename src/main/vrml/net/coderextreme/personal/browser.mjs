const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "browser.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/browser.x3d");
scene.addMetaData("description", "a script test with embedded \n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote "");
await browser .loadComponents (scene);
let Script8 = browser.currentScene.createNode("Script");
Script8.DEF = "Browser";

Script8.setSourceCode(`ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }`)
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Script8;

let Script9 = browser.currentScene.createNode("Script");
Script9.DEF = "Clouds";

Script9.setSourceCode(`ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\n"+
"'	Transform		\\n'+\n"+
"'    ' + '               	\\n';\n"+
"\n"+
"}`)
browser.currentScene.children[1] = Script9;

}
main ();
