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
meta3.content = "Sun, 08 Mar 2015 05:54:30 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V2.0.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Lighting/PointLight.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Thu, 20 Oct 2016 10:59:35 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "Beethoven";
head1.meta[6] = meta8;

head = head1;

WorldInfo WorldInfo10 = createNode("WorldInfo");
WorldInfo10.title = "PointLight";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Titania";
MetadataSet11.DEF = "Titania";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "NavigationInfo";
MetadataSet12.DEF = "NavigationInfo";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataString MetadataString13 = createNode("MetadataString");
MetadataString13.name = "type";
MetadataString13.DEF = "type";
MetadataString13.reference = "http://titania.create3000.de";
MetadataString13.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataString13;

MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataSet12;

MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "Viewpoint";
MetadataSet14.DEF = "Viewpoint";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "position";
MetadataDouble15.DEF = "position";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[-2.07141995429993,-0.615413010120392,9.70524978637695]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "orientation";
MetadataDouble16.DEF = "orientation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[0.111306008788667,-0.981465731426504,-0.155999969368507,0.489277720451353]);
MetadataSet14.value[1] = MetadataDouble16;

MetadataDouble MetadataDouble17 = createNode("MetadataDouble");
MetadataDouble17.name = "centerOfRotation";
MetadataDouble17.DEF = "centerOfRotation";
MetadataDouble17.reference = "http://titania.create3000.de";
MetadataDouble17.value = new MFDouble(new double[3.33974003791809,-0.21424899995327,-0.636991024017334]);
MetadataSet14.value[2] = MetadataDouble17;

MetadataSet11.value[1] = MetadataSet14;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "Selection";
MetadataSet18.DEF = "Selection";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "children";
MetadataSet19.DEF = "children";
MetadataSet19.reference = "http://titania.create3000.de";
FontStyle FontStyle20 = createNode("FontStyle");
FontStyle20.DEF = "_1";
FontStyle20.family = new MFString(new java.lang.String["SANS"]);
FontStyle20.justify = new MFString(new java.lang.String["END"]);
MetadataSet19.value = FontStyle20;

MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataSet19;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "previous";
MetadataSet21.DEF = "previous";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataSet18.value[1] = MetadataSet21;

MetadataSet11.value[2] = MetadataSet18;

MetadataSet MetadataSet22 = createNode("MetadataSet");
MetadataSet22.name = "LayerSet";
MetadataSet22.DEF = "LayerSet";
MetadataSet22.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger23 = createNode("MetadataInteger");
MetadataInteger23.name = "activeLayer";
MetadataInteger23.DEF = "activeLayer";
MetadataInteger23.reference = "http://titania.create3000.de";
MetadataInteger23.value = new MFInt32(new int[-1]);
MetadataSet22.value = new MFNode();

MetadataSet22.value[0] = MetadataInteger23;

MetadataSet11.value[3] = MetadataSet22;

WorldInfo10.metadata = MetadataSet11;

children = new MFNode();

children[0] = WorldInfo10;

