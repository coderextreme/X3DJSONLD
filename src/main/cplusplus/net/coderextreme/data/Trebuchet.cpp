/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("Trebuchet.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Working model of a 14th century Trebuchet Catapult.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("LT Joe Roth");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("20 June 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("20 October 2019");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("version");
meta7->setContent("7.8");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("identifier");
meta8->setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://trebuchet.com");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://members.home.net/dimona");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("subject");
meta11->setContent("trebuchet catapult Monty Python");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CWorldInfo* WorldInfo18 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo18->setTitle("Trebuchet.x3d");
group->addChildren(*WorldInfo18);

CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setBackUrl(new CString[1]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"}, 1);
Background19->setBottomUrl(new CString[1]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"}, 1);
Background19->setFrontUrl(new CString[1]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"}, 1);
Background19->setGroundAngle(new float[2]{1.309,1.570796}, 2);
Background19->setGroundColor(new float[9]{0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6});
Background19->setLeftUrl(new CString[1]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"}, 1);
Background19->setRightUrl(new CString[1]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"}, 1);
Background19->setSkyAngle(new float[2]{1.309,1.57079}, 2);
Background19->setSkyColor(new float[9]{0,0.2,0.7,0,0.5,1,1,1,1});
Background19->setTopUrl(new CString[1]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"}, 1);
group->addChildren(*Background19);

CSound* Sound20 = (CSound *)(m_pScene.createNode("Sound"));
Sound20->setMaxBack(1000);
Sound20->setMaxFront(1000);
CAudioClip* AudioClip21 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip21->setDEF("HolyGrail");
AudioClip21->setDescription("HolyGrail");
AudioClip21->setLoop(True);
AudioClip21->setUrl(new CString[2]{"holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"}, 2);
Sound20->setSource(*AudioClip21);

group->addChildren(*Sound20);

CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box23 = (CBox *)(m_pScene.createNode("Box"));
Box23->setSize(new float[3]{10000,1,10000});
Shape22->setGeometry(Box23);

CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"}, 2);
Appearance24->setTexture(*ImageTexture25);

Shape22->setAppearance(*Appearance24);

group->addChildren(*Shape22);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setRotation(new float[4]{0,1,0,1.57});
Transform26->setScale(new float[3]{0.5,0.5,0.5});
Transform26->setTranslation(new float[3]{10.5,6.5,4.5});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance28->setDEF("TextAppearance");
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{1,0,0});
Material29->setEmissiveColor(new float[3]{1,1,0});
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CText* Text30 = (CText *)(m_pScene.createNode("Text"));
Text30->setString(new CString[1]{"Click Sling to Select Projectile"}, 1);
CFontStyle* FontStyle31 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
Text30->setFontStyle(*FontStyle31);

Shape27->setGeometry(Text30);

Transform26->addChildren(*Shape27);

group->addChildren(*Transform26);

CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
Transform32->setRotation(new float[4]{0,1,0,1.57});
Transform32->setScale(new float[3]{0.5,0.5,0.5});
Transform32->setTranslation(new float[3]{11,5.5,6});
CSwitch* Switch33 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch33->setDEF("Weight");
Switch33->setWhichChoice(0);
CGroup* Group34 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance36->setUSE("TextAppearance");
Shape35->setAppearance(*Appearance36);

CText* Text37 = (CText *)(m_pScene.createNode("Text"));
Text37->setString(new CString[1]{"Click Here to Change Counter Weight (50 lbs)"}, 1);
Shape35->setGeometry(Text37);

Group34->addChildren(*Shape35);

Switch33->addChildren(*Group34);

CGroup* Group38 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setUSE("TextAppearance");
Shape39->setAppearance(*Appearance40);

CText* Text41 = (CText *)(m_pScene.createNode("Text"));
Text41->setString(new CString[1]{"Click Here to Change Counter Weight (500 lbs)"}, 1);
Shape39->setGeometry(Text41);

Group38->addChildren(*Shape39);

Switch33->addChildren(*Group38);

CGroup* Group42 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance44->setUSE("TextAppearance");
Shape43->setAppearance(*Appearance44);

CText* Text45 = (CText *)(m_pScene.createNode("Text"));
Text45->setString(new CString[1]{"Click Here to Change Counter Weight (1000 lbs)"}, 1);
Shape43->setGeometry(Text45);

Group42->addChildren(*Shape43);

Switch33->addChildren(*Group42);

CGroup* Group46 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance48->setUSE("TextAppearance");
Shape47->setAppearance(*Appearance48);

CText* Text49 = (CText *)(m_pScene.createNode("Text"));
Text49->setString(new CString[1]{"Click Here to Change Counter Weight (10000 lbs)"}, 1);
Shape47->setGeometry(Text49);

Group46->addChildren(*Shape47);

Switch33->addChildren(*Group46);

Transform32->addChildren(*Switch33);

CTouchSensor* TouchSensor50 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor50->setDEF("weightselector");
TouchSensor50->setDescription("weight selector");
Transform32->addChildren(*TouchSensor50);

CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setTranslation(new float[3]{8,0,0});
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box53 = (CBox *)(m_pScene.createNode("Box"));
Box53->setSize(new float[3]{20,1,1});
Shape52->setGeometry(Box53);

CAppearance* Appearance54 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material55 = (CMaterial *)(m_pScene.createNode("Material"));
Material55->setTransparency(1);
Appearance54->setMaterial(*Material55);

Shape52->setAppearance(*Appearance54);

Transform51->addChildren(*Shape52);

Transform32->addChildren(*Transform51);

group->addChildren(*Transform32);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setRotation(new float[4]{0,1,0,1.57});
Transform56->setTranslation(new float[3]{10,0.5,4.5});
CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
Transform57->setDEF("launch");
Transform57->setTranslation(new float[3]{0,2,5});
CBillboard* Billboard58 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setDiffuseColor(new float[3]{1,0,0});
Appearance60->setMaterial(*Material61);

Shape59->setAppearance(*Appearance60);

CText* Text62 = (CText *)(m_pScene.createNode("Text"));
Text62->setString(new CString[1]{"LAUNCH"}, 1);
CFontStyle* FontStyle63 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
Text62->setFontStyle(*FontStyle63);

Shape59->setGeometry(Text62);

Billboard58->addChildren(*Shape59);

CTransform* Transform64 = (CTransform *)(m_pScene.createNode("Transform"));
Transform64->setTranslation(new float[3]{2,0.3,0});
CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box66 = (CBox *)(m_pScene.createNode("Box"));
Box66->setSize(new float[3]{5,1,1});
Shape65->setGeometry(Box66);

CAppearance* Appearance67 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material68 = (CMaterial *)(m_pScene.createNode("Material"));
Material68->setTransparency(1);
Appearance67->setMaterial(*Material68);

Shape65->setAppearance(*Appearance67);

Transform64->addChildren(*Shape65);

Billboard58->addChildren(*Transform64);

CSwitch* Switch69 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch69->setDEF("PigdogMonk");
Switch69->setWhichChoice(-1);
CGroup* Group70 = (CGroup *)(m_pScene.createNode("Group"));
CSound* Sound71 = (CSound *)(m_pScene.createNode("Sound"));
Sound71->setMaxBack(1000);
Sound71->setMaxFront(1000);
CAudioClip* AudioClip72 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip72->setDEF("PigDogSound");
AudioClip72->setDescription("PigDogSound");
AudioClip72->setUrl(new CString[2]{"pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"}, 2);
Sound71->setSource(*AudioClip72);

Group70->addChildren(*Sound71);

Switch69->addChildren(*Group70);

CGroup* Group73 = (CGroup *)(m_pScene.createNode("Group"));
CSound* Sound74 = (CSound *)(m_pScene.createNode("Sound"));
Sound74->setMaxBack(1000);
Sound74->setMaxFront(1000);
CAudioClip* AudioClip75 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip75->setDEF("MonkSound");
AudioClip75->setDescription("MonkSound");
AudioClip75->setUrl(new CString[2]{"monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"}, 2);
Sound74->setSource(*AudioClip75);

Group73->addChildren(*Sound74);

Switch69->addChildren(*Group73);

Billboard58->addChildren(*Switch69);

Transform57->addChildren(*Billboard58);

CTouchSensor* TouchSensor76 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor76->setDEF("Launch");
TouchSensor76->setDescription("launch!");
Transform57->addChildren(*TouchSensor76);

Transform56->addChildren(*Transform57);

CTransform* Transform77 = (CTransform *)(m_pScene.createNode("Transform"));
CSwitch* Switch78 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch78->setDEF("projectilename");
Switch78->setWhichChoice(0);
CGroup* Group79 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance81 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance81->setUSE("TextAppearance");
Shape80->setAppearance(*Appearance81);

CText* Text82 = (CText *)(m_pScene.createNode("Text"));
Text82->setString(new CString[1]{"Bowling Ball (10 lbs)"}, 1);
CFontStyle* FontStyle83 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle83->setSize(0.5);
Text82->setFontStyle(*FontStyle83);

Shape80->setGeometry(Text82);

Group79->addChildren(*Shape80);

CSound* Sound84 = (CSound *)(m_pScene.createNode("Sound"));
Sound84->setMaxBack(1000);
Sound84->setMaxFront(1000);
Sound84->setPriority(1);
CAudioClip* AudioClip85 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip85->setDEF("HolyHandGrenadeSound");
AudioClip85->setDescription("HolyHandGrenadeSound");
AudioClip85->setUrl(new CString[2]{"grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"}, 2);
Sound84->setSource(*AudioClip85);

Group79->addChildren(*Sound84);

Switch78->addChildren(*Group79);

CGroup* Group86 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance88 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance88->setUSE("TextAppearance");
Shape87->setAppearance(*Appearance88);

CText* Text89 = (CText *)(m_pScene.createNode("Text"));
Text89->setString(new CString[1]{"Cow (1000 lbs)"}, 1);
CFontStyle* FontStyle90 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle90->setSize(0.5);
Text89->setFontStyle(*FontStyle90);

Shape87->setGeometry(Text89);

Group86->addChildren(*Shape87);

CSound* Sound91 = (CSound *)(m_pScene.createNode("Sound"));
Sound91->setMaxBack(1000);
Sound91->setMaxFront(1000);
CAudioClip* AudioClip92 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip92->setDEF("CowSound");
AudioClip92->setDescription("CowSound");
AudioClip92->setUrl(new CString[2]{"lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"}, 2);
Sound91->setSource(*AudioClip92);

Group86->addChildren(*Sound91);

Switch78->addChildren(*Group86);

CGroup* Group93 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance95 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance95->setUSE("TextAppearance");
Shape94->setAppearance(*Appearance95);

CText* Text96 = (CText *)(m_pScene.createNode("Text"));
Text96->setString(new CString[1]{"Chicken (5 lbs)"}, 1);
CFontStyle* FontStyle97 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle97->setSize(0.5);
Text96->setFontStyle(*FontStyle97);

Shape94->setGeometry(Text96);

Group93->addChildren(*Shape94);

CSound* Sound98 = (CSound *)(m_pScene.createNode("Sound"));
Sound98->setMaxBack(1000);
Sound98->setMaxFront(1000);
Sound98->setPriority(1);
CAudioClip* AudioClip99 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip99->setDEF("HamsterSound");
AudioClip99->setDescription("HamsterSound");
AudioClip99->setUrl(new CString[2]{"hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"}, 2);
Sound98->setSource(*AudioClip99);

Group93->addChildren(*Sound98);

Switch78->addChildren(*Group93);

Transform77->addChildren(*Switch78);

Transform56->addChildren(*Transform77);

group->addChildren(*Transform56);

CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setRotation(new float[4]{0,1,0,-1.67});
CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setDEF("aft");
Transform101->setTranslation(new float[3]{5,5,15});
CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setTranslation(new float[3]{-2.5,-4.5,-2});
CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setUSE("launch");
Transform102->addChildren(*Transform103);

Transform101->addChildren(*Transform102);

Transform100->addChildren(*Transform101);

group->addChildren(*Transform100);

CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{0,3,0});
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
Shape105->setDEF("plank");
CBox* Box106 = (CBox *)(m_pScene.createNode("Box"));
Box106->setSize(new float[3]{25,1,1});
Shape105->setGeometry(Box106);

CAppearance* Appearance107 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance107->setDEF("wood");
CImageTexture* ImageTexture108 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture108->setDEF("woodTexture");
ImageTexture108->setUrl(new CString[2]{"wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"}, 2);
Appearance107->setTexture(*ImageTexture108);

Shape105->setAppearance(*Appearance107);

Transform104->addChildren(*Shape105);

CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform109->setDEF("angledsupport");
Transform109->setRotation(new float[4]{0,0,1,1});
Transform109->setTranslation(new float[3]{-5,10,0});
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("plank");
Transform109->addChildren(*Shape110);

Transform104->addChildren(*Transform109);

CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setDEF("angledsupport2");
Transform111->setRotation(new float[4]{0,0,1,-1});
Transform111->setTranslation(new float[3]{5,10,0});
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("plank");
Transform111->addChildren(*Shape112);

Transform104->addChildren(*Transform111);

CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setDEF("verticalsupport");
Transform113->setRotation(new float[4]{0,0,1,1.57});
Transform113->setScale(new float[3]{0.9,1,1});
Transform113->setTranslation(new float[3]{0,11,0});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setUSE("plank");
Transform113->addChildren(*Shape114);

//Main Verticle Support
Transform104->addChildren(*Transform113);

CTransform* Transform115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform115->setDEF("horizontalsupport");
Transform115->setScale(new float[3]{0.4,1,1});
Transform115->setTranslation(new float[3]{0,10,0});
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("plank");
Transform115->addChildren(*Shape116);

Transform104->addChildren(*Transform115);

CTransform* Transform117 = (CTransform *)(m_pScene.createNode("Transform"));
Transform117->setRotation(new float[4]{0,0,1,1.57});
Transform117->setScale(new float[3]{0.6,1,1});
Transform117->setTranslation(new float[3]{0,5,10});
CTransform* Transform118 = (CTransform *)(m_pScene.createNode("Transform"));
Transform118->setRotation(new float[4]{0,1,0,0.4});
CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
Shape119->setUSE("plank");
Transform118->addChildren(*Shape119);

Transform117->addChildren(*Transform118);

Transform104->addChildren(*Transform117);

CTransform* Transform120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform120->setDEF("panel");
Transform120->setTranslation(new float[3]{0,18.2,-0.3});
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box122 = (CBox *)(m_pScene.createNode("Box"));
Box122->setSize(new float[3]{5,5,0.5});
Shape121->setGeometry(Box122);

CAppearance* Appearance123 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance123->setUSE("wood");
Shape121->setAppearance(*Appearance123);

Transform120->addChildren(*Shape121);

Transform104->addChildren(*Transform120);

CTransform* Transform124 = (CTransform *)(m_pScene.createNode("Transform"));
Transform124->setRotation(new float[4]{1,0,0,-1.57});
Transform124->setTranslation(new float[3]{0,0.6,2.5});
CTransform* Transform125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform125->setRotation(new float[4]{0,0,1,1.57});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion127 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion127->setBeginCap(False);
Extrusion127->setCrossSection(new float[24]{1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38});
Extrusion127->setEndCap(False);
Extrusion127->setSolid(False);
Extrusion127->setSpine(new float[6]{0,6,0,0,-11,0});
Shape126->setGeometry(Extrusion127);

CAppearance* Appearance128 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance128->setUSE("wood");
Shape126->setAppearance(*Appearance128);

Transform125->addChildren(*Shape126);

Transform124->addChildren(*Transform125);

Transform104->addChildren(*Transform124);

CTransform* Transform129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform129->setDEF("flinger");
Transform129->setCenter(new float[3]{7,0,0});
Transform129->setRotation(new float[4]{0,0,1,0.82});
Transform129->setScale(new float[3]{0.9,1,1});
Transform129->setTranslation(new float[3]{-7,18,2.5});
CTransform* Transform130 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box132 = (CBox *)(m_pScene.createNode("Box"));
Box132->setSize(new float[3]{35,1,1});
Shape131->setGeometry(Box132);

CAppearance* Appearance133 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance133->setUSE("wood");
Shape131->setAppearance(*Appearance133);

Transform130->addChildren(*Shape131);

CTransform* Transform134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform134->setTranslation(new float[3]{7,0,0});
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box136 = (CBox *)(m_pScene.createNode("Box"));
Box136->setSize(new float[3]{8,2,2});
Shape135->setGeometry(Box136);

CAppearance* Appearance137 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance137->setUSE("wood");
Shape135->setAppearance(*Appearance137);

Transform134->addChildren(*Shape135);

Transform130->addChildren(*Transform134);

Transform129->addChildren(*Transform130);

CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform138->setRotation(new float[4]{1,0,0,1.57});
Transform138->setScale(new float[3]{0.2,0.2,0.2});
Transform138->setTranslation(new float[3]{-15,-1,0});
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setDEF("Torus");
CAppearance* Appearance140 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material141 = (CMaterial *)(m_pScene.createNode("Material"));
Material141->setSpecularColor(new float[3]{1,1,1});
Appearance140->setMaterial(*Material141);

Shape139->setAppearance(*Appearance140);

CExtrusion* Extrusion142 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion142->setBeginCap(False);
Extrusion142->setConvex(False);
Extrusion142->setCreaseAngle(1.57);
Extrusion142->setCrossSection(new float[34]{0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0});
Extrusion142->setEndCap(False);
Extrusion142->setSpine(new float[51]{2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0});
Shape139->setGeometry(Extrusion142);

Transform138->addChildren(*Shape139);

CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setTranslation(new float[3]{1,0,2});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance145->setDEF("rope");
CImageTexture* ImageTexture146 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture146->setUSE("woodTexture");
Appearance145->setTexture(*ImageTexture146);

Shape144->setAppearance(*Appearance145);

CSphere* Sphere147 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere147->setRadius(1.5);
Shape144->setGeometry(Sphere147);

Transform143->addChildren(*Shape144);

//knott
Transform138->addChildren(*Transform143);

Transform129->addChildren(*Transform138);

//The Unicorn
CTransform* Transform148 = (CTransform *)(m_pScene.createNode("Transform"));
Transform148->setRotation(new float[4]{0,0,1,1.2});
Transform148->setScale(new float[3]{0.2,0.2,0.2});
Transform148->setTranslation(new float[3]{-18.3,0.3,0});
CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder150 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder150->setHeight(10);
Shape149->setGeometry(Cylinder150);

CAppearance* Appearance151 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material152 = (CMaterial *)(m_pScene.createNode("Material"));
Material152->setSpecularColor(new float[3]{1,1,1});
Appearance151->setMaterial(*Material152);

Shape149->setAppearance(*Appearance151);

Transform148->addChildren(*Shape149);

CTransform* Transform153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform153->setTranslation(new float[3]{0,-2.5,0});
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
Shape154->setUSE("Torus");
Transform153->addChildren(*Shape154);

//The Unicorn
CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{-2,0,0});
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere157 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere157->setRadius(1.5);
Shape156->setGeometry(Sphere157);

CAppearance* Appearance158 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance158->setUSE("rope");
Shape156->setAppearance(*Appearance158);

Transform155->addChildren(*Shape156);

//Knott
Transform153->addChildren(*Transform155);

Transform148->addChildren(*Transform153);

CTransform* Transform159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform159->setRotation(new float[4]{0,0,1,1.2});
Transform159->setTranslation(new float[3]{15,55,-11});
CTransform* Transform160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform160->setScale(new float[3]{5,5,5});
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance162 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance162->setUSE("rope");
Shape161->setAppearance(*Appearance162);

CExtrusion* Extrusion163 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion163->setBeginCap(False);
Extrusion163->setCreaseAngle(0.76);
Extrusion163->setCrossSection(new float[34]{0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0});
Extrusion163->setEndCap(False);
Extrusion163->setSolid(False);
Extrusion163->setSpine(new float[6]{-15.2,1.4,2.2,-12,-0.8,2.2});
Shape161->setGeometry(Extrusion163);

Transform160->addChildren(*Shape161);

Transform159->addChildren(*Transform160);

Transform148->addChildren(*Transform159);

Transform129->addChildren(*Transform148);

CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setRotation(new float[4]{1,0,0,-1.7});
Transform164->setTranslation(new float[3]{-17,-4.5,0});
CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setScale(new float[3]{0.2,0.2,0.2});
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("Torus");
//Knot
Transform165->addChildren(*Shape166);

CTransform* Transform167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform167->setTranslation(new float[3]{-1,0,1.7});
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere169 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere169->setRadius(1.5);
Shape168->setGeometry(Sphere169);

CAppearance* Appearance170 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance170->setUSE("rope");
Shape168->setAppearance(*Appearance170);

Transform167->addChildren(*Shape168);

Transform165->addChildren(*Transform167);

Transform164->addChildren(*Transform165);

Transform129->addChildren(*Transform164);

CTransform* Transform171 = (CTransform *)(m_pScene.createNode("Transform"));
Transform171->setDEF("RnS");
CTransform* Transform172 = (CTransform *)(m_pScene.createNode("Transform"));
Transform172->setDEF("ropes");
CTransform* Transform173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform173->setRotation(new float[4]{0,0,1,-0.82});
Transform173->setTranslation(new float[3]{7,-26,-2.5});
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance175 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance175->setUSE("rope");
Shape174->setAppearance(*Appearance175);

CExtrusion* Extrusion176 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion176->setBeginCap(False);
Extrusion176->setCreaseAngle(0.76);
Extrusion176->setCrossSection(new float[34]{0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0});
Extrusion176->setEndCap(False);
Extrusion176->setSolid(False);
Extrusion176->setSpine(new float[6]{-33,0.9,2.5,-18.5,1.9,2.55});
Shape174->setGeometry(Extrusion176);

Transform173->addChildren(*Shape174);

CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance178 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance178->setUSE("rope");
Shape177->setAppearance(*Appearance178);

CExtrusion* Extrusion179 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion179->setBeginCap(False);
Extrusion179->setCreaseAngle(0.76);
Extrusion179->setCrossSection(new float[34]{0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0});
Extrusion179->setEndCap(False);
Extrusion179->setSolid(False);
Extrusion179->setSpine(new float[6]{-35.7,-0.8,2.5,-18.8,-0.8,2.55});
Shape177->setGeometry(Extrusion179);

Transform173->addChildren(*Shape177);

Transform172->addChildren(*Transform173);

Transform171->addChildren(*Transform172);

CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform180->setDEF("sling");
Transform180->setRotation(new float[4]{0,0,1,-0.82});
Transform180->setTranslation(new float[3]{-4,-15.3,0});
CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
Transform182->setRotation(new float[4]{0,1,0,-1.57});
Transform182->setScale(new float[3]{1,1.3,1});
Transform182->setTranslation(new float[3]{0.5,0,-1});
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setRotation(new float[4]{0,0,1,1.57});
CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setScale(new float[3]{0.3,0.3,0.3});
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
Shape185->setDEF("halfsling");
CAppearance* Appearance186 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance186->setDEF("clear");
CMaterial* Material187 = (CMaterial *)(m_pScene.createNode("Material"));
Material187->setTransparency(0.5);
Appearance186->setMaterial(*Material187);

Shape185->setAppearance(*Appearance186);

CExtrusion* Extrusion188 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion188->setCrossSection(new float[28]{0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0});
Extrusion188->setSpine(new float[6]{0,0,0,0.1,0,0});
Shape185->setGeometry(Extrusion188);

Transform184->addChildren(*Shape185);

CTransform* Transform189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform189->setScale(new float[3]{0.3,0.3,0.3});
Transform189->setTranslation(new float[3]{0,-3.5,11.5});
CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
Shape190->setUSE("Torus");
Transform189->addChildren(*Shape190);

CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform191->setTranslation(new float[3]{0,0,2});
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance193 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance193->setUSE("rope");
Shape192->setAppearance(*Appearance193);

CSphere* Sphere194 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere194->setRadius(1.5);
Shape192->setGeometry(Sphere194);

Transform191->addChildren(*Shape192);

Transform189->addChildren(*Transform191);

Transform184->addChildren(*Transform189);

Transform183->addChildren(*Transform184);

CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
Transform195->setScale(new float[3]{0.3,0.3,0.3});
Transform195->setTranslation(new float[3]{2,0,0});
CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
Shape196->setUSE("halfsling");
Transform195->addChildren(*Shape196);

CTransform* Transform197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform197->setScale(new float[3]{0.3,0.3,0.3});
Transform197->setTranslation(new float[3]{0,-3.5,11.3});
CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
Shape198->setUSE("Torus");
Transform197->addChildren(*Shape198);

CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
Transform199->setTranslation(new float[3]{0,0,2});
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance201 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance201->setUSE("rope");
Shape200->setAppearance(*Appearance201);

CSphere* Sphere202 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere202->setRadius(1.5);
Shape200->setGeometry(Sphere202);

Transform199->addChildren(*Shape200);

Transform197->addChildren(*Transform199);

Transform195->addChildren(*Transform197);

Transform183->addChildren(*Transform195);

CTransform* Transform203 = (CTransform *)(m_pScene.createNode("Transform"));
Transform203->setTranslation(new float[3]{1,-1,0});
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion205 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion205->setBeginCap(False);
Extrusion205->setCreaseAngle(0.785);
Extrusion205->setCrossSection(new float[18]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0});
Extrusion205->setEndCap(False);
Extrusion205->setSolid(False);
Extrusion205->setSpine(new float[6]{0,-1,0,0,1,0});
Shape204->setGeometry(Extrusion205);

CAppearance* Appearance206 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance206->setUSE("clear");
Shape204->setAppearance(*Appearance206);

Transform203->addChildren(*Shape204);

Transform183->addChildren(*Transform203);

Transform182->addChildren(*Transform183);

CTouchSensor* TouchSensor207 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor207->setDEF("LauncheeChoice");
TouchSensor207->setDescription("launcher choice");
Transform182->addChildren(*TouchSensor207);

Transform181->addChildren(*Transform182);

CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
Transform208->setDEF("projectiletransform");
Transform208->setScale(new float[3]{0.01,0.01,0.01});
CSwitch* Switch209 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch209->setDEF("projectile");
Switch209->setWhichChoice(0);
CGroup* Group210 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform211 = (CTransform *)(m_pScene.createNode("Transform"));
Transform211->setTranslation(new float[3]{0,0.7,0});
CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere213 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere213->setRadius(0.7);
Shape212->setGeometry(Sphere213);

CAppearance* Appearance214 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance214->setDEF("black");
CMaterial* Material215 = (CMaterial *)(m_pScene.createNode("Material"));
Material215->setDiffuseColor(new float[3]{0,0,0});
Material215->setSpecularColor(new float[3]{1,1,1});
Appearance214->setMaterial(*Material215);

Shape212->setAppearance(*Appearance214);

Transform211->addChildren(*Shape212);

Group210->addChildren(*Transform211);

Switch209->addChildren(*Group210);

CGroup* Group216 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform217 = (CTransform *)(m_pScene.createNode("Transform"));
CInline* Inline218 = (CInline *)(m_pScene.createNode("Inline"));
Inline218->setUrl(new CString[2]{"cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"}, 2);
Transform217->addChildren(*Inline218);

Group216->addChildren(*Transform217);

Switch209->addChildren(*Group216);

CGroup* Group219 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setRotation(new float[4]{0,1,0,1.57});
Transform220->setScale(new float[3]{0.4,0.4,0.4});
Transform220->setTranslation(new float[3]{0,0.7,0});
CInline* Inline221 = (CInline *)(m_pScene.createNode("Inline"));
Inline221->setUrl(new CString[2]{"vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"}, 2);
Transform220->addChildren(*Inline221);

Group219->addChildren(*Transform220);

Switch209->addChildren(*Group219);

Transform208->addChildren(*Switch209);

Transform181->addChildren(*Transform208);

Transform180->addChildren(*Transform181);

Transform171->addChildren(*Transform180);

Transform129->addChildren(*Transform171);

Transform104->addChildren(*Transform129);

CTransform* Transform222 = (CTransform *)(m_pScene.createNode("Transform"));
Transform222->setRotation(new float[4]{1,0,0,1.57});
Transform222->setTranslation(new float[3]{0,18,2.5});
CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder224 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder224->setHeight(8);
Cylinder224->setRadius(0.4);
Shape223->setGeometry(Cylinder224);

CAppearance* Appearance225 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material226 = (CMaterial *)(m_pScene.createNode("Material"));
Material226->setDiffuseColor(new float[3]{0,0,0});
Material226->setSpecularColor(new float[3]{1,1,1});
Appearance225->setMaterial(*Material226);

Shape223->setAppearance(*Appearance225);

Transform222->addChildren(*Shape223);

//Top Pivot
Transform104->addChildren(*Transform222);

CTransform* Transform227 = (CTransform *)(m_pScene.createNode("Transform"));
Transform227->setDEF("verticalweight");
CTransform* Transform228 = (CTransform *)(m_pScene.createNode("Transform"));
Transform228->setTranslation(new float[3]{4,18,1.8});
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box230 = (CBox *)(m_pScene.createNode("Box"));
Box230->setSize(new float[3]{1,10,0.5});
Shape229->setGeometry(Box230);

CAppearance* Appearance231 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance231->setUSE("wood");
Shape229->setAppearance(*Appearance231);

Transform228->addChildren(*Shape229);

Transform227->addChildren(*Transform228);

CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
Transform232->setTranslation(new float[3]{4,18,3.2});
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box234 = (CBox *)(m_pScene.createNode("Box"));
Box234->setSize(new float[3]{1,10,0.5});
Shape233->setGeometry(Box234);

CAppearance* Appearance235 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance235->setUSE("wood");
Shape233->setAppearance(*Appearance235);

Transform232->addChildren(*Shape233);

Transform227->addChildren(*Transform232);

CTransform* Transform236 = (CTransform *)(m_pScene.createNode("Transform"));
Transform236->setTranslation(new float[3]{4,14,2.5});
//CounterWeight
CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder238 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder238->setHeight(4);
Cylinder238->setRadius(1.5);
Shape237->setGeometry(Cylinder238);

CAppearance* Appearance239 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material240 = (CMaterial *)(m_pScene.createNode("Material"));
Material240->setDiffuseColor(new float[3]{0,0,0});
Material240->setSpecularColor(new float[3]{1,1,1});
Appearance239->setMaterial(*Material240);

Shape237->setAppearance(*Appearance239);

Transform236->addChildren(*Shape237);

Transform227->addChildren(*Transform236);

CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
Transform241->setRotation(new float[4]{1,0,0,1.57});
Transform241->setTranslation(new float[3]{4,22,2.5});
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder243 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder243->setHeight(2.5);
Cylinder243->setRadius(0.3);
Shape242->setGeometry(Cylinder243);

CAppearance* Appearance244 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material245 = (CMaterial *)(m_pScene.createNode("Material"));
Material245->setDiffuseColor(new float[3]{0,0,0});
Material245->setSpecularColor(new float[3]{1,1,1});
Appearance244->setMaterial(*Material245);

Shape242->setAppearance(*Appearance244);

Transform241->addChildren(*Shape242);

Transform227->addChildren(*Transform241);

Transform104->addChildren(*Transform227);

CTransform* Transform246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform246->setRotation(new float[4]{0,0,1,1.57});
Transform246->setScale(new float[3]{0.2,0.2,0.2});
Transform246->setTranslation(new float[3]{-11.5,-1,2});
CTransform* Transform247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform247->setDEF("screw");
Transform247->setRotation(new float[4]{1,0,0,1.57});
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("Torus");
Transform247->addChildren(*Shape248);

CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setRotation(new float[4]{1,0,0,-1.57});
Transform249->setTranslation(new float[3]{0,0,7});
CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder251 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder251->setHeight(10);
Cylinder251->setRadius(0.7);
Shape250->setGeometry(Cylinder251);

CAppearance* Appearance252 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material253 = (CMaterial *)(m_pScene.createNode("Material"));
Material253->setSpecularColor(new float[3]{1,1,1});
Appearance252->setMaterial(*Material253);

Shape250->setAppearance(*Appearance252);

Transform249->addChildren(*Shape250);

Transform247->addChildren(*Transform249);

Transform246->addChildren(*Transform247);

CTransform* Transform254 = (CTransform *)(m_pScene.createNode("Transform"));
Transform254->setTranslation(new float[3]{0,0,7});
CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setUSE("screw");
Transform254->addChildren(*Transform255);

Transform246->addChildren(*Transform254);

//Release Pin
CTransform* Transform256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform256->setDEF("Pin");
Transform256->setRotation(new float[4]{1,0,0,-1.57});
Transform256->setTranslation(new float[3]{0,0,-3});
CTransform* Transform257 = (CTransform *)(m_pScene.createNode("Transform"));
Transform257->setUSE("screw");
Transform256->addChildren(*Transform257);

Transform246->addChildren(*Transform256);

Transform104->addChildren(*Transform246);

CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{0,0,5});
CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
Shape259->setUSE("plank");
Transform258->addChildren(*Shape259);

CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
Transform260->setUSE("angledsupport");
Transform258->addChildren(*Transform260);

CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
Transform261->setUSE("angledsupport2");
Transform258->addChildren(*Transform261);

CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
Transform262->setUSE("verticalsupport");
Transform258->addChildren(*Transform262);

CTransform* Transform263 = (CTransform *)(m_pScene.createNode("Transform"));
Transform263->setUSE("horizontalsupport");
Transform258->addChildren(*Transform263);

CTransform* Transform264 = (CTransform *)(m_pScene.createNode("Transform"));
Transform264->setRotation(new float[4]{0,1,0,1.57});
Transform264->setScale(new float[3]{0.6,1,1});
Transform264->setTranslation(new float[3]{0,-11,-2.5});
CTransform* Transform265 = (CTransform *)(m_pScene.createNode("Transform"));
Transform265->setUSE("horizontalsupport");
Transform264->addChildren(*Transform265);

Transform258->addChildren(*Transform264);

CTransform* Transform266 = (CTransform *)(m_pScene.createNode("Transform"));
Transform266->setRotation(new float[4]{0,0,1,-1.57});
Transform266->setScale(new float[3]{0.6,1,1});
Transform266->setTranslation(new float[3]{0,5,-10});
CTransform* Transform267 = (CTransform *)(m_pScene.createNode("Transform"));
Transform267->setRotation(new float[4]{0,1,0,0.4});
CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
Shape268->setUSE("plank");
Transform267->addChildren(*Shape268);

Transform266->addChildren(*Transform267);

Transform258->addChildren(*Transform266);

CTransform* Transform269 = (CTransform *)(m_pScene.createNode("Transform"));
Transform269->setTranslation(new float[3]{0,0,0.6});
CTransform* Transform270 = (CTransform *)(m_pScene.createNode("Transform"));
Transform270->setUSE("panel");
Transform269->addChildren(*Transform270);

Transform258->addChildren(*Transform269);

Transform104->addChildren(*Transform258);

CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{10,-1,2.5});
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
Shape272->setDEF("Axle");
CBox* Box273 = (CBox *)(m_pScene.createNode("Box"));
Box273->setSize(new float[3]{1,1,8});
Shape272->setGeometry(Box273);

CAppearance* Appearance274 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance274->setUSE("wood");
Shape272->setAppearance(*Appearance274);

Transform271->addChildren(*Shape272);

CTransform* Transform275 = (CTransform *)(m_pScene.createNode("Transform"));
Transform275->setRotation(new float[4]{1,0,0,1.57});
Transform275->setTranslation(new float[3]{0,0,4.5});
CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
Shape276->setDEF("wheel");
CCylinder* Cylinder277 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder277->setRadius(2);
Shape276->setGeometry(Cylinder277);

CAppearance* Appearance278 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance278->setUSE("wood");
Shape276->setAppearance(*Appearance278);

Transform275->addChildren(*Shape276);

CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
Shape279->setDEF("tracks");
CSphere* Sphere280 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere280->setRadius(1.5);
Shape279->setGeometry(Sphere280);

CAppearance* Appearance281 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance281->setUSE("black");
Shape279->setAppearance(*Appearance281);

Transform275->addChildren(*Shape279);

CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform282->setTranslation(new float[3]{0,0.55,0});
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
Shape283->setDEF("hub");
CSphere* Sphere284 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere284->setRadius(1.5);
Shape283->setGeometry(Sphere284);

CAppearance* Appearance285 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance285->setUSE("black");
Shape283->setAppearance(*Appearance285);

Transform282->addChildren(*Shape283);

Transform275->addChildren(*Transform282);

Transform271->addChildren(*Transform275);

CTransform* Transform286 = (CTransform *)(m_pScene.createNode("Transform"));
Transform286->setRotation(new float[4]{1,0,0,1.57});
Transform286->setTranslation(new float[3]{0,0,-4.5});
CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
Shape287->setUSE("wheel");
Transform286->addChildren(*Shape287);

CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
Shape288->setUSE("tracks");
Transform286->addChildren(*Shape288);

CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{0,-0.55,0});
CShape* Shape290 = (CShape *)(m_pScene.createNode("Shape"));
Shape290->setUSE("hub");
Transform289->addChildren(*Shape290);

