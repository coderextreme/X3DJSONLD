#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "creator";
meta2.content = "John W Carlson";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "December 13 2015";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "title";
meta4.content = "text3shapes.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "3 text shapes";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

head = head1;

Transform Transform9 = createNode("Transform");
Shape Shape10 = createNode("Shape");
Text Text11 = createNode("Text");
Text11.string = new MFString(new java.lang.String["Node\"\"\""]);
FontStyle FontStyle12 = createNode("FontStyle");
Text11.fontStyle = FontStyle12;

Shape10.geometry = Text11;

Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Appearance13.material = Material14;

Shape10.appearance = Appearance13;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

Shape Shape15 = createNode("Shape");
Text Text16 = createNode("Text");
Text16.string = new MFString(new java.lang.String["Node2","\\\\","\\\\\\\\","Node2"]);
FontStyle FontStyle17 = createNode("FontStyle");
Text16.fontStyle = FontStyle17;

Shape15.geometry = Text16;

Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Appearance18.material = Material19;

Shape15.appearance = Appearance18;

Transform9.child[1] = Shape15;

Shape Shape20 = createNode("Shape");
Text Text21 = createNode("Text");
Text21.string = new MFString(new java.lang.String["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]);
FontStyle FontStyle22 = createNode("FontStyle");
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Appearance23.material = Material24;

Shape20.appearance = Appearance23;

Transform9.child[2] = Shape20;

Script Script25 = createNode("Script");
field field26 = createNode("field");
field26.name = "frontUrls";
field26.type = "MFString";
field26.accessType = "initializeOnly";
field26.value = "\"rnl_front.png\" \"uffizi_front.png\"";
Script25.field = new MFNode();

Script25.field[0] = field26;


Script25.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';`)
Transform9.children[3] = Script25;

children = new MFNode();

children[0] = Transform9;

}
