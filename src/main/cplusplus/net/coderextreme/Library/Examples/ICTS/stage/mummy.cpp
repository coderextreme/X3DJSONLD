#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:14 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:14 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Random"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Random_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("minValue"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("maxValue"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("fraction_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field12);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare13 =  ExternProtoDeclare();
ExternProtoDeclare13.setName(CString("MediaCtrl"));
ExternProtoDeclare13.setUrl(new CString[]{CString("MediaCtrl_proto.x3d")}, 1);
field& field14 =  field();
field14.setName(CString("reset"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFBool"));
ExternProtoDeclare13.addChild(&field14);

field& field15 =  field();
field15.setName(CString("startTime"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFTime"));
ExternProtoDeclare13.addChild(&field15);

field& field16 =  field();
field16.setName(CString("stopTime"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFTime"));
ExternProtoDeclare13.addChild(&field16);

field& field17 =  field();
field17.setName(CString("set_isActive"));
field17.setAccessType(CString("inputOnly"));
field17.setType(CString("SFBool"));
ExternProtoDeclare13.addChild(&field17);

field& field18 =  field();
field18.setName(CString("source"));
field18.setAccessType(CString("initializeOnly"));
field18.setType(CString("SFNode"));
ExternProtoDeclare13.addChild(&field18);

Scene7.addChild(&ExternProtoDeclare13);

ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(CString("RandomSwitcher"));
ExternProtoDeclare19.setUrl(new CString[]{CString("RandomSwitcher_proto.x3d")}, 1);
field& field20 =  field();
field20.setName(CString("minValue"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
ExternProtoDeclare19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("maxValue"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFInt32"));
ExternProtoDeclare19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("startTime"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ExternProtoDeclare19.addChild(&field22);

field& field23 =  field();
field23.setName(CString("whichChoice_changed"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFInt32"));
ExternProtoDeclare19.addChild(&field23);

Scene7.addChild(&ExternProtoDeclare19);

WorldInfo& WorldInfo24 =  WorldInfo();
WorldInfo24.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo24);

LOD& LOD25 =  LOD();
LOD25.setRange(new float[]{10}, 1);
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("fire"));
Transform& Transform27 =  Transform();
Transform27.setDEF(CString("_1"));
Transform& Transform28 =  Transform();
Transform28.setDEF(CString("geistShadow"));
Transform28.setTranslation(new float[]{2.44177e-8,-1.39698e-9,0});
Transform28.setScale(new float[]{0.487699,0.487699,0.487699});
Transform28.setCenter(new float[]{0,0.00560371,0});
Transform& Transform29 =  Transform();
Transform29.setDEF(CString("shadow"));
Transform29.setTranslation(new float[]{0,0.00560371,0});
Transform29.setRotation(new float[]{-1,0,0,1.5708});
Transform29.setScale(new float[]{4.91122,4.91116,4.91116});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("redlight.png")}, 1);
Appearance31.addChild(&ImageTexture32);

Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setSolid(False);
IndexedFaceSet33.setCreaseAngle(3.14159);
IndexedFaceSet33.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate34 =  TextureCoordinate();
TextureCoordinate34.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet33.setTexCoord(&TextureCoordinate34);

Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet33.setCoord(&Coordinate35);

Shape30.setGeometry(&IndexedFaceSet33);

Transform29.addChild(&Shape30);

Transform28.addChild(&Transform29);

Transform27.addChild(&Transform28);

Billboard& Billboard36 =  Billboard();
Transform& Transform37 =  Transform();
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("mummy"));
Transform38.setCenter(new float[]{0.00168931,0.707016,-0.00628802});
Transform& Transform39 =  Transform();
Transform39.setDEF(CString("head_mat"));
Transform& Transform40 =  Transform();
Transform40.setDEF(CString("zahn"));
Transform40.setTranslation(new float[]{-0.00593141,0.996158,0.100081});
Transform40.setRotation(new float[]{0,-1,0,1.5708});
Transform40.setScale(new float[]{1.09518,0.879304,1.09518});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setAmbientIntensity(0.0744681);
Material43.setDiffuseColor(new float[]{1,1,1});
Material43.setEmissiveColor(new float[]{0.0957447,0,0.0042168});
Material43.setShininess(0);
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

IndexedFaceSet& IndexedFaceSet44 =  IndexedFaceSet();
IndexedFaceSet44.setCreaseAngle(0.5);
IndexedFaceSet44.setColorIndex(new int[]{0,0,3,3,-1,0,0,4,4,-1,2,0,0,-1,4,4,0,0,-1,0,0,1,-1,0,1,1,-1,0,0,0,-1,0,0,0,-1,0,1,0,-1,1,0,0,-1,0,1,0,-1,0,0,2,-1,0,2,1,-1}, 55);
IndexedFaceSet44.setCoordIndex(new int32_t[]{3,8,7,4,-1,6,11,10,5,-1,1,2,3,-1,9,0,8,6,-1,12,13,14,-1,12,14,15,-1,16,17,18,-1,17,16,19,-1,16,20,19,-1,21,16,22,-1,23,21,22,-1,22,12,24,-1,22,24,25,-1}, 55);
CColor& Color45 =  CColor();
Color45.setColor(new float[]{0.224599,0.160817,0.0878982,0.684492,0.412885,0.205546,0.684492,0.26341,0.124808,0.368984,0.141994,0.0672791,0.716578,0.513084,0.280437}, 15);
IndexedFaceSet44.setColor(&Color45);

Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{0.122705,-0.132246,-0.00507867,0.107891,-0.108316,0.0673736,0.0918505,-0.160744,0.0683898,0.101676,-0.160744,0.042715,0.117936,-0.127003,0.026548,0.11412,-0.112316,-0.047721,0.107581,-0.161594,-0.0215389,0.120585,-0.127003,0.0196248,0.114766,-0.160744,0.00850913,0.120532,-0.129341,-0.0124131,0.109898,-0.119365,-0.0527671,0.0971547,-0.160744,-0.0551543,0.123746,-0.0851264,0.040235,0.113085,-0.0774798,0.0615809,0.107074,-0.119086,0.0598431,0.113578,-0.127236,0.0457755,0.124451,-0.0964741,-0.0232305,0.11733,-0.0895643,-0.0392173,0.114356,-0.0731526,-0.0393097,0.112725,-0.11873,-0.0406891,0.115279,-0.124799,-0.0340097,0.116114,-0.131178,-0.0225959,0.136476,-0.0966331,0.00232054,0.116016,-0.138903,-0.014559,0.120435,-0.135401,0.0327874,0.122567,-0.138441,0.0247979}, 78);
IndexedFaceSet44.setCoord(&Coordinate46);

Shape41.setGeometry(&IndexedFaceSet44);

Transform40.addChild(&Shape41);

Transform39.addChild(&Transform40);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("eyes"));
Transform47.setTranslation(new float[]{-0.00591775,1.10264,0.106955});
Transform47.setRotation(new float[]{0,-1,0,1.5708});
Transform47.setScale(new float[]{1.03797,1.35831,1.11957});
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setAmbientIntensity(0);
Material50.setDiffuseColor(new float[]{0,0,0});
Material50.setEmissiveColor(new float[]{1,0,0.0440421});
Material50.setShininess(0);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setSolid(False);
IndexedFaceSet51.setColorPerVertex(False);
IndexedFaceSet51.setCoordIndex(new int32_t[]{0,1,2,3,4,5,-1,6,7,8,9,10,11,-1}, 14);
Coordinate& Coordinate52 =  Coordinate();
Coordinate52.setPoint(new float[]{0.108833,-0.0851155,-0.0465847,0.100853,-0.0703176,-0.0623187,0.100083,-0.0566806,-0.0626526,0.117645,-0.066655,-0.0325433,0.130948,-0.0873769,-0.00913626,0.121978,-0.091989,-0.0240754,0.141496,-0.0935758,0.00895859,0.11581,-0.0626916,0.0556524,0.105427,-0.0557512,0.0747794,0.108342,-0.0782308,0.075386,0.116612,-0.0938373,0.0555542,0.127064,-0.0974542,0.0361599}, 36);
IndexedFaceSet51.setCoord(&Coordinate52);

Shape48.setGeometry(&IndexedFaceSet51);

Transform47.addChild(&Shape48);

Transform39.addChild(&Transform47);

Transform38.addChild(&Transform39);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("mummyMat"));
Transform53.setTranslation(new float[]{-0.00421786,-0.686282,0.0109095});
Transform53.setCenter(new float[]{0.00590718,1.3933,-0.0171975});
Transform& Transform54 =  Transform();
Transform54.setDEF(CString("A-okoerper"));
Transform54.setCenter(new float[]{0.0149619,0.983686,0.0466853});
Transform& Transform55 =  Transform();
Transform55.setDEF(CString("A-obody"));
Transform55.setTranslation(new float[]{0,0.162414,0});
Transform55.setCenter(new float[]{0.00202949,1.17923,0.0466853});
Transform& Transform56 =  Transform();
Transform56.setDEF(CString("L-arm"));
Transform56.setTranslation(new float[]{0.00000113249,6.70552e-8,0.00000154972});
Transform56.setRotation(new float[]{-0.759166,0.452794,0.467595,1.66502});
Transform56.setScale(new float[]{0.999997,1,1});
Transform56.setScaleOrientation(new float[]{0.945173,0.135668,-0.297057,0.784902});
Transform56.setCenter(new float[]{0.211556,1.61437,0.0139331});
Transform& Transform57 =  Transform();
Transform57.setDEF(CString("L-uarm"));
Transform57.setTranslation(new float[]{0.00000315905,-2.98023e-7,0.00000309944});
Transform57.setRotation(new float[]{0.619125,-0.17052,-0.766555,1.15635});
Transform57.setScale(new float[]{0.999999,1,0.999997});
Transform57.setScaleOrientation(new float[]{0.532414,0.827953,0.17615,0.69668});
Transform57.setCenter(new float[]{0.249103,1.31211,0.0152324});
Transform& Transform58 =  Transform();
Transform58.setDEF(CString("L-hand"));
Transform58.setTranslation(new float[]{0.249103,1.3134,0.0220145});
Transform58.setRotation(new float[]{-0.38806,0.874558,0.290788,4.28822});
Transform58.setScale(new float[]{0.999997,1,0.999999});
Transform58.setScaleOrientation(new float[]{0.773295,0.203963,0.600345,0.970645});
Transform58.setCenter(new float[]{0.000570012,-0.320677,0.00086822});
Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Material61.setDEF(CString("_2"));
Material61.setAmbientIntensity(0.4375);
Material61.setDiffuseColor(new float[]{0.170213,0.170213,0.170213});
Material61.setEmissiveColor(new float[]{0.117021,0,0.00515386});
Material61.setShininess(0);
Appearance60.addChild(&Material61);

ImageTexture& ImageTexture62 =  ImageTexture();
ImageTexture62.setDEF(CString("_3"));
ImageTexture62.setUrl(new CString[]{CString("bodybindensw.png")}, 1);
Appearance60.addChild(&ImageTexture62);

Shape59.addChild(&Appearance60);

IndexedFaceSet& IndexedFaceSet63 =  IndexedFaceSet();
IndexedFaceSet63.setCreaseAngle(3.14159);
IndexedFaceSet63.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,2,3,-1,2,5,0,-1,6,7,8,-1,9,10,11,-1,8,12,6,-1,6,12,13,-1,14,15,16,-1,15,17,16,-1,16,18,14,-1,19,20,21,-1,21,22,19,-1,19,22,23,-1}, 56);
IndexedFaceSet63.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,2,3,-1,2,5,0,-1,6,7,0,-1,8,7,6,-1,0,5,6,-1,6,5,4,-1,2,1,9,-1,1,8,9,-1,9,3,2,-1,9,8,6,-1,6,4,9,-1,9,4,3,-1}, 56);
TextureCoordinate& TextureCoordinate64 =  TextureCoordinate();
TextureCoordinate64.setPoint(new float[]{0.868548,0.707498,0.664964,0.707767,0.607865,0.446535,0.636948,0.379545,0.903768,0.379545,0.933118,0.446535,0.94726,0.135423,0.863478,0.376317,0.708723,0.376855,0.563573,0.713417,0.36031,0.713686,0.296075,0.472362,0.62174,0.115676,0.796507,0.0487696,0.637215,0.115595,0.597993,0.376855,0.311924,0.135342,0.347315,0.375778,0.462555,0.048748,0.621473,0.472362,0.563573,0.713417,0.296075,0.472362,0.32541,0.385464,0.592123,0.385464}, 48);
IndexedFaceSet63.setTexCoord(&TextureCoordinate64);

Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setPoint(new float[]{0.01428,-0.3194,-0.02553,0.0229,-0.3194,0.03114,0.03785,-0.4296,0.05021,-0.002194,-0.4589,0.04147,-0.002194,-0.4589,-0.03801,0.03785,-0.4296,-0.04676,-0.03671,-0.4209,-0.04676,-0.01388,-0.3194,-0.02563,-0.02267,-0.3194,0.03096,-0.03671,-0.4209,0.05021}, 30);
IndexedFaceSet63.setCoord(&Coordinate65);

