//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{1});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{0});
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
meta3.setContent(CString("Fri, 28 Aug 2015 13:01:11 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.0.6a, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Examples/Schacht/stage/schachttor.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Fri, 02 Mar 2018 12:26:48 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("Unless"));
ExternProtoDeclare9.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Unless/Unless_proto.x3dUnless_proto.x3d")}, 2);
field& field10 =  field();
field10.setName(CString("value"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("touchTime"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field11);

Scene8.addChild(&ExternProtoDeclare9);

ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("Counter"));
ExternProtoDeclare12.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Counter/Counter_proto.x3dCounter_proto.x3d")}, 2);
field& field13 =  field();
field13.setName(CString("value"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("offset"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFInt32"));
ExternProtoDeclare12.addChild(&field14);

field& field15 =  field();
field15.setName(CString("startTime"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFTime"));
ExternProtoDeclare12.addChild(&field15);

field& field16 =  field();
field16.setName(CString("stopTime"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFTime"));
ExternProtoDeclare12.addChild(&field16);

field& field17 =  field();
field17.setName(CString("isActive"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFBool"));
ExternProtoDeclare12.addChild(&field17);

field& field18 =  field();
field18.setName(CString("enterTime"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFTime"));
ExternProtoDeclare12.addChild(&field18);

field& field19 =  field();
field19.setName(CString("exitTime"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFTime"));
ExternProtoDeclare12.addChild(&field19);

field& field20 =  field();
field20.setName(CString("whichChoice_changed"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFInt32"));
ExternProtoDeclare12.addChild(&field20);

field& field21 =  field();
field21.setName(CString("fraction_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFFloat"));
ExternProtoDeclare12.addChild(&field21);

Scene8.addChild(&ExternProtoDeclare12);

ExternProtoDeclare& ExternProtoDeclare22 =  ExternProtoDeclare();
ExternProtoDeclare22.setName(CString("Or"));
ExternProtoDeclare22.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Or/Or_proto.x3dOr_proto.x3d")}, 2);
field& field23 =  field();
field23.setName(CString("value_changed"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFBool"));
ExternProtoDeclare22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("children"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("MFNode"));
ExternProtoDeclare22.addChild(&field24);

Scene8.addChild(&ExternProtoDeclare22);

ExternProtoDeclare& ExternProtoDeclare25 =  ExternProtoDeclare();
ExternProtoDeclare25.setName(CString("Bool"));
ExternProtoDeclare25.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Bool/Bool_proto.x3dBool_proto.x3d")}, 2);
field& field26 =  field();
field26.setName(CString("value"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFBool"));
ExternProtoDeclare25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("startTime"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFTime"));
ExternProtoDeclare25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("bool"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFBool"));
ExternProtoDeclare25.addChild(&field28);

Scene8.addChild(&ExternProtoDeclare25);

ExternProtoDeclare& ExternProtoDeclare29 =  ExternProtoDeclare();
ExternProtoDeclare29.setName(CString("Bool2Int"));
ExternProtoDeclare29.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Bool2Int/Bool2Int_proto.x3dBool2Int_proto.x3d")}, 2);
field& field30 =  field();
field30.setName(CString("value"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFBool"));
ExternProtoDeclare29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("int"));
field31.setAccessType(CString("outputOnly"));
field31.setType(CString("SFInt32"));
ExternProtoDeclare29.addChild(&field31);

Scene8.addChild(&ExternProtoDeclare29);

ExternProtoDeclare& ExternProtoDeclare32 =  ExternProtoDeclare();
ExternProtoDeclare32.setName(CString("Door"));
ExternProtoDeclare32.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Door/Door_proto.x3dDoor_proto.x3d")}, 2);
field& field33 =  field();
field33.setName(CString("offset"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFBool"));
ExternProtoDeclare32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("enabled"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFBool"));
ExternProtoDeclare32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("startTime"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("stopTime"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("isActive"));
field37.setAccessType(CString("outputOnly"));
field37.setType(CString("SFBool"));
ExternProtoDeclare32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("enterTime"));
field38.setAccessType(CString("outputOnly"));
field38.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("exitTime"));
field39.setAccessType(CString("outputOnly"));
field39.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field39);

Scene8.addChild(&ExternProtoDeclare32);

ExternProtoDeclare& ExternProtoDeclare40 =  ExternProtoDeclare();
ExternProtoDeclare40.setName(CString("Not"));
ExternProtoDeclare40.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Not/Not_proto.x3dNot_proto.x3d")}, 2);
field& field41 =  field();
field41.setName(CString("set_value"));
field41.setAccessType(CString("inputOnly"));
field41.setType(CString("SFBool"));
ExternProtoDeclare40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("value_changed"));
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("SFBool"));
ExternProtoDeclare40.addChild(&field42);

Scene8.addChild(&ExternProtoDeclare40);

ExternProtoDeclare& ExternProtoDeclare43 =  ExternProtoDeclare();
ExternProtoDeclare43.setName(CString("Scene"));
ExternProtoDeclare43.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Scene/Scene_proto.x3dScene_proto.x3d")}, 2);
field& field44 =  field();
field44.setName(CString("enabled"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFBool"));
ExternProtoDeclare43.addChild(&field44);

field& field45 =  field();
field45.setName(CString("startTime"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFTime"));
ExternProtoDeclare43.addChild(&field45);

field& field46 =  field();
field46.setName(CString("stopTime"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFTime"));
ExternProtoDeclare43.addChild(&field46);

field& field47 =  field();
field47.setName(CString("isActive"));
field47.setAccessType(CString("outputOnly"));
field47.setType(CString("SFBool"));
ExternProtoDeclare43.addChild(&field47);

field& field48 =  field();
field48.setName(CString("enterTime"));
field48.setAccessType(CString("outputOnly"));
field48.setType(CString("SFTime"));
ExternProtoDeclare43.addChild(&field48);

field& field49 =  field();
field49.setName(CString("exitTime"));
field49.setAccessType(CString("outputOnly"));
field49.setType(CString("SFTime"));
ExternProtoDeclare43.addChild(&field49);

field& field50 =  field();
field50.setName(CString("children"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("MFNode"));
ExternProtoDeclare43.addChild(&field50);

Scene8.addChild(&ExternProtoDeclare43);

WorldInfo& WorldInfo51 =  WorldInfo();
WorldInfo51.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
MetadataSet& MetadataSet52 =  MetadataSet();
MetadataSet52.X3DNode::setName(CString("Titania"));
MetadataSet52.setDEF(CString("Titania"));
MetadataSet52.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet53 =  MetadataSet();
MetadataSet53.X3DNode::setName(CString("Selection"));
MetadataSet53.setDEF(CString("Selection"));
MetadataSet53.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean54 =  MetadataBoolean();
MetadataBoolean54.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean54.setDEF(CString("selectGeometry"));
MetadataBoolean54.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean54.setValue(new boolean[]{false});
MetadataSet53.setValue((X3DNode *)&MetadataBoolean54);

MetadataSet& MetadataSet55 =  MetadataSet();
MetadataSet55.X3DNode::setName(CString("nodes"));
MetadataSet55.setDEF(CString("nodes"));
MetadataSet55.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet53.setValue((X3DNode *)&MetadataSet55);

MetadataSet52.setValue((X3DNode *)&MetadataSet53);

MetadataSet& MetadataSet56 =  MetadataSet();
MetadataSet56.X3DNode::setName(CString("Page"));
MetadataSet56.setDEF(CString("Page"));
MetadataSet56.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger57 =  MetadataInteger();
MetadataInteger57.X3DNode::setName(CString("activeView"));
MetadataInteger57.setDEF(CString("activeView"));
MetadataInteger57.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger57.setValue(MFInt320);
MetadataSet56.setValue((X3DNode *)&MetadataInteger57);

MetadataInteger& MetadataInteger58 =  MetadataInteger();
MetadataInteger58.X3DNode::setName(CString("multiView"));
MetadataInteger58.setDEF(CString("multiView"));
MetadataInteger58.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger58.setValue(MFInt321);
MetadataSet56.setValue((X3DNode *)&MetadataInteger58);

MetadataSet52.setValue((X3DNode *)&MetadataSet56);

WorldInfo51.setMetadata(&MetadataSet52);

Scene8.addChild(&WorldInfo51);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("rahmen"));
Transform& Transform60 =  Transform();
Transform& Transform61 =  Transform();
Transform61.setTranslation(new float[]{8.70869,-0.00000236742,0.490862});
Transform61.setScale(new float[]{0.75,10.5322,0.75});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Appearance63.addChild(&Material64);

ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setDEF(CString("_1"));
ImageTexture65.setUrl(new CString[]{CString("rivoted.jpg")}, 1);
Appearance63.addChild(&ImageTexture65);

TextureTransform& TextureTransform66 =  TextureTransform();
TextureTransform66.setScale(new float[]{1.0,10.0});
Appearance63.setTextureTransform(TextureTransform66);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet67 =  IndexedFaceSet();
IndexedFaceSet67.setCreaseAngle(0.5);
IndexedFaceSet67.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,4,3,2,6,-1,0,1,8,9,-1,7,2,14,2,2,10,-1,1,1,12,1,5,1,-1,4,6,0,1,-1,0,1,11,13,-1,11,3,2,13,-1}, 44);
IndexedFaceSet67.setCoordIndex(new int32_t[]{2,3,5,4,-1,6,1,0,7,-1,4,5,8,9,-1,7,0,11,2,4,9,-1,5,3,10,1,6,8,-1,6,7,9,8,-1,0,1,10,11,-1,10,3,2,11,-1}, 44);
TextureCoordinate& TextureCoordinate68 =  TextureCoordinate();
TextureCoordinate68.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.5,0.0,0.0,0.0,0.5,1.0,1.0,1.0,0.5,0.0,0.5,1.0,1.0,1.0,0.5,0.0,0.0,0.0,0.5,1.0,1.0,1.0}, 30);
IndexedFaceSet67.setTexCoord(&TextureCoordinate68);

Coordinate& Coordinate69 =  Coordinate();
Coordinate69.setPoint(new float[]{-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,-1.0,1.0,1.0,1.0,-1.51221,1.0,-1.0,-1.51221,-1.0,-1.0,0.0,-1.0,1.0,0.0,0.0,-1.0,-1.51221,0.0,1.0,-1.51221,0.0,-1.0,1.98391,0.0,1.0,1.98391}, 36);
IndexedFaceSet67.setCoord(&Coordinate69);

Shape62.setGeometry(&IndexedFaceSet67);

Transform61.addChild(&Shape62);

Transform60.addChild(&Transform61);

Transform59.addChild(&Transform60);

Transform& Transform70 =  Transform();
Transform70.setTranslation(new float[]{-0.0118644,-9.78194,-0.411172});
Transform70.setRotation(new float[]{7.91898e-14,-2.39354e-13,-1.0,1.5708});
Transform70.setScale(new float[]{0.445256,8.42318,0.152131});
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Appearance72.addChild(&Material73);

ImageTexture& ImageTexture74 =  ImageTexture();
ImageTexture74.setUSE(CString("_1"));
Appearance72.addChild(&ImageTexture74);

TextureTransform& TextureTransform75 =  TextureTransform();
TextureTransform75.setTranslation(new float[]{0.0,-0.02});
TextureTransform75.setScale(new float[]{0.5,8.0});
Appearance72.setTextureTransform(TextureTransform75);

Shape71.addChild(&Appearance72);

Box& Box76 =  Box();
Shape71.setGeometry(&Box76);

Transform70.addChild(&Shape71);

Transform59.addChild(&Transform70);

Transform& Transform77 =  Transform();
Transform77.setTranslation(new float[]{-0.0118621,9.67197,-0.411172});
Transform77.setRotation(new float[]{7.91898e-14,-2.39354e-13,-1.0,1.5708});
Transform77.setScale(new float[]{0.445256,8.42318,0.152131});
Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Material& Material80 =  Material();
Appearance79.addChild(&Material80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setUSE(CString("_1"));
Appearance79.addChild(&ImageTexture81);

TextureTransform& TextureTransform82 =  TextureTransform();
TextureTransform82.setTranslation(new float[]{0.0,-0.02});
TextureTransform82.setScale(new float[]{0.5,8.0});
Appearance79.setTextureTransform(TextureTransform82);

Shape78.addChild(&Appearance79);

Box& Box83 =  Box();
Shape78.setGeometry(&Box83);

Transform77.addChild(&Shape78);

Transform59.addChild(&Transform77);

Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{-8.70869,-0.00000236742,0.490862});
Transform84.setScale(new float[]{0.75,10.5322,0.75});
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Material& Material87 =  Material();
Appearance86.addChild(&Material87);

ImageTexture& ImageTexture88 =  ImageTexture();
ImageTexture88.setUSE(CString("_1"));
Appearance86.addChild(&ImageTexture88);

TextureTransform& TextureTransform89 =  TextureTransform();
TextureTransform89.setScale(new float[]{1.0,10.0});
Appearance86.setTextureTransform(TextureTransform89);

Shape85.addChild(&Appearance86);

IndexedFaceSet& IndexedFaceSet90 =  IndexedFaceSet();
IndexedFaceSet90.setCreaseAngle(0.5);
IndexedFaceSet90.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,4,6,-1,8,3,2,10,-1,2,2,14,2,7,2,-1,5,1,12,1,1,9,-1,2,6,4,3,-1,0,1,11,13,-1,11,3,2,13,-1}, 44);
IndexedFaceSet90.setCoordIndex(new int32_t[]{4,5,1,0,-1,2,3,6,7,-1,8,5,4,9,-1,4,0,11,2,7,9,-1,6,3,10,1,5,8,-1,9,7,6,8,-1,0,1,10,11,-1,10,3,2,11,-1}, 44);
TextureCoordinate& TextureCoordinate91 =  TextureCoordinate();
TextureCoordinate91.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.5,0.0,0.0,0.0,0.5,1.0,1.0,1.0,0.5,0.0,0.0,0.0,0.5,1.0,0.5,0.0,0.0,0.0,0.5,1.0,1.0,1.0}, 30);
IndexedFaceSet90.setTexCoord(&TextureCoordinate91);

Coordinate& Coordinate92 =  Coordinate();
Coordinate92.setPoint(new float[]{-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,-1.0,1.0,-1.0,1.0,-1.51221,-1.0,-1.0,-1.51221,1.0,-1.0,0.0,1.0,1.0,0.0,0.0,-1.0,-1.51221,0.0,1.0,-1.51221,0.0,-1.0,1.98391,0.0,1.0,1.98391}, 36);
IndexedFaceSet90.setCoord(&Coordinate92);

Shape85.setGeometry(&IndexedFaceSet90);

Transform84.addChild(&Shape85);

Transform59.addChild(&Transform84);

Scene8.addChild(&Transform59);

Transform& Transform93 =  Transform();
Transform93.setDEF(CString("doorOpenClose"));
Transform93.setBboxSize(new float[]{17.0,21.0,1.0});
Group& Group94 =  Group();
Group& Group95 =  Group();
Group95.setDEF(CString("doorOpen"));
TimeSensor& TimeSensor96 =  TimeSensor();
TimeSensor96.setDEF(CString("Time_2"));
TimeSensor96.setStopTime(1);
Group95.addChild(&TimeSensor96);

Group94.addChild(&Group95);

PositionInterpolator& PositionInterpolator97 =  PositionInterpolator();
PositionInterpolator97.setDEF(CString("doorObenTranslationInterp_3"));
PositionInterpolator97.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator97.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.479328,0.0,0.0,0.958656,0.0,0.0,1.43798,0.0,0.0,1.91731,0.0,0.0,2.39664,0.0,0.0,2.87597,0.0,0.0,3.3553,0.0,0.0,3.83462,0.0,0.0,4.31395,0.0,0.0,4.79328,0.0}, 33);
Group94.addChild(&PositionInterpolator97);

PositionInterpolator& PositionInterpolator98 =  PositionInterpolator();
PositionInterpolator98.setDEF(CString("doorUntenTranslationInterp_4"));
PositionInterpolator98.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator98.setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.519487,0.0,0.0,-1.03897,0.0,0.0,-1.55846,0.0,0.0,-2.07795,0.0,0.0,-2.59743,0.0,0.0,-3.11692,0.0,0.0,-3.63641,0.0,0.0,-4.1559,0.0,0.0,-4.67538,0.0,0.0,-5.19487,0.0}, 33);
Group94.addChild(&PositionInterpolator98);

Transform93.addChild(&Group94);

Group& Group99 =  Group();
Group& Group100 =  Group();
Group100.setDEF(CString("doorClose"));
TimeSensor& TimeSensor101 =  TimeSensor();
TimeSensor101.setDEF(CString("Time_5"));
TimeSensor101.setStopTime(1);
Group100.addChild(&TimeSensor101);

Group99.addChild(&Group100);

PositionInterpolator& PositionInterpolator102 =  PositionInterpolator();
PositionInterpolator102.setDEF(CString("doorObenTranslationInterp_6"));
PositionInterpolator102.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator102.setKeyValue(new float[]{0.0,4.79328,0.0,0.0,4.31395,0.0,0.0,3.83462,0.0,0.0,3.3553,0.0,0.0,2.87597,0.0,0.0,2.39664,0.0,0.0,1.91731,0.0,0.0,1.43798,0.0,0.0,0.958656,0.0,0.0,0.479328,0.0,0.0,0.0,0.0}, 33);
Group99.addChild(&PositionInterpolator102);

PositionInterpolator& PositionInterpolator103 =  PositionInterpolator();
PositionInterpolator103.setDEF(CString("doorUntenTranslationInterp_7"));
PositionInterpolator103.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator103.setKeyValue(new float[]{0.0,-5.19487,0.0,0.0,-4.67538,0.0,0.0,-4.1559,0.0,0.0,-3.63641,0.0,0.0,-3.11692,0.0,0.0,-2.59743,0.0,0.0,-2.07795,0.0,0.0,-1.55846,0.0,0.0,-1.03897,0.0,0.0,-0.519487,0.0,0.0,0.0,0.0}, 33);
Group99.addChild(&PositionInterpolator103);

Transform93.addChild(&Group99);

Transform& Transform104 =  Transform();
Transform104.setDEF(CString("doorOben"));
Transform104.setCenter(new float[]{-4.76837e-7,2.93616,0.346488});
TouchSensor& TouchSensor105 =  TouchSensor();
TouchSensor105.setDEF(CString("_8"));
Transform104.addChild(&TouchSensor105);

TouchSensor& TouchSensor106 =  TouchSensor();
TouchSensor106.setDEF(CString("_9"));
TouchSensor106.setEnabled(false);
Transform104.addChild(&TouchSensor106);

Transform& Transform107 =  Transform();
Transform107.setTranslation(new float[]{-4.54485e-7,2.93616,0.215953});
Transform107.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform107.setScale(new float[]{7.95869,0.235682,2.8179});
Transform107.setCenter(new float[]{0.0,0.0,0.130535});
Shape& Shape108 =  Shape();
Appearance& Appearance109 =  Appearance();
Material& Material110 =  Material();
Appearance109.addChild(&Material110);

ImageTexture& ImageTexture111 =  ImageTexture();
ImageTexture111.setDEF(CString("_10"));
ImageTexture111.setUrl(new CString[]{CString("wall1.jpg")}, 1);
Appearance109.addChild(&ImageTexture111);

Shape108.addChild(&Appearance109);

IndexedFaceSet& IndexedFaceSet112 =  IndexedFaceSet();
IndexedFaceSet112.setCreaseAngle(0.5);
IndexedFaceSet112.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,7,2,-1,0,5,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,6,4,2,-1,6,1,3,4,-1}, 37);
IndexedFaceSet112.setCoordIndex(new int32_t[]{4,5,7,6,-1,6,7,1,9,0,-1,2,8,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,0,9,8,2,-1,9,1,3,8,-1}, 37);
TextureCoordinate& TextureCoordinate113 =  TextureCoordinate();
TextureCoordinate113.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.5,0.0,0.5,0.0,0.5,1.0,0.5}, 16);
IndexedFaceSet112.setTexCoord(&TextureCoordinate113);

Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,-1.0,1.0,1.0,1.0,-1.0,1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,0.0,1.26107,-1.0,0.0,1.26107}, 30);
IndexedFaceSet112.setCoord(&Coordinate114);

Shape108.setGeometry(&IndexedFaceSet112);

Transform107.addChild(&Shape108);

Transform104.addChild(&Transform107);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("Pfeil_11"));
Switch& Switch116 =  Switch();
Switch116.setDEF(CString("_12"));
Switch116.setWhichChoice(0);
Transform& Transform117 =  Transform();
Switch116.addChild(&Transform117);

Switch& Switch118 =  Switch();
Switch118.setDEF(CString("_13"));
Switch118.setWhichChoice(0);
Transform& Transform119 =  Transform();
Transform119.setTranslation(new float[]{0.257185,2.78224,0.801082});
Transform119.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform119.setScale(new float[]{0.55255,0.103483,0.600411});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
Material& Material122 =  Material();
Material122.setDiffuseColor(new float[]{0.8,0.426738,0.0});
Material122.setEmissiveColor(new float[]{0.617021,0.329133,0.0});
Material122.setTransparency(0.670213);
Appearance121.addChild(&Material122);

Shape120.addChild(&Appearance121);

IndexedFaceSet& IndexedFaceSet123 =  IndexedFaceSet();
IndexedFaceSet123.setCreaseAngle(0.5);
IndexedFaceSet123.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1}, 63);
Coordinate& Coordinate124 =  Coordinate();
Coordinate124.setPoint(new float[]{-3.46545,1.0,2.16771,-3.46545,-1.0,2.16771,2.5838,1.0,2.16771,2.5838,-1.0,2.16771,-3.46545,-1.0,-0.303164,-3.46545,1.0,-0.303164,2.5838,-1.0,-0.303164,2.5838,1.0,-0.303164,-5.46545,-1.0,-0.303164,-5.46545,1.0,-0.303164,4.53455,-1.0,-0.303164,4.53455,1.0,-0.303164,-0.465452,-1.0,-2.77404,-0.465451,0.999999,-2.77404}, 42);
IndexedFaceSet123.setCoord(&Coordinate124);

Shape120.setGeometry(&IndexedFaceSet123);

Transform119.addChild(&Shape120);

Switch118.addChild(&Transform119);

Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[]{-0.257185,3.14628,0.801083});
Transform125.setRotation(new float[]{-0.00000371598147765511,0.707105281179478,0.707108281180671,3.1416});
Transform125.setScale(new float[]{0.55255,0.103483,0.600412});
Shape& Shape126 =  Shape();
Appearance& Appearance127 =  Appearance();
Material& Material128 =  Material();
Material128.setDiffuseColor(new float[]{0.8,0.426738,0.0});
Material128.setEmissiveColor(new float[]{0.617021,0.329133,0.0});
Material128.setTransparency(0.670213);
Appearance127.addChild(&Material128);

Shape126.addChild(&Appearance127);

IndexedFaceSet& IndexedFaceSet129 =  IndexedFaceSet();
IndexedFaceSet129.setCreaseAngle(0.5);
IndexedFaceSet129.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1}, 63);
Coordinate& Coordinate130 =  Coordinate();
Coordinate130.setPoint(new float[]{-3.46545,1.0,2.16771,-3.46545,-1.0,2.16771,2.5838,1.0,2.16771,2.5838,-1.0,2.16771,-3.46545,-1.0,-0.303164,-3.46545,1.0,-0.303164,2.5838,-1.0,-0.303164,2.5838,1.0,-0.303164,-5.46545,-1.0,-0.303164,-5.46545,1.0,-0.303164,4.53455,-1.0,-0.303164,4.53455,1.0,-0.303164,-0.465452,-1.0,-2.77404,-0.465451,0.999999,-2.77404}, 42);
IndexedFaceSet129.setCoord(&Coordinate130);

Shape126.setGeometry(&IndexedFaceSet129);

Transform125.addChild(&Shape126);

Switch118.addChild(&Transform125);

Transform& Transform131 =  Transform();
Transform131.setDEF(CString("Unless"));
ProtoInstance& ProtoInstance132 =  ProtoInstance();
ProtoInstance132.setName(CString("Unless"));
ProtoInstance132.setDEF(CString("_14"));
Transform131.addChild(&ProtoInstance132);

Switch118.addChild(&Transform131);

Transform& Transform133 =  Transform();
Transform133.setDEF(CString("Counter"));
ProtoInstance& ProtoInstance134 =  ProtoInstance();
ProtoInstance134.setName(CString("Counter"));
ProtoInstance134.setDEF(CString("_15"));
fieldValue& fieldValue135 =  fieldValue();
fieldValue135.setName(CString("value"));
fieldValue135.setValue(CString("1"));
ProtoInstance134.addChild(&fieldValue135);

fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(CString("startTime"));
fieldValue136.setValue(CString("1"));
ProtoInstance134.addChild(&fieldValue136);

Transform133.addChild(&ProtoInstance134);

Switch118.addChild(&Transform133);

Switch116.addChild(&Switch118);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("Or"));
ProtoInstance& ProtoInstance138 =  ProtoInstance();
ProtoInstance138.setName(CString("Or"));
ProtoInstance138.setDEF(CString("_16"));
fieldValue& fieldValue139 =  fieldValue();
fieldValue139.setName(CString("children"));
ProtoInstance& ProtoInstance140 =  ProtoInstance();
ProtoInstance140.setName(CString("Bool"));
ProtoInstance140.setDEF(CString("_17"));
fieldValue139.addChild(&ProtoInstance140);

ProtoInstance& ProtoInstance141 =  ProtoInstance();
ProtoInstance141.setName(CString("Bool"));
ProtoInstance141.setDEF(CString("_18"));
fieldValue139.addChild(&ProtoInstance141);

ProtoInstance138.addChild(&fieldValue139);

Transform137.addChild(&ProtoInstance138);

Switch116.addChild(&Transform137);

Transform& Transform142 =  Transform();
Transform142.setDEF(CString("Bool2Int"));
ProtoInstance& ProtoInstance143 =  ProtoInstance();
ProtoInstance143.setName(CString("Bool2Int"));
ProtoInstance143.setDEF(CString("_19"));
Transform142.addChild(&ProtoInstance143);

Switch116.addChild(&Transform142);

Transform115.addChild(&Switch116);

Transform104.addChild(&Transform115);

Transform93.addChild(&Transform104);

Transform& Transform144 =  Transform();
Transform144.setDEF(CString("doorUnten"));
Transform144.setCenter(new float[]{2.38419e-7,-2.85131,0.346489});
TouchSensor& TouchSensor145 =  TouchSensor();
TouchSensor145.setDEF(CString("_20"));
Transform144.addChild(&TouchSensor145);

TouchSensor& TouchSensor146 =  TouchSensor();
TouchSensor146.setDEF(CString("_21"));
TouchSensor146.setEnabled(false);
Transform144.addChild(&TouchSensor146);

Transform& Transform147 =  Transform();
Transform147.setTranslation(new float[]{1.1029e-7,-2.85131,0.215954});
Transform147.setRotation(new float[]{1.86262942361128e-8,0.707106781186547,0.707106781186547,3.14159});
Transform147.setScale(new float[]{7.9587,0.235682,2.81789});
Transform147.setCenter(new float[]{0.0,0.0,0.130535});
Shape& Shape148 =  Shape();
Appearance& Appearance149 =  Appearance();
Material& Material150 =  Material();
Appearance149.addChild(&Material150);

ImageTexture& ImageTexture151 =  ImageTexture();
ImageTexture151.setUSE(CString("_10"));
Appearance149.addChild(&ImageTexture151);

Shape148.addChild(&Appearance149);

IndexedFaceSet& IndexedFaceSet152 =  IndexedFaceSet();
IndexedFaceSet152.setCreaseAngle(0.5);
IndexedFaceSet152.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,7,2,-1,0,5,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,6,4,2,-1,6,1,3,4,-1}, 37);
IndexedFaceSet152.setCoordIndex(new int32_t[]{4,5,7,6,-1,6,7,1,9,0,-1,2,8,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,0,9,8,2,-1,9,1,3,8,-1}, 37);
TextureCoordinate& TextureCoordinate153 =  TextureCoordinate();
TextureCoordinate153.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.5,0.0,0.5,0.0,0.5,1.0,0.5}, 16);
IndexedFaceSet152.setTexCoord(&TextureCoordinate153);

Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,-1.0,1.0,1.0,1.0,-1.0,1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,0.0,1.26107,-1.0,0.0,1.26107}, 30);
IndexedFaceSet152.setCoord(&Coordinate154);

