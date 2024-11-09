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
Transform9.DEF = "Tomate";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "tomate";
Transform10.translation = new SFVec3f(new float[0.0118001,-0.0967947,-0.00506372]);
Transform10.rotation = new SFRotation(new float[0,-1,0,1.05718]);
Transform10.scale = new SFVec3f(new float[1,0.999999,1]);
Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

children[1] = Transform9;

Transform Transform11 = createNode("Transform");
Transform11.DEF = "_1";
Transform11.translation = new SFVec3f(new float[0.00677532,0,0.0379922]);
Transform11.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform11.scale = new SFVec3f(new float[0.0809931,0.0809931,0.0809931]);
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["tomate.jpg"]);
Appearance13.texture = ImageTexture14;

Shape12.appearance = Appearance13;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.solid = False;
IndexedFaceSet15.texCoordIndex = new MFInt32(new int[1,0,34,11,-1,11,34,33,12,-1,12,33,15,19,-1,19,15,14,20,-1,20,14,13,21,-1,21,13,32,16,-1,16,32,31,17,-1,17,31,10,22,-1,22,10,9,23,-1,23,9,8,24,-1,24,8,7,25,-1,25,7,30,6,-1,6,30,2,26,-1,27,3,5,18,-1,18,5,0,1,-1,35,5,3,-1,35,0,5,-1,35,2,30,-1,35,30,7,-1,35,7,8,-1,35,8,9,-1,35,9,10,-1,35,10,31,-1,35,31,32,-1,35,32,13,-1,35,13,14,-1,35,14,15,-1,35,15,33,-1,35,33,34,-1,35,34,0,-1,4,1,11,-1,4,18,1,-1,4,11,12,-1,4,12,19,-1,4,19,20,-1,4,20,21,-1,4,21,16,-1,4,16,17,-1,4,17,22,-1,4,22,23,-1,4,23,24,-1,4,24,25,-1,4,25,6,-1,4,6,26,-1,4,27,18,-1,35,28,2,-1,35,3,28,-1,26,2,28,29,-1,28,3,27,29,-1,4,26,29,-1,4,29,27,-1]);
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,9,8,10,11,-1,11,10,12,13,-1,13,12,14,15,-1,15,14,16,17,-1,17,16,18,19,-1,19,18,20,21,-1,21,20,22,23,-1,23,22,24,25,-1,25,24,26,27,-1,28,29,30,31,-1,31,30,1,0,-1,32,30,29,-1,32,1,30,-1,32,26,24,-1,32,24,22,-1,32,22,20,-1,32,20,18,-1,32,18,16,-1,32,16,14,-1,32,14,12,-1,32,12,10,-1,32,10,8,-1,32,8,6,-1,32,6,4,-1,32,4,2,-1,32,2,1,-1,33,0,3,-1,33,31,0,-1,33,3,5,-1,33,5,7,-1,33,7,9,-1,33,9,11,-1,33,11,13,-1,33,13,15,-1,33,15,17,-1,33,17,19,-1,33,19,21,-1,33,21,23,-1,33,23,25,-1,33,25,27,-1,33,28,31,-1,32,34,26,-1,32,29,34,-1,27,26,34,35,-1,34,29,28,35,-1,33,27,35,-1,33,35,28,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0.953494,0.757911,0.953494,0.757911,0.444993,0.967513,0.611019,0.958859,0.495388,0.500507,0.82395,0.918304,0.236494,0.973863,0.0746257,0.839809,0.0298545,0.638636,0.0343901,0.471471,0.0950904,0.281058,0.988694,0.560212,0.94997,0.374325,0.553334,0.0255091,0.729702,0.0867828,0.866888,0.210656,0.374862,0.0584857,0.213686,0.144183,0.82395,0.918304,0.866888,0.210656,0.729702,0.0867828,0.553334,0.0255091,0.0950904,0.281058,0.0343901,0.471471,0.0298545,0.638636,0.0746257,0.839809,0.444993,0.967513,0.62207,0.953294,0.510969,0.932124,0.510969,0.932124,0.236494,0.973863,0.213686,0.144183,0.374862,0.0584858,0.94997,0.374325,0.988694,0.560212,0.495388,0.500507]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[0.454156,0.256197,-0.0292932,0.454156,0.256197,0.0292929,0.489053,0.0594251,0.029293,0.489053,0.0594251,-0.0292931,0.450663,-0.125589,0.0292932,0.450663,-0.12559,-0.029293,0.368297,-0.288491,0.0292933,0.368297,-0.288491,-0.0292929,0.232294,-0.411783,0.0292934,0.232294,-0.411783,-0.0292928,0.057446,-0.472769,0.0292934,0.057446,-0.472769,-0.0292927,-0.12679,-0.454971,0.0292934,-0.12679,-0.454971,-0.0292927,-0.288491,-0.368297,0.0292933,-0.288491,-0.368297,-0.0292928,-0.407472,-0.229861,0.0292932,-0.407472,-0.229861,-0.0292929,-0.468369,-0.0372776,0.0292931,-0.468369,-0.0372776,-0.029293,-0.47292,0.131792,0.029293,-0.47292,0.131792,-0.0292932,-0.428003,0.335259,0.0292928,-0.428003,0.335259,-0.0292933,-0.265609,0.47084,0.0292927,-0.265609,0.47084,-0.0292934,-0.0564312,0.464419,0.0292927,-0.0564312,0.464419,-0.0292934,0.12559,0.450662,-0.0292934,0.114634,0.456202,0.0292927,0.32573,0.415837,0.0292928,0.32573,0.415837,-0.0292934,0,2.0952e-8,0.0292931,0,-2.0952e-8,-0.0292931,0.0154469,0.429592,0.0292928,0.0154469,0.429592,-0.0292934]);
IndexedFaceSet15.coord = Coordinate17;

Shape12.geometry = IndexedFaceSet15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

children[2] = Transform11;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0.0247079,-4.80884e-10,-0.0482792]);
Transform18.rotation = new SFRotation(new float[0,-1,0,1.29688]);
Transform18.scale = new SFVec3f(new float[0.86924,0.86924,0.86924]);
Transform Transform19 = createNode("Transform");
Transform19.USE = "_1";
Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

children[3] = Transform18;

}
