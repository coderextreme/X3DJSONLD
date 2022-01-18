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
meta3->setContent("Wed, 26 Aug 2015 12:17:13 GMT");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Holger Seelig");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("Titania V0.7.8, http://titania.create3000.de");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("Wed, 26 Aug 2015 12:17:13 GMT");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("title");
meta7->setContent("Appartment");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CWorldInfo* WorldInfo9 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo9->setInfo(new CString[2]{", ","Created in TitaniaPackaged by CosmoPackage"}, 2);
group->addChildren(*WorldInfo9);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setDEF("viewing");
CNavigationInfo* NavigationInfo11 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo11->setDEF("_top");
NavigationInfo11->setType(new CString[1]{"EXAMINE"}, 1);
NavigationInfo11->setTransitionType(new CString[1]{"ANIMATE"}, 1);
NavigationInfo11->setTransitionTime(2);
Transform10->addChildren(*NavigationInfo11);

CNavigationInfo* NavigationInfo12 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo12->setDEF("_inside");
NavigationInfo12->setType(new CString[2]{"ANY","WALK"}, 2);
NavigationInfo12->setSpeed(0.3);
NavigationInfo12->setHeadlight(False);
NavigationInfo12->setTransitionType(new CString[1]{"ANIMATE"}, 1);
NavigationInfo12->setTransitionTime(2);
Transform10->addChildren(*NavigationInfo12);

CViewpoint* Viewpoint13 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint13->setDEF("VP2");
Viewpoint13->setDescription("top");
Viewpoint13->setPosition(new float[3]{-1.58774,10.891,2.33508});
Viewpoint13->setOrientation(new float[4]{-0.999999,-0.00113122,0.00113515,1.53307});
Viewpoint13->setFieldOfView(1.3);
Transform10->addChildren(*Viewpoint13);

CViewpoint* Viewpoint14 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint14->setDEF("VP1");
Viewpoint14->setDescription("inside");
Viewpoint14->setPosition(new float[3]{4.57879,1.10243,0.55636});
Viewpoint14->setOrientation(new float[4]{-0.0191714,0.999803,0.00515404,1.41461});
Viewpoint14->setFieldOfView(1.3);
Transform10->addChildren(*Viewpoint14);

group->addChildren(*Transform10);

CTransform* Transform15 = (CTransform *)(m_pScene.createNode("Transform"));
Transform15->setDEF("bg");
CBackground* Background16 = (CBackground *)(m_pScene.createNode("Background"));
Background16->setSkyColor(new float[3]{1,1,1});
Transform15->addChildren(*Background16);

group->addChildren(*Transform15);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setDEF("inline");
Transform17->setTranslation(new float[3]{0,-1.84038,0});
Transform17->setScale(new float[3]{1,0.001,1});
Transform17->setCenter(new float[3]{-1.80969,0.293455,1.89528});
CGroup* Group18 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group19 = (CGroup *)(m_pScene.createNode("Group"));
Group19->setDEF("UnnamedAnimation3");
CTimeSensor* TimeSensor20 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor20->setDEF("Time");
TimeSensor20->setCycleInterval(10);
TimeSensor20->setStopTime(1);
Group19->addChildren(*TimeSensor20);

Group18->addChildren(*Group19);