Shape148.setGeometry(&IndexedFaceSet152);

Transform147.addChild(&Shape148);

Transform144.addChild(&Transform147);

Transform& Transform155 =  Transform();
Transform155.setDEF(CString("Pfeil"));
Switch& Switch156 =  Switch();
Switch156.setDEF(CString("_22"));
Switch156.setWhichChoice(0);
Transform& Transform157 =  Transform();
Switch156.addChild(&Transform157);

Switch& Switch158 =  Switch();
Switch158.setDEF(CString("_23"));
Switch158.setWhichChoice(0);
Transform& Transform159 =  Transform();
Transform159.setTranslation(new float[]{-0.257184,-2.55538,0.801065});
Transform159.setRotation(new float[]{-7.93487754455796e-7,0.707106781186325,0.707106781186325,3.14159});
Transform159.setScale(new float[]{0.552549,0.103483,0.600413});
Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setDiffuseColor(new float[]{0.8,0.426738,0.0});
Material162.setEmissiveColor(new float[]{0.617021,0.329133,0.0});
Material162.setTransparency(0.670213);
Appearance161.addChild(&Material162);

Shape160.addChild(&Appearance161);

IndexedFaceSet& IndexedFaceSet163 =  IndexedFaceSet();
IndexedFaceSet163.setCreaseAngle(0.5);
IndexedFaceSet163.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1}, 63);
Coordinate& Coordinate164 =  Coordinate();
Coordinate164.setPoint(new float[]{-3.46545,1.0,2.16771,-3.46545,-1.0,2.16771,2.5838,1.0,2.16771,2.5838,-1.0,2.16771,-3.46545,-1.0,-0.303164,-3.46545,1.0,-0.303164,2.5838,-1.0,-0.303164,2.5838,1.0,-0.303164,-5.46545,-1.0,-0.303164,-5.46545,1.0,-0.303164,4.53455,-1.0,-0.303164,4.53455,1.0,-0.303164,-0.465452,-1.0,-2.77404,-0.465451,0.999999,-2.77404}, 42);
IndexedFaceSet163.setCoord(&Coordinate164);