Transform286->addChildren(*Transform289);

Transform271->addChildren(*Transform286);

Transform104->addChildren(*Transform271);

CTransform* Transform291 = (CTransform *)(m_pScene.createNode("Transform"));
Transform291->setTranslation(new float[3]{-10,-1,2.5});
CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
Shape292->setUSE("Axle");
Transform291->addChildren(*Shape292);

CTransform* Transform293 = (CTransform *)(m_pScene.createNode("Transform"));
Transform293->setRotation(new float[4]{1,0,0,1.57});
Transform293->setTranslation(new float[3]{0,0,4.5});
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("wheel");
Transform293->addChildren(*Shape294);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
Shape295->setUSE("tracks");
Transform293->addChildren(*Shape295);

CTransform* Transform296 = (CTransform *)(m_pScene.createNode("Transform"));
Transform296->setTranslation(new float[3]{0,0.55,0});
CShape* Shape297 = (CShape *)(m_pScene.createNode("Shape"));
Shape297->setUSE("hub");
Transform296->addChildren(*Shape297);

Transform293->addChildren(*Transform296);

Transform291->addChildren(*Transform293);

CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
Transform298->setRotation(new float[4]{1,0,0,1.57});
Transform298->setTranslation(new float[3]{0,0,-4.5});
CShape* Shape299 = (CShape *)(m_pScene.createNode("Shape"));
Shape299->setUSE("wheel");
Transform298->addChildren(*Shape299);

CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
Shape300->setUSE("tracks");
Transform298->addChildren(*Shape300);

CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
Transform301->setTranslation(new float[3]{0,-0.55,0});
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("hub");
Transform301->addChildren(*Shape302);

Transform298->addChildren(*Transform301);

Transform291->addChildren(*Transform298);

CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setRotation(new float[4]{0,1,0,-0.6});
Transform303->setTranslation(new float[3]{0,100,400});
CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{1,3,0});
CViewpoint* Viewpoint305 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint305->setDescription("Side");
Transform304->addChildren(*Viewpoint305);

Transform303->addChildren(*Transform304);

CTransform* Transform306 = (CTransform *)(m_pScene.createNode("Transform"));
Transform306->setUSE("launch");
Transform303->addChildren(*Transform306);

CTransform* Transform307 = (CTransform *)(m_pScene.createNode("Transform"));
CTouchSensor* TouchSensor308 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor308->setUSE("LauncheeChoice");
Transform307->addChildren(*TouchSensor308);

CSwitch* Switch309 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch309->setUSE("projectilename");
Transform307->addChildren(*Switch309);

CTransform* Transform310 = (CTransform *)(m_pScene.createNode("Transform"));
Transform310->setTranslation(new float[3]{2.5,0,0});
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box312 = (CBox *)(m_pScene.createNode("Box"));
Box312->setSize(new float[3]{5,0.5,0.5});
Shape311->setGeometry(Box312);

