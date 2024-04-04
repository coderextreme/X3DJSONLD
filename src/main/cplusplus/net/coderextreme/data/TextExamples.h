//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("TextExamples.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Show different escape-character text examples for embedded quotation marks."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("7 April 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("26 April 2016"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("warning"));
meta7.setContent(CString("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("warning"));
meta8.setContent(CString("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("generator"));
meta10.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("license"));
meta11.setContent(CString("../license.html"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
Transform& Transform13 =  Transform();
Transform13.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape14 =  Shape();
Text& Text15 =  Text();
Text15.setString(new CString[]{CString("Compare special character escaping")}, 1);
CFontStyle& FontStyle16 =  CFontStyle();
FontStyle16.setDEF(CString("testFontStyle"));
FontStyle16.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle16.setSize(0.8);
Text15.setFontStyle(&FontStyle16);

Shape14.setGeometry(&Text15);

Appearance& Appearance17 =  Appearance();
Appearance17.setDEF(CString("LightBlueAppearance"));
Material& Material18 =  Material();
Material18.setDiffuseColor(new float[]{0.1,0.7,0.7});
Appearance17.addChild(&Material18);

Shape14.addChild(&Appearance17);

Transform13.addChild(&Shape14);

Scene12.addChild(&Transform13);

Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{-3.0,0.0,0.0});
Shape& Shape20 =  Shape();
Text& Text21 =  Text();
Text21.setString(new CString[]{CString("I don't think so"), CString(""), CString("he said \"Hi\"")}, 3);
CFontStyle& FontStyle22 =  CFontStyle();
FontStyle22.setUSE(CString("testFontStyle"));
Text21.setFontStyle(&FontStyle22);

Shape20.setGeometry(&Text21);

Appearance& Appearance23 =  Appearance();
Appearance23.setUSE(CString("LightBlueAppearance"));
Shape20.addChild(&Appearance23);

Transform19.addChild(&Shape20);

Scene12.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{3.0,0.0,0.0});
Shape& Shape25 =  Shape();
Text& Text26 =  Text();
Text26.setString(new CString[]{CString("I don't think so"), CString(""), CString("he said \"Hi\"")}, 3);
CFontStyle& FontStyle27 =  CFontStyle();
FontStyle27.setUSE(CString("testFontStyle"));
Text26.setFontStyle(&FontStyle27);

Shape25.setGeometry(&Text26);

Appearance& Appearance28 =  Appearance();
Appearance28.setUSE(CString("LightBlueAppearance"));
Shape25.addChild(&Appearance28);

Transform24.addChild(&Shape25);

Scene12.addChild(&Transform24);

X3D0.setScene(&Scene12);

//}
