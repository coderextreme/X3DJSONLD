/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Full");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("comment");
meta2->setContent("World of Titania");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("created");
meta3->setContent("Sun, 08 Mar 2015 05:54:30 GMT");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Holger Seelig");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("Titania V2.0.1, http://titania.create3000.de");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Lighting/PointLight.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("Thu, 20 Oct 2016 10:59:35 GMT");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("title");
meta8->setContent("Beethoven");
head1->addMeta(*meta8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CWorldInfo* WorldInfo10 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo10->setTitle("PointLight");
CMetadataSet* MetadataSet11 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet11->setName("Titania");
MetadataSet11->setDEF("Titania");
MetadataSet11->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet12 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet12->setName("NavigationInfo");
MetadataSet12->setDEF("NavigationInfo");
MetadataSet12->setReference("http://titania.create3000.de");
CMetadataString* MetadataString13 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString13->setName("type");
MetadataString13->setDEF("type");
MetadataString13->setReference("http://titania.create3000.de");
MetadataString13->setValue(new CString[1]{"EXAMINE"}, 1);
MetadataSet12->setValue(*MetadataString13);

MetadataSet11->setValue(*MetadataSet12);

CMetadataSet* MetadataSet14 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet14->setName("Viewpoint");
MetadataSet14->setDEF("Viewpoint");
MetadataSet14->setReference("http://titania.create3000.de");
CMetadataDouble* MetadataDouble15 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble15->setName("position");
MetadataDouble15->setDEF("position");
MetadataDouble15->setReference("http://titania.create3000.de");
MetadataDouble15->setValue(new double[3]{-2.07141995429993,-0.615413010120392,9.70524978637695});
MetadataSet14->setValue(*MetadataDouble15);

CMetadataDouble* MetadataDouble16 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble16->setName("orientation");
MetadataDouble16->setDEF("orientation");
MetadataDouble16->setReference("http://titania.create3000.de");
MetadataDouble16->setValue(new double[4]{0.111306008788667,-0.981465731426504,-0.155999969368507,0.489277720451353});
MetadataSet14->addValue(*MetadataDouble16);

CMetadataDouble* MetadataDouble17 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble17->setName("centerOfRotation");
MetadataDouble17->setDEF("centerOfRotation");
MetadataDouble17->setReference("http://titania.create3000.de");
MetadataDouble17->setValue(new double[3]{3.33974003791809,-0.21424899995327,-0.636991024017334});
MetadataSet14->addValue(*MetadataDouble17);

MetadataSet11->addValue(*MetadataSet14);

CMetadataSet* MetadataSet18 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet18->setName("Selection");
MetadataSet18->setDEF("Selection");
MetadataSet18->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet19 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet19->setName("children");
MetadataSet19->setDEF("children");
MetadataSet19->setReference("http://titania.create3000.de");
CFontStyle* FontStyle20 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle20->setDEF("_1");
FontStyle20->setFamily(new CString[1]{"SANS"}, 1);
FontStyle20->setJustify(new CString[1]{"END"}, 1);
MetadataSet19->setFontStyle(*FontStyle20);

MetadataSet18->setValue(*MetadataSet19);

CMetadataSet* MetadataSet21 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet21->setName("previous");
MetadataSet21->setDEF("previous");
MetadataSet21->setReference("http://titania.create3000.de");
MetadataSet18->addValue(*MetadataSet21);

MetadataSet11->addValue(*MetadataSet18);

CMetadataSet* MetadataSet22 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet22->setName("LayerSet");
MetadataSet22->setDEF("LayerSet");
MetadataSet22->setReference("http://titania.create3000.de");
CMetadataInteger* MetadataInteger23 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger23->setName("activeLayer");
MetadataInteger23->setDEF("activeLayer");
MetadataInteger23->setReference("http://titania.create3000.de");
MetadataInteger23->setValue(new int[1]{-1});
MetadataSet22->setValue(*MetadataInteger23);

MetadataSet11->addValue(*MetadataSet22);

WorldInfo10->setMetadata(*MetadataSet11);

group->addChildren(*WorldInfo10);

CLayerSet* LayerSet24 = (CLayerSet *)(m_pScene.createNode("LayerSet"));
LayerSet24->setActiveLayer(1);
LayerSet24->setOrder(new int[2]{1,2});
CLayer* Layer25 = (CLayer *)(m_pScene.createNode("Layer"));
Layer25->setDEF("World");
CMetadataSet* MetadataSet26 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet26->setName("Titania");
MetadataSet26->setDEF("Titania_1");
MetadataSet26->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet27 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet27->setName("AngleGrid");
MetadataSet27->setDEF("AngleGrid");
MetadataSet27->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean28 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean28->setName("enabled");
MetadataBoolean28->setReference("http://titania.create3000.de");
MetadataBoolean28->setValue(new boolean[1]{False});
MetadataSet27->setValue(*MetadataBoolean28);

MetadataSet26->setValue(*MetadataSet27);

CMetadataSet* MetadataSet29 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet29->setName("Grid");
MetadataSet29->setDEF("Grid");
MetadataSet29->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean30 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean30->setName("enabled");
MetadataBoolean30->setReference("http://titania.create3000.de");
MetadataBoolean30->setValue(new boolean[1]{False});
MetadataSet29->setValue(*MetadataBoolean30);

CMetadataFloat* MetadataFloat31 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat31->setName("rotation");
MetadataFloat31->setReference("http://titania.create3000.de");
MetadataFloat31->setValue(new float[4]{1,0,0,1.5708}, 4);
MetadataSet29->addValue(*MetadataFloat31);

CMetadataFloat* MetadataFloat32 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat32->setName("translation");
MetadataFloat32->setReference("http://titania.create3000.de");
MetadataFloat32->setValue(new float[3]{9,2,0}, 3);
MetadataSet29->addValue(*MetadataFloat32);

CMetadataInteger* MetadataInteger33 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger33->setName("dimension");
MetadataInteger33->setReference("http://titania.create3000.de");
MetadataInteger33->setValue(new int[3]{24,10,10});
MetadataSet29->addValue(*MetadataInteger33);

MetadataSet26->addValue(*MetadataSet29);

Layer25->setMetadata(*MetadataSet26);

CBackground* Background34 = (CBackground *)(m_pScene.createNode("Background"));
Background34->setDEF("Gray");
Background34->setSkyColor(new float[3]{0.2,0.2,0.2});
Layer25->addChildren(*Background34);

CNavigationInfo* NavigationInfo35 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo35->setHeadlight(False);
Layer25->addChildren(*NavigationInfo35);

CViewpoint* Viewpoint36 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint36->setDescription("Perspective");
Viewpoint36->setPosition(new float[3]{-2.07142,-0.615413,9.70525});
Viewpoint36->setOrientation(new float[4]{0.111305970237233,-0.981465737560023,-0.155999958286241,0.489278});
Viewpoint36->setCenterOfRotation(new float[3]{3.33974,-0.214249,-0.636991});
Layer25->addChildren(*Viewpoint36);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("_2");
CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
CGroup* Group40 = (CGroup *)(m_pScene.createNode("Group"));
Group40->setDEF("LightAnim");
CMetadataSet* MetadataSet41 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet41->setName("Animation");
CMetadataInteger* MetadataInteger42 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger42->setName("duration");
MetadataInteger42->setReference("http://titania.create3000.de");
MetadataInteger42->setValue(new int[1]{100});
MetadataSet41->setValue(*MetadataInteger42);

CMetadataInteger* MetadataInteger43 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger43->setName("framesPerSecond");
MetadataInteger43->setReference("http://titania.create3000.de");
MetadataInteger43->setValue(new int[1]{10});
MetadataSet41->addValue(*MetadataInteger43);

Group40->setMetadata(*MetadataSet41);

CTimeSensor* TimeSensor44 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor44->setDEF("_3");
TimeSensor44->setCycleInterval(10);
TimeSensor44->setLoop(True);
TimeSensor44->setStartTime(1452036144.23537);
TimeSensor44->setStopTime(1452036144.23535);
Group40->addChildren(*TimeSensor44);

CPositionInterpolator* PositionInterpolator45 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator45->setDEF("RedLightTranslationInterpolator");
PositionInterpolator45->setKey(new float[101]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator45->setKeyValue(new float[303]{1.67997,-1.46165,1.66226,1.76407,-1.3742,1.63408,1.83857,-1.27877,1.58919,1.90386,-1.17633,1.52882,1.96034,-1.06786,1.45422,2.00841,-0.954362,1.36663,2.04848,-0.836806,1.2673,2.08094,-0.716179,1.15747,2.10618,-0.593466,1.03839,2.12461,-0.469651,0.911301,2.13662,-0.345716,0.777441,2.14262,-0.222647,0.638059,2.143,-0.101426,0.494398,2.13816,0.016961,0.347701,2.1285,0.131531,0.199214,2.11442,0.241301,0.0501793,2.09632,0.345286,-0.0981588,2.07459,0.442503,-0.244556,2.04964,0.531967,-0.387769,2.02186,0.612695,-0.526554,1.99165,0.683702,-0.659666,1.95941,0.744006,-0.785863,1.92553,0.792621,-0.903899,1.89043,0.828564,-1.01253,1.85449,0.850852,-1.11052,1.81812,0.8585,-1.19661,1.77877,0.850852,-1.2761,1.73386,0.828564,-1.35493,1.68368,0.792621,-1.43281,1.62853,0.744006,-1.50945,1.56872,0.683702,-1.58456,1.50455,0.612695,-1.65785,1.43631,0.531967,-1.72905,1.36432,0.442503,-1.79786,1.28886,0.345286,-1.864,1.21024,0.241301,-1.92717,1.12877,0.131531,-1.9871,1.04475,0.016961,-2.04349,0.958469,-0.101426,-2.09606,0.870238,-0.222647,-2.14452,0.780355,-0.345716,-2.18859,0.689123,-0.469651,-2.22797,0.596842,-0.593466,-2.26238,0.503815,-0.716179,-2.29154,0.410342,-0.836806,-2.31515,0.316725,-0.954362,-2.33293,0.223266,-1.06786,-2.34459,0.130265,-1.17633,-2.34985,0.0380245,-1.27877,-2.34842,-0.0531548,-1.3742,-2.34001,-0.142971,-1.46165,-2.32433,-0.238062,-1.54683,-2.29971,-0.344326,-1.63573,-2.26509,-0.460355,-1.72773,-2.22113,-0.584741,-1.82222,-2.1685,-0.716076,-1.91858,-2.10784,-0.852952,-2.01622,-2.03983,-0.99396,-2.1145,-1.96512,-1.13769,-2.21283,-1.88436,-1.28274,-2.31058,-1.79823,-1.4277,-2.40716,-1.70737,-1.57116,-2.50193,-1.61245,-1.71171,-2.59431,-1.51413,-1.84795,-2.68366,-1.41307,-1.97846,-2.76938,-1.30992,-2.10184,-2.85086,-1.20535,-2.21668,-2.92748,-1.10001,-2.32157,-2.99864,-0.994571,-2.41511,-3.06372,-0.889685,-2.49588,-3.1221,-0.786014,-2.56248,-3.17319,-0.684216,-2.6135,-3.21635,-0.584951,-2.64753,-3.25099,-0.488879,-2.66317,-3.27649,-0.396659,-2.659,-3.29224,-0.30895,-2.63361,-3.29763,-0.226413,-2.58328,-3.29224,-0.143363,-2.5066,-3.27649,-0.0542582,-2.40568,-3.25099,0.0400306,-2.28263,-3.21635,0.138632,-2.13956,-3.17319,0.240674,-1.97857,-3.1221,0.345286,-1.80178,-3.06372,0.451596,-1.6113,-2.99864,0.558734,-1.40922,-2.92748,0.665827,-1.19766,-2.85086,0.772004,-0.978731,-2.76938,0.876394,-0.754534,-2.68366,0.978126,-0.527181,-2.59431,1.07633,-0.298778,-2.50193,1.17013,-0.0714342,-2.40716,1.25866,0.152742,-2.31058,1.34104,0.371643,-2.21283,1.41641,0.583161,-2.1145,1.48389,0.785187,-2.01622,1.54262,0.975614,-1.91858,1.59172,1.15233,-1.82222,1.63031,1.31324,-1.72773,1.65753,1.45622,-1.63573,1.67251,1.57916,-1.54683,1.67438,1.67997,-1.46165,1.66226});
CMetadataSet* MetadataSet46 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet46->setName("Interpolator");
CMetadataInteger* MetadataInteger47 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger47->setName("key");
MetadataInteger47->setReference("http://titania.create3000.de");
MetadataInteger47->setValue(new int[5]{0,25,50,75,100});
MetadataSet46->setValue(*MetadataInteger47);

CMetadataDouble* MetadataDouble48 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble48->setName("keyValue");
MetadataDouble48->setReference("http://titania.create3000.de");
MetadataDouble48->setValue(new double[15]{1.67997002601624,-1.46165001392365,1.66226005554199,1.81811666488647,0.858499765396118,-1.19660758972168,-0.142971247434616,-1.46165001392365,-2.32433462142944,-2.63361215591431,-3.29762887954712,-0.22641310095787,1.67997002601624,-1.46165001392365,1.66226005554199});
MetadataSet46->addValue(*MetadataDouble48);

CMetadataString* MetadataString49 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString49->setName("keyType");
MetadataString49->setReference("http://titania.create3000.de");
MetadataString49->setValue(new CString[5]{", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"}, 5);
MetadataSet46->addValue(*MetadataString49);

PositionInterpolator45->setMetadata(*MetadataSet46);

Group40->addChildren(*PositionInterpolator45);

CPositionInterpolator* PositionInterpolator50 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator50->setDEF("GreenLightTranslationInterpolator");
PositionInterpolator50->setKey(new float[101]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator50->setKeyValue(new float[303]{-0.946171,1.1655,2.0358,-1.01384,1.24581,2.02674,-1.07491,1.33779,1.99864,-1.12968,1.44019,1.95289,-1.17845,1.55173,1.89088,-1.22153,1.67112,1.81398,-1.25921,1.79711,1.72358,-1.2918,1.92841,1.62106,-1.31959,2.06375,1.50781,-1.34289,2.20187,1.3852,-1.362,2.34147,1.25462,-1.37722,2.48131,1.11746,-1.38885,2.62008,0.975094,-1.39719,2.75654,0.828908,-1.40255,2.88939,0.680283,-1.40521,3.01738,0.530604,-1.4055,3.13922,0.381254,-1.4037,3.25364,0.233614,-1.40011,3.35937,0.0890691,-1.39505,3.45513,-0.0509988,-1.3888,3.53965,-0.185207,-1.38167,3.61166,-0.312171,-1.37397,3.66989,-0.43051,-1.36599,3.71306,-0.538839,-1.35803,3.73989,-0.635777,-1.35039,3.74912,-0.719939,-1.34271,3.73989,-0.796342,-1.33432,3.71306,-0.870856,-1.32506,3.66989,-0.943379,-1.31476,3.61166,-1.01381,-1.30327,3.53965,-1.08205,-1.29043,3.45513,-1.14799,-1.27608,3.35937,-1.21154,-1.26005,3.25364,-1.27258,-1.2422,3.13922,-1.33103,-1.22236,3.01738,-1.38678,-1.20037,2.88939,-1.43972,-1.17606,2.75654,-1.48977,-1.1493,2.62008,-1.5368,-1.1199,2.48131,-1.58073,-1.08772,2.34147,-1.62145,-1.05259,2.20187,-1.65886,-1.01435,2.06375,-1.69286,-0.972847,1.92841,-1.72335,-0.927921,1.79711,-1.75023,-0.87941,1.67112,-1.77339,-0.827156,1.55173,-1.79273,-0.770998,1.44019,-1.80815,-0.710777,1.33779,-1.81955,-0.646334,1.24581,-1.82683,-0.57751,1.1655,-1.82989,-0.498739,1.09204,-1.82873,-0.40558,1.01984,-1.82348,-0.299557,0.949045,-1.81421,-0.182193,0.879804,-1.80102,-0.0550138,0.812267,-1.78399,0.0804579,0.74658,-1.76319,0.222698,0.682891,-1.73873,0.370182,0.62135,-1.71067,0.521387,0.562104,-1.6791,0.674788,0.505301,-1.64412,0.828861,0.45109,-1.60579,0.982082,0.399617,-1.56421,1.13293,0.351033,-1.51946,1.27987,0.305484,-1.47162,1.4214,0.263118,-1.42078,1.55597,0.224085,-1.36701,1.68207,0.188531,-1.31042,1.79818,0.156606,-1.25107,1.90277,0.128457,-1.18905,1.99431,0.104232,-1.12445,2.07129,0.084079,-1.05735,2.13218,0.068147,-0.987835,2.17545,0.0565836,-0.915987,2.19958,0.0495369,-0.841892,2.20304,0.0471551,-0.765632,2.18426,0.0495369,-0.681326,2.14378,0.0565836,-0.583971,2.08327,0.068147,-0.474966,2.00438,0.084079,-0.355712,1.90878,0.104232,-0.22761,1.79815,0.128457,-0.0920598,1.67415,0.156606,0.0495376,1.53843,0.188531,0.195782,1.39267,0.224085,0.345272,1.23854,0.263118,0.496609,1.07769,0.305484,0.64839,0.911802,0.351033,0.799217,0.742529,0.399617,0.947687,0.571541,0.45109,1.0924,0.400504,0.505301,1.23196,0.231082,0.562104,1.36496,0.0649424,0.62135,1.49,-0.0962502,0.682891,1.60569,-0.25083,0.74658,1.71061,-0.397132,0.812267,1.80338,-0.533489,0.879804,1.88258,-0.658238,0.949045,1.94683,-0.769711,1.01984,1.99471,-0.866244,1.09204,2.02484,-0.946171,1.1655,2.0358});
CMetadataSet* MetadataSet51 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet51->setName("Interpolator");
CMetadataInteger* MetadataInteger52 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger52->setName("key");
MetadataInteger52->setReference("http://titania.create3000.de");
MetadataInteger52->setValue(new int[5]{0,25,50,75,100});
MetadataSet51->setValue(*MetadataInteger52);

CMetadataDouble* MetadataDouble53 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble53->setName("keyValue");
MetadataDouble53->setReference("http://titania.create3000.de");
MetadataDouble53->setValue(new double[15]{-0.9461709856987,1.16550004482269,2.03579998016357,-1.35039067268372,3.74911761283875,-0.719938933849335,-0.577509522438049,1.16550004482269,-1.82989358901978,2.20304226875305,0.0471551418304443,-0.765632033348083,-0.9461709856987,1.16550004482269,2.03579998016357});
MetadataSet51->addValue(*MetadataDouble53);

CMetadataString* MetadataString54 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString54->setName("keyType");
MetadataString54->setReference("http://titania.create3000.de");
MetadataString54->setValue(new CString[5]{", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"}, 5);
MetadataSet51->addValue(*MetadataString54);

PositionInterpolator50->setMetadata(*MetadataSet51);

Group40->addChildren(*PositionInterpolator50);

CPositionInterpolator* PositionInterpolator55 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator55->setDEF("BlueLightTranslationInterpolator");
PositionInterpolator55->setKey(new float[101]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator55->setKeyValue(new float[303]{0.80258,-2.68914,-1.73918,0.879722,-2.64638,-1.70261,0.955826,-2.56999,-1.64603,1.03056,-2.46297,-1.57103,1.1036,-2.32831,-1.47919,1.1746,-2.16901,-1.37211,1.24324,-1.98806,-1.25137,1.30919,-1.78847,-1.11855,1.37212,-1.57323,-0.975241,1.43169,-1.34533,-0.823032,1.48757,-1.10777,-0.663507,1.53944,-0.86355,-0.498253,1.58696,-0.615662,-0.328856,1.6298,-0.367103,-0.156904,1.66764,-0.12087,0.0160182,1.70013,0.120042,0.188323,1.72695,0.352635,0.358425,1.74776,0.573914,0.524736,1.76225,0.780883,0.685671,1.77007,0.970544,0.839643,1.77089,1.1399,0.985066,1.76439,1.28596,1.12035,1.75023,1.40573,1.24392,1.72808,1.4962,1.35417,1.69761,1.55439,1.44953,1.65849,1.57729,1.52841,1.60715,1.56323,1.59513,1.54104,1.5145,1.65524,1.4613,1.43399,1.70898,1.36912,1.32463,1.75659,1.26566,1.18932,1.79831,1.15208,1.03099,1.83438,1.02956,0.852549,1.86504,0.899258,0.656909,1.89054,0.762342,0.446986,1.91111,0.619982,0.225694,1.92699,0.473344,-0.00405218,1.93842,0.323595,-0.239338,1.94564,0.171903,-0.47725,1.9489,0.0194347,-0.714873,1.94844,-0.132643,-0.949293,1.94449,-0.283162,-1.17759,1.93729,-0.430956,-1.39686,1.92709,-0.574858,-1.60419,1.91413,-0.713699,-1.79665,1.89864,-0.846314,-1.97134,1.88087,-0.971535,-2.12533,1.86106,-1.08819,-2.25572,1.83944,-1.19512,-2.3596,1.81627,-1.29116,-2.43404,1.79177,-1.37513,-2.47613,1.76619,-1.45222,-2.48585,1.73769,-1.52816,-2.46673,1.70445,-1.60264,-2.42121,1.66671,-1.67532,-2.35173,1.62475,-1.7459,-2.26072,1.57883,-1.81405,-2.15062,1.52919,-1.87945,-2.02386,1.4761,-1.94177,-1.88288,1.41982,-2.0007,-1.73011,1.36062,-2.05591,-1.56799,1.29874,-2.10707,-1.39895,1.23445,-2.15388,-1.22543,1.16801,-2.196,-1.04987,1.09967,-2.23312,-0.874695,1.02971,-2.26491,-0.702348,0.958364,-2.29105,-0.535261,0.885909,-2.31123,-0.375872,0.8126,-2.32511,-0.226614,0.738695,-2.33237,-0.0899234,0.664455,-2.3327,0.0317641,0.590139,-2.32577,0.136013,0.516006,-2.31127,0.220389,0.442316,-2.28886,0.282455,0.369328,-2.25823,0.319777,0.297302,-2.21906,0.329918,0.226498,-2.16778,0.310929,0.151703,-2.10182,0.26416,0.0682593,-2.02235,0.192128,-0.0227481,-1.93051,0.0973513,-0.120232,-1.82747,-0.017654,-0.223106,-1.71439,-0.15037,-0.330284,-1.59242,-0.29828,-0.440678,-1.46272,-0.458867,-0.553203,-1.32645,-0.629612,-0.666772,-1.18477,-0.808,-0.780298,-1.03883,-0.991513,-0.892694,-0.889794,-1.17763,-1.00287,-0.738821,-1.36384,-1.10975,-0.587066,-1.54763,-1.21224,-0.435689,-1.72647,-1.30925,-0.285847,-1.89784,-1.39971,-0.138698,-2.05924,-1.48251,0.00460011,-2.20815,-1.55657,0.142889,-2.34204,-1.62082,0.27501,-2.4584,-1.67415,0.399807,-2.55471,-1.7155,0.51612,-2.62846,-1.74375,0.622792,-2.67712,-1.75785,0.718664,-2.69819,-1.75668,0.80258,-2.68914,-1.73918});
CMetadataSet* MetadataSet56 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet56->setName("Interpolator");
CMetadataInteger* MetadataInteger57 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger57->setName("key");
MetadataInteger57->setReference("http://titania.create3000.de");
MetadataInteger57->setValue(new int[5]{0,25,50,75,100});
MetadataSet56->setValue(*MetadataInteger57);

CMetadataDouble* MetadataDouble58 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble58->setName("keyValue");
MetadataDouble58->setReference("http://titania.create3000.de");
MetadataDouble58->setValue(new double[15]{0.802579998970032,-2.68913912773132,-1.73917651176453,1.65848922729492,1.57728636264801,1.52840757369995,-1.3751300573349,-2.47613000869751,1.76619005203247,-2.21905589103699,0.329918414354324,0.226497903466225,0.802579998970032,-2.68913912773132,-1.73917651176453});
MetadataSet56->addValue(*MetadataDouble58);

CMetadataString* MetadataString59 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString59->setName("keyType");
MetadataString59->setReference("http://titania.create3000.de");
MetadataString59->setValue(new CString[5]{", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"}, 5);
MetadataSet56->addValue(*MetadataString59);

PositionInterpolator55->setMetadata(*MetadataSet56);

Group40->addChildren(*PositionInterpolator55);

CPositionInterpolator* PositionInterpolator60 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator60->setDEF("PinkLightTranslationInterpolator");
PositionInterpolator60->setKey(new float[101]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 101);
PositionInterpolator60->setKeyValue(new float[303]{0.80258,0.426257,-2.18794,0.733537,0.422312,-2.1664,0.645973,0.410209,-2.12171,0.541725,0.390655,-2.05566,0.422626,0.364359,-1.97003,0.290512,0.332029,-1.86661,0.147218,0.294373,-1.74719,-0.00542264,0.252099,-1.61357,-0.165574,0.205915,-1.46751,-0.331401,0.15653,-1.31083,-0.501069,0.104652,-1.14529,-0.672743,0.050988,-0.972699,-0.844589,-0.00375272,-0.794834,-1.01477,-0.0588624,-0.613488,-1.18146,-0.113633,-0.430447,-1.34281,-0.167356,-0.2475,-1.49699,-0.219323,-0.0664348,-1.64217,-0.268827,0.11096,-1.77651,-0.315159,0.282897,-1.89818,-0.357611,0.447587,-2.00534,-0.395474,0.603243,-2.09616,-0.428042,0.748076,-2.1688,-0.454605,0.880298,-2.22144,-0.474455,0.998121,-2.25222,-0.486884,1.09976,-2.25932,-0.491185,1.18342,-2.24243,-0.48543,1.25347,-2.20353,-0.468881,1.31575,-2.14423,-0.442608,1.37066,-2.06614,-0.407684,1.41858,-1.97085,-0.36518,1.45991,-1.85999,-0.316168,1.49506,-1.73515,-0.261719,1.52442,-1.59794,-0.202906,1.54839,-1.44997,-0.1408,1.56736,-1.29285,-0.0764723,1.58174,-1.12817,-0.010995,1.59192,-0.957558,0.0545603,1.59829,-0.782608,0.119122,1.60126,-0.604929,0.181618,1.60122,-0.426129,0.240977,1.59857,-0.247813,0.296127,1.59371,-0.0715893,0.345997,1.58703,0.100936,0.389515,1.57893,0.268157,0.425609,1.56981,0.428467,0.453207,1.56006,0.580259,0.471238,1.55009,0.721925,0.47863,1.54029,0.851861,0.474312,1.53106,0.968458,0.457211,1.52279,1.07011,0.426257,1.51589,1.1619,0.378319,1.5079,1.25003,0.312102,1.49632,1.33455,0.229281,1.48142,1.41556,0.131529,1.46347,1.4931,0.0205239,1.44277,1.56725,-0.102061,1.41958,1.63808,-0.234549,1.39419,1.70565,-0.375266,1.36687,1.77004,-0.522536,1.33791,1.83132,-0.674684,1.30759,1.88954,-0.830035,1.27618,1.94479,-0.986914,1.24396,1.99712,-1.14365,1.21122,2.04661,-1.29855,1.17823,2.09332,-1.44996,1.14527,2.13733,-1.5962,1.11262,2.1787,-1.73559,1.08056,2.2175,-1.86645,1.04937,2.2538,-1.98712,1.01933,2.28767,-2.09591,0.990718,2.31917,-2.19115,0.963813,2.34838,-2.27117,0.938895,2.37536,-2.33429,0.916243,2.40018,-2.37883,0.896137,2.42292,-2.40313,0.878855,2.4883,-2.41901,0.83514,2.54592,-2.38444,0.802964,2.59563,-2.30624,0.779855,2.63731,-2.19125,0.76334,2.6708,-2.0463,0.750949,2.69599,-1.87823,0.74021,2.71273,-1.69388,0.728652,2.72088,-1.50007,0.713802,2.72032,-1.30365,0.693189,2.71091,-1.11145,0.664341,2.6925,-0.930296,0.624788,2.66498,-0.767033,0.572057,2.62819,-0.628494,0.503677,2.58201,-0.521514,0.417176,2.49765,-0.380555,0.223472,2.40742,-0.246634,-0.0332888,2.30811,-0.121058,-0.334963,2.19653,-0.00513326,-0.663406,2.06946,0.0998316,-1.00047,1.92371,0.192529,-1.32802,1.75607,0.271653,-1.62791,1.56335,0.335895,-1.88199,1.34232,0.383948,-2.07211,1.0898,0.414504,-2.18015,0.80258,0.426257,-2.18794});
CMetadataSet* MetadataSet61 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet61->setName("Interpolator");
CMetadataInteger* MetadataInteger62 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger62->setName("key");
MetadataInteger62->setReference("http://titania.create3000.de");
MetadataInteger62->setValue(new int[6]{0,25,50,75,89,100});
MetadataSet61->setValue(*MetadataInteger62);

CMetadataDouble* MetadataDouble63 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble63->setName("keyValue");
MetadataDouble63->setReference("http://titania.create3000.de");
MetadataDouble63->setValue(new double[18]{0.802579998970032,0.426256656646729,-2.18794059753418,-2.25932049751282,-0.491184830665588,1.18341720104218,1.0701105594635,0.426256656646729,1.5158873796463,2.42291641235352,-2.40312576293945,0.878854751586914,2.58200669288635,-0.52151358127594,0.417176455259323,0.802579998970032,0.426256656646729,-2.18794059753418});
MetadataSet61->addValue(*MetadataDouble63);

CMetadataString* MetadataString64 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString64->setName("keyType");
MetadataString64->setReference("http://titania.create3000.de");
MetadataString64->setValue(new CString[6]{", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"}, 6);
MetadataSet61->addValue(*MetadataString64);

PositionInterpolator60->setMetadata(*MetadataSet61);

Group40->addChildren(*PositionInterpolator60);

Transform39->addChildren(*Group40);

CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setDEF("RedLight");
Transform65->setTranslation(new float[3]{2.06338,0.482709,-0.308917});
CPointLight* PointLight66 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight66->setDEF("_4");
PointLight66->setColor(new float[3]{1,0,0});
PointLight66->setAttenuation(new float[3]{0.07,0.16,0.88});
Transform65->addChildren(*PointLight66);

CTransform* Transform67 = (CTransform *)(m_pScene.createNode("Transform"));
Transform67->setDEF("Sphere");
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material70 = (CMaterial *)(m_pScene.createNode("Material"));
Material70->setDEF("_5");
Material70->setEmissiveColor(new float[3]{1,0,0});
Appearance69->setMaterial(*Material70);

Shape68->setAppearance(*Appearance69);

CSphere* Sphere71 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere71->setDEF("_6");
Sphere71->setRadius(0.08);
Shape68->setGeometry(Sphere71);

Transform67->addChildren(*Shape68);

Transform65->addChildren(*Transform67);

Transform39->addChildren(*Transform65);

CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setDEF("GreenLight");
Transform72->setTranslation(new float[3]{-1.40209,3.30116,0.168655});
CPointLight* PointLight73 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight73->setDEF("_7");
PointLight73->setColor(new float[3]{0,1,0});
PointLight73->setAttenuation(new float[3]{0.07,0.16,0.88});
Transform72->addChildren(*PointLight73);

CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setDEF("Sphere_1");
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance76 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material77 = (CMaterial *)(m_pScene.createNode("Material"));
Material77->setDEF("_8");
Material77->setEmissiveColor(new float[3]{0,1,0});
Appearance76->setMaterial(*Material77);

Shape75->setAppearance(*Appearance76);

CSphere* Sphere78 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere78->setUSE("_6");
Shape75->setGeometry(Sphere78);

Transform74->addChildren(*Shape75);

Transform72->addChildren(*Transform74);

Transform39->addChildren(*Transform72);

CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setDEF("BlueLight");
Transform79->setTranslation(new float[3]{1.75427,0.666927,0.597061});
CPointLight* PointLight80 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight80->setDEF("_9");
PointLight80->setColor(new float[3]{0,0,1});
PointLight80->setAttenuation(new float[3]{0.07,0.16,0.88});
Transform79->addChildren(*PointLight80);

CTransform* Transform81 = (CTransform *)(m_pScene.createNode("Transform"));
Transform81->setDEF("Sphere_2");
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance83 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material84 = (CMaterial *)(m_pScene.createNode("Material"));
Material84->setDEF("_10");
Material84->setEmissiveColor(new float[3]{0,0,1});
Appearance83->setMaterial(*Material84);

Shape82->setAppearance(*Appearance83);

CSphere* Sphere85 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere85->setUSE("_6");
Shape82->setGeometry(Sphere85);

Transform81->addChildren(*Shape82);

Transform79->addChildren(*Transform81);

Transform39->addChildren(*Transform79);

CTransform* Transform86 = (CTransform *)(m_pScene.createNode("Transform"));
Transform86->setDEF("PinkLight");
Transform86->setTranslation(new float[3]{-1.70254,-0.289649,0.18823});
CPointLight* PointLight87 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight87->setDEF("_11");
PointLight87->setColor(new float[3]{1,0,1});
PointLight87->setAttenuation(new float[3]{0.07,0.16,0.88});
Transform86->addChildren(*PointLight87);

CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setDEF("Sphere_3");
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance90 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material91 = (CMaterial *)(m_pScene.createNode("Material"));
Material91->setDEF("_12");
Material91->setEmissiveColor(new float[3]{1,0,1});
Appearance90->setMaterial(*Material91);

Shape89->setAppearance(*Appearance90);

CSphere* Sphere92 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere92->setUSE("_6");
Shape89->setGeometry(Sphere92);

Transform88->addChildren(*Shape89);

Transform86->addChildren(*Transform88);

Transform39->addChildren(*Transform86);

Transform38->addChildren(*Transform39);

CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setDEF("Beethoven");
CInline* Inline94 = (CInline *)(m_pScene.createNode("Inline"));
Inline94->setUrl(new CString[2]{", ","../Geometry3D/Beethoven.x3dzfile:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/Beethoven.x3dz"}, 2);
Transform93->addChildren(*Inline94);

Transform38->addChildren(*Transform93);

Transform37->addChildren(*Transform38);

Layer25->addChildren(*Transform37);

CTransform* Transform95 = (CTransform *)(m_pScene.createNode("Transform"));
Transform95->setTranslation(new float[3]{9,0,0});
CTransform* Transform96 = (CTransform *)(m_pScene.createNode("Transform"));
Transform96->setUSE("_2");
Transform95->addChildren(*Transform96);

Layer25->addChildren(*Transform95);

LayerSet24->addLayers(*Layer25);

CLayer* Layer97 = (CLayer *)(m_pScene.createNode("Layer"));
Layer97->setDEF("HUD");
CMetadataSet* MetadataSet98 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet98->setName("Titania");
MetadataSet98->setDEF("Titania_2");
MetadataSet98->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet99 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet99->setName("Grid");
MetadataSet99->setDEF("Grid_1");
MetadataSet99->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean100 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean100->setName("enabled");
MetadataBoolean100->setReference("http://titania.create3000.de");
MetadataBoolean100->setValue(new boolean[1]{True});
MetadataSet99->setValue(*MetadataBoolean100);

CMetadataFloat* MetadataFloat101 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat101->setName("rotation");
MetadataFloat101->setReference("http://titania.create3000.de");
MetadataFloat101->setValue(new float[4]{1,0,0,1.5708}, 4);
MetadataSet99->addValue(*MetadataFloat101);

CMetadataFloat* MetadataFloat102 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat102->setName("scale");
MetadataFloat102->setReference("http://titania.create3000.de");
MetadataFloat102->setValue(new float[3]{0.049,0.049,0.049}, 3);
MetadataSet99->addValue(*MetadataFloat102);

CMetadataInteger* MetadataInteger103 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger103->setName("dimension");
MetadataInteger103->setReference("http://titania.create3000.de");
MetadataInteger103->setValue(new int[3]{73,10,41});
MetadataSet99->addValue(*MetadataInteger103);

CMetadataInteger* MetadataInteger104 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger104->setName("majorLineEvery");
MetadataInteger104->setReference("http://titania.create3000.de");
MetadataInteger104->setValue(new int[6]{5,5,5,5,0,5});
MetadataSet99->addValue(*MetadataInteger104);

CMetadataInteger* MetadataInteger105 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger105->setName("majorLineOffset");
MetadataInteger105->setReference("http://titania.create3000.de");
MetadataInteger105->setValue(new int[6]{0,0,-5,-1,0,-6});
MetadataSet99->addValue(*MetadataInteger105);

CMetadataFloat* MetadataFloat106 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat106->setName("lineColor");
MetadataFloat106->setReference("http://titania.create3000.de");
MetadataFloat106->setValue(new float[4]{1,0.7,0.7,0.0588235}, 4);
MetadataSet99->addValue(*MetadataFloat106);

MetadataSet98->setValue(*MetadataSet99);

CMetadataSet* MetadataSet107 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet107->setName("AngleGrid");
MetadataSet107->setDEF("AngleGrid_1");
MetadataSet107->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean108 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean108->setName("enabled");
MetadataBoolean108->setReference("http://titania.create3000.de");
MetadataBoolean108->setValue(new boolean[1]{False});
MetadataSet107->setValue(*MetadataBoolean108);

MetadataSet98->addValue(*MetadataSet107);

Layer97->setMetadata(*MetadataSet98);

COrthoViewpoint* OrthoViewpoint109 = (COrthoViewpoint *)(m_pScene.createNode("OrthoViewpoint"));
Layer97->addChildren(*OrthoViewpoint109);

CTransform* Transform110 = (CTransform *)(m_pScene.createNode("Transform"));
Transform110->setDEF("Geometry3D");
Transform110->setTranslation(new float[3]{-1.6905,0.955504,-1});
Transform110->setScale(new float[3]{0.0672307,0.0672307,0.0672307});
CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance112 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material113 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance112->setMaterial(*Material113);

Shape111->setAppearance(*Appearance112);

CText* Text114 = (CText *)(m_pScene.createNode("Text"));
Text114->setString(new CString[1]{"PointLight"}, 1);
Text114->setSolid(True);
CFontStyle* FontStyle115 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle115->setFamily(new CString[1]{"SANS"}, 1);
FontStyle115->setSize(1.61);
FontStyle115->setJustify(new CString[2]{", ","BEGINBEGIN"}, 2);
Text114->setFontStyle(*FontStyle115);

Shape111->setGeometry(Text114);

Transform110->addChildren(*Shape111);

Layer97->addChildren(*Transform110);

CGroup* Group116 = (CGroup *)(m_pScene.createNode("Group"));
Group116->setDEF("ShadingMenu");
CScript* Script117 = (CScript *)(m_pScene.createNode("Script"));
Script117->setDEF("ShadingScript");
Cfield* field118 = new Cfield();
field118->setName("set_pointset");
field118->setAccessType("inputOnly");
field118->setType("SFTime");
Script117->addField(*field118);

Cfield* field119 = new Cfield();
field119->setName("set_wireframe");
field119->setAccessType("inputOnly");
field119->setType("SFTime");
Script117->addField(*field119);

Cfield* field120 = new Cfield();
field120->setName("set_flat");
field120->setAccessType("inputOnly");
field120->setType("SFTime");
Script117->addField(*field120);

Cfield* field121 = new Cfield();
field121->setName("set_gouraud");
field121->setAccessType("inputOnly");
field121->setType("SFTime");
Script117->addField(*field121);

Cfield* field122 = new Cfield();
field122->setName("set_phong");
field122->setAccessType("inputOnly");
field122->setType("SFTime");
Script117->addField(*field122);


Script117.setSourceCode(`javascript:\n"+
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
Group116->addChildren(*Script117);

CTransform* Transform123 = (CTransform *)(m_pScene.createNode("Transform"));
Transform123->setDEF("Text");
Transform123->setTranslation(new float[3]{1.6905,-0.857496,-1});
Transform123->setScale(new float[3]{0.0672307,0.0672307,0.0672307});
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDEF("Artdeco31");
Material126->setAmbientIntensity(0);
Material126->setDiffuseColor(new float[3]{0,0,0});
Material126->setShininess(0);
Appearance125->setMaterial(*Material126);

Shape124->setAppearance(*Appearance125);

CText* Text127 = (CText *)(m_pScene.createNode("Text"));
Text127->setString(new CString[1]{"Shading"}, 1);
Text127->setSolid(True);
CFontStyle* FontStyle128 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle128->setFamily(new CString[1]{"SANS"}, 1);
FontStyle128->setStyle("BOLD");
FontStyle128->setSize(0.68);
FontStyle128->setJustify(new CString[1]{"END"}, 1);
Text127->setFontStyle(*FontStyle128);

Shape124->setGeometry(Text127);

Transform123->addChildren(*Shape124);

Group116->addChildren(*Transform123);

CTransform* Transform129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform129->setDEF("Text_1");
Transform129->setTranslation(new float[3]{1.6905,-0.955496,-1});
Transform129->setScale(new float[3]{0.0672307,0.0672307,0.0672307});
CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance131 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material132 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance131->setMaterial(*Material132);

Shape130->setAppearance(*Appearance131);

CText* Text133 = (CText *)(m_pScene.createNode("Text"));
Text133->setString(new CString[1]{"Pointset Wireframe Flat Gouraud Phong"}, 1);
Text133->setSolid(True);
CFontStyle* FontStyle134 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle134->setUSE("_1");
Text133->setFontStyle(*FontStyle134);

Shape130->setGeometry(Text133);

Transform129->addChildren(*Shape130);

Group116->addChildren(*Transform129);

CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform135->setDEF("Pointset");
Transform135->setTranslation(new float[3]{0.436176,-0.916146,0});
Transform135->setScale(new float[3]{0.139972,0.040588,0.040588});
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance137 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material138 = (CMaterial *)(m_pScene.createNode("Material"));
Material138->setDEF("_13");
Material138->setTransparency(1);
Appearance137->setMaterial(*Material138);

Shape136->setAppearance(*Appearance137);

CIndexedFaceSet* IndexedFaceSet139 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet139->setTexCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet139->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate140 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate140->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet139->setTexCoord(*TextureCoordinate140);

CCoordinate* Coordinate141 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate141->setPoint(new float[12]{-1,-1,0,1,-1,0,1,1,0,-1,1,0});
IndexedFaceSet139->setCoord(*Coordinate141);

Shape136->setGeometry(IndexedFaceSet139);

Transform135->addChildren(*Shape136);

CTouchSensor* TouchSensor142 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor142->setDEF("_14");
Transform135->addChildren(*TouchSensor142);

Group116->addChildren(*Transform135);

CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setDEF("Wireframe");
Transform143->setTranslation(new float[3]{0.77569,-0.916146,0});
Transform143->setScale(new float[3]{0.177062,0.040588,0.040588});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setUSE("_13");
Appearance145->setMaterial(*Material146);

Shape144->setAppearance(*Appearance145);

CIndexedFaceSet* IndexedFaceSet147 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet147->setTexCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet147->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate148 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate148->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet147->setTexCoord(*TextureCoordinate148);

CCoordinate* Coordinate149 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate149->setPoint(new float[12]{-1,-1,0,1,-1,0,1,1,0,-1,1,0});
IndexedFaceSet147->setCoord(*Coordinate149);

Shape144->setGeometry(IndexedFaceSet147);

Transform143->addChildren(*Shape144);

CTouchSensor* TouchSensor150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor150->setDEF("_15");
Transform143->addChildren(*TouchSensor150);

Group116->addChildren(*Transform143);

CTransform* Transform151 = (CTransform *)(m_pScene.createNode("Transform"));
Transform151->setDEF("Flat");
Transform151->setTranslation(new float[3]{1.04432,-0.916146,0});
Transform151->setScale(new float[3]{0.0743511,0.040588,0.040588});
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance153 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material154 = (CMaterial *)(m_pScene.createNode("Material"));
Material154->setUSE("_13");
Appearance153->setMaterial(*Material154);

Shape152->setAppearance(*Appearance153);

CIndexedFaceSet* IndexedFaceSet155 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet155->setTexCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet155->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate156 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate156->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet155->setTexCoord(*TextureCoordinate156);

CCoordinate* Coordinate157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate157->setPoint(new float[12]{-1,-1,0,1,-1,0,1,1,0,-1,1,0});
IndexedFaceSet155->setCoord(*Coordinate157);

Shape152->setGeometry(IndexedFaceSet155);

Transform151->addChildren(*Shape152);

CTouchSensor* TouchSensor158 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor158->setDEF("_16");
Transform151->addChildren(*TouchSensor158);

Group116->addChildren(*Transform151);

CTransform* Transform159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform159->setDEF("Gouraud");
Transform159->setTranslation(new float[3]{1.27986,-0.916146,0});
Transform159->setScale(new float[3]{0.142825,0.040588,0.040588});
CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance161 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material162 = (CMaterial *)(m_pScene.createNode("Material"));
Material162->setUSE("_13");
Appearance161->setMaterial(*Material162);

Shape160->setAppearance(*Appearance161);

CIndexedFaceSet* IndexedFaceSet163 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet163->setTexCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet163->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate164 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate164->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet163->setTexCoord(*TextureCoordinate164);

CCoordinate* Coordinate165 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate165->setPoint(new float[12]{-1,-1,0,1,-1,0,1,1,0,-1,1,0});
IndexedFaceSet163->setCoord(*Coordinate165);

Shape160->setGeometry(IndexedFaceSet163);

Transform159->addChildren(*Shape160);

CTouchSensor* TouchSensor166 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor166->setDEF("_17");
Transform159->addChildren(*TouchSensor166);

Group116->addChildren(*Transform159);

CTransform* Transform167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform167->setDEF("Phong");
Transform167->setTranslation(new float[3]{1.55457,-0.916146,0});
Transform167->setScale(new float[3]{0.111441,0.040588,0.040588});
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance169 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material170 = (CMaterial *)(m_pScene.createNode("Material"));
Material170->setUSE("_13");
Appearance169->setMaterial(*Material170);

Shape168->setAppearance(*Appearance169);

CIndexedFaceSet* IndexedFaceSet171 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet171->setTexCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet171->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate172 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate172->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet171->setTexCoord(*TextureCoordinate172);

CCoordinate* Coordinate173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate173->setPoint(new float[12]{-1,-1,0,1,-1,0,1,1,0,-1,1,0});
IndexedFaceSet171->setCoord(*Coordinate173);

Shape168->setGeometry(IndexedFaceSet171);

Transform167->addChildren(*Shape168);

CTouchSensor* TouchSensor174 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor174->setDEF("_18");
Transform167->addChildren(*TouchSensor174);

Group116->addChildren(*Transform167);

Layer97->addChildren(*Group116);

LayerSet24->addLayers(*Layer97);

group->addLayerSet(*LayerSet24);

CROUTE* ROUTE175 = new CROUTE();
ROUTE175->setFromNode("_3");
ROUTE175->setFromField("fraction_changed");
ROUTE175->setToNode("RedLightTranslationInterpolator");
ROUTE175->setToField("set_fraction");
group->addChildren(*ROUTE175);

CROUTE* ROUTE176 = new CROUTE();
ROUTE176->setFromNode("RedLightTranslationInterpolator");
ROUTE176->setFromField("value_changed");
ROUTE176->setToNode("RedLight");
ROUTE176->setToField("set_translation");
group->addChildren(*ROUTE176);

CROUTE* ROUTE177 = new CROUTE();
ROUTE177->setFromNode("_3");
ROUTE177->setFromField("fraction_changed");
ROUTE177->setToNode("GreenLightTranslationInterpolator");
ROUTE177->setToField("set_fraction");
group->addChildren(*ROUTE177);

CROUTE* ROUTE178 = new CROUTE();
ROUTE178->setFromNode("GreenLightTranslationInterpolator");
ROUTE178->setFromField("value_changed");
ROUTE178->setToNode("GreenLight");
ROUTE178->setToField("set_translation");
group->addChildren(*ROUTE178);

CROUTE* ROUTE179 = new CROUTE();
ROUTE179->setFromNode("_3");
ROUTE179->setFromField("fraction_changed");
ROUTE179->setToNode("BlueLightTranslationInterpolator");
ROUTE179->setToField("set_fraction");
group->addChildren(*ROUTE179);

CROUTE* ROUTE180 = new CROUTE();
ROUTE180->setFromNode("BlueLightTranslationInterpolator");
ROUTE180->setFromField("value_changed");
ROUTE180->setToNode("BlueLight");
ROUTE180->setToField("set_translation");
group->addChildren(*ROUTE180);

CROUTE* ROUTE181 = new CROUTE();
ROUTE181->setFromNode("_3");
ROUTE181->setFromField("fraction_changed");
ROUTE181->setToNode("PinkLightTranslationInterpolator");
ROUTE181->setToField("set_fraction");
group->addChildren(*ROUTE181);

CROUTE* ROUTE182 = new CROUTE();
ROUTE182->setFromNode("PinkLightTranslationInterpolator");
ROUTE182->setFromField("value_changed");
ROUTE182->setToNode("PinkLight");
ROUTE182->setToField("set_translation");
group->addChildren(*ROUTE182);

CROUTE* ROUTE183 = new CROUTE();
ROUTE183->setFromNode("_18");
ROUTE183->setFromField("touchTime");
ROUTE183->setToNode("ShadingScript");
ROUTE183->setToField("set_phong");
group->addChildren(*ROUTE183);

CROUTE* ROUTE184 = new CROUTE();
ROUTE184->setFromNode("_17");
ROUTE184->setFromField("touchTime");
ROUTE184->setToNode("ShadingScript");
ROUTE184->setToField("set_gouraud");
group->addChildren(*ROUTE184);

CROUTE* ROUTE185 = new CROUTE();
ROUTE185->setFromNode("_16");
ROUTE185->setFromField("touchTime");
ROUTE185->setToNode("ShadingScript");
ROUTE185->setToField("set_flat");
group->addChildren(*ROUTE185);

CROUTE* ROUTE186 = new CROUTE();
ROUTE186->setFromNode("_15");
ROUTE186->setFromField("touchTime");
ROUTE186->setToNode("ShadingScript");
ROUTE186->setToField("set_wireframe");
group->addChildren(*ROUTE186);

CROUTE* ROUTE187 = new CROUTE();
ROUTE187->setFromNode("_14");
ROUTE187->setFromField("touchTime");
ROUTE187->setToNode("ShadingScript");
ROUTE187->setToField("set_pointset");
group->addChildren(*ROUTE187);

CROUTE* ROUTE188 = new CROUTE();
ROUTE188->setFromNode("_4");
ROUTE188->setFromField("color_changed");
ROUTE188->setToNode("_5");
ROUTE188->setToField("set_emissiveColor");
group->addChildren(*ROUTE188);

CROUTE* ROUTE189 = new CROUTE();
ROUTE189->setFromNode("_11");
ROUTE189->setFromField("color_changed");
ROUTE189->setToNode("_12");
ROUTE189->setToField("set_emissiveColor");
group->addChildren(*ROUTE189);

CROUTE* ROUTE190 = new CROUTE();
ROUTE190->setFromNode("_9");
ROUTE190->setFromField("color_changed");
ROUTE190->setToNode("_10");
ROUTE190->setToField("set_emissiveColor");
group->addChildren(*ROUTE190);

CROUTE* ROUTE191 = new CROUTE();
ROUTE191->setFromNode("_7");
ROUTE191->setFromField("color_changed");
ROUTE191->setToNode("_8");
ROUTE191->setToField("set_emissiveColor");
group->addChildren(*ROUTE191);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
