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
meta3.content = "Fri, 18 Sep 2015 01:10:27 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.2, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 02 Jan 2016 06:07:53 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Billboard 1 1 1";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "Billboard";
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
MetadataDouble14.value = new MFDouble(new double[0,0,10]);
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
MetadataDouble16.value = new MFDouble(new double[0,0,0]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Background Background17 = createNode("Background");
Background17.skyAngle = new MFFloat(new float[0.8,1.3,1.4,1.5708]);
Background17.skyColor = new MFColor(new float[0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]);
Background17.groundAngle = new MFFloat(new float[0.6,1.2,1.3,1.5708]);
Background17.groundColor = new MFColor(new float[0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]);
children[1] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.description = "Front";
children[2] = Viewpoint18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.description = "z pi/2";
Viewpoint19.orientation = new SFRotation(new float[0,0,1,1.5708]);
children[3] = Viewpoint19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.description = "y pi/2";
Viewpoint20.position = new SFVec3f(new float[10,0,0]);
Viewpoint20.orientation = new SFRotation(new float[0,1,0,1.5708]);
children[4] = Viewpoint20;

ProximitySensor ProximitySensor21 = createNode("ProximitySensor");
ProximitySensor21.DEF = "Proxy";
ProximitySensor21.size = new SFVec3f(new float[1000,1000,1000]);
children[5] = ProximitySensor21;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "HUD";
Transform22.translation = new SFVec3f(new float[0,0,10]);
Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-0.3,-1]);
Transform23.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Transform Transform24 = createNode("Transform");
TouchSensor TouchSensor25 = createNode("TouchSensor");
TouchSensor25.DEF = "TouchX";
TouchSensor25.description = "1 0 0";
Transform24.children = new MFNode();

Transform24.children[0] = TouchSensor25;

Transform Transform26 = createNode("Transform");
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.DEF = "Rococo12";
Material29.ambientIntensity = 0.226102;
Material29.diffuseColor = new SFColor(new float[0.904409,0.146366,0.208768]);
Material29.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material29.shininess = 0.078125;
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Box Box30 = createNode("Box");
Shape27.geometry = Box30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Transform24.children[1] = Transform26;

Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Transform Transform31 = createNode("Transform");
Transform31.translation = new SFVec3f(new float[3,0,0]);
TouchSensor TouchSensor32 = createNode("TouchSensor");
TouchSensor32.DEF = "TouchY";
TouchSensor32.description = "0 1 0";
Transform31.children = new MFNode();

Transform31.children[0] = TouchSensor32;

Transform Transform33 = createNode("Transform");
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.DEF = "Rococo28";
Material36.ambientIntensity = 0.226102;
Material36.diffuseColor = new SFColor(new float[0.279645,0.904409,0.511589]);
Material36.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material36.shininess = 0.078125;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

Box Box37 = createNode("Box");
Shape34.geometry = Box37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform31.children[1] = Transform33;

Transform23.children[1] = Transform31;

Transform Transform38 = createNode("Transform");
Transform38.translation = new SFVec3f(new float[6,0,0]);
TouchSensor TouchSensor39 = createNode("TouchSensor");
TouchSensor39.DEF = "TouchXYZ";
TouchSensor39.description = "1 1 1";
Transform38.children = new MFNode();

Transform38.children[0] = TouchSensor39;

Transform Transform40 = createNode("Transform");
Shape Shape41 = createNode("Shape");
Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.DEF = "Rococo24";
Material43.ambientIntensity = 0.226102;
Material43.diffuseColor = new SFColor(new float[0.28636,0.554905,0.904409]);
Material43.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material43.shininess = 0.078125;
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

Box Box44 = createNode("Box");
Shape41.geometry = Box44;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

Transform38.children[1] = Transform40;

Transform23.children[2] = Transform38;

Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[9,0,0]);
TouchSensor TouchSensor46 = createNode("TouchSensor");
TouchSensor46.DEF = "TouchZ";
TouchSensor46.description = "0 0 1";
Transform45.children = new MFNode();

Transform45.children[0] = TouchSensor46;

Transform Transform47 = createNode("Transform");
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.DEF = "Rococo1";
Material50.ambientIntensity = 0.187004;
Material50.diffuseColor = new SFColor(new float[0.636212,0.748016,0.300948]);
Material50.specularColor = new SFColor(new float[0.412121,0.412121,0.412121]);
Material50.shininess = 0.8;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Box Box51 = createNode("Box");
Shape48.geometry = Box51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform45.children[1] = Transform47;

