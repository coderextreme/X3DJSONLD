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
meta3.content = "Fri, 13 Nov 2015 10:12:58 GMT";
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
meta6.content = "Fri, 13 Nov 2015 10:12:58 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "JumpPlatform";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "platformLOD";
LOD LOD11 = createNode("LOD");
LOD11.range = new MFFloat(new float[2.5]);
Transform Transform12 = createNode("Transform");
Transform12.DEF = "platformAnim";
Transform12.center = new SFVec3f(new float[0.0393472,-0.651559,-0.0115353]);
Group Group13 = createNode("Group");
Group Group14 = createNode("Group");
Group14.DEF = "UnnamedAnimation2";
TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "Time";
TimeSensor15.cycleInterval = 1.5;
TimeSensor15.stopTime = 1;
Group14.children = new MFNode();

Group14.children[0] = TimeSensor15;

Group13.children = new MFNode();

Group13.children[0] = Group14;

PositionInterpolator PositionInterpolator16 = createNode("PositionInterpolator");
PositionInterpolator16.DEF = "platformAnimTranslationInterp";
PositionInterpolator16.key = new MFFloat(new float[0,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533334,0.6,0.666667,0.75,0.833333,0.916667,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[0,0,0,0,-2.28722,0,0,-2.20818,0,0,-1.99582,0,0,-1.68724,0,0,-1.31955,0,0,-0.929871,0,0,-0.555311,0,0,-0.232983,0,0,0,0,0,0.123708,0,0,0.109962,0,0,0.0412359,0,0,0,0]);
Group13.children[1] = PositionInterpolator16;

Transform12.children = new MFNode();

Transform12.children[0] = Group13;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "platform";
Transform Transform18 = createNode("Transform");
Transform18.DEF = "stone";
Transform18.translation = new SFVec3f(new float[-0.0705032,-0.371576,0.0145798]);
Transform18.rotation = new SFRotation(new float[0,-1,0,0.374402]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.ambientIntensity = 0.433333;
Material21.diffuseColor = new SFColor(new float[0.957447,0.642839,0.0227095]);
Appearance20.material = Material21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.DEF = "_1";
ImageTexture22.url = new MFString(new java.lang.String["fels1.png"]);
Appearance20.texture = ImageTexture22;

Shape19.appearance = Appearance20;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.creaseAngle = 0.5;
IndexedFaceSet23.colorIndex = new MFInt32(new int[1,0,0,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]);
IndexedFaceSet23.texCoordIndex = new MFInt32(new int[0,9,7,2,-1,0,13,11,2,-1,14,2,4,16,-1,0,8,15,4,-1,10,2,6,18,-1,0,12,17,6,-1,7,9,1,-1,11,13,1,-1,14,16,3,-1,15,8,1,-1,10,18,5,-1,17,12,1,-1]);
IndexedFaceSet23.coordIndex = new MFInt32(new int[1,7,6,2,-1,3,9,8,0,-1,9,3,4,10,-1,2,6,10,4,-1,7,1,5,11,-1,0,8,11,5,-1,6,7,12,-1,8,9,12,-1,9,10,12,-1,10,6,12,-1,7,11,12,-1,11,8,12,-1]);
Color Color24 = createNode("Color");
Color24.color = new MFColor(new float[0.957447,0.642839,0.0227095,0,0.946524,0.280331]);
IndexedFaceSet23.color = Color24;

TextureCoordinate TextureCoordinate25 = createNode("TextureCoordinate");
TextureCoordinate25.point = new MFVec2f(new float[0,1,0,0,1,1,0.5,0,0.5,1,0.5,0,0.5,1,1,0.5,0,0.5,0,0.5,1,0.5,1,0.5,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
IndexedFaceSet23.texCoord = TextureCoordinate25;

Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[-0.931543,0.371576,0.931536,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,-1.31445,0.371576,-0.491099,0,0.371576,-1.66309,0,0.371576,1.53413,0.931543,0,-0.931536,1.49983,0,0.523687,-0.931543,0,0.931536,-1.31445,0,-0.491099,0,0,-1.66309,0,0,1.53413,0.0606067,-0.931541,0.00472414]);
IndexedFaceSet23.coord = Coordinate26;

Shape19.geometry = IndexedFaceSet23;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "grass";
Transform27.translation = new SFVec3f(new float[-0.0705032,-0.371576,0.0145798]);
Transform27.rotation = new SFRotation(new float[0,-1,0,0.374402]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.ambientIntensity = 0.358095;
Material30.diffuseColor = new SFColor(new float[0,0.446809,0.132331]);
Appearance29.material = Material30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.DEF = "_2";
ImageTexture31.url = new MFString(new java.lang.String["grass.png"]);
Appearance29.texture = ImageTexture31;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet32 = createNode("IndexedFaceSet");
IndexedFaceSet32.creaseAngle = 0.5;
IndexedFaceSet32.colorIndex = new MFInt32(new int[0,0,1,-1,0,0,1,-1,1,0,0,-1,1,0,0,-1,0,0,1,-1,0,1,0,-1]);
IndexedFaceSet32.texCoordIndex = new MFInt32(new int[0,1,3,-1,2,0,3,-1,3,1,4,-1,3,4,5,-1,6,2,3,-1,6,3,5,-1]);
IndexedFaceSet32.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,2,1,4,-1,2,4,5,-1,6,3,2,-1,6,2,5,-1]);
Color Color33 = createNode("Color");
Color33.color = new MFColor(new float[0,0.446809,0.132331,0.957447,0.642839,0.0227095]);
IndexedFaceSet32.color = Color33;

TextureCoordinate TextureCoordinate34 = createNode("TextureCoordinate");
TextureCoordinate34.point = new MFVec2f(new float[0.136057,0.214122,0.467063,0,0,0.719628,0.467063,0.550267,1,0.359043,0.798069,0.876129,0.467063,1.13607]);
IndexedFaceSet32.texCoord = TextureCoordinate34;

Coordinate Coordinate35 = createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-0.931543,0.371576,0.931536,0,0.371576,1.53413,0,0.371576,-0.0144713,-1.31445,0.371576,-0.491099,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,0,0.371576,-1.66309]);
IndexedFaceSet32.coord = Coordinate35;

