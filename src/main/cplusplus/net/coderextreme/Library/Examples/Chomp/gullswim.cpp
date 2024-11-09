#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Mon, 09 Nov 2015 13:19:34 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Mon, 09 Nov 2015 13:19:34 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
Group& Group9 =  Group();
TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("TimeSensor_gullswim-TIMER"));
TimeSensor10.setCycleInterval(2.867);
TimeSensor10.setLoop(True);
TimeSensor10.setStartTime(1);
Group9.addChild(&TimeSensor10);

Script& Script11 =  Script();
Script11.setDEF(CString("TimeSensor_gullswim-SCRIPT"));
field& field12 =  field();
field12.setName(CString("fractionOut"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFFloat"));
Script11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("fractionIn"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFFloat"));
Script11.addChild(&field13);


Script11.setSourceCode(CString("javascript:")+
_T("    function fractionIn(i) {")+
_T("    fractionOut = 0.9773 * i + 0.02273;")+
_T("  }"));
Group9.addChild(&Script11);

Transform& Transform14 =  Transform();
Transform14.setDEF(CString("Seagull_Wake-ROOT"));
Transform14.setTranslation(new float[]{-0.609,0.001503,-0.1034});
Transform14.setRotation(new float[]{-1,0,0,3.142});
Transform14.setScaleOrientation(new float[]{0.151899,0.988396,0,0.264});
TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("Seagull_Wake-TIMER"));
TimeSensor15.setCycleInterval(2.933);
Transform14.addChild(&TimeSensor15);

PositionInterpolator& PositionInterpolator16 =  PositionInterpolator();
PositionInterpolator16.setDEF(CString("Seagull_Wake-POS-INTERP"));
PositionInterpolator16.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
PositionInterpolator16.setKeyValue(new float[]{-0.609,0.001503,-0.1034,-0.609,0.005823,-0.1034,-0.609,0.03287,-0.1034,-0.609,0.07513,-0.1034,-0.609,0.125,-0.1034,-0.609,0.1749,-0.1034,-0.609,0.2171,-0.1034,-0.609,0.2442,-0.1034,-0.609,0.2485,-0.1034,-0.609,0.2282,-0.1034,-0.609,0.1902,-0.1034,-0.609,0.142,-0.1034,-0.609,0.09128,-0.1034,-0.609,0.04564,-0.1034,-0.609,0.01268,-0.1034,-0.609,0.001503,-0.1034}, 48);
Transform14.addChild(&PositionInterpolator16);

Shape& Shape17 =  Shape();
Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Material19.setDiffuseColor(new float[]{0,0,0});
Material19.setEmissiveColor(new float[]{0.007843,0.3922,0.6157});
Material19.setShininess(0);
Appearance18.addChild(&Material19);

Shape17.addChild(&Appearance18);

IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setDEF(CString("Seagull_Wake-FACES"));
IndexedFaceSet20.setColorIndex(new int[]{3,2,6,-1,7,0,6,-1,12,5,2,-1,20,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,10,7,6,-1,10,5,9,-1,7,11,0,-1,5,6,2,-1,3,6,0,-1,7,14,11,-1,8,7,10,-1,6,5,10,-1,9,5,13,-1,5,12,13,-1,14,7,8,-1,10,9,17,-1,17,16,10,-1,8,10,16,-1,16,15,8,-1,9,13,17,-1,14,8,15,-1,12,2,1,-1,20,0,11,-1,21,1,20,-1,13,21,14,-1,21,11,14,-1,18,13,14,-1,14,19,18,-1,18,17,13,-1,19,14,15,-1,0,20,4,-1,20,11,21,-1,13,12,21,-1,12,1,21,-1}, 148);
IndexedFaceSet20.setCoordIndex(new int32_t[]{3,2,6,-1,7,0,6,-1,12,5,2,-1,20,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,10,7,6,-1,10,5,9,-1,7,11,0,-1,5,6,2,-1,3,6,0,-1,7,14,11,-1,8,7,10,-1,6,5,10,-1,9,5,13,-1,5,12,13,-1,14,7,8,-1,10,9,17,-1,17,16,10,-1,8,10,16,-1,16,15,8,-1,9,13,17,-1,14,8,15,-1,12,2,1,-1,20,0,11,-1,21,1,20,-1,13,21,14,-1,21,11,14,-1,18,13,14,-1,14,19,18,-1,18,17,13,-1,19,14,15,-1,0,20,4,-1,20,11,21,-1,13,12,21,-1,12,1,21,-1}, 148);
CColor& Color21 =  CColor();
Color21.setColor(new float[]{0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.3373,0.7569,1,0.3373,0.7569,1,0.3373,0.7569,1,0.3373,0.7569,1,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.3373,0.7569,1,0.3373,0.7569,1,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157}, 66);
IndexedFaceSet20.setColor(&Color21);

Coordinate& Coordinate22 =  Coordinate();
Coordinate22.setDEF(CString("Seagull_Wake-COORD"));
Coordinate22.setPoint(new float[]{0.4789,0,0.1587,-0.4416,0,-1.221,-0.4745,0,0.1822,0.0002296,0,0.9222,0,0,0.2742,-0.941,0,0.04356,0.0205,0,1.298,0.8532,0,0.0152,1.643,0,-0.2488,-1.736,0,-0.184,0.02957,0,1.537,0.6059,0,-2.16,-0.7499,0,-2.121,-1.12,0,-3.384,1.051,0,-3.422,1.291,-0.4378,-1.615,0.02957,-0.4378,1.537,-1.372,-0.4378,-1.566,-1.12,-0.4249,-3.384,1.051,-0.4249,-3.422,0.3244,0,-1.224,-0.05201,0,-3.066}, 66);
IndexedFaceSet20.setCoord(&Coordinate22);

Shape17.setGeometry(&IndexedFaceSet20);

Transform14.addChild(&Shape17);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("Seagull-ROOT"));
Transform23.setTranslation(new float[]{-0.01265,0.06479,0.0434});
Transform23.setRotation(new float[]{-0.999749,0.0149807,0.0166408,1.676});
Transform23.setScale(new float[]{0.1698,0.2668,0.1103});
PositionInterpolator& PositionInterpolator24 =  PositionInterpolator();
PositionInterpolator24.setDEF(CString("Seagull-POS-INTERP"));
PositionInterpolator24.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
PositionInterpolator24.setKeyValue(new float[]{-0.01265,0.06479,0.0434,-0.008224,0.06479,0.04328,0.0003215,0.06479,0.04321,0.007576,0.06479,0.04332,0.01064,0.06479,0.04342,0.006287,0.06479,0.04329,-0.002903,0.06479,0.04321,-0.01112,0.06479,0.04335,-0.01086,0.06479,0.04334,-0.002527,0.06479,0.04321,0.005481,0.06479,0.04328,0.01026,0.06479,0.0434,0.008561,0.06479,0.04335,0.0003394,0.06479,0.04321,-0.00885,0.06479,0.04329,-0.01265,0.06479,0.0434}, 48);
Transform23.addChild(&PositionInterpolator24);

OrientationInterpolator& OrientationInterpolator25 =  OrientationInterpolator();
OrientationInterpolator25.setDEF(CString("Seagull-ROT-INTERP"));
OrientationInterpolator25.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator25.setKeyValue(new float[]{-0.999749,0.0149807,0.0166408,1.676,-0.999906,0.00915006,0.0101601,1.676,-0.999995,-0.00211299,-0.00234699,1.676,-0.999848,-0.0116806,-0.0129706,1.676,-0.999724,-0.0157104,-0.0174504,1.676,-0.999889,-0.00997589,-0.0110799,1.676,-0.999995,0.00213699,0.00237399,1.676,-0.999812,0.0129702,0.0144102,1.676,-0.999822,0.0126203,0.0140203,1.676,-0.999997,0.001641,0.00182299,1.676,-0.999911,-0.0089131,-0.00989911,1.676,-0.999741,-0.0152206,-0.0169007,1.676,-0.999812,-0.0129702,-0.0144102,1.676,-0.999995,-0.00213699,-0.00237299,1.676,-0.999889,0.00997589,0.0110799,1.676,-0.999749,0.0149807,0.0166408,1.676}, 64);
Transform23.addChild(&OrientationInterpolator25);

Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{1,1,1});
Material28.setShininess(0.25);
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