CPositionInterpolator* PositionInterpolator21 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator21->setDEF("inlineTranslationInterp");
PositionInterpolator21->setKey(new float[101]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1}, 101);
PositionInterpolator21->setKeyValue(new float[303]{0,-1.84038,0,0,-1.82198,0,0,-1.80357,0,0,-1.78517,0,0,-1.76676,0,0,-1.74836,0,0,-1.72996,0,0,-1.71155,0,0,-1.69315,0,0,-1.67475,0,0,-1.65634,0,0,-1.63794,0,0,-1.61953,0,0,-1.60113,0,0,-1.58273,0,0,-1.56432,0,0,-1.54592,0,0,-1.52752,0,0,-1.50911,0,0,-1.49071,0,0,-1.4723,0,0,-1.4539,0,0,-1.4355,0,0,-1.41709,0,0,-1.39869,0,0,-1.38028,0,0,-1.36188,0,0,-1.34348,0,0,-1.32507,0,0,-1.30667,0,0,-1.28827,0,0,-1.26986,0,0,-1.25146,0,0,-1.23305,0,0,-1.21465,0,0,-1.19625,0,0,-1.17784,0,0,-1.15944,0,0,-1.14104,0,0,-1.12263,0,0,-1.10423,0,0,-1.08582,0,0,-1.06742,0,0,-1.04902,0,0,-1.03061,0,0,-1.01221,0,0,-0.993806,0,0,-0.975402,0,0,-0.956998,0,0,-0.938594,0,0,-0.92019,0,0,-0.901787,0,0,-0.883383,0,0,-0.864979,0,0,-0.846575,0,0,-0.828171,0,0,-0.809768,0,0,-0.791364,0,0,-0.77296,0,0,-0.754556,0,0,-0.736152,0,0,-0.717749,0,0,-0.699345,0,0,-0.680941,0,0,-0.662537,0,0,-0.644134,0,0,-0.62573,0,0,-0.607326,0,0,-0.588922,0,0,-0.570518,0,0,-0.552115,0,0,-0.533711,0,0,-0.515307,0,0,-0.496903,0,0,-0.478499,0,0,-0.460096,0,0,-0.441692,0,0,-0.423288,0,0,-0.404885,0,0,-0.386481,0,0,-0.368077,0,0,-0.349673,0,0,-0.331269,0,0,-0.312865,0,0,-0.294462,0,0,-0.276058,0,0,-0.257654,0,0,-0.23925,0,0,-0.220847,0,0,-0.202443,0,0,-0.184039,0,0,-0.165635,0,0,-0.147231,0,0,-0.128828,0,0,-0.110424,0,0,-0.0920199,0,0,-0.0736165,0,0,-0.0552128,0,0,-0.0368087,0,0,-0.018405,0,0,0,0});
Group18->addChildren(*PositionInterpolator21);

CPositionInterpolator* PositionInterpolator22 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator22->setDEF("inlineScaleFactorInterp");
PositionInterpolator22->setKey(new float[101]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1}, 101);
PositionInterpolator22->setKeyValue(new float[303]{1,0.001,1,1,0.01099,1,1,0.02098,1,1,0.03097,1,1,0.04096,1,1,0.05095,1,1,0.06094,1,1,0.07093,1,1,0.08092,1,1,0.09091,1,1,0.1009,1,1,0.11089,1,1,0.12088,1,1,0.13087,1,1,0.14086,1,1,0.15085,1,1,0.16084,1,1,0.17083,1,1,0.18082,1,1,0.19081,1,1,0.2008,1,1,0.21079,1,1,0.22078,1,1,0.23077,1,1,0.24076,1,1,0.25075,1,1,0.26074,1,1,0.27073,1,1,0.28072,1,1,0.29071,1,1,0.3007,1,1,0.31069,1,1,0.32068,1,1,0.33067,1,1,0.34066,1,1,0.35065,1,1,0.36064,1,1,0.37063,1,1,0.38062,1,1,0.39061,1,1,0.4006,1,1,0.41059,1,1,0.42058,1,1,0.43057,1,1,0.44056,1,1,0.45055,1,1,0.46054,1,1,0.47053,1,1,0.48052,1,1,0.49051,1,1,0.5005,1,1,0.51049,1,1,0.52048,1,1,0.53047,1,1,0.54046,1,1,0.55045,1,1,0.56044,1,1,0.57043,1,1,0.58042,1,1,0.59041,1,1,0.6004,1,1,0.61039,1,1,0.62038,1,1,0.63037,1,1,0.64036,1,1,0.65035,1,1,0.66034,1,1,0.67033,1,1,0.68032,1,1,0.69031,1,1,0.7003,1,1,0.71029,1,1,0.72028,1,1,0.73027,1,1,0.74026,1,1,0.75025,1,1,0.76024,1,1,0.77023,1,1,0.78022,1,1,0.79021,1,1,0.8002,1,1,0.810189,1,1,0.820179,1,1,0.83017,1,1,0.84016,1,1,0.850149,1,1,0.860139,1,1,0.870129,1,1,0.880119,1,1,0.890109,1,1,0.900099,1,1,0.910089,1,1,0.92008,1,1,0.930069,1,1,0.940059,1,1,0.95005,1,1,0.960039,1,1,0.970029,1,1,0.980019,1,1,0.990009,1,1,1,1});
Group18->addChildren(*PositionInterpolator22);

