//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Wed, 26 Aug 2015 12:17:13 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 26 Aug 2015 12:17:13 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Appartment"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene8.addChild(&WorldInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("viewing"));
NavigationInfo& NavigationInfo11 =  NavigationInfo();
NavigationInfo11.setDEF(CString("_top"));
NavigationInfo11.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo11.setTransitionType(new CString[]{CString("ANIMATE")}, 1);
NavigationInfo11.setTransitionTime(2);
Transform10.addChild(&NavigationInfo11);

NavigationInfo& NavigationInfo12 =  NavigationInfo();
NavigationInfo12.setDEF(CString("_inside"));
NavigationInfo12.setType(new CString[]{CString(", "), CString("ANYWALK")}, 2);
NavigationInfo12.setSpeed(0.3);
NavigationInfo12.setHeadlight(false);
NavigationInfo12.setTransitionType(new CString[]{CString("ANIMATE")}, 1);
NavigationInfo12.setTransitionTime(2);
Transform10.addChild(&NavigationInfo12);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDEF(CString("VP2"));
Viewpoint13.setDescription(CString("top"));
Viewpoint13.setPosition(new float[]{-1.58774,10.891,2.33508});
Viewpoint13.setOrientation(new float[]{-0.999999,-0.00113122,0.00113515,1.53307});
Viewpoint13.setFieldOfView(1.3);
Transform10.addChild(&Viewpoint13);

Viewpoint& Viewpoint14 =  Viewpoint();
Viewpoint14.setDEF(CString("VP1"));
Viewpoint14.setDescription(CString("inside"));
Viewpoint14.setPosition(new float[]{4.57879,1.10243,0.55636});
Viewpoint14.setOrientation(new float[]{-0.0191714,0.999803,0.00515404,1.41461});
Viewpoint14.setFieldOfView(1.3);
Transform10.addChild(&Viewpoint14);

Scene8.addChild(&Transform10);

Transform& Transform15 =  Transform();
Transform15.setDEF(CString("bg"));
Background& Background16 =  Background();
Background16.setSkyColor(new float[]{1.0,1.0,1.0}, 3);
Transform15.addChild(&Background16);

Scene8.addChild(&Transform15);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("inline"));
Transform17.setTranslation(new float[]{0.0,-1.84038,0.0});
Transform17.setScale(new float[]{1.0,0.001,1.0});
Transform17.setCenter(new float[]{-1.80969,0.293455,1.89528});
Group& Group18 =  Group();
Group& Group19 =  Group();
Group19.setDEF(CString("UnnamedAnimation3"));
TimeSensor& TimeSensor20 =  TimeSensor();
TimeSensor20.setDEF(CString("Time"));
TimeSensor20.setCycleInterval(10);
TimeSensor20.setStopTime(1);
Group19.addChild(&TimeSensor20);

