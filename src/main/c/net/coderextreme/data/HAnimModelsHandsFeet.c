#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "HAnimModelsHandsFeet.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Kwan Hee YOO and Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "8 February 2015";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 15 Sep 2025 05:20:09 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "warning";
meta8.content = "not yet to scale";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "warning";
meta9.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "HAnimModelsHandsFeet.png";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "HAnimModelsHandsFeetWithFour1mGrids.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "subject";
meta16.content = "X3D HAnim humanoid animation";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "identifier";
meta17.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d";
head1.meta[15] = meta17;

head = head1;

WorldInfo WorldInfo19 = createNode("WorldInfo");
WorldInfo19.title = "HAnimModelsHandsFeet.x3d";
children = new MFNode();

children[0] = WorldInfo19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.description = "Hands and feet 10m";
children[1] = Viewpoint20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.description = "Hands and feet 1.7m";
Viewpoint21.position = new SFVec3f(new float[0,0,1.7]);
children[2] = Viewpoint21;

Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[-1,1,0]);
Inline Inline23 = createNode("Inline");
Inline23.url = new MFString(new java.lang.String["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"]);
Transform22.children = new MFNode();

Transform22.children[0] = Inline23;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "GridXY_20x20Fixed_AdjustScale";
Transform24.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Inline Inline25 = createNode("Inline");
Inline25.DEF = "GridXY_20x20Fixed";
Inline25.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"]);
Transform24.children = new MFNode();

Transform24.children[0] = Inline25;

Transform22.children[1] = Transform24;

children[3] = Transform22;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[1,1,0]);
Inline Inline27 = createNode("Inline");
Inline27.url = new MFString(new java.lang.String["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"]);
Transform26.children = new MFNode();

Transform26.children[0] = Inline27;

Transform Transform28 = createNode("Transform");
Transform28.USE = "GridXY_20x20Fixed_AdjustScale";
Transform26.children[1] = Transform28;

children[4] = Transform26;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[-1,-1,0]);
Inline Inline30 = createNode("Inline");
Inline30.url = new MFString(new java.lang.String["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"]);
Transform29.children = new MFNode();

Transform29.children[0] = Inline30;

Transform Transform31 = createNode("Transform");
Transform31.USE = "GridXY_20x20Fixed_AdjustScale";
Transform29.children[1] = Transform31;

children[5] = Transform29;

Transform Transform32 = createNode("Transform");
Transform32.translation = new SFVec3f(new float[1,-1,0]);
Inline Inline33 = createNode("Inline");
Inline33.url = new MFString(new java.lang.String["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"]);
Transform32.children = new MFNode();

Transform32.children[0] = Inline33;

Transform Transform34 = createNode("Transform");
Transform34.USE = "GridXY_20x20Fixed_AdjustScale";
Transform32.children[1] = Transform34;

children[6] = Transform32;

}
