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
TimeSensor8.DEF = "TimeSensor_Fishswim-TIMER";
TimeSensor8.cycleInterval = 1.6;
TimeSensor8.loop = True;
TimeSensor8.startTime = 1;
children = new MFNode();

children[0] = TimeSensor8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "Fish_Dummy_rotate_Y-ROOT";
Transform9.translation = new SFVec3f(new float[0.02897,-0.005942,-0.01196]);
Transform9.rotation = new SFRotation(new float[0.423218,-0.0127905,0.905938,0.0250124]);
Transform9.scaleOrientation = new SFRotation(new float[0.19509,0.721735,-0.664108,0.0157011]);
TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "Fish_Dummy_rotate_Y-TIMER";
TimeSensor10.cycleInterval = 1.6;
Transform9.children = new MFNode();

Transform9.children[0] = TimeSensor10;

OrientationInterpolator OrientationInterpolator11 = createNode("OrientationInterpolator");
OrientationInterpolator11.DEF = "Fish_Dummy_rotate_Y-ROT-INTERP";
OrientationInterpolator11.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator11.keyValue = new MFRotation(new float[0.423218,-0.0127905,0.905938,0.0250124,0.670927,-0.00873856,-0.741472,0.015792,0.258901,0.000228401,-0.965904,0.0409116,0.203419,0.00134412,-0.979091,0.0520578,0.29261,-0.000459915,-0.956232,0.0361926,0.991332,-0.0194008,0.129939,0.0106754,0.272382,-0.0102393,0.962135,0.0388612,0.193107,-0.00884134,0.981138,0.0547807,0.423218,-0.0127905,0.905938,0.0250124]);
Transform9.children[1] = OrientationInterpolator11;

Transform Transform12 = createNode("Transform");
Transform12.DEF = "Fish_body-ROOT";
Transform12.translation = new SFVec3f(new float[-0.03523,-0.007528,0.3114]);
Transform12.rotation = new SFRotation(new float[0.998783,-0.0348794,0.0348794,1.572]);
PositionInterpolator PositionInterpolator13 = createNode("PositionInterpolator");
PositionInterpolator13.DEF = "Fish_body-POS-INTERP";
PositionInterpolator13.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator13.keyValue = new MFVec3f(new float[-0.03523,-0.007528,0.3114,-0.02274,-0.007528,0.3124,-0.008901,-0.007528,0.313,0.002314,-0.007528,0.313,0.00693,-0.007528,0.3128,0.0003348,-0.007528,0.313,-0.01418,-0.007528,0.3128,-0.02866,-0.007528,0.312,-0.03523,-0.007528,0.3114]);
Transform12.children = new MFNode();

Transform12.children[0] = PositionInterpolator13;

OrientationInterpolator OrientationInterpolator14 = createNode("OrientationInterpolator");
OrientationInterpolator14.DEF = "Fish_body-ROT-INTERP";
OrientationInterpolator14.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator14.keyValue = new MFRotation(new float[0.998783,-0.0348794,0.0348794,1.572,0.999799,-0.01418,0.01418,1.571,0.999924,0.00872621,-0.00872621,1.571,0.999257,0.0272588,-0.0272588,1.572,0.998783,0.0348794,-0.0348794,1.572,0.999424,0.0239906,-0.0239906,1.571,1,0,0,1.571,0.999424,-0.0239906,0.0239906,1.571,0.998783,-0.0348794,0.0348794,1.572]);
Transform12.children[1] = OrientationInterpolator14;

Shape Shape15 = createNode("Shape");
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.diffuseColor = new SFColor(new float[1,1,1]);
Material17.shininess = 0.25;
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

IndexedFaceSet IndexedFaceSet18 = createNode("IndexedFaceSet");
IndexedFaceSet18.DEF = "Fish_body-FACES";
IndexedFaceSet18.creaseAngle = 3;
IndexedFaceSet18.colorIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,4,12,5,-1,11,12,4,-1,5,13,6,-1,12,13,5,-1,14,7,6,-1,13,14,6,-1,7,8,1,-1,14,8,7,-1,8,15,9,-1,15,16,9,-1,9,16,10,-1,16,17,10,-1,10,17,11,-1,17,18,11,-1,11,19,12,-1,18,19,11,-1,12,20,13,-1,19,20,12,-1,13,21,14,-1,20,21,13,-1,14,15,8,-1,21,15,14,-1,15,22,16,-1,16,22,17,-1,22,23,17,-1,17,23,18,-1,23,24,18,-1,18,24,19,-1,24,25,19,-1,19,25,20,-1,25,22,20,-1,20,22,21,-1,21,22,15,-1,26,23,22,-1,26,24,23,-1,26,25,24,-1,26,22,25,-1]);
IndexedFaceSet18.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,4,12,5,-1,11,12,4,-1,5,13,6,-1,12,13,5,-1,14,7,6,-1,13,14,6,-1,7,8,1,-1,14,8,7,-1,8,15,9,-1,15,16,9,-1,9,16,10,-1,16,17,10,-1,10,17,11,-1,17,18,11,-1,11,19,12,-1,18,19,11,-1,12,20,13,-1,19,20,12,-1,13,21,14,-1,20,21,13,-1,14,15,8,-1,21,15,14,-1,15,22,16,-1,16,22,17,-1,22,23,17,-1,17,23,18,-1,23,24,18,-1,18,24,19,-1,24,25,19,-1,19,25,20,-1,25,22,20,-1,20,22,21,-1,21,22,15,-1,26,23,22,-1,26,24,23,-1,26,25,24,-1,26,22,25,-1]);
Color Color19 = createNode("Color");
Color19.color = new MFColor(new float[1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0]);
IndexedFaceSet18.color = Color19;

