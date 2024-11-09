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
meta3.content = "Mon, 09 Nov 2015 13:19:33 GMT";
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
meta6.content = "Mon, 09 Nov 2015 13:19:33 GMT";
head1.meta[4] = meta6;

head = head1;

TimeSensor TimeSensor8 = createNode("TimeSensor");
TimeSensor8.DEF = "TimeSensor_skeleton-TIMER";
TimeSensor8.cycleInterval = 5.333;
TimeSensor8.loop = True;
TimeSensor8.startTime = 1;
children = new MFNode();

children[0] = TimeSensor8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "skel_pelvis-ROOT";
Transform9.translation = new SFVec3f(new float[-0.6285,3.913,0.3438]);
Transform9.rotation = new SFRotation(new float[0.0787721,-0.992026,-0.0983826,2.826]);
Transform9.scaleOrientation = new SFRotation(new float[0.0300913,-0.89714,-0.44072,0.3048]);
TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "skel_pelvis-TIMER";
TimeSensor10.cycleInterval = 5.333;
Transform9.children = new MFNode();

Transform9.children[0] = TimeSensor10;

PositionInterpolator PositionInterpolator11 = createNode("PositionInterpolator");
PositionInterpolator11.DEF = "skel_pelvis-POS-INTERP";
PositionInterpolator11.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator11.keyValue = new MFVec3f(new float[-0.6285,3.913,0.3438,-0.7394,3.897,0.3311,-0.8192,3.893,0.3226,-0.8678,3.901,0.3184,-0.885,3.925,0.3326,-0.8717,3.95,0.3226,-0.8278,3.958,0.234,-0.7552,3.964,0.1367,-0.6437,3.972,0.05432,-0.5153,3.979,-0.02007,-0.4005,3.983,-0.08487,-0.2866,3.981,-0.1388,-0.1663,3.975,-0.1821,-0.04635,3.964,-0.2156,0.06613,3.951,-0.24,0.1642,3.937,-0.256,0.2409,3.924,-0.2645,0.2891,3.911,-0.266,0.302,3.902,-0.2614,0.2726,3.896,-0.2514,0.1875,3.894,-0.2488,0.0497,3.894,-0.2597,-0.1156,3.895,-0.2629,-0.2827,3.898,-0.237,-0.4263,3.901,-0.1607,-0.5236,3.905,-0.01505,-0.5929,3.909,0.1848,-0.6285,3.913,0.3438]);
Transform9.children[1] = PositionInterpolator11;

OrientationInterpolator OrientationInterpolator12 = createNode("OrientationInterpolator");
OrientationInterpolator12.DEF = "skel_pelvis-ROT-INTERP";
OrientationInterpolator12.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator12.keyValue = new MFRotation(new float[0.0787721,-0.992026,-0.0983826,2.826,0.0843031,-0.990537,-0.108304,2.829,0.0898217,-0.988919,-0.118202,2.832,0.0950143,-0.986645,-0.132306,2.835,0.100402,-0.981018,-0.165903,2.842,0.1032,-0.977001,-0.1866,2.846,0.101799,-0.985089,-0.138698,2.835,0.0894023,-0.991526,-0.0942525,2.83,0.0712198,-0.995398,-0.0641198,2.83,0.0510583,-0.998166,-0.0325289,2.831,0.0295389,-0.999564,-0.000191293,2.833,0.00725967,-0.999455,0.0321986,2.836,-0.0151506,-0.997839,0.0639325,2.84,-0.0370483,-0.994854,0.0943056,2.843,-0.0578475,-0.990757,0.122695,2.848,-0.0769423,-0.985929,0.148404,2.851,-0.0937235,-0.980837,0.170806,2.855,-0.107699,-0.975995,0.189299,2.858,-0.118204,-0.971933,0.203407,2.859,-0.124694,-0.969153,0.21259,2.86,-0.120702,-0.970716,0.207704,2.856,-0.100297,-0.978468,0.180394,2.846,-0.068931,-0.988114,0.137402,2.834,-0.0323615,-0.995747,0.0862541,2.821,0.00336895,-0.999387,0.0348595,2.812,0.0340912,-0.999336,-0.0128205,2.809,0.0685796,-0.994594,-0.0779695,2.821,0.0787721,-0.992026,-0.0983826,2.826]);
Transform9.children[2] = OrientationInterpolator12;

Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,1,1]);
Material15.shininess = 0;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.DEF = "skel_pelvis-FACES";
IndexedFaceSet16.solid = False;
IndexedFaceSet16.colorIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
Color Color17 = createNode("Color");
Color17.color = new MFColor(new float[0.8784,0.8784,0.8353,0.4392,0.4353,0.302,0.8784,0.8784,0.8353,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.8784,0.8784,0.8353,0.4392,0.4353,0.302,0.8784,0.8784,0.8353,0.4392,0.4353,0.302,0.4392,0.4353,0.302]);
IndexedFaceSet16.color = Color17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.DEF = "skel_pelvis-COORD";
Coordinate18.point = new MFVec3f(new float[0.6154,0.003261,0.002181,0.1871,-0.1678,-0.5796,-0.4998,-0.003285,-0.3604,-0.4971,-0.001968,0.3565,0.1921,0.002078,0.5806,0.6056,0.2434,0.03376,0.155,0.07235,-0.4833,-0.5085,0.2368,-0.332,-0.4691,0.2381,0.2782,0.2195,0.2422,0.5043]);
IndexedFaceSet16.coord = Coordinate18;

Shape13.geometry = IndexedFaceSet16;

Transform9.child[3] = Shape13;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "skel_lower_rib-ROOT";
Transform19.translation = new SFVec3f(new float[0.009593,0.8633,0.003305]);
Transform19.rotation = new SFRotation(new float[-0.324089,-0.197093,0.925268,3.433]);
Transform19.scaleOrientation = new SFRotation(new float[-0.195704,0.698614,-0.688214,0.5815]);
PositionInterpolator PositionInterpolator20 = createNode("PositionInterpolator");
PositionInterpolator20.DEF = "skel_lower_rib-POS-INTERP";
PositionInterpolator20.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0.009593,0.8633,0.003305,0.02854,0.8702,0.009827,0.04586,0.8766,0.01579,0.06157,0.8823,0.0212,0.07567,0.8875,0.02606,0.08814,0.8921,0.03035,0.09901,0.896,0.03409,0.1083,0.8994,0.03728,0.1159,0.9022,0.0399,0.1219,0.9044,0.04197,0.1262,0.9061,0.04346,0.1286,0.9073,0.0443,0.1294,0.9079,0.04456,0.1287,0.9078,0.04432,0.1268,0.907,0.04366,0.1239,0.9053,0.04267,0.12,0.9019,0.04132,0.1148,0.8962,0.03953,0.1083,0.8891,0.0373,0.1007,0.8812,0.03468,0.092,0.8733,0.03168,0.08225,0.8662,0.02832,0.07154,0.8607,0.02464,0.05994,0.8574,0.02064,0.04749,0.857,0.01636,0.0341,0.8582,0.01174,0.01972,0.8608,0.006792,0.009593,0.8633,0.003305]);
Transform19.children = new MFNode();

Transform19.children[0] = PositionInterpolator20;

OrientationInterpolator OrientationInterpolator21 = createNode("OrientationInterpolator");
OrientationInterpolator21.DEF = "skel_lower_rib-ROT-INTERP";
OrientationInterpolator21.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator21.keyValue = new MFRotation(new float[-0.324089,-0.197093,0.925268,3.433,-0.319898,-0.185099,0.929195,3.393,-0.315303,-0.174502,0.932809,3.356,-0.31241,-0.157905,0.936731,3.311,-0.312995,-0.127298,0.941185,3.25,-0.317192,-0.0776481,0.945177,3.171,-0.322013,-0.023711,0.946438,3.085,-0.325197,0.0171598,0.945491,3.001,-0.326007,0.0216504,0.94512,2.921,-0.325601,0.00291401,0.945503,2.852,-0.325602,-0.00132801,0.945506,2.811,-0.325602,-0.00215601,0.945505,2.773,-0.325602,-0.00198301,0.945505,2.74,-0.325602,-0.00125901,0.945506,2.712,-0.325602,-0.000444903,0.945507,2.694,-0.325602,0,0.945507,2.687,-0.325392,0.00195995,0.945577,2.699,-0.324999,0.00597497,0.945696,2.734,-0.324906,0.00731214,0.945718,2.783,-0.325482,0.00130993,0.945547,2.839,-0.327605,-0.0237904,0.944515,2.906,-0.330392,-0.0624086,0.941778,2.991,-0.33161,-0.0833326,0.939729,3.076,-0.330084,-0.0613969,0.941953,3.164,-0.328719,-0.0761145,0.941355,3.248,-0.327103,-0.131401,0.935808,3.342,-0.324791,-0.183695,0.927775,3.415,-0.324089,-0.197093,0.925268,3.433]);
Transform19.children[1] = OrientationInterpolator21;

Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,1,1]);
Material24.shininess = 0;
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.DEF = "skel_lower_rib-FACES";
IndexedFaceSet25.solid = False;
IndexedFaceSet25.colorIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
IndexedFaceSet25.coordIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
Color Color26 = createNode("Color");
Color26.color = new MFColor(new float[0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.4392,0.4353,0.302]);
IndexedFaceSet25.color = Color26;

Coordinate Coordinate27 = createNode("Coordinate");
Coordinate27.DEF = "skel_lower_rib-COORD";
Coordinate27.point = new MFVec3f(new float[0.62,0.003175,0.003779,0.187,-0.1678,-0.5796,-0.5045,-0.003199,-0.362,-0.4999,-0.001916,0.3555,0.1951,0.002023,0.5816,0.5411,0.2446,0.01155,0.1549,0.07235,-0.4834,-0.4427,0.2356,-0.3094,-0.4295,0.2374,0.2918,0.1785,0.2429,0.4902]);
IndexedFaceSet25.coord = Coordinate27;

Shape22.geometry = IndexedFaceSet25;

Transform19.child[2] = Shape22;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "skel_mid_rib-ROOT";
Transform28.translation = new SFVec3f(new float[-0.005576,-0.3378,-0.001921]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,1,1]);
Material31.shininess = 0;
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

IndexedFaceSet IndexedFaceSet32 = createNode("IndexedFaceSet");
IndexedFaceSet32.DEF = "skel_mid_rib-FACES";
IndexedFaceSet32.solid = False;
IndexedFaceSet32.colorIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
IndexedFaceSet32.coordIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
Color Color33 = createNode("Color");
Color33.color = new MFColor(new float[0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.7843,0.7843,0.7333,0.4392,0.4353,0.302,0.4392,0.4353,0.302]);
IndexedFaceSet32.color = Color33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.DEF = "skel_mid_rib-COORD";
Coordinate34.point = new MFVec3f(new float[0.6757,0.002148,0.02295,0.1863,-0.1677,-0.5799,-0.5606,-0.002164,-0.3813,-0.5335,-0.001296,0.3439,0.2305,0.001369,0.5938,0.5895,0.2437,0.02823,0.1539,0.07237,-0.4837,-0.492,0.2365,-0.3263,-0.4591,0.238,0.2816,0.2093,0.2424,0.5008]);
IndexedFaceSet32.coord = Coordinate34;

Shape29.geometry = IndexedFaceSet32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "skel_top_rib-ROOT";
Transform35.translation = new SFVec3f(new float[0,-0.3104,0]);
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.diffuseColor = new SFColor(new float[1,1,1]);
Material38.shininess = 0;
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

