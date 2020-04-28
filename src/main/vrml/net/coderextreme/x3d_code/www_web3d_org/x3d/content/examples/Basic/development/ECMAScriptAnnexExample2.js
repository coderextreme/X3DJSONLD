let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["Example 2, VRML 97 Annex C, ECMAScript Scripting Reference","https://www.web3d.org/technicalinfo/specifications/vrml97/part1/javascript.html#Example","Edits: wrapped using a Transform node for completeness, renamed duplicate url field"]);
WorldInfo2.title = "ECMAScriptAnnexExample2.wrl";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "ROOT_TRANSFORM";
let Script4 = browser.currentScene.createNode("Script");
Script4.DEF = "Example_2";
Script4.directOutput = True;
let field5 = browser.currentScene.createNode("field");
field5.name = "myself";
field5.accessType = "initializeOnly";
field5.type = "SFNode";
let Script6 = browser.currentScene.createNode("Script");
Script6.USE = "Example_2";
field5.children = new MFNode();

field5.children[0] = Script6;

Script4.field = new MFNode();

Script4.field[0] = field5;

let field7 = browser.currentScene.createNode("field");
field7.name = "root";
field7.accessType = "initializeOnly";
field7.type = "SFNode";
let Transform8 = browser.currentScene.createNode("Transform");
Transform8.USE = "ROOT_TRANSFORM";
field7.children = new MFNode();

field7.children[0] = Transform8;

Script4.field[1] = field7;

let field9 = browser.currentScene.createNode("field");
field9.name = "identifier";
field9.accessType = "initializeOnly";
field9.type = "MFString";
field9.value = "\"foo.wrl\"";
Script4.field[2] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "nodesLoaded";
field10.accessType = "inputOnly";
field10.type = "SFNode";
Script4.field[3] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "trigger_event";
field11.accessType = "inputOnly";
field11.type = "SFBool";
Script4.field[4] = field11;


Script4.setSourceCode(`ecmascript:\n"+
"\n"+
"function trigger_event(value, ts)\n"+
"{\n"+
"	// do something and then fetch values\n"+
"	Browser.createVRMLFromURL(url, myself, 'nodesLoaded');\n"+
"}\n"+
"function nodesLoaded(value, timestamp)\n"+
"{\n"+
"	if (value.length > 5)\n"+
"	{\n"+
"		// do something if more than 5 nodes in this MFNode array...\n"+
"	}\n"+
"	root.addChildren = value;\n"+
"}\n"+
"// example is missing reference to the url field defined above`)
Transform3.children = new MFNode();

Transform3.children[0] = Script4;

browser.currentScene.children[1] = Transform3;