LayerSet LayerSet24 = createNode("LayerSet");
LayerSet24.activeLayer = 1;
LayerSet24.order = new MFInt32(new int[1,2]);
Layer Layer25 = createNode("Layer");
Layer25.DEF = "World";
MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "Titania";
MetadataSet26.DEF = "Titania_1";
MetadataSet26.reference = "http://titania.create3000.de";
MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "AngleGrid";
MetadataSet27.DEF = "AngleGrid";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean28 = createNode("MetadataBoolean");
MetadataBoolean28.name = "enabled";
MetadataBoolean28.reference = "http://titania.create3000.de";
MetadataBoolean28.value = new MFBool(new boolean[False]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataBoolean28;

MetadataSet26.value = new MFNode();

MetadataSet26.value[0] = MetadataSet27;

MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "Grid";
MetadataSet29.DEF = "Grid";
MetadataSet29.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean30 = createNode("MetadataBoolean");
MetadataBoolean30.name = "enabled";
MetadataBoolean30.reference = "http://titania.create3000.de";
MetadataBoolean30.value = new MFBool(new boolean[False]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataBoolean30;

MetadataFloat MetadataFloat31 = createNode("MetadataFloat");
MetadataFloat31.name = "rotation";
MetadataFloat31.reference = "http://titania.create3000.de";
MetadataFloat31.value = new MFFloat(new float[1,0,0,1.5708]);
MetadataSet29.value[1] = MetadataFloat31;

MetadataFloat MetadataFloat32 = createNode("MetadataFloat");
MetadataFloat32.name = "translation";
MetadataFloat32.reference = "http://titania.create3000.de";
MetadataFloat32.value = new MFFloat(new float[9,2,0]);
MetadataSet29.value[2] = MetadataFloat32;

MetadataInteger MetadataInteger33 = createNode("MetadataInteger");
MetadataInteger33.name = "dimension";
MetadataInteger33.reference = "http://titania.create3000.de";
MetadataInteger33.value = new MFInt32(new int[24,10,10]);
MetadataSet29.value[3] = MetadataInteger33;

MetadataSet26.value[1] = MetadataSet29;

Layer25.metadata = MetadataSet26;

Background Background34 = createNode("Background");
Background34.DEF = "Gray";
Background34.skyColor = new MFColor(new float[0.2,0.2,0.2]);
Layer25.children = new MFNode();

Layer25.children[0] = Background34;

NavigationInfo NavigationInfo35 = createNode("NavigationInfo");
NavigationInfo35.headlight = False;
Layer25.children[1] = NavigationInfo35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Perspective";
Viewpoint36.position = new SFVec3f(new float[-2.07142,-0.615413,9.70525]);
Viewpoint36.orientation = new SFRotation(new float[0.111305970237233,-0.981465737560023,-0.155999958286241,0.489278]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[3.33974,-0.214249,-0.636991]);
Layer25.children[2] = Viewpoint36;

Transform Transform37 = createNode("Transform");
Transform Transform38 = createNode("Transform");
Transform38.DEF = "_2";
Transform Transform39 = createNode("Transform");
Group Group40 = createNode("Group");
Group40.DEF = "LightAnim";
MetadataSet MetadataSet41 = createNode("MetadataSet");
MetadataSet41.name = "Animation";
MetadataInteger MetadataInteger42 = createNode("MetadataInteger");
MetadataInteger42.name = "duration";
MetadataInteger42.reference = "http://titania.create3000.de";
MetadataInteger42.value = new MFInt32(new int[100]);
MetadataSet41.value = new MFNode();

MetadataSet41.value[0] = MetadataInteger42;

MetadataInteger MetadataInteger43 = createNode("MetadataInteger");
MetadataInteger43.name = "framesPerSecond";
MetadataInteger43.reference = "http://titania.create3000.de";
MetadataInteger43.value = new MFInt32(new int[10]);
MetadataSet41.value[1] = MetadataInteger43;

Group40.metadata = MetadataSet41;

TimeSensor TimeSensor44 = createNode("TimeSensor");
TimeSensor44.DEF = "_3";
TimeSensor44.cycleInterval = 10;
TimeSensor44.loop = True;
TimeSensor44.startTime = 1452036144.23537;
TimeSensor44.stopTime = 1452036144.23535;
Group40.children = new MFNode();

Group40.children[0] = TimeSensor44;

PositionInterpolator PositionInterpolator45 = createNode("PositionInterpolator");
PositionInterpolator45.DEF = "RedLightTranslationInterpolator";
PositionInterpolator45.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]);
PositionInterpolator45.keyValue = new MFVec3f(new float[1.67997,-1.46165,1.66226,1.76407,-1.3742,1.63408,1.83857,-1.27877,1.58919,1.90386,-1.17633,1.52882,1.96034,-1.06786,1.45422,2.00841,-0.954362,1.36663,2.04848,-0.836806,1.2673,2.08094,-0.716179,1.15747,2.10618,-0.593466,1.03839,2.12461,-0.469651,0.911301,2.13662,-0.345716,0.777441,2.14262,-0.222647,0.638059,2.143,-0.101426,0.494398,2.13816,0.016961,0.347701,2.1285,0.131531,0.199214,2.11442,0.241301,0.0501793,2.09632,0.345286,-0.0981588,2.07459,0.442503,-0.244556,2.04964,0.531967,-0.387769,2.02186,0.612695,-0.526554,1.99165,0.683702,-0.659666,1.95941,0.744006,-0.785863,1.92553,0.792621,-0.903899,1.89043,0.828564,-1.01253,1.85449,0.850852,-1.11052,1.81812,0.8585,-1.19661,1.77877,0.850852,-1.2761,1.73386,0.828564,-1.35493,1.68368,0.792621,-1.43281,1.62853,0.744006,-1.50945,1.56872,0.683702,-1.58456,1.50455,0.612695,-1.65785,1.43631,0.531967,-1.72905,1.36432,0.442503,-1.79786,1.28886,0.345286,-1.864,1.21024,0.241301,-1.92717,1.12877,0.131531,-1.9871,1.04475,0.016961,-2.04349,0.958469,-0.101426,-2.09606,0.870238,-0.222647,-2.14452,0.780355,-0.345716,-2.18859,0.689123,-0.469651,-2.22797,0.596842,-0.593466,-2.26238,0.503815,-0.716179,-2.29154,0.410342,-0.836806,-2.31515,0.316725,-0.954362,-2.33293,0.223266,-1.06786,-2.34459,0.130265,-1.17633,-2.34985,0.0380245,-1.27877,-2.34842,-0.0531548,-1.3742,-2.34001,-0.142971,-1.46165,-2.32433,-0.238062,-1.54683,-2.29971,-0.344326,-1.63573,-2.26509,-0.460355,-1.72773,-2.22113,-0.584741,-1.82222,-2.1685,-0.716076,-1.91858,-2.10784,-0.852952,-2.01622,-2.03983,-0.99396,-2.1145,-1.96512,-1.13769,-2.21283,-1.88436,-1.28274,-2.31058,-1.79823,-1.4277,-2.40716,-1.70737,-1.57116,-2.50193,-1.61245,-1.71171,-2.59431,-1.51413,-1.84795,-2.68366,-1.41307,-1.97846,-2.76938,-1.30992,-2.10184,-2.85086,-1.20535,-2.21668,-2.92748,-1.10001,-2.32157,-2.99864,-0.994571,-2.41511,-3.06372,-0.889685,-2.49588,-3.1221,-0.786014,-2.56248,-3.17319,-0.684216,-2.6135,-3.21635,-0.584951,-2.64753,-3.25099,-0.488879,-2.66317,-3.27649,-0.396659,-2.659,-3.29224,-0.30895,-2.63361,-3.29763,-0.226413,-2.58328,-3.29224,-0.143363,-2.5066,-3.27649,-0.0542582,-2.40568,-3.25099,0.0400306,-2.28263,-3.21635,0.138632,-2.13956,-3.17319,0.240674,-1.97857,-3.1221,0.345286,-1.80178,-3.06372,0.451596,-1.6113,-2.99864,0.558734,-1.40922,-2.92748,0.665827,-1.19766,-2.85086,0.772004,-0.978731,-2.76938,0.876394,-0.754534,-2.68366,0.978126,-0.527181,-2.59431,1.07633,-0.298778,-2.50193,1.17013,-0.0714342,-2.40716,1.25866,0.152742,-2.31058,1.34104,0.371643,-2.21283,1.41641,0.583161,-2.1145,1.48389,0.785187,-2.01622,1.54262,0.975614,-1.91858,1.59172,1.15233,-1.82222,1.63031,1.31324,-1.72773,1.65753,1.45622,-1.63573,1.67251,1.57916,-1.54683,1.67438,1.67997,-1.46165,1.66226]);
MetadataSet MetadataSet46 = createNode("MetadataSet");
MetadataSet46.name = "Interpolator";
MetadataInteger MetadataInteger47 = createNode("MetadataInteger");
MetadataInteger47.name = "key";
MetadataInteger47.reference = "http://titania.create3000.de";
MetadataInteger47.value = new MFInt32(new int[0,25,50,75,100]);
MetadataSet46.value = new MFNode();

MetadataSet46.value[0] = MetadataInteger47;

MetadataDouble MetadataDouble48 = createNode("MetadataDouble");
MetadataDouble48.name = "keyValue";
MetadataDouble48.reference = "http://titania.create3000.de";
MetadataDouble48.value = new MFDouble(new double[1.67997002601624,-1.46165001392365,1.66226005554199,1.81811666488647,0.858499765396118,-1.19660758972168,-0.142971247434616,-1.46165001392365,-2.32433462142944,-2.63361215591431,-3.29762887954712,-0.22641310095787,1.67997002601624,-1.46165001392365,1.66226005554199]);
MetadataSet46.value[1] = MetadataDouble48;

MetadataString MetadataString49 = createNode("MetadataString");
MetadataString49.name = "keyType";
MetadataString49.reference = "http://titania.create3000.de";
MetadataString49.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet46.value[2] = MetadataString49;

PositionInterpolator45.metadata = MetadataSet46;

Group40.children[1] = PositionInterpolator45;