CAppearance* Appearance313 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material314 = (CMaterial *)(m_pScene.createNode("Material"));
Material314->setTransparency(1);
Appearance313->setMaterial(*Material314);

Shape311->setAppearance(*Appearance313);

Transform310->addChildren(*Shape311);

Transform307->addChildren(*Transform310);

Transform303->addChildren(*Transform307);

CTransform* Transform315 = (CTransform *)(m_pScene.createNode("Transform"));
Transform315->setScale(new float[3]{0.5,0.5,0.5});
Transform315->setTranslation(new float[3]{0,-1,0});
CTouchSensor* TouchSensor316 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor316->setUSE("weightselector");
Transform315->addChildren(*TouchSensor316);

CSwitch* Switch317 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch317->setUSE("Weight");
Transform315->addChildren(*Switch317);

CTransform* Transform318 = (CTransform *)(m_pScene.createNode("Transform"));
Transform318->setTranslation(new float[3]{8,0,0});
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box320 = (CBox *)(m_pScene.createNode("Box"));
Box320->setSize(new float[3]{17,1,0.5});
Shape319->setGeometry(Box320);

CAppearance* Appearance321 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material322 = (CMaterial *)(m_pScene.createNode("Material"));
Material322->setTransparency(1);
Appearance321->setMaterial(*Material322);

