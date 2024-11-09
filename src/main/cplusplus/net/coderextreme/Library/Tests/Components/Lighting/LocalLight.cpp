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
MFInt321.setValue(1, new int32_t[]{120});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{10});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(5, new int32_t[]{0, 30, 60, 90, 120});
MFInt32 MFInt324 =  MFInt32();
MFInt324.setValue(5, new int32_t[]{0, 30, 60, 90, 120});
MFInt32 MFInt325 =  MFInt32();
MFInt325.setValue(3, new int32_t[]{0, 60, 120});
MFInt32 MFInt326 =  MFInt32();
MFInt326.setValue(3, new int32_t[]{0, 60, 120});
MFInt32 MFInt327 =  MFInt32();
MFInt327.setValue(3, new int32_t[]{73, 10, 41});
MFInt32 MFInt328 =  MFInt32();
MFInt328.setValue(6, new int32_t[]{5, 5, 5, 5, 0, 5});
MFInt32 MFInt329 =  MFInt32();
MFInt329.setValue(6, new int32_t[]{0, 0, -5, -1, 0, -6});
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
meta3.setContent(CString("Tue, 22 Sep 2015 03:19:15 GMT"));
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
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Lighting/LocalLight.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Thu, 20 Oct 2016 11:00:29 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("LocalLight"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("NavigationInfo"));
MetadataSet11.setDEF(CString("NavigationInfo"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString12 =  MetadataString();
MetadataString12.X3DNode::setName(CString("type"));
MetadataString12.setDEF(CString("type"));
MetadataString12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString12.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet11.setValue((X3DNode *)&MetadataString12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Viewpoint"));
MetadataSet13.setDEF(CString("Viewpoint"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("position"));
MetadataDouble14.setDEF(CString("position"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{38.5307998657227,38.1931991577148,54.2624015808105}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{-0.873252862989652,0.462253895384657,0.154112859561057,0.974525034427643}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{20,0,20}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Selection"));
MetadataSet17.setDEF(CString("Selection"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("children"));
MetadataSet18.setDEF(CString("children"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
CFontStyle& FontStyle19 =  CFontStyle();
FontStyle19.setDEF(CString("_1"));
FontStyle19.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle19.setJustify(new CString[]{CString("END")}, 1);
MetadataSet18.setFontStyle(&FontStyle19);

MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("previous"));
MetadataSet20.setDEF(CString("previous"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet20);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("LayerSet"));
MetadataSet21.setDEF(CString("LayerSet"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger22 =  MetadataInteger();
MetadataInteger22.X3DNode::setName(CString("activeLayer"));
MetadataInteger22.setDEF(CString("activeLayer"));
MetadataInteger22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger22.setValue(MFInt320);
MetadataSet21.setValue((X3DNode *)&MetadataInteger22);

MetadataSet10.setValue((X3DNode *)&MetadataSet21);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

LayerSet& LayerSet23 =  LayerSet();
LayerSet23.setActiveLayer(1);
LayerSet23.setOrder(new int32_t[]{1,2}, 2);
Layer& Layer24 =  Layer();
Background& Background25 =  Background();
Background25.setDEF(CString("Gray"));
Background25.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Layer24.addChild(&Background25);

NavigationInfo& NavigationInfo26 =  NavigationInfo();
NavigationInfo26.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo26.setHeadlight(False);
Layer24.addChild(&NavigationInfo26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(CString("Home"));
Viewpoint27.setPosition(new float[]{38.5308,38.1932,54.2624});
Viewpoint27.setOrientation(new float[]{-0.873252834390235,0.462253912334941,0.15411297077294,0.974525});
Viewpoint27.setCenterOfRotation(new float[]{20,0,20});
Layer24.addChild(&Viewpoint27);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("GlobalLight"));
Transform28.setTranslation(new float[]{8.04568,10.189,9.98222});
PointLight& PointLight29 =  PointLight();
PointLight29.setIntensity(0.0650888);
Transform28.addChild(&PointLight29);

Layer24.addChild(&Transform28);

Transform& Transform30 =  Transform();
Transform30.setDEF(CString("Tile1"));
Transform& Transform31 =  Transform();
Transform31.setDEF(CString("_2"));
Transform& Transform32 =  Transform();
Transform32.setTranslation(new float[]{10,10,10});
Transform32.setRotation(new float[]{-1,-2.09955e-10,-1.12942e-9,1.57});
Transform32.setScaleOrientation(new float[]{0.991022590991182,-0.0697250712234926,0.114072952920504,0.180415999999999});
Group& Group33 =  Group();
Group33.setDEF(CString("LightAnim"));
MetadataSet& MetadataSet34 =  MetadataSet();
MetadataSet34.X3DNode::setName(CString("Animation"));
MetadataInteger& MetadataInteger35 =  MetadataInteger();
MetadataInteger35.X3DNode::setName(CString("duration"));
MetadataInteger35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger35.setValue(MFInt321);
MetadataSet34.setValue((X3DNode *)&MetadataInteger35);

MetadataInteger& MetadataInteger36 =  MetadataInteger();
MetadataInteger36.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger36.setValue(MFInt322);
MetadataSet34.setValue((X3DNode *)&MetadataInteger36);

Group33.setMetadata(&MetadataSet34);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("_3"));
TimeSensor37.setCycleInterval(12);
TimeSensor37.setLoop(True);
Group33.addChild(&TimeSensor37);

PositionInterpolator& PositionInterpolator38 =  PositionInterpolator();
PositionInterpolator38.setDEF(CString("DirectionInterpolator"));
PositionInterpolator38.setKey(new float[]{0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1}, 121);
PositionInterpolator38.setKeyValue(new float[]{-0.475709,-0.436148,-0.763856,-0.487436,-0.421618,-0.765291,-0.497508,-0.404542,-0.767164,-0.505976,-0.385102,-0.769443,-0.512895,-0.363478,-0.772098,-0.518318,-0.339852,-0.775096,-0.522298,-0.314407,-0.778408,-0.524889,-0.287322,-0.782,-0.526143,-0.25878,-0.785843,-0.526115,-0.228962,-0.789906,-0.524858,-0.19805,-0.794156,-0.522425,-0.166225,-0.798563,-0.518869,-0.133668,-0.803095,-0.514244,-0.100561,-0.807722,-0.508603,-0.0670861,-0.812411,-0.502,-0.0334238,-0.817133,-0.494488,0.000244015,-0.821855,-0.48612,0.033736,-0.826547,-0.476949,0.0668705,-0.831177,-0.46703,0.0994663,-0.835714,-0.456415,0.131342,-0.840127,-0.445158,0.162316,-0.844384,-0.433312,0.192206,-0.848455,-0.42093,0.220832,-0.852308,-0.408067,0.248011,-0.855912,-0.394774,0.273563,-0.859236,-0.381107,0.297306,-0.862248,-0.367117,0.319059,-0.864918,-0.352859,0.338639,-0.867214,-0.338385,0.355866,-0.869105,-0.323749,0.370557,-0.870559,-0.30804,0.383454,-0.871636,-0.290405,0.39542,-0.872423,-0.270987,0.406458,-0.872936,-0.249929,0.416571,-0.87319,-0.227372,0.425762,-0.873199,-0.20346,0.434035,-0.872978,-0.178336,0.441394,-0.872543,-0.152141,0.44784,-0.871907,-0.125019,0.453379,-0.871087,-0.0971121,0.458012,-0.870096,-0.068563,0.461743,-0.86895,-0.0395143,0.464577,-0.867663,-0.0101085,0.466514,-0.866251,0.0195116,0.46756,-0.864728,0.0492035,0.467718,-0.863109,0.0788245,0.46699,-0.861409,0.108232,0.46538,-0.859642,0.137284,0.462891,-0.857825,0.165836,0.459527,-0.85597,0.193748,0.45529,-0.854095,0.220876,0.450185,-0.852212,0.247077,0.444214,-0.850338,0.272209,0.437381,-0.848486,0.296129,0.429689,-0.846672,0.318695,0.42114,-0.844911,0.339763,0.41174,-0.843218,0.359193,0.40149,-0.841607,0.37684,0.390394,-0.840093,0.392562,0.378456,-0.838692,0.406216,0.365678,-0.837417,0.418519,0.351213,-0.836202,0.430263,0.334325,-0.834969,0.441423,0.315187,-0.833719,0.451974,0.293971,-0.832454,0.461892,0.27085,-0.831175,0.471151,0.245997,-0.829883,0.479726,0.219585,-0.82858,0.487593,0.191785,-0.827266,0.494725,0.162772,-0.825943,0.501099,0.132717,-0.824612,0.506688,0.101792,-0.823274,0.511469,0.0701721,-0.821931,0.515416,0.0380281,-0.820583,0.518504,0.00553328,-0.819233,0.520707,-0.0271398,-0.81788,0.522002,-0.0598185,-0.816527,0.522363,-0.0923301,-0.815174,0.521764,-0.124502,-0.813823,0.520181,-0.156161,-0.812475,0.517589,-0.187136,-0.811131,0.513963,-0.217253,-0.809793,0.509278,-0.246339,-0.808461,0.503508,-0.274222,-0.807137,0.496629,-0.300729,-0.805823,0.488615,-0.325689,-0.804518,0.479443,-0.348927,-0.803225,0.469085,-0.370271,-0.801945,0.457519,-0.389549,-0.800679,0.444717,-0.406588,-0.799428,0.430657,-0.421215,-0.798193,0.414373,-0.434177,-0.796897,0.395065,-0.44633,-0.79547,0.372955,-0.45767,-0.793927,0.348264,-0.468191,-0.792284,0.321213,-0.477887,-0.790555,0.292022,-0.486753,-0.788756,0.260913,-0.494784,-0.786903,0.228107,-0.501973,-0.785009,0.193824,-0.508316,-0.78309,0.158286,-0.513806,-0.781162,0.121714,-0.518439,-0.779239,0.084329,-0.522208,-0.777337,0.0463515,-0.525109,-0.77547,0.00800288,-0.527135,-0.773654,-0.0304959,-0.528282,-0.771904,-0.0689239,-0.528543,-0.770235,-0.10706,-0.527913,-0.768663,-0.144683,-0.526387,-0.767201,-0.181573,-0.523959,-0.765867,-0.217507,-0.520624,-0.764673,-0.252266,-0.516375,-0.763637,-0.285627,-0.511209,-0.762772,-0.317371,-0.505118,-0.762094,-0.347276,-0.498098,-0.761619,-0.37512,-0.490143,-0.76136,-0.400684,-0.481247,-0.761334,-0.423746,-0.471405,-0.761556,-0.444085,-0.460612,-0.76204,-0.461479,-0.448861,-0.762801,-0.475709,-0.436148,-0.763856}, 363);
MetadataSet& MetadataSet39 =  MetadataSet();
MetadataSet39.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger40 =  MetadataInteger();
MetadataInteger40.X3DNode::setName(CString("key"));
MetadataInteger40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger40.setValue(MFInt323);
MetadataSet39.setValue((X3DNode *)&MetadataInteger40);

MetadataDouble& MetadataDouble41 =  MetadataDouble();
MetadataDouble41.X3DNode::setName(CString("keyValue"));
MetadataDouble41.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble41.setValue(new double[]{-0.475708842277527,-0.436148166656494,-0.763855934143066,-0.323749333620071,0.370557337999344,-0.870559394359589,0.406216442584991,0.365678489208221,-0.837417185306549,0.430656850337982,-0.421214938163757,-0.798193275928497,-0.475708842277527,-0.436148166656494,-0.763855934143066}, 15);
MetadataSet39.setValue((X3DNode *)&MetadataDouble41);

MetadataString& MetadataString42 =  MetadataString();
MetadataString42.X3DNode::setName(CString("keyType"));
MetadataString42.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString42.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet39.setValue((X3DNode *)&MetadataString42);

PositionInterpolator38.setMetadata(&MetadataSet39);

Group33.addChild(&PositionInterpolator38);

ColorInterpolator& ColorInterpolator43 =  ColorInterpolator();
ColorInterpolator43.setDEF(CString("ColorInterpolator"));
ColorInterpolator43.setKey(new float[]{0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1}, 121);
ColorInterpolator43.setKeyValue(new float[]{1,0,0,1,0.0499985,0,1,0.0999942,0,1,0.149987,0,1,0.199979,0,1,0.249968,0,1,0.299955,0,1,0.349942,0,1,0.399927,0,1,0.449912,0,1,0.499897,0,1,0.549881,0,1,0.599866,0,1,0.649852,0,1,0.699838,0,1,0.749826,0,1,0.799815,0,1,0.849806,0,1,0.899799,0,1,0.949795,0,1,0.999793,0,0.950205,1,0,0.9002,1,0,0.850191,1,0,0.800179,1,0,0.750161,1,0,0.70014,1,0,0.650113,1,0,0.600081,1,0,0.550043,1,0,0.5,1,0,0.449945,1,0,0.399873,1,0,0.349786,1,0,0.299686,1,0,0.249573,1,0,0.19945,1,0,0.149318,1,0,0.0991781,1,0,0.0490322,1,0,0,1,0.00111821,0,1,0.0512717,0,1,0.101427,0,1,0.151582,0,1,0.201736,0,1,0.251887,0,1,0.302034,0,1,0.352174,0,1,0.402308,0,1,0.452432,0,1,0.502546,0,1,0.552649,0,1,0.602738,0,1,0.652812,0,1,0.702869,0,1,0.752909,0,1,0.80293,0,1,0.85293,0,1,0.902907,0,1,0.952861,0,0.997211,1,0,0.94731,1,0,0.897438,1,0,0.847593,1,0,0.797772,1,0,0.747975,1,0,0.698198,1,0,0.648441,1,0,0.598701,1,0,0.548976,1,0,0.499265,1,0,0.449566,1,0,0.399877,1,0,0.350197,1,0,0.300522,1,0,0.250852,1,0,0.201185,1,0,0.151518,1,0,0.101851,1,0,0.0521804,1,0,0.00250527,1,0.0471765,0,1,0.0968666,0,1,0.146567,0,1,0.19628,0,1,0.246006,0,1,0.295748,0,1,0.345508,0,1,0.395287,0,1,0.445088,0,1,0.494912,0,1,0.544754,0,1,0.594609,0,1,0.644476,0,1,0.694353,0,1,0.744242,0,1,0.79414,0,1,0.844047,0,1,0.893963,0,1,0.943887,0,1,0.993818,0,1,1,0,0.956244,1,0,0.906301,1,0,0.856352,1,0,0.806399,1,0,0.756441,1,0,0.706481,1,0,0.656518,1,0,0.606552,1,0,0.556586,1,0,0.506619,1,0,0.456652,1,0,0.406685,1,0,0.35672,1,0,0.306757,1,0,0.256796,1,0,0.206839,1,0,0.156885,1,0,0.106937,1,0,0.0569931,1,0,0.00705553}, 363);
MetadataSet& MetadataSet44 =  MetadataSet();
MetadataSet44.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger45 =  MetadataInteger();
MetadataInteger45.X3DNode::setName(CString("key"));
MetadataInteger45.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger45.setValue(MFInt324);
MetadataSet44.setValue((X3DNode *)&MetadataInteger45);

MetadataDouble& MetadataDouble46 =  MetadataDouble();
MetadataDouble46.X3DNode::setName(CString("keyValue"));
MetadataDouble46.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble46.setValue(new double[]{1,0,0,0.5,1,0,0,0.997210741043091,1,0.494911581277847,0,1,1,0,0.00705553032457829}, 15);
MetadataSet44.setValue((X3DNode *)&MetadataDouble46);

MetadataString& MetadataString47 =  MetadataString();
MetadataString47.X3DNode::setName(CString("keyType"));
MetadataString47.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString47.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet44.setValue((X3DNode *)&MetadataString47);

ColorInterpolator43.setMetadata(&MetadataSet44);

Group33.addChild(&ColorInterpolator43);

ScalarInterpolator& ScalarInterpolator48 =  ScalarInterpolator();
ScalarInterpolator48.setDEF(CString("BeamWidthInterpolator"));
ScalarInterpolator48.setKey(new float[]{0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1}, 121);
ScalarInterpolator48.setKeyValue(new float[]{0.5,0.499596,0.498403,0.496448,0.493757,0.490359,0.48628,0.481548,0.47619,0.470232,0.463704,0.45663,0.44904,0.44096,0.432416,0.423438,0.41405,0.404282,0.39416,0.383711,0.372963,0.361942,0.350677,0.339194,0.32752,0.315683,0.30371,0.291627,0.279464,0.267245,0.255,0.242755,0.230536,0.218372,0.20629,0.194317,0.18248,0.170806,0.159323,0.148058,0.137037,0.126289,0.11584,0.105718,0.0959496,0.0865625,0.0775837,0.0690405,0.06096,0.0533695,0.0462963,0.0397675,0.0338104,0.0284521,0.02372,0.0196412,0.016243,0.0135525,0.011597,0.0104038,0.01,0.0104038,0.011597,0.0135525,0.016243,0.0196412,0.02372,0.0284521,0.0338104,0.0397675,0.0462963,0.0533695,0.06096,0.0690405,0.0775837,0.0865625,0.0959496,0.105718,0.11584,0.126289,0.137037,0.148058,0.159323,0.170806,0.18248,0.194317,0.20629,0.218372,0.230536,0.242755,0.255,0.267245,0.279464,0.291627,0.30371,0.315683,0.32752,0.339194,0.350677,0.361942,0.372963,0.383711,0.39416,0.404282,0.41405,0.423438,0.432416,0.44096,0.44904,0.45663,0.463704,0.470232,0.47619,0.481548,0.48628,0.490359,0.493757,0.496448,0.498403,0.499596,0.5}, 121);
MetadataSet& MetadataSet49 =  MetadataSet();
MetadataSet49.X3DNode::setName(CString("Interpolator"));
MetadataSet49.setDEF(CString("Interpolator"));
MetadataSet49.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger50 =  MetadataInteger();
MetadataInteger50.X3DNode::setName(CString("key"));
MetadataInteger50.setDEF(CString("key"));
MetadataInteger50.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger50.setValue(MFInt325);
MetadataSet49.setValue((X3DNode *)&MetadataInteger50);

MetadataDouble& MetadataDouble51 =  MetadataDouble();
MetadataDouble51.X3DNode::setName(CString("keyValue"));
MetadataDouble51.setDEF(CString("keyValue"));
MetadataDouble51.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble51.setValue(new double[]{0.5,0.00999999977648258,0.5}, 3);
MetadataSet49.setValue((X3DNode *)&MetadataDouble51);

MetadataString& MetadataString52 =  MetadataString();
MetadataString52.X3DNode::setName(CString("keyType"));
MetadataString52.setDEF(CString("keyType"));
MetadataString52.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString52.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINESPLINE")}, 3);
MetadataSet49.setValue((X3DNode *)&MetadataString52);

ScalarInterpolator48.setMetadata(&MetadataSet49);

Group33.addChild(&ScalarInterpolator48);

ScalarInterpolator& ScalarInterpolator53 =  ScalarInterpolator();
ScalarInterpolator53.setDEF(CString("CutOffAngleInterpolator"));
ScalarInterpolator53.setKey(new float[]{0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1}, 121);
ScalarInterpolator53.setKeyValue(new float[]{1.5708,1.56967,1.56633,1.56086,1.55333,1.54382,1.53241,1.51918,1.50419,1.48752,1.46926,1.44947,1.42823,1.40563,1.38173,1.35661,1.33035,1.30302,1.2747,1.24547,1.2154,1.18457,1.15306,1.12093,1.08828,1.05516,1.02167,0.987865,0.953836,0.919655,0.885398,0.851141,0.81696,0.782931,0.749131,0.715635,0.68252,0.649862,0.617737,0.586222,0.555392,0.525323,0.496092,0.467775,0.440448,0.414187,0.389068,0.365168,0.342563,0.321328,0.30154,0.283276,0.266611,0.251621,0.238382,0.226972,0.217465,0.209938,0.204468,0.20113,0.2,0.20113,0.204468,0.209938,0.217465,0.226972,0.238382,0.251621,0.266611,0.283276,0.30154,0.321328,0.342563,0.365168,0.389068,0.414187,0.440448,0.467775,0.496092,0.525323,0.555392,0.586222,0.617737,0.649862,0.68252,0.715635,0.749131,0.782931,0.81696,0.851141,0.885398,0.919655,0.953836,0.987865,1.02167,1.05516,1.08828,1.12093,1.15306,1.18457,1.2154,1.24547,1.2747,1.30302,1.33035,1.35661,1.38173,1.40563,1.42823,1.44947,1.46926,1.48752,1.50419,1.51918,1.53241,1.54382,1.55333,1.56086,1.56633,1.56967,1.5708}, 121);
MetadataSet& MetadataSet54 =  MetadataSet();
MetadataSet54.X3DNode::setName(CString("Interpolator"));
MetadataSet54.setDEF(CString("Interpolator_1"));
MetadataSet54.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger55 =  MetadataInteger();
MetadataInteger55.X3DNode::setName(CString("key"));
MetadataInteger55.setDEF(CString("key_1"));
MetadataInteger55.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger55.setValue(MFInt326);
MetadataSet54.setValue((X3DNode *)&MetadataInteger55);

MetadataDouble& MetadataDouble56 =  MetadataDouble();
MetadataDouble56.X3DNode::setName(CString("keyValue"));
MetadataDouble56.setDEF(CString("keyValue_1"));
MetadataDouble56.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble56.setValue(new double[]{1.57079601287842,0.200000002980232,1.57079601287842}, 3);
MetadataSet54.setValue((X3DNode *)&MetadataDouble56);

MetadataString& MetadataString57 =  MetadataString();
MetadataString57.X3DNode::setName(CString("keyType"));
MetadataString57.setDEF(CString("keyType_1"));
MetadataString57.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString57.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINESPLINE")}, 3);
MetadataSet54.setValue((X3DNode *)&MetadataString57);

ScalarInterpolator53.setMetadata(&MetadataSet54);

Group33.addChild(&ScalarInterpolator53);

Transform32.addChild(&Group33);

SpotLight& SpotLight58 =  SpotLight();
SpotLight58.setDEF(CString("_4"));
SpotLight58.setGlobal(False);
SpotLight58.setColor(new float[]{1,0,0.439812});
SpotLight58.setIntensity(0.485207);
SpotLight58.setDirection(new float[]{-0.26351,-0.514634,-0.763345});
SpotLight58.setBeamWidth(0.47224);
SpotLight58.setCutOffAngle(1.49314);
Transform32.addChild(&SpotLight58);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("ElevationGrid"));
Transform59.setTranslation(new float[]{-10,9.99203,-10.008});
Transform59.setRotation(new float[]{1,1.00032e-9,3.08126e-10,1.57});
Transform59.setScaleOrientation(new float[]{0.991100738221959,0.113549970008207,0.069467481651652,0.181206});
Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
Material& Material62 =  Material();
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

ElevationGrid& ElevationGrid63 =  ElevationGrid();
ElevationGrid63.setXDimension(20);
ElevationGrid63.setZDimension(20);
Shape60.setGeometry(ElevationGrid63);

Transform59.addChild(&Shape60);

Transform32.addChild(&Transform59);

Transform& Transform64 =  Transform();
Transform64.setDEF(CString("Cone"));
Transform64.setRotation(new float[]{0.890101675582162,-0.455762007110978,0,2.49335868029868});
Transform64.setScaleOrientation(new float[]{-0.546046080148377,0.18703802745335,-0.816609119861487,0.459043});
Transform& Transform65 =  Transform();
Transform65.setDEF(CString("Cone_1"));
Transform65.setRotation(new float[]{-0.999999999993436,-0.00000362331999997622,8.16271999994642e-11,1.5708});
Transform65.setScaleOrientation(new float[]{0.999999999986922,0.00000161480999997888,0.00000485263999993654,0.785375});
Shape& Shape66 =  Shape();
Appearance& Appearance67 =  Appearance();
Material& Material68 =  Material();
Material68.setDEF(CString("_5"));
Material68.setAmbientIntensity(0);
Material68.setDiffuseColor(new float[]{0,0,0});
Material68.setEmissiveColor(new float[]{1,0,0.439812});
Material68.setShininess(0);
Appearance67.addChild(&Material68);

Shape66.addChild(&Appearance67);

Cone& Cone69 =  Cone();
Shape66.setGeometry(&Cone69);

Transform65.addChild(&Shape66);

Transform64.addChild(&Transform65);

Transform32.addChild(&Transform64);

Script& Script70 =  Script();
Script70.setDEF(CString("RotationScript"));
field& field71 =  field();
field71.setName(CString("set_direction"));
field71.setAccessType(CString("inputOnly"));
field71.setType(CString("SFVec3f"));
Script70.addChild(&field71);

field& field72 =  field();
field72.setName(CString("rotation_changed"));
field72.setAccessType(CString("outputOnly"));
field72.setType(CString("SFRotation"));
Script70.addChild(&field72);


Script70.setSourceCode(CString("ecmascript:")+
_T("function set_direction (value)")+
_T("{")+
_T("	rotation_changed = new SFRotation (new SFVec3f (0, 0, 1), value);")+
_T("}"));
Transform32.addChild(&Script70);

Transform31.addChild(&Transform32);

Transform& Transform73 =  Transform();
Transform73.setDEF(CString("Box"));
Transform73.setTranslation(new float[]{4.28962,1.06325,4.82481});
Shape& Shape74 =  Shape();
Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Appearance75.addChild(&Material76);

Shape74.addChild(&Appearance75);

Box& Box77 =  Box();
Shape74.setGeometry(&Box77);

Transform73.addChild(&Shape74);

Transform31.addChild(&Transform73);

Transform30.addChild(&Transform31);

Layer24.addChild(&Transform30);

Transform& Transform78 =  Transform();
Transform78.setDEF(CString("Tile2"));
Transform78.setTranslation(new float[]{20,0,0});
Transform& Transform79 =  Transform();
Transform79.setUSE(CString("_2"));
Transform78.addChild(&Transform79);

Layer24.addChild(&Transform78);

Transform& Transform80 =  Transform();
Transform80.setDEF(CString("Tile3"));
Transform80.setTranslation(new float[]{20,0,20});
Transform& Transform81 =  Transform();
Transform81.setUSE(CString("_2"));
Transform80.addChild(&Transform81);

Layer24.addChild(&Transform80);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("Tile4"));
Transform82.setTranslation(new float[]{0,0,20});
Transform& Transform83 =  Transform();
Transform83.setUSE(CString("_2"));
Transform82.addChild(&Transform83);

Layer24.addChild(&Transform82);

LayerSet23.addChild(&Layer24);

Layer& Layer84 =  Layer();
MetadataSet& MetadataSet85 =  MetadataSet();
MetadataSet85.X3DNode::setName(CString("Titania"));
MetadataSet85.setDEF(CString("Titania_1"));
MetadataSet85.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet86 =  MetadataSet();
MetadataSet86.X3DNode::setName(CString("Grid"));
MetadataSet86.setDEF(CString("Grid"));
MetadataSet86.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean87 =  MetadataBoolean();
MetadataBoolean87.X3DNode::setName(CString("enabled"));
MetadataBoolean87.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean87.setValue(new boolean[]{True});
MetadataSet86.setValue((X3DNode *)&MetadataBoolean87);

MetadataFloat& MetadataFloat88 =  MetadataFloat();
MetadataFloat88.X3DNode::setName(CString("rotation"));
MetadataFloat88.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat88.setValue(new float[]{1,0,0,1.5708}, 4);
MetadataSet86.setValue((X3DNode *)&MetadataFloat88);

MetadataFloat& MetadataFloat89 =  MetadataFloat();
MetadataFloat89.X3DNode::setName(CString("scale"));
MetadataFloat89.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat89.setValue(new float[]{0.049,0.049,0.049}, 3);
MetadataSet86.setValue((X3DNode *)&MetadataFloat89);

MetadataInteger& MetadataInteger90 =  MetadataInteger();
MetadataInteger90.X3DNode::setName(CString("dimension"));
MetadataInteger90.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger90.setValue(MFInt327);
MetadataSet86.setValue((X3DNode *)&MetadataInteger90);

MetadataInteger& MetadataInteger91 =  MetadataInteger();
MetadataInteger91.X3DNode::setName(CString("majorLineEvery"));
MetadataInteger91.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger91.setValue(MFInt328);
MetadataSet86.setValue((X3DNode *)&MetadataInteger91);

MetadataInteger& MetadataInteger92 =  MetadataInteger();
MetadataInteger92.X3DNode::setName(CString("majorLineOffset"));
MetadataInteger92.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger92.setValue(MFInt329);
MetadataSet86.setValue((X3DNode *)&MetadataInteger92);

MetadataFloat& MetadataFloat93 =  MetadataFloat();
MetadataFloat93.X3DNode::setName(CString("lineColor"));
MetadataFloat93.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat93.setValue(new float[]{1,0.7,0.7,0.0588235}, 4);
MetadataSet86.setValue((X3DNode *)&MetadataFloat93);

MetadataSet85.setValue((X3DNode *)&MetadataSet86);

MetadataSet& MetadataSet94 =  MetadataSet();
MetadataSet94.X3DNode::setName(CString("AngleGrid"));
MetadataSet94.setDEF(CString("AngleGrid"));
MetadataSet94.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean95 =  MetadataBoolean();
MetadataBoolean95.X3DNode::setName(CString("enabled"));
MetadataBoolean95.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean95.setValue(new boolean[]{False});
MetadataSet94.setValue((X3DNode *)&MetadataBoolean95);

MetadataSet85.setValue((X3DNode *)&MetadataSet94);

Layer84.setMetadata(&MetadataSet85);

OrthoViewpoint& OrthoViewpoint96 =  OrthoViewpoint();
Layer84.addChild(&OrthoViewpoint96);

Transform& Transform97 =  Transform();
Transform97.setDEF(CString("Geometry3D"));
Transform97.setTranslation(new float[]{-1.6905,0.955504,-1});
Transform97.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Appearance99.addChild(&Material100);

Shape98.addChild(&Appearance99);

Text& Text101 =  Text();
Text101.setString(new CString[]{CString("Local Light")}, 1);
Text101.setSolid(True);
CFontStyle& FontStyle102 =  CFontStyle();
FontStyle102.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle102.setSize(1.61);
FontStyle102.setJustify(new CString[]{CString(", "), CString("BEGINBEGIN")}, 2);
Text101.setFontStyle(&FontStyle102);

Shape98.setGeometry(&Text101);

Transform97.addChild(&Shape98);

Layer84.addChild(&Transform97);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("LightMenu"));
Transform& Transform104 =  Transform();
Transform104.setDEF(CString("Text"));
Transform104.setTranslation(new float[]{1.6905,-0.661496,-1});
Transform104.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape105 =  Shape();
Appearance& Appearance106 =  Appearance();
Material& Material107 =  Material();
Material107.setDEF(CString("Artdeco31"));
Material107.setAmbientIntensity(0);
Material107.setDiffuseColor(new float[]{0,0,0});
Material107.setShininess(0);
Appearance106.addChild(&Material107);

Shape105.addChild(&Appearance106);

Text& Text108 =  Text();
Text108.setString(new CString[]{CString("SpotLight")}, 1);
Text108.setSolid(True);
CFontStyle& FontStyle109 =  CFontStyle();
FontStyle109.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle109.setStyle(CString("BOLD"));
FontStyle109.setSize(0.68);
FontStyle109.setJustify(new CString[]{CString("END")}, 1);
Text108.setFontStyle(&FontStyle109);

Shape105.setGeometry(&Text108);

Transform104.addChild(&Shape105);

Transform103.addChild(&Transform104);

Transform& Transform110 =  Transform();
Transform110.setDEF(CString("GlobalButton"));
Transform110.setTranslation(new float[]{1.51582,-0.734328,-0.00000269843});
Transform110.setScale(new float[]{0.227685,0.040588,0.040588});
Shape& Shape111 =  Shape();
Appearance& Appearance112 =  Appearance();
Material& Material113 =  Material();
Material113.setTransparency(1);
Appearance112.addChild(&Material113);

Shape111.addChild(&Appearance112);

IndexedFaceSet& IndexedFaceSet114 =  IndexedFaceSet();
IndexedFaceSet114.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet114.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate115 =  TextureCoordinate();
TextureCoordinate115.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet114.setTexCoord(&TextureCoordinate115);

Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet114.setCoord(&Coordinate116);

Shape111.setGeometry(&IndexedFaceSet114);

Transform110.addChild(&Shape111);

TouchSensor& TouchSensor117 =  TouchSensor();
TouchSensor117.setDEF(CString("_6"));
Transform110.addChild(&TouchSensor117);

Transform103.addChild(&Transform110);

Transform& Transform118 =  Transform();
Transform118.setDEF(CString("Text_1"));
Transform118.setTranslation(new float[]{1.6905,-0.759496,-1});
Transform118.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape119 =  Shape();
Appearance& Appearance120 =  Appearance();
Material& Material121 =  Material();
Appearance120.addChild(&Material121);

Shape119.addChild(&Appearance120);

Text& Text122 =  Text();
Text122.setDEF(CString("_7"));
Text122.setString(new CString[]{CString("global false")}, 1);
Text122.setSolid(True);
CFontStyle& FontStyle123 =  CFontStyle();
FontStyle123.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle123.setJustify(new CString[]{CString("END")}, 1);
Text122.setFontStyle(&FontStyle123);

Shape119.setGeometry(&Text122);

Transform118.addChild(&Shape119);

Transform103.addChild(&Transform118);

Layer84.addChild(&Transform103);

Group& Group124 =  Group();
Group124.setDEF(CString("ShadingMenu"));
Script& Script125 =  Script();
Script125.setDEF(CString("ShadingScript"));
field& field126 =  field();
field126.setName(CString("set_pointset"));
field126.setAccessType(CString("inputOnly"));
field126.setType(CString("SFTime"));
Script125.addChild(&field126);

field& field127 =  field();
field127.setName(CString("set_wireframe"));
field127.setAccessType(CString("inputOnly"));
field127.setType(CString("SFTime"));
Script125.addChild(&field127);

field& field128 =  field();
field128.setName(CString("set_flat"));
field128.setAccessType(CString("inputOnly"));
field128.setType(CString("SFTime"));
Script125.addChild(&field128);

field& field129 =  field();
field129.setName(CString("set_gouraud"));
field129.setAccessType(CString("inputOnly"));
field129.setType(CString("SFTime"));
Script125.addChild(&field129);

field& field130 =  field();
field130.setName(CString("set_phong"));
field130.setAccessType(CString("inputOnly"));
field130.setType(CString("SFTime"));
Script125.addChild(&field130);


Script125.setSourceCode(CString("javascript:")+
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
Group124.addChild(&Script125);

Transform& Transform131 =  Transform();
Transform131.setDEF(CString("Text_2"));
Transform131.setTranslation(new float[]{1.6905,-0.857496,-1});
Transform131.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape132 =  Shape();
Appearance& Appearance133 =  Appearance();
Material& Material134 =  Material();
Material134.setDEF(CString("Artdeco31_1"));
Material134.setAmbientIntensity(0);
Material134.setDiffuseColor(new float[]{0,0,0});
Material134.setShininess(0);
Appearance133.addChild(&Material134);

Shape132.addChild(&Appearance133);

Text& Text135 =  Text();
Text135.setString(new CString[]{CString("Shading")}, 1);
Text135.setSolid(True);
CFontStyle& FontStyle136 =  CFontStyle();
FontStyle136.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle136.setStyle(CString("BOLD"));
FontStyle136.setSize(0.68);
FontStyle136.setJustify(new CString[]{CString("END")}, 1);
Text135.setFontStyle(&FontStyle136);

Shape132.setGeometry(&Text135);

Transform131.addChild(&Shape132);

Group124.addChild(&Transform131);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("Text_3"));
Transform137.setTranslation(new float[]{1.6905,-0.955496,-1});
Transform137.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
Material& Material140 =  Material();
Appearance139.addChild(&Material140);

Shape138.addChild(&Appearance139);

Text& Text141 =  Text();
Text141.setString(new CString[]{CString("Pointset Wireframe Flat Gouraud Phong")}, 1);
Text141.setSolid(True);
CFontStyle& FontStyle142 =  CFontStyle();
FontStyle142.setUSE(CString("_1"));
Text141.setFontStyle(&FontStyle142);

Shape138.setGeometry(&Text141);

Transform137.addChild(&Shape138);

Group124.addChild(&Transform137);

Transform& Transform143 =  Transform();
Transform143.setDEF(CString("Pointset"));
Transform143.setTranslation(new float[]{0.436176,-0.916146,0});
Transform143.setScale(new float[]{0.139972,0.040588,0.040588});
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Material& Material146 =  Material();
Material146.setDEF(CString("_8"));
Material146.setTransparency(1);
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
TouchSensor150.setDEF(CString("_9"));
Transform143.addChild(&TouchSensor150);

Group124.addChild(&Transform143);

Transform& Transform151 =  Transform();
Transform151.setDEF(CString("Wireframe"));
Transform151.setTranslation(new float[]{0.77569,-0.916146,0});
Transform151.setScale(new float[]{0.177062,0.040588,0.040588});
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Material154.setUSE(CString("_8"));
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
TouchSensor158.setDEF(CString("_10"));
Transform151.addChild(&TouchSensor158);

Group124.addChild(&Transform151);

Transform& Transform159 =  Transform();
Transform159.setDEF(CString("Flat"));
Transform159.setTranslation(new float[]{1.04432,-0.916146,0});
Transform159.setScale(new float[]{0.0743511,0.040588,0.040588});
Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setUSE(CString("_8"));
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
TouchSensor166.setDEF(CString("_11"));
Transform159.addChild(&TouchSensor166);

Group124.addChild(&Transform159);

Transform& Transform167 =  Transform();
Transform167.setDEF(CString("Gouraud"));
Transform167.setTranslation(new float[]{1.27986,-0.916146,0});
Transform167.setScale(new float[]{0.142825,0.040588,0.040588});
Shape& Shape168 =  Shape();
Appearance& Appearance169 =  Appearance();
Material& Material170 =  Material();
Material170.setUSE(CString("_8"));
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
TouchSensor174.setDEF(CString("_12"));
Transform167.addChild(&TouchSensor174);

Group124.addChild(&Transform167);

Transform& Transform175 =  Transform();
Transform175.setDEF(CString("Phong"));
Transform175.setTranslation(new float[]{1.55457,-0.916146,0});
Transform175.setScale(new float[]{0.111441,0.040588,0.040588});
Shape& Shape176 =  Shape();
Appearance& Appearance177 =  Appearance();
Material& Material178 =  Material();
Material178.setUSE(CString("_8"));
Appearance177.addChild(&Material178);

Shape176.addChild(&Appearance177);

IndexedFaceSet& IndexedFaceSet179 =  IndexedFaceSet();
IndexedFaceSet179.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet179.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate180 =  TextureCoordinate();
TextureCoordinate180.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet179.setTexCoord(&TextureCoordinate180);

Coordinate& Coordinate181 =  Coordinate();
Coordinate181.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet179.setCoord(&Coordinate181);

Shape176.setGeometry(&IndexedFaceSet179);

Transform175.addChild(&Shape176);

TouchSensor& TouchSensor182 =  TouchSensor();
TouchSensor182.setDEF(CString("_13"));
Transform175.addChild(&TouchSensor182);

Group124.addChild(&Transform175);

Layer84.addChild(&Group124);

Script& Script183 =  Script();
Script183.setDEF(CString("ToggleScript"));
field& field184 =  field();
field184.setName(CString("set_touchTime"));
field184.setAccessType(CString("inputOnly"));
field184.setType(CString("SFTime"));
Script183.addChild(&field184);

field& field185 =  field();
field185.setName(CString("string_changed"));
field185.setAccessType(CString("outputOnly"));
field185.setType(CString("MFString"));
Script183.addChild(&field185);

field& field186 =  field();
field186.setName(CString("light"));
field186.setAccessType(CString("initializeOnly"));
field186.setType(CString("SFNode"));
SpotLight& SpotLight187 =  SpotLight();
SpotLight187.setUSE(CString("_4"));
field186.addChild(SpotLight187);

Script183.addChild(&field186);


Script183.setSourceCode(CString("javascript:")+
_T("function initialize ()")+
_T("{")+
_T("	eventsProcessed ();")+
_T("}")+
_T("function set_touchTime ()")+
_T("{")+
_T("	light .global = ! light .global;")+
_T("}")+
_T("function eventsProcessed ()")+
_T("{")+
_T("	string_changed = new MFString (\"global \" + light .global);")+
_T("}"));
Layer84.addChild(&Script183);

LayerSet23.addChild(&Layer84);

Scene8.addChild(&LayerSet23);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("_3"));
ROUTE188.setFromField(CString("fraction_changed"));
ROUTE188.setToNode(CString("DirectionInterpolator"));
ROUTE188.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("DirectionInterpolator"));
ROUTE189.setFromField(CString("value_changed"));
ROUTE189.setToNode(CString("_4"));
ROUTE189.setToField(CString("set_direction"));
Scene8.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_3"));
ROUTE190.setFromField(CString("fraction_changed"));
ROUTE190.setToNode(CString("ColorInterpolator"));
ROUTE190.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("ColorInterpolator"));
ROUTE191.setFromField(CString("value_changed"));
ROUTE191.setToNode(CString("_4"));
ROUTE191.setToField(CString("set_color"));
Scene8.addChild(&ROUTE191);

ROUTE& ROUTE192 =  ROUTE();
ROUTE192.setFromNode(CString("ToggleScript"));
ROUTE192.setFromField(CString("string_changed"));
ROUTE192.setToNode(CString("_7"));
ROUTE192.setToField(CString("set_string"));
Scene8.addChild(&ROUTE192);

ROUTE& ROUTE193 =  ROUTE();
ROUTE193.setFromNode(CString("_6"));
ROUTE193.setFromField(CString("touchTime"));
ROUTE193.setToNode(CString("ToggleScript"));
ROUTE193.setToField(CString("set_touchTime"));
Scene8.addChild(&ROUTE193);

ROUTE& ROUTE194 =  ROUTE();
ROUTE194.setFromNode(CString("RotationScript"));
ROUTE194.setFromField(CString("rotation_changed"));
ROUTE194.setToNode(CString("Cone"));
ROUTE194.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE194);

ROUTE& ROUTE195 =  ROUTE();
ROUTE195.setFromNode(CString("_4"));
ROUTE195.setFromField(CString("direction_changed"));
ROUTE195.setToNode(CString("RotationScript"));
ROUTE195.setToField(CString("set_direction"));
Scene8.addChild(&ROUTE195);

ROUTE& ROUTE196 =  ROUTE();
ROUTE196.setFromNode(CString("_4"));
ROUTE196.setFromField(CString("color_changed"));
ROUTE196.setToNode(CString("_5"));
ROUTE196.setToField(CString("set_emissiveColor"));
Scene8.addChild(&ROUTE196);

ROUTE& ROUTE197 =  ROUTE();
ROUTE197.setFromNode(CString("_3"));
ROUTE197.setFromField(CString("fraction_changed"));
ROUTE197.setToNode(CString("BeamWidthInterpolator"));
ROUTE197.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE197);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("BeamWidthInterpolator"));
ROUTE198.setFromField(CString("value_changed"));
ROUTE198.setToNode(CString("_4"));
ROUTE198.setToField(CString("set_beamWidth"));
Scene8.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("_3"));
ROUTE199.setFromField(CString("fraction_changed"));
ROUTE199.setToNode(CString("CutOffAngleInterpolator"));
ROUTE199.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE199);