Shape160.setGeometry(&IndexedFaceSet163);

Transform159.addChild(&Shape160);

Switch158.addChild(&Transform159);

Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[]{0.257184,-2.91943,0.801066});
Transform165.setRotation(new float[]{0.999999999997485,-0.00000204183999999486,9.28232999997665e-7,1.5708});
Transform165.setScale(new float[]{0.552549,0.103483,0.600412});
Shape& Shape166 =  Shape();
Appearance& Appearance167 =  Appearance();
Material& Material168 =  Material();
Material168.setDiffuseColor(new float[]{0.8,0.426738,0.0});
Material168.setEmissiveColor(new float[]{0.617021,0.329133,0.0});
Material168.setTransparency(0.670213);
Appearance167.addChild(&Material168);

Shape166.addChild(&Appearance167);

IndexedFaceSet& IndexedFaceSet169 =  IndexedFaceSet();
IndexedFaceSet169.setCreaseAngle(0.5);
IndexedFaceSet169.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1}, 63);
Coordinate& Coordinate170 =  Coordinate();
Coordinate170.setPoint(new float[]{-3.46545,1.0,2.16771,-3.46545,-1.0,2.16771,2.5838,1.0,2.16771,2.5838,-1.0,2.16771,-3.46545,-1.0,-0.303164,-3.46545,1.0,-0.303164,2.5838,-1.0,-0.303164,2.5838,1.0,-0.303164,-5.46545,-1.0,-0.303164,-5.46545,1.0,-0.303164,4.53455,-1.0,-0.303164,4.53455,1.0,-0.303164,-0.465452,-1.0,-2.77404,-0.465451,0.999999,-2.77404}, 42);
IndexedFaceSet169.setCoord(&Coordinate170);