Coordinate Coordinate20 = createNode("Coordinate");
Coordinate20.DEF = "Fish_body-COORD";
Coordinate20.point = new MFVec3f(new float[0,0.7757,0,0,0.6276,-0.456,-0.3147,0.6276,-0.3267,-0.458,0.6276,-0.0002355,-0.266,0.6262,0.4098,0.2454,0.6276,0.4098,0.4796,0.6276,0.0004446,0.3149,0.6276,-0.3296,0,0.2397,-0.7378,-0.5104,0.2397,-0.5294,-0.726,0.2397,-0.0002355,-0.4002,0.237,0.6119,0.3844,0.2397,0.6282,0.7476,0.2397,0.0004445,0.5106,0.2397,-0.5323,0,-0.3025,-0.7095,-0.5072,-0.3025,-0.5067,-0.726,-0.3025,-0.0003116,-0.4052,-0.3025,0.5862,0.3862,-0.3025,0.6052,0.7476,-0.3025,0.0003684,0.5074,-0.3025,-0.5096,0.005317,-0.8264,-0.5359,-0.4599,-0.8226,-0.05375,0,-0.8249,0.4095,0.4793,-0.8227,-0.07221,0,-1.856,-0.391]);
IndexedFaceSet18.coord = Coordinate20;

Shape15.geometry = IndexedFaceSet18;

Transform12.child[2] = Shape15;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "Fish_fin_L-ROOT";
Transform21.translation = new SFVec3f(new float[0.6627,-0.1276,0.1854]);
Transform21.rotation = new SFRotation(new float[-0.771583,-0.496889,0.397191,3.005]);
Transform21.scaleOrientation = new SFRotation(new float[-0.976546,0,-0.21531,0.6453]);
OrientationInterpolator OrientationInterpolator22 = createNode("OrientationInterpolator");
OrientationInterpolator22.DEF = "Fish_fin_L-ROT-INTERP";
OrientationInterpolator22.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator22.keyValue = new MFRotation(new float[-0.771583,-0.496889,0.397191,3.005,-0.893609,-0.233702,0.383204,2.803,-0.853784,-0.332894,0.400293,2.892,-0.796915,-0.441508,0.412308,2.994,-0.728687,-0.543491,0.416693,3.096,-0.660392,-0.626292,0.414295,3.183,-0.607503,-0.681404,0.408202,3.243,-0.5865,-0.7024,0.4033,3.262,-0.771583,-0.496889,0.397191,3.005]);
Transform21.children = new MFNode();

Transform21.children[0] = OrientationInterpolator22;

Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[1,1,1]);
Material25.shininess = 0.25;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

IndexedFaceSet IndexedFaceSet26 = createNode("IndexedFaceSet");
IndexedFaceSet26.DEF = "Fish_fin_L-FACES";
IndexedFaceSet26.solid = False;
IndexedFaceSet26.creaseAngle = 3;
IndexedFaceSet26.colorIndex = new MFInt32(new int[0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]);
IndexedFaceSet26.coordIndex = new MFInt32(new int[0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]);
Color Color27 = createNode("Color");
Color27.color = new MFColor(new float[0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471]);
IndexedFaceSet26.color = Color27;

Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.DEF = "Fish_fin_L-COORD";
Coordinate28.point = new MFVec3f(new float[-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869]);
IndexedFaceSet26.coord = Coordinate28;

Shape23.geometry = IndexedFaceSet26;

Transform21.child[1] = Shape23;

Transform12.children[3] = Transform21;