Group18.addChild(&Group19);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(CString("inlineTranslationInterp"));
PositionInterpolator21.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1.0}, 101);
PositionInterpolator21.setKeyValue(new float[]{0.0,-1.84038,0.0,0.0,-1.82198,0.0,0.0,-1.80357,0.0,0.0,-1.78517,0.0,0.0,-1.76676,0.0,0.0,-1.74836,0.0,0.0,-1.72996,0.0,0.0,-1.71155,0.0,0.0,-1.69315,0.0,0.0,-1.67475,0.0,0.0,-1.65634,0.0,0.0,-1.63794,0.0,0.0,-1.61953,0.0,0.0,-1.60113,0.0,0.0,-1.58273,0.0,0.0,-1.56432,0.0,0.0,-1.54592,0.0,0.0,-1.52752,0.0,0.0,-1.50911,0.0,0.0,-1.49071,0.0,0.0,-1.4723,0.0,0.0,-1.4539,0.0,0.0,-1.4355,0.0,0.0,-1.41709,0.0,0.0,-1.39869,0.0,0.0,-1.38028,0.0,0.0,-1.36188,0.0,0.0,-1.34348,0.0,0.0,-1.32507,0.0,0.0,-1.30667,0.0,0.0,-1.28827,0.0,0.0,-1.26986,0.0,0.0,-1.25146,0.0,0.0,-1.23305,0.0,0.0,-1.21465,0.0,0.0,-1.19625,0.0,0.0,-1.17784,0.0,0.0,-1.15944,0.0,0.0,-1.14104,0.0,0.0,-1.12263,0.0,0.0,-1.10423,0.0,0.0,-1.08582,0.0,0.0,-1.06742,0.0,0.0,-1.04902,0.0,0.0,-1.03061,0.0,0.0,-1.01221,0.0,0.0,-0.993806,0.0,0.0,-0.975402,0.0,0.0,-0.956998,0.0,0.0,-0.938594,0.0,0.0,-0.92019,0.0,0.0,-0.901787,0.0,0.0,-0.883383,0.0,0.0,-0.864979,0.0,0.0,-0.846575,0.0,0.0,-0.828171,0.0,0.0,-0.809768,0.0,0.0,-0.791364,0.0,0.0,-0.77296,0.0,0.0,-0.754556,0.0,0.0,-0.736152,0.0,0.0,-0.717749,0.0,0.0,-0.699345,0.0,0.0,-0.680941,0.0,0.0,-0.662537,0.0,0.0,-0.644134,0.0,0.0,-0.62573,0.0,0.0,-0.607326,0.0,0.0,-0.588922,0.0,0.0,-0.570518,0.0,0.0,-0.552115,0.0,0.0,-0.533711,0.0,0.0,-0.515307,0.0,0.0,-0.496903,0.0,0.0,-0.478499,0.0,0.0,-0.460096,0.0,0.0,-0.441692,0.0,0.0,-0.423288,0.0,0.0,-0.404885,0.0,0.0,-0.386481,0.0,0.0,-0.368077,0.0,0.0,-0.349673,0.0,0.0,-0.331269,0.0,0.0,-0.312865,0.0,0.0,-0.294462,0.0,0.0,-0.276058,0.0,0.0,-0.257654,0.0,0.0,-0.23925,0.0,0.0,-0.220847,0.0,0.0,-0.202443,0.0,0.0,-0.184039,0.0,0.0,-0.165635,0.0,0.0,-0.147231,0.0,0.0,-0.128828,0.0,0.0,-0.110424,0.0,0.0,-0.0920199,0.0,0.0,-0.0736165,0.0,0.0,-0.0552128,0.0,0.0,-0.0368087,0.0,0.0,-0.018405,0.0,0.0,0.0,0.0}, 303);
Group18.addChild(&PositionInterpolator21);

PositionInterpolator& PositionInterpolator22 =  PositionInterpolator();
PositionInterpolator22.setDEF(CString("inlineScaleFactorInterp"));
PositionInterpolator22.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1.0}, 101);
PositionInterpolator22.setKeyValue(new float[]{1.0,0.001,1.0,1.0,0.01099,1.0,1.0,0.02098,1.0,1.0,0.03097,1.0,1.0,0.04096,1.0,1.0,0.05095,1.0,1.0,0.06094,1.0,1.0,0.07093,1.0,1.0,0.08092,1.0,1.0,0.09091,1.0,1.0,0.1009,1.0,1.0,0.11089,1.0,1.0,0.12088,1.0,1.0,0.13087,1.0,1.0,0.14086,1.0,1.0,0.15085,1.0,1.0,0.16084,1.0,1.0,0.17083,1.0,1.0,0.18082,1.0,1.0,0.19081,1.0,1.0,0.2008,1.0,1.0,0.21079,1.0,1.0,0.22078,1.0,1.0,0.23077,1.0,1.0,0.24076,1.0,1.0,0.25075,1.0,1.0,0.26074,1.0,1.0,0.27073,1.0,1.0,0.28072,1.0,1.0,0.29071,1.0,1.0,0.3007,1.0,1.0,0.31069,1.0,1.0,0.32068,1.0,1.0,0.33067,1.0,1.0,0.34066,1.0,1.0,0.35065,1.0,1.0,0.36064,1.0,1.0,0.37063,1.0,1.0,0.38062,1.0,1.0,0.39061,1.0,1.0,0.4006,1.0,1.0,0.41059,1.0,1.0,0.42058,1.0,1.0,0.43057,1.0,1.0,0.44056,1.0,1.0,0.45055,1.0,1.0,0.46054,1.0,1.0,0.47053,1.0,1.0,0.48052,1.0,1.0,0.49051,1.0,1.0,0.5005,1.0,1.0,0.51049,1.0,1.0,0.52048,1.0,1.0,0.53047,1.0,1.0,0.54046,1.0,1.0,0.55045,1.0,1.0,0.56044,1.0,1.0,0.57043,1.0,1.0,0.58042,1.0,1.0,0.59041,1.0,1.0,0.6004,1.0,1.0,0.61039,1.0,1.0,0.62038,1.0,1.0,0.63037,1.0,1.0,0.64036,1.0,1.0,0.65035,1.0,1.0,0.66034,1.0,1.0,0.67033,1.0,1.0,0.68032,1.0,1.0,0.69031,1.0,1.0,0.7003,1.0,1.0,0.71029,1.0,1.0,0.72028,1.0,1.0,0.73027,1.0,1.0,0.74026,1.0,1.0,0.75025,1.0,1.0,0.76024,1.0,1.0,0.77023,1.0,1.0,0.78022,1.0,1.0,0.79021,1.0,1.0,0.8002,1.0,1.0,0.810189,1.0,1.0,0.820179,1.0,1.0,0.83017,1.0,1.0,0.84016,1.0,1.0,0.850149,1.0,1.0,0.860139,1.0,1.0,0.870129,1.0,1.0,0.880119,1.0,1.0,0.890109,1.0,1.0,0.900099,1.0,1.0,0.910089,1.0,1.0,0.92008,1.0,1.0,0.930069,1.0,1.0,0.940059,1.0,1.0,0.95005,1.0,1.0,0.960039,1.0,1.0,0.970029,1.0,1.0,0.980019,1.0,1.0,0.990009,1.0,1.0,1.0,1.0}, 303);
Group18.addChild(&PositionInterpolator22);

