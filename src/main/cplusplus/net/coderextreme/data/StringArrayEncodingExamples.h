//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("StringArrayEncodingExamples.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Demonstrate simple X3D MFString (string array) encoding."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("27 May 2017"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("27 May 2017"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("X3dHeaderPrototypeSyntaxExamples.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("specificationSection"));
meta8.setContent(CString("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("specificationUrl"));
meta9.setContent(CString("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("specificationSection"));
meta10.setContent(CString("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("specificationUrl"));
meta11.setContent(CString("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("specificationSection"));
meta12.setContent(CString("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("specificationUrl"));
meta13.setContent(CString("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("license"));
meta16.setContent(CString("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDEF(CString("EntryView"));
Viewpoint18.setDescription(CString("Hello MFString syntax"));
Scene17.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setSkyColor(new float[3]{0.6,1.0,0.8}, 3);
Scene17.addChild(&Background19);

Shape& Shape20 =  Shape();
Text& Text21 =  Text();
Text21.setString(new CString[3]{CString("One, Two, Three"), CString(""), CString("He said, \"Immel did it!\"")}, 3);
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
CFontStyle& FontStyle22 =  CFontStyle();
FontStyle22.setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle22.setStyle(CString("BOLD"));
Text21.setFontStyle(&FontStyle22);

Shape20.setGeometry(&Text21);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[3]{0.6,0.4,0.2});
Appearance23.addChild(&Material24);

Shape20.addChild(&Appearance23);

Scene17.addChild(&Shape20);

X3D0.setScene(&Scene17);

//}
