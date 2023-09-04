#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ArchHalf.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform > scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Michele Foti, Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "15 December 2014";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "16 February 2016";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "ArchModelingDiagrams.pdf";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://en.wikipedia.org/wiki/Arch";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

head = head1;

Shape Shape12 = createNode("Shape");
Shape12.DEF = "Arch";
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.DEF = "MaterialNode";
Material14.diffuseColor = new SFColor(new float[1,0.75,0.25]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.DEF = "ArchIndex";
IndexedFaceSet15.solid = False;
IndexedFaceSet15.convex = False;
IndexedFaceSet15.coordIndex = new MFInt32(new int[31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1]);
Coordinate Coordinate16 = createNode("Coordinate");
Coordinate16.DEF = "ArchChord";
Coordinate16.point = new MFVec3f(new float[2,0,0,1.997498,0.1,0,1.989975,0.2,0,1.977372,0.3,0,1.959592,0.4,0,1.936492,0.5,0,1.907878,0.6,0,1.873499,0.7,0,1.83303,0.8,0,1.786057,0.9,0,1.732051,1,0,1.670329,1.1,0,1.6,1.2,0,1.519868,1.3,0,1.428286,1.4,0,1.322876,1.5,0,1.2,1.6,0,1.053565,1.7,0,0.9020948,1.785,0,0.7599342,1.85,0,0.6244998,1.9,0,0.5425634,1.925,0,0.4444097,1.95,0,0.3618163,1.967,0,0.2821347,1.98,0,0.1997498,1.99,0,0.1671855,1.993,0,0.1413329,1.995,0,0.1095034,1.997,0,0.08942036,1.998,0,0.06323764,1.999,0,0,2,0,-0.06323764,1.999,0,-0.08942036,1.998,0,-0.1095034,1.997,0,-0.1413329,1.995,0,-0.1671855,1.993,0,-0.1997498,1.99,0,-0.2821347,1.98,0,-0.3618163,1.967,0,-0.4444097,1.95,0,-0.5425634,1.925,0,-0.6244998,1.9,0,-0.7599342,1.85,0,-0.9020948,1.785,0,-1.053565,1.7,0,-1.2,1.6,0,-1.322876,1.5,0,-1.428286,1.4,0,-1.519868,1.3,0,-1.6,1.2,0,-1.670329,1.1,0,-1.732051,1,0,-1.786057,0.9,0,-1.83303,0.8,0,-1.873499,0.7,0,-1.907878,0.6,0,-1.936492,0.5,0,-1.959592,0.4,0,-1.977372,0.3,0,-1.989975,0.2,0,-1.997498,0.1,0,-2,0,0,2,0,3,1.997498,0.1,3,1.989975,0.2,3,1.977372,0.3,3,1.959592,0.4,3,1.936492,0.5,3,1.907878,0.6,3,1.873499,0.7,3,1.83303,0.8,3,1.786057,0.9,3,1.732051,1,3,1.670329,1.1,3,1.6,1.2,3,1.519868,1.3,3,1.428286,1.4,3,1.322876,1.5,3,1.2,1.6,3,1.053565,1.7,3,0.9020948,1.785,3,0.7599342,1.85,3,0.6244998,1.9,3,0.5425634,1.925,3,0.4444097,1.95,3,0.3618163,1.967,3,0.2821347,1.98,3,0.1997498,1.99,3,0.1671855,1.993,3,0.1413329,1.995,3,0.1095034,1.997,3,0.08942036,1.998,3,0.06323764,1.999,3,0,2,3,-0.06323764,1.999,3,-0.08942036,1.998,3,-0.1095034,1.997,3,-0.1413329,1.995,3,-0.1671855,1.993,3,-0.1997498,1.99,3,-0.2821347,1.98,3,-0.3618163,1.967,3,-0.4444097,1.95,3,-0.5425634,1.925,3,-0.6244998,1.9,3,-0.7599342,1.85,3,-0.9020948,1.785,3,-1.053565,1.7,3,-1.2,1.6,3,-1.322876,1.5,3,-1.428286,1.4,3,-1.519868,1.3,3,-1.6,1.2,3,-1.670329,1.1,3,-1.732051,1,3,-1.786057,0.9,3,-1.83303,0.8,3,-1.873499,0.7,3,-1.907878,0.6,3,-1.936492,0.5,3,-1.959592,0.4,3,-1.977372,0.3,3,-1.989975,0.2,3,-1.997498,0.1,3,-2,0,3,-2,-1,3,-2.5,-1,3,-2.5,2.5,3,2.5,2.5,3,2.5,-1,3,2,-1,3,-2,-1,0,-2.5,-1,0,-2.5,2.5,0,2.5,2.5,0,2.5,-1,0,2,-1,0,2.5,0,3,2.5,0,0,-2.5,0,3,-2.5,0,0,-2.5,2,3,-2,2,3,-2,2,0,-2.5,2,0,-2,2.5,3,-2,2.5,0,0,2.5,3,0,2.5,0,2,2,3,2.5,2,3,2.5,2,0,2,2,0,2,2.5,3,2,2.5,0]);
IndexedFaceSet15.coord = Coordinate16;

Shape12.geometry = IndexedFaceSet15;

children = new MFNode();

children[0] = Shape12;

}
