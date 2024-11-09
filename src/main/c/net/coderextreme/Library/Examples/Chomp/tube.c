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

Group Group8 = createNode("Group");
Group Group9 = createNode("Group");
TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "TimeSensor_Innertube-TIMER";
TimeSensor10.cycleInterval = 2;
TimeSensor10.loop = True;
TimeSensor10.startTime = 1;
Group9.children = new MFNode();

Group9.children[0] = TimeSensor10;

Transform Transform11 = createNode("Transform");
Transform11.DEF = "Innertube_boolean-ROOT";
Transform11.translation = new SFVec3f(new float[-0.05191,0,-0.05077]);
TimeSensor TimeSensor12 = createNode("TimeSensor");
TimeSensor12.DEF = "Innertube_boolean-TIMER";
TimeSensor12.cycleInterval = 2;
Transform11.children = new MFNode();

Transform11.children[0] = TimeSensor12;

Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[0,0,0]);
Material15.emissiveColor = new SFColor(new float[0.007843,0.3922,0.6157]);
Material15.shininess = 0;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.DEF = "Innertube_boolean-FACES";
IndexedFaceSet16.colorIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]);
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]);
Color Color17 = createNode("Color");
Color17.color = new MFColor(new float[0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157]);
IndexedFaceSet16.color = Color17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.DEF = "Innertube_boolean-COORD";
Coordinate18.point = new MFVec3f(new float[-2.523,0,2.66,2.605,0,2.66,-2.523,0,-5.753,2.605,0,-5.753,-2.523,1.182,2.66,2.605,1.182,2.66,-2.523,1.182,-5.753,2.605,1.182,-5.753]);
IndexedFaceSet16.coord = Coordinate18;

Shape13.geometry = IndexedFaceSet16;

Transform11.child[1] = Shape13;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "Innertube-ROOT";
Transform19.translation = new SFVec3f(new float[0.05259,-0.002682,0.04626]);
Transform19.rotation = new SFRotation(new float[-0.00217899,0.999995,0.00217899,1.571]);
Transform19.scaleOrientation = new SFRotation(new float[0.834748,-0.4924,-0.24645,0.00573601]);
OrientationInterpolator OrientationInterpolator20 = createNode("OrientationInterpolator");
OrientationInterpolator20.DEF = "Innertube-ROT-INTERP";
OrientationInterpolator20.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator20.keyValue = new MFRotation(new float[-0.00217899,0.999995,0.00217899,1.571,-0.01416,0.999799,0.01416,1.571,-0.021251,0.999548,0.021251,1.571,-0.0153195,0.999765,0.0153195,1.571,-0.00403993,0.999984,0.00403993,1.571,0.00724634,0.999947,-0.00724634,1.571,0.0164405,0.99973,-0.0164405,1.571,0.0214309,0.999541,-0.0214309,1.571,0.0196902,0.999612,-0.0196902,1.571,0.0104999,0.99989,-0.0104999,1.571,-0.00217899,0.999995,0.00217899,1.571]);
Transform19.children = new MFNode();

Transform19.children[0] = OrientationInterpolator20;

Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material23.shininess = 0.25;
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

