let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExampleExternPrototype1.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "MyExternProtoName";
ExternProtoDeclare3.appinfo = "Show example ExternProto syntax for a nonexistent prototype with simple-type fields";
ExternProtoDeclare3.url = new MFString(new java.lang.String["ExampleExternPrototype1.x3d#MyExternProtoName","https://www.web3d.org/x3d/content/examples/Basic/development/ExampleExternPrototype1.x3d#MyExternProtoName","ExampleExternPrototype1.wrl#MyExternProtoName","https://www.web3d.org/x3d/content/examples/Basic/development/ExampleExternPrototype1.wrl#MyExternProtoName"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "field1";
field4.accessType = "inputOnly";
field4.type = "SFBool";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "field2";
field5.accessType = "outputOnly";
field5.type = "SFFloat";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "field3";
field6.accessType = "initializeOnly";
field6.type = "SFInt32";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "field4";
field7.accessType = "inputOutput";
field7.type = "SFString";
ExternProtoDeclare3.field[3] = field7;

browser.currentScene.children[1] = ExternProtoDeclare3;

let ProtoInstance8 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance8.name = "MyExternProtoName";
let fieldValue9 = browser.currentScene.createNode("fieldValue");
fieldValue9.name = "field3";
fieldValue9.value = "3";
ProtoInstance8.fieldValue = new MFNode();

ProtoInstance8.fieldValue[0] = fieldValue9;

browser.currentScene.children[2] = ProtoInstance8;

