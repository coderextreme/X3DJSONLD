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
meta3.setContent(CString("Mon, 09 Nov 2015 13:19:33 GMT"));
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
meta6.setContent(CString("Mon, 09 Nov 2015 13:19:33 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
Group& Group9 =  Group();
TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("TimeSensor01-TIMER"));
TimeSensor10.setCycleInterval(4);
TimeSensor10.setLoop(true);
TimeSensor10.setStartTime(1);
Group9.addChild(&TimeSensor10);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("Seaweed01-ROOT"));
Transform11.setTranslation(new float[]{-0.02971,1.236,-0.02574});
Transform11.setRotation(new float[]{0.430281,-0.622973,0.653271,2.375});
TimeSensor& TimeSensor12 =  TimeSensor();
TimeSensor12.setDEF(CString("Seaweed01-TIMER"));
TimeSensor12.setCycleInterval(4);
Transform11.addChild(&TimeSensor12);

PositionInterpolator& PositionInterpolator13 =  PositionInterpolator();
PositionInterpolator13.setDEF(CString("Seaweed01-POS-INTERP"));
PositionInterpolator13.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
PositionInterpolator13.setKeyValue(new float[]{-0.02971,1.236,-0.02574,-0.1194,1.231,-0.02574,-0.2155,1.217,-0.02574,-0.2544,1.21,-0.02574,-0.1983,1.22,-0.02574,-0.09911,1.232,-0.02574,0.02576,1.236,-0.02574,0.1625,1.226,-0.02574,0.2968,1.2,-0.02574,0.415,1.165,-0.02574,0.5053,1.128,-0.02574,0.5766,1.094,-0.02574,0.6385,1.059,-0.02574,0.6827,1.031,-0.02574,0.7021,1.018,-0.02574,0.6888,1.027,-0.02574,0.6244,1.067,-0.02574,0.4847,1.137,-0.02574,0.295,1.201,-0.02574,0.09374,1.233,-0.02574,-0.02971,1.236,-0.02574}, 63);
Transform11.addChild(&PositionInterpolator13);

OrientationInterpolator& OrientationInterpolator14 =  OrientationInterpolator();
OrientationInterpolator14.setDEF(CString("Seaweed01-ROT-INTERP"));
OrientationInterpolator14.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
OrientationInterpolator14.setKeyValue(new float[]{0.430281,-0.622973,0.653271,2.375,0.448413,-0.601317,0.661319,2.423,0.467288,-0.577785,0.669183,2.475,0.474716,-0.56812,0.672223,2.497,0.463927,-0.582034,0.667839,2.466,0.444391,-0.606187,0.659586,2.412,0.418681,-0.636271,0.64797,2.346,0.388817,-0.668929,0.633527,2.275,0.357188,-0.701076,0.617179,2.206,0.326921,-0.729546,0.600738,2.145,0.301896,-0.751589,0.586492,2.098,0.280687,-0.769265,0.573974,2.061,0.261002,-0.784805,0.562103,2.028,0.246189,-0.796065,0.552876,2.005,0.239509,-0.801031,0.548621,1.994,0.244112,-0.797639,0.551527,2.001,0.265589,-0.781267,0.564876,2.036,0.307689,-0.746573,0.589878,2.109,0.357618,-0.700635,0.617431,2.207,0.404113,-0.652521,0.641021,2.31,0.430281,-0.622973,0.653271,2.375}, 84);
Transform11.addChild(&OrientationInterpolator14);

Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setDiffuseColor(new float[]{0.1098,0.349,0.6941});
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setDEF(CString("Seaweed01-FACES"));
IndexedFaceSet18.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,3,2,1,-1,4,3,1,-1,4,0,3,-1,4,1,0,-1}, 24);
IndexedFaceSet18.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,3,2,1,-1,4,3,1,-1,4,0,3,-1,4,1,0,-1}, 24);
CColor& Color19 =  CColor();
Color19.setColor(new float[]{0.0,0.5137,0.03529,0.0,0.3725,0.6627,0.0,0.3725,0.6627,0.0,0.3725,0.6627,0.0,0.3725,0.6627}, 15);
IndexedFaceSet18.setColor(&Color19);

