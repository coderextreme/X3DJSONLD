#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
head = head1;

NavigationInfo NavigationInfo3 = createNode("NavigationInfo");
NavigationInfo3.headlight = False;
children = new MFNode();

children[0] = NavigationInfo3;

Group Group4 = createNode("Group");
Group Group5 = createNode("Group");
Group5.DEF = "ARROW";
Shape Shape6 = createNode("Shape");
Appearance Appearance7 = createNode("Appearance");
Appearance7.DEF = "ARROW_APPEARANCE";
Material Material8 = createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material8.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

Cylinder Cylinder9 = createNode("Cylinder");
Cylinder9.top = False;
Cylinder9.bottom = False;
Cylinder9.radius = 0.025;
Shape6.geometry = Cylinder9;

Group5.children = new MFNode();

Group5.children[0] = Shape6;

Transform Transform10 = createNode("Transform");
Transform10.translation = new SFVec3f(new float[0,1,0]);
Shape Shape11 = createNode("Shape");
Shape11.DEF = "ARROW_POINTER";
Appearance Appearance12 = createNode("Appearance");
Appearance12.USE = "ARROW_APPEARANCE";
Shape11.appearance = Appearance12;

Cone Cone13 = createNode("Cone");
Cone13.height = 0.1;
Cone13.bottomRadius = 0.05;
Shape11.geometry = Cone13;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Group5.children[1] = Transform10;

Transform Transform14 = createNode("Transform");
Transform14.translation = new SFVec3f(new float[0,-1,0]);
Transform14.rotation = new SFRotation(new float[1,0,0,3.1416]);
Shape Shape15 = createNode("Shape");
Shape15.USE = "ARROW_POINTER";
Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Group5.children[2] = Transform14;

Group4.children = new MFNode();

Group4.children[0] = Group5;

Transform Transform16 = createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,1.08,0]);
Billboard Billboard17 = createNode("Billboard");
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Appearance19.DEF = "LABEL_APPEARANCE";
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,1,0.3]);
Material20.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

Text Text21 = createNode("Text");
Text21.string = new MFString(new java.lang.String["Y"]);
FontStyle FontStyle22 = createNode("FontStyle");
FontStyle22.DEF = "LABEL_FONT";
FontStyle22.family = new MFString(new java.lang.String["SANS"]);
FontStyle22.size = 0.2;
FontStyle22.justify = new MFString(new java.lang.String["MIDDLE"]);
Text21.fontStyle = FontStyle22;

Shape18.geometry = Text21;

Billboard17.children = new MFNode();

Billboard17.children[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Billboard17;

Group4.children[1] = Transform16;

children[1] = Group4;

Transform Transform23 = createNode("Transform");
Transform23.rotation = new SFRotation(new float[0,0,1,-1.5708]);
Group Group24 = createNode("Group");
Group Group25 = createNode("Group");
Group25.USE = "ARROW";
Group24.children = new MFNode();

Group24.children[0] = Group25;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0.072,1.1,0]);
Transform26.rotation = new SFRotation(new float[0,0,1,1.5708]);
Billboard Billboard27 = createNode("Billboard");
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Appearance29.USE = "LABEL_APPEARANCE";
Shape28.appearance = Appearance29;

Text Text30 = createNode("Text");
Text30.string = new MFString(new java.lang.String["X"]);
FontStyle FontStyle31 = createNode("FontStyle");
FontStyle31.USE = "LABEL_FONT";
Text30.fontStyle = FontStyle31;

Shape28.geometry = Text30;

Billboard27.children = new MFNode();

Billboard27.children[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Billboard27;

Group24.children[1] = Transform26;

Transform23.children = new MFNode();

Transform23.children[0] = Group24;

children[2] = Transform23;

Transform Transform32 = createNode("Transform");
Transform32.rotation = new SFRotation(new float[1,0,0,1.5708]);
Group Group33 = createNode("Group");
Group Group34 = createNode("Group");
Group34.USE = "ARROW";
Group33.children = new MFNode();

Group33.children[0] = Group34;

Transform Transform35 = createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,1.1,0.072]);
Transform35.rotation = new SFRotation(new float[1,0,0,-1.5708]);
Billboard Billboard36 = createNode("Billboard");
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Appearance38.USE = "LABEL_APPEARANCE";
Shape37.appearance = Appearance38;

Text Text39 = createNode("Text");
Text39.string = new MFString(new java.lang.String["Z"]);
FontStyle FontStyle40 = createNode("FontStyle");
FontStyle40.USE = "LABEL_FONT";
Text39.fontStyle = FontStyle40;

Shape37.geometry = Text39;

Billboard36.children = new MFNode();

Billboard36.children[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Billboard36;

Group33.children[1] = Transform35;

Transform32.children = new MFNode();

Transform32.children[0] = Group33;

children[3] = Transform32;

}
