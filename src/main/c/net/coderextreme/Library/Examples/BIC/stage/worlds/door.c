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
meta3.content = "Wed, 18 Mar 2015 02:58:01 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Wed, 18 Mar 2015 02:58:01 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group8.children = new MFNode();

Group8.children[0] = WorldInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "Schwelle";
Transform10.translation = new SFVec3f(new float[-30.5547,4.33352,-18.8377]);
Transform10.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform10.scale = new SFVec3f(new float[0.471668,0.00738103,0.0652795]);
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet14 = createNode("IndexedFaceSet");
IndexedFaceSet14.creaseAngle = 0.5;
IndexedFaceSet14.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1]);
Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[-1.00618,1,1,-1.00618,-1,1,0.996804,1,1,0.996804,-1,1,0.996804,1,-1,0.996804,-1,-1,-1.00618,1,-1,-1.00618,-1,-1]);
IndexedFaceSet14.coord = Coordinate15;

Shape11.geometry = IndexedFaceSet14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Group8.children[1] = Transform10;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "Rahmen";
Transform16.translation = new SFVec3f(new float[-30.5562,5.44625,-19.2761]);
Transform16.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform16.scale = new SFVec3f(new float[0.0342311,1.11498,0.0407675]);
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.ambientIntensity = 0;
Material19.diffuseColor = new SFColor(new float[0.117021,0.022394,0]);
Material19.specularColor = new SFColor(new float[0.117021,0.117021,0.117021]);
Material19.emissiveColor = new SFColor(new float[0.0744681,0.0744681,0.0744681]);
Material19.shininess = 0.574468;
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

IndexedFaceSet IndexedFaceSet20 = createNode("IndexedFaceSet");
IndexedFaceSet20.creaseAngle = 0.5;
IndexedFaceSet20.coordIndex = new MFInt32(new int[4,21,5,7,6,-1,6,7,1,20,0,-1,6,0,2,4,-1,8,18,9,10,11,-1,11,10,12,17,13,-1,14,8,11,13,-1,13,17,16,14,-1,17,12,15,16,-1,16,15,9,18,-1,0,20,19,2,-1,20,1,3,19,-1,19,3,5,21,-1,8,14,4,2,-1,18,8,2,19,-1,4,14,16,21,-1,16,18,19,21,-1]);
Coordinate Coordinate21 = createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,24.5052,1,1,24.5052,-1,1,26.5052,-1,1,26.5052,1,1,26.5052,-1,-1,26.5052,1,-1,24.5052,1,-1,24.5052,-1,-1,24.5237,0.941309,-1,26.5052,0.941308,-1,24.5237,0.941308,1,1,0.941023,1,-1,0.941023,1,1,0.941023,-1]);
IndexedFaceSet20.coord = Coordinate21;

Shape17.geometry = IndexedFaceSet20;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

Group8.children[2] = Transform16;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "Tuer_AnimSound";
Transform22.scale = new SFVec3f(new float[0.999993,0.999999,0.999993]);
Transform22.center = new SFVec3f(new float[-30.5078,5.43194,-18.8276]);
Group Group23 = createNode("Group");
Group Group24 = createNode("Group");
Group24.DEF = "open_door";
TimeSensor TimeSensor25 = createNode("TimeSensor");
TimeSensor25.DEF = "Time";
TimeSensor25.cycleInterval = 10;
TimeSensor25.stopTime = 1;
Group24.children = new MFNode();

Group24.children[0] = TimeSensor25;

Group23.children = new MFNode();

Group23.children[0] = Group24;

PositionInterpolator PositionInterpolator26 = createNode("PositionInterpolator");
PositionInterpolator26.DEF = "UnnamedTransformTranslationInterp";
PositionInterpolator26.key = new MFFloat(new float[0,0.04,0.96,1]);
PositionInterpolator26.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0]);
Group23.children[1] = PositionInterpolator26;

