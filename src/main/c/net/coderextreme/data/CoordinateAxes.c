#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "CoordinateAxes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Don Brutzman, Byounghyun Yoo";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "14 July 2000";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "20 October 2019";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "CoordinateAxes.x3d";
children = new MFNode();

children[0] = WorldInfo15;

Collision Collision16 = createNode("Collision");
Collision16.DEF = "DoNotCollideWithVisualizationWidget";
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group Group17 = createNode("Group");
//Vertical Y arrow and label
Group Group18 = createNode("Group");
Group18.DEF = "ArrowGreen";
Shape Shape19 = createNode("Shape");
Cylinder Cylinder20 = createNode("Cylinder");
Cylinder20.DEF = "ArrowCylinder";
Cylinder20.radius = 0.025;
Cylinder20.top = False;
Shape19.geometry = Cylinder20;

Appearance Appearance21 = createNode("Appearance");
Appearance21.DEF = "Green";
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.1,0.6,0.1]);
Material22.emissiveColor = new SFColor(new float[0.05,0.2,0.05]);
Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Group18.children = new MFNode();

Group18.children[0] = Shape19;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,1,0]);
Shape Shape24 = createNode("Shape");
Cone Cone25 = createNode("Cone");
Cone25.DEF = "ArrowCone";
Cone25.bottomRadius = 0.05;
Cone25.height = 0.1;
Shape24.geometry = Cone25;

Appearance Appearance26 = createNode("Appearance");
Appearance26.USE = "Green";
Shape24.appearance = Appearance26;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Group18.children[1] = Transform23;

Group17.children = new MFNode();

Group17.children[0] = Group18;

Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[0,1.08,0]);
Billboard Billboard28 = createNode("Billboard");
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Appearance30.DEF = "LABEL_APPEARANCE";
Material Material31 = createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,1,0.3]);
Material31.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

Text Text32 = createNode("Text");
Text32.string = new MFString(new java.lang.String["Y"]);
FontStyle FontStyle33 = createNode("FontStyle");
FontStyle33.DEF = "LABEL_FONT";
FontStyle33.family = new MFString(new java.lang.String["SANS"]);
FontStyle33.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle33.size = 0.2;
Text32.fontStyle = FontStyle33;

Shape29.geometry = Text32;

Billboard28.children = new MFNode();

Billboard28.children[0] = Shape29;

Transform27.children = new MFNode();

Transform27.children[0] = Billboard28;

Group17.children[1] = Transform27;

Collision16.proxy = Group17;

Transform Transform34 = createNode("Transform");
Transform34.rotation = new SFRotation(new float[0,0,1,-1.57079]);
//Horizontal X arrow and label
Group Group35 = createNode("Group");
Group Group36 = createNode("Group");
Group36.DEF = "ArrowRed";
Shape Shape37 = createNode("Shape");
Cylinder Cylinder38 = createNode("Cylinder");
Cylinder38.USE = "ArrowCylinder";
Shape37.geometry = Cylinder38;

Appearance Appearance39 = createNode("Appearance");
Appearance39.DEF = "Red";
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[0.7,0.1,0.1]);
Material40.emissiveColor = new SFColor(new float[0.33,0,0]);
Appearance39.material = Material40;

Shape37.appearance = Appearance39;

Group36.children = new MFNode();

Group36.children[0] = Shape37;

Transform Transform41 = createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,1,0]);
Shape Shape42 = createNode("Shape");
Cone Cone43 = createNode("Cone");
Cone43.USE = "ArrowCone";
Shape42.geometry = Cone43;

Appearance Appearance44 = createNode("Appearance");
Appearance44.USE = "Red";
Shape42.appearance = Appearance44;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Group36.children[1] = Transform41;

Group35.children = new MFNode();

Group35.children[0] = Group36;

Transform Transform45 = createNode("Transform");
Transform45.rotation = new SFRotation(new float[0,0,1,1.57079]);
Transform45.translation = new SFVec3f(new float[0.072,1.1,0]);
//note label rotated back to original coordinate frame
Billboard Billboard46 = createNode("Billboard");
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Appearance48.USE = "LABEL_APPEARANCE";
Shape47.appearance = Appearance48;

Text Text49 = createNode("Text");
Text49.string = new MFString(new java.lang.String["X"]);
FontStyle FontStyle50 = createNode("FontStyle");
FontStyle50.USE = "LABEL_FONT";
Text49.fontStyle = FontStyle50;

Shape47.geometry = Text49;

Billboard46.children = new MFNode();

Billboard46.children[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Billboard46;

Group35.children[1] = Transform45;

Transform34.children = new MFNode();

Transform34.children[0] = Group35;

Collision16.proxy = Transform34;

Transform Transform51 = createNode("Transform");
Transform51.rotation = new SFRotation(new float[1,0,0,1.57079]);
//Perpendicular Z arrow and label, note right-hand rule
Group Group52 = createNode("Group");
Group Group53 = createNode("Group");
Group53.DEF = "ArrowBlue";
Shape Shape54 = createNode("Shape");
Cylinder Cylinder55 = createNode("Cylinder");
Cylinder55.USE = "ArrowCylinder";
Shape54.geometry = Cylinder55;

Appearance Appearance56 = createNode("Appearance");
Appearance56.DEF = "Blue";
Material Material57 = createNode("Material");
Material57.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material57.emissiveColor = new SFColor(new float[0.1,0.1,0.33]);
Appearance56.material = Material57;

Shape54.appearance = Appearance56;

Group53.children = new MFNode();

Group53.children[0] = Shape54;

Transform Transform58 = createNode("Transform");
Transform58.translation = new SFVec3f(new float[0,1,0]);
Shape Shape59 = createNode("Shape");
Cone Cone60 = createNode("Cone");
Cone60.USE = "ArrowCone";
Shape59.geometry = Cone60;

Appearance Appearance61 = createNode("Appearance");
Appearance61.USE = "Blue";
Shape59.appearance = Appearance61;

Transform58.child = new undefined();

Transform58.child[0] = Shape59;

Group53.children[1] = Transform58;

Group52.children = new MFNode();

Group52.children[0] = Group53;

Transform Transform62 = createNode("Transform");
Transform62.rotation = new SFRotation(new float[1,0,0,-1.57079]);
Transform62.translation = new SFVec3f(new float[0,1.1,0.072]);
//note label rotated back to original coordinate frame
Billboard Billboard63 = createNode("Billboard");
Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Appearance65.USE = "LABEL_APPEARANCE";
Shape64.appearance = Appearance65;

Text Text66 = createNode("Text");
Text66.string = new MFString(new java.lang.String["Z"]);
FontStyle FontStyle67 = createNode("FontStyle");
FontStyle67.USE = "LABEL_FONT";
Text66.fontStyle = FontStyle67;

Shape64.geometry = Text66;

Billboard63.children = new MFNode();

Billboard63.children[0] = Shape64;

Transform62.children = new MFNode();

Transform62.children[0] = Billboard63;

Group52.children[1] = Transform62;

Transform51.children = new MFNode();

Transform51.children[0] = Group52;

Collision16.proxy = Transform51;

children[1] = Collision16;

}