PositionInterpolator PositionInterpolator50 = createNode("PositionInterpolator");
PositionInterpolator50.DEF = "GreenLightTranslationInterpolator";
PositionInterpolator50.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]);
PositionInterpolator50.keyValue = new MFVec3f(new float[-0.946171,1.1655,2.0358,-1.01384,1.24581,2.02674,-1.07491,1.33779,1.99864,-1.12968,1.44019,1.95289,-1.17845,1.55173,1.89088,-1.22153,1.67112,1.81398,-1.25921,1.79711,1.72358,-1.2918,1.92841,1.62106,-1.31959,2.06375,1.50781,-1.34289,2.20187,1.3852,-1.362,2.34147,1.25462,-1.37722,2.48131,1.11746,-1.38885,2.62008,0.975094,-1.39719,2.75654,0.828908,-1.40255,2.88939,0.680283,-1.40521,3.01738,0.530604,-1.4055,3.13922,0.381254,-1.4037,3.25364,0.233614,-1.40011,3.35937,0.0890691,-1.39505,3.45513,-0.0509988,-1.3888,3.53965,-0.185207,-1.38167,3.61166,-0.312171,-1.37397,3.66989,-0.43051,-1.36599,3.71306,-0.538839,-1.35803,3.73989,-0.635777,-1.35039,3.74912,-0.719939,-1.34271,3.73989,-0.796342,-1.33432,3.71306,-0.870856,-1.32506,3.66989,-0.943379,-1.31476,3.61166,-1.01381,-1.30327,3.53965,-1.08205,-1.29043,3.45513,-1.14799,-1.27608,3.35937,-1.21154,-1.26005,3.25364,-1.27258,-1.2422,3.13922,-1.33103,-1.22236,3.01738,-1.38678,-1.20037,2.88939,-1.43972,-1.17606,2.75654,-1.48977,-1.1493,2.62008,-1.5368,-1.1199,2.48131,-1.58073,-1.08772,2.34147,-1.62145,-1.05259,2.20187,-1.65886,-1.01435,2.06375,-1.69286,-0.972847,1.92841,-1.72335,-0.927921,1.79711,-1.75023,-0.87941,1.67112,-1.77339,-0.827156,1.55173,-1.79273,-0.770998,1.44019,-1.80815,-0.710777,1.33779,-1.81955,-0.646334,1.24581,-1.82683,-0.57751,1.1655,-1.82989,-0.498739,1.09204,-1.82873,-0.40558,1.01984,-1.82348,-0.299557,0.949045,-1.81421,-0.182193,0.879804,-1.80102,-0.0550138,0.812267,-1.78399,0.0804579,0.74658,-1.76319,0.222698,0.682891,-1.73873,0.370182,0.62135,-1.71067,0.521387,0.562104,-1.6791,0.674788,0.505301,-1.64412,0.828861,0.45109,-1.60579,0.982082,0.399617,-1.56421,1.13293,0.351033,-1.51946,1.27987,0.305484,-1.47162,1.4214,0.263118,-1.42078,1.55597,0.224085,-1.36701,1.68207,0.188531,-1.31042,1.79818,0.156606,-1.25107,1.90277,0.128457,-1.18905,1.99431,0.104232,-1.12445,2.07129,0.084079,-1.05735,2.13218,0.068147,-0.987835,2.17545,0.0565836,-0.915987,2.19958,0.0495369,-0.841892,2.20304,0.0471551,-0.765632,2.18426,0.0495369,-0.681326,2.14378,0.0565836,-0.583971,2.08327,0.068147,-0.474966,2.00438,0.084079,-0.355712,1.90878,0.104232,-0.22761,1.79815,0.128457,-0.0920598,1.67415,0.156606,0.0495376,1.53843,0.188531,0.195782,1.39267,0.224085,0.345272,1.23854,0.263118,0.496609,1.07769,0.305484,0.64839,0.911802,0.351033,0.799217,0.742529,0.399617,0.947687,0.571541,0.45109,1.0924,0.400504,0.505301,1.23196,0.231082,0.562104,1.36496,0.0649424,0.62135,1.49,-0.0962502,0.682891,1.60569,-0.25083,0.74658,1.71061,-0.397132,0.812267,1.80338,-0.533489,0.879804,1.88258,-0.658238,0.949045,1.94683,-0.769711,1.01984,1.99471,-0.866244,1.09204,2.02484,-0.946171,1.1655,2.0358]);
MetadataSet MetadataSet51 = createNode("MetadataSet");
MetadataSet51.name = "Interpolator";
MetadataInteger MetadataInteger52 = createNode("MetadataInteger");
MetadataInteger52.name = "key";
MetadataInteger52.reference = "http://titania.create3000.de";
MetadataInteger52.value = new MFInt32(new int[0,25,50,75,100]);
MetadataSet51.value = new MFNode();

MetadataSet51.value[0] = MetadataInteger52;

MetadataDouble MetadataDouble53 = createNode("MetadataDouble");
MetadataDouble53.name = "keyValue";
MetadataDouble53.reference = "http://titania.create3000.de";
MetadataDouble53.value = new MFDouble(new double[-0.9461709856987,1.16550004482269,2.03579998016357,-1.35039067268372,3.74911761283875,-0.719938933849335,-0.577509522438049,1.16550004482269,-1.82989358901978,2.20304226875305,0.0471551418304443,-0.765632033348083,-0.9461709856987,1.16550004482269,2.03579998016357]);
MetadataSet51.value[1] = MetadataDouble53;

MetadataString MetadataString54 = createNode("MetadataString");
MetadataString54.name = "keyType";
MetadataString54.reference = "http://titania.create3000.de";
MetadataString54.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet51.value[2] = MetadataString54;

PositionInterpolator50.metadata = MetadataSet51;

Group40.children[2] = PositionInterpolator50;