Coordinate& Coordinate20 =  Coordinate();
Coordinate20.setDEF(CString("Seaweed01-COORD"));
Coordinate20.setPoint(new float[]{0.126,0.126,0.5941,0.04385,0.04379,-1.343,-0.1855,0.1237,0.6651,0.04385,0.04379,1.343,0.1176,-0.1794,0.6651}, 15);
IndexedFaceSet18.setCoord(&Coordinate20);

Shape15.setGeometry(&IndexedFaceSet18);

Transform11.addChild(&Shape15);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("Seaweed02-ROOT"));
Transform21.setTranslation(new float[]{-0.04319,-0.1943,-2.567});
Transform21.setRotation(new float[]{-0.876071,0.144295,-0.460085,0.1839});
Transform21.setScaleOrientation(new float[]{0.394606,0.274104,0.877014,0.8427});
PositionInterpolator& PositionInterpolator22 =  PositionInterpolator();
PositionInterpolator22.setDEF(CString("Seaweed02-POS-INTERP"));
PositionInterpolator22.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
PositionInterpolator22.setKeyValue(new float[]{-0.04319,-0.1943,-2.567,-0.06646,-0.2469,-2.555,-0.09138,-0.3031,-2.539,-0.1012,-0.3253,-2.531,-0.08654,-0.2922,-2.542,-0.06234,-0.2376,-2.557,-0.03196,-0.1689,-2.572,0.002529,-0.09062,-2.583,0.0389,-0.007903,-2.588,0.07483,0.07404,-2.587,0.108,0.15,-2.58,0.146,0.2371,-2.565,0.1909,0.3403,-2.537,0.2324,0.4362,-2.5,0.2616,0.5039,-2.468,0.2706,0.5249,-2.457,0.2484,0.4733,-2.484,0.1871,0.3317,-2.54,0.1011,0.1341,-2.582,0.01066,-0.07215,-2.585,-0.04321,-0.1943,-2.567}, 63);
Transform21.addChild(&PositionInterpolator22);

OrientationInterpolator& OrientationInterpolator23 =  OrientationInterpolator();
OrientationInterpolator23.setDEF(CString("Seaweed02-ROT-INTERP"));
OrientationInterpolator23.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
OrientationInterpolator23.setKeyValue(new float[]{-0.876071,0.144295,-0.460085,0.1839,-0.907578,0.193595,-0.372591,0.2263,-0.924174,0.228094,-0.306391,0.2742,-0.928193,0.238398,-0.285698,0.2936,-0.921808,0.222402,-0.317503,0.2647,-0.903511,0.186402,-0.385905,0.2186,-0.84999,0.110899,-0.514994,0.164499,-0.659187,-0.0623988,-0.749385,0.1135,-0.0711122,-0.365911,-0.927929,0.091901,0.504506,-0.495306,-0.707209,0.120801,0.717686,-0.48849,-0.49629,0.172399,0.811819,-0.464511,-0.353808,0.2419,0.858696,-0.442398,-0.258699,0.3306,0.88045,-0.427776,-0.204488,0.4173,0.890171,-0.419886,-0.176894,0.481,0.892612,-0.417706,-0.169602,0.5012,0.886171,-0.423286,-0.188494,0.4519,0.856069,-0.443884,-0.26479,0.3229,0.688398,-0.492498,-0.532498,0.160599,-0.568692,-0.124398,-0.813089,0.1047,-0.876112,0.144302,-0.460006,0.1839}, 84);
Transform21.addChild(&OrientationInterpolator23);

Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDiffuseColor(new float[]{0.1098,0.349,0.6941});
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

IndexedFaceSet& IndexedFaceSet27 =  IndexedFaceSet();
IndexedFaceSet27.setUSE(CString("Seaweed01-FACES"));
Shape24.setGeometry(&IndexedFaceSet27);

