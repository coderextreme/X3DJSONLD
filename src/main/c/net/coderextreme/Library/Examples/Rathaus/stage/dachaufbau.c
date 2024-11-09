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
meta3.content = "Sun, 15 Mar 2015 09:33:04 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.7, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Wed, 25 Mar 2015 09:16:02 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "dachaufbau";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "lwall";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.DEF = "_1";
Material13.diffuseColor = new SFColor(new float[1,0.794631,0.389824]);
Appearance12.material = Material13;

ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.DEF = "_2";
ImageTexture14.url = new MFString(new java.lang.String["dachaufbau_s.jpg"]);
Appearance12.texture = ImageTexture14;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.DEF = "nurbsToPoly166_0Geo";
IndexedFaceSet15.convex = False;
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[-0.00633788,0.0147803,-0.00633788,0.997661,0.993662,0.997661,0.993662,0.0147803]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.DEF = "nurbsToPoly166GeoPoints";
Coordinate17.point = new MFVec3f(new float[-0.589,4.326,-7.147,-0.589,5.532,-7.147,2.464,5.532,-7.152,2.464,4.326,-7.152]);
IndexedFaceSet15.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet15;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

children[1] = Transform9;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "zier_switch";
Switch Switch19 = createNode("Switch");
Switch19.whichChoice = 1;
Transform Transform20 = createNode("Transform");
Transform20.DEF = "kegl";
Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[0,0.947,0.502001]);
Transform Transform22 = createNode("Transform");
Transform22.DEF = "zk1";
Inline Inline23 = createNode("Inline");
Inline23.url = new MFString(new java.lang.String["zierkegel.x3d"]);
Inline23.bboxSize = new SFVec3f(new float[0.19,0.357,0.223]);
Inline23.bboxCenter = new SFVec3f(new float[-0.632,6.2545,-7.1155]);
Transform22.children = new MFNode();

Transform22.children[0] = Inline23;

Transform21.children = new MFNode();

Transform21.children[0] = Transform22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,1.664,1.189]);
Transform Transform25 = createNode("Transform");
Transform25.USE = "zk1";
Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

Transform20.children[1] = Transform24;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,0.947,1.8795]);
Transform Transform27 = createNode("Transform");
Transform27.USE = "zk1";
Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform20.children[2] = Transform26;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,0,2.384]);
Transform Transform29 = createNode("Transform");
Transform29.USE = "zk1";
Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform20.children[3] = Transform28;

Transform Transform30 = createNode("Transform");
Transform30.USE = "zk1";
Transform20.children[4] = Transform30;

Switch19.children = new MFNode();

Switch19.children[0] = Transform20;

Transform Transform31 = createNode("Transform");
Switch19.children[1] = Transform31;

Transform18.children = new MFNode();

Transform18.children[0] = Switch19;

children[2] = Transform18;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "da_dach";
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.ambientIntensity = 0.341818;
Material35.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance34.material = Material35;

ImageTexture ImageTexture36 = createNode("ImageTexture");
ImageTexture36.url = new MFString(new java.lang.String["dachziegel.jpg"]);
Appearance34.texture = ImageTexture36;

TextureTransform TextureTransform37 = createNode("TextureTransform");
TextureTransform37.scale = new SFVec2f(new float[2,2]);
Appearance34.textureTransform = TextureTransform37;

Shape33.appearance = Appearance34;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.DEF = "nurbsToPoly164_0Geo";
IndexedFaceSet38.convex = False;
IndexedFaceSet38.coordIndex = new MFInt32(new int[4,1,2,5,-1,0,4,5,3,-1]);
Coordinate Coordinate39 = createNode("Coordinate");
Coordinate39.DEF = "nurbsToPoly164GeoPoints";
Coordinate39.point = new MFVec3f(new float[-0.589,5.532,-7.147,-0.585,5.532,-4.697,2.467,5.532,-4.701,2.464,5.532,-7.152,-0.587,7.389,-5.922,2.466,7.389,-5.927]);
IndexedFaceSet38.coord = Coordinate39;

Shape33.geometry = IndexedFaceSet38;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

