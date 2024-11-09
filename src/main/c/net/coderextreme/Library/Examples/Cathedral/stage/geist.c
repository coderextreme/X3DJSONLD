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
meta3.content = "Thu, 12 Mar 2015 07:12:37 GMT";
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
meta6.content = "Thu, 12 Mar 2015 07:12:37 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "geistAnim";
Transform9.center = new SFVec3f(new float[0,0.642037,-0.0786901]);
Group Group10 = createNode("Group");
Group Group11 = createNode("Group");
Group11.DEF = "trans";
TimeSensor TimeSensor12 = createNode("TimeSensor");
TimeSensor12.DEF = "Time";
TimeSensor12.cycleInterval = 10;
TimeSensor12.loop = True;
TimeSensor12.startTime = 1007135509.21195;
TimeSensor12.stopTime = 1;
Group11.children = new MFNode();

Group11.children[0] = TimeSensor12;

Group10.children = new MFNode();

Group10.children[0] = Group11;

PositionInterpolator PositionInterpolator13 = createNode("PositionInterpolator");
PositionInterpolator13.DEF = "figurTranslationInterp";
PositionInterpolator13.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.112,0.124,0.136,0.148,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.311111,0.322222,0.333333,0.344444,0.355556,0.366667,0.377778,0.388889,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.610769,0.621539,0.632308,0.643077,0.653846,0.664616,0.675385,0.686154,0.696923,0.707693,0.718462,0.729231,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.811111,0.822222,0.833333,0.844444,0.855555,0.866666,0.877778,0.888889,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]);
PositionInterpolator13.keyValue = new MFVec3f(new float[0,0,0,0,-0.0025385,0,0,-0.00902576,0,0,-0.0177695,0,0,-0.0270773,0,0,-0.0352569,0,0,-0.0406159,0,0,-0.0414621,0,0,-0.0361031,0,0,-0.0228465,0,0,0,0,0,0.0687725,0,0,0.183753,0,0,0.309476,0,0,0.410476,0,0,0.451288,0,0,0.444779,0,0,0.428094,0,0,0.402737,0,0,0.370213,0,0,0.332025,0,0,0.289677,0,0,0.244673,0,0,0.198516,0,0,0.152711,0,0,0.108761,0,0,0.0681711,0,0,0.0324439,0,0,0.0030838,0,0,-0.0184054,0,0,-0.034691,0,0,-0.0455584,0,0,-0.0508655,0,0,-0.0504698,0,0,-0.0442292,0,0,-0.0320014,0,0,-0.013644,0,0,0.0109851,0,0,0.0420283,0,0,0.0759947,0,0,0.115637,0,0,0.160171,0,0,0.208817,0,0,0.26079,0,0,0.315308,0,0,0.37159,0,0,0.428852,0,0,0.486312,0,0,0.543187,0,0,0.598695,0,0,0.652053,0,0,0.70248,0,0,0.749191,0,0,0.791406,0,0,0.82834,0,0,0.859213,0,0,0.883241,0,0,0.899641,0,0,0.907632,0,0,0.901487,0,0,0.877206,0,0,0.837406,0,0,0.784706,0,0,0.721723,0,0,0.651076,0,0,0.575384,0,0,0.497263,0,0,0.419333,0,0,0.344212,0,0,0.274516,0,0,0.212866,0,0,0.161879,0,0,0.12498,0,0,0.0973397,0,0,0.078786,0,0,0.0691476,0,0,0.0682531,0,0,0.0759311,0,0,0.096282,0,0,0.128286,0,0,0.168059,0,0,0.211718,0,0,0.25538,0,0,0.295162,0,0,0.32718,0,0,0.347552,0,0,0.352393,0,0,0.342622,0,0,0.322161,0,0,0.292896,0,0,0.256714,0,0,0.2155,0,0,0.171143,0,0,0.125527,0,0,0.0805407,0,0,0.0380696,0,0,0,0]);
Group10.children[1] = PositionInterpolator13;

