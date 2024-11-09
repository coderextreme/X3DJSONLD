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
meta3.setContent(CString("Sat, 06 Aug 2016 06:44:36 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("holger"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Titania/Library/Tests/Extrusion/Rotations.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 06 Aug 2016 19:29:42 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("AngleGrid"));
MetadataSet11.setDEF(CString("AngleGrid"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean12 =  MetadataBoolean();
MetadataBoolean12.X3DNode::setName(CString("enabled"));
MetadataBoolean12.setDEF(CString("enabled"));
MetadataBoolean12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean12.setValue(new boolean[]{false});
MetadataSet11.setValue((X3DNode *)&MetadataBoolean12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Grid"));
MetadataSet13.setDEF(CString("Grid"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean14 =  MetadataBoolean();
MetadataBoolean14.X3DNode::setName(CString("enabled"));
MetadataBoolean14.setDEF(CString("enabled_1"));
MetadataBoolean14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean14.setValue(new boolean[]{true});
MetadataSet13.setValue((X3DNode *)&MetadataBoolean14);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet15 =  MetadataSet();
MetadataSet15.X3DNode::setName(CString("NavigationInfo"));
MetadataSet15.setDEF(CString("NavigationInfo"));
MetadataSet15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString16 =  MetadataString();
MetadataString16.X3DNode::setName(CString("type"));
MetadataString16.setDEF(CString("type"));
MetadataString16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString16.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet15.setValue((X3DNode *)&MetadataString16);

MetadataSet10.setValue((X3DNode *)&MetadataSet15);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Viewpoint"));
MetadataSet17.setDEF(CString("Viewpoint"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble18 =  MetadataDouble();
MetadataDouble18.X3DNode::setName(CString("position"));
MetadataDouble18.setDEF(CString("position"));
MetadataDouble18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble18.setValue(new double[]{2.79252147674561,5.76409196853638,4.20475006103516}, 3);
MetadataSet17.setValue((X3DNode *)&MetadataDouble18);

MetadataDouble& MetadataDouble19 =  MetadataDouble();
MetadataDouble19.X3DNode::setName(CString("orientation"));
MetadataDouble19.setDEF(CString("orientation"));
MetadataDouble19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble19.setValue(new double[]{-0.882984838661416,0.437083442792234,0.17116027205798,0.886694786879645}, 4);
MetadataSet17.setValue((X3DNode *)&MetadataDouble19);

MetadataDouble& MetadataDouble20 =  MetadataDouble();
MetadataDouble20.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble20.setDEF(CString("centerOfRotation"));
MetadataDouble20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble20.setValue(new double[]{0.5,0.0,-1.0}, 3);
MetadataSet17.setValue((X3DNode *)&MetadataDouble20);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("Selection"));
MetadataSet21.setDEF(CString("Selection"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet22 =  MetadataSet();
MetadataSet22.X3DNode::setName(CString("previous"));
MetadataSet22.setDEF(CString("previous"));
MetadataSet22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet21.setValue((X3DNode *)&MetadataSet22);

MetadataSet& MetadataSet23 =  MetadataSet();
MetadataSet23.X3DNode::setName(CString("children"));
MetadataSet23.setDEF(CString("children"));
MetadataSet23.X3DNode::setReference(CString("http://titania.create3000.de"));
Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("_1"));
Viewpoint24.setPosition(new float[]{2.79252,5.76409,4.20475});
Viewpoint24.setOrientation(new float[]{-0.882984838661416,0.437083442792234,0.17116027205798,0.886694786879645});
Viewpoint24.setCenterOfRotation(new float[]{0.5,0.0,-1.0});
MetadataSet23.setViewpoint(&Viewpoint24);

MetadataSet21.setValue((X3DNode *)&MetadataSet23);

MetadataSet10.setValue((X3DNode *)&MetadataSet21);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("Extrusion"));
Transform25.setTranslation(new float[]{-2.0,0.0,0.0});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Appearance27.addChild(&Material28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString(", "), CString("http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, "), CString("https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, "), CString("http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png")}, 4);
ImageTexture29.setRepeatS(false);
ImageTexture29.setRepeatT(false);
Appearance27.addChild(&ImageTexture29);

Shape26.addChild(&Appearance27);

Extrusion& Extrusion30 =  Extrusion();
Extrusion30.setDEF(CString("Extrusion1"));
Extrusion30.setCrossSection(new float[]{0.0,1.0,1.0,0.0,0.0,-1.0}, 6);
Extrusion30.setOrientation(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.199999999999999,0.0,0.0,1.0,0.4,0.0,0.0,1.0,0.6,0.0,0.0,1.0,0.8}, 20);
Extrusion30.setSpine(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 15);
Shape26.setGeometry(&Extrusion30);

Transform25.addChild(&Shape26);

Scene8.addChild(&Transform25);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("Extrusion_1"));
Transform31.setTranslation(new float[]{2.0,0.0,0.0});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Appearance33.addChild(&Material34);

ImageTexture& ImageTexture35 =  ImageTexture();
ImageTexture35.setUrl(new CString[]{CString(", "), CString("http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, "), CString("https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, "), CString("http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png")}, 4);
ImageTexture35.setRepeatS(false);
ImageTexture35.setRepeatT(false);
Appearance33.addChild(&ImageTexture35);

Shape32.addChild(&Appearance33);

Extrusion& Extrusion36 =  Extrusion();
Extrusion36.setDEF(CString("Extrusion2"));
Extrusion36.setCreaseAngle(0.580624);
Extrusion36.setCrossSection(new float[]{0.0,1.0,1.0,0.0,0.0,-1.0}, 6);
Extrusion36.setOrientation(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.196349540624999,0.0,0.0,1.0,0.39269908125,0.0,0.0,1.0,0.589048621875,0.0,0.0,1.0,0.7853981625,0.0,0.0,1.0,0.981747703125,0.0,0.0,1.0,1.17809724375,0.0,0.0,1.0,1.374446784375,0.0,0.0,1.0,1.570796325,0.0,0.0,1.0,1.767145865625,0.0,0.0,1.0,1.96349540625,0.0,0.0,1.0,2.159844946875,0.0,0.0,1.0,2.3561944875,0.0,0.0,1.0,2.552544028125,0.0,0.0,1.0,2.74889356875,0.0,0.0,1.0,2.945243109375,0.0,0.0,1.0,3.14159265,0.0,0.0,1.0,3.337942190625,0.0,0.0,1.0,3.53429173125,0.0,0.0,1.0,3.730641271875,0.0,0.0,1.0,3.9269908125,0.0,0.0,1.0,4.123340353125,0.0,0.0,1.0,4.31968989375,0.0,0.0,1.0,4.516039434375,0.0,0.0,1.0,4.712388975,0.0,0.0,1.0,4.908738515625,0.0,0.0,1.0,5.10508805625,0.0,0.0,1.0,5.301437596875,0.0,0.0,1.0,5.4977871375,0.0,0.0,1.0,5.694136678125,0.0,0.0,1.0,5.89048621875,0.0,0.0,1.0,6.086835759375,0.0,0.0,1.0,0.0}, 132);
Extrusion36.setSpine(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 99);
Shape32.setGeometry(&Extrusion36);

Transform31.addChild(&Shape32);

Scene8.addChild(&Transform31);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("Extrusion_2"));
Transform37.setTranslation(new float[]{0.0,0.0,-2.0});
Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Appearance39.addChild(&Material40);

ImageTexture& ImageTexture41 =  ImageTexture();
ImageTexture41.setUrl(new CString[]{CString(", "), CString("http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, "), CString("https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, "), CString("http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png")}, 4);
ImageTexture41.setRepeatS(false);
ImageTexture41.setRepeatT(false);
Appearance39.addChild(&ImageTexture41);

Shape38.addChild(&Appearance39);

Extrusion& Extrusion42 =  Extrusion();
Extrusion42.setDEF(CString("Extrusion3"));
Extrusion42.setCreaseAngle(0.580624);
Extrusion42.setCrossSection(new float[]{0.0,1.0,0.19509,0.980785,0.382683,0.92388,0.55557,0.83147,0.707107,0.707107,0.83147,0.55557,0.92388,0.382683,0.980785,0.19509,1.0,-2.32051e-8,0.980785,-0.19509,0.92388,-0.382683,0.83147,-0.55557,0.707107,-0.707107,0.55557,-0.83147,0.382683,-0.92388,0.19509,-0.980785,-4.64102e-8,-1.0}, 34);
Extrusion42.setOrientation(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.196349540624999,0.0,0.0,1.0,0.39269908125,0.0,0.0,1.0,0.589048621875,0.0,0.0,1.0,0.7853981625,0.0,0.0,1.0,0.981747703125,0.0,0.0,1.0,1.17809724375,0.0,0.0,1.0,1.374446784375,0.0,0.0,1.0,1.570796325,0.0,0.0,1.0,1.767145865625,0.0,0.0,1.0,1.96349540625,0.0,0.0,1.0,2.159844946875,0.0,0.0,1.0,2.3561944875,0.0,0.0,1.0,2.552544028125,0.0,0.0,1.0,2.74889356875,0.0,0.0,1.0,2.945243109375,0.0,0.0,1.0,3.14159265,0.0,0.0,1.0,3.337942190625,0.0,0.0,1.0,3.53429173125,0.0,0.0,1.0,3.730641271875,0.0,0.0,1.0,3.9269908125,0.0,0.0,1.0,4.123340353125,0.0,0.0,1.0,4.31968989375,0.0,0.0,1.0,4.516039434375,0.0,0.0,1.0,4.712388975,0.0,0.0,1.0,4.908738515625,0.0,0.0,1.0,5.10508805625,0.0,0.0,1.0,5.301437596875,0.0,0.0,1.0,5.4977871375,0.0,0.0,1.0,5.694136678125,0.0,0.0,1.0,5.89048621875,0.0,0.0,1.0,6.086835759375,0.0,0.0,1.0,0.0}, 132);
Extrusion42.setSpine(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 99);
Shape38.setGeometry(&Extrusion42);

Transform37.addChild(&Shape38);

Scene8.addChild(&Transform37);

Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setUSE(CString("_1"));
Scene8.addChild(&Viewpoint43);

X3D0.setScene(&Scene8);

//}