IndexedFaceSet IndexedFaceSet24 = createNode("IndexedFaceSet");
IndexedFaceSet24.DEF = "Innertube-FACES";
IndexedFaceSet24.creaseAngle = 3;
IndexedFaceSet24.colorIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]);
IndexedFaceSet24.coordIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]);
Color Color25 = createNode("Color");
Color25.color = new MFColor(new float[0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647]);
IndexedFaceSet24.color = Color25;

Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.DEF = "Innertube-COORD";
Coordinate26.point = new MFVec3f(new float[0,0,-2.37,0,0.4114,-2.237,0,0.4114,-1.104,0,0,-0.9704,0,-0.4114,-1.104,0,-0.6657,-1.454,0,-0.6657,-1.887,0,-0.4114,-2.237,1.676,0,-1.676,1.582,0.4114,-1.582,0.7807,0.4114,-0.7807,0.6862,0,-0.6862,0.7807,-0.4114,-0.7807,1.028,-0.6657,-1.028,1.334,-0.6657,-1.334,1.582,-0.4114,-1.582,2.37,0,0,2.237,0.4114,0,1.104,0.4114,0,0.9704,0,0,1.104,-0.4114,0,1.454,-0.6657,0,1.887,-0.6657,0,2.237,-0.4114,0,1.676,0,1.676,1.582,0.4114,1.582,0.7807,0.4114,0.7807,0.6862,0,0.6862,0.7807,-0.4114,0.7807,1.028,-0.6657,1.028,1.334,-0.6657,1.334,1.582,-0.4114,1.582,0,0,2.37,0,0.4114,2.237,0,0.4114,1.104,0,0,0.9704,0,-0.4114,1.104,0,-0.6657,1.454,0,-0.6657,1.887,0,-0.4114,2.237,-1.676,0,1.676,-1.582,0.4114,1.582,-0.7807,0.4114,0.7807,-0.6862,0,0.6862,-0.7807,-0.4114,0.7807,-1.028,-0.6657,1.028,-1.334,-0.6657,1.334,-1.582,-0.4114,1.582,-2.37,0,0,-2.237,0.4114,0,-1.104,0.4114,0,-0.9704,0,0,-1.104,-0.4114,0,-1.454,-0.6657,0,-1.887,-0.6657,0,-2.237,-0.4114,0,-1.676,0,-1.676,-1.582,0.4114,-1.582,-0.7807,0.4114,-0.7807,-0.6862,0,-0.6862,-0.7807,-0.4114,-0.7807,-1.028,-0.6657,-1.028,-1.334,-0.6657,-1.334,-1.582,-0.4114,-1.582]);
IndexedFaceSet24.coord = Coordinate26;

Shape21.geometry = IndexedFaceSet24;

Transform19.child[1] = Shape21;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "Innertube_L_leg-ROOT";
Transform27.translation = new SFVec3f(new float[2.832,-0.4993,-0.8342]);
Transform27.rotation = new SFRotation(new float[0.0107304,-0.00139006,0.999942,0.3562]);
Transform27.scaleOrientation = new SFRotation(new float[0,-0.0296788,-0.999559,0.0631478]);
PositionInterpolator PositionInterpolator28 = createNode("PositionInterpolator");
PositionInterpolator28.DEF = "Innertube_L_leg-POS-INTERP";
PositionInterpolator28.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator28.keyValue = new MFVec3f(new float[2.832,-0.4993,-0.8342,2.897,-0.4733,-0.8304,3.104,-0.3649,-0.8174,3.188,-0.3085,-0.8161,3.216,-0.2875,-0.8233,3.222,-0.2834,-0.8288,3.199,-0.3004,-0.8233,3.167,-0.3234,-0.8193,3.079,-0.3805,-0.8225,2.937,-0.4554,-0.8298,2.832,-0.4993,-0.8342]);
Transform27.children = new MFNode();

Transform27.children[0] = PositionInterpolator28;

OrientationInterpolator OrientationInterpolator29 = createNode("OrientationInterpolator");
OrientationInterpolator29.DEF = "Innertube_L_leg-ROT-INTERP";
OrientationInterpolator29.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator29.keyValue = new MFRotation(new float[0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562]);
Transform27.children[1] = OrientationInterpolator29;

Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material32.shininess = 0.25;
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

IndexedFaceSet IndexedFaceSet33 = createNode("IndexedFaceSet");
IndexedFaceSet33.DEF = "Innertube_L_leg-FACES";
IndexedFaceSet33.creaseAngle = 3;
IndexedFaceSet33.colorIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]);
IndexedFaceSet33.coordIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]);
Color Color34 = createNode("Color");
Color34.color = new MFColor(new float[0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549]);
IndexedFaceSet33.color = Color34;

