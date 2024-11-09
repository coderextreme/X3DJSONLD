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
meta3.content = "Mon, 09 Nov 2015 13:19:34 GMT";
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
meta6.content = "Mon, 09 Nov 2015 13:19:34 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
Group Group9 = createNode("Group");
TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "TimeSensor_gullswim-TIMER";
TimeSensor10.cycleInterval = 2.867;
TimeSensor10.loop = True;
TimeSensor10.startTime = 1;
Group9.children = new MFNode();

Group9.children[0] = TimeSensor10;

Script Script11 = createNode("Script");
Script11.DEF = "TimeSensor_gullswim-SCRIPT";
field field12 = createNode("field");
field12.name = "fractionOut";
field12.accessType = "outputOnly";
field12.type = "SFFloat";
Script11.field = new MFNode();

Script11.field[0] = field12;

field field13 = createNode("field");
field13.name = "fractionIn";
field13.accessType = "inputOnly";
field13.type = "SFFloat";
Script11.field[1] = field13;


Script11.setSourceCode(`javascript:\n"+
"    function fractionIn(i) {\n"+
"    fractionOut = 0.9773 * i + 0.02273;\n"+
"  }`)
Group9.children[1] = Script11;

Transform Transform14 = createNode("Transform");
Transform14.DEF = "Seagull_Wake-ROOT";
Transform14.translation = new SFVec3f(new float[-0.609,0.001503,-0.1034]);
Transform14.rotation = new SFRotation(new float[-1,0,0,3.142]);
Transform14.scaleOrientation = new SFRotation(new float[0.151899,0.988396,0,0.264]);
TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "Seagull_Wake-TIMER";
TimeSensor15.cycleInterval = 2.933;
Transform14.children = new MFNode();

Transform14.children[0] = TimeSensor15;

PositionInterpolator PositionInterpolator16 = createNode("PositionInterpolator");
PositionInterpolator16.DEF = "Seagull_Wake-POS-INTERP";
PositionInterpolator16.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[-0.609,0.001503,-0.1034,-0.609,0.005823,-0.1034,-0.609,0.03287,-0.1034,-0.609,0.07513,-0.1034,-0.609,0.125,-0.1034,-0.609,0.1749,-0.1034,-0.609,0.2171,-0.1034,-0.609,0.2442,-0.1034,-0.609,0.2485,-0.1034,-0.609,0.2282,-0.1034,-0.609,0.1902,-0.1034,-0.609,0.142,-0.1034,-0.609,0.09128,-0.1034,-0.609,0.04564,-0.1034,-0.609,0.01268,-0.1034,-0.609,0.001503,-0.1034]);
Transform14.children[1] = PositionInterpolator16;

Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.diffuseColor = new SFColor(new float[0,0,0]);
Material19.emissiveColor = new SFColor(new float[0.007843,0.3922,0.6157]);
Material19.shininess = 0;
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

IndexedFaceSet IndexedFaceSet20 = createNode("IndexedFaceSet");
IndexedFaceSet20.DEF = "Seagull_Wake-FACES";
IndexedFaceSet20.colorIndex = new MFInt32(new int[3,2,6,-1,7,0,6,-1,12,5,2,-1,20,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,10,7,6,-1,10,5,9,-1,7,11,0,-1,5,6,2,-1,3,6,0,-1,7,14,11,-1,8,7,10,-1,6,5,10,-1,9,5,13,-1,5,12,13,-1,14,7,8,-1,10,9,17,-1,17,16,10,-1,8,10,16,-1,16,15,8,-1,9,13,17,-1,14,8,15,-1,12,2,1,-1,20,0,11,-1,21,1,20,-1,13,21,14,-1,21,11,14,-1,18,13,14,-1,14,19,18,-1,18,17,13,-1,19,14,15,-1,0,20,4,-1,20,11,21,-1,13,12,21,-1,12,1,21,-1]);
IndexedFaceSet20.coordIndex = new MFInt32(new int[3,2,6,-1,7,0,6,-1,12,5,2,-1,20,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,10,7,6,-1,10,5,9,-1,7,11,0,-1,5,6,2,-1,3,6,0,-1,7,14,11,-1,8,7,10,-1,6,5,10,-1,9,5,13,-1,5,12,13,-1,14,7,8,-1,10,9,17,-1,17,16,10,-1,8,10,16,-1,16,15,8,-1,9,13,17,-1,14,8,15,-1,12,2,1,-1,20,0,11,-1,21,1,20,-1,13,21,14,-1,21,11,14,-1,18,13,14,-1,14,19,18,-1,18,17,13,-1,19,14,15,-1,0,20,4,-1,20,11,21,-1,13,12,21,-1,12,1,21,-1]);
Color Color21 = createNode("Color");
Color21.color = new MFColor(new float[0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.3373,0.7569,1,0.3373,0.7569,1,0.3373,0.7569,1,0.3373,0.7569,1,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.3373,0.7569,1,0.3373,0.7569,1,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157]);
IndexedFaceSet20.color = Color21;

Coordinate Coordinate22 = createNode("Coordinate");
Coordinate22.DEF = "Seagull_Wake-COORD";
Coordinate22.point = new MFVec3f(new float[0.4789,0,0.1587,-0.4416,0,-1.221,-0.4745,0,0.1822,0.0002296,0,0.9222,0,0,0.2742,-0.941,0,0.04356,0.0205,0,1.298,0.8532,0,0.0152,1.643,0,-0.2488,-1.736,0,-0.184,0.02957,0,1.537,0.6059,0,-2.16,-0.7499,0,-2.121,-1.12,0,-3.384,1.051,0,-3.422,1.291,-0.4378,-1.615,0.02957,-0.4378,1.537,-1.372,-0.4378,-1.566,-1.12,-0.4249,-3.384,1.051,-0.4249,-3.422,0.3244,0,-1.224,-0.05201,0,-3.066]);
IndexedFaceSet20.coord = Coordinate22;

