#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:07:05 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:05 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "gurke";
Transform Transform10 = createNode("Transform");
Transform10.translation = new SFVec3f(new float[0.000574281,-5.80335e-10,-0.00857843]);
Transform10.rotation = new SFRotation(new float[0,1,0,3.35421]);
Transform10.scale = new SFVec3f(new float[0.876871,0.87687,0.87687]);
Transform10.scaleOrientation = new SFRotation(new float[0,1,0,0.517921]);
Transform Transform11 = createNode("Transform");
Transform11.DEF = "_1";
Transform11.translation = new SFVec3f(new float[0.0364191,-0.00170928,0.0149654]);
Transform11.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform11.scale = new SFVec3f(new float[0.0832053,0.0832053,0.0832053]);
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["gurke.jpg"]);
Appearance13.texture = ImageTexture14;

Shape12.appearance = Appearance13;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,9,8,10,11,-1,11,10,12,13,-1,13,12,14,15,-1,15,14,16,17,-1,17,16,18,19,-1,19,18,20,21,-1,21,20,22,23,-1,23,22,24,25,-1,25,24,26,27,-1,27,26,28,29,-1,29,28,30,31,-1,31,30,1,0,-1,32,30,28,-1,32,1,30,-1,32,28,26,-1,32,26,24,-1,32,24,22,-1,32,22,20,-1,32,20,18,-1,32,18,16,-1,32,16,14,-1,32,14,12,-1,32,12,10,-1,32,10,8,-1,32,8,6,-1,32,6,4,-1,32,4,2,-1,32,2,1,-1,33,0,3,-1,33,31,0,-1,33,3,5,-1,33,5,7,-1,33,7,9,-1,33,9,11,-1,33,11,13,-1,33,13,15,-1,33,15,17,-1,33,17,19,-1,33,19,21,-1,33,21,23,-1,33,23,25,-1,33,25,27,-1,33,27,29,-1,33,29,31,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0.490312,0.996266,0.490312,0.996266,0.677726,0.959883,0.677726,0.959883,0.836555,0.856275,0.836555,0.856275,0.942681,0.701214,0.942681,0.701214,0.979947,0.518307,0.979947,0.518307,0.942681,0.3354,0.942681,0.3354,0.836555,0.180339,0.836555,0.180339,0.677726,0.0767304,0.677726,0.0767304,0.490312,0.0403481,0.490312,0.0403481,0.312252,0.0767304,0.312252,0.0767304,0.161299,0.180339,0.161299,0.180339,0.0604357,0.3354,0.0604357,0.3354,0.0250175,0.518307,0.0250175,0.518307,0.0604361,0.701214,0.0604361,0.701214,0.161299,0.856275,0.161299,0.856275,0.312252,0.959883,0.312252,0.959883,0.490312,0.518307,0.490312,0.518307]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[0.033173,0.464535,-0.00797164,0.033173,0.464535,0.0490569,0.175181,0.449364,0.0490569,0.175181,0.449364,-0.00797163,0.322014,0.348452,0.049057,0.322014,0.348452,-0.00797156,0.420732,0.200711,0.0490571,0.420732,0.200711,-0.00797145,0.463033,0.0264382,0.0490572,0.463033,0.0264381,-0.00797133,0.419486,-0.147319,0.0490574,0.419486,-0.147319,-0.0079712,0.318591,-0.292152,0.0490575,0.318591,-0.292152,-0.0079711,0.17759,-0.402302,0.0490576,0.17759,-0.402302,-0.00797102,3.36984e-7,-0.428958,0.0490576,3.36984e-7,-0.428958,-0.007971,-0.174272,-0.394294,0.0490576,-0.174272,-0.394294,-0.00797102,-0.322014,-0.295576,0.0490575,-0.322014,-0.295576,-0.00797109,-0.419785,-0.147443,0.0490574,-0.419785,-0.147443,-0.0079712,-0.455396,0.0264382,0.0490572,-0.455396,0.0264382,-0.00797133,-0.414793,0.198251,0.0490571,-0.414793,0.198251,-0.00797145,-0.307175,0.370659,0.049057,-0.307175,0.370659,-0.00797157,-0.174272,0.44717,0.0490569,-0.174272,0.44717,-0.00797163,2.68221e-7,0.0264382,0.0490572,2.68221e-7,0.0264382,-0.00797133]);
IndexedFaceSet15.coord = Coordinate17;

Shape12.geometry = IndexedFaceSet15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform18 = createNode("Transform");
Transform18.USE = "_1";
Transform9.children[1] = Transform18;

children[1] = Transform9;

}