PositionInterpolator PositionInterpolator55 = createNode("PositionInterpolator");
PositionInterpolator55.DEF = "BlueLightTranslationInterpolator";
PositionInterpolator55.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]);
PositionInterpolator55.keyValue = new MFVec3f(new float[0.80258,-2.68914,-1.73918,0.879722,-2.64638,-1.70261,0.955826,-2.56999,-1.64603,1.03056,-2.46297,-1.57103,1.1036,-2.32831,-1.47919,1.1746,-2.16901,-1.37211,1.24324,-1.98806,-1.25137,1.30919,-1.78847,-1.11855,1.37212,-1.57323,-0.975241,1.43169,-1.34533,-0.823032,1.48757,-1.10777,-0.663507,1.53944,-0.86355,-0.498253,1.58696,-0.615662,-0.328856,1.6298,-0.367103,-0.156904,1.66764,-0.12087,0.0160182,1.70013,0.120042,0.188323,1.72695,0.352635,0.358425,1.74776,0.573914,0.524736,1.76225,0.780883,0.685671,1.77007,0.970544,0.839643,1.77089,1.1399,0.985066,1.76439,1.28596,1.12035,1.75023,1.40573,1.24392,1.72808,1.4962,1.35417,1.69761,1.55439,1.44953,1.65849,1.57729,1.52841,1.60715,1.56323,1.59513,1.54104,1.5145,1.65524,1.4613,1.43399,1.70898,1.36912,1.32463,1.75659,1.26566,1.18932,1.79831,1.15208,1.03099,1.83438,1.02956,0.852549,1.86504,0.899258,0.656909,1.89054,0.762342,0.446986,1.91111,0.619982,0.225694,1.92699,0.473344,-0.00405218,1.93842,0.323595,-0.239338,1.94564,0.171903,-0.47725,1.9489,0.0194347,-0.714873,1.94844,-0.132643,-0.949293,1.94449,-0.283162,-1.17759,1.93729,-0.430956,-1.39686,1.92709,-0.574858,-1.60419,1.91413,-0.713699,-1.79665,1.89864,-0.846314,-1.97134,1.88087,-0.971535,-2.12533,1.86106,-1.08819,-2.25572,1.83944,-1.19512,-2.3596,1.81627,-1.29116,-2.43404,1.79177,-1.37513,-2.47613,1.76619,-1.45222,-2.48585,1.73769,-1.52816,-2.46673,1.70445,-1.60264,-2.42121,1.66671,-1.67532,-2.35173,1.62475,-1.7459,-2.26072,1.57883,-1.81405,-2.15062,1.52919,-1.87945,-2.02386,1.4761,-1.94177,-1.88288,1.41982,-2.0007,-1.73011,1.36062,-2.05591,-1.56799,1.29874,-2.10707,-1.39895,1.23445,-2.15388,-1.22543,1.16801,-2.196,-1.04987,1.09967,-2.23312,-0.874695,1.02971,-2.26491,-0.702348,0.958364,-2.29105,-0.535261,0.885909,-2.31123,-0.375872,0.8126,-2.32511,-0.226614,0.738695,-2.33237,-0.0899234,0.664455,-2.3327,0.0317641,0.590139,-2.32577,0.136013,0.516006,-2.31127,0.220389,0.442316,-2.28886,0.282455,0.369328,-2.25823,0.319777,0.297302,-2.21906,0.329918,0.226498,-2.16778,0.310929,0.151703,-2.10182,0.26416,0.0682593,-2.02235,0.192128,-0.0227481,-1.93051,0.0973513,-0.120232,-1.82747,-0.017654,-0.223106,-1.71439,-0.15037,-0.330284,-1.59242,-0.29828,-0.440678,-1.46272,-0.458867,-0.553203,-1.32645,-0.629612,-0.666772,-1.18477,-0.808,-0.780298,-1.03883,-0.991513,-0.892694,-0.889794,-1.17763,-1.00287,-0.738821,-1.36384,-1.10975,-0.587066,-1.54763,-1.21224,-0.435689,-1.72647,-1.30925,-0.285847,-1.89784,-1.39971,-0.138698,-2.05924,-1.48251,0.00460011,-2.20815,-1.55657,0.142889,-2.34204,-1.62082,0.27501,-2.4584,-1.67415,0.399807,-2.55471,-1.7155,0.51612,-2.62846,-1.74375,0.622792,-2.67712,-1.75785,0.718664,-2.69819,-1.75668,0.80258,-2.68914,-1.73918]);
MetadataSet MetadataSet56 = createNode("MetadataSet");
MetadataSet56.name = "Interpolator";
MetadataInteger MetadataInteger57 = createNode("MetadataInteger");
MetadataInteger57.name = "key";
MetadataInteger57.reference = "http://titania.create3000.de";
MetadataInteger57.value = new MFInt32(new int[0,25,50,75,100]);
MetadataSet56.value = new MFNode();

MetadataSet56.value[0] = MetadataInteger57;

MetadataDouble MetadataDouble58 = createNode("MetadataDouble");
MetadataDouble58.name = "keyValue";
MetadataDouble58.reference = "http://titania.create3000.de";
MetadataDouble58.value = new MFDouble(new double[0.802579998970032,-2.68913912773132,-1.73917651176453,1.65848922729492,1.57728636264801,1.52840757369995,-1.3751300573349,-2.47613000869751,1.76619005203247,-2.21905589103699,0.329918414354324,0.226497903466225,0.802579998970032,-2.68913912773132,-1.73917651176453]);
MetadataSet56.value[1] = MetadataDouble58;

MetadataString MetadataString59 = createNode("MetadataString");
MetadataString59.name = "keyType";
MetadataString59.reference = "http://titania.create3000.de";
MetadataString59.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet56.value[2] = MetadataString59;

PositionInterpolator55.metadata = MetadataSet56;

Group40.children[3] = PositionInterpolator55;