Shape59.setGeometry(&IndexedFaceSet63);

Transform58.addChild(&Shape59);

Transform57.addChild(&Transform58);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("uarm_l"));
Transform66.setTranslation(new float[]{0.249103,1.3134,0.0220151});
Transform66.setScale(new float[]{1,0.999999,1});
Transform66.setScaleOrientation(new float[]{1.04347e-8,1,5.17544e-9,1.5708});
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Material69.setUSE(CString("_2"));
Appearance68.addChild(&Material69);

ImageTexture& ImageTexture70 =  ImageTexture();
ImageTexture70.setUSE(CString("_3"));
Appearance68.addChild(&ImageTexture70);

Shape67.addChild(&Appearance68);

IndexedFaceSet& IndexedFaceSet71 =  IndexedFaceSet();
IndexedFaceSet71.setDEF(CString("Beat_Arm2_L-FACES"));
IndexedFaceSet71.setCreaseAngle(3.14159);
IndexedFaceSet71.setTexCoordIndex(new int32_t[]{18,19,20,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,15,16,17,-1,12,13,14,-1,2,3,7,-1,8,7,3,-1,3,4,8,-1,11,8,4,-1,4,5,11,-1,9,11,5,-1,5,1,9,-1,6,9,1,-1,22,10,24,-1,24,10,25,-1,25,10,23,-1,10,22,21,-1,23,10,21,-1}, 80);
IndexedFaceSet71.setCoordIndex(new int32_t[]{1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,1,2,7,-1,6,7,2,-1,2,3,6,-1,8,6,3,-1,3,4,8,-1,9,8,4,-1,4,5,9,-1,10,9,5,-1,5,1,10,-1,7,10,1,-1,7,12,10,-1,10,12,9,-1,9,12,8,-1,12,7,6,-1,8,12,6,-1}, 80);
TextureCoordinate& TextureCoordinate72 =  TextureCoordinate();
TextureCoordinate72.setDEF(CString("Beat_Arm2_L-TEXCOORD"));
TextureCoordinate72.setPoint(new float[]{0.587117,0.841086,0.335066,0.721654,0.34301,0.721654,0.68911,0.721654,0.895047,0.721656,0.676231,0.721654,0.367263,0.0993014,0.37433,0.0993014,0.68058,0.0993014,0.669206,0.0993014,0.576445,0.507567,0.86285,0.0993014,0.573534,0.088731,0.367263,0.0993014,0.644214,0.721933,0.335066,0.721654,0.644214,0.721933,0.367263,0.0993014,0.335066,0.721654,0.587117,0.841086,0.644214,0.721933,0.323786,0.572048,0.31554,0.404848,0.681165,0.650152,0.667893,0.379592,0.893865,0.531205}, 52);
IndexedFaceSet71.setTexCoord(&TextureCoordinate72);

