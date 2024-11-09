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
meta3.content = "Thu, 23 Apr 2015 06:07:16 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:16 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "RandomSwitcher";
ExternProtoDeclare8.url = new MFString(new java.lang.String["RandomSwitcher_proto.x3d"]);
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
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "whichChoice_changed";
field12.accessType = "outputOnly";
field12.type = "SFInt32";
ExternProtoDeclare8.field[3] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare13 = createNode("ExternProtoDeclare");
ExternProtoDeclare13.name = "NegSFVec3f";
ExternProtoDeclare13.url = new MFString(new java.lang.String["NegSFVec3f_proto.x3d"]);
field field14 = createNode("field");
field14.name = "set_SFVec3f";
field14.accessType = "inputOnly";
field14.type = "SFVec3f";
ExternProtoDeclare13.field = new MFNode();

ExternProtoDeclare13.field[0] = field14;

field field15 = createNode("field");
field15.name = "value_changed";
field15.accessType = "outputOnly";
field15.type = "SFVec3f";
ExternProtoDeclare13.field[1] = field15;

children[1] = ExternProtoDeclare13;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[2] = WorldInfo16;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "people";
Transform17.bboxSize = new SFVec3f(new float[5,3.8,5]);
Transform Transform18 = createNode("Transform");
Transform18.DEF = "RandomSwitcherHair";
ProtoInstance ProtoInstance19 = createNode("ProtoInstance");
ProtoInstance19.name = "RandomSwitcher";
ProtoInstance19.DEF = "_1";
fieldValue fieldValue20 = createNode("fieldValue");
fieldValue20.name = "maxValue";
fieldValue20.value = "3";
ProtoInstance19.fieldValue = new MFNode();

ProtoInstance19.fieldValue[0] = fieldValue20;

Transform18.children = new MFNode();

Transform18.children[0] = ProtoInstance19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "RandomSwitcherBody";
ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "RandomSwitcher";
ProtoInstance22.DEF = "_2";
fieldValue fieldValue23 = createNode("fieldValue");
fieldValue23.name = "maxValue";
fieldValue23.value = "9";
ProtoInstance22.fieldValue = new MFNode();

ProtoInstance22.fieldValue[0] = fieldValue23;

Transform21.children = new MFNode();

Transform21.children[0] = ProtoInstance22;

Transform17.children[1] = Transform21;

children[3] = Transform17;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "nc";
Collision Collision25 = createNode("Collision");
Collision25.enabled = False;
Transform Transform26 = createNode("Transform");
Billboard Billboard27 = createNode("Billboard");
Transform Transform28 = createNode("Transform");
Transform28.DEF = "bil";
LOD LOD29 = createNode("LOD");
LOD29.center = new SFVec3f(new float[0,1.2,0]);
LOD29.range = new MFFloat(new float[0.660001,40]);
Transform Transform30 = createNode("Transform");
Transform30.DEF = "nearOff";
LOD29.children = new MFNode();

LOD29.children[0] = Transform30;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "hi";
Transform Transform32 = createNode("Transform");
Transform32.DEF = "vSens";
VisibilitySensor VisibilitySensor33 = createNode("VisibilitySensor");
VisibilitySensor33.DEF = "_3";
VisibilitySensor33.size = new SFVec3f(new float[1.2,1.7,1.2]);
VisibilitySensor33.center = new SFVec3f(new float[0,0.85,0]);
Transform32.children = new MFNode();

Transform32.children[0] = VisibilitySensor33;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "else";
Transform34.translation = new SFVec3f(new float[0,-4.76837e-7,0]);
Transform34.center = new SFVec3f(new float[-0.000758275,0.842724,0.00417924]);
Group Group35 = createNode("Group");
Group Group36 = createNode("Group");
Group36.DEF = "hupf";
TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "Time_1";
TimeSensor37.startTime = 973451004.016792;
TimeSensor37.stopTime = 1;
Group36.children = new MFNode();

Group36.children[0] = TimeSensor37;

Group35.children = new MFNode();

Group35.children[0] = Group36;

OrientationInterpolator OrientationInterpolator38 = createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "ArmLRotationInterp";
OrientationInterpolator38.key = new MFFloat(new float[0,0.1,0.2,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator38.keyValue = new MFRotation(new float[0,0,1,0,0.537984,0.0664556,0.840332,4.29341,-0.603678,0.0699418,-0.794154,2.31096,0.644597,-0.175593,0.744085,3.92248,0.561529,0.0208846,0.827194,4.23437,0.644597,-0.175593,0.744085,3.92248,0.537984,0.0664556,0.840332,4.29341,0,0,1,0]);
Group35.children[1] = OrientationInterpolator38;

PositionInterpolator PositionInterpolator39 = createNode("PositionInterpolator");
PositionInterpolator39.DEF = "ArmLScaleFactorInterp";
PositionInterpolator39.key = new MFFloat(new float[0]);
PositionInterpolator39.keyValue = new MFVec3f(new float[1,0.999981,1]);
Group35.children[2] = PositionInterpolator39;

OrientationInterpolator OrientationInterpolator40 = createNode("OrientationInterpolator");
OrientationInterpolator40.DEF = "ArmLScaleOrientationInterp_1";
OrientationInterpolator40.key = new MFFloat(new float[0]);
OrientationInterpolator40.keyValue = new MFRotation(new float[0.875324,0.477336,-0.0771937,0.370578]);
Group35.children[3] = OrientationInterpolator40;

PositionInterpolator PositionInterpolator41 = createNode("PositionInterpolator");
PositionInterpolator41.DEF = "ArmLScaleInterp";
PositionInterpolator41.key = new MFFloat(new float[0]);
PositionInterpolator41.keyValue = new MFVec3f(new float[1,0.999981,1]);
Group35.children[4] = PositionInterpolator41;

OrientationInterpolator OrientationInterpolator42 = createNode("OrientationInterpolator");
OrientationInterpolator42.DEF = "ArmLScaleOrientationInterp_2";
OrientationInterpolator42.key = new MFFloat(new float[0]);
OrientationInterpolator42.keyValue = new MFRotation(new float[0.914246,0.397429,-0.078765,0.367275]);
Group35.children[5] = OrientationInterpolator42;

PositionInterpolator PositionInterpolator43 = createNode("PositionInterpolator");
PositionInterpolator43.DEF = "elseTranslationInterp";
PositionInterpolator43.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9]);
PositionInterpolator43.keyValue = new MFVec3f(new float[0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0]);
Group35.children[6] = PositionInterpolator43;

