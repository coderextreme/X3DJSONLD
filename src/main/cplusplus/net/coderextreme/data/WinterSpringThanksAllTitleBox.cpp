#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("WinterAndSpringThanksAllTitleBox.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Credits for scene."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Carol McDonald"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("translator"));
meta5.setContent(CString("Joe Williams and Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("26 June 2023"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 15 Sep 2025 05:21:02 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringThanksAllTitleBox.x3d"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
WorldInfo& WorldInfo11 =  WorldInfo();
WorldInfo11.setTitle(CString("WinterAndSpringThanksAllTitleBox.x3d"));
Scene10.addChild(&WorldInfo11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setDEF(CString("WSThanksAllView"));
Viewpoint12.setDescription(CString("Look at Thanks title"));
Viewpoint12.setPosition(new float[]{10,11,-10});
Viewpoint12.setOrientation(new float[]{-0.15,0,0,0.2});
Scene10.addChild(&Viewpoint12);

Transform& Transform13 =  Transform();
Transform13.setDEF(CString("WSThanksAllTitle"));
Transform13.setTranslation(new float[]{10,10,-15});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Appearance15.addChild(&Material16);

ImageTexture& ImageTexture17 =  ImageTexture();
ImageTexture17.setUrl(new CString[]{CString("images/WSThanksR2trimmed.png"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSThanksR2trimmed.png")}, 2);
Appearance15.addChild(&ImageTexture17);

Shape14.addChild(&Appearance15);

Box& Box18 =  Box();
Box18.setSize(new float[]{4,3,0.25});
Shape14.setGeometry(&Box18);

Transform13.addChild(&Shape14);

Scene10.addChild(&Transform13);

X3D0.setScene(&Scene10);

}