Coordinate& Coordinate73 =  Coordinate();
Coordinate73.setDEF(CString("Beat_Arm2_L-COORD"));
Coordinate73.setPoint(new float[]{-0.00668162,0.058639,0.0029759,-0.06696,-0.002228,0.0543,-0.06506,-0.002228,-0.02822,0.01771,-0.002228,-0.06676,0.06696,-0.002227,-0.00806,0.01463,-0.002228,0.06676,-0.05757,-0.3194,-0.02497,-0.05926,-0.3194,0.04805,0.01567,-0.3194,-0.05908,0.05926,-0.3194,-0.007133,0.01295,-0.3194,0.05908,-0.005791,-0.3194,0.00319,-0.005791,-0.3194,0.00319}, 39);
IndexedFaceSet71.setCoord(&Coordinate73);

Shape67.setGeometry(&IndexedFaceSet71);

Transform66.addChild(&Shape67);

Transform57.addChild(&Transform66);

Transform56.addChild(&Transform57);

Transform& Transform74 =  Transform();
Transform74.setDEF(CString("oarm_l"));
Transform74.setTranslation(new float[]{0.217343,1.6376,0.0220023});
Transform74.setScale(new float[]{1,0.999999,1});
Transform74.setScaleOrientation(new float[]{8.9523e-9,1,7.03487e-9,1.5708});
Shape& Shape75 =  Shape();
Appearance& Appearance76 =  Appearance();
Material& Material77 =  Material();
Material77.setUSE(CString("_2"));
Appearance76.addChild(&Material77);

ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setUSE(CString("_3"));
Appearance76.addChild(&ImageTexture78);

Shape75.addChild(&Appearance76);

IndexedFaceSet& IndexedFaceSet79 =  IndexedFaceSet();
IndexedFaceSet79.setDEF(CString("Beat_Arm1_L-FACES"));
IndexedFaceSet79.setCreaseAngle(3.14159);
IndexedFaceSet79.setTexCoordIndex(new int32_t[]{12,13,14,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,21,22,23,-1,8,11,6,-1,9,11,8,-1,10,11,9,-1,7,11,10,-1,15,16,17,-1,18,19,20,-1,2,3,6,-1,8,6,3,-1,3,4,8,-1,9,8,4,-1,4,5,9,-1,10,9,5,-1,5,1,10,-1,7,10,1,-1}, 80);
IndexedFaceSet79.setCoordIndex(new int32_t[]{1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,6,11,7,-1,8,11,6,-1,9,11,8,-1,10,11,9,-1,7,11,10,-1,1,2,7,-1,6,7,2,-1,2,3,6,-1,8,6,3,-1,3,4,8,-1,9,8,4,-1,4,5,9,-1,10,9,5,-1,5,1,10,-1,7,10,1,-1}, 80);
TextureCoordinate& TextureCoordinate80 =  TextureCoordinate();
TextureCoordinate80.setDEF(CString("Beat_Arm1_L-TEXCOORD"));
TextureCoordinate80.setPoint(new float[]{0.325184,1.09874,0.231841,0.792581,0.242016,0.792581,0.566441,0.842842,0.749593,1.0526,0.549947,0.842842,0.242016,0.180456,0.231841,0.180456,0.685222,0.180456,0.949025,0.180456,0.668781,0.180456,0.555356,0.0333509,0.557696,0.845657,0.350567,1.10311,0.274721,0.793778,0.557696,0.847792,0.276153,0.795682,0.657821,0.181996,0.666165,0.178081,0.267049,0.181039,0.276153,0.795682,0.657821,0.183083,0.55651,0.0333278,0.267049,0.181039}, 48);
IndexedFaceSet79.setTexCoord(&TextureCoordinate80);

Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setDEF(CString("Beat_Arm1_L-COORD"));
Coordinate81.setPoint(new float[]{-0.01944,0.04601,0.003605,-0.03687,-0.07582,0.0543,-0.03497,-0.07582,-0.02822,0.02561,-0.05582,-0.06676,0.05981,0.02765,-0.00806,0.02253,-0.05582,0.06676,-0.03497,-0.3194,-0.02822,-0.03687,-0.3194,0.0543,0.04779,-0.3194,-0.06676,0.09705,-0.3194,-0.00806,0.04472,-0.3194,0.06676,0.02354,-0.377937,0.003605}, 36);
IndexedFaceSet79.setCoord(&Coordinate81);

