#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta3.content = "Wed, 26 Aug 2015 12:17:05 GMT";
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
meta6.content = "Wed, 26 Aug 2015 12:17:05 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "wohnung";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "floor_1";
Collision Collision11 = createNode("Collision");
Collision11.enabled = False;
Transform Transform12 = createNode("Transform");
Transform12.DEF = "text";
Transform Transform13 = createNode("Transform");
Transform13.DEF = "txt-flur";
Transform13.translation = new SFVec3f(new float[-2.30927,-1.38851,-0.672463]);
Transform13.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform13.scale = new SFVec3f(new float[0.0338453,0.0338453,0.0338453]);
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.ambientIntensity = 0;
Material16.diffuseColor = new SFColor(new float[0,0,0]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

Text Text17 = createNode("Text");
Text17.string = new MFString(new java.lang.String[", ","FLUR5,2 qm"]);
Text17.length = new MFFloat(new float[0]);
FontStyle FontStyle18 = createNode("FontStyle");
FontStyle18.family = new MFString(new java.lang.String["SANS"]);
FontStyle18.size = 24;
Text17.fontStyle = FontStyle18;

Shape14.geometry = Text17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "txt-bad";
Transform19.translation = new SFVec3f(new float[-7.23306,-1.38851,-0.672463]);
Transform19.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform19.scale = new SFVec3f(new float[0.0338453,0.0338453,0.0338453]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.ambientIntensity = 0;
Material22.diffuseColor = new SFColor(new float[0,0,0]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Text Text23 = createNode("Text");
Text23.string = new MFString(new java.lang.String[", ","BAD7 qm"]);
Text23.length = new MFFloat(new float[0]);
FontStyle FontStyle24 = createNode("FontStyle");
FontStyle24.family = new MFString(new java.lang.String["SANS"]);
FontStyle24.size = 24;
Text23.fontStyle = FontStyle24;

Shape20.geometry = Text23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Transform12.children[1] = Transform19;

Transform Transform25 = createNode("Transform");
Transform25.DEF = "txt-schlafen";
Transform25.translation = new SFVec3f(new float[-5.03582,-1.38851,3.32777]);
Transform25.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform25.scale = new SFVec3f(new float[0.0338453,0.0338453,0.0338453]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.ambientIntensity = 0;
Material28.diffuseColor = new SFColor(new float[0,0,0]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

Text Text29 = createNode("Text");
Text29.string = new MFString(new java.lang.String[", ","SCHLAFEN14 qm"]);
Text29.length = new MFFloat(new float[0]);
FontStyle FontStyle30 = createNode("FontStyle");
FontStyle30.family = new MFString(new java.lang.String["SANS"]);
FontStyle30.size = 24;
FontStyle30.justify = new MFString(new java.lang.String["MIDDLE"]);
Text29.fontStyle = FontStyle30;

Shape26.geometry = Text29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

Transform12.children[2] = Transform25;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "txt-wohnen";
Transform31.translation = new SFVec3f(new float[0.830791,-1.38851,3.17479]);
Transform31.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform31.scale = new SFVec3f(new float[0.0338453,0.0338453,0.0338453]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.ambientIntensity = 0;
Material34.diffuseColor = new SFColor(new float[0,0,0]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Text Text35 = createNode("Text");
Text35.string = new MFString(new java.lang.String[", ","WOHNEN19,5 qm"]);
Text35.length = new MFFloat(new float[0]);
FontStyle FontStyle36 = createNode("FontStyle");
FontStyle36.family = new MFString(new java.lang.String["SANS"]);
FontStyle36.size = 24;
Text35.fontStyle = FontStyle36;

Shape32.geometry = Text35;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

Transform12.children[3] = Transform31;

Collision11.proxy = Transform12;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "floor";
Transform Transform38 = createNode("Transform");
Transform38.translation = new SFVec3f(new float[-1.32382,-2.95784,-0.616061]);
Transform38.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform38.scale = new SFVec3f(new float[2.2153,1.41953,1.76419]);
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.ambientIntensity = 0.250001;
Material41.diffuseColor = new SFColor(new float[0.845242,0.805714,0.544078]);
Material41.shininess = 0.078125;
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.solid = False;
IndexedFaceSet42.creaseAngle = 0.5;
IndexedFaceSet42.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate43 = createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet42.coord = Coordinate43;

Shape39.geometry = IndexedFaceSet42;

Transform38.children = new MFNode();

Transform38.children[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

Transform Transform44 = createNode("Transform");
Transform44.translation = new SFVec3f(new float[-6.18752,-2.95784,-0.616061]);
Transform44.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform44.scale = new SFVec3f(new float[2.62836,1.41953,1.76419]);
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.ambientIntensity = 0.250001;
Material47.diffuseColor = new SFColor(new float[0.434977,0.456711,0.845242]);
Material47.shininess = 0.078125;
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

IndexedFaceSet IndexedFaceSet48 = createNode("IndexedFaceSet");
IndexedFaceSet48.solid = False;
IndexedFaceSet48.creaseAngle = 0.5;
IndexedFaceSet48.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate49 = createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet48.coord = Coordinate49;

Shape45.geometry = IndexedFaceSet48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

Transform37.children[1] = Transform44;

Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[-4.79598,-2.95784,3.3361]);
Transform50.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform50.scale = new SFVec3f(new float[4.18476,1.41953,2.17788]);
Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.ambientIntensity = 0.250001;
Material53.diffuseColor = new SFColor(new float[0.607151,0.845242,0.621794]);
Material53.shininess = 0.078125;
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

IndexedFaceSet IndexedFaceSet54 = createNode("IndexedFaceSet");
IndexedFaceSet54.solid = False;
IndexedFaceSet54.creaseAngle = 0.5;
IndexedFaceSet54.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet54.coord = Coordinate55;

Shape51.geometry = IndexedFaceSet54;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Transform37.children[2] = Transform50;

Transform Transform56 = createNode("Transform");
Transform56.translation = new SFVec3f(new float[2.43648,-2.95784,1.56487]);
Transform56.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform56.scale = new SFVec3f(new float[2.93924,1.41953,3.94911]);
Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.ambientIntensity = 0.250001;
Material59.diffuseColor = new SFColor(new float[0.845242,0.402292,0.339054]);
Material59.shininess = 0.078125;
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

IndexedFaceSet IndexedFaceSet60 = createNode("IndexedFaceSet");
IndexedFaceSet60.solid = False;
IndexedFaceSet60.creaseAngle = 0.5;
IndexedFaceSet60.coordIndex = new MFInt32(new int[0,1,3,5,4,-1,6,2,4,5,-1]);
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,-1,0.527074,1,1,0.474142,1,-1,0.527074,1,0.113149,1,1,0.113149]);
IndexedFaceSet60.coord = Coordinate61;

Shape57.geometry = IndexedFaceSet60;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

Transform37.children[3] = Transform56;

Collision11.proxy = Transform37;

Transform10.children = new MFNode();

Transform10.children[0] = Collision11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform62 = createNode("Transform");
Transform62.DEF = "walls_1";
Collision Collision63 = createNode("Collision");
Transform Transform64 = createNode("Transform");
Transform64.DEF = "all_wall";
Transform64.center = new SFVec3f(new float[-1.73584,0.294882,1.59514]);
Transform Transform65 = createNode("Transform");
Transform65.DEF = "door1_1";
Transform65.translation = new SFVec3f(new float[2.07972,-0.00410406,2.66504]);
Transform65.rotation = new SFRotation(new float[-0.000506469,1,0.000731444,4.71238]);
Transform65.scale = new SFVec3f(new float[1,0.999999,1]);
Transform65.scaleOrientation = new SFRotation(new float[0.000900465,1,-0.000253043,0.484042]);
Transform Transform66 = createNode("Transform");
Transform66.DEF = "_1";
Transform66.translation = new SFVec3f(new float[-0.00000524521,8.9407e-8,4.76837e-7]);
Transform66.scale = new SFVec3f(new float[0.999996,0.999999,0.999996]);
Transform66.center = new SFVec3f(new float[-1.7764,-0.14077,1.18667]);
Group Group67 = createNode("Group");
Group Group68 = createNode("Group");
Group68.DEF = "door_1";
TimeSensor TimeSensor69 = createNode("TimeSensor");
TimeSensor69.DEF = "Time_1";
TimeSensor69.cycleInterval = 10;
TimeSensor69.stopTime = 1;
Group68.children = new MFNode();

Group68.children[0] = TimeSensor69;

Group67.children = new MFNode();

Group67.children[0] = Group68;

OrientationInterpolator OrientationInterpolator70 = createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "UnnamedTransformRotationInterp_1";
OrientationInterpolator70.key = new MFFloat(new float[0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0.00516748,0,1,0,0.0206816,0,1,0,0.0465238,0,1,0,0.0827116,0,1,0,0.129237,0,1,0,0.186102,0,1,0,0.253305,0,1,0,0.330847,0,1,0,0.418729,0,1,0,0.516949,0,1,0,0.625509,0,1,0,0.744407,0,1,0,0.873644,0,1,0,1.01322,0,1,0,1.16314,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.28326,0,1,0,1.23329,0,1,0,1.17463,0,1,0,1.10845,0,1,0,1.03591,0,1,0,0.958151,0,1,0,0.876344,0,1,0,0.791643,0,1,0,0.705205,0,1,0,0.618188,0,1,0,0.53175,0,1,0,0.447048,0,1,0,0.365241,0,1,0,0.287486,0,1,0,0.214938,0,1,0,0.148761,0,1,0,0.0901058,0,1,0,0.0401349,0,0,1,0]);
Group67.children[1] = OrientationInterpolator70;

OrientationInterpolator OrientationInterpolator71 = createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "UnnamedShapeRotationInterp_1";
OrientationInterpolator71.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1]);
OrientationInterpolator71.keyValue = new MFRotation(new float[0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344]);
Group67.children[2] = OrientationInterpolator71;

Transform66.children = new MFNode();

Transform66.children[0] = Group67;

TouchSensor TouchSensor72 = createNode("TouchSensor");
TouchSensor72.DEF = "Touch_1";
Transform66.children[1] = TouchSensor72;

Transform Transform73 = createNode("Transform");
Transform73.translation = new SFVec3f(new float[-2.92858,-0.102524,1.18925]);
Transform73.rotation = new SFRotation(new float[-1,-0.00000127148,-0.00000127148,1.5708]);
Transform73.scale = new SFVec3f(new float[1,0.710133,4.03724]);
Shape Shape74 = createNode("Shape");
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.DEF = "_2";
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

Box Box77 = createNode("Box");
Box77.size = new SFVec3f(new float[0.107213,0.107213,0.107213]);
Shape74.geometry = Box77;

Transform73.children = new MFNode();

Transform73.children[0] = Shape74;

Transform66.children[2] = Transform73;

Transform Transform78 = createNode("Transform");
Transform78.DEF = "_3";
Transform78.translation = new SFVec3f(new float[-2.90656,0.031126,1.143]);
Transform78.rotation = new SFRotation(new float[0.587158,0.572384,-0.572383,4.20344]);
Transform78.scale = new SFVec3f(new float[0.439526,1.10631,2.58222]);
Transform78.center = new SFVec3f(new float[-0.00176429,-9.15137e-8,0.0436697]);
Shape Shape79 = createNode("Shape");
Appearance Appearance80 = createNode("Appearance");
Material Material81 = createNode("Material");
Material81.USE = "_2";
Appearance80.material = Material81;

Shape79.appearance = Appearance80;

Box Box82 = createNode("Box");
Box82.size = new SFVec3f(new float[0.107213,0.107213,0.107213]);
Shape79.geometry = Box82;

Transform78.children = new MFNode();

Transform78.children[0] = Shape79;

Transform66.children[3] = Transform78;

Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[-1.6882,-0.144074,1.18658]);
Transform83.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform83.scale = new SFVec3f(new float[7.20902,15.5332,0.230572]);
Transform83.center = new SFVec3f(new float[-0.0896799,0.000412353,5.7768e-7]);
Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Material86.ambientIntensity = 0.691489;
Material86.diffuseColor = new SFColor(new float[0.8,0.677123,0.512228]);
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

Box Box87 = createNode("Box");
Box87.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape84.geometry = Box87;

Transform83.children = new MFNode();

Transform83.children[0] = Shape84;

Transform66.children[4] = Transform83;

Transform65.children = new MFNode();

Transform65.children[0] = Transform66;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[-3.11431,-0.0888075,1.10913]);
Transform88.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform88.scale = new SFVec3f(new float[0.631108,16.2186,1.23267]);
Shape Shape89 = createNode("Shape");
Appearance Appearance90 = createNode("Appearance");
Material Material91 = createNode("Material");
Material91.DEF = "_4";
Material91.ambientIntensity = 0.376344;
Material91.diffuseColor = new SFColor(new float[0.989362,0.989362,0.989362]);
Appearance90.material = Material91;

Shape89.appearance = Appearance90;

Box Box92 = createNode("Box");
Box92.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape89.geometry = Box92;

Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

Transform65.children[1] = Transform88;

Transform Transform93 = createNode("Transform");
Transform93.translation = new SFVec3f(new float[-2.43024,1.30279,1.10765]);
Transform93.rotation = new SFRotation(new float[0.707107,-0.707107,-0.000434577,3.14247]);
Transform93.scale = new SFVec3f(new float[0.631108,7.89331,1.23267]);
Shape Shape94 = createNode("Shape");
Appearance Appearance95 = createNode("Appearance");
Material Material96 = createNode("Material");
Material96.USE = "_4";
Appearance95.material = Material96;

Shape94.appearance = Appearance95;

Box Box97 = createNode("Box");
Box97.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape94.geometry = Box97;

Transform93.children = new MFNode();

Transform93.children[0] = Shape94;

Transform65.children[2] = Transform93;

Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[-1.70971,-0.0888075,1.10913]);
Transform98.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform98.scale = new SFVec3f(new float[0.631108,16.2186,1.23267]);
Shape Shape99 = createNode("Shape");
Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.USE = "_4";
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