Transform23.children[3] = Transform45;

Transform Transform52 = createNode("Transform");
Transform52.translation = new SFVec3f(new float[12,0,-5.68434e-14]);
TouchSensor TouchSensor53 = createNode("TouchSensor");
TouchSensor53.DEF = "TouchZ_1";
TouchSensor53.description = "0 0 0";
Transform52.children = new MFNode();

Transform52.children[0] = TouchSensor53;

Transform Transform54 = createNode("Transform");
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.DEF = "Rococo35";
Material57.ambientIntensity = 0.0499912;
Material57.diffuseColor = new SFColor(new float[0.195355,0.197924,0.199965]);
Material57.specularColor = new SFColor(new float[0.430303,0.430303,0.430303]);
Material57.shininess = 0.406061;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

Box Box58 = createNode("Box");
Shape55.geometry = Box58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform52.children[1] = Transform54;

Transform23.children[4] = Transform52;

Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

children[6] = Transform22;

Transform Transform59 = createNode("Transform");
Billboard Billboard60 = createNode("Billboard");
Billboard60.DEF = "Billboard";
Billboard60.axisOfRotation = new SFVec3f(new float[1,1,1]);
Transform Transform61 = createNode("Transform");
Transform61.DEF = "XForm";
Transform Transform62 = createNode("Transform");
Transform62.rotation = new SFRotation(new float[1,0,0,1.5708]);
Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

Cone Cone66 = createNode("Cone");
Shape63.geometry = Cone66;

Transform62.child = new undefined();

Transform62.child[0] = Shape63;

Transform61.children = new MFNode();

Transform61.children[0] = Transform62;

Shape Shape67 = createNode("Shape");
Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

IndexedLineSet IndexedLineSet70 = createNode("IndexedLineSet");
IndexedLineSet70.colorIndex = new MFInt32(new int[0,1,-1,2,3,-1]);
IndexedLineSet70.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1]);
Color Color71 = createNode("Color");
Color71.color = new MFColor(new float[0,0,0,1,1,1,0,0,0,1,1,1]);
IndexedLineSet70.color = Color71;

Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.DEF = "Local";
Coordinate72.point = new MFVec3f(new float[-2,0,0,2,0,0,0,-2,0,0,2,0]);
IndexedLineSet70.coord = Coordinate72;

Shape67.geometry = IndexedLineSet70;

Transform61.child[1] = Shape67;

Transform Transform73 = createNode("Transform");
Transform73.translation = new SFVec3f(new float[2,0,0]);
Transform73.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Billboard Billboard74 = createNode("Billboard");
Billboard74.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape75 = createNode("Shape");
Appearance Appearance76 = createNode("Appearance");
Material Material77 = createNode("Material");
Material77.diffuseColor = new SFColor(new float[0,0,0]);
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

Text Text78 = createNode("Text");
Text78.string = new MFString(new java.lang.String["x"]);
Shape75.geometry = Text78;

Billboard74.children = new MFNode();

Billboard74.children[0] = Shape75;

Transform73.children = new MFNode();

Transform73.children[0] = Billboard74;

