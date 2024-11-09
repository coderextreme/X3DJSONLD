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
meta3.content = "Sun, 03 Jan 2016 10:11:36 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.0.6a, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/Follower/TexCoordChaser2D.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sun, 25 Feb 2018 06:57:53 GMT";
head1.meta[5] = meta7;

head = head1;

ExternProtoDeclare ExternProtoDeclare9 = createNode("ExternProtoDeclare");
ExternProtoDeclare9.name = "MFVec3f";
ExternProtoDeclare9.url = new MFString(new java.lang.String["MFVec3f.x3dv"]);
field field10 = createNode("field");
field10.name = "set_triggerTime";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ExternProtoDeclare9.field = new MFNode();

ExternProtoDeclare9.field[0] = field10;

field field11 = createNode("field");
field11.name = "keyValue";
field11.accessType = "inputOutput";
field11.type = "MFVec3f";
ExternProtoDeclare9.field[1] = field11;

field field12 = createNode("field");
field12.name = "value_changed";
field12.accessType = "outputOnly";
field12.type = "MFVec3f";
ExternProtoDeclare9.field[2] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare9;

ExternProtoDeclare ExternProtoDeclare13 = createNode("ExternProtoDeclare");
ExternProtoDeclare13.name = "MFVec2f";
ExternProtoDeclare13.url = new MFString(new java.lang.String["MFVec2f.x3dv"]);
field field14 = createNode("field");
field14.name = "set_triggerTime";
field14.accessType = "inputOnly";
field14.type = "SFTime";
ExternProtoDeclare13.field = new MFNode();

ExternProtoDeclare13.field[0] = field14;

field field15 = createNode("field");
field15.name = "keyValue";
field15.accessType = "inputOutput";
field15.type = "MFVec2f";
ExternProtoDeclare13.field[1] = field15;

field field16 = createNode("field");
field16.name = "value_changed";
field16.accessType = "outputOnly";
field16.type = "MFVec2f";
ExternProtoDeclare13.field[2] = field16;

children[1] = ExternProtoDeclare13;

WorldInfo WorldInfo17 = createNode("WorldInfo");
WorldInfo17.title = "CoordinateDamper";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "Titania";
MetadataSet18.DEF = "Titania";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "NavigationInfo";
MetadataSet19.DEF = "NavigationInfo";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataString MetadataString20 = createNode("MetadataString");
MetadataString20.name = "type";
MetadataString20.DEF = "type";
MetadataString20.reference = "http://titania.create3000.de";
MetadataString20.value = new MFString(new java.lang.String["NONE"]);
MetadataSet19.value = new MFNode();

MetadataSet19.value[0] = MetadataString20;

MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataSet19;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "Viewpoint";
MetadataSet21.DEF = "Viewpoint";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble22 = createNode("MetadataDouble");
MetadataDouble22.name = "position";
MetadataDouble22.DEF = "position";
MetadataDouble22.reference = "http://titania.create3000.de";
MetadataDouble22.value = new MFDouble(new double[0,0,10]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataDouble22;

MetadataDouble MetadataDouble23 = createNode("MetadataDouble");
MetadataDouble23.name = "orientation";
MetadataDouble23.DEF = "orientation";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = new MFDouble(new double[0,0,1,0]);
MetadataSet21.value[1] = MetadataDouble23;

MetadataDouble MetadataDouble24 = createNode("MetadataDouble");
MetadataDouble24.name = "centerOfRotation";
MetadataDouble24.DEF = "centerOfRotation";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = new MFDouble(new double[0,0,0]);
MetadataSet21.value[2] = MetadataDouble24;

MetadataSet18.value[1] = MetadataSet21;

MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "Selection";
MetadataSet25.DEF = "Selection";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean26 = createNode("MetadataBoolean");
MetadataBoolean26.name = "selectGeometry";
MetadataBoolean26.DEF = "selectGeometry";
MetadataBoolean26.reference = "http://titania.create3000.de";
MetadataBoolean26.value = new MFBool(new boolean[False]);
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataBoolean26;

MetadataSet18.value[2] = MetadataSet25;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "Page";
MetadataSet27.DEF = "Page";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger28 = createNode("MetadataInteger");
MetadataInteger28.name = "activeView";
MetadataInteger28.DEF = "activeView";
MetadataInteger28.reference = "http://titania.create3000.de";
MetadataInteger28.value = new MFInt32(new int[1]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataInteger28;

MetadataInteger MetadataInteger29 = createNode("MetadataInteger");
MetadataInteger29.name = "multiView";
MetadataInteger29.DEF = "multiView";
MetadataInteger29.reference = "http://titania.create3000.de";
MetadataInteger29.value = new MFInt32(new int[0]);
MetadataSet27.value[1] = MetadataInteger29;

MetadataSet18.value[3] = MetadataSet27;

WorldInfo17.metadata = MetadataSet18;

children[2] = WorldInfo17;

NavigationInfo NavigationInfo30 = createNode("NavigationInfo");
NavigationInfo30.type = new MFString(new java.lang.String[", ","NONEANY"]);
children[3] = NavigationInfo30;

Background Background31 = createNode("Background");
Background31.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[4] = Background31;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "DestinatinButton1";
Transform32.translation = new SFVec3f(new float[2.71505,2.16353,0]);
Transform32.scale = new SFVec3f(new float[0.204112,0.204112,1]);
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Rectangle2D Rectangle2D36 = createNode("Rectangle2D");
Shape33.geometry = Rectangle2D36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

TouchSensor TouchSensor37 = createNode("TouchSensor");
TouchSensor37.DEF = "Touch";
Transform32.children[1] = TouchSensor37;

ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "MFVec2f";
ProtoInstance38.DEF = "_1";
fieldValue fieldValue39 = createNode("fieldValue");
fieldValue39.name = "keyValue";
fieldValue39.value = "-1 -1 1 -1 1 1 -1 1";
ProtoInstance38.fieldValue = new MFNode();

ProtoInstance38.fieldValue[0] = fieldValue39;

Transform32.children[2] = ProtoInstance38;

children[5] = Transform32;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "DestinatinButton2";
Transform40.translation = new SFVec3f(new float[2.71505,1.65935,0]);
Transform40.scale = new SFVec3f(new float[0.204112,0.204112,1]);
Shape Shape41 = createNode("Shape");
Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

Rectangle2D Rectangle2D44 = createNode("Rectangle2D");
Shape41.geometry = Rectangle2D44;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

TouchSensor TouchSensor45 = createNode("TouchSensor");
TouchSensor45.DEF = "Touch1";
Transform40.children[1] = TouchSensor45;

ProtoInstance ProtoInstance46 = createNode("ProtoInstance");
ProtoInstance46.name = "MFVec2f";
ProtoInstance46.DEF = "_2";
fieldValue fieldValue47 = createNode("fieldValue");
fieldValue47.name = "keyValue";
fieldValue47.value = "-2 -2 2 -2 2 2 -2 2";
ProtoInstance46.fieldValue = new MFNode();

ProtoInstance46.fieldValue[0] = fieldValue47;

Transform40.children[2] = ProtoInstance46;

children[6] = Transform40;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "DestinatinButton3";
Transform48.translation = new SFVec3f(new float[2.71505,1.16847,0]);
Transform48.scale = new SFVec3f(new float[0.204112,0.204112,1]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

Rectangle2D Rectangle2D52 = createNode("Rectangle2D");
Shape49.geometry = Rectangle2D52;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

TouchSensor TouchSensor53 = createNode("TouchSensor");
TouchSensor53.DEF = "Touch2";
Transform48.children[1] = TouchSensor53;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "MFVec2f";
ProtoInstance54.DEF = "_3";
fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "keyValue";
fieldValue55.value = "0 -2 2 0 0 2 -2 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Transform48.children[2] = ProtoInstance54;

children[7] = Transform48;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "DestinatinButton4";
Transform56.translation = new SFVec3f(new float[2.71505,0.678305,0]);
Transform56.scale = new SFVec3f(new float[0.204112,0.204112,1]);
Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

Rectangle2D Rectangle2D60 = createNode("Rectangle2D");
Shape57.geometry = Rectangle2D60;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

TouchSensor TouchSensor61 = createNode("TouchSensor");
TouchSensor61.DEF = "Touch3";
Transform56.children[1] = TouchSensor61;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "MFVec2f";
ProtoInstance62.DEF = "_4";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "keyValue";
fieldValue63.value = "0 -3 3 0 0 3 -3 0";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

Transform56.children[2] = ProtoInstance62;

children[8] = Transform56;

TexCoordChaser2D TexCoordChaser2D64 = createNode("TexCoordChaser2D");
TexCoordChaser2D64.DEF = "_5";
TexCoordChaser2D64.initialValue = new MFVec2f(new float[-1,-1,1,-1,1,1,-1,1]);
TexCoordChaser2D64.initialDestination = new MFVec2f(new float[-1,-1,1,-1,1,1,-1,1]);
children[9] = TexCoordChaser2D64;

Transform Transform65 = createNode("Transform");
Transform65.DEF = "QuadSetTransform";
Shape Shape66 = createNode("Shape");
Appearance Appearance67 = createNode("Appearance");
ImageTexture ImageTexture68 = createNode("ImageTexture");
ImageTexture68.url = new MFString(new java.lang.String[", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpg, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpg, ","http://rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpghttps://rawgit.com/create3000/Library/master/Textures/Miscellaneous/ubuntu.jpg"]);
Appearance67.texture = ImageTexture68;

Shape66.appearance = Appearance67;

QuadSet QuadSet69 = createNode("QuadSet");
QuadSet69.solid = False;
TextureCoordinate TextureCoordinate70 = createNode("TextureCoordinate");
TextureCoordinate70.DEF = "_6";
TextureCoordinate70.point = new MFVec2f(new float[-1,-1,1,-1,1,1,-1,1]);
QuadSet69.texCoord = TextureCoordinate70;

Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.DEF = "Coordinate";
Coordinate71.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
QuadSet69.coord = Coordinate71;

Shape66.geometry = QuadSet69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

children[10] = Transform65;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "Touch3";
ROUTE72.fromField = "touchTime";
ROUTE72.toNode = "_4";
ROUTE72.toField = "set_triggerTime";
children[11] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "Touch2";
ROUTE73.fromField = "touchTime";
ROUTE73.toNode = "_3";
ROUTE73.toField = "set_triggerTime";
children[12] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "Touch1";
ROUTE74.fromField = "touchTime";
ROUTE74.toNode = "_2";
ROUTE74.toField = "set_triggerTime";
children[13] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "Touch";
ROUTE75.fromField = "touchTime";
ROUTE75.toNode = "_1";
ROUTE75.toField = "set_triggerTime";
children[14] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "_4";
ROUTE76.fromField = "value_changed";
ROUTE76.toNode = "_5";
ROUTE76.toField = "set_destination";
children[15] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "_3";
ROUTE77.fromField = "value_changed";
ROUTE77.toNode = "_5";
ROUTE77.toField = "set_destination";
children[16] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "_2";
ROUTE78.fromField = "value_changed";
ROUTE78.toNode = "_5";
ROUTE78.toField = "set_destination";
children[17] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "_1";
ROUTE79.fromField = "value_changed";
ROUTE79.toNode = "_5";
ROUTE79.toField = "set_destination";
children[18] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "_5";
ROUTE80.fromField = "value_changed";
ROUTE80.toNode = "_6";
ROUTE80.toField = "set_point";
children[19] = ROUTE80;

}