Shape75.setGeometry(&IndexedFaceSet79);

Transform74.addChild(&Shape75);

Transform56.addChild(&Transform74);

Transform55.addChild(&Transform56);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("R-arm"));
Transform82.setTranslation(new float[]{3.57628e-7,-8.04663e-7,3.57628e-7});
Transform82.setRotation(new float[]{-0.115669,0.107972,-0.987402,1.51464});
Transform82.setScale(new float[]{1,1,0.999999});
Transform82.setScaleOrientation(new float[]{0.196924,0.121035,0.972919,0.39581});
Transform82.setCenter(new float[]{-0.212702,1.60456,0.0152191});
Transform& Transform83 =  Transform();
Transform83.setDEF(CString("R-uarm"));
Transform83.setTranslation(new float[]{-0.00000101328,0.00000107288,-0.00000274181});
Transform83.setRotation(new float[]{-0.794359,0.438031,0.42086,1.4435});
Transform83.setScale(new float[]{0.999999,1,0.999997});
Transform83.setScaleOrientation(new float[]{-0.308929,-0.000469624,0.951085,0.37506});
Transform83.setCenter(new float[]{-0.235307,1.30611,0.0135384});
Transform& Transform84 =  Transform();
Transform84.setDEF(CString("R-hand"));
Transform84.setTranslation(new float[]{-0.235306,1.3134,0.0218197});
Transform84.setRotation(new float[]{0.0225404,-0.0473243,0.998625,0.890117});
Transform84.setScale(new float[]{0.999999,1,0.999998});
Transform84.setScaleOrientation(new float[]{0.106092,0.960994,-0.255413,0.563833});
Transform84.setCenter(new float[]{-0.000570014,-0.319855,-0.0020311});
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Material& Material87 =  Material();
Material87.setUSE(CString("_2"));
Appearance86.addChild(&Material87);

ImageTexture& ImageTexture88 =  ImageTexture();
ImageTexture88.setUSE(CString("_3"));
Appearance86.addChild(&ImageTexture88);

Shape85.addChild(&Appearance86);

IndexedFaceSet& IndexedFaceSet89 =  IndexedFaceSet();
IndexedFaceSet89.setCreaseAngle(3.14159);
IndexedFaceSet89.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,2,1,-1,2,3,4,-1,5,6,7,-1,8,9,10,-1,11,7,6,-1,11,6,12,-1,13,14,15,-1,16,17,18,-1,19,18,17,-1,19,17,20,-1,21,15,14,-1,22,4,3,-1,23,21,14,-1}, 56);
IndexedFaceSet89.setCoordIndex(new int32_t[]{0,1,2,-1,3,2,1,-1,2,3,4,-1,5,6,4,-1,5,7,6,-1,2,4,6,-1,2,6,0,-1,1,8,3,-1,7,8,6,-1,0,6,8,-1,0,8,1,-1,9,3,8,-1,9,4,3,-1,7,9,8,-1}, 56);
TextureCoordinate& TextureCoordinate90 =  TextureCoordinate();
TextureCoordinate90.setPoint(new float[]{0.768024,0.220818,0.563262,0.220818,0.790548,0.257992,0.540943,0.257992,0.740995,0.402809,0.737105,0.219026,0.8014,0.0853465,0.618343,0.219325,0.350965,0.406243,0.506953,0.406094,0.301671,0.272325,0.551591,0.0743882,0.68571,0.0372599,0.42943,0.0372479,0.313833,0.0853017,0.563467,0.0743434,0.506953,0.406094,0.551386,0.272325,0.301671,0.272325,0.324182,0.224102,0.528862,0.224102,0.533367,0.219325,0.584762,0.402958,0.340993,0.218727}, 48);
IndexedFaceSet89.setTexCoord(&TextureCoordinate90);

Coordinate& Coordinate91 =  Coordinate();
Coordinate91.setPoint(new float[]{0.002194,-0.4589,-0.03801,0.002194,-0.4589,0.04147,-0.03785,-0.4296,-0.04676,-0.03785,-0.4296,0.05021,-0.01428,-0.3194,-0.02553,0.01388,-0.3194,-0.02563,0.03671,-0.4209,-0.04676,0.02267,-0.3194,0.03096,0.03671,-0.4209,0.05021,-0.0229,-0.3194,0.03114}, 30);
IndexedFaceSet89.setCoord(&Coordinate91);

Shape85.setGeometry(&IndexedFaceSet89);

Transform84.addChild(&Shape85);

Transform83.addChild(&Transform84);

Transform& Transform92 =  Transform();
Transform92.setDEF(CString("uarm_r"));
Transform92.setTranslation(new float[]{-0.235307,1.3134,0.0218195});
Transform92.setScale(new float[]{1,0.999999,1});
Transform92.setScaleOrientation(new float[]{1.14369e-8,1,5.95853e-9,1.5708});
Shape& Shape93 =  Shape();
Appearance& Appearance94 =  Appearance();
Material& Material95 =  Material();
Material95.setUSE(CString("_2"));
Appearance94.addChild(&Material95);

ImageTexture& ImageTexture96 =  ImageTexture();
ImageTexture96.setUSE(CString("_3"));
Appearance94.addChild(&ImageTexture96);

Shape93.addChild(&Appearance94);