Transform61.children[2] = Transform73;

Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[0,2,0]);
Transform79.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Billboard Billboard80 = createNode("Billboard");
Billboard80.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.diffuseColor = new SFColor(new float[0,0,0]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

Text Text84 = createNode("Text");
Text84.string = new MFString(new java.lang.String["y"]);
Shape81.geometry = Text84;

Billboard80.children = new MFNode();

Billboard80.children[0] = Shape81;

Transform79.children = new MFNode();

Transform79.children[0] = Billboard80;

Transform61.children[3] = Transform79;

Billboard60.children = new MFNode();

Billboard60.children[0] = Transform61;

Shape Shape85 = createNode("Shape");
Shape85.DEF = "LocalAxisOfRotation1";
Appearance Appearance86 = createNode("Appearance");
LineProperties LineProperties87 = createNode("LineProperties");
LineProperties87.linetype = 3;
Appearance86.lineProperties = LineProperties87;

Material Material88 = createNode("Material");
Appearance86.material = Material88;

Shape85.appearance = Appearance86;

IndexedLineSet IndexedLineSet89 = createNode("IndexedLineSet");
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.DEF = "LocalAxisOfRotation";
Coordinate90.point = new MFVec3f(new float[-3,-3,-3,3,3,3]);
IndexedLineSet89.coord = Coordinate90;

Shape85.geometry = IndexedLineSet89;

Billboard60.children[1] = Shape85;

Transform59.children = new MFNode();

Transform59.children[0] = Billboard60;

children[7] = Transform59;

Transform Transform91 = createNode("Transform");
SphereSensor SphereSensor92 = createNode("SphereSensor");
SphereSensor92.DEF = "AxisSensor";
SphereSensor92.offset = new SFRotation(new float[-0.707107,0.707107,0,0.955317]);
Transform91.children = new MFNode();

Transform91.children[0] = SphereSensor92;

Transform Transform93 = createNode("Transform");
Transform93.DEF = "AxisOfRotation";
Transform93.rotation = new SFRotation(new float[-0.707107,0.707107,0,0.955317]);
Transform Transform94 = createNode("Transform");
Transform94.translation = new SFVec3f(new float[0,0,2]);
Transform94.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform94.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.diffuseColor = new SFColor(new float[0,1,0]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

Cone Cone98 = createNode("Cone");
Shape95.geometry = Cone98;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

Transform93.children = new MFNode();

Transform93.children[0] = Transform94;

Transform Transform99 = createNode("Transform");
Transform99.translation = new SFVec3f(new float[0,0,-2]);
Transform99.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape100 = createNode("Shape");
Appearance Appearance101 = createNode("Appearance");
Material Material102 = createNode("Material");
Material102.diffuseColor = new SFColor(new float[1,0,0]);
Appearance101.material = Material102;

Shape100.appearance = Appearance101;

Sphere Sphere103 = createNode("Sphere");
Shape100.geometry = Sphere103;

Transform99.child = new undefined();

Transform99.child[0] = Shape100;

Transform93.children[1] = Transform99;

Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

IndexedLineSet IndexedLineSet107 = createNode("IndexedLineSet");
IndexedLineSet107.colorPerVertex = False;
IndexedLineSet107.colorIndex = new MFInt32(new int[0,1]);
IndexedLineSet107.coordIndex = new MFInt32(new int[0,1,-1,1,2,-1]);
Color Color108 = createNode("Color");
Color108.color = new MFColor(new float[1,0,0,0,1,0]);
IndexedLineSet107.color = Color108;

Coordinate Coordinate109 = createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0,0,-2,0,0,0,0,0,2]);
IndexedLineSet107.coord = Coordinate109;

Shape104.geometry = IndexedLineSet107;

Transform93.child[2] = Shape104;

Transform91.children[1] = Transform93;

children[8] = Transform91;

Transform Transform110 = createNode("Transform");
Transform110.DEF = "ZAxis";
Shape Shape111 = createNode("Shape");
Appearance Appearance112 = createNode("Appearance");
Material Material113 = createNode("Material");
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

IndexedLineSet IndexedLineSet114 = createNode("IndexedLineSet");
IndexedLineSet114.colorPerVertex = False;
IndexedLineSet114.colorIndex = new MFInt32(new int[0,1]);
IndexedLineSet114.coordIndex = new MFInt32(new int[0,1,-1,1,2,-1]);
Color Color115 = createNode("Color");
Color115.color = new MFColor(new float[0,0,0,0,0,1]);
IndexedLineSet114.color = Color115;

Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0,0,-2,0,0,0,0,0,2]);
IndexedLineSet114.coord = Coordinate116;

Shape111.geometry = IndexedLineSet114;

Transform110.child = new undefined();

Transform110.child[0] = Shape111;

Transform Transform117 = createNode("Transform");
Transform117.translation = new SFVec3f(new float[0,0,2]);
Transform117.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Billboard Billboard118 = createNode("Billboard");
Billboard118.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape119 = createNode("Shape");
Appearance Appearance120 = createNode("Appearance");
Material Material121 = createNode("Material");
Material121.diffuseColor = new SFColor(new float[0,0,0]);
Appearance120.material = Material121;

Shape119.appearance = Appearance120;

Text Text122 = createNode("Text");
Text122.string = new MFString(new java.lang.String[" z"]);
Shape119.geometry = Text122;

Billboard118.children = new MFNode();

Billboard118.children[0] = Shape119;

Transform117.children = new MFNode();

Transform117.children[0] = Billboard118;

Transform110.children[1] = Transform117;

Transform Transform123 = createNode("Transform");
Transform123.translation = new SFVec3f(new float[0,0,2]);
Transform123.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform123.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
Material Material126 = createNode("Material");
Material126.diffuseColor = new SFColor(new float[0,0,1]);
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