Coordinate Coordinate35 = createNode("Coordinate");
Coordinate35.DEF = "Innertube_L_leg-COORD";
Coordinate35.point = new MFVec3f(new float[0.2432,0,0,0.172,0,-0.172,0,0,-0.2432,-0.172,0,-0.172,-0.2432,0,0,-0.172,0,0.172,0,0,0.2432,0.172,0,0.172,0.2432,1.5,0,0.172,1.5,-0.172,0,1.5,-0.2432,-0.172,1.5,-0.172,-0.2432,1.5,0,-0.172,1.5,0.172,0,1.5,0.2432,0.172,1.5,0.172]);
IndexedFaceSet33.coord = Coordinate35;

Shape30.geometry = IndexedFaceSet33;

Transform27.child[2] = Shape30;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "Innertube_L_flipper-ROOT";
Transform36.translation = new SFVec3f(new float[-0.05453,-1.021,-0.05153]);
Transform36.rotation = new SFRotation(new float[-0.549493,-0.637292,-0.540293,1.897]);
Transform36.scale = new SFVec3f(new float[1,1.343,0.9976]);
Transform36.scaleOrientation = new SFRotation(new float[-0.317708,0.946024,-0.0640316,0.2952]);
PositionInterpolator PositionInterpolator37 = createNode("PositionInterpolator");
PositionInterpolator37.DEF = "Innertube_L_flipper-POS-INTERP";
PositionInterpolator37.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator37.keyValue = new MFVec3f(new float[-0.05453,-1.021,-0.05153,-0.2899,-0.9813,-0.05595,-0.46,-0.915,-0.05577,-0.1708,-1.008,-0.0556,0.4498,-0.9173,-0.02782,0.7328,-0.7119,0.0002907,0.6523,-0.7863,-0.009747,0.5533,-0.8589,-0.0198,0.3896,-0.9445,-0.03199,0.1714,-1.007,-0.04351,-0.05453,-1.021,-0.05153]);
Transform36.children = new MFNode();

Transform36.children[0] = PositionInterpolator37;

OrientationInterpolator OrientationInterpolator38 = createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "Innertube_L_flipper-ROT-INTERP";
OrientationInterpolator38.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator38.keyValue = new MFRotation(new float[-0.549493,-0.637292,-0.540293,1.897,-0.599003,-0.538203,-0.592903,2.012,-0.629609,-0.461607,-0.624909,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378899,1.701,-0.255398,-0.938192,-0.233598,1.627,-0.302699,-0.910597,-0.281399,1.644,-0.352683,-0.874758,-0.332284,1.668,-0.420293,-0.813087,-0.402794,1.72,-0.491279,-0.728069,-0.47808,1.801,-0.549493,-0.637292,-0.540293,1.897]);
Transform36.children[1] = OrientationInterpolator38;

Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.8941,0.8392,0.6]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.DEF = "Innertube_L_flipper-FACES";
IndexedFaceSet42.colorIndex = new MFInt32(new int[8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]);
IndexedFaceSet42.coordIndex = new MFInt32(new int[8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]);
Color Color43 = createNode("Color");
Color43.color = new MFColor(new float[0.6588,0.451,0,0.6588,0.451,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,0.6588,0.451,0,0.6588,0.451,0,0.6588,0.451,0]);
IndexedFaceSet42.color = Color43;

Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.DEF = "Innertube_L_flipper-COORD";
Coordinate44.point = new MFVec3f(new float[-0.3059,0,1.228,0.3059,0,1.228,-0.7598,0.07611,-1.079,0.7598,0.07611,-1.079,-0.3059,0.1522,1.228,0.3059,0.1522,1.228,0,0.07611,-1.258,0,0.1522,1.374,0,0,1.374,0.3598,0.07611,-1.037,-0.4,0.07611,-1.037]);
IndexedFaceSet42.coord = Coordinate44;

Shape39.geometry = IndexedFaceSet42;

