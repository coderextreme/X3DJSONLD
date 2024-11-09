#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.2";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Wed, 16 Jan 2019 14:37:37 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.3.10, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSurfaceInterpolator.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 19 Jan 2019 23:43:54 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "Rectangle2D";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Page";
MetadataSet11.DEF = "Page";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger12 = createNode("MetadataInteger");
MetadataInteger12.name = "activeView";
MetadataInteger12.DEF = "activeView";
MetadataInteger12.reference = "http://titania.create3000.de";
MetadataInteger12.value = new MFInt32(new int[1]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataInteger12;

MetadataInteger MetadataInteger13 = createNode("MetadataInteger");
MetadataInteger13.name = "multiView";
MetadataInteger13.DEF = "multiView";
MetadataInteger13.reference = "http://titania.create3000.de";
MetadataInteger13.value = new MFInt32(new int[0]);
MetadataSet11.value[1] = MetadataInteger13;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "Selection";
MetadataSet14.DEF = "Selection";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean15 = createNode("MetadataBoolean");
MetadataBoolean15.name = "selectGeometry";
MetadataBoolean15.DEF = "selectGeometry";
MetadataBoolean15.reference = "http://titania.create3000.de";
MetadataBoolean15.value = new MFBool(new boolean[False]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataBoolean15;

MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "nodes";
MetadataSet16.DEF = "nodes";
MetadataSet16.reference = "http://titania.create3000.de";
MetadataSet14.value[1] = MetadataSet16;

MetadataSet10.value[1] = MetadataSet14;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,0,2.63585]);
children[1] = Viewpoint17;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "NurbsRectangle2D";
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Appearance20.material = Material21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["../images/lena.jpg"]);
ImageTexture22.repeatS = False;
ImageTexture22.repeatT = False;
Appearance20.texture = ImageTexture22;

Shape19.appearance = Appearance20;

NurbsPatchSurface NurbsPatchSurface23 = createNode("NurbsPatchSurface");
NurbsPatchSurface23.solid = False;
NurbsPatchSurface23.uTessellation = 20;
NurbsPatchSurface23.vTessellation = 20;
NurbsPatchSurface23.uOrder = 2;
NurbsPatchSurface23.vOrder = 2;
NurbsPatchSurface23.uDimension = 3;
NurbsPatchSurface23.vDimension = 3;
Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.DEF = "_1";
Coordinate24.point = new MFVec3f(new float[-1,-1,0,0,-1,0,1,-1,0,-1,0,0,0,0,1,1,0,0,-1,1,0,0,1,0,1,1,0]);
NurbsPatchSurface23.controlPoint = Coordinate24;

Shape19.geometry = NurbsPatchSurface23;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

TouchSensor TouchSensor25 = createNode("TouchSensor");
TouchSensor25.DEF = "_2";
Transform18.children[1] = TouchSensor25;

children[2] = Transform18;

NurbsSurfaceInterpolator NurbsSurfaceInterpolator26 = createNode("NurbsSurfaceInterpolator");
NurbsSurfaceInterpolator26.DEF = "_3";
NurbsSurfaceInterpolator26.uOrder = 2;
NurbsSurfaceInterpolator26.vOrder = 2;
NurbsSurfaceInterpolator26.uDimension = 3;
NurbsSurfaceInterpolator26.vDimension = 3;
Coordinate Coordinate27 = createNode("Coordinate");
Coordinate27.USE = "_1";
NurbsSurfaceInterpolator26.controlPoint = Coordinate27;

children[3] = NurbsSurfaceInterpolator26;

Script Script28 = createNode("Script");
Script28.DEF = "NewScript";
field field29 = createNode("field");
field29.name = "set_normal";
field29.accessType = "inputOnly";
field29.type = "SFVec3f";
Script28.field = new MFNode();

Script28.field[0] = field29;

field field30 = createNode("field");
field30.name = "rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
Script28.field[1] = field30;


Script28.setSourceCode(`ecmascript:\n"+
"\n"+
"var zAxis = new SFVec3f (0, 0, 1);\n"+
"\n"+
"function set_normal (value, time)\n"+
"{\n"+
"	rotation_changed = new SFRotation (zAxis, value);\n"+
"}`)
children[4] = Script28;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "Disk2D";
Transform31.translation = new SFVec3f(new float[-0.937116,0.209022,0.0497365]);
Transform31.rotation = new SFRotation(new float[-0.0792636934389926,-0.996853683798385,0,0.670687123541612]);
Transform31.scaleOrientation = new SFRotation(new float[-0.999999999999994,0,0,0.122489331563433]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Disk2D Disk2D35 = createNode("Disk2D");
Disk2D35.innerRadius = 0.13;
Disk2D35.outerRadius = 0.187;
Shape32.geometry = Disk2D35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

children[5] = Transform31;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "_2";
ROUTE36.fromField = "hitTexCoord_changed";
ROUTE36.toNode = "_3";
ROUTE36.toField = "set_fraction";
children[6] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "NewScript";
ROUTE37.fromField = "rotation_changed";
ROUTE37.toNode = "Disk2D";
ROUTE37.toField = "set_rotation";
children[7] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "_3";
ROUTE38.fromField = "normal_changed";
ROUTE38.toNode = "NewScript";
ROUTE38.toField = "set_normal";
children[8] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "_3";
ROUTE39.fromField = "position_changed";
ROUTE39.toNode = "Disk2D";
ROUTE39.toField = "set_translation";
children[9] = ROUTE39;

}