IndexedFaceSet& IndexedFaceSet29 =  IndexedFaceSet();
IndexedFaceSet29.setDEF(CString("Seagull-FACES"));
IndexedFaceSet29.setCreaseAngle(3);
IndexedFaceSet29.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate30 =  Coordinate();
Coordinate30.setDEF(CString("Seagull-COORD"));
Coordinate30.setPoint(new float[]{0,3.719,0,0,2.63,-2.63,-1.859,2.63,-1.859,-2.63,2.63,0,-1.859,2.63,1.859,0,2.63,2.63,1.859,2.63,1.859,2.63,2.63,0,1.859,2.63,-1.859,0,0,-3.719,-2.63,0,-2.63,-3.719,0,0,-2.63,0,2.63,0,0,3.719,2.63,0,2.63,3.719,0,0,2.63,0,-2.63,0,-2.63,-2.63,-1.859,-2.63,-1.859,-2.63,-2.63,0,-1.859,-2.63,1.859,0,-2.63,2.63,1.859,-2.63,1.859,2.63,-2.63,0,1.859,-2.63,-1.859,0,-3.719,0}, 78);
IndexedFaceSet29.setCoord(&Coordinate30);

Shape26.setGeometry(&IndexedFaceSet29);

Transform23.addChild(&Shape26);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("Dummy_Seagull_Thigh_L-ROOT"));
Transform31.setTranslation(new float[]{-1.857,0.4801,1.367});
Transform31.setRotation(new float[]{0.0522582,0.0522582,-0.997265,1.574});
Transform31.setScale(new float[]{0.4132,0.6494,1});
Transform31.setScaleOrientation(new float[]{0,-1,0,0.1047});
Transform& Transform32 =  Transform();
Transform32.setDEF(CString("Seagull_Thigh_L-ROOT"));
Transform32.setTranslation(new float[]{-1.832,0.4286,0.2694});
Transform32.setRotation(new float[]{-0.555013,-0.555013,0.619614,2.032});
Transform32.setScale(new float[]{1,1,1.7});
Transform32.setScaleOrientation(new float[]{0,0,-1,0.0668495});
PositionInterpolator& PositionInterpolator33 =  PositionInterpolator();
PositionInterpolator33.setDEF(CString("Seagull_Thigh_L-POS-INTERP"));
PositionInterpolator33.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
PositionInterpolator33.setKeyValue(new float[]{-1.832,0.4286,0.2694,-1.823,0.4286,0.3345,-1.825,0.4286,0.325,-1.839,0.4286,0.08741,-1.821,0.4286,-0.08178,-1.834,0.4286,0.01766,-1.84,0.4286,0.1317,-1.835,0.4286,0.2389,-1.826,0.4286,0.3179,-1.821,0.4286,0.3487,-1.839,0.4286,0.1795,-1.825,0.4286,-0.05814,-1.83,0.4286,-0.01815,-1.839,0.4286,0.09338,-1.837,0.4286,0.2052,-1.832,0.4286,0.2694}, 48);
Transform32.addChild(&PositionInterpolator33);

