#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:07:00 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:00 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Switcher";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Switcher_proto.x3d"]);
field field9 = createNode("field");
field9.name = "minValue";
field9.accessType = "inputOutput";
field9.type = "SFInt32";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "maxValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "prev";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "next";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "offset";
field13.accessType = "inputOutput";
field13.type = "SFInt32";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "whichChoice_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
ExternProtoDeclare8.field[5] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Int";
ExternProtoDeclare15.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field16 = createNode("field");
field16.name = "startTime";
field16.accessType = "inputOnly";
field16.type = "SFTime";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "value_changed";
field17.accessType = "outputOnly";
field17.type = "SFInt32";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "keyValue";
field18.accessType = "inputOutput";
field18.type = "SFInt32";
ExternProtoDeclare15.field[2] = field18;

children[1] = ExternProtoDeclare15;

WorldInfo WorldInfo19 = createNode("WorldInfo");
WorldInfo19.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[2] = WorldInfo19;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "txt";
Transform Transform21 = createNode("Transform");
Transform21.DEF = "Switcher_1";
ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "Switcher";
ProtoInstance22.DEF = "_1";
fieldValue fieldValue23 = createNode("fieldValue");
fieldValue23.name = "maxValue";
fieldValue23.value = "2";
ProtoInstance22.fieldValue = new MFNode();

ProtoInstance22.fieldValue[0] = fieldValue23;

Transform21.children = new MFNode();

Transform21.children[0] = ProtoInstance22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "Int";
ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "Int";
ProtoInstance25.DEF = "_2";
Transform24.children = new MFNode();

Transform24.children[0] = ProtoInstance25;

Transform20.children[1] = Transform24;

children[3] = Transform20;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "zoomer";
Switch Switch27 = createNode("Switch");
Switch27.DEF = "_3";
Switch27.whichChoice = 0;
Transform Transform28 = createNode("Transform");
Transform28.DEF = "small";
Transform Transform29 = createNode("Transform");
Transform29.DEF = "zoomUpButton";
Transform29.translation = new SFVec3f(new float[0,0,0.001]);
TouchSensor TouchSensor30 = createNode("TouchSensor");
TouchSensor30.DEF = "_4";
Transform29.children = new MFNode();

Transform29.children[0] = TouchSensor30;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "zoomUp";
Transform31.translation = new SFVec3f(new float[0.0727128,-0.082967,-0.293253]);
Transform31.rotation = new SFRotation(new float[0,0,1,0.681909]);
Transform31.scale = new SFVec3f(new float[0.100302,0.100302,0.100301]);
Transform31.scaleOrientation = new SFRotation(new float[0,0,1,0.130302]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.ambientIntensity = 0;
Material34.diffuseColor = new SFColor(new float[0,0,0]);
Material34.emissiveColor = new SFColor(new float[1,0.639776,0]);
Material34.shininess = 0;
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.creaseAngle = 0.5;
IndexedFaceSet35.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.point = new MFVec3f(new float[-0.1,-0.1,0.1,0.1,0,0.1,-0.1,0.1,0.1]);
IndexedFaceSet35.coord = Coordinate36;

Shape32.geometry = IndexedFaceSet35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Transform29.children[1] = Transform31;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "_5";
Transform Transform38 = createNode("Transform");
Transform38.DEF = "vSens";
VisibilitySensor VisibilitySensor39 = createNode("VisibilitySensor");
VisibilitySensor39.DEF = "_6";
VisibilitySensor39.size = new SFVec3f(new float[0.3436,0.0899179,0.0213106]);
VisibilitySensor39.center = new SFVec3f(new float[-0.0933476,-0.120762,-0.281255]);
Transform38.children = new MFNode();

Transform38.children[0] = VisibilitySensor39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "textSwitch";
Switch Switch41 = createNode("Switch");
Switch41.DEF = "_7";
Switch41.whichChoice = 0;
Transform Transform42 = createNode("Transform");
Transform42.DEF = "tx1";
Transform Transform43 = createNode("Transform");
Transform43.DEF = "sprech";
Transform43.translation = new SFVec3f(new float[-0.25105,-0.0996248,-0.282863]);
Transform43.scale = new SFVec3f(new float[0.00258483,0.00258483,0.00258493]);
Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Shape44.appearance = Appearance45;

Text Text46 = createNode("Text");
Text46.string = new MFString(new java.lang.String[", ","Herzlich willkommen in der Central-Station!, ","Von hier aus kommst Du in jeden Teil unsererschönen Stadt. Mit der \"Pfeil-Hoch\"," "-Taste, ","kannst Du zum Hauptmenü gehen. "]);
Text46.length = new MFFloat(new float[0]);
FontStyle FontStyle47 = createNode("FontStyle");
FontStyle47.family = new MFString(new java.lang.String["SANS"]);
FontStyle47.size = 6;
Text46.fontStyle = FontStyle47;

Shape44.geometry = Text46;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform42.children = new MFNode();

Transform42.children[0] = Transform43;

Switch41.children = new MFNode();

Switch41.children[0] = Transform42;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "tx2";
Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[-0.25105,-0.0996248,-0.282863]);
Transform49.scale = new SFVec3f(new float[0.00258483,0.00258483,0.00258493]);
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Shape50.appearance = Appearance51;

