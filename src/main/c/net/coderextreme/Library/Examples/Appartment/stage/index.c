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
meta3.content = "Wed, 26 Aug 2015 12:17:13 GMT";
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
meta6.content = "Wed, 26 Aug 2015 12:17:13 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Appartment";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "viewing";
NavigationInfo NavigationInfo11 = createNode("NavigationInfo");
NavigationInfo11.DEF = "_top";
NavigationInfo11.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo11.transitionType = new MFString(new java.lang.String["ANIMATE"]);
NavigationInfo11.transitionTime = 2;
Transform10.children = new MFNode();

Transform10.children[0] = NavigationInfo11;

NavigationInfo NavigationInfo12 = createNode("NavigationInfo");
NavigationInfo12.DEF = "_inside";
NavigationInfo12.type = new MFString(new java.lang.String["ANY","WALK"]);
NavigationInfo12.speed = 0.3;
NavigationInfo12.headlight = False;
NavigationInfo12.transitionType = new MFString(new java.lang.String["ANIMATE"]);
NavigationInfo12.transitionTime = 2;
Transform10.children[1] = NavigationInfo12;

Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.DEF = "VP2";
Viewpoint13.description = "top";
Viewpoint13.position = new SFVec3f(new float[-1.58774,10.891,2.33508]);
Viewpoint13.orientation = new SFRotation(new float[-0.999999,-0.00113122,0.00113515,1.53307]);
Viewpoint13.fieldOfView = 1.3;
Transform10.children[2] = Viewpoint13;

Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.DEF = "VP1";
Viewpoint14.description = "inside";
Viewpoint14.position = new SFVec3f(new float[4.57879,1.10243,0.55636]);
Viewpoint14.orientation = new SFRotation(new float[-0.0191714,0.999803,0.00515404,1.41461]);
Viewpoint14.fieldOfView = 1.3;
Transform10.children[3] = Viewpoint14;

children[1] = Transform10;

Transform Transform15 = createNode("Transform");
Transform15.DEF = "bg";
Background Background16 = createNode("Background");
Background16.skyColor = new MFColor(new float[1,1,1]);
Transform15.children = new MFNode();

Transform15.children[0] = Background16;

children[2] = Transform15;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "inline";
Transform17.translation = new SFVec3f(new float[0,-1.84038,0]);
Transform17.scale = new SFVec3f(new float[1,0.001,1]);
Transform17.center = new SFVec3f(new float[-1.80969,0.293455,1.89528]);
Group Group18 = createNode("Group");
Group Group19 = createNode("Group");
Group19.DEF = "UnnamedAnimation3";
TimeSensor TimeSensor20 = createNode("TimeSensor");
TimeSensor20.DEF = "Time";
TimeSensor20.cycleInterval = 10;
TimeSensor20.stopTime = 1;
Group19.children = new MFNode();

Group19.children[0] = TimeSensor20;

Group18.children = new MFNode();

Group18.children[0] = Group19;

PositionInterpolator PositionInterpolator21 = createNode("PositionInterpolator");
PositionInterpolator21.DEF = "inlineTranslationInterp";
PositionInterpolator21.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,-1.84038,0,0,-1.82198,0,0,-1.80357,0,0,-1.78517,0,0,-1.76676,0,0,-1.74836,0,0,-1.72996,0,0,-1.71155,0,0,-1.69315,0,0,-1.67475,0,0,-1.65634,0,0,-1.63794,0,0,-1.61953,0,0,-1.60113,0,0,-1.58273,0,0,-1.56432,0,0,-1.54592,0,0,-1.52752,0,0,-1.50911,0,0,-1.49071,0,0,-1.4723,0,0,-1.4539,0,0,-1.4355,0,0,-1.41709,0,0,-1.39869,0,0,-1.38028,0,0,-1.36188,0,0,-1.34348,0,0,-1.32507,0,0,-1.30667,0,0,-1.28827,0,0,-1.26986,0,0,-1.25146,0,0,-1.23305,0,0,-1.21465,0,0,-1.19625,0,0,-1.17784,0,0,-1.15944,0,0,-1.14104,0,0,-1.12263,0,0,-1.10423,0,0,-1.08582,0,0,-1.06742,0,0,-1.04902,0,0,-1.03061,0,0,-1.01221,0,0,-0.993806,0,0,-0.975402,0,0,-0.956998,0,0,-0.938594,0,0,-0.92019,0,0,-0.901787,0,0,-0.883383,0,0,-0.864979,0,0,-0.846575,0,0,-0.828171,0,0,-0.809768,0,0,-0.791364,0,0,-0.77296,0,0,-0.754556,0,0,-0.736152,0,0,-0.717749,0,0,-0.699345,0,0,-0.680941,0,0,-0.662537,0,0,-0.644134,0,0,-0.62573,0,0,-0.607326,0,0,-0.588922,0,0,-0.570518,0,0,-0.552115,0,0,-0.533711,0,0,-0.515307,0,0,-0.496903,0,0,-0.478499,0,0,-0.460096,0,0,-0.441692,0,0,-0.423288,0,0,-0.404885,0,0,-0.386481,0,0,-0.368077,0,0,-0.349673,0,0,-0.331269,0,0,-0.312865,0,0,-0.294462,0,0,-0.276058,0,0,-0.257654,0,0,-0.23925,0,0,-0.220847,0,0,-0.202443,0,0,-0.184039,0,0,-0.165635,0,0,-0.147231,0,0,-0.128828,0,0,-0.110424,0,0,-0.0920199,0,0,-0.0736165,0,0,-0.0552128,0,0,-0.0368087,0,0,-0.018405,0,0,0,0]);
Group18.children[1] = PositionInterpolator21;