OrientationInterpolator& OrientationInterpolator34 =  OrientationInterpolator();
OrientationInterpolator34.setDEF(CString("Seagull_Thigh_L-ROT-INTERP"));
OrientationInterpolator34.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator34.setKeyValue(new float[]{-0.555013,-0.555013,0.619614,2.032,-0.543314,-0.543314,0.640016,2.003,-0.54509,-0.54509,0.636988,2.007,-0.584362,-0.584362,0.563064,2.116,-0.608107,-0.608107,0.510306,2.198,-0.594508,-0.594508,0.541407,2.149,-0.577617,-0.577617,0.576817,2.095,-0.560236,-0.560236,0.61014,2.046,-0.546379,-0.546379,0.634776,2.01,-0.54071,-0.54071,0.644411,1.997,-0.570095,-0.570095,0.591594,2.073,-0.604981,-0.604981,0.517684,2.186,-0.599526,-0.599526,0.530223,2.167,-0.583484,-0.583484,0.564884,2.113,-0.565865,-0.565865,0.599662,2.061,-0.555013,-0.555013,0.619614,2.032}, 64);
Transform32.addChild(&OrientationInterpolator34);

Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setDiffuseColor(new float[]{1,1,1});
Material37.setShininess(0.25);
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setDEF(CString("Seagull_Thigh_L-FACES"));
IndexedFaceSet38.setCreaseAngle(3);
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setDEF(CString("Seagull_Thigh_L-COORD"));
Coordinate39.setPoint(new float[]{0,2.261,0,0,1.599,-1.599,-1.131,1.599,-1.131,-1.599,1.599,0,-1.131,1.599,1.131,0,1.599,1.599,1.131,1.599,1.131,1.599,1.599,0,1.131,1.599,-1.131,0,0,-2.261,-1.599,0,-1.599,-2.261,0,0,-1.599,0,1.599,0,0,2.261,1.599,0,1.599,2.261,0,0,1.599,0,-1.599,0,-1.599,-1.599,-1.131,-1.599,-1.131,-1.599,-1.599,0,-1.131,-1.599,1.131,0,-1.599,1.599,1.131,-1.599,1.131,1.599,-1.599,0,1.131,-1.599,-1.131,0,-2.261,0}, 78);
IndexedFaceSet38.setCoord(&Coordinate39);

Shape35.setGeometry(&IndexedFaceSet38);

Transform32.addChild(&Shape35);

Transform& Transform40 =  Transform();
Transform40.setDEF(CString("Dummy_Seagull_Leg_L-ROOT"));
Transform40.setTranslation(new float[]{-0.4286,-1.131,1.712});
Transform40.setRotation(new float[]{-0.57735,-0.57735,0.57735,4.189});
Transform40.setScale(new float[]{0.5882,1,1});
Transform40.setScaleOrientation(new float[]{1,0,0,0.030092});
Transform& Transform41 =  Transform();
Transform41.setDEF(CString("Seagull_leg_L-ROOT"));
Transform41.setTranslation(new float[]{-0.05102,0.007231,-0.02075});
Transform41.setRotation(new float[]{0.346396,0.346396,0.871791,1.708});
Transform41.setScale(new float[]{1,0.9826,1.018});
Transform41.setScaleOrientation(new float[]{-1,0,0,0.2494});
OrientationInterpolator& OrientationInterpolator42 =  OrientationInterpolator();
OrientationInterpolator42.setDEF(CString("Seagull_leg_L-ROT-INTERP"));
OrientationInterpolator42.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator42.setKeyValue(new float[]{0.346396,0.346396,0.871791,1.708,0.272405,0.272405,0.922817,1.651,0.319204,0.319204,0.89231,1.685,-0.626196,-0.626196,-0.464497,4.011,-0.698638,-0.698638,-0.154308,3.448,-0.69702,-0.69702,-0.168305,3.475,-0.664392,-0.664392,-0.342296,3.801,0.458866,0.458866,0.760844,1.841,0.286594,0.286594,0.914181,1.66,0.270093,0.270093,0.924175,1.65,0.543872,0.543872,0.639067,2.004,-0.693279,-0.693279,-0.196794,3.53,-0.69523,-0.69523,-0.182508,3.503,-0.660403,-0.660403,-0.357402,3.828,0.492572,0.492572,0.717458,1.897,0.346396,0.346396,0.871791,1.708}, 64);
Transform41.addChild(&OrientationInterpolator42);

Shape& Shape43 =  Shape();
Appearance& Appearance44 =  Appearance();
Material& Material45 =  Material();
Material45.setDiffuseColor(new float[]{1,0.9176,0});
Material45.setShininess(0.25);
Appearance44.addChild(&Material45);

Shape43.addChild(&Appearance44);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setDEF(CString("Seagull_leg_L-FACES"));
IndexedFaceSet46.setCreaseAngle(3);
IndexedFaceSet46.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,1,8,7,-1,1,2,8,-1,2,9,8,-1,2,3,9,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,13,7,8,-1,13,8,9,-1,13,9,10,-1,13,10,11,-1,13,11,12,-1,13,12,7,-1}, 96);
Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setDEF(CString("Seagull_leg_L-COORD"));
Coordinate47.setPoint(new float[]{0,0,0,0.3363,0,0,0.1682,0,-0.2913,-0.1682,0,-0.2913,-0.3363,0,0,-0.1682,0,0.2913,0.1682,0,0.2913,0.3363,3.878,0,0.1682,3.878,-0.2913,-0.1682,3.878,-0.2913,-0.3363,3.878,0,-0.1682,3.878,0.2913,0.1682,3.878,0.2913,0,3.878,0}, 42);
IndexedFaceSet46.setCoord(&Coordinate47);