Transform17->addChildren(*Group18);

CInline* Inline23 = (CInline *)(m_pScene.createNode("Inline"));
Inline23->setUrl(new CString[1]{"flat-notex-anim.x3d"}, 1);
Inline23->setBboxSize(new float[3]{14.5935,3.71493,8.13908});
Inline23->setBboxCenter(new float[3]{-1.73584,0.298679,1.59514});
Transform17->addChildren(*Inline23);

group->addChildren(*Transform17);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("button");
Transform24->setTranslation(new float[3]{-1.47622,10.7094,2.40666});
Transform24->setRotation(new float[4]{-1,0,0,1.5708});
Transform24->setScale(new float[3]{0.00198924,0.00132336,0.00132293});
CTouchSensor* TouchSensor25 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor25->setDEF("touchSensorTrigger");
Transform24->addChildren(*TouchSensor25);

CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setAmbientIntensity(0.25);
Material28->setDiffuseColor(new float[3]{0.355377,0.817956,0.015797});
Material28->setSpecularColor(new float[3]{0.0415311,0.0955906,0.00184612});
Material28->setShininess(0.078125);
Appearance27->setMaterial(*Material28);

Shape26->setAppearance(*Appearance27);

CIndexedFaceSet* IndexedFaceSet29 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet29->setCreaseAngle(0.5);
IndexedFaceSet29->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate30 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate30->setPoint(new float[12]{-10,10,10,-10,-10,10,10,-10,10,10,10,10});
IndexedFaceSet29->setCoord(*Coordinate30);

Shape26->setGeometry(IndexedFaceSet29);

Transform24->addChildren(*Shape26);

group->addChildren(*Transform24);

CROUTE* ROUTE31 = new CROUTE();
ROUTE31->setFromNode("VP2");
ROUTE31->setFromField("isBound");
ROUTE31->setToNode("_top");
ROUTE31->setToField("set_bind");
group->addChildren(*ROUTE31);

CROUTE* ROUTE32 = new CROUTE();
ROUTE32->setFromNode("VP1");
ROUTE32->setFromField("isBound");
ROUTE32->setToNode("_inside");
ROUTE32->setToField("set_bind");
group->addChildren(*ROUTE32);

CROUTE* ROUTE33 = new CROUTE();
ROUTE33->setFromNode("touchSensorTrigger");
ROUTE33->setFromField("touchTime");
ROUTE33->setToNode("Time");
ROUTE33->setToField("set_startTime");
group->addChildren(*ROUTE33);

CROUTE* ROUTE34 = new CROUTE();
ROUTE34->setFromNode("Time");
ROUTE34->setFromField("fraction_changed");
ROUTE34->setToNode("inlineTranslationInterp");
ROUTE34->setToField("set_fraction");
group->addChildren(*ROUTE34);

CROUTE* ROUTE35 = new CROUTE();
ROUTE35->setFromNode("Time");
ROUTE35->setFromField("fraction_changed");
ROUTE35->setToNode("inlineScaleFactorInterp");
ROUTE35->setToField("set_fraction");
group->addChildren(*ROUTE35);

CROUTE* ROUTE36 = new CROUTE();
ROUTE36->setFromNode("inlineTranslationInterp");
ROUTE36->setFromField("value_changed");
ROUTE36->setToNode("inline");
ROUTE36->setToField("set_translation");
group->addChildren(*ROUTE36);

CROUTE* ROUTE37 = new CROUTE();
ROUTE37->setFromNode("inlineScaleFactorInterp");
ROUTE37->setFromField("value_changed");
ROUTE37->setToNode("inline");
ROUTE37->setToField("set_scale");
group->addChildren(*ROUTE37);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