Text Text52 = createNode("Text");
Text52.string = new MFString(new java.lang.String[", ","Du kannst Dich mit allen Pfeiltasten Deiner, ","Tastatur in die jeweilige Richtung bewegen.Du kannst zum Beispiel auch \"Vorwärts\"," "und\"Links\" zugleich drücken, um Kurven zu laufen."]);
Text52.length = new MFFloat(new float[0]);
FontStyle FontStyle53 = createNode("FontStyle");
FontStyle53.family = new MFString(new java.lang.String["SANS"]);
FontStyle53.size = 6;
Text52.fontStyle = FontStyle53;

Shape50.geometry = Text52;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

Switch41.children[1] = Transform48;

Transform Transform54 = createNode("Transform");
Transform54.DEF = "tx3";
Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[-0.25105,-0.0996248,-0.282863]);
Transform55.scale = new SFVec3f(new float[0.00258483,0.00258483,0.00258493]);
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Shape56.appearance = Appearance57;

Text Text58 = createNode("Text");
Text58.string = new MFString(new java.lang.String[", ","Das ist doch ziemlich einfach, oder?, ","Am Hauptmenü in der Mitte kannst Du gleich, ","überall hin, dahinter führt ein kurzer Fußwegmit schöner Aussicht direkt ins Zentrum. "]);
Text58.length = new MFFloat(new float[0]);
FontStyle FontStyle59 = createNode("FontStyle");
FontStyle59.family = new MFString(new java.lang.String["SANS"]);
FontStyle59.size = 6;
Text58.fontStyle = FontStyle59;

Shape56.geometry = Text58;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform54.children = new MFNode();

Transform54.children[0] = Transform55;

Switch41.children[2] = Transform54;

Transform40.children = new MFNode();

Transform40.children[0] = Switch41;

Transform37.children[1] = Transform40;

Transform Transform60 = createNode("Transform");
Transform60.DEF = "bg";
Transform60.translation = new SFVec3f(new float[-0.0933871,-0.121334,-0.304782]);
Transform60.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform60.scale = new SFVec3f(new float[9.25527,1.20309,2.14284]);
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.ambientIntensity = 0;
Material63.diffuseColor = new SFColor(new float[0,0,0]);
Material63.emissiveColor = new SFColor(new float[0,0.21087,0.223404]);
Material63.transparency = 0.138298;
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

IndexedFaceSet IndexedFaceSet64 = createNode("IndexedFaceSet");
IndexedFaceSet64.creaseAngle = 0.5;
IndexedFaceSet64.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[-0.0176327,0.0176307,-0.0176327,-0.0176327,0.0176307,0.0176327,0.0176327,0.0176307,0.0176327,0.0176327,0.0176307,-0.0176327]);
IndexedFaceSet64.coord = Coordinate65;

Shape61.geometry = IndexedFaceSet64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform37.children[2] = Transform60;

Transform Transform66 = createNode("Transform");
Transform66.DEF = "nextButton";
TouchSensor TouchSensor67 = createNode("TouchSensor");
TouchSensor67.DEF = "_8";
Transform66.children = new MFNode();

Transform66.children[0] = TouchSensor67;