IndexedFaceSet IndexedFaceSet39 = createNode("IndexedFaceSet");
IndexedFaceSet39.DEF = "skel_top_rib-FACES";
IndexedFaceSet39.solid = False;
IndexedFaceSet39.colorIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,6,5,-1,0,1,6,-1,1,7,6,-1,1,2,7,-1,2,8,7,-1,2,3,8,-1,3,9,8,-1,3,4,9,-1,4,5,9,-1,4,0,5,-1]);
Color Color40 = createNode("Color");
Color40.color = new MFColor(new float[0.7686,0.7647,0.7098,0.4392,0.4353,0.302,0.7686,0.7647,0.7098,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.7686,0.7647,0.7098,0.4392,0.4353,0.302,0.7686,0.7647,0.7098,0.7686,0.7647,0.7098,0.7686,0.7647,0.7098]);
IndexedFaceSet39.color = Color40;

Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.DEF = "skel_top_rib-COORD";
Coordinate41.point = new MFVec3f(new float[0.771,0,0.1241,0.1202,-0.2292,-0.3927,-0.6967,0,-0.3668,-0.5508,-0.1072,0.166,0.3563,-0.1072,0.4694,0.7217,0.2414,0.03446,0.1889,0.01092,-0.5923,-0.6033,0.2388,-0.3999,-0.5631,0.1321,0.3446,0.2558,0.1338,0.6131]);
IndexedFaceSet39.coord = Coordinate41;

Shape36.geometry = IndexedFaceSet39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "skel_up_r_arm-ROOT";
Transform42.translation = new SFVec3f(new float[1.069,-0.9845,0.2115]);
Transform42.rotation = new SFRotation(new float[-0.847092,0.256598,0.465396,1.865]);
Transform42.scale = new SFVec3f(new float[0.5926,0.5926,0.5926]);
Transform42.scaleOrientation = new SFRotation(new float[-0.0125698,0.941387,0.337095,0.6972]);
PositionInterpolator PositionInterpolator43 = createNode("PositionInterpolator");
PositionInterpolator43.DEF = "skel_up_r_arm-POS-INTERP";
PositionInterpolator43.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator43.keyValue = new MFVec3f(new float[1.069,-0.9845,0.2115,1.039,-0.9679,0.322,1.006,-0.9334,0.4446,0.9717,-0.884,0.5566,0.9399,-0.8338,0.6394,0.9136,-0.8037,0.6804,0.8931,-0.8057,0.6756,0.8719,-0.8241,0.6452,0.85,-0.8502,0.5938,0.8281,-0.8769,0.525,0.8072,-0.898,0.4437,0.7887,-0.9096,0.3563,0.7738,-0.911,0.2704,0.7636,-0.9043,0.1931,0.759,-0.8942,0.131,0.7632,-0.8859,0.08588,0.7802,-0.8812,0.05058,0.8065,-0.88,0.02441,0.8383,-0.8821,0.00704,0.8717,-0.8871,-0.001845,0.9028,-0.8951,-0.002608,0.9305,-0.9072,0.007653,0.9629,-0.9253,0.04095,0.997,-0.9434,0.08965,1.028,-0.9575,0.1425,1.052,-0.9672,0.1874,1.066,-0.9764,0.2121,1.069,-0.9845,0.2115]);
Transform42.children = new MFNode();

Transform42.children[0] = PositionInterpolator43;

OrientationInterpolator OrientationInterpolator44 = createNode("OrientationInterpolator");
OrientationInterpolator44.DEF = "skel_up_r_arm-ROT-INTERP";
OrientationInterpolator44.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator44.keyValue = new MFRotation(new float[-0.847092,0.256598,0.465396,1.865,-0.866047,0.286515,0.409722,1.956,-0.882602,0.315201,0.348801,2.067,-0.893802,0.340201,0.292201,2.177,-0.899107,0.360903,0.247702,2.262,-0.899085,0.377194,0.222196,2.297,-0.894442,0.390218,0.21841,2.269,-0.886875,0.403689,0.224694,2.205,-0.876723,0.417411,0.239006,2.118,-0.864017,0.431008,0.260205,2.013,-0.848816,0.443809,0.287306,1.9,-0.831384,0.455091,0.318894,1.787,-0.812283,0.46409,0.353293,1.68,-0.792983,0.46989,0.387792,1.588,-0.775763,0.471678,0.41918,1.518,-0.76312,0.466912,0.446812,1.472,-0.754817,0.45161,0.47571,1.445,-0.750315,0.428609,0.50331,1.434,-0.749222,0.401412,0.526816,1.439,-0.751103,0.373602,0.544303,1.455,-0.755777,0.348989,0.554083,1.479,-0.764469,0.329187,0.554277,1.513,-0.781363,0.309585,0.541875,1.574,-0.801693,0.291398,0.521896,1.653,-0.820878,0.275993,0.499987,1.736,-0.836008,0.264602,0.480704,1.808,-0.845163,0.257889,0.46818,1.855,-0.847092,0.256598,0.465396,1.865]);
Transform42.children[1] = OrientationInterpolator44;

Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[1,1,1]);
Material47.shininess = 0;
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

IndexedFaceSet IndexedFaceSet48 = createNode("IndexedFaceSet");
IndexedFaceSet48.DEF = "skel_up_r_arm-FACES";
IndexedFaceSet48.solid = False;
IndexedFaceSet48.colorIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
IndexedFaceSet48.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
Color Color49 = createNode("Color");
Color49.color = new MFColor(new float[0.4392,0.4353,0.302,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471]);
IndexedFaceSet48.color = Color49;

Coordinate Coordinate50 = createNode("Coordinate");
Coordinate50.DEF = "skel_up_r_arm-COORD";
Coordinate50.point = new MFVec3f(new float[0.04385,0.04379,-1.343,-0.1855,0.1237,0.6651,0.04385,0.04379,1.343,0.1176,-0.1794,0.6651]);
IndexedFaceSet48.coord = Coordinate50;

Shape45.geometry = IndexedFaceSet48;

Transform42.child[2] = Shape45;

Transform Transform51 = createNode("Transform");
Transform51.DEF = "skel_low_r_arm-ROOT";
Transform51.translation = new SFVec3f(new float[-0.04546,0.4615,-2.34]);
Transform51.rotation = new SFRotation(new float[0.738803,0.185101,-0.648003,0.4954]);
Transform51.scaleOrientation = new SFRotation(new float[0,0.796083,0.605187,0.2439]);
PositionInterpolator PositionInterpolator52 = createNode("PositionInterpolator");
PositionInterpolator52.DEF = "skel_low_r_arm-POS-INTERP";
PositionInterpolator52.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator52.keyValue = new MFVec3f(new float[-0.04546,0.4615,-2.34,-0.03919,0.4407,-2.347,-0.02911,0.4209,-2.355,-0.01999,0.4006,-2.362,-0.0167,0.3787,-2.369,-0.0242,0.3536,-2.375,-0.05872,0.3216,-2.382,-0.1431,0.2768,-2.383,-0.29,0.2154,-2.365,-0.3333,0.1709,-2.359,-0.2889,0.1339,-2.376,-0.2314,0.09525,-2.392,-0.1661,0.0623,-2.405,-0.09903,0.04242,-2.414,-0.03672,0.04269,-2.419,0.01412,0.07397,-2.419,0.0503,0.1796,-2.41,0.07191,0.3265,-2.382,0.08441,0.46,-2.34,0.1006,0.553,-2.3,0.1181,0.6288,-2.26,0.1153,0.684,-2.227,0.03956,0.7029,-2.219,-0.08439,0.67,-2.235,-0.09651,0.6133,-2.266,-0.07721,0.5379,-2.306,-0.05245,0.4764,-2.333,-0.04546,0.4615,-2.34]);
Transform51.children = new MFNode();

Transform51.children[0] = PositionInterpolator52;

OrientationInterpolator OrientationInterpolator53 = createNode("OrientationInterpolator");
OrientationInterpolator53.DEF = "skel_low_r_arm-ROT-INTERP";
OrientationInterpolator53.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator53.keyValue = new MFRotation(new float[0.738803,0.185101,-0.648003,0.4954,0.72729,0.173298,-0.664091,0.4802,0.717888,0.154097,-0.678889,0.4651,0.706411,0.135502,-0.694711,0.4503,0.688204,0.126501,-0.714404,0.4361,0.657615,0.137403,-0.740717,0.4231,0.595903,0.199801,-0.777804,0.4143,0.466479,0.347384,-0.813463,0.4234,0.249588,0.538575,-0.804762,0.4845,0.147805,0.57242,-0.806529,0.5067,0.112595,0.520078,-0.846665,0.4739,0.0751305,0.441103,-0.894306,0.4368,0.044638,0.335285,-0.941059,0.4009,0.0355202,0.209301,-0.977206,0.3702,0.0665589,0.0798287,-0.994584,0.3465,0.167906,-0.026821,-0.985438,0.3305,0.438714,-0.0769224,-0.895328,0.3314,0.710985,-0.0769483,-0.698985,0.3771,0.848041,-0.0650232,-0.525926,0.4505,0.89802,-0.0696216,-0.43441,0.5178,0.919989,-0.0750291,-0.384695,0.5823,0.929369,-0.0539482,-0.365188,0.6319,0.920003,0.0586302,-0.387501,0.6484,0.863899,0.2321,-0.446999,0.6367,0.826579,0.255494,-0.501487,0.5988,0.785829,0.234109,-0.572421,0.5457,0.748787,0.196897,-0.632889,0.5049,0.738803,0.185101,-0.648003,0.4954]);
Transform51.children[1] = OrientationInterpolator53;

Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.diffuseColor = new SFColor(new float[1,1,1]);
Material56.shininess = 0;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

IndexedFaceSet IndexedFaceSet57 = createNode("IndexedFaceSet");
IndexedFaceSet57.DEF = "skel_low_r_arm-FACES";
IndexedFaceSet57.solid = False;
IndexedFaceSet57.colorIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
IndexedFaceSet57.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
Color Color58 = createNode("Color");
Color58.color = new MFColor(new float[0.4392,0.4353,0.302,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471]);
IndexedFaceSet57.color = Color58;

Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.DEF = "skel_low_r_arm-COORD";
Coordinate59.point = new MFVec3f(new float[0.04385,0.04379,-1.343,-0.1855,0.1237,0.6651,0.04385,0.04379,1.343,0.1176,-0.1794,0.6651]);
IndexedFaceSet57.coord = Coordinate59;

Shape54.geometry = IndexedFaceSet57;

Transform51.child[2] = Shape54;

Transform Transform60 = createNode("Transform");
Transform60.DEF = "skel_r_hand-ROOT";
Transform60.translation = new SFVec3f(new float[0.03054,0.01944,-2.06]);
Transform60.scale = new SFVec3f(new float[0.6022,0.6022,0.6022]);
PositionInterpolator PositionInterpolator61 = createNode("PositionInterpolator");
PositionInterpolator61.DEF = "skel_r_hand-POS-INTERP";
PositionInterpolator61.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator61.keyValue = new MFVec3f(new float[0.03054,0.01944,-2.06,0.09278,0.05166,-2.058,0.1619,0.09002,-2.049,0.2254,0.1245,-2.032,0.2717,0.1453,-2.016,0.2901,0.1431,-2.01,0.2195,0.06836,-2.038,0.1083,-0.03799,-2.054,0.07214,-0.09039,-2.049,0.06878,-0.1261,-2.042,0.07518,-0.1588,-2.034,0.0882,-0.1864,-2.025,0.1049,-0.2071,-2.017,0.1224,-0.2188,-2.011,0.1379,-0.2195,-2.009,0.1498,-0.203,-2.013,0.1664,-0.126,-2.032,0.1729,-0.01436,-2.047,0.1588,0.07818,-2.05,0.1197,0.1119,-2.052,0.05801,0.1111,-2.056,-0.0009426,0.1065,-2.056,-0.02949,0.1206,-2.052,-0.0274,0.1317,-2.051,-0.01324,0.1048,-2.055,0.008318,0.06294,-2.059,0.02617,0.02802,-2.06,0.03054,0.01944,-2.06]);
Transform60.children = new MFNode();

