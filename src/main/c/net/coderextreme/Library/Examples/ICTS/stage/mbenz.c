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
meta3.content = "Thu, 23 Apr 2015 06:07:12 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:12 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Int";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field9 = createNode("field");
field9.name = "startTime";
field9.accessType = "inputOnly";
field9.type = "SFTime";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "value_changed";
field10.accessType = "outputOnly";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "keyValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ExternProtoDeclare8.field[2] = field11;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare12 = createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "BoolSwitch";
ExternProtoDeclare12.url = new MFString(new java.lang.String["BoolSwitch_proto.x3d"]);
field field13 = createNode("field");
field13.name = "isActive";
field13.accessType = "inputOnly";
field13.type = "SFBool";
ExternProtoDeclare12.field = new MFNode();

ExternProtoDeclare12.field[0] = field13;

field field14 = createNode("field");
field14.name = "wichChoice_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
ExternProtoDeclare12.field[1] = field14;

children[1] = ExternProtoDeclare12;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Switcher";
ExternProtoDeclare15.url = new MFString(new java.lang.String["Switcher_proto.x3d"]);
field field16 = createNode("field");
field16.name = "minValue";
field16.accessType = "inputOutput";
field16.type = "SFInt32";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "maxValue";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "prev";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ExternProtoDeclare15.field[2] = field18;

field field19 = createNode("field");
field19.name = "next";
field19.accessType = "inputOutput";
field19.type = "SFTime";
ExternProtoDeclare15.field[3] = field19;

field field20 = createNode("field");
field20.name = "offset";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
ExternProtoDeclare15.field[4] = field20;

field field21 = createNode("field");
field21.name = "whichChoice_changed";
field21.accessType = "outputOnly";
field21.type = "SFInt32";
ExternProtoDeclare15.field[5] = field21;

children[2] = ExternProtoDeclare15;

WorldInfo WorldInfo22 = createNode("WorldInfo");
WorldInfo22.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[3] = WorldInfo22;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "Content";
Transform Transform24 = createNode("Transform");
Transform24.DEF = "vs";
VisibilitySensor VisibilitySensor25 = createNode("VisibilitySensor");
VisibilitySensor25.DEF = "_1";
VisibilitySensor25.size = new SFVec3f(new float[0.36,0.12,0.003]);
VisibilitySensor25.center = new SFVec3f(new float[0,0,-0.298]);
Transform24.children = new MFNode();

Transform24.children[0] = VisibilitySensor25;

Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "Int";
ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "Int";
ProtoInstance27.DEF = "_2";
Transform26.children = new MFNode();

Transform26.children[0] = ProtoInstance27;

Transform23.children[1] = Transform26;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "Else-bg";
Inline Inline29 = createNode("Inline");
Inline29.url = new MFString(new java.lang.String["else-bg.x3d"]);
Inline29.bboxSize = new SFVec3f(new float[0.360011,0.120031,0.00224701]);
Inline29.bboxCenter = new SFVec3f(new float[3.7998e-7,-4.65661e-7,-0.298867]);
Transform28.children = new MFNode();

Transform28.children[0] = Inline29;

Transform23.children[2] = Transform28;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "Next";
TouchSensor TouchSensor31 = createNode("TouchSensor");
TouchSensor31.DEF = "_3";
Transform30.children = new MFNode();

Transform30.children[0] = TouchSensor31;

Switch Switch32 = createNode("Switch");
Switch32.DEF = "_4";
Switch32.whichChoice = 2;
Transform Transform33 = createNode("Transform");
Switch32.children = new MFNode();

Switch32.children[0] = Transform33;

Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[0.156605,-0.0463719,-0.296069]);
Transform34.scale = new SFVec3f(new float[0.0205224,0.0205224,0.205224]);
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
ImageTexture ImageTexture37 = createNode("ImageTexture");
ImageTexture37.url = new MFString(new java.lang.String["focus.gif"]);
Appearance36.texture = ImageTexture37;

Shape35.appearance = Appearance36;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate39 = createNode("TextureCoordinate");
TextureCoordinate39.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet38.texCoord = TextureCoordinate39;

Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet38.coord = Coordinate40;

Shape35.geometry = IndexedFaceSet38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Switch32.children[1] = Transform34;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "BoolSwitch";
ProtoInstance ProtoInstance42 = createNode("ProtoInstance");
ProtoInstance42.name = "BoolSwitch";
ProtoInstance42.DEF = "_5";
Transform41.children = new MFNode();

Transform41.children[0] = ProtoInstance42;

Switch32.children[2] = Transform41;

Transform30.children[1] = Switch32;

Transform Transform43 = createNode("Transform");
Transform43.DEF = "next";
Transform43.translation = new SFVec3f(new float[0.163886,-0.0464349,-0.296962]);
Transform43.scale = new SFVec3f(new float[0.0112658,0.0112657,0.112661]);
Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.ambientIntensity = 0;
Material46.diffuseColor = new SFColor(new float[0,0,0]);
Material46.shininess = 0;
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

IndexedFaceSet IndexedFaceSet47 = createNode("IndexedFaceSet");
IndexedFaceSet47.coordIndex = new MFInt32(new int[2,1,0,-1,3,4,5,-1]);
Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.point = new MFVec3f(new float[-0.5,-0.5,0,-0.5,0.5,0,0.5,0,0,-0.489453,0,0,-1.48945,0.5,0,-1.48945,-0.5,0]);
IndexedFaceSet47.coord = Coordinate48;