IndexedFaceSet& IndexedFaceSet97 =  IndexedFaceSet();
IndexedFaceSet97.setDEF(CString("Beat_Arm2_R-FACES"));
IndexedFaceSet97.setCreaseAngle(3.14159);
IndexedFaceSet97.setTexCoordIndex(new int32_t[]{18,19,20,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,15,16,17,-1,12,13,14,-1,3,2,6,-1,6,8,3,-1,4,3,8,-1,8,11,4,-1,5,4,11,-1,11,10,5,-1,1,5,10,-1,10,7,1,-1,24,9,21,-1,21,9,22,-1,22,9,23,-1,9,24,25,-1,23,9,25,-1}, 80);
IndexedFaceSet97.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,2,1,7,-1,7,6,2,-1,3,2,6,-1,6,8,3,-1,4,3,8,-1,8,9,4,-1,5,4,9,-1,9,10,5,-1,1,5,10,-1,10,7,1,-1,7,12,6,-1,6,12,8,-1,8,12,9,-1,12,7,10,-1,9,12,10,-1}, 80);
TextureCoordinate& TextureCoordinate98 =  TextureCoordinate();
TextureCoordinate98.setDEF(CString("Beat_Arm2_R-TEXCOORD"));
TextureCoordinate98.setPoint(new float[]{0.515525,0.849081,0.742253,0.770063,0.734998,0.770063,0.418951,0.770063,0.230897,0.770063,0.430712,0.770063,0.706398,0.201751,0.712851,0.201751,0.426741,0.201751,0.69159,0.412941,0.437126,0.201751,0.260298,0.201751,0.712851,0.201751,0.553998,0.195984,0.742354,0.769851,0.529139,0.766128,0.742253,0.770063,0.712851,0.201751,0.515525,0.849081,0.742253,0.770063,0.528933,0.765431,0.935066,0.475077,0.590676,0.550343,0.385707,0.435719,0.943013,0.313954,0.603466,0.289616}, 52);
IndexedFaceSet97.setTexCoord(&TextureCoordinate98);

Coordinate& Coordinate99 =  Coordinate();
Coordinate99.setDEF(CString("Beat_Arm2_R-COORD"));
Coordinate99.setPoint(new float[]{0.0075818,0.0418716,0.00372994,0.06696,-0.002228,0.0543,0.06506,-0.002228,-0.02822,-0.01771,-0.002228,-0.06676,-0.06696,-0.002228,-0.00806,-0.01463,-0.002228,0.06676,0.05757,-0.3194,-0.02497,0.05926,-0.3194,0.04805,-0.01567,-0.3194,-0.05908,-0.05926,-0.3194,-0.007133,-0.01295,-0.3194,0.05908,0.005791,-0.3194,0.00319,0.005791,-0.3194,0.00319}, 39);
IndexedFaceSet97.setCoord(&Coordinate99);

Shape93.setGeometry(&IndexedFaceSet97);

Transform92.addChild(&Shape93);

Transform83.addChild(&Transform92);

Transform82.addChild(&Transform83);

Transform& Transform100 =  Transform();
Transform100.setDEF(CString("oarm_r"));
Transform100.setTranslation(new float[]{-0.212057,1.6376,0.0218289});
Transform100.setScale(new float[]{1,0.999999,1});
Transform100.setScaleOrientation(new float[]{1.00532e-8,1,9.24515e-9,1.5708});
Shape& Shape101 =  Shape();
Appearance& Appearance102 =  Appearance();
Material& Material103 =  Material();
Material103.setUSE(CString("_2"));
Appearance102.addChild(&Material103);

ImageTexture& ImageTexture104 =  ImageTexture();
ImageTexture104.setUSE(CString("_3"));
Appearance102.addChild(&ImageTexture104);

Shape101.addChild(&Appearance102);

IndexedFaceSet& IndexedFaceSet105 =  IndexedFaceSet();
IndexedFaceSet105.setDEF(CString("Beat_Arm1_R-FACES"));
IndexedFaceSet105.setCreaseAngle(3.14159);
IndexedFaceSet105.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,11,6,7,-1,11,8,6,-1,11,9,8,-1,11,10,9,-1,11,7,10,-1,2,1,7,-1,7,6,2,-1,3,2,6,-1,6,8,3,-1,4,3,8,-1,8,9,4,-1,5,4,9,-1,9,10,5,-1,1,5,10,-1,10,7,1,-1}, 80);
TextureCoordinate& TextureCoordinate106 =  TextureCoordinate();
TextureCoordinate106.setDEF(CString("Beat_Arm1_R-TEXCOORD"));
TextureCoordinate106.setPoint(new float[]{0.663162,1.14776,0.762388,0.822301,0.751572,0.822301,0.406698,0.87573,0.212002,1.09871,0.424232,0.87573,0.751572,0.171594,0.762388,0.171594,0.28043,0.171594,0,0.171594,0.297908,0.171594,0.435576,0}, 24);
IndexedFaceSet105.setTexCoord(&TextureCoordinate106);

Coordinate& Coordinate107 =  Coordinate();
Coordinate107.setDEF(CString("Beat_Arm1_R-COORD"));
Coordinate107.setPoint(new float[]{0.01944,0.04601,0.003605,0.03687,-0.07582,0.0543,0.03497,-0.07582,-0.02822,-0.02561,-0.05582,-0.06676,-0.05981,0.02765,-0.00806,-0.02253,-0.05582,0.06676,0.03497,-0.3194,-0.02822,0.03687,-0.3194,0.0543,-0.04779,-0.3194,-0.06676,-0.09705,-0.3194,-0.00806,-0.04472,-0.3194,0.06676,-0.0205373,-0.383633,0.003605}, 36);
IndexedFaceSet105.setCoord(&Coordinate107);

Shape101.setGeometry(&IndexedFaceSet105);

Transform100.addChild(&Shape101);

Transform82.addChild(&Transform100);

Transform55.addChild(&Transform82);

Transform54.addChild(&Transform55);

Transform53.addChild(&Transform54);

Transform& Transform108 =  Transform();
Transform108.setDEF(CString("lumpen"));
Transform108.setTranslation(new float[]{0,0.857361,0});
Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
Material& Material111 =  Material();
Material111.setUSE(CString("_2"));
Appearance110.addChild(&Material111);

ImageTexture& ImageTexture112 =  ImageTexture();
ImageTexture112.setUSE(CString("_3"));
Appearance110.addChild(&ImageTexture112);

