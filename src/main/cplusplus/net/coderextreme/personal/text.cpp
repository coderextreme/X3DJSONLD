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
meta2.setName(CString("creator"));
meta2.setContent(CString("John W Carlson"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("December 13 2015"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("title"));
meta4.setContent(CString("text.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/text.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("test \\n text"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Transform& Transform9 =  Transform();
Shape& Shape10 =  Shape();
Text& Text11 =  Text();
Text11.setString(new CString[]{CString("Node\"\"\"")}, 1);
CFontStyle& FontStyle12 =  CFontStyle();
Text11.setFontStyle(&FontStyle12);

Shape10.setGeometry(&Text11);

Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Appearance13.addChild(&Material14);

Shape10.addChild(&Appearance13);

Transform9.addChild(&Shape10);

Shape& Shape15 =  Shape();
Text& Text16 =  Text();
Text16.setString(new CString[]{CString("Node2"), CString("\\\\"), CString("\\\\\\\\"), CString("Node2")}, 4);
CFontStyle& FontStyle17 =  CFontStyle();
Text16.setFontStyle(&FontStyle17);

Shape15.setGeometry(&Text16);

Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Appearance18.addChild(&Material19);

Shape15.addChild(&Appearance18);

Transform9.addChild(&Shape15);

Shape& Shape20 =  Shape();
Text& Text21 =  Text();
Text21.setString(new CString[]{CString("Node3 \\\\\\\\ \\\\ "), CString("Node3\"\"\"")}, 2);
CFontStyle& FontStyle22 =  CFontStyle();
Text21.setFontStyle(&FontStyle22);

Shape20.setGeometry(&Text21);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Appearance23.addChild(&Material24);

Shape20.addChild(&Appearance23);

Transform9.addChild(&Shape20);

Script& Script25 =  Script();
field& field26 =  field();
field26.setName(CString("frontUrls"));
field26.setType(CString("MFString"));
field26.setAccessType(CString("initializeOnly"));
field26.setValue(CString("\"rnl_front.png\" \"uffizi_front.png\""));
Script25.addChild(&field26);


Script25.setSourceCode(CString("ecmascript:")+
_T("			    var me = '\"1\" \"\"2\" \"\\n3\"';"));
Transform9.addChild(&Script25);

Scene8.addChild(&Transform9);

X3D0.setScene(&Scene8);

}