Box Box102 = createNode("Box");
Box102.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape99.geometry = Box102;

Transform98.children = new MFNode();

Transform98.children[0] = Shape99;

Transform65.children[3] = Transform98;

Transform64.children = new MFNode();

Transform64.children[0] = Transform65;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "door1";
Transform Transform104 = createNode("Transform");
Transform104.DEF = "_5";
Transform104.translation = new SFVec3f(new float[-0.00000524521,8.9407e-8,4.76837e-7]);
Transform104.scale = new SFVec3f(new float[0.999996,0.999999,0.999996]);
Transform104.center = new SFVec3f(new float[-1.7764,-0.14077,1.18667]);
Group Group105 = createNode("Group");
Group Group106 = createNode("Group");
Group106.DEF = "door";
TimeSensor TimeSensor107 = createNode("TimeSensor");
TimeSensor107.DEF = "Time_2";
TimeSensor107.cycleInterval = 10;
TimeSensor107.stopTime = 1;
Group106.children = new MFNode();

Group106.children[0] = TimeSensor107;

Group105.children = new MFNode();

Group105.children[0] = Group106;

OrientationInterpolator OrientationInterpolator108 = createNode("OrientationInterpolator");
OrientationInterpolator108.DEF = "UnnamedTransformRotationInterp_2";
OrientationInterpolator108.key = new MFFloat(new float[0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1]);
OrientationInterpolator108.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0.00516748,0,1,0,0.0206816,0,1,0,0.0465238,0,1,0,0.0827116,0,1,0,0.129237,0,1,0,0.186102,0,1,0,0.253305,0,1,0,0.330847,0,1,0,0.418729,0,1,0,0.516949,0,1,0,0.625509,0,1,0,0.744407,0,1,0,0.873644,0,1,0,1.01322,0,1,0,1.16314,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.28326,0,1,0,1.23329,0,1,0,1.17463,0,1,0,1.10845,0,1,0,1.03591,0,1,0,0.958151,0,1,0,0.876344,0,1,0,0.791643,0,1,0,0.705205,0,1,0,0.618188,0,1,0,0.53175,0,1,0,0.447048,0,1,0,0.365241,0,1,0,0.287486,0,1,0,0.214938,0,1,0,0.148761,0,1,0,0.0901058,0,1,0,0.0401349,0,0,1,0]);
Group105.children[1] = OrientationInterpolator108;

OrientationInterpolator OrientationInterpolator109 = createNode("OrientationInterpolator");
OrientationInterpolator109.DEF = "UnnamedShapeRotationInterp_2";
OrientationInterpolator109.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1]);
OrientationInterpolator109.keyValue = new MFRotation(new float[0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344]);
Group105.children[2] = OrientationInterpolator109;

Transform104.children = new MFNode();

Transform104.children[0] = Group105;

TouchSensor TouchSensor110 = createNode("TouchSensor");
TouchSensor110.DEF = "Touch_2";
Transform104.children[1] = TouchSensor110;

Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[-2.92858,-0.102524,1.18925]);
Transform111.rotation = new SFRotation(new float[-1,-0.00000127148,-0.00000127148,1.5708]);
Transform111.scale = new SFVec3f(new float[1,0.710133,4.03724]);
Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
Material Material114 = createNode("Material");
Material114.DEF = "_6";
Material114.ambientIntensity = 0.16172;
Material114.diffuseColor = new SFColor(new float[0.989362,0.989362,0.989362]);
Appearance113.material = Material114;

Shape112.appearance = Appearance113;

Box Box115 = createNode("Box");
Box115.size = new SFVec3f(new float[0.107213,0.107213,0.107213]);
Shape112.geometry = Box115;

Transform111.children = new MFNode();

Transform111.children[0] = Shape112;

Transform104.children[2] = Transform111;

Transform Transform116 = createNode("Transform");
Transform116.DEF = "_7";
Transform116.translation = new SFVec3f(new float[-2.90656,0.031126,1.143]);
Transform116.rotation = new SFRotation(new float[0.587158,0.572384,-0.572383,4.20344]);
Transform116.scale = new SFVec3f(new float[0.439526,1.10631,2.58222]);
Transform116.center = new SFVec3f(new float[-0.00176429,-9.15137e-8,0.0436697]);
Shape Shape117 = createNode("Shape");
Appearance Appearance118 = createNode("Appearance");
Material Material119 = createNode("Material");
Material119.USE = "_6";
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

Box Box120 = createNode("Box");
Box120.size = new SFVec3f(new float[0.107213,0.107213,0.107213]);
Shape117.geometry = Box120;

Transform116.children = new MFNode();

Transform116.children[0] = Shape117;

Transform104.children[3] = Transform116;

Transform Transform121 = createNode("Transform");
Transform121.translation = new SFVec3f(new float[-1.6882,-0.144074,1.18658]);
Transform121.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform121.scale = new SFVec3f(new float[7.20902,15.5332,0.230572]);
Transform121.center = new SFVec3f(new float[-0.0896799,0.000412353,5.7768e-7]);
Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.ambientIntensity = 0.691489;
Material124.diffuseColor = new SFColor(new float[0.8,0.677123,0.512228]);
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

Box Box125 = createNode("Box");
Box125.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape122.geometry = Box125;

Transform121.children = new MFNode();

Transform121.children[0] = Shape122;

Transform104.children[4] = Transform121;

Transform103.children = new MFNode();

Transform103.children[0] = Transform104;

Transform Transform126 = createNode("Transform");
Transform126.translation = new SFVec3f(new float[-3.11431,-0.0888075,1.10913]);
Transform126.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform126.scale = new SFVec3f(new float[0.631108,16.2186,1.23267]);
Shape Shape127 = createNode("Shape");
Appearance Appearance128 = createNode("Appearance");
Material Material129 = createNode("Material");
Material129.DEF = "_8";
Material129.ambientIntensity = 0.376344;
Material129.diffuseColor = new SFColor(new float[0.989362,0.989362,0.989362]);
Appearance128.material = Material129;

Shape127.appearance = Appearance128;

Box Box130 = createNode("Box");
Box130.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape127.geometry = Box130;

Transform126.children = new MFNode();

Transform126.children[0] = Shape127;

Transform103.children[1] = Transform126;

Transform Transform131 = createNode("Transform");
Transform131.translation = new SFVec3f(new float[-2.43024,1.30279,1.10765]);
Transform131.rotation = new SFRotation(new float[0.707107,-0.707107,-0.000434577,3.14247]);
Transform131.scale = new SFVec3f(new float[0.631108,7.89331,1.23267]);
Shape Shape132 = createNode("Shape");
Appearance Appearance133 = createNode("Appearance");
Material Material134 = createNode("Material");
Material134.USE = "_8";
Appearance133.material = Material134;

Shape132.appearance = Appearance133;

Box Box135 = createNode("Box");
Box135.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape132.geometry = Box135;

Transform131.children = new MFNode();

Transform131.children[0] = Shape132;

Transform103.children[2] = Transform131;

Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[-1.70971,-0.0888075,1.10913]);
Transform136.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform136.scale = new SFVec3f(new float[0.631108,16.2186,1.23267]);
Shape Shape137 = createNode("Shape");
Appearance Appearance138 = createNode("Appearance");
Material Material139 = createNode("Material");
Material139.USE = "_8";
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