Transform34.children = new MFNode();

Transform34.children[0] = Group35;

Transform Transform44 = createNode("Transform");
Transform44.DEF = "BodyO";
Transform44.translation = new SFVec3f(new float[4.65661e-10,1.49012e-7,-9.31323e-9]);
Transform44.scale = new SFVec3f(new float[1,0.999988,0.999988]);
Transform44.center = new SFVec3f(new float[-0.00316677,0.337015,0.00420856]);
Transform Transform45 = createNode("Transform");
Transform45.DEF = "body";
Transform45.center = new SFVec3f(new float[-0.000208497,0.681873,0.00420851]);
Switch Switch46 = createNode("Switch");
Switch46.DEF = "_4";
Switch46.whichChoice = 1;
Transform Transform47 = createNode("Transform");
Transform47.DEF = "b0";
Transform47.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform47.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.ambientIntensity = 0.148936;
Material50.diffuseColor = new SFColor(new float[1,1,1]);
Material50.shininess = 0;
Appearance49.material = Material50;

ImageTexture ImageTexture51 = createNode("ImageTexture");
ImageTexture51.url = new MFString(new java.lang.String["shirt7.jpg"]);
Appearance49.texture = ImageTexture51;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet52 = createNode("IndexedFaceSet");
IndexedFaceSet52.convex = False;
IndexedFaceSet52.creaseAngle = 3.14159;
IndexedFaceSet52.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate53 = createNode("TextureCoordinate");
TextureCoordinate53.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet52.texCoord = TextureCoordinate53;

Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521]);
IndexedFaceSet52.coord = Coordinate54;

Shape48.geometry = IndexedFaceSet52;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Switch46.children = new MFNode();

Switch46.children[0] = Transform47;

Transform Transform55 = createNode("Transform");
Transform55.DEF = "b1";
Transform55.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform55.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.ambientIntensity = 0.148936;
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Material58.shininess = 0;
Appearance57.material = Material58;

ImageTexture ImageTexture59 = createNode("ImageTexture");
ImageTexture59.url = new MFString(new java.lang.String["army1.jpg"]);
Appearance57.texture = ImageTexture59;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet60 = createNode("IndexedFaceSet");
IndexedFaceSet60.convex = False;
IndexedFaceSet60.creaseAngle = 3.14159;
IndexedFaceSet60.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate61 = createNode("TextureCoordinate");
TextureCoordinate61.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet60.texCoord = TextureCoordinate61;

Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.DEF = "hbco";
Coordinate62.point = new MFVec3f(new float[-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521]);
IndexedFaceSet60.coord = Coordinate62;

Shape56.geometry = IndexedFaceSet60;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Switch46.children[1] = Transform55;

Transform Transform63 = createNode("Transform");
Transform63.DEF = "b2";
Transform63.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform63.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Material Material66 = createNode("Material");
Material66.ambientIntensity = 0.148936;
Material66.diffuseColor = new SFColor(new float[1,1,1]);
Material66.shininess = 0;
Appearance65.material = Material66;

ImageTexture ImageTexture67 = createNode("ImageTexture");
ImageTexture67.url = new MFString(new java.lang.String["cyber2.jpg"]);
Appearance65.texture = ImageTexture67;

Shape64.appearance = Appearance65;

IndexedFaceSet IndexedFaceSet68 = createNode("IndexedFaceSet");
IndexedFaceSet68.convex = False;
IndexedFaceSet68.creaseAngle = 3.14159;
IndexedFaceSet68.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate69 = createNode("TextureCoordinate");
TextureCoordinate69.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet68.texCoord = TextureCoordinate69;

Coordinate Coordinate70 = createNode("Coordinate");
Coordinate70.USE = "hbco";
IndexedFaceSet68.coord = Coordinate70;

Shape64.geometry = IndexedFaceSet68;

Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Switch46.children[2] = Transform63;

Transform Transform71 = createNode("Transform");
Transform71.DEF = "b3";
Transform71.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform71.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape72 = createNode("Shape");
Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.ambientIntensity = 0.148936;
Material74.diffuseColor = new SFColor(new float[1,1,1]);
Material74.shininess = 0;
Appearance73.material = Material74;

ImageTexture ImageTexture75 = createNode("ImageTexture");
ImageTexture75.url = new MFString(new java.lang.String["shirt8.jpg"]);
Appearance73.texture = ImageTexture75;

Shape72.appearance = Appearance73;

IndexedFaceSet IndexedFaceSet76 = createNode("IndexedFaceSet");
IndexedFaceSet76.convex = False;
IndexedFaceSet76.creaseAngle = 3.14159;
IndexedFaceSet76.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate77 = createNode("TextureCoordinate");
TextureCoordinate77.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet76.texCoord = TextureCoordinate77;

Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.USE = "hbco";
IndexedFaceSet76.coord = Coordinate78;

Shape72.geometry = IndexedFaceSet76;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Switch46.children[3] = Transform71;

Transform Transform79 = createNode("Transform");
Transform79.DEF = "b4";
Transform79.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform79.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Material82.ambientIntensity = 0.148936;
Material82.diffuseColor = new SFColor(new float[1,1,1]);
Material82.shininess = 0;
Appearance81.material = Material82;

ImageTexture ImageTexture83 = createNode("ImageTexture");
ImageTexture83.url = new MFString(new java.lang.String["shirt9.jpg"]);
Appearance81.texture = ImageTexture83;

Shape80.appearance = Appearance81;

IndexedFaceSet IndexedFaceSet84 = createNode("IndexedFaceSet");
IndexedFaceSet84.convex = False;
IndexedFaceSet84.creaseAngle = 3.14159;
IndexedFaceSet84.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate85 = createNode("TextureCoordinate");
TextureCoordinate85.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet84.texCoord = TextureCoordinate85;

Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.USE = "hbco";
IndexedFaceSet84.coord = Coordinate86;