Shape319->setAppearance(*Appearance321);

Transform318->addChildren(*Shape319);

Transform315->addChildren(*Transform318);

Transform303->addChildren(*Transform315);

Transform291->addChildren(*Transform303);

CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
Transform323->setDEF("ProjectileTransform");
Transform323->setTranslation(new float[3]{14.25,1.25,0});
CSwitch* Switch324 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch324->setUSE("projectile");
Transform323->addChildren(*Switch324);

CTransform* Transform325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform325->setRotation(new float[4]{0,1,0,1.57});
Transform325->setTranslation(new float[3]{0,1,0});
CViewpoint* Viewpoint326 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint326->setDescription("Projectile Cam");
Viewpoint326->setPosition(new float[3]{0,0,15});
Transform325->addChildren(*Viewpoint326);

Transform323->addChildren(*Transform325);

Transform291->addChildren(*Transform323);

CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform327->setTranslation(new float[3]{20,2,0});
CTransform* Transform328 = (CTransform *)(m_pScene.createNode("Transform"));
Transform328->setDEF("Front");
Transform328->setRotation(new float[4]{0,1,0,1.57});
CViewpoint* Viewpoint329 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint329->setDescription("Fore");
Transform328->addChildren(*Viewpoint329);

Transform327->addChildren(*Transform328);