PositionInterpolator PositionInterpolator14 = createNode("PositionInterpolator");
PositionInterpolator14.DEF = "shadow70-128ScaleFactorInterp";
PositionInterpolator14.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.112,0.124,0.136,0.148,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.311111,0.322222,0.333333,0.344444,0.355556,0.366667,0.377778,0.388889,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.610769,0.621539,0.632308,0.643077,0.653846,0.664616,0.675385,0.686154,0.696923,0.707693,0.718462,0.729231,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.811111,0.822222,0.833333,0.844444,0.855555,0.866666,0.877778,0.888889,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]);
PositionInterpolator14.keyValue = new MFVec3f(new float[1.10647,1.10647,0.864427,1.10476,1.10476,0.863093,1.1004,1.1004,0.859683,1.09452,1.09452,0.855088,1.08825,1.08825,0.850195,1.08275,1.08275,0.845896,1.07915,1.07915,0.84308,1.07858,1.07858,0.842635,1.08218,1.08218,0.845452,1.0911,1.0911,0.852419,1.10647,1.10647,0.864427,1.15507,1.15507,0.902394,1.23708,1.23708,0.966468,1.32516,1.32515,1.03528,1.39194,1.39194,1.08745,1.41008,1.41007,1.10162,1.39232,1.39231,1.08774,1.36549,1.36548,1.06678,1.331,1.33099,1.03984,1.29028,1.29027,1.00802,1.24473,1.24472,0.972442,1.19578,1.19577,0.934197,1.14483,1.14483,0.894397,1.09331,1.0933,0.854146,1.04263,1.04262,0.814551,0.994202,0.994196,0.776717,0.949445,0.949439,0.74175,0.909772,0.909767,0.710756,0.876601,0.876596,0.684841,0.851346,0.851341,0.665111,0.832061,0.832056,0.650045,0.820205,0.820201,0.640782,0.815363,0.815359,0.637,0.817118,0.817114,0.638371,0.825054,0.82505,0.644571,0.838755,0.83875,0.655274,0.857803,0.857798,0.670156,0.881783,0.881779,0.68889,0.910279,0.910274,0.711152,0.940724,0.940719,0.734937,0.976459,0.976453,0.762854,1.01674,1.01673,0.794324,1.06083,1.06082,0.828766,1.10797,1.10797,0.8656,1.15744,1.15744,0.904247,1.20849,1.20848,0.944127,1.26037,1.26037,0.984659,1.31235,1.31234,1.02526,1.36367,1.36367,1.06536,1.41361,1.4136,1.10437,1.46141,1.4614,1.14172,1.50634,1.50633,1.17682,1.54764,1.54764,1.20909,1.58459,1.58458,1.23795,1.61644,1.61643,1.26283,1.64244,1.64243,1.28314,1.66185,1.66184,1.29831,1.67393,1.67392,1.30775,1.67794,1.67793,1.31088,1.66776,1.66775,1.30293,1.63958,1.63957,1.28091,1.59606,1.59605,1.24691,1.53985,1.53984,1.203,1.4736,1.47359,1.15124,1.39998,1.39997,1.09372,1.32163,1.32162,1.03251,1.24121,1.2412,0.969688,1.16138,1.16137,0.907319,1.08478,1.08478,0.847481,1.01409,1.01408,0.792249,0.951939,0.951932,0.743697,0.900998,0.900991,0.7039,0.865418,0.865411,0.676103,0.841098,0.841092,0.657104,0.827836,0.82783,0.646744,0.825429,0.825423,0.644863,0.833671,0.833665,0.651303,0.852361,0.852355,0.665904,0.886652,0.886646,0.692694,0.933822,0.933815,0.729544,0.989798,0.98979,0.773275,1.05051,1.0505,0.820703,1.11188,1.11187,0.868648,1.16984,1.16983,0.913927,1.22031,1.2203,0.95336,1.25923,1.25922,0.983765,1.28252,1.28251,1.00196,1.28947,1.28946,1.00739,1.28611,1.2861,1.00476,1.27426,1.27425,0.995509,1.25575,1.25574,0.981045,1.23238,1.23238,0.962793,1.20599,1.20598,0.942173,1.17838,1.17838,0.920605,1.15138,1.15138,0.899511,1.1268,1.1268,0.880312,1.10647,1.10647,0.864427]);
Group10.children[2] = PositionInterpolator14;

Transform9.children = new MFNode();

Transform9.children[0] = Group10;

Transform Transform15 = createNode("Transform");
Transform15.DEF = "figur";
Transform15.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform15.scale = new SFVec3f(new float[1,0.999999,1]);
Transform15.center = new SFVec3f(new float[0.0326369,0.642037,-0.0786902]);
Inline Inline16 = createNode("Inline");
Inline16.url = new MFString(new java.lang.String["kind.x3d"]);
Inline16.bboxSize = new SFVec3f(new float[1.07902,1.63698,1.60866]);
Inline16.bboxCenter = new SFVec3f(new float[0.0186297,0.692334,-0.0573816]);
Transform15.children = new MFNode();

Transform15.children[0] = Inline16;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "tv";
Transform17.translation = new SFVec3f(new float[1.05279e-7,0.530363,-0.234166]);
Transform17.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform17.scale = new SFVec3f(new float[1,0.999999,1]);
Inline Inline18 = createNode("Inline");
Inline18.url = new MFString(new java.lang.String["geist-tv1.x3d"]);
Inline18.bboxSize = new SFVec3f(new float[0.337524,0.291134,0.19459]);
Inline18.bboxCenter = new SFVec3f(new float[7.45058e-8,0.145567,4.47035e-8]);
Transform17.children = new MFNode();