Transform36.child[2] = Shape39;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "Innertube_foot_L-ROOT";
Transform45.translation = new SFVec3f(new float[0.009344,0.2285,1.015]);
Transform45.rotation = new SFRotation(new float[0.548102,0.543802,-0.635502,2.018]);
Transform45.scale = new SFVec3f(new float[1.002,1,0.7445]);
Transform45.scaleOrientation = new SFRotation(new float[-0.0369916,0.178508,-0.983243,0.2825]);
Shape Shape46 = createNode("Shape");
Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material48.shininess = 0.25;
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

IndexedFaceSet IndexedFaceSet49 = createNode("IndexedFaceSet");
IndexedFaceSet49.DEF = "Innertube_foot_L-FACES";
IndexedFaceSet49.creaseAngle = 3;
IndexedFaceSet49.colorIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
IndexedFaceSet49.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
Color Color50 = createNode("Color");
Color50.color = new MFColor(new float[0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549]);
IndexedFaceSet49.color = Color50;

Coordinate Coordinate51 = createNode("Coordinate");
Coordinate51.DEF = "Innertube_foot_L-COORD";
Coordinate51.point = new MFVec3f(new float[0,0.2454,0,0.003793,0.1584,-0.1692,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,0.003793,-0.05973,-0.219,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0]);
IndexedFaceSet49.coord = Coordinate51;

Shape46.geometry = IndexedFaceSet49;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform36.children[3] = Transform45;

Transform27.children[3] = Transform36;

Transform19.children[2] = Transform27;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "Innertube_R_leg-ROOT";
Transform52.translation = new SFVec3f(new float[3.222,-0.2834,0.8137]);
Transform52.rotation = new SFRotation(new float[0,0,1,0.6545]);
Transform52.scaleOrientation = new SFRotation(new float[0,-0.00266799,0.999996,0.7854]);
PositionInterpolator PositionInterpolator53 = createNode("PositionInterpolator");
PositionInterpolator53.DEF = "Innertube_R_leg-POS-INTERP";
PositionInterpolator53.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator53.keyValue = new MFVec3f(new float[3.222,-0.2834,0.8137,3.199,-0.3004,0.8192,3.167,-0.3234,0.8232,3.079,-0.3805,0.82,2.937,-0.4554,0.8127,2.832,-0.4993,0.8083,2.897,-0.4733,0.8121,3.104,-0.3649,0.8251,3.188,-0.3085,0.8264,3.216,-0.2875,0.8192,3.222,-0.2835,0.8144]);
Transform52.children = new MFNode();

Transform52.children[0] = PositionInterpolator53;

OrientationInterpolator OrientationInterpolator54 = createNode("OrientationInterpolator");
OrientationInterpolator54.DEF = "Innertube_R_leg-ROT-INTERP";
OrientationInterpolator54.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator54.keyValue = new MFRotation(new float[0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,-0.0001246,-0.001844,0.999998,0.6544]);
Transform52.children[1] = OrientationInterpolator54;

Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material57.shininess = 0.25;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.USE = "Innertube_L_leg-FACES";
Shape55.geometry = IndexedFaceSet58;

Transform52.child[2] = Shape55;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "Innertube_R_flipper-ROOT";
Transform59.translation = new SFVec3f(new float[0.7328,-0.7119,0.00338]);
Transform59.rotation = new SFRotation(new float[-0.255398,-0.938192,-0.233598,1.627]);
Transform59.scale = new SFVec3f(new float[1,1.343,0.9976]);
Transform59.scaleOrientation = new SFRotation(new float[-0.317708,0.946024,-0.0640316,0.2952]);
PositionInterpolator PositionInterpolator60 = createNode("PositionInterpolator");
PositionInterpolator60.DEF = "Innertube_R_flipper-POS-INTERP";
PositionInterpolator60.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator60.keyValue = new MFVec3f(new float[0.7328,-0.7119,0.00338,0.6326,-0.8022,-0.008813,0.5071,-0.8869,-0.02059,0.3354,-0.9651,-0.03218,0.1384,-1.013,-0.04181,-0.06012,-1.021,-0.04859,-0.2865,-0.9823,-0.05284,-0.4595,-0.9153,-0.05269,-0.1708,-1.008,-0.05251,0.4498,-0.9173,-0.02473,0.7328,-0.7119,0.00338]);
Transform59.children = new MFNode();