Transform17.addChild(&Group18);

Inline& Inline23 =  Inline();
Inline23.setUrl(new CString[]{CString("flat-notex-anim.x3d")}, 1);
Inline23.setBboxSize(new float[]{14.5935,3.71493,8.13908});
Inline23.setBboxCenter(new float[]{-1.73584,0.298679,1.59514});
Transform17.addChild(&Inline23);

Scene8.addChild(&Transform17);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("button"));
Transform24.setTranslation(new float[]{-1.47622,10.7094,2.40666});
Transform24.setRotation(new float[]{-1.0,0.0,0.0,1.5708});
Transform24.setScale(new float[]{0.00198924,0.00132336,0.00132293});
TouchSensor& TouchSensor25 =  TouchSensor();
TouchSensor25.setDEF(CString("touchSensorTrigger"));
Transform24.addChild(&TouchSensor25);

Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setAmbientIntensity(0.25);
Material28.setDiffuseColor(new float[]{0.355377,0.817956,0.015797});
Material28.setSpecularColor(new float[]{0.0415311,0.0955906,0.00184612});
Material28.setShininess(0.078125);
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

IndexedFaceSet& IndexedFaceSet29 =  IndexedFaceSet();
IndexedFaceSet29.setCreaseAngle(0.5);
IndexedFaceSet29.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate30 =  Coordinate();
Coordinate30.setPoint(new float[]{-10.0,10.0,10.0,-10.0,-10.0,10.0,10.0,-10.0,10.0,10.0,10.0,10.0}, 12);
IndexedFaceSet29.setCoord(&Coordinate30);

Shape26.setGeometry(&IndexedFaceSet29);

Transform24.addChild(&Shape26);

Scene8.addChild(&Transform24);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("VP2"));
ROUTE31.setFromField(CString("isBound"));
ROUTE31.setToNode(CString("_top"));
ROUTE31.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE31);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("VP1"));
ROUTE32.setFromField(CString("isBound"));
ROUTE32.setToNode(CString("_inside"));
ROUTE32.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE32);

ROUTE& ROUTE33 =  ROUTE();
ROUTE33.setFromNode(CString("touchSensorTrigger"));
ROUTE33.setFromField(CString("touchTime"));
ROUTE33.setToNode(CString("Time"));
ROUTE33.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE33);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("Time"));
ROUTE34.setFromField(CString("fraction_changed"));
ROUTE34.setToNode(CString("inlineTranslationInterp"));
ROUTE34.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("Time"));
ROUTE35.setFromField(CString("fraction_changed"));
ROUTE35.setToNode(CString("inlineScaleFactorInterp"));
ROUTE35.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("inlineTranslationInterp"));
ROUTE36.setFromField(CString("value_changed"));
ROUTE36.setToNode(CString("inline"));
ROUTE36.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("inlineScaleFactorInterp"));
ROUTE37.setFromField(CString("value_changed"));
ROUTE37.setToNode(CString("inline"));
ROUTE37.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE37);

X3D0.setScene(&Scene8);

//}