Shape80.geometry = IndexedFaceSet84;

Transform79.child = new undefined();

Transform79.child[0] = Shape80;

Switch46.children[4] = Transform79;

Transform Transform87 = createNode("Transform");
Transform87.DEF = "b5";
Transform87.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform87.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape88 = createNode("Shape");
Appearance Appearance89 = createNode("Appearance");
Material Material90 = createNode("Material");
Material90.ambientIntensity = 0.148936;
Material90.diffuseColor = new SFColor(new float[1,1,1]);
Material90.shininess = 0;
Appearance89.material = Material90;

ImageTexture ImageTexture91 = createNode("ImageTexture");
ImageTexture91.url = new MFString(new java.lang.String["shirt5.jpg"]);
Appearance89.texture = ImageTexture91;

Shape88.appearance = Appearance89;

IndexedFaceSet IndexedFaceSet92 = createNode("IndexedFaceSet");
IndexedFaceSet92.convex = False;
IndexedFaceSet92.creaseAngle = 3.14159;
IndexedFaceSet92.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate93 = createNode("TextureCoordinate");
TextureCoordinate93.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet92.texCoord = TextureCoordinate93;

Coordinate Coordinate94 = createNode("Coordinate");
Coordinate94.USE = "hbco";
IndexedFaceSet92.coord = Coordinate94;

Shape88.geometry = IndexedFaceSet92;

Transform87.child = new undefined();

Transform87.child[0] = Shape88;

Switch46.children[5] = Transform87;

Transform Transform95 = createNode("Transform");
Transform95.DEF = "b6";
Transform95.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform95.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape96 = createNode("Shape");
Appearance Appearance97 = createNode("Appearance");
Material Material98 = createNode("Material");
Material98.ambientIntensity = 0.148936;
Material98.diffuseColor = new SFColor(new float[1,1,1]);
Material98.shininess = 0;
Appearance97.material = Material98;

ImageTexture ImageTexture99 = createNode("ImageTexture");
ImageTexture99.url = new MFString(new java.lang.String["shirt4.jpg"]);
Appearance97.texture = ImageTexture99;

Shape96.appearance = Appearance97;

IndexedFaceSet IndexedFaceSet100 = createNode("IndexedFaceSet");
IndexedFaceSet100.convex = False;
IndexedFaceSet100.creaseAngle = 3.14159;
IndexedFaceSet100.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate101 = createNode("TextureCoordinate");
TextureCoordinate101.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet100.texCoord = TextureCoordinate101;

Coordinate Coordinate102 = createNode("Coordinate");
Coordinate102.USE = "hbco";
IndexedFaceSet100.coord = Coordinate102;

Shape96.geometry = IndexedFaceSet100;

Transform95.child = new undefined();

Transform95.child[0] = Shape96;

Switch46.children[6] = Transform95;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "b7";
Transform103.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform103.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.ambientIntensity = 0.148936;
Material106.diffuseColor = new SFColor(new float[1,1,1]);
Material106.shininess = 0;
Appearance105.material = Material106;

ImageTexture ImageTexture107 = createNode("ImageTexture");
ImageTexture107.url = new MFString(new java.lang.String["shirt2.jpg"]);
Appearance105.texture = ImageTexture107;

Shape104.appearance = Appearance105;

IndexedFaceSet IndexedFaceSet108 = createNode("IndexedFaceSet");
IndexedFaceSet108.convex = False;
IndexedFaceSet108.creaseAngle = 3.14159;
IndexedFaceSet108.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate109 = createNode("TextureCoordinate");
TextureCoordinate109.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet108.texCoord = TextureCoordinate109;

Coordinate Coordinate110 = createNode("Coordinate");
Coordinate110.USE = "hbco";
IndexedFaceSet108.coord = Coordinate110;

Shape104.geometry = IndexedFaceSet108;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

Switch46.children[7] = Transform103;

Transform Transform111 = createNode("Transform");
Transform111.DEF = "b8";
Transform111.translation = new SFVec3f(new float[0,-0.00000226496,-1.72294e-8]);
Transform111.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
Material Material114 = createNode("Material");
Material114.ambientIntensity = 0.148936;
Material114.diffuseColor = new SFColor(new float[1,1,1]);
Material114.shininess = 0;
Appearance113.material = Material114;

ImageTexture ImageTexture115 = createNode("ImageTexture");
ImageTexture115.url = new MFString(new java.lang.String["cyber4.jpg"]);
Appearance113.texture = ImageTexture115;

Shape112.appearance = Appearance113;

IndexedFaceSet IndexedFaceSet116 = createNode("IndexedFaceSet");
IndexedFaceSet116.convex = False;
IndexedFaceSet116.creaseAngle = 3.14159;
IndexedFaceSet116.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate117 = createNode("TextureCoordinate");
TextureCoordinate117.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet116.texCoord = TextureCoordinate117;

Coordinate Coordinate118 = createNode("Coordinate");
Coordinate118.USE = "hbco";
IndexedFaceSet116.coord = Coordinate118;

Shape112.geometry = IndexedFaceSet116;

Transform111.child = new undefined();

Transform111.child[0] = Shape112;

Switch46.children[8] = Transform111;

Transform Transform119 = createNode("Transform");
Transform119.DEF = "b9";
Transform119.translation = new SFVec3f(new float[0,2.86491e-11,2.16716e-13]);
Shape Shape120 = createNode("Shape");
Appearance Appearance121 = createNode("Appearance");
Material Material122 = createNode("Material");
Material122.ambientIntensity = 0.148936;
Material122.diffuseColor = new SFColor(new float[1,1,1]);
Material122.shininess = 0;
Appearance121.material = Material122;

ImageTexture ImageTexture123 = createNode("ImageTexture");
ImageTexture123.url = new MFString(new java.lang.String["shirt3.jpg"]);
Appearance121.texture = ImageTexture123;

Shape120.appearance = Appearance121;