Transform59.children[0] = PositionInterpolator60;

OrientationInterpolator OrientationInterpolator61 = createNode("OrientationInterpolator");
OrientationInterpolator61.DEF = "Innertube_R_flipper-ROT-INTERP";
OrientationInterpolator61.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator61.keyValue = new MFRotation(new float[-0.255398,-0.938192,-0.233598,1.627,-0.313304,-0.903613,-0.292104,1.648,-0.373312,-0.857628,-0.353712,1.682,-0.439697,-0.792194,-0.423197,1.739,-0.500608,-0.715011,-0.488007,1.814,-0.550788,-0.634986,-0.541688,1.9,-0.598382,-0.539684,-0.592182,2.01,-0.629501,-0.461901,-0.624801,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378899,1.701,-0.255398,-0.938192,-0.233598,1.627]);
Transform59.children[1] = OrientationInterpolator61;

Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[0.8941,0.8392,0.6]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

IndexedFaceSet IndexedFaceSet65 = createNode("IndexedFaceSet");
IndexedFaceSet65.USE = "Innertube_L_flipper-FACES";
Shape62.geometry = IndexedFaceSet65;

Transform59.child[2] = Shape62;

Transform Transform66 = createNode("Transform");
Transform66.DEF = "Innertube_foot_R-ROOT";
Transform66.translation = new SFVec3f(new float[0.000116,0.2244,0.9932]);
Transform66.rotation = new SFRotation(new float[0.552227,0.536026,-0.638531,2.029]);
Transform66.scale = new SFVec3f(new float[1.002,1,0.7445]);
Transform66.scaleOrientation = new SFRotation(new float[-0.102804,0.168407,-0.980342,0.2838]);
Shape Shape67 = createNode("Shape");
Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Material69.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material69.shininess = 0.25;
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

IndexedFaceSet IndexedFaceSet70 = createNode("IndexedFaceSet");
IndexedFaceSet70.DEF = "Innertube_foot_R-FACES";
IndexedFaceSet70.creaseAngle = 3;
IndexedFaceSet70.colorIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
IndexedFaceSet70.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
Color Color71 = createNode("Color");
Color71.color = new MFColor(new float[0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549]);
IndexedFaceSet70.color = Color71;

Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.DEF = "Innertube_foot_R-COORD";
Coordinate72.point = new MFVec3f(new float[0,0.2454,0,-0.04862,0.1547,-0.1776,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,-0.04862,-0.06344,-0.2273,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0]);
IndexedFaceSet70.coord = Coordinate72;

Shape67.geometry = IndexedFaceSet70;

Transform66.child = new undefined();

Transform66.child[0] = Shape67;

Transform59.children[3] = Transform66;

Transform52.children[3] = Transform59;

Transform19.children[3] = Transform52;

Transform Transform73 = createNode("Transform");
Transform73.DEF = "Innertube_Dummy-ROOT";
Transform73.translation = new SFVec3f(new float[-0.004756,-0.7784,0.073]);
Transform73.rotation = new SFRotation(new float[0.554691,-0.554691,0.62019,2.031]);
Transform73.scaleOrientation = new SFRotation(new float[0.745084,-0.0868981,0.661286,0.1436]);
OrientationInterpolator OrientationInterpolator74 = createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "Innertube_Dummy-ROT-INTERP";
OrientationInterpolator74.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator74.keyValue = new MFRotation(new float[0.554691,-0.554691,0.62019,2.031,0.550539,-0.550539,0.627545,2.021,0.559636,-0.559636,0.61124,2.044,0.569582,-0.569582,0.592581,2.072,0.578481,-0.578481,0.575081,2.098,0.584818,-0.584818,0.562117,2.117,0.587209,-0.587209,0.557109,2.125,0.583712,-0.583712,0.564412,2.114,0.575075,-0.575075,0.581874,2.088,0.564197,-0.564197,0.602797,2.057,0.554691,-0.554691,0.62019,2.031]);
Transform73.children = new MFNode();