Shape17.geometry = IndexedFaceSet20;

Transform14.child[2] = Shape17;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "Seagull-ROOT";
Transform23.translation = new SFVec3f(new float[-0.01265,0.06479,0.0434]);
Transform23.rotation = new SFRotation(new float[-0.999749,0.0149807,0.0166408,1.676]);
Transform23.scale = new SFVec3f(new float[0.1698,0.2668,0.1103]);
PositionInterpolator PositionInterpolator24 = createNode("PositionInterpolator");
PositionInterpolator24.DEF = "Seagull-POS-INTERP";
PositionInterpolator24.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
PositionInterpolator24.keyValue = new MFVec3f(new float[-0.01265,0.06479,0.0434,-0.008224,0.06479,0.04328,0.0003215,0.06479,0.04321,0.007576,0.06479,0.04332,0.01064,0.06479,0.04342,0.006287,0.06479,0.04329,-0.002903,0.06479,0.04321,-0.01112,0.06479,0.04335,-0.01086,0.06479,0.04334,-0.002527,0.06479,0.04321,0.005481,0.06479,0.04328,0.01026,0.06479,0.0434,0.008561,0.06479,0.04335,0.0003394,0.06479,0.04321,-0.00885,0.06479,0.04329,-0.01265,0.06479,0.0434]);
Transform23.children = new MFNode();

Transform23.children[0] = PositionInterpolator24;

OrientationInterpolator OrientationInterpolator25 = createNode("OrientationInterpolator");
OrientationInterpolator25.DEF = "Seagull-ROT-INTERP";
OrientationInterpolator25.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator25.keyValue = new MFRotation(new float[-0.999749,0.0149807,0.0166408,1.676,-0.999906,0.00915006,0.0101601,1.676,-0.999995,-0.00211299,-0.00234699,1.676,-0.999848,-0.0116806,-0.0129706,1.676,-0.999724,-0.0157104,-0.0174504,1.676,-0.999889,-0.00997589,-0.0110799,1.676,-0.999995,0.00213699,0.00237399,1.676,-0.999812,0.0129702,0.0144102,1.676,-0.999822,0.0126203,0.0140203,1.676,-0.999997,0.001641,0.00182299,1.676,-0.999911,-0.0089131,-0.00989911,1.676,-0.999741,-0.0152206,-0.0169007,1.676,-0.999812,-0.0129702,-0.0144102,1.676,-0.999995,-0.00213699,-0.00237299,1.676,-0.999889,0.00997589,0.0110799,1.676,-0.999749,0.0149807,0.0166408,1.676]);
Transform23.children[1] = OrientationInterpolator25;

Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Material28.shininess = 0.25;
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

IndexedFaceSet IndexedFaceSet29 = createNode("IndexedFaceSet");
IndexedFaceSet29.DEF = "Seagull-FACES";
IndexedFaceSet29.creaseAngle = 3;
IndexedFaceSet29.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate30 = createNode("Coordinate");
Coordinate30.DEF = "Seagull-COORD";
Coordinate30.point = new MFVec3f(new float[0,3.719,0,0,2.63,-2.63,-1.859,2.63,-1.859,-2.63,2.63,0,-1.859,2.63,1.859,0,2.63,2.63,1.859,2.63,1.859,2.63,2.63,0,1.859,2.63,-1.859,0,0,-3.719,-2.63,0,-2.63,-3.719,0,0,-2.63,0,2.63,0,0,3.719,2.63,0,2.63,3.719,0,0,2.63,0,-2.63,0,-2.63,-2.63,-1.859,-2.63,-1.859,-2.63,-2.63,0,-1.859,-2.63,1.859,0,-2.63,2.63,1.859,-2.63,1.859,2.63,-2.63,0,1.859,-2.63,-1.859,0,-3.719,0]);
IndexedFaceSet29.coord = Coordinate30;

Shape26.geometry = IndexedFaceSet29;

Transform23.child[2] = Shape26;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "Dummy_Seagull_Thigh_L-ROOT";
Transform31.translation = new SFVec3f(new float[-1.857,0.4801,1.367]);
Transform31.rotation = new SFRotation(new float[0.0522582,0.0522582,-0.997265,1.574]);
Transform31.scale = new SFVec3f(new float[0.4132,0.6494,1]);
Transform31.scaleOrientation = new SFRotation(new float[0,-1,0,0.1047]);
Transform Transform32 = createNode("Transform");
Transform32.DEF = "Seagull_Thigh_L-ROOT";
Transform32.translation = new SFVec3f(new float[-1.832,0.4286,0.2694]);
Transform32.rotation = new SFRotation(new float[-0.555013,-0.555013,0.619614,2.032]);
Transform32.scale = new SFVec3f(new float[1,1,1.7]);
Transform32.scaleOrientation = new SFRotation(new float[0,0,-1,0.0668495]);
PositionInterpolator PositionInterpolator33 = createNode("PositionInterpolator");
PositionInterpolator33.DEF = "Seagull_Thigh_L-POS-INTERP";
PositionInterpolator33.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
PositionInterpolator33.keyValue = new MFVec3f(new float[-1.832,0.4286,0.2694,-1.823,0.4286,0.3345,-1.825,0.4286,0.325,-1.839,0.4286,0.08741,-1.821,0.4286,-0.08178,-1.834,0.4286,0.01766,-1.84,0.4286,0.1317,-1.835,0.4286,0.2389,-1.826,0.4286,0.3179,-1.821,0.4286,0.3487,-1.839,0.4286,0.1795,-1.825,0.4286,-0.05814,-1.83,0.4286,-0.01815,-1.839,0.4286,0.09338,-1.837,0.4286,0.2052,-1.832,0.4286,0.2694]);
Transform32.children = new MFNode();

