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
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("HelloWorldCommented.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("19 December 2015"));
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
meta7.setName(CString("info"));
meta7.setContent(CString("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("HelloWorldCommented.json"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("HelloWorldCommentedOriginalEncoding.json"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("HelloWorldCommentedAlternativeEncoding.json"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("identifier"));
meta11.setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("license"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("Hello world!"));
Scene14.addChild(&WorldInfo15);

//WorldInfo complete, Group begin
Group& Group16 =  Group();
//Viewpoint begin
Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDEF(CString("ViewUpClose"));
Viewpoint17.setCenterOfRotation(new float[3]{0.0,-1.0,0.0});
Viewpoint17.setDescription(CString("Hello world!"));
Viewpoint17.setPosition(new float[3]{0.0,-1.0,7.0});
Group16.addChild(&Viewpoint17);

//Viewpoint complete, Transform begin
Transform& Transform18 =  Transform();
Transform18.setRotation(new float[4]{0.0,1.0,0.0,3.0});
//Shape begin
Shape& Shape19 =  Shape();
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
Sphere& Sphere20 =  Sphere();
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
Material& Material22 =  Material();
Material22.setDEF(CString("MaterialLightBlue"));
Material22.setDiffuseColor(new float[3]{0.1,0.5,1.0});
Appearance21.addChild(&Material22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("ImageCloudlessEarth"));
ImageTexture23.setUrl(new CString[6]{CString("earth-topo.png"), CString("earth-topo.jpg"), CString("earth-topo-small.gif"), CString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), CString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), CString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")}, 6);
Appearance21.addChild(&ImageTexture23);

Shape19.addChild(&Appearance21);

Transform18.addChild(&Shape19);

//Shape complete
Group16.addChild(&Transform18);

//Transform complete, Transform begin
Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[3]{0.0,-2.0,0.0});
//Shape begin
Shape& Shape25 =  Shape();
//Text begin
//Text complete, Appearance begin
//Appearance complete
Text& Text26 =  Text();
Text26.setDEF(CString("TextMessage"));
Text26.setString(new CString[2]{CString("Hello"), CString("world!")}, 2);
//FontStyle begin
//FontStyle complete
CFontStyle& FontStyle27 =  CFontStyle();
FontStyle27.setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text26.setFontStyle(&FontStyle27);

Shape25.setGeometry(&Text26);

Appearance& Appearance28 =  Appearance();
//Material begin
//Material complete
Material& Material29 =  Material();
Material29.setUSE(CString("MaterialLightBlue"));
Appearance28.addChild(&Material29);

Shape25.addChild(&Appearance28);

Transform24.addChild(&Shape25);

//Shape complete
Group16.addChild(&Transform24);

//Transform complete
Scene14.addChild(&Group16);

//Group complete
X3D0.setScene(&Scene14);

}