Shape166.setGeometry(&IndexedFaceSet169);

Transform165.addChild(&Shape166);

Switch158.addChild(&Transform165);

Switch156.addChild(&Switch158);

Transform155.addChild(&Switch156);

Transform144.addChild(&Transform155);

Transform93.addChild(&Transform144);

Scene8.addChild(&Transform93);

Sound& Sound171 =  Sound();
Sound171.setDEF(CString("e-door-close"));
Sound171.setMinBack(25.1);
Sound171.setMinFront(25.1);
Sound171.setMaxBack(251);
Sound171.setMaxFront(251);
AudioClip& AudioClip172 =  AudioClip();
AudioClip172.setDEF(CString("e-door-close_24"));
AudioClip172.setDescription(CString("e-door-close"));
AudioClip172.setUrl(new CString[]{CString("e-door-close.wav")}, 1);
AudioClip172.setPitch(0.7);
Sound171.setSource(AudioClip172);

Scene8.addChild(&Sound171);

Sound& Sound173 =  Sound();
Sound173.setDEF(CString("e-door-open"));
Sound173.setMinBack(25.2);
Sound173.setMinFront(25.2);
Sound173.setMaxBack(252);
Sound173.setMaxFront(252);
AudioClip& AudioClip174 =  AudioClip();
AudioClip174.setDEF(CString("e-door-open_25"));
AudioClip174.setDescription(CString("e-door-open"));
AudioClip174.setUrl(new CString[]{CString("e-door-open.wav")}, 1);
AudioClip174.setPitch(0.7);
Sound173.setSource(AudioClip174);