Box Box140 = createNode("Box");
Box140.size = new SFVec3f(new float[0.178747,0.178746,0.178745]);
Shape137.geometry = Box140;

Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

Transform103.children[3] = Transform136;

Transform64.children[1] = Transform103;

Transform Transform141 = createNode("Transform");
Transform141.DEF = "walls";
Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[-0.0280126,-1.53561,1.35645]);
Transform142.rotation = new SFRotation(new float[-1,0,0,1.56956]);
Transform142.scale = new SFVec3f(new float[9.35746,9.35746,13.4537]);
Shape Shape143 = createNode("Shape");
Appearance Appearance144 = createNode("Appearance");
Material Material145 = createNode("Material");
Material145.DEF = "_9";
Material145.ambientIntensity = 0.790323;
Material145.diffuseColor = new SFColor(new float[0.659574,0.659574,0.659574]);
Material145.shininess = 0;
Appearance144.material = Material145;

Shape143.appearance = Appearance144;

IndexedFaceSet IndexedFaceSet146 = createNode("IndexedFaceSet");
IndexedFaceSet146.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1]);
Coordinate Coordinate147 = createNode("Coordinate");
Coordinate147.point = new MFVec3f(new float[-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8]);
IndexedFaceSet146.coord = Coordinate147;

Shape143.geometry = IndexedFaceSet146;

Transform142.children = new MFNode();

Transform142.children[0] = Shape143;

Transform141.children = new MFNode();

Transform141.children[0] = Transform142;

Transform Transform148 = createNode("Transform");
Transform148.translation = new SFVec3f(new float[-0.0280126,-1.53561,1.35645]);
Transform148.rotation = new SFRotation(new float[-1,0,0,1.56956]);
Transform148.scale = new SFVec3f(new float[9.35746,9.35746,13.4537]);
Shape Shape149 = createNode("Shape");
Appearance Appearance150 = createNode("Appearance");
Material Material151 = createNode("Material");
Material151.USE = "_9";
Appearance150.material = Material151;

Shape149.appearance = Appearance150;

IndexedFaceSet IndexedFaceSet152 = createNode("IndexedFaceSet");
IndexedFaceSet152.colorPerVertex = False;
IndexedFaceSet152.colorIndex = new MFInt32(new int[0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0]);
IndexedFaceSet152.coordIndex = new MFInt32(new int[19,22,8,7,-1,24,23,9,10,-1,26,25,11,12,-1,27,28,14,13,-1,29,30,16,15,-1,32,31,17,18,-1,50,51,52,53,-1,53,52,54,55,-1,56,50,53,55,-1,55,54,57,56,-1,51,57,54,52,-1,56,57,51,50,-1,60,84,59,61,62,-1,65,66,67,68,-1,68,67,69,70,-1,71,65,68,70,-1,70,69,72,71,-1,66,72,69,67,-1,71,72,66,65,-1,76,75,78,77,-1,73,78,75,74,-1,32,30,29,31,-1,15,16,18,17,-1,31,37,2,17,-1,29,81,37,31,-1,6,5,33,34,-1,21,34,33,20,-1,24,22,19,23,-1,7,8,10,9,-1,3,4,21,20,-1,28,27,25,26,-1,13,14,12,11,-1,35,36,0,1,-1,9,23,35,1,-1,23,19,35,-1,33,5,2,37,-1,20,33,37,-1,19,20,37,35,-1,9,1,3,7,-1,3,20,19,7,-1,79,28,26,36,-1,26,12,0,36,-1,79,80,14,28,-1,12,14,80,0,-1,83,58,59,84,-1,85,45,47,86,-1,84,60,46,85,-1,86,83,84,85,-1,49,48,88,87,-1,82,91,90,-1,91,87,90,-1,87,89,90,-1,82,90,46,60,62,63,-1,80,79,63,64,-1,15,17,2,48,-1,81,29,15,48,-1,95,93,92,94,-1,96,42,43,97,-1,98,73,74,99,-1,99,96,97,98,-1,99,74,75,76,-1,99,76,41,96,-1,40,42,96,41,-1,89,87,38,-1,87,88,44,41,-1,38,87,41,-1,45,85,46,90,89,38,39,-1,38,41,76,77,-1,97,43,39,38,-1,77,98,97,38,-1,77,78,73,98,-1]);
Color Color153 = createNode("Color");
Color153.color = new MFColor(new float[0.659574,0.659574,0.659574,0,0.0187199,0.0481283]);
IndexedFaceSet152.color = Color153;

Coordinate Coordinate154 = createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[-0.918773,0.379005,0,0.55397,0.379005,0,0.55397,-0.422948,0,0.55397,-0.131194,0,0.597169,-0.131194,0,0.55397,-0.289109,0,0.597169,-0.289109,0,0.55397,0.106842,0.0797785,0.597169,0.106842,0.0797785,0.55397,0.265779,0.0797785,0.597169,0.265779,0.0797785,-0.962286,0.212139,0.0797785,-0.918773,0.212139,0.0797785,-0.962286,0.0568306,0.0797785,-0.918773,0.0568306,0.0797785,0.0640951,-0.422948,0.0797785,0.0641975,-0.456811,0.0797785,0.217765,-0.422948,0.0797785,0.217866,-0.456346,0.0797785,0.55397,0.106842,0.211901,0.55397,-0.131194,0.211901,0.597169,-0.131194,0.211901,0.597169,0.106842,0.211901,0.55397,0.265779,0.211901,0.597169,0.265779,0.211901,-0.962286,0.212139,0.211901,-0.918773,0.212139,0.211901,-0.962286,0.0568306,0.211901,-0.918773,0.0568306,0.211901,0.0640951,-0.422948,0.211901,0.0641975,-0.456811,0.211901,0.217765,-0.422948,0.211901,0.217866,-0.456346,0.211901,0.55397,-0.289109,0.211901,0.597169,-0.289109,0.211901,0.55397,0.379005,0.27253,-0.918773,0.379005,0.27253,0.55397,-0.422948,0.27253,0.0999169,0.0370409,0.27253,0.0999169,0.0370413,2.29598e-7,0.114918,0.0164737,2.23517e-7,0.114918,0.0164733,0.27253,0.114918,0.0451801,2.83122e-7,0.0999169,0.0451801,2.83122e-7,0.114918,0.0164736,1.63913e-7,-0.18324,0.0370424,1.67359e-7,-0.156861,0.0370419,0.27253,-0.18392,0.0164746,1.63913e-7,-0.0490293,-0.422947,-2.68221e-7,-0.0490293,-0.422948,0.27253,-0.385034,0.0193376,0.270995,-0.385034,0.019338,2.23517e-7,-0.364466,0.019338,2.23517e-7,-0.364466,0.0193376,0.270995,-0.364466,0.0621717,2.83122e-7,-0.364466,0.0621713,0.270995,-0.385034,0.0621713,0.270995,-0.385034,0.0621717,2.83122e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0370417,1.93715e-7,-0.326241,0.0370413,0.27253,-0.918773,0.0370423,2.23517e-7,-0.918773,0.037042,0.27253,-0.918773,0.0164741,0.27253,-0.918773,0.0164745,1.93715e-7,-0.385034,0.174854,0.270995,-0.385034,0.174854,4.02331e-7,-0.364466,0.174854,4.02331e-7,-0.364466,0.174854,0.270995,-0.364466,0.383761,6.4075e-7,-0.364466,0.383761,0.270996,-0.385034,0.383761,0.270996,-0.385034,0.383761,6.4075e-7,0.0999169,0.196089,3.72529e-7,0.114918,0.196089,3.42727e-7,0.114918,0.383761,5.51343e-7,0.114918,0.383761,0.27253,0.0999169,0.383761,0.27253,0.0999169,0.383761,5.81145e-7,-0.918773,0.0300454,0.27253,-0.918773,0.0300454,0,-0.0490293,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.326241,0.0164736,0.215145,-0.326241,0.0370414,0.215145,-0.18324,0.0370421,0.215145,-0.18392,0.0164743,0.215145,-0.0490292,0.0164738,0.27253,-0.0490292,0.0164745,2.10643e-7,-0.0640303,0.0370415,0.27253,-0.0743143,0.0370416,0.27253,-0.0593131,0.0164738,0.27253,-0.0695971,-0.422948,0.27253,-0.0695971,0.0279736,0.27253,-0.0490293,-0.422948,0.27253,-0.0490292,0.0279736,0.27253,0.114918,0.0451798,0.210192,0.0999169,0.0451798,0.210192,0.0999169,0.196089,0.208979,0.114918,0.196089,0.208979]);
IndexedFaceSet152.coord = Coordinate154;

Shape149.geometry = IndexedFaceSet152;

Transform148.children = new MFNode();

Transform148.children[0] = Shape149;

Transform141.children[1] = Transform148;

Transform Transform155 = createNode("Transform");
Transform155.translation = new SFVec3f(new float[-0.0280126,-1.53561,1.35645]);
Transform155.rotation = new SFRotation(new float[-1,0,0,1.56956]);
Transform155.scale = new SFVec3f(new float[9.35746,9.35746,13.4537]);
Shape Shape156 = createNode("Shape");
Appearance Appearance157 = createNode("Appearance");
Material Material158 = createNode("Material");
Material158.USE = "_9";
Appearance157.material = Material158;

Shape156.appearance = Appearance157;

IndexedFaceSet IndexedFaceSet159 = createNode("IndexedFaceSet");
IndexedFaceSet159.solid = False;
IndexedFaceSet159.colorPerVertex = False;
IndexedFaceSet159.colorIndex = new MFInt32(new int[0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0]);
IndexedFaceSet159.coordIndex = new MFInt32(new int[0,1,2,3,-1,2,4,3,-1,5,3,4,6,-1,5,6,7,-1,7,2,1,8,-1,5,7,8,9,-1,10,9,0,11,-1,12,0,3,13,14,-1,11,0,12,15,-1,11,15,16,17,-1,10,11,18,19,-1,20,18,11,-1,20,11,21,-1,11,17,21,-1,20,21,22,23,-1,23,22,10,19,-1,24,25,26,17,-1,17,26,21,-1,27,13,3,17,16,-1,8,28,9,-1,9,28,29,0,-1,0,29,1,-1,30,3,5,31,-1,30,32,17,3,-1,32,33,24,17,-1,5,24,33,31,-1]);
Color Color160 = createNode("Color");
Color160.color = new MFColor(new float[0.659574,0.659574,0.659574,0,0.0187199,0.0481283]);
IndexedFaceSet159.color = Color160;

Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[-0.962286,0.409388,0.27253,-0.962286,0.0568306,0.211901,-0.962286,-0.104811,0.211901,-0.962174,-0.459919,0.27253,-0.962286,-0.342562,0.211901,-0.962174,-0.459919,0,-0.962286,-0.342562,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,0.0568306,0.0797785,-0.962286,0.409388,0,0.597169,0.409388,0,0.597169,0.409388,0.27253,-0.918773,0.379005,0.27253,-0.918773,-0.422948,0.27253,-0.918773,0.0300454,0.27253,0.55397,0.379005,0.27253,0.55397,-0.422948,0.27253,0.597267,-0.455197,0.27253,0.597169,0.265779,0.211901,0.597169,0.265779,0.0797785,0.597169,0.106842,0.211901,0.597169,-0.131194,0.211901,0.597169,-0.131194,0,0.597169,0.106842,0.0797785,0.597267,-0.455197,0,0.597169,-0.289109,0,0.597169,-0.289109,0.211901,-0.0597836,-0.422948,0.27253,-0.962286,0.212139,0.0797785,-0.962286,0.212139,0.211901,0.0641975,-0.456811,0.211901,0.0641975,-0.456811,0.0797785,0.217866,-0.456346,0.211901,0.217866,-0.456346,0.0797785]);
IndexedFaceSet159.coord = Coordinate161;

