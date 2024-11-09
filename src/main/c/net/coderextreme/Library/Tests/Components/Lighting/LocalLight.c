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
meta3.content = "Tue, 22 Sep 2015 03:19:15 GMT";
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
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Lighting/LocalLight.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Thu, 20 Oct 2016 11:00:29 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "LocalLight";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "NavigationInfo";
MetadataSet11.DEF = "NavigationInfo";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataString MetadataString12 = createNode("MetadataString");
MetadataString12.name = "type";
MetadataString12.DEF = "type";
MetadataString12.reference = "http://titania.create3000.de";
MetadataString12.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataString12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Viewpoint";
MetadataSet13.DEF = "Viewpoint";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "position";
MetadataDouble14.DEF = "position";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[38.5307998657227,38.1931991577148,54.2624015808105]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[-0.873252862989652,0.462253895384657,0.154112859561057,0.974525034427643]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[20,0,20]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Selection";
MetadataSet17.DEF = "Selection";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "children";
MetadataSet18.DEF = "children";
MetadataSet18.reference = "http://titania.create3000.de";
FontStyle FontStyle19 = createNode("FontStyle");
FontStyle19.DEF = "_1";
FontStyle19.family = new MFString(new java.lang.String["SANS"]);
FontStyle19.justify = new MFString(new java.lang.String["END"]);
MetadataSet18.value = FontStyle19;

MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataSet18;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "previous";
MetadataSet20.DEF = "previous";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataSet17.value[1] = MetadataSet20;