Transform32.children[0] = PositionInterpolator33;

OrientationInterpolator OrientationInterpolator34 = createNode("OrientationInterpolator");
OrientationInterpolator34.DEF = "Seagull_Thigh_L-ROT-INTERP";
OrientationInterpolator34.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator34.keyValue = new MFRotation(new float[-0.555013,-0.555013,0.619614,2.032,-0.543314,-0.543314,0.640016,2.003,-0.54509,-0.54509,0.636988,2.007,-0.584362,-0.584362,0.563064,2.116,-0.608107,-0.608107,0.510306,2.198,-0.594508,-0.594508,0.541407,2.149,-0.577617,-0.577617,0.576817,2.095,-0.560236,-0.560236,0.61014,2.046,-0.546379,-0.546379,0.634776,2.01,-0.54071,-0.54071,0.644411,1.997,-0.570095,-0.570095,0.591594,2.073,-0.604981,-0.604981,0.517684,2.186,-0.599526,-0.599526,0.530223,2.167,-0.583484,-0.583484,0.564884,2.113,-0.565865,-0.565865,0.599662,2.061,-0.555013,-0.555013,0.619614,2.032]);
Transform32.children[1] = OrientationInterpolator34;

Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Material37.diffuseColor = new SFColor(new float[1,1,1]);
Material37.shininess = 0.25;
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.DEF = "Seagull_Thigh_L-FACES";
IndexedFaceSet38.creaseAngle = 3;
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate39 = createNode("Coordinate");
Coordinate39.DEF = "Seagull_Thigh_L-COORD";
Coordinate39.point = new MFVec3f(new float[0,2.261,0,0,1.599,-1.599,-1.131,1.599,-1.131,-1.599,1.599,0,-1.131,1.599,1.131,0,1.599,1.599,1.131,1.599,1.131,1.599,1.599,0,1.131,1.599,-1.131,0,0,-2.261,-1.599,0,-1.599,-2.261,0,0,-1.599,0,1.599,0,0,2.261,1.599,0,1.599,2.261,0,0,1.599,0,-1.599,0,-1.599,-1.599,-1.131,-1.599,-1.131,-1.599,-1.599,0,-1.131,-1.599,1.131,0,-1.599,1.599,1.131,-1.599,1.131,1.599,-1.599,0,1.131,-1.599,-1.131,0,-2.261,0]);
IndexedFaceSet38.coord = Coordinate39;

Shape35.geometry = IndexedFaceSet38;

Transform32.child[2] = Shape35;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "Dummy_Seagull_Leg_L-ROOT";
Transform40.translation = new SFVec3f(new float[-0.4286,-1.131,1.712]);
Transform40.rotation = new SFRotation(new float[-0.57735,-0.57735,0.57735,4.189]);
Transform40.scale = new SFVec3f(new float[0.5882,1,1]);
Transform40.scaleOrientation = new SFRotation(new float[1,0,0,0.030092]);
Transform Transform41 = createNode("Transform");
Transform41.DEF = "Seagull_leg_L-ROOT";
Transform41.translation = new SFVec3f(new float[-0.05102,0.007231,-0.02075]);
Transform41.rotation = new SFRotation(new float[0.346396,0.346396,0.871791,1.708]);
Transform41.scale = new SFVec3f(new float[1,0.9826,1.018]);
Transform41.scaleOrientation = new SFRotation(new float[-1,0,0,0.2494]);
OrientationInterpolator OrientationInterpolator42 = createNode("OrientationInterpolator");
OrientationInterpolator42.DEF = "Seagull_leg_L-ROT-INTERP";
OrientationInterpolator42.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator42.keyValue = new MFRotation(new float[0.346396,0.346396,0.871791,1.708,0.272405,0.272405,0.922817,1.651,0.319204,0.319204,0.89231,1.685,-0.626196,-0.626196,-0.464497,4.011,-0.698638,-0.698638,-0.154308,3.448,-0.69702,-0.69702,-0.168305,3.475,-0.664392,-0.664392,-0.342296,3.801,0.458866,0.458866,0.760844,1.841,0.286594,0.286594,0.914181,1.66,0.270093,0.270093,0.924175,1.65,0.543872,0.543872,0.639067,2.004,-0.693279,-0.693279,-0.196794,3.53,-0.69523,-0.69523,-0.182508,3.503,-0.660403,-0.660403,-0.357402,3.828,0.492572,0.492572,0.717458,1.897,0.346396,0.346396,0.871791,1.708]);
Transform41.children = new MFNode();

Transform41.children[0] = OrientationInterpolator42;

Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.diffuseColor = new SFColor(new float[1,0.9176,0]);
Material45.shininess = 0.25;
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.DEF = "Seagull_leg_L-FACES";
IndexedFaceSet46.creaseAngle = 3;
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,1,8,7,-1,1,2,8,-1,2,9,8,-1,2,3,9,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,13,7,8,-1,13,8,9,-1,13,9,10,-1,13,10,11,-1,13,11,12,-1,13,12,7,-1]);
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.DEF = "Seagull_leg_L-COORD";
Coordinate47.point = new MFVec3f(new float[0,0,0,0.3363,0,0,0.1682,0,-0.2913,-0.1682,0,-0.2913,-0.3363,0,0,-0.1682,0,0.2913,0.1682,0,0.2913,0.3363,3.878,0,0.1682,3.878,-0.2913,-0.1682,3.878,-0.2913,-0.3363,3.878,0,-0.1682,3.878,0.2913,0.1682,3.878,0.2913,0,3.878,0]);
IndexedFaceSet46.coord = Coordinate47;

