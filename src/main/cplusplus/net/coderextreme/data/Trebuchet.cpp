#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("Trebuchet.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("description"));
meta3->setContent(CString("Working model of a 14th century Trebuchet Catapult."));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("LT Joe Roth"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("created"));
meta5->setContent(CString("20 June 2001"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("modified"));
meta6->setContent(CString("20 October 2019"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("version"));
meta7->setContent(CString("7.8"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("identifier"));
meta8->setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("reference"));
meta9->setContent(CString("http://trebuchet.com"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("http://members.home.net/dimona"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("subject"));
meta11->setContent(CString("trebuchet catapult Monty Python"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("reference"));
meta12->setContent(CString("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("reference"));
meta13->setContent(CString("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("reference"));
meta14->setContent(CString("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("generator"));
meta15->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("license"));
meta16->setContent(CString("../license.html"));
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
WorldInfo* WorldInfo18 = new WorldInfo();
WorldInfo18->setTitle(CString("Trebuchet.x3d"));
Scene17->addChild(WorldInfo18);

Background* Background19 = new Background();
Background19->setBackUrl(new CString[1]{CString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg")}, 1);
Background19->setBottomUrl(new CString[1]{CString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg")}, 1);
Background19->setFrontUrl(new CString[1]{CString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg")}, 1);
Background19->setGroundAngle(new float[2]{1.309,1.570796}, 2);
Background19->setGroundColor(new float[9]{0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6}, 9);
Background19->setLeftUrl(new CString[1]{CString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg")}, 1);
Background19->setRightUrl(new CString[1]{CString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg")}, 1);
Background19->setSkyAngle(new float[2]{1.309,1.57079}, 2);
Background19->setSkyColor(new float[9]{0,0.2,0.7,0,0.5,1,1,1,1}, 9);
Background19->setTopUrl(new CString[1]{CString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg")}, 1);
Scene17->addChild(Background19);

Sound* Sound20 = new Sound();
Sound20->setMaxBack(1000);
Sound20->setMaxFront(1000);
AudioClip* AudioClip21 = new AudioClip();
AudioClip21->setDEF(CString("HolyGrail"));
AudioClip21->setDescription(CString("HolyGrail"));
AudioClip21->setLoop(True);
AudioClip21->setUrl(new CString[2]{CString("holygral.mp3"), CString("http://www.nps.navy.mil/code32/vrml/holygral.mp3")}, 2);
Sound20->setSource(AudioClip21);

Scene17->addChild(Sound20);

Shape* Shape22 = new Shape();
Box* Box23 = new Box();
Box23->setSize(new float[3]{10000,1,10000});
Shape22->setGeometry(Box23);

Appearance* Appearance24 = new Appearance();
ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setUrl(new CString[2]{CString("grass.jpg"), CString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg")}, 2);
Appearance24->addChild(ImageTexture25);

Shape22->addChild(Appearance24);

Scene17->addChild(Shape22);

Transform* Transform26 = new Transform();
Transform26->setRotation(new float[4]{0,1,0,1.57});
Transform26->setScale(new float[3]{0.5,0.5,0.5});
Transform26->setTranslation(new float[3]{10.5,6.5,4.5});
Shape* Shape27 = new Shape();
Appearance* Appearance28 = new Appearance();
Appearance28->setDEF(CString("TextAppearance"));
Material* Material29 = new Material();
Material29->setDiffuseColor(new float[3]{1,0,0});
Material29->setEmissiveColor(new float[3]{1,1,0});
Appearance28->addChild(Material29);

Shape27->addChild(Appearance28);

Text* Text30 = new Text();
Text30->setString(new CString[1]{CString("Click Sling to Select Projectile")}, 1);
CFontStyle* FontStyle31 = new CFontStyle();
Text30->setFontStyle(FontStyle31);

Shape27->setGeometry(Text30);

Transform26->addChild(Shape27);

Scene17->addChild(Transform26);

Transform* Transform32 = new Transform();
Transform32->setRotation(new float[4]{0,1,0,1.57});
Transform32->setScale(new float[3]{0.5,0.5,0.5});
Transform32->setTranslation(new float[3]{11,5.5,6});
Switch* Switch33 = new Switch();
Switch33->setDEF(CString("Weight"));
Switch33->setWhichChoice(0);
Group* Group34 = new Group();
Shape* Shape35 = new Shape();
Appearance* Appearance36 = new Appearance();
Appearance36->setUSE(CString("TextAppearance"));
Shape35->addChild(Appearance36);

Text* Text37 = new Text();
Text37->setString(new CString[1]{CString("Click Here to Change Counter Weight (50 lbs)")}, 1);
Shape35->setGeometry(Text37);

Group34->addChild(Shape35);

Switch33->addChild(Group34);

Group* Group38 = new Group();
Shape* Shape39 = new Shape();
Appearance* Appearance40 = new Appearance();
Appearance40->setUSE(CString("TextAppearance"));
Shape39->addChild(Appearance40);

Text* Text41 = new Text();
Text41->setString(new CString[1]{CString("Click Here to Change Counter Weight (500 lbs)")}, 1);
Shape39->setGeometry(Text41);

Group38->addChild(Shape39);

Switch33->addChild(Group38);

Group* Group42 = new Group();
Shape* Shape43 = new Shape();
Appearance* Appearance44 = new Appearance();
Appearance44->setUSE(CString("TextAppearance"));
Shape43->addChild(Appearance44);

Text* Text45 = new Text();
Text45->setString(new CString[1]{CString("Click Here to Change Counter Weight (1000 lbs)")}, 1);
Shape43->setGeometry(Text45);

Group42->addChild(Shape43);

Switch33->addChild(Group42);

Group* Group46 = new Group();
Shape* Shape47 = new Shape();
Appearance* Appearance48 = new Appearance();
Appearance48->setUSE(CString("TextAppearance"));
Shape47->addChild(Appearance48);

Text* Text49 = new Text();
Text49->setString(new CString[1]{CString("Click Here to Change Counter Weight (10000 lbs)")}, 1);
Shape47->setGeometry(Text49);

Group46->addChild(Shape47);

Switch33->addChild(Group46);

Transform32->addChild(Switch33);

TouchSensor* TouchSensor50 = new TouchSensor();
TouchSensor50->setDEF(CString("weightselector"));
TouchSensor50->setDescription(CString("weight selector"));
Transform32->addChild(TouchSensor50);

Transform* Transform51 = new Transform();
Transform51->setTranslation(new float[3]{8,0,0});
Shape* Shape52 = new Shape();
Box* Box53 = new Box();
Box53->setSize(new float[3]{20,1,1});
Shape52->setGeometry(Box53);

Appearance* Appearance54 = new Appearance();
Material* Material55 = new Material();
Material55->setTransparency(1);
Appearance54->addChild(Material55);

Shape52->addChild(Appearance54);

Transform51->addChild(Shape52);

Transform32->addChild(Transform51);

Scene17->addChild(Transform32);

Transform* Transform56 = new Transform();
Transform56->setRotation(new float[4]{0,1,0,1.57});
Transform56->setTranslation(new float[3]{10,0.5,4.5});
Transform* Transform57 = new Transform();
Transform57->setDEF(CString("launch"));
Transform57->setTranslation(new float[3]{0,2,5});
Billboard* Billboard58 = new Billboard();
Shape* Shape59 = new Shape();
Appearance* Appearance60 = new Appearance();
Material* Material61 = new Material();
Material61->setDiffuseColor(new float[3]{1,0,0});
Appearance60->addChild(Material61);

Shape59->addChild(Appearance60);

Text* Text62 = new Text();
Text62->setString(new CString[1]{CString("LAUNCH")}, 1);
CFontStyle* FontStyle63 = new CFontStyle();
Text62->setFontStyle(FontStyle63);

Shape59->setGeometry(Text62);

Billboard58->addChild(Shape59);

Transform* Transform64 = new Transform();
Transform64->setTranslation(new float[3]{2,0.3,0});
Shape* Shape65 = new Shape();
Box* Box66 = new Box();
Box66->setSize(new float[3]{5,1,1});
Shape65->setGeometry(Box66);

Appearance* Appearance67 = new Appearance();
Material* Material68 = new Material();
Material68->setTransparency(1);
Appearance67->addChild(Material68);

Shape65->addChild(Appearance67);

Transform64->addChild(Shape65);

Billboard58->addChild(Transform64);

Switch* Switch69 = new Switch();
Switch69->setDEF(CString("PigdogMonk"));
Switch69->setWhichChoice(-1);
Group* Group70 = new Group();
Sound* Sound71 = new Sound();
Sound71->setMaxBack(1000);
Sound71->setMaxFront(1000);
AudioClip* AudioClip72 = new AudioClip();
AudioClip72->setDEF(CString("PigDogSound"));
AudioClip72->setDescription(CString("PigDogSound"));
AudioClip72->setUrl(new CString[2]{CString("pigdog.wav"), CString("http://www.nps.navy.mil/code32/vrml/pigdog.wav")}, 2);
Sound71->setSource(AudioClip72);

Group70->addChild(Sound71);

Switch69->addChild(Group70);

Group* Group73 = new Group();
Sound* Sound74 = new Sound();
Sound74->setMaxBack(1000);
Sound74->setMaxFront(1000);
AudioClip* AudioClip75 = new AudioClip();
AudioClip75->setDEF(CString("MonkSound"));
AudioClip75->setDescription(CString("MonkSound"));
AudioClip75->setUrl(new CString[2]{CString("monks.wav"), CString("http://www.nps.navy.mil/code32/vrml/monks.wav")}, 2);
Sound74->setSource(AudioClip75);

Group73->addChild(Sound74);

Switch69->addChild(Group73);

Billboard58->addChild(Switch69);

Transform57->addChild(Billboard58);

TouchSensor* TouchSensor76 = new TouchSensor();
TouchSensor76->setDEF(CString("Launch"));
TouchSensor76->setDescription(CString("launch!"));
Transform57->addChild(TouchSensor76);

Transform56->addChild(Transform57);

Transform* Transform77 = new Transform();
Switch* Switch78 = new Switch();
Switch78->setDEF(CString("projectilename"));
Switch78->setWhichChoice(0);
Group* Group79 = new Group();
Shape* Shape80 = new Shape();
Appearance* Appearance81 = new Appearance();
Appearance81->setUSE(CString("TextAppearance"));
Shape80->addChild(Appearance81);

Text* Text82 = new Text();
Text82->setString(new CString[1]{CString("Bowling Ball (10 lbs)")}, 1);
CFontStyle* FontStyle83 = new CFontStyle();
FontStyle83->setSize(0.5);
Text82->setFontStyle(FontStyle83);

Shape80->setGeometry(Text82);

Group79->addChild(Shape80);

Sound* Sound84 = new Sound();
Sound84->setMaxBack(1000);
Sound84->setMaxFront(1000);
Sound84->setPriority(1);
AudioClip* AudioClip85 = new AudioClip();
AudioClip85->setDEF(CString("HolyHandGrenadeSound"));
AudioClip85->setDescription(CString("HolyHandGrenadeSound"));
AudioClip85->setUrl(new CString[2]{CString("grenade.wav"), CString("http://www.nps.navy.mil/code32/vrml/grenade.wav")}, 2);
Sound84->setSource(AudioClip85);

Group79->addChild(Sound84);

Switch78->addChild(Group79);

Group* Group86 = new Group();
Shape* Shape87 = new Shape();
Appearance* Appearance88 = new Appearance();
Appearance88->setUSE(CString("TextAppearance"));
Shape87->addChild(Appearance88);

Text* Text89 = new Text();
Text89->setString(new CString[1]{CString("Cow (1000 lbs)")}, 1);
CFontStyle* FontStyle90 = new CFontStyle();
FontStyle90->setSize(0.5);
Text89->setFontStyle(FontStyle90);

Shape87->setGeometry(Text89);

Group86->addChild(Shape87);

Sound* Sound91 = new Sound();
Sound91->setMaxBack(1000);
Sound91->setMaxFront(1000);
AudioClip* AudioClip92 = new AudioClip();
AudioClip92->setDEF(CString("CowSound"));
AudioClip92->setDescription(CString("CowSound"));
AudioClip92->setUrl(new CString[2]{CString("lavache.wav"), CString("http://www.nps.navy.mil/code32/vrml/lavache.wav")}, 2);
Sound91->setSource(AudioClip92);

Group86->addChild(Sound91);

Switch78->addChild(Group86);

Group* Group93 = new Group();
Shape* Shape94 = new Shape();
Appearance* Appearance95 = new Appearance();
Appearance95->setUSE(CString("TextAppearance"));
Shape94->addChild(Appearance95);

Text* Text96 = new Text();
Text96->setString(new CString[1]{CString("Chicken (5 lbs)")}, 1);
CFontStyle* FontStyle97 = new CFontStyle();
FontStyle97->setSize(0.5);
Text96->setFontStyle(FontStyle97);

Shape94->setGeometry(Text96);

Group93->addChild(Shape94);

Sound* Sound98 = new Sound();
Sound98->setMaxBack(1000);
Sound98->setMaxFront(1000);
Sound98->setPriority(1);
AudioClip* AudioClip99 = new AudioClip();
AudioClip99->setDEF(CString("HamsterSound"));
AudioClip99->setDescription(CString("HamsterSound"));
AudioClip99->setUrl(new CString[2]{CString("hamster.wav"), CString("http://www.nps.navy.mil/code32/vrml/hamster.wav")}, 2);
Sound98->setSource(AudioClip99);

Group93->addChild(Sound98);

Switch78->addChild(Group93);

Transform77->addChild(Switch78);

Transform56->addChild(Transform77);

Scene17->addChild(Transform56);

Transform* Transform100 = new Transform();
Transform100->setRotation(new float[4]{0,1,0,-1.67});
Transform* Transform101 = new Transform();
Transform101->setDEF(CString("aft"));
Transform101->setTranslation(new float[3]{5,5,15});
Transform* Transform102 = new Transform();
Transform102->setTranslation(new float[3]{-2.5,-4.5,-2});
Transform* Transform103 = new Transform();
Transform103->setUSE(CString("launch"));
Transform102->addChild(Transform103);

Transform101->addChild(Transform102);

Transform100->addChild(Transform101);

Scene17->addChild(Transform100);

Transform* Transform104 = new Transform();
Transform104->setTranslation(new float[3]{0,3,0});
Shape* Shape105 = new Shape();
Shape105->setDEF(CString("plank"));
Box* Box106 = new Box();
Box106->setSize(new float[3]{25,1,1});
Shape105->setGeometry(Box106);

Appearance* Appearance107 = new Appearance();
Appearance107->setDEF(CString("wood"));
ImageTexture* ImageTexture108 = new ImageTexture();
ImageTexture108->setDEF(CString("woodTexture"));
ImageTexture108->setUrl(new CString[2]{CString("wood.gif"), CString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif")}, 2);
Appearance107->addChild(ImageTexture108);

Shape105->addChild(Appearance107);

Transform104->addChild(Shape105);

Transform* Transform109 = new Transform();
Transform109->setDEF(CString("angledsupport"));
Transform109->setRotation(new float[4]{0,0,1,1});
Transform109->setTranslation(new float[3]{-5,10,0});
Shape* Shape110 = new Shape();
Shape110->setUSE(CString("plank"));
Transform109->addChild(Shape110);

Transform104->addChild(Transform109);

Transform* Transform111 = new Transform();
Transform111->setDEF(CString("angledsupport2"));
Transform111->setRotation(new float[4]{0,0,1,-1});
Transform111->setTranslation(new float[3]{5,10,0});
Shape* Shape112 = new Shape();
Shape112->setUSE(CString("plank"));
Transform111->addChild(Shape112);

Transform104->addChild(Transform111);

Transform* Transform113 = new Transform();
Transform113->setDEF(CString("verticalsupport"));
Transform113->setRotation(new float[4]{0,0,1,1.57});
Transform113->setScale(new float[3]{0.9,1,1});
Transform113->setTranslation(new float[3]{0,11,0});
Shape* Shape114 = new Shape();
Shape114->setUSE(CString("plank"));
Transform113->addChild(Shape114);

//Main Verticle Support
Transform104->addChild(Transform113);

Transform* Transform115 = new Transform();
Transform115->setDEF(CString("horizontalsupport"));
Transform115->setScale(new float[3]{0.4,1,1});
Transform115->setTranslation(new float[3]{0,10,0});
Shape* Shape116 = new Shape();
Shape116->setUSE(CString("plank"));
Transform115->addChild(Shape116);

Transform104->addChild(Transform115);

Transform* Transform117 = new Transform();
Transform117->setRotation(new float[4]{0,0,1,1.57});
Transform117->setScale(new float[3]{0.6,1,1});
Transform117->setTranslation(new float[3]{0,5,10});
Transform* Transform118 = new Transform();
Transform118->setRotation(new float[4]{0,1,0,0.4});
Shape* Shape119 = new Shape();
Shape119->setUSE(CString("plank"));
Transform118->addChild(Shape119);

Transform117->addChild(Transform118);

Transform104->addChild(Transform117);

Transform* Transform120 = new Transform();
Transform120->setDEF(CString("panel"));
Transform120->setTranslation(new float[3]{0,18.2,-0.3});
Shape* Shape121 = new Shape();
Box* Box122 = new Box();
Box122->setSize(new float[3]{5,5,0.5});
Shape121->setGeometry(Box122);

Appearance* Appearance123 = new Appearance();
Appearance123->setUSE(CString("wood"));
Shape121->addChild(Appearance123);

Transform120->addChild(Shape121);

Transform104->addChild(Transform120);

Transform* Transform124 = new Transform();
Transform124->setRotation(new float[4]{1,0,0,-1.57});
Transform124->setTranslation(new float[3]{0,0.6,2.5});
Transform* Transform125 = new Transform();
Transform125->setRotation(new float[4]{0,0,1,1.57});
Shape* Shape126 = new Shape();
Extrusion* Extrusion127 = new Extrusion();
Extrusion127->setBeginCap(False);
Extrusion127->setCrossSection(new float[24]{1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38}, 24);
Extrusion127->setEndCap(False);
Extrusion127->setSolid(False);
Extrusion127->setSpine(new float[6]{0,6,0,0,-11,0}, 6);
Shape126->setGeometry(Extrusion127);

Appearance* Appearance128 = new Appearance();
Appearance128->setUSE(CString("wood"));
Shape126->addChild(Appearance128);

Transform125->addChild(Shape126);

Transform124->addChild(Transform125);

Transform104->addChild(Transform124);

Transform* Transform129 = new Transform();
Transform129->setDEF(CString("flinger"));
Transform129->setCenter(new float[3]{7,0,0});
Transform129->setRotation(new float[4]{0,0,1,0.82});
Transform129->setScale(new float[3]{0.9,1,1});
Transform129->setTranslation(new float[3]{-7,18,2.5});
Transform* Transform130 = new Transform();
Shape* Shape131 = new Shape();
Box* Box132 = new Box();
Box132->setSize(new float[3]{35,1,1});
Shape131->setGeometry(Box132);

Appearance* Appearance133 = new Appearance();
Appearance133->setUSE(CString("wood"));
Shape131->addChild(Appearance133);

Transform130->addChild(Shape131);

Transform* Transform134 = new Transform();
Transform134->setTranslation(new float[3]{7,0,0});
Shape* Shape135 = new Shape();
Box* Box136 = new Box();
Box136->setSize(new float[3]{8,2,2});
Shape135->setGeometry(Box136);

Appearance* Appearance137 = new Appearance();
Appearance137->setUSE(CString("wood"));
Shape135->addChild(Appearance137);

Transform134->addChild(Shape135);

Transform130->addChild(Transform134);

Transform129->addChild(Transform130);

Transform* Transform138 = new Transform();
Transform138->setRotation(new float[4]{1,0,0,1.57});
Transform138->setScale(new float[3]{0.2,0.2,0.2});
Transform138->setTranslation(new float[3]{-15,-1,0});
Shape* Shape139 = new Shape();
Shape139->setDEF(CString("Torus"));
Appearance* Appearance140 = new Appearance();
Material* Material141 = new Material();
Material141->setSpecularColor(new float[3]{1,1,1});
Appearance140->addChild(Material141);

Shape139->addChild(Appearance140);

Extrusion* Extrusion142 = new Extrusion();
Extrusion142->setBeginCap(False);
Extrusion142->setConvex(False);
Extrusion142->setCreaseAngle(1.57);
Extrusion142->setCrossSection(new float[34]{0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0}, 34);
Extrusion142->setEndCap(False);
Extrusion142->setSpine(new float[51]{2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0}, 51);
Shape139->setGeometry(Extrusion142);

Transform138->addChild(Shape139);

Transform* Transform143 = new Transform();
Transform143->setTranslation(new float[3]{1,0,2});
Shape* Shape144 = new Shape();
Appearance* Appearance145 = new Appearance();
Appearance145->setDEF(CString("rope"));
ImageTexture* ImageTexture146 = new ImageTexture();
ImageTexture146->setUSE(CString("woodTexture"));
Appearance145->addChild(ImageTexture146);

Shape144->addChild(Appearance145);

Sphere* Sphere147 = new Sphere();
Sphere147->setRadius(1.5);
Shape144->setGeometry(Sphere147);

Transform143->addChild(Shape144);

//knott
Transform138->addChild(Transform143);

Transform129->addChild(Transform138);

//The Unicorn
Transform* Transform148 = new Transform();
Transform148->setRotation(new float[4]{0,0,1,1.2});
Transform148->setScale(new float[3]{0.2,0.2,0.2});
Transform148->setTranslation(new float[3]{-18.3,0.3,0});
Shape* Shape149 = new Shape();
Cylinder* Cylinder150 = new Cylinder();
Cylinder150->setHeight(10);
Shape149->setGeometry(Cylinder150);

Appearance* Appearance151 = new Appearance();
Material* Material152 = new Material();
Material152->setSpecularColor(new float[3]{1,1,1});
Appearance151->addChild(Material152);

Shape149->addChild(Appearance151);

Transform148->addChild(Shape149);

Transform* Transform153 = new Transform();
Transform153->setTranslation(new float[3]{0,-2.5,0});
//The Unicorn
Shape* Shape154 = new Shape();
Shape154->setUSE(CString("Torus"));
Transform153->addChild(Shape154);

Transform* Transform155 = new Transform();
Transform155->setTranslation(new float[3]{-2,0,0});
Shape* Shape156 = new Shape();
Sphere* Sphere157 = new Sphere();
Sphere157->setRadius(1.5);
Shape156->setGeometry(Sphere157);

Appearance* Appearance158 = new Appearance();
Appearance158->setUSE(CString("rope"));
Shape156->addChild(Appearance158);

Transform155->addChild(Shape156);

//Knott
Transform153->addChild(Transform155);

Transform148->addChild(Transform153);

Transform* Transform159 = new Transform();
Transform159->setRotation(new float[4]{0,0,1,1.2});
Transform159->setTranslation(new float[3]{15,55,-11});
Transform* Transform160 = new Transform();
Transform160->setScale(new float[3]{5,5,5});
Shape* Shape161 = new Shape();
Appearance* Appearance162 = new Appearance();
Appearance162->setUSE(CString("rope"));
Shape161->addChild(Appearance162);

Extrusion* Extrusion163 = new Extrusion();
Extrusion163->setBeginCap(False);
Extrusion163->setCreaseAngle(0.76);
Extrusion163->setCrossSection(new float[34]{0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0}, 34);
Extrusion163->setEndCap(False);
Extrusion163->setSolid(False);
Extrusion163->setSpine(new float[6]{-15.2,1.4,2.2,-12,-0.8,2.2}, 6);
Shape161->setGeometry(Extrusion163);

Transform160->addChild(Shape161);

Transform159->addChild(Transform160);

Transform148->addChild(Transform159);

Transform129->addChild(Transform148);

Transform* Transform164 = new Transform();
Transform164->setRotation(new float[4]{1,0,0,-1.7});
Transform164->setTranslation(new float[3]{-17,-4.5,0});
Transform* Transform165 = new Transform();
Transform165->setScale(new float[3]{0.2,0.2,0.2});
//Knot
Shape* Shape166 = new Shape();
Shape166->setUSE(CString("Torus"));
Transform165->addChild(Shape166);

Transform* Transform167 = new Transform();
Transform167->setTranslation(new float[3]{-1,0,1.7});
Shape* Shape168 = new Shape();
Sphere* Sphere169 = new Sphere();
Sphere169->setRadius(1.5);
Shape168->setGeometry(Sphere169);

Appearance* Appearance170 = new Appearance();
Appearance170->setUSE(CString("rope"));
Shape168->addChild(Appearance170);

Transform167->addChild(Shape168);

Transform165->addChild(Transform167);

Transform164->addChild(Transform165);

Transform129->addChild(Transform164);

Transform* Transform171 = new Transform();
Transform171->setDEF(CString("RnS"));
Transform* Transform172 = new Transform();
Transform172->setDEF(CString("ropes"));
Transform* Transform173 = new Transform();
Transform173->setRotation(new float[4]{0,0,1,-0.82});
Transform173->setTranslation(new float[3]{7,-26,-2.5});
Shape* Shape174 = new Shape();
Appearance* Appearance175 = new Appearance();
Appearance175->setUSE(CString("rope"));
Shape174->addChild(Appearance175);

Extrusion* Extrusion176 = new Extrusion();
Extrusion176->setBeginCap(False);
Extrusion176->setCreaseAngle(0.76);
Extrusion176->setCrossSection(new float[34]{0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0}, 34);
Extrusion176->setEndCap(False);
Extrusion176->setSolid(False);
Extrusion176->setSpine(new float[6]{-33,0.9,2.5,-18.5,1.9,2.55}, 6);
Shape174->setGeometry(Extrusion176);

Transform173->addChild(Shape174);

Shape* Shape177 = new Shape();
Appearance* Appearance178 = new Appearance();
Appearance178->setUSE(CString("rope"));
Shape177->addChild(Appearance178);

Extrusion* Extrusion179 = new Extrusion();
Extrusion179->setBeginCap(False);
Extrusion179->setCreaseAngle(0.76);
Extrusion179->setCrossSection(new float[34]{0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0}, 34);
Extrusion179->setEndCap(False);
Extrusion179->setSolid(False);
Extrusion179->setSpine(new float[6]{-35.7,-0.8,2.5,-18.8,-0.8,2.55}, 6);
Shape177->setGeometry(Extrusion179);

Transform173->addChild(Shape177);

Transform172->addChild(Transform173);

Transform171->addChild(Transform172);

Transform* Transform180 = new Transform();
Transform180->setDEF(CString("sling"));
Transform180->setRotation(new float[4]{0,0,1,-0.82});
Transform180->setTranslation(new float[3]{-4,-15.3,0});
Transform* Transform181 = new Transform();
Transform* Transform182 = new Transform();
Transform182->setRotation(new float[4]{0,1,0,-1.57});
Transform182->setScale(new float[3]{1,1.3,1});
Transform182->setTranslation(new float[3]{0.5,0,-1});
Transform* Transform183 = new Transform();
Transform183->setRotation(new float[4]{0,0,1,1.57});
Transform* Transform184 = new Transform();
Transform184->setScale(new float[3]{0.3,0.3,0.3});
Shape* Shape185 = new Shape();
Shape185->setDEF(CString("halfsling"));
Appearance* Appearance186 = new Appearance();
Appearance186->setDEF(CString("clear"));
Material* Material187 = new Material();
Material187->setTransparency(0.5);
Appearance186->addChild(Material187);

Shape185->addChild(Appearance186);

Extrusion* Extrusion188 = new Extrusion();
Extrusion188->setCrossSection(new float[28]{0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0}, 28);
Extrusion188->setSpine(new float[6]{0,0,0,0.1,0,0}, 6);
Shape185->setGeometry(Extrusion188);

Transform184->addChild(Shape185);

Transform* Transform189 = new Transform();
Transform189->setScale(new float[3]{0.3,0.3,0.3});
Transform189->setTranslation(new float[3]{0,-3.5,11.5});
Shape* Shape190 = new Shape();
Shape190->setUSE(CString("Torus"));
Transform189->addChild(Shape190);

Transform* Transform191 = new Transform();
Transform191->setTranslation(new float[3]{0,0,2});
Shape* Shape192 = new Shape();
Appearance* Appearance193 = new Appearance();
Appearance193->setUSE(CString("rope"));
Shape192->addChild(Appearance193);

Sphere* Sphere194 = new Sphere();
Sphere194->setRadius(1.5);
Shape192->setGeometry(Sphere194);

Transform191->addChild(Shape192);

Transform189->addChild(Transform191);

Transform184->addChild(Transform189);

Transform183->addChild(Transform184);

Transform* Transform195 = new Transform();
Transform195->setScale(new float[3]{0.3,0.3,0.3});
Transform195->setTranslation(new float[3]{2,0,0});
Shape* Shape196 = new Shape();
Shape196->setUSE(CString("halfsling"));
Transform195->addChild(Shape196);

Transform* Transform197 = new Transform();
Transform197->setScale(new float[3]{0.3,0.3,0.3});
Transform197->setTranslation(new float[3]{0,-3.5,11.3});
Shape* Shape198 = new Shape();
Shape198->setUSE(CString("Torus"));
Transform197->addChild(Shape198);

Transform* Transform199 = new Transform();
Transform199->setTranslation(new float[3]{0,0,2});
Shape* Shape200 = new Shape();
Appearance* Appearance201 = new Appearance();
Appearance201->setUSE(CString("rope"));
Shape200->addChild(Appearance201);

Sphere* Sphere202 = new Sphere();
Sphere202->setRadius(1.5);
Shape200->setGeometry(Sphere202);

Transform199->addChild(Shape200);

Transform197->addChild(Transform199);

Transform195->addChild(Transform197);

Transform183->addChild(Transform195);

Transform* Transform203 = new Transform();
Transform203->setTranslation(new float[3]{1,-1,0});
Shape* Shape204 = new Shape();
Extrusion* Extrusion205 = new Extrusion();
Extrusion205->setBeginCap(False);
Extrusion205->setCreaseAngle(0.785);
Extrusion205->setCrossSection(new float[18]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0}, 18);
Extrusion205->setEndCap(False);
Extrusion205->setSolid(False);
Extrusion205->setSpine(new float[6]{0,-1,0,0,1,0}, 6);
Shape204->setGeometry(Extrusion205);

Appearance* Appearance206 = new Appearance();
Appearance206->setUSE(CString("clear"));
Shape204->addChild(Appearance206);

Transform203->addChild(Shape204);

Transform183->addChild(Transform203);

Transform182->addChild(Transform183);

TouchSensor* TouchSensor207 = new TouchSensor();
TouchSensor207->setDEF(CString("LauncheeChoice"));
TouchSensor207->setDescription(CString("launcher choice"));
Transform182->addChild(TouchSensor207);

Transform181->addChild(Transform182);

Transform* Transform208 = new Transform();
Transform208->setDEF(CString("projectiletransform"));
Transform208->setScale(new float[3]{0.01,0.01,0.01});
Switch* Switch209 = new Switch();
Switch209->setDEF(CString("projectile"));
Switch209->setWhichChoice(0);
Group* Group210 = new Group();
Transform* Transform211 = new Transform();
Transform211->setTranslation(new float[3]{0,0.7,0});
Shape* Shape212 = new Shape();
Sphere* Sphere213 = new Sphere();
Sphere213->setRadius(0.7);
Shape212->setGeometry(Sphere213);

Appearance* Appearance214 = new Appearance();
Appearance214->setDEF(CString("black"));
Material* Material215 = new Material();
Material215->setDiffuseColor(new float[3]{0,0,0});
Material215->setSpecularColor(new float[3]{1,1,1});
Appearance214->addChild(Material215);

Shape212->addChild(Appearance214);

Transform211->addChild(Shape212);

Group210->addChild(Transform211);

Switch209->addChild(Group210);

Group* Group216 = new Group();
Transform* Transform217 = new Transform();
Inline* Inline218 = new Inline();
Inline218->setUrl(new CString[2]{CString("cow.wrl"), CString("http://www.uoguelph.ca/~dchiu/cow.wrl")}, 2);
Transform217->addChild(Inline218);

Group216->addChild(Transform217);

Switch209->addChild(Group216);

Group* Group219 = new Group();
Transform* Transform220 = new Transform();
Transform220->setRotation(new float[4]{0,1,0,1.57});
Transform220->setScale(new float[3]{0.4,0.4,0.4});
Transform220->setTranslation(new float[3]{0,0.7,0});
Inline* Inline221 = new Inline();
Inline221->setUrl(new CString[2]{CString("vrml_ginger.wrl"), CString("http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl")}, 2);
Transform220->addChild(Inline221);

Group219->addChild(Transform220);

Switch209->addChild(Group219);

Transform208->addChild(Switch209);

Transform181->addChild(Transform208);

Transform180->addChild(Transform181);

Transform171->addChild(Transform180);

Transform129->addChild(Transform171);

Transform104->addChild(Transform129);

Transform* Transform222 = new Transform();
Transform222->setRotation(new float[4]{1,0,0,1.57});
Transform222->setTranslation(new float[3]{0,18,2.5});
Shape* Shape223 = new Shape();
Cylinder* Cylinder224 = new Cylinder();
Cylinder224->setHeight(8);
Cylinder224->setRadius(0.4);
Shape223->setGeometry(Cylinder224);

Appearance* Appearance225 = new Appearance();
Material* Material226 = new Material();
Material226->setDiffuseColor(new float[3]{0,0,0});
Material226->setSpecularColor(new float[3]{1,1,1});
Appearance225->addChild(Material226);

Shape223->addChild(Appearance225);

Transform222->addChild(Shape223);

//Top Pivot
Transform104->addChild(Transform222);

Transform* Transform227 = new Transform();
Transform227->setDEF(CString("verticalweight"));
Transform* Transform228 = new Transform();
Transform228->setTranslation(new float[3]{4,18,1.8});
Shape* Shape229 = new Shape();
Box* Box230 = new Box();
Box230->setSize(new float[3]{1,10,0.5});
Shape229->setGeometry(Box230);

Appearance* Appearance231 = new Appearance();
Appearance231->setUSE(CString("wood"));
Shape229->addChild(Appearance231);

Transform228->addChild(Shape229);

Transform227->addChild(Transform228);

Transform* Transform232 = new Transform();
Transform232->setTranslation(new float[3]{4,18,3.2});
Shape* Shape233 = new Shape();
Box* Box234 = new Box();
Box234->setSize(new float[3]{1,10,0.5});
Shape233->setGeometry(Box234);

Appearance* Appearance235 = new Appearance();
Appearance235->setUSE(CString("wood"));
Shape233->addChild(Appearance235);

Transform232->addChild(Shape233);

Transform227->addChild(Transform232);

Transform* Transform236 = new Transform();
Transform236->setTranslation(new float[3]{4,14,2.5});
//CounterWeight
Shape* Shape237 = new Shape();
Cylinder* Cylinder238 = new Cylinder();
Cylinder238->setHeight(4);
Cylinder238->setRadius(1.5);
Shape237->setGeometry(Cylinder238);

Appearance* Appearance239 = new Appearance();
Material* Material240 = new Material();
Material240->setDiffuseColor(new float[3]{0,0,0});
Material240->setSpecularColor(new float[3]{1,1,1});
Appearance239->addChild(Material240);

Shape237->addChild(Appearance239);

Transform236->addChild(Shape237);

Transform227->addChild(Transform236);

Transform* Transform241 = new Transform();
Transform241->setRotation(new float[4]{1,0,0,1.57});
Transform241->setTranslation(new float[3]{4,22,2.5});
Shape* Shape242 = new Shape();
Cylinder* Cylinder243 = new Cylinder();
Cylinder243->setHeight(2.5);
Cylinder243->setRadius(0.3);
Shape242->setGeometry(Cylinder243);

Appearance* Appearance244 = new Appearance();
Material* Material245 = new Material();
Material245->setDiffuseColor(new float[3]{0,0,0});
Material245->setSpecularColor(new float[3]{1,1,1});
Appearance244->addChild(Material245);

Shape242->addChild(Appearance244);

Transform241->addChild(Shape242);

Transform227->addChild(Transform241);

Transform104->addChild(Transform227);

Transform* Transform246 = new Transform();
Transform246->setRotation(new float[4]{0,0,1,1.57});
Transform246->setScale(new float[3]{0.2,0.2,0.2});
Transform246->setTranslation(new float[3]{-11.5,-1,2});
Transform* Transform247 = new Transform();
Transform247->setDEF(CString("screw"));
Transform247->setRotation(new float[4]{1,0,0,1.57});
Shape* Shape248 = new Shape();
Shape248->setUSE(CString("Torus"));
Transform247->addChild(Shape248);

Transform* Transform249 = new Transform();
Transform249->setRotation(new float[4]{1,0,0,-1.57});
Transform249->setTranslation(new float[3]{0,0,7});
Shape* Shape250 = new Shape();
Cylinder* Cylinder251 = new Cylinder();
Cylinder251->setHeight(10);
Cylinder251->setRadius(0.7);
Shape250->setGeometry(Cylinder251);

Appearance* Appearance252 = new Appearance();
Material* Material253 = new Material();
Material253->setSpecularColor(new float[3]{1,1,1});
Appearance252->addChild(Material253);

Shape250->addChild(Appearance252);

Transform249->addChild(Shape250);

Transform247->addChild(Transform249);

Transform246->addChild(Transform247);

Transform* Transform254 = new Transform();
Transform254->setTranslation(new float[3]{0,0,7});
Transform* Transform255 = new Transform();
Transform255->setUSE(CString("screw"));
Transform254->addChild(Transform255);

Transform246->addChild(Transform254);

//Release Pin
Transform* Transform256 = new Transform();
Transform256->setDEF(CString("Pin"));
Transform256->setRotation(new float[4]{1,0,0,-1.57});
Transform256->setTranslation(new float[3]{0,0,-3});
Transform* Transform257 = new Transform();
Transform257->setUSE(CString("screw"));
Transform256->addChild(Transform257);

Transform246->addChild(Transform256);

Transform104->addChild(Transform246);

Transform* Transform258 = new Transform();
Transform258->setTranslation(new float[3]{0,0,5});
Shape* Shape259 = new Shape();
Shape259->setUSE(CString("plank"));
Transform258->addChild(Shape259);

Transform* Transform260 = new Transform();
Transform260->setUSE(CString("angledsupport"));
Transform258->addChild(Transform260);

Transform* Transform261 = new Transform();
Transform261->setUSE(CString("angledsupport2"));
Transform258->addChild(Transform261);

Transform* Transform262 = new Transform();
Transform262->setUSE(CString("verticalsupport"));
Transform258->addChild(Transform262);

Transform* Transform263 = new Transform();
Transform263->setUSE(CString("horizontalsupport"));
Transform258->addChild(Transform263);

Transform* Transform264 = new Transform();
Transform264->setRotation(new float[4]{0,1,0,1.57});
Transform264->setScale(new float[3]{0.6,1,1});
Transform264->setTranslation(new float[3]{0,-11,-2.5});
Transform* Transform265 = new Transform();
Transform265->setUSE(CString("horizontalsupport"));
Transform264->addChild(Transform265);

Transform258->addChild(Transform264);

Transform* Transform266 = new Transform();
Transform266->setRotation(new float[4]{0,0,1,-1.57});
Transform266->setScale(new float[3]{0.6,1,1});
Transform266->setTranslation(new float[3]{0,5,-10});
Transform* Transform267 = new Transform();
Transform267->setRotation(new float[4]{0,1,0,0.4});
Shape* Shape268 = new Shape();
Shape268->setUSE(CString("plank"));
Transform267->addChild(Shape268);

Transform266->addChild(Transform267);

Transform258->addChild(Transform266);

Transform* Transform269 = new Transform();
Transform269->setTranslation(new float[3]{0,0,0.6});
Transform* Transform270 = new Transform();
Transform270->setUSE(CString("panel"));
Transform269->addChild(Transform270);

Transform258->addChild(Transform269);

Transform104->addChild(Transform258);

Transform* Transform271 = new Transform();
Transform271->setTranslation(new float[3]{10,-1,2.5});
Shape* Shape272 = new Shape();
Shape272->setDEF(CString("Axle"));
Box* Box273 = new Box();
Box273->setSize(new float[3]{1,1,8});
Shape272->setGeometry(Box273);

Appearance* Appearance274 = new Appearance();
Appearance274->setUSE(CString("wood"));
Shape272->addChild(Appearance274);

Transform271->addChild(Shape272);

Transform* Transform275 = new Transform();
Transform275->setRotation(new float[4]{1,0,0,1.57});
Transform275->setTranslation(new float[3]{0,0,4.5});
Shape* Shape276 = new Shape();
Shape276->setDEF(CString("wheel"));
Cylinder* Cylinder277 = new Cylinder();
Cylinder277->setRadius(2);
Shape276->setGeometry(Cylinder277);

Appearance* Appearance278 = new Appearance();
Appearance278->setUSE(CString("wood"));
Shape276->addChild(Appearance278);

Transform275->addChild(Shape276);

Shape* Shape279 = new Shape();
Shape279->setDEF(CString("tracks"));
Sphere* Sphere280 = new Sphere();
Sphere280->setRadius(1.5);
Shape279->setGeometry(Sphere280);

Appearance* Appearance281 = new Appearance();
Appearance281->setUSE(CString("black"));
Shape279->addChild(Appearance281);

Transform275->addChild(Shape279);

Transform* Transform282 = new Transform();
Transform282->setTranslation(new float[3]{0,0.55,0});
Shape* Shape283 = new Shape();
Shape283->setDEF(CString("hub"));
Sphere* Sphere284 = new Sphere();
Sphere284->setRadius(1.5);
Shape283->setGeometry(Sphere284);

Appearance* Appearance285 = new Appearance();
Appearance285->setUSE(CString("black"));
Shape283->addChild(Appearance285);

Transform282->addChild(Shape283);

Transform275->addChild(Transform282);

Transform271->addChild(Transform275);

Transform* Transform286 = new Transform();
Transform286->setRotation(new float[4]{1,0,0,1.57});
Transform286->setTranslation(new float[3]{0,0,-4.5});
Shape* Shape287 = new Shape();
Shape287->setUSE(CString("wheel"));
Transform286->addChild(Shape287);

Shape* Shape288 = new Shape();
Shape288->setUSE(CString("tracks"));
Transform286->addChild(Shape288);

Transform* Transform289 = new Transform();
Transform289->setTranslation(new float[3]{0,-0.55,0});
Shape* Shape290 = new Shape();
Shape290->setUSE(CString("hub"));
Transform289->addChild(Shape290);

Transform286->addChild(Transform289);

Transform271->addChild(Transform286);

Transform104->addChild(Transform271);

Transform* Transform291 = new Transform();
Transform291->setTranslation(new float[3]{-10,-1,2.5});
Shape* Shape292 = new Shape();
Shape292->setUSE(CString("Axle"));
Transform291->addChild(Shape292);

Transform* Transform293 = new Transform();
Transform293->setRotation(new float[4]{1,0,0,1.57});
Transform293->setTranslation(new float[3]{0,0,4.5});
Shape* Shape294 = new Shape();
Shape294->setUSE(CString("wheel"));
Transform293->addChild(Shape294);

Shape* Shape295 = new Shape();
Shape295->setUSE(CString("tracks"));
Transform293->addChild(Shape295);

Transform* Transform296 = new Transform();
Transform296->setTranslation(new float[3]{0,0.55,0});
Shape* Shape297 = new Shape();
Shape297->setUSE(CString("hub"));
Transform296->addChild(Shape297);

Transform293->addChild(Transform296);

Transform291->addChild(Transform293);

Transform* Transform298 = new Transform();
Transform298->setRotation(new float[4]{1,0,0,1.57});
Transform298->setTranslation(new float[3]{0,0,-4.5});
Shape* Shape299 = new Shape();
Shape299->setUSE(CString("wheel"));
Transform298->addChild(Shape299);

Shape* Shape300 = new Shape();
Shape300->setUSE(CString("tracks"));
Transform298->addChild(Shape300);

Transform* Transform301 = new Transform();
Transform301->setTranslation(new float[3]{0,-0.55,0});
Shape* Shape302 = new Shape();
Shape302->setUSE(CString("hub"));
Transform301->addChild(Shape302);

Transform298->addChild(Transform301);

Transform291->addChild(Transform298);

Transform* Transform303 = new Transform();
Transform303->setRotation(new float[4]{0,1,0,-0.6});
Transform303->setTranslation(new float[3]{0,100,400});
Transform* Transform304 = new Transform();
Transform304->setTranslation(new float[3]{1,3,0});
Viewpoint* Viewpoint305 = new Viewpoint();
Viewpoint305->setDescription(CString("Side"));
Transform304->addChild(Viewpoint305);

Transform303->addChild(Transform304);

Transform* Transform306 = new Transform();
Transform306->setUSE(CString("launch"));
Transform303->addChild(Transform306);

Transform* Transform307 = new Transform();
TouchSensor* TouchSensor308 = new TouchSensor();
TouchSensor308->setUSE(CString("LauncheeChoice"));
Transform307->addChild(TouchSensor308);

Switch* Switch309 = new Switch();
Switch309->setUSE(CString("projectilename"));
Transform307->addChild(Switch309);

Transform* Transform310 = new Transform();
Transform310->setTranslation(new float[3]{2.5,0,0});
Shape* Shape311 = new Shape();
Box* Box312 = new Box();
Box312->setSize(new float[3]{5,0.5,0.5});
Shape311->setGeometry(Box312);

Appearance* Appearance313 = new Appearance();
Material* Material314 = new Material();
Material314->setTransparency(1);
Appearance313->addChild(Material314);

Shape311->addChild(Appearance313);

Transform310->addChild(Shape311);

Transform307->addChild(Transform310);

Transform303->addChild(Transform307);

Transform* Transform315 = new Transform();
Transform315->setScale(new float[3]{0.5,0.5,0.5});
Transform315->setTranslation(new float[3]{0,-1,0});
TouchSensor* TouchSensor316 = new TouchSensor();
TouchSensor316->setUSE(CString("weightselector"));
Transform315->addChild(TouchSensor316);

Switch* Switch317 = new Switch();
Switch317->setUSE(CString("Weight"));
Transform315->addChild(Switch317);

Transform* Transform318 = new Transform();
Transform318->setTranslation(new float[3]{8,0,0});
Shape* Shape319 = new Shape();
Box* Box320 = new Box();
Box320->setSize(new float[3]{17,1,0.5});
Shape319->setGeometry(Box320);

Appearance* Appearance321 = new Appearance();
Material* Material322 = new Material();
Material322->setTransparency(1);
Appearance321->addChild(Material322);

Shape319->addChild(Appearance321);

Transform318->addChild(Shape319);

Transform315->addChild(Transform318);

Transform303->addChild(Transform315);

Transform291->addChild(Transform303);

Transform* Transform323 = new Transform();
Transform323->setDEF(CString("ProjectileTransform"));
Transform323->setTranslation(new float[3]{14.25,1.25,0});
Switch* Switch324 = new Switch();
Switch324->setUSE(CString("projectile"));
Transform323->addChild(Switch324);

Transform* Transform325 = new Transform();
Transform325->setRotation(new float[4]{0,1,0,1.57});
Transform325->setTranslation(new float[3]{0,1,0});
Viewpoint* Viewpoint326 = new Viewpoint();
Viewpoint326->setDescription(CString("Projectile Cam"));
Viewpoint326->setPosition(new float[3]{0,0,15});
Transform325->addChild(Viewpoint326);

Transform323->addChild(Transform325);

Transform291->addChild(Transform323);

Transform* Transform327 = new Transform();
Transform327->setTranslation(new float[3]{20,2,0});
Transform* Transform328 = new Transform();
Transform328->setDEF(CString("Front"));
Transform328->setRotation(new float[4]{0,1,0,1.57});
Viewpoint* Viewpoint329 = new Viewpoint();
Viewpoint329->setDescription(CString("Fore"));
Transform328->addChild(Viewpoint329);

Transform327->addChild(Transform328);

Transform291->addChild(Transform327);

Transform* Transform330 = new Transform();
Transform330->setTranslation(new float[3]{-8,4,0});
Transform* Transform331 = new Transform();
Transform331->setRotation(new float[4]{0,1,0,-1.57});
Viewpoint* Viewpoint332 = new Viewpoint();
Viewpoint332->setDescription(CString("Aft"));
Transform331->addChild(Viewpoint332);

Transform330->addChild(Transform331);

Transform291->addChild(Transform330);

Script* Script333 = new Script();
Script333->setDEF(CString("WeightScript"));
field* field334 = new field();
field334->setName(CString("set_boolean"));
field334->setAccessType(CString("inputOnly"));
field334->setType(CString("SFBool"));
Script333->addChild(field334);

field* field335 = new field();
field335->setName(CString("whichchoice"));
field335->setAccessType(CString("outputOnly"));
field335->setType(CString("SFInt32"));
Script333->addChild(field335);

field* field336 = new field();
field336->setName(CString("CounterWeight"));
field336->setAccessType(CString("outputOnly"));
field336->setType(CString("SFFloat"));
Script333->addChild(field336);


Script333->setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	whichchoice =0;")+
_T("	CounterWeight=100;")+
_T("}")+
_T("function set_boolean ( boolean_input, eventTime)")+
_T("{")+
_T("	if ( boolean_input== false ) { return; } // ignore the unclick")+
_T("        whichchoice = whichchoice +1;")+
_T("	if (whichchoice == 0)CounterWeight=50.00;")+
_T("	if (whichchoice == 1)CounterWeight=500.00;")+
_T("	if (whichchoice == 2)CounterWeight=1000.00;")+
_T("	if (whichchoice == 3)CounterWeight=10000.00;")+
_T("        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }")+
_T("        Browser.println ('CounterWeight ='+CounterWeight);")+
_T("}"));
Transform291->addChild(Script333);

Script* Script337 = new Script();
Script337->setDEF(CString("LauncheeScript"));
field* field338 = new field();
field338->setName(CString("set_boolean"));
field338->setAccessType(CString("inputOnly"));
field338->setType(CString("SFBool"));
Script337->addChild(field338);

field* field339 = new field();
field339->setName(CString("whichchoice"));
field339->setAccessType(CString("outputOnly"));
field339->setType(CString("SFInt32"));
Script337->addChild(field339);

field* field340 = new field();
field340->setName(CString("ProjectileWeight"));
field340->setAccessType(CString("outputOnly"));
field340->setType(CString("SFFloat"));
Script337->addChild(field340);


Script337->setSourceCode(CString("ecmascript:")+
_T("function set_boolean (boolean_input, eventTime)")+
_T("{")+
_T("	if ( boolean_input== false ) { return; } // ignore unclick")+
_T("        whichchoice = whichchoice +1;")+
_T("        if (whichchoice == 0)ProjectileWeight=10.00;")+
_T("        if (whichchoice == 1)ProjectileWeight=1000.00;")+
_T("	if (whichchoice == 2)ProjectileWeight=5;")+
_T("	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }")+
_T("	Browser.println ('Projectile Weight'+ProjectileWeight);")+
_T("}"));
Transform291->addChild(Script337);

Script* Script341 = new Script();
Script341->setDEF(CString("PigdogMonkScript"));
field* field342 = new field();
field342->setName(CString("set_boolean"));
field342->setAccessType(CString("inputOnly"));
field342->setType(CString("SFBool"));
Script341->addChild(field342);

field* field343 = new field();
field343->setName(CString("whichchoice"));
field343->setAccessType(CString("outputOnly"));
field343->setType(CString("SFInt32"));
Script341->addChild(field343);


Script341->setSourceCode(CString("ecmascript:")+
_T("function set_boolean (boolean_input, eventTime)")+
_T("{")+
_T("	if ( boolean_input== false ) { return; } // ignore unclick")+
_T("        whichchoice = whichchoice +1;")+
_T("        if ( whichchoice ==2 )  whichchoice = 0;")+
_T("}"));
Transform291->addChild(Script341);

Script* Script344 = new Script();
Script344->setDEF(CString("Mover"));
field* field345 = new field();
field345->setName(CString("set_fraction"));
field345->setAccessType(CString("inputOnly"));
field345->setType(CString("SFFloat"));
Script344->addChild(field345);

field* field346 = new field();
field346->setName(CString("set_MassCounterWeight"));
field346->setAccessType(CString("inputOnly"));
field346->setType(CString("SFFloat"));
Script344->addChild(field346);

field* field347 = new field();
field347->setName(CString("set_MassProjectileWeight"));
field347->setAccessType(CString("inputOnly"));
field347->setType(CString("SFFloat"));
Script344->addChild(field347);

field* field348 = new field();
field348->setName(CString("MassCounterWeight"));
field348->setAccessType(CString("initializeOnly"));
field348->setType(CString("SFFloat"));
field348->setValue(CString("1"));
Script344->addChild(field348);

field* field349 = new field();
field349->setName(CString("MassProjectileWeight"));
field349->setAccessType(CString("initializeOnly"));
field349->setType(CString("SFFloat"));
field349->setValue(CString("1"));
Script344->addChild(field349);

field* field350 = new field();
field350->setName(CString("transparent"));
field350->setAccessType(CString("outputOnly"));
field350->setType(CString("SFVec3f"));
Script344->addChild(field350);

field* field351 = new field();
field351->setName(CString("value_changed"));
field351->setAccessType(CString("outputOnly"));
field351->setType(CString("SFVec3f"));
Script344->addChild(field351);


Script344->setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	MassCounterWeight=100;")+
_T("	MassProjectileWeight=10;")+
_T("	Browser.println ('MassCounterWeight =' + MassCounterWeight);")+
_T("	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);")+
_T("}")+
_T("function set_MassProjectileWeight (value, timestamp)")+
_T("{")+
_T("	MassProjectileWeight = value;")+
_T("	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);")+
_T("}")+
_T("function set_MassCounterWeight (value2, timestamp)")+
_T("{")+
_T("	MassCounterWeight = value2;")+
_T("	Browser.println ('new MassCounterWeight =' + MassCounterWeight);")+
_T("}")+
_T("function set_fraction ( fraction, eventTime )")+
_T("{")+
_T("	var TrebuchetHeight=45;")+
_T("	var Height =25;")+
_T("      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;")+
_T("	// start at TrebuchetHeight and keep along z axis (z=zero)")+
_T("	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);")+
_T("        z = 0;")+
_T("        transparent = new SFVec3f (1,1,1);")+
_T("     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)")+
_T("		{")+
_T("		x=x-10;")+
_T("		y=y+1;")+
_T("		transparent = new SFVec3f(.01, .01, .01);")+
_T("			}")+
_T("	value_changed = new SFVec3f (x, y, z);")+
_T("	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);")+
_T("}"));
Transform291->addChild(Script344);

Transform104->addChild(Transform291);

Scene17->addChild(Transform104);

TimeSensor* TimeSensor352 = new TimeSensor();
TimeSensor352->setDEF(CString("clock"));
TimeSensor352->setCycleInterval(10);
Scene17->addChild(TimeSensor352);

PositionInterpolator* PositionInterpolator353 = new PositionInterpolator();
PositionInterpolator353->setDEF(CString("verticalweightpath"));
PositionInterpolator353->setKey(new float[6]{0,0.1,0.2,0.2,0.3,0.9}, 6);
PositionInterpolator353->setKeyValue(new float[18]{1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0}, 18);
Scene17->addChild(PositionInterpolator353);

OrientationInterpolator* OrientationInterpolator354 = new OrientationInterpolator();
OrientationInterpolator354->setDEF(CString("flingerangles"));
OrientationInterpolator354->setKey(new float[6]{0,0.1,0.2,0.2,0.3,0.9}, 6);
OrientationInterpolator354->setKeyValue(new float[24]{0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82}, 24);
Scene17->addChild(OrientationInterpolator354);

PositionInterpolator* PositionInterpolator355 = new PositionInterpolator();
PositionInterpolator355->setDEF(CString("pinpath"));
PositionInterpolator355->setKey(new float[4]{0,0.01,0.95,1}, 4);
PositionInterpolator355->setKeyValue(new float[12]{0,0,-3,0,0,-10,0,0,-10,0,0,-3}, 12);
Scene17->addChild(PositionInterpolator355);

OrientationInterpolator* OrientationInterpolator356 = new OrientationInterpolator();
OrientationInterpolator356->setDEF(CString("RnSAngels"));
OrientationInterpolator356->setKey(new float[3]{0,0.7,1}, 3);
OrientationInterpolator356->setKeyValue(new float[12]{0,0,1,0,0,0,1,-3.14,0,0,1,0}, 12);
Scene17->addChild(OrientationInterpolator356);

PositionInterpolator* PositionInterpolator357 = new PositionInterpolator();
PositionInterpolator357->setDEF(CString("invisiable"));
PositionInterpolator357->setKey(new float[4]{0,0.2,0.98,0.99}, 4);
PositionInterpolator357->setKeyValue(new float[12]{1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1}, 12);
Scene17->addChild(PositionInterpolator357);

ROUTE* ROUTE358 = new ROUTE();
ROUTE358->setFromField(CString("fraction_changed"));
ROUTE358->setFromNode(CString("clock"));
ROUTE358->setToField(CString("set_fraction"));
ROUTE358->setToNode(CString("invisiable"));
Scene17->addChild(ROUTE358);

ROUTE* ROUTE359 = new ROUTE();
ROUTE359->setFromField(CString("value_changed"));
ROUTE359->setFromNode(CString("invisiable"));
ROUTE359->setToField(CString("set_scale"));
ROUTE359->setToNode(CString("projectiletransform"));
Scene17->addChild(ROUTE359);

ROUTE* ROUTE360 = new ROUTE();
ROUTE360->setFromField(CString("CounterWeight"));
ROUTE360->setFromNode(CString("WeightScript"));
ROUTE360->setToField(CString("set_MassCounterWeight"));
ROUTE360->setToNode(CString("Mover"));
Scene17->addChild(ROUTE360);

ROUTE* ROUTE361 = new ROUTE();
ROUTE361->setFromField(CString("ProjectileWeight"));
ROUTE361->setFromNode(CString("LauncheeScript"));
ROUTE361->setToField(CString("set_MassProjectileWeight"));
ROUTE361->setToNode(CString("Mover"));
Scene17->addChild(ROUTE361);

ROUTE* ROUTE362 = new ROUTE();
ROUTE362->setFromField(CString("fraction_changed"));
ROUTE362->setFromNode(CString("clock"));
ROUTE362->setToField(CString("set_fraction"));
ROUTE362->setToNode(CString("Mover"));
Scene17->addChild(ROUTE362);

ROUTE* ROUTE363 = new ROUTE();
ROUTE363->setFromField(CString("value_changed"));
ROUTE363->setFromNode(CString("Mover"));
ROUTE363->setToField(CString("set_translation"));
ROUTE363->setToNode(CString("ProjectileTransform"));
Scene17->addChild(ROUTE363);

ROUTE* ROUTE364 = new ROUTE();
ROUTE364->setFromField(CString("transparent"));
ROUTE364->setFromNode(CString("Mover"));
ROUTE364->setToField(CString("set_scale"));
ROUTE364->setToNode(CString("ProjectileTransform"));
Scene17->addChild(ROUTE364);

ROUTE* ROUTE365 = new ROUTE();
ROUTE365->setFromField(CString("touchTime"));
ROUTE365->setFromNode(CString("Launch"));
ROUTE365->setToField(CString("set_startTime"));
ROUTE365->setToNode(CString("clock"));
Scene17->addChild(ROUTE365);

ROUTE* ROUTE366 = new ROUTE();
ROUTE366->setFromField(CString("isActive"));
ROUTE366->setFromNode(CString("Launch"));
ROUTE366->setToField(CString("set_boolean"));
ROUTE366->setToNode(CString("PigdogMonkScript"));
Scene17->addChild(ROUTE366);

ROUTE* ROUTE367 = new ROUTE();
ROUTE367->setFromField(CString("touchTime"));
ROUTE367->setFromNode(CString("Launch"));
ROUTE367->setToField(CString("set_startTime"));
ROUTE367->setToNode(CString("PigDogSound"));
Scene17->addChild(ROUTE367);

ROUTE* ROUTE368 = new ROUTE();
ROUTE368->setFromField(CString("touchTime"));
ROUTE368->setFromNode(CString("Launch"));
ROUTE368->setToField(CString("set_startTime"));
ROUTE368->setToNode(CString("MonkSound"));
Scene17->addChild(ROUTE368);

ROUTE* ROUTE369 = new ROUTE();
ROUTE369->setFromField(CString("whichchoice"));
ROUTE369->setFromNode(CString("PigdogMonkScript"));
ROUTE369->setToField(CString("whichChoice"));
ROUTE369->setToNode(CString("PigdogMonk"));
Scene17->addChild(ROUTE369);

ROUTE* ROUTE370 = new ROUTE();
ROUTE370->setFromField(CString("touchTime"));
ROUTE370->setFromNode(CString("LauncheeChoice"));
ROUTE370->setToField(CString("set_startTime"));
ROUTE370->setToNode(CString("HolyHandGrenadeSound"));
Scene17->addChild(ROUTE370);

ROUTE* ROUTE371 = new ROUTE();
ROUTE371->setFromField(CString("touchTime"));
ROUTE371->setFromNode(CString("LauncheeChoice"));
ROUTE371->setToField(CString("set_startTime"));
ROUTE371->setToNode(CString("CowSound"));
Scene17->addChild(ROUTE371);

ROUTE* ROUTE372 = new ROUTE();
ROUTE372->setFromField(CString("touchTime"));
ROUTE372->setFromNode(CString("LauncheeChoice"));
ROUTE372->setToField(CString("set_startTime"));
ROUTE372->setToNode(CString("HamsterSound"));
Scene17->addChild(ROUTE372);

ROUTE* ROUTE373 = new ROUTE();
ROUTE373->setFromField(CString("isActive"));
ROUTE373->setFromNode(CString("LauncheeChoice"));
ROUTE373->setToField(CString("set_boolean"));
ROUTE373->setToNode(CString("LauncheeScript"));
Scene17->addChild(ROUTE373);

ROUTE* ROUTE374 = new ROUTE();
ROUTE374->setFromField(CString("whichchoice"));
ROUTE374->setFromNode(CString("LauncheeScript"));
ROUTE374->setToField(CString("whichChoice"));
ROUTE374->setToNode(CString("projectile"));
Scene17->addChild(ROUTE374);

ROUTE* ROUTE375 = new ROUTE();
ROUTE375->setFromField(CString("whichchoice"));
ROUTE375->setFromNode(CString("LauncheeScript"));
ROUTE375->setToField(CString("whichChoice"));
ROUTE375->setToNode(CString("projectilename"));
Scene17->addChild(ROUTE375);

ROUTE* ROUTE376 = new ROUTE();
ROUTE376->setFromField(CString("isActive"));
ROUTE376->setFromNode(CString("weightselector"));
ROUTE376->setToField(CString("set_boolean"));
ROUTE376->setToNode(CString("WeightScript"));
Scene17->addChild(ROUTE376);

ROUTE* ROUTE377 = new ROUTE();
ROUTE377->setFromField(CString("whichchoice"));
ROUTE377->setFromNode(CString("WeightScript"));
ROUTE377->setToField(CString("whichChoice"));
ROUTE377->setToNode(CString("Weight"));
Scene17->addChild(ROUTE377);

ROUTE* ROUTE378 = new ROUTE();
ROUTE378->setFromField(CString("fraction_changed"));
ROUTE378->setFromNode(CString("clock"));
ROUTE378->setToField(CString("set_fraction"));
ROUTE378->setToNode(CString("flingerangles"));
Scene17->addChild(ROUTE378);

ROUTE* ROUTE379 = new ROUTE();
ROUTE379->setFromField(CString("value_changed"));
ROUTE379->setFromNode(CString("flingerangles"));
ROUTE379->setToField(CString("set_rotation"));
ROUTE379->setToNode(CString("flinger"));
Scene17->addChild(ROUTE379);

ROUTE* ROUTE380 = new ROUTE();
ROUTE380->setFromField(CString("fraction_changed"));
ROUTE380->setFromNode(CString("clock"));
ROUTE380->setToField(CString("set_fraction"));
ROUTE380->setToNode(CString("verticalweightpath"));
Scene17->addChild(ROUTE380);

ROUTE* ROUTE381 = new ROUTE();
ROUTE381->setFromField(CString("value_changed"));
ROUTE381->setFromNode(CString("verticalweightpath"));
ROUTE381->setToField(CString("set_translation"));
ROUTE381->setToNode(CString("verticalweight"));
Scene17->addChild(ROUTE381);

ROUTE* ROUTE382 = new ROUTE();
ROUTE382->setFromField(CString("fraction_changed"));
ROUTE382->setFromNode(CString("clock"));
ROUTE382->setToField(CString("set_fraction"));
ROUTE382->setToNode(CString("pinpath"));
Scene17->addChild(ROUTE382);

ROUTE* ROUTE383 = new ROUTE();
ROUTE383->setFromField(CString("value_changed"));
ROUTE383->setFromNode(CString("pinpath"));
ROUTE383->setToField(CString("set_translation"));
ROUTE383->setToNode(CString("Pin"));
Scene17->addChild(ROUTE383);

X3D0->setScene(Scene17);

}