Scene8.addChild(&Sound173);

Transform& Transform175 =  Transform();
Transform175.setDEF(CString("Door"));
ProtoInstance& ProtoInstance176 =  ProtoInstance();
ProtoInstance176.setName(CString("Door"));
ProtoInstance176.setDEF(CString("_26"));
Transform175.addChild(&ProtoInstance176);

Scene8.addChild(&Transform175);

Transform& Transform177 =  Transform();
Transform177.setDEF(CString("Not"));
ProtoInstance& ProtoInstance178 =  ProtoInstance();
ProtoInstance178.setName(CString("Not"));
ProtoInstance178.setDEF(CString("_27"));
Transform177.addChild(&ProtoInstance178);

Scene8.addChild(&Transform177);

Transform& Transform179 =  Transform();
Transform179.setDEF(CString("Scene"));
ProtoInstance& ProtoInstance180 =  ProtoInstance();
ProtoInstance180.setName(CString("Scene"));
ProtoInstance180.setDEF(CString("_28"));
Transform179.addChild(&ProtoInstance180);

Scene8.addChild(&Transform179);

Script& Script181 =  Script();
Script181.setDEF(CString("Debug"));
field& field182 =  field();
field182.setName(CString("set_SFBool"));
field182.setAccessType(CString("inputOnly"));
field182.setType(CString("SFBool"));
Script181.addChild(&field182);

