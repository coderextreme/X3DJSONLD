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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:08 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:08 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Int"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("startTime"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("value_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("keyValue"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field11);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo12 =  WorldInfo();
WorldInfo12.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo12);

Transform& Transform13 =  Transform();
Transform& Transform14 =  Transform();
NavigationInfo& NavigationInfo15 =  NavigationInfo();
NavigationInfo15.setDEF(CString("_NoNameNavInfo1"));
NavigationInfo15.setType(new CString[]{CString("WALK")}, 1);
NavigationInfo15.setAvatarSize(new float[]{0.2,1.2,0.6}, 3);
NavigationInfo15.setHeadlight(false);
Transform14.addChild(&NavigationInfo15);

Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setDEF(CString("VP1"));
Viewpoint16.setPosition(new float[]{-25.4603,1.34,70.5784});
Viewpoint16.setOrientation(new float[]{-4.24098e-7,-1.0,-9.28172e-7,1.05594});
Viewpoint16.setFieldOfView(1.2);
Transform14.addChild(&Viewpoint16);

Transform13.addChild(&Transform14);

Transform& Transform17 =  Transform();
Transform17.setTranslation(new float[]{18.7824,0.205183,23.024});
Inline& Inline18 =  Inline();
Inline18.setUrl(new CString[]{CString("txt.x3d")}, 1);
Inline18.setBboxSize(new float[]{17.3429,3.18392,0.140415});
Inline18.setBboxCenter(new float[]{-0.0362263,1.98502,0.203821});
Transform17.addChild(&Inline18);

Transform13.addChild(&Transform17);

Transform& Transform19 =  Transform();
Transform& Transform20 =  Transform();
Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{-28.7286,5.1988,65.0762});
Transform21.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform21.setScale(new float[]{5.91849,5.91849,5.91853});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl(new CString[]{CString("cinemaxx.png")}, 1);
Appearance23.addChild(&ImageTexture24);

Shape22.addChild(&Appearance23);

IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setCoordIndex(new int32_t[]{0,1,2,3,-1,7,6,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate26 =  TextureCoordinate();
TextureCoordinate26.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet25.setTexCoord(&TextureCoordinate26);

Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setPoint(new float[]{-3.6548,-0.5,0.0,3.6548,-0.5,0.0,3.6548,0.5,0.0,-3.6548,0.5,0.0,-3.6548,-1.29807,0.0,3.6548,-1.29807,0.0,3.6548,-2.2314,0.0,-3.6548,-2.2314,0.0}, 24);
IndexedFaceSet25.setCoord(&Coordinate27);

Shape22.setGeometry(&IndexedFaceSet25);

Transform21.addChild(&Shape22);

Transform20.addChild(&Transform21);

Transform& Transform28 =  Transform();
Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{-26.2603,-0.0298815,16.3863});
Transform29.setRotation(new float[]{0.0,1.0,0.0,1.218});
Transform29.setScale(new float[]{0.999999,0.999999,0.999999});
Inline& Inline30 =  Inline();
Inline30.setUrl(new CString[]{CString("invaders.x3d")}, 1);
Inline30.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline30.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996754});
Transform29.addChild(&Inline30);

Transform28.addChild(&Transform29);

Transform& Transform31 =  Transform();
Transform31.setTranslation(new float[]{2.86797,-0.0298796,-3.20924});
Transform31.setRotation(new float[]{0.0,-1.0,0.0,0.918547});
Transform31.setScale(new float[]{0.999999,1.0,0.999999});
Inline& Inline32 =  Inline();
Inline32.setUrl(new CString[]{CString("benhur.x3d")}, 1);
Inline32.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline32.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996755});
Transform31.addChild(&Inline32);

Transform28.addChild(&Transform31);

Transform& Transform33 =  Transform();
Transform33.setTranslation(new float[]{-9.44331,-0.0298834,-5.10966});
Transform33.setRotation(new float[]{0.0,1.0,0.0,0.34648});
Transform33.setScale(new float[]{0.999999,0.999999,0.999999});
Inline& Inline34 =  Inline();
Inline34.setUrl(new CString[]{CString("flashgordon.x3d")}, 1);
Inline34.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline34.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996755});
Transform33.addChild(&Inline34);