Shape43.geometry = IndexedFaceSet46;

Transform41.child[1] = Shape43;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "Seagull_heel_L-ROOT";
Transform48.translation = new SFVec3f(new float[-0.01118,4.034,-0.01929]);
Transform48.rotation = new SFRotation(new float[-1,0,0,1.287]);
Transform48.scale = new SFVec3f(new float[1,1.018,0.9826]);
Transform48.scaleOrientation = new SFRotation(new float[1,0,0,0.773]);
OrientationInterpolator OrientationInterpolator49 = createNode("OrientationInterpolator");
OrientationInterpolator49.DEF = "Seagull_heel_L-ROT-INTERP";
OrientationInterpolator49.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator49.keyValue = new MFRotation(new float[-1,0,0,1.287,-1,0,0,1.399,-1,0,0,1.963,-1,0,0,3.41,-1,0,0,3.83,-1,0,0,2.286,-1,0,0,1.508,-1,0,0,1.3,-1,0,0,1.338,-1,0,0,1.586,-1,0,0,3.119,-1,0,0,3.779,-1,0,0,2.779,-1,0,0,1.638,-1,0,0,1.34,-1,0,0,1.287]);
Transform48.children = new MFNode();

Transform48.children[0] = OrientationInterpolator49;

Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,0.9176,0]);
Material52.shininess = 0.25;
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.DEF = "Seagull_heel_L-FACES";
IndexedFaceSet53.creaseAngle = 3;
IndexedFaceSet53.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.DEF = "Seagull_heel_L-COORD";
Coordinate54.point = new MFVec3f(new float[0,0.48,0,0,0.24,-0.4157,-0.36,0.24,-0.2078,-0.36,0.24,0.2078,0,0.24,0.4157,0.36,0.24,0.2078,0.36,0.24,-0.2078,0,-0.24,-0.4157,-0.36,-0.24,-0.2078,-0.36,-0.24,0.2078,0,-0.24,0.4157,0.36,-0.24,0.2078,0.36,-0.24,-0.2078,0,-0.48,0]);
IndexedFaceSet53.coord = Coordinate54;

Shape50.geometry = IndexedFaceSet53;

Transform48.child[1] = Shape50;

Transform Transform55 = createNode("Transform");
Transform55.DEF = "Seagull_foot_LR-ROOT";
Transform55.translation = new SFVec3f(new float[0.00778,-0.5223,5.095]);
Transform55.rotation = new SFRotation(new float[-0.99627,-0.066098,0.0554783,1.433]);
Transform55.scale = new SFVec3f(new float[1.5,1.526,1.474]);
Transform55.scaleOrientation = new SFRotation(new float[1,0,0,0.632]);
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.8784,0.7765,0.3412]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet59 = createNode("IndexedFaceSet");
IndexedFaceSet59.DEF = "Seagull_foot_LR-FACES";
IndexedFaceSet59.creaseAngle = 3;
IndexedFaceSet59.coordIndex = new MFInt32(new int[0,2,3,-1,0,3,1,-1,0,4,2,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]);
Coordinate Coordinate60 = createNode("Coordinate");
Coordinate60.DEF = "Seagull_foot_LR-COORD";
Coordinate60.point = new MFVec3f(new float[0,3.476,0,0.003385,0.6796,0,1.499,0.6796,0,0,3.45,-0.4106,0.624,0.925,-0.02917]);
IndexedFaceSet59.coord = Coordinate60;

Shape56.geometry = IndexedFaceSet59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform48.children[2] = Transform55;

Transform Transform61 = createNode("Transform");
Transform61.DEF = "Seagull_foot_LL-ROOT";
Transform61.translation = new SFVec3f(new float[-2.201,-0.08551,5.213]);
Transform61.rotation = new SFRotation(new float[-0.991214,0.101301,-0.0850512,1.438]);
Transform61.scale = new SFVec3f(new float[1.5,1.526,1.474]);
Transform61.scaleOrientation = new SFRotation(new float[1,0,0,0.632]);
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[0.8784,0.7765,0.3412]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

IndexedFaceSet IndexedFaceSet65 = createNode("IndexedFaceSet");
IndexedFaceSet65.DEF = "Seagull_foot_LL-FACES";
IndexedFaceSet65.creaseAngle = 3;
IndexedFaceSet65.coordIndex = new MFInt32(new int[0,4,2,-1,0,2,3,-1,3,1,0,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]);
Coordinate Coordinate66 = createNode("Coordinate");
Coordinate66.DEF = "Seagull_foot_LL-COORD";
Coordinate66.point = new MFVec3f(new float[1.493,3.476,0,0.003385,0.6796,0,1.497,0.6939,-0.07582,1.518,3.467,-0.4058,0.7503,0.9574,-0.02974]);
IndexedFaceSet65.coord = Coordinate66;

Shape62.geometry = IndexedFaceSet65;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Transform48.children[3] = Transform61;

Transform41.children[2] = Transform48;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

Transform32.children[3] = Transform40;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