Transform Transform68 = createNode("Transform");
Transform68.translation = new SFVec3f(new float[0.0759116,-0.14877,-0.29326]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.ambientIntensity = 0;
Material71.diffuseColor = new SFColor(new float[0,0,0]);
Material71.emissiveColor = new SFColor(new float[0,0.808841,1]);
Material71.transparency = 0.340426;
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

IndexedFaceSet IndexedFaceSet72 = createNode("IndexedFaceSet");
IndexedFaceSet72.creaseAngle = 0.5;
IndexedFaceSet72.coordIndex = new MFInt32(new int[0,1,2,-1,3,4,5,-1]);
Coordinate Coordinate73 = createNode("Coordinate");
Coordinate73.point = new MFVec3f(new float[-0.01,0.01,0.01,-0.01,-0.01,0.01,0.01,0,0.01,-0.000733886,0.0100329,0.01,-0.000733886,-0.00996705,0.01,0.0192661,0.0000329478,0.01]);
IndexedFaceSet72.coord = Coordinate73;

Shape69.geometry = IndexedFaceSet72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform66.children[1] = Transform68;

Transform37.children[3] = Transform66;

Transform28.children[1] = Transform37;

Switch27.children = new MFNode();

Switch27.children[0] = Transform28;

Transform Transform74 = createNode("Transform");
Transform74.DEF = "big";
Transform74.translation = new SFVec3f(new float[0.130365,0.0814798,0.143523]);
Transform74.scale = new SFVec3f(new float[1.49167,1.49167,1.49167]);
Transform Transform75 = createNode("Transform");
Transform75.DEF = "zoomDownButton";
Transform75.translation = new SFVec3f(new float[0,0,0.001]);
TouchSensor TouchSensor76 = createNode("TouchSensor");
TouchSensor76.DEF = "_9";
Transform75.children = new MFNode();

Transform75.children[0] = TouchSensor76;

Transform Transform77 = createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.0727128,-0.082967,-0.293253]);
Transform77.rotation = new SFRotation(new float[0,0,1,3.87866]);
Transform77.scale = new SFVec3f(new float[0.100302,0.100302,0.100301]);
Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Material Material80 = createNode("Material");
Material80.ambientIntensity = 0;
Material80.diffuseColor = new SFColor(new float[0,0,0]);
Material80.emissiveColor = new SFColor(new float[1,0.639776,0]);
Material80.shininess = 0;
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

IndexedFaceSet IndexedFaceSet81 = createNode("IndexedFaceSet");
IndexedFaceSet81.creaseAngle = 0.5;
IndexedFaceSet81.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[-0.1,-0.1,0.1,0.1,0,0.1,-0.1,0.1,0.1]);
IndexedFaceSet81.coord = Coordinate82;

Shape78.geometry = IndexedFaceSet81;

Transform77.child = new undefined();

Transform77.child[0] = Shape78;

Transform75.children[1] = Transform77;

Transform74.children = new MFNode();

Transform74.children[0] = Transform75;

Transform Transform83 = createNode("Transform");
Transform Transform84 = createNode("Transform");
Transform84.USE = "_5";
Transform83.children = new MFNode();

Transform83.children[0] = Transform84;

Transform74.children[1] = Transform83;

Switch27.children[1] = Transform74;

Transform26.children = new MFNode();

Transform26.children[0] = Switch27;

children[4] = Transform26;

Transform Transform85 = createNode("Transform");
Transform85.DEF = "Switcher";
ProtoInstance ProtoInstance86 = createNode("ProtoInstance");
ProtoInstance86.name = "Switcher";
ProtoInstance86.DEF = "_10";
Transform85.children = new MFNode();

Transform85.children[0] = ProtoInstance86;

children[5] = Transform85;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "_8";
ROUTE87.fromField = "touchTime";
ROUTE87.toNode = "_1";
ROUTE87.toField = "set_next";
children[6] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "_2";
ROUTE88.fromField = "value_changed";
ROUTE88.toNode = "_1";
ROUTE88.toField = "set_offset";
children[7] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "_6";
ROUTE89.fromField = "exitTime";
ROUTE89.toNode = "_2";
ROUTE89.toField = "startTime";
children[8] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "_6";
ROUTE90.fromField = "enterTime";
ROUTE90.toNode = "_2";
ROUTE90.toField = "startTime";
children[9] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "_2";
ROUTE91.fromField = "value_changed";
ROUTE91.toNode = "_7";
ROUTE91.toField = "set_whichChoice";
children[10] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "_1";
ROUTE92.fromField = "whichChoice_changed";
ROUTE92.toNode = "_7";
ROUTE92.toField = "set_whichChoice";
children[11] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "_10";
ROUTE93.fromField = "whichChoice_changed";
ROUTE93.toNode = "_3";
ROUTE93.toField = "set_whichChoice";
children[12] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "_9";
ROUTE94.fromField = "touchTime";
ROUTE94.toNode = "_10";
ROUTE94.toField = "set_prev";
children[13] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "_4";
ROUTE95.fromField = "touchTime";
ROUTE95.toNode = "_10";
ROUTE95.toField = "set_next";
children[14] = ROUTE95;

}