Transform28.addChild(&Transform33);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{-20.567,-0.0298815,4.33705});
Transform35.setRotation(new float[]{0.0,1.0,0.0,1.04051});
Transform35.setScale(new float[]{0.999999,1.0,0.999999});
Inline& Inline36 =  Inline();
Inline36.setUrl(new CString[]{CString("mothra.x3d")}, 1);
Inline36.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline36.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996754});
Transform35.addChild(&Inline36);

Transform28.addChild(&Transform35);

Transform& Transform37 =  Transform();
Transform37.setTranslation(new float[]{-28.5982,-0.0298815,30.0151});
Transform37.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform37.setScale(new float[]{0.999999,1.0,0.999999});
Inline& Inline38 =  Inline();
Inline38.setUrl(new CString[]{CString("tiffany.x3d")}, 1);
Inline38.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline38.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996754});
Transform37.addChild(&Inline38);

Transform28.addChild(&Transform37);

Transform20.addChild(&Transform28);

Transform19.addChild(&Transform20);

Transform& Transform39 =  Transform();
Transform& Transform40 =  Transform();
Transform& Transform41 =  Transform();
Transform41.setDEF(CString("iwall"));
Transform41.setTranslation(new float[]{-11.1644,10.4411,28.1237});
Transform41.setRotation(new float[]{0.0,1.0,0.0,1.33498});
Transform41.setScale(new float[]{3.84088,1.02745,1.83488});
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Shape42.addChild(&Appearance43);

IndexedFaceSet& IndexedFaceSet44 =  IndexedFaceSet();
IndexedFaceSet44.setSolid(false);
IndexedFaceSet44.setCreaseAngle(0.5);
IndexedFaceSet44.setColorIndex(new int[]{0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,8,18,10,-1,21,12,3,2,11,-1,4,14,26,13,5,-1,23,15,0,1,9,-1,16,6,10,19,-1,20,11,6,17,-1,7,15,22,25,-1,14,7,24,27,-1}, 144);
IndexedFaceSet44.setCoordIndex(new int32_t[]{2,23,22,0,-1,23,3,1,22,-1,4,24,23,2,-1,24,5,3,23,-1,6,25,24,4,-1,25,7,5,24,-1,8,26,25,6,-1,26,9,7,25,-1,10,27,26,8,-1,27,11,9,26,-1,12,28,27,10,-1,28,13,11,27,-1,14,29,28,12,-1,29,15,13,28,-1,16,30,29,14,-1,30,17,15,29,-1,18,31,30,16,-1,31,19,17,30,-1,20,32,31,18,-1,32,21,19,31,-1,21,32,38,45,39,-1,46,41,34,33,40,-1,35,42,49,41,34,-1,47,43,20,32,38,-1,44,36,39,45,-1,46,40,36,44,-1,37,43,47,48,-1,42,37,48,49,-1}, 144);
CColor& Color45 =  CColor();
Color45.setColor(new float[]{0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971}, 84);
IndexedFaceSet44.setColor(&Color45);

Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{0.00000190735,-20.0,-10.0,0.00000190735,0.0000171661,-10.0,3.82683,-20.0,-9.2388,3.82683,0.0000171661,-9.2388,7.07107,-20.0,-7.07107,7.07107,0.0000171661,-7.07107,9.2388,-20.0,-3.82683,9.2388,0.0000171661,-3.82683,10.0,-20.0,-0.00000147023,10.0,0.0000171661,-0.00000147023,9.2388,-20.0,3.82684,9.2388,0.0000171661,3.82684,7.07107,-20.0,7.07107,7.07107,0.0000171661,7.07107,3.82683,-20.0,9.2388,3.82683,0.0000171661,9.2388,0.00000341731,-20.0,10.0,0.00000341731,0.0000171661,10.0,-3.82683,-20.0,9.2388,-3.82683,0.0000171661,9.2388,-7.26183,-20.0,14.9653,-7.26183,0.0000171661,14.9653,0.00000190735,-9.99998,-10.0,3.82683,-9.99998,-9.2388,7.07107,-9.99998,-7.07107,9.2388,-9.99998,-3.82683,10.0,-9.99998,-0.00000147023,9.2388,-9.99998,3.82684,7.07107,-9.99998,7.07107,3.82683,-9.99998,9.2388,0.00000341731,-9.99998,10.0,-3.82683,-9.99998,9.2388,-7.26183,-9.99998,14.9653,-7.78759,0.0000171661,26.6054,-7.78759,-9.99998,26.6054,-7.78363,-20.0,26.5177,-7.52471,0.0000171661,20.7853,-7.52273,-20.0,20.7415,-7.39327,-9.99998,17.8753,-7.39327,0.0000171661,17.8753,-7.65615,0.0000171661,23.6954,-7.65615,-9.99998,23.6954,-7.65318,-20.0,23.6296,-7.39228,-20.0,17.8534,-7.52471,-4.99998,20.7853,-7.39327,-4.99998,17.8753,-7.65615,-4.99998,23.6954,-7.39278,-15.0,17.8643,-7.52372,-15.0,20.7634,-7.65467,-15.0,23.6625}, 150);
IndexedFaceSet44.setCoord(&Coordinate46);