Transform17.children[0] = Inline18;

Transform15.children[1] = Transform17;

Transform9.children[1] = Transform15;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "shadow70-128";
Transform19.translation = new SFVec3f(new float[0,0.00803815,-1.85602e-7]);
Transform19.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform19.scale = new SFVec3f(new float[1.10647,1.10647,0.864427]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["shadow70-128.png"]);
Appearance21.texture = ImageTexture22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate24 = createNode("TextureCoordinate");
TextureCoordinate24.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet23.texCoord = TextureCoordinate24;

Coordinate Coordinate25 = createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet23.coord = Coordinate25;

Shape20.geometry = IndexedFaceSet23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform9.children[2] = Transform19;

children[1] = Transform9;

TimeSensor TimeSensor26 = createNode("TimeSensor");
TimeSensor26.DEF = "enterWorldTimeSensor";
TimeSensor26.loop = True;
TimeSensor26.startTime = 1;
children[2] = TimeSensor26;

Script Script27 = createNode("Script");
Script27.DEF = "enterWorldScript";
field field28 = createNode("field");
field28.name = "startTime";
field28.accessType = "outputOnly";
field28.type = "SFTime";
Script27.field = new MFNode();

Script27.field[0] = field28;

field field29 = createNode("field");
field29.name = "firstTime";
field29.accessType = "outputOnly";
field29.type = "SFBool";
Script27.field[1] = field29;

field field30 = createNode("field");
field30.name = "triggerIn";
field30.accessType = "inputOnly";
field30.type = "SFTime";
Script27.field[2] = field30;


Script27.setSourceCode(`vrmlscript:function triggerIn(value, time) {\n"+
"\n"+
"         // fire off a single round                                     \n"+
"         startTime = value;                                             \n"+
"         firstTime = FALSE;                                             \n"+
"       }`)
children[3] = Script27;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "vs_handle";
Transform31.translation = new SFVec3f(new float[0,1.12968,0]);
Transform31.scale = new SFVec3f(new float[2.01905,2.25936,2.01309]);
Switch Switch32 = createNode("Switch");
Switch32.whichChoice = 0;
Transform Transform33 = createNode("Transform");
Switch32.children = new MFNode();

Switch32.children[0] = Transform33;

Inline Inline34 = createNode("Inline");
Inline34.url = new MFString(new java.lang.String["cube.x3d"]);
Inline34.bboxSize = new SFVec3f(new float[1,1,1]);
Switch32.children[1] = Inline34;

Transform31.children = new MFNode();

Transform31.children[0] = Switch32;

children[4] = Transform31;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "vs";
VisibilitySensor VisibilitySensor36 = createNode("VisibilitySensor");
VisibilitySensor36.DEF = "_1";
VisibilitySensor36.size = new SFVec3f(new float[2.01905,2.25936,2.01309]);
VisibilitySensor36.center = new SFVec3f(new float[0,1.12968,0]);
Transform35.children = new MFNode();

Transform35.children[0] = VisibilitySensor36;

children[5] = Transform35;

Transform Transform37 = createNode("Transform");
children[6] = Transform37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "_1";
ROUTE38.fromField = "isActive";
ROUTE38.toNode = "Time";
ROUTE38.toField = "set_enabled";
children[7] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "_1";
ROUTE39.fromField = "enterTime";
ROUTE39.toNode = "Time";
ROUTE39.toField = "set_startTime";
children[8] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "Time";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "figurTranslationInterp";
ROUTE40.toField = "set_fraction";
children[9] = ROUTE40;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "Time";
ROUTE41.fromField = "fraction_changed";
ROUTE41.toNode = "shadow70-128ScaleFactorInterp";
ROUTE41.toField = "set_fraction";
children[10] = ROUTE41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "figurTranslationInterp";
ROUTE42.fromField = "value_changed";
ROUTE42.toNode = "figur";
ROUTE42.toField = "set_translation";
children[11] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "shadow70-128ScaleFactorInterp";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "shadow70-128";
ROUTE43.toField = "set_scale";
children[12] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "enterWorldScript";
ROUTE44.fromField = "firstTime";
ROUTE44.toNode = "enterWorldTimeSensor";
ROUTE44.toField = "set_enabled";
children[13] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "enterWorldTimeSensor";
ROUTE45.fromField = "time";
ROUTE45.toNode = "enterWorldScript";
ROUTE45.toField = "triggerIn";
children[14] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "vs_handle";
ROUTE46.fromField = "translation_changed";
ROUTE46.toNode = "_1";
ROUTE46.toField = "set_center";
children[15] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "vs_handle";
ROUTE47.fromField = "scale_changed";
ROUTE47.toNode = "_1";
ROUTE47.toField = "set_size";
children[16] = ROUTE47;

}