PositionInterpolator PositionInterpolator22 = createNode("PositionInterpolator");
PositionInterpolator22.DEF = "inlineScaleFactorInterp";
PositionInterpolator22.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]);
PositionInterpolator22.keyValue = new MFVec3f(new float[1,0.001,1,1,0.01099,1,1,0.02098,1,1,0.03097,1,1,0.04096,1,1,0.05095,1,1,0.06094,1,1,0.07093,1,1,0.08092,1,1,0.09091,1,1,0.1009,1,1,0.11089,1,1,0.12088,1,1,0.13087,1,1,0.14086,1,1,0.15085,1,1,0.16084,1,1,0.17083,1,1,0.18082,1,1,0.19081,1,1,0.2008,1,1,0.21079,1,1,0.22078,1,1,0.23077,1,1,0.24076,1,1,0.25075,1,1,0.26074,1,1,0.27073,1,1,0.28072,1,1,0.29071,1,1,0.3007,1,1,0.31069,1,1,0.32068,1,1,0.33067,1,1,0.34066,1,1,0.35065,1,1,0.36064,1,1,0.37063,1,1,0.38062,1,1,0.39061,1,1,0.4006,1,1,0.41059,1,1,0.42058,1,1,0.43057,1,1,0.44056,1,1,0.45055,1,1,0.46054,1,1,0.47053,1,1,0.48052,1,1,0.49051,1,1,0.5005,1,1,0.51049,1,1,0.52048,1,1,0.53047,1,1,0.54046,1,1,0.55045,1,1,0.56044,1,1,0.57043,1,1,0.58042,1,1,0.59041,1,1,0.6004,1,1,0.61039,1,1,0.62038,1,1,0.63037,1,1,0.64036,1,1,0.65035,1,1,0.66034,1,1,0.67033,1,1,0.68032,1,1,0.69031,1,1,0.7003,1,1,0.71029,1,1,0.72028,1,1,0.73027,1,1,0.74026,1,1,0.75025,1,1,0.76024,1,1,0.77023,1,1,0.78022,1,1,0.79021,1,1,0.8002,1,1,0.810189,1,1,0.820179,1,1,0.83017,1,1,0.84016,1,1,0.850149,1,1,0.860139,1,1,0.870129,1,1,0.880119,1,1,0.890109,1,1,0.900099,1,1,0.910089,1,1,0.92008,1,1,0.930069,1,1,0.940059,1,1,0.95005,1,1,0.960039,1,1,0.970029,1,1,0.980019,1,1,0.990009,1,1,1,1]);
Group18.children[2] = PositionInterpolator22;

Transform17.children = new MFNode();

Transform17.children[0] = Group18;

Inline Inline23 = createNode("Inline");
Inline23.url = new MFString(new java.lang.String["flat-notex-anim.x3d"]);
Inline23.bboxSize = new SFVec3f(new float[14.5935,3.71493,8.13908]);
Inline23.bboxCenter = new SFVec3f(new float[-1.73584,0.298679,1.59514]);
Transform17.children[1] = Inline23;

children[3] = Transform17;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "button";
Transform24.translation = new SFVec3f(new float[-1.47622,10.7094,2.40666]);
Transform24.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform24.scale = new SFVec3f(new float[0.00198924,0.00132336,0.00132293]);
TouchSensor TouchSensor25 = createNode("TouchSensor");
TouchSensor25.DEF = "touchSensorTrigger";
Transform24.children = new MFNode();

Transform24.children[0] = TouchSensor25;

Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.ambientIntensity = 0.25;
Material28.diffuseColor = new SFColor(new float[0.355377,0.817956,0.015797]);
Material28.specularColor = new SFColor(new float[0.0415311,0.0955906,0.00184612]);
Material28.shininess = 0.078125;
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

IndexedFaceSet IndexedFaceSet29 = createNode("IndexedFaceSet");
IndexedFaceSet29.creaseAngle = 0.5;
IndexedFaceSet29.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate30 = createNode("Coordinate");
Coordinate30.point = new MFVec3f(new float[-10,10,10,-10,-10,10,10,-10,10,10,10,10]);
IndexedFaceSet29.coord = Coordinate30;

Shape26.geometry = IndexedFaceSet29;

Transform24.children[1] = Shape26;

children[4] = Transform24;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "VP2";
ROUTE31.fromField = "isBound";
ROUTE31.toNode = "_top";
ROUTE31.toField = "set_bind";
children[5] = ROUTE31;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "VP1";
ROUTE32.fromField = "isBound";
ROUTE32.toNode = "_inside";
ROUTE32.toField = "set_bind";
children[6] = ROUTE32;

ROUTE ROUTE33 = createNode("ROUTE");
ROUTE33.fromNode = "touchSensorTrigger";
ROUTE33.fromField = "touchTime";
ROUTE33.toNode = "Time";
ROUTE33.toField = "set_startTime";
children[7] = ROUTE33;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "Time";
ROUTE34.fromField = "fraction_changed";
ROUTE34.toNode = "inlineTranslationInterp";
ROUTE34.toField = "set_fraction";
children[8] = ROUTE34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "Time";
ROUTE35.fromField = "fraction_changed";
ROUTE35.toNode = "inlineScaleFactorInterp";
ROUTE35.toField = "set_fraction";
children[9] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "inlineTranslationInterp";
ROUTE36.fromField = "value_changed";
ROUTE36.toNode = "inline";
ROUTE36.toField = "set_translation";
children[10] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "inlineScaleFactorInterp";
ROUTE37.fromField = "value_changed";
ROUTE37.toNode = "inline";
ROUTE37.toField = "set_scale";
children[11] = ROUTE37;

}