Shape42.setGeometry(&IndexedFaceSet44);

Transform41.addChild(&Shape42);

Transform40.addChild(&Transform41);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("down"));
Transform47.setTranslation(new float[]{0.123907,5.24891,-9.45699});
Transform47.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform47.setScale(new float[]{9.99994,0.7,3.85446});
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet50 =  IndexedFaceSet();
IndexedFaceSet50.setCreaseAngle(0.5);
IndexedFaceSet50.setColorIndex(new int[]{0,0,1,1,-1,0,1,2,3,-1,1,0,5,4,-1,5,0,1,4,-1,2,7,6,3,-1,7,1,0,6,-1,0,1,9,8,-1}, 35);
IndexedFaceSet50.setCoordIndex(new int32_t[]{4,5,6,7,-1,4,7,8,9,-1,6,5,11,10,-1,11,1,3,10,-1,8,13,12,9,-1,13,2,0,12,-1,0,2,3,1,-1}, 35);
CColor& Color51 =  CColor();
Color51.setColor(new float[]{0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001,0.985547,1.0,0.747541,0.513369,0.273405,0.0764001}, 30);
IndexedFaceSet50.setColor(&Color51);

Coordinate& Coordinate52 =  Coordinate();
Coordinate52.setPoint(new float[]{-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5,-10.0573,7.5,-7.5,-10.0573,7.5,7.5,0.0,-7.5,-7.5,0.0,-7.5,7.5,0.343662,7.5,7.5,0.343662,7.5,-7.5,-3.32725,7.5,-7.5,-3.32725,-7.5,-7.5,-7.80524,7.5,7.5,-7.80524,-7.5,7.5,-7.81605,-7.5,-7.5,-7.81605,7.5,-7.5}, 42);
IndexedFaceSet50.setCoord(&Coordinate52);

Shape48.setGeometry(&IndexedFaceSet50);

Transform47.addChild(&Shape48);

Transform40.addChild(&Transform47);

Transform39.addChild(&Transform40);

Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{0.123907,5.24891,-9.45699});
Transform53.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform53.setScale(new float[]{9.99996,0.7,3.85446});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setAmbientIntensity(0);
Material56.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material56.setEmissiveColor(new float[]{0.680851,0.154898,0.0});
Material56.setShininess(0);
Material56.setTransparency(0.159574);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet57 =  IndexedFaceSet();
IndexedFaceSet57.setCreaseAngle(0.5);
IndexedFaceSet57.setColorPerVertex(false);
IndexedFaceSet57.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{0.0,-7.5,7.5,0.0,-7.5,-7.5,-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5}, 12);
IndexedFaceSet57.setCoord(&Coordinate58);

Shape54.setGeometry(&IndexedFaceSet57);

Transform53.addChild(&Shape54);

Transform39.addChild(&Transform53);

Transform& Transform59 =  Transform();
Transform59.setTranslation(new float[]{0.248186,-0.00743449,0.0});
Transform59.setRotation(new float[]{0.0,0.0,1.0,3.14159});
Transform59.setScale(new float[]{1.0,1.0,0.999998});
Transform& Transform60 =  Transform();
Transform60.setUSE(CString("down"));
Transform59.addChild(&Transform60);

Transform39.addChild(&Transform59);