PositionInterpolator PositionInterpolator60 = createNode("PositionInterpolator");
PositionInterpolator60.DEF = "PinkLightTranslationInterpolator";
PositionInterpolator60.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]);
PositionInterpolator60.keyValue = new MFVec3f(new float[0.80258,0.426257,-2.18794,0.733537,0.422312,-2.1664,0.645973,0.410209,-2.12171,0.541725,0.390655,-2.05566,0.422626,0.364359,-1.97003,0.290512,0.332029,-1.86661,0.147218,0.294373,-1.74719,-0.00542264,0.252099,-1.61357,-0.165574,0.205915,-1.46751,-0.331401,0.15653,-1.31083,-0.501069,0.104652,-1.14529,-0.672743,0.050988,-0.972699,-0.844589,-0.00375272,-0.794834,-1.01477,-0.0588624,-0.613488,-1.18146,-0.113633,-0.430447,-1.34281,-0.167356,-0.2475,-1.49699,-0.219323,-0.0664348,-1.64217,-0.268827,0.11096,-1.77651,-0.315159,0.282897,-1.89818,-0.357611,0.447587,-2.00534,-0.395474,0.603243,-2.09616,-0.428042,0.748076,-2.1688,-0.454605,0.880298,-2.22144,-0.474455,0.998121,-2.25222,-0.486884,1.09976,-2.25932,-0.491185,1.18342,-2.24243,-0.48543,1.25347,-2.20353,-0.468881,1.31575,-2.14423,-0.442608,1.37066,-2.06614,-0.407684,1.41858,-1.97085,-0.36518,1.45991,-1.85999,-0.316168,1.49506,-1.73515,-0.261719,1.52442,-1.59794,-0.202906,1.54839,-1.44997,-0.1408,1.56736,-1.29285,-0.0764723,1.58174,-1.12817,-0.010995,1.59192,-0.957558,0.0545603,1.59829,-0.782608,0.119122,1.60126,-0.604929,0.181618,1.60122,-0.426129,0.240977,1.59857,-0.247813,0.296127,1.59371,-0.0715893,0.345997,1.58703,0.100936,0.389515,1.57893,0.268157,0.425609,1.56981,0.428467,0.453207,1.56006,0.580259,0.471238,1.55009,0.721925,0.47863,1.54029,0.851861,0.474312,1.53106,0.968458,0.457211,1.52279,1.07011,0.426257,1.51589,1.1619,0.378319,1.5079,1.25003,0.312102,1.49632,1.33455,0.229281,1.48142,1.41556,0.131529,1.46347,1.4931,0.0205239,1.44277,1.56725,-0.102061,1.41958,1.63808,-0.234549,1.39419,1.70565,-0.375266,1.36687,1.77004,-0.522536,1.33791,1.83132,-0.674684,1.30759,1.88954,-0.830035,1.27618,1.94479,-0.986914,1.24396,1.99712,-1.14365,1.21122,2.04661,-1.29855,1.17823,2.09332,-1.44996,1.14527,2.13733,-1.5962,1.11262,2.1787,-1.73559,1.08056,2.2175,-1.86645,1.04937,2.2538,-1.98712,1.01933,2.28767,-2.09591,0.990718,2.31917,-2.19115,0.963813,2.34838,-2.27117,0.938895,2.37536,-2.33429,0.916243,2.40018,-2.37883,0.896137,2.42292,-2.40313,0.878855,2.4883,-2.41901,0.83514,2.54592,-2.38444,0.802964,2.59563,-2.30624,0.779855,2.63731,-2.19125,0.76334,2.6708,-2.0463,0.750949,2.69599,-1.87823,0.74021,2.71273,-1.69388,0.728652,2.72088,-1.50007,0.713802,2.72032,-1.30365,0.693189,2.71091,-1.11145,0.664341,2.6925,-0.930296,0.624788,2.66498,-0.767033,0.572057,2.62819,-0.628494,0.503677,2.58201,-0.521514,0.417176,2.49765,-0.380555,0.223472,2.40742,-0.246634,-0.0332888,2.30811,-0.121058,-0.334963,2.19653,-0.00513326,-0.663406,2.06946,0.0998316,-1.00047,1.92371,0.192529,-1.32802,1.75607,0.271653,-1.62791,1.56335,0.335895,-1.88199,1.34232,0.383948,-2.07211,1.0898,0.414504,-2.18015,0.80258,0.426257,-2.18794]);
MetadataSet MetadataSet61 = createNode("MetadataSet");
MetadataSet61.name = "Interpolator";
MetadataInteger MetadataInteger62 = createNode("MetadataInteger");
MetadataInteger62.name = "key";
MetadataInteger62.reference = "http://titania.create3000.de";
MetadataInteger62.value = new MFInt32(new int[0,25,50,75,89,100]);
MetadataSet61.value = new MFNode();

MetadataSet61.value[0] = MetadataInteger62;

MetadataDouble MetadataDouble63 = createNode("MetadataDouble");
MetadataDouble63.name = "keyValue";
MetadataDouble63.reference = "http://titania.create3000.de";
MetadataDouble63.value = new MFDouble(new double[0.802579998970032,0.426256656646729,-2.18794059753418,-2.25932049751282,-0.491184830665588,1.18341720104218,1.0701105594635,0.426256656646729,1.5158873796463,2.42291641235352,-2.40312576293945,0.878854751586914,2.58200669288635,-0.52151358127594,0.417176455259323,0.802579998970032,0.426256656646729,-2.18794059753418]);
MetadataSet61.value[1] = MetadataDouble63;

MetadataString MetadataString64 = createNode("MetadataString");
MetadataString64.name = "keyType";
MetadataString64.reference = "http://titania.create3000.de";
MetadataString64.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet61.value[2] = MetadataString64;

PositionInterpolator60.metadata = MetadataSet61;

Group40.children[4] = PositionInterpolator60;

Transform39.children = new MFNode();

Transform39.children[0] = Group40;

Transform Transform65 = createNode("Transform");
Transform65.DEF = "RedLight";
Transform65.translation = new SFVec3f(new float[2.06338,0.482709,-0.308917]);
PointLight PointLight66 = createNode("PointLight");
PointLight66.DEF = "_4";
PointLight66.color = new SFColor(new float[1,0,0]);
PointLight66.attenuation = new SFVec3f(new float[0.07,0.16,0.88]);
Transform65.children = new MFNode();

Transform65.children[0] = PointLight66;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "Sphere";
Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.DEF = "_5";
Material70.emissiveColor = new SFColor(new float[1,0,0]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

Sphere Sphere71 = createNode("Sphere");
Sphere71.DEF = "_6";
Sphere71.radius = 0.08;
Shape68.geometry = Sphere71;

Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

Transform65.children[1] = Transform67;

Transform39.children[1] = Transform65;

Transform Transform72 = createNode("Transform");
Transform72.DEF = "GreenLight";
Transform72.translation = new SFVec3f(new float[-1.40209,3.30116,0.168655]);
PointLight PointLight73 = createNode("PointLight");
PointLight73.DEF = "_7";
PointLight73.color = new SFColor(new float[0,1,0]);
PointLight73.attenuation = new SFVec3f(new float[0.07,0.16,0.88]);
Transform72.children = new MFNode();

Transform72.children[0] = PointLight73;

Transform Transform74 = createNode("Transform");
Transform74.DEF = "Sphere_1";
Shape Shape75 = createNode("Shape");
Appearance Appearance76 = createNode("Appearance");
Material Material77 = createNode("Material");
Material77.DEF = "_8";
Material77.emissiveColor = new SFColor(new float[0,1,0]);
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

Sphere Sphere78 = createNode("Sphere");
Sphere78.USE = "_6";
Shape75.geometry = Sphere78;

Transform74.children = new MFNode();

Transform74.children[0] = Shape75;

Transform72.children[1] = Transform74;

Transform39.children[2] = Transform72;

Transform Transform79 = createNode("Transform");
Transform79.DEF = "BlueLight";
Transform79.translation = new SFVec3f(new float[1.75427,0.666927,0.597061]);
PointLight PointLight80 = createNode("PointLight");
PointLight80.DEF = "_9";
PointLight80.color = new SFColor(new float[0,0,1]);
PointLight80.attenuation = new SFVec3f(new float[0.07,0.16,0.88]);
Transform79.children = new MFNode();

Transform79.children[0] = PointLight80;

Transform Transform81 = createNode("Transform");
Transform81.DEF = "Sphere_2";
Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
Material Material84 = createNode("Material");
Material84.DEF = "_10";
Material84.emissiveColor = new SFColor(new float[0,0,1]);
Appearance83.material = Material84;

Shape82.appearance = Appearance83;

Sphere Sphere85 = createNode("Sphere");
Sphere85.USE = "_6";
Shape82.geometry = Sphere85;

Transform81.children = new MFNode();

Transform81.children[0] = Shape82;

Transform79.children[1] = Transform81;

Transform39.children[3] = Transform79;

Transform Transform86 = createNode("Transform");
Transform86.DEF = "PinkLight";
Transform86.translation = new SFVec3f(new float[-1.70254,-0.289649,0.18823]);
PointLight PointLight87 = createNode("PointLight");
PointLight87.DEF = "_11";
PointLight87.color = new SFColor(new float[1,0,1]);
PointLight87.attenuation = new SFVec3f(new float[0.07,0.16,0.88]);
Transform86.children = new MFNode();

Transform86.children[0] = PointLight87;

Transform Transform88 = createNode("Transform");
Transform88.DEF = "Sphere_3";
Shape Shape89 = createNode("Shape");
Appearance Appearance90 = createNode("Appearance");
Material Material91 = createNode("Material");
Material91.DEF = "_12";
Material91.emissiveColor = new SFColor(new float[1,0,1]);
Appearance90.material = Material91;

Shape89.appearance = Appearance90;

Sphere Sphere92 = createNode("Sphere");
Sphere92.USE = "_6";
Shape89.geometry = Sphere92;

Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

Transform86.children[1] = Transform88;

Transform39.children[4] = Transform86;

Transform38.children = new MFNode();

Transform38.children[0] = Transform39;

Transform Transform93 = createNode("Transform");
Transform93.DEF = "Beethoven";
Inline Inline94 = createNode("Inline");
Inline94.url = new MFString(new java.lang.String[", ","../Geometry3D/Beethoven.x3dzfile:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/Beethoven.x3dz"]);
Transform93.children = new MFNode();

Transform93.children[0] = Inline94;

Transform38.children[1] = Transform93;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

Layer25.children[3] = Transform37;

Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[9,0,0]);
Transform Transform96 = createNode("Transform");
Transform96.USE = "_2";
Transform95.children = new MFNode();