children[3] = Transform32;

Transform Transform40 = createNode("Transform");
Transform Transform41 = createNode("Transform");
Transform41.DEF = "rwall";
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.USE = "_1";
Appearance43.material = Material44;

ImageTexture ImageTexture45 = createNode("ImageTexture");
ImageTexture45.USE = "_2";
Appearance43.texture = ImageTexture45;

Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.DEF = "nurbsToPoly165_0Geo";
IndexedFaceSet46.convex = False;
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate47 = createNode("TextureCoordinate");
TextureCoordinate47.point = new MFVec2f(new float[-0.0303601,0.997813,0,0,1,0,0.96964,0.997813]);
IndexedFaceSet46.texCoord = TextureCoordinate47;

Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.DEF = "nurbsToPoly165GeoPoints";
Coordinate48.point = new MFVec3f(new float[-0.585,5.532,-4.697,-0.585,4.326,-4.697,2.467,4.326,-4.701,2.467,5.532,-4.701]);
IndexedFaceSet46.coord = Coordinate48;

Shape42.geometry = IndexedFaceSet46;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

children[4] = Transform40;

Transform Transform49 = createNode("Transform");
Transform49.DEF = "front";
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,0.794631,0.389824]);
Appearance51.material = Material52;

ImageTexture ImageTexture53 = createNode("ImageTexture");
ImageTexture53.url = new MFString(new java.lang.String["dachaufbau.jpg"]);
Appearance51.texture = ImageTexture53;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet54 = createNode("IndexedFaceSet");
IndexedFaceSet54.DEF = "nurbsToPoly167_0Geo";
IndexedFaceSet54.convex = False;
IndexedFaceSet54.coordIndex = new MFInt32(new int[65,33,34,64,-1,36,37,38,39,-1,42,43,44,45,-1,53,54,55,56,-1,59,60,61,62,-1,35,36,34,-1,40,58,62,64,34,36,-1,49,50,48,-1,47,48,50,51,-1,63,64,62,-1,46,42,45,-1,53,56,52,-1,1,0,32,31,-1,29,28,27,26,-1,23,22,21,20,-1,12,11,10,9,-1,6,5,4,3,-1,30,29,31,-1,25,29,26,-1,16,15,17,-1,18,17,15,14,-1,2,1,3,-1,19,23,20,-1,12,9,13,-1,0,1,34,33,-1,1,2,35,34,-1,2,3,36,35,-1,3,4,37,36,-1,4,5,38,37,-1,5,6,39,38,-1,6,7,40,39,-1,7,8,41,40,-1,8,9,42,41,-1,9,10,43,42,-1,10,11,44,43,-1,11,12,45,44,-1,12,13,46,45,-1,13,14,47,46,-1,14,15,48,47,-1,15,16,49,48,-1,16,17,50,49,-1,17,18,51,50,-1,18,19,52,51,-1,19,20,53,52,-1,20,21,54,53,-1,21,22,55,54,-1,22,23,56,55,-1,23,24,57,56,-1,24,25,58,57,-1,25,26,59,58,-1,26,27,60,59,-1,27,28,61,60,-1,28,29,62,61,-1,29,30,63,62,-1,30,31,64,63,-1,31,32,65,64,-1,13,19,18,14,-1,52,56,42,46,-1,23,25,24,-1,57,58,56,-1,42,40,41,-1,8,7,9,-1,3,7,6,-1,40,36,39,-1,25,7,3,1,31,29,-1,62,58,59,-1,9,7,25,23,-1,56,58,40,42,-1,52,46,47,51,-1,13,9,23,19,-1]);
TextureCoordinate TextureCoordinate55 = createNode("TextureCoordinate");
TextureCoordinate55.point = new MFVec2f(new float[0.983494,0.0177633,0.96389,0.31895,0.991065,0.339867,0.950484,0.380614,0.950484,0.526491,0.904106,0.526491,0.904106,0.47868,0.830916,0.501227,0.807726,0.585168,0.768957,0.600651,0.768957,0.7813,0.726565,0.7813,0.726565,0.732402,0.635982,0.731045,0.591778,0.785646,0.5937,0.882209,0.499132,0.942517,0.404564,0.882209,0.402642,0.785646,0.358438,0.731045,0.267856,0.732402,0.267856,0.7813,0.225101,0.7813,0.225101,0.600651,0.186694,0.585168,0.163505,0.501227,0.0903146,0.47868,0.0903146,0.526491,0.0439364,0.526491,0.0439364,0.380614,0.00335555,0.339867,0.0305304,0.31895,0.0211228,0.0195454,0.983494,0.0177633,0.96389,0.31895,0.991065,0.339867,0.950484,0,0.950484,0.526491,0.904106,0.526491,0.904106,0.47868,0.830916,0.501227,0.807726,0.585168,0.769319,0.600651,0.769319,0.7813,0.726565,0.7813,0.726565,0.732402,0.635982,0.731045,0.591778,0.785646,0.5937,0.882209,0.499132,0.942517,0.404564,0.882209,0.402642,0.785646,0.358438,0.731045,0.267856,0.732402,0.267856,0.7813,0.225463,0.7813,0.225463,0.600651,0.186694,0.585168,0.163505,0.501227,0.0903146,0.47868,0.0903146,0.526491,0.0439364,0.526491,0.0439364,0.380614,0.00335555,0.339867,0.0305304,0.31895,0.0211228,0.0195454]);
IndexedFaceSet54.texCoord = TextureCoordinate55;

Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.DEF = "nurbsToPoly167GeoPoints";
Coordinate56.point = new MFVec3f(new float[-0.673,4.326,-7.211,-0.673,5.321,-7.211,-0.673,5.398,-7.286,-0.672,5.548,-7.174,-0.672,6.085,-7.174,-0.672,6.085,-7.046,-0.672,5.909,-7.046,-0.672,5.992,-6.844,-0.672,6.301,-6.78,-0.672,6.358,-6.673,-0.672,7.023,-6.673,-0.672,7.023,-6.556,-0.672,6.843,-6.556,-0.671,6.838,-6.306,-0.671,7.039,-6.184,-0.671,7.565,-6.184,-0.671,7.787,-5.923,-0.67,7.565,-5.662,-0.67,7.039,-5.662,-0.67,6.838,-5.54,-0.67,6.843,-5.29,-0.67,7.023,-5.29,-0.67,7.023,-5.172,-0.67,6.358,-5.172,-0.67,6.301,-5.066,-0.669,5.992,-5.002,-0.669,5.909,-4.8,-0.669,6.085,-4.8,-0.669,6.085,-4.672,-0.669,5.548,-4.672,-0.669,5.398,-4.56,-0.669,5.321,-4.635,-0.669,4.326,-4.635,-0.585,4.326,-7.211,-0.585,5.321,-7.211,-0.585,5.398,-7.286,-0.584,5.548,-7.174,-0.584,6.085,-7.174,-0.584,6.085,-7.046,-0.584,5.909,-7.046,-0.584,5.992,-6.844,-0.584,6.301,-6.78,-0.584,6.358,-6.674,-0.584,7.023,-6.674,-0.584,7.023,-6.556,-0.584,6.843,-6.556,-0.583,6.838,-6.306,-0.583,7.039,-6.184,-0.583,7.565,-6.184,-0.583,7.787,-5.923,-0.582,7.565,-5.662,-0.582,7.039,-5.662,-0.582,6.838,-5.54,-0.582,6.843,-5.29,-0.582,7.023,-5.29,-0.582,7.023,-5.173,-0.582,6.358,-5.173,-0.581,6.301,-5.066,-0.581,5.992,-5.002,-0.581,5.909,-4.8,-0.581,6.085,-4.8,-0.581,6.085,-4.672,-0.581,5.548,-4.672,-0.581,5.398,-4.56,-0.581,5.321,-4.635,-0.581,4.326,-4.635]);
IndexedFaceSet54.coord = Coordinate56;

Shape50.geometry = IndexedFaceSet54;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

children[5] = Transform49;

}