Transform& Transform61 =  Transform();
Transform& Transform62 =  Transform();
Transform62.setDEF(CString("_1"));
Transform62.setTranslation(new float[]{0.123907,5.24891,-9.45699});
Transform62.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform62.setScale(new float[]{9.99996,0.7,3.85446});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setUrl(new CString[]{CString("mt3.png")}, 1);
Appearance64.addChild(&ImageTexture65);

TextureTransform& TextureTransform66 =  TextureTransform();
TextureTransform66.setScale(new float[]{4.0,1.0});
Appearance64.setTextureTransform(TextureTransform66);

Shape63.addChild(&Appearance64);

IndexedFaceSet& IndexedFaceSet67 =  IndexedFaceSet();
IndexedFaceSet67.setSolid(false);
IndexedFaceSet67.setCreaseAngle(0.5);
IndexedFaceSet67.setColorIndex(new int[]{1,1,0,0,-1}, 5);
IndexedFaceSet67.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
CColor& Color68 =  CColor();
Color68.setColor(new float[]{1.0,0.881262,0.699983,0.513369,0.273405,0.0764001}, 6);
IndexedFaceSet67.setColor(&Color68);

TextureCoordinate& TextureCoordinate69 =  TextureCoordinate();
TextureCoordinate69.setPoint(new float[]{1.0,1.44217,1.0,0.0,0.0,0.0,0.0,1.44217}, 8);
IndexedFaceSet67.setTexCoord(&TextureCoordinate69);

Coordinate& Coordinate70 =  Coordinate();
Coordinate70.setPoint(new float[]{0.343662,7.5,-7.5,0.343662,7.5,7.5,-10.0573,7.5,7.5,-10.0573,7.5,-7.5}, 12);
IndexedFaceSet67.setCoord(&Coordinate70);

Shape63.setGeometry(&IndexedFaceSet67);

Transform62.addChild(&Shape63);

Transform61.addChild(&Transform62);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("fxfloor"));
Transform71.setTranslation(new float[]{0.123907,5.41662,-9.45699});
Transform71.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform71.setScale(new float[]{9.99995,0.7,3.85446});
Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
ImageTexture& ImageTexture74 =  ImageTexture();
ImageTexture74.setUrl(new CString[]{CString("light10.png")}, 1);
Appearance73.addChild(&ImageTexture74);

TextureTransform& TextureTransform75 =  TextureTransform();
TextureTransform75.setScale(new float[]{15.0,10.0});
Appearance73.setTextureTransform(TextureTransform75);

Shape72.addChild(&Appearance73);

IndexedFaceSet& IndexedFaceSet76 =  IndexedFaceSet();
IndexedFaceSet76.setCreaseAngle(0.5);
IndexedFaceSet76.setColorPerVertex(false);
IndexedFaceSet76.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate77 =  TextureCoordinate();
TextureCoordinate77.setPoint(new float[]{1.0,0.0,0.994887,0.991237,0.00882173,0.991237,0.0,0.0}, 8);
IndexedFaceSet76.setTexCoord(&TextureCoordinate77);

Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{0.0,-7.5,7.5,0.0,-7.5,-7.5,-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5}, 12);
IndexedFaceSet76.setCoord(&Coordinate78);

Shape72.setGeometry(&IndexedFaceSet76);

Transform71.addChild(&Shape72);

Transform61.addChild(&Transform71);

Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{0.0,-21.0105,0.0});
Transform& Transform80 =  Transform();
Transform80.setUSE(CString("_1"));
Transform79.addChild(&Transform80);

Transform61.addChild(&Transform79);

Transform39.addChild(&Transform61);

Transform19.addChild(&Transform39);

Transform& Transform81 =  Transform();
Transform& Transform82 =  Transform();
Transform& Transform83 =  Transform();
Transform83.setTranslation(new float[]{7.49703,-0.0298834,25.036});
Transform83.setRotation(new float[]{0.0,1.0,0.0,4.57398});
Transform83.setScale(new float[]{0.999999,0.999999,0.999999});
Inline& Inline84 =  Inline();
Inline84.setUrl(new CString[]{CString("dollars.x3d")}, 1);
Inline84.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline84.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996754});
Transform83.addChild(&Inline84);

