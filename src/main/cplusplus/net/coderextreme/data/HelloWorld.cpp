#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
//Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("HelloWorld.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Simple X3D model example: Hello World!"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("30 October 2000"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("20 October 2019"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("Image"));
meta7.setContent(CString("HelloWorld.tall.png"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("http://en.wikipedia.org/wiki/Hello_world"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("http://www.HelloWorldExample.net"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("https://www.web3d.org"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("https://www.web3d.org/realtime-3d/news/internationalization-x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("identifier"));
meta17.setContent(CString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("license"));
meta18.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("generator"));
meta19.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("reference"));
meta20.setContent(CString("HelloWorld.wrl"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("reference"));
meta21.setContent(CString("HelloWorld.x3dv"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("reference"));
meta22.setContent(CString("HelloWorld.x3db"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("reference"));
meta23.setContent(CString("HelloWorld.xhtml"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("reference"));
meta24.setContent(CString("HelloWorld.json"));
head1.addMeta(&meta24);

X3D0.setHead(&head1);

Scene& Scene25 =  Scene();
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
WorldInfo& WorldInfo26 =  WorldInfo();
WorldInfo26.setInfo(new CString[1]{CString("Example scene to illustrate a simple X3D model")}, 1);
WorldInfo26.setTitle(CString("Hello World!"));
Scene25.addChild(&WorldInfo26);

Group& Group27 =  Group();
Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDEF(CString("ViewUpClose"));
Viewpoint28.setCenterOfRotation(new float[3]{0.0,-1.0,0.0});
Viewpoint28.setDescription(CString("Hello world!"));
Viewpoint28.setPosition(new float[3]{0.0,-1.0,7.0});
Group27.addChild(&Viewpoint28);

Transform& Transform29 =  Transform();
Transform29.setRotation(new float[4]{0.0,1.0,0.0,3.0});
Shape& Shape30 =  Shape();
Sphere& Sphere31 =  Sphere();
Shape30.setGeometry(&Sphere31);

Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDEF(CString("MaterialLightBlue"));
Material33.setDiffuseColor(new float[3]{0.1,0.5,1.0});
Appearance32.addChild(&Material33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setDEF(CString("ImageCloudlessEarth"));
ImageTexture34.setUrl(new CString[6]{CString("earth-topo.png"), CString("earth-topo.jpg"), CString("earth-topo-small.gif"), CString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), CString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), CString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")}, 6);
Appearance32.addChild(&ImageTexture34);

Shape30.addChild(&Appearance32);

Transform29.addChild(&Shape30);

Group27.addChild(&Transform29);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[3]{0.0,-2.0,0.0});
Shape& Shape36 =  Shape();
Text& Text37 =  Text();
Text37.setDEF(CString("TextMessage"));
Text37.setString(new CString[2]{CString("Hello"), CString("world!")}, 2);
CFontStyle& FontStyle38 =  CFontStyle();
FontStyle38.setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text37.setFontStyle(&FontStyle38);

Shape36.setGeometry(&Text37);

Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setUSE(CString("MaterialLightBlue"));
Appearance39.addChild(&Material40);

Shape36.addChild(&Appearance39);

Transform35.addChild(&Shape36);

Group27.addChild(&Transform35);

Scene25.addChild(&Group27);

X3D0.setScene(&Scene25);

}
