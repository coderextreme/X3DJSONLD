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
meta3.content = "Fri, 18 Sep 2015 12:58:13 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 14 Nov 2015 16:00:30 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "ProximitySensor";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "ProximitySensor";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "NavigationInfo";
MetadataSet11.DEF = "NavigationInfo";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataString MetadataString12 = createNode("MetadataString");
MetadataString12.name = "type";
MetadataString12.DEF = "type";
MetadataString12.reference = "http://titania.create3000.de";
MetadataString12.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataString12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Viewpoint";
MetadataSet13.DEF = "Viewpoint";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "position";
MetadataDouble14.DEF = "position";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[0,0,5]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0,0,1,0]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[0,0,1]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
NavigationInfo17.transitionType = new MFString(new java.lang.String["ANIMATE"]);
NavigationInfo17.transitionTime = 10;
children[1] = NavigationInfo17;

Background Background18 = createNode("Background");
Background18.skyColor = new MFColor(new float[0.5,0,0]);
children[2] = Background18;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "Test";
Transform19.translation = new SFVec3f(new float[10,10,10]);
Transform19.rotation = new SFRotation(new float[-0.981245,-0.0143457,-0.192232,5.67512]);
Transform19.scale = new SFVec3f(new float[20,10,5]);
Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "Front";
Viewpoint20.description = "Front";
Viewpoint20.position = new SFVec3f(new float[0,0,5]);
Viewpoint20.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint20.retainUserOffsets = True;
Transform19.children = new MFNode();

Transform19.children[0] = Viewpoint20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.DEF = "Right";
Viewpoint21.description = "Right";
Viewpoint21.position = new SFVec3f(new float[4,0,1]);
Viewpoint21.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint21.centerOfRotation = new SFVec3f(new float[0,0,1]);
Transform19.children[1] = Viewpoint21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.DEF = "Side";
Viewpoint22.description = "Side";
Viewpoint22.position = new SFVec3f(new float[4,0,5]);
Viewpoint22.orientation = new SFRotation(new float[0,1,0,0.785398]);
Viewpoint22.centerOfRotation = new SFVec3f(new float[0,0,1]);
Transform19.children[2] = Viewpoint22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.DEF = "Back";
Viewpoint23.description = "Back";
Viewpoint23.position = new SFVec3f(new float[0,0,-3]);
Viewpoint23.orientation = new SFRotation(new float[0,1,0,3.14159]);
Viewpoint23.centerOfRotation = new SFVec3f(new float[0,0,1]);
Transform19.children[3] = Viewpoint23;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.DEF = "Top";
Viewpoint24.description = "Top";
Viewpoint24.position = new SFVec3f(new float[0,4,1]);
Viewpoint24.orientation = new SFRotation(new float[-1,0,0,1.5708]);
Viewpoint24.centerOfRotation = new SFVec3f(new float[0,0,1]);
Transform19.children[4] = Viewpoint24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.DEF = "Center";
Viewpoint25.description = "Center";
Viewpoint25.position = new SFVec3f(new float[2,0,5]);
Viewpoint25.centerOfRotation = new SFVec3f(new float[0,0,1]);
Transform19.children[5] = Viewpoint25;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.DEF = "Jump";
Viewpoint26.description = "Jump";
Viewpoint26.jump = False;
Transform19.children[6] = Viewpoint26;

Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[0,0,1]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "Cube";
IndexedFaceSet31.solid = False;
IndexedFaceSet31.colorPerVertex = False;
IndexedFaceSet31.colorIndex = new MFInt32(new int[0,1,2,3,4,5]);
IndexedFaceSet31.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
Color Color32 = createNode("Color");
Color32.color = new MFColor(new float[1,0,0,0,1,0,0,0,1,1,1,0,0,1,1,1,0,1]);
IndexedFaceSet31.color = Color32;

TextureCoordinate TextureCoordinate33 = createNode("TextureCoordinate");
TextureCoordinate33.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet31.texCoord = TextureCoordinate33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1]);
IndexedFaceSet31.coord = Coordinate34;

Shape28.geometry = IndexedFaceSet31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Material37.diffuseColor = new SFColor(new float[0.5,0,1]);
Material37.transparency = 0.5;
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

Box Box38 = createNode("Box");
Box38.size = new SFVec3f(new float[20,20,20]);
Box38.solid = False;
Shape35.geometry = Box38;

Transform27.child[1] = Shape35;

ProximitySensor ProximitySensor39 = createNode("ProximitySensor");
ProximitySensor39.DEF = "Sensor";
ProximitySensor39.size = new SFVec3f(new float[20,20,20]);
Transform27.children[2] = ProximitySensor39;

Transform19.children[7] = Transform27;

children[3] = Transform19;

Script Script40 = createNode("Script");
Script40.DEF = "Debug";
field field41 = createNode("field");
field41.name = "set_position";
field41.accessType = "inputOnly";
field41.type = "SFVec3f";
Script40.field = new MFNode();

Script40.field[0] = field41;

field field42 = createNode("field");
field42.name = "set_orientation";
field42.accessType = "inputOnly";
field42.type = "SFRotation";
Script40.field[1] = field42;

field field43 = createNode("field");
field43.name = "set_enterTime";
field43.accessType = "inputOnly";
field43.type = "SFTime";
Script40.field[2] = field43;

field field44 = createNode("field");
field44.name = "set_exitTime";
field44.accessType = "inputOnly";
field44.type = "SFTime";
Script40.field[3] = field44;

field field45 = createNode("field");
field45.name = "set_active";
field45.accessType = "inputOnly";
field45.type = "SFBool";
Script40.field[4] = field45;


Script40.setSourceCode(`javascript:\n"+
"function set_position (value, time)\n"+
"{\n"+
"	print ('position: ' + value);\n"+
"}\n"+
"\n"+
"function set_orientation (value, time)\n"+
"{\n"+
"	print ('orientation: ' + value);\n"+
"}\n"+
"\n"+
"function set_active (value, time)\n"+
"{\n"+
"	print ('isActive: ' + value);\n"+
"}\n"+
"\n"+
"function set_enterTime (value, time)\n"+
"{\n"+
"	print ('enterTime: ' + value);\n"+
"}\n"+
"\n"+
"function set_exitTime (value, time)\n"+
"{\n"+
"	print ('exitTime: ' + value);\n"+
"}`)
children[4] = Script40;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.DEF = "Outside";
Viewpoint46.description = "Outside";
Viewpoint46.position = new SFVec3f(new float[0,0,500]);
Viewpoint46.centerOfRotation = new SFVec3f(new float[0,0,1]);
children[5] = Viewpoint46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Sensor";
ROUTE47.fromField = "position_changed";
ROUTE47.toNode = "Debug";
ROUTE47.toField = "set_position";
children[6] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "Sensor";
ROUTE48.fromField = "orientation_changed";
ROUTE48.toNode = "Debug";
ROUTE48.toField = "set_orientation";
children[7] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Sensor";
ROUTE49.fromField = "enterTime";
ROUTE49.toNode = "Debug";
ROUTE49.toField = "set_enterTime";
children[8] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "Sensor";
ROUTE50.fromField = "exitTime";
ROUTE50.toNode = "Debug";
ROUTE50.toField = "set_exitTime";
children[9] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "Sensor";
ROUTE51.fromField = "isActive";
ROUTE51.toNode = "Debug";
ROUTE51.toField = "set_active";
children[10] = ROUTE51;

}