Transform21.addChild(&Shape24);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("Seaweed03-ROOT"));
Transform28.setTranslation(new float[]{-0.04831,-0.0669,-2.462});
Transform28.setRotation(new float[]{-0.212606,0.0791522,-0.973927,0.305});
Transform28.setScaleOrientation(new float[]{0.0,-0.658972,-0.752168,0.3532});
PositionInterpolator& PositionInterpolator29 =  PositionInterpolator();
PositionInterpolator29.setDEF(CString("Seaweed03-POS-INTERP"));
PositionInterpolator29.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
PositionInterpolator29.setKeyValue(new float[]{-0.04831,-0.0669,-2.462,-0.08597,-0.1786,-2.445,-0.1249,-0.2948,-2.416,-0.1456,-0.3568,-2.394,-0.1372,-0.3316,-2.403,-0.1157,-0.2672,-2.424,-0.08596,-0.1785,-2.445,-0.05172,-0.07699,-2.461,-0.01719,0.02478,-2.467,0.01319,0.1139,-2.464,0.03507,0.1778,-2.458,0.04801,0.2154,-2.453,0.05495,0.2356,-2.449,0.05673,0.2408,-2.448,0.0542,0.2334,-2.45,0.04815,0.2158,-2.453,0.03739,0.1845,-2.457,0.01786,0.1275,-2.463,-0.006604,0.05589,-2.467,-0.0315,-0.01731,-2.465,-0.04831,-0.06691,-2.462}, 63);
Transform28.addChild(&PositionInterpolator29);

OrientationInterpolator& OrientationInterpolator30 =  OrientationInterpolator();
OrientationInterpolator30.setDEF(CString("Seaweed03-ROT-INTERP"));
OrientationInterpolator30.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
OrientationInterpolator30.setKeyValue(new float[]{-0.212606,0.0791522,-0.973927,0.305,-0.472782,0.122195,-0.872666,0.3382,-0.657621,0.150205,-0.738223,0.3964,-0.725661,0.159691,-0.669264,0.4349,-0.700176,0.156195,-0.696676,0.4187,-0.621171,0.144893,-0.770164,0.3808,-0.472704,0.122201,-0.872707,0.3382,-0.239096,0.0836885,-0.967383,0.3069,0.0422514,0.0338911,-0.998532,0.2987,0.281802,-0.0112401,-0.959407,0.3117,0.428076,-0.0401678,-0.90285,0.3318,0.501574,-0.0551571,-0.863355,0.3472,0.536983,-0.062518,-0.841273,0.3564,0.545703,-0.0643404,-0.835505,0.3588,0.533286,-0.0617484,-0.843678,0.3553,0.50231,-0.055321,-0.862916,0.3473,0.441994,-0.0429794,-0.895988,0.3343,0.315218,-0.017761,-0.948853,0.3153,0.129096,0.0178295,-0.991472,0.3011,-0.0766019,0.0553513,-0.995524,0.299,-0.212606,0.0791522,-0.973927,0.305}, 84);
Transform28.addChild(&OrientationInterpolator30);

Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDiffuseColor(new float[]{0.1098,0.349,0.6941});
Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet34 =  IndexedFaceSet();
IndexedFaceSet34.setUSE(CString("Seaweed01-FACES"));
Shape31.setGeometry(&IndexedFaceSet34);