Shape43.setGeometry(&IndexedFaceSet46);

Transform41.addChild(&Shape43);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("Seagull_heel_L-ROOT"));
Transform48.setTranslation(new float[]{-0.01118,4.034,-0.01929});
Transform48.setRotation(new float[]{-1,0,0,1.287});
Transform48.setScale(new float[]{1,1.018,0.9826});
Transform48.setScaleOrientation(new float[]{1,0,0,0.773});
OrientationInterpolator& OrientationInterpolator49 =  OrientationInterpolator();
OrientationInterpolator49.setDEF(CString("Seagull_heel_L-ROT-INTERP"));
OrientationInterpolator49.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator49.setKeyValue(new float[]{-1,0,0,1.287,-1,0,0,1.399,-1,0,0,1.963,-1,0,0,3.41,-1,0,0,3.83,-1,0,0,2.286,-1,0,0,1.508,-1,0,0,1.3,-1,0,0,1.338,-1,0,0,1.586,-1,0,0,3.119,-1,0,0,3.779,-1,0,0,2.779,-1,0,0,1.638,-1,0,0,1.34,-1,0,0,1.287}, 64);
Transform48.addChild(&OrientationInterpolator49);

Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setDiffuseColor(new float[]{1,0.9176,0});
Material52.setShininess(0.25);
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

IndexedFaceSet& IndexedFaceSet53 =  IndexedFaceSet();
IndexedFaceSet53.setDEF(CString("Seagull_heel_L-FACES"));
IndexedFaceSet53.setCreaseAngle(3);
IndexedFaceSet53.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setDEF(CString("Seagull_heel_L-COORD"));
Coordinate54.setPoint(new float[]{0,0.48,0,0,0.24,-0.4157,-0.36,0.24,-0.2078,-0.36,0.24,0.2078,0,0.24,0.4157,0.36,0.24,0.2078,0.36,0.24,-0.2078,0,-0.24,-0.4157,-0.36,-0.24,-0.2078,-0.36,-0.24,0.2078,0,-0.24,0.4157,0.36,-0.24,0.2078,0.36,-0.24,-0.2078,0,-0.48,0}, 42);
IndexedFaceSet53.setCoord(&Coordinate54);

Shape50.setGeometry(&IndexedFaceSet53);

Transform48.addChild(&Shape50);

Transform& Transform55 =  Transform();
Transform55.setDEF(CString("Seagull_foot_LR-ROOT"));
Transform55.setTranslation(new float[]{0.00778,-0.5223,5.095});
Transform55.setRotation(new float[]{-0.99627,-0.066098,0.0554783,1.433});
Transform55.setScale(new float[]{1.5,1.526,1.474});
Transform55.setScaleOrientation(new float[]{1,0,0,0.632});
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setDiffuseColor(new float[]{0.8784,0.7765,0.3412});
Appearance57.addChild(&Material58);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet59 =  IndexedFaceSet();
IndexedFaceSet59.setDEF(CString("Seagull_foot_LR-FACES"));
IndexedFaceSet59.setCreaseAngle(3);
IndexedFaceSet59.setCoordIndex(new int32_t[]{0,2,3,-1,0,3,1,-1,0,4,2,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1}, 24);
Coordinate& Coordinate60 =  Coordinate();
Coordinate60.setDEF(CString("Seagull_foot_LR-COORD"));
Coordinate60.setPoint(new float[]{0,3.476,0,0.003385,0.6796,0,1.499,0.6796,0,0,3.45,-0.4106,0.624,0.925,-0.02917}, 15);
IndexedFaceSet59.setCoord(&Coordinate60);

Shape56.setGeometry(&IndexedFaceSet59);

Transform55.addChild(&Shape56);

Transform48.addChild(&Transform55);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Seagull_foot_LL-ROOT"));
Transform61.setTranslation(new float[]{-2.201,-0.08551,5.213});
Transform61.setRotation(new float[]{-0.991214,0.101301,-0.0850512,1.438});
Transform61.setScale(new float[]{1.5,1.526,1.474});
Transform61.setScaleOrientation(new float[]{1,0,0,0.632});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDiffuseColor(new float[]{0.8784,0.7765,0.3412});
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet65 =  IndexedFaceSet();
IndexedFaceSet65.setDEF(CString("Seagull_foot_LL-FACES"));
IndexedFaceSet65.setCreaseAngle(3);
IndexedFaceSet65.setCoordIndex(new int32_t[]{0,4,2,-1,0,2,3,-1,3,1,0,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1}, 24);
Coordinate& Coordinate66 =  Coordinate();
Coordinate66.setDEF(CString("Seagull_foot_LL-COORD"));
Coordinate66.setPoint(new float[]{1.493,3.476,0,0.003385,0.6796,0,1.497,0.6939,-0.07582,1.518,3.467,-0.4058,0.7503,0.9574,-0.02974}, 15);
IndexedFaceSet65.setCoord(&Coordinate66);

Shape62.setGeometry(&IndexedFaceSet65);

Transform61.addChild(&Shape62);

Transform48.addChild(&Transform61);

Transform41.addChild(&Transform48);

Transform40.addChild(&Transform41);

Transform32.addChild(&Transform40);

Transform31.addChild(&Transform32);

