//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sun, 15 Mar 2015 09:33:04 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.7, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 25 Mar 2015 09:16:02 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("dachaufbau"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("lwall"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setDEF(CString("_1"));
Material13.setDiffuseColor(new float[]{1.0,0.794631,0.389824});
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setDEF(CString("_2"));
ImageTexture14.setUrl(new CString[]{CString("dachaufbau_s.jpg")}, 1);
Appearance12.addChild(&ImageTexture14);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setDEF(CString("nurbsToPoly166_0Geo"));
IndexedFaceSet15.setConvex(false);
IndexedFaceSet15.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{-0.00633788,0.0147803,-0.00633788,0.997661,0.993662,0.997661,0.993662,0.0147803}, 8);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setDEF(CString("nurbsToPoly166GeoPoints"));
Coordinate17.setPoint(new float[]{-0.589,4.326,-7.147,-0.589,5.532,-7.147,2.464,5.532,-7.152,2.464,4.326,-7.152}, 12);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet15);

Transform10.addChild(&Shape11);

Transform9.addChild(&Transform10);

Scene7.addChild(&Transform9);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("zier_switch"));
Switch& Switch19 =  Switch();
Switch19.setWhichChoice(1);
Transform& Transform20 =  Transform();
Transform20.setDEF(CString("kegl"));
Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{0.0,0.947,0.502001});
Transform& Transform22 =  Transform();
Transform22.setDEF(CString("zk1"));
Inline& Inline23 =  Inline();
Inline23.setUrl(new CString[]{CString("zierkegel.x3d")}, 1);
Inline23.setBboxSize(new float[]{0.19,0.357,0.223});
Inline23.setBboxCenter(new float[]{-0.632,6.2545,-7.1155});
Transform22.addChild(&Inline23);

Transform21.addChild(&Transform22);

Transform20.addChild(&Transform21);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{0.0,1.664,1.189});
Transform& Transform25 =  Transform();
Transform25.setUSE(CString("zk1"));
Transform24.addChild(&Transform25);

Transform20.addChild(&Transform24);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{0.0,0.947,1.8795});
Transform& Transform27 =  Transform();
Transform27.setUSE(CString("zk1"));
Transform26.addChild(&Transform27);

Transform20.addChild(&Transform26);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{0.0,0.0,2.384});
Transform& Transform29 =  Transform();
Transform29.setUSE(CString("zk1"));
Transform28.addChild(&Transform29);

Transform20.addChild(&Transform28);

Transform& Transform30 =  Transform();
Transform30.setUSE(CString("zk1"));
Transform20.addChild(&Transform30);

Switch19.addChild(&Transform20);

Transform& Transform31 =  Transform();
Switch19.addChild(&Transform31);

Transform18.addChild(&Switch19);

Scene7.addChild(&Transform18);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("da_dach"));
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
Material& Material35 =  Material();
Material35.setAmbientIntensity(0.341818);
Material35.setDiffuseColor(new float[]{0.585106,0.0214792,0.0});
Appearance34.addChild(&Material35);

ImageTexture& ImageTexture36 =  ImageTexture();
ImageTexture36.setUrl(new CString[]{CString("dachziegel.jpg")}, 1);
Appearance34.addChild(&ImageTexture36);

TextureTransform& TextureTransform37 =  TextureTransform();
TextureTransform37.setScale(new float[]{2.0,2.0});
Appearance34.setTextureTransform(TextureTransform37);

Shape33.addChild(&Appearance34);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setDEF(CString("nurbsToPoly164_0Geo"));
IndexedFaceSet38.setConvex(false);
IndexedFaceSet38.setCoordIndex(new int32_t[]{4,1,2,5,-1,0,4,5,3,-1}, 10);
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setDEF(CString("nurbsToPoly164GeoPoints"));
Coordinate39.setPoint(new float[]{-0.589,5.532,-7.147,-0.585,5.532,-4.697,2.467,5.532,-4.701,2.464,5.532,-7.152,-0.587,7.389,-5.922,2.466,7.389,-5.927}, 18);
IndexedFaceSet38.setCoord(&Coordinate39);

Shape33.setGeometry(&IndexedFaceSet38);

Transform32.addChild(&Shape33);

Scene7.addChild(&Transform32);