Transform23.children[3] = Transform31;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "Dummy_Seagull_Thigh_R-ROOT";
Transform67.translation = new SFVec3f(new float[1.639,0.4801,1.367]);
Transform67.rotation = new SFRotation(new float[0.0522582,0.0522582,-0.997265,1.574]);
Transform67.scale = new SFVec3f(new float[0.4132,0.6494,1]);
Transform67.scaleOrientation = new SFRotation(new float[0,-1,0,0.1047]);
Transform Transform68 = createNode("Transform");
Transform68.DEF = "Seagull_Thigh_R-ROOT";
Transform68.translation = new SFVec3f(new float[-1.824,-0.136,-0.06297]);
Transform68.rotation = new SFRotation(new float[-0.604981,-0.604981,0.517684,2.186]);
Transform68.scale = new SFVec3f(new float[1,1,1.7]);
Transform68.scaleOrientation = new SFRotation(new float[-0.00001597,0,-1,0.00539324]);
PositionInterpolator PositionInterpolator69 = createNode("PositionInterpolator");
PositionInterpolator69.DEF = "Seagull_Thigh_R-POS-INTERP";
PositionInterpolator69.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
PositionInterpolator69.keyValue = new MFVec3f(new float[-1.824,-0.136,-0.06297,-1.83,-0.136,-0.02197,-1.839,-0.136,0.09238,-1.837,-0.136,0.2071,-1.829,-0.136,0.3001,-1.821,-0.136,0.3503,-1.833,-0.136,0.267,-1.833,-0.136,-0.0001516,-1.825,-0.136,-0.05621,-1.837,-0.136,0.05313,-1.839,-0.136,0.1702,-1.832,-0.136,0.2728,-1.823,-0.136,0.3396,-1.824,-0.136,0.3298,-1.839,-0.136,0.08625,-1.824,-0.136,-0.06297]);
Transform68.children = new MFNode();

Transform68.children[0] = PositionInterpolator69;

OrientationInterpolator OrientationInterpolator70 = createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "Seagull_Thigh_R-ROT-INTERP";
OrientationInterpolator70.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[-0.604981,-0.604981,0.517684,2.186,-0.599526,-0.599526,0.530223,2.167,-0.583484,-0.583484,0.564884,2.113,-0.565865,-0.565865,0.599662,2.061,-0.550322,-0.550322,0.627926,2.02,-0.541383,-0.541383,0.64328,1.998,-0.55598,-0.55598,0.617878,2.035,-0.596595,-0.596595,0.536795,2.156,-0.60408,-0.60408,0.519783,2.183,-0.589133,-0.589133,0.553031,2.131,-0.571696,-0.571696,0.588496,2.078,-0.555013,-0.555013,0.619614,2.032,-0.543314,-0.543314,0.640016,2.003,-0.54509,-0.54509,0.636988,2.007,-0.584362,-0.584362,0.563064,2.116,-0.604981,-0.604981,0.517684,2.186]);
Transform68.children[1] = OrientationInterpolator70;

Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
Material Material73 = createNode("Material");
Material73.diffuseColor = new SFColor(new float[1,1,1]);
Material73.shininess = 0.25;
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

IndexedFaceSet IndexedFaceSet74 = createNode("IndexedFaceSet");
IndexedFaceSet74.USE = "Seagull_Thigh_L-FACES";
Shape71.geometry = IndexedFaceSet74;

Transform68.child[2] = Shape71;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "Dummy_Seagull_Leg_R-ROOT";
Transform75.translation = new SFVec3f(new float[0.136,-1.131,1.712]);
Transform75.rotation = new SFRotation(new float[0.57735,0.57735,-0.57735,2.094]);
Transform75.scale = new SFVec3f(new float[0.5882,1,1]);
Transform75.scaleOrientation = new SFRotation(new float[1,0,0,0.0334468]);
Transform Transform76 = createNode("Transform");
Transform76.DEF = "Seagull_leg_R-ROOT";
Transform76.translation = new SFVec3f(new float[0.03961,-0.02924,0.02399]);
Transform76.rotation = new SFRotation(new float[-0.693279,-0.693279,-0.196794,3.53]);
Transform76.scale = new SFVec3f(new float[1,0.9826,1.018]);
Transform76.scaleOrientation = new SFRotation(new float[-1,0,0,0.2494]);
OrientationInterpolator OrientationInterpolator77 = createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "Seagull_leg_R-ROT-INTERP";
OrientationInterpolator77.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator77.keyValue = new MFRotation(new float[-0.693279,-0.693279,-0.196794,3.53,-0.69523,-0.69523,-0.182508,3.503,-0.660403,-0.660403,-0.357402,3.828,0.492572,0.492572,0.717458,1.897,0.3038,0.3038,0.903001,1.673,0.270203,0.270203,0.924111,1.65,0.429886,0.429886,0.793975,1.8,-0.672729,-0.672729,-0.308013,3.739,-0.698616,-0.698616,-0.154504,3.448,-0.69332,-0.69332,-0.196506,3.53,-0.623085,-0.623085,-0.472789,4.025,0.377005,0.377005,0.846011,1.737,0.273492,0.273492,0.922174,1.652,0.319204,0.319204,0.89231,1.685,-0.626196,-0.626196,-0.464497,4.011,-0.693279,-0.693279,-0.196794,3.53]);
Transform76.children = new MFNode();

Transform76.children[0] = OrientationInterpolator77;

Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Material Material80 = createNode("Material");
Material80.diffuseColor = new SFColor(new float[1,0.9176,0]);
Material80.shininess = 0.25;
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

IndexedFaceSet IndexedFaceSet81 = createNode("IndexedFaceSet");
IndexedFaceSet81.USE = "Seagull_leg_L-FACES";
Shape78.geometry = IndexedFaceSet81;

Transform76.child[1] = Shape78;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "Seagull_heel_R-ROOT";
Transform82.translation = new SFVec3f(new float[0.01347,4.034,0.001056]);
Transform82.rotation = new SFRotation(new float[-1,0,0,3.79]);
Transform82.scale = new SFVec3f(new float[1,1.018,0.9826]);
Transform82.scaleOrientation = new SFRotation(new float[1,0,0,0.773]);
OrientationInterpolator OrientationInterpolator83 = createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "Seagull_heel_R-ROT-INTERP";
OrientationInterpolator83.key = new MFFloat(new float[0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]);
OrientationInterpolator83.keyValue = new MFRotation(new float[-1,0,0,3.79,-1,0,0,2.777,-1,0,0,1.638,-1,0,0,1.353,-1,0,0,1.329,-1,0,0,1.529,-1,0,0,2.683,-1,0,0,3.672,-1,0,0,3.297,-1,0,0,1.882,-1,0,0,1.417,-1,0,0,1.31,-1,0,0,1.44,-1,0,0,2.028,-1,0,0,3.475,-1,0,0,3.79]);
Transform82.children = new MFNode();