Transform82.addChild(&Transform83);

Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{3.79072,-0.0298815,39.4937});
Transform85.setRotation(new float[]{0.0,1.0,0.0,4.36514});
Transform85.setScale(new float[]{1.0,0.999998,1.0});
Inline& Inline86 =  Inline();
Inline86.setUrl(new CString[]{CString("dracula.x3d")}, 1);
Inline86.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline86.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996754});
Transform85.addChild(&Inline86);

Transform82.addChild(&Transform85);

Transform& Transform87 =  Transform();
Transform87.setTranslation(new float[]{5.37705,-0.0298815,54.3633});
Transform87.setRotation(new float[]{0.0,-1.0,0.0,1.13406});
Transform87.setScale(new float[]{0.999999,0.999999,0.999999});
Inline& Inline88 =  Inline();
Inline88.setUrl(new CString[]{CString("metropolis.x3d")}, 1);
Inline88.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline88.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996754});
Transform87.addChild(&Inline88);

Transform82.addChild(&Transform87);

Transform& Transform89 =  Transform();
Transform89.setTranslation(new float[]{8.08561,-0.0298834,11.3828});
Transform89.setRotation(new float[]{0.0,-1.0,0.0,1.48945});
Transform89.setScale(new float[]{0.999999,0.999998,0.999999});
Inline& Inline90 =  Inline();
Inline90.setUrl(new CString[]{CString("clockwork.x3d")}, 1);
Inline90.setBboxSize(new float[]{13.1266,18.69,0.199351});
Inline90.setBboxCenter(new float[]{-0.0362258,0.00826502,0.0996755});
Transform89.addChild(&Inline90);

Transform82.addChild(&Transform89);

Transform81.addChild(&Transform82);

Transform& Transform91 =  Transform();
Transform& Transform92 =  Transform();
Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[]{13.6627,7.31246,63.378});
Transform93.setRotation(new float[]{0.0,-1.0,0.0,0.331114});
Transform93.setScale(new float[]{0.0655398,0.0655399,0.0655398});
Shape& Shape94 =  Shape();
Appearance& Appearance95 =  Appearance();
Material& Material96 =  Material();
Material96.setAmbientIntensity(0);
Material96.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material96.setEmissiveColor(new float[]{1.0,0.678868,0.0});
Material96.setShininess(0);
Appearance95.addChild(&Material96);

Shape94.addChild(&Appearance95);

Text& Text97 =  Text();
Text97.setString(new CString[]{CString("NEUE TRAILER")}, 1);
Text97.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle98 =  CFontStyle();
FontStyle98.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle98.setSize(24);
Text97.setFontStyle(&FontStyle98);

Shape94.setGeometry(&Text97);

Transform93.addChild(&Shape94);

Transform92.addChild(&Transform93);

Transform& Transform99 =  Transform();
Transform99.setTranslation(new float[]{18.9913,7.83023,65.0794});
Transform99.setRotation(new float[]{0.0,-1.0,0.0,0.330083});
Transform99.setScale(new float[]{21.8741,4.4412,21.8739});
Transform99.setScaleOrientation(new float[]{0.0,-1.0,0.0,0.00530409});
Shape& Shape100 =  Shape();
Appearance& Appearance101 =  Appearance();
ImageTexture& ImageTexture102 =  ImageTexture();
ImageTexture102.setUrl(new CString[]{CString("bt-glow.png")}, 1);
Appearance101.addChild(&ImageTexture102);

Shape100.addChild(&Appearance101);

IndexedFaceSet& IndexedFaceSet103 =  IndexedFaceSet();
IndexedFaceSet103.setSolid(false);
IndexedFaceSet103.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate104 =  TextureCoordinate();
TextureCoordinate104.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet103.setTexCoord(&TextureCoordinate104);

Coordinate& Coordinate105 =  Coordinate();
Coordinate105.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet103.setCoord(&Coordinate105);

Shape100.setGeometry(&IndexedFaceSet103);

Transform99.addChild(&Shape100);

Transform92.addChild(&Transform99);

Transform91.addChild(&Transform92);