Transform Transform29 = createNode("Transform");
Transform29.DEF = "Fish_tail-ROOT";
Transform29.translation = new SFVec3f(new float[-0.0106,-1.754,-0.3672]);
Transform29.rotation = new SFRotation(new float[-0.998956,0.0322986,-0.0322986,1.572]);
Transform29.scaleOrientation = new SFRotation(new float[0.691482,-0.722394,0,0.0161503]);
OrientationInterpolator OrientationInterpolator30 = createNode("OrientationInterpolator");
OrientationInterpolator30.DEF = "Fish_tail-ROT-INTERP";
OrientationInterpolator30.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator30.keyValue = new MFRotation(new float[-0.998956,0.0322986,-0.0322986,1.572,-0.968493,-0.176099,0.176099,1.603,-0.954267,-0.211393,0.211393,1.618,-0.955761,-0.207992,0.207992,1.616,-0.990687,-0.0962787,0.0962787,1.58,-0.973967,0.160295,-0.160295,1.597,-0.954308,0.211302,-0.211302,1.618,-0.964008,0.188001,-0.188001,1.607,-0.998956,0.0322986,-0.0322986,1.572]);
Transform29.children = new MFNode();

Transform29.children[0] = OrientationInterpolator30;

Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.diffuseColor = new SFColor(new float[1,1,1]);
Material33.shininess = 0.25;
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

IndexedFaceSet IndexedFaceSet34 = createNode("IndexedFaceSet");
IndexedFaceSet34.DEF = "Fish_tail-FACES";
IndexedFaceSet34.solid = False;
IndexedFaceSet34.creaseAngle = 3;
IndexedFaceSet34.colorIndex = new MFInt32(new int[0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]);
IndexedFaceSet34.coordIndex = new MFInt32(new int[0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]);
Color Color35 = createNode("Color");
Color35.color = new MFColor(new float[0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471]);
IndexedFaceSet34.color = Color35;

Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.DEF = "Fish_tail-COORD";
Coordinate36.point = new MFVec3f(new float[-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869]);
IndexedFaceSet34.coord = Coordinate36;

Shape31.geometry = IndexedFaceSet34;

Transform29.child[1] = Shape31;

Transform12.children[4] = Transform29;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "Fish_fin_R-ROOT";
Transform37.translation = new SFVec3f(new float[-0.6703,-0.14,0.1409]);
Transform37.rotation = new SFRotation(new float[-0.742578,0.490286,-0.456287,3.094]);
Transform37.scaleOrientation = new SFRotation(new float[0.45042,-0.490922,-0.745733,0.6073]);
OrientationInterpolator OrientationInterpolator38 = createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "Fish_fin_R-ROT-INTERP";
OrientationInterpolator38.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator38.keyValue = new MFRotation(new float[-0.742578,0.490286,-0.456287,3.094,-0.680792,0.574893,-0.453895,3.193,-0.632455,0.631355,-0.448768,3.262,0.613219,-0.65222,0.445614,2.996,-0.780056,0.434575,-0.450175,3.021,-0.889261,0.179792,-0.420582,2.765,-0.853471,0.27659,-0.441685,2.869,-0.803604,0.386602,-0.452503,2.981,-0.742578,0.490286,-0.456287,3.094]);
Transform37.children = new MFNode();

Transform37.children[0] = OrientationInterpolator38;

Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.diffuseColor = new SFColor(new float[1,1,1]);
Material41.shininess = 0.25;
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.DEF = "Fish_fin_R-FACES";
IndexedFaceSet42.solid = False;
IndexedFaceSet42.creaseAngle = 3;
IndexedFaceSet42.colorIndex = new MFInt32(new int[0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]);
IndexedFaceSet42.coordIndex = new MFInt32(new int[0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]);
Color Color43 = createNode("Color");
Color43.color = new MFColor(new float[0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471]);
IndexedFaceSet42.color = Color43;

Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.DEF = "Fish_fin_R-COORD";
Coordinate44.point = new MFVec3f(new float[-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869]);
IndexedFaceSet42.coord = Coordinate44;

Shape39.geometry = IndexedFaceSet42;

Transform37.child[1] = Shape39;

Transform12.children[5] = Transform37;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "Fish_Jaw-ROOT";
Transform45.translation = new SFVec3f(new float[0,0.5783,0.2942]);
Transform45.rotation = new SFRotation(new float[-1,0,0,0.2631]);
Transform45.scale = new SFVec3f(new float[1,1.188,0.5]);
PositionInterpolator PositionInterpolator46 = createNode("PositionInterpolator");
PositionInterpolator46.DEF = "Fish_Jaw-POS-INTERP";
PositionInterpolator46.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator46.keyValue = new MFVec3f(new float[0,0.5783,0.2942,0,0.5785,0.2948,0,0.5745,0.2802,0,0.5679,0.2594,0,0.5749,0.2815,0,0.5825,0.3119,0,0.5872,0.3364,0,0.5863,0.3308,0,0.5783,0.2942]);
Transform45.children = new MFNode();

Transform45.children[0] = PositionInterpolator46;