MetadataSet10.value[2] = MetadataSet17;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "LayerSet";
MetadataSet21.DEF = "LayerSet";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger22 = createNode("MetadataInteger");
MetadataInteger22.name = "activeLayer";
MetadataInteger22.DEF = "activeLayer";
MetadataInteger22.reference = "http://titania.create3000.de";
MetadataInteger22.value = new MFInt32(new int[-1]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataInteger22;

MetadataSet10.value[3] = MetadataSet21;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

LayerSet LayerSet23 = createNode("LayerSet");
LayerSet23.activeLayer = 1;
LayerSet23.order = new MFInt32(new int[1,2]);
Layer Layer24 = createNode("Layer");
Background Background25 = createNode("Background");
Background25.DEF = "Gray";
Background25.skyColor = new MFColor(new float[0.2,0.2,0.2]);
Layer24.children = new MFNode();

Layer24.children[0] = Background25;

NavigationInfo NavigationInfo26 = createNode("NavigationInfo");
NavigationInfo26.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo26.headlight = False;
Layer24.children[1] = NavigationInfo26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.description = "Home";
Viewpoint27.position = new SFVec3f(new float[38.5308,38.1932,54.2624]);
Viewpoint27.orientation = new SFRotation(new float[-0.873252834390235,0.462253912334941,0.15411297077294,0.974525]);
Viewpoint27.centerOfRotation = new SFVec3f(new float[20,0,20]);
Layer24.children[2] = Viewpoint27;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "GlobalLight";
Transform28.translation = new SFVec3f(new float[8.04568,10.189,9.98222]);
PointLight PointLight29 = createNode("PointLight");
PointLight29.intensity = 0.0650888;
Transform28.children = new MFNode();

Transform28.children[0] = PointLight29;

Layer24.children[3] = Transform28;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "Tile1";
Transform Transform31 = createNode("Transform");
Transform31.DEF = "_2";
Transform Transform32 = createNode("Transform");
Transform32.translation = new SFVec3f(new float[10,10,10]);
Transform32.rotation = new SFRotation(new float[-1,-2.09955e-10,-1.12942e-9,1.57]);
Transform32.scaleOrientation = new SFRotation(new float[0.991022590991182,-0.0697250712234926,0.114072952920504,0.180415999999999]);
Group Group33 = createNode("Group");
Group33.DEF = "LightAnim";
MetadataSet MetadataSet34 = createNode("MetadataSet");
MetadataSet34.name = "Animation";
MetadataInteger MetadataInteger35 = createNode("MetadataInteger");
MetadataInteger35.name = "duration";
MetadataInteger35.reference = "http://titania.create3000.de";
MetadataInteger35.value = new MFInt32(new int[120]);
MetadataSet34.value = new MFNode();

MetadataSet34.value[0] = MetadataInteger35;

MetadataInteger MetadataInteger36 = createNode("MetadataInteger");
MetadataInteger36.name = "framesPerSecond";
MetadataInteger36.reference = "http://titania.create3000.de";
MetadataInteger36.value = new MFInt32(new int[10]);
MetadataSet34.value[1] = MetadataInteger36;

Group33.metadata = MetadataSet34;

TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "_3";
TimeSensor37.cycleInterval = 12;
TimeSensor37.loop = True;
Group33.children = new MFNode();

Group33.children[0] = TimeSensor37;

PositionInterpolator PositionInterpolator38 = createNode("PositionInterpolator");
PositionInterpolator38.DEF = "DirectionInterpolator";
PositionInterpolator38.key = new MFFloat(new float[0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]);
PositionInterpolator38.keyValue = new MFVec3f(new float[-0.475709,-0.436148,-0.763856,-0.487436,-0.421618,-0.765291,-0.497508,-0.404542,-0.767164,-0.505976,-0.385102,-0.769443,-0.512895,-0.363478,-0.772098,-0.518318,-0.339852,-0.775096,-0.522298,-0.314407,-0.778408,-0.524889,-0.287322,-0.782,-0.526143,-0.25878,-0.785843,-0.526115,-0.228962,-0.789906,-0.524858,-0.19805,-0.794156,-0.522425,-0.166225,-0.798563,-0.518869,-0.133668,-0.803095,-0.514244,-0.100561,-0.807722,-0.508603,-0.0670861,-0.812411,-0.502,-0.0334238,-0.817133,-0.494488,0.000244015,-0.821855,-0.48612,0.033736,-0.826547,-0.476949,0.0668705,-0.831177,-0.46703,0.0994663,-0.835714,-0.456415,0.131342,-0.840127,-0.445158,0.162316,-0.844384,-0.433312,0.192206,-0.848455,-0.42093,0.220832,-0.852308,-0.408067,0.248011,-0.855912,-0.394774,0.273563,-0.859236,-0.381107,0.297306,-0.862248,-0.367117,0.319059,-0.864918,-0.352859,0.338639,-0.867214,-0.338385,0.355866,-0.869105,-0.323749,0.370557,-0.870559,-0.30804,0.383454,-0.871636,-0.290405,0.39542,-0.872423,-0.270987,0.406458,-0.872936,-0.249929,0.416571,-0.87319,-0.227372,0.425762,-0.873199,-0.20346,0.434035,-0.872978,-0.178336,0.441394,-0.872543,-0.152141,0.44784,-0.871907,-0.125019,0.453379,-0.871087,-0.0971121,0.458012,-0.870096,-0.068563,0.461743,-0.86895,-0.0395143,0.464577,-0.867663,-0.0101085,0.466514,-0.866251,0.0195116,0.46756,-0.864728,0.0492035,0.467718,-0.863109,0.0788245,0.46699,-0.861409,0.108232,0.46538,-0.859642,0.137284,0.462891,-0.857825,0.165836,0.459527,-0.85597,0.193748,0.45529,-0.854095,0.220876,0.450185,-0.852212,0.247077,0.444214,-0.850338,0.272209,0.437381,-0.848486,0.296129,0.429689,-0.846672,0.318695,0.42114,-0.844911,0.339763,0.41174,-0.843218,0.359193,0.40149,-0.841607,0.37684,0.390394,-0.840093,0.392562,0.378456,-0.838692,0.406216,0.365678,-0.837417,0.418519,0.351213,-0.836202,0.430263,0.334325,-0.834969,0.441423,0.315187,-0.833719,0.451974,0.293971,-0.832454,0.461892,0.27085,-0.831175,0.471151,0.245997,-0.829883,0.479726,0.219585,-0.82858,0.487593,0.191785,-0.827266,0.494725,0.162772,-0.825943,0.501099,0.132717,-0.824612,0.506688,0.101792,-0.823274,0.511469,0.0701721,-0.821931,0.515416,0.0380281,-0.820583,0.518504,0.00553328,-0.819233,0.520707,-0.0271398,-0.81788,0.522002,-0.0598185,-0.816527,0.522363,-0.0923301,-0.815174,0.521764,-0.124502,-0.813823,0.520181,-0.156161,-0.812475,0.517589,-0.187136,-0.811131,0.513963,-0.217253,-0.809793,0.509278,-0.246339,-0.808461,0.503508,-0.274222,-0.807137,0.496629,-0.300729,-0.805823,0.488615,-0.325689,-0.804518,0.479443,-0.348927,-0.803225,0.469085,-0.370271,-0.801945,0.457519,-0.389549,-0.800679,0.444717,-0.406588,-0.799428,0.430657,-0.421215,-0.798193,0.414373,-0.434177,-0.796897,0.395065,-0.44633,-0.79547,0.372955,-0.45767,-0.793927,0.348264,-0.468191,-0.792284,0.321213,-0.477887,-0.790555,0.292022,-0.486753,-0.788756,0.260913,-0.494784,-0.786903,0.228107,-0.501973,-0.785009,0.193824,-0.508316,-0.78309,0.158286,-0.513806,-0.781162,0.121714,-0.518439,-0.779239,0.084329,-0.522208,-0.777337,0.0463515,-0.525109,-0.77547,0.00800288,-0.527135,-0.773654,-0.0304959,-0.528282,-0.771904,-0.0689239,-0.528543,-0.770235,-0.10706,-0.527913,-0.768663,-0.144683,-0.526387,-0.767201,-0.181573,-0.523959,-0.765867,-0.217507,-0.520624,-0.764673,-0.252266,-0.516375,-0.763637,-0.285627,-0.511209,-0.762772,-0.317371,-0.505118,-0.762094,-0.347276,-0.498098,-0.761619,-0.37512,-0.490143,-0.76136,-0.400684,-0.481247,-0.761334,-0.423746,-0.471405,-0.761556,-0.444085,-0.460612,-0.76204,-0.461479,-0.448861,-0.762801,-0.475709,-0.436148,-0.763856]);
MetadataSet MetadataSet39 = createNode("MetadataSet");
MetadataSet39.name = "Interpolator";
MetadataInteger MetadataInteger40 = createNode("MetadataInteger");
MetadataInteger40.name = "key";
MetadataInteger40.reference = "http://titania.create3000.de";
MetadataInteger40.value = new MFInt32(new int[0,30,60,90,120]);
MetadataSet39.value = new MFNode();

MetadataSet39.value[0] = MetadataInteger40;

MetadataDouble MetadataDouble41 = createNode("MetadataDouble");
MetadataDouble41.name = "keyValue";
MetadataDouble41.reference = "http://titania.create3000.de";
MetadataDouble41.value = new MFDouble(new double[-0.475708842277527,-0.436148166656494,-0.763855934143066,-0.323749333620071,0.370557337999344,-0.870559394359589,0.406216442584991,0.365678489208221,-0.837417185306549,0.430656850337982,-0.421214938163757,-0.798193275928497,-0.475708842277527,-0.436148166656494,-0.763855934143066]);
MetadataSet39.value[1] = MetadataDouble41;

MetadataString MetadataString42 = createNode("MetadataString");
MetadataString42.name = "keyType";
MetadataString42.reference = "http://titania.create3000.de";
MetadataString42.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet39.value[2] = MetadataString42;

PositionInterpolator38.metadata = MetadataSet39;

Group33.children[1] = PositionInterpolator38;

ColorInterpolator ColorInterpolator43 = createNode("ColorInterpolator");
ColorInterpolator43.DEF = "ColorInterpolator";
ColorInterpolator43.key = new MFFloat(new float[0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]);
ColorInterpolator43.keyValue = new MFColor(new float[1,0,0,1,0.0499985,0,1,0.0999942,0,1,0.149987,0,1,0.199979,0,1,0.249968,0,1,0.299955,0,1,0.349942,0,1,0.399927,0,1,0.449912,0,1,0.499897,0,1,0.549881,0,1,0.599866,0,1,0.649852,0,1,0.699838,0,1,0.749826,0,1,0.799815,0,1,0.849806,0,1,0.899799,0,1,0.949795,0,1,0.999793,0,0.950205,1,0,0.9002,1,0,0.850191,1,0,0.800179,1,0,0.750161,1,0,0.70014,1,0,0.650113,1,0,0.600081,1,0,0.550043,1,0,0.5,1,0,0.449945,1,0,0.399873,1,0,0.349786,1,0,0.299686,1,0,0.249573,1,0,0.19945,1,0,0.149318,1,0,0.0991781,1,0,0.0490322,1,0,0,1,0.00111821,0,1,0.0512717,0,1,0.101427,0,1,0.151582,0,1,0.201736,0,1,0.251887,0,1,0.302034,0,1,0.352174,0,1,0.402308,0,1,0.452432,0,1,0.502546,0,1,0.552649,0,1,0.602738,0,1,0.652812,0,1,0.702869,0,1,0.752909,0,1,0.80293,0,1,0.85293,0,1,0.902907,0,1,0.952861,0,0.997211,1,0,0.94731,1,0,0.897438,1,0,0.847593,1,0,0.797772,1,0,0.747975,1,0,0.698198,1,0,0.648441,1,0,0.598701,1,0,0.548976,1,0,0.499265,1,0,0.449566,1,0,0.399877,1,0,0.350197,1,0,0.300522,1,0,0.250852,1,0,0.201185,1,0,0.151518,1,0,0.101851,1,0,0.0521804,1,0,0.00250527,1,0.0471765,0,1,0.0968666,0,1,0.146567,0,1,0.19628,0,1,0.246006,0,1,0.295748,0,1,0.345508,0,1,0.395287,0,1,0.445088,0,1,0.494912,0,1,0.544754,0,1,0.594609,0,1,0.644476,0,1,0.694353,0,1,0.744242,0,1,0.79414,0,1,0.844047,0,1,0.893963,0,1,0.943887,0,1,0.993818,0,1,1,0,0.956244,1,0,0.906301,1,0,0.856352,1,0,0.806399,1,0,0.756441,1,0,0.706481,1,0,0.656518,1,0,0.606552,1,0,0.556586,1,0,0.506619,1,0,0.456652,1,0,0.406685,1,0,0.35672,1,0,0.306757,1,0,0.256796,1,0,0.206839,1,0,0.156885,1,0,0.106937,1,0,0.0569931,1,0,0.00705553]);
MetadataSet MetadataSet44 = createNode("MetadataSet");
MetadataSet44.name = "Interpolator";
MetadataInteger MetadataInteger45 = createNode("MetadataInteger");
MetadataInteger45.name = "key";
MetadataInteger45.reference = "http://titania.create3000.de";
MetadataInteger45.value = new MFInt32(new int[0,30,60,90,120]);
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataInteger45;

MetadataDouble MetadataDouble46 = createNode("MetadataDouble");
MetadataDouble46.name = "keyValue";
MetadataDouble46.reference = "http://titania.create3000.de";
MetadataDouble46.value = new MFDouble(new double[1,0,0,0.5,1,0,0,0.997210741043091,1,0.494911581277847,0,1,1,0,0.00705553032457829]);
MetadataSet44.value[1] = MetadataDouble46;

MetadataString MetadataString47 = createNode("MetadataString");
MetadataString47.name = "keyType";
MetadataString47.reference = "http://titania.create3000.de";
MetadataString47.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet44.value[2] = MetadataString47;

ColorInterpolator43.metadata = MetadataSet44;

Group33.children[2] = ColorInterpolator43;

ScalarInterpolator ScalarInterpolator48 = createNode("ScalarInterpolator");
ScalarInterpolator48.DEF = "BeamWidthInterpolator";
ScalarInterpolator48.key = new MFFloat(new float[0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]);
ScalarInterpolator48.keyValue = new MFFloat(new float[0.5,0.499596,0.498403,0.496448,0.493757,0.490359,0.48628,0.481548,0.47619,0.470232,0.463704,0.45663,0.44904,0.44096,0.432416,0.423438,0.41405,0.404282,0.39416,0.383711,0.372963,0.361942,0.350677,0.339194,0.32752,0.315683,0.30371,0.291627,0.279464,0.267245,0.255,0.242755,0.230536,0.218372,0.20629,0.194317,0.18248,0.170806,0.159323,0.148058,0.137037,0.126289,0.11584,0.105718,0.0959496,0.0865625,0.0775837,0.0690405,0.06096,0.0533695,0.0462963,0.0397675,0.0338104,0.0284521,0.02372,0.0196412,0.016243,0.0135525,0.011597,0.0104038,0.01,0.0104038,0.011597,0.0135525,0.016243,0.0196412,0.02372,0.0284521,0.0338104,0.0397675,0.0462963,0.0533695,0.06096,0.0690405,0.0775837,0.0865625,0.0959496,0.105718,0.11584,0.126289,0.137037,0.148058,0.159323,0.170806,0.18248,0.194317,0.20629,0.218372,0.230536,0.242755,0.255,0.267245,0.279464,0.291627,0.30371,0.315683,0.32752,0.339194,0.350677,0.361942,0.372963,0.383711,0.39416,0.404282,0.41405,0.423438,0.432416,0.44096,0.44904,0.45663,0.463704,0.470232,0.47619,0.481548,0.48628,0.490359,0.493757,0.496448,0.498403,0.499596,0.5]);
MetadataSet MetadataSet49 = createNode("MetadataSet");
MetadataSet49.name = "Interpolator";
MetadataSet49.DEF = "Interpolator";
MetadataSet49.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger50 = createNode("MetadataInteger");
MetadataInteger50.name = "key";
MetadataInteger50.DEF = "key";
MetadataInteger50.reference = "http://titania.create3000.de";
MetadataInteger50.value = new MFInt32(new int[0,60,120]);
MetadataSet49.value = new MFNode();

MetadataSet49.value[0] = MetadataInteger50;

MetadataDouble MetadataDouble51 = createNode("MetadataDouble");
MetadataDouble51.name = "keyValue";
MetadataDouble51.DEF = "keyValue";
MetadataDouble51.reference = "http://titania.create3000.de";
MetadataDouble51.value = new MFDouble(new double[0.5,0.00999999977648258,0.5]);
MetadataSet49.value[1] = MetadataDouble51;

MetadataString MetadataString52 = createNode("MetadataString");
MetadataString52.name = "keyType";
MetadataString52.DEF = "keyType";
MetadataString52.reference = "http://titania.create3000.de";
MetadataString52.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINESPLINE"]);
MetadataSet49.value[2] = MetadataString52;

ScalarInterpolator48.metadata = MetadataSet49;

Group33.children[3] = ScalarInterpolator48;

ScalarInterpolator ScalarInterpolator53 = createNode("ScalarInterpolator");
ScalarInterpolator53.DEF = "CutOffAngleInterpolator";
ScalarInterpolator53.key = new MFFloat(new float[0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]);
ScalarInterpolator53.keyValue = new MFFloat(new float[1.5708,1.56967,1.56633,1.56086,1.55333,1.54382,1.53241,1.51918,1.50419,1.48752,1.46926,1.44947,1.42823,1.40563,1.38173,1.35661,1.33035,1.30302,1.2747,1.24547,1.2154,1.18457,1.15306,1.12093,1.08828,1.05516,1.02167,0.987865,0.953836,0.919655,0.885398,0.851141,0.81696,0.782931,0.749131,0.715635,0.68252,0.649862,0.617737,0.586222,0.555392,0.525323,0.496092,0.467775,0.440448,0.414187,0.389068,0.365168,0.342563,0.321328,0.30154,0.283276,0.266611,0.251621,0.238382,0.226972,0.217465,0.209938,0.204468,0.20113,0.2,0.20113,0.204468,0.209938,0.217465,0.226972,0.238382,0.251621,0.266611,0.283276,0.30154,0.321328,0.342563,0.365168,0.389068,0.414187,0.440448,0.467775,0.496092,0.525323,0.555392,0.586222,0.617737,0.649862,0.68252,0.715635,0.749131,0.782931,0.81696,0.851141,0.885398,0.919655,0.953836,0.987865,1.02167,1.05516,1.08828,1.12093,1.15306,1.18457,1.2154,1.24547,1.2747,1.30302,1.33035,1.35661,1.38173,1.40563,1.42823,1.44947,1.46926,1.48752,1.50419,1.51918,1.53241,1.54382,1.55333,1.56086,1.56633,1.56967,1.5708]);
MetadataSet MetadataSet54 = createNode("MetadataSet");
MetadataSet54.name = "Interpolator";
MetadataSet54.DEF = "Interpolator_1";
MetadataSet54.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger55 = createNode("MetadataInteger");
MetadataInteger55.name = "key";
MetadataInteger55.DEF = "key_1";
MetadataInteger55.reference = "http://titania.create3000.de";
MetadataInteger55.value = new MFInt32(new int[0,60,120]);
MetadataSet54.value = new MFNode();

MetadataSet54.value[0] = MetadataInteger55;

MetadataDouble MetadataDouble56 = createNode("MetadataDouble");
MetadataDouble56.name = "keyValue";
MetadataDouble56.DEF = "keyValue_1";
MetadataDouble56.reference = "http://titania.create3000.de";
MetadataDouble56.value = new MFDouble(new double[1.57079601287842,0.200000002980232,1.57079601287842]);
MetadataSet54.value[1] = MetadataDouble56;

MetadataString MetadataString57 = createNode("MetadataString");
MetadataString57.name = "keyType";
MetadataString57.DEF = "keyType_1";
MetadataString57.reference = "http://titania.create3000.de";
MetadataString57.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINESPLINE"]);
MetadataSet54.value[2] = MetadataString57;

ScalarInterpolator53.metadata = MetadataSet54;

Group33.children[4] = ScalarInterpolator53;

Transform32.children = new MFNode();

Transform32.children[0] = Group33;

SpotLight SpotLight58 = createNode("SpotLight");
SpotLight58.DEF = "_4";
SpotLight58.global = False;
SpotLight58.color = new SFColor(new float[1,0,0.439812]);
SpotLight58.intensity = 0.485207;
SpotLight58.direction = new SFVec3f(new float[-0.26351,-0.514634,-0.763345]);
SpotLight58.beamWidth = 0.47224;
SpotLight58.cutOffAngle = 1.49314;
Transform32.children[1] = SpotLight58;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "ElevationGrid";
Transform59.translation = new SFVec3f(new float[-10,9.99203,-10.008]);
Transform59.rotation = new SFRotation(new float[1,1.00032e-9,3.08126e-10,1.57]);
Transform59.scaleOrientation = new SFRotation(new float[0.991100738221959,0.113549970008207,0.069467481651652,0.181206]);
Shape Shape60 = createNode("Shape");
Appearance Appearance61 = createNode("Appearance");
Material Material62 = createNode("Material");
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

ElevationGrid ElevationGrid63 = createNode("ElevationGrid");
ElevationGrid63.xDimension = 20;
ElevationGrid63.zDimension = 20;
Shape60.geometry = ElevationGrid63;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Transform32.children[2] = Transform59;

Transform Transform64 = createNode("Transform");
Transform64.DEF = "Cone";
Transform64.rotation = new SFRotation(new float[0.890101675582162,-0.455762007110978,0,2.49335868029868]);
Transform64.scaleOrientation = new SFRotation(new float[-0.546046080148377,0.18703802745335,-0.816609119861487,0.459043]);
Transform Transform65 = createNode("Transform");
Transform65.DEF = "Cone_1";
Transform65.rotation = new SFRotation(new float[-0.999999999993436,-0.00000362331999997622,8.16271999994642e-11,1.5708]);
Transform65.scaleOrientation = new SFRotation(new float[0.999999999986922,0.00000161480999997888,0.00000485263999993654,0.785375]);
Shape Shape66 = createNode("Shape");
Appearance Appearance67 = createNode("Appearance");
Material Material68 = createNode("Material");
Material68.DEF = "_5";
Material68.ambientIntensity = 0;
Material68.diffuseColor = new SFColor(new float[0,0,0]);
Material68.emissiveColor = new SFColor(new float[1,0,0.439812]);
Material68.shininess = 0;
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

Cone Cone69 = createNode("Cone");
Shape66.geometry = Cone69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Transform64.children = new MFNode();

Transform64.children[0] = Transform65;

Transform32.children[3] = Transform64;

Script Script70 = createNode("Script");
Script70.DEF = "RotationScript";
field field71 = createNode("field");
field71.name = "set_direction";
field71.accessType = "inputOnly";
field71.type = "SFVec3f";
Script70.field = new MFNode();

Script70.field[0] = field71;

field field72 = createNode("field");
field72.name = "rotation_changed";
field72.accessType = "outputOnly";
field72.type = "SFRotation";
Script70.field[1] = field72;


Script70.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_direction (value)\n"+
"{\n"+
"	rotation_changed = new SFRotation (new SFVec3f (0, 0, 1), value);\n"+
"}`)
Transform32.children[4] = Script70;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

Transform Transform73 = createNode("Transform");
Transform73.DEF = "Box";
Transform73.translation = new SFVec3f(new float[4.28962,1.06325,4.82481]);
Shape Shape74 = createNode("Shape");
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

Box Box77 = createNode("Box");
Shape74.geometry = Box77;

Transform73.child = new undefined();

Transform73.child[0] = Shape74;

Transform31.children[1] = Transform73;

Transform30.children = new MFNode();

Transform30.children[0] = Transform31;

Layer24.children[4] = Transform30;

Transform Transform78 = createNode("Transform");
Transform78.DEF = "Tile2";
Transform78.translation = new SFVec3f(new float[20,0,0]);
Transform Transform79 = createNode("Transform");
Transform79.USE = "_2";
Transform78.children = new MFNode();

Transform78.children[0] = Transform79;

Layer24.children[5] = Transform78;

Transform Transform80 = createNode("Transform");
Transform80.DEF = "Tile3";
Transform80.translation = new SFVec3f(new float[20,0,20]);
Transform Transform81 = createNode("Transform");
Transform81.USE = "_2";
Transform80.children = new MFNode();

Transform80.children[0] = Transform81;

Layer24.children[6] = Transform80;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "Tile4";
Transform82.translation = new SFVec3f(new float[0,0,20]);
Transform Transform83 = createNode("Transform");
Transform83.USE = "_2";
Transform82.children = new MFNode();

Transform82.children[0] = Transform83;

Layer24.children[7] = Transform82;

LayerSet23.layers = new MFNode();

LayerSet23.layers[0] = Layer24;

Layer Layer84 = createNode("Layer");
MetadataSet MetadataSet85 = createNode("MetadataSet");
MetadataSet85.name = "Titania";
MetadataSet85.DEF = "Titania_1";
MetadataSet85.reference = "http://titania.create3000.de";
MetadataSet MetadataSet86 = createNode("MetadataSet");
MetadataSet86.name = "Grid";
MetadataSet86.DEF = "Grid";
MetadataSet86.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean87 = createNode("MetadataBoolean");
MetadataBoolean87.name = "enabled";
MetadataBoolean87.reference = "http://titania.create3000.de";
MetadataBoolean87.value = new MFBool(new boolean[True]);
MetadataSet86.value = new MFNode();

MetadataSet86.value[0] = MetadataBoolean87;

MetadataFloat MetadataFloat88 = createNode("MetadataFloat");
MetadataFloat88.name = "rotation";
MetadataFloat88.reference = "http://titania.create3000.de";
MetadataFloat88.value = new MFFloat(new float[1,0,0,1.5708]);
MetadataSet86.value[1] = MetadataFloat88;

MetadataFloat MetadataFloat89 = createNode("MetadataFloat");
MetadataFloat89.name = "scale";
MetadataFloat89.reference = "http://titania.create3000.de";
MetadataFloat89.value = new MFFloat(new float[0.049,0.049,0.049]);
MetadataSet86.value[2] = MetadataFloat89;

MetadataInteger MetadataInteger90 = createNode("MetadataInteger");
MetadataInteger90.name = "dimension";
MetadataInteger90.reference = "http://titania.create3000.de";
MetadataInteger90.value = new MFInt32(new int[73,10,41]);
MetadataSet86.value[3] = MetadataInteger90;

MetadataInteger MetadataInteger91 = createNode("MetadataInteger");
MetadataInteger91.name = "majorLineEvery";
MetadataInteger91.reference = "http://titania.create3000.de";
MetadataInteger91.value = new MFInt32(new int[5,5,5,5,0,5]);
MetadataSet86.value[4] = MetadataInteger91;

MetadataInteger MetadataInteger92 = createNode("MetadataInteger");
MetadataInteger92.name = "majorLineOffset";
MetadataInteger92.reference = "http://titania.create3000.de";
MetadataInteger92.value = new MFInt32(new int[0,0,-5,-1,0,-6]);
MetadataSet86.value[5] = MetadataInteger92;

MetadataFloat MetadataFloat93 = createNode("MetadataFloat");
MetadataFloat93.name = "lineColor";
MetadataFloat93.reference = "http://titania.create3000.de";
MetadataFloat93.value = new MFFloat(new float[1,0.7,0.7,0.0588235]);
MetadataSet86.value[6] = MetadataFloat93;

MetadataSet85.value = new MFNode();

MetadataSet85.value[0] = MetadataSet86;

MetadataSet MetadataSet94 = createNode("MetadataSet");
MetadataSet94.name = "AngleGrid";
MetadataSet94.DEF = "AngleGrid";
MetadataSet94.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean95 = createNode("MetadataBoolean");
MetadataBoolean95.name = "enabled";
MetadataBoolean95.reference = "http://titania.create3000.de";
MetadataBoolean95.value = new MFBool(new boolean[False]);
MetadataSet94.value = new MFNode();

MetadataSet94.value[0] = MetadataBoolean95;

MetadataSet85.value[1] = MetadataSet94;

Layer84.metadata = MetadataSet85;

OrthoViewpoint OrthoViewpoint96 = createNode("OrthoViewpoint");
Layer84.children = new MFNode();

Layer84.children[0] = OrthoViewpoint96;

Transform Transform97 = createNode("Transform");
Transform97.DEF = "Geometry3D";
Transform97.translation = new SFVec3f(new float[-1.6905,0.955504,-1]);
Transform97.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Material Material100 = createNode("Material");
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

Text Text101 = createNode("Text");
Text101.string = new MFString(new java.lang.String["Local Light"]);
Text101.solid = True;
FontStyle FontStyle102 = createNode("FontStyle");
FontStyle102.family = new MFString(new java.lang.String["SANS"]);
FontStyle102.size = 1.61;
FontStyle102.justify = new MFString(new java.lang.String[", ","BEGINBEGIN"]);
Text101.fontStyle = FontStyle102;

Shape98.geometry = Text101;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

Layer84.children[1] = Transform97;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "LightMenu";
Transform Transform104 = createNode("Transform");
Transform104.DEF = "Text";
Transform104.translation = new SFVec3f(new float[1.6905,-0.661496,-1]);
Transform104.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape105 = createNode("Shape");
Appearance Appearance106 = createNode("Appearance");
Material Material107 = createNode("Material");
Material107.DEF = "Artdeco31";
Material107.ambientIntensity = 0;
Material107.diffuseColor = new SFColor(new float[0,0,0]);
Material107.shininess = 0;
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

Text Text108 = createNode("Text");
Text108.string = new MFString(new java.lang.String["SpotLight"]);
Text108.solid = True;
FontStyle FontStyle109 = createNode("FontStyle");
FontStyle109.family = new MFString(new java.lang.String["SANS"]);
FontStyle109.style = "BOLD";
FontStyle109.size = 0.68;
FontStyle109.justify = new MFString(new java.lang.String["END"]);
Text108.fontStyle = FontStyle109;

Shape105.geometry = Text108;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

Transform103.children = new MFNode();

Transform103.children[0] = Transform104;

Transform Transform110 = createNode("Transform");
Transform110.DEF = "GlobalButton";
Transform110.translation = new SFVec3f(new float[1.51582,-0.734328,-0.00000269843]);
Transform110.scale = new SFVec3f(new float[0.227685,0.040588,0.040588]);
Shape Shape111 = createNode("Shape");
Appearance Appearance112 = createNode("Appearance");
Material Material113 = createNode("Material");
Material113.transparency = 1;
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

IndexedFaceSet IndexedFaceSet114 = createNode("IndexedFaceSet");
IndexedFaceSet114.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet114.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate115 = createNode("TextureCoordinate");
TextureCoordinate115.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet114.texCoord = TextureCoordinate115;

Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet114.coord = Coordinate116;

Shape111.geometry = IndexedFaceSet114;

Transform110.child = new undefined();

Transform110.child[0] = Shape111;

TouchSensor TouchSensor117 = createNode("TouchSensor");
TouchSensor117.DEF = "_6";
Transform110.children[1] = TouchSensor117;

Transform103.children[1] = Transform110;

Transform Transform118 = createNode("Transform");
Transform118.DEF = "Text_1";
Transform118.translation = new SFVec3f(new float[1.6905,-0.759496,-1]);
Transform118.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape119 = createNode("Shape");
Appearance Appearance120 = createNode("Appearance");
Material Material121 = createNode("Material");
Appearance120.material = Material121;

Shape119.appearance = Appearance120;

Text Text122 = createNode("Text");
Text122.DEF = "_7";
Text122.string = new MFString(new java.lang.String["global false"]);
Text122.solid = True;
FontStyle FontStyle123 = createNode("FontStyle");
FontStyle123.family = new MFString(new java.lang.String["SANS"]);
FontStyle123.justify = new MFString(new java.lang.String["END"]);
Text122.fontStyle = FontStyle123;

Shape119.geometry = Text122;

Transform118.child = new undefined();

Transform118.child[0] = Shape119;

Transform103.children[2] = Transform118;

Layer84.children[2] = Transform103;

Group Group124 = createNode("Group");
Group124.DEF = "ShadingMenu";
Script Script125 = createNode("Script");
Script125.DEF = "ShadingScript";
field field126 = createNode("field");
field126.name = "set_pointset";
field126.accessType = "inputOnly";
field126.type = "SFTime";
Script125.field = new MFNode();

Script125.field[0] = field126;

field field127 = createNode("field");
field127.name = "set_wireframe";
field127.accessType = "inputOnly";
field127.type = "SFTime";
Script125.field[1] = field127;

field field128 = createNode("field");
field128.name = "set_flat";
field128.accessType = "inputOnly";
field128.type = "SFTime";
Script125.field[2] = field128;

field field129 = createNode("field");
field129.name = "set_gouraud";
field129.accessType = "inputOnly";
field129.type = "SFTime";
Script125.field[3] = field129;

field field130 = createNode("field");
field130.name = "set_phong";
field130.accessType = "inputOnly";
field130.type = "SFTime";
Script125.field[4] = field130;


Script125.setSourceCode(`javascript:\n"+
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
Group124.children = new MFNode();

Group124.children[0] = Script125;

Transform Transform131 = createNode("Transform");
Transform131.DEF = "Text_2";
Transform131.translation = new SFVec3f(new float[1.6905,-0.857496,-1]);
Transform131.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape132 = createNode("Shape");
Appearance Appearance133 = createNode("Appearance");
Material Material134 = createNode("Material");
Material134.DEF = "Artdeco31_1";
Material134.ambientIntensity = 0;
Material134.diffuseColor = new SFColor(new float[0,0,0]);
Material134.shininess = 0;
Appearance133.material = Material134;

Shape132.appearance = Appearance133;

Text Text135 = createNode("Text");
Text135.string = new MFString(new java.lang.String["Shading"]);
Text135.solid = True;
FontStyle FontStyle136 = createNode("FontStyle");
FontStyle136.family = new MFString(new java.lang.String["SANS"]);
FontStyle136.style = "BOLD";
FontStyle136.size = 0.68;
FontStyle136.justify = new MFString(new java.lang.String["END"]);
Text135.fontStyle = FontStyle136;

Shape132.geometry = Text135;

Transform131.child = new undefined();

Transform131.child[0] = Shape132;

Group124.children[1] = Transform131;

Transform Transform137 = createNode("Transform");
Transform137.DEF = "Text_3";
Transform137.translation = new SFVec3f(new float[1.6905,-0.955496,-1]);
Transform137.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape138 = createNode("Shape");
Appearance Appearance139 = createNode("Appearance");
Material Material140 = createNode("Material");
Appearance139.material = Material140;

Shape138.appearance = Appearance139;

Text Text141 = createNode("Text");
Text141.string = new MFString(new java.lang.String["Pointset Wireframe Flat Gouraud Phong"]);
Text141.solid = True;
FontStyle FontStyle142 = createNode("FontStyle");
FontStyle142.USE = "_1";
Text141.fontStyle = FontStyle142;

Shape138.geometry = Text141;

Transform137.child = new undefined();

Transform137.child[0] = Shape138;

Group124.children[2] = Transform137;

Transform Transform143 = createNode("Transform");
Transform143.DEF = "Pointset";
Transform143.translation = new SFVec3f(new float[0.436176,-0.916146,0]);
Transform143.scale = new SFVec3f(new float[0.139972,0.040588,0.040588]);
Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Material Material146 = createNode("Material");
Material146.DEF = "_8";
Material146.transparency = 1;
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

Transform143.child = new undefined();

Transform143.child[0] = Shape144;

TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.DEF = "_9";
Transform143.children[1] = TouchSensor150;

Group124.children[3] = Transform143;

Transform Transform151 = createNode("Transform");
Transform151.DEF = "Wireframe";
Transform151.translation = new SFVec3f(new float[0.77569,-0.916146,0]);
Transform151.scale = new SFVec3f(new float[0.177062,0.040588,0.040588]);
Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
Material Material154 = createNode("Material");
Material154.USE = "_8";
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

Transform151.child = new undefined();

Transform151.child[0] = Shape152;

TouchSensor TouchSensor158 = createNode("TouchSensor");
TouchSensor158.DEF = "_10";
Transform151.children[1] = TouchSensor158;

Group124.children[4] = Transform151;

Transform Transform159 = createNode("Transform");
Transform159.DEF = "Flat";
Transform159.translation = new SFVec3f(new float[1.04432,-0.916146,0]);
Transform159.scale = new SFVec3f(new float[0.0743511,0.040588,0.040588]);
Shape Shape160 = createNode("Shape");
Appearance Appearance161 = createNode("Appearance");
Material Material162 = createNode("Material");
Material162.USE = "_8";
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

Transform159.child = new undefined();

Transform159.child[0] = Shape160;

TouchSensor TouchSensor166 = createNode("TouchSensor");
TouchSensor166.DEF = "_11";
Transform159.children[1] = TouchSensor166;

Group124.children[5] = Transform159;

Transform Transform167 = createNode("Transform");
Transform167.DEF = "Gouraud";
Transform167.translation = new SFVec3f(new float[1.27986,-0.916146,0]);
Transform167.scale = new SFVec3f(new float[0.142825,0.040588,0.040588]);
Shape Shape168 = createNode("Shape");
Appearance Appearance169 = createNode("Appearance");
Material Material170 = createNode("Material");
Material170.USE = "_8";
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

Transform167.child = new undefined();

Transform167.child[0] = Shape168;

TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.DEF = "_12";
Transform167.children[1] = TouchSensor174;

Group124.children[6] = Transform167;

Transform Transform175 = createNode("Transform");
Transform175.DEF = "Phong";
Transform175.translation = new SFVec3f(new float[1.55457,-0.916146,0]);
Transform175.scale = new SFVec3f(new float[0.111441,0.040588,0.040588]);
Shape Shape176 = createNode("Shape");
Appearance Appearance177 = createNode("Appearance");
Material Material178 = createNode("Material");
Material178.USE = "_8";
Appearance177.material = Material178;

Shape176.appearance = Appearance177;

IndexedFaceSet IndexedFaceSet179 = createNode("IndexedFaceSet");
IndexedFaceSet179.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet179.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate180 = createNode("TextureCoordinate");
TextureCoordinate180.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet179.texCoord = TextureCoordinate180;

Coordinate Coordinate181 = createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet179.coord = Coordinate181;

Shape176.geometry = IndexedFaceSet179;

Transform175.child = new undefined();

Transform175.child[0] = Shape176;

TouchSensor TouchSensor182 = createNode("TouchSensor");
TouchSensor182.DEF = "_13";
Transform175.children[1] = TouchSensor182;

Group124.children[7] = Transform175;

Layer84.children[3] = Group124;

Script Script183 = createNode("Script");
Script183.DEF = "ToggleScript";
field field184 = createNode("field");
field184.name = "set_touchTime";
field184.accessType = "inputOnly";
field184.type = "SFTime";
Script183.field = new MFNode();

Script183.field[0] = field184;

field field185 = createNode("field");
field185.name = "string_changed";
field185.accessType = "outputOnly";
field185.type = "MFString";
Script183.field[1] = field185;

field field186 = createNode("field");
field186.name = "light";
field186.accessType = "initializeOnly";
field186.type = "SFNode";
SpotLight SpotLight187 = createNode("SpotLight");
SpotLight187.USE = "_4";
field186.children = new MFNode();

field186.children[0] = SpotLight187;

Script183.field[2] = field186;


Script183.setSourceCode(`javascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	eventsProcessed ();\n"+
"}\n"+
"\n"+
"function set_touchTime ()\n"+
"{\n"+
"	light .global = ! light .global;\n"+
"}\n"+
"\n"+
"function eventsProcessed ()\n"+
"{\n"+
"	string_changed = new MFString (\"global \" + light .global);\n"+
"}`)
Layer84.children[4] = Script183;

LayerSet23.layers[1] = Layer84;

layerSet[1] = LayerSet23;

ROUTE ROUTE188 = createNode("ROUTE");
ROUTE188.fromNode = "_3";
ROUTE188.fromField = "fraction_changed";
ROUTE188.toNode = "DirectionInterpolator";
ROUTE188.toField = "set_fraction";
children[2] = ROUTE188;

ROUTE ROUTE189 = createNode("ROUTE");
ROUTE189.fromNode = "DirectionInterpolator";
ROUTE189.fromField = "value_changed";
ROUTE189.toNode = "_4";
ROUTE189.toField = "set_direction";
children[3] = ROUTE189;

ROUTE ROUTE190 = createNode("ROUTE");
ROUTE190.fromNode = "_3";
ROUTE190.fromField = "fraction_changed";
ROUTE190.toNode = "ColorInterpolator";
ROUTE190.toField = "set_fraction";
children[4] = ROUTE190;

ROUTE ROUTE191 = createNode("ROUTE");
ROUTE191.fromNode = "ColorInterpolator";
ROUTE191.fromField = "value_changed";
ROUTE191.toNode = "_4";
ROUTE191.toField = "set_color";
children[5] = ROUTE191;

ROUTE ROUTE192 = createNode("ROUTE");
ROUTE192.fromNode = "ToggleScript";
ROUTE192.fromField = "string_changed";
ROUTE192.toNode = "_7";
ROUTE192.toField = "set_string";
children[6] = ROUTE192;

ROUTE ROUTE193 = createNode("ROUTE");
ROUTE193.fromNode = "_6";
ROUTE193.fromField = "touchTime";
ROUTE193.toNode = "ToggleScript";
ROUTE193.toField = "set_touchTime";
children[7] = ROUTE193;

ROUTE ROUTE194 = createNode("ROUTE");
ROUTE194.fromNode = "RotationScript";
ROUTE194.fromField = "rotation_changed";
ROUTE194.toNode = "Cone";
ROUTE194.toField = "set_rotation";
children[8] = ROUTE194;

ROUTE ROUTE195 = createNode("ROUTE");
ROUTE195.fromNode = "_4";
ROUTE195.fromField = "direction_changed";
ROUTE195.toNode = "RotationScript";
ROUTE195.toField = "set_direction";
children[9] = ROUTE195;

ROUTE ROUTE196 = createNode("ROUTE");
ROUTE196.fromNode = "_4";
ROUTE196.fromField = "color_changed";
ROUTE196.toNode = "_5";
ROUTE196.toField = "set_emissiveColor";
children[10] = ROUTE196;

ROUTE ROUTE197 = createNode("ROUTE");
ROUTE197.fromNode = "_3";
ROUTE197.fromField = "fraction_changed";
ROUTE197.toNode = "BeamWidthInterpolator";
ROUTE197.toField = "set_fraction";
children[11] = ROUTE197;

ROUTE ROUTE198 = createNode("ROUTE");
ROUTE198.fromNode = "BeamWidthInterpolator";
ROUTE198.fromField = "value_changed";
ROUTE198.toNode = "_4";
ROUTE198.toField = "set_beamWidth";
children[12] = ROUTE198;

ROUTE ROUTE199 = createNode("ROUTE");
ROUTE199.fromNode = "_3";
ROUTE199.fromField = "fraction_changed";
ROUTE199.toNode = "CutOffAngleInterpolator";
ROUTE199.toField = "set_fraction";
children[13] = ROUTE199;

ROUTE ROUTE200 = createNode("ROUTE");
ROUTE200.fromNode = "CutOffAngleInterpolator";
ROUTE200.fromField = "value_changed";
ROUTE200.toNode = "_4";
ROUTE200.toField = "set_cutOffAngle";
children[14] = ROUTE200;

ROUTE ROUTE201 = createNode("ROUTE");
ROUTE201.fromNode = "_11";
ROUTE201.fromField = "touchTime";
ROUTE201.toNode = "ShadingScript";
ROUTE201.toField = "set_flat";
children[15] = ROUTE201;

ROUTE ROUTE202 = createNode("ROUTE");
ROUTE202.fromNode = "_10";
ROUTE202.fromField = "touchTime";
ROUTE202.toNode = "ShadingScript";
ROUTE202.toField = "set_wireframe";
children[16] = ROUTE202;

ROUTE ROUTE203 = createNode("ROUTE");
ROUTE203.fromNode = "_9";
ROUTE203.fromField = "touchTime";
ROUTE203.toNode = "ShadingScript";
ROUTE203.toField = "set_pointset";
children[17] = ROUTE203;

ROUTE ROUTE204 = createNode("ROUTE");
ROUTE204.fromNode = "_13";
ROUTE204.fromField = "touchTime";
ROUTE204.toNode = "ShadingScript";
ROUTE204.toField = "set_phong";
children[18] = ROUTE204;

ROUTE ROUTE205 = createNode("ROUTE");
ROUTE205.fromNode = "_12";
ROUTE205.fromField = "touchTime";
ROUTE205.toNode = "ShadingScript";
ROUTE205.toField = "set_gouraud";
children[19] = ROUTE205;

}