Shape156.geometry = IndexedFaceSet159;

Transform155.children = new MFNode();

Transform155.children[0] = Shape156;

Transform141.children[2] = Transform155;

Transform64.children[2] = Transform141;

Collision63.proxy = Transform64;

Transform62.children = new MFNode();

Transform62.children[0] = Collision63;

Transform9.children[1] = Transform62;

Transform Transform162 = createNode("Transform");
Transform162.DEF = "ebene";
Shape Shape163 = createNode("Shape");
Appearance Appearance164 = createNode("Appearance");
Material Material165 = createNode("Material");
Material165.ambientIntensity = 0.790323;
Material165.diffuseColor = new SFColor(new float[0.659574,0.659574,0.659574]);
Material165.shininess = 0;
Appearance164.material = Material165;

Shape163.appearance = Appearance164;

IndexedFaceSet IndexedFaceSet166 = createNode("IndexedFaceSet");
IndexedFaceSet166.creaseAngle = 0.5;
IndexedFaceSet166.coordIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1]);
Coordinate Coordinate167 = createNode("Coordinate");
Coordinate167.point = new MFVec3f(new float[-8.99842,-1.54875,-2.45919,-8.99842,-1.54875,5.57903,5.55036,-1.54875,5.57903,5.55036,-1.54875,-2.45919]);
IndexedFaceSet166.coord = Coordinate167;

Shape163.geometry = IndexedFaceSet166;

Transform162.children = new MFNode();

Transform162.children[0] = Shape163;

Transform9.children[2] = Transform162;

Collision Collision168 = createNode("Collision");
Collision168.enabled = False;
Transform Transform169 = createNode("Transform");
Shape Shape170 = createNode("Shape");
Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.ambientIntensity = 0.790323;
Material172.diffuseColor = new SFColor(new float[0.659574,0.659574,0.659574]);
Material172.shininess = 0;
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

IndexedFaceSet IndexedFaceSet173 = createNode("IndexedFaceSet");
IndexedFaceSet173.creaseAngle = 0.5;
IndexedFaceSet173.coordIndex = new MFInt32(new int[3,2,1,0,-1]);
Coordinate Coordinate174 = createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[-9.00445,2.14621,5.56747,5.49389,2.14621,5.56747,5.49389,2.14621,-2.42974,-9.00445,2.14621,-2.42974]);
IndexedFaceSet173.coord = Coordinate174;

Shape170.geometry = IndexedFaceSet173;

Transform169.children = new MFNode();

Transform169.children[0] = Shape170;

Collision168.proxy = Transform169;

Transform9.children[3] = Collision168;

children[1] = Transform9;

DirectionalLight DirectionalLight175 = createNode("DirectionalLight");
DirectionalLight175.DEF = "Light1";
DirectionalLight175.ambientIntensity = 1;
DirectionalLight175.direction = new SFVec3f(new float[0.572447,-0.644191,-0.50727]);
children[2] = DirectionalLight175;

Transform Transform176 = createNode("Transform");
Transform176.DEF = "texture-sleep_1";
Switch Switch177 = createNode("Switch");
Switch177.DEF = "_10";
Switch177.whichChoice = 0;
Transform Transform178 = createNode("Transform");
Switch177.children = new MFNode();

Switch177.children[0] = Transform178;

Transform Transform179 = createNode("Transform");
Transform179.DEF = "texture-sleep";
Transform Transform180 = createNode("Transform");
Transform180.DEF = "room_no-collide";
Collision Collision181 = createNode("Collision");
Collision181.enabled = False;
Transform Transform182 = createNode("Transform");
Transform182.DEF = "moebel";
Transform Transform183 = createNode("Transform");
Transform183.DEF = "schrank";
Transform183.translation = new SFVec3f(new float[-1.26166,-0.218976,3.35488]);
Transform183.rotation = new SFRotation(new float[0.000621337,-1,-0.000618129,1.56562]);
Transform183.scale = new SFVec3f(new float[1.84464,1.3191,0.425435]);
Shape Shape184 = createNode("Shape");
Appearance Appearance185 = createNode("Appearance");
Material Material186 = createNode("Material");
Material186.DEF = "_11";
Material186.ambientIntensity = 0.691489;
Material186.diffuseColor = new SFColor(new float[1,1,1]);
Material186.emissiveColor = new SFColor(new float[0.180851,0.180851,0.180851]);
Appearance185.material = Material186;

ImageTexture ImageTexture187 = createNode("ImageTexture");
ImageTexture187.DEF = "_12";
ImageTexture187.url = new MFString(new java.lang.String["schrank_dunkel128.png"]);
Appearance185.texture = ImageTexture187;

Shape184.appearance = Appearance185;

IndexedFaceSet IndexedFaceSet188 = createNode("IndexedFaceSet");
IndexedFaceSet188.creaseAngle = 0.5;
IndexedFaceSet188.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,26,27,14,6,8,28,29,-1,10,4,12,0,1,3,2,-1,5,24,25,7,-1,11,18,19,9,-1,16,17,20,21,-1,13,22,23,15,-1]);
IndexedFaceSet188.coordIndex = new MFInt32(new int[4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,13,9,10,2,4,-1,11,8,12,1,7,5,3,-1,8,11,10,9,-1,11,3,2,10,-1,0,1,12,13,-1,12,8,9,13,-1]);
TextureCoordinate TextureCoordinate189 = createNode("TextureCoordinate");
TextureCoordinate189.point = new MFVec2f(new float[0.485065,0.999081,0.485065,-0.000919342,1,1,1,0,0.5,1,0.0153094,0,0.737301,-0.00000224775,0.0153094,0.999837,0.867013,-0.00000224775,0.0153094,0.999837,0.75,1,0.0153094,0,0.25,1,0.0153094,0,0.607589,-0.00000224775,0.0153094,0.999837,0.0153094,0.999837,0.0153094,0,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.477877,0.997553,0.477877,-0.00000224775,0.996724,-0.00000224775,0.996724,0.997553]);
IndexedFaceSet188.texCoord = TextureCoordinate189;

Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,0,-1,1,0,1,1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1]);
IndexedFaceSet188.coord = Coordinate190;

Shape184.geometry = IndexedFaceSet188;

Transform183.children = new MFNode();

Transform183.children[0] = Shape184;

Transform182.children = new MFNode();

Transform182.children[0] = Transform183;

Transform Transform191 = createNode("Transform");
Transform191.DEF = "nachtschrank1";
Transform191.translation = new SFVec3f(new float[-2.87892,-1.21038,4.95799]);
Transform191.rotation = new SFRotation(new float[0.000614949,1,0.000618131,1.57596]);
Transform191.scale = new SFVec3f(new float[3.29672,3.29673,3.53468]);
Shape Shape192 = createNode("Shape");
Appearance Appearance193 = createNode("Appearance");
Material Material194 = createNode("Material");
Material194.USE = "_11";
Appearance193.material = Material194;

ImageTexture ImageTexture195 = createNode("ImageTexture");
ImageTexture195.USE = "_12";
Appearance193.texture = ImageTexture195;

Shape192.appearance = Appearance193;

IndexedFaceSet IndexedFaceSet196 = createNode("IndexedFaceSet");
IndexedFaceSet196.creaseAngle = 0.5;
IndexedFaceSet196.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet196.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
TextureCoordinate TextureCoordinate197 = createNode("TextureCoordinate");
TextureCoordinate197.point = new MFVec2f(new float[0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716]);
IndexedFaceSet196.texCoord = TextureCoordinate197;

Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1]);
IndexedFaceSet196.coord = Coordinate198;

Shape192.geometry = IndexedFaceSet196;

Transform191.children = new MFNode();

Transform191.children[0] = Shape192;

Transform182.children[1] = Transform191;

Transform Transform199 = createNode("Transform");
Transform199.DEF = "nachtschrank2";
Transform199.translation = new SFVec3f(new float[-6.52379,-1.21041,4.97681]);
Transform199.rotation = new SFRotation(new float[0.000614949,1,0.000618131,1.57596]);
Transform199.scale = new SFVec3f(new float[3.29672,3.29673,3.53468]);
Shape Shape200 = createNode("Shape");
Appearance Appearance201 = createNode("Appearance");
Material Material202 = createNode("Material");
Material202.USE = "_11";
Appearance201.material = Material202;

ImageTexture ImageTexture203 = createNode("ImageTexture");
ImageTexture203.USE = "_12";
Appearance201.texture = ImageTexture203;

Shape200.appearance = Appearance201;

IndexedFaceSet IndexedFaceSet204 = createNode("IndexedFaceSet");
IndexedFaceSet204.creaseAngle = 0.5;
IndexedFaceSet204.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet204.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
TextureCoordinate TextureCoordinate205 = createNode("TextureCoordinate");
TextureCoordinate205.point = new MFVec2f(new float[0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716]);
IndexedFaceSet204.texCoord = TextureCoordinate205;

Coordinate Coordinate206 = createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1]);
IndexedFaceSet204.coord = Coordinate206;

Shape200.geometry = IndexedFaceSet204;

Transform199.children = new MFNode();

Transform199.children[0] = Shape200;

Transform182.children[2] = Transform199;

Transform Transform207 = createNode("Transform");
Transform207.DEF = "kommode";
Transform207.translation = new SFVec3f(new float[-7.72612,-1.20631,1.66272]);
Transform207.rotation = new SFRotation(new float[0.000618533,-1,-0.000618759,1.57078]);
Transform207.scale = new SFVec3f(new float[3.29672,3.29673,8.10267]);
Shape Shape208 = createNode("Shape");
Appearance Appearance209 = createNode("Appearance");
Material Material210 = createNode("Material");
Material210.USE = "_11";
Appearance209.material = Material210;

