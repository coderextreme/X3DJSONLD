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
meta3.setContent(CString("Wed, 18 Mar 2015 03:03:10 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 18 Mar 2015 03:03:10 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Transform& Transform8 =  Transform();
Transform8.setDEF(CString("Tuer_brett"));
Transform8.setScale(new float[]{0.424754,1.08903,0.0165043});
Shape& Shape9 =  Shape();
Appearance& Appearance10 =  Appearance();
Material& Material11 =  Material();
Material11.setAmbientIntensity(1.2234);
Material11.setEmissiveColor(new float[]{0.404255,0.404255,0.404255});
Material11.setShininess(0);
Appearance10.addChild(&Material11);

ImageTexture& ImageTexture12 =  ImageTexture();
ImageTexture12.setUrl(new CString[]{CString("door1.png")}, 1);
Appearance10.addChild(&ImageTexture12);

TextureTransform& TextureTransform13 =  TextureTransform();
TextureTransform13.setScale(new float[]{1.4,1.0});
Appearance10.setTextureTransform(TextureTransform13);

Shape9.addChild(&Appearance10);

Box& Box14 =  Box();
Shape9.setGeometry(&Box14);

Transform8.addChild(&Shape9);

Scene7.addChild(&Transform8);

X3D0.setScene(&Scene7);

//}
