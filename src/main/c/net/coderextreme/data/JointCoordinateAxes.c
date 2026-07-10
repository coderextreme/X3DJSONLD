#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "converter";
meta2.content = "x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "converted";
meta3.content = "Mon, 31 Jul 2023 03:48:04 GMT";
head1.meta[1] = meta3;

head = head1;

NavigationInfo NavigationInfo5 = createNode("NavigationInfo");
NavigationInfo5.headlight = False;
children = new MFNode();

children[0] = NavigationInfo5;

Group Group6 = createNode("Group");
Group Group7 = createNode("Group");
Group7.DEF = "ARROW";
Shape Shape8 = createNode("Shape");
Appearance Appearance9 = createNode("Appearance");
Appearance9.DEF = "ARROW_APPEARANCE";
Material Material10 = createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material10.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

Cylinder Cylinder11 = createNode("Cylinder");
Cylinder11.top = False;
Cylinder11.bottom = False;
Cylinder11.radius = 0.025;
Shape8.geometry = Cylinder11;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,1,0]);
Shape Shape13 = createNode("Shape");
Shape13.DEF = "ARROW_POINTER";
Appearance Appearance14 = createNode("Appearance");
Appearance14.USE = "ARROW_APPEARANCE";
Shape13.appearance = Appearance14;

Cone Cone15 = createNode("Cone");
Cone15.height = 0.1;
Cone15.bottomRadius = 0.05;
Shape13.geometry = Cone15;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Group7.children[1] = Transform12;

Transform Transform16 = createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,-1,0]);
Transform16.rotation = new SFRotation(new float[1,0,0,3.1416]);
Shape Shape17 = createNode("Shape");
Shape17.USE = "ARROW_POINTER";
Transform16.child = new undefined();

Transform16.child[0] = Shape17;

Group7.children[2] = Transform16;

Group6.children = new MFNode();

Group6.children[0] = Group7;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,1.08,0]);
Billboard Billboard19 = createNode("Billboard");
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Appearance21.DEF = "LABEL_APPEARANCE";
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,0.3]);
Material22.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Text Text23 = createNode("Text");
Text23.string = new MFString(new java.lang.String["Y"]);
FontStyle FontStyle24 = createNode("FontStyle");
FontStyle24.DEF = "LABEL_FONT";
FontStyle24.family = new MFString(new java.lang.String["SANS"]);
FontStyle24.size = 0.2;
FontStyle24.justify = new MFString(new java.lang.String["MIDDLE"]);
Text23.fontStyle = FontStyle24;

Shape20.geometry = Text23;

Billboard19.children = new MFNode();

Billboard19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Billboard19;

Group6.children[1] = Transform18;

children[1] = Group6;

Transform Transform25 = createNode("Transform");
Transform25.rotation = new SFRotation(new float[0,0,1,-1.5708]);
Group Group26 = createNode("Group");
Group Group27 = createNode("Group");
Group27.USE = "ARROW";
Group26.children = new MFNode();

Group26.children[0] = Group27;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0.072,1.1,0]);
Transform28.rotation = new SFRotation(new float[0,0,1,1.5708]);
Billboard Billboard29 = createNode("Billboard");
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Appearance31.USE = "LABEL_APPEARANCE";
Shape30.appearance = Appearance31;

Text Text32 = createNode("Text");
Text32.string = new MFString(new java.lang.String["X"]);
FontStyle FontStyle33 = createNode("FontStyle");
FontStyle33.USE = "LABEL_FONT";
Text32.fontStyle = FontStyle33;

Shape30.geometry = Text32;

Billboard29.children = new MFNode();

Billboard29.children[0] = Shape30;

Transform28.children = new MFNode();

Transform28.children[0] = Billboard29;

Group26.children[1] = Transform28;

Transform25.children = new MFNode();

Transform25.children[0] = Group26;

children[2] = Transform25;

Transform Transform34 = createNode("Transform");
Transform34.rotation = new SFRotation(new float[1,0,0,1.5708]);
Group Group35 = createNode("Group");
Group Group36 = createNode("Group");
Group36.USE = "ARROW";
Group35.children = new MFNode();

Group35.children[0] = Group36;

Transform Transform37 = createNode("Transform");
Transform37.translation = new SFVec3f(new float[0,1.1,0.072]);
Transform37.rotation = new SFRotation(new float[1,0,0,-1.5708]);
Billboard Billboard38 = createNode("Billboard");
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Appearance40.USE = "LABEL_APPEARANCE";
Shape39.appearance = Appearance40;

Text Text41 = createNode("Text");
Text41.string = new MFString(new java.lang.String["Z"]);
FontStyle FontStyle42 = createNode("FontStyle");
FontStyle42.USE = "LABEL_FONT";
Text41.fontStyle = FontStyle42;

Shape39.geometry = Text41;

Billboard38.children = new MFNode();

Billboard38.children[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Billboard38;

Group35.children[1] = Transform37;

Transform34.children = new MFNode();

Transform34.children[0] = Group35;

children[3] = Transform34;

}