Transform291->addChildren(*Transform327);

CTransform* Transform330 = (CTransform *)(m_pScene.createNode("Transform"));
Transform330->setTranslation(new float[3]{-8,4,0});
CTransform* Transform331 = (CTransform *)(m_pScene.createNode("Transform"));
Transform331->setRotation(new float[4]{0,1,0,-1.57});
CViewpoint* Viewpoint332 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint332->setDescription("Aft");
Transform331->addChildren(*Viewpoint332);

Transform330->addChildren(*Transform331);

Transform291->addChildren(*Transform330);

CScript* Script333 = (CScript *)(m_pScene.createNode("Script"));
Script333->setDEF("WeightScript");
Cfield* field334 = new Cfield();
field334->setName("set_boolean");
field334->setAccessType("inputOnly");
field334->setType("SFBool");
Script333->addField(*field334);

Cfield* field335 = new Cfield();
field335->setName("whichchoice");
field335->setAccessType("outputOnly");
field335->setType("SFInt32");
Script333->addField(*field335);

Cfield* field336 = new Cfield();
field336->setName("CounterWeight");
field336->setAccessType("outputOnly");
field336->setType("SFFloat");
Script333->addField(*field336);


Script333.setSourceCode(`ecmascript:\n"+
"\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	whichchoice =0;\n"+
"	CounterWeight=100;\n"+
"}\n"+
"\n"+
"function set_boolean ( boolean_input, eventTime)\n"+
"{\n"+
"\n"+
"	if ( boolean_input== false ) { return; } // ignore the unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"	if (whichchoice == 0)CounterWeight=50.00;\n"+
"	if (whichchoice == 1)CounterWeight=500.00;\n"+
"	if (whichchoice == 2)CounterWeight=1000.00;\n"+
"	if (whichchoice == 3)CounterWeight=10000.00;\n"+
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\n"+
"\n"+
"\n"+
"        Browser.print ('CounterWeight ='+CounterWeight);\n"+
"}`)
Transform291->addChildren(*Script333);