OrientationInterpolator OrientationInterpolator47 = createNode("OrientationInterpolator");
OrientationInterpolator47.DEF = "Fish_Jaw-ROT-INTERP";
OrientationInterpolator47.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator47.keyValue = new MFRotation(new float[-1,0,0,0.2631,-1,0,0,0.2618,-1,0,0,0.2945,-1,0,0,0.3416,-1,0,0,0.2915,-1,0,0,0.224,-1,0,0,0.170099,-1,0,0,0.182399,-1,0,0,0.2631]);
Transform45.children[1] = OrientationInterpolator47;

Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.diffuseColor = new SFColor(new float[1,1,1]);
Material50.shininess = 0.25;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.DEF = "Fish_Jaw-FACES";
IndexedFaceSet51.creaseAngle = 3;
IndexedFaceSet51.colorIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,8,15,9,-1,9,16,10,-1,10,16,11,-1,16,17,11,-1,12,18,19,-1,12,19,13,-1,13,19,14,-1,14,15,8,-1,0,4,5,-1,4,11,5,-1,5,11,12,-1,12,11,17,-1,17,18,12,-1]);
IndexedFaceSet51.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,8,15,9,-1,9,16,10,-1,10,16,11,-1,16,17,11,-1,12,18,19,-1,12,19,13,-1,13,19,14,-1,14,15,8,-1,0,4,5,-1,4,11,5,-1,5,11,12,-1,12,11,17,-1,17,18,12,-1]);
Color Color52 = createNode("Color");
Color52.color = new MFColor(new float[1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,0.5176,0.1098,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,0.5176,0.1098,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0]);
IndexedFaceSet51.color = Color52;

Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.DEF = "Fish_Jaw-COORD";
Coordinate53.point = new MFVec3f(new float[0,0.7757,0,0.0072,0.6339,-0.5128,-0.4619,0.4526,-0.4281,-0.5485,0.5485,0,-0.2274,0.5475,0.3934,0.2318,0.5495,0.3825,0.5485,0.5485,0,0.4457,0.4526,-0.4281,0.03296,0.417,-0.1017,-0.5485,0,-0.5485,-0.7757,0,0,-0.325,-0.001422,0.5563,0.3243,0.001427,0.5408,0.7757,0,0,0.5485,0,-0.5485,-0.001625,-0.5596,-0.2906,-0.5485,-0.5485,0,-0.388,-0.5295,0.2488,0.3725,-0.5354,0.2824,0.5485,-0.5485,0]);
IndexedFaceSet51.coord = Coordinate53;

Shape48.geometry = IndexedFaceSet51;

Transform45.child[2] = Shape48;

Transform Transform54 = createNode("Transform");
Transform54.DEF = "Fish_tooth_R-ROOT";
Transform54.translation = new SFVec3f(new float[-0.176,0.5341,-0.4354]);
Transform54.rotation = new SFRotation(new float[-0.96266,-0.104596,0.24969,1.449]);
Transform54.scale = new SFVec3f(new float[1,2,0.8417]);
Transform54.scaleOrientation = new SFRotation(new float[-0.738145,0.405825,-0.538933,0.2442]);
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.diffuseColor = new SFColor(new float[1,1,1]);
Material57.shininess = 0.25;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.DEF = "Fish_tooth_R-FACES";
IndexedFaceSet58.solid = False;
IndexedFaceSet58.creaseAngle = 3;
IndexedFaceSet58.colorIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1]);
IndexedFaceSet58.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1]);
Color Color59 = createNode("Color");
Color59.color = new MFColor(new float[0.7804,0.4392,0,0.7804,0.4392,0,1,1,1,1,1,1]);
IndexedFaceSet58.color = Color59;

Coordinate Coordinate60 = createNode("Coordinate");
Coordinate60.DEF = "Fish_tooth_R-COORD";
Coordinate60.point = new MFVec3f(new float[-0.07413,0,0,0.07413,0,0,-0.07413,0.1322,0,0.07413,0.1322,0]);
IndexedFaceSet58.coord = Coordinate60;

Shape55.geometry = IndexedFaceSet58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform45.children[3] = Transform54;

Transform Transform61 = createNode("Transform");
Transform61.DEF = "Fish_tooth_L-ROOT";
Transform61.translation = new SFVec3f(new float[0.1348,0.5467,-0.4041]);
Transform61.rotation = new SFRotation(new float[-0.953377,0.186195,-0.237494,1.438]);
Transform61.scale = new SFVec3f(new float[1,2,0.8417]);
Transform61.scaleOrientation = new SFRotation(new float[-0.695969,-0.695969,0.176792,0.2577]);
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Material64.shininess = 0.25;
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