Transform60.children[0] = PositionInterpolator61;

OrientationInterpolator OrientationInterpolator62 = createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "skel_r_hand-ROT-INTERP";
OrientationInterpolator62.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator62.keyValue = new MFRotation(new float[0,0,1,0,0.458519,-0.887636,0.0431518,0.0942305,0.469912,-0.881622,0.0438711,0.201299,0.469202,-0.882003,0.0438301,0.3008,0.456215,-0.888829,0.0430114,0.3724,0.423287,-0.905072,0.0409087,0.3946,0.247392,-0.968468,0.029439,0.2645,-0.592306,-0.805108,-0.0312103,0.130401,-0.931205,-0.359102,-0.0624803,0.159201,-0.961811,-0.262403,-0.0778709,0.2049,-0.962751,-0.254614,-0.0910048,0.2515,-0.953698,-0.283999,-0.0990198,0.2942,-0.939502,-0.327501,-0.1004,0.3294,-0.922281,-0.374992,-0.093698,0.3535,-0.903231,-0.422314,-0.0763226,0.3624,-0.87757,-0.478084,-0.0361588,0.3473,-0.736781,-0.662983,0.132697,0.2722,-0.244399,-0.861898,0.444299,0.2179,0.300307,-0.753918,0.584314,0.2321,0.562008,-0.588708,0.581008,0.212,0.832524,-0.268608,0.484514,0.148,0.932225,0.329509,0.149604,0.1265,0.860366,0.50958,0.0099686,0.1586,0.889083,0.454391,0.0553189,0.1708,0.88972,0.45301,0.0563813,0.129499,0.88972,0.45301,0.0563813,0.0658504,0.889701,0.453049,0.0563837,0.012974,0,0,1,0]);
Transform60.children[1] = OrientationInterpolator62;

Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Material65.diffuseColor = new SFColor(new float[1,1,1]);
Material65.shininess = 0;
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

IndexedFaceSet IndexedFaceSet66 = createNode("IndexedFaceSet");
IndexedFaceSet66.DEF = "skel_r_hand-FACES";
IndexedFaceSet66.solid = False;
IndexedFaceSet66.colorIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
IndexedFaceSet66.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
Color Color67 = createNode("Color");
Color67.color = new MFColor(new float[0.9176,0.9137,0.8471,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471]);
IndexedFaceSet66.color = Color67;

Coordinate Coordinate68 = createNode("Coordinate");
Coordinate68.DEF = "skel_r_hand-COORD";
Coordinate68.point = new MFVec3f(new float[0.04385,0.04379,-1.343,-0.1855,0.1237,0.6651,0.04385,0.04379,1.343,0.1176,-0.1794,0.6651]);
IndexedFaceSet66.coord = Coordinate68;

Shape63.geometry = IndexedFaceSet66;

Transform60.child[2] = Shape63;

Transform51.children[3] = Transform60;

Transform42.children[3] = Transform51;

Transform35.children[1] = Transform42;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "skel_Skull_head-ROOT";
Transform69.translation = new SFVec3f(new float[0.0301,-0.9229,0.01803]);
Transform69.rotation = new SFRotation(new float[-0.927237,0.0139606,0.374215,3.174]);
Transform69.scale = new SFVec3f(new float[1.097,1.097,1.097]);
Transform69.scaleOrientation = new SFRotation(new float[-0.465793,-0.283096,-0.838387,0.3122]);
PositionInterpolator PositionInterpolator70 = createNode("PositionInterpolator");
PositionInterpolator70.DEF = "skel_Skull_head-POS-INTERP";
PositionInterpolator70.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator70.keyValue = new MFVec3f(new float[0.0301,-0.9229,0.01803,0.02911,-0.8893,0.05909,0.02678,-0.808,0.1579,0.02402,-0.7082,0.2777,0.02175,-0.6192,0.3821,0.0209,-0.5701,0.4343,0.02478,-0.5859,0.4018,0.03746,-0.6556,0.2965,0.05083,-0.7513,0.1567,0.05595,-0.845,0.02131,0.04392,-0.9088,-0.07079,0.003471,-0.9263,-0.09794,-0.0642,-0.916,-0.08709,-0.1394,-0.8909,-0.05285,-0.2022,-0.8633,-0.008859,-0.2332,-0.8438,0.03384,-0.2325,-0.8231,0.09526,-0.2105,-0.7997,0.172,-0.1757,-0.7776,0.2504,-0.1371,-0.7608,0.3168,-0.1033,-0.7531,0.3573,-0.07938,-0.7596,0.3576,-0.0541,-0.7841,0.3131,-0.02803,-0.8199,0.2402,-0.003897,-0.8593,0.1567,0.01555,-0.8945,0.08046,0.02757,-0.9178,0.02934,0.0301,-0.9229,0.01803]);
Transform69.children = new MFNode();

Transform69.children[0] = PositionInterpolator70;

OrientationInterpolator OrientationInterpolator71 = createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "skel_Skull_head-ROT-INTERP";
OrientationInterpolator71.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator71.keyValue = new MFRotation(new float[-0.927237,0.0139606,0.374215,3.174,-0.921031,0.0117604,0.389313,3.324,-0.914219,0.00958119,0.405108,3.5,-0.906987,0.0073089,0.421094,3.668,-0.899693,0.00484896,0.436497,3.795,-0.893021,0.00220405,0.45001,3.846,-0.8874,-0.0008347,0.461,3.77,-0.88197,-0.00461184,0.471284,3.538,-0.87821,-0.0081031,0.478206,3.237,-0.877204,-0.01059,0.480002,2.963,-0.879845,-0.0114106,0.475124,2.813,-0.885883,-0.0104398,0.463791,2.817,-0.893932,-0.00875632,0.448116,2.871,-0.903054,-0.00655566,0.429478,2.959,-0.912521,-0.00398709,0.40901,3.073,-0.921823,-0.00117403,0.38761,3.203,-0.930577,0.00177296,0.366091,3.339,-0.93845,0.00474675,0.345382,3.471,-0.945232,0.00762826,0.326311,3.589,-0.950653,0.0102695,0.310085,3.684,-0.954485,0.0124998,0.297995,3.746,-0.95598,0.0140797,0.293094,3.757,-0.953317,0.0148803,0.301605,3.688,-0.947632,0.0150505,0.319011,3.565,-0.940447,0.0148207,0.339617,3.419,-0.933383,0.0144097,0.358593,3.285,-0.928406,0.0140501,0.371302,3.194,-0.927237,0.0139606,0.374215,3.174]);
Transform69.children[1] = OrientationInterpolator71;

Shape Shape72 = createNode("Shape");
Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.diffuseColor = new SFColor(new float[1,1,1]);
Material74.shininess = 0;
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

IndexedFaceSet IndexedFaceSet75 = createNode("IndexedFaceSet");
IndexedFaceSet75.DEF = "skel_Skull_head-FACES";
IndexedFaceSet75.solid = False;
IndexedFaceSet75.colorIndex = new MFInt32(new int[1,2,3,-1,1,3,0,-1,0,3,4,-1,0,17,21,-1,0,18,6,-1,0,6,1,-1,2,7,8,-1,2,8,3,-1,20,15,4,-1,8,20,4,-1,22,9,14,-1,13,23,11,-1,13,11,16,-1,16,11,19,-1,6,7,1,-1,9,12,15,-1,29,10,28,-1,31,11,30,-1,24,13,5,-1,27,28,14,-1,9,15,20,-1,19,7,6,-1,17,0,4,-1,18,0,5,-1,15,17,4,-1,18,16,6,-1,16,19,6,-1,8,4,3,-1,33,19,32,-1,26,9,25,-1,0,21,5,-1,24,21,12,-1,7,2,1,-1,9,22,12,-1,11,23,10,-1,5,21,24,-1,22,24,12,-1,24,23,13,-1,25,9,20,-1,9,26,27,-1,9,27,14,-1,28,10,14,-1,10,29,30,-1,30,11,10,-1,32,11,31,-1,32,19,11,-1]);
IndexedFaceSet75.coordIndex = new MFInt32(new int[1,2,3,-1,1,3,0,-1,0,3,4,-1,0,17,21,-1,0,18,6,-1,0,6,1,-1,2,7,8,-1,2,8,3,-1,20,15,4,-1,8,20,4,-1,22,9,14,-1,13,23,11,-1,13,11,16,-1,16,11,19,-1,6,7,1,-1,9,12,15,-1,29,10,28,-1,31,11,30,-1,24,13,5,-1,27,28,14,-1,9,15,20,-1,19,7,6,-1,17,0,4,-1,18,0,5,-1,15,17,4,-1,18,16,6,-1,16,19,6,-1,8,4,3,-1,33,19,32,-1,26,9,25,-1,0,21,5,-1,24,21,12,-1,7,2,1,-1,9,22,12,-1,11,23,10,-1,5,21,24,-1,22,24,12,-1,24,23,13,-1,25,9,20,-1,9,26,27,-1,9,27,14,-1,28,10,14,-1,10,29,30,-1,30,11,10,-1,32,11,31,-1,32,19,11,-1]);
Color Color76 = createNode("Color");
Color76.color = new MFColor(new float[0.8627,0.8706,0.8235,0.9333,0.9333,0.9059,0.8392,0.8431,0.7961,0.9333,0.9333,0.9059,0.7255,0.7373,0.6549,0.4863,0.4824,0.3608,0.6745,0.6627,0.5412,0.4235,0.3961,0.2118,0.4235,0.3961,0.2118,0.8314,0.8314,0.7373,0.8,0.8,0.7059,0.8314,0.8314,0.7373,0.4863,0.4824,0.3608,0.4863,0.4824,0.3608,0.8314,0.8353,0.7647,0.8314,0.8353,0.7647,0.8,0.8,0.7059,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.4392,0.4353,0.302,0.5922,0.5922,0.4431,0.5922,0.5922,0.4431,0.6196,0.6314,0.4784,0.6196,0.6314,0.4784,0.4863,0.4824,0.3608,0.6039,0.6,0.5059,0.6039,0.6,0.5059,0.4392,0.4353,0.302,0.6059,0.6118,0.4608,0.7255,0.7314,0.6078,0.8314,0.8333,0.751,0.8157,0.8176,0.7353,0.8157,0.8176,0.7353]);
IndexedFaceSet75.color = Color76;