Transform82.children[0] = OrientationInterpolator83;

Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Material86.diffuseColor = new SFColor(new float[1,0.9176,0]);
Material86.shininess = 0.25;
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

IndexedFaceSet IndexedFaceSet87 = createNode("IndexedFaceSet");
IndexedFaceSet87.USE = "Seagull_heel_L-FACES";
Shape84.geometry = IndexedFaceSet87;

Transform82.child[1] = Shape84;

Transform Transform88 = createNode("Transform");
Transform88.DEF = "Seagull_foot_RR-ROOT";
Transform88.translation = new SFVec3f(new float[-0.02591,-0.6629,4.973]);
Transform88.rotation = new SFRotation(new float[-0.981125,-0.149704,0.122403,1.422]);
Transform88.scale = new SFVec3f(new float[1.5,1.526,1.474]);
Transform88.scaleOrientation = new SFRotation(new float[1,0,0,0.6058]);
Shape Shape89 = createNode("Shape");
Appearance Appearance90 = createNode("Appearance");
Material Material91 = createNode("Material");
Material91.diffuseColor = new SFColor(new float[0.8784,0.7765,0.3412]);
Appearance90.material = Material91;

Shape89.appearance = Appearance90;

IndexedFaceSet IndexedFaceSet92 = createNode("IndexedFaceSet");
IndexedFaceSet92.DEF = "Seagull_foot_RR-FACES";
IndexedFaceSet92.creaseAngle = 3;
IndexedFaceSet92.coordIndex = new MFInt32(new int[0,2,3,-1,0,3,1,-1,0,4,2,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]);
Coordinate Coordinate93 = createNode("Coordinate");
Coordinate93.DEF = "Seagull_foot_RR-COORD";
Coordinate93.point = new MFVec3f(new float[0,3.476,0,0.003385,0.6796,0,1.499,0.6796,0,0,3.45,-0.4106,0.624,0.925,-0.02917]);
IndexedFaceSet92.coord = Coordinate93;

Shape89.geometry = IndexedFaceSet92;

Transform88.child = new undefined();

Transform88.child[0] = Shape89;

Transform82.children[2] = Transform88;

Transform Transform94 = createNode("Transform");
Transform94.DEF = "Seagull_foot_RL-ROOT";
Transform94.translation = new SFVec3f(new float[-2.228,-0.1134,5.082]);
Transform94.rotation = new SFRotation(new float[-0.989385,0.111298,-0.0934386,1.44]);
Transform94.scale = new SFVec3f(new float[1.5,1.526,1.474]);
Transform94.scaleOrientation = new SFRotation(new float[1,0,0,0.632]);
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.diffuseColor = new SFColor(new float[0.8784,0.7765,0.3412]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

IndexedFaceSet IndexedFaceSet98 = createNode("IndexedFaceSet");
IndexedFaceSet98.DEF = "Seagull_foot_RL-FACES";
IndexedFaceSet98.creaseAngle = 3;
IndexedFaceSet98.coordIndex = new MFInt32(new int[0,4,2,-1,0,2,3,-1,3,1,0,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]);
Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.DEF = "Seagull_foot_RL-COORD";
Coordinate99.point = new MFVec3f(new float[1.493,3.476,0,0.003385,0.6796,0,1.497,0.6939,-0.07582,1.518,3.467,-0.4058,0.7503,0.9574,-0.02974]);
IndexedFaceSet98.coord = Coordinate99;

Shape95.geometry = IndexedFaceSet98;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

Transform82.children[3] = Transform94;

Transform76.children[2] = Transform82;

Transform75.children = new MFNode();

Transform75.children[0] = Transform76;

Transform68.children[3] = Transform75;

Transform67.children = new MFNode();

Transform67.children[0] = Transform68;

Transform23.children[4] = Transform67;

Transform Transform100 = createNode("Transform");
Transform100.DEF = "Dummy_Seagull_Tail-ROOT";
Transform100.translation = new SFVec3f(new float[-0.00128,3.212,0.6723]);
Transform100.rotation = new SFRotation(new float[0.0522582,0.0522582,-0.997265,1.574]);
Transform100.scale = new SFVec3f(new float[0.4132,0.6494,1]);
Transform100.scaleOrientation = new SFRotation(new float[0,-1,0,0.1047]);
Transform Transform101 = createNode("Transform");
Transform101.DEF = "Seagull_tail-ROOT";
Transform101.translation = new SFVec3f(new float[-1.021,0.01607,0.4184]);
Transform101.rotation = new SFRotation(new float[-0.610897,-0.610897,0.503597,2.209]);
Transform101.scale = new SFVec3f(new float[1.11,1.11,1.11]);
Transform101.scaleOrientation = new SFRotation(new float[-0.527693,0.162798,-0.833689,0.3343]);
Shape Shape102 = createNode("Shape");
Appearance Appearance103 = createNode("Appearance");
Material Material104 = createNode("Material");
Material104.diffuseColor = new SFColor(new float[1,1,1]);
Material104.shininess = 0.25;
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

IndexedFaceSet IndexedFaceSet105 = createNode("IndexedFaceSet");
IndexedFaceSet105.DEF = "Seagull_tail-FACES";
IndexedFaceSet105.creaseAngle = 3;
IndexedFaceSet105.coordIndex = new MFInt32(new int[2,3,1,-1,1,5,4,-1,1,3,5,-1,3,2,4,-1,4,5,3,-1,0,4,2,-1,1,0,2,-1,0,1,4,-1]);
Coordinate Coordinate106 = createNode("Coordinate");
Coordinate106.DEF = "Seagull_tail-COORD";
Coordinate106.point = new MFVec3f(new float[-0.7399,0.3406,1.973,0.8892,0.363,2.014,-2.033,0,-1.322,2.033,0,-1.322,-2.033,1.196,-1.322,2.033,1.196,-1.322]);
IndexedFaceSet105.coord = Coordinate106;

Shape102.geometry = IndexedFaceSet105;

Transform101.child = new undefined();

Transform101.child[0] = Shape102;

Transform100.children = new MFNode();

Transform100.children[0] = Transform101;

Transform23.children[5] = Transform100;

Transform Transform107 = createNode("Transform");
Transform107.DEF = "Seagull_Neck-ROOT";
Transform107.translation = new SFVec3f(new float[0.01038,-2.978,0.1783]);
Transform107.rotation = new SFRotation(new float[-0.91916,0.292687,-0.263589,1.55]);
Transform107.scale = new SFVec3f(new float[5.89,9.07,3.748]);
Transform107.scaleOrientation = new SFRotation(new float[-0.179598,-0.982392,-0.0514896,0.568]);
Shape Shape108 = createNode("Shape");
Appearance Appearance109 = createNode("Appearance");
Material Material110 = createNode("Material");
Material110.diffuseColor = new SFColor(new float[1,1,1]);
Material110.shininess = 0.25;
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

IndexedFaceSet IndexedFaceSet111 = createNode("IndexedFaceSet");
IndexedFaceSet111.DEF = "Seagull_Neck-FACES";
IndexedFaceSet111.creaseAngle = 3;
IndexedFaceSet111.coordIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,1,8,7,-1,1,2,8,-1,2,9,8,-1,2,3,9,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,13,7,8,-1,13,8,9,-1,13,9,10,-1,13,10,11,-1,13,11,12,-1,13,12,7,-1]);
Coordinate Coordinate112 = createNode("Coordinate");
Coordinate112.DEF = "Seagull_Neck-COORD";
Coordinate112.point = new MFVec3f(new float[0,0,0,0.1965,0,0,0.09825,0,-0.1702,-0.09825,0,-0.1702,-0.1965,0,0,-0.09825,0,0.1702,0.09825,0,0.1702,0.1965,0.234,0,0.09825,0.234,-0.1702,-0.09825,0.234,-0.1702,-0.1965,0.234,0,-0.09825,0.234,0.1702,0.09825,0.234,0.1702,0,0.234,0]);
IndexedFaceSet111.coord = Coordinate112;