CScript* Script337 = (CScript *)(m_pScene.createNode("Script"));
Script337->setDEF("LauncheeScript");
Cfield* field338 = new Cfield();
field338->setName("set_boolean");
field338->setAccessType("inputOnly");
field338->setType("SFBool");
Script337->addField(*field338);

Cfield* field339 = new Cfield();
field339->setName("whichchoice");
field339->setAccessType("outputOnly");
field339->setType("SFInt32");
Script337->addField(*field339);

Cfield* field340 = new Cfield();
field340->setName("ProjectileWeight");
field340->setAccessType("outputOnly");
field340->setType("SFFloat");
Script337->addField(*field340);


Script337.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"        if (whichchoice == 0)ProjectileWeight=10.00;\n"+
"        if (whichchoice == 1)ProjectileWeight=1000.00;\n"+
"	if (whichchoice == 2)ProjectileWeight=5;\n"+
"\n"+
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\n"+
"	Browser.print ('Projectile Weight'+ProjectileWeight);\n"+
"}`)
Transform291->addChildren(*Script337);

CScript* Script341 = (CScript *)(m_pScene.createNode("Script"));
Script341->setDEF("PigdogMonkScript");
Cfield* field342 = new Cfield();
field342->setName("set_boolean");
field342->setAccessType("inputOnly");
field342->setType("SFBool");
Script341->addField(*field342);

Cfield* field343 = new Cfield();
field343->setName("whichchoice");
field343->setAccessType("outputOnly");
field343->setType("SFInt32");
Script341->addField(*field343);


Script341.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"\n"+
"        whichchoice = whichchoice +1;\n"+
"\n"+
"        if ( whichchoice ==2 )  whichchoice = 0;\n"+
"\n"+
"\n"+
"}`)
Transform291->addChildren(*Script341);

CScript* Script344 = (CScript *)(m_pScene.createNode("Script"));
Script344->setDEF("Mover");
Cfield* field345 = new Cfield();
field345->setName("set_fraction");
field345->setAccessType("inputOnly");
field345->setType("SFFloat");
Script344->addField(*field345);

Cfield* field346 = new Cfield();
field346->setName("set_MassCounterWeight");
field346->setAccessType("inputOnly");
field346->setType("SFFloat");
Script344->addField(*field346);

Cfield* field347 = new Cfield();
field347->setName("set_MassProjectileWeight");
field347->setAccessType("inputOnly");
field347->setType("SFFloat");
Script344->addField(*field347);

Cfield* field348 = new Cfield();
field348->setName("MassCounterWeight");
field348->setAccessType("initializeOnly");
field348->setType("SFFloat");
field348->setValue("1");
Script344->addField(*field348);

Cfield* field349 = new Cfield();
field349->setName("MassProjectileWeight");
field349->setAccessType("initializeOnly");
field349->setType("SFFloat");
field349->setValue("1");
Script344->addField(*field349);

Cfield* field350 = new Cfield();
field350->setName("transparent");
field350->setAccessType("outputOnly");
field350->setType("SFVec3f");
Script344->addField(*field350);

Cfield* field351 = new Cfield();
field351->setName("value_changed");
field351->setAccessType("outputOnly");
field351->setType("SFVec3f");
Script344->addField(*field351);


Script344.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	MassCounterWeight=100;\n"+
"	MassProjectileWeight=10;\n"+
"	Browser.print ('MassCounterWeight =' + MassCounterWeight);\n"+
"	Browser.print ('MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"\n"+
"function set_MassProjectileWeight (value, timestamp)\n"+
"{\n"+
"	MassProjectileWeight = value;\n"+
"	Browser.print ('new MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"function set_MassCounterWeight (value2, timestamp)\n"+
"{\n"+
"	MassCounterWeight = value2;\n"+
"	Browser.print ('new MassCounterWeight =' + MassCounterWeight);\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction ( fraction, eventTime )\n"+
"{\n"+
"	var TrebuchetHeight=45;\n"+
"	var Height =25;\n"+
"      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\n"+
"	// start at TrebuchetHeight and keep along z axis (z=zero)\n"+
"	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\n"+
"        z = 0;\n"+
"        transparent = new SFVec3f (1,1,1);\n"+
"     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\n"+
"		{\n"+
"		x=x-10;\n"+
"		y=y+1;\n"+
"		transparent = new SFVec3f(.01, .01, .01);\n"+
"			}\n"+
"\n"+
"	value_changed = new SFVec3f (x, y, z);\n"+
"	Browser.print ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}`)
Transform291->addChildren(*Script344);

Transform104->addChildren(*Transform291);

group->addChildren(*Transform104);

CTimeSensor* TimeSensor352 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor352->setDEF("clock");
TimeSensor352->setCycleInterval(10);
group->addChildren(*TimeSensor352);

CPositionInterpolator* PositionInterpolator353 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator353->setDEF("verticalweightpath");
PositionInterpolator353->setKey(new float[6]{0,0.1,0.2,0.2,0.3,0.9}, 6);
PositionInterpolator353->setKeyValue(new float[18]{1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0});
group->addChildren(*PositionInterpolator353);

COrientationInterpolator* OrientationInterpolator354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator354->setDEF("flingerangles");
OrientationInterpolator354->setKey(new float[6]{0,0.1,0.2,0.2,0.3,0.9}, 6);
OrientationInterpolator354->setKeyValue(new float[24]{0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82});
group->addChildren(*OrientationInterpolator354);

CPositionInterpolator* PositionInterpolator355 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator355->setDEF("pinpath");
PositionInterpolator355->setKey(new float[4]{0,0.01,0.95,1}, 4);
PositionInterpolator355->setKeyValue(new float[12]{0,0,-3,0,0,-10,0,0,-10,0,0,-3});
group->addChildren(*PositionInterpolator355);

COrientationInterpolator* OrientationInterpolator356 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator356->setDEF("RnSAngels");
OrientationInterpolator356->setKey(new float[3]{0,0.7,1}, 3);
OrientationInterpolator356->setKeyValue(new float[12]{0,0,1,0,0,0,1,-3.14,0,0,1,0});
group->addChildren(*OrientationInterpolator356);

CPositionInterpolator* PositionInterpolator357 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator357->setDEF("invisiable");
PositionInterpolator357->setKey(new float[4]{0,0.2,0.98,0.99}, 4);
PositionInterpolator357->setKeyValue(new float[12]{1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1});
group->addChildren(*PositionInterpolator357);