Shape28.geometry = IndexedFaceSet32;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform17.children[1] = Transform27;

Transform12.children[1] = Transform17;

Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[-0.07416,1.25831,-0.0698821]);
Transform36.scale = new SFVec3f(new float[0.627701,3.17401,0.743179]);
ProximitySensor ProximitySensor37 = createNode("ProximitySensor");
ProximitySensor37.DEF = "_3";
ProximitySensor37.size = new SFVec3f(new float[3.7886,1.30312,4.00496]);
ProximitySensor37.center = new SFVec3f(new float[-0.0393303,-0.199244,0.0114513]);
Transform36.children = new MFNode();

Transform36.children[0] = ProximitySensor37;

Transform12.children[2] = Transform36;

LOD11.children = new MFNode();

LOD11.children[0] = Transform12;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "platform_1";
Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[-0.0705032,-0.371576,0.0145798]);
Transform39.rotation = new SFRotation(new float[0,-1,0,0.374402]);
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.ambientIntensity = 0.433333;
Material42.diffuseColor = new SFColor(new float[0.957447,0.642839,0.0227095]);
Appearance41.material = Material42;

ImageTexture ImageTexture43 = createNode("ImageTexture");
ImageTexture43.USE = "_1";
Appearance41.texture = ImageTexture43;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet44 = createNode("IndexedFaceSet");
IndexedFaceSet44.creaseAngle = 0.5;
IndexedFaceSet44.colorIndex = new MFInt32(new int[1,0,0,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]);
IndexedFaceSet44.texCoordIndex = new MFInt32(new int[0,9,7,2,-1,0,13,11,2,-1,14,2,4,16,-1,0,8,15,4,-1,10,2,6,18,-1,0,12,17,6,-1,7,9,1,-1,11,13,1,-1,14,16,3,-1,15,8,1,-1,10,18,5,-1,17,12,1,-1]);
IndexedFaceSet44.coordIndex = new MFInt32(new int[1,7,6,2,-1,3,9,8,0,-1,9,3,4,10,-1,2,6,10,4,-1,7,1,5,11,-1,0,8,11,5,-1,6,7,12,-1,8,9,12,-1,9,10,12,-1,10,6,12,-1,7,11,12,-1,11,8,12,-1]);
Color Color45 = createNode("Color");
Color45.color = new MFColor(new float[0.957447,0.642839,0.0227095,0,0.946524,0.280331]);
IndexedFaceSet44.color = Color45;