IndexedFaceSet IndexedFaceSet124 = createNode("IndexedFaceSet");
IndexedFaceSet124.convex = False;
IndexedFaceSet124.creaseAngle = 3.14159;
IndexedFaceSet124.coordIndex = new MFInt32(new int[0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]);
TextureCoordinate TextureCoordinate125 = createNode("TextureCoordinate");
TextureCoordinate125.point = new MFVec2f(new float[0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219]);
IndexedFaceSet124.texCoord = TextureCoordinate125;

Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.USE = "hbco";
IndexedFaceSet124.coord = Coordinate126;

Shape120.geometry = IndexedFaceSet124;

Transform119.child = new undefined();

Transform119.child[0] = Shape120;

Switch46.children[9] = Transform119;

Transform45.children = new MFNode();

Transform45.children[0] = Switch46;

Transform44.children = new MFNode();

Transform44.children[0] = Transform45;

Transform Transform127 = createNode("Transform");
Transform127.DEF = "ArmR";
Transform127.translation = new SFVec3f(new float[-5.96046e-8,3.57628e-7,2.98023e-8]);
Transform127.scale = new SFVec3f(new float[1,0.999991,0.999991]);
Transform127.center = new SFVec3f(new float[0.289521,1.00008,0.0239703]);
Transform Transform128 = createNode("Transform");
Transform128.DEF = "armR";
Transform128.translation = new SFVec3f(new float[-1.49012e-7,-1.78814e-7,7.45058e-8]);
Transform128.scale = new SFVec3f(new float[0.999999,0.99999,0.99999]);
Transform128.center = new SFVec3f(new float[0.295036,0.973184,0.0197765]);
Transform Transform129 = createNode("Transform");
Transform129.DEF = "oarmR";
Shape Shape130 = createNode("Shape");
Appearance Appearance131 = createNode("Appearance");
Material Material132 = createNode("Material");
Material132.DEF = "_5";
Material132.ambientIntensity = 0.255319;
Material132.diffuseColor = new SFColor(new float[1,0.600935,0.355765]);
Material132.shininess = 0;
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

IndexedFaceSet IndexedFaceSet133 = createNode("IndexedFaceSet");
IndexedFaceSet133.solid = False;
IndexedFaceSet133.convex = False;
IndexedFaceSet133.creaseAngle = 3.14159;
IndexedFaceSet133.coordIndex = new MFInt32(new int[0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1]);
Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417]);
IndexedFaceSet133.coord = Coordinate134;

Shape130.geometry = IndexedFaceSet133;

Transform129.child = new undefined();

Transform129.child[0] = Shape130;

Transform128.children = new MFNode();

Transform128.children[0] = Transform129;

Transform Transform135 = createNode("Transform");
Transform135.DEF = "handR";
Transform135.center = new SFVec3f(new float[0.386713,0.551949,0.0217319]);
Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Material138.USE = "_5";
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

IndexedFaceSet IndexedFaceSet139 = createNode("IndexedFaceSet");
IndexedFaceSet139.solid = False;
IndexedFaceSet139.convex = False;
IndexedFaceSet139.creaseAngle = 3.14159;
IndexedFaceSet139.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1]);
Coordinate Coordinate140 = createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045]);
IndexedFaceSet139.coord = Coordinate140;

Shape136.geometry = IndexedFaceSet139;

Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Transform128.children[1] = Transform135;

Transform127.children = new MFNode();

Transform127.children[0] = Transform128;

Transform44.children[1] = Transform127;

Transform Transform141 = createNode("Transform");
Transform141.DEF = "ArmL";
Transform141.translation = new SFVec3f(new float[0.00000184774,0.0000013113,2.98023e-7]);
Transform141.scale = new SFVec3f(new float[1,0.999981,1]);
Transform141.scaleOrientation = new SFRotation(new float[0.875324,0.477336,-0.0771937,0.370578]);
Transform141.center = new SFVec3f(new float[-0.298867,0.995243,-0.0108316]);
Transform Transform142 = createNode("Transform");
Transform142.DEF = "armL";
Transform142.translation = new SFVec3f(new float[-1.19209e-7,2.38419e-7,9.31323e-10]);
Transform142.center = new SFVec3f(new float[-0.305306,0.988041,-0.0116445]);
Transform Transform143 = createNode("Transform");
Transform143.DEF = "oarmL";
Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Material Material146 = createNode("Material");
Material146.USE = "_5";
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

IndexedFaceSet IndexedFaceSet147 = createNode("IndexedFaceSet");
IndexedFaceSet147.solid = False;
IndexedFaceSet147.convex = False;
IndexedFaceSet147.creaseAngle = 3.14159;
IndexedFaceSet147.coordIndex = new MFInt32(new int[0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1]);
Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742]);
IndexedFaceSet147.coord = Coordinate148;

Shape144.geometry = IndexedFaceSet147;

Transform143.child = new undefined();

Transform143.child[0] = Shape144;

Transform142.children = new MFNode();

Transform142.children[0] = Transform143;

Transform Transform149 = createNode("Transform");
Transform149.DEF = "handL";
Transform149.translation = new SFVec3f(new float[2.98023e-8,0,4.65661e-10]);
Transform149.scale = new SFVec3f(new float[0.999996,0.999998,1]);
Transform149.scaleOrientation = new SFRotation(new float[0,0,-1,0.725978]);
Transform149.center = new SFVec3f(new float[-0.394827,0.544969,-0.00705719]);
Shape Shape150 = createNode("Shape");
Appearance Appearance151 = createNode("Appearance");
Material Material152 = createNode("Material");
Material152.USE = "_5";
Appearance151.material = Material152;

Shape150.appearance = Appearance151;

IndexedFaceSet IndexedFaceSet153 = createNode("IndexedFaceSet");
IndexedFaceSet153.solid = False;
IndexedFaceSet153.convex = False;
IndexedFaceSet153.creaseAngle = 3.14159;
IndexedFaceSet153.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1]);
Coordinate Coordinate154 = createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637]);
IndexedFaceSet153.coord = Coordinate154;

Shape150.geometry = IndexedFaceSet153;

Transform149.child = new undefined();

Transform149.child[0] = Shape150;

Transform142.children[1] = Transform149;

Transform141.children = new MFNode();

Transform141.children[0] = Transform142;