Transform23.addChild(&Transform31);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("Dummy_Seagull_Thigh_R-ROOT"));
Transform67.setTranslation(new float[]{1.639,0.4801,1.367});
Transform67.setRotation(new float[]{0.0522582,0.0522582,-0.997265,1.574});
Transform67.setScale(new float[]{0.4132,0.6494,1});
Transform67.setScaleOrientation(new float[]{0,-1,0,0.1047});
Transform& Transform68 =  Transform();
Transform68.setDEF(CString("Seagull_Thigh_R-ROOT"));
Transform68.setTranslation(new float[]{-1.824,-0.136,-0.06297});
Transform68.setRotation(new float[]{-0.604981,-0.604981,0.517684,2.186});
Transform68.setScale(new float[]{1,1,1.7});
Transform68.setScaleOrientation(new float[]{-0.00001597,0,-1,0.00539324});
PositionInterpolator& PositionInterpolator69 =  PositionInterpolator();
PositionInterpolator69.setDEF(CString("Seagull_Thigh_R-POS-INTERP"));
PositionInterpolator69.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
PositionInterpolator69.setKeyValue(new float[]{-1.824,-0.136,-0.06297,-1.83,-0.136,-0.02197,-1.839,-0.136,0.09238,-1.837,-0.136,0.2071,-1.829,-0.136,0.3001,-1.821,-0.136,0.3503,-1.833,-0.136,0.267,-1.833,-0.136,-0.0001516,-1.825,-0.136,-0.05621,-1.837,-0.136,0.05313,-1.839,-0.136,0.1702,-1.832,-0.136,0.2728,-1.823,-0.136,0.3396,-1.824,-0.136,0.3298,-1.839,-0.136,0.08625,-1.824,-0.136,-0.06297}, 48);
Transform68.addChild(&PositionInterpolator69);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(CString("Seagull_Thigh_R-ROT-INTERP"));
OrientationInterpolator70.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator70.setKeyValue(new float[]{-0.604981,-0.604981,0.517684,2.186,-0.599526,-0.599526,0.530223,2.167,-0.583484,-0.583484,0.564884,2.113,-0.565865,-0.565865,0.599662,2.061,-0.550322,-0.550322,0.627926,2.02,-0.541383,-0.541383,0.64328,1.998,-0.55598,-0.55598,0.617878,2.035,-0.596595,-0.596595,0.536795,2.156,-0.60408,-0.60408,0.519783,2.183,-0.589133,-0.589133,0.553031,2.131,-0.571696,-0.571696,0.588496,2.078,-0.555013,-0.555013,0.619614,2.032,-0.543314,-0.543314,0.640016,2.003,-0.54509,-0.54509,0.636988,2.007,-0.584362,-0.584362,0.563064,2.116,-0.604981,-0.604981,0.517684,2.186}, 64);
Transform68.addChild(&OrientationInterpolator70);

Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setDiffuseColor(new float[]{1,1,1});
Material73.setShininess(0.25);
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

IndexedFaceSet& IndexedFaceSet74 =  IndexedFaceSet();
IndexedFaceSet74.setUSE(CString("Seagull_Thigh_L-FACES"));
Shape71.setGeometry(&IndexedFaceSet74);

Transform68.addChild(&Shape71);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("Dummy_Seagull_Leg_R-ROOT"));
Transform75.setTranslation(new float[]{0.136,-1.131,1.712});
Transform75.setRotation(new float[]{0.57735,0.57735,-0.57735,2.094});
Transform75.setScale(new float[]{0.5882,1,1});
Transform75.setScaleOrientation(new float[]{1,0,0,0.0334468});
Transform& Transform76 =  Transform();
Transform76.setDEF(CString("Seagull_leg_R-ROOT"));
Transform76.setTranslation(new float[]{0.03961,-0.02924,0.02399});
Transform76.setRotation(new float[]{-0.693279,-0.693279,-0.196794,3.53});
Transform76.setScale(new float[]{1,0.9826,1.018});
Transform76.setScaleOrientation(new float[]{-1,0,0,0.2494});
OrientationInterpolator& OrientationInterpolator77 =  OrientationInterpolator();
OrientationInterpolator77.setDEF(CString("Seagull_leg_R-ROT-INTERP"));
OrientationInterpolator77.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator77.setKeyValue(new float[]{-0.693279,-0.693279,-0.196794,3.53,-0.69523,-0.69523,-0.182508,3.503,-0.660403,-0.660403,-0.357402,3.828,0.492572,0.492572,0.717458,1.897,0.3038,0.3038,0.903001,1.673,0.270203,0.270203,0.924111,1.65,0.429886,0.429886,0.793975,1.8,-0.672729,-0.672729,-0.308013,3.739,-0.698616,-0.698616,-0.154504,3.448,-0.69332,-0.69332,-0.196506,3.53,-0.623085,-0.623085,-0.472789,4.025,0.377005,0.377005,0.846011,1.737,0.273492,0.273492,0.922174,1.652,0.319204,0.319204,0.89231,1.685,-0.626196,-0.626196,-0.464497,4.011,-0.693279,-0.693279,-0.196794,3.53}, 64);
Transform76.addChild(&OrientationInterpolator77);

Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Material& Material80 =  Material();
Material80.setDiffuseColor(new float[]{1,0.9176,0});
Material80.setShininess(0.25);
Appearance79.addChild(&Material80);

Shape78.addChild(&Appearance79);

IndexedFaceSet& IndexedFaceSet81 =  IndexedFaceSet();
IndexedFaceSet81.setUSE(CString("Seagull_leg_L-FACES"));
Shape78.setGeometry(&IndexedFaceSet81);

