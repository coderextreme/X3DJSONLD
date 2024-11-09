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
meta3.setContent(CString("Sun, 27 Dec 2015 07:44:48 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sun, 27 Dec 2015 12:41:22 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setTitle(CString("LoadSensor"));
MetadataSet& MetadataSet9 =  MetadataSet();
MetadataSet9.X3DNode::setName(CString("Titania"));
MetadataSet9.setDEF(CString("Titania"));
MetadataSet9.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("NavigationInfo"));
MetadataSet10.setDEF(CString("NavigationInfo"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString11 =  MetadataString();
MetadataString11.X3DNode::setName(CString("type"));
MetadataString11.setDEF(CString("type"));
MetadataString11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString11.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet10.setValue((X3DNode *)&MetadataString11);

MetadataSet9.setValue((X3DNode *)&MetadataSet10);

MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("Viewpoint"));
MetadataSet12.setDEF(CString("Viewpoint"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble13 =  MetadataDouble();
MetadataDouble13.X3DNode::setName(CString("position"));
MetadataDouble13.setDEF(CString("position"));
MetadataDouble13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble13.setValue(new double[]{0.0,0.0,10.0}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble13);

MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("orientation"));
MetadataDouble14.setDEF(CString("orientation"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet12.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble15.setDEF(CString("centerOfRotation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble15);

MetadataSet9.setValue((X3DNode *)&MetadataSet12);

WorldInfo8.setMetadata(&MetadataSet9);

Scene7.addChild(&WorldInfo8);

LoadSensor& LoadSensor16 =  LoadSensor();
LoadSensor16.setDEF(CString("_1"));
LoadSensor16.setTimeOut(10);
Inline& Inline17 =  Inline();
Inline17.setUrl(new CString[]{CString("../Geometry3D/box.x3d")}, 1);
LoadSensor16.addChildren(Inline17);

ImageTexture& ImageTexture18 =  ImageTexture();
ImageTexture18.setUrl(new CString[]{CString("../images/ubuntu.png")}, 1);
LoadSensor16.addChildren(ImageTexture18);

ImageTexture& ImageTexture19 =  ImageTexture();
ImageTexture19.setUrl(new CString[]{CString("https://avatars0.githubusercontent.com/u/6417246?v=3&s=96")}, 1);
LoadSensor16.addChildren(ImageTexture19);

AudioClip& AudioClip20 =  AudioClip();
AudioClip20.setUrl(new CString[]{CString("../Sound/04. Like A Virgin.mp3")}, 1);
LoadSensor16.addChildren(AudioClip20);

MovieTexture& MovieTexture21 =  MovieTexture();
MovieTexture21.setUrl(new CString[]{CString("../../../../../Titania/Library/Examples/Vattenfall/stage/film6.mpv")}, 1);
LoadSensor16.addChildren(MovieTexture21);

ShaderPart& ShaderPart22 =  ShaderPart();
ShaderPart22.setType(CString("VERTEX"));

//ShaderPart22.setSourceCode(CString("data:text/plain,")+
//_T("#version 120")+
//_T("void main (void)")+
//_T("{")+
//_T("	gl_Position     = ftransform ();")+
//_T("	gl_TexCoord [0] = gl_TextureMatrix [0] * gl_MultiTexCoord0;")+
//_T("}"));
LoadSensor16.addChildren(&ShaderPart22);

Script& Script23 =  Script();

//Script23.setSourceCode(CString("vrmlscript:"));
LoadSensor16.addChildren(&Script23);

Inline& Inline24 =  Inline();
Inline24.setUrl(new CString[]{CString("")}, 0);
LoadSensor16.addChildren(Inline24);

Scene7.addChild(&LoadSensor16);

Script& Script25 =  Script();
Script25.setDEF(CString("_2"));
field& field26 =  field();
field26.setName(CString("set_active"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFBool"));
Script25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("set_loaded"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFBool"));
Script25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_progress"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFFloat"));
Script25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_loadTime"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("string_changed"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("MFString"));
Script25.addChild(&field30);


//Script25.setSourceCode(CString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	set_progress (0);")+
//_T("}")+
//_T("function set_active (value, time)")+
//_T("{")+
//_T("	print ('isActive: ', value);")+
//_T("}")+
//_T("function set_loaded (value, time)")+
//_T("{")+
//_T("	print ('isLoaded: ', value);")+
//_T("}")+
//_T("function set_progress (value, time)")+
//_T("{")+
//_T("	print ('progress: ', value);")+
//_T("	string_changed = new MFString (value);")+
//_T("}")+
//_T("function set_loadTime (value, time)")+
//_T("{")+
//_T("	print ('loadTime: ', value);")+
//_T("}"));
Scene7.addChild(&Script25);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("Text"));
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Text& Text35 =  Text();
Text35.setDEF(CString("_3"));
Text35.setString(new CString[]{CString("0.75")}, 1);
Text35.setSolid(true);
CFontStyle& FontStyle36 =  CFontStyle();
FontStyle36.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text35.setFontStyle(&FontStyle36);

Shape32.setGeometry(&Text35);

Transform31.addChild(&Shape32);

Scene7.addChild(&Transform31);

Anchor& Anchor37 =  Anchor();
Anchor37.setDEF(CString("_4"));
Anchor37.setUrl(new CString[]{CString("#Viewpoint")}, 1);
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("Sphere"));
Transform38.setTranslation(new float[]{0.0,-1.1894,0.0});
Transform38.setScale(new float[]{0.230247,0.230247,0.230247});
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

Sphere& Sphere42 =  Sphere();
Shape39.setGeometry(&Sphere42);

Transform38.addChild(&Shape39);

Anchor37.addChild(&Transform38);

Scene7.addChild(&Anchor37);

LoadSensor& LoadSensor43 =  LoadSensor();
LoadSensor43.setDEF(CString("_5"));
Anchor& Anchor44 =  Anchor();
Anchor44.setUSE(CString("_4"));
LoadSensor43.addChildren(Anchor44);

Scene7.addChild(&LoadSensor43);

Viewpoint& Viewpoint45 =  Viewpoint();
Viewpoint45.setDEF(CString("Viewpoint_1"));
Scene7.addChild(&Viewpoint45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_1"));
ROUTE46.setFromField(CString("isActive"));
ROUTE46.setToNode(CString("_2"));
ROUTE46.setToField(CString("set_active"));
Scene7.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("_1"));
ROUTE47.setFromField(CString("isLoaded"));
ROUTE47.setToNode(CString("_2"));
ROUTE47.setToField(CString("set_loaded"));
Scene7.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("_1"));
ROUTE48.setFromField(CString("progress"));
ROUTE48.setToNode(CString("_2"));
ROUTE48.setToField(CString("set_progress"));
Scene7.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("_1"));
ROUTE49.setFromField(CString("loadTime"));
ROUTE49.setToNode(CString("_2"));
ROUTE49.setToField(CString("set_loadTime"));
Scene7.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("_2"));
ROUTE50.setFromField(CString("string_changed"));
ROUTE50.setToNode(CString("_3"));
ROUTE50.setToField(CString("set_string"));
Scene7.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("_5"));
ROUTE51.setFromField(CString("isActive"));
ROUTE51.setToNode(CString("_2"));
ROUTE51.setToField(CString("set_active"));
Scene7.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("_5"));
ROUTE52.setFromField(CString("isLoaded"));
ROUTE52.setToNode(CString("_2"));
ROUTE52.setToField(CString("set_loaded"));
Scene7.addChild(&ROUTE52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("_5"));
ROUTE53.setFromField(CString("progress"));
ROUTE53.setToNode(CString("_2"));
ROUTE53.setToField(CString("set_progress"));
Scene7.addChild(&ROUTE53);

ROUTE& ROUTE54 =  ROUTE();
ROUTE54.setFromNode(CString("_5"));
ROUTE54.setFromField(CString("loadTime"));
ROUTE54.setToNode(CString("_2"));
ROUTE54.setToField(CString("set_loadTime"));
Scene7.addChild(&ROUTE54);

X3D0.setScene(&Scene7);

//}