Transform44.children[2] = Transform141;

Transform Transform155 = createNode("Transform");
Transform155.DEF = "Head";
Transform155.translation = new SFVec3f(new float[-3.72529e-8,-0.00000107288,1.49012e-8]);
Transform155.scale = new SFVec3f(new float[0.999986,0.999952,0.999969]);
Transform155.scaleOrientation = new SFRotation(new float[0.272252,0.962065,-0.0175875,0.748075]);
Transform155.center = new SFVec3f(new float[-0.00422851,1.04834,0.00417849]);
Transform Transform156 = createNode("Transform");
Transform156.DEF = "headU";
Shape Shape157 = createNode("Shape");
Appearance Appearance158 = createNode("Appearance");
Material Material159 = createNode("Material");
Material159.USE = "_5";
Appearance158.material = Material159;

Shape157.appearance = Appearance158;

IndexedFaceSet IndexedFaceSet160 = createNode("IndexedFaceSet");
IndexedFaceSet160.solid = False;
IndexedFaceSet160.convex = False;
IndexedFaceSet160.creaseAngle = 1.53973;
IndexedFaceSet160.coordIndex = new MFInt32(new int[0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,20,21,6,4,-1,21,22,8,6,-1,22,23,10,8,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1]);
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751]);
IndexedFaceSet160.coord = Coordinate161;

Shape157.geometry = IndexedFaceSet160;

Transform156.child = new undefined();

Transform156.child[0] = Shape157;

Transform155.children = new MFNode();

Transform155.children[0] = Transform156;

Transform Transform162 = createNode("Transform");
Transform162.DEF = "headO";
Transform162.translation = new SFVec3f(new float[2.32831e-10,2.38419e-7,3.35276e-8]);
Transform162.center = new SFVec3f(new float[-0.00371499,1.24837,0.029451]);
Transform Transform163 = createNode("Transform");
Transform163.DEF = "augen";
Transform163.center = new SFVec3f(new float[-0.015762,1.38316,0.30789]);
Shape Shape164 = createNode("Shape");
Appearance Appearance165 = createNode("Appearance");
Material Material166 = createNode("Material");
Material166.ambientIntensity = 0.255319;
Material166.diffuseColor = new SFColor(new float[0,0,0]);
Material166.shininess = 0;
Appearance165.material = Material166;

Shape164.appearance = Appearance165;

IndexedFaceSet IndexedFaceSet167 = createNode("IndexedFaceSet");
IndexedFaceSet167.solid = False;
IndexedFaceSet167.convex = False;
IndexedFaceSet167.creaseAngle = 1.60186;
IndexedFaceSet167.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1]);
Coordinate Coordinate168 = createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011]);
IndexedFaceSet167.coord = Coordinate168;

Shape164.geometry = IndexedFaceSet167;

Transform163.child = new undefined();

Transform163.child[0] = Shape164;

Transform162.children = new MFNode();

Transform162.children[0] = Transform163;

Transform Transform169 = createNode("Transform");
Transform169.DEF = "haar";
Switch Switch170 = createNode("Switch");
Switch170.DEF = "_6";
Switch170.whichChoice = 1;
Transform Transform171 = createNode("Transform");
Transform171.DEF = "h1";
Shape Shape172 = createNode("Shape");
Appearance Appearance173 = createNode("Appearance");
Material Material174 = createNode("Material");
Material174.ambientIntensity = 0.148936;
Material174.diffuseColor = new SFColor(new float[1,1,1]);
Material174.shininess = 0;
Appearance173.material = Material174;

ImageTexture ImageTexture175 = createNode("ImageTexture");
ImageTexture175.url = new MFString(new java.lang.String["hair1.jpg"]);
Appearance173.texture = ImageTexture175;

Shape172.appearance = Appearance173;

IndexedFaceSet IndexedFaceSet176 = createNode("IndexedFaceSet");
IndexedFaceSet176.solid = False;
IndexedFaceSet176.convex = False;
IndexedFaceSet176.creaseAngle = 3.14159;
IndexedFaceSet176.coordIndex = new MFInt32(new int[0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]);
TextureCoordinate TextureCoordinate177 = createNode("TextureCoordinate");
TextureCoordinate177.point = new MFVec2f(new float[-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496]);
IndexedFaceSet176.texCoord = TextureCoordinate177;

Coordinate Coordinate178 = createNode("Coordinate");
Coordinate178.DEF = "hhco";
Coordinate178.point = new MFVec3f(new float[0.238211,1.471,-0.220467,0.198251,1.55876,0.0313386,0.377841,1.43577,-0.00714531,0.134999,1.579,-0.0903402,-0.18314,1.60778,0.146798,-0.247618,1.60732,0.00880936,-0.411981,1.43577,-0.0470541,-0.214767,1.471,-0.243355,-0.125196,1.579,-0.103488,0.0158279,1.48493,-0.313164,0.00725975,1.58699,-0.143594,-0.00227428,1.65935,0.0674612,0.277193,1.31523,-0.28818,0.404551,1.27447,-0.0431701,0.349909,1.23012,0.213632,-0.369653,1.23012,0.177274,-0.340793,1.21799,0.175881,-0.296545,1.38244,0.180247,-0.313821,1.40203,0.187276,-0.39813,1.27447,-0.0837286,-0.246724,1.31523,-0.314648,0.0199828,1.33133,-0.395392,-0.101431,1.54401,0.270843,-0.0769222,1.4973,0.225338,0.0538245,1.4973,0.231944,0.293354,1.40203,0.217955,0.350422,1.14933,-0.0780944,0.332594,1.1399,-0.0774054,0.263445,1.1857,-0.274314,0.321337,1.21799,0.209338,0.37957,1.26148,-0.042198,0.307546,1.09211,0.193511,0.329131,1.10101,0.196722,-0.364571,1.14933,-0.114222,-0.340485,1.10101,0.162887,-0.318688,1.09211,0.161868,-0.346907,1.1399,-0.11174,-0.373375,1.26148,-0.0802434,-0.224667,1.19678,-0.311133,-0.213683,1.1857,-0.298422,0.0189626,1.21513,-0.375202,0.0181397,1.20332,-0.358916,0.275653,1.19678,-0.285857,0.0803699,1.55286,0.386279,0.0342505,1.58699,0.341122,-0.00180715,1.38328,0.368284,0.145419,1.52038,0.403749,0.149685,1.48603,0.349656,0.052231,1.44079,0.328486,-0.0276137,1.65405,0.180214,0.0210674,1.63967,0.24235,0.16156,1.59305,0.254132,0.216021,1.45452,0.294783,0.213277,1.43423,0.279438,0.276874,1.38244,0.209221,0.0328324,1.49261,0.284621,0.16156,1.59305,0.254132,0.0214095,1.6383,0.244912,0.293354,1.40203,0.217955,0.216021,1.45452,0.294783,0.216021,1.45452,0.294783,0.276874,1.38244,0.209221,0.218313,1.45296,0.292504,0.219894,1.45189,0.290931]);
IndexedFaceSet176.coord = Coordinate178;