Transform76.addChild(&Shape78);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("Seagull_heel_R-ROOT"));
Transform82.setTranslation(new float[]{0.01347,4.034,0.001056});
Transform82.setRotation(new float[]{-1,0,0,3.79});
Transform82.setScale(new float[]{1,1.018,0.9826});
Transform82.setScaleOrientation(new float[]{1,0,0,0.773});
OrientationInterpolator& OrientationInterpolator83 =  OrientationInterpolator();
OrientationInterpolator83.setDEF(CString("Seagull_heel_R-ROT-INTERP"));
OrientationInterpolator83.setKey(new float[]{0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1}, 16);
OrientationInterpolator83.setKeyValue(new float[]{-1,0,0,3.79,-1,0,0,2.777,-1,0,0,1.638,-1,0,0,1.353,-1,0,0,1.329,-1,0,0,1.529,-1,0,0,2.683,-1,0,0,3.672,-1,0,0,3.297,-1,0,0,1.882,-1,0,0,1.417,-1,0,0,1.31,-1,0,0,1.44,-1,0,0,2.028,-1,0,0,3.475,-1,0,0,3.79}, 64);
Transform82.addChild(&OrientationInterpolator83);

Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Material86.setDiffuseColor(new float[]{1,0.9176,0});
Material86.setShininess(0.25);
Appearance85.addChild(&Material86);

Shape84.addChild(&Appearance85);

IndexedFaceSet& IndexedFaceSet87 =  IndexedFaceSet();
IndexedFaceSet87.setUSE(CString("Seagull_heel_L-FACES"));
Shape84.setGeometry(&IndexedFaceSet87);

Transform82.addChild(&Shape84);

Transform& Transform88 =  Transform();
Transform88.setDEF(CString("Seagull_foot_RR-ROOT"));
Transform88.setTranslation(new float[]{-0.02591,-0.6629,4.973});
Transform88.setRotation(new float[]{-0.981125,-0.149704,0.122403,1.422});
Transform88.setScale(new float[]{1.5,1.526,1.474});
Transform88.setScaleOrientation(new float[]{1,0,0,0.6058});
Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Material91.setDiffuseColor(new float[]{0.8784,0.7765,0.3412});
Appearance90.addChild(&Material91);

Shape89.addChild(&Appearance90);

IndexedFaceSet& IndexedFaceSet92 =  IndexedFaceSet();
IndexedFaceSet92.setDEF(CString("Seagull_foot_RR-FACES"));
IndexedFaceSet92.setCreaseAngle(3);
IndexedFaceSet92.setCoordIndex(new int32_t[]{0,2,3,-1,0,3,1,-1,0,4,2,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1}, 24);
Coordinate& Coordinate93 =  Coordinate();
Coordinate93.setDEF(CString("Seagull_foot_RR-COORD"));
Coordinate93.setPoint(new float[]{0,3.476,0,0.003385,0.6796,0,1.499,0.6796,0,0,3.45,-0.4106,0.624,0.925,-0.02917}, 15);
IndexedFaceSet92.setCoord(&Coordinate93);

Shape89.setGeometry(&IndexedFaceSet92);

Transform88.addChild(&Shape89);

Transform82.addChild(&Transform88);

Transform& Transform94 =  Transform();
Transform94.setDEF(CString("Seagull_foot_RL-ROOT"));
Transform94.setTranslation(new float[]{-2.228,-0.1134,5.082});
Transform94.setRotation(new float[]{-0.989385,0.111298,-0.0934386,1.44});
Transform94.setScale(new float[]{1.5,1.526,1.474});
Transform94.setScaleOrientation(new float[]{1,0,0,0.632});
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Material97.setDiffuseColor(new float[]{0.8784,0.7765,0.3412});
Appearance96.addChild(&Material97);

Shape95.addChild(&Appearance96);

IndexedFaceSet& IndexedFaceSet98 =  IndexedFaceSet();
IndexedFaceSet98.setDEF(CString("Seagull_foot_RL-FACES"));
IndexedFaceSet98.setCreaseAngle(3);
IndexedFaceSet98.setCoordIndex(new int32_t[]{0,4,2,-1,0,2,3,-1,3,1,0,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1}, 24);
Coordinate& Coordinate99 =  Coordinate();
Coordinate99.setDEF(CString("Seagull_foot_RL-COORD"));
Coordinate99.setPoint(new float[]{1.493,3.476,0,0.003385,0.6796,0,1.497,0.6939,-0.07582,1.518,3.467,-0.4058,0.7503,0.9574,-0.02974}, 15);
IndexedFaceSet98.setCoord(&Coordinate99);

Shape95.setGeometry(&IndexedFaceSet98);

Transform94.addChild(&Shape95);

Transform82.addChild(&Transform94);

Transform76.addChild(&Transform82);

Transform75.addChild(&Transform76);

Transform68.addChild(&Transform75);

Transform67.addChild(&Transform68);

Transform23.addChild(&Transform67);

Transform& Transform100 =  Transform();
Transform100.setDEF(CString("Dummy_Seagull_Tail-ROOT"));
Transform100.setTranslation(new float[]{-0.00128,3.212,0.6723});
Transform100.setRotation(new float[]{0.0522582,0.0522582,-0.997265,1.574});
Transform100.setScale(new float[]{0.4132,0.6494,1});
Transform100.setScaleOrientation(new float[]{0,-1,0,0.1047});
Transform& Transform101 =  Transform();
Transform101.setDEF(CString("Seagull_tail-ROOT"));
Transform101.setTranslation(new float[]{-1.021,0.01607,0.4184});
Transform101.setRotation(new float[]{-0.610897,-0.610897,0.503597,2.209});
Transform101.setScale(new float[]{1.11,1.11,1.11});
Transform101.setScaleOrientation(new float[]{-0.527693,0.162798,-0.833689,0.3343});
Shape& Shape102 =  Shape();
Appearance& Appearance103 =  Appearance();
Material& Material104 =  Material();
Material104.setDiffuseColor(new float[]{1,1,1});
Material104.setShininess(0.25);
Appearance103.addChild(&Material104);

Shape102.addChild(&Appearance103);

