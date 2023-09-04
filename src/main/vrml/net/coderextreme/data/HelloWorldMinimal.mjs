let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HelloWorldMinimal.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Hello World minimal example scene.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "19 January 2020";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "24 January 2020";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "https://helloworldcollection.de";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "https://en.wiktionary.org/wiki/Hello_World";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

head = head1;

let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "HelloWorldMinimal.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo17;

let Shape18 = browser.currentScene.createNode("Shape");
let Text19 = browser.currentScene.createNode("Text");
Text19.string = new MFString(new java.lang.String["hello, world"]);
Shape18.geometry = Text19;

browser.currentScene.children[1] = Shape18;