CROUTE* ROUTE358 = new CROUTE();
ROUTE358->setFromField("fraction_changed");
ROUTE358->setFromNode("clock");
ROUTE358->setToField("set_fraction");
ROUTE358->setToNode("invisiable");
group->addChildren(*ROUTE358);

CROUTE* ROUTE359 = new CROUTE();
ROUTE359->setFromField("value_changed");
ROUTE359->setFromNode("invisiable");
ROUTE359->setToField("set_scale");
ROUTE359->setToNode("projectiletransform");
group->addChildren(*ROUTE359);

CROUTE* ROUTE360 = new CROUTE();
ROUTE360->setFromField("CounterWeight");
ROUTE360->setFromNode("WeightScript");
ROUTE360->setToField("set_MassCounterWeight");
ROUTE360->setToNode("Mover");
group->addChildren(*ROUTE360);

CROUTE* ROUTE361 = new CROUTE();
ROUTE361->setFromField("ProjectileWeight");
ROUTE361->setFromNode("LauncheeScript");
ROUTE361->setToField("set_MassProjectileWeight");
ROUTE361->setToNode("Mover");
group->addChildren(*ROUTE361);

CROUTE* ROUTE362 = new CROUTE();
ROUTE362->setFromField("fraction_changed");
ROUTE362->setFromNode("clock");
ROUTE362->setToField("set_fraction");
ROUTE362->setToNode("Mover");
group->addChildren(*ROUTE362);

CROUTE* ROUTE363 = new CROUTE();
ROUTE363->setFromField("value_changed");
ROUTE363->setFromNode("Mover");
ROUTE363->setToField("set_translation");
ROUTE363->setToNode("ProjectileTransform");
group->addChildren(*ROUTE363);

CROUTE* ROUTE364 = new CROUTE();
ROUTE364->setFromField("transparent");
ROUTE364->setFromNode("Mover");
ROUTE364->setToField("set_scale");
ROUTE364->setToNode("ProjectileTransform");
group->addChildren(*ROUTE364);

CROUTE* ROUTE365 = new CROUTE();
ROUTE365->setFromField("touchTime");
ROUTE365->setFromNode("Launch");
ROUTE365->setToField("set_startTime");
ROUTE365->setToNode("clock");
group->addChildren(*ROUTE365);

CROUTE* ROUTE366 = new CROUTE();
ROUTE366->setFromField("isActive");
ROUTE366->setFromNode("Launch");
ROUTE366->setToField("set_boolean");
ROUTE366->setToNode("PigdogMonkScript");
group->addChildren(*ROUTE366);

CROUTE* ROUTE367 = new CROUTE();
ROUTE367->setFromField("touchTime");
ROUTE367->setFromNode("Launch");
ROUTE367->setToField("set_startTime");
ROUTE367->setToNode("PigDogSound");
group->addChildren(*ROUTE367);

CROUTE* ROUTE368 = new CROUTE();
ROUTE368->setFromField("touchTime");
ROUTE368->setFromNode("Launch");
ROUTE368->setToField("set_startTime");
ROUTE368->setToNode("MonkSound");
group->addChildren(*ROUTE368);

CROUTE* ROUTE369 = new CROUTE();
ROUTE369->setFromField("whichchoice");
ROUTE369->setFromNode("PigdogMonkScript");
ROUTE369->setToField("whichChoice");
ROUTE369->setToNode("PigdogMonk");
group->addChildren(*ROUTE369);

CROUTE* ROUTE370 = new CROUTE();
ROUTE370->setFromField("touchTime");
ROUTE370->setFromNode("LauncheeChoice");
ROUTE370->setToField("set_startTime");
ROUTE370->setToNode("HolyHandGrenadeSound");
group->addChildren(*ROUTE370);

CROUTE* ROUTE371 = new CROUTE();
ROUTE371->setFromField("touchTime");
ROUTE371->setFromNode("LauncheeChoice");
ROUTE371->setToField("set_startTime");
ROUTE371->setToNode("CowSound");
group->addChildren(*ROUTE371);

CROUTE* ROUTE372 = new CROUTE();
ROUTE372->setFromField("touchTime");
ROUTE372->setFromNode("LauncheeChoice");
ROUTE372->setToField("set_startTime");
ROUTE372->setToNode("HamsterSound");
group->addChildren(*ROUTE372);

CROUTE* ROUTE373 = new CROUTE();
ROUTE373->setFromField("isActive");
ROUTE373->setFromNode("LauncheeChoice");
ROUTE373->setToField("set_boolean");
ROUTE373->setToNode("LauncheeScript");
group->addChildren(*ROUTE373);

CROUTE* ROUTE374 = new CROUTE();
ROUTE374->setFromField("whichchoice");
ROUTE374->setFromNode("LauncheeScript");
ROUTE374->setToField("whichChoice");
ROUTE374->setToNode("projectile");
group->addChildren(*ROUTE374);

CROUTE* ROUTE375 = new CROUTE();
ROUTE375->setFromField("whichchoice");
ROUTE375->setFromNode("LauncheeScript");
ROUTE375->setToField("whichChoice");
ROUTE375->setToNode("projectilename");
group->addChildren(*ROUTE375);

CROUTE* ROUTE376 = new CROUTE();
ROUTE376->setFromField("isActive");
ROUTE376->setFromNode("weightselector");
ROUTE376->setToField("set_boolean");
ROUTE376->setToNode("WeightScript");
group->addChildren(*ROUTE376);

CROUTE* ROUTE377 = new CROUTE();
ROUTE377->setFromField("whichchoice");
ROUTE377->setFromNode("WeightScript");
ROUTE377->setToField("whichChoice");
ROUTE377->setToNode("Weight");
group->addChildren(*ROUTE377);

CROUTE* ROUTE378 = new CROUTE();
ROUTE378->setFromField("fraction_changed");
ROUTE378->setFromNode("clock");
ROUTE378->setToField("set_fraction");
ROUTE378->setToNode("flingerangles");
group->addChildren(*ROUTE378);

CROUTE* ROUTE379 = new CROUTE();
ROUTE379->setFromField("value_changed");
ROUTE379->setFromNode("flingerangles");
ROUTE379->setToField("set_rotation");
ROUTE379->setToNode("flinger");
group->addChildren(*ROUTE379);

CROUTE* ROUTE380 = new CROUTE();
ROUTE380->setFromField("fraction_changed");
ROUTE380->setFromNode("clock");
ROUTE380->setToField("set_fraction");
ROUTE380->setToNode("verticalweightpath");
group->addChildren(*ROUTE380);

CROUTE* ROUTE381 = new CROUTE();
ROUTE381->setFromField("value_changed");
ROUTE381->setFromNode("verticalweightpath");
ROUTE381->setToField("set_translation");
ROUTE381->setToNode("verticalweight");
group->addChildren(*ROUTE381);

CROUTE* ROUTE382 = new CROUTE();
ROUTE382->setFromField("fraction_changed");
ROUTE382->setFromNode("clock");
ROUTE382->setToField("set_fraction");
ROUTE382->setToNode("pinpath");
group->addChildren(*ROUTE382);

CROUTE* ROUTE383 = new CROUTE();
ROUTE383->setFromField("value_changed");
ROUTE383->setFromNode("pinpath");
ROUTE383->setToField("set_translation");
ROUTE383->setToNode("Pin");
group->addChildren(*ROUTE383);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