Transform28.addChild(&Shape31);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("Seaweed04-ROOT"));
Transform35.setTranslation(new float[]{-0.07361,-0.1399,-2.448});
Transform35.setRotation(new float[]{-0.513175,0.182491,-0.838659,0.2393});
Transform35.setScaleOrientation(new float[]{0.482308,0.146802,0.863614,0.3148});
PositionInterpolator& PositionInterpolator36 =  PositionInterpolator();
PositionInterpolator36.setDEF(CString("Seaweed04-POS-INTERP"));
PositionInterpolator36.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
PositionInterpolator36.setKeyValue(new float[]{-0.07361,-0.1399,-2.448,-0.07392,-0.1505,-2.447,-0.07444,-0.1683,-2.444,-0.07454,-0.1719,-2.443,-0.07361,-0.1399,-2.448,-0.07146,-0.06609,-2.456,-0.06849,0.03331,-2.46,-0.06507,0.1457,-2.455,-0.06157,0.258,-2.439,-0.0584,0.3574,-2.416,-0.05596,0.4324,-2.393,-0.05466,0.4719,-2.378,-0.05487,0.4657,-2.381,-0.05624,0.4239,-2.396,-0.05831,0.3603,-2.415,-0.06057,0.2896,-2.432,-0.06282,0.2182,-2.446,-0.06556,0.1298,-2.456,-0.06855,0.0315,-2.46,-0.07148,-0.06705,-2.456,-0.07361,-0.1399,-2.448}, 63);
Transform35.addChild(&PositionInterpolator36);

OrientationInterpolator& OrientationInterpolator37 =  OrientationInterpolator();
OrientationInterpolator37.setDEF(CString("Seaweed04-ROT-INTERP"));
OrientationInterpolator37.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
OrientationInterpolator37.setKeyValue(new float[]{-0.513175,0.182491,-0.838659,0.2393,-0.539304,0.176501,-0.823406,0.2439,-0.579688,0.166797,-0.797584,0.2521,-0.587306,0.164802,-0.792409,0.2538,-0.513175,0.182491,-0.838659,0.2393,-0.291805,0.223004,-0.930118,0.2148,0.0868647,0.259414,-0.961852,0.2062,0.469097,0.257099,-0.844895,0.2326,0.69967,0.22989,-0.676471,0.2873,0.810475,0.204594,-0.548883,0.35,0.861299,0.1881,-0.471999,0.4032,0.881089,0.180398,-0.437194,0.4328,0.878191,0.181598,-0.442496,0.4281,0.856534,0.189808,-0.479919,0.3969,0.812875,0.203894,-0.545583,0.352,0.742069,0.221491,-0.632673,0.3061,0.634009,0.240403,-0.73501,0.2655,0.424093,0.259696,-0.867585,0.2268,0.0797762,0.259088,-0.962554,0.2061,-0.295191,0.222493,-0.929171,0.214999,-0.513175,0.182491,-0.838659,0.2393}, 84);
Transform35.addChild(&OrientationInterpolator37);

Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setDiffuseColor(new float[]{0.1098,0.349,0.6941});
Appearance39.addChild(&Material40);

Shape38.addChild(&Appearance39);

IndexedFaceSet& IndexedFaceSet41 =  IndexedFaceSet();
IndexedFaceSet41.setUSE(CString("Seaweed01-FACES"));
Shape38.setGeometry(&IndexedFaceSet41);

Transform35.addChild(&Shape38);

Transform& Transform42 =  Transform();
Transform42.setDEF(CString("Seaweed05-ROOT"));
Transform42.setTranslation(new float[]{-0.05995,0.2236,-2.402});
Transform42.setRotation(new float[]{0.488583,0.198793,-0.849569,0.3441});
Transform42.setScaleOrientation(new float[]{0.0,0.159905,0.987132,0.4307});
PositionInterpolator& PositionInterpolator43 =  PositionInterpolator();
PositionInterpolator43.setDEF(CString("Seaweed05-POS-INTERP"));
PositionInterpolator43.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
PositionInterpolator43.setKeyValue(new float[]{-0.05995,0.2236,-2.402,-0.0529,0.1838,-2.408,-0.04573,0.1431,-2.413,-0.0391,0.105,-2.416,-0.03401,0.07557,-2.418,-0.03266,0.06774,-2.418,-0.02749,0.03761,-2.419,-0.01744,-0.02154,-2.418,-0.005854,-0.09069,-2.414,0.004712,-0.1547,-2.406,0.01191,-0.1989,-2.399,0.01351,-0.2088,-2.397,-0.002632,-0.1101,-2.412,-0.03219,0.06502,-2.418,-0.05149,0.1759,-2.409,-0.06275,0.2392,-2.399,-0.07145,0.2877,-2.389,-0.07885,0.3284,-2.379,-0.08618,0.3684,-2.367,-0.09663,0.4248,-2.349,-0.05995,0.2236,-2.402}, 63);
Transform42.addChild(&PositionInterpolator43);