IndexedFaceSet& IndexedFaceSet105 =  IndexedFaceSet();
IndexedFaceSet105.setDEF(CString("Seagull_tail-FACES"));
IndexedFaceSet105.setCreaseAngle(3);
IndexedFaceSet105.setCoordIndex(new int32_t[]{2,3,1,-1,1,5,4,-1,1,3,5,-1,3,2,4,-1,4,5,3,-1,0,4,2,-1,1,0,2,-1,0,1,4,-1}, 32);
Coordinate& Coordinate106 =  Coordinate();
Coordinate106.setDEF(CString("Seagull_tail-COORD"));
Coordinate106.setPoint(new float[]{-0.7399,0.3406,1.973,0.8892,0.363,2.014,-2.033,0,-1.322,2.033,0,-1.322,-2.033,1.196,-1.322,2.033,1.196,-1.322}, 18);
IndexedFaceSet105.setCoord(&Coordinate106);

Shape102.setGeometry(&IndexedFaceSet105);

Transform101.addChild(&Shape102);

Transform100.addChild(&Transform101);

Transform23.addChild(&Transform100);

Transform& Transform107 =  Transform();
Transform107.setDEF(CString("Seagull_Neck-ROOT"));
Transform107.setTranslation(new float[]{0.01038,-2.978,0.1783});
Transform107.setRotation(new float[]{-0.91916,0.292687,-0.263589,1.55});
Transform107.setScale(new float[]{5.89,9.07,3.748});
Transform107.setScaleOrientation(new float[]{-0.179598,-0.982392,-0.0514896,0.568});
Shape& Shape108 =  Shape();
Appearance& Appearance109 =  Appearance();
Material& Material110 =  Material();
Material110.setDiffuseColor(new float[]{1,1,1});
Material110.setShininess(0.25);
Appearance109.addChild(&Material110);

Shape108.addChild(&Appearance109);

IndexedFaceSet& IndexedFaceSet111 =  IndexedFaceSet();
IndexedFaceSet111.setDEF(CString("Seagull_Neck-FACES"));
IndexedFaceSet111.setCreaseAngle(3);
IndexedFaceSet111.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,1,8,7,-1,1,2,8,-1,2,9,8,-1,2,3,9,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,13,7,8,-1,13,8,9,-1,13,9,10,-1,13,10,11,-1,13,11,12,-1,13,12,7,-1}, 96);
Coordinate& Coordinate112 =  Coordinate();
Coordinate112.setDEF(CString("Seagull_Neck-COORD"));
Coordinate112.setPoint(new float[]{0,0,0,0.1965,0,0,0.09825,0,-0.1702,-0.09825,0,-0.1702,-0.1965,0,0,-0.09825,0,0.1702,0.09825,0,0.1702,0.1965,0.234,0,0.09825,0.234,-0.1702,-0.09825,0.234,-0.1702,-0.1965,0.234,0,-0.09825,0.234,0.1702,0.09825,0.234,0.1702,0,0.234,0}, 42);
IndexedFaceSet111.setCoord(&Coordinate112);

Shape108.setGeometry(&IndexedFaceSet111);

Transform107.addChild(&Shape108);

Transform23.addChild(&Transform107);

Transform14.addChild(&Transform23);

Group9.addChild(&Transform14);

Group8.addChild(&Group9);

Scene7.addChild(&Group8);

ROUTE& ROUTE113 =  ROUTE();
ROUTE113.setFromNode(CString("TimeSensor_gullswim-TIMER"));
ROUTE113.setFromField(CString("fraction_changed"));
ROUTE113.setToNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE113.setToField(CString("fractionIn"));
Scene7.addChild(&ROUTE113);

ROUTE& ROUTE114 =  ROUTE();
ROUTE114.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE114.setFromField(CString("fraction_changed"));
ROUTE114.setToNode(CString("Seagull_Wake-POS-INTERP"));
ROUTE114.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE114);

ROUTE& ROUTE115 =  ROUTE();
ROUTE115.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE115.setFromField(CString("fractionOut"));
ROUTE115.setToNode(CString("Seagull_Wake-POS-INTERP"));
ROUTE115.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE115);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE116.setFromField(CString("fraction_changed"));
ROUTE116.setToNode(CString("Seagull-POS-INTERP"));
ROUTE116.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE117.setFromField(CString("fractionOut"));
ROUTE117.setToNode(CString("Seagull-POS-INTERP"));
ROUTE117.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE118.setFromField(CString("fraction_changed"));
ROUTE118.setToNode(CString("Seagull-ROT-INTERP"));
ROUTE118.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE119.setFromField(CString("fractionOut"));
ROUTE119.setToNode(CString("Seagull-ROT-INTERP"));
ROUTE119.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE119);

ROUTE& ROUTE120 =  ROUTE();
ROUTE120.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE120.setFromField(CString("fraction_changed"));
ROUTE120.setToNode(CString("Seagull_Thigh_L-POS-INTERP"));
ROUTE120.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE120);

ROUTE& ROUTE121 =  ROUTE();
ROUTE121.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE121.setFromField(CString("fractionOut"));
ROUTE121.setToNode(CString("Seagull_Thigh_L-POS-INTERP"));
ROUTE121.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE121);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE122.setFromField(CString("fraction_changed"));
ROUTE122.setToNode(CString("Seagull_Thigh_L-ROT-INTERP"));
ROUTE122.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE123.setFromField(CString("fractionOut"));
ROUTE123.setToNode(CString("Seagull_Thigh_L-ROT-INTERP"));
ROUTE123.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE124.setFromField(CString("fraction_changed"));
ROUTE124.setToNode(CString("Seagull_leg_L-ROT-INTERP"));
ROUTE124.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE124);