Shape172.geometry = IndexedFaceSet176;

Transform171.child = new undefined();

Transform171.child[0] = Shape172;

Switch170.children = new MFNode();

Switch170.children[0] = Transform171;

Transform Transform179 = createNode("Transform");
Transform179.DEF = "h2";
Transform179.translation = new SFVec3f(new float[2.32831e-10,-0.00000274181,-5.7742e-8]);
Transform179.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape180 = createNode("Shape");
Appearance Appearance181 = createNode("Appearance");
Material Material182 = createNode("Material");
Material182.ambientIntensity = 0.148936;
Material182.diffuseColor = new SFColor(new float[1,1,1]);
Material182.shininess = 0;
Appearance181.material = Material182;

ImageTexture ImageTexture183 = createNode("ImageTexture");
ImageTexture183.url = new MFString(new java.lang.String["hair2.jpg"]);
Appearance181.texture = ImageTexture183;

Shape180.appearance = Appearance181;

IndexedFaceSet IndexedFaceSet184 = createNode("IndexedFaceSet");
IndexedFaceSet184.solid = False;
IndexedFaceSet184.convex = False;
IndexedFaceSet184.creaseAngle = 3.14159;
IndexedFaceSet184.coordIndex = new MFInt32(new int[0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]);
TextureCoordinate TextureCoordinate185 = createNode("TextureCoordinate");
TextureCoordinate185.point = new MFVec2f(new float[-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496]);
IndexedFaceSet184.texCoord = TextureCoordinate185;

Coordinate Coordinate186 = createNode("Coordinate");
Coordinate186.USE = "hhco";
IndexedFaceSet184.coord = Coordinate186;

Shape180.geometry = IndexedFaceSet184;

Transform179.child = new undefined();

Transform179.child[0] = Shape180;

Switch170.children[1] = Transform179;

Transform Transform187 = createNode("Transform");
Transform187.DEF = "h3";
Transform187.translation = new SFVec3f(new float[2.32831e-10,-0.00000274181,-5.7742e-8]);
Transform187.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape188 = createNode("Shape");
Appearance Appearance189 = createNode("Appearance");
Material Material190 = createNode("Material");
Material190.ambientIntensity = 0.148936;
Material190.diffuseColor = new SFColor(new float[1,1,1]);
Material190.shininess = 0;
Appearance189.material = Material190;

ImageTexture ImageTexture191 = createNode("ImageTexture");
ImageTexture191.url = new MFString(new java.lang.String["hair3.jpg"]);
Appearance189.texture = ImageTexture191;

Shape188.appearance = Appearance189;

IndexedFaceSet IndexedFaceSet192 = createNode("IndexedFaceSet");
IndexedFaceSet192.solid = False;
IndexedFaceSet192.convex = False;
IndexedFaceSet192.creaseAngle = 3.14159;
IndexedFaceSet192.coordIndex = new MFInt32(new int[0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]);
TextureCoordinate TextureCoordinate193 = createNode("TextureCoordinate");
TextureCoordinate193.point = new MFVec2f(new float[-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496]);
IndexedFaceSet192.texCoord = TextureCoordinate193;

Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.USE = "hhco";
IndexedFaceSet192.coord = Coordinate194;

Shape188.geometry = IndexedFaceSet192;

Transform187.child = new undefined();

Transform187.child[0] = Shape188;

Switch170.children[2] = Transform187;

Transform Transform195 = createNode("Transform");
Transform195.DEF = "h4";
Transform195.translation = new SFVec3f(new float[2.32831e-10,-0.00000274181,-5.7742e-8]);
Transform195.scale = new SFVec3f(new float[1,1.00001,1.00001]);
Shape Shape196 = createNode("Shape");
Appearance Appearance197 = createNode("Appearance");
Material Material198 = createNode("Material");
Material198.ambientIntensity = 0.148936;
Material198.diffuseColor = new SFColor(new float[1,1,1]);
Material198.shininess = 0;
Appearance197.material = Material198;

ImageTexture ImageTexture199 = createNode("ImageTexture");
ImageTexture199.url = new MFString(new java.lang.String["hair4.jpg"]);
Appearance197.texture = ImageTexture199;

Shape196.appearance = Appearance197;

IndexedFaceSet IndexedFaceSet200 = createNode("IndexedFaceSet");
IndexedFaceSet200.solid = False;
IndexedFaceSet200.convex = False;
IndexedFaceSet200.creaseAngle = 3.14159;
IndexedFaceSet200.coordIndex = new MFInt32(new int[0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]);
TextureCoordinate TextureCoordinate201 = createNode("TextureCoordinate");
TextureCoordinate201.point = new MFVec2f(new float[-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496]);
IndexedFaceSet200.texCoord = TextureCoordinate201;

Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.USE = "hhco";
IndexedFaceSet200.coord = Coordinate202;

Shape196.geometry = IndexedFaceSet200;

Transform195.child = new undefined();

Transform195.child[0] = Shape196;

Switch170.children[3] = Transform195;

Transform169.children = new MFNode();

Transform169.children[0] = Switch170;

Transform162.children[1] = Transform169;