Transform& Transform40 =  Transform();
Transform& Transform41 =  Transform();
Transform41.setDEF(CString("rwall"));
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setUSE(CString("_1"));
Appearance43.addChild(&Material44);

ImageTexture& ImageTexture45 =  ImageTexture();
ImageTexture45.setUSE(CString("_2"));
Appearance43.addChild(&ImageTexture45);

Shape42.addChild(&Appearance43);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setDEF(CString("nurbsToPoly165_0Geo"));
IndexedFaceSet46.setConvex(false);
IndexedFaceSet46.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate47 =  TextureCoordinate();
TextureCoordinate47.setPoint(new float[]{-0.0303601,0.997813,0.0,0.0,1.0,0.0,0.96964,0.997813}, 8);
IndexedFaceSet46.setTexCoord(&TextureCoordinate47);

Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setDEF(CString("nurbsToPoly165GeoPoints"));
Coordinate48.setPoint(new float[]{-0.585,5.532,-4.697,-0.585,4.326,-4.697,2.467,4.326,-4.701,2.467,5.532,-4.701}, 12);
IndexedFaceSet46.setCoord(&Coordinate48);

Shape42.setGeometry(&IndexedFaceSet46);

Transform41.addChild(&Shape42);

Transform40.addChild(&Transform41);

Scene7.addChild(&Transform40);

Transform& Transform49 =  Transform();
Transform49.setDEF(CString("front"));
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setDiffuseColor(new float[]{1.0,0.794631,0.389824});
Appearance51.addChild(&Material52);

ImageTexture& ImageTexture53 =  ImageTexture();
ImageTexture53.setUrl(new CString[]{CString("dachaufbau.jpg")}, 1);
Appearance51.addChild(&ImageTexture53);

Shape50.addChild(&Appearance51);

IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setDEF(CString("nurbsToPoly167_0Geo"));
IndexedFaceSet54.setConvex(false);
IndexedFaceSet54.setCoordIndex(new int32_t[]{65,33,34,64,-1,36,37,38,39,-1,42,43,44,45,-1,53,54,55,56,-1,59,60,61,62,-1,35,36,34,-1,40,58,62,64,34,36,-1,49,50,48,-1,47,48,50,51,-1,63,64,62,-1,46,42,45,-1,53,56,52,-1,1,0,32,31,-1,29,28,27,26,-1,23,22,21,20,-1,12,11,10,9,-1,6,5,4,3,-1,30,29,31,-1,25,29,26,-1,16,15,17,-1,18,17,15,14,-1,2,1,3,-1,19,23,20,-1,12,9,13,-1,0,1,34,33,-1,1,2,35,34,-1,2,3,36,35,-1,3,4,37,36,-1,4,5,38,37,-1,5,6,39,38,-1,6,7,40,39,-1,7,8,41,40,-1,8,9,42,41,-1,9,10,43,42,-1,10,11,44,43,-1,11,12,45,44,-1,12,13,46,45,-1,13,14,47,46,-1,14,15,48,47,-1,15,16,49,48,-1,16,17,50,49,-1,17,18,51,50,-1,18,19,52,51,-1,19,20,53,52,-1,20,21,54,53,-1,21,22,55,54,-1,22,23,56,55,-1,23,24,57,56,-1,24,25,58,57,-1,25,26,59,58,-1,26,27,60,59,-1,27,28,61,60,-1,28,29,62,61,-1,29,30,63,62,-1,30,31,64,63,-1,31,32,65,64,-1,13,19,18,14,-1,52,56,42,46,-1,23,25,24,-1,57,58,56,-1,42,40,41,-1,8,7,9,-1,3,7,6,-1,40,36,39,-1,25,7,3,1,31,29,-1,62,58,59,-1,9,7,25,23,-1,56,58,40,42,-1,52,46,47,51,-1,13,9,23,19,-1}, 336);
TextureCoordinate& TextureCoordinate55 =  TextureCoordinate();
TextureCoordinate55.setPoint(new float[]{0.983494,0.0177633,0.96389,0.31895,0.991065,0.339867,0.950484,0.380614,0.950484,0.526491,0.904106,0.526491,0.904106,0.47868,0.830916,0.501227,0.807726,0.585168,0.768957,0.600651,0.768957,0.7813,0.726565,0.7813,0.726565,0.732402,0.635982,0.731045,0.591778,0.785646,0.5937,0.882209,0.499132,0.942517,0.404564,0.882209,0.402642,0.785646,0.358438,0.731045,0.267856,0.732402,0.267856,0.7813,0.225101,0.7813,0.225101,0.600651,0.186694,0.585168,0.163505,0.501227,0.0903146,0.47868,0.0903146,0.526491,0.0439364,0.526491,0.0439364,0.380614,0.00335555,0.339867,0.0305304,0.31895,0.0211228,0.0195454,0.983494,0.0177633,0.96389,0.31895,0.991065,0.339867,0.950484,0.0,0.950484,0.526491,0.904106,0.526491,0.904106,0.47868,0.830916,0.501227,0.807726,0.585168,0.769319,0.600651,0.769319,0.7813,0.726565,0.7813,0.726565,0.732402,0.635982,0.731045,0.591778,0.785646,0.5937,0.882209,0.499132,0.942517,0.404564,0.882209,0.402642,0.785646,0.358438,0.731045,0.267856,0.732402,0.267856,0.7813,0.225463,0.7813,0.225463,0.600651,0.186694,0.585168,0.163505,0.501227,0.0903146,0.47868,0.0903146,0.526491,0.0439364,0.526491,0.0439364,0.380614,0.00335555,0.339867,0.0305304,0.31895,0.0211228,0.0195454}, 132);
IndexedFaceSet54.setTexCoord(&TextureCoordinate55);