ImageTexture ImageTexture211 = createNode("ImageTexture");
ImageTexture211.USE = "_12";
Appearance209.texture = ImageTexture211;

Shape208.appearance = Appearance209;

IndexedFaceSet IndexedFaceSet212 = createNode("IndexedFaceSet");
IndexedFaceSet212.creaseAngle = 0.5;
IndexedFaceSet212.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,11,2,-1,0,1,3,9,2,-1,4,5,12,13,-1,8,6,7,10,-1]);
IndexedFaceSet212.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,6,0,2,9,4,-1,1,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1]);
TextureCoordinate TextureCoordinate213 = createNode("TextureCoordinate");
TextureCoordinate213.point = new MFVec2f(new float[0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.440312,0.994282,0.440312,0.00105374,0.445231,-0.000790729,0.445231,0.992437,0.0145956,-0.000790729,1,0.5,0.0145956,0.992437,1,0.5,0.013069,-0.00208779,0.013069,0.99114]);
IndexedFaceSet212.texCoord = TextureCoordinate213;

Coordinate Coordinate214 = createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0,0.1,0.1,0]);
IndexedFaceSet212.coord = Coordinate214;

Shape208.geometry = IndexedFaceSet212;

Transform207.children = new MFNode();

Transform207.children[0] = Shape208;

Transform182.children[3] = Transform207;

Transform Transform215 = createNode("Transform");
Transform215.DEF = "bett";
Transform Transform216 = createNode("Transform");
Transform216.DEF = "matratze";
Transform216.translation = new SFVec3f(new float[-4.68535,-1.04265,3.81501]);
Transform216.rotation = new SFRotation(new float[4.16334e-16,1,0.00061813,3.14159]);
Transform216.scale = new SFVec3f(new float[11.9506,1.48808,12.1488]);
Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.ambientIntensity = 0;
Material219.diffuseColor = new SFColor(new float[0.357752,0.457447,0.341974]);
Material219.emissiveColor = new SFColor(new float[0.141437,0.180851,0.135199]);
Material219.shininess = 0;
Appearance218.material = Material219;

ImageTexture ImageTexture220 = createNode("ImageTexture");
ImageTexture220.url = new MFString(new java.lang.String["plaid.png"]);
Appearance218.texture = ImageTexture220;

TextureTransform TextureTransform221 = createNode("TextureTransform");
TextureTransform221.scale = new SFVec2f(new float[4,4]);
Appearance218.textureTransform = TextureTransform221;

Shape217.appearance = Appearance218;

IndexedFaceSet IndexedFaceSet222 = createNode("IndexedFaceSet");
IndexedFaceSet222.creaseAngle = 3.14159;
IndexedFaceSet222.texCoordIndex = new MFInt32(new int[2,3,4,5,-1,6,7,1,0,-1,0,1,3,2,-1,5,4,7,6,-1,0,2,5,6,-1]);
IndexedFaceSet222.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1]);
TextureCoordinate TextureCoordinate223 = createNode("TextureCoordinate");
TextureCoordinate223.point = new MFVec2f(new float[0.0529627,0.947037,0,1,0.0529627,0.0529626,0,0,1,0,0.947037,0.0529626,0.947037,0.947037,1,1]);
IndexedFaceSet222.texCoord = TextureCoordinate223;

Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[-0.1,-0.0133314,0.1,-0.111847,-0.1,0.111847,0.1,-0.0133314,0.1,0.111847,-0.1,0.111847,0.1,-0.0133314,-0.1,0.111847,-0.1,-0.111847,-0.1,-0.0133314,-0.1,-0.111847,-0.1,-0.111847]);
IndexedFaceSet222.coord = Coordinate224;

Shape217.geometry = IndexedFaceSet222;

Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

Transform215.children = new MFNode();

Transform215.children[0] = Transform216;

Transform Transform225 = createNode("Transform");
Transform225.DEF = "bettkasten";
Transform225.translation = new SFVec3f(new float[-4.68535,-1.35494,3.81463]);
Transform225.rotation = new SFRotation(new float[2.22045e-16,1,0.00061813,3.14159]);
Transform225.scale = new SFVec3f(new float[14.7529,1.83703,14.9976]);
Shape Shape226 = createNode("Shape");
Appearance Appearance227 = createNode("Appearance");
Material Material228 = createNode("Material");
Material228.USE = "_11";
Appearance227.material = Material228;

ImageTexture ImageTexture229 = createNode("ImageTexture");
ImageTexture229.USE = "_12";
Appearance227.texture = ImageTexture229;

Shape226.appearance = Appearance227;

IndexedFaceSet IndexedFaceSet230 = createNode("IndexedFaceSet");
IndexedFaceSet230.creaseAngle = 0.5;
IndexedFaceSet230.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet230.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
TextureCoordinate TextureCoordinate231 = createNode("TextureCoordinate");
TextureCoordinate231.point = new MFVec2f(new float[0.525544,1.00043,0.525544,0.000431776,1,1,1,0]);
IndexedFaceSet230.texCoord = TextureCoordinate231;

Coordinate Coordinate232 = createNode("Coordinate");
Coordinate232.point = new MFVec3f(new float[-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1]);
IndexedFaceSet230.coord = Coordinate232;

Shape226.geometry = IndexedFaceSet230;

Transform225.children = new MFNode();

Transform225.children[0] = Shape226;

Transform215.children[1] = Transform225;

Transform182.children[4] = Transform215;

Collision181.proxy = Transform182;

Transform Transform233 = createNode("Transform");
Transform233.DEF = "accessoires";
Transform Transform234 = createNode("Transform");
Transform234.DEF = "poster";
Transform234.translation = new SFVec3f(new float[-4.75627,0.3135,5.30164]);
Transform234.scale = new SFVec3f(new float[1.5185,1.5185,1.51852]);
Shape Shape235 = createNode("Shape");
Appearance Appearance236 = createNode("Appearance");
ImageTexture ImageTexture237 = createNode("ImageTexture");
ImageTexture237.url = new MFString(new java.lang.String["poster.png"]);
Appearance236.texture = ImageTexture237;

Shape235.appearance = Appearance236;

IndexedFaceSet IndexedFaceSet238 = createNode("IndexedFaceSet");
IndexedFaceSet238.solid = False;
IndexedFaceSet238.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate239 = createNode("TextureCoordinate");
TextureCoordinate239.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet238.texCoord = TextureCoordinate239;

Coordinate Coordinate240 = createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[-0.746,-0.5,0,0.746,-0.5,0,0.746,0.5,0,-0.746,0.5,0]);
IndexedFaceSet238.coord = Coordinate240;

Shape235.geometry = IndexedFaceSet238;

Transform234.children = new MFNode();

Transform234.children[0] = Shape235;

Transform233.children = new MFNode();

Transform233.children[0] = Transform234;

Transform Transform241 = createNode("Transform");
Transform241.DEF = "pflanze";
Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[-7.47428,-1.37334,4.31764]);
Transform242.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform242.scale = new SFVec3f(new float[1.38524,1.38524,1.38524]);
Shape Shape243 = createNode("Shape");
Appearance Appearance244 = createNode("Appearance");
Material Material245 = createNode("Material");
Material245.ambientIntensity = 0.442353;
Material245.diffuseColor = new SFColor(new float[0.361702,0,0.0373073]);
Appearance244.material = Material245;

Shape243.appearance = Appearance244;

IndexedFaceSet IndexedFaceSet246 = createNode("IndexedFaceSet");
IndexedFaceSet246.creaseAngle = 0.5;
IndexedFaceSet246.coordIndex = new MFInt32(new int[0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1,32,31,29,-1,32,29,27,-1,32,27,25,-1,32,25,23,-1,32,23,21,-1,32,21,19,-1,32,19,17,-1,32,17,15,-1,32,15,13,-1,32,13,11,-1,32,11,9,-1,32,9,7,-1,32,7,5,-1,32,5,3,-1,32,3,1,-1,32,1,31,-1,33,0,2,-1,33,2,4,-1,33,4,6,-1,33,6,8,-1,33,8,10,-1,33,10,12,-1,33,12,14,-1,33,14,16,-1,33,16,18,-1,33,18,20,-1,33,20,22,-1,33,22,24,-1,33,24,26,-1,33,26,28,-1,33,28,30,-1,33,30,0,-1]);
Coordinate Coordinate247 = createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0,-0.1,-0.1,-3.72529e-8,0.1,-0.130838,0.0382683,-0.1,-0.092388,0.0500695,0.1,-0.120879,0.0707107,-0.1,-0.0707107,0.0925166,0.1,-0.0925166,0.092388,-0.1,-0.0382683,0.120879,0.1,-0.0500695,0.1,-0.1,4.37114e-9,0.130838,0.1,2.23517e-8,0.092388,-0.1,0.0382684,0.120879,0.1,0.0500697,0.0707107,-0.1,0.0707107,0.0925166,0.1,0.0925166,0.0382683,-0.1,0.092388,0.0500695,0.1,0.120879,1.50996e-8,-0.1,0.1,-1.49012e-8,0.1,0.130838,-0.0382683,-0.1,0.092388,-0.0500696,0.1,0.120879,-0.0707107,-0.1,0.0707107,-0.0925166,0.1,0.0925166,-0.092388,-0.1,0.0382684,-0.120879,0.1,0.0500697,-0.1,-0.1,-1.19249e-9,-0.130838,0.1,2.98023e-8,-0.0923879,-0.1,-0.0382684,-0.120879,0.1,-0.0500697,-0.0707107,-0.1,-0.0707107,-0.0925166,0.1,-0.0925166,-0.0382683,-0.1,-0.092388,-0.0500696,0.1,-0.120879,-2.59947e-8,0.1,2.59947e-8,0,-0.1,0]);
IndexedFaceSet246.coord = Coordinate247;

Shape243.geometry = IndexedFaceSet246;

Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

Transform241.children = new MFNode();

Transform241.children[0] = Transform242;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[-7.47388,-0.26519,4.31929]);
Transform248.rotation = new SFRotation(new float[0,-1,0,0.421223]);
Transform248.scale = new SFVec3f(new float[0.670034,1.99229,0.670032]);
Transform248.scaleOrientation = new SFRotation(new float[0,-1,0,0.0185162]);
Shape Shape249 = createNode("Shape");
Appearance Appearance250 = createNode("Appearance");
ImageTexture ImageTexture251 = createNode("ImageTexture");
ImageTexture251.url = new MFString(new java.lang.String["baum1.png"]);
Appearance250.texture = ImageTexture251;

Shape249.appearance = Appearance250;