Shape109.addChild(&Appearance110);

IndexedFaceSet& IndexedFaceSet113 =  IndexedFaceSet();
IndexedFaceSet113.setSolid(False);
IndexedFaceSet113.setConvex(False);
IndexedFaceSet113.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,1,4,3,-1,5,0,2,6,-1,3,7,8,-1,3,4,7,-1,9,8,7,10,-1,7,4,11,10,-1,11,12,13,10,-1,13,14,9,10,-1,11,4,15,16,-1,15,17,18,16,-1,19,12,11,16,-1,18,20,19,16,-1,17,5,6,21,22,-1,22,21,23,24,-1,18,17,22,24,-1,25,20,18,24,-1,13,12,26,27,-1,26,28,29,27,-1,26,12,19,30,-1,31,28,26,30,-1,32,20,25,33,-1,34,35,32,33,-1,36,0,5,-1,1,0,36,-1,17,36,5,-1,1,36,4,-1,15,36,17,-1,4,36,15,-1,37,2,38,-1,38,2,3,-1,38,3,39,-1,40,3,8,-1,39,3,40,-1,41,6,2,37,-1,42,43,21,6,41,-1,9,44,40,8,-1,40,44,45,39,-1,45,46,47,39,-1,47,46,48,42,-1,48,49,43,42,-1,43,49,23,21,-1,50,44,9,14,-1,51,52,50,14,-1,45,44,50,53,-1,54,46,45,53,-1,54,55,56,57,-1,48,46,54,57,-1,58,49,48,57,-1,23,49,58,59,-1,56,60,58,57,-1,58,60,61,59,-1,62,52,51,63,-1,56,55,64,65,-1,64,55,66,67,-1,61,60,68,69,-1,70,41,37,-1,42,41,70,-1,38,70,37,-1,47,42,70,-1,38,39,70,-1,39,47,70,-1}, 295);
Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{0.220634,0.98391,0.0296142,0.215757,0.967902,-0.0488086,0,1.0542,0.0042659,0,0.977072,-0.136609,0.215757,0.888341,-0.0578301,0.22365,0.914243,0.0690623,0,0.973457,0.0983907,0.0783623,0.811665,-0.183735,0,0.812917,-0.19105,0,0.6412,-0.19895,0.0894125,0.637176,-0.194805,0.157003,0.641881,-0.164174,0.197211,0.457951,-0.170841,0.112621,0.458052,-0.202346,0,0.45916,-0.20726,0.193486,0.846333,-0.0486272,0.200425,0.644716,-0.0904601,0.220634,0.85518,0.0150172,0.164282,0.644958,-0.01416,0.226499,0.457847,-0.0963748,0.199347,0.460981,-0.0191746,0,0.824334,0.049135,0.0901548,0.817374,0.033742,0,0.652754,0.0326471,0.0949376,0.647628,0.0233636,0.11424,0.46665,0.0205053,0.204492,0.238432,-0.17159,0.116937,0.242278,-0.205107,0.165709,0.10804,-0.149614,0.117703,-0.050888,-0.173891,0.233539,0.234371,-0.0928045,0.235292,-0.0526715,-0.0854993,0.204489,0.241683,-0.011285,0.116917,0.250473,0.0311625,0.117696,-0.0442545,0.0123772,0.228517,-0.00292215,-0.0218347,0.260119,0.885241,-0.0373184,-0.220634,0.98391,0.0296142,-0.215757,0.967902,-0.0488086,-0.215757,0.888341,-0.0578301,-0.0783623,0.811665,-0.183735,-0.22365,0.914243,0.0690623,-0.220634,0.85518,0.0150172,-0.0901548,0.817374,0.033742,-0.0894125,0.637176,-0.194805,-0.157003,0.641881,-0.164174,-0.200425,0.644716,-0.0904601,-0.193486,0.846333,-0.0486272,-0.164282,0.644958,-0.01416,-0.0949376,0.647628,0.0233636,-0.112621,0.458052,-0.202346,0,0.241532,-0.210554,-0.116937,0.242278,-0.205107,-0.197211,0.457951,-0.170841,-0.226499,0.457847,-0.0963748,-0.233539,0.234371,-0.0928045,-0.204489,0.241683,-0.011285,-0.199347,0.460981,-0.0191746,-0.11424,0.46665,0.0205053,0,0.470345,0.0310584,-0.116917,0.250473,0.0311625,0,0.252948,0.0427871,-0.117703,-0.050888,-0.173891,0,0.109333,-0.193737,-0.235292,-0.0526715,-0.0854993,-0.228517,-0.00292215,-0.0218347,-0.204492,0.238432,-0.17159,-0.165709,0.10804,-0.149614,-0.117696,-0.0442545,0.0123772,0,0.00403711,0.031925,-0.260119,0.885241,-0.0373184}, 213);
IndexedFaceSet113.setCoord(&Coordinate114);

Shape109.setGeometry(&IndexedFaceSet113);

Transform108.addChild(&Shape109);

Transform53.addChild(&Transform108);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("headchngMat"));
Transform& Transform116 =  Transform();
Transform116.setDEF(CString("mund"));
Transform116.setTranslation(new float[]{-0.00169989,1.78892,0.0960455});
Transform116.setRotation(new float[]{0,-1,0,1.5708});
Transform116.setScale(new float[]{1.03797,1.35831,1.11957});
Shape& Shape117 =  Shape();
Appearance& Appearance118 =  Appearance();
Material& Material119 =  Material();
Material119.setUSE(CString("_2"));
Appearance118.addChild(&Material119);

Shape117.addChild(&Appearance118);

IndexedFaceSet& IndexedFaceSet120 =  IndexedFaceSet();
IndexedFaceSet120.setSolid(False);
IndexedFaceSet120.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,4,2,-1,5,3,4,6,-1,5,6,7,-1,8,5,7,-1,9,5,3,10,-1,3,1,11,10,-1}, 32);
Coordinate& Coordinate121 =  Coordinate();
Coordinate121.setPoint(new float[]{0.115082,-0.13295,0.0602511,0.00618318,-0.145354,0.118922,0.126331,-0.1379,0.0393701,0.00618318,-0.145354,0.000558503,0.139762,-0.145349,0.00228155,0.00618318,-0.145354,-0.117805,0.127074,-0.145246,-0.0227128,0.116422,-0.130149,-0.0384416,0.0967136,-0.127625,-0.0655306,0.0904014,-0.177903,-0.0842544,0.122631,-0.177903,-0.0000361332,0.0904014,-0.177903,0.0841821}, 36);
IndexedFaceSet120.setCoord(&Coordinate121);