OrientationInterpolator OrientationInterpolator27 = createNode("OrientationInterpolator");
OrientationInterpolator27.DEF = "UnnamedTransformRotationInterp";
OrientationInterpolator27.key = new MFFloat(new float[0,0.04,0.16,0.86,0.96,1]);
OrientationInterpolator27.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,1.64979,0,1,0,1.64979,0,0,1,0,0,0,1,0]);
Group23.children[2] = OrientationInterpolator27;

OrientationInterpolator OrientationInterpolator28 = createNode("OrientationInterpolator");
OrientationInterpolator28.DEF = "UnnamedShapeRotationInterp";
OrientationInterpolator28.key = new MFFloat(new float[0,0.04,0.1,0.92,0.96,1]);
OrientationInterpolator28.keyValue = new MFRotation(new float[0.57735,-0.57735,0.57735,2.0944,0.522759,-0.522759,0.673385,1.95631,0.57735,-0.57735,0.57735,2.0944,0.57735,-0.57735,0.57735,2.0944,0.524697,-0.524697,0.670363,1.96048,0.57735,-0.57735,0.57735,2.0944]);
Group23.children[3] = OrientationInterpolator28;

PositionInterpolator PositionInterpolator29 = createNode("PositionInterpolator");
PositionInterpolator29.DEF = "UnnamedTransformCenterInterp";
PositionInterpolator29.key = new MFFloat(new float[0,0.04]);
PositionInterpolator29.keyValue = new MFVec3f(new float[-30.5078,5.43194,-18.8276,-30.5078,5.43504,-19.2393]);
Group23.children[4] = PositionInterpolator29;

OrientationInterpolator OrientationInterpolator30 = createNode("OrientationInterpolator");
OrientationInterpolator30.DEF = "UnnamedShapeScaleOrientationInterp";
OrientationInterpolator30.key = new MFFloat(new float[0,0.04]);
OrientationInterpolator30.keyValue = new MFRotation(new float[-1,0.0000055376,0.00000557843,0.00737289,-1,-0.00000641583,0.00000564175,0.00724239]);
Group23.children[5] = OrientationInterpolator30;

Transform22.children = new MFNode();

Transform22.children[0] = Group23;

TouchSensor TouchSensor31 = createNode("TouchSensor");
TouchSensor31.DEF = "Touch";
Transform22.children[1] = TouchSensor31;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "Tuerklinke";
Transform32.translation = new SFVec3f(new float[0.0519834,0,0]);
Transform Transform33 = createNode("Transform");
Transform33.DEF = "Klinke";
Transform33.translation = new SFVec3f(new float[-30.639,5.87077,-18.505]);
Transform33.rotation = new SFRotation(new float[0.57735,-0.57735,0.57735,2.0944]);
Transform33.scale = new SFVec3f(new float[0.897348,0.195632,0.122587]);
Transform33.center = new SFVec3f(new float[0.0744146,-0.506144,-0.0227777]);
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.ambientIntensity = 0;
Material36.diffuseColor = new SFColor(new float[0.691489,0.691489,0.691489]);
Material36.specularColor = new SFColor(new float[1,1,1]);
Material36.shininess = 0.159574;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.solid = False;
IndexedFaceSet37.creaseAngle = 3.14159;
IndexedFaceSet37.coordIndex = new MFInt32(new int[5,3,2,4,-1,12,11,10,13,-1,2,3,10,11,-1,9,8,1,0,-1,3,1,8,10,-1,0,2,11,9,-1,15,12,13,14,-1,6,5,4,7,-1,7,4,2,0,-1,3,5,6,1,-1,6,7,0,1,-1,14,13,10,8,-1,11,12,15,9,-1,15,14,8,9,-1]);
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0.101571,-0.012592,0.096272,0.101571,-0.012592,-0.103728,0.0784915,-0.111403,0.100376,0.0784916,-0.111403,-0.0996237,-0.0887925,-0.111405,0.100376,-0.0887926,-0.111405,-0.0996237,-0.093096,-0.0125155,-0.103728,-0.093096,-0.0125155,0.096272,0.100341,-0.904158,-0.100809,0.100341,-0.904158,0.0991913,0.0789908,-0.806507,-0.100809,0.0789907,-0.806507,0.0991913,-0.0882932,-0.806509,0.0991913,-0.0882933,-0.806509,-0.100809,-0.094326,-0.908792,-0.100809,-0.094326,-0.908792,0.0991913]);
IndexedFaceSet37.coord = Coordinate38;