Coordinate& Coordinate56 =  Coordinate();
Coordinate56.setDEF(CString("nurbsToPoly167GeoPoints"));
Coordinate56.setPoint(new float[]{-0.673,4.326,-7.211,-0.673,5.321,-7.211,-0.673,5.398,-7.286,-0.672,5.548,-7.174,-0.672,6.085,-7.174,-0.672,6.085,-7.046,-0.672,5.909,-7.046,-0.672,5.992,-6.844,-0.672,6.301,-6.78,-0.672,6.358,-6.673,-0.672,7.023,-6.673,-0.672,7.023,-6.556,-0.672,6.843,-6.556,-0.671,6.838,-6.306,-0.671,7.039,-6.184,-0.671,7.565,-6.184,-0.671,7.787,-5.923,-0.67,7.565,-5.662,-0.67,7.039,-5.662,-0.67,6.838,-5.54,-0.67,6.843,-5.29,-0.67,7.023,-5.29,-0.67,7.023,-5.172,-0.67,6.358,-5.172,-0.67,6.301,-5.066,-0.669,5.992,-5.002,-0.669,5.909,-4.8,-0.669,6.085,-4.8,-0.669,6.085,-4.672,-0.669,5.548,-4.672,-0.669,5.398,-4.56,-0.669,5.321,-4.635,-0.669,4.326,-4.635,-0.585,4.326,-7.211,-0.585,5.321,-7.211,-0.585,5.398,-7.286,-0.584,5.548,-7.174,-0.584,6.085,-7.174,-0.584,6.085,-7.046,-0.584,5.909,-7.046,-0.584,5.992,-6.844,-0.584,6.301,-6.78,-0.584,6.358,-6.674,-0.584,7.023,-6.674,-0.584,7.023,-6.556,-0.584,6.843,-6.556,-0.583,6.838,-6.306,-0.583,7.039,-6.184,-0.583,7.565,-6.184,-0.583,7.787,-5.923,-0.582,7.565,-5.662,-0.582,7.039,-5.662,-0.582,6.838,-5.54,-0.582,6.843,-5.29,-0.582,7.023,-5.29,-0.582,7.023,-5.173,-0.582,6.358,-5.173,-0.581,6.301,-5.066,-0.581,5.992,-5.002,-0.581,5.909,-4.8,-0.581,6.085,-4.8,-0.581,6.085,-4.672,-0.581,5.548,-4.672,-0.581,5.398,-4.56,-0.581,5.321,-4.635,-0.581,4.326,-4.635}, 198);
IndexedFaceSet54.setCoord(&Coordinate56);

Shape50.setGeometry(&IndexedFaceSet54);

Transform49.addChild(&Shape50);

Scene7.addChild(&Transform49);

X3D0.setScene(&Scene7);

//}