Transform73.children[0] = OrientationInterpolator74;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "Innertube_L_butt-ROOT";
Transform75.translation = new SFVec3f(new float[-0.4121,0.006308,-0.3326]);
Transform75.rotation = new SFRotation(new float[-0.992815,-0.0846113,-0.0846113,1.578]);
Transform75.scale = new SFVec3f(new float[1.47,1.55,1.893]);
OrientationInterpolator OrientationInterpolator76 = createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "Innertube_L_butt-ROT-INTERP";
OrientationInterpolator76.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator76.keyValue = new MFRotation(new float[-0.992815,-0.0846113,-0.0846113,1.578,-0.997238,-0.052522,-0.052522,1.574,-0.999752,-0.0157592,-0.0157592,1.571,-0.999644,0.0188608,0.0188608,1.571,-0.998018,0.0445008,0.0445008,1.573,-0.997025,0.0545014,0.0545014,1.574,-0.998395,0.0400498,0.0400498,1.572,-0.99997,0.00546484,0.00546484,1.571,-0.998715,-0.0358305,-0.0358305,1.572,-0.995052,-0.0702566,-0.0702566,1.576,-0.992815,-0.0846113,-0.0846113,1.578]);
Transform75.children = new MFNode();

Transform75.children[0] = OrientationInterpolator76;

Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Material79.diffuseColor = new SFColor(new float[0.6902,0.102,0.102]);
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