Cone Cone127 = createNode("Cone");
Shape124.geometry = Cone127;

Transform123.child = new undefined();

Transform123.child[0] = Shape124;

Transform110.children[2] = Transform123;

children[9] = Transform110;

Transform Transform128 = createNode("Transform");
Transform128.DEF = "Normal";
Transform128.rotation = new SFRotation(new float[0.707107,0.707107,0,1.5708]);
Shape Shape129 = createNode("Shape");
Appearance Appearance130 = createNode("Appearance");
Material Material131 = createNode("Material");
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

IndexedLineSet IndexedLineSet132 = createNode("IndexedLineSet");
IndexedLineSet132.colorPerVertex = False;
IndexedLineSet132.colorIndex = new MFInt32(new int[0,1]);
IndexedLineSet132.coordIndex = new MFInt32(new int[0,1,-1]);
Color Color133 = createNode("Color");
Color133.color = new MFColor(new float[1,1,0,1,1,0]);
IndexedLineSet132.color = Color133;

Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[0,0,0,0,0,2]);
IndexedLineSet132.coord = Coordinate134;

Shape129.geometry = IndexedLineSet132;

Transform128.child = new undefined();

Transform128.child[0] = Shape129;

Transform Transform135 = createNode("Transform");
Transform135.translation = new SFVec3f(new float[0,0,2]);
Transform135.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform135.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Material138.diffuseColor = new SFColor(new float[1,1,0]);
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

Cone Cone139 = createNode("Cone");
Shape136.geometry = Cone139;

Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Transform128.children[1] = Transform135;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[0,0,2]);
Transform140.scale = new SFVec3f(new float[0.3,0.3,0.3]);
Billboard Billboard141 = createNode("Billboard");
Billboard141.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape142 = createNode("Shape");
Appearance Appearance143 = createNode("Appearance");
Material Material144 = createNode("Material");
Material144.diffuseColor = new SFColor(new float[0,0,0]);
Appearance143.material = Material144;

Shape142.appearance = Appearance143;

Text Text145 = createNode("Text");
Text145.string = new MFString(new java.lang.String[" normal"]);
Shape142.geometry = Text145;

Billboard141.children = new MFNode();

Billboard141.children[0] = Shape142;

Transform140.children = new MFNode();

Transform140.children[0] = Billboard141;

Transform128.children[2] = Transform140;

children[10] = Transform128;

Transform Transform146 = createNode("Transform");
Transform146.DEF = "Rotation";
Transform146.rotation = new SFRotation(new float[-0.357407,-0.862856,-0.357407,1.71777]);
Shape Shape147 = createNode("Shape");
Appearance Appearance148 = createNode("Appearance");
Material Material149 = createNode("Material");
Material149.emissiveColor = new SFColor(new float[1,0,0]);
Appearance148.material = Material149;

Shape147.appearance = Appearance148;

Arc2D Arc2D150 = createNode("Arc2D");
Arc2D150.DEF = "Arc";
Arc2D150.endAngle = 0.955317;
Shape147.geometry = Arc2D150;

Transform146.child = new undefined();

Transform146.child[0] = Shape147;

children[11] = Transform146;

Script Script151 = createNode("Script");
Script151.DEF = "AxisScript";
Script151.directOutput = True;
field field152 = createNode("field");
field152.name = "set_x";
field152.accessType = "inputOnly";
field152.type = "SFTime";
Script151.field = new MFNode();

Script151.field[0] = field152;

field field153 = createNode("field");
field153.name = "set_y";
field153.accessType = "inputOnly";
field153.type = "SFTime";
Script151.field[1] = field153;

field field154 = createNode("field");
field154.name = "set_z";
field154.accessType = "inputOnly";
field154.type = "SFTime";
Script151.field[2] = field154;

field field155 = createNode("field");
field155.name = "set_xyz";
field155.accessType = "inputOnly";
field155.type = "SFTime";
Script151.field[3] = field155;

field field156 = createNode("field");
field156.name = "set_0";
field156.accessType = "inputOnly";
field156.type = "SFTime";
Script151.field[4] = field156;

field field157 = createNode("field");
field157.name = "set_rotation";
field157.accessType = "inputOnly";
field157.type = "SFRotation";
Script151.field[5] = field157;