Transform& Transform106 =  Transform();
Transform& Transform107 =  Transform();
Transform107.setTranslation(new float[]{13.6627,-6.774,63.3779});
Transform107.setRotation(new float[]{0.986327,1.8999e-7,0.164802,3.1416});
Transform107.setScale(new float[]{0.0655397,0.0655399,0.0655398});
Transform107.setScaleOrientation(new float[]{0.000002056,1.0,5.40257e-7,0.0669066});
Shape& Shape108 =  Shape();
Appearance& Appearance109 =  Appearance();
Material& Material110 =  Material();
Material110.setAmbientIntensity(0);
Material110.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material110.setEmissiveColor(new float[]{1.0,0.678868,0.0});
Material110.setShininess(0);
Appearance109.addChild(&Material110);

Shape108.addChild(&Appearance109);

Text& Text111 =  Text();
Text111.setString(new CString[]{CString("NEUE TRAILER")}, 1);
Text111.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle112 =  CFontStyle();
FontStyle112.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle112.setSize(24);
Text111.setFontStyle(&FontStyle112);

Shape108.setGeometry(&Text111);

Transform107.addChild(&Shape108);

Transform106.addChild(&Transform107);

Transform& Transform113 =  Transform();
Transform113.setTranslation(new float[]{11.6341,3.02532,62.7071});
Transform113.setRotation(new float[]{0.16212,-0.16212,-0.973362,1.59779});
Transform113.setScale(new float[]{2.19317,2.19318,2.19325});
Transform113.setScaleOrientation(new float[]{0.504451,0.028565,0.862968,0.00239208});
Shape& Shape114 =  Shape();
Appearance& Appearance115 =  Appearance();
ImageTexture& ImageTexture116 =  ImageTexture();
ImageTexture116.setUrl(new CString[]{CString("arrow1.png")}, 1);
Appearance115.addChild(&ImageTexture116);

Shape114.addChild(&Appearance115);

IndexedFaceSet& IndexedFaceSet117 =  IndexedFaceSet();
IndexedFaceSet117.setSolid(false);
IndexedFaceSet117.setColorPerVertex(false);
IndexedFaceSet117.setColorIndex(new int[]{0,0,0,0}, 4);
IndexedFaceSet117.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1}, 20);
CColor& Color118 =  CColor();
Color118.setColor(new float[]{1.0,0.660178,0.0}, 3);
IndexedFaceSet117.setColor(&Color118);

TextureCoordinate& TextureCoordinate119 =  TextureCoordinate();
TextureCoordinate119.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 32);
IndexedFaceSet117.setTexCoord(&TextureCoordinate119);

Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[]{-0.8099,-0.5,0.0,0.8099,-0.5,0.0,0.8099,0.5,0.0,-0.8099,0.5,0.0,2.02005,-0.5,0.0,3.63985,-0.5,0.0,3.63985,0.5,0.0,2.02005,0.5,0.0,3.63985,7.69426,0.0000246435,2.02005,7.69426,0.0000248284,2.02005,6.69426,0.0000249476,3.63985,6.69426,0.0000247627,0.809904,7.69426,0.0000249665,-0.809896,7.69427,0.0000251513,-0.809898,6.69427,0.0000252705,0.809902,6.69426,0.0000250857}, 48);
IndexedFaceSet117.setCoord(&Coordinate120);

Shape114.setGeometry(&IndexedFaceSet117);

Transform113.addChild(&Shape114);

Transform106.addChild(&Transform113);

Transform91.addChild(&Transform106);

Transform81.addChild(&Transform91);

Transform19.addChild(&Transform81);

Transform13.addChild(&Transform19);

Switch& Switch121 =  Switch();
Switch121.setWhichChoice(0);
Transform& Transform122 =  Transform();
Transform122.setTranslation(new float[]{18.7824,0.205183,23.024});
Inline& Inline123 =  Inline();
Inline123.setUrl(new CString[]{CString("mib.x3d")}, 1);
Inline123.setBboxSize(new float[]{10.2643,18.8276,0.0});
Inline123.setBboxCenter(new float[]{-0.0020256,-0.0385637,0.0279587});
Transform122.addChild(&Inline123);

Switch121.addChild(&Transform122);

Transform& Transform124 =  Transform();
Switch121.addChild(&Transform124);

Transform13.addChild(&Switch121);

