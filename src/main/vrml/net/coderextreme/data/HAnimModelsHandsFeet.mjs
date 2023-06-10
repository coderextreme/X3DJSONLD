let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "HAnimModelsHandsFeet.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "YOO Kwan Hee and Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "8 February 2015";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "8 March 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "warning";
meta8.content = "not yet to scale";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "warning";
meta9.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "TODO";
meta10.content = "how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "Image";
meta11.content = "HAnimModelsHandsFeet.png";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "Image";
meta12.content = "HAnimModelsHandsFeetWithFour1mGrids.png";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "subject";
meta16.content = "X3D HAnim humanoid animation";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "identifier";
meta17.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "generator";
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "license";
meta19.content = "../license.html";
head1.meta[17] = meta19;

head = head1;

let WorldInfo21 = browser.currentScene.createNode("WorldInfo");
WorldInfo21.title = "HAnimModelsHandsFeet.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Hands and feet 10m";
browser.currentScene.children[1] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "Hands and feet 1.7m";
Viewpoint23.position = new SFVec3f(new float[0,0,1.7]);
browser.currentScene.children[2] = Viewpoint23;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[-1,1,0]);
let Inline25 = browser.currentScene.createNode("Inline");
Inline25.url = new MFString(new java.lang.String["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"]);
Transform24.children = new MFNode();

Transform24.children[0] = Inline25;

//Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "GridXY_20x20Fixed_AdjustScale";
Transform26.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let Inline27 = browser.currentScene.createNode("Inline");
Inline27.DEF = "GridXY_20x20Fixed";
Inline27.url = new MFString(new java.lang.String["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"]);
Transform26.children = new MFNode();

Transform26.children[0] = Inline27;

Transform24.children[1] = Transform26;

browser.currentScene.children[3] = Transform24;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[1,1,0]);
let Inline29 = browser.currentScene.createNode("Inline");
Inline29.url = new MFString(new java.lang.String["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"]);
Transform28.children = new MFNode();

Transform28.children[0] = Inline29;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.USE = "GridXY_20x20Fixed_AdjustScale";
Transform28.children[1] = Transform30;

browser.currentScene.children[4] = Transform28;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[-1,-1,0]);
//rotation='0 0 1 3.141593'
let Inline32 = browser.currentScene.createNode("Inline");
Inline32.url = new MFString(new java.lang.String["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"]);
Transform31.children = new MFNode();

Transform31.children[0] = Inline32;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.USE = "GridXY_20x20Fixed_AdjustScale";
Transform31.children[1] = Transform33;

browser.currentScene.children[5] = Transform31;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[1,-1,0]);
//rotation='0 0 1 3.141593'
let Inline35 = browser.currentScene.createNode("Inline");
Inline35.url = new MFString(new java.lang.String["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"]);
Transform34.children = new MFNode();

Transform34.children[0] = Inline35;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.USE = "GridXY_20x20Fixed_AdjustScale";
Transform34.children[1] = Transform36;

browser.currentScene.children[6] = Transform34;