Shape108.geometry = IndexedFaceSet111;

Transform107.child = new undefined();

Transform107.child[0] = Shape108;

Transform23.children[6] = Transform107;

Transform14.children[3] = Transform23;

Group9.children[2] = Transform14;

Group8.children = new MFNode();

Group8.children[0] = Group9;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromNode = "TimeSensor_gullswim-TIMER";
ROUTE113.fromField = "fraction_changed";
ROUTE113.toNode = "TimeSensor_gullswim-SCRIPT";
ROUTE113.toField = "fractionIn";
children[1] = ROUTE113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "Seagull_Wake-TIMER";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "Seagull_Wake-POS-INTERP";
ROUTE114.toField = "set_fraction";
children[2] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE115.fromField = "fractionOut";
ROUTE115.toNode = "Seagull_Wake-POS-INTERP";
ROUTE115.toField = "set_fraction";
children[3] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "Seagull_Wake-TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "Seagull-POS-INTERP";
ROUTE116.toField = "set_fraction";
children[4] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE117.fromField = "fractionOut";
ROUTE117.toNode = "Seagull-POS-INTERP";
ROUTE117.toField = "set_fraction";
children[5] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "Seagull_Wake-TIMER";
ROUTE118.fromField = "fraction_changed";
ROUTE118.toNode = "Seagull-ROT-INTERP";
ROUTE118.toField = "set_fraction";
children[6] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE119.fromField = "fractionOut";
ROUTE119.toNode = "Seagull-ROT-INTERP";
ROUTE119.toField = "set_fraction";
children[7] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "Seagull_Wake-TIMER";
ROUTE120.fromField = "fraction_changed";
ROUTE120.toNode = "Seagull_Thigh_L-POS-INTERP";
ROUTE120.toField = "set_fraction";
children[8] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE121.fromField = "fractionOut";
ROUTE121.toNode = "Seagull_Thigh_L-POS-INTERP";
ROUTE121.toField = "set_fraction";
children[9] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromNode = "Seagull_Wake-TIMER";
ROUTE122.fromField = "fraction_changed";
ROUTE122.toNode = "Seagull_Thigh_L-ROT-INTERP";
ROUTE122.toField = "set_fraction";
children[10] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE123.fromField = "fractionOut";
ROUTE123.toNode = "Seagull_Thigh_L-ROT-INTERP";
ROUTE123.toField = "set_fraction";
children[11] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromNode = "Seagull_Wake-TIMER";
ROUTE124.fromField = "fraction_changed";
ROUTE124.toNode = "Seagull_leg_L-ROT-INTERP";
ROUTE124.toField = "set_fraction";
children[12] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE125.fromField = "fractionOut";
ROUTE125.toNode = "Seagull_leg_L-ROT-INTERP";
ROUTE125.toField = "set_fraction";
children[13] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromNode = "Seagull_Wake-TIMER";
ROUTE126.fromField = "fraction_changed";
ROUTE126.toNode = "Seagull_heel_L-ROT-INTERP";
ROUTE126.toField = "set_fraction";
children[14] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE127.fromField = "fractionOut";
ROUTE127.toNode = "Seagull_heel_L-ROT-INTERP";
ROUTE127.toField = "set_fraction";
children[15] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromNode = "Seagull_heel_L-ROT-INTERP";
ROUTE128.fromField = "value_changed";
ROUTE128.toNode = "Seagull_heel_L-ROOT";
ROUTE128.toField = "set_rotation";
children[16] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromNode = "Seagull_leg_L-ROT-INTERP";
ROUTE129.fromField = "value_changed";
ROUTE129.toNode = "Seagull_leg_L-ROOT";
ROUTE129.toField = "set_rotation";
children[17] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromNode = "Seagull_Thigh_L-POS-INTERP";
ROUTE130.fromField = "value_changed";
ROUTE130.toNode = "Seagull_Thigh_L-ROOT";
ROUTE130.toField = "set_translation";
children[18] = ROUTE130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromNode = "Seagull_Thigh_L-ROT-INTERP";
ROUTE131.fromField = "value_changed";
ROUTE131.toNode = "Seagull_Thigh_L-ROOT";
ROUTE131.toField = "set_rotation";
children[19] = ROUTE131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromNode = "Seagull_Wake-TIMER";
ROUTE132.fromField = "fraction_changed";
ROUTE132.toNode = "Seagull_Thigh_R-POS-INTERP";
ROUTE132.toField = "set_fraction";
children[20] = ROUTE132;