IndexedFaceSet IndexedFaceSet65 = createNode("IndexedFaceSet");
IndexedFaceSet65.DEF = "Fish_tooth_L-FACES";
IndexedFaceSet65.solid = False;
IndexedFaceSet65.creaseAngle = 3;
IndexedFaceSet65.colorIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1]);
IndexedFaceSet65.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1]);
Color Color66 = createNode("Color");
Color66.color = new MFColor(new float[0.7804,0.4392,0,0.7804,0.4392,0,1,1,1,1,1,1]);
IndexedFaceSet65.color = Color66;

Coordinate Coordinate67 = createNode("Coordinate");
Coordinate67.DEF = "Fish_tooth_L-COORD";
Coordinate67.point = new MFVec3f(new float[-0.09913,0,0,0.09913,0,0,-0.09913,0.1822,0,0.09913,0.1822,0]);
IndexedFaceSet65.coord = Coordinate67;

Shape62.geometry = IndexedFaceSet65;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Transform45.children[4] = Transform61;

Transform12.children[6] = Transform45;

Transform Transform68 = createNode("Transform");
Transform68.DEF = "Fish_eyebag_R2-ROOT";
Transform68.translation = new SFVec3f(new float[-0.2477,0.592,-0.3411]);
Transform68.rotation = new SFRotation(new float[-0.721002,-0.150001,0.676502,0.5966]);
Transform68.scaleOrientation = new SFRotation(new float[-0.752589,0.65849,0,0.0950596]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.diffuseColor = new SFColor(new float[1,1,1]);
Material71.shininess = 0.25;
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

IndexedFaceSet IndexedFaceSet72 = createNode("IndexedFaceSet");
IndexedFaceSet72.DEF = "Fish_eyebag_R2-FACES";
IndexedFaceSet72.creaseAngle = 3;
IndexedFaceSet72.colorIndex = new MFInt32(new int[0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]);
IndexedFaceSet72.coordIndex = new MFInt32(new int[0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]);
Color Color73 = createNode("Color");
Color73.color = new MFColor(new float[0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0]);
IndexedFaceSet72.color = Color73;

Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.DEF = "Fish_eyebag_R2-COORD";
Coordinate74.point = new MFVec3f(new float[-0.006808,-0.08231,-0.2931,0,0.07093,-0.1838,0,0,-0.1128,0.1648,-0.03405,-0.196,0.1299,0.07093,-0.1299,0.07979,0,-0.07979,0.2615,-0.01672,-0.007798,0.1838,0.07093,0,0.1128,0,0,0.1784,-0.02396,0.1689,0.1299,0.07093,0.1299,0.07979,0,0.07979,0.06418,0.002961,0.2561,0,0.07093,0.1838,0,0,0.1128,-0.1801,0,0.1801,-0.1299,0.07093,0.1299,-0.07979,0,0.07979,-0.283,-0.04801,-0.02239,-0.1838,0.07093,0,-0.1128,0,0,-0.2029,-0.0565,-0.2065,-0.1299,0.07093,-0.1299,-0.07979,0,-0.07979]);
IndexedFaceSet72.coord = Coordinate74;

Shape69.geometry = IndexedFaceSet72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform12.children[7] = Transform68;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "Fish_eyebag_L2-ROOT";
Transform75.translation = new SFVec3f(new float[0.279,0.5864,-0.3411]);
Transform75.rotation = new SFRotation(new float[-0.854353,0.112494,-0.507372,0.5078]);
Transform75.scaleOrientation = new SFRotation(new float[-0.390791,-0.920479,0,0.3339]);
Shape Shape76 = createNode("Shape");
Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.diffuseColor = new SFColor(new float[1,1,1]);
Material78.shininess = 0.25;
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

IndexedFaceSet IndexedFaceSet79 = createNode("IndexedFaceSet");
IndexedFaceSet79.DEF = "Fish_eyebag_L2-FACES";
IndexedFaceSet79.creaseAngle = 3;
IndexedFaceSet79.colorIndex = new MFInt32(new int[0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]);
IndexedFaceSet79.coordIndex = new MFInt32(new int[0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]);
Color Color80 = createNode("Color");
Color80.color = new MFColor(new float[0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0]);
IndexedFaceSet79.color = Color80;

Coordinate Coordinate81 = createNode("Coordinate");
Coordinate81.DEF = "Fish_eyebag_L2-COORD";
Coordinate81.point = new MFVec3f(new float[-0.07863,-0.1193,-0.3083,0,0.07093,-0.1838,0,0,-0.1128,0.1764,-0.07652,-0.1929,0.1299,0.07093,-0.1299,0.07979,0,-0.07979,0.2664,-0.1297,-0.0212,0.1838,0.07093,0,0.1128,0,0,0.2249,-0.04408,0.1782,0.1299,0.07093,0.1299,0.07979,0,0.07979,0.0268,-0.02627,0.2698,0,0.07093,0.1838,0,0,0.1128,-0.1801,0,0.1801,-0.1299,0.07093,0.1299,-0.07979,0,0.07979,-0.2577,-0.001811,0.00967,-0.1838,0.07093,0,-0.1128,0,0,-0.1941,-0.01375,-0.1532,-0.1299,0.07093,-0.1299,-0.07979,0,-0.07979]);
IndexedFaceSet79.coord = Coordinate81;

Shape76.geometry = IndexedFaceSet79;

Transform75.child = new undefined();

Transform75.child[0] = Shape76;

Transform12.children[8] = Transform75;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "Fish_fin_T-ROOT";
Transform82.translation = new SFVec3f(new float[0.001723,-0.02606,-0.7095]);
Transform82.rotation = new SFRotation(new float[-0.970745,0.21191,0.112905,0.9946]);
OrientationInterpolator OrientationInterpolator83 = createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "Fish_fin_T-ROT-INTERP";
OrientationInterpolator83.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
OrientationInterpolator83.keyValue = new MFRotation(new float[-0.970745,0.21191,0.112905,0.9946,-0.974006,0.192001,0.120201,1.012,-0.998335,0.0440315,0.0372613,0.9992,-0.993332,-0.104503,-0.0486916,1.009,-0.97294,-0.204208,-0.108104,1.028,-0.969013,-0.217003,-0.118002,1.029,-0.992327,-0.108003,-0.0601817,0.9994,-0.997094,0.0678296,0.0346898,0.9826,-0.970745,0.21191,0.112905,0.9946]);
Transform82.children = new MFNode();

Transform82.children[0] = OrientationInterpolator83;

Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Material86.diffuseColor = new SFColor(new float[1,1,1]);
Material86.shininess = 0.25;
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

IndexedFaceSet IndexedFaceSet87 = createNode("IndexedFaceSet");
IndexedFaceSet87.DEF = "Fish_fin_T-FACES";
IndexedFaceSet87.solid = False;
IndexedFaceSet87.creaseAngle = 3;
IndexedFaceSet87.colorIndex = new MFInt32(new int[0,1,3,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1,4,2,5,-1,2,0,3,-1]);
IndexedFaceSet87.coordIndex = new MFInt32(new int[0,1,3,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1,4,2,5,-1,2,0,3,-1]);
Color Color88 = createNode("Color");
Color88.color = new MFColor(new float[0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471]);
IndexedFaceSet87.color = Color88;

Coordinate Coordinate89 = createNode("Coordinate");
Coordinate89.DEF = "Fish_fin_T-COORD";
Coordinate89.point = new MFVec3f(new float[-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869]);
IndexedFaceSet87.coord = Coordinate89;

Shape84.geometry = IndexedFaceSet87;

Transform82.child[1] = Shape84;

Transform12.children[9] = Transform82;

Transform Transform90 = createNode("Transform");
Transform90.DEF = "Fish_eyeball_R-ROOT";
Transform90.translation = new SFVec3f(new float[-0.2795,0.7001,-0.3883]);
Transform90.rotation = new SFRotation(new float[-0.493215,-0.391712,0.776724,0.4104]);
Transform90.scaleOrientation = new SFRotation(new float[0.794274,0.433641,-0.42554,0.032857]);
Shape Shape91 = createNode("Shape");
Appearance Appearance92 = createNode("Appearance");
Material Material93 = createNode("Material");
Material93.diffuseColor = new SFColor(new float[1,1,1]);
Material93.shininess = 0.25;
Appearance92.material = Material93;

Shape91.appearance = Appearance92;

IndexedFaceSet IndexedFaceSet94 = createNode("IndexedFaceSet");
IndexedFaceSet94.DEF = "Fish_eyeball_R-FACES";
IndexedFaceSet94.creaseAngle = 3;
IndexedFaceSet94.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate95 = createNode("Coordinate");
Coordinate95.DEF = "Fish_eyeball_R-COORD";
Coordinate95.point = new MFVec3f(new float[0,0.1761,0,0,0.08806,-0.1525,-0.1321,0.08806,-0.07626,-0.1321,0.08806,0.07626,0,0.08806,0.1525,0.1321,0.08806,0.07626,0.1321,0.08806,-0.07626,0,-0.08806,-0.1525,-0.1321,-0.08806,-0.07626,-0.1321,-0.08806,0.07626,0,-0.08806,0.1525,0.1321,-0.08806,0.07626,0.1321,-0.08806,-0.07626,0,-0.1761,0]);
IndexedFaceSet94.coord = Coordinate95;

Shape91.geometry = IndexedFaceSet94;

Transform90.child = new undefined();

Transform90.child[0] = Shape91;

Billboard Billboard96 = createNode("Billboard");
Billboard Billboard97 = createNode("Billboard");
Billboard97.axisOfRotation = new SFVec3f(new float[1,0,0]);
Transform Transform98 = createNode("Transform");
Transform98.DEF = "Fish_pupil_R-ROOT";
Transform98.translation = new SFVec3f(new float[0,0,0.1435]);
Transform98.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform98.scaleOrientation = new SFRotation(new float[0.812896,0.111699,0.571597,0.0948788]);
Shape Shape99 = createNode("Shape");
Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material101.shininess = 0.25;
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

IndexedFaceSet IndexedFaceSet102 = createNode("IndexedFaceSet");
IndexedFaceSet102.DEF = "Fish_pupil_R-FACES";
IndexedFaceSet102.creaseAngle = 3;
IndexedFaceSet102.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1]);
Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.DEF = "Fish_pupil_R-COORD";
Coordinate103.point = new MFVec3f(new float[0,0.04612,0,0,0.01425,-0.04386,-0.04172,0.01425,-0.01355,-0.02578,0.01425,0.03549,0.02578,0.01425,0.03549,0.04172,0.01425,-0.01355]);
IndexedFaceSet102.coord = Coordinate103;