Shape117.setGeometry(&IndexedFaceSet120);

Transform116.addChild(&Shape117);

Transform115.addChild(&Transform116);

Transform& Transform122 =  Transform();
Transform122.setDEF(CString("head"));
Transform122.setTranslation(new float[]{-0.00169989,1.78892,0.0960455});
Transform122.setRotation(new float[]{0,1,0,4.71239});
Transform122.setScale(new float[]{1.03797,1.35831,1.11957});
Shape& Shape123 =  Shape();
Appearance& Appearance124 =  Appearance();
Material& Material125 =  Material();
Material125.setUSE(CString("_2"));
Appearance124.addChild(&Material125);

ImageTexture& ImageTexture126 =  ImageTexture();
ImageTexture126.setUSE(CString("_3"));
Appearance124.addChild(&ImageTexture126);

Shape123.addChild(&Appearance124);

IndexedFaceSet& IndexedFaceSet127 =  IndexedFaceSet();
IndexedFaceSet127.setSolid(False);
IndexedFaceSet127.setCreaseAngle(3.14159);
IndexedFaceSet127.setColorPerVertex(False);
IndexedFaceSet127.setTexCoordIndex(new int32_t[]{4,0,3,2,46,-1,3,47,1,45,2,-1,14,45,1,13,-1,45,14,15,2,-1,18,46,2,15,-1,46,18,19,4,-1,47,20,13,1,-1,20,6,5,13,-1,6,21,12,5,-1,6,20,22,11,-1,20,47,3,22,-1,21,6,11,23,-1,24,9,10,17,-1,9,24,23,11,-1,9,25,19,10,-1,25,0,4,19,-1,0,25,22,3,-1,25,9,11,22,-1,21,36,26,12,-1,36,21,23,29,-1,14,13,5,-1,18,10,19,-1,32,41,39,34,-1,39,31,35,34,-1,30,33,44,37,-1,38,31,40,-1,31,39,40,-1,33,38,40,-1,40,39,41,-1,40,41,42,-1,43,40,42,-1,44,33,40,-1,43,44,40,-1,53,48,49,-1,50,53,49,-1,50,51,53,-1,53,64,54,-1,59,61,7,-1,61,64,7,-1,59,7,69,-1,60,59,69,-1,62,63,7,-1,62,7,64,-1,53,62,64,-1,53,51,65,-1,53,65,62,-1,51,66,65,-1,51,27,66,-1,27,67,66,-1,67,27,16,-1,68,67,16,-1,68,16,8,-1,63,70,7,-1,63,68,70,-1,70,68,8,-1,12,26,52,57,-1,14,5,60,-1,5,12,60,-1,12,58,60,-1,12,57,58,-1,57,56,58,-1,59,60,58,-1,56,59,58,-1,28,17,16,27,-1,10,18,8,-1,16,17,10,8,-1,14,60,69,-1,15,14,69,7,-1,8,18,70,-1,18,15,7,70,-1,48,53,52,-1,53,54,52,-1,54,55,52,-1,56,57,52,-1,55,56,52,-1,37,44,43,36,-1,42,41,32,26,-1,36,43,42,26,-1,24,17,28,30,-1,29,23,24,30,-1,35,31,38,28,-1,38,33,30,28,-1,54,64,72,71,-1,64,61,73,72,-1,59,61,73,74,-1,56,59,74,75,-1,54,55,76,71,-1,55,56,75,76,-1}, 395);
IndexedFaceSet127.setCoordIndex(new int32_t[]{7,3,6,5,2,-1,6,0,4,1,5,-1,15,1,4,14,-1,1,15,16,5,-1,18,2,5,16,-1,2,18,19,7,-1,0,20,14,4,-1,20,9,8,14,-1,9,21,13,8,-1,9,20,22,12,-1,20,0,6,22,-1,21,9,12,23,-1,24,10,11,17,-1,10,24,23,12,-1,10,25,19,11,-1,25,3,7,19,-1,3,25,22,6,-1,25,10,12,22,-1,21,28,26,13,-1,28,21,23,29,-1,15,14,8,-1,18,11,19,-1,32,31,33,34,-1,33,35,36,34,-1,42,41,39,40,-1,37,35,43,-1,35,33,43,-1,41,37,43,-1,43,33,31,-1,43,31,30,-1,38,43,30,-1,39,41,43,-1,38,39,43,-1,46,45,47,-1,48,46,47,-1,48,49,46,-1,46,51,50,-1,55,57,58,-1,57,51,58,-1,55,58,59,-1,56,55,59,-1,60,61,58,-1,60,58,51,-1,46,60,51,-1,46,49,62,-1,46,62,60,-1,49,63,62,-1,49,64,63,-1,64,65,63,-1,65,64,66,-1,67,65,66,-1,67,66,68,-1,61,69,58,-1,61,67,69,-1,69,67,68,-1,13,26,44,54,-1,15,8,56,-1,8,13,56,-1,13,70,56,-1,13,54,70,-1,54,53,70,-1,55,56,70,-1,53,55,70,-1,27,17,66,64,-1,11,18,68,-1,66,17,11,68,-1,15,56,59,-1,16,15,59,58,-1,68,18,69,-1,18,16,58,69,-1,45,46,44,-1,46,50,44,-1,50,52,44,-1,53,54,44,-1,52,53,44,-1,40,39,38,28,-1,30,31,32,26,-1,28,38,30,26,-1,24,17,27,42,-1,29,23,24,42,-1,36,35,37,27,-1,37,41,42,27,-1,50,51,72,71,-1,51,57,73,72,-1,55,57,73,74,-1,53,55,74,75,-1,50,52,76,71,-1,52,53,75,76,-1}, 395);
TextureCoordinate& TextureCoordinate128 =  TextureCoordinate();
TextureCoordinate128.setPoint(new float[]{0.590012,0.991089,0.370199,0.991089,0.498897,0.991089,0.498897,0.991089,0.626309,0.991089,0.0588169,0.734665,0.187334,0.734665,0.480888,0.72502,0.842683,0.674144,0.81046,0.734665,0.93458,0.734665,0.498897,0.734665,0.0000176132,0.454072,0.142972,0.8902,0.246913,0.8902,0.498897,0.8902,0.889951,0.454214,0.992789,0.454072,0.750881,0.8902,0.851264,0.8902,0.246913,0.8902,0.145706,0.454072,0.498897,0.8902,0.498897,0.454072,0.852089,0.454072,0.750881,0.8902,0.0788747,0.285584,0.730345,0.342561,0.914974,0.285584,0.499025,0.285584,0.828092,0.313014,0.740864,0.0694814,0.201573,0.18098,0.740864,0.0694814,0.499025,0.18098,0.796476,0.18098,0.201573,0.285584,0.53064,0.313014,0.837156,0.0694814,0.499152,0.0694814,0.499152,0.000391888,0.25744,0.0694814,0.157736,0.0694814,0.25744,0.0694814,0.499152,0.0694814,0.407782,0.991089,0.590012,0.991089,0.407782,0.991089,0.359845,0.30954,0.490839,0.285601,0.579117,0.285932,0.634669,0.33445,0.286095,0.325448,0.462874,0.364225,0.371183,0.439523,0.302684,0.451147,0.23264,0.501302,0.152121,0.389537,0.115511,0.522707,0.234783,0.573547,0.0792985,0.654447,0.302337,0.551242,0.531165,0.471909,0.613837,0.538504,0.467256,0.451987,0.583929,0.457087,0.66343,0.479177,0.719001,0.526734,0.720181,0.57056,0.255544,0.731349,0.710998,0.760573,0.371183,0.439523,0.467256,0.451987,0.302337,0.551242,0.234783,0.573547,0.23264,0.501302,0.302684,0.451147}, 154);
IndexedFaceSet127.setTexCoord(&TextureCoordinate128);