Transform95.children[0] = Transform96;

Layer25.children[4] = Transform95;

LayerSet24.layers = new MFNode();

LayerSet24.layers[0] = Layer25;

Layer Layer97 = createNode("Layer");
Layer97.DEF = "HUD";
MetadataSet MetadataSet98 = createNode("MetadataSet");
MetadataSet98.name = "Titania";
MetadataSet98.DEF = "Titania_2";
MetadataSet98.reference = "http://titania.create3000.de";
MetadataSet MetadataSet99 = createNode("MetadataSet");
MetadataSet99.name = "Grid";
MetadataSet99.DEF = "Grid_1";
MetadataSet99.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean100 = createNode("MetadataBoolean");
MetadataBoolean100.name = "enabled";
MetadataBoolean100.reference = "http://titania.create3000.de";
MetadataBoolean100.value = new MFBool(new boolean[True]);
MetadataSet99.value = new MFNode();

MetadataSet99.value[0] = MetadataBoolean100;

MetadataFloat MetadataFloat101 = createNode("MetadataFloat");
MetadataFloat101.name = "rotation";
MetadataFloat101.reference = "http://titania.create3000.de";
MetadataFloat101.value = new MFFloat(new float[1,0,0,1.5708]);
MetadataSet99.value[1] = MetadataFloat101;

MetadataFloat MetadataFloat102 = createNode("MetadataFloat");
MetadataFloat102.name = "scale";
MetadataFloat102.reference = "http://titania.create3000.de";
MetadataFloat102.value = new MFFloat(new float[0.049,0.049,0.049]);
MetadataSet99.value[2] = MetadataFloat102;

MetadataInteger MetadataInteger103 = createNode("MetadataInteger");
MetadataInteger103.name = "dimension";
MetadataInteger103.reference = "http://titania.create3000.de";
MetadataInteger103.value = new MFInt32(new int[73,10,41]);
MetadataSet99.value[3] = MetadataInteger103;

MetadataInteger MetadataInteger104 = createNode("MetadataInteger");
MetadataInteger104.name = "majorLineEvery";
MetadataInteger104.reference = "http://titania.create3000.de";
MetadataInteger104.value = new MFInt32(new int[5,5,5,5,0,5]);
MetadataSet99.value[4] = MetadataInteger104;

MetadataInteger MetadataInteger105 = createNode("MetadataInteger");
MetadataInteger105.name = "majorLineOffset";
MetadataInteger105.reference = "http://titania.create3000.de";
MetadataInteger105.value = new MFInt32(new int[0,0,-5,-1,0,-6]);
MetadataSet99.value[5] = MetadataInteger105;

MetadataFloat MetadataFloat106 = createNode("MetadataFloat");
MetadataFloat106.name = "lineColor";
MetadataFloat106.reference = "http://titania.create3000.de";
MetadataFloat106.value = new MFFloat(new float[1,0.7,0.7,0.0588235]);
MetadataSet99.value[6] = MetadataFloat106;

MetadataSet98.value = new MFNode();

MetadataSet98.value[0] = MetadataSet99;

MetadataSet MetadataSet107 = createNode("MetadataSet");
MetadataSet107.name = "AngleGrid";
MetadataSet107.DEF = "AngleGrid_1";
MetadataSet107.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean108 = createNode("MetadataBoolean");
MetadataBoolean108.name = "enabled";
MetadataBoolean108.reference = "http://titania.create3000.de";
MetadataBoolean108.value = new MFBool(new boolean[False]);
MetadataSet107.value = new MFNode();

MetadataSet107.value[0] = MetadataBoolean108;

MetadataSet98.value[1] = MetadataSet107;

Layer97.metadata = MetadataSet98;

OrthoViewpoint OrthoViewpoint109 = createNode("OrthoViewpoint");
Layer97.children = new MFNode();

Layer97.children[0] = OrthoViewpoint109;

Transform Transform110 = createNode("Transform");
Transform110.DEF = "Geometry3D";
Transform110.translation = new SFVec3f(new float[-1.6905,0.955504,-1]);
Transform110.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape111 = createNode("Shape");
Appearance Appearance112 = createNode("Appearance");
Material Material113 = createNode("Material");
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

Text Text114 = createNode("Text");
Text114.string = new MFString(new java.lang.String["PointLight"]);
Text114.solid = True;
FontStyle FontStyle115 = createNode("FontStyle");
FontStyle115.family = new MFString(new java.lang.String["SANS"]);
FontStyle115.size = 1.61;
FontStyle115.justify = new MFString(new java.lang.String[", ","BEGINBEGIN"]);
Text114.fontStyle = FontStyle115;

Shape111.geometry = Text114;

Transform110.children = new MFNode();

Transform110.children[0] = Shape111;

Layer97.children[1] = Transform110;

Group Group116 = createNode("Group");
Group116.DEF = "ShadingMenu";
Script Script117 = createNode("Script");
Script117.DEF = "ShadingScript";
field field118 = createNode("field");
field118.name = "set_pointset";
field118.accessType = "inputOnly";
field118.type = "SFTime";
Script117.field = new MFNode();