Coordinate Coordinate77 = createNode("Coordinate");
Coordinate77.DEF = "skel_Skull_head-COORD";
Coordinate77.point = new MFVec3f(new float[0.4391,0.5107,0.2373,0.1454,0.564,-0.1147,-0.1519,0.4037,-0.07264,-0.005196,0.5679,0.1977,-0.1002,0.2563,0.4032,0.5943,0.2632,0.2061,0.3415,0.2573,-0.2798,-0.1007,-0.05047,-0.2102,-0.244,-0.05086,0.06287,0.1755,-0.1211,0.4024,0.6004,-0.1169,0.2831,0.4665,-0.1204,-0.0355,0.5388,0.07278,0.3872,0.6377,0.07217,0.2626,0.5264,-0.1106,0.3753,0.3268,0.1111,0.5286,0.5635,0.0974,-0.02483,0.3493,0.2376,0.4722,0.5265,0.1941,-0.03481,0.2305,-0.08196,-0.1795,-0.0277,-0.08561,0.3226,0.4837,0.2512,0.3749,0.5326,-0.04476,0.3814,0.619,-0.04823,0.2729,0.5882,0.07247,0.3249,0.007552,-0.1465,0.3447,0.1092,-0.1642,0.3846,0.3062,-0.2667,0.3801,0.4776,-0.2639,0.3745,0.5187,-0.2646,0.3205,0.5464,-0.2628,0.2089,0.4795,-0.2646,0.04966,0.3913,-0.1563,-0.09631,0.2734,-0.137,-0.1683]);
IndexedFaceSet75.coord = Coordinate77;

Shape72.geometry = IndexedFaceSet75;

Transform69.child[2] = Shape72;

Transform Transform78 = createNode("Transform");
Transform78.DEF = "skel_Jaw01-ROOT";
Transform78.translation = new SFVec3f(new float[0.0002293,0.05167,-0.0007517]);
Transform78.scaleOrientation = new SFRotation(new float[-0.0295898,0.995193,-0.0933593,0.2931]);
PositionInterpolator PositionInterpolator79 = createNode("PositionInterpolator");
PositionInterpolator79.DEF = "skel_Jaw01-POS-INTERP";
PositionInterpolator79.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator79.keyValue = new MFVec3f(new float[0.0002293,0.05167,-0.0007517,0.01249,0.06016,-0.03023,0.02186,0.06691,-0.05012,0.02794,0.0715,-0.06071,0.03029,0.07352,-0.0623,0.02843,0.07251,-0.05521,0.0187,0.06473,-0.04216,0.005697,0.05462,-0.01974,0.00207,0.05637,0.02357,0.008992,0.06593,0.07957,0.0009953,0.061,0.09601,-0.001819,0.0584,0.09029,-0.001468,0.05691,0.0714,-0.00002905,0.05549,0.04827,0.0002818,0.05333,0.02975,-0.00232,0.05027,0.02396,-0.002404,0.05054,0.02508,0.001831,0.05257,0.0205,0.01305,0.05782,0.007259,0.02827,0.06503,-0.01072,0.04375,0.07238,-0.02931,0.05574,0.07807,-0.04439,0.06051,0.08027,-0.05185,0.05671,0.07835,-0.05024,0.04793,0.07411,-0.0435,0.03423,0.0676,-0.03173,0.01552,0.05881,-0.01487,0.0002294,0.05167,-0.0007516]);
Transform78.children = new MFNode();

Transform78.children[0] = PositionInterpolator79;

OrientationInterpolator OrientationInterpolator80 = createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "skel_Jaw01-ROT-INTERP";
OrientationInterpolator80.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator80.keyValue = new MFRotation(new float[0,0,1,0,0.415544,0.200521,-0.887195,0.012372,0.415507,0.200504,-0.887216,0.0264216,0.415544,0.200521,-0.887195,0.0394881,0.415507,0.200504,-0.887216,0.0488879,0.41588,0.19999,-0.887157,0.0515885,0.457571,0.122919,-0.880636,0.0232435,-0.185922,-0.527929,0.828688,0.00669498,0.337406,0.312105,-0.888115,0.056292,0.328803,0.345303,-0.879008,0.1924,0.293204,0.445306,-0.846011,0.1857,0.236394,0.577685,-0.78128,0.166101,0.142797,0.745186,-0.651388,0.143399,0.00704486,0.904982,-0.425392,0.1285,-0.130807,0.979056,-0.156009,0.1276,-0.210499,0.977395,0.0197399,0.1361,-0.20071,0.979647,-0.00276313,0.136799,-0.194705,0.980726,-0.0163204,0.1265,-0.194705,0.980726,-0.0163204,0.1124,-0.194705,0.980726,-0.0163204,0.0964001,-0.194705,0.980726,-0.0163204,0.0792513,-0.194705,0.980726,-0.0163204,0.0618506,-0.194686,0.98073,-0.0163188,0.0450712,-0.194724,0.980722,-0.016322,0.0297494,-0.194782,0.980711,-0.0163168,0.0167588,-0.194763,0.980715,-0.0163169,0.00693978,-0.194699,0.980727,-0.0163336,0.00119604,0,0,1,0]);
Transform78.children[1] = OrientationInterpolator80;

Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.diffuseColor = new SFColor(new float[1,1,1]);
Material83.shininess = 0;
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

IndexedFaceSet IndexedFaceSet84 = createNode("IndexedFaceSet");
IndexedFaceSet84.DEF = "skel_Jaw01-FACES";
IndexedFaceSet84.solid = False;
IndexedFaceSet84.colorIndex = new MFInt32(new int[8,1,0,-1,5,2,6,-1,3,10,0,-1,2,5,4,-1,6,2,1,-1,6,1,7,-1,1,8,7,-1,9,8,0,-1,0,10,9,-1,3,11,10,-1,3,12,11,-1]);
IndexedFaceSet84.coordIndex = new MFInt32(new int[8,1,0,-1,5,2,6,-1,3,10,0,-1,2,5,4,-1,6,2,1,-1,6,1,7,-1,1,8,7,-1,9,8,0,-1,0,10,9,-1,3,11,10,-1,3,12,11,-1]);
Color Color85 = createNode("Color");
Color85.color = new MFColor(new float[0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098,0.7961,0.8,0.7098]);
IndexedFaceSet84.color = Color85;

Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.DEF = "skel_Jaw01-COORD";
Coordinate86.point = new MFVec3f(new float[0.4868,-0.5019,0.1462,0.4313,-0.5044,0.3692,0.04787,-0.3735,0.3581,0.3035,-0.3734,-0.1318,0.007866,-0.2026,0.3445,0.1188,-0.2385,0.3666,0.2708,-0.3664,0.3618,0.4843,-0.3321,0.3619,0.5213,-0.3346,0.3158,0.5491,-0.3333,0.2043,0.4465,-0.3637,0.02664,0.3764,-0.2485,-0.06706,0.2732,-0.1944,-0.1677]);
IndexedFaceSet84.coord = Coordinate86;

Shape81.geometry = IndexedFaceSet84;

Transform78.child[2] = Shape81;

Transform69.children[3] = Transform78;

Transform35.children[2] = Transform69;