field& field183 =  field();
field183.setName(CString("set_or"));
field183.setAccessType(CString("inputOnly"));
field183.setType(CString("SFBool"));
Script181.addChild(&field183);


//Script181.setSourceCode(CString("vrmlscript:")+
//_T("function set_SFBool (value, time)")+
//_T("{")+
//_T("	//print (time + ': ' + value);")+
//_T("}")+
//_T("function set_or (value, time)")+
//_T("{")+
//_T("	//print (time + ': or ' + value);")+
//_T("}"));
Scene8.addChild(&Script181);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("_26"));
ROUTE184.setFromField(CString("enterTime"));
ROUTE184.setToNode(CString("Time_2"));
ROUTE184.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("Time_2"));
ROUTE185.setFromField(CString("fraction_changed"));
ROUTE185.setToNode(CString("doorObenTranslationInterp_3"));
ROUTE185.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE185);

ROUTE& ROUTE186 =  ROUTE();
ROUTE186.setFromNode(CString("Time_2"));
ROUTE186.setFromField(CString("fraction_changed"));
ROUTE186.setToNode(CString("doorUntenTranslationInterp_4"));
ROUTE186.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE186);

ROUTE& ROUTE187 =  ROUTE();
ROUTE187.setFromNode(CString("_26"));
ROUTE187.setFromField(CString("exitTime"));
ROUTE187.setToNode(CString("Time_5"));
ROUTE187.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE187);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("Time_5"));
ROUTE188.setFromField(CString("fraction_changed"));
ROUTE188.setToNode(CString("doorObenTranslationInterp_6"));
ROUTE188.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("Time_5"));
ROUTE189.setFromField(CString("fraction_changed"));
ROUTE189.setToNode(CString("doorUntenTranslationInterp_7"));
ROUTE189.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_27"));
ROUTE190.setFromField(CString("value_changed"));
ROUTE190.setToNode(CString("_8"));
ROUTE190.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("_26"));
ROUTE191.setFromField(CString("isActive"));
ROUTE191.setToNode(CString("_9"));
ROUTE191.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE191);

