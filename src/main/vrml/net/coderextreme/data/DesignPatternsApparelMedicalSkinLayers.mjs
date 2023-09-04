let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "creator";
meta6.content = "Dick Puk";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "created";
meta7.content = "23 December 2022";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "2 July 2023";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "DesignPatternsApparelVariations.txt";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "warning";
meta13.content = "Under development. This template example does not produce renderable HAnim models.";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

head = head1;

let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "HAnimHumanoid skin design patterns for apparel, medical";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.skyColor = new MFColor(new float[0,0.6,0.6]);
browser.currentScene.children[1] = Background18;

let Group19 = browser.currentScene.createNode("Group");
Group19.DEF = "MultipleHumanoids";
let MetadataString20 = browser.currentScene.createNode("MetadataString");
MetadataString20.name = "HAnimArchitecture";
MetadataString20.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString20.value = new MFString(new java.lang.String["E.4 Multiple humanoids per file"]);
Group19.metadata = MetadataString20;

browser.currentScene.children[2] = Group19;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "ViewHelpText";
Viewpoint21.description = "Select text to see website";
Viewpoint21.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[3] = Viewpoint21;

let Anchor22 = browser.currentScene.createNode("Anchor");
Anchor22.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor22.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]);
Anchor22.parameter = new MFString(new java.lang.String["target=blank"]);
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Text26 = browser.currentScene.createNode("Text");
Text26.string = new MFString(new java.lang.String["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]);
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.family = new MFString(new java.lang.String["SANS"]);
FontStyle27.style = "BOLD";
FontStyle27.size = 0.6;
FontStyle27.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text26.fontStyle = FontStyle27;

Shape23.geometry = Text26;

Anchor22.children = new MFNode();

Anchor22.children[0] = Shape23;

let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.transparency = 1;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Box31 = browser.currentScene.createNode("Box");
Box31.size = new SFVec3f(new float[11,2,0.001]);
Shape28.geometry = Box31;

Anchor22.children[1] = Shape28;

browser.currentScene.children[4] = Anchor22;