Coordinate& Coordinate129 =  Coordinate();
Coordinate129.setPoint(new float[]{-0.0114311,0.0741718,0.0257975,0.0401638,0.0741718,0.0257975,0.0401638,0.0741718,-0.0257975,-0.0114311,0.0741718,-0.0257975,0.0143664,0.0741718,0.0364387,0.0500362,0.0741718,2.86414e-10,-0.0114311,0.0741718,2.86414e-10,0.0143664,0.0741718,-0.0360745,0.00228196,-0.00561741,0.124601,-0.0859317,-0.0056174,0.0882136,-0.0859317,-0.0056174,-0.0882136,0.00228196,-0.00561741,-0.123356,-0.0859317,-0.0056174,1.43527e-10,0,-0.092927,0.141249,0.00554795,0.0427793,0.100774,0.0768928,0.0427793,0.0713448,0.104196,0.0427793,2.86414e-10,0,-0.092927,-0.139837,0.0768928,0.0427793,-0.0713448,0.00554795,0.0427793,-0.0997667,-0.0657969,0.0427793,0.0713448,-0.1,-0.092927,0.1,-0.0657969,0.0427793,2.86414e-10,-0.1,-0.092927,0,-0.1,-0.092927,-0.1,-0.0657969,0.0427793,-0.0713448,0.00618318,-0.145354,0.118922,0.00618318,-0.145354,-0.117805,-0.0780351,-0.145354,0.0841821,-0.0780351,-0.145354,-0.0000361332,0.0123664,-0.212597,0.0965938,0.0808029,-0.212597,0.0683643,0.0904014,-0.177903,0.0841821,0.106993,-0.212597,-0.0000722663,0.122631,-0.177903,-0.0000361332,0.0808029,-0.212597,-0.0685088,0.0904014,-0.177903,-0.0842544,0.0123664,-0.212597,-0.0957721,-0.0560702,-0.212597,0.0683643,-0.0560702,-0.212597,-0.0000722663,-0.0814679,-0.136819,-0.00898744,-0.0560702,-0.212597,-0.0685088,-0.0814679,-0.136819,-0.0932057,0.0254613,-0.234095,-0.0000722589,0.115082,-0.13295,0.0602511,0.126331,-0.1379,0.0393701,0.141496,-0.120884,0.0101992,0.139762,-0.145349,0.00228155,0.127074,-0.145246,-0.0227128,0.116422,-0.130149,-0.0384416,0.127064,-0.0974542,0.0361599,0.141496,-0.0935758,0.00895859,0.116612,-0.0938373,0.0555542,0.108342,-0.0782308,0.075386,0.0729219,-0.113008,0.0981837,0.105427,-0.0557512,0.0747794,0.0290983,-0.0305782,0.118802,0.11581,-0.0626916,0.0556524,0.141496,-0.00861859,0.00509905,0.107375,-0.00664914,0.0689013,0.130948,-0.0873769,-0.00913626,0.117645,-0.066655,-0.0325433,0.121978,-0.091989,-0.0240754,0.108833,-0.0851155,-0.0465847,0.0967136,-0.127625,-0.0655306,0.100853,-0.0703176,-0.0623187,0.064655,-0.0928831,-0.11072,0.100083,-0.0566806,-0.0626526,0.0749073,-0.0244491,-0.097337,0.103213,0.00244421,-0.0600527,0.0508918,-0.0715707,0.108549,0.127064,-0.0974542,0.0361599,0.141496,-0.0935758,0.00895859,0.11581,-0.0626916,0.0556524,0.105427,-0.0557512,0.0747794,0.108342,-0.0782308,0.075386,0.116612,-0.0938373,0.0555542}, 231);
IndexedFaceSet127.setCoord(&Coordinate129);

Shape123.setGeometry(&IndexedFaceSet127);

Transform122.addChild(&Shape123);

Transform115.addChild(&Transform122);

Transform53.addChild(&Transform115);

Transform38.addChild(&Transform53);

Transform37.addChild(&Transform38);

Billboard36.addChild(&Transform37);

Transform27.addChild(&Billboard36);

Transform26.addChild(&Transform27);

Inline& Inline130 =  Inline();
Inline130.setUrl(new CString[]{CString("fire.x3d")}, 1);
Inline130.setBboxSize(new float[]{6.67,6.67,6.67});
Transform26.addChild(&Inline130);

LOD25.addChildren(&Transform26);

Transform& Transform131 =  Transform();
Transform131.setUSE(CString("_1"));
LOD25.addChildren(&Transform131);

Scene7.addChild(&LOD25);

Inline& Inline132 =  Inline();
Inline132.setUrl(new CString[]{CString("mummy_snd.x3d")}, 1);
Inline132.setBboxSize(new float[]{1,1,1});
Scene7.addChild(&Inline132);

X3D0.setScene(&Scene7);

}
