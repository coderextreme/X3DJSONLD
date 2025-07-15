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

meta meta11 = createNode("meta");
meta11.name = "license";
meta11.content = "../license.html";
head1.meta[9] = meta11;

head = head1;

Transform Transform13 = createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,2,0]);
Shape Shape14 = createNode("Shape");
Text Text15 = createNode("Text");
Text15.string = new MFString(new java.lang.String["Compare special character escaping"]);
FontStyle FontStyle16 = createNode("FontStyle");
FontStyle16.DEF = "testFontStyle";
FontStyle16.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle16.size = 0.8;
Text15.fontStyle = FontStyle16;

Shape14.geometry = Text15;

Appearance Appearance17 = createNode("Appearance");
Appearance17.DEF = "LightBlueAppearance";
Material Material18 = createNode("Material");
Material18.diffuseColor = new SFColor(new float[0.1,0.7,0.7]);
Appearance17.material = Material18;

Shape14.appearance = Appearance17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

children = new MFNode();

children[0] = Transform13;

Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[-3,0,0]);
Shape Shape20 = createNode("Shape");
Text Text21 = createNode("Text");
Text21.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
FontStyle FontStyle22 = createNode("FontStyle");
FontStyle22.USE = "testFontStyle";
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

Appearance Appearance23 = createNode("Appearance");
Appearance23.USE = "LightBlueAppearance";
Shape20.appearance = Appearance23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[1] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[3,0,0]);
Shape Shape25 = createNode("Shape");
Text Text26 = createNode("Text");
Text26.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
FontStyle FontStyle27 = createNode("FontStyle");
FontStyle27.USE = "testFontStyle";
Text26.fontStyle = FontStyle27;

Shape25.geometry = Text26;

Appearance Appearance28 = createNode("Appearance");
Appearance28.USE = "LightBlueAppearance";
Shape25.appearance = Appearance28;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

children[2] = Transform24;

}