IndexedFaceSet IndexedFaceSet80 = createNode("IndexedFaceSet");
IndexedFaceSet80.DEF = "Innertube_L_butt-FACES";
IndexedFaceSet80.creaseAngle = 3;
IndexedFaceSet80.colorIndex = new MFInt32(new int[0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]);
IndexedFaceSet80.coordIndex = new MFInt32(new int[0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]);
Color Color81 = createNode("Color");
Color81.color = new MFColor(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet80.color = Color81;

Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.DEF = "Innertube_L_butt-COORD";
Coordinate82.point = new MFVec3f(new float[-0.003811,0.1463,-0.4831,-0.3454,0.1463,-0.3416,-0.4869,0.1463,0,-0.3454,0.1463,0.3416,-0.003811,0.1463,0.4831,0.3378,0.1463,0.3416,0.4793,0.1463,0,0.3378,0.1463,-0.3416,0,-0.3416,-0.3416,-0.2415,-0.3416,-0.2415,-0.3416,-0.3416,0,-0.2415,-0.3416,0.2415,0,-0.3416,0.3416,0.2415,-0.3416,0.2415,0.3416,-0.3416,0,0.2415,-0.3416,-0.2415,0,-0.4831,0]);
IndexedFaceSet80.coord = Coordinate82;

Shape77.geometry = IndexedFaceSet80;

Transform75.child[1] = Shape77;

Transform73.children[1] = Transform75;

Transform Transform83 = createNode("Transform");
Transform83.DEF = "Innertube_R_butt-ROOT";
Transform83.translation = new SFVec3f(new float[0.3298,0.006308,-0.3294]);
Transform83.rotation = new SFRotation(new float[-0.999996,-0.00210999,-0.00210999,1.571]);
Transform83.scale = new SFVec3f(new float[1.47,1.55,1.893]);
Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Material86.diffuseColor = new SFColor(new float[0.6902,0.102,0.102]);
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

IndexedFaceSet IndexedFaceSet87 = createNode("IndexedFaceSet");
IndexedFaceSet87.USE = "Innertube_L_butt-FACES";
Shape84.geometry = IndexedFaceSet87;

Transform83.child = new undefined();

Transform83.child[0] = Shape84;

Transform73.children[2] = Transform83;

Transform19.children[4] = Transform73;

Transform11.children[2] = Transform19;

Group9.children[1] = Transform11;

Group8.children = new MFNode();

Group8.children[0] = Group9;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "Innertube_boolean-TIMER";
ROUTE88.fromField = "fraction_changed";
ROUTE88.toNode = "Innertube-ROT-INTERP";
ROUTE88.toField = "set_fraction";
children[1] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE89.fromField = "fraction_changed";
ROUTE89.toNode = "Innertube-ROT-INTERP";
ROUTE89.toField = "set_fraction";
children[2] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "Innertube_boolean-TIMER";
ROUTE90.fromField = "fraction_changed";
ROUTE90.toNode = "Innertube_L_leg-POS-INTERP";
ROUTE90.toField = "set_fraction";
children[3] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE91.fromField = "fraction_changed";
ROUTE91.toNode = "Innertube_L_leg-POS-INTERP";
ROUTE91.toField = "set_fraction";
children[4] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "Innertube_boolean-TIMER";
ROUTE92.fromField = "fraction_changed";
ROUTE92.toNode = "Innertube_L_leg-ROT-INTERP";
ROUTE92.toField = "set_fraction";
children[5] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE93.fromField = "fraction_changed";
ROUTE93.toNode = "Innertube_L_leg-ROT-INTERP";
ROUTE93.toField = "set_fraction";
children[6] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "Innertube_boolean-TIMER";
ROUTE94.fromField = "fraction_changed";
ROUTE94.toNode = "Innertube_L_flipper-POS-INTERP";
ROUTE94.toField = "set_fraction";
children[7] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE95.fromField = "fraction_changed";
ROUTE95.toNode = "Innertube_L_flipper-POS-INTERP";
ROUTE95.toField = "set_fraction";
children[8] = ROUTE95;

ROUTE ROUTE96 = createNode("ROUTE");
ROUTE96.fromNode = "Innertube_boolean-TIMER";
ROUTE96.fromField = "fraction_changed";
ROUTE96.toNode = "Innertube_L_flipper-ROT-INTERP";
ROUTE96.toField = "set_fraction";
children[9] = ROUTE96;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE97.fromField = "fraction_changed";
ROUTE97.toNode = "Innertube_L_flipper-ROT-INTERP";
ROUTE97.toField = "set_fraction";
children[10] = ROUTE97;

ROUTE ROUTE98 = createNode("ROUTE");
ROUTE98.fromNode = "Innertube_L_flipper-POS-INTERP";
ROUTE98.fromField = "value_changed";
ROUTE98.toNode = "Innertube_L_flipper-ROOT";
ROUTE98.toField = "set_translation";
children[11] = ROUTE98;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromNode = "Innertube_L_flipper-ROT-INTERP";
ROUTE99.fromField = "value_changed";
ROUTE99.toNode = "Innertube_L_flipper-ROOT";
ROUTE99.toField = "set_rotation";
children[12] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromNode = "Innertube_L_leg-POS-INTERP";
ROUTE100.fromField = "value_changed";
ROUTE100.toNode = "Innertube_L_leg-ROOT";
ROUTE100.toField = "set_translation";
children[13] = ROUTE100;

ROUTE ROUTE101 = createNode("ROUTE");
ROUTE101.fromNode = "Innertube_L_leg-ROT-INTERP";
ROUTE101.fromField = "value_changed";
ROUTE101.toNode = "Innertube_L_leg-ROOT";
ROUTE101.toField = "set_rotation";
children[14] = ROUTE101;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromNode = "Innertube_boolean-TIMER";
ROUTE102.fromField = "fraction_changed";
ROUTE102.toNode = "Innertube_R_leg-POS-INTERP";
ROUTE102.toField = "set_fraction";
children[15] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE103.fromField = "fraction_changed";
ROUTE103.toNode = "Innertube_R_leg-POS-INTERP";
ROUTE103.toField = "set_fraction";
children[16] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "Innertube_boolean-TIMER";
ROUTE104.fromField = "fraction_changed";
ROUTE104.toNode = "Innertube_R_leg-ROT-INTERP";
ROUTE104.toField = "set_fraction";
children[17] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE105.fromField = "fraction_changed";
ROUTE105.toNode = "Innertube_R_leg-ROT-INTERP";
ROUTE105.toField = "set_fraction";
children[18] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "Innertube_boolean-TIMER";
ROUTE106.fromField = "fraction_changed";
ROUTE106.toNode = "Innertube_R_flipper-POS-INTERP";
ROUTE106.toField = "set_fraction";
children[19] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE107.fromField = "fraction_changed";
ROUTE107.toNode = "Innertube_R_flipper-POS-INTERP";
ROUTE107.toField = "set_fraction";
children[20] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromNode = "Innertube_boolean-TIMER";
ROUTE108.fromField = "fraction_changed";
ROUTE108.toNode = "Innertube_R_flipper-ROT-INTERP";
ROUTE108.toField = "set_fraction";
children[21] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE109.fromField = "fraction_changed";
ROUTE109.toNode = "Innertube_R_flipper-ROT-INTERP";
ROUTE109.toField = "set_fraction";
children[22] = ROUTE109;

ROUTE ROUTE110 = createNode("ROUTE");
ROUTE110.fromNode = "Innertube_R_flipper-POS-INTERP";
ROUTE110.fromField = "value_changed";
ROUTE110.toNode = "Innertube_R_flipper-ROOT";
ROUTE110.toField = "set_translation";
children[23] = ROUTE110;

ROUTE ROUTE111 = createNode("ROUTE");
ROUTE111.fromNode = "Innertube_R_flipper-ROT-INTERP";
ROUTE111.fromField = "value_changed";
ROUTE111.toNode = "Innertube_R_flipper-ROOT";
ROUTE111.toField = "set_rotation";
children[24] = ROUTE111;

ROUTE ROUTE112 = createNode("ROUTE");
ROUTE112.fromNode = "Innertube_R_leg-POS-INTERP";
ROUTE112.fromField = "value_changed";
ROUTE112.toNode = "Innertube_R_leg-ROOT";
ROUTE112.toField = "set_translation";
children[25] = ROUTE112;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromNode = "Innertube_R_leg-ROT-INTERP";
ROUTE113.fromField = "value_changed";
ROUTE113.toNode = "Innertube_R_leg-ROOT";
ROUTE113.toField = "set_rotation";
children[26] = ROUTE113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "Innertube_boolean-TIMER";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "Innertube_Dummy-ROT-INTERP";
ROUTE114.toField = "set_fraction";
children[27] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE115.fromField = "fraction_changed";
ROUTE115.toNode = "Innertube_Dummy-ROT-INTERP";
ROUTE115.toField = "set_fraction";
children[28] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "Innertube_boolean-TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "Innertube_L_butt-ROT-INTERP";
ROUTE116.toField = "set_fraction";
children[29] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE117.fromField = "fraction_changed";
ROUTE117.toNode = "Innertube_L_butt-ROT-INTERP";
ROUTE117.toField = "set_fraction";
children[30] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "Innertube_L_butt-ROT-INTERP";
ROUTE118.fromField = "value_changed";
ROUTE118.toNode = "Innertube_L_butt-ROOT";
ROUTE118.toField = "set_rotation";
children[31] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "Innertube_Dummy-ROT-INTERP";
ROUTE119.fromField = "value_changed";
ROUTE119.toNode = "Innertube_Dummy-ROOT";
ROUTE119.toField = "set_rotation";
children[32] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "Innertube-ROT-INTERP";
ROUTE120.fromField = "value_changed";
ROUTE120.toNode = "Innertube-ROOT";
ROUTE120.toField = "set_rotation";
children[33] = ROUTE120;

}