IndexedFaceSet IndexedFaceSet252 = createNode("IndexedFaceSet");
IndexedFaceSet252.solid = False;
IndexedFaceSet252.colorIndex = new MFInt32(new int[-1]);
IndexedFaceSet252.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate253 = createNode("TextureCoordinate");
TextureCoordinate253.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet252.texCoord = TextureCoordinate253;

Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,5.36441e-7,-0.5,-0.5,-0.00000149012,-0.5,0.5,-0.00000149012,0.5,0.5,5.36441e-7,0.5,-0.5]);
IndexedFaceSet252.coord = Coordinate254;

Shape249.geometry = IndexedFaceSet252;

Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

Transform241.children[1] = Transform248;

Transform233.children[1] = Transform241;

Collision181.proxy = Transform233;

Transform Transform255 = createNode("Transform");
Transform255.DEF = "raum";
Transform Transform256 = createNode("Transform");
Transform256.DEF = "decke";
Transform256.translation = new SFVec3f(new float[-0.0280126,-1.53561,1.35645]);
Transform256.rotation = new SFRotation(new float[-1,0,0,1.56956]);
Transform256.scale = new SFVec3f(new float[9.35746,9.35746,13.4537]);
Shape Shape257 = createNode("Shape");
Appearance Appearance258 = createNode("Appearance");
Material Material259 = createNode("Material");
Material259.ambientIntensity = 1;
Material259.diffuseColor = new SFColor(new float[0.901179,0.969637,1]);
Material259.emissiveColor = new SFColor(new float[0.38348,0.412612,0.425532]);
Appearance258.material = Material259;

ImageTexture ImageTexture260 = createNode("ImageTexture");
ImageTexture260.DEF = "_13";
ImageTexture260.url = new MFString(new java.lang.String["speck.paper.png"]);
Appearance258.texture = ImageTexture260;

TextureTransform TextureTransform261 = createNode("TextureTransform");
TextureTransform261.DEF = "_14";
TextureTransform261.scale = new SFVec2f(new float[2.89501,1]);
Appearance258.textureTransform = TextureTransform261;

Shape257.appearance = Appearance258;

IndexedFaceSet IndexedFaceSet262 = createNode("IndexedFaceSet");
IndexedFaceSet262.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate263 = createNode("TextureCoordinate");
TextureCoordinate263.point = new MFVec2f(new float[0,0,0,0.511752,1,0.511752,1,0]);
IndexedFaceSet262.texCoord = TextureCoordinate263;

Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[-0.918773,-0.422948,0.27253,-0.918773,0.0164741,0.27253,-0.0601114,0.0164738,0.27253,-0.0601114,-0.422948,0.27253]);
IndexedFaceSet262.coord = Coordinate264;

Shape257.geometry = IndexedFaceSet262;

Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

Transform255.children = new MFNode();

Transform255.children[0] = Transform256;

Transform Transform265 = createNode("Transform");
Transform265.DEF = "tapete";
Transform265.translation = new SFVec3f(new float[-0.0280126,-1.53561,1.35645]);
Transform265.rotation = new SFRotation(new float[-1,0,0,1.56956]);
Transform265.scale = new SFVec3f(new float[9.35746,9.35746,13.4537]);
Shape Shape266 = createNode("Shape");
Appearance Appearance267 = createNode("Appearance");
Material Material268 = createNode("Material");
Material268.ambientIntensity = 0.980392;
Material268.diffuseColor = new SFColor(new float[0.542553,0.542553,0.542553]);
Material268.shininess = 0.148936;
Appearance267.material = Material268;

ImageTexture ImageTexture269 = createNode("ImageTexture");
ImageTexture269.USE = "_13";
Appearance267.texture = ImageTexture269;

TextureTransform TextureTransform270 = createNode("TextureTransform");
TextureTransform270.USE = "_14";
Appearance267.textureTransform = TextureTransform270;

Shape266.appearance = Appearance267;

IndexedFaceSet IndexedFaceSet271 = createNode("IndexedFaceSet");
IndexedFaceSet271.texCoordIndex = new MFInt32(new int[0,1,2,3,-1,28,27,26,5,-1,0,1,1,0,-1,5,26,29,6,-1,3,7,7,3,-1,1,0,0,1,-1,4,27,28,30,-1,29,4,30,6,-1,8,25,9,10,-1,15,16,17,18,-1,19,20,21,22,-1,22,15,18,-1,22,18,19,-1,11,12,23,24,-1,23,13,14,24,-1]);
IndexedFaceSet271.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1]);
TextureCoordinate TextureCoordinate272 = createNode("TextureCoordinate");
TextureCoordinate272.point = new MFVec2f(new float[0.0432628,0.395189,0.0216314,0.395189,0.0216314,0.157438,0.0432628,0.157438,0.176379,0.293702,0.996431,0.987509,0.996193,0.00619312,0.0216314,0.909388,1.75058,0.99962,0.000984462,0.00331701,1.75058,0.00331701,1,0,1,1,0.0324233,1,0.0324228,0,1.51503,0.2131,1.51503,0.99962,1.75058,0.99962,1.75058,0.00331701,0.000984462,0.00331701,0.000984462,0.99962,1.2218,0.99962,1.2218,0.2131,0.516212,1,0.516211,0,0.000984462,0.99962,0.719415,0.769281,0.176494,0.769444,-0.00701949,0.987809,0.719299,0.293539,-0.00725818,0.00649359]);
IndexedFaceSet271.texCoord = TextureCoordinate272;

Coordinate Coordinate273 = createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8]);
IndexedFaceSet271.coord = Coordinate273;

Shape266.geometry = IndexedFaceSet271;

Transform265.children = new MFNode();

Transform265.children[0] = Shape266;

Transform255.children[1] = Transform265;

Transform Transform274 = createNode("Transform");
Transform274.DEF = "fussboden";
Transform274.translation = new SFVec3f(new float[-4.79598,-2.95784,3.3361]);
Transform274.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform274.scale = new SFVec3f(new float[4.18476,1.41953,2.17788]);
Shape Shape275 = createNode("Shape");
Appearance Appearance276 = createNode("Appearance");
Material Material277 = createNode("Material");
Material277.ambientIntensity = 0.557037;
Material277.diffuseColor = new SFColor(new float[0.268975,0.287234,0.24213]);
Material277.emissiveColor = new SFColor(new float[0.448291,0.478723,0.40355]);
Appearance276.material = Material277;

ImageTexture ImageTexture278 = createNode("ImageTexture");
ImageTexture278.url = new MFString(new java.lang.String["granite.2.png"]);
Appearance276.texture = ImageTexture278;

TextureTransform TextureTransform279 = createNode("TextureTransform");
TextureTransform279.scale = new SFVec2f(new float[2,1]);
Appearance276.textureTransform = TextureTransform279;

Shape275.appearance = Appearance276;

IndexedFaceSet IndexedFaceSet280 = createNode("IndexedFaceSet");
IndexedFaceSet280.creaseAngle = 0.5;
IndexedFaceSet280.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate281 = createNode("TextureCoordinate");
TextureCoordinate281.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet280.texCoord = TextureCoordinate281;

Coordinate Coordinate282 = createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet280.coord = Coordinate282;

Shape275.geometry = IndexedFaceSet280;

Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

Transform255.children[2] = Transform274;

Collision181.proxy = Transform255;

Transform180.children = new MFNode();

Transform180.children[0] = Collision181;

Transform179.children = new MFNode();

Transform179.children[0] = Transform180;

Transform Transform283 = createNode("Transform");
Transform283.DEF = "ausblick";
Transform Transform284 = createNode("Transform");
Transform284.translation = new SFVec3f(new float[-11.1133,1.31898,2.05622]);
Transform284.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform284.scale = new SFVec3f(new float[6.78219,6.78219,6.78219]);
Shape Shape285 = createNode("Shape");
Appearance Appearance286 = createNode("Appearance");
ImageTexture ImageTexture287 = createNode("ImageTexture");
ImageTexture287.url = new MFString(new java.lang.String["env.png"]);
Appearance286.texture = ImageTexture287;

Shape285.appearance = Appearance286;

IndexedFaceSet IndexedFaceSet288 = createNode("IndexedFaceSet");
IndexedFaceSet288.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate289 = createNode("TextureCoordinate");
TextureCoordinate289.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet288.texCoord = TextureCoordinate289;

Coordinate Coordinate290 = createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[-0.7442,-0.5,0,0.7442,-0.5,0,0.7442,0.5,0,-0.7442,0.5,0]);
IndexedFaceSet288.coord = Coordinate290;

Shape285.geometry = IndexedFaceSet288;

Transform284.children = new MFNode();

Transform284.children[0] = Shape285;

Transform283.children = new MFNode();

Transform283.children[0] = Transform284;

Transform179.children[1] = Transform283;

Switch177.children[1] = Transform179;

Transform176.children = new MFNode();

Transform176.children[0] = Switch177;

children[3] = Transform176;

Transform Transform291 = createNode("Transform");
Transform291.DEF = "tex-but_1";
Script Script292 = createNode("Script");
Script292.DEF = "_switch";
field field293 = createNode("field");
field293.name = "whichChoice_changed";
field293.accessType = "outputOnly";
field293.type = "SFInt32";
Script292.field = new MFNode();

Script292.field[0] = field293;

field field294 = createNode("field");
field294.name = "set_touchTime";
field294.accessType = "inputOnly";
field294.type = "SFTime";
Script292.field[1] = field294;

field field295 = createNode("field");
field295.name = "enabled";
field295.accessType = "initializeOnly";
field295.type = "SFBool";
Script292.field[2] = field295;


Script292.setSourceCode(`vrmlscript:\n"+
"function set_touchTime(value, time)\n"+
"{\n"+
"	enabled = !enabled;\n"+
"	whichChoice_changed = enabled;\n"+
"}`)
Transform291.children = new MFNode();

Transform291.children[0] = Script292;

TouchSensor TouchSensor296 = createNode("TouchSensor");
TouchSensor296.DEF = "_15";
Transform291.children[1] = TouchSensor296;

Transform Transform297 = createNode("Transform");
Transform297.DEF = "tex-but";
Transform297.translation = new SFVec3f(new float[-3.53259,0.188037,1.18607]);
Transform297.rotation = new SFRotation(new float[1,-3.71792e-8,9.89425e-7,1.57203]);
Shape Shape298 = createNode("Shape");
Appearance Appearance299 = createNode("Appearance");
Material Material300 = createNode("Material");
Material300.ambientIntensity = 0.25;
Material300.diffuseColor = new SFColor(new float[0.904409,0,0.309851]);
Material300.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material300.shininess = 0.078125;
Appearance299.material = Material300;