ROUTE& ROUTE192 =  ROUTE();
ROUTE192.setFromNode(CString("Time_5"));
ROUTE192.setFromField(CString("isActive"));
ROUTE192.setToNode(CString("_14"));
ROUTE192.setToField(CString("set_value"));
Scene8.addChild(&ROUTE192);

ROUTE& ROUTE193 =  ROUTE();
ROUTE193.setFromNode(CString("Time_2"));
ROUTE193.setFromField(CString("isActive"));
ROUTE193.setToNode(CString("_14"));
ROUTE193.setToField(CString("set_value"));
Scene8.addChild(&ROUTE193);

ROUTE& ROUTE194 =  ROUTE();
ROUTE194.setFromNode(CString("_14"));
ROUTE194.setFromField(CString("touchTime"));
ROUTE194.setToNode(CString("_15"));
ROUTE194.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE194);

ROUTE& ROUTE195 =  ROUTE();
ROUTE195.setFromNode(CString("_15"));
ROUTE195.setFromField(CString("whichChoice_changed"));
ROUTE195.setToNode(CString("_13"));
ROUTE195.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE195);

ROUTE& ROUTE196 =  ROUTE();
ROUTE196.setFromNode(CString("_20"));
ROUTE196.setFromField(CString("isOver"));
ROUTE196.setToNode(CString("_17"));
ROUTE196.setToField(CString("set_value"));
Scene8.addChild(&ROUTE196);

ROUTE& ROUTE197 =  ROUTE();
ROUTE197.setFromNode(CString("_9"));
ROUTE197.setFromField(CString("isOver"));
ROUTE197.setToNode(CString("_17"));
ROUTE197.setToField(CString("set_value"));
Scene8.addChild(&ROUTE197);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("Time_2"));
ROUTE198.setFromField(CString("isActive"));
ROUTE198.setToNode(CString("_17"));
ROUTE198.setToField(CString("set_value"));
Scene8.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("Time_5"));
ROUTE199.setFromField(CString("isActive"));
ROUTE199.setToNode(CString("_17"));
ROUTE199.setToField(CString("set_value"));
Scene8.addChild(&ROUTE199);

ROUTE& ROUTE200 =  ROUTE();
ROUTE200.setFromNode(CString("_8"));
ROUTE200.setFromField(CString("isOver"));
ROUTE200.setToNode(CString("_18"));
ROUTE200.setToField(CString("set_value"));
Scene8.addChild(&ROUTE200);

ROUTE& ROUTE201 =  ROUTE();
ROUTE201.setFromNode(CString("_21"));
ROUTE201.setFromField(CString("isOver"));
ROUTE201.setToNode(CString("_18"));
ROUTE201.setToField(CString("set_value"));
Scene8.addChild(&ROUTE201);

ROUTE& ROUTE202 =  ROUTE();
ROUTE202.setFromNode(CString("Time_2"));
ROUTE202.setFromField(CString("isActive"));
ROUTE202.setToNode(CString("_18"));
ROUTE202.setToField(CString("set_value"));
Scene8.addChild(&ROUTE202);

ROUTE& ROUTE203 =  ROUTE();
ROUTE203.setFromNode(CString("Time_5"));
ROUTE203.setFromField(CString("isActive"));
ROUTE203.setToNode(CString("_18"));
ROUTE203.setToField(CString("set_value"));
Scene8.addChild(&ROUTE203);

ROUTE& ROUTE204 =  ROUTE();
ROUTE204.setFromNode(CString("_16"));
ROUTE204.setFromField(CString("value_changed"));
ROUTE204.setToNode(CString("_19"));
ROUTE204.setToField(CString("set_value"));
Scene8.addChild(&ROUTE204);

ROUTE& ROUTE205 =  ROUTE();
ROUTE205.setFromNode(CString("_19"));
ROUTE205.setFromField(CString("int"));
ROUTE205.setToNode(CString("_12"));
ROUTE205.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE205);