Transform Transform87 = createNode("Transform");
Transform87.DEF = "skel_up_r_arm01-ROOT";
Transform87.translation = new SFVec3f(new float[-0.9622,-0.8456,-0.6705]);
Transform87.rotation = new SFRotation(new float[0.126698,0.620892,0.77359,3.104]);
Transform87.scale = new SFVec3f(new float[0.5926,0.5926,0.5926]);
Transform87.scaleOrientation = new SFRotation(new float[0.229792,0.684575,0.691775,0.6634]);
PositionInterpolator PositionInterpolator88 = createNode("PositionInterpolator");
PositionInterpolator88.DEF = "skel_up_r_arm01-POS-INTERP";
PositionInterpolator88.key = new MFFloat(new float[0,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator88.keyValue = new MFVec3f(new float[-0.9622,-0.8456,-0.6705,-0.9622,-0.8456,-0.6705,-0.9625,-0.8453,-0.6713,-0.9643,-0.8435,-0.6772,-0.9666,-0.8412,-0.6847,-0.9679,-0.8398,-0.6889,-0.9667,-0.8411,-0.6849,-0.9614,-0.8464,-0.6678,-0.952,-0.8545,-0.6379,-0.9395,-0.8628,-0.5995,-0.9245,-0.8696,-0.5553,-0.9079,-0.8735,-0.5081,-0.8906,-0.8741,-0.461,-0.8737,-0.8715,-0.4167,-0.8585,-0.8667,-0.3783,-0.8463,-0.8614,-0.3482,-0.8384,-0.8572,-0.3293,-0.8387,-0.8573,-0.3299,-0.8465,-0.8615,-0.3487,-0.8592,-0.867,-0.38,-0.8741,-0.8716,-0.4178,-0.8898,-0.874,-0.459,-0.9141,-0.8724,-0.5255,-0.9401,-0.8625,-0.6013,-0.9582,-0.8493,-0.6574,-0.9622,-0.8456,-0.6705]);
Transform87.children = new MFNode();

Transform87.children[0] = PositionInterpolator88;

OrientationInterpolator OrientationInterpolator89 = createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "skel_up_r_arm01-ROT-INTERP";
OrientationInterpolator89.key = new MFFloat(new float[0,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator89.keyValue = new MFRotation(new float[0.126698,0.620892,0.77359,3.104,0.126698,0.620892,0.77359,3.104,0.126698,0.620392,0.77399,3.104,0.127095,0.617077,0.776571,3.102,0.127597,0.612785,0.779881,3.099,0.127802,0.610407,0.781709,3.097,0.127595,0.612675,0.779968,3.099,0.126501,0.622404,0.772406,3.105,0.124603,0.638916,0.759119,3.117,0.122103,0.659616,0.741618,3.132,0.119102,0.682713,0.720914,3.149,-0.115798,-0.706488,-0.698188,3.116,-0.112398,-0.729587,-0.674588,3.098,-0.109,-0.750602,-0.651702,3.081,-0.106001,-0.768504,-0.631003,3.066,-0.103597,-0.782178,-0.614382,3.055,-0.102003,-0.790722,-0.603617,3.047,-0.102002,-0.790419,-0.604014,3.047,-0.103601,-0.782004,-0.614603,3.055,-0.106104,-0.767731,-0.631926,3.067,-0.109097,-0.750082,-0.652284,3.082,-0.112202,-0.730516,-0.673615,3.097,0.117096,0.697778,0.706678,3.16,0.122201,0.658708,0.742409,3.131,0.125801,0.628207,0.767809,3.109,0.126698,0.620892,0.77359,3.104]);
Transform87.children[1] = OrientationInterpolator89;

Shape Shape90 = createNode("Shape");
Appearance Appearance91 = createNode("Appearance");
Material Material92 = createNode("Material");
Material92.diffuseColor = new SFColor(new float[1,1,1]);
Material92.shininess = 0;
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

IndexedFaceSet IndexedFaceSet93 = createNode("IndexedFaceSet");
IndexedFaceSet93.USE = "skel_up_r_arm-FACES";
Shape90.geometry = IndexedFaceSet93;

Transform87.child[2] = Shape90;

Transform Transform94 = createNode("Transform");
Transform94.DEF = "skel_low_r_arm01-ROOT";
Transform94.translation = new SFVec3f(new float[-0.3472,-0.1251,-2.354]);
Transform94.rotation = new SFRotation(new float[-0.36911,0.708219,-0.601817,0.3785]);
Transform94.scaleOrientation = new SFRotation(new float[0,-0.410402,-0.911905,0.2455]);
PositionInterpolator PositionInterpolator95 = createNode("PositionInterpolator");
PositionInterpolator95.DEF = "skel_low_r_arm01-POS-INTERP";
PositionInterpolator95.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator95.keyValue = new MFVec3f(new float[-0.3472,-0.1251,-2.354,-0.3484,-0.1203,-2.354,-0.35,-0.1133,-2.354,-0.3495,-0.1156,-2.354,-0.3446,-0.1392,-2.353,-0.3371,-0.1897,-2.347,-0.3238,-0.2498,-2.338,-0.304,-0.2999,-2.331,-0.2812,-0.3217,-2.33,-0.2586,-0.2768,-2.349,-0.2225,-0.1178,-2.387,-0.1744,0.01091,-2.404,-0.1388,0.03886,-2.41,-0.1034,0.0443,-2.414,-0.06952,0.03611,-2.417,-0.03861,0.02221,-2.419,-0.01142,0.01052,-2.419,0.01155,0.008969,-2.42,0.03,0.02541,-2.42,0.0368,0.08096,-2.419,0.0228,0.1885,-2.41,0.00003,0.31,-2.387,-0.01599,0.4111,-2.358,-0.00944,0.5326,-2.312,-0.009469,0.6244,-2.266,-0.05925,0.5936,-2.28,-0.2738,0.09867,-2.382,-0.3472,-0.1251,-2.354]);
Transform94.children = new MFNode();

Transform94.children[0] = PositionInterpolator95;

OrientationInterpolator OrientationInterpolator96 = createNode("OrientationInterpolator");
OrientationInterpolator96.DEF = "skel_low_r_arm01-ROT-INTERP";
OrientationInterpolator96.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator96.keyValue = new MFRotation(new float[-0.36911,0.708219,-0.601817,0.3785,-0.358297,0.704695,-0.612395,0.3816,-0.342987,0.699473,-0.626975,0.3864,-0.348102,0.701204,-0.622204,0.3848,-0.400395,0.717491,-0.569993,0.371,-0.510567,0.737852,-0.441471,0.3551,-0.629996,0.732596,-0.257698,0.3502,-0.711672,0.698073,-0.0788469,0.3556,-0.747011,0.66371,0.0382506,0.3551,-0.728196,0.685097,0.0193099,0.313,-0.476694,0.79889,-0.366795,0.2202,-0.0259905,0.648213,-0.761015,0.2136,0.0739893,0.488196,-0.869592,0.2273,0.0912626,0.33851,-0.936527,0.2433,0.0670684,0.207295,-0.975977,0.2606,0.03114,0.0979999,-0.994699,0.2788,0.00634999,0.0127,-0.999899,0.2974,0.0100599,-0.0481295,-0.99879,0.3151,0.0561222,-0.0845432,-0.994838,0.3316,0.185492,-0.0753066,-0.979756,0.345,0.408605,-0.00100601,-0.912711,0.3638,0.605525,0.0825634,-0.791532,0.4046,0.717702,0.1295,-0.684202,0.4562,0.805879,0.131097,-0.577385,0.537,0.85102,0.137503,-0.506812,0.6052,0.834883,0.203596,-0.511389,0.5771,0.140699,0.667394,-0.731293,0.3404,-0.36911,0.708219,-0.601817,0.3785]);
Transform94.children[1] = OrientationInterpolator96;

Shape Shape97 = createNode("Shape");
Appearance Appearance98 = createNode("Appearance");
Material Material99 = createNode("Material");
Material99.diffuseColor = new SFColor(new float[1,1,1]);
Material99.shininess = 0;
Appearance98.material = Material99;

Shape97.appearance = Appearance98;

IndexedFaceSet IndexedFaceSet100 = createNode("IndexedFaceSet");
IndexedFaceSet100.USE = "skel_low_r_arm-FACES";
Shape97.geometry = IndexedFaceSet100;

Transform94.child[2] = Shape97;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "skel_r_hand01-ROOT";
Transform101.translation = new SFVec3f(new float[0.09358,0.3106,-2.006]);
Transform101.rotation = new SFRotation(new float[0.977521,-0.198504,-0.0710515,0.4102]);
Transform101.scale = new SFVec3f(new float[0.6022,0.6022,0.6022]);
Transform101.scaleOrientation = new SFRotation(new float[0,0.910688,-0.413095,0.1976]);
PositionInterpolator PositionInterpolator102 = createNode("PositionInterpolator");
PositionInterpolator102.DEF = "skel_r_hand01-POS-INTERP";
PositionInterpolator102.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator102.keyValue = new MFVec3f(new float[0.09358,0.3106,-2.006,0.09527,0.3221,-2.001,0.09776,0.3384,-1.994,0.09692,0.333,-1.996,0.08907,0.2799,-2.018,0.07562,0.1785,-2.046,0.06313,0.0507,-2.06,0.05585,-0.07591,-2.052,0.05404,-0.1734,-2.03,0.05563,-0.2044,-2.02,0.06281,-0.1365,-2.04,0.07633,-0.07514,-2.051,0.08802,-0.08111,-2.05,0.1004,-0.1044,-2.045,0.1126,-0.1361,-2.037,0.1241,-0.1682,-2.027,0.1345,-0.1929,-2.018,0.1435,-0.203,-2.014,0.1507,-0.1909,-2.017,0.1557,-0.1182,-2.035,0.1504,0.04487,-2.052,0.1273,0.2108,-2.035,0.09512,0.2884,-2.014,0.04302,0.2219,-2.037,-0.006658,0.1222,-2.054,0.0004279,0.1434,-2.051,0.06954,0.2696,-2.022,0.09358,0.3106,-2.006]);
Transform101.children = new MFNode();

Transform101.children[0] = PositionInterpolator102;

OrientationInterpolator OrientationInterpolator103 = createNode("OrientationInterpolator");
OrientationInterpolator103.DEF = "skel_r_hand01-ROT-INTERP";
OrientationInterpolator103.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator103.keyValue = new MFRotation(new float[0.977521,-0.198504,-0.0710515,0.4102,0.977955,-0.194311,-0.0764643,0.4272,0.978437,-0.188907,-0.0835231,0.4516,0.978281,-0.190696,-0.0812484,0.4434,0.976106,-0.210701,-0.0531303,0.3653,0.958985,-0.277096,0.059719,0.2239,0.520029,-0.54433,0.658236,0.0802798,-0.81074,-0.166508,0.561227,0.158501,-0.918494,-0.0512697,0.392097,0.2856,-0.945833,-0.0491517,0.320911,0.3236,-0.963691,-0.172998,0.203398,0.2197,-0.897792,-0.438496,-0.0411296,0.142,-0.855586,-0.502092,-0.125998,0.158201,-0.852466,-0.49968,-0.153694,0.1955,-0.864793,-0.478696,-0.151599,0.2426,-0.876367,-0.461183,-0.138895,0.2899,-0.88142,-0.45571,-0.124203,0.3276,-0.876658,-0.468278,-0.110395,0.3456,-0.855199,-0.5089,-0.0982599,0.3346,-0.732511,-0.67761,-0.0653709,0.2537,0.199591,-0.973354,0.112895,0.165701,0.867896,-0.462598,0.180999,0.2962,0.949938,-0.25801,0.176207,0.3856,0.980887,-0.0808289,0.176998,0.2803,0.935465,0.330723,0.124609,0.148801,0.97101,0.237703,-0.0252303,0.1719,0.987217,-0.143502,-0.0693512,0.346,0.977521,-0.198504,-0.0710515,0.4102]);
Transform101.children[1] = OrientationInterpolator103;

Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.diffuseColor = new SFColor(new float[1,1,1]);
Material106.shininess = 0;
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

IndexedFaceSet IndexedFaceSet107 = createNode("IndexedFaceSet");
IndexedFaceSet107.USE = "skel_r_hand-FACES";
Shape104.geometry = IndexedFaceSet107;

Transform101.child[2] = Shape104;

Transform94.children[3] = Transform101;

Transform87.children[3] = Transform94;

Transform35.children[3] = Transform87;

Transform28.children[1] = Transform35;

Transform19.children[3] = Transform28;

Transform9.children[4] = Transform19;

children[1] = Transform9;

Transform Transform108 = createNode("Transform");
Transform108.DEF = "skel_low_r_leg-ROOT";
Transform108.translation = new SFVec3f(new float[0.4421,1.248,-0.1262]);
Transform108.rotation = new SFRotation(new float[-0.263299,-0.696698,-0.667298,2.522]);
Transform108.scale = new SFVec3f(new float[0.5926,0.5926,0.5926]);
Transform108.scaleOrientation = new SFRotation(new float[-0.2403,0.968202,-0.0695801,0.7811]);
Shape Shape109 = createNode("Shape");
Appearance Appearance110 = createNode("Appearance");
Material Material111 = createNode("Material");
Material111.diffuseColor = new SFColor(new float[1,1,1]);
Material111.shininess = 0;
Appearance110.material = Material111;

Shape109.appearance = Appearance110;

IndexedFaceSet IndexedFaceSet112 = createNode("IndexedFaceSet");
IndexedFaceSet112.DEF = "skel_low_r_leg-FACES";
IndexedFaceSet112.solid = False;
IndexedFaceSet112.colorIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
IndexedFaceSet112.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1]);
Color Color113 = createNode("Color");
Color113.color = new MFColor(new float[0.4392,0.4353,0.302,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471,0.9176,0.9137,0.8471]);
IndexedFaceSet112.color = Color113;

Coordinate Coordinate114 = createNode("Coordinate");
Coordinate114.DEF = "skel_low_r_leg-COORD";
Coordinate114.point = new MFVec3f(new float[0.04385,0.04379,-1.343,-0.1931,0.1328,0.8025,0.03629,0.0529,1.481,0.1101,-0.1703,0.8025]);
IndexedFaceSet112.coord = Coordinate114;

Shape109.geometry = IndexedFaceSet112;

Transform108.child = new undefined();

Transform108.child[0] = Shape109;

children[2] = Transform108;

Transform Transform115 = createNode("Transform");
Transform115.DEF = "skel_low_l_leg-ROOT";
Transform115.translation = new SFVec3f(new float[-0.4738,1.198,-0.1262]);
Transform115.rotation = new SFRotation(new float[-0.263299,-0.696698,-0.667298,2.522]);
Transform115.scale = new SFVec3f(new float[0.5926,0.5926,0.5926]);
Transform115.scaleOrientation = new SFRotation(new float[-0.2403,0.968202,-0.0695801,0.7811]);
Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.diffuseColor = new SFColor(new float[1,1,1]);
Material118.shininess = 0;
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

IndexedFaceSet IndexedFaceSet119 = createNode("IndexedFaceSet");
IndexedFaceSet119.USE = "skel_low_r_leg-FACES";
Shape116.geometry = IndexedFaceSet119;

Transform115.child = new undefined();

Transform115.child[0] = Shape116;

children[3] = Transform115;

Transform Transform120 = createNode("Transform");
Transform120.DEF = "skel_upper_r_leg-ROOT";
Transform120.translation = new SFVec3f(new float[0.1529,2.886,0.0665]);
Transform120.rotation = new SFRotation(new float[0.168796,0.655284,0.736282,3.908]);
Transform120.scale = new SFVec3f(new float[0.5926,0.5926,0.5926]);
Transform120.scaleOrientation = new SFRotation(new float[-0.281804,0.958413,-0.0450806,0.7626]);
TimeSensor TimeSensor121 = createNode("TimeSensor");
TimeSensor121.DEF = "skel_upper_r_leg-TIMER";
TimeSensor121.cycleInterval = 5.333;
Transform120.children = new MFNode();

Transform120.children[0] = TimeSensor121;

PositionInterpolator PositionInterpolator122 = createNode("PositionInterpolator");
PositionInterpolator122.DEF = "skel_upper_r_leg-POS-INTERP";
PositionInterpolator122.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator122.keyValue = new MFVec3f(new float[0.1529,2.886,0.0665,0.1217,2.879,0.06372,0.08465,2.87,0.06199,0.05458,2.861,0.05862,0.04385,2.859,0.05125,0.06034,2.867,0.03836,0.089,2.878,0.02295,0.1256,2.89,0.005655,0.1683,2.902,-0.01332,0.2151,2.911,-0.03369,0.2637,2.917,-0.05503,0.3119,2.92,-0.07685,0.3575,2.92,-0.09855,0.3982,2.918,-0.1195,0.4324,2.914,-0.1398,0.4604,2.909,-0.1604,0.4835,2.904,-0.18,0.5027,2.898,-0.197,0.519,2.893,-0.2099,0.5307,2.89,-0.2109,0.5155,2.894,-0.2077,0.4646,2.903,-0.2149,0.3969,2.91,-0.2251,0.3276,2.914,-0.2196,0.2683,2.917,-0.1742,0.2077,2.912,-0.06446,0.1631,2.893,0.03985,0.1529,2.886,0.06649]);
Transform120.children[1] = PositionInterpolator122;

OrientationInterpolator OrientationInterpolator123 = createNode("OrientationInterpolator");
OrientationInterpolator123.DEF = "skel_upper_r_leg-ROT-INTERP";
OrientationInterpolator123.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator123.keyValue = new MFRotation(new float[0.168796,0.655284,0.736282,3.908,0.155295,0.663177,0.732175,3.929,0.138506,0.67173,0.727733,3.955,0.124806,0.679335,0.723137,3.975,0.121001,0.684603,0.718803,3.981,0.131406,0.686529,0.71513,3.965,0.147796,0.686781,0.71168,3.94,0.167895,0.68578,0.708179,3.909,0.190302,0.683808,0.704408,3.874,0.213987,0.68096,0.700359,3.835,0.237898,0.677595,0.695895,3.795,0.260998,0.674096,0.690996,3.754,0.282505,0.670711,0.685812,3.715,0.301398,0.667997,0.680397,3.678,0.31699,0.666578,0.674678,3.646,0.329397,0.666994,0.668294,3.616,-0.33919,-0.66838,-0.66198,2.694,-0.34728,-0.669862,-0.656263,2.718,-0.3542,-0.670401,-0.652001,2.737,-0.358395,-0.66769,-0.65249,2.746,-0.352703,-0.670505,-0.652705,2.733,-0.33591,-0.68572,-0.645719,2.695,-0.313405,-0.705712,-0.635411,2.645,-0.287402,-0.720404,-0.631204,2.59,-0.257896,-0.719089,-0.645291,2.531,-0.2157,-0.694201,-0.686701,2.453,0.178392,0.66397,0.726168,3.893,0.168808,0.655332,0.736236,3.908]);
Transform120.children[2] = OrientationInterpolator123;

Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
Material Material126 = createNode("Material");
Material126.diffuseColor = new SFColor(new float[1,1,1]);
Material126.shininess = 0;
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

IndexedFaceSet IndexedFaceSet127 = createNode("IndexedFaceSet");
IndexedFaceSet127.USE = "skel_low_r_leg-FACES";
Shape124.geometry = IndexedFaceSet127;

Transform120.child[3] = Shape124;

children[4] = Transform120;

Transform Transform128 = createNode("Transform");
Transform128.DEF = "skel_upper_l_leg-ROOT";
Transform128.translation = new SFVec3f(new float[-0.7619,2.811,0.0665]);
Transform128.rotation = new SFRotation(new float[0.168796,0.655284,0.736282,3.908]);
Transform128.scale = new SFVec3f(new float[0.5926,0.5926,0.5926]);
Transform128.scaleOrientation = new SFRotation(new float[-0.281804,0.958413,-0.0450806,0.7626]);
TimeSensor TimeSensor129 = createNode("TimeSensor");
TimeSensor129.DEF = "skel_upper_l_leg-TIMER";
TimeSensor129.cycleInterval = 5.333;
Transform128.children = new MFNode();

Transform128.children[0] = TimeSensor129;

PositionInterpolator PositionInterpolator130 = createNode("PositionInterpolator");
PositionInterpolator130.DEF = "skel_upper_l_leg-POS-INTERP";
PositionInterpolator130.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
PositionInterpolator130.keyValue = new MFVec3f(new float[-0.7619,2.811,0.0665,-0.7931,2.804,0.06371,-0.8302,2.795,0.06199,-0.8602,2.786,0.05862,-0.8709,2.784,0.05125,-0.8545,2.792,0.03836,-0.8258,2.803,0.02295,-0.7892,2.815,0.005655,-0.7465,2.827,-0.01332,-0.6997,2.836,-0.03369,-0.6511,2.842,-0.05503,-0.6029,2.845,-0.07685,-0.5573,2.845,-0.09855,-0.5166,2.843,-0.1195,-0.4824,2.839,-0.1398,-0.4544,2.834,-0.1604,-0.4313,2.829,-0.18,-0.4121,2.823,-0.197,-0.3958,2.818,-0.2099,-0.3841,2.815,-0.2109,-0.3993,2.819,-0.2077,-0.4502,2.828,-0.2149,-0.5179,2.835,-0.2251,-0.5872,2.839,-0.2196,-0.6465,2.842,-0.1742,-0.7071,2.837,-0.06446,-0.7517,2.818,0.03986,-0.7619,2.811,0.0665]);
Transform128.children[1] = PositionInterpolator130;

OrientationInterpolator OrientationInterpolator131 = createNode("OrientationInterpolator");
OrientationInterpolator131.DEF = "skel_upper_l_leg-ROT-INTERP";
OrientationInterpolator131.key = new MFFloat(new float[0,0.0375,0.075,0.1125,0.15,0.1875,0.225,0.2625,0.3,0.3375,0.375,0.4125,0.45,0.4875,0.525,0.5625,0.6,0.6375,0.675,0.7125,0.75,0.7875,0.825,0.8625,0.9,0.9375,0.975,1]);
OrientationInterpolator131.keyValue = new MFRotation(new float[0.168796,0.655284,0.736282,3.908,0.155295,0.663177,0.732175,3.929,0.138506,0.67173,0.727733,3.955,0.124806,0.679335,0.723137,3.975,0.121001,0.684603,0.718803,3.981,0.131406,0.686529,0.71513,3.965,0.147796,0.686781,0.71168,3.94,0.167895,0.68578,0.708179,3.909,0.190302,0.683808,0.704408,3.874,0.213987,0.68096,0.700359,3.835,0.237898,0.677595,0.695895,3.795,0.260998,0.674096,0.690996,3.754,0.282505,0.670711,0.685812,3.715,0.301398,0.667997,0.680397,3.678,0.31699,0.666578,0.674678,3.646,0.329397,0.666994,0.668294,3.616,-0.33919,-0.66838,-0.66198,2.694,-0.34728,-0.669862,-0.656263,2.718,-0.3542,-0.670401,-0.652001,2.737,-0.358395,-0.66769,-0.65249,2.746,-0.352703,-0.670505,-0.652705,2.733,-0.33591,-0.68572,-0.645719,2.695,-0.313405,-0.705712,-0.635411,2.645,-0.287402,-0.720404,-0.631204,2.59,-0.257896,-0.719089,-0.645291,2.531,-0.2157,-0.694201,-0.686701,2.453,0.178392,0.66397,0.726168,3.893,0.168796,0.655284,0.736282,3.908]);
Transform128.children[2] = OrientationInterpolator131;

Shape Shape132 = createNode("Shape");
Appearance Appearance133 = createNode("Appearance");
Material Material134 = createNode("Material");
Material134.diffuseColor = new SFColor(new float[1,1,1]);
Material134.shininess = 0;
Appearance133.material = Material134;

Shape132.appearance = Appearance133;

IndexedFaceSet IndexedFaceSet135 = createNode("IndexedFaceSet");
IndexedFaceSet135.USE = "skel_low_r_leg-FACES";
Shape132.geometry = IndexedFaceSet135;

Transform128.child[3] = Shape132;

children[5] = Transform128;

Transform Transform136 = createNode("Transform");
Transform136.DEF = "skel_Cement_block-ROOT";
Transform136.translation = new SFVec3f(new float[0.008968,0.6812,-0.9521]);
Transform136.rotation = new SFRotation(new float[1,0,0,1.571]);
Transform136.scaleOrientation = new SFRotation(new float[-0.507715,0,0.861525,0.2999]);
Shape Shape137 = createNode("Shape");
Appearance Appearance138 = createNode("Appearance");
Material Material139 = createNode("Material");
Material139.diffuseColor = new SFColor(new float[1,1,1]);
Material139.shininess = 0;
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

IndexedFaceSet IndexedFaceSet140 = createNode("IndexedFaceSet");
IndexedFaceSet140.DEF = "skel_Cement_block-FACES";
IndexedFaceSet140.colorIndex = new MFInt32(new int[1,0,2,-1,2,3,1,-1,0,4,5,-1,5,2,0,-1,4,6,7,-1,7,5,4,-1,6,1,3,-1,3,7,6,-1,6,4,8,-1,0,1,9,-1,9,1,10,-1,0,9,4,-1,4,9,11,-1,11,8,4,-1,3,2,12,-1,2,5,13,-1,12,2,13,-1,13,5,14,-1,14,5,7,-1,15,14,7,-1,13,9,12,-1,12,9,10,-1,12,10,8,-1,9,13,11,-1,14,11,13,-1,15,8,11,-1,8,15,12,-1,11,14,15,-1,1,6,16,-1,6,8,17,-1,17,8,10,-1,6,17,18,-1,18,16,6,-1,10,1,19,-1,1,16,19,-1,20,10,19,-1,21,10,20,-1,10,21,17,-1,3,12,22,-1,7,3,23,-1,3,22,23,-1,22,12,15,-1,7,24,15,-1,24,7,23,-1,25,22,15,-1,24,25,15,-1,22,19,16,-1,16,23,22,-1,18,17,24,-1,23,16,24,-1,24,16,18,-1,25,17,21,-1,25,21,20,-1,25,20,19,-1,19,22,25,-1,17,25,24,-1]);
IndexedFaceSet140.coordIndex = new MFInt32(new int[1,0,2,-1,2,3,1,-1,0,4,5,-1,5,2,0,-1,4,6,7,-1,7,5,4,-1,6,1,3,-1,3,7,6,-1,6,4,8,-1,0,1,9,-1,9,1,10,-1,0,9,4,-1,4,9,11,-1,11,8,4,-1,3,2,12,-1,2,5,13,-1,12,2,13,-1,13,5,14,-1,14,5,7,-1,15,14,7,-1,13,9,12,-1,12,9,10,-1,12,10,8,-1,9,13,11,-1,14,11,13,-1,15,8,11,-1,8,15,12,-1,11,14,15,-1,1,6,16,-1,6,8,17,-1,17,8,10,-1,6,17,18,-1,18,16,6,-1,10,1,19,-1,1,16,19,-1,20,10,19,-1,21,10,20,-1,10,21,17,-1,3,12,22,-1,7,3,23,-1,3,22,23,-1,22,12,15,-1,7,24,15,-1,24,7,23,-1,25,22,15,-1,24,25,15,-1,22,19,16,-1,16,23,22,-1,18,17,24,-1,23,16,24,-1,24,16,18,-1,25,17,21,-1,25,21,20,-1,25,20,19,-1,19,22,25,-1,17,25,24,-1]);
Color Color141 = createNode("Color");
Color141.color = new MFColor(new float[0.7608,0.7725,0.698,0.7961,0.8039,0.7098,0.7255,0.7294,0.5882,0.8588,0.8627,0.8039,1,1,1,0.7255,0.7294,0.5882,0.7961,0.8039,0.7098,0.8588,0.8627,0.8039,1,1,1,1,1,1,0.7451,0.7529,0.6706,0.7451,0.7451,0.6314,0.702,0.7216,0.6471,0.7255,0.7294,0.5882,0.7255,0.7294,0.5882,0.8235,0.8235,0.7686,1,1,1,1,1,1,1,1,1,0.7451,0.7529,0.6706,0.7451,0.7529,0.6706,0.7451,0.7529,0.6706,0.702,0.7216,0.6471,1,1,1,1,1,1,0.5686,0.5686,0.4353]);
IndexedFaceSet140.color = Color141;

Coordinate Coordinate142 = createNode("Coordinate");
Coordinate142.DEF = "skel_Cement_block-COORD";
Coordinate142.point = new MFVec3f(new float[0.976,0.4912,0.6757,-0.976,0.4912,0.6757,0.976,1.355,0.6757,-0.976,1.355,0.6757,0.976,0.4912,-0.6757,0.976,1.355,-0.6757,-0.976,0.4912,-0.6757,-0.976,1.355,-0.6757,0.1413,0.4912,-0.3652,0.7016,0.4912,0.4182,0.1413,0.4912,0.4182,0.7016,0.4912,-0.3652,0.1413,1.355,0.4182,0.7016,1.355,0.4182,0.7016,1.355,-0.3652,0.1413,1.355,-0.3652,-0.6997,0.4912,0.4162,-0.1334,0.4912,-0.3678,-0.6997,0.4912,-0.3678,-0.1334,0.4912,0.4162,-0.1334,0.4912,0.4162,-0.1334,0.4912,0.4162,-0.1334,1.355,0.4162,-0.6997,1.355,0.4162,-0.6997,1.355,-0.3678,-0.1334,1.355,-0.3678]);
IndexedFaceSet140.coord = Coordinate142;

Shape137.geometry = IndexedFaceSet140;

Transform136.child = new undefined();

Transform136.child[0] = Shape137;

children[6] = Transform136;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromNode = "skel_pelvis-TIMER";
ROUTE143.fromField = "fraction_changed";
ROUTE143.toNode = "skel_pelvis-POS-INTERP";
ROUTE143.toField = "set_fraction";
children[7] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromNode = "skel_pelvis-POS-INTERP";
ROUTE144.fromField = "value_changed";
ROUTE144.toNode = "skel_pelvis-ROOT";
ROUTE144.toField = "set_translation";
children[8] = ROUTE144;

ROUTE ROUTE145 = createNode("ROUTE");
ROUTE145.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE145.fromField = "fraction_changed";
ROUTE145.toNode = "skel_pelvis-POS-INTERP";
ROUTE145.toField = "set_fraction";
children[9] = ROUTE145;

ROUTE ROUTE146 = createNode("ROUTE");
ROUTE146.fromNode = "skel_pelvis-TIMER";
ROUTE146.fromField = "fraction_changed";
ROUTE146.toNode = "skel_pelvis-ROT-INTERP";
ROUTE146.toField = "set_fraction";
children[10] = ROUTE146;

ROUTE ROUTE147 = createNode("ROUTE");
ROUTE147.fromNode = "skel_pelvis-ROT-INTERP";
ROUTE147.fromField = "value_changed";
ROUTE147.toNode = "skel_pelvis-ROOT";
ROUTE147.toField = "set_rotation";
children[11] = ROUTE147;

ROUTE ROUTE148 = createNode("ROUTE");
ROUTE148.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE148.fromField = "fraction_changed";
ROUTE148.toNode = "skel_pelvis-ROT-INTERP";
ROUTE148.toField = "set_fraction";
children[12] = ROUTE148;

ROUTE ROUTE149 = createNode("ROUTE");
ROUTE149.fromNode = "skel_pelvis-TIMER";
ROUTE149.fromField = "fraction_changed";
ROUTE149.toNode = "skel_lower_rib-POS-INTERP";
ROUTE149.toField = "set_fraction";
children[13] = ROUTE149;

ROUTE ROUTE150 = createNode("ROUTE");
ROUTE150.fromNode = "skel_lower_rib-POS-INTERP";
ROUTE150.fromField = "value_changed";
ROUTE150.toNode = "skel_lower_rib-ROOT";
ROUTE150.toField = "set_translation";
children[14] = ROUTE150;

ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE151.fromField = "fraction_changed";
ROUTE151.toNode = "skel_lower_rib-POS-INTERP";
ROUTE151.toField = "set_fraction";
children[15] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "skel_pelvis-TIMER";
ROUTE152.fromField = "fraction_changed";
ROUTE152.toNode = "skel_lower_rib-ROT-INTERP";
ROUTE152.toField = "set_fraction";
children[16] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "skel_lower_rib-ROT-INTERP";
ROUTE153.fromField = "value_changed";
ROUTE153.toNode = "skel_lower_rib-ROOT";
ROUTE153.toField = "set_rotation";
children[17] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE154.fromField = "fraction_changed";
ROUTE154.toNode = "skel_lower_rib-ROT-INTERP";
ROUTE154.toField = "set_fraction";
children[18] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "skel_pelvis-TIMER";
ROUTE155.fromField = "fraction_changed";
ROUTE155.toNode = "skel_up_r_arm-POS-INTERP";
ROUTE155.toField = "set_fraction";
children[19] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromNode = "skel_up_r_arm-POS-INTERP";
ROUTE156.fromField = "value_changed";
ROUTE156.toNode = "skel_up_r_arm-ROOT";
ROUTE156.toField = "set_translation";
children[20] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE157.fromField = "fraction_changed";
ROUTE157.toNode = "skel_up_r_arm-POS-INTERP";
ROUTE157.toField = "set_fraction";
children[21] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromNode = "skel_pelvis-TIMER";
ROUTE158.fromField = "fraction_changed";
ROUTE158.toNode = "skel_up_r_arm-ROT-INTERP";
ROUTE158.toField = "set_fraction";
children[22] = ROUTE158;

ROUTE ROUTE159 = createNode("ROUTE");
ROUTE159.fromNode = "skel_up_r_arm-ROT-INTERP";
ROUTE159.fromField = "value_changed";
ROUTE159.toNode = "skel_up_r_arm-ROOT";
ROUTE159.toField = "set_rotation";
children[23] = ROUTE159;

ROUTE ROUTE160 = createNode("ROUTE");
ROUTE160.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE160.fromField = "fraction_changed";
ROUTE160.toNode = "skel_up_r_arm-ROT-INTERP";
ROUTE160.toField = "set_fraction";
children[24] = ROUTE160;

ROUTE ROUTE161 = createNode("ROUTE");
ROUTE161.fromNode = "skel_pelvis-TIMER";
ROUTE161.fromField = "fraction_changed";
ROUTE161.toNode = "skel_low_r_arm-POS-INTERP";
ROUTE161.toField = "set_fraction";
children[25] = ROUTE161;

ROUTE ROUTE162 = createNode("ROUTE");
ROUTE162.fromNode = "skel_low_r_arm-POS-INTERP";
ROUTE162.fromField = "value_changed";
ROUTE162.toNode = "skel_low_r_arm-ROOT";
ROUTE162.toField = "set_translation";
children[26] = ROUTE162;

ROUTE ROUTE163 = createNode("ROUTE");
ROUTE163.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE163.fromField = "fraction_changed";
ROUTE163.toNode = "skel_low_r_arm-POS-INTERP";
ROUTE163.toField = "set_fraction";
children[27] = ROUTE163;

ROUTE ROUTE164 = createNode("ROUTE");
ROUTE164.fromNode = "skel_pelvis-TIMER";
ROUTE164.fromField = "fraction_changed";
ROUTE164.toNode = "skel_low_r_arm-ROT-INTERP";
ROUTE164.toField = "set_fraction";
children[28] = ROUTE164;

ROUTE ROUTE165 = createNode("ROUTE");
ROUTE165.fromNode = "skel_low_r_arm-ROT-INTERP";
ROUTE165.fromField = "value_changed";
ROUTE165.toNode = "skel_low_r_arm-ROOT";
ROUTE165.toField = "set_rotation";
children[29] = ROUTE165;

ROUTE ROUTE166 = createNode("ROUTE");
ROUTE166.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE166.fromField = "fraction_changed";
ROUTE166.toNode = "skel_low_r_arm-ROT-INTERP";
ROUTE166.toField = "set_fraction";
children[30] = ROUTE166;

ROUTE ROUTE167 = createNode("ROUTE");
ROUTE167.fromNode = "skel_pelvis-TIMER";
ROUTE167.fromField = "fraction_changed";
ROUTE167.toNode = "skel_r_hand-POS-INTERP";
ROUTE167.toField = "set_fraction";
children[31] = ROUTE167;

ROUTE ROUTE168 = createNode("ROUTE");
ROUTE168.fromNode = "skel_r_hand-POS-INTERP";
ROUTE168.fromField = "value_changed";
ROUTE168.toNode = "skel_r_hand-ROOT";
ROUTE168.toField = "set_translation";
children[32] = ROUTE168;

ROUTE ROUTE169 = createNode("ROUTE");
ROUTE169.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE169.fromField = "fraction_changed";
ROUTE169.toNode = "skel_r_hand-POS-INTERP";
ROUTE169.toField = "set_fraction";
children[33] = ROUTE169;

ROUTE ROUTE170 = createNode("ROUTE");
ROUTE170.fromNode = "skel_pelvis-TIMER";
ROUTE170.fromField = "fraction_changed";
ROUTE170.toNode = "skel_r_hand-ROT-INTERP";
ROUTE170.toField = "set_fraction";
children[34] = ROUTE170;

ROUTE ROUTE171 = createNode("ROUTE");
ROUTE171.fromNode = "skel_r_hand-ROT-INTERP";
ROUTE171.fromField = "value_changed";
ROUTE171.toNode = "skel_r_hand-ROOT";
ROUTE171.toField = "set_rotation";
children[35] = ROUTE171;

ROUTE ROUTE172 = createNode("ROUTE");
ROUTE172.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE172.fromField = "fraction_changed";
ROUTE172.toNode = "skel_r_hand-ROT-INTERP";
ROUTE172.toField = "set_fraction";
children[36] = ROUTE172;

ROUTE ROUTE173 = createNode("ROUTE");
ROUTE173.fromNode = "skel_pelvis-TIMER";
ROUTE173.fromField = "fraction_changed";
ROUTE173.toNode = "skel_Skull_head-POS-INTERP";
ROUTE173.toField = "set_fraction";
children[37] = ROUTE173;

ROUTE ROUTE174 = createNode("ROUTE");
ROUTE174.fromNode = "skel_Skull_head-POS-INTERP";
ROUTE174.fromField = "value_changed";
ROUTE174.toNode = "skel_Skull_head-ROOT";
ROUTE174.toField = "set_translation";
children[38] = ROUTE174;

ROUTE ROUTE175 = createNode("ROUTE");
ROUTE175.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE175.fromField = "fraction_changed";
ROUTE175.toNode = "skel_Skull_head-POS-INTERP";
ROUTE175.toField = "set_fraction";
children[39] = ROUTE175;

ROUTE ROUTE176 = createNode("ROUTE");
ROUTE176.fromNode = "skel_pelvis-TIMER";
ROUTE176.fromField = "fraction_changed";
ROUTE176.toNode = "skel_Skull_head-ROT-INTERP";
ROUTE176.toField = "set_fraction";
children[40] = ROUTE176;

ROUTE ROUTE177 = createNode("ROUTE");
ROUTE177.fromNode = "skel_Skull_head-ROT-INTERP";
ROUTE177.fromField = "value_changed";
ROUTE177.toNode = "skel_Skull_head-ROOT";
ROUTE177.toField = "set_rotation";
children[41] = ROUTE177;

ROUTE ROUTE178 = createNode("ROUTE");
ROUTE178.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE178.fromField = "fraction_changed";
ROUTE178.toNode = "skel_Skull_head-ROT-INTERP";
ROUTE178.toField = "set_fraction";
children[42] = ROUTE178;

ROUTE ROUTE179 = createNode("ROUTE");
ROUTE179.fromNode = "skel_pelvis-TIMER";
ROUTE179.fromField = "fraction_changed";
ROUTE179.toNode = "skel_Jaw01-POS-INTERP";
ROUTE179.toField = "set_fraction";
children[43] = ROUTE179;

ROUTE ROUTE180 = createNode("ROUTE");
ROUTE180.fromNode = "skel_Jaw01-POS-INTERP";
ROUTE180.fromField = "value_changed";
ROUTE180.toNode = "skel_Jaw01-ROOT";
ROUTE180.toField = "set_translation";
children[44] = ROUTE180;

ROUTE ROUTE181 = createNode("ROUTE");
ROUTE181.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE181.fromField = "fraction_changed";
ROUTE181.toNode = "skel_Jaw01-POS-INTERP";
ROUTE181.toField = "set_fraction";
children[45] = ROUTE181;

ROUTE ROUTE182 = createNode("ROUTE");
ROUTE182.fromNode = "skel_pelvis-TIMER";
ROUTE182.fromField = "fraction_changed";
ROUTE182.toNode = "skel_Jaw01-ROT-INTERP";
ROUTE182.toField = "set_fraction";
children[46] = ROUTE182;

ROUTE ROUTE183 = createNode("ROUTE");
ROUTE183.fromNode = "skel_Jaw01-ROT-INTERP";
ROUTE183.fromField = "value_changed";
ROUTE183.toNode = "skel_Jaw01-ROOT";
ROUTE183.toField = "set_rotation";
children[47] = ROUTE183;

ROUTE ROUTE184 = createNode("ROUTE");
ROUTE184.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE184.fromField = "fraction_changed";
ROUTE184.toNode = "skel_Jaw01-ROT-INTERP";
ROUTE184.toField = "set_fraction";
children[48] = ROUTE184;

ROUTE ROUTE185 = createNode("ROUTE");
ROUTE185.fromNode = "skel_pelvis-TIMER";
ROUTE185.fromField = "fraction_changed";
ROUTE185.toNode = "skel_up_r_arm01-POS-INTERP";
ROUTE185.toField = "set_fraction";
children[49] = ROUTE185;

ROUTE ROUTE186 = createNode("ROUTE");
ROUTE186.fromNode = "skel_up_r_arm01-POS-INTERP";
ROUTE186.fromField = "value_changed";
ROUTE186.toNode = "skel_up_r_arm01-ROOT";
ROUTE186.toField = "set_translation";
children[50] = ROUTE186;

ROUTE ROUTE187 = createNode("ROUTE");
ROUTE187.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE187.fromField = "fraction_changed";
ROUTE187.toNode = "skel_up_r_arm01-POS-INTERP";
ROUTE187.toField = "set_fraction";
children[51] = ROUTE187;

ROUTE ROUTE188 = createNode("ROUTE");
ROUTE188.fromNode = "skel_pelvis-TIMER";
ROUTE188.fromField = "fraction_changed";
ROUTE188.toNode = "skel_up_r_arm01-ROT-INTERP";
ROUTE188.toField = "set_fraction";
children[52] = ROUTE188;

ROUTE ROUTE189 = createNode("ROUTE");
ROUTE189.fromNode = "skel_up_r_arm01-ROT-INTERP";
ROUTE189.fromField = "value_changed";
ROUTE189.toNode = "skel_up_r_arm01-ROOT";
ROUTE189.toField = "set_rotation";
children[53] = ROUTE189;

ROUTE ROUTE190 = createNode("ROUTE");
ROUTE190.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE190.fromField = "fraction_changed";
ROUTE190.toNode = "skel_up_r_arm01-ROT-INTERP";
ROUTE190.toField = "set_fraction";
children[54] = ROUTE190;

ROUTE ROUTE191 = createNode("ROUTE");
ROUTE191.fromNode = "skel_pelvis-TIMER";
ROUTE191.fromField = "fraction_changed";
ROUTE191.toNode = "skel_low_r_arm01-POS-INTERP";
ROUTE191.toField = "set_fraction";
children[55] = ROUTE191;

ROUTE ROUTE192 = createNode("ROUTE");
ROUTE192.fromNode = "skel_low_r_arm01-POS-INTERP";
ROUTE192.fromField = "value_changed";
ROUTE192.toNode = "skel_low_r_arm01-ROOT";
ROUTE192.toField = "set_translation";
children[56] = ROUTE192;

ROUTE ROUTE193 = createNode("ROUTE");
ROUTE193.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE193.fromField = "fraction_changed";
ROUTE193.toNode = "skel_low_r_arm01-POS-INTERP";
ROUTE193.toField = "set_fraction";
children[57] = ROUTE193;

ROUTE ROUTE194 = createNode("ROUTE");
ROUTE194.fromNode = "skel_pelvis-TIMER";
ROUTE194.fromField = "fraction_changed";
ROUTE194.toNode = "skel_low_r_arm01-ROT-INTERP";
ROUTE194.toField = "set_fraction";
children[58] = ROUTE194;

ROUTE ROUTE195 = createNode("ROUTE");
ROUTE195.fromNode = "skel_low_r_arm01-ROT-INTERP";
ROUTE195.fromField = "value_changed";
ROUTE195.toNode = "skel_low_r_arm01-ROOT";
ROUTE195.toField = "set_rotation";
children[59] = ROUTE195;

ROUTE ROUTE196 = createNode("ROUTE");
ROUTE196.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE196.fromField = "fraction_changed";
ROUTE196.toNode = "skel_low_r_arm01-ROT-INTERP";
ROUTE196.toField = "set_fraction";
children[60] = ROUTE196;

ROUTE ROUTE197 = createNode("ROUTE");
ROUTE197.fromNode = "skel_pelvis-TIMER";
ROUTE197.fromField = "fraction_changed";
ROUTE197.toNode = "skel_r_hand01-POS-INTERP";
ROUTE197.toField = "set_fraction";
children[61] = ROUTE197;

ROUTE ROUTE198 = createNode("ROUTE");
ROUTE198.fromNode = "skel_r_hand01-POS-INTERP";
ROUTE198.fromField = "value_changed";
ROUTE198.toNode = "skel_r_hand01-ROOT";
ROUTE198.toField = "set_translation";
children[62] = ROUTE198;

ROUTE ROUTE199 = createNode("ROUTE");
ROUTE199.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE199.fromField = "fraction_changed";
ROUTE199.toNode = "skel_r_hand01-POS-INTERP";
ROUTE199.toField = "set_fraction";
children[63] = ROUTE199;

ROUTE ROUTE200 = createNode("ROUTE");
ROUTE200.fromNode = "skel_pelvis-TIMER";
ROUTE200.fromField = "fraction_changed";
ROUTE200.toNode = "skel_r_hand01-ROT-INTERP";
ROUTE200.toField = "set_fraction";
children[64] = ROUTE200;

ROUTE ROUTE201 = createNode("ROUTE");
ROUTE201.fromNode = "skel_r_hand01-ROT-INTERP";
ROUTE201.fromField = "value_changed";
ROUTE201.toNode = "skel_r_hand01-ROOT";
ROUTE201.toField = "set_rotation";
children[65] = ROUTE201;

ROUTE ROUTE202 = createNode("ROUTE");
ROUTE202.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE202.fromField = "fraction_changed";
ROUTE202.toNode = "skel_r_hand01-ROT-INTERP";
ROUTE202.toField = "set_fraction";
children[66] = ROUTE202;

ROUTE ROUTE203 = createNode("ROUTE");
ROUTE203.fromNode = "skel_upper_r_leg-TIMER";
ROUTE203.fromField = "fraction_changed";
ROUTE203.toNode = "skel_upper_r_leg-POS-INTERP";
ROUTE203.toField = "set_fraction";
children[67] = ROUTE203;

ROUTE ROUTE204 = createNode("ROUTE");
ROUTE204.fromNode = "skel_upper_r_leg-POS-INTERP";
ROUTE204.fromField = "value_changed";
ROUTE204.toNode = "skel_upper_r_leg-ROOT";
ROUTE204.toField = "set_translation";
children[68] = ROUTE204;

ROUTE ROUTE205 = createNode("ROUTE");
ROUTE205.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE205.fromField = "fraction_changed";
ROUTE205.toNode = "skel_upper_r_leg-POS-INTERP";
ROUTE205.toField = "set_fraction";
children[69] = ROUTE205;

ROUTE ROUTE206 = createNode("ROUTE");
ROUTE206.fromNode = "skel_upper_r_leg-TIMER";
ROUTE206.fromField = "fraction_changed";
ROUTE206.toNode = "skel_upper_r_leg-ROT-INTERP";
ROUTE206.toField = "set_fraction";
children[70] = ROUTE206;

ROUTE ROUTE207 = createNode("ROUTE");
ROUTE207.fromNode = "skel_upper_r_leg-ROT-INTERP";
ROUTE207.fromField = "value_changed";
ROUTE207.toNode = "skel_upper_r_leg-ROOT";
ROUTE207.toField = "set_rotation";
children[71] = ROUTE207;

ROUTE ROUTE208 = createNode("ROUTE");
ROUTE208.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE208.fromField = "fraction_changed";
ROUTE208.toNode = "skel_upper_r_leg-ROT-INTERP";
ROUTE208.toField = "set_fraction";
children[72] = ROUTE208;

ROUTE ROUTE209 = createNode("ROUTE");
ROUTE209.fromNode = "skel_upper_l_leg-TIMER";
ROUTE209.fromField = "fraction_changed";
ROUTE209.toNode = "skel_upper_l_leg-POS-INTERP";
ROUTE209.toField = "set_fraction";
children[73] = ROUTE209;

ROUTE ROUTE210 = createNode("ROUTE");
ROUTE210.fromNode = "skel_upper_l_leg-POS-INTERP";
ROUTE210.fromField = "value_changed";
ROUTE210.toNode = "skel_upper_l_leg-ROOT";
ROUTE210.toField = "set_translation";
children[74] = ROUTE210;

ROUTE ROUTE211 = createNode("ROUTE");
ROUTE211.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE211.fromField = "fraction_changed";
ROUTE211.toNode = "skel_upper_l_leg-POS-INTERP";
ROUTE211.toField = "set_fraction";
children[75] = ROUTE211;

ROUTE ROUTE212 = createNode("ROUTE");
ROUTE212.fromNode = "skel_upper_l_leg-TIMER";
ROUTE212.fromField = "fraction_changed";
ROUTE212.toNode = "skel_upper_l_leg-ROT-INTERP";
ROUTE212.toField = "set_fraction";
children[76] = ROUTE212;

ROUTE ROUTE213 = createNode("ROUTE");
ROUTE213.fromNode = "skel_upper_l_leg-ROT-INTERP";
ROUTE213.fromField = "value_changed";
ROUTE213.toNode = "skel_upper_l_leg-ROOT";
ROUTE213.toField = "set_rotation";
children[77] = ROUTE213;

ROUTE ROUTE214 = createNode("ROUTE");
ROUTE214.fromNode = "TimeSensor_skeleton-TIMER";
ROUTE214.fromField = "fraction_changed";
ROUTE214.toNode = "skel_upper_l_leg-ROT-INTERP";
ROUTE214.toField = "set_fraction";
children[78] = ROUTE214;

}