field field158 = createNode("field");
field158.name = "set_position";
field158.accessType = "inputOnly";
field158.type = "SFVec3f";
Script151.field[6] = field158;

field field159 = createNode("field");
field159.name = "billboard";
field159.accessType = "initializeOnly";
field159.type = "SFNode";
Billboard Billboard160 = createNode("Billboard");
Billboard160.USE = "Billboard";
field159.children = new MFNode();

field159.children[0] = Billboard160;

Script151.field[7] = field159;

field field161 = createNode("field");
field161.name = "xform";
field161.accessType = "initializeOnly";
field161.type = "SFNode";
Transform Transform162 = createNode("Transform");
Transform162.USE = "XForm";
field161.children = new MFNode();

field161.children[0] = Transform162;

Script151.field[8] = field161;

field field163 = createNode("field");
field163.name = "absolute";
field163.accessType = "initializeOnly";
field163.type = "SFNode";
Transform Transform164 = createNode("Transform");
Transform164.USE = "AxisOfRotation";
field163.children = new MFNode();

field163.children[0] = Transform164;

Script151.field[9] = field163;

field field165 = createNode("field");
field165.name = "local";
field165.accessType = "initializeOnly";
field165.type = "SFNode";
Coordinate Coordinate166 = createNode("Coordinate");
Coordinate166.USE = "LocalAxisOfRotation";
field165.children = new MFNode();

field165.children[0] = Coordinate166;

Script151.field[10] = field165;

field field167 = createNode("field");
field167.name = "sensor";
field167.accessType = "initializeOnly";
field167.type = "SFNode";
SphereSensor SphereSensor168 = createNode("SphereSensor");
SphereSensor168.USE = "AxisSensor";
field167.children = new MFNode();

field167.children[0] = SphereSensor168;

Script151.field[11] = field167;

field field169 = createNode("field");
field169.name = "normal";
field169.accessType = "initializeOnly";
field169.type = "SFNode";
Transform Transform170 = createNode("Transform");
Transform170.USE = "Normal";
field169.children = new MFNode();

field169.children[0] = Transform170;

Script151.field[12] = field169;

field field171 = createNode("field");
field171.name = "rotation";
field171.accessType = "initializeOnly";
field171.type = "SFNode";
Transform Transform172 = createNode("Transform");
Transform172.USE = "Rotation";
field171.children = new MFNode();

field171.children[0] = Transform172;

Script151.field[13] = field171;

field field173 = createNode("field");
field173.name = "arc";
field173.accessType = "initializeOnly";
field173.type = "SFNode";
Arc2D Arc2D174 = createNode("Arc2D");
Arc2D174.USE = "Arc";
field173.children = new MFNode();

field173.children[0] = Arc2D174;

Script151.field[14] = field173;

field field175 = createNode("field");
field175.name = "proxy";
field175.accessType = "initializeOnly";
field175.type = "SFNode";
ProximitySensor ProximitySensor176 = createNode("ProximitySensor");
ProximitySensor176.USE = "Proxy";
field175.children = new MFNode();

field175.children[0] = ProximitySensor176;

Script151.field[15] = field175;