Shape34.geometry = IndexedFaceSet37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[-30.574,5.29324,-18.5155]);
Transform39.rotation = new SFRotation(new float[1,1.78814e-7,-1.78814e-7,1.5708]);
Transform39.scale = new SFVec3f(new float[0.205889,0.471041,1.20274]);
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.DEF = "_1";
Material42.ambientIntensity = 0.28169;
Material42.diffuseColor = new SFColor(new float[0.755319,0.755319,0.755319]);
Material42.specularColor = new SFColor(new float[1,1,1]);
Material42.emissiveColor = new SFColor(new float[0.414894,0.414894,0.414894]);
Material42.shininess = 0.159574;
Appearance41.material = Material42;

ImageTexture ImageTexture43 = createNode("ImageTexture");
ImageTexture43.DEF = "_2";
ImageTexture43.url = new MFString(new java.lang.String["door2.png"]);
Appearance41.texture = ImageTexture43;

TextureTransform TextureTransform44 = createNode("TextureTransform");
TextureTransform44.rotation = 4.71239;
Appearance41.textureTransform = TextureTransform44;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.creaseAngle = 3.14159;
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate46 = createNode("TextureCoordinate");
TextureCoordinate46.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet45.texCoord = TextureCoordinate46;

Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.1,0.1]);
IndexedFaceSet45.coord = Coordinate47;

Shape40.geometry = IndexedFaceSet45;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Transform32.children[1] = Transform39;

Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[-30.574,5.29278,-18.5155]);
Transform48.rotation = new SFRotation(new float[1,1.78814e-7,-1.78814e-7,1.5708]);
Transform48.scale = new SFVec3f(new float[0.205889,0.471041,1.20731]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.USE = "_1";
Appearance50.material = Material51;

ImageTexture ImageTexture52 = createNode("ImageTexture");
ImageTexture52.USE = "_2";
Appearance50.texture = ImageTexture52;

TextureTransform TextureTransform53 = createNode("TextureTransform");
TextureTransform53.rotation = 1.5708;
Appearance50.textureTransform = TextureTransform53;

Shape49.appearance = Appearance50;

IndexedFaceSet IndexedFaceSet54 = createNode("IndexedFaceSet");
IndexedFaceSet54.creaseAngle = 3.14159;
IndexedFaceSet54.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate55 = createNode("TextureCoordinate");
TextureCoordinate55.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet54.texCoord = TextureCoordinate55;

Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0.1,0.1,0.1,0.1,-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,-0.1]);
IndexedFaceSet54.coord = Coordinate56;

Shape49.geometry = IndexedFaceSet54;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform32.children[2] = Transform48;

Transform22.children[2] = Transform32;

Transform Transform57 = createNode("Transform");
Transform57.DEF = "Tuer_brett";
Transform57.translation = new SFVec3f(new float[-29.5192,5.4317,-19.2538]);
Transform57.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform57.scale = new SFVec3f(new float[0.424754,1.08903,0.0165043]);
Transform57.center = new SFVec3f(new float[-1.0035,-0.00275892,-0.00000153935]);
Shape Shape58 = createNode("Shape");
Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.ambientIntensity = 1.2234;
Material60.emissiveColor = new SFColor(new float[0.404255,0.404255,0.404255]);
Material60.shininess = 0;
Appearance59.material = Material60;

