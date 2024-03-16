/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("StringArrayEncodingExamples.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Demonstrate simple X3D MFString (string array) encoding.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("created");
meta4->setContent("27 May 2017");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("modified");
meta5->setContent("27 May 2017");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("creator");
meta6->setContent("Don Brutzman");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("reference");
meta7->setContent("X3dHeaderPrototypeSyntaxExamples.x3d");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("specificationSection");
meta8->setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("specificationUrl");
meta9->setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("specificationSection");
meta10->setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("specificationUrl");
meta11->setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("specificationSection");
meta12->setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("specificationUrl");
meta13->setContent("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setDEF("EntryView");
Viewpoint18->setDescription("Hello MFString syntax");
Scene17->addChild(Viewpoint18);

Background* Background19 = new Background();
Background19->setSkyColor(new float[3]{0.6,1,0.8});
Scene17->addChild(Background19);

Shape* Shape20 = new Shape();
Text* Text21 = new Text();
Text21->setString(new String[3]{"One, Two, Three","","He said, \"Immel did it!\""}, 3);
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
FontStyle* FontStyle22 = new FontStyle();
FontStyle22->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle22->setStyle("BOLD");
Text21->setFontStyle(FontStyle22);

Shape20->setGeometry(Text21);

Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Material24->setDiffuseColor(new float[3]{0.6,0.4,0.2});
Appearance23->setMaterial(Material24);

Shape20->setAppearance(Appearance23);

Scene17->addChild(Shape20);

X3D0->setScene(Scene17);

X3D0->toXMLString();
}
