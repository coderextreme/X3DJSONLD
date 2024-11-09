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
meta3.setContent(CString("Sun, 03 Jan 2016 10:11:36 GMT"));
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
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/Follower/TexCoordDamper.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sun, 25 Feb 2018 06:58:18 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("MFVec3f"));
ExternProtoDeclare9.setUrl(new CString[]{CString("MFVec3f.x3dv")}, 1);
field& field10 =  field();
field10.setName(CString("set_triggerTime"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("keyValue"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("MFVec3f"));
ExternProtoDeclare9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("value_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("MFVec3f"));
ExternProtoDeclare9.addChild(&field12);

Scene8.addChild(&ExternProtoDeclare9);

ExternProtoDeclare& ExternProtoDeclare13 =  ExternProtoDeclare();
ExternProtoDeclare13.setName(CString("MFVec2f"));
ExternProtoDeclare13.setUrl(new CString[]{CString("MFVec2f.x3dv")}, 1);
field& field14 =  field();
field14.setName(CString("set_triggerTime"));
field14.setAccessType(CString("inputOnly"));
field14.setType(CString("SFTime"));
ExternProtoDeclare13.addChild(&field14);

field& field15 =  field();
field15.setName(CString("keyValue"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFVec2f"));
ExternProtoDeclare13.addChild(&field15);

field& field16 =  field();
field16.setName(CString("value_changed"));
field16.setAccessType(CString("outputOnly"));
field16.setType(CString("MFVec2f"));
ExternProtoDeclare13.addChild(&field16);

Scene8.addChild(&ExternProtoDeclare13);

WorldInfo& WorldInfo17 =  WorldInfo();
WorldInfo17.setTitle(CString("CoordinateDamper"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("Titania"));
MetadataSet18.setDEF(CString("Titania"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("NavigationInfo"));
MetadataSet19.setDEF(CString("NavigationInfo"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString20 =  MetadataString();
MetadataString20.X3DNode::setName(CString("type"));
MetadataString20.setDEF(CString("type"));
MetadataString20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString20.setValue(new CString[]{CString("NONE")}, 1);
MetadataSet19.setValue((X3DNode *)&MetadataString20);

MetadataSet18.setValue((X3DNode *)&MetadataSet19);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("Viewpoint"));
MetadataSet21.setDEF(CString("Viewpoint"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble22 =  MetadataDouble();
MetadataDouble22.X3DNode::setName(CString("position"));
MetadataDouble22.setDEF(CString("position"));
MetadataDouble22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble22.setValue(new double[]{0.0,0.0,10.0}, 3);
MetadataSet21.setValue((X3DNode *)&MetadataDouble22);

MetadataDouble& MetadataDouble23 =  MetadataDouble();
MetadataDouble23.X3DNode::setName(CString("orientation"));
MetadataDouble23.setDEF(CString("orientation"));
MetadataDouble23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble23.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet21.setValue((X3DNode *)&MetadataDouble23);

MetadataDouble& MetadataDouble24 =  MetadataDouble();
MetadataDouble24.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble24.setDEF(CString("centerOfRotation"));
MetadataDouble24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble24.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet21.setValue((X3DNode *)&MetadataDouble24);

MetadataSet18.setValue((X3DNode *)&MetadataSet21);

MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("Selection"));
MetadataSet25.setDEF(CString("Selection"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean26 =  MetadataBoolean();
MetadataBoolean26.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean26.setDEF(CString("selectGeometry"));
MetadataBoolean26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean26.setValue(new boolean[]{false});
MetadataSet25.setValue((X3DNode *)&MetadataBoolean26);

MetadataSet18.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("Page"));
MetadataSet27.setDEF(CString("Page"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger28 =  MetadataInteger();
MetadataInteger28.X3DNode::setName(CString("activeView"));
MetadataInteger28.setDEF(CString("activeView"));
MetadataInteger28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger28.setValue(MFInt320);
MetadataSet27.setValue((X3DNode *)&MetadataInteger28);

MetadataInteger& MetadataInteger29 =  MetadataInteger();
MetadataInteger29.X3DNode::setName(CString("multiView"));
MetadataInteger29.setDEF(CString("multiView"));
MetadataInteger29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger29.setValue(MFInt321);
MetadataSet27.setValue((X3DNode *)&MetadataInteger29);

MetadataSet18.setValue((X3DNode *)&MetadataSet27);

WorldInfo17.setMetadata(&MetadataSet18);

Scene8.addChild(&WorldInfo17);

NavigationInfo& NavigationInfo30 =  NavigationInfo();
NavigationInfo30.setType(new CString[]{CString(", "), CString("NONEANY")}, 2);
Scene8.addChild(&NavigationInfo30);

Background& Background31 =  Background();
Background31.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background31);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("DestinatinButton1"));
Transform32.setTranslation(new float[]{2.71505,2.16353,0.0});
Transform32.setScale(new float[]{0.204112,0.204112,1.0});
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
Material& Material35 =  Material();
Appearance34.addChild(&Material35);

Shape33.addChild(&Appearance34);

Rectangle2D& Rectangle2D36 =  Rectangle2D();
Shape33.setGeometry(Rectangle2D36);

Transform32.addChild(&Shape33);

TouchSensor& TouchSensor37 =  TouchSensor();
TouchSensor37.setDEF(CString("Touch"));
Transform32.addChild(&TouchSensor37);

ProtoInstance& ProtoInstance38 =  ProtoInstance();
ProtoInstance38.setName(CString("MFVec2f"));
ProtoInstance38.setDEF(CString("_1"));
fieldValue& fieldValue39 =  fieldValue();
fieldValue39.setName(CString("keyValue"));
fieldValue39.setValue(CString("-1 -1 1 -1 1 1 -1 1"));
ProtoInstance38.addChild(&fieldValue39);

Transform32.addChild(&ProtoInstance38);

Scene8.addChild(&Transform32);

Transform& Transform40 =  Transform();
Transform40.setDEF(CString("DestinatinButton2"));
Transform40.setTranslation(new float[]{2.71505,1.65935,0.0});
Transform40.setScale(new float[]{0.204112,0.204112,1.0});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

Rectangle2D& Rectangle2D44 =  Rectangle2D();
Shape41.setGeometry(Rectangle2D44);

Transform40.addChild(&Shape41);

TouchSensor& TouchSensor45 =  TouchSensor();
TouchSensor45.setDEF(CString("Touch1"));
Transform40.addChild(&TouchSensor45);

ProtoInstance& ProtoInstance46 =  ProtoInstance();
ProtoInstance46.setName(CString("MFVec2f"));
ProtoInstance46.setDEF(CString("_2"));
fieldValue& fieldValue47 =  fieldValue();
fieldValue47.setName(CString("keyValue"));
fieldValue47.setValue(CString("-2 -2 2 -2 2 2 -2 2"));
ProtoInstance46.addChild(&fieldValue47);

Transform40.addChild(&ProtoInstance46);

Scene8.addChild(&Transform40);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("DestinatinButton3"));
Transform48.setTranslation(new float[]{2.71505,1.16847,0.0});
Transform48.setScale(new float[]{0.204112,0.204112,1.0});
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

Rectangle2D& Rectangle2D52 =  Rectangle2D();
Shape49.setGeometry(Rectangle2D52);

Transform48.addChild(&Shape49);

TouchSensor& TouchSensor53 =  TouchSensor();
TouchSensor53.setDEF(CString("Touch2"));
Transform48.addChild(&TouchSensor53);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("MFVec2f"));
ProtoInstance54.setDEF(CString("_3"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("keyValue"));
fieldValue55.setValue(CString("0 -2 2 0 0 2 -2 0"));
ProtoInstance54.addChild(&fieldValue55);

Transform48.addChild(&ProtoInstance54);

Scene8.addChild(&Transform48);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("DestinatinButton4"));
Transform56.setTranslation(new float[]{2.71505,0.678305,0.0});
Transform56.setScale(new float[]{0.204112,0.204112,1.0});
Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

Rectangle2D& Rectangle2D60 =  Rectangle2D();
Shape57.setGeometry(Rectangle2D60);

Transform56.addChild(&Shape57);

TouchSensor& TouchSensor61 =  TouchSensor();
TouchSensor61.setDEF(CString("Touch3"));
Transform56.addChild(&TouchSensor61);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("MFVec2f"));
ProtoInstance62.setDEF(CString("_4"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("keyValue"));
fieldValue63.setValue(CString("0 -3 3 0 0 3 -3 0"));
ProtoInstance62.addChild(&fieldValue63);

Transform56.addChild(&ProtoInstance62);

Scene8.addChild(&Transform56);

TexCoordDamper2D& TexCoordDamper2D64 =  TexCoordDamper2D();
TexCoordDamper2D64.setDEF(CString("_5"));
TexCoordDamper2D64.setInitialValue(new float[]{-1.0,-1.0,1.0,-1.0,1.0,1.0,-1.0,1.0}, 8);
TexCoordDamper2D64.setInitialDestination(new float[]{-1.0,-1.0,1.0,-1.0,1.0,1.0,-1.0,1.0}, 8);
Scene8.addChild(&TexCoordDamper2D64);

Transform& Transform65 =  Transform();
Transform65.setDEF(CString("QuadSetTransform"));
Shape& Shape66 =  Shape();
Appearance& Appearance67 =  Appearance();
ImageTexture& ImageTexture68 =  ImageTexture();
ImageTexture68.setUrl(new CString[]{CString(", "), CString("http://cdn.rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpg, "), CString("https://cdn.rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpg, "), CString("http://rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpghttps://rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpg")}, 4);
Appearance67.addChild(&ImageTexture68);

Shape66.addChild(&Appearance67);

QuadSet& QuadSet69 =  QuadSet();
QuadSet69.setSolid(false);
TextureCoordinate& TextureCoordinate70 =  TextureCoordinate();
TextureCoordinate70.setDEF(CString("_6"));
TextureCoordinate70.setPoint(new float[]{-1.0,-1.0,1.0,-1.0,1.0,1.0,-1.0,1.0}, 8);
QuadSet69.setTexCoord(&TextureCoordinate70);

Coordinate& Coordinate71 =  Coordinate();
Coordinate71.setDEF(CString("Coordinate"));
Coordinate71.setPoint(new float[]{-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0}, 12);
QuadSet69.setCoord(&Coordinate71);

Shape66.setGeometry(QuadSet69);

Transform65.addChild(&Shape66);

Scene8.addChild(&Transform65);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("_5"));
ROUTE72.setFromField(CString("value_changed"));
ROUTE72.setToNode(CString("_6"));
ROUTE72.setToField(CString("set_point"));
Scene8.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("Touch3"));
ROUTE73.setFromField(CString("touchTime"));
ROUTE73.setToNode(CString("_4"));
ROUTE73.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("Touch2"));
ROUTE74.setFromField(CString("touchTime"));
ROUTE74.setToNode(CString("_3"));
ROUTE74.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("Touch1"));
ROUTE75.setFromField(CString("touchTime"));
ROUTE75.setToNode(CString("_2"));
ROUTE75.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("Touch"));
ROUTE76.setFromField(CString("touchTime"));
ROUTE76.setToNode(CString("_1"));
ROUTE76.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("_4"));
ROUTE77.setFromField(CString("value_changed"));
ROUTE77.setToNode(CString("_5"));
ROUTE77.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("_3"));
ROUTE78.setFromField(CString("value_changed"));
ROUTE78.setToNode(CString("_5"));
ROUTE78.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("_2"));
ROUTE79.setFromField(CString("value_changed"));
ROUTE79.setToNode(CString("_5"));
ROUTE79.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("_1"));
ROUTE80.setFromField(CString("value_changed"));
ROUTE80.setToNode(CString("_5"));
ROUTE80.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE80);

X3D0.setScene(&Scene8);

//}
