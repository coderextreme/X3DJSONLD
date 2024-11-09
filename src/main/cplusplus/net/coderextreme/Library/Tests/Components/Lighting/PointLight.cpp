#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{-1});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(3, new int32_t[]{24, 10, 10});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{100});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(1, new int32_t[]{10});
MFInt32 MFInt324 =  MFInt32();
MFInt324.setValue(5, new int32_t[]{0, 25, 50, 75, 100});
MFInt32 MFInt325 =  MFInt32();
MFInt325.setValue(5, new int32_t[]{0, 25, 50, 75, 100});
MFInt32 MFInt326 =  MFInt32();
MFInt326.setValue(5, new int32_t[]{0, 25, 50, 75, 100});
MFInt32 MFInt327 =  MFInt32();
MFInt327.setValue(6, new int32_t[]{0, 25, 50, 75, 89, 100});
MFInt32 MFInt328 =  MFInt32();
MFInt328.setValue(3, new int32_t[]{73, 10, 41});
MFInt32 MFInt329 =  MFInt32();
MFInt329.setValue(6, new int32_t[]{5, 5, 5, 5, 0, 5});
MFInt32 MFInt3210 =  MFInt32();
MFInt3210.setValue(6, new int32_t[]{0, 0, -5, -1, 0, -6});
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
meta3.setContent(CString("Sun, 08 Mar 2015 05:54:30 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V2.0.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Lighting/PointLight.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Thu, 20 Oct 2016 10:59:35 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("title"));
meta8.setContent(CString("Beethoven"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
WorldInfo& WorldInfo10 =  WorldInfo();
WorldInfo10.setTitle(CString("PointLight"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Titania"));
MetadataSet11.setDEF(CString("Titania"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("NavigationInfo"));
MetadataSet12.setDEF(CString("NavigationInfo"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString13 =  MetadataString();
MetadataString13.X3DNode::setName(CString("type"));
MetadataString13.setDEF(CString("type"));
MetadataString13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString13.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet12.setValue((X3DNode *)&MetadataString13);

MetadataSet11.setValue((X3DNode *)&MetadataSet12);

MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("Viewpoint"));
MetadataSet14.setDEF(CString("Viewpoint"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("position"));
MetadataDouble15.setDEF(CString("position"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{-2.07141995429993,-0.615413010120392,9.70524978637695}, 3);
MetadataSet14.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("orientation"));
MetadataDouble16.setDEF(CString("orientation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{0.111306008788667,-0.981465731426504,-0.155999969368507,0.489277720451353}, 4);
MetadataSet14.setValue((X3DNode *)&MetadataDouble16);

MetadataDouble& MetadataDouble17 =  MetadataDouble();
MetadataDouble17.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble17.setDEF(CString("centerOfRotation"));
MetadataDouble17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble17.setValue(new double[]{3.33974003791809,-0.21424899995327,-0.636991024017334}, 3);
MetadataSet14.setValue((X3DNode *)&MetadataDouble17);

MetadataSet11.setValue((X3DNode *)&MetadataSet14);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("Selection"));
MetadataSet18.setDEF(CString("Selection"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("children"));
MetadataSet19.setDEF(CString("children"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
CFontStyle& FontStyle20 =  CFontStyle();
FontStyle20.setDEF(CString("_1"));
FontStyle20.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle20.setJustify(new CString[]{CString("END")}, 1);
MetadataSet19.setFontStyle(&FontStyle20);

MetadataSet18.setValue((X3DNode *)&MetadataSet19);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("previous"));
MetadataSet21.setDEF(CString("previous"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet18.setValue((X3DNode *)&MetadataSet21);

MetadataSet11.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet22 =  MetadataSet();
MetadataSet22.X3DNode::setName(CString("LayerSet"));
MetadataSet22.setDEF(CString("LayerSet"));
MetadataSet22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger23 =  MetadataInteger();
MetadataInteger23.X3DNode::setName(CString("activeLayer"));
MetadataInteger23.setDEF(CString("activeLayer"));
MetadataInteger23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger23.setValue(MFInt320);
MetadataSet22.setValue((X3DNode *)&MetadataInteger23);

MetadataSet11.setValue((X3DNode *)&MetadataSet22);

WorldInfo10.setMetadata(&MetadataSet11);

Scene9.addChild(&WorldInfo10);

LayerSet& LayerSet24 =  LayerSet();
LayerSet24.setActiveLayer(1);
LayerSet24.setOrder(new int32_t[]{1,2}, 2);
Layer& Layer25 =  Layer();
Layer25.setDEF(CString("World"));
MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("Titania"));
MetadataSet26.setDEF(CString("Titania_1"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("AngleGrid"));
MetadataSet27.setDEF(CString("AngleGrid"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean28 =  MetadataBoolean();
MetadataBoolean28.X3DNode::setName(CString("enabled"));
MetadataBoolean28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean28.setValue(new boolean[]{False});
MetadataSet27.setValue((X3DNode *)&MetadataBoolean28);

MetadataSet26.setValue((X3DNode *)&MetadataSet27);

MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("Grid"));
MetadataSet29.setDEF(CString("Grid"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean30 =  MetadataBoolean();
MetadataBoolean30.X3DNode::setName(CString("enabled"));
MetadataBoolean30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean30.setValue(new boolean[]{False});
MetadataSet29.setValue((X3DNode *)&MetadataBoolean30);

MetadataFloat& MetadataFloat31 =  MetadataFloat();
MetadataFloat31.X3DNode::setName(CString("rotation"));
MetadataFloat31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat31.setValue(new float[]{1,0,0,1.5708}, 4);
MetadataSet29.setValue((X3DNode *)&MetadataFloat31);

MetadataFloat& MetadataFloat32 =  MetadataFloat();
MetadataFloat32.X3DNode::setName(CString("translation"));
MetadataFloat32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat32.setValue(new float[]{9,2,0}, 3);
MetadataSet29.setValue((X3DNode *)&MetadataFloat32);

MetadataInteger& MetadataInteger33 =  MetadataInteger();
MetadataInteger33.X3DNode::setName(CString("dimension"));
MetadataInteger33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger33.setValue(MFInt321);
MetadataSet29.setValue((X3DNode *)&MetadataInteger33);

MetadataSet26.setValue((X3DNode *)&MetadataSet29);

Layer25.setMetadata(&MetadataSet26);

Background& Background34 =  Background();
Background34.setDEF(CString("Gray"));
Background34.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Layer25.addChild(&Background34);

NavigationInfo& NavigationInfo35 =  NavigationInfo();
NavigationInfo35.setHeadlight(False);
Layer25.addChild(&NavigationInfo35);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Perspective"));
Viewpoint36.setPosition(new float[]{-2.07142,-0.615413,9.70525});
Viewpoint36.setOrientation(new float[]{0.111305970237233,-0.981465737560023,-0.155999958286241,0.489278});
Viewpoint36.setCenterOfRotation(new float[]{3.33974,-0.214249,-0.636991});
Layer25.addChild(&Viewpoint36);

Transform& Transform37 =  Transform();
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("_2"));
Transform& Transform39 =  Transform();
Group& Group40 =  Group();
Group40.setDEF(CString("LightAnim"));
MetadataSet& MetadataSet41 =  MetadataSet();
MetadataSet41.X3DNode::setName(CString("Animation"));
MetadataInteger& MetadataInteger42 =  MetadataInteger();
MetadataInteger42.X3DNode::setName(CString("duration"));
MetadataInteger42.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger42.setValue(MFInt322);
MetadataSet41.setValue((X3DNode *)&MetadataInteger42);

MetadataInteger& MetadataInteger43 =  MetadataInteger();
MetadataInteger43.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger43.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger43.setValue(MFInt323);
MetadataSet41.setValue((X3DNode *)&MetadataInteger43);

Group40.setMetadata(&MetadataSet41);

TimeSensor& TimeSensor44 =  TimeSensor();
TimeSensor44.setDEF(CString("_3"));
TimeSensor44.setCycleInterval(10);
TimeSensor44.setLoop(True);
TimeSensor44.setStartTime(1452036144.23537);
TimeSensor44.setStopTime(1452036144.23535);
Group40.addChild(&TimeSensor44);

PositionInterpolator& PositionInterpolator45 =  PositionInterpolator();
PositionInterpolator45.setDEF(CString("RedLightTranslationInterpolator"));
PositionInterpolator45.setKey(new float[]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator45.setKeyValue(new float[]{1.67997,-1.46165,1.66226,1.76407,-1.3742,1.63408,1.83857,-1.27877,1.58919,1.90386,-1.17633,1.52882,1.96034,-1.06786,1.45422,2.00841,-0.954362,1.36663,2.04848,-0.836806,1.2673,2.08094,-0.716179,1.15747,2.10618,-0.593466,1.03839,2.12461,-0.469651,0.911301,2.13662,-0.345716,0.777441,2.14262,-0.222647,0.638059,2.143,-0.101426,0.494398,2.13816,0.016961,0.347701,2.1285,0.131531,0.199214,2.11442,0.241301,0.0501793,2.09632,0.345286,-0.0981588,2.07459,0.442503,-0.244556,2.04964,0.531967,-0.387769,2.02186,0.612695,-0.526554,1.99165,0.683702,-0.659666,1.95941,0.744006,-0.785863,1.92553,0.792621,-0.903899,1.89043,0.828564,-1.01253,1.85449,0.850852,-1.11052,1.81812,0.8585,-1.19661,1.77877,0.850852,-1.2761,1.73386,0.828564,-1.35493,1.68368,0.792621,-1.43281,1.62853,0.744006,-1.50945,1.56872,0.683702,-1.58456,1.50455,0.612695,-1.65785,1.43631,0.531967,-1.72905,1.36432,0.442503,-1.79786,1.28886,0.345286,-1.864,1.21024,0.241301,-1.92717,1.12877,0.131531,-1.9871,1.04475,0.016961,-2.04349,0.958469,-0.101426,-2.09606,0.870238,-0.222647,-2.14452,0.780355,-0.345716,-2.18859,0.689123,-0.469651,-2.22797,0.596842,-0.593466,-2.26238,0.503815,-0.716179,-2.29154,0.410342,-0.836806,-2.31515,0.316725,-0.954362,-2.33293,0.223266,-1.06786,-2.34459,0.130265,-1.17633,-2.34985,0.0380245,-1.27877,-2.34842,-0.0531548,-1.3742,-2.34001,-0.142971,-1.46165,-2.32433,-0.238062,-1.54683,-2.29971,-0.344326,-1.63573,-2.26509,-0.460355,-1.72773,-2.22113,-0.584741,-1.82222,-2.1685,-0.716076,-1.91858,-2.10784,-0.852952,-2.01622,-2.03983,-0.99396,-2.1145,-1.96512,-1.13769,-2.21283,-1.88436,-1.28274,-2.31058,-1.79823,-1.4277,-2.40716,-1.70737,-1.57116,-2.50193,-1.61245,-1.71171,-2.59431,-1.51413,-1.84795,-2.68366,-1.41307,-1.97846,-2.76938,-1.30992,-2.10184,-2.85086,-1.20535,-2.21668,-2.92748,-1.10001,-2.32157,-2.99864,-0.994571,-2.41511,-3.06372,-0.889685,-2.49588,-3.1221,-0.786014,-2.56248,-3.17319,-0.684216,-2.6135,-3.21635,-0.584951,-2.64753,-3.25099,-0.488879,-2.66317,-3.27649,-0.396659,-2.659,-3.29224,-0.30895,-2.63361,-3.29763,-0.226413,-2.58328,-3.29224,-0.143363,-2.5066,-3.27649,-0.0542582,-2.40568,-3.25099,0.0400306,-2.28263,-3.21635,0.138632,-2.13956,-3.17319,0.240674,-1.97857,-3.1221,0.345286,-1.80178,-3.06372,0.451596,-1.6113,-2.99864,0.558734,-1.40922,-2.92748,0.665827,-1.19766,-2.85086,0.772004,-0.978731,-2.76938,0.876394,-0.754534,-2.68366,0.978126,-0.527181,-2.59431,1.07633,-0.298778,-2.50193,1.17013,-0.0714342,-2.40716,1.25866,0.152742,-2.31058,1.34104,0.371643,-2.21283,1.41641,0.583161,-2.1145,1.48389,0.785187,-2.01622,1.54262,0.975614,-1.91858,1.59172,1.15233,-1.82222,1.63031,1.31324,-1.72773,1.65753,1.45622,-1.63573,1.67251,1.57916,-1.54683,1.67438,1.67997,-1.46165,1.66226}, 303);
MetadataSet& MetadataSet46 =  MetadataSet();
MetadataSet46.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger47 =  MetadataInteger();
MetadataInteger47.X3DNode::setName(CString("key"));
MetadataInteger47.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger47.setValue(MFInt324);
MetadataSet46.setValue((X3DNode *)&MetadataInteger47);

MetadataDouble& MetadataDouble48 =  MetadataDouble();
MetadataDouble48.X3DNode::setName(CString("keyValue"));
MetadataDouble48.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble48.setValue(new double[]{1.67997002601624,-1.46165001392365,1.66226005554199,1.81811666488647,0.858499765396118,-1.19660758972168,-0.142971247434616,-1.46165001392365,-2.32433462142944,-2.63361215591431,-3.29762887954712,-0.22641310095787,1.67997002601624,-1.46165001392365,1.66226005554199}, 15);
MetadataSet46.setValue((X3DNode *)&MetadataDouble48);

MetadataString& MetadataString49 =  MetadataString();
MetadataString49.X3DNode::setName(CString("keyType"));
MetadataString49.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString49.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet46.setValue((X3DNode *)&MetadataString49);

PositionInterpolator45.setMetadata(&MetadataSet46);

Group40.addChild(&PositionInterpolator45);

PositionInterpolator& PositionInterpolator50 =  PositionInterpolator();
PositionInterpolator50.setDEF(CString("GreenLightTranslationInterpolator"));
PositionInterpolator50.setKey(new float[]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator50.setKeyValue(new float[]{-0.946171,1.1655,2.0358,-1.01384,1.24581,2.02674,-1.07491,1.33779,1.99864,-1.12968,1.44019,1.95289,-1.17845,1.55173,1.89088,-1.22153,1.67112,1.81398,-1.25921,1.79711,1.72358,-1.2918,1.92841,1.62106,-1.31959,2.06375,1.50781,-1.34289,2.20187,1.3852,-1.362,2.34147,1.25462,-1.37722,2.48131,1.11746,-1.38885,2.62008,0.975094,-1.39719,2.75654,0.828908,-1.40255,2.88939,0.680283,-1.40521,3.01738,0.530604,-1.4055,3.13922,0.381254,-1.4037,3.25364,0.233614,-1.40011,3.35937,0.0890691,-1.39505,3.45513,-0.0509988,-1.3888,3.53965,-0.185207,-1.38167,3.61166,-0.312171,-1.37397,3.66989,-0.43051,-1.36599,3.71306,-0.538839,-1.35803,3.73989,-0.635777,-1.35039,3.74912,-0.719939,-1.34271,3.73989,-0.796342,-1.33432,3.71306,-0.870856,-1.32506,3.66989,-0.943379,-1.31476,3.61166,-1.01381,-1.30327,3.53965,-1.08205,-1.29043,3.45513,-1.14799,-1.27608,3.35937,-1.21154,-1.26005,3.25364,-1.27258,-1.2422,3.13922,-1.33103,-1.22236,3.01738,-1.38678,-1.20037,2.88939,-1.43972,-1.17606,2.75654,-1.48977,-1.1493,2.62008,-1.5368,-1.1199,2.48131,-1.58073,-1.08772,2.34147,-1.62145,-1.05259,2.20187,-1.65886,-1.01435,2.06375,-1.69286,-0.972847,1.92841,-1.72335,-0.927921,1.79711,-1.75023,-0.87941,1.67112,-1.77339,-0.827156,1.55173,-1.79273,-0.770998,1.44019,-1.80815,-0.710777,1.33779,-1.81955,-0.646334,1.24581,-1.82683,-0.57751,1.1655,-1.82989,-0.498739,1.09204,-1.82873,-0.40558,1.01984,-1.82348,-0.299557,0.949045,-1.81421,-0.182193,0.879804,-1.80102,-0.0550138,0.812267,-1.78399,0.0804579,0.74658,-1.76319,0.222698,0.682891,-1.73873,0.370182,0.62135,-1.71067,0.521387,0.562104,-1.6791,0.674788,0.505301,-1.64412,0.828861,0.45109,-1.60579,0.982082,0.399617,-1.56421,1.13293,0.351033,-1.51946,1.27987,0.305484,-1.47162,1.4214,0.263118,-1.42078,1.55597,0.224085,-1.36701,1.68207,0.188531,-1.31042,1.79818,0.156606,-1.25107,1.90277,0.128457,-1.18905,1.99431,0.104232,-1.12445,2.07129,0.084079,-1.05735,2.13218,0.068147,-0.987835,2.17545,0.0565836,-0.915987,2.19958,0.0495369,-0.841892,2.20304,0.0471551,-0.765632,2.18426,0.0495369,-0.681326,2.14378,0.0565836,-0.583971,2.08327,0.068147,-0.474966,2.00438,0.084079,-0.355712,1.90878,0.104232,-0.22761,1.79815,0.128457,-0.0920598,1.67415,0.156606,0.0495376,1.53843,0.188531,0.195782,1.39267,0.224085,0.345272,1.23854,0.263118,0.496609,1.07769,0.305484,0.64839,0.911802,0.351033,0.799217,0.742529,0.399617,0.947687,0.571541,0.45109,1.0924,0.400504,0.505301,1.23196,0.231082,0.562104,1.36496,0.0649424,0.62135,1.49,-0.0962502,0.682891,1.60569,-0.25083,0.74658,1.71061,-0.397132,0.812267,1.80338,-0.533489,0.879804,1.88258,-0.658238,0.949045,1.94683,-0.769711,1.01984,1.99471,-0.866244,1.09204,2.02484,-0.946171,1.1655,2.0358}, 303);
MetadataSet& MetadataSet51 =  MetadataSet();
MetadataSet51.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger52 =  MetadataInteger();
MetadataInteger52.X3DNode::setName(CString("key"));
MetadataInteger52.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger52.setValue(MFInt325);
MetadataSet51.setValue((X3DNode *)&MetadataInteger52);

MetadataDouble& MetadataDouble53 =  MetadataDouble();
MetadataDouble53.X3DNode::setName(CString("keyValue"));
MetadataDouble53.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble53.setValue(new double[]{-0.9461709856987,1.16550004482269,2.03579998016357,-1.35039067268372,3.74911761283875,-0.719938933849335,-0.577509522438049,1.16550004482269,-1.82989358901978,2.20304226875305,0.0471551418304443,-0.765632033348083,-0.9461709856987,1.16550004482269,2.03579998016357}, 15);
MetadataSet51.setValue((X3DNode *)&MetadataDouble53);

MetadataString& MetadataString54 =  MetadataString();
MetadataString54.X3DNode::setName(CString("keyType"));
MetadataString54.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString54.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet51.setValue((X3DNode *)&MetadataString54);

PositionInterpolator50.setMetadata(&MetadataSet51);

Group40.addChild(&PositionInterpolator50);

PositionInterpolator& PositionInterpolator55 =  PositionInterpolator();
PositionInterpolator55.setDEF(CString("BlueLightTranslationInterpolator"));
PositionInterpolator55.setKey(new float[]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator55.setKeyValue(new float[]{0.80258,-2.68914,-1.73918,0.879722,-2.64638,-1.70261,0.955826,-2.56999,-1.64603,1.03056,-2.46297,-1.57103,1.1036,-2.32831,-1.47919,1.1746,-2.16901,-1.37211,1.24324,-1.98806,-1.25137,1.30919,-1.78847,-1.11855,1.37212,-1.57323,-0.975241,1.43169,-1.34533,-0.823032,1.48757,-1.10777,-0.663507,1.53944,-0.86355,-0.498253,1.58696,-0.615662,-0.328856,1.6298,-0.367103,-0.156904,1.66764,-0.12087,0.0160182,1.70013,0.120042,0.188323,1.72695,0.352635,0.358425,1.74776,0.573914,0.524736,1.76225,0.780883,0.685671,1.77007,0.970544,0.839643,1.77089,1.1399,0.985066,1.76439,1.28596,1.12035,1.75023,1.40573,1.24392,1.72808,1.4962,1.35417,1.69761,1.55439,1.44953,1.65849,1.57729,1.52841,1.60715,1.56323,1.59513,1.54104,1.5145,1.65524,1.4613,1.43399,1.70898,1.36912,1.32463,1.75659,1.26566,1.18932,1.79831,1.15208,1.03099,1.83438,1.02956,0.852549,1.86504,0.899258,0.656909,1.89054,0.762342,0.446986,1.91111,0.619982,0.225694,1.92699,0.473344,-0.00405218,1.93842,0.323595,-0.239338,1.94564,0.171903,-0.47725,1.9489,0.0194347,-0.714873,1.94844,-0.132643,-0.949293,1.94449,-0.283162,-1.17759,1.93729,-0.430956,-1.39686,1.92709,-0.574858,-1.60419,1.91413,-0.713699,-1.79665,1.89864,-0.846314,-1.97134,1.88087,-0.971535,-2.12533,1.86106,-1.08819,-2.25572,1.83944,-1.19512,-2.3596,1.81627,-1.29116,-2.43404,1.79177,-1.37513,-2.47613,1.76619,-1.45222,-2.48585,1.73769,-1.52816,-2.46673,1.70445,-1.60264,-2.42121,1.66671,-1.67532,-2.35173,1.62475,-1.7459,-2.26072,1.57883,-1.81405,-2.15062,1.52919,-1.87945,-2.02386,1.4761,-1.94177,-1.88288,1.41982,-2.0007,-1.73011,1.36062,-2.05591,-1.56799,1.29874,-2.10707,-1.39895,1.23445,-2.15388,-1.22543,1.16801,-2.196,-1.04987,1.09967,-2.23312,-0.874695,1.02971,-2.26491,-0.702348,0.958364,-2.29105,-0.535261,0.885909,-2.31123,-0.375872,0.8126,-2.32511,-0.226614,0.738695,-2.33237,-0.0899234,0.664455,-2.3327,0.0317641,0.590139,-2.32577,0.136013,0.516006,-2.31127,0.220389,0.442316,-2.28886,0.282455,0.369328,-2.25823,0.319777,0.297302,-2.21906,0.329918,0.226498,-2.16778,0.310929,0.151703,-2.10182,0.26416,0.0682593,-2.02235,0.192128,-0.0227481,-1.93051,0.0973513,-0.120232,-1.82747,-0.017654,-0.223106,-1.71439,-0.15037,-0.330284,-1.59242,-0.29828,-0.440678,-1.46272,-0.458867,-0.553203,-1.32645,-0.629612,-0.666772,-1.18477,-0.808,-0.780298,-1.03883,-0.991513,-0.892694,-0.889794,-1.17763,-1.00287,-0.738821,-1.36384,-1.10975,-0.587066,-1.54763,-1.21224,-0.435689,-1.72647,-1.30925,-0.285847,-1.89784,-1.39971,-0.138698,-2.05924,-1.48251,0.00460011,-2.20815,-1.55657,0.142889,-2.34204,-1.62082,0.27501,-2.4584,-1.67415,0.399807,-2.55471,-1.7155,0.51612,-2.62846,-1.74375,0.622792,-2.67712,-1.75785,0.718664,-2.69819,-1.75668,0.80258,-2.68914,-1.73918}, 303);
MetadataSet& MetadataSet56 =  MetadataSet();
MetadataSet56.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger57 =  MetadataInteger();
MetadataInteger57.X3DNode::setName(CString("key"));
MetadataInteger57.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger57.setValue(MFInt326);
MetadataSet56.setValue((X3DNode *)&MetadataInteger57);

MetadataDouble& MetadataDouble58 =  MetadataDouble();
MetadataDouble58.X3DNode::setName(CString("keyValue"));
MetadataDouble58.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble58.setValue(new double[]{0.802579998970032,-2.68913912773132,-1.73917651176453,1.65848922729492,1.57728636264801,1.52840757369995,-1.3751300573349,-2.47613000869751,1.76619005203247,-2.21905589103699,0.329918414354324,0.226497903466225,0.802579998970032,-2.68913912773132,-1.73917651176453}, 15);
MetadataSet56.setValue((X3DNode *)&MetadataDouble58);

MetadataString& MetadataString59 =  MetadataString();
MetadataString59.X3DNode::setName(CString("keyType"));
MetadataString59.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString59.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet56.setValue((X3DNode *)&MetadataString59);

PositionInterpolator55.setMetadata(&MetadataSet56);

Group40.addChild(&PositionInterpolator55);

PositionInterpolator& PositionInterpolator60 =  PositionInterpolator();
PositionInterpolator60.setDEF(CString("PinkLightTranslationInterpolator"));
PositionInterpolator60.setKey(new float[]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator60.setKeyValue(new float[]{0.80258,0.426257,-2.18794,0.733537,0.422312,-2.1664,0.645973,0.410209,-2.12171,0.541725,0.390655,-2.05566,0.422626,0.364359,-1.97003,0.290512,0.332029,-1.86661,0.147218,0.294373,-1.74719,-0.00542264,0.252099,-1.61357,-0.165574,0.205915,-1.46751,-0.331401,0.15653,-1.31083,-0.501069,0.104652,-1.14529,-0.672743,0.050988,-0.972699,-0.844589,-0.00375272,-0.794834,-1.01477,-0.0588624,-0.613488,-1.18146,-0.113633,-0.430447,-1.34281,-0.167356,-0.2475,-1.49699,-0.219323,-0.0664348,-1.64217,-0.268827,0.11096,-1.77651,-0.315159,0.282897,-1.89818,-0.357611,0.447587,-2.00534,-0.395474,0.603243,-2.09616,-0.428042,0.748076,-2.1688,-0.454605,0.880298,-2.22144,-0.474455,0.998121,-2.25222,-0.486884,1.09976,-2.25932,-0.491185,1.18342,-2.24243,-0.48543,1.25347,-2.20353,-0.468881,1.31575,-2.14423,-0.442608,1.37066,-2.06614,-0.407684,1.41858,-1.97085,-0.36518,1.45991,-1.85999,-0.316168,1.49506,-1.73515,-0.261719,1.52442,-1.59794,-0.202906,1.54839,-1.44997,-0.1408,1.56736,-1.29285,-0.0764723,1.58174,-1.12817,-0.010995,1.59192,-0.957558,0.0545603,1.59829,-0.782608,0.119122,1.60126,-0.604929,0.181618,1.60122,-0.426129,0.240977,1.59857,-0.247813,0.296127,1.59371,-0.0715893,0.345997,1.58703,0.100936,0.389515,1.57893,0.268157,0.425609,1.56981,0.428467,0.453207,1.56006,0.580259,0.471238,1.55009,0.721925,0.47863,1.54029,0.851861,0.474312,1.53106,0.968458,0.457211,1.52279,1.07011,0.426257,1.51589,1.1619,0.378319,1.5079,1.25003,0.312102,1.49632,1.33455,0.229281,1.48142,1.41556,0.131529,1.46347,1.4931,0.0205239,1.44277,1.56725,-0.102061,1.41958,1.63808,-0.234549,1.39419,1.70565,-0.375266,1.36687,1.77004,-0.522536,1.33791,1.83132,-0.674684,1.30759,1.88954,-0.830035,1.27618,1.94479,-0.986914,1.24396,1.99712,-1.14365,1.21122,2.04661,-1.29855,1.17823,2.09332,-1.44996,1.14527,2.13733,-1.5962,1.11262,2.1787,-1.73559,1.08056,2.2175,-1.86645,1.04937,2.2538,-1.98712,1.01933,2.28767,-2.09591,0.990718,2.31917,-2.19115,0.963813,2.34838,-2.27117,0.938895,2.37536,-2.33429,0.916243,2.40018,-2.37883,0.896137,2.42292,-2.40313,0.878855,2.4883,-2.41901,0.83514,2.54592,-2.38444,0.802964,2.59563,-2.30624,0.779855,2.63731,-2.19125,0.76334,2.6708,-2.0463,0.750949,2.69599,-1.87823,0.74021,2.71273,-1.69388,0.728652,2.72088,-1.50007,0.713802,2.72032,-1.30365,0.693189,2.71091,-1.11145,0.664341,2.6925,-0.930296,0.624788,2.66498,-0.767033,0.572057,2.62819,-0.628494,0.503677,2.58201,-0.521514,0.417176,2.49765,-0.380555,0.223472,2.40742,-0.246634,-0.0332888,2.30811,-0.121058,-0.334963,2.19653,-0.00513326,-0.663406,2.06946,0.0998316,-1.00047,1.92371,0.192529,-1.32802,1.75607,0.271653,-1.62791,1.56335,0.335895,-1.88199,1.34232,0.383948,-2.07211,1.0898,0.414504,-2.18015,0.80258,0.426257,-2.18794}, 303);
MetadataSet& MetadataSet61 =  MetadataSet();
MetadataSet61.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger62 =  MetadataInteger();
MetadataInteger62.X3DNode::setName(CString("key"));
MetadataInteger62.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger62.setValue(MFInt327);
MetadataSet61.setValue((X3DNode *)&MetadataInteger62);

MetadataDouble& MetadataDouble63 =  MetadataDouble();
MetadataDouble63.X3DNode::setName(CString("keyValue"));
MetadataDouble63.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble63.setValue(new double[]{0.802579998970032,0.426256656646729,-2.18794059753418,-2.25932049751282,-0.491184830665588,1.18341720104218,1.0701105594635,0.426256656646729,1.5158873796463,2.42291641235352,-2.40312576293945,0.878854751586914,2.58200669288635,-0.52151358127594,0.417176455259323,0.802579998970032,0.426256656646729,-2.18794059753418}, 18);
MetadataSet61.setValue((X3DNode *)&MetadataDouble63);

MetadataString& MetadataString64 =  MetadataString();
MetadataString64.X3DNode::setName(CString("keyType"));
MetadataString64.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString64.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 6);
MetadataSet61.setValue((X3DNode *)&MetadataString64);

PositionInterpolator60.setMetadata(&MetadataSet61);

Group40.addChild(&PositionInterpolator60);

Transform39.addChild(&Group40);

Transform& Transform65 =  Transform();
Transform65.setDEF(CString("RedLight"));
Transform65.setTranslation(new float[]{2.06338,0.482709,-0.308917});
PointLight& PointLight66 =  PointLight();
PointLight66.setDEF(CString("_4"));
PointLight66.setColor(new float[]{1,0,0});
PointLight66.setAttenuation(new float[]{0.07,0.16,0.88});
Transform65.addChild(&PointLight66);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("Sphere"));
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Material70.setDEF(CString("_5"));
Material70.setEmissiveColor(new float[]{1,0,0});
Appearance69.addChild(&Material70);

Shape68.addChild(&Appearance69);

Sphere& Sphere71 =  Sphere();
Sphere71.setDEF(CString("_6"));
Sphere71.setRadius(0.08);
Shape68.setGeometry(&Sphere71);

Transform67.addChild(&Shape68);

Transform65.addChild(&Transform67);

Transform39.addChild(&Transform65);

Transform& Transform72 =  Transform();
Transform72.setDEF(CString("GreenLight"));
Transform72.setTranslation(new float[]{-1.40209,3.30116,0.168655});
PointLight& PointLight73 =  PointLight();
PointLight73.setDEF(CString("_7"));
PointLight73.setColor(new float[]{0,1,0});
PointLight73.setAttenuation(new float[]{0.07,0.16,0.88});
Transform72.addChild(&PointLight73);

Transform& Transform74 =  Transform();
Transform74.setDEF(CString("Sphere_1"));
Shape& Shape75 =  Shape();
Appearance& Appearance76 =  Appearance();
Material& Material77 =  Material();
Material77.setDEF(CString("_8"));
Material77.setEmissiveColor(new float[]{0,1,0});
Appearance76.addChild(&Material77);

Shape75.addChild(&Appearance76);

Sphere& Sphere78 =  Sphere();
Sphere78.setUSE(CString("_6"));
Shape75.setGeometry(&Sphere78);

Transform74.addChild(&Shape75);

Transform72.addChild(&Transform74);

Transform39.addChild(&Transform72);

Transform& Transform79 =  Transform();
Transform79.setDEF(CString("BlueLight"));
Transform79.setTranslation(new float[]{1.75427,0.666927,0.597061});
PointLight& PointLight80 =  PointLight();
PointLight80.setDEF(CString("_9"));
PointLight80.setColor(new float[]{0,0,1});
PointLight80.setAttenuation(new float[]{0.07,0.16,0.88});
Transform79.addChild(&PointLight80);

Transform& Transform81 =  Transform();
Transform81.setDEF(CString("Sphere_2"));
Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
Material& Material84 =  Material();
Material84.setDEF(CString("_10"));
Material84.setEmissiveColor(new float[]{0,0,1});
Appearance83.addChild(&Material84);

Shape82.addChild(&Appearance83);

Sphere& Sphere85 =  Sphere();
Sphere85.setUSE(CString("_6"));
Shape82.setGeometry(&Sphere85);

Transform81.addChild(&Shape82);

Transform79.addChild(&Transform81);

Transform39.addChild(&Transform79);

Transform& Transform86 =  Transform();
Transform86.setDEF(CString("PinkLight"));
Transform86.setTranslation(new float[]{-1.70254,-0.289649,0.18823});
PointLight& PointLight87 =  PointLight();
PointLight87.setDEF(CString("_11"));
PointLight87.setColor(new float[]{1,0,1});
PointLight87.setAttenuation(new float[]{0.07,0.16,0.88});
Transform86.addChild(&PointLight87);

Transform& Transform88 =  Transform();
Transform88.setDEF(CString("Sphere_3"));
Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Material91.setDEF(CString("_12"));
Material91.setEmissiveColor(new float[]{1,0,1});
Appearance90.addChild(&Material91);

Shape89.addChild(&Appearance90);

Sphere& Sphere92 =  Sphere();
Sphere92.setUSE(CString("_6"));
Shape89.setGeometry(&Sphere92);

Transform88.addChild(&Shape89);

Transform86.addChild(&Transform88);

Transform39.addChild(&Transform86);

Transform38.addChild(&Transform39);

Transform& Transform93 =  Transform();
Transform93.setDEF(CString("Beethoven"));
Inline& Inline94 =  Inline();
Inline94.setUrl(new CString[]{CString(", "), CString("../Geometry3D/Beethoven.x3dzfile:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/Beethoven.x3dz")}, 2);
Transform93.addChild(&Inline94);

Transform38.addChild(&Transform93);

Transform37.addChild(&Transform38);

Layer25.addChild(&Transform37);

Transform& Transform95 =  Transform();
Transform95.setTranslation(new float[]{9,0,0});
Transform& Transform96 =  Transform();
Transform96.setUSE(CString("_2"));
Transform95.addChild(&Transform96);

Layer25.addChild(&Transform95);

LayerSet24.addChild(&Layer25);

Layer& Layer97 =  Layer();
Layer97.setDEF(CString("HUD"));
MetadataSet& MetadataSet98 =  MetadataSet();
MetadataSet98.X3DNode::setName(CString("Titania"));
MetadataSet98.setDEF(CString("Titania_2"));
MetadataSet98.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet99 =  MetadataSet();
MetadataSet99.X3DNode::setName(CString("Grid"));
MetadataSet99.setDEF(CString("Grid_1"));
MetadataSet99.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean100 =  MetadataBoolean();
MetadataBoolean100.X3DNode::setName(CString("enabled"));
MetadataBoolean100.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean100.setValue(new boolean[]{True});
MetadataSet99.setValue((X3DNode *)&MetadataBoolean100);

MetadataFloat& MetadataFloat101 =  MetadataFloat();
MetadataFloat101.X3DNode::setName(CString("rotation"));
MetadataFloat101.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat101.setValue(new float[]{1,0,0,1.5708}, 4);
MetadataSet99.setValue((X3DNode *)&MetadataFloat101);

MetadataFloat& MetadataFloat102 =  MetadataFloat();
MetadataFloat102.X3DNode::setName(CString("scale"));
MetadataFloat102.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat102.setValue(new float[]{0.049,0.049,0.049}, 3);
MetadataSet99.setValue((X3DNode *)&MetadataFloat102);

MetadataInteger& MetadataInteger103 =  MetadataInteger();
MetadataInteger103.X3DNode::setName(CString("dimension"));
MetadataInteger103.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger103.setValue(MFInt328);
MetadataSet99.setValue((X3DNode *)&MetadataInteger103);

MetadataInteger& MetadataInteger104 =  MetadataInteger();
MetadataInteger104.X3DNode::setName(CString("majorLineEvery"));
MetadataInteger104.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger104.setValue(MFInt329);
MetadataSet99.setValue((X3DNode *)&MetadataInteger104);

MetadataInteger& MetadataInteger105 =  MetadataInteger();
MetadataInteger105.X3DNode::setName(CString("majorLineOffset"));
MetadataInteger105.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger105.setValue(MFInt3210);
MetadataSet99.setValue((X3DNode *)&MetadataInteger105);

MetadataFloat& MetadataFloat106 =  MetadataFloat();
MetadataFloat106.X3DNode::setName(CString("lineColor"));
MetadataFloat106.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat106.setValue(new float[]{1,0.7,0.7,0.0588235}, 4);
MetadataSet99.setValue((X3DNode *)&MetadataFloat106);

MetadataSet98.setValue((X3DNode *)&MetadataSet99);

MetadataSet& MetadataSet107 =  MetadataSet();
MetadataSet107.X3DNode::setName(CString("AngleGrid"));
MetadataSet107.setDEF(CString("AngleGrid_1"));
MetadataSet107.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean108 =  MetadataBoolean();
MetadataBoolean108.X3DNode::setName(CString("enabled"));
MetadataBoolean108.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean108.setValue(new boolean[]{False});
MetadataSet107.setValue((X3DNode *)&MetadataBoolean108);

MetadataSet98.setValue((X3DNode *)&MetadataSet107);

Layer97.setMetadata(&MetadataSet98);

OrthoViewpoint& OrthoViewpoint109 =  OrthoViewpoint();
Layer97.addChild(&OrthoViewpoint109);

Transform& Transform110 =  Transform();
Transform110.setDEF(CString("Geometry3D"));
Transform110.setTranslation(new float[]{-1.6905,0.955504,-1});
Transform110.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape111 =  Shape();
Appearance& Appearance112 =  Appearance();
Material& Material113 =  Material();
Appearance112.addChild(&Material113);

Shape111.addChild(&Appearance112);

Text& Text114 =  Text();
Text114.setString(new CString[]{CString("PointLight")}, 1);
Text114.setSolid(True);
CFontStyle& FontStyle115 =  CFontStyle();
FontStyle115.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle115.setSize(1.61);
FontStyle115.setJustify(new CString[]{CString(", "), CString("BEGINBEGIN")}, 2);
Text114.setFontStyle(&FontStyle115);

Shape111.setGeometry(&Text114);

Transform110.addChild(&Shape111);

Layer97.addChild(&Transform110);

Group& Group116 =  Group();
Group116.setDEF(CString("ShadingMenu"));
Script& Script117 =  Script();
Script117.setDEF(CString("ShadingScript"));
field& field118 =  field();
field118.setName(CString("set_pointset"));
field118.setAccessType(CString("inputOnly"));
field118.setType(CString("SFTime"));
Script117.addChild(&field118);

field& field119 =  field();
field119.setName(CString("set_wireframe"));
field119.setAccessType(CString("inputOnly"));
field119.setType(CString("SFTime"));
Script117.addChild(&field119);

field& field120 =  field();
field120.setName(CString("set_flat"));
field120.setAccessType(CString("inputOnly"));
field120.setType(CString("SFTime"));
Script117.addChild(&field120);

field& field121 =  field();
field121.setName(CString("set_gouraud"));
field121.setAccessType(CString("inputOnly"));
field121.setType(CString("SFTime"));
Script117.addChild(&field121);

field& field122 =  field();
field122.setName(CString("set_phong"));
field122.setAccessType(CString("inputOnly"));
field122.setType(CString("SFTime"));
Script117.addChild(&field122);


Script117.setSourceCode(CString("javascript:")+
_T("function set_pointset ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"POINTSET\");")+
_T("	Browser .setDescription (\"Shading: Pointset\");")+
_T("}")+
_T("function set_wireframe ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"WIREFRAME\");")+
_T("	Browser .setDescription (\"Shading: Wirefrane\");")+
_T("}")+
_T("function set_flat ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"FLAT\");")+
_T("	Browser .setDescription (\"Shading: Flat\");")+
_T("}")+
_T("function set_gouraud ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"GOURAUD\");")+
_T("	Browser .setDescription (\"Shading: Gouraud\");")+
_T("}")+
_T("function set_phong ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"PHONG\");")+
_T("	Browser .setDescription (\"Shading: Phong\");")+
_T("}"));
Group116.addChild(&Script117);

Transform& Transform123 =  Transform();
Transform123.setDEF(CString("Text"));
Transform123.setTranslation(new float[]{1.6905,-0.857496,-1});
Transform123.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape124 =  Shape();
Appearance& Appearance125 =  Appearance();
Material& Material126 =  Material();
Material126.setDEF(CString("Artdeco31"));
Material126.setAmbientIntensity(0);
Material126.setDiffuseColor(new float[]{0,0,0});
Material126.setShininess(0);
Appearance125.addChild(&Material126);

Shape124.addChild(&Appearance125);

Text& Text127 =  Text();
Text127.setString(new CString[]{CString("Shading")}, 1);
Text127.setSolid(True);
CFontStyle& FontStyle128 =  CFontStyle();
FontStyle128.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle128.setStyle(CString("BOLD"));
FontStyle128.setSize(0.68);
FontStyle128.setJustify(new CString[]{CString("END")}, 1);
Text127.setFontStyle(&FontStyle128);

Shape124.setGeometry(&Text127);

Transform123.addChild(&Shape124);

Group116.addChild(&Transform123);

Transform& Transform129 =  Transform();
Transform129.setDEF(CString("Text_1"));
Transform129.setTranslation(new float[]{1.6905,-0.955496,-1});
Transform129.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape130 =  Shape();
Appearance& Appearance131 =  Appearance();
Material& Material132 =  Material();
Appearance131.addChild(&Material132);

Shape130.addChild(&Appearance131);

Text& Text133 =  Text();
Text133.setString(new CString[]{CString("Pointset Wireframe Flat Gouraud Phong")}, 1);
Text133.setSolid(True);
CFontStyle& FontStyle134 =  CFontStyle();
FontStyle134.setUSE(CString("_1"));
Text133.setFontStyle(&FontStyle134);

Shape130.setGeometry(&Text133);

Transform129.addChild(&Shape130);

Group116.addChild(&Transform129);

Transform& Transform135 =  Transform();
Transform135.setDEF(CString("Pointset"));
Transform135.setTranslation(new float[]{0.436176,-0.916146,0});
Transform135.setScale(new float[]{0.139972,0.040588,0.040588});
Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Material138.setDEF(CString("_13"));
Material138.setTransparency(1);
Appearance137.addChild(&Material138);

Shape136.addChild(&Appearance137);

IndexedFaceSet& IndexedFaceSet139 =  IndexedFaceSet();
IndexedFaceSet139.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet139.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate140 =  TextureCoordinate();
TextureCoordinate140.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet139.setTexCoord(&TextureCoordinate140);

Coordinate& Coordinate141 =  Coordinate();
Coordinate141.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet139.setCoord(&Coordinate141);

Shape136.setGeometry(&IndexedFaceSet139);

Transform135.addChild(&Shape136);

TouchSensor& TouchSensor142 =  TouchSensor();
TouchSensor142.setDEF(CString("_14"));
Transform135.addChild(&TouchSensor142);

Group116.addChild(&Transform135);

Transform& Transform143 =  Transform();
Transform143.setDEF(CString("Wireframe"));
Transform143.setTranslation(new float[]{0.77569,-0.916146,0});
Transform143.setScale(new float[]{0.177062,0.040588,0.040588});
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Material& Material146 =  Material();
Material146.setUSE(CString("_13"));
Appearance145.addChild(&Material146);

Shape144.addChild(&Appearance145);

IndexedFaceSet& IndexedFaceSet147 =  IndexedFaceSet();
IndexedFaceSet147.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet147.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate148 =  TextureCoordinate();
TextureCoordinate148.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet147.setTexCoord(&TextureCoordinate148);

Coordinate& Coordinate149 =  Coordinate();
Coordinate149.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet147.setCoord(&Coordinate149);

Shape144.setGeometry(&IndexedFaceSet147);

Transform143.addChild(&Shape144);

TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDEF(CString("_15"));
Transform143.addChild(&TouchSensor150);

Group116.addChild(&Transform143);

Transform& Transform151 =  Transform();
Transform151.setDEF(CString("Flat"));
Transform151.setTranslation(new float[]{1.04432,-0.916146,0});
Transform151.setScale(new float[]{0.0743511,0.040588,0.040588});
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Material154.setUSE(CString("_13"));
Appearance153.addChild(&Material154);

Shape152.addChild(&Appearance153);

IndexedFaceSet& IndexedFaceSet155 =  IndexedFaceSet();
IndexedFaceSet155.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet155.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate156 =  TextureCoordinate();
TextureCoordinate156.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet155.setTexCoord(&TextureCoordinate156);

Coordinate& Coordinate157 =  Coordinate();
Coordinate157.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet155.setCoord(&Coordinate157);

Shape152.setGeometry(&IndexedFaceSet155);

Transform151.addChild(&Shape152);

TouchSensor& TouchSensor158 =  TouchSensor();
TouchSensor158.setDEF(CString("_16"));
Transform151.addChild(&TouchSensor158);

Group116.addChild(&Transform151);

Transform& Transform159 =  Transform();
Transform159.setDEF(CString("Gouraud"));
Transform159.setTranslation(new float[]{1.27986,-0.916146,0});
Transform159.setScale(new float[]{0.142825,0.040588,0.040588});
Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setUSE(CString("_13"));
Appearance161.addChild(&Material162);

Shape160.addChild(&Appearance161);

IndexedFaceSet& IndexedFaceSet163 =  IndexedFaceSet();
IndexedFaceSet163.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet163.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate164 =  TextureCoordinate();
TextureCoordinate164.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet163.setTexCoord(&TextureCoordinate164);

Coordinate& Coordinate165 =  Coordinate();
Coordinate165.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet163.setCoord(&Coordinate165);

Shape160.setGeometry(&IndexedFaceSet163);

Transform159.addChild(&Shape160);

TouchSensor& TouchSensor166 =  TouchSensor();
TouchSensor166.setDEF(CString("_17"));
Transform159.addChild(&TouchSensor166);

Group116.addChild(&Transform159);

Transform& Transform167 =  Transform();
Transform167.setDEF(CString("Phong"));
Transform167.setTranslation(new float[]{1.55457,-0.916146,0});
Transform167.setScale(new float[]{0.111441,0.040588,0.040588});
Shape& Shape168 =  Shape();
Appearance& Appearance169 =  Appearance();
Material& Material170 =  Material();
Material170.setUSE(CString("_13"));
Appearance169.addChild(&Material170);

Shape168.addChild(&Appearance169);

IndexedFaceSet& IndexedFaceSet171 =  IndexedFaceSet();
IndexedFaceSet171.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet171.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate172 =  TextureCoordinate();
TextureCoordinate172.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet171.setTexCoord(&TextureCoordinate172);

Coordinate& Coordinate173 =  Coordinate();
Coordinate173.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet171.setCoord(&Coordinate173);

Shape168.setGeometry(&IndexedFaceSet171);

Transform167.addChild(&Shape168);

TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDEF(CString("_18"));
Transform167.addChild(&TouchSensor174);

Group116.addChild(&Transform167);

Layer97.addChild(&Group116);

LayerSet24.addChild(&Layer97);

Scene9.addChild(&LayerSet24);

ROUTE& ROUTE175 =  ROUTE();
ROUTE175.setFromNode(CString("_3"));
ROUTE175.setFromField(CString("fraction_changed"));
ROUTE175.setToNode(CString("RedLightTranslationInterpolator"));
ROUTE175.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE175);

ROUTE& ROUTE176 =  ROUTE();
ROUTE176.setFromNode(CString("RedLightTranslationInterpolator"));
ROUTE176.setFromField(CString("value_changed"));
ROUTE176.setToNode(CString("RedLight"));
ROUTE176.setToField(CString("set_translation"));
Scene9.addChild(&ROUTE176);

ROUTE& ROUTE177 =  ROUTE();
ROUTE177.setFromNode(CString("_3"));
ROUTE177.setFromField(CString("fraction_changed"));
ROUTE177.setToNode(CString("GreenLightTranslationInterpolator"));
ROUTE177.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE177);

ROUTE& ROUTE178 =  ROUTE();
ROUTE178.setFromNode(CString("GreenLightTranslationInterpolator"));
ROUTE178.setFromField(CString("value_changed"));
ROUTE178.setToNode(CString("GreenLight"));
ROUTE178.setToField(CString("set_translation"));
Scene9.addChild(&ROUTE178);

ROUTE& ROUTE179 =  ROUTE();
ROUTE179.setFromNode(CString("_3"));
ROUTE179.setFromField(CString("fraction_changed"));
ROUTE179.setToNode(CString("BlueLightTranslationInterpolator"));
ROUTE179.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE179);

ROUTE& ROUTE180 =  ROUTE();
ROUTE180.setFromNode(CString("BlueLightTranslationInterpolator"));
ROUTE180.setFromField(CString("value_changed"));
ROUTE180.setToNode(CString("BlueLight"));
ROUTE180.setToField(CString("set_translation"));
Scene9.addChild(&ROUTE180);

ROUTE& ROUTE181 =  ROUTE();
ROUTE181.setFromNode(CString("_3"));
ROUTE181.setFromField(CString("fraction_changed"));
ROUTE181.setToNode(CString("PinkLightTranslationInterpolator"));
ROUTE181.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE181);

ROUTE& ROUTE182 =  ROUTE();
ROUTE182.setFromNode(CString("PinkLightTranslationInterpolator"));
ROUTE182.setFromField(CString("value_changed"));
ROUTE182.setToNode(CString("PinkLight"));
ROUTE182.setToField(CString("set_translation"));
Scene9.addChild(&ROUTE182);

ROUTE& ROUTE183 =  ROUTE();
ROUTE183.setFromNode(CString("_18"));
ROUTE183.setFromField(CString("touchTime"));
ROUTE183.setToNode(CString("ShadingScript"));
ROUTE183.setToField(CString("set_phong"));
Scene9.addChild(&ROUTE183);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("_17"));
ROUTE184.setFromField(CString("touchTime"));
ROUTE184.setToNode(CString("ShadingScript"));
ROUTE184.setToField(CString("set_gouraud"));
Scene9.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("_16"));
ROUTE185.setFromField(CString("touchTime"));
ROUTE185.setToNode(CString("ShadingScript"));
ROUTE185.setToField(CString("set_flat"));
Scene9.addChild(&ROUTE185);

ROUTE& ROUTE186 =  ROUTE();
ROUTE186.setFromNode(CString("_15"));
ROUTE186.setFromField(CString("touchTime"));
ROUTE186.setToNode(CString("ShadingScript"));
ROUTE186.setToField(CString("set_wireframe"));
Scene9.addChild(&ROUTE186);

ROUTE& ROUTE187 =  ROUTE();
ROUTE187.setFromNode(CString("_14"));
ROUTE187.setFromField(CString("touchTime"));
ROUTE187.setToNode(CString("ShadingScript"));
ROUTE187.setToField(CString("set_pointset"));
Scene9.addChild(&ROUTE187);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("_4"));
ROUTE188.setFromField(CString("color_changed"));
ROUTE188.setToNode(CString("_5"));
ROUTE188.setToField(CString("set_emissiveColor"));
Scene9.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("_11"));
ROUTE189.setFromField(CString("color_changed"));
ROUTE189.setToNode(CString("_12"));
ROUTE189.setToField(CString("set_emissiveColor"));
Scene9.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_9"));
ROUTE190.setFromField(CString("color_changed"));
ROUTE190.setToNode(CString("_10"));
ROUTE190.setToField(CString("set_emissiveColor"));
Scene9.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("_7"));
ROUTE191.setFromField(CString("color_changed"));
ROUTE191.setToNode(CString("_8"));
ROUTE191.setToField(CString("set_emissiveColor"));
Scene9.addChild(&ROUTE191);

X3D0.setScene(&Scene9);

}