ROUTE ROUTE133 = createNode("ROUTE");
ROUTE133.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE133.fromField = "fractionOut";
ROUTE133.toNode = "Seagull_Thigh_R-POS-INTERP";
ROUTE133.toField = "set_fraction";
children[21] = ROUTE133;

ROUTE ROUTE134 = createNode("ROUTE");
ROUTE134.fromNode = "Seagull_Wake-TIMER";
ROUTE134.fromField = "fraction_changed";
ROUTE134.toNode = "Seagull_Thigh_R-ROT-INTERP";
ROUTE134.toField = "set_fraction";
children[22] = ROUTE134;

ROUTE ROUTE135 = createNode("ROUTE");
ROUTE135.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE135.fromField = "fractionOut";
ROUTE135.toNode = "Seagull_Thigh_R-ROT-INTERP";
ROUTE135.toField = "set_fraction";
children[23] = ROUTE135;

ROUTE ROUTE136 = createNode("ROUTE");
ROUTE136.fromNode = "Seagull_Wake-TIMER";
ROUTE136.fromField = "fraction_changed";
ROUTE136.toNode = "Seagull_leg_R-ROT-INTERP";
ROUTE136.toField = "set_fraction";
children[24] = ROUTE136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE137.fromField = "fractionOut";
ROUTE137.toNode = "Seagull_leg_R-ROT-INTERP";
ROUTE137.toField = "set_fraction";
children[25] = ROUTE137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromNode = "Seagull_Wake-TIMER";
ROUTE138.fromField = "fraction_changed";
ROUTE138.toNode = "Seagull_heel_R-ROT-INTERP";
ROUTE138.toField = "set_fraction";
children[26] = ROUTE138;

ROUTE ROUTE139 = createNode("ROUTE");
ROUTE139.fromNode = "TimeSensor_gullswim-SCRIPT";
ROUTE139.fromField = "fractionOut";
ROUTE139.toNode = "Seagull_heel_R-ROT-INTERP";
ROUTE139.toField = "set_fraction";
children[27] = ROUTE139;

ROUTE ROUTE140 = createNode("ROUTE");
ROUTE140.fromNode = "Seagull_heel_R-ROT-INTERP";
ROUTE140.fromField = "value_changed";
ROUTE140.toNode = "Seagull_heel_R-ROOT";
ROUTE140.toField = "set_rotation";
children[28] = ROUTE140;

ROUTE ROUTE141 = createNode("ROUTE");
ROUTE141.fromNode = "Seagull_leg_R-ROT-INTERP";
ROUTE141.fromField = "value_changed";
ROUTE141.toNode = "Seagull_leg_R-ROOT";
ROUTE141.toField = "set_rotation";
children[29] = ROUTE141;

ROUTE ROUTE142 = createNode("ROUTE");
ROUTE142.fromNode = "Seagull_Thigh_R-POS-INTERP";
ROUTE142.fromField = "value_changed";
ROUTE142.toNode = "Seagull_Thigh_R-ROOT";
ROUTE142.toField = "set_translation";
children[30] = ROUTE142;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromNode = "Seagull_Thigh_R-ROT-INTERP";
ROUTE143.fromField = "value_changed";
ROUTE143.toNode = "Seagull_Thigh_R-ROOT";
ROUTE143.toField = "set_rotation";
children[31] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromNode = "Seagull-POS-INTERP";
ROUTE144.fromField = "value_changed";
ROUTE144.toNode = "Seagull-ROOT";
ROUTE144.toField = "set_translation";
children[32] = ROUTE144;

ROUTE ROUTE145 = createNode("ROUTE");
ROUTE145.fromNode = "Seagull-ROT-INTERP";
ROUTE145.fromField = "value_changed";
ROUTE145.toNode = "Seagull-ROOT";
ROUTE145.toField = "set_rotation";
children[33] = ROUTE145;

ROUTE ROUTE146 = createNode("ROUTE");
ROUTE146.fromNode = "Seagull_Wake-POS-INTERP";
ROUTE146.fromField = "value_changed";
ROUTE146.toNode = "Seagull_Wake-ROOT";
ROUTE146.toField = "set_translation";
children[34] = ROUTE146;

}
