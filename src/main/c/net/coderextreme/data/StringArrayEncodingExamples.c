#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "StringArrayEncodingExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Demonstrate simple X3D MFString (string array) encoding.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "27 May 2017";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "27 May 2017";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "X3dHeaderPrototypeSyntaxExamples.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "specificationSection";
meta8.content = "X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "specificationUrl";
meta9.content = "https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "specificationSection";
meta10.content = "X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "specificationUrl";
meta11.content = "https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "specificationSection";
meta12.content = "X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "specificationUrl";
meta13.content = "https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "EntryView";
Viewpoint18.description = "Hello MFString syntax";
children = new MFNode();

children[0] = Viewpoint18;

Background Background19 = createNode("Background");
Background19.skyColor = new MFColor(new float[0.6,1,0.8]);
children[1] = Background19;

Shape Shape20 = createNode("Shape");
Text Text21 = createNode("Text");
Text21.string = new MFString(new java.lang.String["One, Two, Three","","He said, \"Immel did it!\""]);
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
FontStyle FontStyle22 = createNode("FontStyle");
FontStyle22.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle22.style = "BOLD";
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.6,0.4,0.2]);
Appearance23.material = Material24;

Shape20.appearance = Appearance23;

children[2] = Shape20;

}