OrientationInterpolator& OrientationInterpolator44 =  OrientationInterpolator();
OrientationInterpolator44.setDEF(CString("Seaweed05-ROT-INTERP"));
OrientationInterpolator44.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1.0}, 21);
OrientationInterpolator44.setKeyValue(new float[]{0.488583,0.198793,-0.849569,0.3441,0.414413,0.175905,-0.892927,0.3296,0.328702,0.149001,-0.932606,0.3176,0.240706,0.121003,-0.963026,0.3094,0.168299,0.0975695,-0.980895,0.3051,0.148598,0.0911588,-0.984687,0.3042,0.0714576,0.0658678,-0.995266,0.3023,-0.0812683,0.0149997,-0.996579,0.3044,-0.249699,-0.0423898,-0.967395,0.3164,-0.385511,-0.0897626,-0.918327,0.3359,-0.465508,-0.118202,-0.877115,0.3535,-0.481826,-0.124007,-0.867448,0.3578,-0.293297,-0.0574795,-0.954292,0.3215,0.141701,0.0889108,-0.985909,0.304,0.398502,0.170901,-0.901104,0.327,0.515209,0.206904,-0.831715,0.3505,0.588495,0.228998,-0.775393,0.3728,0.640378,0.244291,-0.728175,0.3939,0.683694,0.256798,-0.683094,0.4167,0.733834,0.271013,-0.622929,0.4517,0.488583,0.198793,-0.849569,0.3441}, 84);
Transform42.addChild(&OrientationInterpolator44);

Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDiffuseColor(new float[]{0.1098,0.349,0.6941});
Appearance46.addChild(&Material47);

Shape45.addChild(&Appearance46);

IndexedFaceSet& IndexedFaceSet48 =  IndexedFaceSet();
IndexedFaceSet48.setUSE(CString("Seaweed01-FACES"));
Shape45.setGeometry(&IndexedFaceSet48);

Transform42.addChild(&Shape45);

Transform35.addChild(&Transform42);

Transform28.addChild(&Transform35);

Transform21.addChild(&Transform28);

Transform11.addChild(&Transform21);

Group9.addChild(&Transform11);

Group8.addChild(&Group9);

Scene7.addChild(&Group8);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Seaweed01-TIMER"));
ROUTE49.setFromField(CString("fraction_changed"));
ROUTE49.setToNode(CString("Seaweed01-POS-INTERP"));
ROUTE49.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE50.setFromField(CString("fraction_changed"));
ROUTE50.setToNode(CString("Seaweed01-POS-INTERP"));
ROUTE50.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Seaweed01-TIMER"));
ROUTE51.setFromField(CString("fraction_changed"));
ROUTE51.setToNode(CString("Seaweed01-ROT-INTERP"));
ROUTE51.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE52.setFromField(CString("fraction_changed"));
ROUTE52.setToNode(CString("Seaweed01-ROT-INTERP"));
ROUTE52.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("Seaweed01-TIMER"));
ROUTE53.setFromField(CString("fraction_changed"));
ROUTE53.setToNode(CString("Seaweed02-POS-INTERP"));
ROUTE53.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE53);