Scene7.addChild(&Transform13);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("EnterWorld"));
Script& Script126 =  Script();
Script126.setDEF(CString("_enterWorldScript"));
field& field127 =  field();
field127.setName(CString("isActive"));
field127.setAccessType(CString("outputOnly"));
field127.setType(CString("SFBool"));
Script126.addChild(&field127);

field& field128 =  field();
field128.setName(CString("isBound"));
field128.setAccessType(CString("outputOnly"));
field128.setType(CString("SFBool"));
Script126.addChild(&field128);

field& field129 =  field();
field129.setName(CString("set_startTime"));
field129.setAccessType(CString("inputOnly"));
field129.setType(CString("SFTime"));
Script126.addChild(&field129);


//Script126.setSourceCode(CString("vrmlscript:")+
//_T("function set_startTime(value, time)")+
//_T("{")+
//_T("	isActive = FALSE;")+
//_T("	isBound  = TRUE;")+
//_T("}"));
Transform125.addChild(&Script126);

VisibilitySensor& VisibilitySensor130 =  VisibilitySensor();
VisibilitySensor130.setDEF(CString("_2"));
VisibilitySensor130.setSize(new float[]{80.0,30.0,120.0});
VisibilitySensor130.setCenter(new float[]{0.0,0.0,40.0});
Transform125.addChild(&VisibilitySensor130);

Scene7.addChild(&Transform125);

Transform& Transform131 =  Transform();
Transform131.setDEF(CString("demoLogo"));
Transform131.setTranslation(new float[]{-22.4202,4.66662,67.4272});
Inline& Inline132 =  Inline();
Inline132.setUrl(new CString[]{CString("hud_fov1-2_demo.x3d")}, 1);
Inline132.setBboxSize(new float[]{100.0,10.0,100.0});
Inline132.setBboxCenter(new float[]{0.0,0.5,0.0});
Transform131.addChild(&Inline132);

Scene7.addChild(&Transform131);

Transform& Transform133 =  Transform();
Transform133.setDEF(CString("else"));
Collision& Collision134 =  Collision();
Collision134.setEnabled(false);
Transform& Transform135 =  Transform();
Transform135.setTranslation(new float[]{-22.6801,0.228053,70.6665});
Transform135.setScale(new float[]{9.33083,0.0109705,5.77207});
Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Material138.setAmbientIntensity(0);
Material138.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material138.setEmissiveColor(new float[]{0.382979,0.0,0.0110791});
Appearance137.addChild(&Material138);

Shape136.addChild(&Appearance137);

Box& Box139 =  Box();
Box139.setSize(new float[]{1.27911,1.27909,1.27909});
Shape136.setGeometry(&Box139);

Transform135.addChild(&Shape136);

Collision134.addChildren(&Transform135);

Transform133.addChild(&Collision134);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{-23.0628,0.226514,70.5852});
Inline& Inline141 =  Inline();
Inline141.setUrl(new CString[]{CString("cinemaxx-scout1.x3d")}, 1);
Inline141.setBboxSize(new float[]{25.0,25.0,25.0});
Inline141.setBboxCenter(new float[]{0.0,1.0,0.0});
Transform140.addChild(&Inline141);

Transform133.addChild(&Transform140);

Scene7.addChild(&Transform133);

ROUTE& ROUTE142 =  ROUTE();
ROUTE142.setFromNode(CString("_enterWorldScript"));
ROUTE142.setFromField(CString("isBound"));
ROUTE142.setToNode(CString("_NoNameNavInfo1"));
ROUTE142.setToField(CString("set_bind"));
Scene7.addChild(&ROUTE142);

ROUTE& ROUTE143 =  ROUTE();
ROUTE143.setFromNode(CString("_enterWorldScript"));
ROUTE143.setFromField(CString("isBound"));
ROUTE143.setToNode(CString("VP1"));
ROUTE143.setToField(CString("set_bind"));
Scene7.addChild(&ROUTE143);

ROUTE& ROUTE144 =  ROUTE();
ROUTE144.setFromNode(CString("_2"));
ROUTE144.setFromField(CString("enterTime"));
ROUTE144.setToNode(CString("_enterWorldScript"));
ROUTE144.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE144);

X3D0.setScene(&Scene7);

//}