ImageTexture ImageTexture61 = createNode("ImageTexture");
ImageTexture61.url = new MFString(new java.lang.String["door1.png"]);
Appearance59.texture = ImageTexture61;

TextureTransform TextureTransform62 = createNode("TextureTransform");
TextureTransform62.scale = new SFVec2f(new float[1.4,1]);
Appearance59.textureTransform = TextureTransform62;

Shape58.appearance = Appearance59;

Box Box63 = createNode("Box");
Shape58.geometry = Box63;

Transform57.child = new undefined();

Transform57.child[0] = Shape58;

Transform22.children[3] = Transform57;

Sound Sound64 = createNode("Sound");
Sound64.DEF = "Sound1";
Sound64.location = new SFVec3f(new float[-30.5078,5.43195,-18.8276]);
AudioClip AudioClip65 = createNode("AudioClip");
AudioClip65.DEF = "door_snd";
AudioClip65.description = "Start mit Trklick";
AudioClip65.url = new MFString(new java.lang.String["door_snd.aiff"]);
Sound64.source = AudioClip65;

Transform22.children[4] = Sound64;

Group8.children[3] = Transform22;

Viewpoint Viewpoint66 = createNode("Viewpoint");
Viewpoint66.DEF = "VP1";
Viewpoint66.description = "viewpoint1";
Viewpoint66.position = new SFVec3f(new float[-32.9477,5.71937,-19.2926]);
Viewpoint66.orientation = new SFRotation(new float[0.0810581,0.991517,0.101609,4.48266]);
Group8.children[4] = Viewpoint66;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "Touch";
ROUTE67.fromField = "touchTime";
ROUTE67.toNode = "Time";
ROUTE67.toField = "set_startTime";
children[1] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "Time";
ROUTE68.fromField = "fraction_changed";
ROUTE68.toNode = "UnnamedTransformTranslationInterp";
ROUTE68.toField = "set_fraction";
children[2] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "Time";
ROUTE69.fromField = "fraction_changed";
ROUTE69.toNode = "UnnamedTransformRotationInterp";
ROUTE69.toField = "set_fraction";
children[3] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "Time";
ROUTE70.fromField = "fraction_changed";
ROUTE70.toNode = "UnnamedShapeRotationInterp";
ROUTE70.toField = "set_fraction";
children[4] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "Time";
ROUTE71.fromField = "fraction_changed";
ROUTE71.toNode = "UnnamedTransformCenterInterp";
ROUTE71.toField = "set_fraction";
children[5] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "Time";
ROUTE72.fromField = "fraction_changed";
ROUTE72.toNode = "UnnamedShapeScaleOrientationInterp";
ROUTE72.toField = "set_fraction";
children[6] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "UnnamedShapeRotationInterp";
ROUTE73.fromField = "value_changed";
ROUTE73.toNode = "Klinke";
ROUTE73.toField = "set_rotation";
children[7] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "UnnamedShapeScaleOrientationInterp";
ROUTE74.fromField = "value_changed";
ROUTE74.toNode = "Klinke";
ROUTE74.toField = "set_scaleOrientation";
children[8] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "Touch";
ROUTE75.fromField = "touchTime";
ROUTE75.toNode = "door_snd";
ROUTE75.toField = "set_startTime";
children[9] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "UnnamedTransformTranslationInterp";
ROUTE76.fromField = "value_changed";
ROUTE76.toNode = "Tuer_AnimSound";
ROUTE76.toField = "set_translation";
children[10] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "UnnamedTransformRotationInterp";
ROUTE77.fromField = "value_changed";
ROUTE77.toNode = "Tuer_AnimSound";
ROUTE77.toField = "set_rotation";
children[11] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "UnnamedTransformCenterInterp";
ROUTE78.fromField = "value_changed";
ROUTE78.toNode = "Tuer_AnimSound";
ROUTE78.toField = "set_center";
children[12] = ROUTE78;

}