TextureCoordinate TextureCoordinate46 = createNode("TextureCoordinate");
TextureCoordinate46.point = new MFVec2f(new float[0,1,0,0,1,1,0.5,0,0.5,1,0.5,0,0.5,1,1,0.5,0,0.5,0,0.5,1,0.5,1,0.5,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
IndexedFaceSet44.texCoord = TextureCoordinate46;

Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[-0.931543,0.371576,0.931536,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,-1.31445,0.371576,-0.491099,0,0.371576,-1.66309,0,0.371576,1.53413,0.931543,0,-0.931536,1.49983,0,0.523687,-0.931543,0,0.931536,-1.31445,0,-0.491099,0,0,-1.66309,0,0,1.53413,0.0606067,-0.931541,0.00472414]);
IndexedFaceSet44.coord = Coordinate47;

Shape40.geometry = IndexedFaceSet44;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Transform38.children = new MFNode();

Transform38.children[0] = Transform39;

Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[-0.0705032,-0.371576,0.0145798]);
Transform48.rotation = new SFRotation(new float[0,-1,0,0.374402]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.ambientIntensity = 0.358095;
Material51.diffuseColor = new SFColor(new float[0,0.446809,0.132331]);
Appearance50.material = Material51;

ImageTexture ImageTexture52 = createNode("ImageTexture");
ImageTexture52.USE = "_2";
Appearance50.texture = ImageTexture52;

Shape49.appearance = Appearance50;

IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.creaseAngle = 0.5;
IndexedFaceSet53.colorIndex = new MFInt32(new int[0,0,1,-1,0,0,1,-1,1,0,0,-1,1,0,0,-1,0,0,1,-1,0,1,0,-1]);
IndexedFaceSet53.texCoordIndex = new MFInt32(new int[0,1,3,-1,2,0,3,-1,3,1,4,-1,3,4,5,-1,6,2,3,-1,6,3,5,-1]);
IndexedFaceSet53.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,2,1,4,-1,2,4,5,-1,6,3,2,-1,6,2,5,-1]);
Color Color54 = createNode("Color");
Color54.color = new MFColor(new float[0,0.446809,0.132331,0.957447,0.642839,0.0227095]);
IndexedFaceSet53.color = Color54;

TextureCoordinate TextureCoordinate55 = createNode("TextureCoordinate");
TextureCoordinate55.point = new MFVec2f(new float[0.136057,0.214122,0.467063,0,0,0.719628,0.467063,0.550267,1,0.359043,0.798069,0.876129,0.467063,1.13607]);
IndexedFaceSet53.texCoord = TextureCoordinate55;

Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[-0.931543,0.371576,0.931536,0,0.371576,1.53413,0,0.371576,-0.0144713,-1.31445,0.371576,-0.491099,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,0,0.371576,-1.66309]);
IndexedFaceSet53.coord = Coordinate56;

Shape49.geometry = IndexedFaceSet53;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform38.children[1] = Transform48;

LOD11.children[1] = Transform38;

Transform10.children = new MFNode();

Transform10.children[0] = LOD11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

children[1] = Transform9;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "_3";
ROUTE57.fromField = "enterTime";
ROUTE57.toNode = "Time";
ROUTE57.toField = "set_startTime";
children[2] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "Time";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "platformAnimTranslationInterp";
ROUTE58.toField = "set_fraction";
children[3] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "platformAnimTranslationInterp";
ROUTE59.fromField = "value_changed";
ROUTE59.toNode = "platformAnim";
ROUTE59.toField = "set_translation";
children[4] = ROUTE59;

}
