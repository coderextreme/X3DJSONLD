#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(3, new int32_t[]{5, 4, 10});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{1});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{0});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(1, new int32_t[]{61});
MFInt32 MFInt324 =  MFInt32();
MFInt324.setValue(1, new int32_t[]{10});
MFInt32 MFInt325 =  MFInt32();
MFInt325.setValue(5, new int32_t[]{0, 13, 30, 43, 61});
MFInt32 MFInt326 =  MFInt32();
MFInt326.setValue(1, new int32_t[]{83});
MFInt32 MFInt327 =  MFInt32();
MFInt327.setValue(1, new int32_t[]{10});
MFInt32 MFInt328 =  MFInt32();
MFInt328.setValue(3, new int32_t[]{0, 45, 83});
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("EnvironmentalEffects"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalSensor"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Grouping"));
component4.setLevel(3);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Shape"));
component5.setLevel(4);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Time"));
component6.setLevel(2);
head1.addChild(&component6);

meta& meta7 =  meta();
meta7.setName(CString("comment"));
meta7.setContent(CString("World of Titania"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("created"));
meta8.setContent(CString("Tue, 28 Oct 2014 06:07:32 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("creator"));
meta9.setContent(CString("Holger Seelig"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("generator"));
meta10.setContent(CString("Titania V4.4.0, http://titania.create3000.de"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("identifier"));
meta11.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/EnvironmentalSensor/TransformSensor.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("modified"));
meta12.setContent(CString("Sat, 23 Feb 2019 19:14:49 GMT"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("title"));
meta13.setContent(CString("ProximitySensor"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("TransformSensor"));
MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("Titania"));
MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("AngleGrid"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean18 =  MetadataBoolean();
MetadataBoolean18.X3DNode::setName(CString("enabled"));
MetadataBoolean18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean18.setValue(new boolean[]{False});
MetadataSet17.setValue((X3DNode *)&MetadataBoolean18);

MetadataFloat& MetadataFloat19 =  MetadataFloat();
MetadataFloat19.X3DNode::setName(CString("scale"));
MetadataFloat19.setDEF(CString("scale"));
MetadataFloat19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat19.setValue(new float[]{0.992838,0.992838,0.992838}, 3);
MetadataSet17.setValue((X3DNode *)&MetadataFloat19);

MetadataInteger& MetadataInteger20 =  MetadataInteger();
MetadataInteger20.X3DNode::setName(CString("dimension"));
MetadataInteger20.setDEF(CString("dimension"));
MetadataInteger20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger20.setValue(MFInt320);
MetadataSet17.setValue((X3DNode *)&MetadataInteger20);

MetadataSet16.setValue((X3DNode *)&MetadataSet17);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("Grid"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean22 =  MetadataBoolean();
MetadataBoolean22.X3DNode::setName(CString("enabled"));
MetadataBoolean22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean22.setValue(new boolean[]{True});
MetadataSet21.setValue((X3DNode *)&MetadataBoolean22);

MetadataSet16.setValue((X3DNode *)&MetadataSet21);

MetadataSet& MetadataSet23 =  MetadataSet();
MetadataSet23.X3DNode::setName(CString("NavigationInfo"));
MetadataSet23.setDEF(CString("NavigationInfo"));
MetadataSet23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString24 =  MetadataString();
MetadataString24.X3DNode::setName(CString("type"));
MetadataString24.setDEF(CString("type"));
MetadataString24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString24.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet23.setValue((X3DNode *)&MetadataString24);

MetadataSet16.setValue((X3DNode *)&MetadataSet23);

MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("Viewpoint"));
MetadataSet25.setDEF(CString("Viewpoint"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble26 =  MetadataDouble();
MetadataDouble26.X3DNode::setName(CString("position"));
MetadataDouble26.setDEF(CString("position"));
MetadataDouble26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble26.setValue(new double[]{-1.21197057938843,-9.62489914892611,-4.59826846301702}, 3);
MetadataSet25.setValue((X3DNode *)&MetadataDouble26);

MetadataDouble& MetadataDouble27 =  MetadataDouble();
MetadataDouble27.X3DNode::setName(CString("orientation"));
MetadataDouble27.setDEF(CString("orientation"));
MetadataDouble27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble27.setValue(new double[]{0.996469789501928,-0.0178473563393665,-0.082033106010194,1.97927696482974}, 4);
MetadataSet25.setValue((X3DNode *)&MetadataDouble27);

MetadataDouble& MetadataDouble28 =  MetadataDouble();
MetadataDouble28.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble28.setDEF(CString("centerOfRotation"));
MetadataDouble28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble28.setValue(new double[]{0.0647718980908394,-0.70440000295639,-0.806771993637085}, 3);
MetadataSet25.setValue((X3DNode *)&MetadataDouble28);

MetadataSet16.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("Selection"));
MetadataSet29.setDEF(CString("Selection"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean30 =  MetadataBoolean();
MetadataBoolean30.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean30.setDEF(CString("selectGeometry"));
MetadataBoolean30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean30.setValue(new boolean[]{False});
MetadataSet29.setValue((X3DNode *)&MetadataBoolean30);

MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("nodes"));
MetadataSet31.setDEF(CString("nodes"));
MetadataSet31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet29.setValue((X3DNode *)&MetadataSet31);

MetadataSet16.setValue((X3DNode *)&MetadataSet29);

MetadataSet& MetadataSet32 =  MetadataSet();
MetadataSet32.X3DNode::setName(CString("Page"));
MetadataSet32.setDEF(CString("Page"));
MetadataSet32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger33 =  MetadataInteger();
MetadataInteger33.X3DNode::setName(CString("activeView"));
MetadataInteger33.setDEF(CString("activeView"));
MetadataInteger33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger33.setValue(MFInt321);
MetadataSet32.setValue((X3DNode *)&MetadataInteger33);

MetadataInteger& MetadataInteger34 =  MetadataInteger();
MetadataInteger34.X3DNode::setName(CString("multiView"));
MetadataInteger34.setDEF(CString("multiView"));
MetadataInteger34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger34.setValue(MFInt322);
MetadataSet32.setValue((X3DNode *)&MetadataInteger34);

MetadataSet16.setValue((X3DNode *)&MetadataSet32);

WorldInfo15.setMetadata(&MetadataSet16);

Scene14.addChild(&WorldInfo15);

Background& Background35 =  Background();
Background35.setDEF(CString("Gray"));
Background35.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene14.addChild(&Background35);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Home"));
Viewpoint36.setPosition(new float[]{3.55616,4.07403,7.9662});
Viewpoint36.setOrientation(new float[]{-0.771075669650436,0.61935348681634,0.147795703731776,0.600254103484512});
Viewpoint36.setCenterOfRotation(new float[]{0.0647719,-0.7044,-0.806772});
Scene14.addChild(&Viewpoint36);

Transform& Transform37 =  Transform();
Group& Group38 =  Group();
Group38.setDEF(CString("TransformRotationAnimation"));
MetadataSet& MetadataSet39 =  MetadataSet();
MetadataSet39.X3DNode::setName(CString("Animation"));
MetadataSet39.setDEF(CString("Animation"));
MetadataSet39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger40 =  MetadataInteger();
MetadataInteger40.X3DNode::setName(CString("duration"));
MetadataInteger40.setDEF(CString("duration"));
MetadataInteger40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger40.setValue(MFInt323);
MetadataSet39.setValue((X3DNode *)&MetadataInteger40);

MetadataInteger& MetadataInteger41 =  MetadataInteger();
MetadataInteger41.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger41.setDEF(CString("framesPerSecond"));
MetadataInteger41.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger41.setValue(MFInt324);
MetadataSet39.setValue((X3DNode *)&MetadataInteger41);

Group38.setMetadata(&MetadataSet39);

TimeSensor& TimeSensor42 =  TimeSensor();
TimeSensor42.setDEF(CString("_1"));
TimeSensor42.setCycleInterval(6.1);
TimeSensor42.setLoop(True);
Group38.addChild(&TimeSensor42);

OrientationInterpolator& OrientationInterpolator43 =  OrientationInterpolator();
OrientationInterpolator43.setDEF(CString("BoxRotationInterpolator"));
OrientationInterpolator43.setKey(new float[]{0,0.0163934,0.0327869,0.0491803,0.0655738,0.0819672,0.0983607,0.114754,0.131148,0.147541,0.163934,0.180328,0.196721,0.213115,0.229508,0.245902,0.262295,0.278689,0.295082,0.311475,0.327869,0.344262,0.360656,0.377049,0.393443,0.409836,0.42623,0.442623,0.459016,0.47541,0.491803,0.508197,0.52459,0.540984,0.557377,0.57377,0.590164,0.606557,0.622951,0.639344,0.655738,0.672131,0.688525,0.704918,0.721311,0.737705,0.754098,0.770492,0.786885,0.803279,0.819672,0.836066,0.852459,0.868852,0.885246,0.901639,0.918033,0.934426,0.95082,0.967213,0.983607,1}, 62);
OrientationInterpolator43.setKeyValue(new float[]{0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375,0.805229276624979,-0.189908587131268,-0.561729953447222,1.09516728735169,0.849597955654856,-0.0918347413977025,-0.51937432938056,1.07809874805419,0.883100536526824,0.00931584354235092,-0.469091310349202,1.07309902569357,0.904315538777769,0.11014861809372,-0.412408399838214,1.0803371514599,0.912968332040433,0.207320798846057,-0.351435500564672,1.09956940472798,0.909905129256434,0.298061357272855,-0.288499710664493,1.13017819479557,0.896800601738043,0.380496200778501,-0.225768292537751,1.17126333518315,0.875743108599596,0.45371238171085,-0.164982066972698,1.22175685487391,0.848853169884006,0.517614676996145,-0.107346831048021,1.28053198380166,0.818024726281872,0.572684184768817,-0.0535571816579538,1.34648789817394,0.784801906999339,0.619734456837174,-0.00389484003950325,1.41860423803325,0.750358062622007,0.659718044054658,0.0416518931963933,1.49596891304125,0.71553345631283,0.693596623409019,0.0832802311033218,1.57778654197044,0.689007608581671,0.715945267372052,0.112653847888691,1.64292921809722,0.662765102527786,0.735611761790325,0.140063395600236,1.71001034946711,0.636919301654666,0.752919914074692,0.16566655114866,1.77879736076778,0.611540263955208,0.768155730784406,0.189618772342482,1.84908584031664,0.586665138983296,0.781569405400058,0.212069043578523,1.92069612878416,0.562306448035643,0.793378270194173,0.233157412237399,1.99347014161476,0.538458542454588,0.803770135913967,0.25301376774896,2.06726848559362,0.515102556266157,0.812906663402916,0.271757452746395,2.14196788754923,0.492210148227074,0.820926562012436,0.289497408908481,2.21745892772806,0.469746281676906,0.827948513910726,0.306332644626298,2.29364405862893,0.447671306286592,0.834073741929774,0.322352903742035,2.37043586491758,0.425942356117882,0.839388328339157,0.337639369020769,2.44775558238057,0.404514458587138,0.843965107663582,0.352265453657256,2.52553176518848,0.383341198274989,0.847865348420452,0.366297524770454,2.60369915393407,0.362375163229348,0.851140141888813,0.379795602844471,2.68219769131143,0.341568240694545,0.853831533680042,0.392814013296903,2.76097153110933,0.320871640062018,0.855973510855624,0.405401947846094,2.83996845958293,0.293891048827445,0.857989011378964,0.421287203427842,2.94352671407367,0.266902167925025,0.859152225949151,0.436601288824873,3.0472766178503,0.239789734150816,0.85948736286695,0.451422591889126,3.15111691845365,0.212434748268912,0.859001357594687,0.465819863658055,3.25494813864118,0.184713299068731,0.857684146113695,0.479853001087174,3.3586705830951,0.156495244902048,0.855508278523347,0.493573524108685,3.46218235919018,0.12764274430869,0.852427902724315,0.507024654708598,3.56537712129752,0.0980086959461785,0.848377016656127,0.520241033683983,3.66814185199941,0.0674350479299609,0.843267010417091,0.533247844302164,3.77035410790876,0.0357512313012569,0.836983203186888,0.546059490388603,3.8718793183027,0.00277260654735902,0.829380464272561,0.558677329176658,3.9725672006911,-0.0317006622287192,0.820277547725416,0.571086519462541,4.07224783412316,-0.0678840862168952,0.809450068432239,0.583251521689863,4.17072686966953,-0.0952096550185035,0.800404193210025,0.591851543111165,4.24097801307798,-0.123638172097861,0.790192449966518,0.600257856605152,4.3103898480397,-0.153262947160362,0.778672149980983,0.60842431893516,4.37885455510319,-0.184177937306204,0.765679051757692,0.616290578468528,4.44625094083096,-0.216475201889324,0.751024811364379,0.623778983039726,4.51244244592555,-0.250241201635335,0.73449449869988,0.630790910194269,4.57727493225461,-0.28555157930683,0.715844440711334,0.637202504905664,4.64057426347156,-0.322464009144746,0.694800810696305,0.642859857404438,4.7021437317199,-0.361008613628696,0.671059547264277,0.647573829699247,4.76176141417817,-0.401175554249461,0.644288518419494,0.651114797639748,4.81917758525862,-0.442899421739384,0.614133052945129,0.65320800324492,4.8741125104187,-0.486040448354732,0.580226346309486,0.653530465710265,4.92625487365699,-0.530363136858825,0.542206421485469,0.651710932516241,4.97526140872298,-0.575513895153166,0.499741296635385,0.647334838335474,5.020758353675,-0.621000670933329,0.452563458463062,0.639956625689826,5.06234550344704,-0.66617927534237,0.400513378612627,0.629121774107854,5.0996036745437,-0.710252652723193,0.343589406511022,0.614400105007373,5.13210627609042,0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375}, 248);
MetadataSet& MetadataSet44 =  MetadataSet();
MetadataSet44.X3DNode::setName(CString("Interpolator"));
MetadataSet44.setDEF(CString("Interpolator"));
MetadataSet44.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger45 =  MetadataInteger();
MetadataInteger45.X3DNode::setName(CString("key"));
MetadataInteger45.setDEF(CString("key"));
MetadataInteger45.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger45.setValue(MFInt325);
MetadataSet44.setValue((X3DNode *)&MetadataInteger45);

MetadataDouble& MetadataDouble46 =  MetadataDouble();
MetadataDouble46.X3DNode::setName(CString("keyValue"));
MetadataDouble46.setDEF(CString("keyValue"));
MetadataDouble46.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble46.setValue(new double[]{0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375,0.71553345631283,0.693596623409019,0.0832802311033218,1.57778654197044,0.320871640062018,0.855973510855624,0.405401947846094,2.83996845958293,-0.0678840862168952,0.809450068432239,0.583251521689863,4.17072686966953,0.75228999962235,-0.281997999858437,-0.595429999701094,1.12375}, 20);
MetadataSet44.setValue((X3DNode *)&MetadataDouble46);

MetadataString& MetadataString47 =  MetadataString();
MetadataString47.X3DNode::setName(CString("keyType"));
MetadataString47.setDEF(CString("keyType"));
MetadataString47.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString47.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet44.setValue((X3DNode *)&MetadataString47);

OrientationInterpolator43.setMetadata(&MetadataSet44);

Group38.addChild(&OrientationInterpolator43);

Transform37.addChild(&Group38);

Group& Group48 =  Group();
Group48.setDEF(CString("TransformTranslationAnimation"));
MetadataSet& MetadataSet49 =  MetadataSet();
MetadataSet49.X3DNode::setName(CString("Animation"));
MetadataSet49.setDEF(CString("Animation_2"));
MetadataSet49.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger50 =  MetadataInteger();
MetadataInteger50.X3DNode::setName(CString("duration"));
MetadataInteger50.setDEF(CString("duration_3"));
MetadataInteger50.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger50.setValue(MFInt326);
MetadataSet49.setValue((X3DNode *)&MetadataInteger50);

MetadataInteger& MetadataInteger51 =  MetadataInteger();
MetadataInteger51.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger51.setDEF(CString("framesPerSecond_4"));
MetadataInteger51.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger51.setValue(MFInt327);
MetadataSet49.setValue((X3DNode *)&MetadataInteger51);

Group48.setMetadata(&MetadataSet49);

TimeSensor& TimeSensor52 =  TimeSensor();
TimeSensor52.setDEF(CString("_5"));
TimeSensor52.setCycleInterval(8.3);
TimeSensor52.setLoop(True);
TimeSensor52.setStartTime(1460966632.23238);
TimeSensor52.setStopTime(1460966632.23237);
Group48.addChild(&TimeSensor52);

PositionInterpolator& PositionInterpolator53 =  PositionInterpolator();
PositionInterpolator53.setDEF(CString("BoxTranslationInterpolator"));
PositionInterpolator53.setKey(new float[]{0,0.0120482,0.0240964,0.0361446,0.0481928,0.060241,0.0722892,0.0843373,0.0963855,0.108434,0.120482,0.13253,0.144578,0.156627,0.168675,0.180723,0.192771,0.204819,0.216867,0.228916,0.240964,0.253012,0.26506,0.277108,0.289157,0.301205,0.313253,0.325301,0.337349,0.349398,0.361446,0.373494,0.385542,0.39759,0.409639,0.421687,0.433735,0.445783,0.457831,0.46988,0.481928,0.493976,0.506024,0.518072,0.53012,0.542169,0.554217,0.566265,0.578313,0.590361,0.60241,0.614458,0.626506,0.638554,0.650602,0.662651,0.674699,0.686747,0.698795,0.710843,0.722892,0.73494,0.746988,0.759036,0.771084,0.783133,0.795181,0.807229,0.819277,0.831325,0.843373,0.855422,0.86747,0.879518,0.891566,0.903614,0.915663,0.927711,0.939759,0.951807,0.963855,0.975904,0.987952,1}, 84);
PositionInterpolator53.setKeyValue(new float[]{-3,0,1,-2.99063,-0.00068878,0.99854,-2.9631,-0.00271369,0.99425,-2.91823,-0.00601258,0.987259,-2.85689,-0.0105233,0.977701,-2.77991,-0.0161837,0.965706,-2.68815,-0.0229317,0.951407,-2.58244,-0.0307051,0.934936,-2.46363,-0.0394417,0.916422,-2.33256,-0.0490794,0.896,-2.19009,-0.0595561,0.8738,-2.03705,-0.0708097,0.849953,-1.87429,-0.0827779,0.824593,-1.70266,-0.0953986,0.797849,-1.523,-0.10861,0.769855,-1.33616,-0.122349,0.740741,-1.14297,-0.136554,0.710639,-0.9443,-0.151164,0.679682,-0.740976,-0.166115,0.648,-0.53385,-0.181346,0.615726,-0.323766,-0.196794,0.58299,-0.111568,-0.212398,0.549926,0.101897,-0.228095,0.516664,0.315784,-0.243823,0.483336,0.529249,-0.25952,0.450074,0.741446,-0.275123,0.41701,0.951531,-0.290572,0.384274,1.15866,-0.305803,0.352,1.36198,-0.320754,0.320318,1.56066,-0.335363,0.289361,1.75384,-0.349569,0.259259,1.94068,-0.363308,0.230145,2.12034,-0.376519,0.202151,2.29197,-0.38914,0.175407,2.45473,-0.401108,0.150047,2.60777,-0.412362,0.1262,2.75024,-0.422838,0.104,2.88131,-0.432476,0.0835775,3.00012,-0.441213,0.0650645,3.10583,-0.448986,0.0485926,3.1976,-0.455734,0.0342936,3.27457,-0.461394,0.022299,3.33591,-0.465905,0.0127407,3.38078,-0.469204,0.00575034,3.40831,-0.471229,0.00145953,3.41768,-0.471918,0,3.40458,-0.470954,0.00204111,3.36622,-0.468133,0.00801866,3.304,-0.463558,0.017714,3.21932,-0.457331,0.0309083,3.11359,-0.449557,0.047383,2.98821,-0.440337,0.0669194,2.84459,-0.429776,0.0892987,2.68412,-0.417976,0.114302,2.50822,-0.405041,0.141712,2.31828,-0.391074,0.171308,2.11571,-0.376179,0.202872,1.90191,-0.360457,0.236186,1.67829,-0.344013,0.271031,1.44625,-0.32695,0.307188,1.20719,-0.309371,0.344438,0.962513,-0.291379,0.382563,0.713628,-0.273078,0.421344,0.461936,-0.25457,0.460563,0.20884,-0.235959,0.5,-0.0442552,-0.217348,0.539437,-0.295947,-0.19884,0.578656,-0.544832,-0.180538,0.617437,-0.789507,-0.162546,0.655562,-1.02857,-0.144967,0.692812,-1.26061,-0.127904,0.728969,-1.48423,-0.11146,0.763814,-1.69803,-0.0957389,0.797128,-1.9006,-0.0808432,0.828692,-2.09054,-0.0668762,0.858288,-2.26644,-0.0539413,0.885698,-2.42691,-0.0421416,0.910701,-2.57053,-0.0315804,0.933081,-2.69591,-0.0223609,0.952617,-2.80164,-0.0145862,0.969092,-2.88632,-0.00835953,0.982286,-2.94854,-0.00378415,0.991981,-2.9869,-0.000963238,0.997959,-3,0,1}, 252);
MetadataSet& MetadataSet54 =  MetadataSet();
MetadataSet54.X3DNode::setName(CString("Interpolator"));
MetadataSet54.setDEF(CString("Interpolator_6"));
MetadataSet54.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger55 =  MetadataInteger();
MetadataInteger55.X3DNode::setName(CString("key"));
MetadataInteger55.setDEF(CString("key_7"));
MetadataInteger55.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger55.setValue(MFInt328);
MetadataSet54.setValue((X3DNode *)&MetadataInteger55);

MetadataDouble& MetadataDouble56 =  MetadataDouble();
MetadataDouble56.X3DNode::setName(CString("keyValue"));
MetadataDouble56.setDEF(CString("keyValue_8"));
MetadataDouble56.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble56.setValue(new double[]{-3,0,1,3.41768074035645,-0.471917629241943,0,-3,0,1}, 9);
MetadataSet54.setValue((X3DNode *)&MetadataDouble56);

MetadataString& MetadataString57 =  MetadataString();
MetadataString57.X3DNode::setName(CString("keyType"));
MetadataString57.setDEF(CString("keyType_9"));
MetadataString57.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString57.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINESPLINE")}, 3);
MetadataSet54.setValue((X3DNode *)&MetadataString57);

PositionInterpolator53.setMetadata(&MetadataSet54);

Group48.addChild(&PositionInterpolator53);

Transform37.addChild(&Group48);

Transform& Transform58 =  Transform();
Transform58.setDEF(CString("_10"));
Transform58.setTranslation(new float[]{2,0,0});
Transform& Transform59 =  Transform();
Transform59.setDEF(CString("Box"));
Transform59.setTranslation(new float[]{-2.9919,-0.000595583,0.998738});
Transform59.setRotation(new float[]{-0.459281715865005,0.601597430198613,0.653560125352305,4.89445082390253});
Transform59.setScale(new float[]{4,2,1});
Transform59.setScaleOrientation(new float[]{-0.487040867738931,-0.748451325324348,0.450124212603962,0.677875518391894});
Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
Material& Material62 =  Material();
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

Box& Box63 =  Box();
Box63.setSize(new float[]{1,1,1});
Shape60.setGeometry(&Box63);

Transform59.addChild(&Shape60);

Transform58.addChild(&Transform59);

Transform37.addChild(&Transform58);

Scene14.addChild(&Transform37);

Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{-1,0,0});
TransformSensor& TransformSensor65 =  TransformSensor();
TransformSensor65.setDEF(CString("_11"));
TransformSensor65.setSize(new float[]{2,1,3});
Transform& Transform66 =  Transform();
Transform66.setUSE(CString("_10"));
TransformSensor65.setTargetObject(Transform66);

Transform64.addChild(&TransformSensor65);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("TransformSensorBox"));
Transform67.setScale(new float[]{2,1,3});
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Material70.setDEF(CString("_12"));
Material70.setDiffuseColor(new float[]{1,0,0});
Appearance69.addChild(&Material70);

Shape68.addChild(&Appearance69);

Box& Box71 =  Box();
Box71.setSize(new float[]{1,1,1});
Shape68.setGeometry(&Box71);

Transform67.addChild(&Shape68);

Transform64.addChild(&Transform67);

Transform& Transform72 =  Transform();
Transform72.setDEF(CString("IndexedLineSet"));
Transform72.setTranslation(new float[]{2.0081,-0.000595583,0.998738});
Transform72.setRotation(new float[]{0.459281715865006,-0.601597430198614,-0.653560125352305,1.38873448327705});
Transform72.setScale(new float[]{2.39949,2.39949,2.39949});
Transform72.setScaleOrientation(new float[]{-0.999646219642749,0.0180672789229292,-0.0195194514852778,0.392807140906217});
Shape& Shape73 =  Shape();
IndexedLineSet& IndexedLineSet74 =  IndexedLineSet();
IndexedLineSet74.setColorPerVertex(False);
IndexedLineSet74.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet74.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color75 =  CColor();
Color75.setColor(new float[]{1,0,0,0,1,0,0,0,1}, 9);
IndexedLineSet74.setColor(&Color75);

Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setPoint(new float[]{-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1}, 18);
IndexedLineSet74.setCoord(&Coordinate76);

Shape73.setGeometry(&IndexedLineSet74);

Transform72.addChild(&Shape73);

Transform64.addChild(&Transform72);

Scene14.addChild(&Transform64);

Script& Script77 =  Script();
Script77.setDEF(CString("_13"));
field& field78 =  field();
field78.setName(CString("set_enterTime"));
field78.setAccessType(CString("inputOnly"));
field78.setType(CString("SFTime"));
Script77.addChild(&field78);

field& field79 =  field();
field79.setName(CString("set_exitTime"));
field79.setAccessType(CString("inputOnly"));
field79.setType(CString("SFTime"));
Script77.addChild(&field79);

field& field80 =  field();
field80.setName(CString("set_active"));
field80.setAccessType(CString("inputOnly"));
field80.setType(CString("SFBool"));
Script77.addChild(&field80);

field& field81 =  field();
field81.setName(CString("set_position"));
field81.setAccessType(CString("inputOnly"));
field81.setType(CString("SFVec3f"));
Script77.addChild(&field81);

field& field82 =  field();
field82.setName(CString("set_orientation"));
field82.setAccessType(CString("inputOnly"));
field82.setType(CString("SFRotation"));
Script77.addChild(&field82);

field& field83 =  field();
field83.setName(CString("color_changed"));
field83.setAccessType(CString("outputOnly"));
field83.setType(CString("SFColor"));
Script77.addChild(&field83);


Script77.setSourceCode(CString("javascript:")+
_T("function set_enterTime (value)")+
_T("{")+
_T("	print (\"enterTime: \", value);")+
_T("}")+
_T("function set_exitTime (value)")+
_T("{")+
_T("	print (\"exitTime: \", value);")+
_T("}")+
_T("function set_active (value)")+
_T("{")+
_T("	print (\"isActive: \", value);")+
_T("	color_changed = value ? new SFColor (1, 0, 0) : new SFColor (0, 1, 0);")+
_T("}")+
_T("function set_position (value)")+
_T("{")+
_T("	print (\"position: \", value);")+
_T("}")+
_T("function set_orientation (value)")+
_T("{")+
_T("	print (\"orientation: \", value);")+
_T("}"));
Scene14.addChild(&Script77);

Viewpoint& Viewpoint84 =  Viewpoint();
Viewpoint84.setDescription(CString("Front"));
Scene14.addChild(&Viewpoint84);

ROUTE& ROUTE85 =  ROUTE();
ROUTE85.setFromNode(CString("_11"));
ROUTE85.setFromField(CString("enterTime"));
ROUTE85.setToNode(CString("_13"));
ROUTE85.setToField(CString("set_enterTime"));
Scene14.addChild(&ROUTE85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(CString("_11"));
ROUTE86.setFromField(CString("exitTime"));
ROUTE86.setToNode(CString("_13"));
ROUTE86.setToField(CString("set_exitTime"));
Scene14.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("_11"));
ROUTE87.setFromField(CString("isActive"));
ROUTE87.setToNode(CString("_13"));
ROUTE87.setToField(CString("set_active"));
Scene14.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("_11"));
ROUTE88.setFromField(CString("position_changed"));
ROUTE88.setToNode(CString("_13"));
ROUTE88.setToField(CString("set_position"));
Scene14.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("_11"));
ROUTE89.setFromField(CString("orientation_changed"));
ROUTE89.setToNode(CString("_13"));
ROUTE89.setToField(CString("set_orientation"));
Scene14.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("_13"));
ROUTE90.setFromField(CString("color_changed"));
ROUTE90.setToNode(CString("_12"));
ROUTE90.setToField(CString("set_diffuseColor"));
Scene14.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("_11"));
ROUTE91.setFromField(CString("position_changed"));
ROUTE91.setToNode(CString("IndexedLineSet"));
ROUTE91.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("_11"));
ROUTE92.setFromField(CString("orientation_changed"));
ROUTE92.setToNode(CString("IndexedLineSet"));
ROUTE92.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("_5"));
ROUTE93.setFromField(CString("fraction_changed"));
ROUTE93.setToNode(CString("BoxTranslationInterpolator"));
ROUTE93.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(CString("BoxTranslationInterpolator"));
ROUTE94.setFromField(CString("value_changed"));
ROUTE94.setToNode(CString("Box"));
ROUTE94.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(CString("_1"));
ROUTE95.setFromField(CString("fraction_changed"));
ROUTE95.setToNode(CString("BoxRotationInterpolator"));
ROUTE95.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE95);

ROUTE& ROUTE96 =  ROUTE();
ROUTE96.setFromNode(CString("BoxRotationInterpolator"));
ROUTE96.setFromField(CString("value_changed"));
ROUTE96.setToNode(CString("Box"));
ROUTE96.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE96);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromNode(CString("TransformSensorBox"));
ROUTE97.setFromField(CString("translation_changed"));
ROUTE97.setToNode(CString("_11"));
ROUTE97.setToField(CString("set_center"));
Scene14.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromNode(CString("TransformSensorBox"));
ROUTE98.setFromField(CString("scale_changed"));
ROUTE98.setToNode(CString("_11"));
ROUTE98.setToField(CString("set_size"));
Scene14.addChild(&ROUTE98);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromNode(CString("_11"));
ROUTE99.setFromField(CString("center_changed"));
ROUTE99.setToNode(CString("TransformSensorBox"));
ROUTE99.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromNode(CString("_11"));
ROUTE100.setFromField(CString("size_changed"));
ROUTE100.setToNode(CString("TransformSensorBox"));
ROUTE100.setToField(CString("set_scale"));
Scene14.addChild(&ROUTE100);

X3D0.setScene(&Scene14);

}
