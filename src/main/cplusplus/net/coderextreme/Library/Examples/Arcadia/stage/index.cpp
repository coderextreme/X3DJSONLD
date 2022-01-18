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
meta3->setContent("Sat, 11 Apr 2015 10:43:36 GMT");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Holger Seelig");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("Titania V0.7.7, http://titania.create3000.de");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("Sun, 12 Apr 2015 13:26:21 GMT");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("title");
meta7->setContent("Arcadia");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CWorldInfo* WorldInfo9 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo9->setInfo(new CString[2]{", ","Created in TitaniaPackaged by CosmoPackage"}, 2);
group->addChildren(*WorldInfo9);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setDEF("CONTROL");
CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setDEF("control");
Transform11->setTranslation(new float[3]{0,10,0});
CTimeSensor* TimeSensor12 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor12->setDEF("enterWorldTimeSensor");
TimeSensor12->setEnabled(False);
TimeSensor12->setLoop(True);
TimeSensor12->setStartTime(1);
Transform11->addChildren(*TimeSensor12);

CScript* Script13 = (CScript *)(m_pScene.createNode("Script"));
Script13->setDEF("enterWorldScript");
Cfield* field14 = new Cfield();
field14->setName("startTime");
field14->setAccessType("outputOnly");
field14->setType("SFTime");
Script13->addField(*field14);

Cfield* field15 = new Cfield();
field15->setName("firstTime");
field15->setAccessType("outputOnly");
field15->setType("SFBool");
Script13->addField(*field15);

Cfield* field16 = new Cfield();
field16->setName("triggerIn");
field16->setAccessType("inputOnly");
field16->setType("SFTime");
Script13->addField(*field16);


Script13.setSourceCode(`vrmlscript:function triggerIn(value, time) {\n"+
"\n"+
"         // fire off a single round                                     \n"+
"         startTime = value;                                             \n"+
"         firstTime = FALSE;                                             \n"+
"       }`)
Transform11->addChildren(*Script13);

CScript* Script17 = (CScript *)(m_pScene.createNode("Script"));
Script17->setDEF("_countScript");
Cfield* field18 = new Cfield();
field18->setName("counterDisplay");
field18->setAccessType("outputOnly");
field18->setType("MFString");
Script17->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("bonus_Signal");
field19->setAccessType("outputOnly");
field19->setType("SFTime");
Script17->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("alert_Signal");
field20->setAccessType("outputOnly");
field20->setType("SFTime");
Script17->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("key_Signal");
field21->setAccessType("outputOnly");
field21->setType("SFTime");
Script17->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("bonus_Blue");
field22->setAccessType("inputOnly");
field22->setType("SFTime");
Script17->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("bonus_Red");
field23->setAccessType("inputOnly");
field23->setType("SFTime");
Script17->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("alert");
field24->setAccessType("inputOnly");
field24->setType("SFTime");
Script17->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("bonus_Gold");
field25->setAccessType("inputOnly");
field25->setType("SFTime");
Script17->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("key_Found");
field26->setAccessType("inputOnly");
field26->setType("SFTime");
Script17->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("resetCount");
field27->setAccessType("inputOnly");
field27->setType("SFTime");
Script17->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("count");
field28->setAccessType("initializeOnly");
field28->setType("SFInt32");
Script17->addField(*field28);


Script17.setSourceCode(`vrmlscript:\n"+
"function bonus_Blue(value, time)\n"+
"{\n"+
" count += 50;\n"+
" s = new String(count);\n"+
" counterDisplay = new MFString(s);\n"+
" bonus_Signal = time;\n"+
"}\n"+
"\n"+
"function bonus_Red(value, time)\n"+
"{\n"+
" count += 100;\n"+
" s = new String(count);\n"+
" counterDisplay = new MFString(s);\n"+
" bonus_Signal = time;\n"+
"}\n"+
"\n"+
"function bonus_Gold(value, time)\n"+
"{\n"+
" count += 150;\n"+
" s = new String(count);\n"+
" counterDisplay = new MFString(s);\n"+
" bonus_Signal = time;\n"+
"}\n"+
"\n"+
"function key_Found(value, time)\n"+
"{\n"+
" count += 200;\n"+
" s = new String(count);\n"+
" counterDisplay = new MFString(s);\n"+
" key_Signal = time;\n"+
"}\n"+
"\n"+
"\n"+
"function alert(value, time)\n"+
"{\n"+
" count -= 75;\n"+
" s = new String(count);\n"+
" counterDisplay = new MFString(s);\n"+
" alert_Signal = time;\n"+
"}\n"+
"\n"+
"function resetCount(value, time)\n"+
"{\n"+
" count = 0;\n"+
" s = new String(count);\n"+
" counterDisplay = new MFString(s);\n"+
"}`)
Transform11->addChildren(*Script17);

Transform10->addChildren(*Transform11);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setDEF("CAM");
CNavigationInfo* NavigationInfo30 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo30->setDEF("_exa");
NavigationInfo30->setType(new CString[2]{"ANY","EXAMINE"}, 2);
NavigationInfo30->setVisibilityLimit(450);
Transform29->addChildren(*NavigationInfo30);

CScript* Script31 = (CScript *)(m_pScene.createNode("Script"));
Script31->setDEF("_cam_draggerScript");
Cfield* field32 = new Cfield();
field32->setName("cameraOUT");
field32->setAccessType("outputOnly");
field32->setType("SFVec3f");
Script31->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("translation_animIN");
field33->setAccessType("inputOnly");
field33->setType("SFVec3f");
Script31->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("translation_dragIN");
field34->setAccessType("inputOnly");
field34->setType("SFVec3f");
Script31->addField(*field34);


Script31.setSourceCode(`vrmlscript:\n"+
"function translation_animIN(value, time)\n"+
"{\n"+
"	cameraOUT[2] = value[2];\n"+
"}\n"+
"\n"+
"function translation_dragIN(value, time)\n"+
"{\n"+
"	cameraOUT[0]= (value[0]*250)*-1;\n"+
"	cameraOUT[1]= (value[1]*100)*-1;\n"+
"}`)
Transform29->addChildren(*Script31);

CFog* Fog35 = (CFog *)(m_pScene.createNode("Fog"));
Fog35->setDEF("fog");
Fog35->setFogType("EXPONENTIAL");
Fog35->setColor(new float[3]{0.4,0.67,1});
Fog35->setVisibilityRange(450);
Transform29->addChildren(*Fog35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("bg_1");
Transform36->setTranslation(new float[3]{67.3837,80.0708,-1804.69});
CBackground* Background37 = (CBackground *)(m_pScene.createNode("Background"));
Background37->setDEF("bg");
Background37->setSkyColor(new float[3]{0.4,0.67,1});
Transform36->addChildren(*Background37);

Transform29->addChildren(*Transform36);

CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("alert_CAM");
Transform38->setScale(new float[3]{0.999997,0.999995,0.999997});
Transform38->setScaleOrientation(new float[4]{-0.0528969,0.995349,-0.0805071,1.57283});
Transform38->setCenter(new float[3]{-0.0604775,2.32735,5.73882});
CGroup* Group39 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group40 = (CGroup *)(m_pScene.createNode("Group"));
Group40->setDEF("alertCam_animn");
CTimeSensor* TimeSensor41 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor41->setDEF("Time_1");
TimeSensor41->setCycleInterval(0.9);
TimeSensor41->setStopTime(1);
Group40->addChildren(*TimeSensor41);

Group39->addChildren(*Group40);

CPositionInterpolator* PositionInterpolator42 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator42->setDEF("alert_CAMTranslationInterp");
PositionInterpolator42->setKey(new float[8]{0,0.111111,0.222222,0.444444,0.555555,0.666667,0.833333,1}, 8);
PositionInterpolator42->setKeyValue(new float[24]{0,0,0,0,-5,5,3,4,0,3,-5,-4,2.025,-1.875,-2.2,1,2,0,0.4,1.625,0.3,0,0,0});
Group39->addChildren(*PositionInterpolator42);

COrientationInterpolator* OrientationInterpolator43 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator43->setDEF("alert_CAMRotationInterp");
OrientationInterpolator43->setKey(new float[8]{0,0.111111,0.222222,0.444444,0.555555,0.666667,0.833333,1}, 8);
OrientationInterpolator43->setKeyValue(new float[32]{0,0,1,0,1,-1.95683e-8,-1.05825e-7,0.234195,0.164957,0.986249,0.0101427,0.124521,0.833378,-0.551948,0.0288801,0.174679,0.792612,-0.609122,0.0271273,0.101658,0,0,1,0,-0.833378,0.551948,-0.0288801,0.0436686,0,0,1,0});
Group39->addChildren(*OrientationInterpolator43);

Transform38->addChildren(*Group39);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setDEF("camera");
CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
CGroup* Group46 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group47 = (CGroup *)(m_pScene.createNode("Group"));
Group47->setDEF("flyCam_anim");
CTimeSensor* TimeSensor48 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor48->setDEF("Time_2");
TimeSensor48->setCycleInterval(80);
TimeSensor48->setStopTime(1);
Group47->addChildren(*TimeSensor48);

Group46->addChildren(*Group47);

CPositionInterpolator* PositionInterpolator49 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator49->setDEF("dead_camPositionInterp");
PositionInterpolator49->setKey(new float[4]{0,0.990099,0.99999,1}, 4);
PositionInterpolator49->setKeyValue(new float[12]{-3.7676,15.0582,218.78,-3.7676,15.0582,-192.225,-3.7676,15.0582,-192.225,-3.7676,15.0582,218.78});
Group46->addChildren(*PositionInterpolator49);

CPositionInterpolator* PositionInterpolator50 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator50->setDEF("camPositionInterp");
PositionInterpolator50->setKey(new float[4]{0,0.996016,0.99999,1}, 4);
PositionInterpolator50->setKeyValue(new float[12]{0,0,0,0,0,-2400,0,0,-2400,0,0,-2400});
Group46->addChildren(*PositionInterpolator50);

Transform45->addChildren(*Group46);

CViewpoint* Viewpoint51 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint51->setDEF("cam");
Viewpoint51->setDescription("FlyCam");
Viewpoint51->setPosition(new float[3]{0,0,0});
Viewpoint51->setOrientation(new float[4]{-0.981307,-0.192448,1.55814e-8,0.0541943});
Transform45->addChildren(*Viewpoint51);

Transform44->addChildren(*Transform45);

Transform38->addChildren(*Transform44);

Transform29->addChildren(*Transform38);

CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
Transform52->setDEF("HUD");
CGroup* Group53 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setDEF("hud_proxy");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setDEF("proxySelf");
CProximitySensor* ProximitySensor56 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor56->setDEF("prox");
ProximitySensor56->setSize(new float[3]{350,200,2800});
ProximitySensor56->setCenter(new float[3]{6.70553e-8,0.000010252,0.0000162125});
Transform55->addChildren(*ProximitySensor56);

Transform54->addChildren(*Transform55);

CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
Transform57->setDEF("xform");
Transform57->setTranslation(new float[3]{6.70553e-8,0.000010252,0.0000162125});
Transform57->setRotation(new float[4]{-0.981307,-0.192448,2.57899e-8,0.0541899});
CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setDEF("camDragger");
Transform58->setRotation(new float[4]{0,0,1,3.14159});
CPlaneSensor* PlaneSensor59 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor59->setDEF("_1");
PlaneSensor59->setMinPosition(new float[2]{-0.45,-0.3});
PlaneSensor59->setMaxPosition(new float[2]{0.45,0.3});
Transform58->addChildren(*PlaneSensor59);

CTransform* Transform60 = (CTransform *)(m_pScene.createNode("Transform"));
Transform60->setDEF("plane_1");
CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setDEF("cursor");
Transform61->setTranslation(new float[3]{-0.0413871,-0.0490631,-1.02984});
Transform61->setScale(new float[3]{0.5,0.5,0.4});
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setDEF("_2");
Material64->setAmbientIntensity(0);
Material64->setDiffuseColor(new float[3]{0,0.976132,1});
Material64->setEmissiveColor(new float[3]{0,0.976132,1});
Material64->setTransparency(0.5);
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CIndexedFaceSet* IndexedFaceSet65 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet65->setSolid(False);
IndexedFaceSet65->setCcw(False);
IndexedFaceSet65->setCreaseAngle(0.5);
IndexedFaceSet65->setCoordIndex(new int[40]{11,10,12,13,-1,14,9,11,13,-1,15,8,5,16,-1,5,6,17,16,-1,0,1,18,19,-1,0,19,20,4,-1,3,7,21,22,-1,3,22,23,2,-1});
CCoordinate* Coordinate66 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate66->setPoint(new float[72]{0.0669337,-0.0669336,0.0892453,0.0223112,-0.0669336,0.0892453,-0.0223112,-0.0669336,0.0892453,-0.0669337,-0.0669336,0.0892453,0.0669337,-0.0223112,0.0892453,0.0669337,0.0669336,0.0892453,0.0669337,0.0223112,0.0892453,-0.0669337,-0.0223112,0.0892453,0.0223112,0.0669336,0.0892453,-0.0669337,0.0223112,0.0892453,-0.0223112,0.0669336,0.0892453,-0.0669337,0.0669336,0.0892453,-0.0223112,0.0780892,0.0892453,-0.0780893,0.0780892,0.0892453,-0.0780893,0.0223112,0.0892453,0.0223112,0.0780892,0.0892453,0.0780893,0.0780892,0.0892453,0.0780893,0.0223112,0.0892453,0.0223112,-0.0780892,0.0892453,0.0780893,-0.0780892,0.0892453,0.0780893,-0.0223112,0.0892453,-0.0780893,-0.0223112,0.0892453,-0.0780893,-0.0780892,0.0892453,-0.0223112,-0.0780892,0.0892453});
IndexedFaceSet65->setCoord(*Coordinate66);

Shape62->setGeometry(IndexedFaceSet65);

Transform61->addChildren(*Shape62);

Transform60->addChildren(*Transform61);

CTransform* Transform67 = (CTransform *)(m_pScene.createNode("Transform"));
Transform67->setDEF("dragplane");
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setDEF("plane");
Transform68->setTranslation(new float[3]{-0.0344546,-0.0533406,-1.08339});
Transform68->setScale(new float[3]{0.5,0.5,0.4});
Transform68->setCenter(new float[3]{-0.013865,0.00855494,0.0892429});
CGroup* Group69 = (CGroup *)(m_pScene.createNode("Group"));
Group69->setDEF("ALERT-A");
CGroup* Group70 = (CGroup *)(m_pScene.createNode("Group"));
Group70->setDEF("planeAlert_anim");
CTimeSensor* TimeSensor71 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor71->setDEF("Time_3");
TimeSensor71->setStopTime(1);
Group70->addChildren(*TimeSensor71);

Group69->addChildren(*Group70);

CColorInterpolator* ColorInterpolator72 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator72->setDEF("planeEmissiveColorInterp_1");
ColorInterpolator72->setKey(new float[1]{0}, 1);
ColorInterpolator72->setKeyValue(new float[3]{1,0,0.0409002});
Group69->addChildren(*ColorInterpolator72);

CScalarInterpolator* ScalarInterpolator73 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator73->setDEF("planeTransparencyInterp_1");
ScalarInterpolator73->setKey(new float[4]{0,0.1,0.2,1}, 4);
ScalarInterpolator73->setKeyValue(new float[4]{1,0.393617,0.56383,1}, 4);
Group69->addChildren(*ScalarInterpolator73);

Transform68->addChildren(*Group69);

CGroup* Group74 = (CGroup *)(m_pScene.createNode("Group"));
Group74->setDEF("BONUS-A");
CGroup* Group75 = (CGroup *)(m_pScene.createNode("Group"));
Group75->setDEF("planeBonus_anim");
CTimeSensor* TimeSensor76 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor76->setDEF("Time_4");
TimeSensor76->setStopTime(1);
Group75->addChildren(*TimeSensor76);

Group74->addChildren(*Group75);

CColorInterpolator* ColorInterpolator77 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator77->setDEF("planeEmissiveColorInterp_2");
ColorInterpolator77->setKey(new float[1]{0}, 1);
ColorInterpolator77->setKeyValue(new float[3]{0,1,0.732517});
Group74->addChildren(*ColorInterpolator77);

CScalarInterpolator* ScalarInterpolator78 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator78->setDEF("planeTransparencyInterp_2");
ScalarInterpolator78->setKey(new float[4]{0,0.1,0.2,1}, 4);
ScalarInterpolator78->setKeyValue(new float[4]{1,0.393617,0.56383,1}, 4);
Group74->addChildren(*ScalarInterpolator78);

Transform68->addChildren(*Group74);

CGroup* Group79 = (CGroup *)(m_pScene.createNode("Group"));
Group79->setDEF("KEY-A");
CGroup* Group80 = (CGroup *)(m_pScene.createNode("Group"));
Group80->setDEF("key_Anim");
CTimeSensor* TimeSensor81 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor81->setDEF("Time_5");
TimeSensor81->setStopTime(1);
Group80->addChildren(*TimeSensor81);

Group79->addChildren(*Group80);

CColorInterpolator* ColorInterpolator82 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator82->setDEF("planeEmissiveColorInterp_3");
ColorInterpolator82->setKey(new float[1]{0}, 1);
ColorInterpolator82->setKeyValue(new float[3]{1,0.864046,0});
Group79->addChildren(*ColorInterpolator82);

CScalarInterpolator* ScalarInterpolator83 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator83->setDEF("planeTransparencyInterp_3");
ScalarInterpolator83->setKey(new float[4]{0,0.1,0.2,1}, 4);
ScalarInterpolator83->setKeyValue(new float[4]{1,0.393617,0.56383,1}, 4);
Group79->addChildren(*ScalarInterpolator83);

Transform68->addChildren(*Group79);

CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance85 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material86 = (CMaterial *)(m_pScene.createNode("Material"));
Material86->setDEF("_3");
Material86->setAmbientIntensity(0);
Material86->setDiffuseColor(new float[3]{0,0,0});
Material86->setEmissiveColor(new float[3]{1,0.864046,0});
Material86->setShininess(0);
Material86->setTransparency(1);
Appearance85->setMaterial(*Material86);

Shape84->setAppearance(*Appearance85);

CIndexedFaceSet* IndexedFaceSet87 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet87->setCcw(False);
IndexedFaceSet87->setCreaseAngle(0.5);
IndexedFaceSet87->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate88 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate88->setPoint(new float[12]{3.47281,3.49522,0.0892444,3.47281,-3.47811,0.0892414,-3.50054,-3.47811,0.0892414,-3.50054,3.49522,0.0892444});
IndexedFaceSet87->setCoord(*Coordinate88);

Shape84->setGeometry(IndexedFaceSet87);

Transform68->addChildren(*Shape84);

Transform67->addChildren(*Transform68);

Transform60->addChildren(*Transform67);

Transform58->addChildren(*Transform60);

CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setDEF("startbutton_1");
Transform89->setTranslation(new float[3]{-0.0407702,-0.0486709,-0.977617});
CTouchSensor* TouchSensor90 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor90->setDEF("touchSensorTrigger");
Transform89->addChildren(*TouchSensor90);

CTransform* Transform91 = (CTransform *)(m_pScene.createNode("Transform"));
Transform91->setDEF("startbutton");
Transform91->setRotation(new float[4]{1,0,0,1.5708});
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance93 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material94 = (CMaterial *)(m_pScene.createNode("Material"));
Material94->setAmbientIntensity(0);
Material94->setDiffuseColor(new float[3]{0,0,0});
Material94->setEmissiveColor(new float[3]{0,1,0.201812});
Material94->setTransparency(0.297872);
Appearance93->setMaterial(*Material94);

Shape92->setAppearance(*Appearance93);

CIndexedFaceSet* IndexedFaceSet95 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet95->setCreaseAngle(0.5);
IndexedFaceSet95->setCoordIndex(new int[5]{3,0,1,2,-1});
CCoordinate* Coordinate96 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate96->setPoint(new float[12]{-0.594726,0.00512644,-0.355597,-0.435466,0.00512644,-0.355597,-0.435466,0.00512644,-0.411085,-0.594726,0.00512644,-0.411085});
IndexedFaceSet95->setCoord(*Coordinate96);

Shape92->setGeometry(IndexedFaceSet95);

Transform91->addChildren(*Shape92);

Transform89->addChildren(*Transform91);

Transform58->addChildren(*Transform89);

Transform57->addChildren(*Transform58);

CTransform* Transform97 = (CTransform *)(m_pScene.createNode("Transform"));
Transform97->setDEF("pointCounter");
Transform97->setTranslation(new float[3]{0.607266,0.33078,-1.00043});
Transform97->setScale(new float[3]{0.0033,0.0033,0.0033});
CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance99 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material100 = (CMaterial *)(m_pScene.createNode("Material"));
Material100->setAmbientIntensity(0);
Material100->setDiffuseColor(new float[3]{0,0,0});
Material100->setEmissiveColor(new float[3]{1,1,1});
Material100->setShininess(0);
Appearance99->setMaterial(*Material100);

Shape98->setAppearance(*Appearance99);

CText* Text101 = (CText *)(m_pScene.createNode("Text"));
Text101->setDEF("counter_1");
Text101->setString(new CString[1]{"0"}, 1);
CFontStyle* FontStyle102 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle102->setFamily(new CString[1]{"SANS"}, 1);
FontStyle102->setSize(24);
FontStyle102->setJustify(new CString[1]{"END"}, 1);
Text101->setFontStyle(*FontStyle102);

Shape98->setGeometry(Text101);

Transform97->addChildren(*Shape98);

Transform57->addChildren(*Transform97);

CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setDEF("SFX");
CGroup* Group104 = (CGroup *)(m_pScene.createNode("Group"));
Group104->setDEF("sfx");
CSound* Sound105 = (CSound *)(m_pScene.createNode("Sound"));
Sound105->setDEF("bonusSnd");
Sound105->setIntensity(0.6);
Sound105->setSpatialize(False);
Sound105->setMinBack(100);
Sound105->setMinFront(100);
Sound105->setMaxBack(1000);
Sound105->setMaxFront(1000);
CAudioClip* AudioClip106 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip106->setDEF("Sound1clip_1");
AudioClip106->setUrl(new CString[1]{"bonus.wav"}, 1);
AudioClip106->setPitch(1.7);
Sound105->setSource(*AudioClip106);

Group104->addChildren(*Sound105);

CSound* Sound107 = (CSound *)(m_pScene.createNode("Sound"));
Sound107->setDEF("alertSnd");
Sound107->setSpatialize(False);
Sound107->setMinBack(100);
Sound107->setMinFront(100);
Sound107->setMaxBack(1000);
Sound107->setMaxFront(1000);
CAudioClip* AudioClip108 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip108->setDEF("Sound1clip_2");
AudioClip108->setUrl(new CString[1]{"alert.wav"}, 1);
Sound107->setSource(*AudioClip108);

Group104->addChildren(*Sound107);

CSound* Sound109 = (CSound *)(m_pScene.createNode("Sound"));
Sound109->setDEF("keySnd");
Sound109->setSpatialize(False);
Sound109->setMinBack(100);
Sound109->setMinFront(100);
Sound109->setMaxBack(1000);
Sound109->setMaxFront(1000);
CAudioClip* AudioClip110 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip110->setDEF("Sound1clip_3");
AudioClip110->setUrl(new CString[1]{"key.wav"}, 1);
AudioClip110->setPitch(0.6);
Sound109->setSource(*AudioClip110);

Group104->addChildren(*Sound109);

Transform103->addChildren(*Group104);

Transform57->addChildren(*Transform103);

CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setDEF("keyCounter");
CTransform* Transform112 = (CTransform *)(m_pScene.createNode("Transform"));
Transform112->setDEF("keyCounter_A_rcadia");
Transform112->setTranslation(new float[3]{-0.53226,0.393088,-1.03136});
Transform112->setRotation(new float[4]{1.66304e-9,-0.707106,0.707107,3.14159});
Transform112->setScale(new float[3]{1.42021,1.42012,1.42021});
Transform112->setScaleOrientation(new float[4]{-0.957427,0.260016,0.125399,0.00548095});
CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance114 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material115 = (CMaterial *)(m_pScene.createNode("Material"));
Material115->setDEF("_4");
Material115->setAmbientIntensity(0.16);
Material115->setDiffuseColor(new float[3]{1,1,1});
Material115->setTransparency(0.0212766);
Appearance114->setMaterial(*Material115);

CImageTexture* ImageTexture116 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture116->setDEF("_5");
ImageTexture116->setUrl(new CString[1]{"keyfb.png"}, 1);
Appearance114->setTexture(*ImageTexture116);

Shape113->setAppearance(*Appearance114);

CIndexedFaceSet* IndexedFaceSet117 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet117->setSolid(False);
IndexedFaceSet117->setCreaseAngle(0.5);
IndexedFaceSet117->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet117->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate118 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate118->setPoint(new float[8]{0.171583,0.042109,0.171583,0.898668,-0.00801791,0.0470592,-0.00801791,0.903619});
IndexedFaceSet117->setTexCoord(*TextureCoordinate118);

CCoordinate* Coordinate119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate119->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet117->setCoord(*Coordinate119);

Shape113->setGeometry(IndexedFaceSet117);

Transform112->addChildren(*Shape113);

Transform111->addChildren(*Transform112);

CTransform* Transform120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform120->setDEF("keyCounter_a_R_cadia");
Transform120->setTranslation(new float[3]{-0.454609,0.393088,-1.03136});
Transform120->setRotation(new float[4]{1.08339e-8,-0.707106,0.707107,3.14159});
Transform120->setScale(new float[3]{1.42021,1.42012,1.42021});
Transform120->setScaleOrientation(new float[4]{-0.000158611,1,0.00051583,1.5708});
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance122 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material123 = (CMaterial *)(m_pScene.createNode("Material"));
Material123->setDEF("_6");
Material123->setAmbientIntensity(0.16);
Material123->setDiffuseColor(new float[3]{1,1,1});
Appearance122->setMaterial(*Material123);

CImageTexture* ImageTexture124 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture124->setUSE("_5");
Appearance122->setTexture(*ImageTexture124);

Shape121->setAppearance(*Appearance122);

CIndexedFaceSet* IndexedFaceSet125 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet125->setSolid(False);
IndexedFaceSet125->setCreaseAngle(0.5);
IndexedFaceSet125->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet125->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate126 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate126->setPoint(new float[8]{0.301878,0.0293025,0.304799,0.894851,0.142029,0.0231387,0.142955,0.888687});
IndexedFaceSet125->setTexCoord(*TextureCoordinate126);

CCoordinate* Coordinate127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate127->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet125->setCoord(*Coordinate127);

Shape121->setGeometry(IndexedFaceSet125);

Transform120->addChildren(*Shape121);

Transform111->addChildren(*Transform120);

CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setDEF("keyCounter_ar_C_adia");
Transform128->setTranslation(new float[3]{-0.376332,0.393387,-1.03136});
Transform128->setRotation(new float[4]{0.00000134991,0.707107,-0.707106,3.14159});
Transform128->setScale(new float[3]{1.42021,1.42012,1.4202});
Transform128->setScaleOrientation(new float[4]{-1,-0.0000411106,0.0000033629,0.000690534});
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance130 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material131 = (CMaterial *)(m_pScene.createNode("Material"));
Material131->setDEF("_7");
Material131->setAmbientIntensity(0.16);
Material131->setDiffuseColor(new float[3]{1,1,1});
Appearance130->setMaterial(*Material131);

CImageTexture* ImageTexture132 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture132->setUSE("_5");
Appearance130->setTexture(*ImageTexture132);

Shape129->setAppearance(*Appearance130);

CIndexedFaceSet* IndexedFaceSet133 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet133->setSolid(False);
IndexedFaceSet133->setCreaseAngle(0.5);
IndexedFaceSet133->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet133->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate134 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate134->setPoint(new float[8]{0.441169,0.0152003,0.441169,0.863196,0.27657,0.0191076,0.27657,0.867104});
IndexedFaceSet133->setTexCoord(*TextureCoordinate134);

CCoordinate* Coordinate135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate135->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet133->setCoord(*Coordinate135);

Shape129->setGeometry(IndexedFaceSet133);

Transform128->addChildren(*Shape129);

Transform111->addChildren(*Transform128);

CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform136->setDEF("keyCounter_arc_A_dia");
Transform136->setTranslation(new float[3]{-0.298699,0.393486,-1.03165});
Transform136->setRotation(new float[4]{0.00142728,0.707107,-0.707105,3.13874});
Transform136->setScale(new float[3]{1.42021,1.42012,1.42021});
Transform136->setScaleOrientation(new float[4]{0.999899,0.0137961,0.00333162,0.00644087});
CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance138 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material139 = (CMaterial *)(m_pScene.createNode("Material"));
Material139->setDEF("_8");
Material139->setAmbientIntensity(0.16);
Material139->setDiffuseColor(new float[3]{1,1,1});
Material139->setTransparency(0.9);
Appearance138->setMaterial(*Material139);

CImageTexture* ImageTexture140 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture140->setDEF("_9");
ImageTexture140->setUrl(new CString[1]{"key-a.png"}, 1);
Appearance138->setTexture(*ImageTexture140);

Shape137->setAppearance(*Appearance138);

CIndexedFaceSet* IndexedFaceSet141 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet141->setSolid(False);
IndexedFaceSet141->setCreaseAngle(0.5);
IndexedFaceSet141->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet141->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate142 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate142->setPoint(new float[8]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941});
IndexedFaceSet141->setTexCoord(*TextureCoordinate142);

CCoordinate* Coordinate143 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate143->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet141->setCoord(*Coordinate143);

Shape137->setGeometry(IndexedFaceSet141);

Transform136->addChildren(*Shape137);

Transform111->addChildren(*Transform136);

CTransform* Transform144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform144->setDEF("keyCounter_arca_D_ia");
Transform144->setTranslation(new float[3]{-0.221706,0.393936,-1.03237});
Transform144->setRotation(new float[4]{0.001424,-0.707105,0.707107,3.13873});
Transform144->setScale(new float[3]{1.42021,1.42012,1.42021});
Transform144->setScaleOrientation(new float[4]{0.99638,-0.0848779,-0.00476121,0.00154408});
CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance146 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material147 = (CMaterial *)(m_pScene.createNode("Material"));
Material147->setDEF("_10");
Material147->setAmbientIntensity(0.16);
Material147->setDiffuseColor(new float[3]{1,1,1});
Material147->setTransparency(0.9);
Appearance146->setMaterial(*Material147);

CImageTexture* ImageTexture148 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture148->setUrl(new CString[1]{"key-d.png"}, 1);
Appearance146->setTexture(*ImageTexture148);

Shape145->setAppearance(*Appearance146);

CIndexedFaceSet* IndexedFaceSet149 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet149->setSolid(False);
IndexedFaceSet149->setCreaseAngle(0.5);
IndexedFaceSet149->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet149->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate150 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate150->setPoint(new float[8]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941});
IndexedFaceSet149->setTexCoord(*TextureCoordinate150);

CCoordinate* Coordinate151 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate151->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet149->setCoord(*Coordinate151);

Shape145->setGeometry(IndexedFaceSet149);

Transform144->addChildren(*Shape145);

Transform111->addChildren(*Transform144);

CTransform* Transform152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform152->setDEF("keyCounter_arcad_I_a");
Transform152->setTranslation(new float[3]{-0.1437,0.393633,-1.03324});
Transform152->setRotation(new float[4]{0.00142818,-0.707105,0.707107,3.13873});
Transform152->setScale(new float[3]{1.42021,1.42012,1.42021});
Transform152->setScaleOrientation(new float[4]{0.996284,-0.0861141,0.00128255,0.00248976});
CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance154 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material155 = (CMaterial *)(m_pScene.createNode("Material"));
Material155->setDEF("_11");
Material155->setAmbientIntensity(0.16);
Material155->setDiffuseColor(new float[3]{1,1,1});
Material155->setTransparency(0.9);
Appearance154->setMaterial(*Material155);

CImageTexture* ImageTexture156 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture156->setUrl(new CString[1]{"key-i.png"}, 1);
Appearance154->setTexture(*ImageTexture156);

Shape153->setAppearance(*Appearance154);

CIndexedFaceSet* IndexedFaceSet157 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet157->setSolid(False);
IndexedFaceSet157->setCreaseAngle(0.5);
IndexedFaceSet157->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet157->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate158 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate158->setPoint(new float[8]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941});
IndexedFaceSet157->setTexCoord(*TextureCoordinate158);

CCoordinate* Coordinate159 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate159->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet157->setCoord(*Coordinate159);

Shape153->setGeometry(IndexedFaceSet157);

Transform152->addChildren(*Shape153);

Transform111->addChildren(*Transform152);

CTransform* Transform160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform160->setDEF("keyCounter_arcadi_A");
Transform160->setTranslation(new float[3]{-0.0658975,0.393846,-1.03411});
Transform160->setRotation(new float[4]{0.00142454,-0.707104,0.707108,3.13874});
Transform160->setScale(new float[3]{1.42021,1.42012,1.42021});
Transform160->setScaleOrientation(new float[4]{0.997436,-0.0715694,-0.000133446,0.00402647});
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance162 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material163 = (CMaterial *)(m_pScene.createNode("Material"));
Material163->setDEF("_12");
Material163->setAmbientIntensity(0.16);
Material163->setDiffuseColor(new float[3]{1,1,1});
Material163->setTransparency(0.9);
Appearance162->setMaterial(*Material163);

CImageTexture* ImageTexture164 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture164->setUSE("_9");
Appearance162->setTexture(*ImageTexture164);

Shape161->setAppearance(*Appearance162);

CIndexedFaceSet* IndexedFaceSet165 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet165->setSolid(False);
IndexedFaceSet165->setCreaseAngle(0.5);
IndexedFaceSet165->setTexCoordIndex(new int[5]{0,1,3,2,-1});
IndexedFaceSet165->setCoordIndex(new int[5]{0,3,2,1,-1});
CTextureCoordinate* TextureCoordinate166 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate166->setPoint(new float[8]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941});
IndexedFaceSet165->setTexCoord(*TextureCoordinate166);

CCoordinate* Coordinate167 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate167->setPoint(new float[12]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451});
IndexedFaceSet165->setCoord(*Coordinate167);

Shape161->setGeometry(IndexedFaceSet165);

Transform160->addChildren(*Shape161);

Transform111->addChildren(*Transform160);

Transform57->addChildren(*Transform111);

CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setDEF("crosshair");
Transform168->setTranslation(new float[3]{0.0413872,0.049063,-1.0342});
Transform168->setRotation(new float[4]{0,0,1,3.14159});
Transform168->setScale(new float[3]{0.5,0.5,0.4});
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance170 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material171 = (CMaterial *)(m_pScene.createNode("Material"));
Material171->setUSE("_2");
Appearance170->setMaterial(*Material171);

Shape169->setAppearance(*Appearance170);

CIndexedFaceSet* IndexedFaceSet172 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet172->setSolid(False);
IndexedFaceSet172->setCcw(False);
IndexedFaceSet172->setCreaseAngle(0.5);
IndexedFaceSet172->setCoordIndex(new int[100]{0,1,2,3,-1,4,0,3,5,-1,6,7,8,9,-1,10,6,9,11,-1,12,13,14,15,-1,13,7,6,14,-1,3,2,16,17,-1,16,12,15,17,-1,15,14,18,19,-1,14,6,10,18,-1,5,3,17,20,-1,17,15,19,20,-1,21,22,19,18,-1,23,24,22,21,-1,22,25,20,19,-1,24,26,25,22,-1,27,28,29,30,-1,30,29,13,12,-1,31,27,30,32,-1,32,30,12,16,-1});
CCoordinate* Coordinate173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate173->setPoint(new float[99]{0,0.0892448,0.0892453,-0.0055778,0.0892448,0.0892453,-0.0055778,0.0111556,0.0892453,0,0.0111556,0.0892453,0.0055778,0.0892448,0.0892453,0.0055778,0.0111556,0.0892453,0,-0.0111556,0.0892453,-0.0055778,-0.0111556,0.0892453,-0.0055778,-0.0892448,0.0892453,0,-0.0892448,0.0892453,0.0055778,-0.0111556,0.0892453,0.0055778,-0.0892448,0.0892453,-0.0055778,0,0.0892453,-0.0055778,-0.0055778,0.0892453,0,-0.0055778,0.0892453,0,0,0.0892453,-0.0055778,0.0055778,0.0892453,0,0.0055778,0.0892453,0.0055778,-0.0055778,0.0892453,0.0055778,0,0.0892453,0.0055778,0.0055778,0.0892453,0.0111556,-0.0055778,0.0892453,0.0111556,0,0.0892453,0.0892449,-0.0055778,0.0892453,0.0892449,0,0.0892453,0.0111556,0.0055778,0.0892453,0.0892449,0.0055778,0.0892453,-0.0892449,0,0.0892453,-0.0892449,-0.0055778,0.0892453,-0.0111556,-0.0055778,0.0892453,-0.0111556,0,0.0892453,-0.0892449,0.0055778,0.0892453,-0.0111556,0.0055778,0.0892453});
IndexedFaceSet172->setCoord(*Coordinate173);

Shape169->setGeometry(IndexedFaceSet172);

Transform168->addChildren(*Shape169);

Transform57->addChildren(*Transform168);

Transform54->addChildren(*Transform57);

Group53->addChildren(*Transform54);

Transform52->addChildren(*Group53);

Transform29->addChildren(*Transform52);

Transform10->addChildren(*Transform29);

group->addChildren(*Transform10);

CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setDEF("LANDSCAPE");
CTransform* Transform175 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform177 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setDEF("himmel_1");
Transform178->setTranslation(new float[3]{0,60,-1250});
CTransform* Transform179 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape182 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance183 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture184 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture184->setDEF("_13");
ImageTexture184->setUrl(new CString[1]{"sky.png"}, 1);
Appearance183->setTexture(*ImageTexture184);

Shape182->setAppearance(*Appearance183);

CIndexedFaceSet* IndexedFaceSet185 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet185->setSolid(False);
IndexedFaceSet185->setCreaseAngle(0.5);
IndexedFaceSet185->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate186 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate186->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet185->setTexCoord(*TextureCoordinate186);

CCoordinate* Coordinate187 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate187->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet185->setCoord(*Coordinate187);

Shape182->setGeometry(IndexedFaceSet185);

Transform181->addChildren(*Shape182);

Transform180->addChildren(*Transform181);

CTransform* Transform188 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance190 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture191 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture191->setUSE("_13");
Appearance190->setTexture(*ImageTexture191);

Shape189->setAppearance(*Appearance190);

CIndexedFaceSet* IndexedFaceSet192 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet192->setSolid(False);
IndexedFaceSet192->setCreaseAngle(0.5);
IndexedFaceSet192->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate193 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate193->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet192->setTexCoord(*TextureCoordinate193);

CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet192->setCoord(*Coordinate194);

Shape189->setGeometry(IndexedFaceSet192);

Transform188->addChildren(*Shape189);

Transform180->addChildren(*Transform188);

Transform179->addChildren(*Transform180);

CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform196 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance198 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture199 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture199->setUSE("_13");
Appearance198->setTexture(*ImageTexture199);

Shape197->setAppearance(*Appearance198);

CIndexedFaceSet* IndexedFaceSet200 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet200->setSolid(False);
IndexedFaceSet200->setCreaseAngle(0.5);
IndexedFaceSet200->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate201 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate201->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet200->setTexCoord(*TextureCoordinate201);

CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet200->setCoord(*Coordinate202);

Shape197->setGeometry(IndexedFaceSet200);

Transform196->addChildren(*Shape197);

Transform195->addChildren(*Transform196);

CTransform* Transform203 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance205 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture206 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture206->setUSE("_13");
Appearance205->setTexture(*ImageTexture206);

Shape204->setAppearance(*Appearance205);

CIndexedFaceSet* IndexedFaceSet207 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet207->setSolid(False);
IndexedFaceSet207->setCreaseAngle(0.5);
IndexedFaceSet207->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet207->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate208 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate208->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet207->setTexCoord(*TextureCoordinate208);

CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet207->setCoord(*Coordinate209);

Shape204->setGeometry(IndexedFaceSet207);

Transform203->addChildren(*Shape204);

Transform195->addChildren(*Transform203);

Transform179->addChildren(*Transform195);

Transform178->addChildren(*Transform179);

Transform177->addChildren(*Transform178);

CTransform* Transform210 = (CTransform *)(m_pScene.createNode("Transform"));
Transform210->setDEF("boden1");
Transform210->setTranslation(new float[3]{0,-40,-1250});
CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance212 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture213 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture213->setDEF("_14");
PixelTexture213->setImage(new int[4099]{64,64,1,119,130,91,141,174,121,139,137,138,113,133,123,132,154,163,167,174,158,188,191,166,97,124,144,208,196,98,72,63,93,105,145,112,124,162,121,90,80,76,119,137,142,158,170,174,125,75,123,104,97,113,93,76,76,119,137,142,158,173,181,186,204,118,105,106,126,115,117,185,133,139,147,170,142,168,175,163,171,185,204,180,176,179,170,153,109,79,151,199,194,170,137,75,149,147,165,169,162,144,113,100,79,67,80,108,147,159,143,131,128,108,102,97,95,128,111,72,63,80,108,147,159,148,128,133,134,116,143,110,111,92,92,171,163,163,171,193,171,190,204,184,190,190,220,197,184,162,113,133,165,141,160,190,190,153,135,86,128,207,202,193,134,120,99,101,87,79,100,99,109,91,79,107,141,121,90,87,93,121,105,89,79,100,99,109,91,76,76,63,104,149,144,116,90,102,94,133,140,107,174,190,163,157,209,171,178,172,186,178,190,175,169,159,185,171,152,155,124,120,120,110,94,139,195,165,115,130,108,90,87,73,98,99,87,80,80,92,97,90,88,90,88,93,103,91,73,98,99,87,80,80,91,83,76,88,80,139,89,118,82,76,111,80,94,172,120,47,135,199,204,179,188,188,204,162,179,188,198,194,145,122,106,129,118,135,154,84,105,143,104,122,107,96,89,73,68,91,89,128,132,122,105,130,81,75,96,76,103,111,73,68,120,99,128,132,122,105,118,109,113,153,111,125,105,92,119,76,23,24,105,88,38,191,210,173,178,204,173,103,75,154,240,220,170,181,176,159,146,161,171,127,117,122,94,110,103,90,70,64,67,92,82,137,135,126,103,157,117,70,121,117,105,105,75,68,184,113,137,135,126,103,132,130,105,123,120,143,137,126,172,135,76,13,66,132,57,86,130,121,75,136,123,142,105,63,189,234,210,197,151,145,149,166,156,143,152,148,100,132,115,88,68,52,71,82,67,76,113,106,91,112,100,71,135,139,103,68,65,76,82,67,76,113,106,91,127,137,125,104,116,122,140,145,186,179,154,86,42,132,120,34,41,137,42,16,88,156,187,85,71,154,180,186,139,132,152,129,118,153,161,153,101,115,116,101,77,37,40,83,86,73,118,130,125,82,59,77,91,155,142,100,63,53,83,86,73,118,130,125,115,140,110,112,139,145,158,144,203,191,164,136,75,36,113,92,36,95,97,30,103,184,178,102,41,15,38,104,138,146,164,169,165,162,144,146,110,72,82,113,77,38,47,74,91,92,126,121,134,105,109,90,92,151,164,125,93,67,74,91,92,126,121,134,137,124,118,100,108,157,176,171,199,192,184,178,153,112,89,124,68,94,181,117,109,105,148,181,116,69,36,56,81,155,186,191,162,129,142,149,129,121,116,93,98,60,57,57,73,72,109,115,124,135,149,105,91,99,123,118,89,67,57,73,72,126,126,134,143,123,133,105,81,92,128,164,232,200,175,179,178,215,135,87,65,88,105,125,129,95,92,136,142,119,91,80,56,121,186,169,163,150,169,154,142,136,123,73,80,87,67,59,67,32,76,106,112,132,109,102,94,91,51,70,80,66,59,67,32,93,133,139,123,101,126,122,108,81,100,143,211,220,200,199,190,203,180,161,99,105,152,163,136,143,149,133,154,175,157,122,83,113,161,155,174,174,203,151,125,146,146,83,71,107,72,80,82,53,73,146,135,121,75,76,100,84,69,51,54,66,80,82,49,32,91,129,118,87,97,99,112,79,85,130,172,190,175,214,180,203,169,145,116,83,181,208,197,180,174,174,175,195,171,134,108,153,185,191,163,163,164,147,111,133,158,113,85,129,109,103,84,97,126,159,143,132,152,117,103,95,93,86,87,95,101,81,63,11,23,70,112,98,82,119,116,81,98,115,100,131,101,150,150,140,116,125,115,109,100,182,203,208,202,201,185,126,132,134,123,151,196,192,166,174,180,159,119,122,138,139,124,145,123,115,81,103,126,134,132,141,135,103,87,103,143,121,110,115,114,80,68,21,17,30,96,104,107,115,135,97,82,96,100,171,152,68,62,76,110,129,116,155,121,81,107,108,175,191,164,145,142,142,126,135,177,156,158,174,194,145,141,154,164,135,133,117,145,129,102,105,139,146,154,157,83,97,113,129,166,144,112,145,129,99,74,49,33,27,79,110,127,69,78,100,69,98,109,154,159,137,136,153,165,157,144,175,151,112,100,74,79,130,116,112,116,99,137,149,193,194,157,143,151,141,167,166,151,140,139,149,175,144,132,118,124,135,160,174,117,90,119,140,151,155,149,175,144,123,88,82,49,30,48,108,126,102,83,74,69,119,113,142,162,156,175,169,146,147,154,167,141,144,161,176,94,94,109,113,126,106,126,145,190,164,125,150,147,168,189,164,119,132,166,178,180,152,162,177,128,139,162,189,113,86,106,127,152,174,178,180,152,161,177,105,43,17,7,56,122,129,136,104,66,77,109,160,195,176,172,152,132,144,143,117,139,146,155,169,111,118,108,126,127,158,115,131,159,145,149,182,165,151,154,126,145,122,172,197,182,172,229,222,119,146,162,170,128,117,117,130,150,175,197,182,172,229,223,112,76,46,10,18,102,120,92,94,73,68,100,108,197,190,170,130,130,164,165,165,166,146,152,161,129,104,99,137,148,161,121,155,185,185,192,191,165,155,147,76,76,125,157,203,177,172,195,141,99,119,138,94,77,109,129,119,145,164,203,177,172,195,141,106,80,60,36,27,59,108,95,75,75,102,100,63,119,175,148,115,139,198,191,176,142,124,152,166,145,127,126,116,149,159,145,177,180,158,164,188,172,170,152,140,104,132,162,184,147,154,140,111,100,84,105,70,94,108,145,119,137,162,184,147,154,140,111,124,100,76,37,19,39,79,124,97,75,95,98,80,73,171,137,114,112,183,178,159,155,114,141,146,158,130,134,120,142,177,181,165,110,70,132,168,165,159,144,105,135,157,132,113,130,125,83,61,71,80,86,86,100,108,135,109,127,129,113,130,125,83,61,80,100,75,46,34,59,45,94,115,99,62,82,75,71,170,161,127,109,147,129,162,148,172,193,180,178,133,130,129,174,198,189,177,163,65,132,160,148,155,161,119,102,132,104,67,62,71,90,85,93,99,80,110,111,117,123,105,89,97,67,62,71,90,85,93,100,72,59,23,20,57,59,94,117,72,83,83,86,142,151,118,84,108,165,142,79,94,165,189,148,115,108,155,153,191,108,86,139,105,62,164,178,179,175,175,126,128,105,66,50,72,107,126,133,126,90,102,121,138,121,104,90,89,66,50,72,107,126,133,133,87,73,63,7,44,70,64,122,89,73,102,105,111,162,129,74,59,84,74,108,102,109,128,133,105,95,153,156,188,157,104,75,132,73,106,181,173,169,162,129,128,103,109,125,135,150,156,159,149,123,110,138,149,132,111,115,100,109,125,135,150,156,160,152,120,90,73,38,27,79,60,50,54,59,71,79,105,143,109,109,95,96,113,143,163,131,120,126,110,107,163,156,150,155,168,123,79,108,69,129,158,162,154,145,156,138,154,152,158,158,153,151,133,142,139,148,159,152,127,135,129,154,152,158,158,154,153,129,142,143,138,92,56,60,88,59,46,60,66,107,122,110,121,111,120,120,147,154,176,152,149,120,120,129,149,112,122,188,188,178,127,101,65,113,173,111,153,157,156,153,156,158,161,136,95,94,104,123,129,122,126,111,110,104,108,154,158,161,136,95,94,103,116,115,107,91,75,54,59,60,49,58,83,113,124,104,110,124,129,130,154,154,155,157,169,133,149,149,163,156,168,188,188,204,178,160,157,159,183,127,87,133,122,139,142,149,132,124,105,66,64,88,105,94,60,64,117,116,90,123,149,132,124,105,66,65,89,113,120,103,87,76,59,42,69,56,73,120,112,121,150,146,128,130,159,154,159,181,191,149,156,146,188,174,176,181,200,199,167,167,181,191,180,155,83,108,147,142,91,100,123,134,137,124,97,102,91,64,52,60,100,139,110,80,100,123,134,137,124,107,136,134,136,113,113,88,83,69,89,80,63,121,122,127,146,133,90,43,104,172,174,186,208,179,162,169,197,195,185,190,180,176,164,180,195,191,181,142,116,107,158,142,88,51,81,102,110,124,112,86,92,96,90,67,53,120,118,92,51,81,102,110,124,119,97,73,71,97,102,79,73,69,86,102,83,90,93,72,102,123,148,57,52,146,145,132,114,146,185,186,176,154,138,152,152,172,164,170,191,210,187,146,132,88,129,129,99,83,56,42,52,83,102,92,99,115,118,104,53,59,73,95,90,56,42,42,80,109,100,72,76,51,70,84,71,69,80,82,96,70,70,79,112,115,124,100,7,49,99,112,93,88,173,165,159,136,125,151,189,186,179,180,201,195,178,167,181,154,117,96,84,109,109,78,70,63,72,107,113,119,97,104,122,83,59,75,105,105,62,49,66,73,99,89,100,77,101,102,80,75,73,93,95,78,81,99,143,152,123,116,37,56,129,121,118,89,99,135,169,172,173,170,176,179,178,204,216,188,166,156,144,124,129,95,86,108,103,115,108,73,64,100,109,123,122,103,127,122,74,59,72,101,108,82,83,73,79,92,103,110,99,89,86,80,80,92,83,92,101,107,162,162,139,112,108,151,162,141,135,132,126,127,152,164,146,136,154,185,164,186,194,192,134,140,94,86,128,103,92,97,80,68,83,102,111,100,123,135,127,115,126,138,120,59,59,75,99,102,99,86,86,105,111,113,111,76,73,83,100,100,86,89,121,103,119,135,130,97,80,139,159,162,145,153,145,140,150,155,122,132,158,181,168,180,188,173,162,102,109,103,124,116,108,89,80,73,76,94,137,125,136,142,136,113,120,139,149,106,70,75,92,115,112,86,97,100,91,95,111,92,76,86,100,127,113,102,127,103,89,105,143,109,70,119,139,145,138,148,136,139,194,174,142,125,153,169,172,163,167,160,167,146,102,79,118,142,117,79,60,79,83,73,127,125,123,136,121,103,119,118,135,143,110,96,108,133,125,112,93,75,72,74,82,83,109,127,105,115,127,108,131,122,95,94,122,155,79,77,115,141,145,142,128,146,187,116,93,116,168,164,169,155,168,168,168,175,151,105,128,157,127,86,55,65,77,80,117,121,104,102,83,89,124,89,100,117,115,124,107,109,125,127,112,86,84,96,88,103,113,127,105,94,118,115,122,137,94,124,119,164,109,40,82,124,157,141,150,178,174,108,113,134,153,109,133,175,180,173,154,147,141,140,139,176,127,112,70,70,77,84,108,112,83,108,93,93,118,121,109,130,103,85,97,97,111,135,116,81,88,96,122,113,101,135,118,99,119,122,119,130,98,128,168,140,144,79,98,141,147,159,198,192,176,133,133,156,169,138,161,182,175,164,134,100,133,186,148,137,106,113,89,57,67,59,91,110,95,113,111,115,118,144,135,115,89,66,93,122,82,103,109,103,121,122,129,144,109,115,102,99,122,135,123,111,109,89,148,132,135,103,78,141,191,153,188,175,156,160,142,155,170,166,169,184,172,167,153,127,123,183,187,141,116,84,74,60,63,62,82,113,107,107,118,139,142,137,169,124,62,62,82,105,63,92,112,129,101,92,105,135,112,101,111,108,118,135,116,122,132,93,52,97,148,145,38,83,223,229,188,142,168,159,127,136,147,169,162,181,184,162,139,126,107,141,168,163,167,86,76,84,103,111,108,116,119,108,117,134,131,148,168,143,103,67,72,92,77,95,121,158,89,101,47,79,105,99,124,112,134,151,121,125,148,132,76,97,173,160,95,68,168,125,115,82,114,143,134,108,156,160,156,183,191,172,159,139,100,132,147,154,156,124,116,151,145,107,108,121,142,147,116,138,139,175,162,140,156,130,87,119,117,92,105,148,92,94,73,97,117,112,148,122,103,146,128,107,129,152,109,88,159,175,163,123,149,65,71,157,161,143,134,107,163,172,151,178,178,173,174,148,102,167,121,110,137,127,100,134,130,125,95,129,123,116,123,139,156,201,169,155,156,150,150,138,109,99,114,134,68,95,88,87,125,119,137,129,93,113,116,108,105,139,105,70,117,182,173,153,150,152,141,148,185,152,132,134,158,191,173,184,171,158,167,147,116,126,110,108,118,144,113,121,110,152,105,125,136,139,154,148,157,176,170,159,159,146,159,118,103,125,140,139,87,112,82,84,141,91,130,140,110,92,113,108,99,111,134,111,85,153,175,196,225,200,181,176,196,167,161,161,184,200,190,191,174,165,186,146,121,91,119,142,147,127,119,101,116,131,123,154,156,155,153,126,148,186,174,162,155,148,136,114,120,119,129,128,123,129,106,75,154,131,121,99,104,122,137,117,108,107,144,116,90,93,158,146,181,201,194,197,183,161,173,170,194,206,194,169,155,148,160,180,172,162,153,125,136,130,123,95,101,105,124,148,155,162,143,119,137,210,194,163,163,162,125,118,103,92,98,105,144,130,101,92,153,181,104,99,108,112,151,105,135,114,128,128,106,54,156,174,136,175,218,193,146,159,184,156,178,197,197,145,133,105,122,185,185,178,159,128,134,124,117,102,103,115,141,132,151,156,122,115,146,209,188,145,146,143,103,90,57,63,83,97,118,108,86,79,136,172,156,137,111,137,162,122,125,130,109,143,143,63,146,183,173,150,213,203,184,171,179,153,171,185,170,169,135,116,125,155,185,175,174,152,106,97,91,91,119,111,118,141,147,140,118,89,142,173,117,83,86,91,86,73,125,123,111,114,122,116,97,69,84,137,150,110,91,122,149,155,132,148,129,151,162,68,121,187,175,110,146,137,157,162,175,158,148,148,152,168,163,126,111,141,155,136,116,142,126,129,95,80,121,119,99,102,108,121,114,88,143,156,102,107,86,76,104,148,165,159,152,171,165,148,157,106,27,128,154,127,108,109,148,184,121,131,121,124,155,118,124,184,185,155,106,131,107,157,171,154,158,181,191,204,185,158,142,132,168,160,138,170,161,122,101,99,105,127,116,83,109,134,153,89,111,125,103,116,127,159,154,149,162,131,148,185,175,165,137,103,20,106,136,137,107,101,129,145,113,118,115,135,165,154,116,137,155,194,168,169,123,128,132,172,236,242,234,215,184,162,177,144,129,110,149,168,161,104,63,89,80,93,126,121,124,126,152,101,91,99,112,137,154,161,143,118,117,124,164,181,170,177,128,108,56,82,149,128,89,88,118,118,128,116,131,151,193,148,92,107,127,121,174,191,152,119,152,177,162,210,243,244,213,184,184,155,158,177,173,160,162,108,83,110,130,86,104,134,132,136,144,117,98,132,129,129,142,115,115,133,89,105,144,175,160,135,108,105,82,46,110,136,92,81,151,144,115,125,150,172,192,124,65,190,203,119,64,82,128,129,159,172,129,86,100,98,116,158,185,188,188,170,191,144,98,100,124,152,136,115,122,139,139,122,122,120,104,130,135,143,149,151,152,136,115,122,142,193,157,104,122,108,79,30,32,86,83,81,129,153,132,128,145,130,121,79,4,111,185,187,153,66,85,136,138,149,175,184,116,79,116,134,161,197,213,187,209,190,101,118,154,134,121,138,150,146,157,141,141,118,132,124,142,139,156,161,134,121,138,150,149,187,174,143,129,106,107,72,82,118,105,91,111,164,131,90,150,98,72,138,29,79,196,233,218,167,91,122,149,180,163,145,125,126,142,127,75,119,191,211,248,198,108,134,149,142,116,142,161,132,159,172,137,112,119,134,132,132,144,152,137,127,138,147,129,159,151,115,122,104,133,89,141,177,113,92,145,157,144,94,158,141,102,119,70,36,139,161,184,210,135,107,135,143,118,135,148,161,172,155,113,41,124,241,244,155,94,90,119,154,137,148,188,94,74,118,109,69,111,141,138,116,106,115,121,131,125,128,84,56,94,106,128,112,127,81,92,158,123,72,144,181,138,99,181,228,222,134,63,24,80,90,73,158,165,145,155,174,166,168,174,203,180,156,145,65,48,179,192,122,95,56,72,119,142,164,159,100,54,59,70,72,118,132,126,136,102,79,98,119,116,120,93,43,78,125,120,127,159,113,96,146,135,69,86,174,144,115,147,167,187,154,102,49,120,73,134,62,111,148,180,191,197,187,182,213,198,178,154,147,60,52,97,108,91,67,69,129,145,165,144,99,98,84,58,59,95,119,129,141,136,48,45,60,71,72,86,92,54,95,102,131,183,156,116,153,163,111,60,138,169,145,119,138,129,177,133,69,127,56,170,92,76,86,154,196,190,176,168,189,170,202,114,121,82,33,49,110,97,50,76,131,127,95,82,93,103,119,95,61,72,112,131,127,91,40,19,10,16,53,91,105,94,98,104,97,182,169,122,105,154,110,102,158,190,145,168,169,201,215,175,83,106,79,152,197,87,55,92,88,171,220,176,197,179,207,134,49,121,89,40,87,126,144,108,103,88,74,76,80,98,90,116,89,92,99,96,88,74,105,100,78,68,75,80,116,124,119,138,88,135,132,108,104,150,104,77,132,207,207,244,238,235,231,232,135,116,130,55,106,84,84,101,39,108,223,185,170,187,198,192,146,76,88,70,80,122,147,150,118,116,103,117,119,109,65,89,100,83,82,92,116,106,148,130,129,110,120,122,135,154,117,127,90,107,160,116,108,151,128,89,124,204,164,182,228,248,238,211,198,201,200,110,95,76,89,115,92,57,108,148,73,111,175,220,194,134,105,65,73,134,157,143,127,153,155,127,119,116,94,66,66,80,103,109,154,147,141,127,153,153,127,142,152,185,173,124,102,107,152,111,115,154,131,119,107,168,162,98,95,97,103,95,125,170,193,178,136,68,39,78,161,60,29,94,108,10,84,188,188,175,151,78,69,140,160,153,150,168,162,171,138,125,109,62,49,70,92,69,109,151,153,150,168,162,171,167,168,195,190,139,104,91,143,137,120,134,119,138,122,140,169,191,158,88,95,108,92,100,81,128,158,142,101,50,70,116,62,53,115,77,59,120,169,137,123,73,71,128,139,152,159,143,146,178,145,118,99,63,63,55,68,71,85,122,152,159,143,146,178,174,187,191,167,118,121,75,156,141,106,134,127,127,132,176,198,153,147,116,132,152,157,176,148,74,145,223,192,133,69,125,110,59,162,166,117,116,99,100,101,79,67,100,129,158,152,140,157,184,127,102,111,74,80,95,68,82,97,125,158,152,140,157,184,178,207,183,178});
Appearance212->setTexture(*PixelTexture213);

Shape211->setAppearance(*Appearance212);

CIndexedFaceSet* IndexedFaceSet214 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet214->setSolid(False);
IndexedFaceSet214->setCreaseAngle(0.5);
IndexedFaceSet214->setColorIndex(new int[16]{2,1,0,-1,0,3,0,-1,3,0,0,-1,0,2,0,-1});
IndexedFaceSet214->setTexCoordIndex(new int[16]{0,1,2,-1,3,4,5,-1,4,6,5,-1,6,0,2,-1});
IndexedFaceSet214->setCoordIndex(new int[16]{0,1,2,-1,3,4,2,-1,4,5,2,-1,5,0,2,-1});
CColor* Color215 = (CColor *)(m_pScene.createNode("Color"));
Color215->setColor(new float[12]{0.8,0.630835,0.476646,0.652899,0.8,0.382087,0.449581,0.8,0.375564,0.71123,0.410174,0.321707});
IndexedFaceSet214->setColor(*Color215);

CTextureCoordinate* TextureCoordinate216 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate216->setPoint(new float[14]{6,0,6,3,3,3,0,3,0,0,3,3,3,0});
IndexedFaceSet214->setTexCoord(*TextureCoordinate216);

CCoordinate* Coordinate217 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate217->setPoint(new float[18]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250});
IndexedFaceSet214->setCoord(*Coordinate217);

Shape211->setGeometry(IndexedFaceSet214);

Transform210->addChildren(*Shape211);

Transform177->addChildren(*Transform210);

Transform176->addChildren(*Transform177);

CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform219 = (CTransform *)(m_pScene.createNode("Transform"));
Transform219->setDEF("himmel_2");
Transform219->setTranslation(new float[3]{0,60,-1500});
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{0,-100,250});
CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform222 = (CTransform *)(m_pScene.createNode("Transform"));
Transform222->setTranslation(new float[3]{0,100,-250});
CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance224 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture225 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture225->setUSE("_13");
Appearance224->setTexture(*ImageTexture225);

Shape223->setAppearance(*Appearance224);

CIndexedFaceSet* IndexedFaceSet226 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet226->setSolid(False);
IndexedFaceSet226->setCreaseAngle(0.5);
IndexedFaceSet226->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate227 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate227->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet226->setTexCoord(*TextureCoordinate227);

CCoordinate* Coordinate228 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate228->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet226->setCoord(*Coordinate228);

Shape223->setGeometry(IndexedFaceSet226);

Transform222->addChildren(*Shape223);

Transform221->addChildren(*Transform222);

CTransform* Transform229 = (CTransform *)(m_pScene.createNode("Transform"));
Transform229->setTranslation(new float[3]{0,100,-250});
CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance231 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture232 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture232->setUSE("_13");
Appearance231->setTexture(*ImageTexture232);

Shape230->setAppearance(*Appearance231);

CIndexedFaceSet* IndexedFaceSet233 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet233->setSolid(False);
IndexedFaceSet233->setCreaseAngle(0.5);
IndexedFaceSet233->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate234 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate234->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet233->setTexCoord(*TextureCoordinate234);

CCoordinate* Coordinate235 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate235->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet233->setCoord(*Coordinate235);

Shape230->setGeometry(IndexedFaceSet233);

Transform229->addChildren(*Shape230);

Transform221->addChildren(*Transform229);

Transform220->addChildren(*Transform221);

CTransform* Transform236 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform237 = (CTransform *)(m_pScene.createNode("Transform"));
Transform237->setTranslation(new float[3]{0,100,-250});
CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance239 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture240 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture240->setUSE("_13");
Appearance239->setTexture(*ImageTexture240);

Shape238->setAppearance(*Appearance239);

CIndexedFaceSet* IndexedFaceSet241 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet241->setSolid(False);
IndexedFaceSet241->setCreaseAngle(0.5);
IndexedFaceSet241->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate242 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate242->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet241->setTexCoord(*TextureCoordinate242);

CCoordinate* Coordinate243 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate243->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet241->setCoord(*Coordinate243);

Shape238->setGeometry(IndexedFaceSet241);

Transform237->addChildren(*Shape238);

Transform236->addChildren(*Transform237);

CTransform* Transform244 = (CTransform *)(m_pScene.createNode("Transform"));
Transform244->setTranslation(new float[3]{0,100,-250});
CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance246 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture247 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture247->setUSE("_13");
Appearance246->setTexture(*ImageTexture247);

Shape245->setAppearance(*Appearance246);

CIndexedFaceSet* IndexedFaceSet248 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet248->setSolid(False);
IndexedFaceSet248->setCreaseAngle(0.5);
IndexedFaceSet248->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet248->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate249 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate249->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet248->setTexCoord(*TextureCoordinate249);

CCoordinate* Coordinate250 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate250->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet248->setCoord(*Coordinate250);

Shape245->setGeometry(IndexedFaceSet248);

Transform244->addChildren(*Shape245);

Transform236->addChildren(*Transform244);

Transform220->addChildren(*Transform236);

Transform219->addChildren(*Transform220);

Transform218->addChildren(*Transform219);

CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
Transform251->setDEF("boden2");
Transform251->setTranslation(new float[3]{0,-40,-1250});
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance253 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture254 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture254->setUSE("_14");
Appearance253->setTexture(*PixelTexture254);

Shape252->setAppearance(*Appearance253);

CIndexedFaceSet* IndexedFaceSet255 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet255->setSolid(False);
IndexedFaceSet255->setCreaseAngle(0.5);
IndexedFaceSet255->setColorIndex(new int[16]{0,1,2,-1,2,2,2,-1,2,0,2,-1,3,2,2,-1});
IndexedFaceSet255->setTexCoordIndex(new int[16]{0,1,2,-1,3,4,5,-1,4,0,2,-1,6,3,5,-1});
IndexedFaceSet255->setCoordIndex(new int[16]{0,1,2,-1,3,4,2,-1,4,0,2,-1,5,3,2,-1});
CColor* Color256 = (CColor *)(m_pScene.createNode("Color"));
Color256->setColor(new float[12]{0.652899,0.8,0.382087,0.8,0.545717,0.483674,0.8,0.630835,0.476646,0.395536,0.764706,0.168068});
IndexedFaceSet255->setColor(*Color256);

CTextureCoordinate* TextureCoordinate257 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate257->setPoint(new float[14]{6,0,6,3,3,3,0,0,3,0,3,3,0,3});
IndexedFaceSet255->setTexCoord(*TextureCoordinate257);

CCoordinate* Coordinate258 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate258->setPoint(new float[18]{150,0,0.468384,150,0,-249.532,0,0,-249.532,-150,0,0.468384,0,0,0.468384,-150,0,-249.532});
IndexedFaceSet255->setCoord(*Coordinate258);

Shape252->setGeometry(IndexedFaceSet255);

Transform251->addChildren(*Shape252);

Transform218->addChildren(*Transform251);

Transform176->addChildren(*Transform218);

Transform175->addChildren(*Transform176);

CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
Transform261->setDEF("himmel_3");
Transform261->setTranslation(new float[3]{0,60,-1750});
CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform263 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform264 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance266 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture267 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture267->setUSE("_13");
Appearance266->setTexture(*ImageTexture267);

Shape265->setAppearance(*Appearance266);

CIndexedFaceSet* IndexedFaceSet268 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet268->setSolid(False);
IndexedFaceSet268->setCreaseAngle(0.5);
IndexedFaceSet268->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate269 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate269->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet268->setTexCoord(*TextureCoordinate269);

CCoordinate* Coordinate270 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate270->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet268->setCoord(*Coordinate270);

Shape265->setGeometry(IndexedFaceSet268);

Transform264->addChildren(*Shape265);

Transform263->addChildren(*Transform264);

CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance273 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture274 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture274->setUSE("_13");
Appearance273->setTexture(*ImageTexture274);

Shape272->setAppearance(*Appearance273);

CIndexedFaceSet* IndexedFaceSet275 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet275->setSolid(False);
IndexedFaceSet275->setCreaseAngle(0.5);
IndexedFaceSet275->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate276 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate276->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet275->setTexCoord(*TextureCoordinate276);

CCoordinate* Coordinate277 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate277->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet275->setCoord(*Coordinate277);

Shape272->setGeometry(IndexedFaceSet275);

Transform271->addChildren(*Shape272);

Transform263->addChildren(*Transform271);

Transform262->addChildren(*Transform263);

CTransform* Transform278 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform279 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape280 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance281 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture282 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture282->setUSE("_13");
Appearance281->setTexture(*ImageTexture282);

Shape280->setAppearance(*Appearance281);

CIndexedFaceSet* IndexedFaceSet283 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet283->setSolid(False);
IndexedFaceSet283->setCreaseAngle(0.5);
IndexedFaceSet283->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate284 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate284->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet283->setTexCoord(*TextureCoordinate284);

CCoordinate* Coordinate285 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate285->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet283->setCoord(*Coordinate285);

Shape280->setGeometry(IndexedFaceSet283);

Transform279->addChildren(*Shape280);

Transform278->addChildren(*Transform279);

CTransform* Transform286 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance288 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture289 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture289->setUSE("_13");
Appearance288->setTexture(*ImageTexture289);

Shape287->setAppearance(*Appearance288);

CIndexedFaceSet* IndexedFaceSet290 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet290->setSolid(False);
IndexedFaceSet290->setCreaseAngle(0.5);
IndexedFaceSet290->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet290->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate291 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate291->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet290->setTexCoord(*TextureCoordinate291);

CCoordinate* Coordinate292 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate292->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet290->setCoord(*Coordinate292);

Shape287->setGeometry(IndexedFaceSet290);

Transform286->addChildren(*Shape287);

Transform278->addChildren(*Transform286);

Transform262->addChildren(*Transform278);

Transform261->addChildren(*Transform262);

Transform260->addChildren(*Transform261);

CTransform* Transform293 = (CTransform *)(m_pScene.createNode("Transform"));
Transform293->setTranslation(new float[3]{0,-40,-1500});
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance295 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture296 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture296->setUSE("_14");
Appearance295->setTexture(*PixelTexture296);

Shape294->setAppearance(*Appearance295);

CIndexedFaceSet* IndexedFaceSet297 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet297->setSolid(False);
IndexedFaceSet297->setCreaseAngle(0.5);
IndexedFaceSet297->setColorIndex(new int[16]{0,0,1,-1,3,1,1,-1,1,0,1,-1,2,3,1,-1});
IndexedFaceSet297->setTexCoordIndex(new int[16]{0,1,2,-1,3,4,5,-1,4,0,2,-1,6,3,5,-1});
IndexedFaceSet297->setCoordIndex(new int[16]{0,1,2,-1,3,4,2,-1,4,0,2,-1,5,3,2,-1});
CColor* Color298 = (CColor *)(m_pScene.createNode("Color"));
Color298->setColor(new float[12]{0.8,0.545717,0.483674,0.8,0.630835,0.476646,0.0959711,0.465241,0.0190278,0.395536,0.764706,0.168068});
IndexedFaceSet297->setColor(*Color298);

CTextureCoordinate* TextureCoordinate299 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate299->setPoint(new float[14]{6,0,6,3,3,3,0,0,3,0,3,3,0,3});
IndexedFaceSet297->setTexCoord(*TextureCoordinate299);

CCoordinate* Coordinate300 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate300->setPoint(new float[18]{150,0,0.468384,150,0,-249.532,0,0,-249.532,-150,0,0.468384,0,0,0.468384,-150,0,-249.532});
IndexedFaceSet297->setCoord(*Coordinate300);

Shape294->setGeometry(IndexedFaceSet297);

Transform293->addChildren(*Shape294);

Transform260->addChildren(*Transform293);

Transform259->addChildren(*Transform260);

CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform302 = (CTransform *)(m_pScene.createNode("Transform"));
Transform302->setDEF("himmel_4");
Transform302->setTranslation(new float[3]{0,60,-2000});
CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{0,-100,250});
CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform305 = (CTransform *)(m_pScene.createNode("Transform"));
Transform305->setDEF("h01");
Transform305->setTranslation(new float[3]{0,100,-250});
CShape* Shape306 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance307 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture308 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture308->setUSE("_13");
Appearance307->setTexture(*ImageTexture308);

Shape306->setAppearance(*Appearance307);

CIndexedFaceSet* IndexedFaceSet309 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet309->setSolid(False);
IndexedFaceSet309->setCreaseAngle(0.5);
IndexedFaceSet309->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate310 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate310->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet309->setTexCoord(*TextureCoordinate310);

CCoordinate* Coordinate311 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate311->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet309->setCoord(*Coordinate311);

Shape306->setGeometry(IndexedFaceSet309);

Transform305->addChildren(*Shape306);

Transform304->addChildren(*Transform305);

CTransform* Transform312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform312->setTranslation(new float[3]{0,100,-250});
CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance314 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture315 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture315->setUSE("_13");
Appearance314->setTexture(*ImageTexture315);

Shape313->setAppearance(*Appearance314);

CIndexedFaceSet* IndexedFaceSet316 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet316->setSolid(False);
IndexedFaceSet316->setCreaseAngle(0.5);
IndexedFaceSet316->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate317 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate317->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet316->setTexCoord(*TextureCoordinate317);

CCoordinate* Coordinate318 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate318->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet316->setCoord(*Coordinate318);

Shape313->setGeometry(IndexedFaceSet316);

Transform312->addChildren(*Shape313);

Transform304->addChildren(*Transform312);

Transform303->addChildren(*Transform304);

CTransform* Transform319 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform320->setTranslation(new float[3]{0,100,-250});
CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance322 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture323 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture323->setUSE("_13");
Appearance322->setTexture(*ImageTexture323);

Shape321->setAppearance(*Appearance322);

CIndexedFaceSet* IndexedFaceSet324 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet324->setSolid(False);
IndexedFaceSet324->setCreaseAngle(0.5);
IndexedFaceSet324->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate325 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate325->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet324->setTexCoord(*TextureCoordinate325);

CCoordinate* Coordinate326 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate326->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet324->setCoord(*Coordinate326);

Shape321->setGeometry(IndexedFaceSet324);

Transform320->addChildren(*Shape321);

Transform319->addChildren(*Transform320);

CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform327->setTranslation(new float[3]{0,100,-250});
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance329 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture330 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture330->setUSE("_13");
Appearance329->setTexture(*ImageTexture330);

Shape328->setAppearance(*Appearance329);

CIndexedFaceSet* IndexedFaceSet331 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet331->setSolid(False);
IndexedFaceSet331->setCreaseAngle(0.5);
IndexedFaceSet331->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet331->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate332 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate332->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet331->setTexCoord(*TextureCoordinate332);

CCoordinate* Coordinate333 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate333->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet331->setCoord(*Coordinate333);

Shape328->setGeometry(IndexedFaceSet331);

Transform327->addChildren(*Shape328);

Transform319->addChildren(*Transform327);

Transform303->addChildren(*Transform319);

Transform302->addChildren(*Transform303);

Transform301->addChildren(*Transform302);

CTransform* Transform334 = (CTransform *)(m_pScene.createNode("Transform"));
Transform334->setTranslation(new float[3]{0,-40,-1750});
CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance336 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture337 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture337->setUSE("_14");
Appearance336->setTexture(*PixelTexture337);

Shape335->setAppearance(*Appearance336);

CIndexedFaceSet* IndexedFaceSet338 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet338->setSolid(False);
IndexedFaceSet338->setCreaseAngle(0.5);
IndexedFaceSet338->setColorIndex(new int[16]{0,1,5,-1,4,2,5,-1,2,0,5,-1,3,4,5,-1});
IndexedFaceSet338->setTexCoordIndex(new int[16]{0,1,2,-1,3,4,5,-1,4,0,2,-1,6,3,5,-1});
IndexedFaceSet338->setCoordIndex(new int[16]{0,1,2,-1,3,4,2,-1,4,0,2,-1,5,3,2,-1});
CColor* Color339 = (CColor *)(m_pScene.createNode("Color"));
Color339->setColor(new float[18]{0.8,0.545717,0.483674,0.251337,0.223325,0.0404992,0.8,0.630835,0.476646,0.127236,0.245989,0.0540638,0.0959711,0.465241,0.0190278,0,0,0});
IndexedFaceSet338->setColor(*Color339);

CTextureCoordinate* TextureCoordinate340 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate340->setPoint(new float[14]{6,0,6,3,3,3,0,0,3,0,3,3,0,3});
IndexedFaceSet338->setTexCoord(*TextureCoordinate340);

CCoordinate* Coordinate341 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate341->setPoint(new float[18]{150,0,0.468384,150,0,-249.532,0,0,-249.532,-150,0,0.468384,0,0,0.468384,-150,0,-249.532});
IndexedFaceSet338->setCoord(*Coordinate341);

Shape335->setGeometry(IndexedFaceSet338);

Transform334->addChildren(*Shape335);

Transform301->addChildren(*Transform334);

Transform259->addChildren(*Transform301);

Transform175->addChildren(*Transform259);

Transform174->addChildren(*Transform175);

CTransform* Transform342 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform345 = (CTransform *)(m_pScene.createNode("Transform"));
Transform345->setDEF("himmel_5");
Transform345->setTranslation(new float[3]{0,60,-250});
CTransform* Transform346 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform347 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform348 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance350 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture351 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture351->setUSE("_13");
Appearance350->setTexture(*ImageTexture351);

Shape349->setAppearance(*Appearance350);

CIndexedFaceSet* IndexedFaceSet352 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet352->setSolid(False);
IndexedFaceSet352->setCreaseAngle(0.5);
IndexedFaceSet352->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate353 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate353->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet352->setTexCoord(*TextureCoordinate353);

CCoordinate* Coordinate354 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate354->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet352->setCoord(*Coordinate354);

Shape349->setGeometry(IndexedFaceSet352);

Transform348->addChildren(*Shape349);

Transform347->addChildren(*Transform348);

CTransform* Transform355 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance357 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture358 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture358->setUSE("_13");
Appearance357->setTexture(*ImageTexture358);

Shape356->setAppearance(*Appearance357);

CIndexedFaceSet* IndexedFaceSet359 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet359->setSolid(False);
IndexedFaceSet359->setCreaseAngle(0.5);
IndexedFaceSet359->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate360 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate360->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet359->setTexCoord(*TextureCoordinate360);

CCoordinate* Coordinate361 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate361->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet359->setCoord(*Coordinate361);

Shape356->setGeometry(IndexedFaceSet359);

Transform355->addChildren(*Shape356);

Transform347->addChildren(*Transform355);

Transform346->addChildren(*Transform347);

CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform363 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance365 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture366 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture366->setUSE("_13");
Appearance365->setTexture(*ImageTexture366);

Shape364->setAppearance(*Appearance365);

CIndexedFaceSet* IndexedFaceSet367 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet367->setSolid(False);
IndexedFaceSet367->setCreaseAngle(0.5);
IndexedFaceSet367->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate368 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate368->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet367->setTexCoord(*TextureCoordinate368);

CCoordinate* Coordinate369 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate369->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet367->setCoord(*Coordinate369);

Shape364->setGeometry(IndexedFaceSet367);

Transform363->addChildren(*Shape364);

Transform362->addChildren(*Transform363);

CTransform* Transform370 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape371 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance372 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture373 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture373->setUSE("_13");
Appearance372->setTexture(*ImageTexture373);

Shape371->setAppearance(*Appearance372);

CIndexedFaceSet* IndexedFaceSet374 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet374->setSolid(False);
IndexedFaceSet374->setCreaseAngle(0.5);
IndexedFaceSet374->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet374->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate375 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate375->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet374->setTexCoord(*TextureCoordinate375);

CCoordinate* Coordinate376 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate376->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet374->setCoord(*Coordinate376);

Shape371->setGeometry(IndexedFaceSet374);

Transform370->addChildren(*Shape371);

Transform362->addChildren(*Transform370);

Transform346->addChildren(*Transform362);

Transform345->addChildren(*Transform346);

Transform344->addChildren(*Transform345);

CTransform* Transform377 = (CTransform *)(m_pScene.createNode("Transform"));
Transform377->setTranslation(new float[3]{0,-40,-250});
CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance379 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture380 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture380->setUSE("_14");
Appearance379->setTexture(*PixelTexture380);

Shape378->setAppearance(*Appearance379);

CIndexedFaceSet* IndexedFaceSet381 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet381->setSolid(False);
IndexedFaceSet381->setCreaseAngle(0.5);
IndexedFaceSet381->setColorIndex(new int[16]{2,1,0,-1,1,3,0,-1,3,4,0,-1,4,2,0,-1});
IndexedFaceSet381->setTexCoordIndex(new int[16]{0,1,2,-1,3,4,5,-1,4,6,5,-1,6,0,2,-1});
IndexedFaceSet381->setCoordIndex(new int[16]{0,1,2,-1,3,4,2,-1,4,5,2,-1,5,0,2,-1});
CColor* Color382 = (CColor *)(m_pScene.createNode("Color"));
Color382->setColor(new float[15]{0.8,0.630835,0.476646,0,0.787679,0.8,0.274599,0.583913,0.8,0.00197954,0.613313,0.8,0,0.582209,1});
IndexedFaceSet381->setColor(*Color382);

CTextureCoordinate* TextureCoordinate383 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate383->setPoint(new float[14]{6,0,6,3,3,3,0,3,0,0,3,3,3,0});
IndexedFaceSet381->setTexCoord(*TextureCoordinate383);

CCoordinate* Coordinate384 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate384->setPoint(new float[18]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250});
IndexedFaceSet381->setCoord(*Coordinate384);

Shape378->setGeometry(IndexedFaceSet381);

Transform377->addChildren(*Shape378);

Transform344->addChildren(*Transform377);

Transform343->addChildren(*Transform344);

CTransform* Transform385 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform386 = (CTransform *)(m_pScene.createNode("Transform"));
Transform386->setDEF("himmel_6");
Transform386->setTranslation(new float[3]{0,60,-500});
CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
Transform387->setTranslation(new float[3]{0,-100,250});
CTransform* Transform388 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform389 = (CTransform *)(m_pScene.createNode("Transform"));
Transform389->setTranslation(new float[3]{0,100,-250});
CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance391 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture392 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture392->setUSE("_13");
Appearance391->setTexture(*ImageTexture392);

Shape390->setAppearance(*Appearance391);

CIndexedFaceSet* IndexedFaceSet393 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet393->setSolid(False);
IndexedFaceSet393->setCreaseAngle(0.5);
IndexedFaceSet393->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate394 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate394->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet393->setTexCoord(*TextureCoordinate394);

CCoordinate* Coordinate395 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate395->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet393->setCoord(*Coordinate395);

Shape390->setGeometry(IndexedFaceSet393);

Transform389->addChildren(*Shape390);

Transform388->addChildren(*Transform389);

CTransform* Transform396 = (CTransform *)(m_pScene.createNode("Transform"));
Transform396->setTranslation(new float[3]{0,100,-250});
CShape* Shape397 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance398 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture399 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture399->setUSE("_13");
Appearance398->setTexture(*ImageTexture399);

Shape397->setAppearance(*Appearance398);

CIndexedFaceSet* IndexedFaceSet400 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet400->setSolid(False);
IndexedFaceSet400->setCreaseAngle(0.5);
IndexedFaceSet400->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate401 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate401->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet400->setTexCoord(*TextureCoordinate401);

CCoordinate* Coordinate402 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate402->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet400->setCoord(*Coordinate402);

Shape397->setGeometry(IndexedFaceSet400);

Transform396->addChildren(*Shape397);

Transform388->addChildren(*Transform396);

Transform387->addChildren(*Transform388);

CTransform* Transform403 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform404 = (CTransform *)(m_pScene.createNode("Transform"));
Transform404->setTranslation(new float[3]{0,100,-250});
CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance406 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture407 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture407->setUSE("_13");
Appearance406->setTexture(*ImageTexture407);

Shape405->setAppearance(*Appearance406);

CIndexedFaceSet* IndexedFaceSet408 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet408->setSolid(False);
IndexedFaceSet408->setCreaseAngle(0.5);
IndexedFaceSet408->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate409 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate409->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet408->setTexCoord(*TextureCoordinate409);

CCoordinate* Coordinate410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate410->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet408->setCoord(*Coordinate410);

Shape405->setGeometry(IndexedFaceSet408);

Transform404->addChildren(*Shape405);

Transform403->addChildren(*Transform404);

CTransform* Transform411 = (CTransform *)(m_pScene.createNode("Transform"));
Transform411->setTranslation(new float[3]{0,100,-250});
CShape* Shape412 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance413 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture414 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture414->setUSE("_13");
Appearance413->setTexture(*ImageTexture414);

Shape412->setAppearance(*Appearance413);

CIndexedFaceSet* IndexedFaceSet415 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet415->setSolid(False);
IndexedFaceSet415->setCreaseAngle(0.5);
IndexedFaceSet415->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet415->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate416 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate416->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet415->setTexCoord(*TextureCoordinate416);

CCoordinate* Coordinate417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate417->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet415->setCoord(*Coordinate417);

Shape412->setGeometry(IndexedFaceSet415);

Transform411->addChildren(*Shape412);

Transform403->addChildren(*Transform411);

Transform387->addChildren(*Transform403);

Transform386->addChildren(*Transform387);

Transform385->addChildren(*Transform386);

CTransform* Transform418 = (CTransform *)(m_pScene.createNode("Transform"));
Transform418->setTranslation(new float[3]{0,-40,-500});
CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance420 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture421 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture421->setUSE("_14");
Appearance420->setTexture(*PixelTexture421);

Shape419->setAppearance(*Appearance420);

CIndexedFaceSet* IndexedFaceSet422 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet422->setSolid(False);
IndexedFaceSet422->setCreaseAngle(0.5);
IndexedFaceSet422->setColorIndex(new int[16]{2,1,0,-1,0,2,0,-1,2,0,0,-1,0,2,0,-1});
IndexedFaceSet422->setTexCoordIndex(new int[16]{0,1,2,-1,3,4,5,-1,4,6,5,-1,6,0,2,-1});
IndexedFaceSet422->setCoordIndex(new int[16]{0,1,2,-1,3,4,2,-1,4,5,2,-1,5,0,2,-1});
CColor* Color423 = (CColor *)(m_pScene.createNode("Color"));
Color423->setColor(new float[9]{0.8,0.630835,0.476646,0.652899,0.8,0.382087,0,0.787679,0.8});
IndexedFaceSet422->setColor(*Color423);

CTextureCoordinate* TextureCoordinate424 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate424->setPoint(new float[14]{6,0,6,3,3,3,0,3,0,0,3,3,3,0});
IndexedFaceSet422->setTexCoord(*TextureCoordinate424);

CCoordinate* Coordinate425 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate425->setPoint(new float[18]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250});
IndexedFaceSet422->setCoord(*Coordinate425);

Shape419->setGeometry(IndexedFaceSet422);

Transform418->addChildren(*Shape419);

Transform385->addChildren(*Transform418);

Transform343->addChildren(*Transform385);

Transform342->addChildren(*Transform343);

CTransform* Transform426 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform427 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform428 = (CTransform *)(m_pScene.createNode("Transform"));
Transform428->setDEF("himmel_7");
Transform428->setTranslation(new float[3]{0,60,-750});
CTransform* Transform429 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance433 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture434 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture434->setUSE("_13");
Appearance433->setTexture(*ImageTexture434);

Shape432->setAppearance(*Appearance433);

CIndexedFaceSet* IndexedFaceSet435 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet435->setSolid(False);
IndexedFaceSet435->setCreaseAngle(0.5);
IndexedFaceSet435->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate436 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate436->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet435->setTexCoord(*TextureCoordinate436);

CCoordinate* Coordinate437 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate437->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet435->setCoord(*Coordinate437);

Shape432->setGeometry(IndexedFaceSet435);

Transform431->addChildren(*Shape432);

Transform430->addChildren(*Transform431);

CTransform* Transform438 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance440 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture441 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture441->setUSE("_13");
Appearance440->setTexture(*ImageTexture441);

Shape439->setAppearance(*Appearance440);

CIndexedFaceSet* IndexedFaceSet442 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet442->setSolid(False);
IndexedFaceSet442->setCreaseAngle(0.5);
IndexedFaceSet442->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate443 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate443->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet442->setTexCoord(*TextureCoordinate443);

CCoordinate* Coordinate444 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate444->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet442->setCoord(*Coordinate444);

Shape439->setGeometry(IndexedFaceSet442);

Transform438->addChildren(*Shape439);

Transform430->addChildren(*Transform438);

Transform429->addChildren(*Transform430);

CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance448 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture449 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture449->setUSE("_13");
Appearance448->setTexture(*ImageTexture449);

Shape447->setAppearance(*Appearance448);

CIndexedFaceSet* IndexedFaceSet450 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet450->setSolid(False);
IndexedFaceSet450->setCreaseAngle(0.5);
IndexedFaceSet450->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate451 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate451->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet450->setTexCoord(*TextureCoordinate451);

CCoordinate* Coordinate452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate452->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet450->setCoord(*Coordinate452);

Shape447->setGeometry(IndexedFaceSet450);

Transform446->addChildren(*Shape447);

Transform445->addChildren(*Transform446);

CTransform* Transform453 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance455 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture456 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture456->setUSE("_13");
Appearance455->setTexture(*ImageTexture456);

Shape454->setAppearance(*Appearance455);

CIndexedFaceSet* IndexedFaceSet457 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet457->setSolid(False);
IndexedFaceSet457->setCreaseAngle(0.5);
IndexedFaceSet457->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet457->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate458 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate458->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet457->setTexCoord(*TextureCoordinate458);

CCoordinate* Coordinate459 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate459->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet457->setCoord(*Coordinate459);

Shape454->setGeometry(IndexedFaceSet457);

Transform453->addChildren(*Shape454);

Transform445->addChildren(*Transform453);

Transform429->addChildren(*Transform445);

Transform428->addChildren(*Transform429);

Transform427->addChildren(*Transform428);

CTransform* Transform460 = (CTransform *)(m_pScene.createNode("Transform"));
Transform460->setTranslation(new float[3]{0,-40,-750});
CShape* Shape461 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance462 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture463 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture463->setUSE("_14");
Appearance462->setTexture(*PixelTexture463);

Shape461->setAppearance(*Appearance462);

CIndexedFaceSet* IndexedFaceSet464 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet464->setSolid(False);
IndexedFaceSet464->setCreaseAngle(0.5);
IndexedFaceSet464->setColorIndex(new int[41]{1,1,0,-1,0,0,1,0,-1,0,0,2,-1,0,0,2,-1,0,0,2,-1,0,0,2,-1,0,2,0,-1,0,0,2,-1,0,0,2,-1,0,0,2,-1});
IndexedFaceSet464->setTexCoordIndex(new int[41]{0,1,2,-1,7,6,0,2,-1,10,6,11,-1,6,8,11,-1,13,3,12,-1,3,9,12,-1,4,11,9,-1,4,10,11,-1,8,5,12,-1,5,13,12,-1});
IndexedFaceSet464->setCoordIndex(new int[41]{0,1,2,-1,6,5,0,2,-1,8,5,9,-1,5,6,9,-1,10,3,9,-1,3,7,9,-1,4,9,7,-1,4,8,9,-1,6,2,9,-1,2,10,9,-1});
CColor* Color465 = (CColor *)(m_pScene.createNode("Color"));
Color465->setColor(new float[9]{0.8,0.630835,0.476646,0.449581,0.8,0.375564,0.283422,0.223491,0.168865});
IndexedFaceSet464->setColor(*Color465);

CTextureCoordinate* TextureCoordinate466 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate466->setPoint(new float[28]{6,0,6,3,3,3,0,3,0,0,3,3,3,0,3,1.12402,3,1.12402,0,1.12402,2.09395,0,2.09395,1.12402,2.09395,1.12402,2.09395,3});
IndexedFaceSet464->setTexCoord(*TextureCoordinate466);

CCoordinate* Coordinate467 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate467->setPoint(new float[33]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250,0,0,156.332,-150,0,156.332,-45.3025,0,250,-45.3025,0,156.332,-45.3025,0,0});
IndexedFaceSet464->setCoord(*Coordinate467);

Shape461->setGeometry(IndexedFaceSet464);

Transform460->addChildren(*Shape461);

Transform427->addChildren(*Transform460);

Transform426->addChildren(*Transform427);

CTransform* Transform468 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform469 = (CTransform *)(m_pScene.createNode("Transform"));
Transform469->setDEF("himmel");
Transform469->setTranslation(new float[3]{0,60,-1000});
CTransform* Transform470 = (CTransform *)(m_pScene.createNode("Transform"));
Transform470->setTranslation(new float[3]{0,-100,250});
CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
Transform472->setTranslation(new float[3]{0,100,-250});
CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance474 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture475 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture475->setUSE("_13");
Appearance474->setTexture(*ImageTexture475);

Shape473->setAppearance(*Appearance474);

CIndexedFaceSet* IndexedFaceSet476 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet476->setSolid(False);
IndexedFaceSet476->setCreaseAngle(0.5);
IndexedFaceSet476->setCoordIndex(new int[8]{0,1,2,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate477 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate477->setPoint(new float[8]{2,0.5,2,1,1,1,1,0.5});
IndexedFaceSet476->setTexCoord(*TextureCoordinate477);

CCoordinate* Coordinate478 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate478->setPoint(new float[12]{250,0,125,250,0,0,0,0,0,0,0,125});
IndexedFaceSet476->setCoord(*Coordinate478);

Shape473->setGeometry(IndexedFaceSet476);

Transform472->addChildren(*Shape473);

Transform471->addChildren(*Transform472);

CTransform* Transform479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform479->setTranslation(new float[3]{0,100,-250});
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance481 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture482 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture482->setUSE("_13");
Appearance481->setTexture(*ImageTexture482);

Shape480->setAppearance(*Appearance481);

CIndexedFaceSet* IndexedFaceSet483 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet483->setSolid(False);
IndexedFaceSet483->setCreaseAngle(0.5);
IndexedFaceSet483->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate484 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate484->setPoint(new float[8]{1,1,0,0.5,1,0.5,0,1});
IndexedFaceSet483->setTexCoord(*TextureCoordinate484);

CCoordinate* Coordinate485 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate485->setPoint(new float[12]{0,0,0,-250,0,125,0,0,125,-250,0,0});
IndexedFaceSet483->setCoord(*Coordinate485);

Shape480->setGeometry(IndexedFaceSet483);

Transform479->addChildren(*Shape480);

Transform471->addChildren(*Transform479);

Transform470->addChildren(*Transform471);

CTransform* Transform486 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform487->setTranslation(new float[3]{0,100,-250});
CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance489 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture490 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture490->setUSE("_13");
Appearance489->setTexture(*ImageTexture490);

Shape488->setAppearance(*Appearance489);

CIndexedFaceSet* IndexedFaceSet491 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet491->setSolid(False);
IndexedFaceSet491->setCreaseAngle(0.5);
IndexedFaceSet491->setCoordIndex(new int[8]{0,1,2,-1,0,3,1,-1});
CTextureCoordinate* TextureCoordinate492 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate492->setPoint(new float[8]{2,0,1,0.5,1,0,2,0.5});
IndexedFaceSet491->setTexCoord(*TextureCoordinate492);

CCoordinate* Coordinate493 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate493->setPoint(new float[12]{250,0,250,0,0,125,0,0,250,250,0,125});
IndexedFaceSet491->setCoord(*Coordinate493);

Shape488->setGeometry(IndexedFaceSet491);

Transform487->addChildren(*Shape488);

Transform486->addChildren(*Transform487);

CTransform* Transform494 = (CTransform *)(m_pScene.createNode("Transform"));
Transform494->setTranslation(new float[3]{0,100,-250});
CShape* Shape495 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance496 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture497 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture497->setUSE("_13");
Appearance496->setTexture(*ImageTexture497);

Shape495->setAppearance(*Appearance496);

CIndexedFaceSet* IndexedFaceSet498 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet498->setSolid(False);
IndexedFaceSet498->setCreaseAngle(0.5);
IndexedFaceSet498->setTexCoordIndex(new int[8]{5,1,4,-1,1,3,4,-1});
IndexedFaceSet498->setCoordIndex(new int[8]{3,0,2,-1,0,1,2,-1});
CTextureCoordinate* TextureCoordinate499 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate499->setPoint(new float[12]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5});
IndexedFaceSet498->setTexCoord(*TextureCoordinate499);

CCoordinate* Coordinate500 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate500->setPoint(new float[12]{-250,0,250,0,0,250,0,0,125,-250,0,125});
IndexedFaceSet498->setCoord(*Coordinate500);

Shape495->setGeometry(IndexedFaceSet498);

Transform494->addChildren(*Shape495);

Transform486->addChildren(*Transform494);

Transform470->addChildren(*Transform486);

Transform469->addChildren(*Transform470);

Transform468->addChildren(*Transform469);

CTransform* Transform501 = (CTransform *)(m_pScene.createNode("Transform"));
Transform501->setTranslation(new float[3]{0,-40,-1000});
CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance503 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture504 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture504->setUSE("_14");
Appearance503->setTexture(*PixelTexture504);

Shape502->setAppearance(*Appearance503);

CIndexedFaceSet* IndexedFaceSet505 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet505->setSolid(False);
IndexedFaceSet505->setCreaseAngle(0.5);
IndexedFaceSet505->setColorIndex(new int[48]{0,0,0,-1,0,0,0,-1,0,2,3,-1,2,3,3,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,4,4,4,-1,0,3,1,-1,0,3,3,-1,1,3,2,-1,3,3,2,-1});
IndexedFaceSet505->setTexCoordIndex(new int[48]{3,4,5,-1,4,6,5,-1,6,0,24,-1,0,16,24,-1,22,2,25,-1,2,6,25,-1,25,15,23,-1,15,19,23,-1,2,18,1,-1,2,22,18,-1,1,18,0,-1,18,16,0,-1});
IndexedFaceSet505->setCoordIndex(new int[48]{3,4,2,-1,4,5,2,-1,5,0,9,-1,0,6,9,-1,8,2,9,-1,2,5,9,-1,9,6,8,-1,6,7,8,-1,2,7,1,-1,2,8,7,-1,1,7,0,-1,7,6,0,-1});
CColor* Color506 = (CColor *)(m_pScene.createNode("Color"));
Color506->setColor(new float[15]{0.8,0.630835,0.476646,0.652899,0.8,0.382087,0.449581,0.8,0.375564,0.315508,0.313602,0.196817,0.171123,0.170089,0.106748});
IndexedFaceSet505->setColor(*Color506);

CTextureCoordinate* TextureCoordinate507 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate507->setPoint(new float[52]{6,0,6,3,3,3,0,3,0,0,3,3,3,0,3,1.84077,3,1.84077,6,1.80065,4.59945,0,4.41984,3,3,1.5,3,1.5,6,1.5,5.11272,1.5,5.11272,1.5,5.11272,3,5.11272,2.10634,5.11272,2.10634,3,2.10634,3,2.10634,4.09682,2.10634,4.09682,2.10634,4.09682,1.5,4.09682,1.5});
IndexedFaceSet505->setTexCoord(*TextureCoordinate507);

CCoordinate* Coordinate508 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate508->setPoint(new float[30]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250,105.636,0,125,105.636,0,74.4718,54.8409,0,74.4717,54.8409,0,125});
IndexedFaceSet505->setCoord(*Coordinate508);

Shape502->setGeometry(IndexedFaceSet505);

Transform501->addChildren(*Shape502);

Transform468->addChildren(*Transform501);

Transform426->addChildren(*Transform468);

Transform342->addChildren(*Transform426);

Transform174->addChildren(*Transform342);

group->addChildren(*Transform174);

CTransform* Transform509 = (CTransform *)(m_pScene.createNode("Transform"));
Transform509->setDEF("BONUS");
CTransform* Transform510 = (CTransform *)(m_pScene.createNode("Transform"));
Transform510->setDEF("B2-RED");
CTransform* Transform511 = (CTransform *)(m_pScene.createNode("Transform"));
Transform511->setDEF("bonus-red1_1");
Transform511->setTranslation(new float[3]{46,20,-770});
CTransform* Transform512 = (CTransform *)(m_pScene.createNode("Transform"));
Transform512->setDEF("objLOD_1");
CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setDEF("LOD");
CLOD* LOD514 = (CLOD *)(m_pScene.createNode("LOD"));
LOD514->setRange(new float[1]{200}, 1);
CTransform* Transform515 = (CTransform *)(m_pScene.createNode("Transform"));
Transform515->setDEF("objOn_1");
CTransform* Transform516 = (CTransform *)(m_pScene.createNode("Transform"));
Transform516->setDEF("stern_1");
Transform516->setScale(new float[3]{1,1,0.999999});
Transform516->setScaleOrientation(new float[4]{0,1,0,0.018374});
CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance518 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material519 = (CMaterial *)(m_pScene.createNode("Material"));
Material519->setAmbientIntensity(0.16172);
Material519->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material519->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material519->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material519->setShininess(0.106383);
Appearance518->setMaterial(*Material519);

Shape517->setAppearance(*Appearance518);

CIndexedFaceSet* IndexedFaceSet520 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet520->setCoordIndex(new int[214]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1});
CCoordinate* Coordinate521 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate521->setPoint(new float[150]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965});
IndexedFaceSet520->setCoord(*Coordinate521);

Shape517->setGeometry(IndexedFaceSet520);

Transform516->addChildren(*Shape517);

Transform515->addChildren(*Transform516);

LOD514->addChildren(*Transform515);

CTransform* Transform522 = (CTransform *)(m_pScene.createNode("Transform"));
Transform522->setDEF("objOff_1");
LOD514->addChildren(*Transform522);

Transform513->addChildren(*LOD514);

Transform512->addChildren(*Transform513);

Transform511->addChildren(*Transform512);

CTransform* Transform523 = (CTransform *)(m_pScene.createNode("Transform"));
Transform523->setDEF("proxyLOD_1");
CLOD* LOD524 = (CLOD *)(m_pScene.createNode("LOD"));
LOD524->setRange(new float[1]{15}, 1);
CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
Transform525->setDEF("proxyOn_1");
CProximitySensor* ProximitySensor526 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor526->setDEF("_15");
ProximitySensor526->setSize(new float[3]{12,12,12});
Transform525->addChildren(*ProximitySensor526);

LOD524->addChildren(*Transform525);

CTransform* Transform527 = (CTransform *)(m_pScene.createNode("Transform"));
Transform527->setDEF("proxyOff_1");
LOD524->addChildren(*Transform527);

Transform523->addChildren(*LOD524);

Transform511->addChildren(*Transform523);

Transform510->addChildren(*Transform511);

CTransform* Transform528 = (CTransform *)(m_pScene.createNode("Transform"));
Transform528->setDEF("bonus-red2_1");
Transform528->setTranslation(new float[3]{80,-30,-900});
CTransform* Transform529 = (CTransform *)(m_pScene.createNode("Transform"));
Transform529->setDEF("objLOD_2");
CLOD* LOD530 = (CLOD *)(m_pScene.createNode("LOD"));
LOD530->setRange(new float[1]{200}, 1);
CTransform* Transform531 = (CTransform *)(m_pScene.createNode("Transform"));
Transform531->setDEF("objOn_2");
CTransform* Transform532 = (CTransform *)(m_pScene.createNode("Transform"));
Transform532->setDEF("_16");
CTransform* Transform533 = (CTransform *)(m_pScene.createNode("Transform"));
Transform533->setDEF("stern_2");
Transform533->setScale(new float[3]{1,1,0.999999});
Transform533->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform533->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape534 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance535 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material536 = (CMaterial *)(m_pScene.createNode("Material"));
Material536->setAmbientIntensity(0.16172);
Material536->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material536->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material536->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material536->setShininess(0.106383);
Appearance535->setMaterial(*Material536);

Shape534->setAppearance(*Appearance535);

CIndexedFaceSet* IndexedFaceSet537 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet537->setCoordIndex(new int[214]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1});
CCoordinate* Coordinate538 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate538->setPoint(new float[150]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965});
IndexedFaceSet537->setCoord(*Coordinate538);

Shape534->setGeometry(IndexedFaceSet537);

Transform533->addChildren(*Shape534);

Transform532->addChildren(*Transform533);

Transform531->addChildren(*Transform532);

LOD530->addChildren(*Transform531);

CTransform* Transform539 = (CTransform *)(m_pScene.createNode("Transform"));
Transform539->setDEF("objOff_2");
LOD530->addChildren(*Transform539);

Transform529->addChildren(*LOD530);

Transform528->addChildren(*Transform529);

CTransform* Transform540 = (CTransform *)(m_pScene.createNode("Transform"));
Transform540->setDEF("proxyLOD_2");
CLOD* LOD541 = (CLOD *)(m_pScene.createNode("LOD"));
LOD541->setRange(new float[1]{15}, 1);
CTransform* Transform542 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor543 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor543->setDEF("_17");
ProximitySensor543->setSize(new float[3]{12,12,12});
Transform542->addChildren(*ProximitySensor543);

LOD541->addChildren(*Transform542);

CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
Transform544->setDEF("proxyOff_2");
LOD541->addChildren(*Transform544);

Transform540->addChildren(*LOD541);

Transform528->addChildren(*Transform540);

Transform510->addChildren(*Transform528);

Transform509->addChildren(*Transform510);

CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
Transform545->setDEF("B1-BLUE");
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
Transform546->setDEF("bonus-blue5_1");
Transform546->setTranslation(new float[3]{0,25,-400});
CTransform* Transform547 = (CTransform *)(m_pScene.createNode("Transform"));
Transform547->setDEF("objLOD_3");
CTransform* Transform548 = (CTransform *)(m_pScene.createNode("Transform"));
Transform548->setDEF("LOD-kreuz_1");
CLOD* LOD549 = (CLOD *)(m_pScene.createNode("LOD"));
LOD549->setRange(new float[1]{200}, 1);
CTransform* Transform550 = (CTransform *)(m_pScene.createNode("Transform"));
Transform550->setDEF("objOn_3");
CTransform* Transform551 = (CTransform *)(m_pScene.createNode("Transform"));
Transform551->setDEF("_18");
CTransform* Transform552 = (CTransform *)(m_pScene.createNode("Transform"));
Transform552->setDEF("bonusObj_1");
Transform552->setScale(new float[3]{1.00004,1.00004,1.00007});
Transform552->setScaleOrientation(new float[4]{0,1,0,0.018296});
CShape* Shape553 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance554 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material555 = (CMaterial *)(m_pScene.createNode("Material"));
Material555->setAmbientIntensity(0.16172);
Material555->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material555->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material555->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material555->setShininess(0.106383);
Appearance554->setMaterial(*Material555);

Shape553->setAppearance(*Appearance554);

CIndexedFaceSet* IndexedFaceSet556 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet556->setSolid(False);
IndexedFaceSet556->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate557 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate557->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet556->setCoord(*Coordinate557);

Shape553->setGeometry(IndexedFaceSet556);

Transform552->addChildren(*Shape553);

Transform551->addChildren(*Transform552);

Transform550->addChildren(*Transform551);

LOD549->addChildren(*Transform550);

CTransform* Transform558 = (CTransform *)(m_pScene.createNode("Transform"));
Transform558->setDEF("objOff_3");
LOD549->addChildren(*Transform558);

Transform548->addChildren(*LOD549);

Transform547->addChildren(*Transform548);

Transform546->addChildren(*Transform547);

CTransform* Transform559 = (CTransform *)(m_pScene.createNode("Transform"));
Transform559->setDEF("proxyLOD_3");
CLOD* LOD560 = (CLOD *)(m_pScene.createNode("LOD"));
LOD560->setRange(new float[1]{15}, 1);
CTransform* Transform561 = (CTransform *)(m_pScene.createNode("Transform"));
Transform561->setDEF("proxyOn_2");
CProximitySensor* ProximitySensor562 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor562->setDEF("_19");
ProximitySensor562->setSize(new float[3]{12,12,12});
Transform561->addChildren(*ProximitySensor562);

LOD560->addChildren(*Transform561);

CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setDEF("proxyOff_3");
LOD560->addChildren(*Transform563);

Transform559->addChildren(*LOD560);

Transform546->addChildren(*Transform559);

Transform545->addChildren(*Transform546);

CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
Transform564->setDEF("bonus-blue4_1");
Transform564->setTranslation(new float[3]{0,20,-350});
CTransform* Transform565 = (CTransform *)(m_pScene.createNode("Transform"));
Transform565->setDEF("objLOD_4");
CTransform* Transform566 = (CTransform *)(m_pScene.createNode("Transform"));
Transform566->setDEF("LOD-kreuz_2");
CLOD* LOD567 = (CLOD *)(m_pScene.createNode("LOD"));
LOD567->setRange(new float[1]{200}, 1);
CTransform* Transform568 = (CTransform *)(m_pScene.createNode("Transform"));
Transform568->setDEF("objOn_4");
CTransform* Transform569 = (CTransform *)(m_pScene.createNode("Transform"));
Transform569->setDEF("_20");
CTransform* Transform570 = (CTransform *)(m_pScene.createNode("Transform"));
Transform570->setDEF("bonusObj_2");
Transform570->setScale(new float[3]{1.00003,1.00004,1.00007});
Transform570->setScaleOrientation(new float[4]{0,1,0,0.018374});
CShape* Shape571 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance572 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material573 = (CMaterial *)(m_pScene.createNode("Material"));
Material573->setAmbientIntensity(0.16172);
Material573->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material573->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material573->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material573->setShininess(0.106383);
Appearance572->setMaterial(*Material573);

Shape571->setAppearance(*Appearance572);

CIndexedFaceSet* IndexedFaceSet574 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet574->setSolid(False);
IndexedFaceSet574->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate575 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate575->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet574->setCoord(*Coordinate575);

Shape571->setGeometry(IndexedFaceSet574);

Transform570->addChildren(*Shape571);

Transform569->addChildren(*Transform570);

Transform568->addChildren(*Transform569);

LOD567->addChildren(*Transform568);

CTransform* Transform576 = (CTransform *)(m_pScene.createNode("Transform"));
Transform576->setDEF("objOff_4");
LOD567->addChildren(*Transform576);

Transform566->addChildren(*LOD567);

Transform565->addChildren(*Transform566);

Transform564->addChildren(*Transform565);

CTransform* Transform577 = (CTransform *)(m_pScene.createNode("Transform"));
Transform577->setDEF("proxyLOD_4");
CLOD* LOD578 = (CLOD *)(m_pScene.createNode("LOD"));
LOD578->setRange(new float[1]{15}, 1);
CTransform* Transform579 = (CTransform *)(m_pScene.createNode("Transform"));
Transform579->setDEF("proxyOn_3");
CProximitySensor* ProximitySensor580 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor580->setDEF("_21");
ProximitySensor580->setSize(new float[3]{12,12,12});
Transform579->addChildren(*ProximitySensor580);

LOD578->addChildren(*Transform579);

CTransform* Transform581 = (CTransform *)(m_pScene.createNode("Transform"));
Transform581->setDEF("proxyOff_4");
LOD578->addChildren(*Transform581);

Transform577->addChildren(*LOD578);

Transform564->addChildren(*Transform577);

Transform545->addChildren(*Transform564);

CTransform* Transform582 = (CTransform *)(m_pScene.createNode("Transform"));
Transform582->setDEF("bonus-blue3_1");
Transform582->setTranslation(new float[3]{0,5,-300});
CTransform* Transform583 = (CTransform *)(m_pScene.createNode("Transform"));
Transform583->setDEF("objLOD_5");
CTransform* Transform584 = (CTransform *)(m_pScene.createNode("Transform"));
Transform584->setDEF("LOD-kreuz_3");
CLOD* LOD585 = (CLOD *)(m_pScene.createNode("LOD"));
LOD585->setRange(new float[1]{200}, 1);
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
Transform586->setDEF("objOn_5");
CTransform* Transform587 = (CTransform *)(m_pScene.createNode("Transform"));
Transform587->setDEF("_22");
CTransform* Transform588 = (CTransform *)(m_pScene.createNode("Transform"));
Transform588->setDEF("bonusObj_3");
Transform588->setScale(new float[3]{1.00004,1.00004,1.00007});
Transform588->setScaleOrientation(new float[4]{0,1,0,0.018361});
CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance590 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material591 = (CMaterial *)(m_pScene.createNode("Material"));
Material591->setAmbientIntensity(0.16172);
Material591->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material591->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material591->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material591->setShininess(0.106383);
Appearance590->setMaterial(*Material591);

Shape589->setAppearance(*Appearance590);

CIndexedFaceSet* IndexedFaceSet592 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet592->setSolid(False);
IndexedFaceSet592->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate593 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate593->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet592->setCoord(*Coordinate593);

Shape589->setGeometry(IndexedFaceSet592);

Transform588->addChildren(*Shape589);

Transform587->addChildren(*Transform588);

Transform586->addChildren(*Transform587);

LOD585->addChildren(*Transform586);

CTransform* Transform594 = (CTransform *)(m_pScene.createNode("Transform"));
Transform594->setDEF("objOff_5");
LOD585->addChildren(*Transform594);

Transform584->addChildren(*LOD585);

Transform583->addChildren(*Transform584);

Transform582->addChildren(*Transform583);

CTransform* Transform595 = (CTransform *)(m_pScene.createNode("Transform"));
Transform595->setDEF("proxyLOD_5");
CLOD* LOD596 = (CLOD *)(m_pScene.createNode("LOD"));
LOD596->setRange(new float[1]{15}, 1);
CTransform* Transform597 = (CTransform *)(m_pScene.createNode("Transform"));
Transform597->setDEF("proxyOn_4");
CProximitySensor* ProximitySensor598 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor598->setDEF("_23");
ProximitySensor598->setSize(new float[3]{12,12,12});
Transform597->addChildren(*ProximitySensor598);

LOD596->addChildren(*Transform597);

CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
Transform599->setDEF("proxyOff_5");
LOD596->addChildren(*Transform599);

Transform595->addChildren(*LOD596);

Transform582->addChildren(*Transform595);

Transform545->addChildren(*Transform582);

CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
Transform600->setDEF("bonus-blue2_1");
Transform600->setTranslation(new float[3]{0,-5,-250});
CTransform* Transform601 = (CTransform *)(m_pScene.createNode("Transform"));
Transform601->setDEF("objLOD_6");
CTransform* Transform602 = (CTransform *)(m_pScene.createNode("Transform"));
Transform602->setDEF("LOD-kreuz_4");
CLOD* LOD603 = (CLOD *)(m_pScene.createNode("LOD"));
LOD603->setRange(new float[1]{200}, 1);
CTransform* Transform604 = (CTransform *)(m_pScene.createNode("Transform"));
Transform604->setDEF("objOn_6");
CTransform* Transform605 = (CTransform *)(m_pScene.createNode("Transform"));
Transform605->setDEF("_24");
CTransform* Transform606 = (CTransform *)(m_pScene.createNode("Transform"));
Transform606->setDEF("bonusObj_4");
Transform606->setScale(new float[3]{1.00004,1.00004,1.00007});
Transform606->setScaleOrientation(new float[4]{0,1,0,0.018361});
CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance608 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material609 = (CMaterial *)(m_pScene.createNode("Material"));
Material609->setAmbientIntensity(0.16172);
Material609->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material609->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material609->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material609->setShininess(0.106383);
Appearance608->setMaterial(*Material609);

Shape607->setAppearance(*Appearance608);

CIndexedFaceSet* IndexedFaceSet610 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet610->setSolid(False);
IndexedFaceSet610->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate611 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate611->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet610->setCoord(*Coordinate611);

Shape607->setGeometry(IndexedFaceSet610);

Transform606->addChildren(*Shape607);

Transform605->addChildren(*Transform606);

Transform604->addChildren(*Transform605);

LOD603->addChildren(*Transform604);

CTransform* Transform612 = (CTransform *)(m_pScene.createNode("Transform"));
Transform612->setDEF("objOff_6");
LOD603->addChildren(*Transform612);

Transform602->addChildren(*LOD603);

Transform601->addChildren(*Transform602);

Transform600->addChildren(*Transform601);

CTransform* Transform613 = (CTransform *)(m_pScene.createNode("Transform"));
Transform613->setDEF("proxyLOD_6");
CLOD* LOD614 = (CLOD *)(m_pScene.createNode("LOD"));
LOD614->setRange(new float[1]{15}, 1);
CTransform* Transform615 = (CTransform *)(m_pScene.createNode("Transform"));
Transform615->setDEF("proxyOn_5");
CProximitySensor* ProximitySensor616 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor616->setDEF("_25");
ProximitySensor616->setSize(new float[3]{12,12,12});
Transform615->addChildren(*ProximitySensor616);

LOD614->addChildren(*Transform615);

CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
Transform617->setDEF("proxyOff_6");
LOD614->addChildren(*Transform617);

Transform613->addChildren(*LOD614);

Transform600->addChildren(*Transform613);

Transform545->addChildren(*Transform600);

CTransform* Transform618 = (CTransform *)(m_pScene.createNode("Transform"));
Transform618->setDEF("bonus-blue1_1");
Transform618->setTranslation(new float[3]{0,-10,-200});
CTransform* Transform619 = (CTransform *)(m_pScene.createNode("Transform"));
Transform619->setDEF("objLOD_7");
CTransform* Transform620 = (CTransform *)(m_pScene.createNode("Transform"));
Transform620->setDEF("LOD-kreuz");
CLOD* LOD621 = (CLOD *)(m_pScene.createNode("LOD"));
LOD621->setRange(new float[1]{200}, 1);
CTransform* Transform622 = (CTransform *)(m_pScene.createNode("Transform"));
Transform622->setDEF("objOn_7");
CTransform* Transform623 = (CTransform *)(m_pScene.createNode("Transform"));
Transform623->setDEF("_26");
CTransform* Transform624 = (CTransform *)(m_pScene.createNode("Transform"));
Transform624->setDEF("bonusObj_5");
Transform624->setTranslation(new float[3]{-4.40357e-9,0,0});
Transform624->setScale(new float[3]{1,1,0.999999});
Transform624->setScaleOrientation(new float[4]{0,1,0,0.018374});
CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance626 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material627 = (CMaterial *)(m_pScene.createNode("Material"));
Material627->setAmbientIntensity(0.16172);
Material627->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material627->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material627->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material627->setShininess(0.106383);
Appearance626->setMaterial(*Material627);

Shape625->setAppearance(*Appearance626);

CIndexedFaceSet* IndexedFaceSet628 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet628->setSolid(False);
IndexedFaceSet628->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate629 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate629->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet628->setCoord(*Coordinate629);

Shape625->setGeometry(IndexedFaceSet628);

Transform624->addChildren(*Shape625);

Transform623->addChildren(*Transform624);

Transform622->addChildren(*Transform623);

LOD621->addChildren(*Transform622);

CTransform* Transform630 = (CTransform *)(m_pScene.createNode("Transform"));
Transform630->setDEF("objOff_7");
LOD621->addChildren(*Transform630);

Transform620->addChildren(*LOD621);

Transform619->addChildren(*Transform620);

Transform618->addChildren(*Transform619);

CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
Transform631->setDEF("proxyLOD_7");
CLOD* LOD632 = (CLOD *)(m_pScene.createNode("LOD"));
LOD632->setRange(new float[1]{15}, 1);
CTransform* Transform633 = (CTransform *)(m_pScene.createNode("Transform"));
Transform633->setDEF("proxyOn_6");
CProximitySensor* ProximitySensor634 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor634->setDEF("_27");
ProximitySensor634->setSize(new float[3]{12,12,12});
Transform633->addChildren(*ProximitySensor634);

LOD632->addChildren(*Transform633);

CTransform* Transform635 = (CTransform *)(m_pScene.createNode("Transform"));
Transform635->setDEF("proxyOff_7");
LOD632->addChildren(*Transform635);

Transform631->addChildren(*LOD632);

Transform618->addChildren(*Transform631);

Transform545->addChildren(*Transform618);

Transform509->addChildren(*Transform545);

CTransform* Transform636 = (CTransform *)(m_pScene.createNode("Transform"));
Transform636->setDEF("B3-BLUE_GOLD");
CTransform* Transform637 = (CTransform *)(m_pScene.createNode("Transform"));
Transform637->setDEF("bonus-blue1_2");
Transform637->setTranslation(new float[3]{-85,0,-725});
CTransform* Transform638 = (CTransform *)(m_pScene.createNode("Transform"));
Transform638->setDEF("objLOD_8");
CLOD* LOD639 = (CLOD *)(m_pScene.createNode("LOD"));
LOD639->setRange(new float[1]{200}, 1);
CTransform* Transform640 = (CTransform *)(m_pScene.createNode("Transform"));
Transform640->setDEF("objOn_8");
CTransform* Transform641 = (CTransform *)(m_pScene.createNode("Transform"));
Transform641->setDEF("_28");
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
Transform642->setDEF("bonusObj_6");
Transform642->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform642->setScale(new float[3]{1,1,0.999999});
Transform642->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform642->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape643 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance644 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material645 = (CMaterial *)(m_pScene.createNode("Material"));
Material645->setAmbientIntensity(0.16172);
Material645->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material645->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material645->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material645->setShininess(0.106383);
Appearance644->setMaterial(*Material645);

Shape643->setAppearance(*Appearance644);

CIndexedFaceSet* IndexedFaceSet646 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet646->setSolid(False);
IndexedFaceSet646->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate647 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate647->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet646->setCoord(*Coordinate647);

Shape643->setGeometry(IndexedFaceSet646);

Transform642->addChildren(*Shape643);

Transform641->addChildren(*Transform642);

Transform640->addChildren(*Transform641);

LOD639->addChildren(*Transform640);

CTransform* Transform648 = (CTransform *)(m_pScene.createNode("Transform"));
Transform648->setDEF("objOff_8");
LOD639->addChildren(*Transform648);

Transform638->addChildren(*LOD639);

Transform637->addChildren(*Transform638);

CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
Transform649->setDEF("proxyLOD_8");
CLOD* LOD650 = (CLOD *)(m_pScene.createNode("LOD"));
LOD650->setRange(new float[1]{15}, 1);
CTransform* Transform651 = (CTransform *)(m_pScene.createNode("Transform"));
Transform651->setDEF("proxyOn_7");
CProximitySensor* ProximitySensor652 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor652->setDEF("_29");
ProximitySensor652->setSize(new float[3]{12,12,12});
Transform651->addChildren(*ProximitySensor652);

LOD650->addChildren(*Transform651);

CTransform* Transform653 = (CTransform *)(m_pScene.createNode("Transform"));
Transform653->setDEF("proxyOff_8");
LOD650->addChildren(*Transform653);

Transform649->addChildren(*LOD650);

Transform637->addChildren(*Transform649);

Transform636->addChildren(*Transform637);

CTransform* Transform654 = (CTransform *)(m_pScene.createNode("Transform"));
Transform654->setDEF("bonus-blue2_2");
Transform654->setTranslation(new float[3]{-50,-10,-590});
CTransform* Transform655 = (CTransform *)(m_pScene.createNode("Transform"));
Transform655->setDEF("objLOD_9");
CLOD* LOD656 = (CLOD *)(m_pScene.createNode("LOD"));
LOD656->setRange(new float[1]{200}, 1);
CTransform* Transform657 = (CTransform *)(m_pScene.createNode("Transform"));
Transform657->setDEF("objOn_9");
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
Transform658->setDEF("_30");
CTransform* Transform659 = (CTransform *)(m_pScene.createNode("Transform"));
Transform659->setDEF("bonusObj_7");
Transform659->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform659->setScale(new float[3]{1,1,0.999999});
Transform659->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform659->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance661 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material662 = (CMaterial *)(m_pScene.createNode("Material"));
Material662->setAmbientIntensity(0.16172);
Material662->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material662->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material662->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material662->setShininess(0.106383);
Appearance661->setMaterial(*Material662);

Shape660->setAppearance(*Appearance661);

CIndexedFaceSet* IndexedFaceSet663 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet663->setSolid(False);
IndexedFaceSet663->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate664 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate664->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet663->setCoord(*Coordinate664);

Shape660->setGeometry(IndexedFaceSet663);

Transform659->addChildren(*Shape660);

Transform658->addChildren(*Transform659);

Transform657->addChildren(*Transform658);

LOD656->addChildren(*Transform657);

CTransform* Transform665 = (CTransform *)(m_pScene.createNode("Transform"));
Transform665->setDEF("objOff_9");
LOD656->addChildren(*Transform665);

Transform655->addChildren(*LOD656);

Transform654->addChildren(*Transform655);

CTransform* Transform666 = (CTransform *)(m_pScene.createNode("Transform"));
Transform666->setDEF("proxyLOD_9");
CLOD* LOD667 = (CLOD *)(m_pScene.createNode("LOD"));
LOD667->setRange(new float[1]{15}, 1);
CTransform* Transform668 = (CTransform *)(m_pScene.createNode("Transform"));
Transform668->setDEF("proxyOn_8");
CProximitySensor* ProximitySensor669 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor669->setDEF("_31");
ProximitySensor669->setSize(new float[3]{12,12,12});
Transform668->addChildren(*ProximitySensor669);

LOD667->addChildren(*Transform668);

CTransform* Transform670 = (CTransform *)(m_pScene.createNode("Transform"));
Transform670->setDEF("proxyOff_9");
LOD667->addChildren(*Transform670);

Transform666->addChildren(*LOD667);

Transform654->addChildren(*Transform666);

Transform636->addChildren(*Transform654);

CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setDEF("bonus-gold1_1");
Transform671->setTranslation(new float[3]{-50,-30,-625});
CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
Transform672->setDEF("objLOD_10");
CLOD* LOD673 = (CLOD *)(m_pScene.createNode("LOD"));
LOD673->setRange(new float[1]{200}, 1);
CTransform* Transform674 = (CTransform *)(m_pScene.createNode("Transform"));
Transform674->setDEF("objOn_10");
CTransform* Transform675 = (CTransform *)(m_pScene.createNode("Transform"));
Transform675->setDEF("_32");
CTransform* Transform676 = (CTransform *)(m_pScene.createNode("Transform"));
Transform676->setDEF("bnObj03_1");
Transform676->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform676->setScale(new float[3]{1,1,0.999999});
Transform676->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform676->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape677 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance678 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material679 = (CMaterial *)(m_pScene.createNode("Material"));
Material679->setAmbientIntensity(0.0498057);
Material679->setDiffuseColor(new float[3]{1,0.68781,0});
Material679->setSpecularColor(new float[3]{1,1,1});
Material679->setEmissiveColor(new float[3]{0.393617,0.0569849,0});
Material679->setShininess(0.202128);
Appearance678->setMaterial(*Material679);

Shape677->setAppearance(*Appearance678);

CIndexedFaceSet* IndexedFaceSet680 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet680->setConvex(False);
IndexedFaceSet680->setCreaseAngle(1.45281);
IndexedFaceSet680->setCoordIndex(new int[240]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1});
CCoordinate* Coordinate681 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate681->setPoint(new float[99]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652});
IndexedFaceSet680->setCoord(*Coordinate681);

Shape677->setGeometry(IndexedFaceSet680);

Transform676->addChildren(*Shape677);

Transform675->addChildren(*Transform676);

Transform674->addChildren(*Transform675);

LOD673->addChildren(*Transform674);

CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
Transform682->setDEF("objOff_10");
LOD673->addChildren(*Transform682);

Transform672->addChildren(*LOD673);

Transform671->addChildren(*Transform672);

CTransform* Transform683 = (CTransform *)(m_pScene.createNode("Transform"));
Transform683->setDEF("proxyLOD_10");
CLOD* LOD684 = (CLOD *)(m_pScene.createNode("LOD"));
LOD684->setRange(new float[1]{15}, 1);
CTransform* Transform685 = (CTransform *)(m_pScene.createNode("Transform"));
Transform685->setDEF("proxyOn_9");
CProximitySensor* ProximitySensor686 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor686->setDEF("_33");
ProximitySensor686->setSize(new float[3]{12,12,12});
Transform685->addChildren(*ProximitySensor686);

LOD684->addChildren(*Transform685);

CTransform* Transform687 = (CTransform *)(m_pScene.createNode("Transform"));
Transform687->setDEF("proxyOff_10");
LOD684->addChildren(*Transform687);

Transform683->addChildren(*LOD684);

Transform671->addChildren(*Transform683);

Transform636->addChildren(*Transform671);

Transform509->addChildren(*Transform636);

CTransform* Transform688 = (CTransform *)(m_pScene.createNode("Transform"));
Transform688->setDEF("B4-BLUE_GOLD");
CTransform* Transform689 = (CTransform *)(m_pScene.createNode("Transform"));
Transform689->setDEF("bonus-gold1_2");
Transform689->setTranslation(new float[3]{80,0,-930});
CLOD* LOD690 = (CLOD *)(m_pScene.createNode("LOD"));
LOD690->setRange(new float[1]{200}, 1);
CTransform* Transform691 = (CTransform *)(m_pScene.createNode("Transform"));
Transform691->setDEF("objOn_11");
CTransform* Transform692 = (CTransform *)(m_pScene.createNode("Transform"));
Transform692->setDEF("_34");
CTransform* Transform693 = (CTransform *)(m_pScene.createNode("Transform"));
Transform693->setDEF("bnObj03_2");
Transform693->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform693->setScale(new float[3]{1,1,0.999999});
Transform693->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform693->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance695 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material696 = (CMaterial *)(m_pScene.createNode("Material"));
Material696->setAmbientIntensity(0.0498057);
Material696->setDiffuseColor(new float[3]{1,0.68781,0});
Material696->setSpecularColor(new float[3]{1,1,1});
Material696->setEmissiveColor(new float[3]{0.393617,0.0569849,0});
Material696->setShininess(0.202128);
Appearance695->setMaterial(*Material696);

Shape694->setAppearance(*Appearance695);

CIndexedFaceSet* IndexedFaceSet697 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet697->setConvex(False);
IndexedFaceSet697->setCreaseAngle(1.45281);
IndexedFaceSet697->setCoordIndex(new int[240]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1});
CCoordinate* Coordinate698 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate698->setPoint(new float[99]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652});
IndexedFaceSet697->setCoord(*Coordinate698);

Shape694->setGeometry(IndexedFaceSet697);

Transform693->addChildren(*Shape694);

Transform692->addChildren(*Transform693);

Transform691->addChildren(*Transform692);

LOD690->addChildren(*Transform691);

CTransform* Transform699 = (CTransform *)(m_pScene.createNode("Transform"));
Transform699->setDEF("objOff_11");
LOD690->addChildren(*Transform699);

Transform689->addChildren(*LOD690);

CLOD* LOD700 = (CLOD *)(m_pScene.createNode("LOD"));
LOD700->setRange(new float[1]{15}, 1);
CTransform* Transform701 = (CTransform *)(m_pScene.createNode("Transform"));
Transform701->setDEF("proxyOn_10");
CProximitySensor* ProximitySensor702 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor702->setDEF("_35");
ProximitySensor702->setSize(new float[3]{12,12,12});
Transform701->addChildren(*ProximitySensor702);

LOD700->addChildren(*Transform701);

CTransform* Transform703 = (CTransform *)(m_pScene.createNode("Transform"));
Transform703->setDEF("proxyOff_11");
LOD700->addChildren(*Transform703);

Transform689->addChildren(*LOD700);

Transform688->addChildren(*Transform689);

CTransform* Transform704 = (CTransform *)(m_pScene.createNode("Transform"));
Transform704->setDEF("bonus-blue1_3");
Transform704->setTranslation(new float[3]{-5,-5,-760});
CLOD* LOD705 = (CLOD *)(m_pScene.createNode("LOD"));
LOD705->setRange(new float[1]{200}, 1);
CTransform* Transform706 = (CTransform *)(m_pScene.createNode("Transform"));
Transform706->setDEF("objOn_12");
CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
Transform707->setDEF("_36");
CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
Transform708->setDEF("bonusObj_8");
Transform708->setScale(new float[3]{1,1,0.999999});
Transform708->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform708->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance710 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material711 = (CMaterial *)(m_pScene.createNode("Material"));
Material711->setAmbientIntensity(0.16172);
Material711->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material711->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material711->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material711->setShininess(0.106383);
Appearance710->setMaterial(*Material711);

Shape709->setAppearance(*Appearance710);

CIndexedFaceSet* IndexedFaceSet712 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet712->setSolid(False);
IndexedFaceSet712->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate713 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate713->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet712->setCoord(*Coordinate713);

Shape709->setGeometry(IndexedFaceSet712);

Transform708->addChildren(*Shape709);

Transform707->addChildren(*Transform708);

Transform706->addChildren(*Transform707);

LOD705->addChildren(*Transform706);

CTransform* Transform714 = (CTransform *)(m_pScene.createNode("Transform"));
Transform714->setDEF("objOff_12");
LOD705->addChildren(*Transform714);

Transform704->addChildren(*LOD705);

CLOD* LOD715 = (CLOD *)(m_pScene.createNode("LOD"));
LOD715->setRange(new float[1]{15}, 1);
CTransform* Transform716 = (CTransform *)(m_pScene.createNode("Transform"));
Transform716->setDEF("proxyOn_11");
CProximitySensor* ProximitySensor717 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor717->setDEF("_37");
ProximitySensor717->setSize(new float[3]{12,12,12});
Transform716->addChildren(*ProximitySensor717);

LOD715->addChildren(*Transform716);

CTransform* Transform718 = (CTransform *)(m_pScene.createNode("Transform"));
Transform718->setDEF("proxyOff_12");
LOD715->addChildren(*Transform718);

Transform704->addChildren(*LOD715);

Transform688->addChildren(*Transform704);

CTransform* Transform719 = (CTransform *)(m_pScene.createNode("Transform"));
Transform719->setDEF("bonus-red2_2");
Transform719->setTranslation(new float[3]{0,-30,-800});
CLOD* LOD720 = (CLOD *)(m_pScene.createNode("LOD"));
LOD720->setRange(new float[1]{200}, 1);
CTransform* Transform721 = (CTransform *)(m_pScene.createNode("Transform"));
Transform721->setDEF("objOn_13");
CTransform* Transform722 = (CTransform *)(m_pScene.createNode("Transform"));
Transform722->setDEF("_38");
CTransform* Transform723 = (CTransform *)(m_pScene.createNode("Transform"));
Transform723->setDEF("stern_3");
Transform723->setScale(new float[3]{1,1,0.999999});
Transform723->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform723->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape724 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance725 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material726 = (CMaterial *)(m_pScene.createNode("Material"));
Material726->setAmbientIntensity(0.16172);
Material726->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material726->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material726->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material726->setShininess(0.106383);
Appearance725->setMaterial(*Material726);

Shape724->setAppearance(*Appearance725);

CIndexedFaceSet* IndexedFaceSet727 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet727->setCoordIndex(new int[214]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1});
CCoordinate* Coordinate728 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate728->setPoint(new float[150]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965});
IndexedFaceSet727->setCoord(*Coordinate728);

Shape724->setGeometry(IndexedFaceSet727);

Transform723->addChildren(*Shape724);

Transform722->addChildren(*Transform723);

Transform721->addChildren(*Transform722);

LOD720->addChildren(*Transform721);

CTransform* Transform729 = (CTransform *)(m_pScene.createNode("Transform"));
Transform729->setDEF("objOff_13");
LOD720->addChildren(*Transform729);

Transform719->addChildren(*LOD720);

CLOD* LOD730 = (CLOD *)(m_pScene.createNode("LOD"));
LOD730->setRange(new float[1]{15}, 1);
CTransform* Transform731 = (CTransform *)(m_pScene.createNode("Transform"));
Transform731->setDEF("proxyOn_12");
CProximitySensor* ProximitySensor732 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor732->setDEF("_39");
ProximitySensor732->setSize(new float[3]{12,12,12});
Transform731->addChildren(*ProximitySensor732);

LOD730->addChildren(*Transform731);

CTransform* Transform733 = (CTransform *)(m_pScene.createNode("Transform"));
Transform733->setDEF("proxyOff_13");
LOD730->addChildren(*Transform733);

Transform719->addChildren(*LOD730);

Transform688->addChildren(*Transform719);

CTransform* Transform734 = (CTransform *)(m_pScene.createNode("Transform"));
Transform734->setDEF("bonus-blue3_2");
Transform734->setTranslation(new float[3]{45,-15,-880});
CLOD* LOD735 = (CLOD *)(m_pScene.createNode("LOD"));
LOD735->setRange(new float[1]{200}, 1);
CTransform* Transform736 = (CTransform *)(m_pScene.createNode("Transform"));
Transform736->setDEF("objOn_14");
CTransform* Transform737 = (CTransform *)(m_pScene.createNode("Transform"));
Transform737->setDEF("_40");
CTransform* Transform738 = (CTransform *)(m_pScene.createNode("Transform"));
Transform738->setDEF("bonusObj_9");
Transform738->setScale(new float[3]{1,1,0.999999});
Transform738->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform738->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance740 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material741 = (CMaterial *)(m_pScene.createNode("Material"));
Material741->setAmbientIntensity(0.16172);
Material741->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material741->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material741->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material741->setShininess(0.106383);
Appearance740->setMaterial(*Material741);

Shape739->setAppearance(*Appearance740);

CIndexedFaceSet* IndexedFaceSet742 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet742->setSolid(False);
IndexedFaceSet742->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate743 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate743->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet742->setCoord(*Coordinate743);

Shape739->setGeometry(IndexedFaceSet742);

Transform738->addChildren(*Shape739);

Transform737->addChildren(*Transform738);

Transform736->addChildren(*Transform737);

LOD735->addChildren(*Transform736);

CTransform* Transform744 = (CTransform *)(m_pScene.createNode("Transform"));
Transform744->setDEF("objOff_14");
LOD735->addChildren(*Transform744);

Transform734->addChildren(*LOD735);

CLOD* LOD745 = (CLOD *)(m_pScene.createNode("LOD"));
LOD745->setRange(new float[1]{15}, 1);
CTransform* Transform746 = (CTransform *)(m_pScene.createNode("Transform"));
Transform746->setDEF("proxyOn_13");
CProximitySensor* ProximitySensor747 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor747->setDEF("_41");
ProximitySensor747->setSize(new float[3]{12,12,12});
Transform746->addChildren(*ProximitySensor747);

LOD745->addChildren(*Transform746);

CTransform* Transform748 = (CTransform *)(m_pScene.createNode("Transform"));
Transform748->setDEF("proxyOff_14");
LOD745->addChildren(*Transform748);

Transform734->addChildren(*LOD745);

Transform688->addChildren(*Transform734);

CTransform* Transform749 = (CTransform *)(m_pScene.createNode("Transform"));
Transform749->setDEF("bonus-blue4_2");
Transform749->setTranslation(new float[3]{80,-30,-950});
CLOD* LOD750 = (CLOD *)(m_pScene.createNode("LOD"));
LOD750->setRange(new float[1]{200}, 1);
CTransform* Transform751 = (CTransform *)(m_pScene.createNode("Transform"));
Transform751->setDEF("objOn_15");
CTransform* Transform752 = (CTransform *)(m_pScene.createNode("Transform"));
Transform752->setDEF("_42");
CTransform* Transform753 = (CTransform *)(m_pScene.createNode("Transform"));
Transform753->setDEF("bonusObj_10");
Transform753->setScale(new float[3]{1,1,0.999999});
Transform753->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform753->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance755 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material756 = (CMaterial *)(m_pScene.createNode("Material"));
Material756->setAmbientIntensity(0.16172);
Material756->setDiffuseColor(new float[3]{0,0.551321,0.989362});
Material756->setSpecularColor(new float[3]{0.757435,1,0.939636});
Material756->setEmissiveColor(new float[3]{0,0.00242705,0.265957});
Material756->setShininess(0.106383);
Appearance755->setMaterial(*Material756);

Shape754->setAppearance(*Appearance755);

CIndexedFaceSet* IndexedFaceSet757 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet757->setSolid(False);
IndexedFaceSet757->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate758 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate758->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet757->setCoord(*Coordinate758);

Shape754->setGeometry(IndexedFaceSet757);

Transform753->addChildren(*Shape754);

Transform752->addChildren(*Transform753);

Transform751->addChildren(*Transform752);

LOD750->addChildren(*Transform751);

CTransform* Transform759 = (CTransform *)(m_pScene.createNode("Transform"));
Transform759->setDEF("objOff_15");
LOD750->addChildren(*Transform759);

Transform749->addChildren(*LOD750);

CLOD* LOD760 = (CLOD *)(m_pScene.createNode("LOD"));
LOD760->setRange(new float[1]{15}, 1);
CTransform* Transform761 = (CTransform *)(m_pScene.createNode("Transform"));
Transform761->setDEF("proxyOn_14");
CProximitySensor* ProximitySensor762 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor762->setDEF("_43");
ProximitySensor762->setSize(new float[3]{12,12,12});
Transform761->addChildren(*ProximitySensor762);

LOD760->addChildren(*Transform761);

CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
Transform763->setDEF("proxyOff_15");
LOD760->addChildren(*Transform763);

Transform749->addChildren(*LOD760);

Transform688->addChildren(*Transform749);

CTransform* Transform764 = (CTransform *)(m_pScene.createNode("Transform"));
Transform764->setDEF("bonus-blue5_2");
Transform764->setTranslation(new float[3]{20,0,-1000});
CLOD* LOD765 = (CLOD *)(m_pScene.createNode("LOD"));
LOD765->setRange(new float[1]{200}, 1);
CTransform* Transform766 = (CTransform *)(m_pScene.createNode("Transform"));
Transform766->setDEF("objOn_16");
CTransform* Transform767 = (CTransform *)(m_pScene.createNode("Transform"));
Transform767->setDEF("bonusObj_11");
Transform767->setScale(new float[3]{1,1,0.999999});
Transform767->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform767->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape768 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance769 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material770 = (CMaterial *)(m_pScene.createNode("Material"));
Material770->setAmbientIntensity(0.16172);
Material770->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material770->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material770->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material770->setShininess(0.106383);
Appearance769->setMaterial(*Material770);

Shape768->setAppearance(*Appearance769);

CIndexedFaceSet* IndexedFaceSet771 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet771->setSolid(False);
IndexedFaceSet771->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate772 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate772->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet771->setCoord(*Coordinate772);

Shape768->setGeometry(IndexedFaceSet771);

Transform767->addChildren(*Shape768);

Transform766->addChildren(*Transform767);

LOD765->addChildren(*Transform766);

CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
Transform773->setDEF("objOff_16");
LOD765->addChildren(*Transform773);

Transform764->addChildren(*LOD765);

CLOD* LOD774 = (CLOD *)(m_pScene.createNode("LOD"));
LOD774->setRange(new float[1]{15}, 1);
CTransform* Transform775 = (CTransform *)(m_pScene.createNode("Transform"));
Transform775->setDEF("proxyOn_15");
CProximitySensor* ProximitySensor776 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor776->setDEF("_44");
ProximitySensor776->setSize(new float[3]{12,12,12});
Transform775->addChildren(*ProximitySensor776);

LOD774->addChildren(*Transform775);

CTransform* Transform777 = (CTransform *)(m_pScene.createNode("Transform"));
Transform777->setDEF("proxyOff_16");
LOD774->addChildren(*Transform777);

Transform764->addChildren(*LOD774);

Transform688->addChildren(*Transform764);

Transform509->addChildren(*Transform688);

CTransform* Transform778 = (CTransform *)(m_pScene.createNode("Transform"));
Transform778->setDEF("B5-BLUE_RED");
CTransform* Transform779 = (CTransform *)(m_pScene.createNode("Transform"));
Transform779->setDEF("bonus-blue1");
Transform779->setTranslation(new float[3]{-35,0,-1050});
CLOD* LOD780 = (CLOD *)(m_pScene.createNode("LOD"));
LOD780->setRange(new float[1]{200}, 1);
CTransform* Transform781 = (CTransform *)(m_pScene.createNode("Transform"));
Transform781->setDEF("objOn_17");
CTransform* Transform782 = (CTransform *)(m_pScene.createNode("Transform"));
Transform782->setDEF("_45");
CTransform* Transform783 = (CTransform *)(m_pScene.createNode("Transform"));
Transform783->setDEF("bonusObj_12");
Transform783->setScale(new float[3]{1,1,0.999999});
Transform783->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform783->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance785 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material786 = (CMaterial *)(m_pScene.createNode("Material"));
Material786->setAmbientIntensity(0.16172);
Material786->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material786->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material786->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material786->setShininess(0.106383);
Appearance785->setMaterial(*Material786);

Shape784->setAppearance(*Appearance785);

CIndexedFaceSet* IndexedFaceSet787 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet787->setSolid(False);
IndexedFaceSet787->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate788 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate788->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet787->setCoord(*Coordinate788);

Shape784->setGeometry(IndexedFaceSet787);

Transform783->addChildren(*Shape784);

Transform782->addChildren(*Transform783);

Transform781->addChildren(*Transform782);

LOD780->addChildren(*Transform781);

CTransform* Transform789 = (CTransform *)(m_pScene.createNode("Transform"));
Transform789->setDEF("objOff_17");
LOD780->addChildren(*Transform789);

Transform779->addChildren(*LOD780);

CLOD* LOD790 = (CLOD *)(m_pScene.createNode("LOD"));
LOD790->setRange(new float[1]{15}, 1);
CTransform* Transform791 = (CTransform *)(m_pScene.createNode("Transform"));
Transform791->setDEF("proxyOn_16");
CProximitySensor* ProximitySensor792 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor792->setDEF("_46");
ProximitySensor792->setSize(new float[3]{12,12,12});
Transform791->addChildren(*ProximitySensor792);

LOD790->addChildren(*Transform791);

CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
Transform793->setDEF("proxyOff_17");
LOD790->addChildren(*Transform793);

Transform779->addChildren(*LOD790);

Transform778->addChildren(*Transform779);

CTransform* Transform794 = (CTransform *)(m_pScene.createNode("Transform"));
Transform794->setDEF("bonus-blue2");
Transform794->setTranslation(new float[3]{-70,-10,-1100});
CLOD* LOD795 = (CLOD *)(m_pScene.createNode("LOD"));
LOD795->setRange(new float[1]{200}, 1);
CTransform* Transform796 = (CTransform *)(m_pScene.createNode("Transform"));
Transform796->setDEF("objOn_18");
CTransform* Transform797 = (CTransform *)(m_pScene.createNode("Transform"));
Transform797->setDEF("_47");
CTransform* Transform798 = (CTransform *)(m_pScene.createNode("Transform"));
Transform798->setDEF("bonusObj_13");
Transform798->setScale(new float[3]{1,1,0.999999});
Transform798->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform798->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape799 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance800 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material801 = (CMaterial *)(m_pScene.createNode("Material"));
Material801->setAmbientIntensity(0.16172);
Material801->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material801->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material801->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material801->setShininess(0.106383);
Appearance800->setMaterial(*Material801);

Shape799->setAppearance(*Appearance800);

CIndexedFaceSet* IndexedFaceSet802 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet802->setSolid(False);
IndexedFaceSet802->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate803 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate803->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet802->setCoord(*Coordinate803);

Shape799->setGeometry(IndexedFaceSet802);

Transform798->addChildren(*Shape799);

Transform797->addChildren(*Transform798);

Transform796->addChildren(*Transform797);

LOD795->addChildren(*Transform796);

CTransform* Transform804 = (CTransform *)(m_pScene.createNode("Transform"));
Transform804->setDEF("objOff_18");
LOD795->addChildren(*Transform804);

Transform794->addChildren(*LOD795);

CLOD* LOD805 = (CLOD *)(m_pScene.createNode("LOD"));
LOD805->setRange(new float[1]{15}, 1);
CTransform* Transform806 = (CTransform *)(m_pScene.createNode("Transform"));
Transform806->setDEF("proxyOn_17");
CProximitySensor* ProximitySensor807 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor807->setDEF("_48");
ProximitySensor807->setSize(new float[3]{12,12,12});
Transform806->addChildren(*ProximitySensor807);

LOD805->addChildren(*Transform806);

CTransform* Transform808 = (CTransform *)(m_pScene.createNode("Transform"));
Transform808->setDEF("proxyOff_18");
LOD805->addChildren(*Transform808);

Transform794->addChildren(*LOD805);

Transform778->addChildren(*Transform794);

CTransform* Transform809 = (CTransform *)(m_pScene.createNode("Transform"));
Transform809->setDEF("bonus-blue3");
Transform809->setTranslation(new float[3]{-15,-20,-1200});
CLOD* LOD810 = (CLOD *)(m_pScene.createNode("LOD"));
LOD810->setRange(new float[1]{200}, 1);
CTransform* Transform811 = (CTransform *)(m_pScene.createNode("Transform"));
Transform811->setDEF("objOn_19");
CTransform* Transform812 = (CTransform *)(m_pScene.createNode("Transform"));
Transform812->setDEF("_49");
CTransform* Transform813 = (CTransform *)(m_pScene.createNode("Transform"));
Transform813->setDEF("bonusObj_14");
Transform813->setScale(new float[3]{1,1,0.999999});
Transform813->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform813->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape814 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance815 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material816 = (CMaterial *)(m_pScene.createNode("Material"));
Material816->setAmbientIntensity(0.16172);
Material816->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material816->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material816->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material816->setShininess(0.106383);
Appearance815->setMaterial(*Material816);

Shape814->setAppearance(*Appearance815);

CIndexedFaceSet* IndexedFaceSet817 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet817->setSolid(False);
IndexedFaceSet817->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate818 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate818->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet817->setCoord(*Coordinate818);

Shape814->setGeometry(IndexedFaceSet817);

Transform813->addChildren(*Shape814);

Transform812->addChildren(*Transform813);

Transform811->addChildren(*Transform812);

LOD810->addChildren(*Transform811);

CTransform* Transform819 = (CTransform *)(m_pScene.createNode("Transform"));
Transform819->setDEF("objOff_19");
LOD810->addChildren(*Transform819);

Transform809->addChildren(*LOD810);

CLOD* LOD820 = (CLOD *)(m_pScene.createNode("LOD"));
LOD820->setRange(new float[1]{15}, 1);
CTransform* Transform821 = (CTransform *)(m_pScene.createNode("Transform"));
Transform821->setDEF("proxyOn_18");
CProximitySensor* ProximitySensor822 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor822->setDEF("_50");
ProximitySensor822->setSize(new float[3]{12,12,12});
Transform821->addChildren(*ProximitySensor822);

LOD820->addChildren(*Transform821);

CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
Transform823->setDEF("proxyOff_19");
LOD820->addChildren(*Transform823);

Transform809->addChildren(*LOD820);

Transform778->addChildren(*Transform809);

CTransform* Transform824 = (CTransform *)(m_pScene.createNode("Transform"));
Transform824->setDEF("bonus-blue4");
Transform824->setTranslation(new float[3]{-75,-25,-1270});
CLOD* LOD825 = (CLOD *)(m_pScene.createNode("LOD"));
LOD825->setRange(new float[1]{200}, 1);
CTransform* Transform826 = (CTransform *)(m_pScene.createNode("Transform"));
Transform826->setDEF("objOn_20");
CTransform* Transform827 = (CTransform *)(m_pScene.createNode("Transform"));
Transform827->setDEF("_51");
CTransform* Transform828 = (CTransform *)(m_pScene.createNode("Transform"));
Transform828->setDEF("bonusObj");
Transform828->setScale(new float[3]{1,1,0.999999});
Transform828->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform828->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance830 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material831 = (CMaterial *)(m_pScene.createNode("Material"));
Material831->setAmbientIntensity(0.16172);
Material831->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material831->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material831->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material831->setShininess(0.106383);
Appearance830->setMaterial(*Material831);

Shape829->setAppearance(*Appearance830);

CIndexedFaceSet* IndexedFaceSet832 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet832->setSolid(False);
IndexedFaceSet832->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate833 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate833->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet832->setCoord(*Coordinate833);

Shape829->setGeometry(IndexedFaceSet832);

Transform828->addChildren(*Shape829);

Transform827->addChildren(*Transform828);

Transform826->addChildren(*Transform827);

LOD825->addChildren(*Transform826);

CTransform* Transform834 = (CTransform *)(m_pScene.createNode("Transform"));
Transform834->setDEF("objOff_20");
LOD825->addChildren(*Transform834);

Transform824->addChildren(*LOD825);

CLOD* LOD835 = (CLOD *)(m_pScene.createNode("LOD"));
LOD835->setRange(new float[1]{15}, 1);
CTransform* Transform836 = (CTransform *)(m_pScene.createNode("Transform"));
Transform836->setDEF("proxyOn_19");
CProximitySensor* ProximitySensor837 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor837->setDEF("_52");
ProximitySensor837->setSize(new float[3]{12,12,12});
Transform836->addChildren(*ProximitySensor837);

LOD835->addChildren(*Transform836);

CTransform* Transform838 = (CTransform *)(m_pScene.createNode("Transform"));
Transform838->setDEF("proxyOff_20");
LOD835->addChildren(*Transform838);

Transform824->addChildren(*LOD835);

Transform778->addChildren(*Transform824);

CTransform* Transform839 = (CTransform *)(m_pScene.createNode("Transform"));
Transform839->setDEF("bonus-blue5");
Transform839->setTranslation(new float[3]{40,-30,-1320});
CLOD* LOD840 = (CLOD *)(m_pScene.createNode("LOD"));
LOD840->setRange(new float[1]{200}, 1);
CTransform* Transform841 = (CTransform *)(m_pScene.createNode("Transform"));
Transform841->setDEF("objOn_21");
CTransform* Transform842 = (CTransform *)(m_pScene.createNode("Transform"));
Transform842->setDEF("bonusObj_15");
Transform842->setScale(new float[3]{1,1,0.999999});
Transform842->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform842->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance844 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material845 = (CMaterial *)(m_pScene.createNode("Material"));
Material845->setAmbientIntensity(0.16172);
Material845->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material845->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material845->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material845->setShininess(0.106383);
Appearance844->setMaterial(*Material845);

Shape843->setAppearance(*Appearance844);

CIndexedFaceSet* IndexedFaceSet846 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet846->setSolid(False);
IndexedFaceSet846->setCoordIndex(new int[384]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1});
CCoordinate* Coordinate847 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate847->setPoint(new float[150]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655});
IndexedFaceSet846->setCoord(*Coordinate847);

Shape843->setGeometry(IndexedFaceSet846);

Transform842->addChildren(*Shape843);

Transform841->addChildren(*Transform842);

LOD840->addChildren(*Transform841);

CTransform* Transform848 = (CTransform *)(m_pScene.createNode("Transform"));
Transform848->setDEF("objOff_21");
LOD840->addChildren(*Transform848);

Transform839->addChildren(*LOD840);

CLOD* LOD849 = (CLOD *)(m_pScene.createNode("LOD"));
LOD849->setRange(new float[1]{15}, 1);
CTransform* Transform850 = (CTransform *)(m_pScene.createNode("Transform"));
Transform850->setDEF("proxyOn_20");
CProximitySensor* ProximitySensor851 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor851->setDEF("_53");
ProximitySensor851->setSize(new float[3]{12,12,12});
Transform850->addChildren(*ProximitySensor851);

LOD849->addChildren(*Transform850);

CTransform* Transform852 = (CTransform *)(m_pScene.createNode("Transform"));
Transform852->setDEF("proxyOff_21");
LOD849->addChildren(*Transform852);

Transform839->addChildren(*LOD849);

Transform778->addChildren(*Transform839);

CTransform* Transform853 = (CTransform *)(m_pScene.createNode("Transform"));
Transform853->setDEF("bonus-red1");
Transform853->setTranslation(new float[3]{50,32,-1209});
CLOD* LOD854 = (CLOD *)(m_pScene.createNode("LOD"));
LOD854->setRange(new float[1]{200}, 1);
CTransform* Transform855 = (CTransform *)(m_pScene.createNode("Transform"));
Transform855->setDEF("objOn_22");
CTransform* Transform856 = (CTransform *)(m_pScene.createNode("Transform"));
Transform856->setDEF("_54");
CTransform* Transform857 = (CTransform *)(m_pScene.createNode("Transform"));
Transform857->setDEF("stern_4");
Transform857->setScale(new float[3]{1,1,0.999999});
Transform857->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform857->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance859 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material860 = (CMaterial *)(m_pScene.createNode("Material"));
Material860->setAmbientIntensity(0.16172);
Material860->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material860->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material860->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material860->setShininess(0.106383);
Appearance859->setMaterial(*Material860);

Shape858->setAppearance(*Appearance859);

CIndexedFaceSet* IndexedFaceSet861 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet861->setCoordIndex(new int[214]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1});
CCoordinate* Coordinate862 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate862->setPoint(new float[150]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965});
IndexedFaceSet861->setCoord(*Coordinate862);

Shape858->setGeometry(IndexedFaceSet861);

Transform857->addChildren(*Shape858);

Transform856->addChildren(*Transform857);

Transform855->addChildren(*Transform856);

LOD854->addChildren(*Transform855);

CTransform* Transform863 = (CTransform *)(m_pScene.createNode("Transform"));
Transform863->setDEF("objOff_22");
LOD854->addChildren(*Transform863);

Transform853->addChildren(*LOD854);

CLOD* LOD864 = (CLOD *)(m_pScene.createNode("LOD"));
LOD864->setRange(new float[1]{15}, 1);
CTransform* Transform865 = (CTransform *)(m_pScene.createNode("Transform"));
Transform865->setDEF("proxyOn_21");
CProximitySensor* ProximitySensor866 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor866->setDEF("_55");
ProximitySensor866->setSize(new float[3]{12,12,12});
Transform865->addChildren(*ProximitySensor866);

LOD864->addChildren(*Transform865);

CTransform* Transform867 = (CTransform *)(m_pScene.createNode("Transform"));
Transform867->setDEF("proxyOff_22");
LOD864->addChildren(*Transform867);

Transform853->addChildren(*LOD864);

Transform778->addChildren(*Transform853);

CTransform* Transform868 = (CTransform *)(m_pScene.createNode("Transform"));
Transform868->setDEF("bonus-red2");
Transform868->setTranslation(new float[3]{-100,32,-1039});
CLOD* LOD869 = (CLOD *)(m_pScene.createNode("LOD"));
LOD869->setRange(new float[1]{200}, 1);
CTransform* Transform870 = (CTransform *)(m_pScene.createNode("Transform"));
Transform870->setDEF("objOn_23");
CTransform* Transform871 = (CTransform *)(m_pScene.createNode("Transform"));
Transform871->setDEF("_56");
CTransform* Transform872 = (CTransform *)(m_pScene.createNode("Transform"));
Transform872->setDEF("stern");
Transform872->setScale(new float[3]{1,1,0.999999});
Transform872->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform872->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape873 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance874 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material875 = (CMaterial *)(m_pScene.createNode("Material"));
Material875->setAmbientIntensity(0.16172);
Material875->setDiffuseColor(new float[3]{0.989362,0.398496,0.0160839});
Material875->setSpecularColor(new float[3]{1,0.81213,0.292798});
Material875->setEmissiveColor(new float[3]{0.265957,0.215992,0.0778717});
Material875->setShininess(0.106383);
Appearance874->setMaterial(*Material875);

Shape873->setAppearance(*Appearance874);

CIndexedFaceSet* IndexedFaceSet876 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet876->setCoordIndex(new int[214]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1});
CCoordinate* Coordinate877 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate877->setPoint(new float[150]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965});
IndexedFaceSet876->setCoord(*Coordinate877);

Shape873->setGeometry(IndexedFaceSet876);

Transform872->addChildren(*Shape873);

Transform871->addChildren(*Transform872);

Transform870->addChildren(*Transform871);

LOD869->addChildren(*Transform870);

CTransform* Transform878 = (CTransform *)(m_pScene.createNode("Transform"));
Transform878->setDEF("objOff_23");
LOD869->addChildren(*Transform878);

Transform868->addChildren(*LOD869);

CLOD* LOD879 = (CLOD *)(m_pScene.createNode("LOD"));
LOD879->setRange(new float[1]{15}, 1);
CTransform* Transform880 = (CTransform *)(m_pScene.createNode("Transform"));
Transform880->setDEF("proxyOn_22");
CProximitySensor* ProximitySensor881 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor881->setDEF("_57");
ProximitySensor881->setSize(new float[3]{12,12,12});
Transform880->addChildren(*ProximitySensor881);

LOD879->addChildren(*Transform880);

CTransform* Transform882 = (CTransform *)(m_pScene.createNode("Transform"));
Transform882->setDEF("proxyOff_23");
LOD879->addChildren(*Transform882);

Transform868->addChildren(*LOD879);

Transform778->addChildren(*Transform868);

Transform509->addChildren(*Transform778);

CTransform* Transform883 = (CTransform *)(m_pScene.createNode("Transform"));
Transform883->setDEF("B6-GOLD");
CTransform* Transform884 = (CTransform *)(m_pScene.createNode("Transform"));
Transform884->setDEF("bonus-gold3");
Transform884->setTranslation(new float[3]{30,-35,-1975});
CLOD* LOD885 = (CLOD *)(m_pScene.createNode("LOD"));
LOD885->setRange(new float[1]{200}, 1);
CTransform* Transform886 = (CTransform *)(m_pScene.createNode("Transform"));
Transform886->setDEF("objOn_24");
CTransform* Transform887 = (CTransform *)(m_pScene.createNode("Transform"));
Transform887->setDEF("_58");
CTransform* Transform888 = (CTransform *)(m_pScene.createNode("Transform"));
Transform888->setDEF("bnObj03_3");
Transform888->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform888->setScale(new float[3]{1,1,0.999999});
Transform888->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform888->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance890 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material891 = (CMaterial *)(m_pScene.createNode("Material"));
Material891->setAmbientIntensity(0.0498057);
Material891->setDiffuseColor(new float[3]{1,0.68781,0});
Material891->setSpecularColor(new float[3]{1,1,1});
Material891->setEmissiveColor(new float[3]{0.393617,0.0569849,0});
Material891->setShininess(0.202128);
Appearance890->setMaterial(*Material891);

Shape889->setAppearance(*Appearance890);

CIndexedFaceSet* IndexedFaceSet892 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet892->setConvex(False);
IndexedFaceSet892->setCreaseAngle(1.45281);
IndexedFaceSet892->setCoordIndex(new int[240]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1});
CCoordinate* Coordinate893 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate893->setPoint(new float[99]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652});
IndexedFaceSet892->setCoord(*Coordinate893);

Shape889->setGeometry(IndexedFaceSet892);

Transform888->addChildren(*Shape889);

Transform887->addChildren(*Transform888);

Transform886->addChildren(*Transform887);

LOD885->addChildren(*Transform886);

CTransform* Transform894 = (CTransform *)(m_pScene.createNode("Transform"));
Transform894->setDEF("objOff_24");
LOD885->addChildren(*Transform894);

Transform884->addChildren(*LOD885);

CLOD* LOD895 = (CLOD *)(m_pScene.createNode("LOD"));
LOD895->setRange(new float[1]{15}, 1);
CTransform* Transform896 = (CTransform *)(m_pScene.createNode("Transform"));
Transform896->setDEF("proxyOn_23");
CProximitySensor* ProximitySensor897 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor897->setDEF("_59");
ProximitySensor897->setSize(new float[3]{12,12,12});
Transform896->addChildren(*ProximitySensor897);

LOD895->addChildren(*Transform896);

CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
Transform898->setDEF("proxyOff_24");
LOD895->addChildren(*Transform898);

Transform884->addChildren(*LOD895);

Transform883->addChildren(*Transform884);

CTransform* Transform899 = (CTransform *)(m_pScene.createNode("Transform"));
Transform899->setDEF("bonus-gold1_3");
Transform899->setTranslation(new float[3]{50,-10,-1856});
CLOD* LOD900 = (CLOD *)(m_pScene.createNode("LOD"));
LOD900->setRange(new float[1]{200}, 1);
CTransform* Transform901 = (CTransform *)(m_pScene.createNode("Transform"));
Transform901->setDEF("objOn_25");
CTransform* Transform902 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setDEF("bnObj03_4");
Transform903->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform903->setScale(new float[3]{1,1,0.999999});
Transform903->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform903->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape904 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance905 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material906 = (CMaterial *)(m_pScene.createNode("Material"));
Material906->setAmbientIntensity(0.0498057);
Material906->setDiffuseColor(new float[3]{1,0.68781,0});
Material906->setSpecularColor(new float[3]{1,1,1});
Material906->setEmissiveColor(new float[3]{0.393617,0.0569849,0});
Material906->setShininess(0.202128);
Appearance905->setMaterial(*Material906);

Shape904->setAppearance(*Appearance905);

CIndexedFaceSet* IndexedFaceSet907 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet907->setConvex(False);
IndexedFaceSet907->setCreaseAngle(1.45281);
IndexedFaceSet907->setCoordIndex(new int[240]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1});
CCoordinate* Coordinate908 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate908->setPoint(new float[99]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652});
IndexedFaceSet907->setCoord(*Coordinate908);

Shape904->setGeometry(IndexedFaceSet907);

Transform903->addChildren(*Shape904);

Transform902->addChildren(*Transform903);

Transform901->addChildren(*Transform902);

LOD900->addChildren(*Transform901);

CTransform* Transform909 = (CTransform *)(m_pScene.createNode("Transform"));
Transform909->setDEF("objOff_25");
LOD900->addChildren(*Transform909);

Transform899->addChildren(*LOD900);

CLOD* LOD910 = (CLOD *)(m_pScene.createNode("LOD"));
LOD910->setRange(new float[1]{15}, 1);
CTransform* Transform911 = (CTransform *)(m_pScene.createNode("Transform"));
Transform911->setDEF("proxyOn_24");
CProximitySensor* ProximitySensor912 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor912->setDEF("_60");
ProximitySensor912->setSize(new float[3]{12,12,12});
Transform911->addChildren(*ProximitySensor912);

LOD910->addChildren(*Transform911);

CTransform* Transform913 = (CTransform *)(m_pScene.createNode("Transform"));
Transform913->setDEF("proxyOff_25");
LOD910->addChildren(*Transform913);

Transform899->addChildren(*LOD910);

Transform883->addChildren(*Transform899);

CTransform* Transform914 = (CTransform *)(m_pScene.createNode("Transform"));
Transform914->setDEF("bonus-gold1");
Transform914->setTranslation(new float[3]{-30,-10,-1838});
CLOD* LOD915 = (CLOD *)(m_pScene.createNode("LOD"));
LOD915->setRange(new float[1]{200}, 1);
CTransform* Transform916 = (CTransform *)(m_pScene.createNode("Transform"));
Transform916->setDEF("objOn_26");
CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
Transform917->setDEF("_61");
CTransform* Transform918 = (CTransform *)(m_pScene.createNode("Transform"));
Transform918->setDEF("bnObj03");
Transform918->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform918->setScale(new float[3]{1,1,0.999999});
Transform918->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform918->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance920 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material921 = (CMaterial *)(m_pScene.createNode("Material"));
Material921->setAmbientIntensity(0.0498057);
Material921->setDiffuseColor(new float[3]{1,0.68781,0});
Material921->setSpecularColor(new float[3]{1,1,1});
Material921->setEmissiveColor(new float[3]{0.393617,0.0569849,0});
Material921->setShininess(0.202128);
Appearance920->setMaterial(*Material921);

Shape919->setAppearance(*Appearance920);

CIndexedFaceSet* IndexedFaceSet922 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet922->setConvex(False);
IndexedFaceSet922->setCreaseAngle(1.45281);
IndexedFaceSet922->setCoordIndex(new int[240]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1});
CCoordinate* Coordinate923 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate923->setPoint(new float[99]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652});
IndexedFaceSet922->setCoord(*Coordinate923);

Shape919->setGeometry(IndexedFaceSet922);

Transform918->addChildren(*Shape919);

Transform917->addChildren(*Transform918);

Transform916->addChildren(*Transform917);

LOD915->addChildren(*Transform916);

CTransform* Transform924 = (CTransform *)(m_pScene.createNode("Transform"));
Transform924->setDEF("objOff_26");
LOD915->addChildren(*Transform924);

Transform914->addChildren(*LOD915);

CLOD* LOD925 = (CLOD *)(m_pScene.createNode("LOD"));
LOD925->setRange(new float[1]{15}, 1);
CTransform* Transform926 = (CTransform *)(m_pScene.createNode("Transform"));
Transform926->setDEF("proxyOn_25");
CProximitySensor* ProximitySensor927 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor927->setDEF("_62");
ProximitySensor927->setSize(new float[3]{12,12,12});
Transform926->addChildren(*ProximitySensor927);

LOD925->addChildren(*Transform926);

CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
Transform928->setDEF("proxyOff_26");
LOD925->addChildren(*Transform928);

Transform914->addChildren(*LOD925);

Transform883->addChildren(*Transform914);

Transform509->addChildren(*Transform883);

CTransform* Transform929 = (CTransform *)(m_pScene.createNode("Transform"));
Transform929->setDEF("bonusRotor");
CGroup* Group930 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group931 = (CGroup *)(m_pScene.createNode("Group"));
Group931->setDEF("rotor_anim");
CTimeSensor* TimeSensor932 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor932->setDEF("Time_6");
TimeSensor932->setCycleInterval(4);
TimeSensor932->setLoop(True);
TimeSensor932->setStartTime(1408703701.08913);
TimeSensor932->setStopTime(1);
Group931->addChildren(*TimeSensor932);

Group930->addChildren(*Group931);

COrientationInterpolator* OrientationInterpolator933 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator933->setDEF("rotorRotationInterp");
OrientationInterpolator933->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator933->setKeyValue(new float[20]{0,0,1,0,0,1,0,4.71239,0,1,0,3.14159,0,1,0,1.56705,0,0,1,0});
Group930->addChildren(*OrientationInterpolator933);

Transform929->addChildren(*Group930);

CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform929->addChildren(*Transform934);

Transform509->addChildren(*Transform929);

group->addChildren(*Transform509);

CTransform* Transform935 = (CTransform *)(m_pScene.createNode("Transform"));
Transform935->setDEF("ALERT");
CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
Transform936->setDEF("mountain01_1");
CScript* Script937 = (CScript *)(m_pScene.createNode("Script"));
Script937->setDEF("_proxyPlugger_1");
Cfield* field938 = new Cfield();
field938->setName("alert");
field938->setAccessType("outputOnly");
field938->setType("SFTime");
Script937->addField(*field938);

Cfield* field939 = new Cfield();
field939->setName("hitTime");
field939->setAccessType("inputOnly");
field939->setType("SFTime");
Script937->addField(*field939);


Script937.setSourceCode(`vrmlscript:\n"+
"function hitTime(value, time)\n"+
"{\n"+
" alert = time;\n"+
"}`)
Transform936->addChildren(*Script937);

CTransform* Transform940 = (CTransform *)(m_pScene.createNode("Transform"));
Transform940->setDEF("mountain01");
Transform940->setTranslation(new float[3]{-10,-40,-1130});
CTransform* Transform941 = (CTransform *)(m_pScene.createNode("Transform"));
Transform941->setDEF("objLOD_11");
CLOD* LOD942 = (CLOD *)(m_pScene.createNode("LOD"));
LOD942->setRange(new float[1]{400}, 1);
CTransform* Transform943 = (CTransform *)(m_pScene.createNode("Transform"));
Transform943->setDEF("mount_1");
CTransform* Transform944 = (CTransform *)(m_pScene.createNode("Transform"));
Transform944->setDEF("mountObj_1");
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance946 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture947 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture947->setDEF("_63");
PixelTexture947->setImage(new int[4099]{64,64,1,126,136,94,150,185,126,147,143,147,119,140,129,140,164,175,178,185,168,203,206,178,101,133,154,224,210,101,73,63,98,108,154,119,133,175,126,94,84,80,126,147,150,168,182,185,133,77,129,108,101,119,98,80,80,126,147,150,168,185,192,199,217,126,108,112,133,122,122,199,140,147,157,182,150,178,189,175,182,199,217,192,189,192,182,164,115,80,161,213,206,182,147,77,157,157,175,182,175,154,119,105,80,70,84,115,157,168,154,140,136,115,105,101,101,136,119,73,63,84,115,157,168,157,136,140,143,122,154,115,119,98,94,182,175,175,182,206,182,203,220,196,203,203,238,213,196,171,119,140,175,150,171,203,203,161,143,91,136,224,217,206,143,126,105,105,91,80,105,105,115,94,80,112,150,129,94,91,98,129,112,94,80,105,105,115,94,80,77,63,108,161,154,122,94,108,98,140,150,112,185,203,175,168,224,182,192,182,199,192,203,185,182,171,199,182,161,164,133,126,126,115,98,147,210,178,122,140,115,94,91,73,101,105,91,84,84,98,101,94,91,94,91,98,108,94,73,101,105,91,84,84,94,87,80,91,84,147,94,122,84,77,115,84,98,185,126,45,143,213,217,192,203,203,220,175,192,203,213,206,154,129,112,136,126,143,164,87,112,150,108,129,112,101,91,73,70,94,94,136,140,129,112,136,84,77,101,77,108,119,73,70,126,105,136,140,129,112,122,115,119,161,115,133,112,98,126,77,21,21,108,91,38,206,224,185,189,220,185,108,77,164,255,238,182,192,189,168,157,171,182,136,122,129,98,115,108,94,70,66,66,98,84,143,143,133,108,168,122,70,129,122,112,112,77,70,196,119,143,143,133,108,140,136,112,129,126,150,147,133,185,143,80,10,66,140,56,91,136,129,77,143,129,150,112,63,203,252,224,213,161,154,157,178,164,154,161,157,105,140,122,91,70,52,73,84,70,80,119,112,94,119,105,73,143,147,108,70,66,77,84,70,80,119,112,94,136,147,133,108,122,129,150,154,199,192,164,87,42,140,126,31,42,147,42,14,91,168,199,87,73,164,192,199,147,140,161,136,122,164,171,164,105,122,122,105,80,35,38,87,91,77,126,136,133,84,59,80,94,164,150,105,63,52,87,91,77,126,136,133,122,150,115,119,147,154,168,154,217,203,175,143,77,35,119,94,35,101,101,28,108,196,189,105,42,10,38,108,147,157,175,182,178,175,154,157,115,73,84,119,80,38,45,77,94,98,133,129,143,112,115,94,98,161,175,133,98,66,77,94,98,133,129,143,147,129,126,105,115,168,189,182,213,206,196,192,161,119,91,133,70,98,192,122,115,112,157,192,122,70,35,56,84,164,199,206,175,136,150,157,136,129,122,98,101,59,59,59,73,73,115,122,133,143,157,112,94,105,129,126,94,70,59,73,73,133,133,143,154,129,140,112,84,98,136,175,252,213,189,192,192,231,143,91,66,91,112,133,136,101,98,143,150,126,94,84,56,129,199,182,175,161,182,164,150,143,129,77,84,91,70,59,66,31,77,112,119,140,115,108,98,94,52,73,84,66,59,66,31,98,140,147,129,105,133,129,115,84,105,154,227,238,213,213,203,217,192,171,105,112,161,175,143,150,157,140,164,185,168,129,87,119,171,164,185,185,217,161,133,157,157,87,73,112,73,84,84,52,73,154,143,129,77,80,105,87,70,49,52,66,84,84,49,31,94,136,126,91,101,105,119,80,87,136,182,203,189,231,192,217,178,154,122,87,196,224,213,192,185,185,189,210,182,143,115,164,199,203,175,175,175,157,119,140,168,119,87,136,115,108,87,101,133,168,150,140,161,122,108,98,98,91,91,101,105,84,63,7,21,70,119,101,84,126,122,84,101,122,105,140,105,157,161,150,122,133,122,115,105,196,217,224,217,217,199,133,140,143,129,161,210,206,178,185,192,171,126,129,147,147,129,154,129,122,84,108,133,143,140,150,143,108,91,108,154,129,115,122,122,84,70,17,14,28,101,108,112,122,143,101,84,101,105,182,161,70,63,77,115,136,122,164,126,84,112,115,185,203,175,154,150,150,133,143,189,168,168,185,210,154,150,164,175,143,140,122,154,136,108,112,147,154,164,168,87,101,119,136,178,154,119,154,136,105,77,49,31,24,80,115,136,70,80,105,70,101,115,164,168,143,143,164,175,168,154,189,161,119,105,77,80,136,122,119,122,105,147,157,206,210,168,150,161,150,178,178,161,147,147,157,185,154,140,122,129,143,171,185,122,94,126,147,161,164,157,185,154,129,91,84,49,28,49,112,133,108,87,77,70,126,119,150,175,168,189,182,154,157,164,178,150,154,171,189,98,98,115,119,133,112,133,154,203,175,133,161,157,178,203,175,126,140,178,192,192,161,175,189,136,147,175,203,119,91,112,133,161,185,192,192,161,171,189,108,42,14,3,56,129,136,143,108,66,80,115,171,210,189,185,161,140,154,150,122,147,154,164,182,115,122,115,133,136,168,122,140,171,154,157,196,175,161,164,133,154,129,185,210,196,185,245,238,126,154,175,182,136,122,122,140,161,189,210,196,185,245,241,119,80,45,7,14,108,126,98,98,77,70,105,115,210,203,182,136,136,175,178,175,178,154,161,171,136,108,101,147,157,171,126,164,199,199,206,206,178,164,157,77,77,133,168,217,189,185,210,150,105,126,147,98,80,115,136,126,154,175,217,189,185,210,150,112,84,59,35,24,59,115,98,77,77,108,105,63,126,189,157,122,147,213,206,189,150,133,161,178,154,133,133,122,161,168,154,189,192,168,175,199,185,182,161,150,108,140,171,196,157,164,150,115,105,87,112,73,98,115,154,126,147,171,196,157,164,150,115,129,105,80,35,17,38,80,133,101,77,98,101,84,77,182,147,119,119,196,192,171,164,119,150,154,168,136,143,126,150,189,196,178,115,73,140,178,175,171,154,112,143,168,140,119,136,133,87,63,73,84,91,91,105,115,143,115,136,136,119,136,133,87,63,84,105,77,45,31,59,45,98,119,105,63,84,77,73,182,171,133,115,157,136,171,157,185,206,192,189,140,136,136,185,213,203,189,175,66,140,171,157,164,171,126,108,140,108,70,63,73,94,87,98,105,84,115,119,122,129,112,94,101,70,63,73,94,87,98,105,73,59,21,17,59,59,98,122,73,87,87,91,150,161,126,87,112,178,150,80,98,175,203,157,119,115,164,164,206,112,87,147,112,63,175,192,192,185,189,133,136,112,66,49,73,112,133,140,133,94,108,129,147,129,108,94,94,66,49,73,112,133,140,140,91,77,63,3,42,73,66,129,94,77,108,112,119,171,136,77,59,87,77,115,108,115,136,140,112,101,164,168,203,168,108,77,140,77,112,196,185,182,175,136,136,108,115,133,143,161,164,171,161,129,115,147,157,140,115,122,105,115,133,143,161,164,171,161,126,94,77,35,24,80,59,49,52,59,73,80,112,154,115,115,101,101,119,154,175,140,126,133,115,112,175,168,161,164,178,129,80,115,70,136,168,175,164,154,164,147,164,161,168,168,164,161,140,150,147,157,168,161,136,143,136,164,161,168,168,164,164,136,150,154,147,98,56,63,91,59,45,63,66,112,129,115,129,115,126,126,157,164,189,161,157,126,126,136,157,119,129,199,203,192,133,105,66,119,185,119,164,168,164,164,164,168,171,143,101,98,108,129,136,129,133,119,115,108,112,164,168,171,143,101,98,108,122,122,112,94,77,52,59,59,49,59,87,119,133,108,115,129,136,140,164,164,164,168,178,140,157,161,175,164,178,203,199,220,192,171,168,171,196,136,91,140,129,147,150,161,140,133,108,66,66,91,112,98,63,66,122,122,94,129,161,140,133,108,66,66,94,119,126,108,91,80,59,42,70,56,77,126,119,129,161,157,136,140,171,164,171,196,203,157,164,154,203,185,189,192,213,213,178,178,196,203,192,164,87,115,157,150,94,105,129,143,147,133,101,108,94,66,52,63,105,147,115,84,105,129,143,147,133,112,143,143,143,119,119,91,87,70,94,84,63,126,129,133,154,140,94,42,108,185,185,199,224,192,171,182,213,210,196,203,192,189,175,192,210,203,192,150,122,112,168,150,91,52,84,108,115,129,119,91,98,101,94,70,52,126,126,98,52,84,108,115,133,126,101,77,73,101,108,80,77,70,91,108,87,94,98,73,105,129,157,59,52,154,154,140,119,154,199,199,189,164,147,161,161,185,175,182,203,224,199,154,140,91,136,136,101,87,56,42,52,87,108,98,105,119,126,108,52,59,77,101,94,56,42,42,84,115,105,73,80,49,73,87,73,70,84,84,101,73,73,80,119,122,129,105,3,49,105,119,98,91,185,175,171,143,133,161,203,199,192,192,217,210,189,178,196,164,122,101,87,115,115,80,70,63,73,112,119,126,101,108,129,87,59,77,112,112,63,49,66,77,105,94,105,80,105,105,84,77,77,98,101,80,84,101,150,161,129,122,35,56,136,129,122,94,105,143,182,182,185,182,189,192,189,220,234,203,178,168,154,133,136,101,91,115,108,122,115,77,66,105,115,129,129,108,136,129,77,59,73,105,115,84,87,77,80,98,108,115,105,94,91,84,84,98,87,98,105,112,171,171,147,119,115,161,171,150,143,140,133,136,161,175,154,143,164,196,175,199,210,206,143,147,98,87,136,108,98,101,84,70,87,108,119,105,129,143,133,122,133,147,126,59,59,77,105,108,105,91,91,112,119,119,115,77,77,87,105,105,91,94,129,108,126,143,136,101,84,147,168,171,154,164,154,150,161,164,129,140,168,196,178,192,203,185,171,108,115,108,133,122,115,94,84,77,80,98,143,133,143,150,143,119,126,147,157,112,73,77,94,119,119,87,101,105,94,101,119,98,80,91,105,136,119,108,133,108,94,108,154,115,73,126,147,154,147,157,143,147,206,185,150,133,161,182,185,175,178,171,178,154,108,80,126,150,122,80,63,80,87,77,136,133,129,143,129,108,126,126,143,150,115,101,115,140,133,119,98,77,73,77,84,87,115,136,112,122,136,115,140,129,101,98,129,164,80,80,122,150,154,150,136,154,199,122,98,122,178,175,182,164,178,178,178,189,161,112,136,168,136,91,56,66,80,84,122,129,108,108,87,94,133,91,105,122,122,129,112,115,133,133,119,91,87,101,91,108,119,133,112,98,126,122,129,147,98,133,126,175,115,38,84,133,168,150,161,189,185,115,119,140,161,115,140,185,192,185,164,157,150,150,147,189,133,119,73,73,80,87,112,119,87,112,98,98,122,129,115,136,108,87,101,101,119,143,122,84,91,101,129,119,105,143,126,105,126,129,126,136,101,136,178,150,154,80,101,150,157,171,213,206,189,140,140,164,178,147,171,196,185,175,143,105,140,199,157,147,112,119,94,59,66,59,94,115,98,119,115,122,126,154,143,122,94,66,98,129,84,108,115,108,129,129,136,154,115,122,108,105,129,143,129,119,115,91,157,140,143,108,80,150,203,164,203,185,168,171,150,164,182,178,178,196,185,178,161,136,129,196,199,150,122,87,77,59,63,63,84,119,112,112,126,147,150,147,178,133,63,63,84,112,63,98,119,136,105,94,108,143,119,105,119,115,126,143,122,129,140,98,52,101,157,154,38,87,241,248,199,150,178,171,136,143,157,178,175,196,196,175,147,133,112,150,178,175,178,91,80,87,108,119,115,122,126,112,122,143,140,157,178,154,108,70,73,94,80,101,126,168,94,105,45,80,112,105,133,119,143,161,129,133,157,140,77,101,185,171,98,70,178,133,122,84,119,150,143,115,164,171,168,196,206,185,171,147,105,140,157,164,164,133,122,161,154,112,115,126,150,157,122,147,147,189,175,147,164,140,91,126,122,98,112,157,98,98,73,101,122,119,157,129,108,154,136,112,136,161,115,91,168,189,175,129,161,66,73,168,171,150,140,112,175,185,161,192,192,185,185,157,108,178,129,115,147,136,105,143,136,133,101,136,129,122,129,147,164,217,182,164,164,161,161,147,115,105,119,140,70,98,91,91,133,126,147,136,98,119,122,115,108,147,108,70,122,196,185,161,161,161,150,157,199,161,140,143,168,203,185,196,182,168,178,157,122,133,115,115,126,154,119,129,115,161,112,133,143,147,164,157,168,189,182,168,171,154,171,126,108,133,147,147,91,119,84,87,150,94,136,150,115,98,119,115,105,119,143,119,87,164,189,210,241,217,196,189,210,178,171,171,196,213,203,206,185,175,199,157,129,94,126,150,157,136,126,105,122,140,129,164,168,164,164,133,157,199,185,171,164,157,143,122,126,126,136,136,129,136,112,77,164,140,129,105,108,129,147,122,115,112,154,122,94,98,168,154,192,217,210,213,196,171,185,182,206,220,210,182,164,157,171,192,182,171,164,133,143,136,129,101,105,108,129,157,164,171,154,126,147,224,206,175,175,171,133,122,108,98,101,112,154,136,105,94,164,192,108,101,115,119,161,112,143,119,136,136,112,56,164,185,143,185,234,206,157,171,196,164,189,210,210,154,140,112,129,196,196,189,171,136,143,133,122,105,108,119,150,140,161,164,129,119,154,224,203,154,154,150,108,94,56,63,87,101,126,115,87,80,143,185,168,147,119,147,175,129,133,136,115,150,150,63,157,196,185,161,231,217,196,182,192,161,182,199,182,178,143,122,133,164,199,189,185,161,112,101,94,94,126,119,126,150,157,150,126,94,150,185,122,87,91,94,91,77,133,129,115,119,129,122,101,70,87,143,157,115,94,129,157,164,140,157,136,161,175,70,129,199,185,115,157,147,168,175,189,168,157,157,161,178,175,133,119,150,164,143,122,150,133,136,101,84,126,126,105,108,115,129,119,91,154,164,108,112,91,80,108,157,175,171,161,182,175,157,168,112,24,136,164,136,115,115,157,196,129,140,129,129,164,126,133,196,196,164,112,140,112,168,182,164,168,196,206,220,196,168,150,140,178,171,147,182,171,129,105,105,112,136,122,87,115,143,161,94,115,133,108,122,136,171,164,157,171,140,157,196,185,175,147,108,17,112,143,147,112,105,136,154,119,122,122,143,178,164,122,147,164,206,178,182,129,136,140,185,252,255,252,231,196,171,189,154,136,115,157,178,171,108,63,94,84,98,133,126,133,133,161,105,94,105,119,143,164,171,154,122,122,133,175,196,182,189,136,112,56,84,157,136,94,91,126,126,136,122,140,161,206,157,98,112,136,129,185,206,161,126,161,189,175,227,255,255,227,196,196,164,168,189,185,171,171,115,87,115,136,91,108,140,140,143,154,122,101,140,136,136,150,122,122,140,94,112,154,185,171,143,115,108,84,45,115,143,94,84,161,154,122,133,161,185,206,129,66,203,217,126,66,84,136,136,171,185,136,87,105,101,122,168,199,203,203,182,203,154,101,105,133,161,143,122,129,147,147,129,129,126,108,136,143,154,161,161,161,143,122,129,150,206,168,108,129,115,80,28,31,87,87,84,136,161,140,136,154,136,126,80,0,119,196,199,164,66,87,143,147,157,185,196,122,80,122,143,171,210,231,199,224,203,105,122,164,143,129,147,161,154,168,150,150,126,140,133,150,147,168,171,143,129,147,161,157,199,185,154,136,112,112,73,84,126,112,94,119,175,140,94,161,101,73,147,28,80,210,252,234,178,94,129,157,192,175,154,133,133,150,136,77,126,206,227,255,213,115,140,157,150,122,150,171,140,168,185,147,119,126,143,140,140,154,161,147,136,147,157,136,171,161,122,129,108,140,94,150,189,119,94,154,168,154,98,168,150,108,126,73,35,147,171,196,227,143,112,143,154,126,143,157,171,185,164,119,38,129,255,255,164,98,94,126,164,143,157,203,98,77,126,115,70,119,150,147,122,112,119,129,140,133,136,87,56,98,112,136,119,136,84,98,168,129,73,154,192,147,105,192,245,238,143,63,21,84,94,77,168,175,154,164,185,178,178,185,217,192,168,154,66,49,192,206,129,101,56,73,126,150,175,171,105,56,59,70,73,126,140,133,143,108,80,101,126,122,126,98,42,80,133,126,136,171,119,101,154,143,70,91,185,154,122,157,178,199,164,108,49,126,73,143,63,119,157,192,203,210,199,196,227,213,192,164,157,59,52,101,115,94,70,70,136,154,175,154,105,101,87,59,59,101,126,136,150,143,49,45,63,73,73,91,94,56,98,105,140,196,168,122,164,175,119,59,147,182,154,126,147,136,189,140,70,133,56,182,94,77,91,164,210,203,189,178,203,182,217,119,129,84,31,49,115,101,49,80,140,136,98,84,98,108,126,101,63,73,119,140,136,94,38,17,7,14,52,94,112,98,101,108,101,196,182,129,112,164,115,108,168,203,154,178,178,217,231,189,87,112,80,161,210,91,56,94,91,182,234,189,210,192,220,143,49,129,94,38,91,133,154,115,108,91,77,77,84,101,94,122,94,98,105,101,91,77,112,105,80,70,77,84,122,133,126,147,91,143,140,112,108,161,108,80,140,224,220,255,255,252,248,248,143,122,136,56,112,87,87,105,38,112,241,199,182,199,213,206,154,77,91,70,84,129,157,161,126,122,108,122,126,115,66,94,105,87,84,94,122,112,157,136,136,115,126,129,143,164,122,136,94,112,171,122,115,161,136,94,133,220,175,196,245,255,255,227,213,217,217,115,101,80,94,122,98,59,115,157,73,119,189,238,210,143,112,66,77,143,168,154,136,164,164,133,126,122,98,66,66,84,108,115,164,157,150,136,164,164,133,150,161,196,185,133,108,112,161,115,119,164,140,126,112,178,175,101,98,101,108,101,133,182,206,192,143,70,38,80,171,63,28,98,112,7,87,203,203,185,161,80,70,150,171,161,161,178,175,182,147,133,115,63,49,70,98,70,115,161,164,161,178,175,182,178,178,210,203,147,108,94,154,147,126,143,126,147,129,150,182,206,168,91,101,115,98,105,84,136,168,150,105,49,70,122,63,52,122,80,59,126,178,147,129,77,73,136,147,161,168,154,157,192,154,126,105,63,63,56,70,73,87,129,161,168,154,157,192,185,199,206,178,126,129,77,168,150,112,143,136,133,140,189,213,164,157,122,140,161,168,189,157,77,154,241,206,140,70,133,115,59,171,178,122,122,105,105,105,80,70,105,136,168,161,150,168,196,136,105,119,77,84,98,70,84,101,133,168,161,150,168,196,192,224,196,189});
Appearance946->setTexture(*PixelTexture947);

Shape945->setAppearance(*Appearance946);

CIndexedFaceSet* IndexedFaceSet948 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet948->setColorIndex(new int[128]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1});
IndexedFaceSet948->setTexCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
IndexedFaceSet948->setCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
CColor* Color949 = (CColor *)(m_pScene.createNode("Color"));
Color949->setColor(new float[27]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785});
IndexedFaceSet948->setColor(*Color949);

CTextureCoordinate* TextureCoordinate950 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate950->setPoint(new float[50]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528});
IndexedFaceSet948->setTexCoord(*TextureCoordinate950);

CCoordinate* Coordinate951 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate951->setPoint(new float[75]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345});
IndexedFaceSet948->setCoord(*Coordinate951);

Shape945->setGeometry(IndexedFaceSet948);

Transform944->addChildren(*Shape945);

Transform943->addChildren(*Transform944);

LOD942->addChildren(*Transform943);

CTransform* Transform952 = (CTransform *)(m_pScene.createNode("Transform"));
LOD942->addChildren(*Transform952);

Transform941->addChildren(*LOD942);

Transform940->addChildren(*Transform941);

CTransform* Transform953 = (CTransform *)(m_pScene.createNode("Transform"));
Transform953->setDEF("proxyLOD_11");
CLOD* LOD954 = (CLOD *)(m_pScene.createNode("LOD"));
LOD954->setRange(new float[1]{120}, 1);
CTransform* Transform955 = (CTransform *)(m_pScene.createNode("Transform"));
Transform955->setDEF("proxyOn_26");
CTransform* Transform956 = (CTransform *)(m_pScene.createNode("Transform"));
Transform956->setTranslation(new float[3]{0,8.959,0});
CProximitySensor* ProximitySensor957 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor957->setDEF("_64");
ProximitySensor957->setSize(new float[3]{60,25,60});
Transform956->addChildren(*ProximitySensor957);

Transform955->addChildren(*Transform956);

CTransform* Transform958 = (CTransform *)(m_pScene.createNode("Transform"));
Transform958->setTranslation(new float[3]{-2.6391,39.2868,0});
CProximitySensor* ProximitySensor959 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor959->setDEF("_65");
ProximitySensor959->setSize(new float[3]{25,35,25});
Transform958->addChildren(*ProximitySensor959);

Transform955->addChildren(*Transform958);

LOD954->addChildren(*Transform955);

CTransform* Transform960 = (CTransform *)(m_pScene.createNode("Transform"));
Transform960->setDEF("proxyOff_27");
LOD954->addChildren(*Transform960);

Transform953->addChildren(*LOD954);

Transform940->addChildren(*Transform953);

Transform936->addChildren(*Transform940);

CTransform* Transform961 = (CTransform *)(m_pScene.createNode("Transform"));
Transform961->setDEF("mountain02");
Transform961->setTranslation(new float[3]{-100,-40,-1040});
CLOD* LOD962 = (CLOD *)(m_pScene.createNode("LOD"));
LOD962->setRange(new float[1]{400}, 1);
CTransform* Transform963 = (CTransform *)(m_pScene.createNode("Transform"));
Transform963->setDEF("mountObj_2");
CShape* Shape964 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance965 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture966 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture966->setUSE("_63");
Appearance965->setTexture(*PixelTexture966);

Shape964->setAppearance(*Appearance965);

CIndexedFaceSet* IndexedFaceSet967 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet967->setColorIndex(new int[128]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1});
IndexedFaceSet967->setTexCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
IndexedFaceSet967->setCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
CColor* Color968 = (CColor *)(m_pScene.createNode("Color"));
Color968->setColor(new float[27]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785});
IndexedFaceSet967->setColor(*Color968);

CTextureCoordinate* TextureCoordinate969 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate969->setPoint(new float[50]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528});
IndexedFaceSet967->setTexCoord(*TextureCoordinate969);

CCoordinate* Coordinate970 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate970->setPoint(new float[75]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345});
IndexedFaceSet967->setCoord(*Coordinate970);

Shape964->setGeometry(IndexedFaceSet967);

Transform963->addChildren(*Shape964);

LOD962->addChildren(*Transform963);

CTransform* Transform971 = (CTransform *)(m_pScene.createNode("Transform"));
LOD962->addChildren(*Transform971);

Transform961->addChildren(*LOD962);

CLOD* LOD972 = (CLOD *)(m_pScene.createNode("LOD"));
LOD972->setRange(new float[1]{120}, 1);
CTransform* Transform973 = (CTransform *)(m_pScene.createNode("Transform"));
Transform973->setDEF("proxyOn_27");
CTransform* Transform974 = (CTransform *)(m_pScene.createNode("Transform"));
Transform974->setTranslation(new float[3]{0,8.959,0});
CProximitySensor* ProximitySensor975 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor975->setDEF("_66");
ProximitySensor975->setSize(new float[3]{60,25,60});
Transform974->addChildren(*ProximitySensor975);

Transform973->addChildren(*Transform974);

CTransform* Transform976 = (CTransform *)(m_pScene.createNode("Transform"));
Transform976->setTranslation(new float[3]{-2.6391,39.2868,0});
CProximitySensor* ProximitySensor977 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor977->setDEF("_67");
ProximitySensor977->setSize(new float[3]{25,35,25});
Transform976->addChildren(*ProximitySensor977);

Transform973->addChildren(*Transform976);

LOD972->addChildren(*Transform973);

CTransform* Transform978 = (CTransform *)(m_pScene.createNode("Transform"));
Transform978->setDEF("proxyOff_28");
LOD972->addChildren(*Transform978);

Transform961->addChildren(*LOD972);

Transform936->addChildren(*Transform961);

CTransform* Transform979 = (CTransform *)(m_pScene.createNode("Transform"));
Transform979->setDEF("mountain03");
Transform979->setTranslation(new float[3]{-100,-40,-1210});
CLOD* LOD980 = (CLOD *)(m_pScene.createNode("LOD"));
LOD980->setRange(new float[1]{400}, 1);
CTransform* Transform981 = (CTransform *)(m_pScene.createNode("Transform"));
Transform981->setDEF("mountObj_3");
CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance983 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture984 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture984->setUSE("_63");
Appearance983->setTexture(*PixelTexture984);

Shape982->setAppearance(*Appearance983);

CIndexedFaceSet* IndexedFaceSet985 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet985->setColorIndex(new int[128]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1});
IndexedFaceSet985->setTexCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
IndexedFaceSet985->setCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
CColor* Color986 = (CColor *)(m_pScene.createNode("Color"));
Color986->setColor(new float[27]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785});
IndexedFaceSet985->setColor(*Color986);

CTextureCoordinate* TextureCoordinate987 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate987->setPoint(new float[50]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528});
IndexedFaceSet985->setTexCoord(*TextureCoordinate987);

CCoordinate* Coordinate988 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate988->setPoint(new float[75]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345});
IndexedFaceSet985->setCoord(*Coordinate988);

Shape982->setGeometry(IndexedFaceSet985);

Transform981->addChildren(*Shape982);

LOD980->addChildren(*Transform981);

CTransform* Transform989 = (CTransform *)(m_pScene.createNode("Transform"));
LOD980->addChildren(*Transform989);

Transform979->addChildren(*LOD980);

CLOD* LOD990 = (CLOD *)(m_pScene.createNode("LOD"));
LOD990->setRange(new float[1]{120}, 1);
CTransform* Transform991 = (CTransform *)(m_pScene.createNode("Transform"));
Transform991->setDEF("proxyOn_28");
CTransform* Transform992 = (CTransform *)(m_pScene.createNode("Transform"));
Transform992->setTranslation(new float[3]{0,8.959,0});
CProximitySensor* ProximitySensor993 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor993->setDEF("_68");
ProximitySensor993->setSize(new float[3]{60,25,60});
Transform992->addChildren(*ProximitySensor993);

Transform991->addChildren(*Transform992);

CTransform* Transform994 = (CTransform *)(m_pScene.createNode("Transform"));
Transform994->setTranslation(new float[3]{-2.6391,39.2868,0});
CProximitySensor* ProximitySensor995 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor995->setDEF("_69");
ProximitySensor995->setSize(new float[3]{25,35,25});
Transform994->addChildren(*ProximitySensor995);

Transform991->addChildren(*Transform994);

LOD990->addChildren(*Transform991);

CTransform* Transform996 = (CTransform *)(m_pScene.createNode("Transform"));
Transform996->setDEF("proxyOff_29");
LOD990->addChildren(*Transform996);

Transform979->addChildren(*LOD990);

Transform936->addChildren(*Transform979);

CTransform* Transform997 = (CTransform *)(m_pScene.createNode("Transform"));
Transform997->setDEF("mountain04");
Transform997->setTranslation(new float[3]{0,-40,-1350});
CLOD* LOD998 = (CLOD *)(m_pScene.createNode("LOD"));
LOD998->setRange(new float[1]{400}, 1);
CTransform* Transform999 = (CTransform *)(m_pScene.createNode("Transform"));
Transform999->setDEF("mount");
CInline* Inline1000 = (CInline *)(m_pScene.createNode("Inline"));
Inline1000->setUrl(new CString[1]{"mount.x3d"}, 1);
Inline1000->setBboxSize(new float[3]{68.9251,65.6877,67.5461});
Inline1000->setBboxCenter(new float[3]{0.876749,32.3308,1.45545});
Transform999->addChildren(*Inline1000);

LOD998->addChildren(*Transform999);

CTransform* Transform1001 = (CTransform *)(m_pScene.createNode("Transform"));
LOD998->addChildren(*Transform1001);

Transform997->addChildren(*LOD998);

CLOD* LOD1002 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1002->setRange(new float[1]{120}, 1);
CTransform* Transform1003 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1003->setDEF("proxyOn_29");
CTransform* Transform1004 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1004->setTranslation(new float[3]{0,8.959,0});
CProximitySensor* ProximitySensor1005 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1005->setDEF("_70");
ProximitySensor1005->setSize(new float[3]{60,25,60});
Transform1004->addChildren(*ProximitySensor1005);

Transform1003->addChildren(*Transform1004);

CTransform* Transform1006 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1006->setTranslation(new float[3]{-2.6391,39.2868,0});
CProximitySensor* ProximitySensor1007 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1007->setDEF("_71");
ProximitySensor1007->setSize(new float[3]{25,35,25});
Transform1006->addChildren(*ProximitySensor1007);

Transform1003->addChildren(*Transform1006);

LOD1002->addChildren(*Transform1003);

CTransform* Transform1008 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1008->setDEF("proxyOff_30");
LOD1002->addChildren(*Transform1008);

Transform997->addChildren(*LOD1002);

Transform936->addChildren(*Transform997);

CTransform* Transform1009 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1009->setDEF("mountain05");
Transform1009->setTranslation(new float[3]{50,-40,-1210});
CLOD* LOD1010 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1010->setRange(new float[1]{400}, 1);
CTransform* Transform1011 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1011->setDEF("mountObj_4");
CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1013 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1014 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1014->setUSE("_63");
Appearance1013->setTexture(*PixelTexture1014);

Shape1012->setAppearance(*Appearance1013);

CIndexedFaceSet* IndexedFaceSet1015 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1015->setColorIndex(new int[128]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1});
IndexedFaceSet1015->setTexCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
IndexedFaceSet1015->setCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
CColor* Color1016 = (CColor *)(m_pScene.createNode("Color"));
Color1016->setColor(new float[27]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785});
IndexedFaceSet1015->setColor(*Color1016);

CTextureCoordinate* TextureCoordinate1017 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1017->setPoint(new float[50]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528});
IndexedFaceSet1015->setTexCoord(*TextureCoordinate1017);

CCoordinate* Coordinate1018 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1018->setPoint(new float[75]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345});
IndexedFaceSet1015->setCoord(*Coordinate1018);

Shape1012->setGeometry(IndexedFaceSet1015);

Transform1011->addChildren(*Shape1012);

LOD1010->addChildren(*Transform1011);

CTransform* Transform1019 = (CTransform *)(m_pScene.createNode("Transform"));
LOD1010->addChildren(*Transform1019);

Transform1009->addChildren(*LOD1010);

CLOD* LOD1020 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1020->setRange(new float[1]{120}, 1);
CTransform* Transform1021 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1021->setDEF("proxyOn_30");
CTransform* Transform1022 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1022->setTranslation(new float[3]{0,8.959,0});
CProximitySensor* ProximitySensor1023 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1023->setDEF("_72");
ProximitySensor1023->setSize(new float[3]{60,25,60});
Transform1022->addChildren(*ProximitySensor1023);

Transform1021->addChildren(*Transform1022);

CTransform* Transform1024 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1024->setTranslation(new float[3]{-2.6391,39.2868,0});
CProximitySensor* ProximitySensor1025 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1025->setDEF("_73");
ProximitySensor1025->setSize(new float[3]{25,35,25});
Transform1024->addChildren(*ProximitySensor1025);

Transform1021->addChildren(*Transform1024);

LOD1020->addChildren(*Transform1021);

CTransform* Transform1026 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1026->setDEF("proxyOff_31");
LOD1020->addChildren(*Transform1026);

Transform1009->addChildren(*LOD1020);

Transform936->addChildren(*Transform1009);

CTransform* Transform1027 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1027->setDEF("mountain06");
Transform1027->setTranslation(new float[3]{100,-40,-1300});
CLOD* LOD1028 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1028->setRange(new float[1]{400}, 1);
CTransform* Transform1029 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1029->setDEF("mountObj");
CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1031 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1032 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1032->setUSE("_63");
Appearance1031->setTexture(*PixelTexture1032);

Shape1030->setAppearance(*Appearance1031);

CIndexedFaceSet* IndexedFaceSet1033 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1033->setColorIndex(new int[128]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1});
IndexedFaceSet1033->setTexCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
IndexedFaceSet1033->setCoordIndex(new int[128]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1});
CColor* Color1034 = (CColor *)(m_pScene.createNode("Color"));
Color1034->setColor(new float[27]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785});
IndexedFaceSet1033->setColor(*Color1034);

CTextureCoordinate* TextureCoordinate1035 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1035->setPoint(new float[50]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528});
IndexedFaceSet1033->setTexCoord(*TextureCoordinate1035);

CCoordinate* Coordinate1036 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1036->setPoint(new float[75]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345});
IndexedFaceSet1033->setCoord(*Coordinate1036);

Shape1030->setGeometry(IndexedFaceSet1033);

Transform1029->addChildren(*Shape1030);

LOD1028->addChildren(*Transform1029);

CTransform* Transform1037 = (CTransform *)(m_pScene.createNode("Transform"));
LOD1028->addChildren(*Transform1037);

Transform1027->addChildren(*LOD1028);

CLOD* LOD1038 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1038->setRange(new float[1]{120}, 1);
CTransform* Transform1039 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1039->setDEF("proxyOn_31");
CTransform* Transform1040 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1040->setTranslation(new float[3]{0,8.959,0});
CProximitySensor* ProximitySensor1041 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1041->setDEF("_74");
ProximitySensor1041->setSize(new float[3]{60,25,60});
Transform1040->addChildren(*ProximitySensor1041);

Transform1039->addChildren(*Transform1040);

CTransform* Transform1042 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1042->setTranslation(new float[3]{-2.6391,39.2868,0});
CProximitySensor* ProximitySensor1043 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1043->setDEF("_75");
ProximitySensor1043->setSize(new float[3]{25,35,25});
Transform1042->addChildren(*ProximitySensor1043);

Transform1039->addChildren(*Transform1042);

LOD1038->addChildren(*Transform1039);

CTransform* Transform1044 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1044->setDEF("proxyOff_32");
LOD1038->addChildren(*Transform1044);

Transform1027->addChildren(*LOD1038);

Transform936->addChildren(*Transform1027);

Transform935->addChildren(*Transform936);

CTransform* Transform1045 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1045->setDEF("s2");
CTransform* Transform1046 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1046->setDEF("saule07");
Transform1046->setTranslation(new float[3]{0,0,-1550});
CLOD* LOD1047 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1047->setRange(new float[1]{400}, 1);
CInline* Inline1048 = (CInline *)(m_pScene.createNode("Inline"));
Inline1048->setUrl(new CString[1]{"saule.x3d"}, 1);
Inline1048->setBboxSize(new float[3]{23.54,88.8706,23.5402});
Inline1048->setBboxCenter(new float[3]{0,4.43541,0});
LOD1047->addChildren(*Inline1048);

CTransform* Transform1049 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1049->setDEF("alertEmpty_1");
LOD1047->addChildren(*Transform1049);

Transform1046->addChildren(*LOD1047);

CLOD* LOD1050 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1050->setRange(new float[1]{40}, 1);
CTransform* Transform1051 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1052 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1052->setDEF("_76");
ProximitySensor1052->setSize(new float[3]{25,100,25});
Transform1051->addChildren(*ProximitySensor1052);

LOD1050->addChildren(*Transform1051);

CTransform* Transform1053 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1053->setDEF("proxyOff_33");
LOD1050->addChildren(*Transform1053);

Transform1046->addChildren(*LOD1050);

Transform1045->addChildren(*Transform1046);

CTransform* Transform1054 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1054->setDEF("saule06");
Transform1054->setTranslation(new float[3]{-30,0,-1500});
CLOD* LOD1055 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1055->setRange(new float[1]{400}, 1);
CInline* Inline1056 = (CInline *)(m_pScene.createNode("Inline"));
Inline1056->setUrl(new CString[1]{"saule.x3d"}, 1);
Inline1056->setBboxSize(new float[3]{23.54,88.8706,23.5402});
Inline1056->setBboxCenter(new float[3]{0,4.43541,0});
LOD1055->addChildren(*Inline1056);

CTransform* Transform1057 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1057->setDEF("alertEmpty_2");
LOD1055->addChildren(*Transform1057);

Transform1054->addChildren(*LOD1055);

CLOD* LOD1058 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1058->setRange(new float[1]{40}, 1);
CTransform* Transform1059 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1060 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1060->setDEF("_77");
ProximitySensor1060->setSize(new float[3]{25,100,25});
Transform1059->addChildren(*ProximitySensor1060);

LOD1058->addChildren(*Transform1059);

CTransform* Transform1061 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1061->setDEF("proxyOff_34");
LOD1058->addChildren(*Transform1061);

Transform1054->addChildren(*LOD1058);

Transform1045->addChildren(*Transform1054);

CTransform* Transform1062 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1062->setDEF("saule05");
Transform1062->setTranslation(new float[3]{16,0,-1452.89});
CLOD* LOD1063 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1063->setRange(new float[1]{400}, 1);
CInline* Inline1064 = (CInline *)(m_pScene.createNode("Inline"));
Inline1064->setUrl(new CString[1]{"saule.x3d"}, 1);
Inline1064->setBboxSize(new float[3]{23.54,88.8706,23.5402});
Inline1064->setBboxCenter(new float[3]{0,4.43541,0});
LOD1063->addChildren(*Inline1064);

CTransform* Transform1065 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1065->setDEF("alertEmpty_3");
LOD1063->addChildren(*Transform1065);

Transform1062->addChildren(*LOD1063);

CLOD* LOD1066 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1066->setRange(new float[1]{40}, 1);
CTransform* Transform1067 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1067->setDEF("proxyOn_32");
CProximitySensor* ProximitySensor1068 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1068->setDEF("_78");
ProximitySensor1068->setSize(new float[3]{25,100,25});
Transform1067->addChildren(*ProximitySensor1068);

LOD1066->addChildren(*Transform1067);

CTransform* Transform1069 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1069->setDEF("proxyOff_35");
LOD1066->addChildren(*Transform1069);

Transform1062->addChildren(*LOD1066);

Transform1045->addChildren(*Transform1062);

Transform935->addChildren(*Transform1045);

CTransform* Transform1070 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1070->setDEF("s1");
CTransform* Transform1071 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1071->setDEF("saule01");
Transform1071->setTranslation(new float[3]{-16,0,-674});
CTransform* Transform1072 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1072->setDEF("objLOD_12");
CLOD* LOD1073 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1073->setRange(new float[1]{400}, 1);
CTransform* Transform1074 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1074->setTranslation(new float[3]{0,3.2291,0});
Transform1074->setScale(new float[3]{1,3.72126,1});
CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1076 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1077 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1077->setDEF("_79");
PixelTexture1077->setImage(new int[16887]{126,134,1,79,68,96,93,68,141,178,184,187,199,184,220,239,207,238,218,207,246,247,239,234,207,218,239,223,215,219,220,225,220,215,192,194,195,207,209,208,210,193,177,149,161,174,186,174,181,189,157,162,197,195,236,246,207,159,130,123,115,157,87,1,3,38,99,69,64,83,96,74,64,184,189,182,198,187,225,232,237,230,211,246,239,241,211,229,239,207,217,218,224,219,215,181,190,209,208,208,211,181,168,165,120,33,232,176,194,163,198,148,194,194,203,237,228,181,161,130,118,149,135,23,5,9,91,76,83,3,1,2,1,0,21,88,52,60,36,40,5,2,14,20,16,51,33,35,32,49,93,89,9,56,70,72,110,98,111,110,106,131,130,122,96,111,123,92,103,94,169,25,239,223,75,27,121,101,151,182,70,53,63,127,115,22,17,165,81,0,0,22,20,3,1,1,4,0,0,86,57,64,38,38,2,6,21,18,47,36,24,39,58,78,22,62,67,89,104,110,108,109,140,125,106,111,123,96,112,147,32,0,197,238,202,6,122,101,156,158,134,72,73,63,118,115,15,124,130,9,0,12,16,18,5,4,4,15,16,0,88,165,79,98,121,106,85,85,52,43,18,190,36,4,5,5,77,250,219,77,11,6,20,24,15,3,4,18,36,34,25,38,39,57,51,9,7,0,242,207,63,85,75,51,209,71,83,60,82,72,116,70,72,20,35,1,6,12,27,14,2,10,16,6,0,230,97,81,122,107,79,71,36,7,175,35,3,6,1,254,189,24,12,12,26,10,5,3,38,36,26,34,46,55,33,7,4,0,87,241,133,22,136,59,123,150,81,81,71,62,116,111,76,14,73,1,1,12,15,32,15,4,2,8,13,0,95,236,202,157,163,149,90,109,106,113,89,124,175,75,27,3,6,104,189,148,119,80,86,103,130,55,19,104,83,107,93,81,93,107,115,89,81,1,214,211,118,157,48,47,241,67,42,51,134,56,106,71,145,5,35,1,6,23,22,14,1,6,9,6,0,241,209,165,164,143,92,95,107,69,131,171,24,25,0,139,204,113,116,79,101,127,84,36,105,92,99,81,95,116,105,98,15,0,46,213,140,131,122,38,166,133,58,39,99,104,55,106,81,74,29,5,2,16,18,29,15,13,5,8,2,0,113,241,159,131,174,165,151,122,152,125,171,107,169,190,224,123,147,68,64,112,147,154,158,163,225,30,114,99,147,130,159,166,157,161,154,126,170,20,180,156,111,154,114,63,119,81,89,120,21,132,80,66,94,23,14,2,3,39,27,35,6,10,6,7,0,250,190,124,171,163,148,122,121,110,143,168,217,214,141,61,66,129,148,151,164,199,58,166,86,148,147,165,159,155,135,168,53,0,58,183,111,150,147,108,104,96,79,92,96,71,61,87,71,76,7,5,2,18,32,38,37,8,2,7,6,0,92,223,151,156,152,175,129,194,152,134,200,97,203,197,197,193,188,163,99,169,132,177,147,175,172,43,194,120,202,208,207,182,189,186,190,164,184,61,71,36,49,94,92,63,99,109,3,0,43,37,75,98,125,3,9,4,5,18,17,19,4,0,7,6,0,247,171,152,154,169,144,186,135,169,124,202,178,200,202,144,115,149,140,161,175,145,47,227,145,204,207,181,194,187,189,183,63,0,51,78,26,100,91,86,90,101,51,3,6,53,40,76,108,58,7,2,4,8,20,23,20,7,5,0,0,4,141,186,188,140,163,174,182,184,156,158,159,172,133,145,144,236,162,143,114,104,161,135,147,123,161,170,99,96,176,163,152,157,181,195,205,180,195,51,131,49,136,46,187,92,86,46,1,60,125,49,121,104,58,5,16,5,8,6,9,23,3,5,1,1,0,246,157,161,157,178,183,163,145,144,159,127,139,194,207,127,110,129,159,143,124,168,181,54,164,172,159,157,187,204,204,186,104,0,66,136,40,108,136,177,65,69,16,1,139,85,60,119,111,23,22,4,6,6,6,23,23,14,1,0,6,12,172,199,170,89,118,114,163,162,140,162,183,218,188,210,169,178,166,161,166,124,175,132,119,177,214,147,79,178,166,175,158,143,142,162,183,168,214,38,157,115,161,23,225,111,88,21,8,125,46,9,133,75,23,7,14,3,1,6,11,40,8,0,5,0,5,246,156,119,111,120,158,152,130,139,177,175,188,172,177,158,156,154,176,119,172,214,183,95,169,187,164,143,142,181,178,200,138,2,68,161,99,115,130,218,63,76,1,11,106,63,12,132,81,5,18,11,4,2,10,30,39,4,5,7,0,1,47,246,171,130,129,118,93,199,124,84,66,60,82,100,207,202,209,204,210,237,135,67,97,27,145,58,11,1,5,39,98,143,165,178,171,163,175,7,98,0,89,89,103,64,104,76,0,2,140,67,100,126,101,3,15,2,8,10,9,9,2,3,3,3,0,193,214,131,121,114,105,138,79,103,34,41,171,188,178,156,219,222,116,78,35,142,130,5,0,9,62,144,168,177,150,202,23,0,59,93,0,118,100,96,82,79,37,0,78,90,85,99,135,48,19,1,4,9,6,18,9,10,1,5,9,2,0,182,241,158,147,186,110,5,0,0,0,1,6,5,93,210,139,112,242,207,57,59,38,20,87,194,39,0,9,0,10,106,132,162,158,151,28,2,140,122,66,78,123,77,78,135,35,40,20,63,63,91,124,3,12,6,7,28,23,31,5,5,7,8,0,49,245,174,166,194,30,0,2,74,44,4,113,122,89,34,188,0,2,66,2,7,3,0,41,25,23,78,125,127,147,48,0,0,71,132,99,86,114,115,87,108,76,39,37,58,27,68,101,47,4,6,6,14,34,27,33,11,6,9,5,5,5,0,181,220,143,199,107,14,28,22,1,14,20,6,100,97,81,71,78,115,25,6,17,12,31,251,155,0,13,4,2,4,6,7,4,5,20,2,187,193,125,229,80,50,215,49,64,121,63,106,82,59,105,34,18,1,2,37,27,30,5,11,6,6,0,208,147,123,99,28,1,47,7,3,31,69,220,192,158,133,155,103,80,115,81,8,18,0,49,51,40,1,35,107,66,0,1,3,28,188,115,198,176,72,151,115,48,64,129,77,63,87,63,105,10,5,1,18,26,40,32,3,2,8,13,1,12,3,96,193,44,207,181,59,4,20,1,3,10,2,172,90,116,97,7,113,84,13,20,10,21,248,166,0,19,21,16,10,17,13,12,18,26,1,210,205,114,148,44,43,237,66,41,44,126,52,107,74,149,4,32,1,7,23,21,15,1,6,9,6,0,217,123,141,156,72,9,120,29,7,0,46,225,178,142,142,116,127,83,59,63,5,18,3,50,193,171,49,77,197,132,0,4,0,44,208,134,127,113,35,158,129,62,39,90,99,54,108,82,70,25,5,2,16,18,28,16,5,5,13,8,1,16,2,151,242,172,233,136,207,2,15,4,4,6,86,250,194,163,151,92,114,116,6,13,28,0,247,118,98,116,5,44,3,4,9,9,18,25,9,243,227,50,76,134,91,162,101,71,96,69,132,93,69,20,82,43,0,3,13,33,14,3,9,13,4,0,197,220,192,138,150,0,217,120,63,0,2,246,186,214,134,110,149,133,115,80,20,18,1,42,124,107,32,0,168,120,0,6,0,131,242,170,4,187,114,132,169,55,74,114,59,127,94,67,21,103,1,0,9,19,34,16,7,6,13,14,1,10,4,148,239,233,247,65,241,115,82,19,0,180,251,220,172,134,140,197,93,208,70,64,4,58,248,227,1,255,18,24,5,9,8,11,23,25,158,197,159,104,30,99,111,194,215,199,170,134,125,116,26,23,180,107,0,0,30,25,3,4,6,17,7,0,100,9,1,220,171,144,3,188,243,9,0,184,219,168,148,168,110,138,122,94,15,18,0,194,88,85,72,2,241,77,1,11,0,236,188,166,26,108,81,177,200,219,203,151,114,136,115,18,142,148,20,0,12,23,16,5,10,3,7,18,5,18,8,89,239,243,233,181,143,208,100,0,165,250,204,234,211,169,145,109,110,134,77,51,2,217,242,243,24,237,35,6,5,11,16,23,14,62,219,155,126,123,147,147,92,41,73,92,46,20,101,133,147,131,96,82,0,22,56,2,42,4,9,12,10,0,213,131,78,69,3,157,22,21,109,23,0,61,202,192,171,156,91,99,100,70,18,18,0,245,143,118,23,20,170,83,3,9,46,205,156,127,99,194,142,54,64,67,97,12,47,151,129,144,106,113,13,1,72,7,24,41,5,7,5,7,2,9,18,5,246,203,229,223,127,123,50,0,43,248,234,218,197,199,184,103,88,152,74,40,4,119,246,197,203,61,81,10,4,10,18,20,13,233,208,210,174,174,208,92,72,75,110,132,92,107,17,1,13,63,93,104,0,46,47,54,34,2,5,4,9,0,37,192,82,207,186,51,141,10,149,34,0,62,182,158,151,164,56,69,123,97,23,14,0,204,182,118,95,38,3,2,22,11,143,238,210,155,203,174,92,89,73,127,131,99,57,0,2,10,98,139,10,2,81,20,87,32,6,6,5,23,3,10,22,2,245,207,200,207,168,46,11,5,0,250,222,213,190,228,214,152,61,114,53,40,2,97,247,175,171,52,77,13,10,18,25,20,30,214,208,193,96,141,159,106,107,79,88,145,163,144,28,7,1,2,70,114,0,26,16,30,35,2,6,13,13,3,0,209,115,182,229,65,145,27,178,9,0,106,136,161,138,200,49,82,127,86,9,19,0,125,159,188,171,1,23,10,15,20,140,225,193,87,157,155,105,134,58,104,147,162,103,1,12,0,67,92,16,2,35,7,63,34,4,9,3,7,7,20,18,18,6,247,214,184,151,4,14,7,0,250,247,203,141,111,140,204,105,116,7,2,8,0,255,247,192,63,87,6,7,15,25,10,172,194,200,189,98,189,232,118,112,5,148,74,207,181,90,3,20,69,151,108,0,2,4,52,16,2,10,4,5,10,0,38,217,199,200,200,69,18,177,0,82,218,152,156,126,169,20,89,112,67,13,13,0,164,140,159,0,7,23,8,5,180,181,210,190,79,215,232,125,42,124,38,88,209,150,38,7,16,116,163,23,1,7,7,67,16,7,7,20,12,4,12,26,17,0,248,242,228,207,61,23,24,0,255,248,220,172,148,156,163,133,247,101,84,9,0,190,251,52,0,19,31,5,32,33,5,195,205,199,166,96,178,245,132,54,98,126,83,229,44,89,14,25,46,78,176,1,12,75,88,16,3,13,17,7,6,4,0,197,158,109,76,245,192,16,0,246,211,204,163,143,171,70,31,165,85,40,4,10,170,172,120,4,20,18,5,49,158,159,217,165,101,238,200,143,4,217,36,101,142,74,38,20,22,67,178,30,3,14,126,52,20,4,4,9,4,4,18,24,12,0,85,236,187,154,115,115,7,18,225,222,202,123,158,165,134,132,236,38,139,35,0,195,255,33,6,35,12,9,26,12,21,225,178,199,177,111,119,189,165,83,161,40,5,134,210,57,71,52,113,83,54,19,25,40,78,9,2,7,9,2,7,3,9,0,242,228,159,77,30,50,1,209,170,172,176,104,164,175,95,122,108,70,4,193,112,96,101,18,21,10,1,219,169,161,200,180,89,126,230,159,111,100,12,4,247,115,62,73,52,103,81,22,24,20,87,34,14,3,6,12,5,3,10,16,15,2,80,247,211,187,139,96,32,45,225,215,187,147,176,182,118,103,217,48,116,63,0,165,254,64,10,56,14,10,22,5,38,224,159,208,134,106,108,224,135,92,171,60,32,83,198,136,83,48,65,134,12,17,18,18,38,4,1,9,9,3,5,4,14,0,207,245,193,90,54,71,13,175,169,161,169,106,156,151,155,72,113,70,16,175,95,73,97,23,22,12,5,202,157,157,197,138,87,170,210,131,138,53,95,23,184,125,142,83,48,74,124,2,21,16,32,18,7,3,5,7,10,5,12,18,11,9,12,96,237,202,174,195,18,135,211,198,177,182,166,178,145,113,136,151,78,165,5,186,233,73,53,10,17,15,25,74,159,187,175,217,154,109,80,234,10,58,95,89,107,40,56,67,105,165,72,63,75,14,18,23,15,5,2,6,9,8,5,9,13,2,26,169,222,107,123,120,107,163,161,161,149,125,162,150,166,95,111,66,113,129,127,87,85,12,14,5,87,193,123,136,220,155,100,136,141,10,141,85,116,100,54,48,91,103,169,39,87,23,19,14,23,15,6,3,10,7,8,1,1,18,14,18,1,1,252,202,186,168,178,174,155,193,145,187,165,161,184,190,151,183,157,122,69,164,130,178,62,23,21,7,3,188,186,169,193,192,187,103,58,234,123,78,43,222,135,106,63,111,94,75,72,130,20,20,10,14,5,3,1,16,6,6,1,4,10,1,3,4,255,188,181,141,141,149,174,156,141,142,166,155,131,169,53,148,157,151,113,82,64,19,1,202,203,168,161,136,208,188,79,74,238,124,37,107,208,143,47,120,82,96,78,61,82,37,19,18,6,5,4,3,8,5,1,5,10,15,20,8,12,0,229,200,207,197,165,156,204,133,125,158,162,156,169,155,176,123,166,78,132,140,95,245,51,7,5,11,186,162,145,186,177,165,180,114,73,151,114,51,170,95,166,171,37,170,76,16,24,1,1,3,12,1,4,4,2,5,6,4,6,1,7,3,20,4,78,217,182,159,158,140,101,90,174,199,174,147,155,176,162,76,133,145,165,105,100,3,148,166,121,149,165,147,175,181,98,47,211,101,113,129,120,175,84,89,144,79,18,12,0,0,3,6,0,5,5,9,5,7,2,4,14,9,18,14,17,0,210,207,194,171,139,161,213,119,97,193,154,166,183,169,183,169,183,110,170,147,93,239,47,6,4,81,165,157,123,177,161,187,159,136,68,198,148,135,181,145,180,164,74,69,3,0,0,0,0,0,8,0,0,0,7,5,4,1,6,1,6,4,23,18,14,238,186,165,147,177,17,6,98,218,107,63,96,204,136,40,35,108,151,145,96,3,189,176,139,121,195,150,199,155,143,73,209,141,164,159,168,184,119,74,33,4,0,0,0,0,1,6,0,0,1,6,4,2,12,4,10,10,17,18,8,4,45,246,133,171,133,132,208,123,0,188,211,143,21,1,0,0,3,23,90,175,164,238,24,10,92,174,101,143,168,197,150,159,155,122,197,166,236,132,89,31,64,77,123,108,165,225,245,170,192,5,41,15,248,23,1,2,6,9,6,0,5,9,20,23,5,193,180,151,161,251,36,1,28,248,71,1,2,0,0,0,3,1,3,1,3,18,74,164,147,171,142,164,181,144,177,139,246,234,61,98,13,64,87,123,127,164,227,232,218,29,16,30,96,188,30,16,3,10,4,7,3,14,16,11,15,12,1,125,229,208,134,121,187,125,0,217,53,89,13,7,1,20,14,3,3,3,13,147,3,18,105,136,127,130,118,156,144,195,14,0,193,151,214,114,110,27,195,194,202,211,181,157,148,203,93,2,26,27,239,99,2,10,8,7,8,1,2,7,16,18,10,176,124,68,3,6,188,3,98,0,3,25,21,3,6,5,8,6,7,9,6,18,5,208,175,156,163,124,127,9,53,170,211,211,97,45,106,184,205,207,194,182,156,163,209,5,4,36,109,230,106,28,11,7,14,3,2,6,12,11,12,17,6,1,24,52,168,176,161,122,11,207,217,210,100,63,1,26,20,7,1,9,10,5,3,99,164,150,100,159,162,154,155,181,126,85,174,198,103,200,34,97,158,174,139,166,171,131,123,169,154,1,23,9,228,115,8,10,4,17,3,4,7,12,10,14,16,234,141,180,88,26,172,46,190,174,58,4,18,10,6,1,6,6,15,23,14,33,3,213,143,181,138,187,175,119,133,150,215,101,192,47,145,151,152,183,172,169,130,138,203,27,4,8,98,238,121,31,3,1,9,5,6,18,16,14,18,22,11,12,30,4,141,126,111,198,220,198,139,192,110,104,9,15,15,4,12,17,16,15,11,200,108,187,94,130,139,169,171,223,3,4,234,181,121,95,37,78,157,182,149,99,187,150,151,165,92,2,6,96,193,122,9,3,6,4,5,3,12,9,19,11,70,165,99,170,135,126,158,205,157,188,75,120,44,12,14,4,4,20,15,17,15,9,73,209,178,156,169,169,135,1,143,168,213,120,84,27,116,151,181,108,148,181,151,148,163,6,4,10,182,205,129,49,1,5,2,6,6,18,19,18,18,19,13,16,22,37,181,130,159,209,197,218,138,157,159,68,10,18,21,5,9,14,4,57,30,177,103,145,108,144,123,161,156,202,22,16,122,181,151,108,82,101,155,140,149,140,154,125,141,188,75,5,5,114,161,141,21,2,4,3,6,6,7,9,23,5,129,188,154,180,143,104,197,229,243,193,65,106,51,12,11,5,4,19,20,20,24,2,124,187,155,168,162,171,120,23,52,131,202,150,74,106,103,151,145,125,157,151,126,142,200,4,11,12,194,170,152,77,4,2,1,3,6,14,19,13,10,10,12,16,30,41,86,72,127,203,209,232,188,214,131,113,6,13,14,5,7,11,8,34,159,103,174,127,122,150,189,155,140,177,69,152,65,168,202,92,40,0,182,204,118,190,144,133,156,110,42,6,18,28,181,147,44,2,2,3,3,3,3,18,16,6,227,78,115,99,151,222,106,193,155,199,92,37,8,7,7,4,7,9,9,11,9,0,156,140,105,126,170,149,119,76,124,94,243,195,54,9,30,172,166,129,184,144,135,132,136,0,14,5,132,163,163,86,2,9,3,0,4,16,13,23,16,19,6,14,14,13,22,6,86,176,236,174,43,182,18,175,6,13,7,7,2,53,71,3,98,166,156,138,171,186,190,211,181,229,87,75,90,109,163,52,73,63,174,193,151,169,169,132,170,124,56,3,8,16,159,156,52,1,10,2,1,3,3,4,20,16,86,90,120,109,227,106,118,217,164,112,20,77,10,15,6,12,12,5,6,97,51,2,97,187,138,132,134,147,220,81,161,19,208,152,73,21,135,163,177,145,187,169,134,182,85,7,5,4,88,170,175,79,2,5,10,4,2,11,9,14,9,12,3,13,32,18,19,1,217,125,241,229,187,170,207,192,13,10,14,5,18,199,113,2,18,9,9,10,19,20,38,48,53,157,34,80,78,148,164,126,0,16,207,168,174,163,125,192,192,141,78,4,23,26,210,139,50,0,5,8,5,1,3,1,12,2,107,73,158,84,204,177,190,207,180,132,197,184,92,5,7,14,8,6,14,5,6,14,6,76,147,163,158,149,139,28,127,96,181,171,28,2,92,195,163,182,125,130,197,149,170,2,12,9,132,183,157,25,2,10,6,6,3,6,7,12,9,9,2,10,31,14,22,2,255,178,224,208,123,135,207,180,7,7,3,16,31,92,45,5,12,31,14,14,27,16,27,26,12,129,66,78,29,181,148,99,0,19,225,200,140,135,105,163,151,144,78,2,10,21,114,51,11,9,0,11,6,1,3,1,8,4,113,29,163,99,200,210,225,229,149,166,180,192,148,3,4,14,12,10,14,13,17,18,8,134,207,159,156,164,149,61,57,89,203,155,38,1,100,219,147,159,101,109,169,109,200,1,5,8,67,95,60,39,4,2,8,5,1,1,4,4,2,3,1,18,28,17,20,6,22,180,204,165,121,123,163,18,0,3,4,3,16,5,13,10,18,24,23,20,16,21,34,7,23,122,59,15,7,33,220,222,0,41,103,155,228,180,194,199,211,215,94,2,14,11,15,34,30,1,6,7,5,1,5,5,10,7,45,11,54,36,155,85,202,232,162,133,178,142,170,26,1,6,1,13,4,12,6,7,11,38,38,33,82,99,156,52,9,1,156,223,61,0,86,91,209,211,188,193,202,192,230,1,7,14,18,11,44,23,2,2,1,7,4,0,1,0,1,3,1,4,8,12,12,9,6,79,154,225,217,220,209,3,1,3,6,9,8,9,20,14,20,9,10,21,11,6,2,20,22,79,223,123,47,12,208,131,0,0,0,1,0,0,34,34,13,3,1,4,3,12,23,20,18,2,2,3,7,1,10,2,7,2,2,3,5,1,131,2,23,136,104,50,34,20,19,4,5,2,2,5,6,12,3,7,6,4,5,4,7,0,222,215,63,14,115,211,9,0,0,0,0,0,7,30,35,4,1,2,5,3,19,23,25,1,4,3,7,4,2,1,3,3,6,6,1,4,2,4,6,5,5,5,0,47,110,104,116,17,0,3,6,9,5,12,12,11,3,3,5,1,0,3,5,6,6,37,38,105,75,110,61,61,2,214,115,33,72,31,98,10,27,54,33,2,1,1,4,4,1,3,6,7,4,0,7,24,23,23,7,16,10,10,92,6,31,67,97,134,169,149,158,56,2,6,9,5,9,26,16,2,7,9,10,12,20,0,63,30,132,69,123,60,44,65,188,120,16,68,54,95,7,72,44,10,4,1,0,6,5,1,1,3,10,8,6,4,3,4,7,7,5,10,9,11,13,14,4,9,2,1,2,3,1,1,5,0,1,2,0,2,1,4,5,4,9,3,2,7,5,7,2,99,130,105,99,155,130,135,16,252,217,133,152,7,189,50,122,85,92,1,2,0,13,6,0,1,8,9,9,0,6,12,14,18,9,19,14,10,64,86,60,1,27,12,55,39,58,1,6,8,6,4,10,15,6,6,9,12,14,14,16,0,217,111,119,105,190,124,122,90,250,218,135,66,26,188,46,169,70,43,5,0,7,13,6,4,7,4,0,1,2,2,0,9,5,5,5,6,6,9,9,10,10,6,9,6,5,9,3,4,9,7,5,2,10,9,7,8,13,6,4,3,7,5,3,6,0,87,219,80,155,145,104,69,115,44,189,145,199,176,31,136,151,125,67,0,3,2,12,8,2,7,1,0,1,2,6,14,8,5,0,8,11,10,0,202,156,124,163,158,96,123,145,133,1,0,0,7,16,4,1,0,17,16,16,13,14,0,241,203,66,107,186,94,82,89,97,177,175,161,152,33,139,116,131,1,0,3,7,16,8,2,1,0,1,2,3,5,6,3,3,3,9,2,4,9,6,7,7,9,4,12,12,14,5,10,23,7,5,0,10,9,7,8,8,4,2,4,7,4,3,1,1,3,3,2,12,76,204,110,63,23,41,7,169,36,76,40,34,68,99,0,3,4,6,7,1,1,0,1,1,1,4,6,4,3,0,1,8,6,4,2,9,38,83,71,46,34,33,27,9,6,12,4,12,4,4,6,5,5,7,10,7,4,7,2,9,12,229,182,92,30,52,31,72,99,58,75,39,42,138,2,2,3,2,14,7,2,2,1,5,0,1,1,1,2,2,0,2,0,5,5,6,4,11,9,5,3,7,6,12,6,7,11,10,0,8,8,9,7,2,1,3,2,1,2,1,7,1,4,12,12,7,5,252,214,197,178,184,186,163,144,155,202,151,165,116,0,3,2,3,7,1,1,2,3,0,7,10,2,6,12,3,1,7,4,3,0,0,0,0,0,0,0,0,1,1,2,6,3,11,0,3,3,1,3,3,3,1,0,10,10,13,0,175,250,218,150,186,183,169,143,139,156,203,140,177,14,1,2,3,9,7,4,3,4,6,0,4,3,1,5,5,4,0,4,2,1,7,9,9,7,8,0,1,4,7,1,1,6,10,0,2,4,9,5,2,0,1,2,4,1,2,2,5,4,4,1,9,14,227,133,106,165,133,116,151,150,118,134,100,98,63,2,4,5,1,5,2,7,4,1,0,1,0,0,0,2,0,0,1,1,0,0,1,0,0,1,0,0,0,0,0,6,1,1,0,4,1,1,0,0,0,1,1,0,8,3,6,0,157,208,113,115,155,135,111,162,127,120,135,91,114,7,6,6,2,3,5,0,0,1,0,0,0,0,1,0,3,0,3,1,0,0,0,1,3,3,0,1,0,0,0,0,0,2,0,0,0,0,0,2,4,1,0,1,0,1,1,0,0,3,7,7,10,2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,2,11,10,0,0,2,0,0,45,68,63,78,78,136,112,7,49,87,91,74,46,18,51,64,62,61,48,68,23,39,51,22,3,1,73,75,16,12,11,14,12,12,6,8,7,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,5,18,11,70,139,83,135,67,76,50,9,4,4,4,2,41,72,54,47,20,23,23,39,25,57,54,22,51,48,19,35,18,7,68,36,51,12,25,36,23,37,44,25,73,86,29,34,20,26,50,47,47,58,83,92,70,87,90,101,124,135,99,143,108,121,61,13,11,62,129,90,112,82,0,0,0,0,0,0,0,0,0,0,1,11,4,104,121,49,7,2,0,11,13,24,82,116,114,27,88,25,20,47,54,41,1,32,35,15,38,55,45,57,54,110,89,82,70,107,100,124,126,121,131,110,121,17,18,22,97,136,141,187,242,245,211,165,108,118,121,109,169,166,155,148,141,100,127,79,166,71,97,81,103,199,247,207,230,115,195,177,211,140,156,100,172,123,155,91,45,164,114,120,91,125,121,81,71,56,93,54,56,72,69,61,54,10,47,56,55,57,12,12,26,78,198,152,208,245,171,154,203,105,140,188,121,164,142,140,40,3,19,18,63,139,100,79,115,38,56,105,87,0,124,134,165,87,170,149,183,123,126,113,121,105,129,105,84,51,90,69,55,50,101,64,61,54,14,71,37,59,51,3,12,46,151,151,27,26,144,93,155,176,98,157,174,144,120,76,84,62,39,111,127,99,132,165,161,105,123,74,100,81,56,57,93,54,59,66,69,94,101,10,57,138,86,103,157,52,77,168,84,171,155,121,108,121,121,177,93,110,165,213,133,214,148,192,107,0,140,119,133,0,118,148,16,119,147,127,127,148,114,114,58,132,190,141,87,205,134,90,105,123,155,147,94,45,63,14,66,162,139,125,119,122,110,98,119,72,58,115,74,152,168,127,121,107,120,133,152,120,107,169,172,186,156,155,220,1,51,165,198,148,87,8,168,71,89,143,112,165,150,181,69,86,63,70,10,71,134,40,52,141,123,118,100,82,93,108,91,82,113,89,84,127,53,63,151,51,3,89,28,49,161,118,53,129,10,157,180,151,131,133,113,135,115,82,95,132,123,187,136,149,57,1,213,157,154,37,53,175,11,48,145,63,66,176,111,91,97,131,219,147,32,193,188,104,43,76,52,20,194,133,48,36,6,61,96,104,132,110,79,79,85,127,124,50,64,49,152,138,157,140,133,122,112,112,82,95,134,161,157,144,154,0,88,232,150,106,126,11,110,144,88,183,51,113,120,182,43,156,129,115,40,3,76,124,95,172,73,90,138,152,88,90,189,34,230,222,162,79,155,100,44,148,10,18,180,110,158,1,145,131,62,1,3,251,29,104,125,119,95,78,96,138,97,210,166,199,1,1,39,124,145,52,4,116,85,0,209,6,38,145,1,18,25,131,45,0,70,111,67,144,151,210,220,23,77,219,91,16,55,209,33,136,186,99,151,119,162,30,1,246,63,18,0,166,142,18,110,106,112,86,78,94,122,165,186,183,69,2,1,65,125,85,75,39,18,6,136,33,37,144,92,208,80,100,186,154,91,34,66,48,45,119,45,207,152,67,9,140,85,17,113,3,1,190,78,104,47,157,50,9,28,110,77,2,28,151,163,39,1,81,84,84,149,41,106,121,52,71,152,172,211,176,55,1,72,103,93,37,26,9,178,18,119,99,93,82,0,16,111,132,23,84,237,125,65,6,98,59,26,2,2,6,242,70,5,43,55,120,12,32,182,78,181,10,2,112,186,80,43,1,152,52,90,139,23,142,116,45,161,130,208,211,159,0,15,99,159,108,170,49,105,64,123,25,34,170,139,99,176,78,107,189,94,111,120,83,52,109,7,218,155,40,214,198,119,49,114,123,4,53,200,115,62,143,88,113,84,71,84,96,100,169,152,110,66,73,31,48,129,91,70,126,90,80,129,119,197,175,77,1,63,134,132,93,89,81,193,105,19,12,88,68,0,16,150,144,4,0,62,220,158,14,193,109,40,3,7,49,222,12,33,15,105,172,0,17,62,182,131,52,95,123,132,171,111,50,76,10,50,133,70,89,123,83,112,113,187,186,215,0,8,93,147,103,157,21,82,43,132,2,7,176,154,145,106,63,147,168,87,114,91,127,65,96,2,159,170,69,186,147,138,100,143,113,109,2,127,140,115,150,41,57,73,47,99,159,75,131,158,121,100,141,83,103,144,147,61,80,116,87,155,75,183,130,54,0,46,119,125,96,34,59,207,64,103,66,103,56,0,52,171,99,3,2,11,217,80,5,198,118,44,1,44,162,213,6,14,78,63,147,0,7,10,239,118,127,155,55,180,149,119,133,91,118,97,186,77,86,76,111,139,116,140,172,165,0,0,71,170,74,104,96,125,53,135,45,2,125,217,14,78,131,138,208,62,93,132,63,90,188,17,1,0,33,233,169,145,69,96,24,23,0,88,125,100,197,83,98,114,95,116,177,166,130,181,210,172,105,79,70,138,80,180,198,114,156,130,85,152,215,83,12,239,121,125,47,145,106,139,135,24,127,150,65,1,133,144,104,56,2,4,94,0,2,251,252,74,56,147,164,245,107,41,6,177,148,1,3,2,166,182,176,172,139,163,204,210,136,111,42,74,103,149,210,194,115,131,124,75,156,219,0,189,245,178,131,69,156,98,75,84,248,0,2,10,251,161,63,97,93,89,98,165,38,12,230,119,0,4,30,186,172,190,174,161,192,208,43,138,83,109,87,22,51,136,37,176,193,129,186,131,207,115,96,44,98,46,54,174,209,151,157,154,151,149,145,5,16,114,147,82,105,156,93,83,111,107,140,140,95,4,63,112,151,115,1,18,242,113,19,0,0,4,169,184,210,213,95,106,107,70,95,63,0,2,3,197,218,186,120,190,199,203,80,85,77,93,73,65,182,207,151,149,162,135,163,69,0,90,141,113,114,106,110,96,82,6,130,152,1,2,30,177,125,92,66,126,110,93,122,9,182,243,1,1,0,5,5,4,0,0,0,0,0,0,0,87,71,98,111,46,63,67,7,120,205,204,47,17,88,127,97,93,158,104,172,122,113,122,86,172,66,0,152,72,83,125,94,95,95,79,122,91,10,6,248,2,34,6,161,59,5,97,159,183,55,2,5,52,213,234,205,122,10,140,151,4,123,164,131,0,7,26,20,5,248,121,194,46,40,170,67,101,122,123,145,169,121,120,94,129,188,0,71,88,104,145,122,182,126,77,72,5,169,155,87,63,24,88,197,189,145,166,119,123,85,1,143,223,109,1,1,0,0,1,0,4,9,6,20,51,63,44,95,103,104,81,49,67,3,107,151,232,14,12,110,143,91,80,76,118,109,107,65,108,72,110,59,0,197,124,105,170,113,110,74,112,95,115,24,3,242,77,0,3,144,62,38,178,189,180,63,2,7,51,32,211,215,90,40,141,168,20,109,87,123,17,0,59,6,3,213,156,142,18,47,188,62,103,35,172,63,113,106,65,100,65,123,1,61,189,159,171,112,178,97,118,133,5,71,90,177,131,184,0,2,6,145,229,63,127,176,20,18,121,218,197,73,80,154,40,246,63,136,161,114,75,58,113,89,104,61,78,110,67,110,166,208,177,87,132,92,110,95,108,85,148,78,27,16,83,145,112,23,2,135,97,126,180,97,114,119,69,119,86,14,5,90,177,79,12,0,5,1,3,141,136,2,74,142,53,115,161,103,107,109,155,166,37,92,163,180,159,233,9,77,104,205,246,70,100,101,75,172,94,88,158,103,81,26,23,132,159,120,0,61,103,135,145,91,194,48,70,83,61,3,154,145,204,126,2,1,12,52,223,135,127,56,154,1,3,28,205,121,95,3,222,74,87,84,7,139,1,79,132,80,90,70,118,75,2,100,42,66,62,105,149,181,119,79,40,9,168,227,156,154,159,124,55,6,16,149,149,101,139,104,86,63,129,44,155,57,4,113,75,208,205,217,0,0,0,0,71,0,4,33,198,139,73,67,147,82,134,42,73,96,1,7,10,205,55,37,92,45,25,118,101,177,115,125,84,2,101,188,223,156,140,155,116,57,3,121,122,184,180,145,157,218,100,107,186,31,19,10,79,172,1,12,3,61,140,228,116,156,154,199,87,62,3,152,129,18,76,180,141,5,161,157,55,13,39,122,83,108,93,165,125,151,92,95,138,161,220,4,166,119,84,120,87,214,106,105,142,118,79,5,6,150,132,136,140,218,154,96,202,110,103,156,40,0,171,44,22,199,80,67,82,22,8,48,18,50,77,19,113,98,118,82,159,25,243,143,66,5,82,215,80,164,148,85,91,158,170,121,50,169,115,110,99,134,209,103,125,172,126,80,2,58,169,169,180,132,174,162,105,107,166,124,76,68,75,136,2,5,7,77,190,192,84,104,84,218,154,75,83,97,98,19,59,197,86,7,136,174,100,60,107,121,104,92,48,125,69,115,111,104,115,161,103,2,157,105,99,122,78,223,84,98,127,71,66,10,2,131,158,134,152,204,106,109,177,134,75,203,138,5,92,192,30,107,109,109,149,178,76,132,161,164,53,9,157,120,139,90,133,1,247,175,96,57,164,220,79,63,116,100,109,134,169,7,64,129,105,113,104,122,217,82,106,158,70,69,2,29,184,188,188,121,134,92,51,145,33,61,129,147,154,207,2,4,14,72,23,247,133,134,24,133,120,91,112,182,94,5,38,168,85,32,159,32,136,124,97,90,130,186,62,170,10,109,116,57,81,17,7,154,136,118,148,120,73,237,86,99,113,131,65,19,11,65,144,154,110,172,10,83,2,219,227,242,230,126,81,56,197,140,155,81,7,101,126,5,200,141,94,0,155,36,124,61,54,236,222,213,222,234,186,242,85,13,112,79,26,125,12,74,157,129,116,154,87,152,229,85,101,109,110,72,3,18,122,178,150,165,134,188,143,192,241,169,116,63,158,209,0,4,5,35,110,164,175,204,243,156,157,195,87,165,74,2,54,104,114,14,197,88,54,77,94,64,55,0,2,42,30,58,97,67,56,52,75,82,129,73,67,85,100,190,78,93,104,172,85,26,3,11,29,134,130,184,133,184,0,116,142,110,100,171,168,16,109,92,119,80,23,169,139,56,129,83,103,43,171,211,126,54,73,20,67,14,134,28,69,194,100,47,54,108,105,14,59,42,145,103,69,96,93,100,188,80,69,154,143,92,2,16,5,57,141,190,99,113,168,109,198,178,108,57,107,163,2,4,0,98,3,95,9,76,214,197,163,52,84,209,65,16,20,142,126,10,122,97,125,107,69,139,4,1,23,26,136,154,181,130,56,188,130,101,61,136,56,192,12,120,23,15,16,20,2,3,9,2,34,131,151,97,147,174,193,15,214,162,202,122,139,252,172,118,97,98,1,77,123,34,219,130,121,150,34,72,72,141,152,174,158,118,178,190,123,208,14,193,150,172,159,46,200,61,87,136,124,106,113,5,123,23,17,12,10,2,7,2,10,55,15,5,26,143,104,132,142,114,82,76,76,210,10,1,2,2,149,64,92,72,116,203,98,123,66,140,141,34,6,162,79,6,205,62,81,118,145,107,10,31,32,239,3,21,106,10,34,54,51,49,79,34,53,95,111,204,31,154,110,159,133,1,119,2,20,10,4,103,116,129,0,6,2,5,4,0,3,0,3,177,133,85,96,77,69,129,38,106,44,10,34,30,56,23,18,37,36,18,41,15,7,180,0,1,26,78,5,44,57,41,81,35,38,40,152,108,205,28,210,73,238,109,65,14,17,26,20,15,50,124,133,115,156,177,82,121,76,213,2,7,5,37,18,145,28,108,21,246,200,170,88,138,140,11,16,190,92,9,172,42,108,138,127,169,4,14,16,48,63,55,186,53,88,69,76,34,84,51,63,47,159,232,16,152,59,6,149,2,92,0,13,16,12,119,122,145,92,187,126,71,92,156,161,145,120,129,233,92,186,88,76,162,126,131,28,94,177,120,186,140,136,207,182,136,233,159,118,252,68,34,63,148,79,57,76,40,90,48,55,49,123,135,233,16,147,10,138,118,73,0,10,16,13,10,14,120,81,118,91,154,248,78,63,192,14,3,0,109,124,97,7,227,70,129,93,219,209,96,180,30,0,129,53,46,7,78,80,101,116,0,1,4,1,75,53,2,75,31,2,1,20,5,10,30,10,0,0,14,41,123,107,83,35,0,2,2,12,10,3,79,100,100,0,40,0,0,1,51,37,2,0,2,4,18,19,106,145,86,60,63,0,4,2,0,0,0,0,0,2,0,0,1,2,0,3,4,3,118,14,0,2,27,3,31,31,0,1,0,15,39,147,96,82,31,0,9,5,14,6,12,34,109,163,132,16,176,71,74,122,129,18,7,1,157,103,134,123,116,77,145,90,30,125,97,121,151,176,133,126,154,126,119,129,82,38,52,0,0,20,112,67,5,28,124,107,194,193,26,204,121,101,136,107,108,88,97,67,108,94,136,34,2,0,4,11,127,84,157,238,147,190,120,232,247,169,172,164,190,129,38,106,210,242,55,204,108,127,208,130,131,193,189,171,202,163,234,181,223,166,194,155,25,5,72,127,150,197,98,107,157,125,101,125,119,108,90,77,103,89,98,135,0,1,1,6,3,82,81,59,70,40,155,133,116,59,187,29,5,57,39,23,26,34,75,16,198,46,184,170,78,227,189,163,87,96,24,109,166,141,126,121,70,24,111,67,95,100,52,11,6,9,118,182,139,101,114,115,108,111,91,145,205,63,197,135,156,9,3,6,1,61,39,94,60,36,44,86,52,169,85,175,93,94,63,124,61,11,87,147,142,125,156,97,22,214,143,87,83,47,58,124,124,99,88,150,108,158,116,51,9,5,48,109,193,109,98,118,99,115,105,93,147,171,96,180,148,86,1,7,8,15,4,28,97,77,156,28,207,80,127,104,131,10,25,125,166,115,148,132,192,109,248,106,107,233,52,175,141,124,77,89,53,68,133,211,170,194,59,52,112,67,76,46,148,45,15,10,7,10,245,90,105,89,106,139,75,50,78,188,127,149,159,1,6,6,9,25,21,101,81,101,80,109,69,99,54,163,23,76,150,120,150,112,53,134,154,106,161,103,63,106,169,112,141,57,13,89,155,140,105,162,78,165,76,149,4,13,8,5,155,161,105,105,81,125,101,80,43,190,107,171,162,53,3,5,9,0,0,38,11,1,2,0,46,113,88,124,199,1,3,1,11,23,0,1,4,7,57,79,108,132,163,148,224,181,88,105,65,8,10,38,34,0,0,0,0,0,1,26,90,74,10,6,5,0,1,131,138,122,165,94,104,224,100,168,104,125,125,3,0,1,0,29,9,3,0,34,83,42,66,66,76,29,54,37,14,69,61,35,63,25,21,79,34,119,116,12,52,66,69,51,92,93,38,100,63,41,107,67,65,91,26,10,1,4,0,77,133,135,139,156,58,109,227,41,193,107,134,53,0,1,3,107,100,34,89,45,32,130,105,77,61,115,94,87,50,36,71,57,62,87,56,32,72,31,19,10,25,5,55,37,97,110,131,171,166,118,138,113,143,183,148,193,138,100,25,31,27,23,44,40,26,3,53,48,7,16,12,9,20,14,13,14,41,25,1,28,97,61,38,100,38,110,123,103,120,80,94,119,80,100,97,107,93,86,47,75,79,30,63,126,72,85,91,88,59,106,67,79,88,40,45,51,36,49,41,29,43,16,42,43,44,4,18,54,20,7,18,12,10,21,9,18,13,74,1,3,45,145,126,122,138,103,118,116,23,129,81,81,94,95,140,172,115,91,96,67,123,136,123,138,100,134,181,91,72,123,87,87,74,87,91,79,108,106,44,71,22,100,101,91,149,154,147,148,114,130,108,118,140,192,139,138,101,144,134,109,159,159,182,47,0,63,125,156,124,95,112,68,38,56,48,65,133,41,97,136,76,99,145,123,162,131,110,150,121,106,152,90,63,52,129,81,118,93,158,152,151,91,208,89,124,149,150,158,108,118,133,76,132,140,174,147,120,104,142,151,94,176,161,147,1,10,89,111,121,75,130,138,111,108,49,69,112,96,104,51,94,85,156,80,65,39,129,100,94,100,68,120,90,108,54,81,35,90,113,68,109,83,60,78,108,74,18,110,84,86,63,83,72,75,6,118,113,25,72,140,110,115,106,121,107,85,71,119,136,40,1,36,94,121,78,124,147,61,52,34,135,113,68,150,155,81,91,79,111,112,124,115,96,99,93,75,73,140,84,47,73,129,125,90,166,124,84,111,189,75,58,63,104,63,14,6,215,10,54,68,155,120,98,106,122,107,61,109,118,138,1,12,58,133,63,61,81,32,116,116,120,96,94,105,77,145,144,31,113,111,90,93,88,95,77,99,70,123,62,145,130,127,133,107,123,198,89,130,177,64,134,82,133,111,87,106,165,103,122,136,98,98,175,81,12,10,165,42,190,81,120,99,119,129,186,40,0,71,113,63,49,56,30,166,60,2,183,246,8,156,20,38,99,198,100,73,131,70,246,119,138,115,6,131,224,85,2,190,143,6,136,57,2,135,114,115,161,159,85,123,158,91,109,209,20,10,115,68,126,178,83,100,134,91,136,155,0,4,96,72,112,41,175,99,38,32,40,37,35,40,51,49,38,52,3,23,16,21,38,70,133,61,14,14,14,7,7,7,4,4,17,10,6,1,0,0,0,0,0,0,0,12,176,186,61,95,88,7,118,207,36,5,103,45,124,104,113,132,111,138,140,28,3,20,61,112,45,204,81,157,95,9,24,40,38,124,9,15,123,136,121,131,152,120,163,110,116,142,3,175,163,164,16,45,141,11,213,3,3,0,101,99,75,168,140,13,194,68,52,124,129,38,7,75,140,112,101,132,124,123,142,119,0,15,33,33,24,2,47,80,59,57,25,54,52,21,48,29,141,120,138,118,88,84,2,50,78,84,144,108,105,111,111,126,75,80,66,83,121,113,87,138,132,116,139,124,133,32,121,143,88,139,79,23,198,168,79,7,99,69,70,66,66,122,119,151,195,18,0,39,21,10,20,61,63,172,77,94,121,53,74,139,1,0,209,110,74,63,44,83,99,66,97,59,2,5,34,239,25,61,107,97,156,3,4,8,63,65,35,119,147,95,147,65,123,132,213,69,57,63,75,67,64,84,154,116,161,127,0,18,49,186,92,107,133,150,169,123,87,122,90,169,151,89,132,180,97,142,113,150,141,175,124,83,111,103,131,74,151,116,107,101,123,135,99,109,106,111,65,85,50,124,135,85,63,71,71,100,97,119,163,134,104,77,132,14,108,97,132,150,200,152,169,18,135,124,145,142,67,168,142,176,80,78,113,76,110,95,4,51,10,111,71,98,68,77,105,60,88,124,10,12,123,207,30,69,87,69,161,24,10,5,9,134,76,66,57,135,47,99,110,119,198,92,118,83,40,104,96,114,211,175,161,150,6,145,158,162,15,135,76,88,140,122,104,150,66,111,92,69,66,114,49,154,136,136,127,150,171,64,126,76,54,3,52,159,51,132,123,132,139,112,127,66,79,36,2,108,143,95,133,143,98,120,106,96,202,150,73,43,88,28,70,63,99,178,178,199,125,38,95,107,122,69,96,71,81,194,68,100,110,79,108,103,5,115,55,200,172,150,139,118,132,123,118,162,9,108,136,228,63,68,76,91,116,38,1,9,17,81,147,138,91,186,68,104,152,125,200,67,63,81,36,68,53,168,172,209,202,62,50,78,142,87,92,0,135,150,93,71,148,71,78,119,111,113,135,100,12,2,215,40,23,143,103,81,86,149,205,9,54,182,65,99,51,13,139,23,169,113,120,103,82,0,209,51,122,217,17,61,187,177,149,242,60,100,87,74,66,61,0,219,165,28,5,217,88,60,70,18,51,150,138,165,69,73,70,58,88,112,0,12,3,120,171,109,76,134,143,125,171,45,141,232,224,193,20,93,130,54,76,107,7,4,3,8,43,134,164,0,176,171,184,158,162,68,91,59,107,63,48,89,210,91,22,95,189,50,90,130,49,47,86,55,83,72,90,159,51,86,184,51,133,215,99,6,174,161,112,115,53,49,176,12,114,89,119,171,48,172,68,51,118,0,47,198,32,145,133,59,16,106,62,186,5,3,87,156,241,108,51,55,130,78,103,132,88,96,33,118,2,205,89,69,106,44,8,135,50,56,82,59,91,36,2,175,69,4,5,4,45,80,203,80,101,5,2,49,186,194,204,41,30,63,121,77,58,143,157,0,4,7,63,70,174,0,42,74,202,248,24,57,97,99,88,101,136,18,133,90,96,53,182,57,103,180,142,23,100,89,51,21,158,20,107,26,96,110,145,148,108,59,32,104,101,90,60,2,234,85,12,116,154,190,26,70,16,164,112,0,4,178,7,100,142,85,14,18,40,46,74,112,151,112,110,43,90,127,104,73,77,126,40,119,0,1,5,172,120,158,145,74,54,114,79,96,112,108,100,98,6,113,122,129,10,1,7,1,229,127,157,16,22,113,108,130,58,61,103,100,133,50,107,66,79,171,18,4,15,44,44,103,155,143,118,49,71,87,114,130,34,82,124,88,14,1,0,104,162,118,195,156,121,53,143,129,63,89,140,33,180,107,1,88,47,113,127,65,12,111,147,96,125,16,89,125,13,124,140,130,121,42,2,161,103,38,54,209,69,82,95,145,25,32,1,0,2,3,26,49,75,16,166,130,84,91,75,119,26,171,5,4,26,180,144,125,119,122,48,168,118,142,116,115,70,110,20,92,158,136,82,14,3,2,67,169,99,3,7,67,52,83,74,40,114,95,119,57,141,72,92,165,152,21,4,2,0,10,5,23,76,26,119,157,97,92,87,74,120,25,150,0,1,148,145,113,165,131,88,74,120,86,83,63,126,1,157,239,95,205,86,93,171,85,29,24,203,3,96,209,104,0,114,169,124,103,93,13,45,4,107,48,1,149,101,12,139,104,37,174,250,219,140,115,105,49,119,189,38,123,126,50,105,125,101,48,156,88,18,135,78,99,97,81,82,70,95,44,139,122,99,83,42,4,61,30,119,131,120,86,57,111,101,120,130,65,110,83,112,156,61,98,81,73,131,148,157,9,60,227,248,250,131,135,107,99,78,101,135,37,178,20,155,95,131,55,89,204,67,109,98,90,132,156,118,35,193,92,41,65,151,0,195,187,168,105,76,98,211,100,93,107,125,6,3,13,193,141,166,82,27,237,87,12,188,145,107,52,2,111,118,161,195,194,34,132,246,168,66,49,147,121,118,57,166,188,68,88,86,144,38,73,176,35,15,178,171,163,114,108,97,169,113,0,79,80,163,90,109,12,107,190,0,119,77,2,67,46,77,6,169,44,3,134,65,39,187,75,50,69,82,140,98,1,6,51,188,247,54,25,151,135,96,109,103,162,219,5,85,86,149,6,130,168,19,145,150,150,194,135,91,40,133,38,156,74,155,0,190,209,149,107,108,132,152,120,139,106,129,13,4,12,28,143,190,85,3,145,188,5,16,155,106,24,3,0,84,46,88,225,22,81,220,188,20,136,124,99,136,127,81,109,131,79,29,17,37,129,156,44,19,171,123,145,93,96,51,100,64,0,89,104,121,33,94,60,4,14,116,141,71,26,66,189,64,77,207,60,27,145,150,145,72,68,85,130,59,42,30,1,83,144,134,227,78,9,223,109,123,152,56,90,63,129,79,30,10,119,123,152,30,122,135,140,178,125,90,114,150,21,39,42,147,0,145,198,151,132,91,115,175,122,136,175,152,18,6,51,29,178,172,157,43,145,168,40,5,178,147,34,2,26,138,87,111,214,31,127,241,193,20,58,104,93,109,69,96,69,205,139,32,0,14,149,154,37,5,207,136,149,82,143,103,126,39,0,1,197,156,99,63,109,52,20,42,103,80,27,51,215,27,82,193,61,2,46,101,74,66,126,132,110,130,1,2,7,170,116,197,246,69,3,151,92,109,48,120,93,95,175,129,33,0,97,141,138,23,131,161,130,182,130,76,44,193,101,157,68,190,0,45,150,186,103,135,159,129,168,28,36,180,99,0,0,0,73,186,176,166,106,203,44,107,75,152,129,100,144,159,131,129,112,53,70,243,225,63,30,13,94,61,101,99,116,47,112,76,44,107,68,99,34,0,159,198,106,94,69,124,129,136,0,10,85,174,80,122,156,134,83,54,106,80,61,50,190,6,40,198,132,103,68,110,85,118,111,73,86,236,2,54,120,95,101,156,246,123,49,16,13,98,99,100,103,91,75,115,76,41,111,70,95,26,7,228,145,141,150,77,83,125,105,37,72,181,7,9,18,228,74,164,125,70,154,0,3,209,133,31,0,3,5,22,164,176,198,145,31,0,12,84,131,132,148,119,152,170,31,178,29,200,219,79,156,91,144,110,37,113,172,13,182,111,121,78,131,79,67,2,30,51,111,119,73,108,116,125,0,2,72,144,7,172,27,89,151,40,180,43,43,16,209,6,86,151,67,147,98,135,3,151,130,74,59,51,104,67,121,85,118,49,207,145,110,118,96,152,86,25,123,89,39,183,108,118,104,85,110,60,2,46,83,144,143,88,95,112,87,71,13,175,149,1,12,95,111,113,152,106,202,29,0,89,157,136,118,0,0,6,16,2,123,168,71,28,1,75,93,94,138,120,75,67,44,178,80,248,204,20,165,30,129,113,155,36,2,2,129,109,109,147,95,164,16,1,245,100,42,120,56,123,120,105,0,3,12,118,144,204,223,70,135,80,174,99,61,7,205,30,53,189,47,56,124,101,181,17,7,18,0,59,74,76,26,111,67,180,248,77,93,70,37,143,158,114,40,0,23,180,103,110,139,113,108,6,154,134,55,76,166,144,113,81,91,91,7,210,159,26,1,57,73,109,136,120,143,43,21,33,126,145,126,89,0,0,14,5,19,236,68,3,4,3,70,97,98,95,65,30,183,104,74,245,224,19,204,9,133,103,60,125,19,1,193,121,118,157,94,152,1,1,215,139,147,135,148,110,80,111,0,10,3,85,66,147,162,87,166,133,211,107,54,5,211,34,47,163,41,56,190,37,118,101,0,2,28,110,44,75,62,125,88,145,246,103,104,78,12,218,20,157,120,2,55,172,122,120,145,124,46,1,98,168,149,188,94,239,47,115,87,88,16,136,171,190,141,118,59,105,170,88,116,127,60,87,12,186,174,132,166,163,84,16,6,55,44,3,0,3,5,21,92,81,68,135,109,142,81,225,218,30,139,53,99,78,13,80,7,15,215,113,159,184,93,88,1,6,1,181,2,84,154,101,110,106,1,6,6,86,75,169,205,1,93,44,74,132,70,13,236,25,37,193,33,81,95,99,22,106,0,18,51,65,52,91,29,115,24,131,233,112,78,75,59,114,48,38,79,0,171,112,124,162,165,108,3,7,0,96,65,12,63,110,181,86,152,54,5,217,0,169,218,87,186,44,71,150,187,114,66,0,223,0,21,198,176,134,194,144,188,119,143,139,106,165,133,95,113,141,168,177,65,136,56,245,243,21,66,142,134,157,126,1,29,176,172,115,123,152,88,134,0,0,12,15,124,37,222,126,94,169,4,5,4,16,63,129,242,111,115,65,151,135,32,5,211,51,28,190,94,177,111,182,105,0,1,1,135,42,109,54,112,33,85,101,247,93,67,83,143,103,187,38,1,136,208,96,126,123,151,130,14,1,1,10,91,140,120,110,85,114,242,130,21,100,145,0,10,156,68,87,0,18,241,200,103,23,126,87,6,38,40,135,147,82,92,190,116,59,234,94,41,25,187,156,138,53,166,133,63,246,208,36,110,131,88,158,0,18,100,110,189,89,129,158,126,88,1,5,1,27,12,104,75,91,192,243,4,7,8,72,76,98,148,64,101,123,125,94,38,2,243,23,30,174,91,138,97,59,0,3,11,36,100,60,53,46,62,80,35,157,247,91,50,135,130,114,61,2,14,140,193,82,99,127,159,139,5,4,0,4,24,23,38,18,139,25,87,243,26,5,250,133,34,24,176,114,6,1,60,248,210,12,0,230,220,99,18,170,143,40,45,163,62,73,247,51,4,43,170,68,23,85,169,142,56,239,211,5,150,141,169,1,3,32,156,181,64,168,115,142,114,99,3,3,1,3,138,17,70,115,14,130,7,2,12,14,143,66,89,245,202,129,68,171,99,0,204,52,14,168,34,190,210,100,3,3,14,105,17,124,53,138,16,100,38,193,241,60,81,131,155,66,2,4,27,208,97,124,163,113,163,111,25,10,1,0,96,142,75,82,46,110,41,223,38,1,139,232,78,50,192,122,5,4,38,245,243,12,7,85,182,135,20,100,152,48,55,213,62,142,246,64,8,44,215,51,97,164,142,142,3,246,217,3,184,169,125,2,10,30,150,190,41,147,141,148,139,98,41,1,4,9,27,68,14,154,26,83,8,2,9,15,132,77,52,204,214,142,75,186,85,0,207,84,8,169,16,200,178,93,1,8,23,41,138,52,70,30,118,51,65,133,247,76,55,189,181,38,4,5,26,193,126,85,141,138,175,90,91,46,0,10,18,36,1,0,36,118,76,164,248,42,1,140,203,88,181,126,6,2,21,199,243,175,71,0,4,222,14,184,123,28,72,82,43,14,248,96,7,34,158,127,165,144,103,1,172,239,234,12,171,99,66,2,6,95,145,239,86,135,129,131,157,124,38,2,3,0,1,1,0,143,83,109,24,1,9,6,31,105,114,147,189,151,101,198,92,0,188,104,17,171,107,104,171,35,4,8,11,38,16,42,64,100,33,140,24,211,246,109,73,124,118,7,4,29,88,190,181,110,132,126,151,140,108,41,1,1,0,3,1,27,28,55,5,54,192,113,55,2,1,186,109,134,12,16,6,178,159,247,87,84,30,2,213,227,116,60,50,213,48,161,214,119,4,37,154,114,133,114,44,34,67,241,241,49,220,135,44,4,1,6,0,16,92,66,74,95,49,131,38,2,1,6,0,0,44,50,22,14,48,1,15,16,25,217,175,188,192,214,144,118,103,0,151,62,0,39,101,143,211,45,2,1,1,2,1,10,69,51,86,79,120,147,246,88,181,168,151,1,4,7,5,0,98,75,66,74,93,71,104,39,0,6,0,1,59,3,228,4,197,174,26,246,74,49,63,2,120,94,0,7,23,85,123,80,248,110,42,63,3,83,91,4,27,125,110,150,170,87,7,0,101,79,44,21,163,193,22,116,243,6,26,78,18,3,0,19,106,171,63,25,36,25,26,16,2,24,135,0,30,39,94,114,32,215,17,2,9,5,80,8,66,52,12,121,115,123,73,218,93,152,189,80,48,71,67,11,5,8,6,14,1,98,23,118,9,74,14,16,139,110,5,76,80,3,0,5,13,168,115,66,25,38,11,25,14,0,161,8,0,39,16,11,139,77,121,181,132,225,223,6,9,42,107,123,7,4,22,159,158,204,215,250,197,51,72,106,119,9,40,120,123,156,219,126,37,43,104,94,119,155,186,199,187,211,245,67,80,7,18,1,0,5,56,154,112,98,116,174,158,156,3,1,161,1,8,6,77,131,56,145,46,1,7,6,116,104,232,124,77,99,136,202,109,250,156,202,243,224,36,149,1,4,3,9,8,14,1,250,61,232,36,224,74,224,224,138,77,38,10,7,0,2,3,118,147,116,98,116,180,138,88,1,107,31,0,14,43,95,24,18,44,30,27,40,80,239,210,13,83,149,9,3,7,18,18,37,42,104,171,251,44,72,108,1,28,202,132,144,246,93,92,138,85,14,40,51,13,23,30,59,164,144,136,158,183,215,0,7,75,156,39,109,11,5,26,190,36,14,131,0,23,37,60,35,30,49,58,1,55,86,96,20,72,100,82,168,116,97,156,77,61,73,112,183,181,220,188,248,199,0,1,0,1,7,2,1,18,14,5,3,72,133,181,109,159,241,35,0,5,108,175,28,108,10,6,100,156,24,123,20,5,31,10,12,91,130,34,86,29,178,139,175,105,246,104,93,12,1,136,208,101,230,217,194,175,70,255,193,100,13,40,5,15,15,72,174,54,99,115,151,125,203,75,202,101,136,232,64,64,150,72,112,0,49,84,189,6,155,94,103,26,90,26,17,165,0,5,9,3,233,16,50,44,0,31,36,77,18,89,157,184,29,247,154,174,170,72,86,115,51,156,222,143,113,125,0,104,134,72,194,40,113,81,46,122,51,155,164,84,82,151,56,42,23,41,144,119,51,148,96,84,3,136,12,158,16,6,8,3,5,10,58,101,165,27,66,53,40,31,108,251,103,14,2,1,1,2,4,14,38,49,7,75,246,70,130,116,141,158,142,175,22,16,61,43,81,121,114,20,63,24,3,110,109,52,80,149,121,0,4,1,4,30,103,88,94,54,87,21,6,27,0,2,2,4,36,82,109,53,44,26,18,20,13,4,6,14,11,1,12,86,147,104,94,139,94,10,16,62,85,82,0,0,0,1,7,1,1,1,1,3,2,3,207,34,79,77,183,26,0,4,0,58,30,100,91,80,24,122,14,37,0,1,3,0,0,0,0,1,7,0,0,0,1,0,16,171,178,68,0,17,34,42,5,2,36,23,4,1,254,133,165,97,98,116,103,121,49,20,18,5,5,7,34,122,50,7,14,94,144,30,3,48,3,0,0,0,0,0,1,8,7,0,9,0,0,0,4,1,0,0,0,0,0,156,130,120,123,135,100,134,131,131,152,119,108,147,132,74,109,109,107,63,92,61,27,79,44,13,12,28,44,49,28,37,16,21,12,10,184,55,17,3,40,0,0,0,0,0,0,1,10,1,0,16,0,0,3,3,1,124,164,124,101,158,164,158,186,175,73,65,71,51,175,110,98,211,150,111,101,94,165,97,136,85,72,132,78,97,104,99,116,147,66,107,67,23,70,3,10,88,40,134,124,130,97,114,168,147,213,187,189,187,132,143,133,119,132,95,85,34,6,7,6,22,113,154,52,203,148,112,126,95,90,95,38,123,81,129,119,81,118,144,94,93,40,96,85,163,87,156,164,168,152,129,93,150,136,197,166,158,172,165,148,121,115,86,183,157,192,210,182,192,159,131,141,133,122,85,132,57,40,1,12,6,38,72,4,36,62,122,109,81,91,47,131,115,60,50,30,67,43,122,83,188,107,91,19,85,69,124,6,55,95,127,77,96,78,64,92,105,94,149,39,100,106,104,131,89,116,77,110,124,88,77,72,116,61,61,51,113,47,53,40,123,87,63,134,0,0,107,51,22,52,83,123,85,98,119,121,134,116,118,159,134,126,59,91,63,163,118,135,100,130,149,168,56,151,79,126,112,126,37,112,113,95,103,80,119,92,113,76,129,93,89,73,68,118,59,78,78,68,50,49,105,129,47,76,63,0,26,123,103,138,90,141,135,162,40,182,131,89,175,114,115,75,138,145,76,192,182,104,190,110,77,145,98,134,94,104,99,100,68,60,156,95,97,118,127,86,105,100,103,61,84,101,92,139,104,163,177,88,114,91,133,112,182,178,188,175,125,126,165,199,26,4,17,91,112,111,158,150,14,3,19,12,28,10,26,9,18,16,22,18,17,21,26,30,41,21,27,36,48,51,51,58,50,66,83,95,96,116,136,114,88,103,96,122,109,142,163,139,111,92,90,155,108,219,175,190,118,140,130,177,131,3,5,33,51,61,85,46,37,35,20,44,52,31,19,34,30,19,34,33,3,51,38,18,32,20,16,19,14,19,20,16,14,12,14,20,17,38,10,23,55,6,14,16,10,5,16,8,5,9,4,18,34,10,22,40,58,51,68,156,91,69,121,107,86,101,12,3,7,43,76,68,40,34,97,81,84,66,70,40,51,75,50,68,53,27,44,60,34,46,57,37,18,33,26,11,43,20,5,5,7,1,18,53,6,5,6,14,7,4,6,9,19,30,13,28,39,60,50,127,150,90,79,119,98,95,66,0,6,19,83,62,47,70,110,119,96,82,97,94,103,132,140,142,170,126,77,97,114,89,163,120,91,111,130,147,111,135,147,132,116,150,51,158,144,166,182,165,147,165,126,163,129,220,211,248,166,120,110,115,96,77,82,82,91,4,0,0,108,106,54,63,0,6,26,73,48,44,105,105,135,89,101,84,114,132,152,101,125,98,142,149,138,83,205,208,152,149,189,150,198,219,157,162,181,202,197,145,98,136,154,175,183,157,217,218,239,122,125,104,112,77,77,96,84,33,9,0,0,202,70,65,14,1,3,44,127,154,157,214,126,97,126,112,193,58,205,103,71,82,68,139,149,162,140,121,80,88,139,88,119,115,82,65,48,87,54,69,70,62,55,60,20,60,60,70,100,89,66,152,188,31,150,110,119,126,105,104,93,115,138,107,168,165,125,82,121,148,3,7,26,114,159,203,130,133,88,136,113,213,138,150,88,163,85,94,57,67,24,112,65,154,94,67,62,47,24,30,116,188,21,103,0,125,118,103,133,72,96,90,149,150,59,129,112,141,104,88,103,112,132,38,121,174,97,132,103,131,80,0,19,44,1,0,122,57,74,125,138,139,57,56,27,103,42,46,72,0,4,148,83,59,127,133,99,133,122,141,125,125,168,165,119,122,129,100,81,61,108,35,1,51,64,48,138,208,119,124,121,138,34,107,127,121,105,124,171,131,129,16,112,111,100,144,0,3,1,0,40,118,36,71,217,10,37,99,104,67,0,247,242,154,155,219,139,143,9,84,230,138,3,1,0,1,2,36,239,63,90,0,108,68,20,82,192,211,200,120,126,111,144,2,198,121,118,122,130,152,134,132,11,168,90,113,68,0,1,2,54,43,12,200,83,18,104,59,131,72,121,96,87,144,110,40,7,71,229,14,135,89,121,1,0,190,140,140,91,23,115,183,168,58,133,127,64,114,16,1,242,92,40,120,88,63,48,42,23,67,0,170,84,0,63,190,123,38,89,172,100,140,0,18,16,53,0,164,112,83,74,103,157,107,133,0,47,121,30,0,0,35,198,187,87,5,55,199,180,29,6,18,12,69,78,171,113,3,97,200,39,174,63,71,115,63,61,43,42,51,1,87,165,15,1,150,183,131,5,165,155,114,48,2,17,26,85,87,1,220,214,76,125,66,110,67,155,111,39,72,192,44,51,13,168,114,163,79,143,0,4,181,148,200,61,0,26,94,200,26,144,161,42,127,27,3,181,141,73,130,118,140,141,83,40,82,1,219,251,28,87,151,141,69,80,113,125,135,0,3,42,81,30,52,247,219,0,208,162,157,90,0,63,126,83,1,4,1,112,193,133,7,1,64,200,64,3,10,9,37,16,95,107,30,40,172,41,154,100,107,124,125,165,110,85,44,54,19,225,151,36,80,150,154,6,131,147,136,46,0,6,58,78,90,10,30,64,14,66,126,96,9,54,105,80,143,124,76,65,0,6,78,105,132,97,0,143,121,192,228,12,1,24,6,9,81,75,186,0,164,100,63,12,63,39,72,133,111,121,133,98,75,3,3,50,55,85,113,113,100,50,100,136,115,0,4,5,75,64,0,89,62,1,15,34,126,25,1,12,182,119,48,4,0,63,210,171,48,3,0,213,193,10,6,5,1,88,136,154,38,2,91,245,106,86,43,69,156,113,133,132,127,8,0,3,80,81,89,112,118,61,77,129,148,24,2,4,18,49,105,37,94,99,93,48,54,132,93,50,64,62,80,130,39,107,85,91,26,62,158,3,9,3,168,182,136,70,210,181,141,133,31,105,131,3,40,75,25,93,83,5,134,127,90,94,100,126,149,42,26,99,79,33,111,82,67,134,103,145,166,0,6,9,44,91,33,130,89,148,55,143,75,3,2,18,184,149,106,3,2,145,183,189,157,16,26,50,147,66,81,18,101,200,169,204,38,9,30,59,141,0,31,135,83,116,60,108,112,63,71,20,151,7,104,104,78,110,98,126,161,50,0,6,20,95,121,55,122,69,67,71,41,4,217,120,90,83,83,48,159,174,100,127,44,63,38,1,2,2,79,161,166,58,63,123,171,92,124,144,120,82,23,94,81,109,124,18,119,109,54,149,58,134,115,70,85,118,49,10,3,1,0,60,86,136,113,0,3,55,83,92,109,98,65,90,62,123,79,10,6,2,43,143,79,0,68,164,4,149,2,9,16,2,76,136,92,186,194,104,121,207,26,58,151,124,103,0,48,120,89,105,78,63,148,71,104,78,147,1,11,2,0,1,104,112,148,27,1,9,75,96,75,44,101,72,83,70,30,0,186,150,101,89,101,60,113,182,79,53,162,83,116,2,6,3,104,161,125,63,10,5,107,107,107,125,88,130,53,59,29,95,64,23,156,116,85,108,41,114,121,69,76,33,108,1,22,3,0,72,88,139,133,0,2,43,80,68,82,71,70,91,91,125,90,38,1,6,14,54,161,0,70,178,73,130,7,4,3,3,17,123,143,175,182,166,134,223,66,94,123,110,38,0,70,157,86,92,97,38,172,73,87,68,103,2,12,21,3,2,129,116,150,44,0,3,63,109,54,79,100,53,20,90,51,0,141,182,149,156,109,85,149,147,129,161,27,78,64,44,0,1,58,202,138,133,170,26,96,190,204,170,157,88,155,65,142,61,106,20,50,159,187,124,123,162,112,95,78,70,97,3,0,1,0,101,100,135,107,0,1,96,84,82,63,138,41,114,98,5,165,132,1,1,9,4,69,64,1,7,98,251,71,13,10,2,2,12,6,9,3,155,186,184,74,51,107,103,82,0,2,54,178,155,157,121,147,120,63,80,109,5,6,1,1,0,214,91,152,16,0,17,118,113,101,59,97,118,68,92,132,0,9,5,26,48,35,21,80,98,187,157,61,97,141,99,0,0,3,172,202,85,112,112,18,12,46,109,127,99,162,73,16,119,105,28,5,10,31,25,53,118,115,194,40,68,143,0,1,1,0,71,186,151,171,0,1,93,93,72,127,101,113,64,38,1,42,74,86,0,1,18,5,30,0,0,2,170,166,2,8,1,16,19,26,20,10,12,62,96,43,122,135,84,126,0,5,9,26,33,10,54,116,188,43,51,97,30,0,1,0,0,227,130,175,52,0,23,110,3,14,38,16,3,1,2,14,1,1,3,18,5,9,16,23,96,51,36,3,0,50,82,7,1,0,11,34,62,32,15,0,6,3,9,7,3,92,52,0,73,123,53,4,11,4,4,7,5,69,50,111,86,147,0,3,0,0,76,230,139,199,0,1,1,1,45,31,3,3,23,2,2,9,10,12,18,1,3,20,16,2,3,9,0,3,8,3,1,6,3,9,14,17,35,51,44,2,74,108,67,111,0,7,9,13,2,7,5,33,62,89,106,136,37,0,3,0,0,232,182,159,98,0,1,3,2,10,5,8,10,2,7,5,7,0,0,13,6,9,11,10,22,6,2,8,5,10,23,16,3,1,7,4,5,1,13,8,3,22,12,16,21,15,7,2,10,78,23,4,5,23,10,24,40,29,20,64,41,87,1,1,3,0,7,116,145,217,1,0,2,1,16,5,12,7,26,6,1,8,7,18,21,5,3,26,2,0,1,3,3,23,5,3,10,15,16,15,24,23,22,19,20,16,10,23,17,41,1,3,6,14,11,19,23,38,27,34,59,68,20,2,1,3,0,71,122,159,105,0,4,3,10,7,5,12,8,4,5,6,17,9,3,0,7,14,17,18,8,13,6,1,17,4,7,12,26,3,1,0,2,4,1,1,7,4,6,6,8,5,10,8,3,4,7,1,3,4,6,16,10,1,5,4,5,11,6,3,0,0,9,22,5,20,0,9,4,7,4,10,9,7,5,14,6,8,6,9,10,14,10,9,2,6,1,0,6,6,2,4,1,6,6,7,8,13,2,4,1,13,32,39,16,36,42,6,1,4,7,7,16,6,0,14,3,21,4,6,4,0,0,30,9,7,13,1,4,6,19,15,16,12,12,7,1,7,5,14,20,7,6,10,12,12,3,23,16,0,19,1,1,10,9,17,5,5,7,2,10,11,6,6,8,7,1,2,11,1,4,4,20,34,24,10,23,11,4,9,2,6,14,9,7,1,0,3,1,47,13,26,3,4,12,16,13,20,10,11,15,10,2,3,7,5,2,12,8,14,14,30,9,3,20,7,10,23,23,10,14,22,15,2,2,1,4,10,27,12,20,16,6,40,33,13,25,15,12,5,4,3,5,18,5,5,1,0,2,22,29,16,15,0,11,16,2,9,11,6,10,10,0,5,3,5,6,1,12,15,12,8,12,5,18,5,5,15,4,1,4,3,9,13,11,1,9,9,7,1,9,5,4,17,0,1,9,12,5,20,14,7,7,3,10,1,13,3,16,6,19,0,1,0,2,4,1,0,4,6,6,1,23,4,4,10,6,7,7,3,1,3,9,0,0,5,4,16,10,5,4,14,5,10,2,12,2,1,1,5,4,3,8,18,22,23,12,5,1,13,21,2,10,6,4,5,2,18,2,22,12,6,1,0,0,8,1,1,3,4,8,7,6,5,6,3,9,16,7,0,18,2,1,0,7,5,7,7,2,9,6,2,0,15,16,3,1,2,5,10,4,0,7,6,2,2,2,1,12,3,1,4,7,9,7,9,3,6,1,9,7,5,14,9,10,7,0,6,0,0,1,13,0,3,3,1,5,4,6,8,1,10,10,5,6,1,5,2,4,8,8,2,4,2,1,1,5,5,5,4,2,22,0,1,9,4,1,0,17,9,1,1,6,1,2,11,9,2,3,4,9,5,10,7,10,8,3,1,6,0,0,13,0,0,5,2,1,6,2,3,7,4,3,6,7,0,10,9,0,1,1,9,10,4,12,10,6,7,0,8,11,6,0,3,4,5,3,1,5,7,4,1,13,9,20,1,3,3,3,2,10,7,1,7,5,3,2,5,12,2,5,5,1,1,0,1,1,12,0,1,4,1,4,1,7,8,1,3,11,5,6,6,6,0,0,9,14,4,3,2,2,0,3,9,7,5,5,18,0,0,7,4,2,1,18,1,9,5,2,5,6,18,6,5,5,5,3,3,11,4,3,7,1,2,1,1,0,11,1,0,4,2,2,4,0,0,4,4,3,3,3,2,0,9,15,0,8,7,6,0,2,5,0,16,0,0,0,14,8,0,6,5,4,1,6,8,3,1,22,18,0,1,1,4,1,0,12,12,2,0,4,0,2,3,7,1,2,3,6,6,0,1,1,15,1,0,8,1,4,0,4,4,4,3,9,11,6,4,6,3,2,1,1,6,3,4,2,0,3,6,1,0,3,12,0,0,1,2,2,4,17,5,0,0,3,9,3,24,10,1,1,1,0,5,6,3,1,3,4,7,6,0,0,7,8,1,4,2,5,3,1,0,1,2,8,7,1,6,1,0,0,2,1,3,2,1,3,0,0,6,4,5,2,0,6,2,5,7,4,1,6,3,1,0,1,0,5,0,9,3,1,0,7,14,12,4,2,6,5,1,3,5,4,3,8,9,0,1,2,7,1,0,3,1,5,0,2,1,6,7,5,6,6,0,5,5,6,4,4,7,3,8,7,1,1,2,1,0,6,12,6,4,0,4,3,5,11,8,16,6,0,0,6,14,13,6,2,4,6,2,1,3,6,2,6,9,9,0,1,5,4,1,0,1,4,5,1,0,2,2,3,4,3,5,6,2,4,2,2,5,4,0,3,2,6,4,5,5,3,0,1,3,1,2,2,1,3,5,5,1,2,1,0,2,1,4,4,0,0,12,6,1,0,6,4,4,5,2,2,3,12,5,4,1,2,6,1,2,1,2,1,0,1,3,2,4,0,1,3,0,1,1,3,4,5,1,0,2,2,0,1,5,2,1,1,3,3,3,3,6,4,5,5,0,1,2,1,3,1,5,11,2,0,4,5,3,6,1,2,1,6,10,5,5,0,7,2,2,1,3,1,1,0,0,1,3,4,3,4,5,4,2,3,3,1,5,6,0,2,1,3,3,2,7,10,1,1,5,2,5,3,1,2,3,3,3,2,2,1,1,1,1,4,2,3,2,0,3,1,5,5,0,0,0,0,2,10,14,5,1,1,6,1,2,1,4,1,0,0,1,5,4,0,6,1,0,2,2,0,4,6,1,2,5,3,0,0,3,2,1,1,4,4,1,4,4,3,2,1,2,2,6,0,1,0,7,1,2,1,2,5,2,0,0,0,0,6,10,15,5,0,6,2,1,2,3,2,1,1,2,1,0,1,1,1,2,2,3,2,1,1,1,2,0,1,3,1,2,10,5,2,2,3,1,1,2,1,1,2,2,2,1,1,1,1,1,1,1,0,0,5,2,1,1,2,1,1,0,0,1,1,0,7,2,5,7,0,2,0,0,0,0,0,1,3,0,2,1,3,4,4,0,1,0,0,2,4,1,0,3,3,1,2,2,0,0,2,10,2,0,1,1,1,2,3,3,0,0,1,2,12,5,1,1,3,1,1,1,0,0,1,0,3,6,2,6,3,1,0,0,0,0,0,0,0,0,1,1,1,1,1,2,3,3,1,0,0,1,1,0,2,1,1,2,1,1,1,0,0,1,1,0,0,1,1,1,1,1,0,0,0,0,1,1,0,0,2,1,1,1,2,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,2,0,0,0,1,1,1,4,3,4,0,0,0,0,0,2,1,0,2,3,0,1,2,1,1,0,2,0,0,3,0,2,1,4,1,5,2,3,0,8,1,1,1,2,1,1,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,2,1,1,0,0,0,0,0,0,1,0,0,0,2,1,1,1,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,1,1,1,1,0,0,1,0,0,0,0,1,0,0,1,4,6,0,0,0,0,0,1,0,0,1,0,1,0,0,2,0,1,0,1,0,0,0,0,0,3,0,0,1,0,1,0,0,1,2,0,1,2,2,2,2,0,2,1,3,1,1,2,1,1,0,1,1,0,1,0,0,1,0,1,1,5,3,0,0,0,1,0,1,0,1,1,0,0,0,0,0,1,1,1,1,2,0,1,1,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,3,4,0,1,0,0,0,0,1,1,1,0,0,0,0,2,0,0,0,1,0,0,0,0,1,1,0,0,1,2,1,0,0,0,1,0,1,3,1,1,1,1,1,0,1,1,1,2,1,0,0,1,0,0,0,0,0,0,0,0,0,4,2,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,2,3,0,2,0,0,1,0,0,0,0,0,2,3,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,0,0,0,1,1,0,2,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1,0,0,1,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,1,1,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,2,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,1,1,0,0,0});
Appearance1076->setTexture(*PixelTexture1077);

Shape1075->setAppearance(*Appearance1076);

CIndexedFaceSet* IndexedFaceSet1078 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1078->setCreaseAngle(0.5);
IndexedFaceSet1078->setColorIndex(new int[240]{4,4,4,-1,9,1,0,-1,9,8,1,-1,1,0,0,-1,0,5,0,-1,0,2,5,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,6,2,0,-1,2,2,0,-1,0,6,1,-1,6,0,1,-1,7,0,8,-1,0,1,8,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,9,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,7,-1,0,0,7,-1});
IndexedFaceSet1078->setTexCoordIndex(new int[240]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1});
IndexedFaceSet1078->setCoordIndex(new int[240]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1});
CColor* Color1079 = (CColor *)(m_pScene.createNode("Color"));
Color1079->setColor(new float[30]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.572192,0.486464,0.354382,0.593583,0.504649,0.36763,0.727273,0.618309,0.45043});
IndexedFaceSet1078->setColor(*Color1079);

CTextureCoordinate* TextureCoordinate1080 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1080->setPoint(new float[232]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611});
IndexedFaceSet1078->setTexCoord(*TextureCoordinate1080);

CCoordinate* Coordinate1081 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1081->setPoint(new float[99]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574});
IndexedFaceSet1078->setCoord(*Coordinate1081);

Shape1075->setGeometry(IndexedFaceSet1078);

Transform1074->addChildren(*Shape1075);

LOD1073->addChildren(*Transform1074);

CTransform* Transform1082 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1082->setDEF("alertEmpty_4");
LOD1073->addChildren(*Transform1082);

Transform1072->addChildren(*LOD1073);

Transform1071->addChildren(*Transform1072);

CTransform* Transform1083 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1083->setDEF("proxyLOD_12");
CLOD* LOD1084 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1084->setRange(new float[1]{40}, 1);
CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setDEF("proxyOn_33");
CProximitySensor* ProximitySensor1086 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1086->setDEF("_80");
ProximitySensor1086->setSize(new float[3]{25,100,25});
Transform1085->addChildren(*ProximitySensor1086);

LOD1084->addChildren(*Transform1085);

CTransform* Transform1087 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1087->setDEF("proxyOff_36");
LOD1084->addChildren(*Transform1087);

Transform1083->addChildren(*LOD1084);

Transform1071->addChildren(*Transform1083);

Transform1070->addChildren(*Transform1071);

CTransform* Transform1088 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1088->setDEF("saule02");
Transform1088->setTranslation(new float[3]{-50,0,-750});
CLOD* LOD1089 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1089->setRange(new float[1]{400}, 1);
CTransform* Transform1090 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1090->setTranslation(new float[3]{0,3.2291,0});
Transform1090->setScale(new float[3]{1,3.72126,1});
CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1092 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1093 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1093->setUSE("_79");
Appearance1092->setTexture(*PixelTexture1093);

Shape1091->setAppearance(*Appearance1092);

CIndexedFaceSet* IndexedFaceSet1094 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1094->setCreaseAngle(0.5);
IndexedFaceSet1094->setColorIndex(new int[240]{4,4,4,-1,8,0,0,-1,8,7,0,-1,0,0,0,-1,0,5,0,-1,0,9,5,-1,9,2,5,-1,9,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,9,-1,2,2,9,-1,6,2,0,-1,2,9,0,-1,0,6,0,-1,6,0,0,-1,8,0,7,-1,0,0,7,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,8,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,8,-1,0,0,8,-1});
IndexedFaceSet1094->setTexCoordIndex(new int[240]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1});
IndexedFaceSet1094->setCoordIndex(new int[240]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1});
CColor* Color1095 = (CColor *)(m_pScene.createNode("Color"));
Color1095->setColor(new float[30]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.828877,0.704691,0.513358,0.593583,0.504649,0.36763,0.427701,0.524064,0.250297});
IndexedFaceSet1094->setColor(*Color1095);

CTextureCoordinate* TextureCoordinate1096 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1096->setPoint(new float[232]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611});
IndexedFaceSet1094->setTexCoord(*TextureCoordinate1096);

CCoordinate* Coordinate1097 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1097->setPoint(new float[99]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574});
IndexedFaceSet1094->setCoord(*Coordinate1097);

Shape1091->setGeometry(IndexedFaceSet1094);

Transform1090->addChildren(*Shape1091);

LOD1089->addChildren(*Transform1090);

CTransform* Transform1098 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1098->setDEF("alertEmpty_5");
LOD1089->addChildren(*Transform1098);

Transform1088->addChildren(*LOD1089);

CLOD* LOD1099 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1099->setRange(new float[1]{40}, 1);
CTransform* Transform1100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1100->setDEF("proxyOn_34");
CProximitySensor* ProximitySensor1101 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1101->setDEF("_81");
ProximitySensor1101->setSize(new float[3]{25,100,25});
Transform1100->addChildren(*ProximitySensor1101);

LOD1099->addChildren(*Transform1100);

CTransform* Transform1102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1102->setDEF("proxyOff_37");
LOD1099->addChildren(*Transform1102);

Transform1088->addChildren(*LOD1099);

Transform1070->addChildren(*Transform1088);

CTransform* Transform1103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1103->setDEF("saule03");
Transform1103->setTranslation(new float[3]{-100,0,-800});
CLOD* LOD1104 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1104->setRange(new float[1]{400}, 1);
CTransform* Transform1105 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1105->setTranslation(new float[3]{0,3.2291,0});
Transform1105->setScale(new float[3]{1,3.72126,1});
CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1107 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1108 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1108->setUSE("_79");
Appearance1107->setTexture(*PixelTexture1108);

Shape1106->setAppearance(*Appearance1107);

CIndexedFaceSet* IndexedFaceSet1109 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1109->setCreaseAngle(0.5);
IndexedFaceSet1109->setColorIndex(new int[240]{4,4,4,-1,7,9,0,-1,7,7,9,-1,9,8,0,-1,8,5,0,-1,8,2,5,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,6,2,8,-1,2,2,8,-1,0,6,9,-1,6,8,9,-1,7,0,7,-1,0,9,7,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,7,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,7,-1,0,0,7,-1});
IndexedFaceSet1109->setTexCoordIndex(new int[240]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1});
IndexedFaceSet1109->setCoordIndex(new int[240]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1});
CColor* Color1110 = (CColor *)(m_pScene.createNode("Color"));
Color1110->setColor(new float[30]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.593583,0.504649,0.36763,0.743316,0.416256,0.381853,0.780749,0.335241,0.287056});
IndexedFaceSet1109->setColor(*Color1110);

CTextureCoordinate* TextureCoordinate1111 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1111->setPoint(new float[232]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611});
IndexedFaceSet1109->setTexCoord(*TextureCoordinate1111);

CCoordinate* Coordinate1112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1112->setPoint(new float[99]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574});
IndexedFaceSet1109->setCoord(*Coordinate1112);

Shape1106->setGeometry(IndexedFaceSet1109);

Transform1105->addChildren(*Shape1106);

LOD1104->addChildren(*Transform1105);

CTransform* Transform1113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1113->setDEF("alertEmpty_6");
LOD1104->addChildren(*Transform1113);

Transform1103->addChildren(*LOD1104);

CLOD* LOD1114 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1114->setRange(new float[1]{40}, 1);
CTransform* Transform1115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1115->setDEF("proxyOn_35");
CProximitySensor* ProximitySensor1116 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1116->setDEF("_82");
ProximitySensor1116->setSize(new float[3]{25,100,25});
Transform1115->addChildren(*ProximitySensor1116);

LOD1114->addChildren(*Transform1115);

CTransform* Transform1117 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1117->setDEF("proxyOff_38");
LOD1114->addChildren(*Transform1117);

Transform1103->addChildren(*LOD1114);

Transform1070->addChildren(*Transform1103);

CTransform* Transform1118 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1118->setDEF("saule04");
Transform1118->setTranslation(new float[3]{16,0,-830});
CLOD* LOD1119 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1119->setRange(new float[1]{400}, 1);
CTransform* Transform1120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1120->setTranslation(new float[3]{0,3.2291,0});
Transform1120->setScale(new float[3]{1,3.72126,1});
CShape* Shape1121 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1122 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1123 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1123->setUSE("_79");
Appearance1122->setTexture(*PixelTexture1123);

Shape1121->setAppearance(*Appearance1122);

CIndexedFaceSet* IndexedFaceSet1124 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1124->setCreaseAngle(0.5);
IndexedFaceSet1124->setColorIndex(new int[240]{4,4,4,-1,7,0,0,-1,7,8,0,-1,0,0,0,-1,0,5,0,-1,0,2,5,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,6,2,0,-1,2,2,0,-1,0,6,0,-1,6,0,0,-1,8,0,8,-1,0,0,8,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,7,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,8,-1,0,0,8,-1});
IndexedFaceSet1124->setTexCoordIndex(new int[240]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1});
IndexedFaceSet1124->setCoordIndex(new int[240]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1});
CColor* Color1125 = (CColor *)(m_pScene.createNode("Color"));
Color1125->setColor(new float[27]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.593583,0.504649,0.36763,0.315508,0.313602,0.196817});
IndexedFaceSet1124->setColor(*Color1125);

CTextureCoordinate* TextureCoordinate1126 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1126->setPoint(new float[232]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611});
IndexedFaceSet1124->setTexCoord(*TextureCoordinate1126);

CCoordinate* Coordinate1127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1127->setPoint(new float[99]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574});
IndexedFaceSet1124->setCoord(*Coordinate1127);

Shape1121->setGeometry(IndexedFaceSet1124);

Transform1120->addChildren(*Shape1121);

LOD1119->addChildren(*Transform1120);

CTransform* Transform1128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1128->setDEF("alertEmpty");
LOD1119->addChildren(*Transform1128);

Transform1118->addChildren(*LOD1119);

CLOD* LOD1129 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1129->setRange(new float[1]{40}, 1);
CTransform* Transform1130 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1130->setDEF("proxyOn_36");
CProximitySensor* ProximitySensor1131 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1131->setSize(new float[3]{25,100,25});
Transform1130->addChildren(*ProximitySensor1131);

LOD1129->addChildren(*Transform1130);

CTransform* Transform1132 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1132->setDEF("proxyOff_39");
LOD1129->addChildren(*Transform1132);

Transform1118->addChildren(*LOD1129);

Transform1070->addChildren(*Transform1118);

Transform935->addChildren(*Transform1070);

CTransform* Transform1133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1133->setDEF("temple_1");
CTransform* Transform1134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1134->setDEF("temple02");
Transform1134->setTranslation(new float[3]{80,-40,-900});
CLOD* LOD1135 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1135->setRange(new float[1]{400}, 1);
CTransform* Transform1136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1136->setDEF("temple_2");
CTransform* Transform1137 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1137->setDEF("m1_1");
Transform1137->setTranslation(new float[3]{-21.8605,0,21.8605});
CShape* Shape1138 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1139 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1140 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1140->setDEF("_83");
ImageTexture1140->setUrl(new CString[1]{"stone.png"}, 1);
Appearance1139->setTexture(*ImageTexture1140);

Shape1138->setAppearance(*Appearance1139);

CIndexedFaceSet* IndexedFaceSet1141 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1141->setColorIndex(new int[32]{0,3,2,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,2,3,1,-1,2,3,3,-1,1,3,0,-1,3,0,0,-1});
IndexedFaceSet1141->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1141->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1142 = (CColor *)(m_pScene.createNode("Color"));
Color1142->setColor(new float[12]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.283422,0.235955,0.180695,0.219251,0.217926,0.136771});
IndexedFaceSet1141->setColor(*Color1142);

CTextureCoordinate* TextureCoordinate1143 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1143->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1141->setTexCoord(*TextureCoordinate1143);

CCoordinate* Coordinate1144 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1144->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1141->setCoord(*Coordinate1144);

Shape1138->setGeometry(IndexedFaceSet1141);

Transform1137->addChildren(*Shape1138);

Transform1136->addChildren(*Transform1137);

CTransform* Transform1145 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1145->setTranslation(new float[3]{21.8605,0,21.8605});
CShape* Shape1146 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1147 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1148 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1148->setUSE("_83");
Appearance1147->setTexture(*ImageTexture1148);

Shape1146->setAppearance(*Appearance1147);

CIndexedFaceSet* IndexedFaceSet1149 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1149->setColorIndex(new int[32]{2,1,0,-1,2,1,1,-1,3,4,2,-1,4,1,2,-1,0,1,0,-1,0,1,1,-1,0,1,3,-1,1,4,3,-1});
IndexedFaceSet1149->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1149->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1150 = (CColor *)(m_pScene.createNode("Color"));
Color1150->setColor(new float[15]{0.764706,0.636633,0.487534,0.219251,0.217926,0.136771,0.165775,0.138011,0.105689,0.0534759,0.0445198,0.0340933,0.561764,0.764706,0.555028});
IndexedFaceSet1149->setColor(*Color1150);

CTextureCoordinate* TextureCoordinate1151 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1151->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1149->setTexCoord(*TextureCoordinate1151);

CCoordinate* Coordinate1152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1152->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1149->setCoord(*Coordinate1152);

Shape1146->setGeometry(IndexedFaceSet1149);

Transform1145->addChildren(*Shape1146);

Transform1136->addChildren(*Transform1145);

CTransform* Transform1153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1153->setTranslation(new float[3]{21.8605,0,-21.8605});
CShape* Shape1154 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1155 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1156 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1156->setUSE("_83");
Appearance1155->setTexture(*ImageTexture1156);

Shape1154->setAppearance(*Appearance1155);

CIndexedFaceSet* IndexedFaceSet1157 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1157->setColorIndex(new int[32]{2,1,4,-1,2,1,1,-1,3,0,2,-1,0,1,2,-1,4,1,0,-1,4,1,1,-1,0,1,3,-1,1,0,3,-1});
IndexedFaceSet1157->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1157->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1158 = (CColor *)(m_pScene.createNode("Color"));
Color1158->setColor(new float[15]{0.764706,0.636633,0.487534,0.219251,0.217926,0.136771,0.0387195,0.0681036,0.149733,0.0534759,0.0445198,0.0340933,0.192513,0.160271,0.122736});
IndexedFaceSet1157->setColor(*Color1158);

CTextureCoordinate* TextureCoordinate1159 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1159->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1157->setTexCoord(*TextureCoordinate1159);

CCoordinate* Coordinate1160 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1160->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1157->setCoord(*Coordinate1160);

Shape1154->setGeometry(IndexedFaceSet1157);

Transform1153->addChildren(*Shape1154);

Transform1136->addChildren(*Transform1153);

CTransform* Transform1161 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1161->setTranslation(new float[3]{-21.8605,0,-21.8605});
CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1163 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1164 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1164->setUSE("_83");
Appearance1163->setTexture(*ImageTexture1164);

Shape1162->setAppearance(*Appearance1163);

CIndexedFaceSet* IndexedFaceSet1165 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1165->setColorIndex(new int[32]{4,5,2,-1,4,5,5,-1,0,0,4,-1,0,5,4,-1,2,3,1,-1,2,5,3,-1,1,3,0,-1,3,0,0,-1});
IndexedFaceSet1165->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1165->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1166 = (CColor *)(m_pScene.createNode("Color"));
Color1166->setColor(new float[18]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.144385,0.120203,0.092052,0.764706,0.760817,0.648347,0.106952,0.0890395,0.0681866,0.219251,0.217926,0.136771});
IndexedFaceSet1165->setColor(*Color1166);

CTextureCoordinate* TextureCoordinate1167 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1167->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1165->setTexCoord(*TextureCoordinate1167);

CCoordinate* Coordinate1168 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1168->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1165->setCoord(*Coordinate1168);

Shape1162->setGeometry(IndexedFaceSet1165);

Transform1161->addChildren(*Shape1162);

Transform1136->addChildren(*Transform1161);

CTransform* Transform1169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1169->setTranslation(new float[3]{-21.8605,0,21.8605});
CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1171 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1172 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1172->setUSE("_83");
Appearance1171->setTexture(*ImageTexture1172);

Shape1170->setAppearance(*Appearance1171);

CIndexedFaceSet* IndexedFaceSet1173 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1173->setColorIndex(new int[88]{13,2,4,-1,13,1,2,-1,15,14,4,-1,15,12,14,-1,5,13,14,-1,13,4,14,-1,2,15,4,-1,2,3,15,-1,11,0,8,-1,10,7,0,-1,8,6,9,-1,7,6,0,-1,0,6,8,-1,0,6,7,-1,6,14,0,-1,14,6,0,-1,6,15,8,-1,15,6,8,-1,8,6,6,-1,8,6,6,-1,9,13,6,-1,9,6,13,-1});
IndexedFaceSet1173->setTexCoordIndex(new int[88]{21,12,16,-1,21,9,12,-1,19,15,17,-1,19,11,15,-1,8,21,15,-1,21,16,15,-1,12,19,17,-1,12,10,19,-1,4,6,7,-1,4,5,6,-1,0,2,3,-1,0,1,3,-1,0,1,3,-1,0,2,3,-1,1,14,3,-1,14,2,3,-1,1,18,3,-1,18,2,3,-1,0,13,2,-1,0,1,13,-1,0,20,2,-1,0,1,20,-1});
IndexedFaceSet1173->setCoordIndex(new int[88]{12,8,10,-1,12,6,8,-1,11,9,10,-1,11,2,9,-1,1,12,9,-1,12,10,9,-1,8,11,10,-1,8,4,11,-1,7,3,5,-1,7,0,3,-1,5,6,7,-1,0,1,3,-1,3,2,5,-1,7,1,0,-1,1,9,3,-1,9,2,3,-1,2,11,5,-1,11,4,5,-1,5,8,6,-1,5,4,8,-1,7,12,1,-1,7,6,12,-1});
CColor* Color1174 = (CColor *)(m_pScene.createNode("Color"));
Color1174->setColor(new float[48]{0.764706,0.636633,0.487534,0.0481283,0.0400678,0.030684,0.406417,0.33835,0.259109,0.0802139,0.0667796,0.05114,0.352941,0.22673,0.215845,0.117647,0.0979435,0.0750053,0.379679,0.31609,0.242063,0.514736,0.764706,0.510734,0.764706,0.473992,0.366565,1,0.83252,0.637545,1,0.903846,0.702595,0.925134,0.828418,0.659464,0.0855615,0.0712316,0.0545493,0.331551,0.276023,0.211379,0.481283,0.400678,0.30684,0.55615,0.463006,0.354571});
IndexedFaceSet1173->setColor(*Color1174);

CTextureCoordinate* TextureCoordinate1175 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1175->setPoint(new float[44]{0,0.999998,0,0,3.99998,0,3.99998,0.999998,0,5.02982,0,0,3.55502,0,3.55502,5.02982,0,0,0,5.0083,3.55599,5.0083,3.55599,0,1.778,5.0083,1.99999,0,1.99999,0,1.778,0,1.778,2.50415,1.778,2.50415,1.99999,0,3.55599,2.50415,1.99999,0,0,2.50415});
IndexedFaceSet1173->setTexCoord(*TextureCoordinate1175);

CCoordinate* Coordinate1176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1176->setPoint(new float[39]{-4.02939,22.3794,4.02939,-4.02939,17.3128,4.02939,47.7504,17.3128,4.02939,47.7504,22.3794,4.02939,47.7504,17.3128,-47.7504,47.7504,22.3794,-47.7504,-4.02939,17.3128,-47.7504,-4.02939,22.3794,-47.7504,21.8605,17.3128,-47.7504,21.8605,17.3128,4.02939,21.8605,17.3128,-21.8605,47.7504,17.3128,-21.8605,-4.02939,17.3128,-21.8605});
IndexedFaceSet1173->setCoord(*Coordinate1176);

Shape1170->setGeometry(IndexedFaceSet1173);

Transform1169->addChildren(*Shape1170);

Transform1136->addChildren(*Transform1169);

LOD1135->addChildren(*Transform1136);

CTransform* Transform1177 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1177->setDEF("objOff_27");
LOD1135->addChildren(*Transform1177);

Transform1134->addChildren(*LOD1135);

CLOD* LOD1178 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1178->setRange(new float[1]{80}, 1);
CTransform* Transform1179 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1179->setDEF("proxyOn_37");
CScript* Script1180 = (CScript *)(m_pScene.createNode("Script"));
Script1180->setDEF("_proxyPlugger_2");
Cfield* field1181 = new Cfield();
field1181->setName("alert");
field1181->setAccessType("outputOnly");
field1181->setType("SFTime");
Script1180->addField(*field1181);

Cfield* field1182 = new Cfield();
field1182->setName("hitTime");
field1182->setAccessType("inputOnly");
field1182->setType("SFTime");
Script1180->addField(*field1182);


Script1180.setSourceCode(`vrmlscript:\n"+
"function hitTime(value, time)\n"+
"{\n"+
" alert = time;\n"+
"}`)
Transform1179->addChildren(*Script1180);

CTransform* Transform1183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1183->setTranslation(new float[3]{-21.8666,10,21.9072});
CProximitySensor* ProximitySensor1184 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1184->setDEF("_84");
ProximitySensor1184->setSize(new float[3]{8,20,8});
Transform1183->addChildren(*ProximitySensor1184);

Transform1179->addChildren(*Transform1183);

CTransform* Transform1185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1185->setTranslation(new float[3]{21.814,10,21.9072});
CProximitySensor* ProximitySensor1186 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1186->setDEF("_85");
ProximitySensor1186->setSize(new float[3]{8,20,8});
Transform1185->addChildren(*ProximitySensor1186);

Transform1179->addChildren(*Transform1185);

CTransform* Transform1187 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1187->setTranslation(new float[3]{21.8018,10,-22.371});
CProximitySensor* ProximitySensor1188 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1188->setDEF("_86");
ProximitySensor1188->setSize(new float[3]{8,20,8});
Transform1187->addChildren(*ProximitySensor1188);

Transform1179->addChildren(*Transform1187);

CTransform* Transform1189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1189->setTranslation(new float[3]{-21.9527,10,-22.371});
CProximitySensor* ProximitySensor1190 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1190->setDEF("_87");
ProximitySensor1190->setSize(new float[3]{8,20,8});
Transform1189->addChildren(*ProximitySensor1190);

Transform1179->addChildren(*Transform1189);

CTransform* Transform1191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1191->setTranslation(new float[3]{0,20.0107,0});
CProximitySensor* ProximitySensor1192 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1192->setDEF("_88");
ProximitySensor1192->setSize(new float[3]{52,6,52});
Transform1191->addChildren(*ProximitySensor1192);

Transform1179->addChildren(*Transform1191);

LOD1178->addChildren(*Transform1179);

CTransform* Transform1193 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1193->setDEF("proxyOff_40");
LOD1178->addChildren(*Transform1193);

Transform1134->addChildren(*LOD1178);

Transform1133->addChildren(*Transform1134);

CTransform* Transform1194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1194->setDEF("temple01");
Transform1194->setTranslation(new float[3]{-50,-40,-600});
CTransform* Transform1195 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1195->setDEF("objLOD");
CLOD* LOD1196 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1196->setRange(new float[1]{400}, 1);
CTransform* Transform1197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1197->setDEF("temple");
CTransform* Transform1198 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1198->setDEF("m1");
Transform1198->setTranslation(new float[3]{-21.8605,0,21.8605});
CShape* Shape1199 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1200 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1201 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1201->setUSE("_83");
Appearance1200->setTexture(*ImageTexture1201);

Shape1199->setAppearance(*Appearance1200);

CIndexedFaceSet* IndexedFaceSet1202 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1202->setCreaseAngle(0.5);
IndexedFaceSet1202->setColorIndex(new int[32]{0,0,2,-1,0,3,0,-1,0,0,0,-1,0,3,0,-1,2,4,1,-1,2,0,4,-1,1,4,0,-1,4,0,0,-1});
IndexedFaceSet1202->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1202->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1203 = (CColor *)(m_pScene.createNode("Color"));
Color1203->setColor(new float[15]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.283422,0.235955,0.180695,0.606754,0.764706,0.629551,0.635935,0.764706,0.728866});
IndexedFaceSet1202->setColor(*Color1203);

CTextureCoordinate* TextureCoordinate1204 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1204->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1202->setTexCoord(*TextureCoordinate1204);

CCoordinate* Coordinate1205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1205->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1202->setCoord(*Coordinate1205);

Shape1199->setGeometry(IndexedFaceSet1202);

Transform1198->addChildren(*Shape1199);

Transform1197->addChildren(*Transform1198);

CTransform* Transform1206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1206->setTranslation(new float[3]{21.8605,0,21.8605});
CShape* Shape1207 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1208 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1209 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1209->setUSE("_83");
Appearance1208->setTexture(*ImageTexture1209);

Shape1207->setAppearance(*Appearance1208);

CIndexedFaceSet* IndexedFaceSet1210 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1210->setCreaseAngle(0.5);
IndexedFaceSet1210->setColorIndex(new int[32]{3,5,0,-1,3,1,5,-1,4,6,3,-1,6,1,3,-1,0,2,0,-1,0,5,2,-1,0,2,4,-1,2,6,4,-1});
IndexedFaceSet1210->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1210->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1211 = (CColor *)(m_pScene.createNode("Color"));
Color1211->setColor(new float[21]{0.764706,0.636633,0.487534,0.764706,0.725459,0.60772,0.403634,0.717446,0.764706,0.165775,0.138011,0.105689,0.0534759,0.0445198,0.0340933,0.74341,0.764706,0.576841,0.561764,0.764706,0.555028});
IndexedFaceSet1210->setColor(*Color1211);

CTextureCoordinate* TextureCoordinate1212 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1212->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1210->setTexCoord(*TextureCoordinate1212);

CCoordinate* Coordinate1213 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1213->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1210->setCoord(*Coordinate1213);

Shape1207->setGeometry(IndexedFaceSet1210);

Transform1206->addChildren(*Shape1207);

Transform1197->addChildren(*Transform1206);

CTransform* Transform1214 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1214->setTranslation(new float[3]{21.8605,0,-21.8605});
CShape* Shape1215 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1216 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1217 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1217->setUSE("_83");
Appearance1216->setTexture(*ImageTexture1217);

Shape1215->setAppearance(*Appearance1216);

CIndexedFaceSet* IndexedFaceSet1218 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1218->setCreaseAngle(0.5);
IndexedFaceSet1218->setColorIndex(new int[32]{2,4,5,-1,2,1,4,-1,3,0,2,-1,0,1,2,-1,5,0,0,-1,5,4,0,-1,0,0,3,-1,0,0,3,-1});
IndexedFaceSet1218->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1218->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1219 = (CColor *)(m_pScene.createNode("Color"));
Color1219->setColor(new float[18]{0.764706,0.636633,0.487534,0.521442,0.764706,0.52333,0.0387195,0.0681036,0.149733,0.0534759,0.0445198,0.0340933,0.74341,0.764706,0.576841,0.192513,0.160271,0.122736});
IndexedFaceSet1218->setColor(*Color1219);

CTextureCoordinate* TextureCoordinate1220 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1220->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1218->setTexCoord(*TextureCoordinate1220);

CCoordinate* Coordinate1221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1221->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1218->setCoord(*Coordinate1221);

Shape1215->setGeometry(IndexedFaceSet1218);

Transform1214->addChildren(*Shape1215);

Transform1197->addChildren(*Transform1214);

CTransform* Transform1222 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1222->setTranslation(new float[3]{-21.8605,0,-21.8605});
CShape* Shape1223 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1224 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1225 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1225->setUSE("_83");
Appearance1224->setTexture(*ImageTexture1225);

Shape1223->setAppearance(*Appearance1224);

CIndexedFaceSet* IndexedFaceSet1226 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1226->setCreaseAngle(0.5);
IndexedFaceSet1226->setColorIndex(new int[32]{4,5,2,-1,4,0,5,-1,0,0,4,-1,0,0,4,-1,2,3,1,-1,2,5,3,-1,1,3,0,-1,3,0,0,-1});
IndexedFaceSet1226->setTexCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1});
IndexedFaceSet1226->setCoordIndex(new int[32]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1});
CColor* Color1227 = (CColor *)(m_pScene.createNode("Color"));
Color1227->setColor(new float[18]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.144385,0.120203,0.092052,0.764706,0.760817,0.648347,0.106952,0.0890395,0.0681866,0.553848,0.86631,0.515876});
IndexedFaceSet1226->setColor(*Color1227);

CTextureCoordinate* TextureCoordinate1228 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1228->setPoint(new float[8]{0,3.02056,0,0,0.999825,3.02056,0.999825,0});
IndexedFaceSet1226->setTexCoord(*TextureCoordinate1228);

CCoordinate* Coordinate1229 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1229->setPoint(new float[24]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949});
IndexedFaceSet1226->setCoord(*Coordinate1229);

Shape1223->setGeometry(IndexedFaceSet1226);

Transform1222->addChildren(*Shape1223);

Transform1197->addChildren(*Transform1222);

CTransform* Transform1230 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1230->setTranslation(new float[3]{-21.8605,0,21.8605});
CShape* Shape1231 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1232 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1233 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1233->setUSE("_83");
Appearance1232->setTexture(*ImageTexture1233);

Shape1231->setAppearance(*Appearance1232);

CIndexedFaceSet* IndexedFaceSet1234 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1234->setCreaseAngle(0.5);
IndexedFaceSet1234->setColorIndex(new int[76]{13,2,4,-1,13,1,2,-1,15,14,4,-1,15,12,14,-1,5,13,14,-1,13,4,14,-1,2,15,4,-1,2,3,15,-1,11,0,8,-1,10,7,0,-1,8,6,9,-1,8,6,6,6,-1,7,6,0,-1,6,14,6,0,-1,0,6,8,-1,6,15,6,8,-1,0,6,7,-1,9,6,13,6,-1});
IndexedFaceSet1234->setTexCoordIndex(new int[76]{21,12,16,-1,21,9,12,-1,19,15,17,-1,19,11,15,-1,8,21,15,-1,21,16,15,-1,12,19,17,-1,12,10,19,-1,4,6,7,-1,4,5,6,-1,0,2,3,-1,0,1,13,2,-1,0,1,3,-1,1,14,2,3,-1,0,1,3,-1,1,18,2,3,-1,0,2,3,-1,0,1,20,2,-1});
IndexedFaceSet1234->setCoordIndex(new int[76]{12,8,10,-1,12,6,8,-1,11,9,10,-1,11,2,9,-1,1,12,9,-1,12,10,9,-1,8,11,10,-1,8,4,11,-1,7,3,5,-1,7,0,3,-1,5,6,7,-1,5,4,8,6,-1,0,1,3,-1,1,9,2,3,-1,3,2,5,-1,2,11,4,5,-1,7,1,0,-1,7,6,12,1,-1});
CColor* Color1235 = (CColor *)(m_pScene.createNode("Color"));
Color1235->setColor(new float[48]{0.764706,0.636633,0.487534,0.0481283,0.0400678,0.030684,0.406417,0.33835,0.259109,0.0802139,0.0667796,0.05114,0.352941,0.22673,0.215845,0.117647,0.0979435,0.0750053,0.379679,0.31609,0.242063,0.514736,0.764706,0.510734,0.764706,0.473992,0.366565,1,0.83252,0.637545,1,0.903846,0.702595,0.925134,0.828418,0.659464,0.0855615,0.0712316,0.0545493,0.331551,0.276023,0.211379,0.481283,0.400678,0.30684,0.55615,0.463006,0.354571});
IndexedFaceSet1234->setColor(*Color1235);

CTextureCoordinate* TextureCoordinate1236 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1236->setPoint(new float[44]{0,0.999998,0,0,3.99998,0,3.99998,0.999998,0,5.02982,0,0,3.55502,0,3.55502,5.02982,0,0,0,5.0083,3.55599,5.0083,3.55599,0,1.778,5.0083,1.99999,0,1.99999,0,1.778,0,1.778,2.50415,1.778,2.50415,1.99999,0,3.55599,2.50415,1.99999,0,0,2.50415});
IndexedFaceSet1234->setTexCoord(*TextureCoordinate1236);

CCoordinate* Coordinate1237 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1237->setPoint(new float[39]{-4.02939,22.3794,4.02939,-4.02939,17.3128,4.02939,47.7504,17.3128,4.02939,47.7504,22.3794,4.02939,47.7504,17.3128,-47.7504,47.7504,22.3794,-47.7504,-4.02939,17.3128,-47.7504,-4.02939,22.3794,-47.7504,21.8605,17.3128,-47.7504,21.8605,17.3128,4.02939,21.8605,17.3128,-21.8605,47.7504,17.3128,-21.8605,-4.02939,17.3128,-21.8605});
IndexedFaceSet1234->setCoord(*Coordinate1237);

Shape1231->setGeometry(IndexedFaceSet1234);

Transform1230->addChildren(*Shape1231);

Transform1197->addChildren(*Transform1230);

LOD1196->addChildren(*Transform1197);

CTransform* Transform1238 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1238->setDEF("objOff_28");
LOD1196->addChildren(*Transform1238);

Transform1195->addChildren(*LOD1196);

Transform1194->addChildren(*Transform1195);

CTransform* Transform1239 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1239->setDEF("proxyLOD");
CLOD* LOD1240 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1240->setRange(new float[1]{80}, 1);
CTransform* Transform1241 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1241->setDEF("proxyOn_38");
CScript* Script1242 = (CScript *)(m_pScene.createNode("Script"));
Script1242->setDEF("_proxyPlugger_3");
Cfield* field1243 = new Cfield();
field1243->setName("alert");
field1243->setAccessType("outputOnly");
field1243->setType("SFTime");
Script1242->addField(*field1243);

Cfield* field1244 = new Cfield();
field1244->setName("hitTime");
field1244->setAccessType("inputOnly");
field1244->setType("SFTime");
Script1242->addField(*field1244);


Script1242.setSourceCode(`vrmlscript:\n"+
"function hitTime(value, time)\n"+
"{\n"+
" alert = time;\n"+
"}`)
Transform1241->addChildren(*Script1242);

CTransform* Transform1245 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1245->setDEF("proxy1");
Transform1245->setTranslation(new float[3]{-21.8666,10,21.9072});
CProximitySensor* ProximitySensor1246 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1246->setDEF("_89");
ProximitySensor1246->setSize(new float[3]{8,20,8});
Transform1245->addChildren(*ProximitySensor1246);

Transform1241->addChildren(*Transform1245);

CTransform* Transform1247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1247->setDEF("proxy2");
Transform1247->setTranslation(new float[3]{21.814,10,21.9072});
CProximitySensor* ProximitySensor1248 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1248->setDEF("_90");
ProximitySensor1248->setSize(new float[3]{8,20,8});
Transform1247->addChildren(*ProximitySensor1248);

Transform1241->addChildren(*Transform1247);

CTransform* Transform1249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1249->setDEF("proxy3");
Transform1249->setTranslation(new float[3]{21.8018,10,-22.371});
CProximitySensor* ProximitySensor1250 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1250->setDEF("_91");
ProximitySensor1250->setSize(new float[3]{8,20,8});
Transform1249->addChildren(*ProximitySensor1250);

Transform1241->addChildren(*Transform1249);

CTransform* Transform1251 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1251->setDEF("proxy4");
Transform1251->setTranslation(new float[3]{-21.9527,10,-22.371});
CProximitySensor* ProximitySensor1252 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1252->setDEF("_92");
ProximitySensor1252->setSize(new float[3]{8,20,8});
Transform1251->addChildren(*ProximitySensor1252);

Transform1241->addChildren(*Transform1251);

CTransform* Transform1253 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1253->setDEF("proxy5");
Transform1253->setTranslation(new float[3]{0,20.0107,0});
CProximitySensor* ProximitySensor1254 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1254->setDEF("_93");
ProximitySensor1254->setSize(new float[3]{52,6,52});
Transform1253->addChildren(*ProximitySensor1254);

Transform1241->addChildren(*Transform1253);

LOD1240->addChildren(*Transform1241);

CTransform* Transform1255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1255->setDEF("proxyOff_41");
LOD1240->addChildren(*Transform1255);

Transform1239->addChildren(*LOD1240);

Transform1194->addChildren(*Transform1239);

Transform1133->addChildren(*Transform1194);

CTransform* Transform1256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1256->setDEF("temple03");
Transform1256->setTranslation(new float[3]{-70,-40,-1750});
CLOD* LOD1257 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1257->setRange(new float[1]{400}, 1);
CInline* Inline1258 = (CInline *)(m_pScene.createNode("Inline"));
Inline1258->setUrl(new CString[1]{"temple.x3d"}, 1);
Inline1258->setBboxSize(new float[3]{51.7798,22.3794,51.7798});
Inline1258->setBboxCenter(new float[3]{0.00000476837,11.1897,-0.00000476837});
LOD1257->addChildren(*Inline1258);

CTransform* Transform1259 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1259->setDEF("objOff_29");
LOD1257->addChildren(*Transform1259);

Transform1256->addChildren(*LOD1257);

CLOD* LOD1260 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1260->setRange(new float[1]{80}, 1);
CTransform* Transform1261 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1261->setDEF("proxyOn_39");
CScript* Script1262 = (CScript *)(m_pScene.createNode("Script"));
Script1262->setDEF("_proxyPlugger_4");
Cfield* field1263 = new Cfield();
field1263->setName("alert");
field1263->setAccessType("outputOnly");
field1263->setType("SFTime");
Script1262->addField(*field1263);

Cfield* field1264 = new Cfield();
field1264->setName("hitTime");
field1264->setAccessType("inputOnly");
field1264->setType("SFTime");
Script1262->addField(*field1264);


Script1262.setSourceCode(`vrmlscript:\n"+
"function hitTime(value, time)\n"+
"{\n"+
" alert = time;\n"+
"}`)
Transform1261->addChildren(*Script1262);

CTransform* Transform1265 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1265->setTranslation(new float[3]{-21.8666,10,21.9072});
CProximitySensor* ProximitySensor1266 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1266->setDEF("_94");
ProximitySensor1266->setSize(new float[3]{8,20,8});
Transform1265->addChildren(*ProximitySensor1266);

Transform1261->addChildren(*Transform1265);

CTransform* Transform1267 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1267->setTranslation(new float[3]{21.814,10,21.9072});
CProximitySensor* ProximitySensor1268 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1268->setDEF("_95");
ProximitySensor1268->setSize(new float[3]{8,20,8});
Transform1267->addChildren(*ProximitySensor1268);

Transform1261->addChildren(*Transform1267);

CTransform* Transform1269 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1269->setTranslation(new float[3]{21.8018,10,-22.371});
CProximitySensor* ProximitySensor1270 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1270->setDEF("_96");
ProximitySensor1270->setSize(new float[3]{8,20,8});
Transform1269->addChildren(*ProximitySensor1270);

Transform1261->addChildren(*Transform1269);

CTransform* Transform1271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1271->setTranslation(new float[3]{-21.9527,10,-22.371});
CProximitySensor* ProximitySensor1272 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1272->setDEF("_97");
ProximitySensor1272->setSize(new float[3]{8,20,8});
Transform1271->addChildren(*ProximitySensor1272);

Transform1261->addChildren(*Transform1271);

CTransform* Transform1273 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1273->setTranslation(new float[3]{0,20.0107,0});
CProximitySensor* ProximitySensor1274 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1274->setDEF("_98");
ProximitySensor1274->setSize(new float[3]{52,6,52});
Transform1273->addChildren(*ProximitySensor1274);

Transform1261->addChildren(*Transform1273);

LOD1260->addChildren(*Transform1261);

CTransform* Transform1275 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1275->setDEF("proxyOff_42");
LOD1260->addChildren(*Transform1275);

Transform1256->addChildren(*LOD1260);

Transform1133->addChildren(*Transform1256);

Transform935->addChildren(*Transform1133);

CTransform* Transform1276 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1276->setDEF("ende");
CLOD* LOD1277 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1277->setCenter(new float[3]{0,0,-2000});
LOD1277->setRange(new float[1]{300}, 1);
CTransform* Transform1278 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1278->setDEF("end_1");
CTransform* Transform1279 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1279->setTranslation(new float[3]{8.97198,48.6583,-2034.39});
Transform1279->setRotation(new float[4]{0.00000162937,6.52521e-9,1,0.00730793});
Transform1279->setScaleOrientation(new float[4]{-0.706693,0.706693,0.0341919,1.4921});
CProximitySensor* ProximitySensor1280 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1280->setDEF("_99");
ProximitySensor1280->setSize(new float[3]{85,100,200});
Transform1279->addChildren(*ProximitySensor1280);

Transform1278->addChildren(*Transform1279);

CTransform* Transform1281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1281->setTranslation(new float[3]{-80.4659,10,-2098.23});
CProximitySensor* ProximitySensor1282 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1282->setDEF("_100");
ProximitySensor1282->setSize(new float[3]{90,100,200});
Transform1281->addChildren(*ProximitySensor1282);

Transform1278->addChildren(*Transform1281);

CTransform* Transform1283 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1283->setTranslation(new float[3]{98.7516,10,-2098.23});
CProximitySensor* ProximitySensor1284 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1284->setDEF("_101");
ProximitySensor1284->setSize(new float[3]{90,100,200});
Transform1283->addChildren(*ProximitySensor1284);

Transform1278->addChildren(*Transform1283);

CTransform* Transform1285 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1286 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1286->setTranslation(new float[3]{-74.402,-29.9417,-1847.95});
CProximitySensor* ProximitySensor1287 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1287->setDEF("_102");
ProximitySensor1287->setSize(new float[3]{90,25,20});
Transform1286->addChildren(*ProximitySensor1287);

Transform1285->addChildren(*Transform1286);

CTransform* Transform1288 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1288->setTranslation(new float[3]{76.8736,-29.9417,-1847.95});
CProximitySensor* ProximitySensor1289 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1289->setDEF("_103");
ProximitySensor1289->setSize(new float[3]{90,25,20});
Transform1288->addChildren(*ProximitySensor1289);

Transform1285->addChildren(*Transform1288);

Transform1278->addChildren(*Transform1285);

LOD1277->addChildren(*Transform1278);

CTransform* Transform1290 = (CTransform *)(m_pScene.createNode("Transform"));
LOD1277->addChildren(*Transform1290);

Transform1276->addChildren(*LOD1277);

Transform935->addChildren(*Transform1276);

group->addChildren(*Transform935);

CTransform* Transform1291 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1291->setDEF("KEY");
CScript* Script1292 = (CScript *)(m_pScene.createNode("Script"));
Script1292->setDEF("_keyScript");
Cfield* field1293 = new Cfield();
field1293->setName("keyFound");
field1293->setAccessType("outputOnly");
field1293->setType("SFTime");
Script1292->addField(*field1293);

Cfield* field1294 = new Cfield();
field1294->setName("transparency_A");
field1294->setAccessType("outputOnly");
field1294->setType("SFFloat");
Script1292->addField(*field1294);

Cfield* field1295 = new Cfield();
field1295->setName("transparency_R");
field1295->setAccessType("outputOnly");
field1295->setType("SFFloat");
Script1292->addField(*field1295);

Cfield* field1296 = new Cfield();
field1296->setName("transparency_C");
field1296->setAccessType("outputOnly");
field1296->setType("SFFloat");
Script1292->addField(*field1296);

Cfield* field1297 = new Cfield();
field1297->setName("transparency_A1");
field1297->setAccessType("outputOnly");
field1297->setType("SFFloat");
Script1292->addField(*field1297);

Cfield* field1298 = new Cfield();
field1298->setName("transparency_D");
field1298->setAccessType("outputOnly");
field1298->setType("SFFloat");
Script1292->addField(*field1298);

Cfield* field1299 = new Cfield();
field1299->setName("transparency_I");
field1299->setAccessType("outputOnly");
field1299->setType("SFFloat");
Script1292->addField(*field1299);

Cfield* field1300 = new Cfield();
field1300->setName("transparency_A2");
field1300->setAccessType("outputOnly");
field1300->setType("SFFloat");
Script1292->addField(*field1300);

Cfield* field1301 = new Cfield();
field1301->setName("keyTime_A");
field1301->setAccessType("inputOnly");
field1301->setType("SFTime");
Script1292->addField(*field1301);

Cfield* field1302 = new Cfield();
field1302->setName("reset");
field1302->setAccessType("inputOnly");
field1302->setType("SFTime");
Script1292->addField(*field1302);

Cfield* field1303 = new Cfield();
field1303->setName("keyTime_R");
field1303->setAccessType("inputOnly");
field1303->setType("SFTime");
Script1292->addField(*field1303);

Cfield* field1304 = new Cfield();
field1304->setName("keyTime_C");
field1304->setAccessType("inputOnly");
field1304->setType("SFTime");
Script1292->addField(*field1304);

Cfield* field1305 = new Cfield();
field1305->setName("keyTime_A1");
field1305->setAccessType("inputOnly");
field1305->setType("SFTime");
Script1292->addField(*field1305);

Cfield* field1306 = new Cfield();
field1306->setName("keyTime_D");
field1306->setAccessType("inputOnly");
field1306->setType("SFTime");
Script1292->addField(*field1306);

Cfield* field1307 = new Cfield();
field1307->setName("keyTime_I");
field1307->setAccessType("inputOnly");
field1307->setType("SFTime");
Script1292->addField(*field1307);

Cfield* field1308 = new Cfield();
field1308->setName("keyTime_A2");
field1308->setAccessType("inputOnly");
field1308->setType("SFTime");
Script1292->addField(*field1308);


Script1292.setSourceCode(`vrmlscript:\n"+
"function keyTime_A(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_A = 0.2;\n"+
"}\n"+
"\n"+
"function keyTime_R(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_R = 0.2;\n"+
"}\n"+
"\n"+
"function keyTime_C(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_C = 0.2;\n"+
"}\n"+
"\n"+
"function keyTime_A1(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_A1 = 0.2;\n"+
"}\n"+
"\n"+
"function keyTime_D(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_D = 0.2;\n"+
"}\n"+
"\n"+
"function keyTime_I(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_I = 0.2;\n"+
"}\n"+
"\n"+
"function keyTime_A2(value, time)\n"+
"{\n"+
" keyFound = time;\n"+
" transparency_A2 = 0.2;\n"+
"}\n"+
"\n"+
"\n"+
"function reset(value, time)\n"+
"{\n"+
" transparency_A = 0.9;\n"+
" transparency_R = 0.9;\n"+
" transparency_C = 0.9;\n"+
" transparency_A1 = 0.9;\n"+
" transparency_D = 0.9;\n"+
" transparency_I = 0.9;\n"+
" transparency_A2 = 0.9;\n"+
"}`)
Transform1291->addChildren(*Script1292);

CTransform* Transform1309 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1309->setDEF("Key_A_rcadia");
Transform1309->setTranslation(new float[3]{0,-25,-150});
CLOD* LOD1310 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1310->setRange(new float[1]{200}, 1);
CTransform* Transform1311 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1311->setDEF("objOn_27");
CTransform* Transform1312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1312->setDEF("a");
Transform1312->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1312->setScale(new float[3]{1,1,0.999999});
Transform1312->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1312->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1313 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1314 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1315 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1314->setMaterial(*Material1315);

CImageTexture* ImageTexture1316 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1316->setDEF("_104");
ImageTexture1316->setUrl(new CString[1]{"keybox.png"}, 1);
Appearance1314->setTexture(*ImageTexture1316);

Shape1313->setAppearance(*Appearance1314);

CIndexedFaceSet* IndexedFaceSet1317 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1317->setCreaseAngle(0.5);
IndexedFaceSet1317->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1317->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1318 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1318->setPoint(new float[8]{0.00253391,0.998925,0.00253391,0.495059,0.335491,0.998925,0.335491,0.495059});
IndexedFaceSet1317->setTexCoord(*TextureCoordinate1318);

CCoordinate* Coordinate1319 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1319->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1317->setCoord(*Coordinate1319);

Shape1313->setGeometry(IndexedFaceSet1317);

Transform1312->addChildren(*Shape1313);

Transform1311->addChildren(*Transform1312);

LOD1310->addChildren(*Transform1311);

CTransform* Transform1320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1320->setDEF("objOff_30");
LOD1310->addChildren(*Transform1320);

Transform1309->addChildren(*LOD1310);

CLOD* LOD1321 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1321->setRange(new float[1]{16}, 1);
CTransform* Transform1322 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1322->setDEF("proxyOn");
CProximitySensor* ProximitySensor1323 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1323->setDEF("_105");
ProximitySensor1323->setSize(new float[3]{12,12,12});
Transform1322->addChildren(*ProximitySensor1323);

LOD1321->addChildren(*Transform1322);

CTransform* Transform1324 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1324->setDEF("proxyOff_43");
LOD1321->addChildren(*Transform1324);

Transform1309->addChildren(*LOD1321);

Transform1291->addChildren(*Transform1309);

CTransform* Transform1325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1325->setDEF("Key_a_R_cadia");
Transform1325->setTranslation(new float[3]{0,-15,-525});
CLOD* LOD1326 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1326->setRange(new float[1]{200}, 1);
CTransform* Transform1327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1327->setDEF("objOn_28");
CTransform* Transform1328 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1328->setDEF("r");
Transform1328->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1328->setScale(new float[3]{1,1,0.999999});
Transform1328->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1328->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1329 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1330 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1331 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1330->setMaterial(*Material1331);

CImageTexture* ImageTexture1332 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1332->setUSE("_104");
Appearance1330->setTexture(*ImageTexture1332);

Shape1329->setAppearance(*Appearance1330);

CIndexedFaceSet* IndexedFaceSet1333 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1333->setCreaseAngle(0.5);
IndexedFaceSet1333->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1333->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1334 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1334->setPoint(new float[8]{0.336104,0.998991,0.336104,0.502419,0.663264,0.997977,0.663264,0.501405});
IndexedFaceSet1333->setTexCoord(*TextureCoordinate1334);

CCoordinate* Coordinate1335 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1335->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1333->setCoord(*Coordinate1335);

Shape1329->setGeometry(IndexedFaceSet1333);

Transform1328->addChildren(*Shape1329);

Transform1327->addChildren(*Transform1328);

LOD1326->addChildren(*Transform1327);

CTransform* Transform1336 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1336->setDEF("objOff_31");
LOD1326->addChildren(*Transform1336);

Transform1325->addChildren(*LOD1326);

CLOD* LOD1337 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1337->setRange(new float[1]{16}, 1);
CTransform* Transform1338 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1339 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1339->setDEF("_106");
ProximitySensor1339->setSize(new float[3]{12,12,12});
Transform1338->addChildren(*ProximitySensor1339);

LOD1337->addChildren(*Transform1338);

CTransform* Transform1340 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1340->setDEF("proxyOff_44");
LOD1337->addChildren(*Transform1340);

Transform1325->addChildren(*LOD1337);

Transform1291->addChildren(*Transform1325);

CTransform* Transform1341 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1341->setDEF("Key_ar_C_adia");
Transform1341->setTranslation(new float[3]{-25,-10,-730});
CLOD* LOD1342 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1342->setRange(new float[1]{200}, 1);
CTransform* Transform1343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1343->setDEF("objOn_29");
CTransform* Transform1344 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1344->setDEF("c");
Transform1344->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1344->setScale(new float[3]{1,1,0.999999});
Transform1344->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1344->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1345 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1346 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1347 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1346->setMaterial(*Material1347);

CImageTexture* ImageTexture1348 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1348->setUSE("_104");
Appearance1346->setTexture(*ImageTexture1348);

Shape1345->setAppearance(*Appearance1346);

CIndexedFaceSet* IndexedFaceSet1349 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1349->setCreaseAngle(0.5);
IndexedFaceSet1349->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1349->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1350 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1350->setPoint(new float[8]{0.665066,0.998344,0.665754,0.508506,0.996563,0.998344,0.999143,0.506804});
IndexedFaceSet1349->setTexCoord(*TextureCoordinate1350);

CCoordinate* Coordinate1351 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1351->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1349->setCoord(*Coordinate1351);

Shape1345->setGeometry(IndexedFaceSet1349);

Transform1344->addChildren(*Shape1345);

Transform1343->addChildren(*Transform1344);

LOD1342->addChildren(*Transform1343);

CTransform* Transform1352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1352->setDEF("objOff_32");
LOD1342->addChildren(*Transform1352);

Transform1341->addChildren(*LOD1342);

CLOD* LOD1353 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1353->setRange(new float[1]{16}, 1);
CTransform* Transform1354 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1355 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1355->setDEF("_107");
ProximitySensor1355->setSize(new float[3]{12,12,12});
Transform1354->addChildren(*ProximitySensor1355);

LOD1353->addChildren(*Transform1354);

CTransform* Transform1356 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1356->setDEF("proxyOff_45");
LOD1353->addChildren(*Transform1356);

Transform1341->addChildren(*LOD1353);

Transform1291->addChildren(*Transform1341);

CTransform* Transform1357 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1357->setDEF("Key_arc_A_dia");
Transform1357->setTranslation(new float[3]{50,-20,-840});
CLOD* LOD1358 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1358->setRange(new float[1]{200}, 1);
CTransform* Transform1359 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1359->setDEF("objOn_30");
CTransform* Transform1360 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1360->setDEF("_108");
Transform1360->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1360->setScale(new float[3]{1,1,0.999999});
Transform1360->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1360->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1361 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1362 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1363 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1362->setMaterial(*Material1363);

CImageTexture* ImageTexture1364 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1364->setUSE("_104");
Appearance1362->setTexture(*ImageTexture1364);

Shape1361->setAppearance(*Appearance1362);

CIndexedFaceSet* IndexedFaceSet1365 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1365->setCreaseAngle(0.5);
IndexedFaceSet1365->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1365->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1366 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1366->setPoint(new float[8]{0.0000199504,0.999917,0.0000199504,0.501042,0.335003,0.999917,0.335003,0.501042});
IndexedFaceSet1365->setTexCoord(*TextureCoordinate1366);

CCoordinate* Coordinate1367 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1367->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1365->setCoord(*Coordinate1367);

Shape1361->setGeometry(IndexedFaceSet1365);

Transform1360->addChildren(*Shape1361);

Transform1359->addChildren(*Transform1360);

LOD1358->addChildren(*Transform1359);

CTransform* Transform1368 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1368->setDEF("objOff_33");
LOD1358->addChildren(*Transform1368);

Transform1357->addChildren(*LOD1358);

CLOD* LOD1369 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1369->setRange(new float[1]{16}, 1);
CTransform* Transform1370 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1371 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1371->setDEF("_109");
ProximitySensor1371->setSize(new float[3]{12,12,12});
Transform1370->addChildren(*ProximitySensor1371);

LOD1369->addChildren(*Transform1370);

CTransform* Transform1372 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1372->setDEF("proxyOff_46");
LOD1369->addChildren(*Transform1372);

Transform1357->addChildren(*LOD1369);

Transform1291->addChildren(*Transform1357);

CTransform* Transform1373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1373->setDEF("Key_arca_D_ia");
Transform1373->setTranslation(new float[3]{-9.7,33,-1128});
CLOD* LOD1374 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1374->setRange(new float[1]{200}, 1);
CTransform* Transform1375 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1375->setDEF("objOn_31");
CTransform* Transform1376 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1376->setDEF("d");
Transform1376->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1376->setScale(new float[3]{1,1,0.999999});
Transform1376->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1376->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1377 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1378 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1379 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1378->setMaterial(*Material1379);

CImageTexture* ImageTexture1380 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1380->setUSE("_104");
Appearance1378->setTexture(*ImageTexture1380);

Shape1377->setAppearance(*Appearance1378);

CIndexedFaceSet* IndexedFaceSet1381 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1381->setCreaseAngle(0.5);
IndexedFaceSet1381->setColorIndex(new int[1]{-1});
IndexedFaceSet1381->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1381->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1382 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1382->setPoint(new float[8]{0.00124982,0.499369,0.00124982,0.00196192,0.333756,0.499369,0.333756,0.00196192});
IndexedFaceSet1381->setTexCoord(*TextureCoordinate1382);

CCoordinate* Coordinate1383 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1383->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1381->setCoord(*Coordinate1383);

Shape1377->setGeometry(IndexedFaceSet1381);

Transform1376->addChildren(*Shape1377);

Transform1375->addChildren(*Transform1376);

LOD1374->addChildren(*Transform1375);

CTransform* Transform1384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1384->setDEF("objOff_34");
LOD1374->addChildren(*Transform1384);

Transform1373->addChildren(*LOD1374);

CLOD* LOD1385 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1385->setRange(new float[1]{16}, 1);
CTransform* Transform1386 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1387 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1387->setDEF("_110");
ProximitySensor1387->setSize(new float[3]{12,12,12});
Transform1386->addChildren(*ProximitySensor1387);

LOD1385->addChildren(*Transform1386);

CTransform* Transform1388 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1388->setDEF("proxyOff_47");
LOD1385->addChildren(*Transform1388);

Transform1373->addChildren(*LOD1385);

Transform1291->addChildren(*Transform1373);

CTransform* Transform1389 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1389->setDEF("Key_arcad_I_a");
Transform1389->setTranslation(new float[3]{20,-30,-1500});
CLOD* LOD1390 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1390->setRange(new float[1]{200}, 1);
CTransform* Transform1391 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1391->setDEF("objOn_32");
CTransform* Transform1392 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1392->setDEF("i");
Transform1392->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1392->setScale(new float[3]{1,1,0.999999});
Transform1392->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1392->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1393 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1394 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1395 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1394->setMaterial(*Material1395);

CImageTexture* ImageTexture1396 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1396->setUSE("_104");
Appearance1394->setTexture(*ImageTexture1396);

Shape1393->setAppearance(*Appearance1394);

CIndexedFaceSet* IndexedFaceSet1397 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1397->setCreaseAngle(0.5);
IndexedFaceSet1397->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1397->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1398 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1398->setPoint(new float[8]{0.336318,0.498275,0.336318,0.00156281,0.66133,0.498275,0.66133,0.00156281});
IndexedFaceSet1397->setTexCoord(*TextureCoordinate1398);

CCoordinate* Coordinate1399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1399->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1397->setCoord(*Coordinate1399);

Shape1393->setGeometry(IndexedFaceSet1397);

Transform1392->addChildren(*Shape1393);

Transform1391->addChildren(*Transform1392);

LOD1390->addChildren(*Transform1391);

CTransform* Transform1400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1400->setDEF("objOff_35");
LOD1390->addChildren(*Transform1400);

Transform1389->addChildren(*LOD1390);

CLOD* LOD1401 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1401->setRange(new float[1]{16}, 1);
CTransform* Transform1402 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1403 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1403->setDEF("_111");
ProximitySensor1403->setSize(new float[3]{12,12,12});
Transform1402->addChildren(*ProximitySensor1403);

LOD1401->addChildren(*Transform1402);

CTransform* Transform1404 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1404->setDEF("proxyOff_48");
LOD1401->addChildren(*Transform1404);

Transform1389->addChildren(*LOD1401);

Transform1291->addChildren(*Transform1389);

CTransform* Transform1405 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1405->setDEF("Key_arcadi_A");
Transform1405->setTranslation(new float[3]{-80,-30,-1750});
CLOD* LOD1406 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1406->setRange(new float[1]{200}, 1);
CTransform* Transform1407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1407->setDEF("objOn");
CTransform* Transform1408 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1408->setDEF("a_1");
Transform1408->setTranslation(new float[3]{-4.65661e-9,0,-2.32831e-8});
Transform1408->setScale(new float[3]{1,1,0.999999});
Transform1408->setScaleOrientation(new float[4]{0,1,0,0.018374});
Transform1408->setCenter(new float[3]{0,0,0.0135851});
CShape* Shape1409 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1410 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1411 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance1410->setMaterial(*Material1411);

CImageTexture* ImageTexture1412 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1412->setUSE("_104");
Appearance1410->setTexture(*ImageTexture1412);

Shape1409->setAppearance(*Appearance1410);

CIndexedFaceSet* IndexedFaceSet1413 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1413->setCreaseAngle(0.5);
IndexedFaceSet1413->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet1413->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate1414 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1414->setPoint(new float[8]{0.00138337,0.998223,0.00138337,0.499435,0.329564,0.998223,0.329564,0.499435});
IndexedFaceSet1413->setTexCoord(*TextureCoordinate1414);

CCoordinate* Coordinate1415 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1415->setPoint(new float[24]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702});
IndexedFaceSet1413->setCoord(*Coordinate1415);

Shape1409->setGeometry(IndexedFaceSet1413);

Transform1408->addChildren(*Shape1409);

Transform1407->addChildren(*Transform1408);

LOD1406->addChildren(*Transform1407);

CTransform* Transform1416 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1416->setDEF("objOff");
LOD1406->addChildren(*Transform1416);

Transform1405->addChildren(*LOD1406);

CLOD* LOD1417 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1417->setRange(new float[1]{16}, 1);
CTransform* Transform1418 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor1419 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1419->setDEF("_112");
ProximitySensor1419->setSize(new float[3]{12,12,12});
Transform1418->addChildren(*ProximitySensor1419);

LOD1417->addChildren(*Transform1418);

CTransform* Transform1420 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1420->setDEF("proxyOff");
LOD1417->addChildren(*Transform1420);

Transform1405->addChildren(*LOD1417);

Transform1291->addChildren(*Transform1405);

group->addChildren(*Transform1291);

CTransform* Transform1421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1421->setDEF("RESET");
CTransform* Transform1422 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1422->setDEF("reset_proxy");
CProximitySensor* ProximitySensor1423 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1423->setDEF("_113");
ProximitySensor1423->setSize(new float[3]{500,200,50});
ProximitySensor1423->setCenter(new float[3]{0,0,-50});
Transform1422->addChildren(*ProximitySensor1423);

Transform1421->addChildren(*Transform1422);

group->addChildren(*Transform1421);

CTransform* Transform1424 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1424->setDEF("end");
Transform1424->setTranslation(new float[3]{0,-41.2016,-1848.23});
CShape* Shape1425 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1426 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture1427 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture1427->setUSE("_79");
Appearance1426->setTexture(*PixelTexture1427);

CTextureTransform* TextureTransform1428 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform1428->setScale(new float[2]{3,1});
Appearance1426->setTextureTransform(*TextureTransform1428);

Shape1425->setAppearance(*Appearance1426);

CIndexedFaceSet* IndexedFaceSet1429 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1429->setCreaseAngle(0.5);
IndexedFaceSet1429->setColorIndex(new int[280]{23,0,0,23,-1,23,0,20,20,23,-1,22,0,0,22,-1,22,0,21,21,22,-1,19,0,0,4,-1,20,20,16,4,-1,21,21,15,4,-1,23,0,9,-1,0,9,9,-1,0,20,9,-1,16,0,18,-1,16,20,0,-1,23,18,0,-1,23,0,18,-1,0,19,18,-1,0,17,19,-1,0,0,17,-1,0,22,0,-1,0,15,17,-1,0,21,15,-1,0,9,21,-1,0,9,9,-1,0,22,9,-1,0,2,17,-1,11,17,15,-1,11,0,17,-1,0,0,18,-1,0,16,18,-1,0,11,16,-1,19,17,2,-1,19,0,18,-1,19,2,0,-1,3,2,0,-1,3,8,2,-1,8,10,0,-1,10,0,0,-1,8,8,2,-1,8,0,2,-1,6,14,7,-1,14,0,7,-1,11,8,8,-1,11,12,8,-1,3,0,0,-1,0,13,0,-1,29,4,1,-1,4,5,1,-1,4,1,5,-1,4,1,1,-1,1,5,24,1,-1,25,5,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,29,1,-1,1,1,1,29,-1,9,26,4,-1,9,9,26,-1,26,4,4,-1,26,1,4,-1,28,23,27,-1,23,29,27,-1,9,9,27,-1,9,28,27,-1,9,27,26,-1,9,9,27,-1,27,1,26,-1,27,29,1,-1});
IndexedFaceSet1429->setTexCoordIndex(new int[280]{0,7,9,8,-1,2,22,3,11,8,-1,2,7,9,12,-1,0,16,1,13,12,-1,19,7,9,10,-1,11,1,27,6,-1,13,3,23,6,-1,2,20,5,-1,20,1,5,-1,20,3,1,-1,28,21,30,-1,28,1,21,-1,0,29,21,-1,0,7,29,-1,7,17,29,-1,7,25,18,-1,7,15,25,-1,7,2,15,-1,15,24,26,-1,15,3,24,-1,14,3,1,-1,14,4,3,-1,14,0,4,-1,32,48,49,-1,47,49,50,-1,47,32,49,-1,51,34,54,-1,34,53,54,-1,34,52,53,-1,55,56,57,-1,55,58,59,-1,55,57,58,-1,41,26,31,-1,41,36,26,-1,38,44,30,-1,44,33,30,-1,36,38,26,-1,38,30,26,-1,46,28,45,-1,28,33,45,-1,37,39,35,-1,37,40,39,-1,42,31,43,-1,31,24,43,-1,66,67,69,-1,67,68,69,-1,74,76,77,-1,74,75,76,-1,72,73,79,78,-1,82,70,71,81,-1,64,65,80,-1,62,83,61,-1,80,65,63,-1,83,60,61,-1,83,80,63,60,-1,93,84,85,-1,93,94,84,-1,84,92,85,-1,84,91,92,-1,87,89,86,-1,89,90,86,-1,95,88,86,-1,88,87,86,-1,98,100,101,-1,98,99,100,-1,100,97,101,-1,100,96,97,-1});
IndexedFaceSet1429->setCoordIndex(new int[280]{2,9,11,10,-1,2,17,3,12,10,-1,4,9,11,13,-1,4,15,5,14,13,-1,16,9,11,8,-1,12,3,20,8,-1,14,5,18,8,-1,2,17,7,-1,17,1,7,-1,17,3,1,-1,20,17,21,-1,20,3,17,-1,2,21,17,-1,2,9,21,-1,9,16,21,-1,9,19,16,-1,9,15,19,-1,9,4,15,-1,15,18,19,-1,15,5,18,-1,15,0,5,-1,15,6,0,-1,15,4,6,-1,26,24,19,-1,25,19,18,-1,25,26,19,-1,23,27,21,-1,27,20,21,-1,27,22,20,-1,16,19,24,-1,16,23,21,-1,16,24,23,-1,32,24,26,-1,32,28,24,-1,30,34,23,-1,34,27,23,-1,28,30,24,-1,30,23,24,-1,35,22,34,-1,22,27,34,-1,29,30,28,-1,29,31,30,-1,32,26,33,-1,26,25,33,-1,39,38,34,-1,38,35,34,-1,37,32,33,-1,37,36,32,-1,30,31,41,40,-1,43,29,28,42,-1,28,32,42,-1,30,40,34,-1,42,32,36,-1,40,39,34,-1,40,42,36,39,-1,46,48,49,-1,46,44,48,-1,48,37,49,-1,48,36,37,-1,51,38,50,-1,38,39,50,-1,45,47,50,-1,47,51,50,-1,44,50,48,-1,44,45,50,-1,50,36,48,-1,50,39,36,-1});
CColor* Color1430 = (CColor *)(m_pScene.createNode("Color"));
Color1430->setColor(new float[90]{1,0.939556,0.714648,0.326203,0.306486,0.23312,0.983871,1,0.967742,0.561836,0.953699,1,0.026738,0.0251218,0.0191082,0.347594,0.326584,0.248407,0.679848,1,0.781686,1,0.864424,0.769067,0.334983,0.844428,1,0,0,0,0.328753,0.606005,1,0.703471,1,0.777604,0.817521,1,0.863141,0.577863,1,0.672505,0.532258,1,0.638302,0.127904,0.181818,0.141382,0.176808,0.251337,0.19544,0.379679,0.35673,0.271337,0.28877,0.271316,0.206369,0.459893,0.432095,0.328662,0.128342,0.120585,0.0917195,0.187166,0.175853,0.133758,0.0106952,0.0100487,0.00764329,0.545455,0.389328,0.285514,0.308938,0.290265,0.220782,0.306292,0.287778,0.218891,0.508021,0.272311,0.225124,0.189182,0.283422,0.261376,0.251034,0.479134,0.486631,0.26738,0.182651,0.203471});
IndexedFaceSet1429->setColor(*Color1430);

CTextureCoordinate* TextureCoordinate1431 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1431->setPoint(new float[204]{0.000289381,0.914646,0,0,0.997821,0.914646,1,0,1,0.5,0,0.5,0.5,0,0.499055,0.914646,0,1,0.5,1,0.5,0,1,0,1,1,0,0,0,0.484565,1,0.484565,0,0.484565,0.5,0.484565,0.5,0.484565,0.5,0.484565,1,0.484565,0,0.484565,1,0.484565,0.654926,0,0.654926,0,0.654926,0.484565,0.654926,0.484565,0.2756,0,0.275911,0.00629053,0.2756,0.484565,0.2756,0.484565,0.654926,0.318505,-0.0528288,0.315961,0.2756,0.326959,0.11793,0.322307,0.494771,0.321334,0.494771,0.321334,0.494772,0,0.45678,0.322005,0.45678,0.322005,0.45678,0,0.618776,0.319144,0.618776,0.319144,0.618776,0,0.319955,0.324422,0.31616,0.324895,0.316471,0.0050112,-0.0528288,0.00648928,-0.0528288,0.477311,0.155569,0.48165,0.155569,0.0108278,0.11793,0.469331,0.11793,0.0222758,0.327591,0.0147065,0.327591,0.461761,0.122834,0.816704,-0.0179857,0.816704,-0.0179857,0.312815,0.326802,0.312815,0.326802,0.816704,0.314747,0.78301,0.314747,0.330831,0.163151,0.330831,-0.0163331,0.78301,0.121058,0.330831,-0.0163331,0.330831,0.16229,0.324874,0.162036,0.00374681,-0.0343444,0.00902402,-0.0337149,0.323334,-0.0369114,0.00348967,-0.0369114,0.326943,-0.0356047,0.31915,-0.0356047,0.0104283,0.164911,0.0118563,0.164911,0.317834,-0.0564491,0.315131,-0.0564491,0.00915314,-0.0122198,0.31915,-0.0122198,0.0104283,0.121058,0.389037,-0.0115672,0.326943,-0.0115672,0.00348967,0.163151,0.385308,0.320763,0.331533,0.320763,0.00428096,0.320763,0.336945,0.320763,0.00428096,0.654903,0.00428096,-0.0133773,0.00428096,-0.0133773,0.336945,-0.0133773,0.331533,-0.0133773,0.00428096,0.654903,0.00428096,0.654903,0.331533,0.654903,0.336945,0.662134,0.665386,0.662553,0.348737,0.120704,0.332489,0.120284,0.649138,0.395822,0.645005,0.396241,0.328355});
IndexedFaceSet1429->setTexCoord(*TextureCoordinate1431);

CCoordinate* Coordinate1432 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1432->setPoint(new float[156]{-150,0,152.189,150,0,152.189,150,123.873,-150,150,0,-150,-150,123.873,-150,-150,0,-150,-150,61.9367,152.189,150,61.9367,152.189,0,0,-150,0,123.873,-150,150,123.873,-150,0,123.873,-150,150,0,-150,-150,123.873,-150,-150,0,-150,-150,60.0245,-150,0,60.0245,-150,150,60.0245,-150,-46.4778,0,-150,-46.4778,60.0245,-150,67.3201,0,-150,67.3201,60.0245,-150,67.3201,0,-83,67.3201,60.0245,-83,-46.4778,60.0245,-83,-46.4778,0,-83,-46.4778,39.4542,-83,67.3201,40.2842,-83,1.56856,39.8046,-83,1.56855,0,-83,12.9661,39.8877,-83,12.9661,0,-83,-35.6327,39.5333,-83,-35.6327,0,-83,54.0136,40.1871,-83,54.0136,0,-83,-35.6327,39.5333,-150,-35.6327,0,-150,54.0136,0,-150,54.0136,40.1871,-150,12.9661,39.8877,-91.0719,12.9661,0,-91.0719,1.56856,39.8046,-91.6246,1.56855,0,-91.6246,-35.6327,39.5333,-416.13,54.0136,40.1871,-416.13,-35.6327,0,-416.13,54.0136,0,-416.13,-35.6327,39.5333,-283.065,-35.6327,0,-283.065,54.0136,40.1871,-283.065,54.0136,0,-283.065});
IndexedFaceSet1429->setCoord(*Coordinate1432);

Shape1425->setGeometry(IndexedFaceSet1429);

Transform1424->addChildren(*Shape1425);

CTransform* Transform1433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1433->setTranslation(new float[3]{-105.901,0,0});
CShape* Shape1434 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1435 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1436 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1436->setDEF("_114");
ImageTexture1436->setUrl(new CString[1]{"t2.png"}, 1);
Appearance1435->setTexture(*ImageTexture1436);

Shape1434->setAppearance(*Appearance1435);

CIndexedFaceSet* IndexedFaceSet1437 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1437->setCreaseAngle(0.5);
IndexedFaceSet1437->setColorIndex(new int[25]{0,1,0,0,-1,2,0,3,0,-1,0,3,1,0,-1,0,0,0,2,-1,0,0,0,2,-1});
IndexedFaceSet1437->setTexCoordIndex(new int[25]{4,5,6,7,-1,8,9,10,11,-1,0,1,3,2,-1,0,1,3,2,-1,12,13,14,15,-1});
IndexedFaceSet1437->setCoordIndex(new int[25]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1});
CColor* Color1438 = (CColor *)(m_pScene.createNode("Color"));
Color1438->setColor(new float[12]{1,0.939556,0.714648,0.627891,0.727273,0.550929,1,0.753627,0.545516,0.802139,0.753654,0.573247});
IndexedFaceSet1437->setColor(*Color1438);

CTextureCoordinate* TextureCoordinate1439 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1439->setPoint(new float[32]{0,0.987024,0,0,0.505941,0.987024,0.505941,0,0,0.983608,0,0,1.99952,0,1.99952,0.983608,0.0169232,0.992389,0.0169232,0.0125274,1.99368,0.0125274,1.99368,0.992389,0.00229359,0.996214,0.00751972,0.94246,1.98298,0.924542,1.97775,0.978296});
IndexedFaceSet1437->setTexCoord(*TextureCoordinate1439);

CCoordinate* Coordinate1440 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1440->setPoint(new float[24]{-10,23.1551,10,-10,0,10,75.9007,23.1551,10,75.9007,0,10,75.9007,23.1551,-10,75.9007,0,-10,-10,23.1551,-10,-10,0,-10});
IndexedFaceSet1437->setCoord(*Coordinate1440);

Shape1434->setGeometry(IndexedFaceSet1437);

Transform1433->addChildren(*Shape1434);

Transform1424->addChildren(*Transform1433);

CTransform* Transform1441 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1441->setTranslation(new float[3]{43.048,0,-0.00000536442});
Transform1441->setScale(new float[3]{1,0.999999,1});
CShape* Shape1442 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1443 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1444 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1444->setUSE("_114");
Appearance1443->setTexture(*ImageTexture1444);

Shape1442->setAppearance(*Appearance1443);

CIndexedFaceSet* IndexedFaceSet1445 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1445->setCreaseAngle(0.5);
IndexedFaceSet1445->setColorIndex(new int[25]{0,1,0,0,-1,2,0,3,0,-1,0,3,1,0,-1,0,0,0,2,-1,0,0,0,2,-1});
IndexedFaceSet1445->setTexCoordIndex(new int[25]{4,5,6,7,-1,8,9,10,11,-1,0,1,3,2,-1,0,1,3,2,-1,12,13,14,15,-1});
IndexedFaceSet1445->setCoordIndex(new int[25]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1});
CColor* Color1446 = (CColor *)(m_pScene.createNode("Color"));
Color1446->setColor(new float[12]{1,0.939556,0.714648,0.627891,0.727273,0.550929,1,0.753627,0.545516,0.802139,0.753654,0.573247});
IndexedFaceSet1445->setColor(*Color1446);

CTextureCoordinate* TextureCoordinate1447 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate1447->setPoint(new float[32]{0,0.987024,0,0,0.505941,0.987024,0.505941,0,0,0.983608,0,0,1.99952,0,1.99952,0.983608,0.0169232,0.992389,0.0169232,0.0125274,1.99368,0.0125274,1.99368,0.992389,0.00229359,0.996214,0.00751972,0.94246,1.98298,0.924542,1.97775,0.978296});
IndexedFaceSet1445->setTexCoord(*TextureCoordinate1447);

CCoordinate* Coordinate1448 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1448->setPoint(new float[24]{-10,23.1551,10,-10,0,10,75.9007,23.1551,10,75.9007,0,10,75.9007,23.1551,-10,75.9007,0,-10,-10,23.1551,-10,-10,0,-10});
IndexedFaceSet1445->setCoord(*Coordinate1448);

Shape1442->setGeometry(IndexedFaceSet1445);

Transform1441->addChildren(*Shape1442);

Transform1424->addChildren(*Transform1441);

group->addChildren(*Transform1424);

CROUTE* ROUTE1449 = new CROUTE();
ROUTE1449->setFromNode("enterWorldScript");
ROUTE1449->setFromField("firstTime");
ROUTE1449->setToNode("enterWorldTimeSensor");
ROUTE1449->setToField("set_enabled");
group->addChildren(*ROUTE1449);

CROUTE* ROUTE1450 = new CROUTE();
ROUTE1450->setFromNode("enterWorldTimeSensor");
ROUTE1450->setFromField("time");
ROUTE1450->setToNode("enterWorldScript");
ROUTE1450->setToField("triggerIn");
group->addChildren(*ROUTE1450);

CROUTE* ROUTE1451 = new CROUTE();
ROUTE1451->setFromNode("_19");
ROUTE1451->setFromField("enterTime");
ROUTE1451->setToNode("_countScript");
ROUTE1451->setToField("bonus_Blue");
group->addChildren(*ROUTE1451);

CROUTE* ROUTE1452 = new CROUTE();
ROUTE1452->setFromNode("_21");
ROUTE1452->setFromField("enterTime");
ROUTE1452->setToNode("_countScript");
ROUTE1452->setToField("bonus_Blue");
group->addChildren(*ROUTE1452);

CROUTE* ROUTE1453 = new CROUTE();
ROUTE1453->setFromNode("_23");
ROUTE1453->setFromField("enterTime");
ROUTE1453->setToNode("_countScript");
ROUTE1453->setToField("bonus_Blue");
group->addChildren(*ROUTE1453);

CROUTE* ROUTE1454 = new CROUTE();
ROUTE1454->setFromNode("_25");
ROUTE1454->setFromField("enterTime");
ROUTE1454->setToNode("_countScript");
ROUTE1454->setToField("bonus_Blue");
group->addChildren(*ROUTE1454);

CROUTE* ROUTE1455 = new CROUTE();
ROUTE1455->setFromNode("_27");
ROUTE1455->setFromField("enterTime");
ROUTE1455->setToNode("_countScript");
ROUTE1455->setToField("bonus_Blue");
group->addChildren(*ROUTE1455);

CROUTE* ROUTE1456 = new CROUTE();
ROUTE1456->setFromNode("_31");
ROUTE1456->setFromField("enterTime");
ROUTE1456->setToNode("_countScript");
ROUTE1456->setToField("bonus_Blue");
group->addChildren(*ROUTE1456);

CROUTE* ROUTE1457 = new CROUTE();
ROUTE1457->setFromNode("_29");
ROUTE1457->setFromField("enterTime");
ROUTE1457->setToNode("_countScript");
ROUTE1457->setToField("bonus_Blue");
group->addChildren(*ROUTE1457);

CROUTE* ROUTE1458 = new CROUTE();
ROUTE1458->setFromNode("_37");
ROUTE1458->setFromField("enterTime");
ROUTE1458->setToNode("_countScript");
ROUTE1458->setToField("bonus_Blue");
group->addChildren(*ROUTE1458);

CROUTE* ROUTE1459 = new CROUTE();
ROUTE1459->setFromNode("_41");
ROUTE1459->setFromField("enterTime");
ROUTE1459->setToNode("_countScript");
ROUTE1459->setToField("bonus_Blue");
group->addChildren(*ROUTE1459);

CROUTE* ROUTE1460 = new CROUTE();
ROUTE1460->setFromNode("_43");
ROUTE1460->setFromField("enterTime");
ROUTE1460->setToNode("_countScript");
ROUTE1460->setToField("bonus_Blue");
group->addChildren(*ROUTE1460);

CROUTE* ROUTE1461 = new CROUTE();
ROUTE1461->setFromNode("_44");
ROUTE1461->setFromField("enterTime");
ROUTE1461->setToNode("_countScript");
ROUTE1461->setToField("bonus_Blue");
group->addChildren(*ROUTE1461);

CROUTE* ROUTE1462 = new CROUTE();
ROUTE1462->setFromNode("_53");
ROUTE1462->setFromField("enterTime");
ROUTE1462->setToNode("_countScript");
ROUTE1462->setToField("bonus_Blue");
group->addChildren(*ROUTE1462);

CROUTE* ROUTE1463 = new CROUTE();
ROUTE1463->setFromNode("_52");
ROUTE1463->setFromField("enterTime");
ROUTE1463->setToNode("_countScript");
ROUTE1463->setToField("bonus_Blue");
group->addChildren(*ROUTE1463);

CROUTE* ROUTE1464 = new CROUTE();
ROUTE1464->setFromNode("_50");
ROUTE1464->setFromField("enterTime");
ROUTE1464->setToNode("_countScript");
ROUTE1464->setToField("bonus_Blue");
group->addChildren(*ROUTE1464);

CROUTE* ROUTE1465 = new CROUTE();
ROUTE1465->setFromNode("_48");
ROUTE1465->setFromField("enterTime");
ROUTE1465->setToNode("_countScript");
ROUTE1465->setToField("bonus_Blue");
group->addChildren(*ROUTE1465);

CROUTE* ROUTE1466 = new CROUTE();
ROUTE1466->setFromNode("_46");
ROUTE1466->setFromField("enterTime");
ROUTE1466->setToNode("_countScript");
ROUTE1466->setToField("bonus_Blue");
group->addChildren(*ROUTE1466);

CROUTE* ROUTE1467 = new CROUTE();
ROUTE1467->setFromNode("_15");
ROUTE1467->setFromField("enterTime");
ROUTE1467->setToNode("_countScript");
ROUTE1467->setToField("bonus_Red");
group->addChildren(*ROUTE1467);

CROUTE* ROUTE1468 = new CROUTE();
ROUTE1468->setFromNode("_17");
ROUTE1468->setFromField("enterTime");
ROUTE1468->setToNode("_countScript");
ROUTE1468->setToField("bonus_Red");
group->addChildren(*ROUTE1468);

CROUTE* ROUTE1469 = new CROUTE();
ROUTE1469->setFromNode("_57");
ROUTE1469->setFromField("enterTime");
ROUTE1469->setToNode("_countScript");
ROUTE1469->setToField("bonus_Red");
group->addChildren(*ROUTE1469);

CROUTE* ROUTE1470 = new CROUTE();
ROUTE1470->setFromNode("_55");
ROUTE1470->setFromField("enterTime");
ROUTE1470->setToNode("_countScript");
ROUTE1470->setToField("bonus_Red");
group->addChildren(*ROUTE1470);

CROUTE* ROUTE1471 = new CROUTE();
ROUTE1471->setFromNode("_39");
ROUTE1471->setFromField("enterTime");
ROUTE1471->setToNode("_countScript");
ROUTE1471->setToField("bonus_Red");
group->addChildren(*ROUTE1471);

CROUTE* ROUTE1472 = new CROUTE();
ROUTE1472->setFromNode("_80");
ROUTE1472->setFromField("enterTime");
ROUTE1472->setToNode("_countScript");
ROUTE1472->setToField("alert");
group->addChildren(*ROUTE1472);

CROUTE* ROUTE1473 = new CROUTE();
ROUTE1473->setFromNode("_proxyPlugger_3");
ROUTE1473->setFromField("alert");
ROUTE1473->setToNode("_countScript");
ROUTE1473->setToField("alert");
group->addChildren(*ROUTE1473);

CROUTE* ROUTE1474 = new CROUTE();
ROUTE1474->setFromNode("_81");
ROUTE1474->setFromField("enterTime");
ROUTE1474->setToNode("_countScript");
ROUTE1474->setToField("alert");
group->addChildren(*ROUTE1474);

CROUTE* ROUTE1475 = new CROUTE();
ROUTE1475->setFromNode("_82");
ROUTE1475->setFromField("enterTime");
ROUTE1475->setToNode("_countScript");
ROUTE1475->setToField("alert");
group->addChildren(*ROUTE1475);

CROUTE* ROUTE1476 = new CROUTE();
ROUTE1476->setFromNode("_proxyPlugger_2");
ROUTE1476->setFromField("alert");
ROUTE1476->setToNode("_countScript");
ROUTE1476->setToField("alert");
group->addChildren(*ROUTE1476);

CROUTE* ROUTE1477 = new CROUTE();
ROUTE1477->setFromNode("_proxyPlugger_1");
ROUTE1477->setFromField("alert");
ROUTE1477->setToNode("_countScript");
ROUTE1477->setToField("alert");
group->addChildren(*ROUTE1477);

CROUTE* ROUTE1478 = new CROUTE();
ROUTE1478->setFromNode("_78");
ROUTE1478->setFromField("enterTime");
ROUTE1478->setToNode("_countScript");
ROUTE1478->setToField("alert");
group->addChildren(*ROUTE1478);

CROUTE* ROUTE1479 = new CROUTE();
ROUTE1479->setFromNode("_77");
ROUTE1479->setFromField("enterTime");
ROUTE1479->setToNode("_countScript");
ROUTE1479->setToField("alert");
group->addChildren(*ROUTE1479);

CROUTE* ROUTE1480 = new CROUTE();
ROUTE1480->setFromNode("_76");
ROUTE1480->setFromField("enterTime");
ROUTE1480->setToNode("_countScript");
ROUTE1480->setToField("alert");
group->addChildren(*ROUTE1480);

CROUTE* ROUTE1481 = new CROUTE();
ROUTE1481->setFromNode("_proxyPlugger_4");
ROUTE1481->setFromField("alert");
ROUTE1481->setToNode("_countScript");
ROUTE1481->setToField("alert");
group->addChildren(*ROUTE1481);

CROUTE* ROUTE1482 = new CROUTE();
ROUTE1482->setFromNode("_101");
ROUTE1482->setFromField("enterTime");
ROUTE1482->setToNode("_countScript");
ROUTE1482->setToField("alert");
group->addChildren(*ROUTE1482);

CROUTE* ROUTE1483 = new CROUTE();
ROUTE1483->setFromNode("_99");
ROUTE1483->setFromField("enterTime");
ROUTE1483->setToNode("_countScript");
ROUTE1483->setToField("alert");
group->addChildren(*ROUTE1483);

CROUTE* ROUTE1484 = new CROUTE();
ROUTE1484->setFromNode("_100");
ROUTE1484->setFromField("enterTime");
ROUTE1484->setToNode("_countScript");
ROUTE1484->setToField("alert");
group->addChildren(*ROUTE1484);

CROUTE* ROUTE1485 = new CROUTE();
ROUTE1485->setFromNode("_102");
ROUTE1485->setFromField("enterTime");
ROUTE1485->setToNode("_countScript");
ROUTE1485->setToField("alert");
group->addChildren(*ROUTE1485);

CROUTE* ROUTE1486 = new CROUTE();
ROUTE1486->setFromNode("_103");
ROUTE1486->setFromField("enterTime");
ROUTE1486->setToNode("_countScript");
ROUTE1486->setToField("alert");
group->addChildren(*ROUTE1486);

CROUTE* ROUTE1487 = new CROUTE();
ROUTE1487->setFromNode("_33");
ROUTE1487->setFromField("enterTime");
ROUTE1487->setToNode("_countScript");
ROUTE1487->setToField("bonus_Gold");
group->addChildren(*ROUTE1487);

CROUTE* ROUTE1488 = new CROUTE();
ROUTE1488->setFromNode("_35");
ROUTE1488->setFromField("enterTime");
ROUTE1488->setToNode("_countScript");
ROUTE1488->setToField("bonus_Gold");
group->addChildren(*ROUTE1488);

CROUTE* ROUTE1489 = new CROUTE();
ROUTE1489->setFromNode("_60");
ROUTE1489->setFromField("enterTime");
ROUTE1489->setToNode("_countScript");
ROUTE1489->setToField("bonus_Gold");
group->addChildren(*ROUTE1489);

CROUTE* ROUTE1490 = new CROUTE();
ROUTE1490->setFromNode("_62");
ROUTE1490->setFromField("enterTime");
ROUTE1490->setToNode("_countScript");
ROUTE1490->setToField("bonus_Gold");
group->addChildren(*ROUTE1490);

CROUTE* ROUTE1491 = new CROUTE();
ROUTE1491->setFromNode("_59");
ROUTE1491->setFromField("enterTime");
ROUTE1491->setToNode("_countScript");
ROUTE1491->setToField("bonus_Gold");
group->addChildren(*ROUTE1491);

CROUTE* ROUTE1492 = new CROUTE();
ROUTE1492->setFromNode("_keyScript");
ROUTE1492->setFromField("keyFound");
ROUTE1492->setToNode("_countScript");
ROUTE1492->setToField("key_Found");
group->addChildren(*ROUTE1492);

CROUTE* ROUTE1493 = new CROUTE();
ROUTE1493->setFromNode("_113");
ROUTE1493->setFromField("enterTime");
ROUTE1493->setToNode("_countScript");
ROUTE1493->setToField("resetCount");
group->addChildren(*ROUTE1493);

CROUTE* ROUTE1494 = new CROUTE();
ROUTE1494->setFromNode("camPositionInterp");
ROUTE1494->setFromField("value_changed");
ROUTE1494->setToNode("_cam_draggerScript");
ROUTE1494->setToField("translation_animIN");
group->addChildren(*ROUTE1494);

CROUTE* ROUTE1495 = new CROUTE();
ROUTE1495->setFromNode("plane_1");
ROUTE1495->setFromField("translation_changed");
ROUTE1495->setToNode("_cam_draggerScript");
ROUTE1495->setToField("translation_dragIN");
group->addChildren(*ROUTE1495);

CROUTE* ROUTE1496 = new CROUTE();
ROUTE1496->setFromNode("_countScript");
ROUTE1496->setFromField("alert_Signal");
ROUTE1496->setToNode("Time_1");
ROUTE1496->setToField("set_startTime");
group->addChildren(*ROUTE1496);

CROUTE* ROUTE1497 = new CROUTE();
ROUTE1497->setFromNode("Time_1");
ROUTE1497->setFromField("fraction_changed");
ROUTE1497->setToNode("alert_CAMTranslationInterp");
ROUTE1497->setToField("set_fraction");
group->addChildren(*ROUTE1497);

CROUTE* ROUTE1498 = new CROUTE();
ROUTE1498->setFromNode("Time_1");
ROUTE1498->setFromField("fraction_changed");
ROUTE1498->setToNode("alert_CAMRotationInterp");
ROUTE1498->setToField("set_fraction");
group->addChildren(*ROUTE1498);

CROUTE* ROUTE1499 = new CROUTE();
ROUTE1499->setFromNode("touchSensorTrigger");
ROUTE1499->setFromField("touchTime");
ROUTE1499->setToNode("Time_2");
ROUTE1499->setToField("set_startTime");
group->addChildren(*ROUTE1499);

CROUTE* ROUTE1500 = new CROUTE();
ROUTE1500->setFromNode("Time_2");
ROUTE1500->setFromField("fraction_changed");
ROUTE1500->setToNode("camPositionInterp");
ROUTE1500->setToField("set_fraction");
group->addChildren(*ROUTE1500);

CROUTE* ROUTE1501 = new CROUTE();
ROUTE1501->setFromNode("_cam_draggerScript");
ROUTE1501->setFromField("cameraOUT");
ROUTE1501->setToNode("cam");
ROUTE1501->setToField("set_position");
group->addChildren(*ROUTE1501);

CROUTE* ROUTE1502 = new CROUTE();
ROUTE1502->setFromNode("alert_CAMTranslationInterp");
ROUTE1502->setFromField("value_changed");
ROUTE1502->setToNode("alert_CAM");
ROUTE1502->setToField("set_translation");
group->addChildren(*ROUTE1502);

CROUTE* ROUTE1503 = new CROUTE();
ROUTE1503->setFromNode("alert_CAMRotationInterp");
ROUTE1503->setFromField("value_changed");
ROUTE1503->setToNode("alert_CAM");
ROUTE1503->setToField("set_rotation");
group->addChildren(*ROUTE1503);

CROUTE* ROUTE1504 = new CROUTE();
ROUTE1504->setFromNode("_cam_draggerScript");
ROUTE1504->setFromField("cameraOUT");
ROUTE1504->setToNode("alert_CAM");
ROUTE1504->setToField("set_center");
group->addChildren(*ROUTE1504);

CROUTE* ROUTE1505 = new CROUTE();
ROUTE1505->setFromNode("prox");
ROUTE1505->setFromField("position_changed");
ROUTE1505->setToNode("prox");
ROUTE1505->setToField("set_center");
group->addChildren(*ROUTE1505);

CROUTE* ROUTE1506 = new CROUTE();
ROUTE1506->setFromNode("_countScript");
ROUTE1506->setFromField("alert_Signal");
ROUTE1506->setToNode("Time_3");
ROUTE1506->setToField("set_startTime");
group->addChildren(*ROUTE1506);

CROUTE* ROUTE1507 = new CROUTE();
ROUTE1507->setFromNode("Time_3");
ROUTE1507->setFromField("fraction_changed");
ROUTE1507->setToNode("planeEmissiveColorInterp_1");
ROUTE1507->setToField("set_fraction");
group->addChildren(*ROUTE1507);

CROUTE* ROUTE1508 = new CROUTE();
ROUTE1508->setFromNode("Time_3");
ROUTE1508->setFromField("fraction_changed");
ROUTE1508->setToNode("planeTransparencyInterp_1");
ROUTE1508->setToField("set_fraction");
group->addChildren(*ROUTE1508);

CROUTE* ROUTE1509 = new CROUTE();
ROUTE1509->setFromNode("_countScript");
ROUTE1509->setFromField("bonus_Signal");
ROUTE1509->setToNode("Time_4");
ROUTE1509->setToField("set_startTime");
group->addChildren(*ROUTE1509);

CROUTE* ROUTE1510 = new CROUTE();
ROUTE1510->setFromNode("Time_4");
ROUTE1510->setFromField("fraction_changed");
ROUTE1510->setToNode("planeEmissiveColorInterp_2");
ROUTE1510->setToField("set_fraction");
group->addChildren(*ROUTE1510);

CROUTE* ROUTE1511 = new CROUTE();
ROUTE1511->setFromNode("Time_4");
ROUTE1511->setFromField("fraction_changed");
ROUTE1511->setToNode("planeTransparencyInterp_2");
ROUTE1511->setToField("set_fraction");
group->addChildren(*ROUTE1511);

CROUTE* ROUTE1512 = new CROUTE();
ROUTE1512->setFromNode("_countScript");
ROUTE1512->setFromField("key_Signal");
ROUTE1512->setToNode("Time_5");
ROUTE1512->setToField("set_startTime");
group->addChildren(*ROUTE1512);

CROUTE* ROUTE1513 = new CROUTE();
ROUTE1513->setFromNode("Time_5");
ROUTE1513->setFromField("fraction_changed");
ROUTE1513->setToNode("planeEmissiveColorInterp_3");
ROUTE1513->setToField("set_fraction");
group->addChildren(*ROUTE1513);

CROUTE* ROUTE1514 = new CROUTE();
ROUTE1514->setFromNode("Time_5");
ROUTE1514->setFromField("fraction_changed");
ROUTE1514->setToNode("planeTransparencyInterp_3");
ROUTE1514->setToField("set_fraction");
group->addChildren(*ROUTE1514);

CROUTE* ROUTE1515 = new CROUTE();
ROUTE1515->setFromNode("planeEmissiveColorInterp_1");
ROUTE1515->setFromField("value_changed");
ROUTE1515->setToNode("_3");
ROUTE1515->setToField("set_emissiveColor");
group->addChildren(*ROUTE1515);

CROUTE* ROUTE1516 = new CROUTE();
ROUTE1516->setFromNode("planeEmissiveColorInterp_2");
ROUTE1516->setFromField("value_changed");
ROUTE1516->setToNode("_3");
ROUTE1516->setToField("set_emissiveColor");
group->addChildren(*ROUTE1516);

CROUTE* ROUTE1517 = new CROUTE();
ROUTE1517->setFromNode("planeEmissiveColorInterp_3");
ROUTE1517->setFromField("value_changed");
ROUTE1517->setToNode("_3");
ROUTE1517->setToField("set_emissiveColor");
group->addChildren(*ROUTE1517);

CROUTE* ROUTE1518 = new CROUTE();
ROUTE1518->setFromNode("planeTransparencyInterp_1");
ROUTE1518->setFromField("value_changed");
ROUTE1518->setToNode("_3");
ROUTE1518->setToField("set_transparency");
group->addChildren(*ROUTE1518);

CROUTE* ROUTE1519 = new CROUTE();
ROUTE1519->setFromNode("planeTransparencyInterp_2");
ROUTE1519->setFromField("value_changed");
ROUTE1519->setToNode("_3");
ROUTE1519->setToField("set_transparency");
group->addChildren(*ROUTE1519);

CROUTE* ROUTE1520 = new CROUTE();
ROUTE1520->setFromNode("planeTransparencyInterp_3");
ROUTE1520->setFromField("value_changed");
ROUTE1520->setToNode("_3");
ROUTE1520->setToField("set_transparency");
group->addChildren(*ROUTE1520);

CROUTE* ROUTE1521 = new CROUTE();
ROUTE1521->setFromNode("_1");
ROUTE1521->setFromField("translation_changed");
ROUTE1521->setToNode("plane_1");
ROUTE1521->setToField("set_translation");
group->addChildren(*ROUTE1521);

CROUTE* ROUTE1522 = new CROUTE();
ROUTE1522->setFromNode("_countScript");
ROUTE1522->setFromField("counterDisplay");
ROUTE1522->setToNode("counter_1");
ROUTE1522->setToField("set_string");
group->addChildren(*ROUTE1522);

CROUTE* ROUTE1523 = new CROUTE();
ROUTE1523->setFromNode("_countScript");
ROUTE1523->setFromField("bonus_Signal");
ROUTE1523->setToNode("Sound1clip_1");
ROUTE1523->setToField("set_startTime");
group->addChildren(*ROUTE1523);

CROUTE* ROUTE1524 = new CROUTE();
ROUTE1524->setFromNode("_countScript");
ROUTE1524->setFromField("alert_Signal");
ROUTE1524->setToNode("Sound1clip_2");
ROUTE1524->setToField("set_startTime");
group->addChildren(*ROUTE1524);

CROUTE* ROUTE1525 = new CROUTE();
ROUTE1525->setFromNode("_countScript");
ROUTE1525->setFromField("key_Signal");
ROUTE1525->setToNode("Sound1clip_3");
ROUTE1525->setToField("set_startTime");
group->addChildren(*ROUTE1525);

CROUTE* ROUTE1526 = new CROUTE();
ROUTE1526->setFromNode("_keyScript");
ROUTE1526->setFromField("transparency_A");
ROUTE1526->setToNode("_4");
ROUTE1526->setToField("set_transparency");
group->addChildren(*ROUTE1526);

CROUTE* ROUTE1527 = new CROUTE();
ROUTE1527->setFromNode("_keyScript");
ROUTE1527->setFromField("transparency_R");
ROUTE1527->setToNode("_6");
ROUTE1527->setToField("set_transparency");
group->addChildren(*ROUTE1527);

CROUTE* ROUTE1528 = new CROUTE();
ROUTE1528->setFromNode("_keyScript");
ROUTE1528->setFromField("transparency_C");
ROUTE1528->setToNode("_7");
ROUTE1528->setToField("set_transparency");
group->addChildren(*ROUTE1528);

CROUTE* ROUTE1529 = new CROUTE();
ROUTE1529->setFromNode("_keyScript");
ROUTE1529->setFromField("transparency_A1");
ROUTE1529->setToNode("_8");
ROUTE1529->setToField("set_transparency");
group->addChildren(*ROUTE1529);

CROUTE* ROUTE1530 = new CROUTE();
ROUTE1530->setFromNode("_keyScript");
ROUTE1530->setFromField("transparency_D");
ROUTE1530->setToNode("_10");
ROUTE1530->setToField("set_transparency");
group->addChildren(*ROUTE1530);

CROUTE* ROUTE1531 = new CROUTE();
ROUTE1531->setFromNode("_keyScript");
ROUTE1531->setFromField("transparency_I");
ROUTE1531->setToNode("_11");
ROUTE1531->setToField("set_transparency");
group->addChildren(*ROUTE1531);

CROUTE* ROUTE1532 = new CROUTE();
ROUTE1532->setFromNode("_keyScript");
ROUTE1532->setFromField("transparency_A2");
ROUTE1532->setToNode("_12");
ROUTE1532->setToField("set_transparency");
group->addChildren(*ROUTE1532);

CROUTE* ROUTE1533 = new CROUTE();
ROUTE1533->setFromNode("prox");
ROUTE1533->setFromField("position_changed");
ROUTE1533->setToNode("xform");
ROUTE1533->setToField("set_translation");
group->addChildren(*ROUTE1533);

CROUTE* ROUTE1534 = new CROUTE();
ROUTE1534->setFromNode("prox");
ROUTE1534->setFromField("orientation_changed");
ROUTE1534->setToNode("xform");
ROUTE1534->setToField("set_rotation");
group->addChildren(*ROUTE1534);

CROUTE* ROUTE1535 = new CROUTE();
ROUTE1535->setFromNode("rotorRotationInterp");
ROUTE1535->setFromField("value_changed");
ROUTE1535->setToNode("objOn_1");
ROUTE1535->setToField("set_rotation");
group->addChildren(*ROUTE1535);

CROUTE* ROUTE1536 = new CROUTE();
ROUTE1536->setFromNode("rotorRotationInterp");
ROUTE1536->setFromField("value_changed");
ROUTE1536->setToNode("_16");
ROUTE1536->setToField("set_rotation");
group->addChildren(*ROUTE1536);

CROUTE* ROUTE1537 = new CROUTE();
ROUTE1537->setFromNode("rotorRotationInterp");
ROUTE1537->setFromField("value_changed");
ROUTE1537->setToNode("_18");
ROUTE1537->setToField("set_rotation");
group->addChildren(*ROUTE1537);

CROUTE* ROUTE1538 = new CROUTE();
ROUTE1538->setFromNode("rotorRotationInterp");
ROUTE1538->setFromField("value_changed");
ROUTE1538->setToNode("_20");
ROUTE1538->setToField("set_rotation");
group->addChildren(*ROUTE1538);

CROUTE* ROUTE1539 = new CROUTE();
ROUTE1539->setFromNode("rotorRotationInterp");
ROUTE1539->setFromField("value_changed");
ROUTE1539->setToNode("_22");
ROUTE1539->setToField("set_rotation");
group->addChildren(*ROUTE1539);

CROUTE* ROUTE1540 = new CROUTE();
ROUTE1540->setFromNode("rotorRotationInterp");
ROUTE1540->setFromField("value_changed");
ROUTE1540->setToNode("_24");
ROUTE1540->setToField("set_rotation");
group->addChildren(*ROUTE1540);

CROUTE* ROUTE1541 = new CROUTE();
ROUTE1541->setFromNode("rotorRotationInterp");
ROUTE1541->setFromField("value_changed");
ROUTE1541->setToNode("_26");
ROUTE1541->setToField("set_rotation");
group->addChildren(*ROUTE1541);

CROUTE* ROUTE1542 = new CROUTE();
ROUTE1542->setFromNode("rotorRotationInterp");
ROUTE1542->setFromField("value_changed");
ROUTE1542->setToNode("_28");
ROUTE1542->setToField("set_rotation");
group->addChildren(*ROUTE1542);

CROUTE* ROUTE1543 = new CROUTE();
ROUTE1543->setFromNode("rotorRotationInterp");
ROUTE1543->setFromField("value_changed");
ROUTE1543->setToNode("_30");
ROUTE1543->setToField("set_rotation");
group->addChildren(*ROUTE1543);

CROUTE* ROUTE1544 = new CROUTE();
ROUTE1544->setFromNode("rotorRotationInterp");
ROUTE1544->setFromField("value_changed");
ROUTE1544->setToNode("_32");
ROUTE1544->setToField("set_rotation");
group->addChildren(*ROUTE1544);

CROUTE* ROUTE1545 = new CROUTE();
ROUTE1545->setFromNode("rotorRotationInterp");
ROUTE1545->setFromField("value_changed");
ROUTE1545->setToNode("_34");
ROUTE1545->setToField("set_rotation");
group->addChildren(*ROUTE1545);

CROUTE* ROUTE1546 = new CROUTE();
ROUTE1546->setFromNode("rotorRotationInterp");
ROUTE1546->setFromField("value_changed");
ROUTE1546->setToNode("_36");
ROUTE1546->setToField("set_rotation");
group->addChildren(*ROUTE1546);

CROUTE* ROUTE1547 = new CROUTE();
ROUTE1547->setFromNode("rotorRotationInterp");
ROUTE1547->setFromField("value_changed");
ROUTE1547->setToNode("_38");
ROUTE1547->setToField("set_rotation");
group->addChildren(*ROUTE1547);

CROUTE* ROUTE1548 = new CROUTE();
ROUTE1548->setFromNode("rotorRotationInterp");
ROUTE1548->setFromField("value_changed");
ROUTE1548->setToNode("_40");
ROUTE1548->setToField("set_rotation");
group->addChildren(*ROUTE1548);

CROUTE* ROUTE1549 = new CROUTE();
ROUTE1549->setFromNode("rotorRotationInterp");
ROUTE1549->setFromField("value_changed");
ROUTE1549->setToNode("_42");
ROUTE1549->setToField("set_rotation");
group->addChildren(*ROUTE1549);

CROUTE* ROUTE1550 = new CROUTE();
ROUTE1550->setFromNode("rotorRotationInterp");
ROUTE1550->setFromField("value_changed");
ROUTE1550->setToNode("bonusObj_11");
ROUTE1550->setToField("set_rotation");
group->addChildren(*ROUTE1550);

CROUTE* ROUTE1551 = new CROUTE();
ROUTE1551->setFromNode("rotorRotationInterp");
ROUTE1551->setFromField("value_changed");
ROUTE1551->setToNode("_45");
ROUTE1551->setToField("set_rotation");
group->addChildren(*ROUTE1551);

CROUTE* ROUTE1552 = new CROUTE();
ROUTE1552->setFromNode("rotorRotationInterp");
ROUTE1552->setFromField("value_changed");
ROUTE1552->setToNode("_47");
ROUTE1552->setToField("set_rotation");
group->addChildren(*ROUTE1552);

CROUTE* ROUTE1553 = new CROUTE();
ROUTE1553->setFromNode("rotorRotationInterp");
ROUTE1553->setFromField("value_changed");
ROUTE1553->setToNode("_49");
ROUTE1553->setToField("set_rotation");
group->addChildren(*ROUTE1553);

CROUTE* ROUTE1554 = new CROUTE();
ROUTE1554->setFromNode("rotorRotationInterp");
ROUTE1554->setFromField("value_changed");
ROUTE1554->setToNode("_51");
ROUTE1554->setToField("set_rotation");
group->addChildren(*ROUTE1554);

CROUTE* ROUTE1555 = new CROUTE();
ROUTE1555->setFromNode("rotorRotationInterp");
ROUTE1555->setFromField("value_changed");
ROUTE1555->setToNode("bonusObj_15");
ROUTE1555->setToField("set_rotation");
group->addChildren(*ROUTE1555);

CROUTE* ROUTE1556 = new CROUTE();
ROUTE1556->setFromNode("rotorRotationInterp");
ROUTE1556->setFromField("value_changed");
ROUTE1556->setToNode("_54");
ROUTE1556->setToField("set_rotation");
group->addChildren(*ROUTE1556);

CROUTE* ROUTE1557 = new CROUTE();
ROUTE1557->setFromNode("rotorRotationInterp");
ROUTE1557->setFromField("value_changed");
ROUTE1557->setToNode("_56");
ROUTE1557->setToField("set_rotation");
group->addChildren(*ROUTE1557);

CROUTE* ROUTE1558 = new CROUTE();
ROUTE1558->setFromNode("rotorRotationInterp");
ROUTE1558->setFromField("value_changed");
ROUTE1558->setToNode("_58");
ROUTE1558->setToField("set_rotation");
group->addChildren(*ROUTE1558);

CROUTE* ROUTE1559 = new CROUTE();
ROUTE1559->setFromNode("rotorRotationInterp");
ROUTE1559->setFromField("value_changed");
ROUTE1559->setToNode("_61");
ROUTE1559->setToField("set_rotation");
group->addChildren(*ROUTE1559);

CROUTE* ROUTE1560 = new CROUTE();
ROUTE1560->setFromNode("enterWorldScript");
ROUTE1560->setFromField("startTime");
ROUTE1560->setToNode("Time_6");
ROUTE1560->setToField("set_startTime");
group->addChildren(*ROUTE1560);

CROUTE* ROUTE1561 = new CROUTE();
ROUTE1561->setFromNode("Time_6");
ROUTE1561->setFromField("fraction_changed");
ROUTE1561->setToNode("rotorRotationInterp");
ROUTE1561->setToField("set_fraction");
group->addChildren(*ROUTE1561);

CROUTE* ROUTE1562 = new CROUTE();
ROUTE1562->setFromNode("rotorRotationInterp");
ROUTE1562->setFromField("value_changed");
ROUTE1562->setToNode("bonusRotor");
ROUTE1562->setToField("set_rotation");
group->addChildren(*ROUTE1562);

CROUTE* ROUTE1563 = new CROUTE();
ROUTE1563->setFromNode("_64");
ROUTE1563->setFromField("enterTime");
ROUTE1563->setToNode("_proxyPlugger_1");
ROUTE1563->setToField("hitTime");
group->addChildren(*ROUTE1563);

CROUTE* ROUTE1564 = new CROUTE();
ROUTE1564->setFromNode("_65");
ROUTE1564->setFromField("enterTime");
ROUTE1564->setToNode("_proxyPlugger_1");
ROUTE1564->setToField("hitTime");
group->addChildren(*ROUTE1564);

CROUTE* ROUTE1565 = new CROUTE();
ROUTE1565->setFromNode("_66");
ROUTE1565->setFromField("enterTime");
ROUTE1565->setToNode("_proxyPlugger_1");
ROUTE1565->setToField("hitTime");
group->addChildren(*ROUTE1565);

CROUTE* ROUTE1566 = new CROUTE();
ROUTE1566->setFromNode("_67");
ROUTE1566->setFromField("enterTime");
ROUTE1566->setToNode("_proxyPlugger_1");
ROUTE1566->setToField("hitTime");
group->addChildren(*ROUTE1566);

CROUTE* ROUTE1567 = new CROUTE();
ROUTE1567->setFromNode("_68");
ROUTE1567->setFromField("enterTime");
ROUTE1567->setToNode("_proxyPlugger_1");
ROUTE1567->setToField("hitTime");
group->addChildren(*ROUTE1567);

CROUTE* ROUTE1568 = new CROUTE();
ROUTE1568->setFromNode("_69");
ROUTE1568->setFromField("enterTime");
ROUTE1568->setToNode("_proxyPlugger_1");
ROUTE1568->setToField("hitTime");
group->addChildren(*ROUTE1568);

CROUTE* ROUTE1569 = new CROUTE();
ROUTE1569->setFromNode("_71");
ROUTE1569->setFromField("enterTime");
ROUTE1569->setToNode("_proxyPlugger_1");
ROUTE1569->setToField("hitTime");
group->addChildren(*ROUTE1569);

CROUTE* ROUTE1570 = new CROUTE();
ROUTE1570->setFromNode("_70");
ROUTE1570->setFromField("enterTime");
ROUTE1570->setToNode("_proxyPlugger_1");
ROUTE1570->setToField("hitTime");
group->addChildren(*ROUTE1570);

CROUTE* ROUTE1571 = new CROUTE();
ROUTE1571->setFromNode("_75");
ROUTE1571->setFromField("enterTime");
ROUTE1571->setToNode("_proxyPlugger_1");
ROUTE1571->setToField("hitTime");
group->addChildren(*ROUTE1571);

CROUTE* ROUTE1572 = new CROUTE();
ROUTE1572->setFromNode("_74");
ROUTE1572->setFromField("enterTime");
ROUTE1572->setToNode("_proxyPlugger_1");
ROUTE1572->setToField("hitTime");
group->addChildren(*ROUTE1572);

CROUTE* ROUTE1573 = new CROUTE();
ROUTE1573->setFromNode("_73");
ROUTE1573->setFromField("enterTime");
ROUTE1573->setToNode("_proxyPlugger_1");
ROUTE1573->setToField("hitTime");
group->addChildren(*ROUTE1573);

CROUTE* ROUTE1574 = new CROUTE();
ROUTE1574->setFromNode("_72");
ROUTE1574->setFromField("enterTime");
ROUTE1574->setToNode("_proxyPlugger_1");
ROUTE1574->setToField("hitTime");
group->addChildren(*ROUTE1574);

CROUTE* ROUTE1575 = new CROUTE();
ROUTE1575->setFromNode("_88");
ROUTE1575->setFromField("enterTime");
ROUTE1575->setToNode("_proxyPlugger_2");
ROUTE1575->setToField("hitTime");
group->addChildren(*ROUTE1575);

CROUTE* ROUTE1576 = new CROUTE();
ROUTE1576->setFromNode("_87");
ROUTE1576->setFromField("enterTime");
ROUTE1576->setToNode("_proxyPlugger_2");
ROUTE1576->setToField("hitTime");
group->addChildren(*ROUTE1576);

CROUTE* ROUTE1577 = new CROUTE();
ROUTE1577->setFromNode("_86");
ROUTE1577->setFromField("enterTime");
ROUTE1577->setToNode("_proxyPlugger_2");
ROUTE1577->setToField("hitTime");
group->addChildren(*ROUTE1577);

CROUTE* ROUTE1578 = new CROUTE();
ROUTE1578->setFromNode("_85");
ROUTE1578->setFromField("enterTime");
ROUTE1578->setToNode("_proxyPlugger_2");
ROUTE1578->setToField("hitTime");
group->addChildren(*ROUTE1578);

CROUTE* ROUTE1579 = new CROUTE();
ROUTE1579->setFromNode("_84");
ROUTE1579->setFromField("enterTime");
ROUTE1579->setToNode("_proxyPlugger_2");
ROUTE1579->setToField("hitTime");
group->addChildren(*ROUTE1579);

CROUTE* ROUTE1580 = new CROUTE();
ROUTE1580->setFromNode("_93");
ROUTE1580->setFromField("enterTime");
ROUTE1580->setToNode("_proxyPlugger_3");
ROUTE1580->setToField("hitTime");
group->addChildren(*ROUTE1580);

CROUTE* ROUTE1581 = new CROUTE();
ROUTE1581->setFromNode("_92");
ROUTE1581->setFromField("enterTime");
ROUTE1581->setToNode("_proxyPlugger_3");
ROUTE1581->setToField("hitTime");
group->addChildren(*ROUTE1581);

CROUTE* ROUTE1582 = new CROUTE();
ROUTE1582->setFromNode("_91");
ROUTE1582->setFromField("enterTime");
ROUTE1582->setToNode("_proxyPlugger_3");
ROUTE1582->setToField("hitTime");
group->addChildren(*ROUTE1582);

CROUTE* ROUTE1583 = new CROUTE();
ROUTE1583->setFromNode("_90");
ROUTE1583->setFromField("enterTime");
ROUTE1583->setToNode("_proxyPlugger_3");
ROUTE1583->setToField("hitTime");
group->addChildren(*ROUTE1583);

CROUTE* ROUTE1584 = new CROUTE();
ROUTE1584->setFromNode("_89");
ROUTE1584->setFromField("enterTime");
ROUTE1584->setToNode("_proxyPlugger_3");
ROUTE1584->setToField("hitTime");
group->addChildren(*ROUTE1584);

CROUTE* ROUTE1585 = new CROUTE();
ROUTE1585->setFromNode("_98");
ROUTE1585->setFromField("enterTime");
ROUTE1585->setToNode("_proxyPlugger_4");
ROUTE1585->setToField("hitTime");
group->addChildren(*ROUTE1585);

CROUTE* ROUTE1586 = new CROUTE();
ROUTE1586->setFromNode("_97");
ROUTE1586->setFromField("enterTime");
ROUTE1586->setToNode("_proxyPlugger_4");
ROUTE1586->setToField("hitTime");
group->addChildren(*ROUTE1586);

CROUTE* ROUTE1587 = new CROUTE();
ROUTE1587->setFromNode("_96");
ROUTE1587->setFromField("enterTime");
ROUTE1587->setToNode("_proxyPlugger_4");
ROUTE1587->setToField("hitTime");
group->addChildren(*ROUTE1587);

CROUTE* ROUTE1588 = new CROUTE();
ROUTE1588->setFromNode("_95");
ROUTE1588->setFromField("enterTime");
ROUTE1588->setToNode("_proxyPlugger_4");
ROUTE1588->setToField("hitTime");
group->addChildren(*ROUTE1588);

CROUTE* ROUTE1589 = new CROUTE();
ROUTE1589->setFromNode("_94");
ROUTE1589->setFromField("enterTime");
ROUTE1589->setToNode("_proxyPlugger_4");
ROUTE1589->setToField("hitTime");
group->addChildren(*ROUTE1589);

CROUTE* ROUTE1590 = new CROUTE();
ROUTE1590->setFromNode("_105");
ROUTE1590->setFromField("enterTime");
ROUTE1590->setToNode("_keyScript");
ROUTE1590->setToField("keyTime_A");
group->addChildren(*ROUTE1590);

CROUTE* ROUTE1591 = new CROUTE();
ROUTE1591->setFromNode("_113");
ROUTE1591->setFromField("enterTime");
ROUTE1591->setToNode("_keyScript");
ROUTE1591->setToField("reset");
group->addChildren(*ROUTE1591);

CROUTE* ROUTE1592 = new CROUTE();
ROUTE1592->setFromNode("_106");
ROUTE1592->setFromField("enterTime");
ROUTE1592->setToNode("_keyScript");
ROUTE1592->setToField("keyTime_R");
group->addChildren(*ROUTE1592);

CROUTE* ROUTE1593 = new CROUTE();
ROUTE1593->setFromNode("_107");
ROUTE1593->setFromField("enterTime");
ROUTE1593->setToNode("_keyScript");
ROUTE1593->setToField("keyTime_C");
group->addChildren(*ROUTE1593);

CROUTE* ROUTE1594 = new CROUTE();
ROUTE1594->setFromNode("_109");
ROUTE1594->setFromField("enterTime");
ROUTE1594->setToNode("_keyScript");
ROUTE1594->setToField("keyTime_A1");
group->addChildren(*ROUTE1594);

CROUTE* ROUTE1595 = new CROUTE();
ROUTE1595->setFromNode("_110");
ROUTE1595->setFromField("enterTime");
ROUTE1595->setToNode("_keyScript");
ROUTE1595->setToField("keyTime_D");
group->addChildren(*ROUTE1595);

CROUTE* ROUTE1596 = new CROUTE();
ROUTE1596->setFromNode("_111");
ROUTE1596->setFromField("enterTime");
ROUTE1596->setToNode("_keyScript");
ROUTE1596->setToField("keyTime_I");
group->addChildren(*ROUTE1596);

CROUTE* ROUTE1597 = new CROUTE();
ROUTE1597->setFromNode("_112");
ROUTE1597->setFromField("enterTime");
ROUTE1597->setToNode("_keyScript");
ROUTE1597->setToField("keyTime_A2");
group->addChildren(*ROUTE1597);

CROUTE* ROUTE1598 = new CROUTE();
ROUTE1598->setFromNode("rotorRotationInterp");
ROUTE1598->setFromField("value_changed");
ROUTE1598->setToNode("objOn_27");
ROUTE1598->setToField("set_rotation");
group->addChildren(*ROUTE1598);

CROUTE* ROUTE1599 = new CROUTE();
ROUTE1599->setFromNode("rotorRotationInterp");
ROUTE1599->setFromField("value_changed");
ROUTE1599->setToNode("objOn_28");
ROUTE1599->setToField("set_rotation");
group->addChildren(*ROUTE1599);

CROUTE* ROUTE1600 = new CROUTE();
ROUTE1600->setFromNode("rotorRotationInterp");
ROUTE1600->setFromField("value_changed");
ROUTE1600->setToNode("c");
ROUTE1600->setToField("set_rotation");
group->addChildren(*ROUTE1600);

CROUTE* ROUTE1601 = new CROUTE();
ROUTE1601->setFromNode("rotorRotationInterp");
ROUTE1601->setFromField("value_changed");
ROUTE1601->setToNode("_108");
ROUTE1601->setToField("set_rotation");
group->addChildren(*ROUTE1601);

CROUTE* ROUTE1602 = new CROUTE();
ROUTE1602->setFromNode("rotorRotationInterp");
ROUTE1602->setFromField("value_changed");
ROUTE1602->setToNode("d");
ROUTE1602->setToField("set_rotation");
group->addChildren(*ROUTE1602);

CROUTE* ROUTE1603 = new CROUTE();
ROUTE1603->setFromNode("rotorRotationInterp");
ROUTE1603->setFromField("value_changed");
ROUTE1603->setToNode("i");
ROUTE1603->setToField("set_rotation");
group->addChildren(*ROUTE1603);

CROUTE* ROUTE1604 = new CROUTE();
ROUTE1604->setFromNode("rotorRotationInterp");
ROUTE1604->setFromField("value_changed");
ROUTE1604->setToNode("a_1");
ROUTE1604->setToField("set_rotation");
group->addChildren(*ROUTE1604);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