ROUTE& ROUTE206 =  ROUTE();
ROUTE206.setFromNode(CString("doorObenTranslationInterp_3"));
ROUTE206.setFromField(CString("value_changed"));
ROUTE206.setToNode(CString("doorOben"));
ROUTE206.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE206);

ROUTE& ROUTE207 =  ROUTE();
ROUTE207.setFromNode(CString("doorObenTranslationInterp_6"));
ROUTE207.setFromField(CString("value_changed"));
ROUTE207.setToNode(CString("doorOben"));
ROUTE207.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE207);

ROUTE& ROUTE208 =  ROUTE();
ROUTE208.setFromNode(CString("_27"));
ROUTE208.setFromField(CString("value_changed"));
ROUTE208.setToNode(CString("_20"));
ROUTE208.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE208);

ROUTE& ROUTE209 =  ROUTE();
ROUTE209.setFromNode(CString("_26"));
ROUTE209.setFromField(CString("isActive"));
ROUTE209.setToNode(CString("_21"));
ROUTE209.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE209);

ROUTE& ROUTE210 =  ROUTE();
ROUTE210.setFromNode(CString("_15"));
ROUTE210.setFromField(CString("whichChoice_changed"));
ROUTE210.setToNode(CString("_23"));
ROUTE210.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE210);

ROUTE& ROUTE211 =  ROUTE();
ROUTE211.setFromNode(CString("_19"));
ROUTE211.setFromField(CString("int"));
ROUTE211.setToNode(CString("_22"));
ROUTE211.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE211);

ROUTE& ROUTE212 =  ROUTE();
ROUTE212.setFromNode(CString("doorUntenTranslationInterp_4"));
ROUTE212.setFromField(CString("value_changed"));
ROUTE212.setToNode(CString("doorUnten"));
ROUTE212.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE212);

ROUTE& ROUTE213 =  ROUTE();
ROUTE213.setFromNode(CString("doorUntenTranslationInterp_7"));
ROUTE213.setFromField(CString("value_changed"));
ROUTE213.setToNode(CString("doorUnten"));
ROUTE213.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE213);

ROUTE& ROUTE214 =  ROUTE();
ROUTE214.setFromNode(CString("_26"));
ROUTE214.setFromField(CString("exitTime"));
ROUTE214.setToNode(CString("e-door-close_24"));
ROUTE214.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE214);

ROUTE& ROUTE215 =  ROUTE();
ROUTE215.setFromNode(CString("_26"));
ROUTE215.setFromField(CString("enterTime"));
ROUTE215.setToNode(CString("e-door-open_25"));
ROUTE215.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE215);

ROUTE& ROUTE216 =  ROUTE();
ROUTE216.setFromNode(CString("Time_5"));
ROUTE216.setFromField(CString("isActive"));
ROUTE216.setToNode(CString("_26"));
ROUTE216.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE216);

ROUTE& ROUTE217 =  ROUTE();
ROUTE217.setFromNode(CString("Time_2"));
ROUTE217.setFromField(CString("isActive"));
ROUTE217.setToNode(CString("_26"));
ROUTE217.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE217);

ROUTE& ROUTE218 =  ROUTE();
ROUTE218.setFromNode(CString("_8"));
ROUTE218.setFromField(CString("touchTime"));
ROUTE218.setToNode(CString("_26"));
ROUTE218.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE218);

ROUTE& ROUTE219 =  ROUTE();
ROUTE219.setFromNode(CString("_20"));
ROUTE219.setFromField(CString("touchTime"));
ROUTE219.setToNode(CString("_26"));
ROUTE219.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE219);

ROUTE& ROUTE220 =  ROUTE();
ROUTE220.setFromNode(CString("_21"));
ROUTE220.setFromField(CString("touchTime"));
ROUTE220.setToNode(CString("_26"));
ROUTE220.setToField(CString("set_stopTime"));
Scene8.addChild(&ROUTE220);

ROUTE& ROUTE221 =  ROUTE();
ROUTE221.setFromNode(CString("_9"));
ROUTE221.setFromField(CString("touchTime"));
ROUTE221.setToNode(CString("_26"));
ROUTE221.setToField(CString("set_stopTime"));
Scene8.addChild(&ROUTE221);

ROUTE& ROUTE222 =  ROUTE();
ROUTE222.setFromNode(CString("_26"));
ROUTE222.setFromField(CString("isActive"));
ROUTE222.setToNode(CString("_27"));
ROUTE222.setToField(CString("set_value"));
Scene8.addChild(&ROUTE222);

ROUTE& ROUTE223 =  ROUTE();
ROUTE223.setFromNode(CString("_26"));
ROUTE223.setFromField(CString("enterTime"));
ROUTE223.setToNode(CString("_28"));
ROUTE223.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE223);

ROUTE& ROUTE224 =  ROUTE();
ROUTE224.setFromNode(CString("_26"));
ROUTE224.setFromField(CString("exitTime"));
ROUTE224.setToNode(CString("_28"));
ROUTE224.setToField(CString("set_stopTime"));
Scene8.addChild(&ROUTE224);

ROUTE& ROUTE225 =  ROUTE();
ROUTE225.setFromNode(CString("_20"));
ROUTE225.setFromField(CString("isOver"));
ROUTE225.setToNode(CString("Debug"));
ROUTE225.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE225);

ROUTE& ROUTE226 =  ROUTE();
ROUTE226.setFromNode(CString("_8"));
ROUTE226.setFromField(CString("isOver"));
ROUTE226.setToNode(CString("Debug"));
ROUTE226.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE226);

ROUTE& ROUTE227 =  ROUTE();
ROUTE227.setFromNode(CString("_16"));
ROUTE227.setFromField(CString("value_changed"));
ROUTE227.setToNode(CString("Debug"));
ROUTE227.setToField(CString("set_or"));
Scene8.addChild(&ROUTE227);

X3D0.setScene(&Scene8);

//}