Shape99.geometry = IndexedFaceSet102;

Transform98.child = new undefined();

Transform98.child[0] = Shape99;

Billboard97.children = new MFNode();

Billboard97.children[0] = Transform98;

Billboard96.children = new MFNode();

Billboard96.children[0] = Billboard97;

Transform90.children[1] = Billboard96;

Transform12.children[10] = Transform90;

Transform Transform104 = createNode("Transform");
Transform104.DEF = "Fish_eyeball_L-ROOT";
Transform104.translation = new SFVec3f(new float[0.3008,0.7041,-0.401]);
Transform104.rotation = new SFRotation(new float[-0.385014,-0.409615,0.827031,0.6245]);
Transform104.scaleOrientation = new SFRotation(new float[-0.189892,0.594875,0.781067,0.6771]);
Shape Shape105 = createNode("Shape");
Appearance Appearance106 = createNode("Appearance");
Material Material107 = createNode("Material");
Material107.diffuseColor = new SFColor(new float[1,1,1]);
Material107.shininess = 0.25;
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

IndexedFaceSet IndexedFaceSet108 = createNode("IndexedFaceSet");
IndexedFaceSet108.USE = "Fish_eyeball_R-FACES";
Shape105.geometry = IndexedFaceSet108;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

Billboard Billboard109 = createNode("Billboard");
Billboard109.axisOfRotation = new SFVec3f(new float[1,0,0]);
Billboard Billboard110 = createNode("Billboard");
Transform Transform111 = createNode("Transform");
Transform111.DEF = "Fish_pupil_L-ROOT";
Transform111.translation = new SFVec3f(new float[0,0,0.1435]);
Transform111.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
Material Material114 = createNode("Material");
Material114.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material114.shininess = 0.25;
Appearance113.material = Material114;

