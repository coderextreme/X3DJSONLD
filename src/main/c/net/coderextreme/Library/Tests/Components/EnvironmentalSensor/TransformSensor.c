#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalSensor";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Grouping";
component4.level = 3;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Shape";
component5.level = 4;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Time";
component6.level = 2;
head1.component[4] = component6;

meta meta7 = createNode("meta");
meta7.name = "comment";
meta7.content = "World of Titania";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "Tue, 28 Oct 2014 06:07:32 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "Holger Seelig";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "Titania V4.4.0, http://titania.create3000.de";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "file:///home/holger/Projekte/Library/Tests/Components/EnvironmentalSensor/TransformSensor.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "modified";
meta12.content = "Sat, 23 Feb 2019 19:14:49 GMT";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "title";
meta13.content = "ProximitySensor";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "TransformSensor";
MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "Titania";
MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "AngleGrid";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean18 = createNode("MetadataBoolean");
MetadataBoolean18.name = "enabled";
MetadataBoolean18.reference = "http://titania.create3000.de";
MetadataBoolean18.value = new MFBool(new boolean[False]);
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataBoolean18;

MetadataFloat MetadataFloat19 = createNode("MetadataFloat");
MetadataFloat19.name = "scale";
MetadataFloat19.DEF = "scale";
MetadataFloat19.reference = "http://titania.create3000.de";
MetadataFloat19.value = new MFFloat(new float[0.992838,0.992838,0.992838]);
MetadataSet17.value[1] = MetadataFloat19;

MetadataInteger MetadataInteger20 = createNode("MetadataInteger");
MetadataInteger20.name = "dimension";
MetadataInteger20.DEF = "dimension";
MetadataInteger20.reference = "http://titania.create3000.de";
MetadataInteger20.value = new MFInt32(new int[5,4,10]);
MetadataSet17.value[2] = MetadataInteger20;

MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataSet17;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "Grid";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean22 = createNode("MetadataBoolean");
MetadataBoolean22.name = "enabled";
MetadataBoolean22.reference = "http://titania.create3000.de";
MetadataBoolean22.value = new MFBool(new boolean[True]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataBoolean22;

MetadataSet16.value[1] = MetadataSet21;

MetadataSet MetadataSet23 = createNode("MetadataSet");
MetadataSet23.name = "NavigationInfo";
MetadataSet23.DEF = "NavigationInfo";
MetadataSet23.reference = "http://titania.create3000.de";
MetadataString MetadataString24 = createNode("MetadataString");
MetadataString24.name = "type";
MetadataString24.DEF = "type";
MetadataString24.reference = "http://titania.create3000.de";
MetadataString24.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet23.value = new MFNode();

MetadataSet23.value[0] = MetadataString24;

MetadataSet16.value[2] = MetadataSet23;

MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "Viewpoint";
MetadataSet25.DEF = "Viewpoint";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble26 = createNode("MetadataDouble");
MetadataDouble26.name = "position";
MetadataDouble26.DEF = "position";
MetadataDouble26.reference = "http://titania.create3000.de";
MetadataDouble26.value = new MFDouble(new double[-1.21197057938843,-9.62489914892611,-4.59826846301702]);
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataDouble26;

MetadataDouble MetadataDouble27 = createNode("MetadataDouble");
MetadataDouble27.name = "orientation";
MetadataDouble27.DEF = "orientation";
MetadataDouble27.reference = "http://titania.create3000.de";
MetadataDouble27.value = new MFDouble(new double[0.996469789501928,-0.0178473563393665,-0.082033106010194,1.97927696482974]);
MetadataSet25.value[1] = MetadataDouble27;

MetadataDouble MetadataDouble28 = createNode("MetadataDouble");
MetadataDouble28.name = "centerOfRotation";
MetadataDouble28.DEF = "centerOfRotation";
MetadataDouble28.reference = "http://titania.create3000.de";
MetadataDouble28.value = new MFDouble(new double[0.0647718980908394,-0.70440000295639,-0.806771993637085]);
MetadataSet25.value[2] = MetadataDouble28;

MetadataSet16.value[3] = MetadataSet25;

MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "Selection";
MetadataSet29.DEF = "Selection";
MetadataSet29.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean30 = createNode("MetadataBoolean");
MetadataBoolean30.name = "selectGeometry";
MetadataBoolean30.DEF = "selectGeometry";
MetadataBoolean30.reference = "http://titania.create3000.de";
MetadataBoolean30.value = new MFBool(new boolean[False]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataBoolean30;

MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "nodes";
MetadataSet31.DEF = "nodes";
MetadataSet31.reference = "http://titania.create3000.de";
MetadataSet29.value[1] = MetadataSet31;

MetadataSet16.value[4] = MetadataSet29;

MetadataSet MetadataSet32 = createNode("MetadataSet");
MetadataSet32.name = "Page";
MetadataSet32.DEF = "Page";
MetadataSet32.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger33 = createNode("MetadataInteger");
MetadataInteger33.name = "activeView";
MetadataInteger33.DEF = "activeView";
MetadataInteger33.reference = "http://titania.create3000.de";
MetadataInteger33.value = new MFInt32(new int[1]);
MetadataSet32.value = new MFNode();

MetadataSet32.value[0] = MetadataInteger33;

MetadataInteger MetadataInteger34 = createNode("MetadataInteger");
MetadataInteger34.name = "multiView";
MetadataInteger34.DEF = "multiView";
MetadataInteger34.reference = "http://titania.create3000.de";
MetadataInteger34.value = new MFInt32(new int[0]);
MetadataSet32.value[1] = MetadataInteger34;

MetadataSet16.value[5] = MetadataSet32;

WorldInfo15.metadata = MetadataSet16;

children = new MFNode();

children[0] = WorldInfo15;

Background Background35 = createNode("Background");
Background35.DEF = "Gray";
Background35.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Home";
Viewpoint36.position = new SFVec3f(new float[3.55616,4.07403,7.9662]);
Viewpoint36.orientation = new SFRotation(new float[-0.771075669650436,0.61935348681634,0.147795703731776,0.600254103484512]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[0.0647719,-0.7044,-0.806772]);
children[2] = Viewpoint36;

Transform Transform37 = createNode("Transform");
Group Group38 = createNode("Group");
Group38.DEF = "TransformRotationAnimation";
MetadataSet MetadataSet39 = createNode("MetadataSet");
MetadataSet39.name = "Animation";
MetadataSet39.DEF = "Animation";
MetadataSet39.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger40 = createNode("MetadataInteger");
MetadataInteger40.name = "duration";
MetadataInteger40.DEF = "duration";
MetadataInteger40.reference = "http://titania.create3000.de";
MetadataInteger40.value = new MFInt32(new int[61]);
MetadataSet39.value = new MFNode();

MetadataSet39.value[0] = MetadataInteger40;

MetadataInteger MetadataInteger41 = createNode("MetadataInteger");
MetadataInteger41.name = "framesPerSecond";
MetadataInteger41.DEF = "framesPerSecond";
MetadataInteger41.reference = "http://titania.create3000.de";
MetadataInteger41.value = new MFInt32(new int[10]);
MetadataSet39.value[1] = MetadataInteger41;

Group38.metadata = MetadataSet39;

TimeSensor TimeSensor42 = createNode("TimeSensor");
TimeSensor42.DEF = "_1";
TimeSensor42.cycleInterval = 6.1;
TimeSensor42.loop = True;
Group38.children = new MFNode();

Group38.children[0] = TimeSensor42;

OrientationInterpolator OrientationInterpolator43 = createNode("OrientationInterpolator");
OrientationInterpolator43.DEF = "BoxRotationInterpolator";
OrientationInterpolator43.key = new MFFloat(new float[0,0.0163934,0.0327869,0.0491803,0.0655738,0.0819672,0.0983607,0.114754,0.131148,0.147541,0.163934,0.180328,0.196721,0.213115,0.229508,0.245902,0.262295,0.278689,0.295082,0.311475,0.327869,0.344262,0.360656,0.377049,0.393443,0.409836,0.42623,0.442623,0.459016,0.47541,0.491803,0.508197,0.52459,0.540984,0.557377,0.57377,0.590164,0.606557,0.622951,0.639344,0.655738,0.672131,0.688525,0.704918,0.721311,0.737705,0.754098,0.770492,0.786885,0.803279,0.819672,0.836066,0.852459,0.868852,0.885246,0.901639,0.918033,0.934426,0.95082,0.967213,0.983607,1]);
OrientationInterpolator43.keyValue = new MFRotation(new float[0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375,0.805229276624979,-0.189908587131268,-0.561729953447222,1.09516728735169,0.849597955654856,-0.0918347413977025,-0.51937432938056,1.07809874805419,0.883100536526824,0.00931584354235092,-0.469091310349202,1.07309902569357,0.904315538777769,0.11014861809372,-0.412408399838214,1.0803371514599,0.912968332040433,0.207320798846057,-0.351435500564672,1.09956940472798,0.909905129256434,0.298061357272855,-0.288499710664493,1.13017819479557,0.896800601738043,0.380496200778501,-0.225768292537751,1.17126333518315,0.875743108599596,0.45371238171085,-0.164982066972698,1.22175685487391,0.848853169884006,0.517614676996145,-0.107346831048021,1.28053198380166,0.818024726281872,0.572684184768817,-0.0535571816579538,1.34648789817394,0.784801906999339,0.619734456837174,-0.00389484003950325,1.41860423803325,0.750358062622007,0.659718044054658,0.0416518931963933,1.49596891304125,0.71553345631283,0.693596623409019,0.0832802311033218,1.57778654197044,0.689007608581671,0.715945267372052,0.112653847888691,1.64292921809722,0.662765102527786,0.735611761790325,0.140063395600236,1.71001034946711,0.636919301654666,0.752919914074692,0.16566655114866,1.77879736076778,0.611540263955208,0.768155730784406,0.189618772342482,1.84908584031664,0.586665138983296,0.781569405400058,0.212069043578523,1.92069612878416,0.562306448035643,0.793378270194173,0.233157412237399,1.99347014161476,0.538458542454588,0.803770135913967,0.25301376774896,2.06726848559362,0.515102556266157,0.812906663402916,0.271757452746395,2.14196788754923,0.492210148227074,0.820926562012436,0.289497408908481,2.21745892772806,0.469746281676906,0.827948513910726,0.306332644626298,2.29364405862893,0.447671306286592,0.834073741929774,0.322352903742035,2.37043586491758,0.425942356117882,0.839388328339157,0.337639369020769,2.44775558238057,0.404514458587138,0.843965107663582,0.352265453657256,2.52553176518848,0.383341198274989,0.847865348420452,0.366297524770454,2.60369915393407,0.362375163229348,0.851140141888813,0.379795602844471,2.68219769131143,0.341568240694545,0.853831533680042,0.392814013296903,2.76097153110933,0.320871640062018,0.855973510855624,0.405401947846094,2.83996845958293,0.293891048827445,0.857989011378964,0.421287203427842,2.94352671407367,0.266902167925025,0.859152225949151,0.436601288824873,3.0472766178503,0.239789734150816,0.85948736286695,0.451422591889126,3.15111691845365,0.212434748268912,0.859001357594687,0.465819863658055,3.25494813864118,0.184713299068731,0.857684146113695,0.479853001087174,3.3586705830951,0.156495244902048,0.855508278523347,0.493573524108685,3.46218235919018,0.12764274430869,0.852427902724315,0.507024654708598,3.56537712129752,0.0980086959461785,0.848377016656127,0.520241033683983,3.66814185199941,0.0674350479299609,0.843267010417091,0.533247844302164,3.77035410790876,0.0357512313012569,0.836983203186888,0.546059490388603,3.8718793183027,0.00277260654735902,0.829380464272561,0.558677329176658,3.9725672006911,-0.0317006622287192,0.820277547725416,0.571086519462541,4.07224783412316,-0.0678840862168952,0.809450068432239,0.583251521689863,4.17072686966953,-0.0952096550185035,0.800404193210025,0.591851543111165,4.24097801307798,-0.123638172097861,0.790192449966518,0.600257856605152,4.3103898480397,-0.153262947160362,0.778672149980983,0.60842431893516,4.37885455510319,-0.184177937306204,0.765679051757692,0.616290578468528,4.44625094083096,-0.216475201889324,0.751024811364379,0.623778983039726,4.51244244592555,-0.250241201635335,0.73449449869988,0.630790910194269,4.57727493225461,-0.28555157930683,0.715844440711334,0.637202504905664,4.64057426347156,-0.322464009144746,0.694800810696305,0.642859857404438,4.7021437317199,-0.361008613628696,0.671059547264277,0.647573829699247,4.76176141417817,-0.401175554249461,0.644288518419494,0.651114797639748,4.81917758525862,-0.442899421739384,0.614133052945129,0.65320800324492,4.8741125104187,-0.486040448354732,0.580226346309486,0.653530465710265,4.92625487365699,-0.530363136858825,0.542206421485469,0.651710932516241,4.97526140872298,-0.575513895153166,0.499741296635385,0.647334838335474,5.020758353675,-0.621000670933329,0.452563458463062,0.639956625689826,5.06234550344704,-0.66617927534237,0.400513378612627,0.629121774107854,5.0996036745437,-0.710252652723193,0.343589406511022,0.614400105007373,5.13210627609042,0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375]);
MetadataSet MetadataSet44 = createNode("MetadataSet");
MetadataSet44.name = "Interpolator";
MetadataSet44.DEF = "Interpolator";
MetadataSet44.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger45 = createNode("MetadataInteger");
MetadataInteger45.name = "key";
MetadataInteger45.DEF = "key";
MetadataInteger45.reference = "http://titania.create3000.de";
MetadataInteger45.value = new MFInt32(new int[0,13,30,43,61]);
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataInteger45;

MetadataDouble MetadataDouble46 = createNode("MetadataDouble");
MetadataDouble46.name = "keyValue";
MetadataDouble46.DEF = "keyValue";
MetadataDouble46.reference = "http://titania.create3000.de";
MetadataDouble46.value = new MFDouble(new double[0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375,0.71553345631283,0.693596623409019,0.0832802311033218,1.57778654197044,0.320871640062018,0.855973510855624,0.405401947846094,2.83996845958293,-0.0678840862168952,0.809450068432239,0.583251521689863,4.17072686966953,0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375]);
MetadataSet44.value[1] = MetadataDouble46;

MetadataString MetadataString47 = createNode("MetadataString");
MetadataString47.name = "keyType";
MetadataString47.DEF = "keyType";
MetadataString47.reference = "http://titania.create3000.de";
MetadataString47.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet44.value[2] = MetadataString47;

OrientationInterpolator43.metadata = MetadataSet44;

Group38.children[1] = OrientationInterpolator43;

Transform37.children = new MFNode();

Transform37.children[0] = Group38;

Group Group48 = createNode("Group");
Group48.DEF = "TransformTranslationAnimation";
MetadataSet MetadataSet49 = createNode("MetadataSet");
MetadataSet49.name = "Animation";
MetadataSet49.DEF = "Animation_2";
MetadataSet49.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger50 = createNode("MetadataInteger");
MetadataInteger50.name = "duration";
MetadataInteger50.DEF = "duration_3";
MetadataInteger50.reference = "http://titania.create3000.de";
MetadataInteger50.value = new MFInt32(new int[83]);
MetadataSet49.value = new MFNode();

MetadataSet49.value[0] = MetadataInteger50;

MetadataInteger MetadataInteger51 = createNode("MetadataInteger");
MetadataInteger51.name = "framesPerSecond";
MetadataInteger51.DEF = "framesPerSecond_4";
MetadataInteger51.reference = "http://titania.create3000.de";
MetadataInteger51.value = new MFInt32(new int[10]);
MetadataSet49.value[1] = MetadataInteger51;

Group48.metadata = MetadataSet49;

TimeSensor TimeSensor52 = createNode("TimeSensor");
TimeSensor52.DEF = "_5";
TimeSensor52.cycleInterval = 8.3;
TimeSensor52.loop = True;
TimeSensor52.startTime = 1460966632.23238;
TimeSensor52.stopTime = 1460966632.23237;
Group48.children = new MFNode();

Group48.children[0] = TimeSensor52;

PositionInterpolator PositionInterpolator53 = createNode("PositionInterpolator");
PositionInterpolator53.DEF = "BoxTranslationInterpolator";
PositionInterpolator53.key = new MFFloat(new float[0,0.0120482,0.0240964,0.0361446,0.0481928,0.060241,0.0722892,0.0843373,0.0963855,0.108434,0.120482,0.13253,0.144578,0.156627,0.168675,0.180723,0.192771,0.204819,0.216867,0.228916,0.240964,0.253012,0.26506,0.277108,0.289157,0.301205,0.313253,0.325301,0.337349,0.349398,0.361446,0.373494,0.385542,0.39759,0.409639,0.421687,0.433735,0.445783,0.457831,0.46988,0.481928,0.493976,0.506024,0.518072,0.53012,0.542169,0.554217,0.566265,0.578313,0.590361,0.60241,0.614458,0.626506,0.638554,0.650602,0.662651,0.674699,0.686747,0.698795,0.710843,0.722892,0.73494,0.746988,0.759036,0.771084,0.783133,0.795181,0.807229,0.819277,0.831325,0.843373,0.855422,0.86747,0.879518,0.891566,0.903614,0.915663,0.927711,0.939759,0.951807,0.963855,0.975904,0.987952,1]);
PositionInterpolator53.keyValue = new MFVec3f(new float[-3,0,1,-2.99063,-0.00068878,0.99854,-2.9631,-0.00271369,0.99425,-2.91823,-0.00601258,0.987259,-2.85689,-0.0105233,0.977701,-2.77991,-0.0161837,0.965706,-2.68815,-0.0229317,0.951407,-2.58244,-0.0307051,0.934936,-2.46363,-0.0394417,0.916422,-2.33256,-0.0490794,0.896,-2.19009,-0.0595561,0.8738,-2.03705,-0.0708097,0.849953,-1.87429,-0.0827779,0.824593,-1.70266,-0.0953986,0.797849,-1.523,-0.10861,0.769855,-1.33616,-0.122349,0.740741,-1.14297,-0.136554,0.710639,-0.9443,-0.151164,0.679682,-0.740976,-0.166115,0.648,-0.53385,-0.181346,0.615726,-0.323766,-0.196794,0.58299,-0.111568,-0.212398,0.549926,0.101897,-0.228095,0.516664,0.315784,-0.243823,0.483336,0.529249,-0.25952,0.450074,0.741446,-0.275123,0.41701,0.951531,-0.290572,0.384274,1.15866,-0.305803,0.352,1.36198,-0.320754,0.320318,1.56066,-0.335363,0.289361,1.75384,-0.349569,0.259259,1.94068,-0.363308,0.230145,2.12034,-0.376519,0.202151,2.29197,-0.38914,0.175407,2.45473,-0.401108,0.150047,2.60777,-0.412362,0.1262,2.75024,-0.422838,0.104,2.88131,-0.432476,0.0835775,3.00012,-0.441213,0.0650645,3.10583,-0.448986,0.0485926,3.1976,-0.455734,0.0342936,3.27457,-0.461394,0.022299,3.33591,-0.465905,0.0127407,3.38078,-0.469204,0.00575034,3.40831,-0.471229,0.00145953,3.41768,-0.471918,0,3.40458,-0.470954,0.00204111,3.36622,-0.468133,0.00801866,3.304,-0.463558,0.017714,3.21932,-0.457331,0.0309083,3.11359,-0.449557,0.047383,2.98821,-0.440337,0.0669194,2.84459,-0.429776,0.0892987,2.68412,-0.417976,0.114302,2.50822,-0.405041,0.141712,2.31828,-0.391074,0.171308,2.11571,-0.376179,0.202872,1.90191,-0.360457,0.236186,1.67829,-0.344013,0.271031,1.44625,-0.32695,0.307188,1.20719,-0.309371,0.344438,0.962513,-0.291379,0.382563,0.713628,-0.273078,0.421344,0.461936,-0.25457,0.460563,0.20884,-0.235959,0.5,-0.0442552,-0.217348,0.539437,-0.295947,-0.19884,0.578656,-0.544832,-0.180538,0.617437,-0.789507,-0.162546,0.655562,-1.02857,-0.144967,0.692812,-1.26061,-0.127904,0.728969,-1.48423,-0.11146,0.763814,-1.69803,-0.0957389,0.797128,-1.9006,-0.0808432,0.828692,-2.09054,-0.0668762,0.858288,-2.26644,-0.0539413,0.885698,-2.42691,-0.0421416,0.910701,-2.57053,-0.0315804,0.933081,-2.69591,-0.0223609,0.952617,-2.80164,-0.0145862,0.969092,-2.88632,-0.00835953,0.982286,-2.94854,-0.00378415,0.991981,-2.9869,-0.000963238,0.997959,-3,0,1]);
MetadataSet MetadataSet54 = createNode("MetadataSet");
MetadataSet54.name = "Interpolator";
MetadataSet54.DEF = "Interpolator_6";
MetadataSet54.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger55 = createNode("MetadataInteger");
MetadataInteger55.name = "key";
MetadataInteger55.DEF = "key_7";
MetadataInteger55.reference = "http://titania.create3000.de";
MetadataInteger55.value = new MFInt32(new int[0,45,83]);
MetadataSet54.value = new MFNode();

MetadataSet54.value[0] = MetadataInteger55;

MetadataDouble MetadataDouble56 = createNode("MetadataDouble");
MetadataDouble56.name = "keyValue";
MetadataDouble56.DEF = "keyValue_8";
MetadataDouble56.reference = "http://titania.create3000.de";
MetadataDouble56.value = new MFDouble(new double[-3,0,1,3.41768074035645,-0.471917629241943,0,-3,0,1]);
MetadataSet54.value[1] = MetadataDouble56;

MetadataString MetadataString57 = createNode("MetadataString");
MetadataString57.name = "keyType";
MetadataString57.DEF = "keyType_9";
MetadataString57.reference = "http://titania.create3000.de";
MetadataString57.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINESPLINE"]);
MetadataSet54.value[2] = MetadataString57;

PositionInterpolator53.metadata = MetadataSet54;

Group48.children[1] = PositionInterpolator53;

Transform37.children[1] = Group48;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "_10";
Transform58.translation = new SFVec3f(new float[2,0,0]);
Transform Transform59 = createNode("Transform");
Transform59.DEF = "Box";
Transform59.translation = new SFVec3f(new float[-2.9919,-0.000595583,0.998738]);
Transform59.rotation = new SFRotation(new float[-0.459281715865005,0.601597430198613,0.653560125352305,4.89445082390253]);
Transform59.scale = new SFVec3f(new float[4,2,1]);
Transform59.scaleOrientation = new SFRotation(new float[-0.487040867738931,-0.748451325324348,0.450124212603962,0.677875518391894]);
Shape Shape60 = createNode("Shape");
Appearance Appearance61 = createNode("Appearance");
Material Material62 = createNode("Material");
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

Box Box63 = createNode("Box");
Box63.size = new SFVec3f(new float[1,1,1]);
Shape60.geometry = Box63;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Transform58.children = new MFNode();

Transform58.children[0] = Transform59;

Transform37.children[2] = Transform58;

children[3] = Transform37;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[-1,0,0]);
TransformSensor TransformSensor65 = createNode("TransformSensor");
TransformSensor65.DEF = "_11";
TransformSensor65.size = new SFVec3f(new float[2,1,3]);
Transform Transform66 = createNode("Transform");
Transform66.USE = "_10";
TransformSensor65.targetObject = Transform66;

Transform64.children = new MFNode();

Transform64.children[0] = TransformSensor65;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "TransformSensorBox";
Transform67.scale = new SFVec3f(new float[2,1,3]);
Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.DEF = "_12";
Material70.diffuseColor = new SFColor(new float[1,0,0]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

Box Box71 = createNode("Box");
Box71.size = new SFVec3f(new float[1,1,1]);
Shape68.geometry = Box71;

Transform67.child = new undefined();

Transform67.child[0] = Shape68;

Transform64.children[1] = Transform67;

Transform Transform72 = createNode("Transform");
Transform72.DEF = "IndexedLineSet";
Transform72.translation = new SFVec3f(new float[2.0081,-0.000595583,0.998738]);
Transform72.rotation = new SFRotation(new float[0.459281715865006,-0.601597430198614,-0.653560125352305,1.38873448327705]);
Transform72.scale = new SFVec3f(new float[2.39949,2.39949,2.39949]);
Transform72.scaleOrientation = new SFRotation(new float[-0.999646219642749,0.0180672789229292,-0.0195194514852778,0.392807140906217]);
Shape Shape73 = createNode("Shape");
IndexedLineSet IndexedLineSet74 = createNode("IndexedLineSet");
IndexedLineSet74.colorPerVertex = False;
IndexedLineSet74.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet74.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color75 = createNode("Color");
Color75.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet74.color = Color75;

Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet74.coord = Coordinate76;

Shape73.geometry = IndexedLineSet74;

Transform72.child = new undefined();

Transform72.child[0] = Shape73;

Transform64.children[2] = Transform72;

children[4] = Transform64;

Script Script77 = createNode("Script");
Script77.DEF = "_13";
field field78 = createNode("field");
field78.name = "set_enterTime";
field78.accessType = "inputOnly";
field78.type = "SFTime";
Script77.field = new MFNode();

Script77.field[0] = field78;

field field79 = createNode("field");
field79.name = "set_exitTime";
field79.accessType = "inputOnly";
field79.type = "SFTime";
Script77.field[1] = field79;

field field80 = createNode("field");
field80.name = "set_active";
field80.accessType = "inputOnly";
field80.type = "SFBool";
Script77.field[2] = field80;

field field81 = createNode("field");
field81.name = "set_position";
field81.accessType = "inputOnly";
field81.type = "SFVec3f";
Script77.field[3] = field81;

field field82 = createNode("field");
field82.name = "set_orientation";
field82.accessType = "inputOnly";
field82.type = "SFRotation";
Script77.field[4] = field82;

field field83 = createNode("field");
field83.name = "color_changed";
field83.accessType = "outputOnly";
field83.type = "SFColor";
Script77.field[5] = field83;


Script77.setSourceCode(`javascript:\n"+
"\n"+
"function set_enterTime (value)\n"+
"{\n"+
"	print (\"enterTime: \", value);\n"+
"}\n"+
"\n"+
"function set_exitTime (value)\n"+
"{\n"+
"	print (\"exitTime: \", value);\n"+
"}\n"+
"\n"+
"function set_active (value)\n"+
"{\n"+
"	print (\"isActive: \", value);\n"+
"\n"+
"	color_changed = value ? new SFColor (1, 0, 0) : new SFColor (0, 1, 0);\n"+
"}\n"+
"\n"+
"function set_position (value)\n"+
"{\n"+
"	print (\"position: \", value);\n"+
"}\n"+
"\n"+
"function set_orientation (value)\n"+
"{\n"+
"	print (\"orientation: \", value);\n"+
"}`)
children[5] = Script77;

Viewpoint Viewpoint84 = createNode("Viewpoint");
Viewpoint84.description = "Front";
children[6] = Viewpoint84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "_11";
ROUTE85.fromField = "enterTime";
ROUTE85.toNode = "_13";
ROUTE85.toField = "set_enterTime";
children[7] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "_11";
ROUTE86.fromField = "exitTime";
ROUTE86.toNode = "_13";
ROUTE86.toField = "set_exitTime";
children[8] = ROUTE86;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "_11";
ROUTE87.fromField = "isActive";
ROUTE87.toNode = "_13";
ROUTE87.toField = "set_active";
children[9] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "_11";
ROUTE88.fromField = "position_changed";
ROUTE88.toNode = "_13";
ROUTE88.toField = "set_position";
children[10] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "_11";
ROUTE89.fromField = "orientation_changed";
ROUTE89.toNode = "_13";
ROUTE89.toField = "set_orientation";
children[11] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "_13";
ROUTE90.fromField = "color_changed";
ROUTE90.toNode = "_12";
ROUTE90.toField = "set_diffuseColor";
children[12] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "_11";
ROUTE91.fromField = "position_changed";
ROUTE91.toNode = "IndexedLineSet";
ROUTE91.toField = "set_translation";
children[13] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "_11";
ROUTE92.fromField = "orientation_changed";
ROUTE92.toNode = "IndexedLineSet";
ROUTE92.toField = "set_rotation";
children[14] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "_5";
ROUTE93.fromField = "fraction_changed";
ROUTE93.toNode = "BoxTranslationInterpolator";
ROUTE93.toField = "set_fraction";
children[15] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "BoxTranslationInterpolator";
ROUTE94.fromField = "value_changed";
ROUTE94.toNode = "Box";
ROUTE94.toField = "set_translation";
children[16] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "_1";
ROUTE95.fromField = "fraction_changed";
ROUTE95.toNode = "BoxRotationInterpolator";
ROUTE95.toField = "set_fraction";
children[17] = ROUTE95;

ROUTE ROUTE96 = createNode("ROUTE");
ROUTE96.fromNode = "BoxRotationInterpolator";
ROUTE96.fromField = "value_changed";
ROUTE96.toNode = "Box";
ROUTE96.toField = "set_rotation";
children[18] = ROUTE96;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromNode = "TransformSensorBox";
ROUTE97.fromField = "translation_changed";
ROUTE97.toNode = "_11";
ROUTE97.toField = "set_center";
children[19] = ROUTE97;

ROUTE ROUTE98 = createNode("ROUTE");
ROUTE98.fromNode = "TransformSensorBox";
ROUTE98.fromField = "scale_changed";
ROUTE98.toNode = "_11";
ROUTE98.toField = "set_size";
children[20] = ROUTE98;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromNode = "_11";
ROUTE99.fromField = "center_changed";
ROUTE99.toNode = "TransformSensorBox";
ROUTE99.toField = "set_translation";
children[21] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromNode = "_11";
ROUTE100.fromField = "size_changed";
ROUTE100.toNode = "TransformSensorBox";
ROUTE100.toField = "set_scale";
children[22] = ROUTE100;

}
