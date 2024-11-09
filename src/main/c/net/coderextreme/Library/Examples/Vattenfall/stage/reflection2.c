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
meta3.content = "Sat, 25 Apr 2015 12:38:24 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:24 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "ReflectiveTextureTransform";
ExternProtoDeclare8.url = new MFString(new java.lang.String["ReflectiveTextureTransform_proto.x3d"]);
field field9 = createNode("field");
field9.name = "translation";
field9.accessType = "inputOutput";
field9.type = "SFVec3f";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "position";
field10.accessType = "inputOutput";
field10.type = "SFVec3f";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "distance";
field11.accessType = "inputOutput";
field11.type = "SFFloat";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "textureTransform";
field12.accessType = "inputOutput";
field12.type = "SFNode";
ExternProtoDeclare8.field[3] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare8;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.info = new MFString(new java.lang.String[", ","Created in CosmoWorldsPackaged by CosmoPackage"]);
children[1] = WorldInfo13;

Transform Transform14 = createNode("Transform");
Transform14.DEF = "reflect";
Transform14.translation = new SFVec3f(new float[0.0899906,13.5733,0.140636]);
Transform14.scale = new SFVec3f(new float[12.7869,23.5669,3.17457]);
Transform14.center = new SFVec3f(new float[1.44509,0.080182,0.0304624]);
Shape Shape15 = createNode("Shape");
Appearance Appearance16 = createNode("Appearance");
ImageTexture ImageTexture17 = createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["street-ref.jpg"]);
Appearance16.texture = ImageTexture17;

TextureTransform TextureTransform18 = createNode("TextureTransform");
TextureTransform18.DEF = "_1";
TextureTransform18.center = new SFVec2f(new float[-0.5,-0.5]);
Appearance16.textureTransform = TextureTransform18;

Shape15.appearance = Appearance16;

IndexedFaceSet IndexedFaceSet19 = createNode("IndexedFaceSet");
IndexedFaceSet19.texCoordIndex = new MFInt32(new int[11,12,16,-1,1,4,2,-1,4,5,2,-1,0,1,3,-1,1,2,3,-1,10,16,13,-1,10,11,16,-1,12,14,16,-1,14,15,16,-1,11,10,9,-1,10,8,9,-1,6,7,8,-1,7,9,8,-1,20,18,17,-1,20,19,18,-1]);
IndexedFaceSet19.coordIndex = new MFInt32(new int[10,12,13,-1,1,4,2,-1,4,5,2,-1,0,1,3,-1,1,2,3,-1,11,13,14,-1,11,10,13,-1,12,15,13,-1,15,16,13,-1,10,11,8,-1,11,9,8,-1,6,7,9,-1,7,8,9,-1,20,18,17,-1,20,19,18,-1]);
TextureCoordinate TextureCoordinate20 = createNode("TextureCoordinate");
TextureCoordinate20.point = new MFVec2f(new float[0.25601,0,0.25601,0.648441,0,0.648441,0,0,0.25601,0.998373,0,0.998373,0.995929,0.702952,0.995929,0.998373,0.770796,0.701656,0.770527,0.998373,0.515267,0.701656,0.515267,0.998373,0.316074,0.998373,0.316074,0.701656,0.258103,0.998373,0.258103,0.810909,0.316074,0.81091,0.990453,0.0212353,0.195997,0.0212353,0.195997,0.755931,0.990453,0.755931]);
IndexedFaceSet19.texCoord = TextureCoordinate20;

Coordinate Coordinate21 = createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[0.5,-0.339636,0,0.5,0.205706,0,-0.5,0.205706,0,-0.5,-0.339636,0,0.5,0.5,0,-0.5,0.5,0,3.39019,0.25155,0,3.39019,0.5,0,2.50975,0.5,0,2.5108,0.25046,0,1.51268,0.5,0,1.51268,0.25046,0,0.734612,0.5,0,0.734612,0.342343,0,0.734612,0.25046,0,0.508174,0.5,0,0.508174,0.342342,0,3.3688,-0.321777,0.0609247,0.738588,-0.321777,0.0606856,0.738588,0.211568,0.0606856,3.3688,0.211568,0.0609247]);
IndexedFaceSet19.coord = Coordinate21;

Shape15.geometry = IndexedFaceSet19;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

children[2] = Transform14;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "ps_handle";
Transform22.scale = new SFVec3f(new float[1020.62,1020.62,1020.62]);
Switch Switch23 = createNode("Switch");
Switch23.whichChoice = 1;
Transform Transform24 = createNode("Transform");
Switch23.children = new MFNode();

Switch23.children[0] = Transform24;

Inline Inline25 = createNode("Inline");
Inline25.url = new MFString(new java.lang.String["cube.x3d"]);
Inline25.bboxSize = new SFVec3f(new float[1,1,1]);
Switch23.children[1] = Inline25;

Transform22.children = new MFNode();

Transform22.children[0] = Switch23;

children[3] = Transform22;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "ps";
ProximitySensor ProximitySensor27 = createNode("ProximitySensor");
ProximitySensor27.DEF = "_2";
ProximitySensor27.size = new SFVec3f(new float[1020.62,1020.62,1020.62]);
Transform26.children = new MFNode();

Transform26.children[0] = ProximitySensor27;

children[4] = Transform26;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "ReflectiveTextureTransform";
ProtoInstance ProtoInstance29 = createNode("ProtoInstance");
ProtoInstance29.name = "ReflectiveTextureTransform";
ProtoInstance29.DEF = "_3";
fieldValue fieldValue30 = createNode("fieldValue");
fieldValue30.name = "translation";
fieldValue30.value = "0.0899906 13.5733 0.140636";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

fieldValue fieldValue31 = createNode("fieldValue");
fieldValue31.name = "distance";
fieldValue31.value = "3";
ProtoInstance29.fieldValue[1] = fieldValue31;

fieldValue fieldValue32 = createNode("fieldValue");
fieldValue32.name = "textureTransform";
TextureTransform TextureTransform33 = createNode("TextureTransform");
TextureTransform33.USE = "_1";
fieldValue32.children = new MFNode();

fieldValue32.children[0] = TextureTransform33;

ProtoInstance29.fieldValue[2] = fieldValue32;

Transform28.children = new MFNode();

Transform28.children[0] = ProtoInstance29;

children[5] = Transform28;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "ps_handle";
ROUTE34.fromField = "translation_changed";
ROUTE34.toNode = "_2";
ROUTE34.toField = "set_center";
children[6] = ROUTE34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "ps_handle";
ROUTE35.fromField = "scale_changed";
ROUTE35.toNode = "_2";
ROUTE35.toField = "set_size";
children[7] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "reflect";
ROUTE36.fromField = "translation_changed";
ROUTE36.toNode = "_3";
ROUTE36.toField = "set_translation";
children[8] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "_2";
ROUTE37.fromField = "position_changed";
ROUTE37.toNode = "_3";
ROUTE37.toField = "set_position";
children[9] = ROUTE37;

}
