#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "InlineSoundSource.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "info";
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "28 October 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "4 August 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "TODO";
meta9.content = "credit for audio files";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://medialab.hmu.gr/minipages/x3domAudio";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "InlineSoundSource.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.DEF = "NAV";
children[1] = NavigationInfo16;

Background Background17 = createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]);
Background17.frontUrl = new MFString(new java.lang.String["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]);
Background17.leftUrl = new MFString(new java.lang.String["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]);
Background17.rightUrl = new MFString(new java.lang.String["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]);
Background17.topUrl = new MFString(new java.lang.String["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]);
children[2] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "Camera001";
Viewpoint18.description = "Camera001";
Viewpoint18.farDistance = 0;
Viewpoint18.nearDistance = 1;
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.523599]);
Viewpoint18.position = new SFVec3f(new float[0,2000,3500]);
children[3] = Viewpoint18;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "Floor";
Transform19.translation = new SFVec3f(new float[1.241,0,0.358]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Appearance21.DEF = "WireColor";
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.122,0.114,0.125]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.DEF = "Box001-GEOMETRY";
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]);
IndexedFaceSet23.solid = False;
Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.point = new MFVec3f(new float[-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000]);
IndexedFaceSet23.coord = Coordinate24;

Normal Normal25 = createNode("Normal");
Normal25.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet23.normal = Normal25;

Shape20.geometry = IndexedFaceSet23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[4] = Transform19;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "InlineScene";
Inline Inline27 = createNode("Inline");
Inline27.DEF = "inline";
Inline27.url = new MFString(new java.lang.String["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"]);
Transform26.children = new MFNode();

Transform26.children[0] = Inline27;

children[5] = Transform26;

}
