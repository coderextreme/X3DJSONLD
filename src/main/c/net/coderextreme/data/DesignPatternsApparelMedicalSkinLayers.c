#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Dick Puk";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "23 December 2022";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "2 July 2023";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "DesignPatternsApparelVariations.txt";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "warning";
meta13.content = "Under development. This template example does not produce renderable HAnim models.";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

head = head1;

WorldInfo WorldInfo17 = createNode("WorldInfo");
WorldInfo17.title = "HAnimHumanoid skin design patterns for apparel, medical";
children = new MFNode();

children[0] = WorldInfo17;

Background Background18 = createNode("Background");
Background18.skyColor = new MFColor(new float[0,0.6,0.6]);
children[1] = Background18;

Group Group19 = createNode("Group");
Group19.DEF = "MultipleHumanoids";
MetadataString MetadataString20 = createNode("MetadataString");
MetadataString20.name = "HAnimArchitecture";
MetadataString20.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString20.value = new MFString(new java.lang.String["E.4 Multiple humanoids per file"]);
Group19.metadata = MetadataString20;

children[2] = Group19;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.DEF = "ViewHelpText";
Viewpoint21.description = "Select text to see website";
Viewpoint21.position = new SFVec3f(new float[0,0,12]);
children[3] = Viewpoint21;

Anchor Anchor22 = createNode("Anchor");
Anchor22.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor22.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]);
Anchor22.parameter = new MFString(new java.lang.String["target=blank"]);
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Text Text26 = createNode("Text");
Text26.string = new MFString(new java.lang.String["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]);
FontStyle FontStyle27 = createNode("FontStyle");
FontStyle27.family = new MFString(new java.lang.String["SANS"]);
FontStyle27.style = "BOLD";
FontStyle27.size = 0.6;
FontStyle27.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text26.fontStyle = FontStyle27;

Shape23.geometry = Text26;

Anchor22.children = new MFNode();

Anchor22.children[0] = Shape23;

Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.transparency = 1;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Box Box31 = createNode("Box");
Box31.size = new SFVec3f(new float[11,2,0.001]);
Shape28.geometry = Box31;

Anchor22.children[1] = Shape28;

children[4] = Anchor22;

}