Script151.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	set_xyz ();\n"+
"}\n"+
"\n"+
"function set_x ()\n"+
"{\n"+
"	set_axisOfRotation (new SFVec3f (1, 0, 0));\n"+
"}\n"+
"\n"+
"function set_y ()\n"+
"{\n"+
"	set_axisOfRotation (new SFVec3f (0, 1, 0));\n"+
"}\n"+
"\n"+
"function set_z ()\n"+
"{\n"+
"	set_axisOfRotation (new SFVec3f (0, 0, 1) .normalize () .multiply (2));\n"+
"}\n"+
"\n"+
"function set_xyz ()\n"+
"{\n"+
"	set_axisOfRotation (new SFVec3f (1, 1, 1));\n"+
"}\n"+
"\n"+
"function set_0 ()\n"+
"{\n"+
"	set_axisOfRotation (new SFVec3f ());\n"+
"}\n"+
"\n"+
"function set_rotation (value)\n"+
"{\n"+
"	set_axisOfRotation (value .multVec (new SFVec3f (0, 0, 1)));\n"+
"}\n"+
"\n"+
"function set_position ()\n"+
"{\n"+
"	set_axisOfRotation (billboard .axisOfRotation);\n"+
"}\n"+
"\n"+
"var xAxis = new SFVec3f (1, 0, 0);\n"+
"var zAxis = new SFVec3f (0, 0, 1);\n"+
"\n"+
"function set_axisOfRotation (axisOfRotation)\n"+
"{\n"+
"	billboard .axisOfRotation = axisOfRotation;\n"+
"	\n"+
"	// Normal of plane between axisOfRotation and billbordToViewer\n"+
"\n"+
"	var vector = axisOfRotation .cross (proxy .position_changed);\n"+
"	normal .rotation = new SFRotation (zAxis, vector);\n"+
"\n"+
"	// axisOfRotation\n"+
"\n"+
"	var axisRotation = new SFRotation (zAxis, axisOfRotation);\n"+
"	\n"+
"	local .point       = new MFVec3f (axisOfRotation .multiply (3) .negate (), axisOfRotation .multiply (3));\n"+
"	absolute .rotation = axisRotation;\n"+
"	sensor .offset     = axisRotation;\n"+
"\n"+
"	// Angle between zAxis and axisOfRotation\n"+
"	var angle = Math .acos (zAxis .dot (axisOfRotation .normalize ()));\n"+
"	var rot   = new SFRotation (zAxis, zAxis .cross (axisOfRotation));\n"+
"	rotation .rotation = rot .multiply (new SFRotation (rot .multVec (xAxis), zAxis));\n"+
"\n"+
"	arc .endAngle = angle;\n"+
"\n"+
"	print ('axisOfRotation: ', local .point);\n"+
"	print ('axisOfRotation: ', axisOfRotation);\n"+
"	print ('normal:         ', vector);\n"+
"	print ('angle:          ', angle);\n"+
"	\n"+
"\n"+
"	var n = vector .normalize ();\n"+
"	var a = axisOfRotation .cross (zAxis .cross (axisOfRotation)) .normalize ();\n"+
"			\n"+
"	var angle = n .dot (a);\n"+
"	print ('angle n         ', angle);\n"+
"\n"+
"}`)
children[12] = Script151;

ROUTE ROUTE177 = createNode("ROUTE");
ROUTE177.fromNode = "Proxy";
ROUTE177.fromField = "position_changed";
ROUTE177.toNode = "HUD";
ROUTE177.toField = "set_translation";
children[13] = ROUTE177;

ROUTE ROUTE178 = createNode("ROUTE");
ROUTE178.fromNode = "Proxy";
ROUTE178.fromField = "orientation_changed";
ROUTE178.toNode = "HUD";
ROUTE178.toField = "set_rotation";
children[14] = ROUTE178;

ROUTE ROUTE179 = createNode("ROUTE");
ROUTE179.fromNode = "Proxy";
ROUTE179.fromField = "position_changed";
ROUTE179.toNode = "AxisScript";
ROUTE179.toField = "set_position";
children[15] = ROUTE179;

ROUTE ROUTE180 = createNode("ROUTE");
ROUTE180.fromNode = "TouchX";
ROUTE180.fromField = "touchTime";
ROUTE180.toNode = "AxisScript";
ROUTE180.toField = "set_x";
children[16] = ROUTE180;

ROUTE ROUTE181 = createNode("ROUTE");
ROUTE181.fromNode = "TouchY";
ROUTE181.fromField = "touchTime";
ROUTE181.toNode = "AxisScript";
ROUTE181.toField = "set_y";
children[17] = ROUTE181;

ROUTE ROUTE182 = createNode("ROUTE");
ROUTE182.fromNode = "TouchZ";
ROUTE182.fromField = "touchTime";
ROUTE182.toNode = "AxisScript";
ROUTE182.toField = "set_z";
children[18] = ROUTE182;

ROUTE ROUTE183 = createNode("ROUTE");
ROUTE183.fromNode = "TouchXYZ";
ROUTE183.fromField = "touchTime";
ROUTE183.toNode = "AxisScript";
ROUTE183.toField = "set_xyz";
children[19] = ROUTE183;

ROUTE ROUTE184 = createNode("ROUTE");
ROUTE184.fromNode = "AxisSensor";
ROUTE184.fromField = "rotation_changed";
ROUTE184.toNode = "AxisScript";
ROUTE184.toField = "set_rotation";
children[20] = ROUTE184;

ROUTE ROUTE185 = createNode("ROUTE");
ROUTE185.fromNode = "TouchZ_1";
ROUTE185.fromField = "touchTime";
ROUTE185.toNode = "AxisScript";
ROUTE185.toField = "set_0";
children[21] = ROUTE185;

}