ROUTE& ROUTE125 =  ROUTE();
ROUTE125.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE125.setFromField(CString("fractionOut"));
ROUTE125.setToNode(CString("Seagull_leg_L-ROT-INTERP"));
ROUTE125.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE125);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE126.setFromField(CString("fraction_changed"));
ROUTE126.setToNode(CString("Seagull_heel_L-ROT-INTERP"));
ROUTE126.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE127.setFromField(CString("fractionOut"));
ROUTE127.setToNode(CString("Seagull_heel_L-ROT-INTERP"));
ROUTE127.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromNode(CString("Seagull_heel_L-ROT-INTERP"));
ROUTE128.setFromField(CString("value_changed"));
ROUTE128.setToNode(CString("Seagull_heel_L-ROOT"));
ROUTE128.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromNode(CString("Seagull_leg_L-ROT-INTERP"));
ROUTE129.setFromField(CString("value_changed"));
ROUTE129.setToNode(CString("Seagull_leg_L-ROOT"));
ROUTE129.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromNode(CString("Seagull_Thigh_L-POS-INTERP"));
ROUTE130.setFromField(CString("value_changed"));
ROUTE130.setToNode(CString("Seagull_Thigh_L-ROOT"));
ROUTE130.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE130);

ROUTE& ROUTE131 =  ROUTE();
ROUTE131.setFromNode(CString("Seagull_Thigh_L-ROT-INTERP"));
ROUTE131.setFromField(CString("value_changed"));
ROUTE131.setToNode(CString("Seagull_Thigh_L-ROOT"));
ROUTE131.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE132.setFromField(CString("fraction_changed"));
ROUTE132.setToNode(CString("Seagull_Thigh_R-POS-INTERP"));
ROUTE132.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE132);

ROUTE& ROUTE133 =  ROUTE();
ROUTE133.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE133.setFromField(CString("fractionOut"));
ROUTE133.setToNode(CString("Seagull_Thigh_R-POS-INTERP"));
ROUTE133.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE133);

ROUTE& ROUTE134 =  ROUTE();
ROUTE134.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE134.setFromField(CString("fraction_changed"));
ROUTE134.setToNode(CString("Seagull_Thigh_R-ROT-INTERP"));
ROUTE134.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE134);

ROUTE& ROUTE135 =  ROUTE();
ROUTE135.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE135.setFromField(CString("fractionOut"));
ROUTE135.setToNode(CString("Seagull_Thigh_R-ROT-INTERP"));
ROUTE135.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE135);

ROUTE& ROUTE136 =  ROUTE();
ROUTE136.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE136.setFromField(CString("fraction_changed"));
ROUTE136.setToNode(CString("Seagull_leg_R-ROT-INTERP"));
ROUTE136.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE136);

ROUTE& ROUTE137 =  ROUTE();
ROUTE137.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE137.setFromField(CString("fractionOut"));
ROUTE137.setToNode(CString("Seagull_leg_R-ROT-INTERP"));
ROUTE137.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE137);

ROUTE& ROUTE138 =  ROUTE();
ROUTE138.setFromNode(CString("Seagull_Wake-TIMER"));
ROUTE138.setFromField(CString("fraction_changed"));
ROUTE138.setToNode(CString("Seagull_heel_R-ROT-INTERP"));
ROUTE138.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE138);

ROUTE& ROUTE139 =  ROUTE();
ROUTE139.setFromNode(CString("TimeSensor_gullswim-SCRIPT"));
ROUTE139.setFromField(CString("fractionOut"));
ROUTE139.setToNode(CString("Seagull_heel_R-ROT-INTERP"));
ROUTE139.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE139);

ROUTE& ROUTE140 =  ROUTE();
ROUTE140.setFromNode(CString("Seagull_heel_R-ROT-INTERP"));
ROUTE140.setFromField(CString("value_changed"));
ROUTE140.setToNode(CString("Seagull_heel_R-ROOT"));
ROUTE140.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE140);

ROUTE& ROUTE141 =  ROUTE();
ROUTE141.setFromNode(CString("Seagull_leg_R-ROT-INTERP"));
ROUTE141.setFromField(CString("value_changed"));
ROUTE141.setToNode(CString("Seagull_leg_R-ROOT"));
ROUTE141.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE141);

ROUTE& ROUTE142 =  ROUTE();
ROUTE142.setFromNode(CString("Seagull_Thigh_R-POS-INTERP"));
ROUTE142.setFromField(CString("value_changed"));
ROUTE142.setToNode(CString("Seagull_Thigh_R-ROOT"));
ROUTE142.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE142);

ROUTE& ROUTE143 =  ROUTE();
ROUTE143.setFromNode(CString("Seagull_Thigh_R-ROT-INTERP"));
ROUTE143.setFromField(CString("value_changed"));
ROUTE143.setToNode(CString("Seagull_Thigh_R-ROOT"));
ROUTE143.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE143);

ROUTE& ROUTE144 =  ROUTE();
ROUTE144.setFromNode(CString("Seagull-POS-INTERP"));
ROUTE144.setFromField(CString("value_changed"));
ROUTE144.setToNode(CString("Seagull-ROOT"));
ROUTE144.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE144);

ROUTE& ROUTE145 =  ROUTE();
ROUTE145.setFromNode(CString("Seagull-ROT-INTERP"));
ROUTE145.setFromField(CString("value_changed"));
ROUTE145.setToNode(CString("Seagull-ROOT"));
ROUTE145.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE145);

ROUTE& ROUTE146 =  ROUTE();
ROUTE146.setFromNode(CString("Seagull_Wake-POS-INTERP"));
ROUTE146.setFromField(CString("value_changed"));
ROUTE146.setToNode(CString("Seagull_Wake-ROOT"));
ROUTE146.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE146);

X3D0.setScene(&Scene7);

}