Shape298.appearance = Appearance299;

Box Box301 = createNode("Box");
Box301.size = new SFVec3f(new float[0.2,0.2,0.2]);
Shape298.geometry = Box301;

Transform297.children = new MFNode();

Transform297.children[0] = Shape298;

Transform291.children[2] = Transform297;

children[4] = Transform291;

Transform Transform302 = createNode("Transform");
Transform302.DEF = "masse-bad";
Transform Transform303 = createNode("Transform");
Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-8.04131,0.404034,-2.72127]);
Transform304.rotation = new SFRotation(new float[1,0,0,1.57203]);
Transform304.scale = new SFVec3f(new float[0.559431,0.559428,0.0237109]);
Shape Shape305 = createNode("Shape");
Appearance Appearance306 = createNode("Appearance");
Material Material307 = createNode("Material");
Material307.DEF = "_16";
Material307.ambientIntensity = 0;
Material307.diffuseColor = new SFColor(new float[0,0,0]);
Material307.emissiveColor = new SFColor(new float[0,0.0958378,0.297872]);
Material307.shininess = 0;
Appearance306.material = Material307;

Shape305.appearance = Appearance306;

IndexedFaceSet IndexedFaceSet308 = createNode("IndexedFaceSet");
IndexedFaceSet308.creaseAngle = 0.5;
IndexedFaceSet308.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate309 = createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[2.55351,1,1,2.55351,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet308.coord = Coordinate309;

Shape305.geometry = IndexedFaceSet308;

Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

Transform303.children = new MFNode();

Transform303.children[0] = Transform304;

Transform Transform310 = createNode("Transform");
Transform310.translation = new SFVec3f(new float[-6.59348,0.323395,-2.16191]);
Transform310.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Shape Shape311 = createNode("Shape");
Appearance Appearance312 = createNode("Appearance");
Material Material313 = createNode("Material");
Material313.USE = "_16";
Appearance312.material = Material313;

Shape311.appearance = Appearance312;

Text Text314 = createNode("Text");
Text314.string = new MFString(new java.lang.String[", ","3,07 m "]);
Text314.length = new MFFloat(new float[0]);
FontStyle FontStyle315 = createNode("FontStyle");
FontStyle315.family = new MFString(new java.lang.String["SANS"]);
FontStyle315.size = 14;
Text314.fontStyle = FontStyle315;

Shape311.geometry = Text314;

Transform310.children = new MFNode();

Transform310.children[0] = Shape311;

Transform303.children[1] = Transform310;

Transform Transform316 = createNode("Transform");
Transform316.translation = new SFVec3f(new float[-4.21657,0.407074,-2.72127]);
Transform316.rotation = new SFRotation(new float[-4.69386e-7,0.70667,0.707544,3.14159]);
Transform316.scale = new SFVec3f(new float[0.559431,0.559427,0.0237109]);
Shape Shape317 = createNode("Shape");
Appearance Appearance318 = createNode("Appearance");
Material Material319 = createNode("Material");
Material319.USE = "_16";
Appearance318.material = Material319;

Shape317.appearance = Appearance318;

IndexedFaceSet IndexedFaceSet320 = createNode("IndexedFaceSet");
IndexedFaceSet320.creaseAngle = 0.5;
IndexedFaceSet320.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate321 = createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[2.70793,1,1,2.70793,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet320.coord = Coordinate321;

Shape317.geometry = IndexedFaceSet320;

Transform316.children = new MFNode();

Transform316.children[0] = Shape317;

Transform303.children[2] = Transform316;

Transform302.children = new MFNode();

Transform302.children[0] = Transform303;

Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[-5.80014,0.00851905,5.18821]);
Transform322.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform322.scale = new SFVec3f(new float[0.999999,1,0.999999]);
Transform Transform323 = createNode("Transform");
Transform323.translation = new SFVec3f(new float[-6.80953,0.404034,-2.72127]);
Transform323.rotation = new SFRotation(new float[1,0,0,1.57203]);
Transform323.scale = new SFVec3f(new float[0.559431,0.559428,0.0237109]);
Shape Shape324 = createNode("Shape");
Appearance Appearance325 = createNode("Appearance");
Material Material326 = createNode("Material");
Material326.USE = "_16";
Appearance325.material = Material326;

Shape324.appearance = Appearance325;

IndexedFaceSet IndexedFaceSet327 = createNode("IndexedFaceSet");
IndexedFaceSet327.creaseAngle = 0.5;
IndexedFaceSet327.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[-0.033983,1,1,-0.033983,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet327.coord = Coordinate328;

Shape324.geometry = IndexedFaceSet327;

Transform323.children = new MFNode();

Transform323.children[0] = Shape324;

Transform322.children = new MFNode();

Transform322.children[0] = Transform323;

Transform Transform329 = createNode("Transform");
Transform329.translation = new SFVec3f(new float[-4.90441,0.407073,-2.72127]);
Transform329.rotation = new SFRotation(new float[-4.69386e-7,0.70667,0.707544,3.14159]);
Transform329.scale = new SFVec3f(new float[0.559431,0.559427,0.0237109]);
Shape Shape330 = createNode("Shape");
Appearance Appearance331 = createNode("Appearance");
Material Material332 = createNode("Material");
Material332.USE = "_16";
Appearance331.material = Material332;

Shape330.appearance = Appearance331;

IndexedFaceSet IndexedFaceSet333 = createNode("IndexedFaceSet");
IndexedFaceSet333.creaseAngle = 0.5;
IndexedFaceSet333.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate334 = createNode("Coordinate");
Coordinate334.point = new MFVec3f(new float[1.93363,1,1,1.93363,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1]);
IndexedFaceSet333.coord = Coordinate334;

Shape330.geometry = IndexedFaceSet333;

Transform329.children = new MFNode();

Transform329.children[0] = Shape330;

Transform322.children[1] = Transform329;

Transform302.children[1] = Transform322;

Transform Transform335 = createNode("Transform");
Transform335.translation = new SFVec3f(new float[-6.40914,0.213304,-6.55965]);
Transform335.rotation = new SFRotation(new float[0,1,0,1.57079]);
Transform335.scale = new SFVec3f(new float[0.999998,1,0.999998]);
Transform302.children[2] = Transform335;

Transform Transform336 = createNode("Transform");
Transform336.translation = new SFVec3f(new float[0,0.0117434,0]);
Transform Transform337 = createNode("Transform");
Transform337.translation = new SFVec3f(new float[-8.56687,0.302342,0.530606]);
Transform337.rotation = new SFRotation(new float[4.40721e-10,1,4.40721e-10,1.57079]);
Transform337.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Transform337.scaleOrientation = new SFRotation(new float[2.03034e-10,1,-1.07407e-10,1.5708]);
Shape Shape338 = createNode("Shape");
Appearance Appearance339 = createNode("Appearance");
Material Material340 = createNode("Material");
Material340.USE = "_16";
Appearance339.material = Material340;

Shape338.appearance = Appearance339;

Text Text341 = createNode("Text");
Text341.string = new MFString(new java.lang.String[", ","1,00 m "]);
Text341.length = new MFFloat(new float[0]);
FontStyle FontStyle342 = createNode("FontStyle");
FontStyle342.family = new MFString(new java.lang.String["SANS"]);
FontStyle342.size = 14;
Text341.fontStyle = FontStyle342;

Shape338.geometry = Text341;

Transform337.children = new MFNode();

Transform337.children[0] = Shape338;

Transform336.children = new MFNode();

Transform336.children[0] = Transform337;

Transform Transform343 = createNode("Transform");
Transform343.translation = new SFVec3f(new float[-9.13041,0.387792,-1.18209]);
Transform343.rotation = new SFRotation(new float[0.577587,0.576875,0.577589,4.18808]);
Transform343.scale = new SFVec3f(new float[0.55943,0.559426,0.0237109]);
Shape Shape344 = createNode("Shape");
Appearance Appearance345 = createNode("Appearance");
Material Material346 = createNode("Material");
Material346.USE = "_16";
Appearance345.material = Material346;

Shape344.appearance = Appearance345;

IndexedFaceSet IndexedFaceSet347 = createNode("IndexedFaceSet");
IndexedFaceSet347.creaseAngle = 0.5;
IndexedFaceSet347.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[1.5517,1,1,1.5517,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1]);
IndexedFaceSet347.coord = Coordinate348;

Shape344.geometry = IndexedFaceSet347;

Transform343.children = new MFNode();

Transform343.children[0] = Shape344;

Transform336.children[1] = Transform343;

Transform Transform349 = createNode("Transform");
Transform349.translation = new SFVec3f(new float[-9.13042,0.384754,0.249861]);
Transform349.rotation = new SFRotation(new float[0.577589,0.576874,-0.577588,2.09511]);
Transform349.scale = new SFVec3f(new float[0.55943,0.559427,0.0237109]);
Shape Shape350 = createNode("Shape");
Appearance Appearance351 = createNode("Appearance");
Material Material352 = createNode("Material");
Material352.USE = "_16";
Appearance351.material = Material352;

Shape350.appearance = Appearance351;

IndexedFaceSet IndexedFaceSet353 = createNode("IndexedFaceSet");
IndexedFaceSet353.creaseAngle = 0.5;
IndexedFaceSet353.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate354 = createNode("Coordinate");
Coordinate354.point = new MFVec3f(new float[-0.491838,1,1,-0.491838,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet353.coord = Coordinate354;

Shape350.geometry = IndexedFaceSet353;

Transform349.children = new MFNode();

Transform349.children[0] = Shape350;

Transform336.children[2] = Transform349;

Transform302.children[3] = Transform336;

Transform Transform355 = createNode("Transform");
Transform355.translation = new SFVec3f(new float[0,0.0163077,-1.56789]);
Transform Transform356 = createNode("Transform");
Transform356.translation = new SFVec3f(new float[-8.56687,0.302342,0.6137]);
Transform356.rotation = new SFRotation(new float[4.40721e-10,1,4.40721e-10,1.57079]);
Transform356.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Transform356.scaleOrientation = new SFRotation(new float[4.96699e-10,1,-4.34624e-10,1.5708]);
Shape Shape357 = createNode("Shape");
Appearance Appearance358 = createNode("Appearance");
Material Material359 = createNode("Material");
Material359.USE = "_16";
Appearance358.material = Material359;

Shape357.appearance = Appearance358;

Text Text360 = createNode("Text");
Text360.string = new MFString(new java.lang.String[", ","1,10 m "]);
Text360.length = new MFFloat(new float[0]);
FontStyle FontStyle361 = createNode("FontStyle");
FontStyle361.family = new MFString(new java.lang.String["SANS"]);
FontStyle361.size = 14;
Text360.fontStyle = FontStyle361;

Shape357.geometry = Text360;

Transform356.children = new MFNode();

Transform356.children[0] = Shape357;

Transform355.children = new MFNode();

Transform355.children[0] = Transform356;

Transform Transform362 = createNode("Transform");
Transform362.translation = new SFVec3f(new float[-9.13041,0.387792,-1.18209]);
Transform362.rotation = new SFRotation(new float[0.577587,0.576875,0.577589,4.18808]);
Transform362.scale = new SFVec3f(new float[0.55943,0.559427,0.0237109]);
Transform362.scaleOrientation = new SFRotation(new float[-0.0000087291,5.78445e-7,-1,0.00468343]);
Shape Shape363 = createNode("Shape");
Appearance Appearance364 = createNode("Appearance");
Material Material365 = createNode("Material");
Material365.USE = "_16";
Appearance364.material = Material365;

Shape363.appearance = Appearance364;

IndexedFaceSet IndexedFaceSet366 = createNode("IndexedFaceSet");
IndexedFaceSet366.creaseAngle = 0.5;
IndexedFaceSet366.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate367 = createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[1.6792,1,1,1.6792,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1]);
IndexedFaceSet366.coord = Coordinate367;

Shape363.geometry = IndexedFaceSet366;

Transform362.children = new MFNode();

Transform362.children[0] = Shape363;

Transform355.children[1] = Transform362;

Transform Transform368 = createNode("Transform");
Transform368.translation = new SFVec3f(new float[-9.13042,0.384754,0.396738]);
Transform368.rotation = new SFRotation(new float[0.577589,0.576874,-0.577588,2.09511]);
Transform368.scale = new SFVec3f(new float[0.55943,0.559427,0.0237109]);
Transform368.scaleOrientation = new SFRotation(new float[-4.65982e-7,8.63403e-7,1,0.00775123]);
Shape Shape369 = createNode("Shape");
Appearance Appearance370 = createNode("Appearance");
Material Material371 = createNode("Material");
Material371.USE = "_16";
Appearance370.material = Material371;

Shape369.appearance = Appearance370;

IndexedFaceSet IndexedFaceSet372 = createNode("IndexedFaceSet");
IndexedFaceSet372.creaseAngle = 0.5;
IndexedFaceSet372.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate373 = createNode("Coordinate");
Coordinate373.point = new MFVec3f(new float[-0.40077,1,1,-0.40077,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet372.coord = Coordinate373;

Shape369.geometry = IndexedFaceSet372;

Transform368.children = new MFNode();

Transform368.children[0] = Shape369;

Transform355.children[2] = Transform368;

Transform302.children[4] = Transform355;

Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[-12.2407,-0.00907715,-1.16446]);
Transform374.rotation = new SFRotation(new float[0.0000280045,1,0.000618907,3.14159]);
Transform374.scale = new SFVec3f(new float[1,0.999999,1]);
Transform Transform375 = createNode("Transform");
Transform375.translation = new SFVec3f(new float[-8.04131,0.404034,-2.72127]);
Transform375.rotation = new SFRotation(new float[1,0,0,1.57203]);
Transform375.scale = new SFVec3f(new float[0.559431,0.559428,0.0237109]);
Shape Shape376 = createNode("Shape");
Appearance Appearance377 = createNode("Appearance");
Material Material378 = createNode("Material");
Material378.USE = "_16";
Appearance377.material = Material378;

Shape376.appearance = Appearance377;

IndexedFaceSet IndexedFaceSet379 = createNode("IndexedFaceSet");
IndexedFaceSet379.creaseAngle = 0.5;
IndexedFaceSet379.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[2.55351,1,1,2.55351,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet379.coord = Coordinate380;

Shape376.geometry = IndexedFaceSet379;

Transform375.children = new MFNode();

Transform375.children[0] = Shape376;

Transform374.children = new MFNode();

Transform374.children[0] = Transform375;

Transform Transform381 = createNode("Transform");
Transform381.translation = new SFVec3f(new float[-6.59348,0.323395,-2.16191]);
Transform381.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Shape Shape382 = createNode("Shape");
Appearance Appearance383 = createNode("Appearance");
Material Material384 = createNode("Material");
Material384.USE = "_16";
Appearance383.material = Material384;

Shape382.appearance = Appearance383;

Text Text385 = createNode("Text");
Text385.string = new MFString(new java.lang.String[", ","3,07 m "]);
Text385.length = new MFFloat(new float[0]);
FontStyle FontStyle386 = createNode("FontStyle");
FontStyle386.family = new MFString(new java.lang.String["SANS"]);
FontStyle386.size = 14;
Text385.fontStyle = FontStyle386;

Shape382.geometry = Text385;

Transform381.children = new MFNode();

Transform381.children[0] = Shape382;

Transform374.children[1] = Transform381;

Transform Transform387 = createNode("Transform");
Transform387.translation = new SFVec3f(new float[-4.21657,0.407074,-2.72127]);
Transform387.rotation = new SFRotation(new float[-4.69386e-7,0.70667,0.707544,3.14159]);
Transform387.scale = new SFVec3f(new float[0.559431,0.559427,0.0237109]);
Shape Shape388 = createNode("Shape");
Appearance Appearance389 = createNode("Appearance");
Material Material390 = createNode("Material");
Material390.USE = "_16";
Appearance389.material = Material390;

Shape388.appearance = Appearance389;

IndexedFaceSet IndexedFaceSet391 = createNode("IndexedFaceSet");
IndexedFaceSet391.creaseAngle = 0.5;
IndexedFaceSet391.coordIndex = new MFInt32(new int[6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]);
Coordinate Coordinate392 = createNode("Coordinate");
Coordinate392.point = new MFVec3f(new float[2.70793,1,1,2.70793,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1]);
IndexedFaceSet391.coord = Coordinate392;

Shape388.geometry = IndexedFaceSet391;

Transform387.children = new MFNode();

Transform387.children[0] = Shape388;

Transform374.children[2] = Transform387;

Transform302.children[5] = Transform374;

Transform Transform393 = createNode("Transform");
Transform393.translation = new SFVec3f(new float[-3.6424,0.320009,-1.6462]);
Transform393.rotation = new SFRotation(new float[0,1,0,4.71238]);
Transform393.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Shape Shape394 = createNode("Shape");
Appearance Appearance395 = createNode("Appearance");
Material Material396 = createNode("Material");
Material396.ambientIntensity = 0;
Material396.diffuseColor = new SFColor(new float[0,0,0]);
Material396.emissiveColor = new SFColor(new float[0,0.0958378,0.297872]);
Material396.shininess = 0;
Appearance395.material = Material396;

Shape394.appearance = Appearance395;

Text Text397 = createNode("Text");
Text397.string = new MFString(new java.lang.String[", ","1,21 m "]);
Text397.length = new MFFloat(new float[0]);
FontStyle FontStyle398 = createNode("FontStyle");
FontStyle398.family = new MFString(new java.lang.String["SANS"]);
FontStyle398.size = 14;
Text397.fontStyle = FontStyle398;

Shape394.geometry = Text397;

Transform393.children = new MFNode();

Transform393.children[0] = Shape394;

Transform302.children[6] = Transform393;

children[5] = Transform302;

ROUTE ROUTE399 = createNode("ROUTE");
ROUTE399.fromNode = "Touch_1";
ROUTE399.fromField = "touchTime";
ROUTE399.toNode = "Time_1";
ROUTE399.toField = "set_startTime";
children[6] = ROUTE399;

ROUTE ROUTE400 = createNode("ROUTE");
ROUTE400.fromNode = "Time_1";
ROUTE400.fromField = "fraction_changed";
ROUTE400.toNode = "UnnamedTransformRotationInterp_1";
ROUTE400.toField = "set_fraction";
children[7] = ROUTE400;

ROUTE ROUTE401 = createNode("ROUTE");
ROUTE401.fromNode = "Time_1";
ROUTE401.fromField = "fraction_changed";
ROUTE401.toNode = "UnnamedShapeRotationInterp_1";
ROUTE401.toField = "set_fraction";
children[8] = ROUTE401;

ROUTE ROUTE402 = createNode("ROUTE");
ROUTE402.fromNode = "UnnamedShapeRotationInterp_1";
ROUTE402.fromField = "value_changed";
ROUTE402.toNode = "_3";
ROUTE402.toField = "set_rotation";
children[9] = ROUTE402;

ROUTE ROUTE403 = createNode("ROUTE");
ROUTE403.fromNode = "UnnamedTransformRotationInterp_1";
ROUTE403.fromField = "value_changed";
ROUTE403.toNode = "_1";
ROUTE403.toField = "set_rotation";
children[10] = ROUTE403;

ROUTE ROUTE404 = createNode("ROUTE");
ROUTE404.fromNode = "Touch_2";
ROUTE404.fromField = "touchTime";
ROUTE404.toNode = "Time_2";
ROUTE404.toField = "set_startTime";
children[11] = ROUTE404;

ROUTE ROUTE405 = createNode("ROUTE");
ROUTE405.fromNode = "Time_2";
ROUTE405.fromField = "fraction_changed";
ROUTE405.toNode = "UnnamedTransformRotationInterp_2";
ROUTE405.toField = "set_fraction";
children[12] = ROUTE405;

ROUTE ROUTE406 = createNode("ROUTE");
ROUTE406.fromNode = "Time_2";
ROUTE406.fromField = "fraction_changed";
ROUTE406.toNode = "UnnamedShapeRotationInterp_2";
ROUTE406.toField = "set_fraction";
children[13] = ROUTE406;

ROUTE ROUTE407 = createNode("ROUTE");
ROUTE407.fromNode = "UnnamedShapeRotationInterp_2";
ROUTE407.fromField = "value_changed";
ROUTE407.toNode = "_7";
ROUTE407.toField = "set_rotation";
children[14] = ROUTE407;

ROUTE ROUTE408 = createNode("ROUTE");
ROUTE408.fromNode = "UnnamedTransformRotationInterp_2";
ROUTE408.fromField = "value_changed";
ROUTE408.toNode = "_5";
ROUTE408.toField = "set_rotation";
children[15] = ROUTE408;

ROUTE ROUTE409 = createNode("ROUTE");
ROUTE409.fromNode = "_switch";
ROUTE409.fromField = "whichChoice_changed";
ROUTE409.toNode = "_10";
ROUTE409.toField = "set_whichChoice";
children[16] = ROUTE409;

ROUTE ROUTE410 = createNode("ROUTE");
ROUTE410.fromNode = "_15";
ROUTE410.fromField = "touchTime";
ROUTE410.toNode = "_switch";
ROUTE410.toField = "set_touchTime";
children[17] = ROUTE410;

}