Shape112.appearance = Appearance113;

IndexedFaceSet IndexedFaceSet115 = createNode("IndexedFaceSet");
IndexedFaceSet115.USE = "Fish_pupil_R-FACES";
Shape112.geometry = IndexedFaceSet115;

Transform111.child = new undefined();

Transform111.child[0] = Shape112;

Billboard110.children = new MFNode();

Billboard110.children[0] = Transform111;

Billboard109.children = new MFNode();

Billboard109.children[0] = Billboard110;

Transform104.children[1] = Billboard109;

Transform12.children[11] = Transform104;

Transform9.children[2] = Transform12;

children[1] = Transform9;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "Fish_Dummy_rotate_Y-ROT-INTERP";
ROUTE116.toField = "set_fraction";
children[2] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "Fish_Dummy_rotate_Y-ROT-INTERP";
ROUTE117.fromField = "value_changed";
ROUTE117.toNode = "Fish_Dummy_rotate_Y-ROOT";
ROUTE117.toField = "set_rotation";
children[3] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE118.fromField = "fraction_changed";
ROUTE118.toNode = "Fish_Dummy_rotate_Y-ROT-INTERP";
ROUTE118.toField = "set_fraction";
children[4] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE119.fromField = "fraction_changed";
ROUTE119.toNode = "Fish_body-POS-INTERP";
ROUTE119.toField = "set_fraction";
children[5] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "Fish_body-POS-INTERP";
ROUTE120.fromField = "value_changed";
ROUTE120.toNode = "Fish_body-ROOT";
ROUTE120.toField = "set_translation";
children[6] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE121.fromField = "fraction_changed";
ROUTE121.toNode = "Fish_body-POS-INTERP";
ROUTE121.toField = "set_fraction";
children[7] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE122.fromField = "fraction_changed";
ROUTE122.toNode = "Fish_body-ROT-INTERP";
ROUTE122.toField = "set_fraction";
children[8] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromNode = "Fish_body-ROT-INTERP";
ROUTE123.fromField = "value_changed";
ROUTE123.toNode = "Fish_body-ROOT";
ROUTE123.toField = "set_rotation";
children[9] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE124.fromField = "fraction_changed";
ROUTE124.toNode = "Fish_body-ROT-INTERP";
ROUTE124.toField = "set_fraction";
children[10] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE125.fromField = "fraction_changed";
ROUTE125.toNode = "Fish_fin_L-ROT-INTERP";
ROUTE125.toField = "set_fraction";
children[11] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromNode = "Fish_fin_L-ROT-INTERP";
ROUTE126.fromField = "value_changed";
ROUTE126.toNode = "Fish_fin_L-ROOT";
ROUTE126.toField = "set_rotation";
children[12] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE127.fromField = "fraction_changed";
ROUTE127.toNode = "Fish_fin_L-ROT-INTERP";
ROUTE127.toField = "set_fraction";
children[13] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE128.fromField = "fraction_changed";
ROUTE128.toNode = "Fish_tail-ROT-INTERP";
ROUTE128.toField = "set_fraction";
children[14] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromNode = "Fish_tail-ROT-INTERP";
ROUTE129.fromField = "value_changed";
ROUTE129.toNode = "Fish_tail-ROOT";
ROUTE129.toField = "set_rotation";
children[15] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE130.fromField = "fraction_changed";
ROUTE130.toNode = "Fish_tail-ROT-INTERP";
ROUTE130.toField = "set_fraction";
children[16] = ROUTE130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE131.fromField = "fraction_changed";
ROUTE131.toNode = "Fish_fin_R-ROT-INTERP";
ROUTE131.toField = "set_fraction";
children[17] = ROUTE131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromNode = "Fish_fin_R-ROT-INTERP";
ROUTE132.fromField = "value_changed";
ROUTE132.toNode = "Fish_fin_R-ROOT";
ROUTE132.toField = "set_rotation";
children[18] = ROUTE132;