ROUTE& ROUTE54 =  ROUTE();
ROUTE54.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE54.setFromField(CString("fraction_changed"));
ROUTE54.setToNode(CString("Seaweed02-POS-INTERP"));
ROUTE54.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("Seaweed01-TIMER"));
ROUTE55.setFromField(CString("fraction_changed"));
ROUTE55.setToNode(CString("Seaweed02-ROT-INTERP"));
ROUTE55.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE56.setFromField(CString("fraction_changed"));
ROUTE56.setToNode(CString("Seaweed02-ROT-INTERP"));
ROUTE56.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("Seaweed01-TIMER"));
ROUTE57.setFromField(CString("fraction_changed"));
ROUTE57.setToNode(CString("Seaweed03-POS-INTERP"));
ROUTE57.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE58.setFromField(CString("fraction_changed"));
ROUTE58.setToNode(CString("Seaweed03-POS-INTERP"));
ROUTE58.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("Seaweed01-TIMER"));
ROUTE59.setFromField(CString("fraction_changed"));
ROUTE59.setToNode(CString("Seaweed03-ROT-INTERP"));
ROUTE59.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE60.setFromField(CString("fraction_changed"));
ROUTE60.setToNode(CString("Seaweed03-ROT-INTERP"));
ROUTE60.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Seaweed01-TIMER"));
ROUTE61.setFromField(CString("fraction_changed"));
ROUTE61.setToNode(CString("Seaweed04-POS-INTERP"));
ROUTE61.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE62.setFromField(CString("fraction_changed"));
ROUTE62.setToNode(CString("Seaweed04-POS-INTERP"));
ROUTE62.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Seaweed01-TIMER"));
ROUTE63.setFromField(CString("fraction_changed"));
ROUTE63.setToNode(CString("Seaweed04-ROT-INTERP"));
ROUTE63.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE64.setFromField(CString("fraction_changed"));
ROUTE64.setToNode(CString("Seaweed04-ROT-INTERP"));
ROUTE64.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Seaweed01-TIMER"));
ROUTE65.setFromField(CString("fraction_changed"));
ROUTE65.setToNode(CString("Seaweed05-POS-INTERP"));
ROUTE65.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE66.setFromField(CString("fraction_changed"));
ROUTE66.setToNode(CString("Seaweed05-POS-INTERP"));
ROUTE66.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Seaweed01-TIMER"));
ROUTE67.setFromField(CString("fraction_changed"));
ROUTE67.setToNode(CString("Seaweed05-ROT-INTERP"));
ROUTE67.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE68.setFromField(CString("fraction_changed"));
ROUTE68.setToNode(CString("Seaweed05-ROT-INTERP"));
ROUTE68.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Seaweed05-POS-INTERP"));
ROUTE69.setFromField(CString("value_changed"));
ROUTE69.setToNode(CString("Seaweed05-ROOT"));
ROUTE69.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("Seaweed05-ROT-INTERP"));
ROUTE70.setFromField(CString("value_changed"));
ROUTE70.setToNode(CString("Seaweed05-ROOT"));
ROUTE70.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("Seaweed04-POS-INTERP"));
ROUTE71.setFromField(CString("value_changed"));
ROUTE71.setToNode(CString("Seaweed04-ROOT"));
ROUTE71.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("Seaweed04-ROT-INTERP"));
ROUTE72.setFromField(CString("value_changed"));
ROUTE72.setToNode(CString("Seaweed04-ROOT"));
ROUTE72.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("Seaweed03-POS-INTERP"));
ROUTE73.setFromField(CString("value_changed"));
ROUTE73.setToNode(CString("Seaweed03-ROOT"));
ROUTE73.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("Seaweed03-ROT-INTERP"));
ROUTE74.setFromField(CString("value_changed"));
ROUTE74.setToNode(CString("Seaweed03-ROOT"));
ROUTE74.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("Seaweed02-POS-INTERP"));
ROUTE75.setFromField(CString("value_changed"));
ROUTE75.setToNode(CString("Seaweed02-ROOT"));
ROUTE75.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("Seaweed02-ROT-INTERP"));
ROUTE76.setFromField(CString("value_changed"));
ROUTE76.setToNode(CString("Seaweed02-ROOT"));
ROUTE76.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("Seaweed01-POS-INTERP"));
ROUTE77.setFromField(CString("value_changed"));
ROUTE77.setToNode(CString("Seaweed01-ROOT"));
ROUTE77.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("Seaweed01-ROT-INTERP"));
ROUTE78.setFromField(CString("value_changed"));
ROUTE78.setToNode(CString("Seaweed01-ROOT"));
ROUTE78.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE78);

X3D0.setScene(&Scene7);

//}
