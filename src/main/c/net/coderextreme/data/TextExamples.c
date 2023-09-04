#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "TextExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Show different escape-character text examples for embedded quotation marks.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "7 April 2001";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "26 April 2016";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "warning";
meta7.content = "Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "warning";
meta8.content = "Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

head = head1;

Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,2,0]);
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Appearance14.DEF = "LightBlueAppearance";
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.1,0.7,0.7]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

Text Text16 = createNode("Text");
Text16.string = new MFString(new java.lang.String["Compare special character escaping"]);
FontStyle FontStyle17 = createNode("FontStyle");
FontStyle17.DEF = "testFontStyle";
FontStyle17.size = 0.8;
FontStyle17.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text16.fontStyle = FontStyle17;

Shape13.geometry = Text16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children = new MFNode();

children[0] = Transform12;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[-3,0,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Appearance20.USE = "LightBlueAppearance";
Shape19.appearance = Appearance20;

Text Text21 = createNode("Text");
Text21.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
FontStyle FontStyle22 = createNode("FontStyle");
FontStyle22.USE = "testFontStyle";
Text21.fontStyle = FontStyle22;

Shape19.geometry = Text21;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

children[1] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[3,0,0]);
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Appearance25.USE = "LightBlueAppearance";
Shape24.appearance = Appearance25;

Text Text26 = createNode("Text");
Text26.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
FontStyle FontStyle27 = createNode("FontStyle");
FontStyle27.USE = "testFontStyle";
Text26.fontStyle = FontStyle27;

Shape24.geometry = Text26;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

children[2] = Transform23;

}