Transform Transform203 = createNode("Transform");
Transform203.DEF = "ohead";
Shape Shape204 = createNode("Shape");
Appearance Appearance205 = createNode("Appearance");
Material Material206 = createNode("Material");
Material206.USE = "_5";
Appearance205.material = Material206;

Shape204.appearance = Appearance205;

IndexedFaceSet IndexedFaceSet207 = createNode("IndexedFaceSet");
IndexedFaceSet207.solid = False;
IndexedFaceSet207.convex = False;
IndexedFaceSet207.creaseAngle = 1.53973;
IndexedFaceSet207.coordIndex = new MFInt32(new int[0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1]);
Coordinate Coordinate208 = createNode("Coordinate");
Coordinate208.point = new MFVec3f(new float[-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829]);
IndexedFaceSet207.coord = Coordinate208;

Shape204.geometry = IndexedFaceSet207;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

Transform162.children[2] = Transform203;

Transform155.children[1] = Transform162;

Transform44.children[3] = Transform155;

Transform34.children[1] = Transform44;

Transform Transform209 = createNode("Transform");
Transform209.DEF = "BeinL";
Transform209.center = new SFVec3f(new float[-0.198186,0.30347,-0.0111347]);
Transform Transform210 = createNode("Transform");
Transform210.DEF = "beinL";
Shape Shape211 = createNode("Shape");
Appearance Appearance212 = createNode("Appearance");
Material Material213 = createNode("Material");
Material213.USE = "_5";
Appearance212.material = Material213;

Shape211.appearance = Appearance212;

IndexedFaceSet IndexedFaceSet214 = createNode("IndexedFaceSet");
IndexedFaceSet214.solid = False;
IndexedFaceSet214.convex = False;
IndexedFaceSet214.creaseAngle = 3.14159;
IndexedFaceSet214.coordIndex = new MFInt32(new int[0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1]);
Coordinate Coordinate215 = createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464]);
IndexedFaceSet214.coord = Coordinate215;

Shape211.geometry = IndexedFaceSet214;

Transform210.child = new undefined();

Transform210.child[0] = Shape211;

Transform209.children = new MFNode();

Transform209.children[0] = Transform210;

Transform Transform216 = createNode("Transform");
Transform216.DEF = "fussL";
Transform216.center = new SFVec3f(new float[-0.198186,0.1544,-0.00509336]);
Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.DEF = "_7";
Material219.ambientIntensity = 0.148936;
Material219.diffuseColor = new SFColor(new float[1,1,1]);
Material219.shininess = 0;
Appearance218.material = Material219;

ImageTexture ImageTexture220 = createNode("ImageTexture");
ImageTexture220.DEF = "_8";
ImageTexture220.url = new MFString(new java.lang.String["shoes1.jpg"]);
Appearance218.texture = ImageTexture220;

Shape217.appearance = Appearance218;

IndexedFaceSet IndexedFaceSet221 = createNode("IndexedFaceSet");
IndexedFaceSet221.solid = False;
IndexedFaceSet221.convex = False;
IndexedFaceSet221.creaseAngle = 3.14159;
IndexedFaceSet221.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1]);
TextureCoordinate TextureCoordinate222 = createNode("TextureCoordinate");
TextureCoordinate222.point = new MFVec2f(new float[0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703]);
IndexedFaceSet221.texCoord = TextureCoordinate222;

Coordinate Coordinate223 = createNode("Coordinate");
Coordinate223.point = new MFVec3f(new float[-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572]);
IndexedFaceSet221.coord = Coordinate223;

Shape217.geometry = IndexedFaceSet221;

Transform216.child = new undefined();

Transform216.child[0] = Shape217;

Transform209.children[1] = Transform216;

Transform34.children[2] = Transform209;

Transform Transform224 = createNode("Transform");
Transform224.DEF = "BeinR";
Transform224.center = new SFVec3f(new float[0.196713,0.303457,0.0297802]);
Transform Transform225 = createNode("Transform");
Transform225.DEF = "beinR";
Shape Shape226 = createNode("Shape");
Appearance Appearance227 = createNode("Appearance");
Material Material228 = createNode("Material");
Material228.USE = "_5";
Appearance227.material = Material228;

Shape226.appearance = Appearance227;

IndexedFaceSet IndexedFaceSet229 = createNode("IndexedFaceSet");
IndexedFaceSet229.solid = False;
IndexedFaceSet229.convex = False;
IndexedFaceSet229.creaseAngle = 3.14159;
IndexedFaceSet229.coordIndex = new MFInt32(new int[0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1]);
Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619]);
IndexedFaceSet229.coord = Coordinate230;

Shape226.geometry = IndexedFaceSet229;

Transform225.child = new undefined();

Transform225.child[0] = Shape226;

Transform224.children = new MFNode();

Transform224.children[0] = Transform225;

Transform Transform231 = createNode("Transform");
Transform231.DEF = "fussR";
Transform231.translation = new SFVec3f(new float[-1.49012e-8,-1.49012e-8,-5.58794e-9]);
Transform231.scale = new SFVec3f(new float[1,0.999999,0.999999]);
Transform231.center = new SFVec3f(new float[0.196713,0.157104,0.00995016]);
Shape Shape232 = createNode("Shape");
Appearance Appearance233 = createNode("Appearance");
Material Material234 = createNode("Material");
Material234.USE = "_7";
Appearance233.material = Material234;

ImageTexture ImageTexture235 = createNode("ImageTexture");
ImageTexture235.USE = "_8";
Appearance233.texture = ImageTexture235;

Shape232.appearance = Appearance233;

IndexedFaceSet IndexedFaceSet236 = createNode("IndexedFaceSet");
IndexedFaceSet236.solid = False;
IndexedFaceSet236.convex = False;
IndexedFaceSet236.creaseAngle = 3.14159;
IndexedFaceSet236.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1]);
TextureCoordinate TextureCoordinate237 = createNode("TextureCoordinate");
TextureCoordinate237.point = new MFVec2f(new float[0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869]);
IndexedFaceSet236.texCoord = TextureCoordinate237;

Coordinate Coordinate238 = createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012]);
IndexedFaceSet236.coord = Coordinate238;

Shape232.geometry = IndexedFaceSet236;

Transform231.child = new undefined();