ROUTE ROUTE133 = createNode("ROUTE");
ROUTE133.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE133.fromField = "fraction_changed";
ROUTE133.toNode = "Fish_fin_R-ROT-INTERP";
ROUTE133.toField = "set_fraction";
children[19] = ROUTE133;

ROUTE ROUTE134 = createNode("ROUTE");
ROUTE134.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE134.fromField = "fraction_changed";
ROUTE134.toNode = "Fish_Jaw-POS-INTERP";
ROUTE134.toField = "set_fraction";
children[20] = ROUTE134;

ROUTE ROUTE135 = createNode("ROUTE");
ROUTE135.fromNode = "Fish_Jaw-POS-INTERP";
ROUTE135.fromField = "value_changed";
ROUTE135.toNode = "Fish_Jaw-ROOT";
ROUTE135.toField = "set_translation";
children[21] = ROUTE135;

ROUTE ROUTE136 = createNode("ROUTE");
ROUTE136.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE136.fromField = "fraction_changed";
ROUTE136.toNode = "Fish_Jaw-POS-INTERP";
ROUTE136.toField = "set_fraction";
children[22] = ROUTE136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE137.fromField = "fraction_changed";
ROUTE137.toNode = "Fish_Jaw-ROT-INTERP";
ROUTE137.toField = "set_fraction";
children[23] = ROUTE137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromNode = "Fish_Jaw-ROT-INTERP";
ROUTE138.fromField = "value_changed";
ROUTE138.toNode = "Fish_Jaw-ROOT";
ROUTE138.toField = "set_rotation";
children[24] = ROUTE138;

ROUTE ROUTE139 = createNode("ROUTE");
ROUTE139.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE139.fromField = "fraction_changed";
ROUTE139.toNode = "Fish_Jaw-ROT-INTERP";
ROUTE139.toField = "set_fraction";
children[25] = ROUTE139;

ROUTE ROUTE140 = createNode("ROUTE");
ROUTE140.fromNode = "Fish_Dummy_rotate_Y-TIMER";
ROUTE140.fromField = "fraction_changed";
ROUTE140.toNode = "Fish_fin_T-ROT-INTERP";
ROUTE140.toField = "set_fraction";
children[26] = ROUTE140;

ROUTE ROUTE141 = createNode("ROUTE");
ROUTE141.fromNode = "Fish_fin_T-ROT-INTERP";
ROUTE141.fromField = "value_changed";
ROUTE141.toNode = "Fish_fin_T-ROOT";
ROUTE141.toField = "set_rotation";
children[27] = ROUTE141;

ROUTE ROUTE142 = createNode("ROUTE");
ROUTE142.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE142.fromField = "fraction_changed";
ROUTE142.toNode = "Fish_fin_T-ROT-INTERP";
ROUTE142.toField = "set_fraction";
children[28] = ROUTE142;

}