ROUTE& ROUTE200 =  ROUTE();
ROUTE200.setFromNode(CString("CutOffAngleInterpolator"));
ROUTE200.setFromField(CString("value_changed"));
ROUTE200.setToNode(CString("_4"));
ROUTE200.setToField(CString("set_cutOffAngle"));
Scene8.addChild(&ROUTE200);

ROUTE& ROUTE201 =  ROUTE();
ROUTE201.setFromNode(CString("_11"));
ROUTE201.setFromField(CString("touchTime"));
ROUTE201.setToNode(CString("ShadingScript"));
ROUTE201.setToField(CString("set_flat"));
Scene8.addChild(&ROUTE201);

ROUTE& ROUTE202 =  ROUTE();
ROUTE202.setFromNode(CString("_10"));
ROUTE202.setFromField(CString("touchTime"));
ROUTE202.setToNode(CString("ShadingScript"));
ROUTE202.setToField(CString("set_wireframe"));
Scene8.addChild(&ROUTE202);

ROUTE& ROUTE203 =  ROUTE();
ROUTE203.setFromNode(CString("_9"));
ROUTE203.setFromField(CString("touchTime"));
ROUTE203.setToNode(CString("ShadingScript"));
ROUTE203.setToField(CString("set_pointset"));
Scene8.addChild(&ROUTE203);

ROUTE& ROUTE204 =  ROUTE();
ROUTE204.setFromNode(CString("_13"));
ROUTE204.setFromField(CString("touchTime"));
ROUTE204.setToNode(CString("ShadingScript"));
ROUTE204.setToField(CString("set_phong"));
Scene8.addChild(&ROUTE204);

ROUTE& ROUTE205 =  ROUTE();
ROUTE205.setFromNode(CString("_12"));
ROUTE205.setFromField(CString("touchTime"));
ROUTE205.setToNode(CString("ShadingScript"));
ROUTE205.setToField(CString("set_gouraud"));
Scene8.addChild(&ROUTE205);

X3D0.setScene(&Scene8);

}