Shape44.geometry = IndexedFaceSet47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform30.children[2] = Transform43;

Transform23.children[3] = Transform30;

Transform Transform49 = createNode("Transform");
Transform49.DEF = "txt";
Switch Switch50 = createNode("Switch");
Switch50.DEF = "_6";
Switch50.whichChoice = 0;
Transform Transform51 = createNode("Transform");
Transform51.DEF = "t1";
Transform51.translation = new SFVec3f(new float[-0.125224,0.0301585,-0.296962]);
Transform51.scale = new SFVec3f(new float[0.00272371,0.00272434,0.00272354]);
Shape Shape52 = createNode("Shape");
Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.ambientIntensity = 0;
Material54.diffuseColor = new SFColor(new float[0,0,0]);
Material54.shininess = 0;
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

Text Text55 = createNode("Text");
Text55.string = new MFString(new java.lang.String[", ","Hi, ich bin Else! Ich möchte gern mit Dir, ","gemeinsam einen Ausflug in die Zukunft, ","des Internet machen! Wenn Du mit mir, ","mitgehst, kann ich Dir viele schöne und, ","interessante Dinge zeigen! "]);
Text55.length = new MFFloat(new float[0]);
FontStyle FontStyle56 = createNode("FontStyle");
FontStyle56.family = new MFString(new java.lang.String["SANS"]);
FontStyle56.size = 6;
Text55.fontStyle = FontStyle56;

Shape52.geometry = Text55;

Transform51.child = new undefined();

Transform51.child[0] = Shape52;

Switch50.children = new MFNode();

Switch50.children[0] = Transform51;

Transform Transform57 = createNode("Transform");
Transform57.DEF = "t2";
Transform57.translation = new SFVec3f(new float[-0.125224,0.0301585,-0.296962]);
Transform57.scale = new SFVec3f(new float[0.00272371,0.00272434,0.00272354]);
Shape Shape58 = createNode("Shape");
Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.ambientIntensity = 0;
Material60.diffuseColor = new SFColor(new float[0,0,0]);
Material60.shininess = 0;
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

Text Text61 = createNode("Text");
Text61.string = new MFString(new java.lang.String[", ","Wir befinden uns hier in einer, ","Demonstration, die zu Anschauungs-, ","zwecken erstellt wurde. Du kannst überall, ","herumlaufen und Dich umschauen.Ich kann Dir erklären, wie das ..."]);
Text61.length = new MFFloat(new float[0]);
FontStyle FontStyle62 = createNode("FontStyle");
FontStyle62.family = new MFString(new java.lang.String["SANS"]);
FontStyle62.size = 6;
Text61.fontStyle = FontStyle62;

Shape58.geometry = Text61;

Transform57.child = new undefined();

Transform57.child[0] = Shape58;

Switch50.children[1] = Transform57;

Transform Transform63 = createNode("Transform");
Transform63.DEF = "t3";
Transform63.translation = new SFVec3f(new float[-0.125224,0.0301585,-0.296962]);
Transform63.scale = new SFVec3f(new float[0.00272371,0.00272434,0.00272354]);
Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Material Material66 = createNode("Material");
Material66.ambientIntensity = 0;
Material66.diffuseColor = new SFColor(new float[0,0,0]);
Material66.shininess = 0;
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

Text Text67 = createNode("Text");
Text67.string = new MFString(new java.lang.String[", ","... geht: Klicke einfach mit Deiner Maus, ","in die Mitte des Bildes und ziehe mit, ","gedrückt gehaltener Maustaste, ","in die Richtung, in die Du laufen möchtestoder benutze die Pfeiltasten."]);
Text67.length = new MFFloat(new float[0]);
FontStyle FontStyle68 = createNode("FontStyle");
FontStyle68.family = new MFString(new java.lang.String["SANS"]);
FontStyle68.size = 6;
Text67.fontStyle = FontStyle68;

Shape64.geometry = Text67;

Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Switch50.children[2] = Transform63;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "Switcher";
ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "Switcher";
ProtoInstance70.DEF = "_7";
fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "maxValue";
fieldValue71.value = "2";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

Transform69.children = new MFNode();

Transform69.children[0] = ProtoInstance70;

Switch50.children[3] = Transform69;

Transform49.children = new MFNode();

Transform49.children[0] = Switch50;

Transform23.children[4] = Transform49;

children[4] = Transform23;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "_1";
ROUTE72.fromField = "enterTime";
ROUTE72.toNode = "_2";
ROUTE72.toField = "startTime";
children[5] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "_3";
ROUTE73.fromField = "isOver";
ROUTE73.toNode = "_5";
ROUTE73.toField = "isActive";
children[6] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "_5";
ROUTE74.fromField = "wichChoice_changed";
ROUTE74.toNode = "_4";
ROUTE74.toField = "set_whichChoice";
children[7] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "_3";
ROUTE75.fromField = "touchTime";
ROUTE75.toNode = "_7";
ROUTE75.toField = "set_next";
children[8] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "_2";
ROUTE76.fromField = "value_changed";
ROUTE76.toNode = "_7";
ROUTE76.toField = "set_offset";
children[9] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "_7";
ROUTE77.fromField = "whichChoice_changed";
ROUTE77.toNode = "_6";
ROUTE77.toField = "set_whichChoice";
children[10] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "_2";
ROUTE78.fromField = "value_changed";
ROUTE78.toNode = "_6";
ROUTE78.toField = "set_whichChoice";
children[11] = ROUTE78;

}