Script117.field[0] = field118;

field field119 = createNode("field");
field119.name = "set_wireframe";
field119.accessType = "inputOnly";
field119.type = "SFTime";
Script117.field[1] = field119;

field field120 = createNode("field");
field120.name = "set_flat";
field120.accessType = "inputOnly";
field120.type = "SFTime";
Script117.field[2] = field120;

field field121 = createNode("field");
field121.name = "set_gouraud";
field121.accessType = "inputOnly";
field121.type = "SFTime";
Script117.field[3] = field121;

field field122 = createNode("field");
field122.name = "set_phong";
field122.accessType = "inputOnly";
field122.type = "SFTime";
Script117.field[4] = field122;


Script117.setSourceCode(`javascript:\n"+
"\n"+
"function set_pointset ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"POINTSET\");\n"+
"	Browser .setDescription (\"Shading: Pointset\");\n"+
"}\n"+
"\n"+
"function set_wireframe ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"WIREFRAME\");\n"+
"	Browser .setDescription (\"Shading: Wirefrane\");\n"+
"}\n"+
"\n"+
"function set_flat ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"FLAT\");\n"+
"	Browser .setDescription (\"Shading: Flat\");\n"+
"}\n"+
"\n"+
"function set_gouraud ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"GOURAUD\");\n"+
"	Browser .setDescription (\"Shading: Gouraud\");\n"+
"}\n"+
"\n"+
"function set_phong ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"PHONG\");\n"+
"	Browser .setDescription (\"Shading: Phong\");\n"+
"}`)
Group116.children = new MFNode();

Group116.children[0] = Script117;

Transform Transform123 = createNode("Transform");
Transform123.DEF = "Text";
Transform123.translation = new SFVec3f(new float[1.6905,-0.857496,-1]);
Transform123.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
Material Material126 = createNode("Material");
Material126.DEF = "Artdeco31";
Material126.ambientIntensity = 0;
Material126.diffuseColor = new SFColor(new float[0,0,0]);
Material126.shininess = 0;
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

Text Text127 = createNode("Text");
Text127.string = new MFString(new java.lang.String["Shading"]);
Text127.solid = True;
FontStyle FontStyle128 = createNode("FontStyle");
FontStyle128.family = new MFString(new java.lang.String["SANS"]);
FontStyle128.style = "BOLD";
FontStyle128.size = 0.68;
FontStyle128.justify = new MFString(new java.lang.String["END"]);
Text127.fontStyle = FontStyle128;

Shape124.geometry = Text127;

Transform123.children = new MFNode();

Transform123.children[0] = Shape124;

Group116.children[1] = Transform123;

Transform Transform129 = createNode("Transform");
Transform129.DEF = "Text_1";
Transform129.translation = new SFVec3f(new float[1.6905,-0.955496,-1]);
Transform129.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape130 = createNode("Shape");
Appearance Appearance131 = createNode("Appearance");
Material Material132 = createNode("Material");
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

Text Text133 = createNode("Text");
Text133.string = new MFString(new java.lang.String["Pointset Wireframe Flat Gouraud Phong"]);
Text133.solid = True;
FontStyle FontStyle134 = createNode("FontStyle");
FontStyle134.USE = "_1";
Text133.fontStyle = FontStyle134;

Shape130.geometry = Text133;

Transform129.children = new MFNode();

Transform129.children[0] = Shape130;

Group116.children[2] = Transform129;

Transform Transform135 = createNode("Transform");
Transform135.DEF = "Pointset";
Transform135.translation = new SFVec3f(new float[0.436176,-0.916146,0]);
Transform135.scale = new SFVec3f(new float[0.139972,0.040588,0.040588]);
Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Material138.DEF = "_13";
Material138.transparency = 1;
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

IndexedFaceSet IndexedFaceSet139 = createNode("IndexedFaceSet");
IndexedFaceSet139.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet139.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate140 = createNode("TextureCoordinate");
TextureCoordinate140.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet139.texCoord = TextureCoordinate140;

Coordinate Coordinate141 = createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet139.coord = Coordinate141;

Shape136.geometry = IndexedFaceSet139;

Transform135.children = new MFNode();

Transform135.children[0] = Shape136;

TouchSensor TouchSensor142 = createNode("TouchSensor");
TouchSensor142.DEF = "_14";
Transform135.children[1] = TouchSensor142;

Group116.children[3] = Transform135;

Transform Transform143 = createNode("Transform");
Transform143.DEF = "Wireframe";
Transform143.translation = new SFVec3f(new float[0.77569,-0.916146,0]);
Transform143.scale = new SFVec3f(new float[0.177062,0.040588,0.040588]);
Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Material Material146 = createNode("Material");
Material146.USE = "_13";
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

IndexedFaceSet IndexedFaceSet147 = createNode("IndexedFaceSet");
IndexedFaceSet147.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet147.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate148 = createNode("TextureCoordinate");
TextureCoordinate148.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet147.texCoord = TextureCoordinate148;

Coordinate Coordinate149 = createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet147.coord = Coordinate149;

Shape144.geometry = IndexedFaceSet147;

Transform143.children = new MFNode();

Transform143.children[0] = Shape144;

TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.DEF = "_15";
Transform143.children[1] = TouchSensor150;

Group116.children[4] = Transform143;

Transform Transform151 = createNode("Transform");
Transform151.DEF = "Flat";
Transform151.translation = new SFVec3f(new float[1.04432,-0.916146,0]);
Transform151.scale = new SFVec3f(new float[0.0743511,0.040588,0.040588]);
Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
Material Material154 = createNode("Material");
Material154.USE = "_13";
Appearance153.material = Material154;

Shape152.appearance = Appearance153;

IndexedFaceSet IndexedFaceSet155 = createNode("IndexedFaceSet");
IndexedFaceSet155.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet155.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate156 = createNode("TextureCoordinate");
TextureCoordinate156.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet155.texCoord = TextureCoordinate156;

Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet155.coord = Coordinate157;

Shape152.geometry = IndexedFaceSet155;

Transform151.children = new MFNode();

Transform151.children[0] = Shape152;

TouchSensor TouchSensor158 = createNode("TouchSensor");
TouchSensor158.DEF = "_16";
Transform151.children[1] = TouchSensor158;

Group116.children[5] = Transform151;

Transform Transform159 = createNode("Transform");
Transform159.DEF = "Gouraud";
Transform159.translation = new SFVec3f(new float[1.27986,-0.916146,0]);
Transform159.scale = new SFVec3f(new float[0.142825,0.040588,0.040588]);
Shape Shape160 = createNode("Shape");
Appearance Appearance161 = createNode("Appearance");
Material Material162 = createNode("Material");
Material162.USE = "_13";
Appearance161.material = Material162;