Transform231.child[0] = Shape232;

Transform224.children[1] = Transform231;

Transform34.children[3] = Transform224;

Transform31.children[1] = Transform34;

Transform Transform239 = createNode("Transform");
Transform239.DEF = "shadow";
Transform239.translation = new SFVec3f(new float[0.0606028,0,0]);
Transform239.center = new SFVec3f(new float[0,0.00748548,0]);
Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0,0.00748548,0]);
Transform240.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform240.scale = new SFVec3f(new float[1.53335,1.53335,1.53335]);
Shape Shape241 = createNode("Shape");
Appearance Appearance242 = createNode("Appearance");
ImageTexture ImageTexture243 = createNode("ImageTexture");
ImageTexture243.url = new MFString(new java.lang.String["shadow70-128.png"]);
Appearance242.texture = ImageTexture243;

Shape241.appearance = Appearance242;

IndexedFaceSet IndexedFaceSet244 = createNode("IndexedFaceSet");
IndexedFaceSet244.solid = False;
IndexedFaceSet244.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate245 = createNode("TextureCoordinate");
TextureCoordinate245.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet244.texCoord = TextureCoordinate245;

Coordinate Coordinate246 = createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet244.coord = Coordinate246;

Shape241.geometry = IndexedFaceSet244;

Transform240.child = new undefined();

Transform240.child[0] = Shape241;

Transform239.children = new MFNode();

Transform239.children[0] = Transform240;

Transform31.children[2] = Transform239;

LOD29.children[1] = Transform31;

Transform Transform247 = createNode("Transform");
LOD29.children[2] = Transform247;

Transform28.children = new MFNode();

Transform28.children[0] = LOD29;

Billboard27.children = new MFNode();

Billboard27.children[0] = Transform28;

Transform26.children = new MFNode();

Transform26.children[0] = Billboard27;

Collision25.proxy = Transform26;

Transform24.children = new MFNode();

Transform24.children[0] = Collision25;

children[4] = Transform24;

Viewpoint Viewpoint248 = createNode("Viewpoint");
Viewpoint248.DEF = "VP1";
Viewpoint248.position = new SFVec3f(new float[-0.372997,1.43562,2.55648]);
Viewpoint248.orientation = new SFRotation(new float[-0.823815,-0.566765,-0.0103506,0.245828]);
children[5] = Viewpoint248;

ROUTE ROUTE249 = createNode("ROUTE");
ROUTE249.fromNode = "_3";
ROUTE249.fromField = "enterTime";
ROUTE249.toNode = "Time_1";
ROUTE249.toField = "set_startTime";
children[6] = ROUTE249;

ROUTE ROUTE250 = createNode("ROUTE");
ROUTE250.fromNode = "Time_1";
ROUTE250.fromField = "fraction_changed";
ROUTE250.toNode = "ArmLRotationInterp";
ROUTE250.toField = "set_fraction";
children[7] = ROUTE250;

ROUTE ROUTE251 = createNode("ROUTE");
ROUTE251.fromNode = "Time_1";
ROUTE251.fromField = "fraction_changed";
ROUTE251.toNode = "ArmLScaleFactorInterp";
ROUTE251.toField = "set_fraction";
children[8] = ROUTE251;

ROUTE ROUTE252 = createNode("ROUTE");
ROUTE252.fromNode = "Time_1";
ROUTE252.fromField = "fraction_changed";
ROUTE252.toNode = "ArmLScaleOrientationInterp_1";
ROUTE252.toField = "set_fraction";
children[9] = ROUTE252;

ROUTE ROUTE253 = createNode("ROUTE");
ROUTE253.fromNode = "Time_1";
ROUTE253.fromField = "fraction_changed";
ROUTE253.toNode = "ArmLScaleInterp";
ROUTE253.toField = "set_fraction";
children[10] = ROUTE253;

ROUTE ROUTE254 = createNode("ROUTE");
ROUTE254.fromNode = "Time_1";
ROUTE254.fromField = "fraction_changed";
ROUTE254.toNode = "ArmLScaleOrientationInterp_2";
ROUTE254.toField = "set_fraction";
children[11] = ROUTE254;

ROUTE ROUTE255 = createNode("ROUTE");
ROUTE255.fromNode = "Time_1";
ROUTE255.fromField = "fraction_changed";
ROUTE255.toNode = "elseTranslationInterp";
ROUTE255.toField = "set_fraction";
children[12] = ROUTE255;

ROUTE ROUTE256 = createNode("ROUTE");
ROUTE256.fromNode = "_2";
ROUTE256.fromField = "whichChoice_changed";
ROUTE256.toNode = "_4";
ROUTE256.toField = "set_whichChoice";
children[13] = ROUTE256;

ROUTE ROUTE257 = createNode("ROUTE");
ROUTE257.fromNode = "ArmLRotationInterp";
ROUTE257.fromField = "value_changed";
ROUTE257.toNode = "ArmL";
ROUTE257.toField = "set_rotation";
children[14] = ROUTE257;

ROUTE ROUTE258 = createNode("ROUTE");
ROUTE258.fromNode = "ArmLScaleFactorInterp";
ROUTE258.fromField = "value_changed";
ROUTE258.toNode = "ArmL";
ROUTE258.toField = "set_scale";
children[15] = ROUTE258;

ROUTE ROUTE259 = createNode("ROUTE");
ROUTE259.fromNode = "ArmLScaleOrientationInterp_1";
ROUTE259.fromField = "value_changed";
ROUTE259.toNode = "ArmL";
ROUTE259.toField = "set_scaleOrientation";
children[16] = ROUTE259;

ROUTE ROUTE260 = createNode("ROUTE");
ROUTE260.fromNode = "_1";
ROUTE260.fromField = "whichChoice_changed";
ROUTE260.toNode = "_6";
ROUTE260.toField = "set_whichChoice";
children[17] = ROUTE260;

ROUTE ROUTE261 = createNode("ROUTE");
ROUTE261.fromNode = "elseTranslationInterp";
ROUTE261.fromField = "value_changed";
ROUTE261.toNode = "else";
ROUTE261.toField = "set_translation";
children[18] = ROUTE261;

}