Shape160.appearance = Appearance161;

IndexedFaceSet IndexedFaceSet163 = createNode("IndexedFaceSet");
IndexedFaceSet163.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet163.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate164 = createNode("TextureCoordinate");
TextureCoordinate164.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet163.texCoord = TextureCoordinate164;

Coordinate Coordinate165 = createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet163.coord = Coordinate165;

Shape160.geometry = IndexedFaceSet163;

Transform159.children = new MFNode();

Transform159.children[0] = Shape160;

TouchSensor TouchSensor166 = createNode("TouchSensor");
TouchSensor166.DEF = "_17";
Transform159.children[1] = TouchSensor166;

Group116.children[6] = Transform159;

Transform Transform167 = createNode("Transform");
Transform167.DEF = "Phong";
Transform167.translation = new SFVec3f(new float[1.55457,-0.916146,0]);
Transform167.scale = new SFVec3f(new float[0.111441,0.040588,0.040588]);
Shape Shape168 = createNode("Shape");
Appearance Appearance169 = createNode("Appearance");
Material Material170 = createNode("Material");
Material170.USE = "_13";
Appearance169.material = Material170;

Shape168.appearance = Appearance169;

IndexedFaceSet IndexedFaceSet171 = createNode("IndexedFaceSet");
IndexedFaceSet171.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet171.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate172 = createNode("TextureCoordinate");
TextureCoordinate172.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet171.texCoord = TextureCoordinate172;

Coordinate Coordinate173 = createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet171.coord = Coordinate173;

Shape168.geometry = IndexedFaceSet171;

Transform167.children = new MFNode();

Transform167.children[0] = Shape168;

TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.DEF = "_18";
Transform167.children[1] = TouchSensor174;

Group116.children[7] = Transform167;

Layer97.children[2] = Group116;

LayerSet24.layers[1] = Layer97;

layerSet[1] = LayerSet24;

ROUTE ROUTE175 = createNode("ROUTE");
ROUTE175.fromNode = "_3";
ROUTE175.fromField = "fraction_changed";
ROUTE175.toNode = "RedLightTranslationInterpolator";
ROUTE175.toField = "set_fraction";
children[2] = ROUTE175;

ROUTE ROUTE176 = createNode("ROUTE");
ROUTE176.fromNode = "RedLightTranslationInterpolator";
ROUTE176.fromField = "value_changed";
ROUTE176.toNode = "RedLight";
ROUTE176.toField = "set_translation";
children[3] = ROUTE176;

ROUTE ROUTE177 = createNode("ROUTE");
ROUTE177.fromNode = "_3";
ROUTE177.fromField = "fraction_changed";
ROUTE177.toNode = "GreenLightTranslationInterpolator";
ROUTE177.toField = "set_fraction";
children[4] = ROUTE177;

ROUTE ROUTE178 = createNode("ROUTE");
ROUTE178.fromNode = "GreenLightTranslationInterpolator";
ROUTE178.fromField = "value_changed";
ROUTE178.toNode = "GreenLight";
ROUTE178.toField = "set_translation";
children[5] = ROUTE178;

ROUTE ROUTE179 = createNode("ROUTE");
ROUTE179.fromNode = "_3";
ROUTE179.fromField = "fraction_changed";
ROUTE179.toNode = "BlueLightTranslationInterpolator";
ROUTE179.toField = "set_fraction";
children[6] = ROUTE179;

ROUTE ROUTE180 = createNode("ROUTE");
ROUTE180.fromNode = "BlueLightTranslationInterpolator";
ROUTE180.fromField = "value_changed";
ROUTE180.toNode = "BlueLight";
ROUTE180.toField = "set_translation";
children[7] = ROUTE180;

ROUTE ROUTE181 = createNode("ROUTE");
ROUTE181.fromNode = "_3";
ROUTE181.fromField = "fraction_changed";
ROUTE181.toNode = "PinkLightTranslationInterpolator";
ROUTE181.toField = "set_fraction";
children[8] = ROUTE181;

ROUTE ROUTE182 = createNode("ROUTE");
ROUTE182.fromNode = "PinkLightTranslationInterpolator";
ROUTE182.fromField = "value_changed";
ROUTE182.toNode = "PinkLight";
ROUTE182.toField = "set_translation";
children[9] = ROUTE182;

ROUTE ROUTE183 = createNode("ROUTE");
ROUTE183.fromNode = "_18";
ROUTE183.fromField = "touchTime";
ROUTE183.toNode = "ShadingScript";
ROUTE183.toField = "set_phong";
children[10] = ROUTE183;

ROUTE ROUTE184 = createNode("ROUTE");
ROUTE184.fromNode = "_17";
ROUTE184.fromField = "touchTime";
ROUTE184.toNode = "ShadingScript";
ROUTE184.toField = "set_gouraud";
children[11] = ROUTE184;

ROUTE ROUTE185 = createNode("ROUTE");
ROUTE185.fromNode = "_16";
ROUTE185.fromField = "touchTime";
ROUTE185.toNode = "ShadingScript";
ROUTE185.toField = "set_flat";
children[12] = ROUTE185;

ROUTE ROUTE186 = createNode("ROUTE");
ROUTE186.fromNode = "_15";
ROUTE186.fromField = "touchTime";
ROUTE186.toNode = "ShadingScript";
ROUTE186.toField = "set_wireframe";
children[13] = ROUTE186;

ROUTE ROUTE187 = createNode("ROUTE");
ROUTE187.fromNode = "_14";
ROUTE187.fromField = "touchTime";
ROUTE187.toNode = "ShadingScript";
ROUTE187.toField = "set_pointset";
children[14] = ROUTE187;

ROUTE ROUTE188 = createNode("ROUTE");
ROUTE188.fromNode = "_4";
ROUTE188.fromField = "color_changed";
ROUTE188.toNode = "_5";
ROUTE188.toField = "set_emissiveColor";
children[15] = ROUTE188;

ROUTE ROUTE189 = createNode("ROUTE");
ROUTE189.fromNode = "_11";
ROUTE189.fromField = "color_changed";
ROUTE189.toNode = "_12";
ROUTE189.toField = "set_emissiveColor";
children[16] = ROUTE189;

ROUTE ROUTE190 = createNode("ROUTE");
ROUTE190.fromNode = "_9";
ROUTE190.fromField = "color_changed";
ROUTE190.toNode = "_10";
ROUTE190.toField = "set_emissiveColor";
children[17] = ROUTE190;

ROUTE ROUTE191 = createNode("ROUTE");
ROUTE191.fromNode = "_7";
ROUTE191.fromField = "color_changed";
ROUTE191.toNode = "_8";
ROUTE191.toField = "set_emissiveColor";
children[18] = ROUTE191;

}
