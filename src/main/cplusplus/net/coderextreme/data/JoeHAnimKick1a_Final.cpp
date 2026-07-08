#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.1"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("Joe"));
meta3.setContent(CString("No Reservations 20121221 20040109 x3d/hanim"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("x3d-tidy V2.2.3, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("Wed, 17 Sep 2025 06:43:47 GMT"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
WorldInfo& WorldInfo7 =  WorldInfo();
WorldInfo7.setTitle(CString("HANIM 2 LOA3 Skeleton and Skin sites and feature points for Joe_ by Joe"));
Scene6.addChild(&WorldInfo7);

NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("FLY"), CString("ANY")}, 2);
NavigationInfo8.setSpeed(2.5);
NavigationInfo8.setHeadlight(False);
Scene6.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDEF(CString("Joe_InclinedView"));
Viewpoint9.setDescription(CString("Joe_Inclined View"));
Viewpoint9.setPosition(new float[]{1.62,1.05,3.06});
Viewpoint9.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Scene6.addChild(&Viewpoint9);

Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setDEF(CString("Joe_IFrontView"));
Viewpoint10.setDescription(CString("Scene_Front View"));
Viewpoint10.setPosition(new float[]{0,0.8,2.58});
Viewpoint10.setCenterOfRotation(new float[]{0,0.8,0});
Scene6.addChild(&Viewpoint10);

Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setDEF(CString("Joe_ISideView"));
Viewpoint11.setDescription(CString("Scene_Side View"));
Viewpoint11.setPosition(new float[]{2.6,0.5,0});
Viewpoint11.setOrientation(new float[]{0,1,0,1.5708});
Viewpoint11.setCenterOfRotation(new float[]{0,0.8,0});
Scene6.addChild(&Viewpoint11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setDEF(CString("Joe_BackView"));
Viewpoint12.setDescription(CString("Scene_Back View"));
Viewpoint12.setPosition(new float[]{0,2.5,-3});
Viewpoint12.setOrientation(new float[]{0,1,0,3.14});
Viewpoint12.setCenterOfRotation(new float[]{0,1.5,0});
Scene6.addChild(&Viewpoint12);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDEF(CString("Joe_TopView"));
Viewpoint13.setDescription(CString("Scene_Top View"));
Viewpoint13.setPosition(new float[]{0,3.5,0});
Viewpoint13.setOrientation(new float[]{1,0,0,-1.5708});
Viewpoint13.setCenterOfRotation(new float[]{0,1.5,0});
Scene6.addChild(&Viewpoint13);

Group& Group14 =  Group();
Group14.setDEF(CString("Joe_Humanoid"));
HAnimHumanoid& HAnimHumanoid15 =  HAnimHumanoid();
HAnimHumanoid15.setDEF(CString("JoeHuman"));
HAnimJoint& HAnimJoint16 =  HAnimJoint();
HAnimJoint16.X3DNode::setName(CString("humanoid_root"));
HAnimJoint16.setDEF(CString("hanim_humanoid_root"));
HAnimJoint16.setTranslation(new float[]{0.15315,0.019584,-0.22976});
HAnimJoint16.setRotation(new float[]{-1,0,0,0.040483});
HAnimJoint16.setCenter(new float[]{0,0.875,0});
HAnimSegment& HAnimSegment17 =  HAnimSegment();
HAnimSite& HAnimSite18 =  HAnimSite();
HAnimSite18.X3DNode::setName(CString("RootFront"));
HAnimSite18.setDEF(CString("Joe_RootView1"));
Transform& Transform19 =  Transform();
Transform19.setDEF(CString("hanimcordsys"));
Transform19.setScale(new float[]{0.175,0.175,0.175});
Inline& Inline20 =  Inline();
Inline20.setGlobal(True);
Inline20.setUrl(new CString[]{CString("JointCoordinateAxes.x3dv")}, 1);
Transform19.addChild(&Inline20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDEF(CString("ballView_1"));
Viewpoint21.setDescription(CString("hanimcoord View"));
Transform19.addChild(&Viewpoint21);

HAnimSite18.addChild(&Transform19);

HAnimSegment17.addChild(&HAnimSite18);

HAnimJoint16.addChildren(&HAnimSegment17);

HAnimJoint& HAnimJoint22 =  HAnimJoint();
HAnimJoint22.X3DNode::setName(CString("sacroiliac"));
HAnimJoint22.setDEF(CString("Joe_sacroiliac"));
HAnimJoint22.setCenter(new float[]{0,0.92,0});
HAnimJoint22.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint22.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint& HAnimJoint23 =  HAnimJoint();
HAnimJoint23.X3DNode::setName(CString("l_hip"));
HAnimJoint23.setDEF(CString("hanim_l_hip"));
HAnimJoint23.setRotation(new float[]{1,0,0,0.23414});
HAnimJoint23.setCenter(new float[]{0.1,0.92,0});
HAnimJoint23.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint23.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimJoint& HAnimJoint24 =  HAnimJoint();
HAnimJoint24.X3DNode::setName(CString("l_knee"));
HAnimJoint24.setDEF(CString("hanim_l_knee"));
HAnimJoint24.setRotation(new float[]{0.2106,0,0.97757,0.22603});
HAnimJoint24.setCenter(new float[]{0.115,0.466,0});
HAnimJoint24.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint24.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint25 =  HAnimJoint();
HAnimJoint25.X3DNode::setName(CString("l_talocrural"));
HAnimJoint25.setDEF(CString("hanim_l_talocrural"));
HAnimJoint25.setRotation(new float[]{1,0,0,0.16032});
HAnimJoint25.setCenter(new float[]{0.115,0.069,0});
HAnimJoint25.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint25.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint26 =  HAnimJoint();
HAnimJoint26.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint26.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint26.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint26.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint26.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint27 =  HAnimJoint();
HAnimJoint27.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint27.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint27.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint27.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint27.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint28 =  HAnimJoint();
HAnimJoint28.X3DNode::setName(CString("l_metatarsal_2"));
HAnimJoint28.setDEF(CString("hanim_l_metatarsal_2"));
HAnimJoint28.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint28.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint28.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint27.addChildren(&HAnimJoint28);

HAnimJoint26.addChildren(&HAnimJoint27);

HAnimJoint25.addChildren(&HAnimJoint26);

HAnimJoint24.addChildren(&HAnimJoint25);

HAnimJoint23.addChildren(&HAnimJoint24);

HAnimJoint22.addChildren(&HAnimJoint23);

HAnimJoint& HAnimJoint29 =  HAnimJoint();
HAnimJoint29.X3DNode::setName(CString("r_hip"));
HAnimJoint29.setDEF(CString("hanim_r_hip"));
HAnimJoint29.setRotation(new float[]{1,0,0,0.03807});
HAnimJoint29.setCenter(new float[]{-0.1,0.92,0});
HAnimJoint29.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
HAnimJoint29.setSkinCoordWeight(new float[]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(CString("r_knee"));
HAnimJoint30.setDEF(CString("hanim_r_knee"));
HAnimJoint30.setRotation(new float[]{1,0,0,0.48097});
HAnimJoint30.setCenter(new float[]{-0.05,0.466,0});
HAnimJoint30.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
HAnimJoint30.setSkinCoordWeight(new float[]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint& HAnimJoint31 =  HAnimJoint();
HAnimJoint31.X3DNode::setName(CString("r_talocrural"));
HAnimJoint31.setDEF(CString("hanim_r_talocrural"));
HAnimJoint31.setRotation(new float[]{1,0,0,0.48097});
HAnimJoint31.setCenter(new float[]{-0.115,0.069,0});
HAnimJoint31.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint31.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint32 =  HAnimJoint();
HAnimJoint32.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint32.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint32.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint32.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint32.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint& HAnimJoint33 =  HAnimJoint();
HAnimJoint33.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint33.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint33.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint33.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint33.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint34 =  HAnimJoint();
HAnimJoint34.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint34.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint34.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint34.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint34.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint33.addChildren(&HAnimJoint34);

HAnimJoint32.addChildren(&HAnimJoint33);

HAnimJoint31.addChildren(&HAnimJoint32);

HAnimJoint30.addChildren(&HAnimJoint31);

HAnimJoint29.addChildren(&HAnimJoint30);

HAnimJoint22.addChildren(&HAnimJoint29);

HAnimJoint16.addChildren(&HAnimJoint22);

HAnimJoint& HAnimJoint35 =  HAnimJoint();
HAnimJoint35.X3DNode::setName(CString("vl5"));
HAnimJoint35.setDEF(CString("hanim_vl5"));
HAnimJoint35.setCenter(new float[]{0,1.045,-0.095});
HAnimJoint35.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint35.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.X3DNode::setName(CString("vl4"));
HAnimJoint36.setDEF(CString("hanim_vl4"));
HAnimJoint36.setCenter(new float[]{0,1.068,-0.085});
HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.X3DNode::setName(CString("vl3"));
HAnimJoint37.setDEF(CString("hanim_vl3"));
HAnimJoint37.setCenter(new float[]{0,1.092,-0.0725});
HAnimJoint& HAnimJoint38 =  HAnimJoint();
HAnimJoint38.X3DNode::setName(CString("vl2"));
HAnimJoint38.setDEF(CString("hanim_vl2"));
HAnimJoint38.setCenter(new float[]{0,1.12,-0.065});
HAnimJoint38.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint38.setSkinCoordWeight(new float[]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.X3DNode::setName(CString("vl1"));
HAnimJoint39.setDEF(CString("hanim_vl1"));
HAnimJoint39.setCenter(new float[]{0,1.1459,-0.0625});
HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.X3DNode::setName(CString("vt12"));
HAnimJoint40.setDEF(CString("hanim_vt12"));
HAnimJoint40.setCenter(new float[]{0,1.179,-0.068});
HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.X3DNode::setName(CString("vt11"));
HAnimJoint41.setDEF(CString("hanim_vt11"));
HAnimJoint41.setCenter(new float[]{0,1.2679,-0.081});
HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.X3DNode::setName(CString("vt10"));
HAnimJoint42.setDEF(CString("hanim_vt10"));
HAnimJoint42.setCenter(new float[]{0,1.242,-0.09});
HAnimJoint42.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint42.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.X3DNode::setName(CString("vt9"));
HAnimJoint43.setDEF(CString("hanim_vt9"));
HAnimJoint43.setCenter(new float[]{0,1.268,-0.1});
HAnimJoint43.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint43.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.X3DNode::setName(CString("vt8"));
HAnimJoint44.setDEF(CString("hanim_vt8"));
HAnimJoint44.setCenter(new float[]{0,1.294,-0.11});
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("vt7"));
HAnimJoint45.setDEF(CString("hanim_vt7"));
HAnimJoint45.setCenter(new float[]{0,1.323,-0.1155});
HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.X3DNode::setName(CString("vt6"));
HAnimJoint46.setDEF(CString("hanim_vt6"));
HAnimJoint46.setCenter(new float[]{0,1.352,-0.12});
HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.X3DNode::setName(CString("vt5"));
HAnimJoint47.setDEF(CString("hanim_vt5"));
HAnimJoint47.setCenter(new float[]{0,1.381,-0.1235});
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.X3DNode::setName(CString("vt4"));
HAnimJoint48.setDEF(CString("hanim_vt4"));
HAnimJoint48.setCenter(new float[]{0,1.41,-0.1235});
HAnimJoint48.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint48.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.X3DNode::setName(CString("vt3"));
HAnimJoint49.setDEF(CString("hanim_vt3"));
HAnimJoint49.setCenter(new float[]{0,1.438,-0.12});
HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("vt2"));
HAnimJoint50.setDEF(CString("hanim_vt2"));
HAnimJoint50.setCenter(new float[]{0,1.468,-0.105});
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.X3DNode::setName(CString("vt1"));
HAnimJoint51.setDEF(CString("hanim_vt1"));
HAnimJoint51.setCenter(new float[]{0,1.497,-0.09});
HAnimJoint51.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint51.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(CString("vc7"));
HAnimJoint52.setDEF(CString("hanim_vc7"));
HAnimJoint52.setCenter(new float[]{0,1.525,-0.072});
HAnimJoint52.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint52.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.X3DNode::setName(CString("vc6"));
HAnimJoint53.setDEF(CString("hanim_vc6"));
HAnimJoint53.setCenter(new float[]{0,1.54,-0.05});
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.X3DNode::setName(CString("vc5"));
HAnimJoint54.setDEF(CString("hanim_vc5"));
HAnimJoint54.setCenter(new float[]{0,1.552,-0.035});
HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.X3DNode::setName(CString("vc4"));
HAnimJoint55.setDEF(CString("hanim_vc4"));
HAnimJoint55.setRotation(new float[]{0.98593,0,-0.16716,0.46046});
HAnimJoint55.setCenter(new float[]{0,1.5675,-0.0256});
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.X3DNode::setName(CString("vc3"));
HAnimJoint56.setDEF(CString("hanim_vc3"));
HAnimJoint56.setCenter(new float[]{0,1.5823,-0.0185});
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.X3DNode::setName(CString("vc2"));
HAnimJoint57.setDEF(CString("hanim_vc2"));
HAnimJoint57.setCenter(new float[]{0,1.595,-0.0175});
HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.X3DNode::setName(CString("vc1"));
HAnimJoint58.setDEF(CString("hanim_vc1"));
HAnimJoint58.setCenter(new float[]{0,1.61,-0.015});
HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.X3DNode::setName(CString("skullbase"));
HAnimJoint59.setDEF(CString("hanim_skullbase"));
HAnimJoint59.setCenter(new float[]{0,1.63,-0.01});
HAnimJoint59.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint59.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint60.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint60.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint59.addChildren(&HAnimJoint60);

HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint61.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint61.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint59.addChildren(&HAnimJoint61);

HAnimJoint58.addChildren(&HAnimJoint59);

HAnimJoint57.addChildren(&HAnimJoint58);

HAnimJoint56.addChildren(&HAnimJoint57);

HAnimJoint55.addChildren(&HAnimJoint56);

HAnimJoint54.addChildren(&HAnimJoint55);

HAnimJoint53.addChildren(&HAnimJoint54);

HAnimJoint52.addChildren(&HAnimJoint53);

HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint62.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint62.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint62.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint62.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint63.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint63.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint63.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint63.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(CString("l_shoulder"));
HAnimJoint64.setDEF(CString("hanim_l_shoulder"));
HAnimJoint64.setRotation(new float[]{0,0,1,1.3884});
HAnimJoint64.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint64.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint64.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.X3DNode::setName(CString("l_elbow"));
HAnimJoint65.setDEF(CString("hanim_l_elbow"));
HAnimJoint65.setRotation(new float[]{-1,0,0,1.3339});
HAnimJoint65.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint65.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint65.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint66.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint66.setRotation(new float[]{0,1,0,1.2033});
HAnimJoint66.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint66.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint66.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint67.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint67.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint67.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint67.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint68.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint68.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint68.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint68.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint69.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint69.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint69.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint69.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint68.addChildren(&HAnimJoint69);

HAnimJoint67.addChildren(&HAnimJoint68);

HAnimJoint66.addChildren(&HAnimJoint67);

HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint70.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint70.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint70.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint70.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint71.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint71.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint71.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint71.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint72.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint72.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint72.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint72.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint73.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint73.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint73.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint73.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint66.addChildren(&HAnimJoint70);

HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint74.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint74.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint74.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint74.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint75 =  HAnimJoint();
HAnimJoint75.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint75.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint75.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint75.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint75.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint76.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint76.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint76.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint76.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint77.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint77.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint77.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint77.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint76.addChildren(&HAnimJoint77);

HAnimJoint75.addChildren(&HAnimJoint76);

HAnimJoint74.addChildren(&HAnimJoint75);

HAnimJoint66.addChildren(&HAnimJoint74);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint78.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint78.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint78.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint78.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint79.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint79.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint79.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint79.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint80.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint80.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint80.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint80.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint81.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint81.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint81.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint81.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint80.addChildren(&HAnimJoint81);

HAnimJoint79.addChildren(&HAnimJoint80);

HAnimJoint78.addChildren(&HAnimJoint79);

HAnimJoint66.addChildren(&HAnimJoint78);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint82.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint82.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint82.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint82.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint83.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint83.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint83.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint83.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint84.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint84.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint84.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint84.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint85.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint85.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint85.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint85.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint84.addChildren(&HAnimJoint85);

HAnimJoint83.addChildren(&HAnimJoint84);

HAnimJoint82.addChildren(&HAnimJoint83);

HAnimJoint66.addChildren(&HAnimJoint82);

HAnimJoint65.addChildren(&HAnimJoint66);

HAnimJoint64.addChildren(&HAnimJoint65);

HAnimJoint63.addChildren(&HAnimJoint64);

HAnimJoint62.addChildren(&HAnimJoint63);

HAnimJoint52.addChildren(&HAnimJoint62);

HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint86.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint86.setCenter(new float[]{-0.03,1.46,0});
HAnimJoint86.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint86.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint87.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint87.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint87.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint87.setSkinCoordWeight(new float[]{1,0.9}, 2);
HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.X3DNode::setName(CString("r_shoulder"));
HAnimJoint88.setDEF(CString("hanim_r_shoulder"));
HAnimJoint88.setRotation(new float[]{0,0,-1,1.7595});
HAnimJoint88.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint88.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint88.setSkinCoordWeight(new float[]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.X3DNode::setName(CString("r_elbow"));
HAnimJoint89.setDEF(CString("hanim_r_elbow"));
HAnimJoint89.setRotation(new float[]{-1,0,0,1.3339});
HAnimJoint89.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint89.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint89.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint90.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint90.setRotation(new float[]{0,1,0,0.077855});
HAnimJoint90.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint90.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint91.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint91.setCenter(new float[]{-0.2,0.85,0});
HAnimJoint91.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint91.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint92.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint92.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint92.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint92.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint93.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint93.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint93.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint92.addChildren(&HAnimJoint93);

HAnimJoint91.addChildren(&HAnimJoint92);

HAnimJoint90.addChildren(&HAnimJoint91);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint94.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint94.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint94.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint95.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint95.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint95.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint95.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint96.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint96.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint96.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint96.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint97.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint97.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint97.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint97.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint96.addChildren(&HAnimJoint97);

HAnimJoint95.addChildren(&HAnimJoint96);

HAnimJoint94.addChildren(&HAnimJoint95);

HAnimJoint90.addChildren(&HAnimJoint94);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint98.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint98.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint98.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint99.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint99.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint99.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint99.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint100.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint100.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint100.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint100.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint101.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint101.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint101.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint101.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint99.addChildren(&HAnimJoint100);

HAnimJoint98.addChildren(&HAnimJoint99);

HAnimJoint90.addChildren(&HAnimJoint98);

HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint102.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint102.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint102.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint102.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint103.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint103.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint103.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint103.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint104.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint104.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint104.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint104.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint105.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint105.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint105.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint105.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint103.addChildren(&HAnimJoint104);

HAnimJoint102.addChildren(&HAnimJoint103);

HAnimJoint90.addChildren(&HAnimJoint102);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint106.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint106.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint106.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint106.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint107.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint107.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint107.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint107.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint108.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint108.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint108.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint108.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint109.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint109.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint109.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint109.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint107.addChildren(&HAnimJoint108);

HAnimJoint106.addChildren(&HAnimJoint107);

HAnimJoint90.addChildren(&HAnimJoint106);

HAnimJoint89.addChildren(&HAnimJoint90);

HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint87.addChildren(&HAnimJoint88);

HAnimJoint86.addChildren(&HAnimJoint87);

HAnimJoint52.addChildren(&HAnimJoint86);

HAnimJoint51.addChildren(&HAnimJoint52);

HAnimJoint50.addChildren(&HAnimJoint51);

HAnimJoint49.addChildren(&HAnimJoint50);

HAnimJoint48.addChildren(&HAnimJoint49);

HAnimJoint47.addChildren(&HAnimJoint48);

HAnimJoint46.addChildren(&HAnimJoint47);

HAnimJoint45.addChildren(&HAnimJoint46);

HAnimJoint44.addChildren(&HAnimJoint45);

HAnimJoint43.addChildren(&HAnimJoint44);

HAnimJoint42.addChildren(&HAnimJoint43);

HAnimJoint41.addChildren(&HAnimJoint42);

HAnimJoint40.addChildren(&HAnimJoint41);

HAnimJoint39.addChildren(&HAnimJoint40);

HAnimJoint38.addChildren(&HAnimJoint39);

HAnimJoint37.addChildren(&HAnimJoint38);

HAnimJoint36.addChildren(&HAnimJoint37);

HAnimJoint35.addChildren(&HAnimJoint36);

HAnimJoint16.addChildren(&HAnimJoint35);

HAnimHumanoid15.setSkeleton(&HAnimJoint16);

HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid15.setJoints(&HAnimJoint110);

HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid15.setJoints(&HAnimJoint111);

HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.setUSE(CString("hanim_l_hip"));
HAnimHumanoid15.setJoints(&HAnimJoint112);

HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.setUSE(CString("hanim_l_knee"));
HAnimHumanoid15.setJoints(&HAnimJoint113);

HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid15.setJoints(&HAnimJoint114);

HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint115);

HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint116);

HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint117);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.setUSE(CString("hanim_r_hip"));
HAnimHumanoid15.setJoints(&HAnimJoint118);

HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.setUSE(CString("hanim_r_knee"));
HAnimHumanoid15.setJoints(&HAnimJoint119);

HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid15.setJoints(&HAnimJoint120);

HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint121);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint122);

HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint123);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setUSE(CString("hanim_vl5"));
HAnimHumanoid15.setJoints(&HAnimJoint124);

HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.setUSE(CString("hanim_vl4"));
HAnimHumanoid15.setJoints(&HAnimJoint125);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setUSE(CString("hanim_vl3"));
HAnimHumanoid15.setJoints(&HAnimJoint126);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.setUSE(CString("hanim_vl2"));
HAnimHumanoid15.setJoints(&HAnimJoint127);

HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setUSE(CString("hanim_vl1"));
HAnimHumanoid15.setJoints(&HAnimJoint128);

HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.setUSE(CString("hanim_vt12"));
HAnimHumanoid15.setJoints(&HAnimJoint129);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.setUSE(CString("hanim_vt11"));
HAnimHumanoid15.setJoints(&HAnimJoint130);

HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.setUSE(CString("hanim_vt10"));
HAnimHumanoid15.setJoints(&HAnimJoint131);

HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setUSE(CString("hanim_vt9"));
HAnimHumanoid15.setJoints(&HAnimJoint132);

HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.setUSE(CString("hanim_vt8"));
HAnimHumanoid15.setJoints(&HAnimJoint133);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.setUSE(CString("hanim_vt7"));
HAnimHumanoid15.setJoints(&HAnimJoint134);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.setUSE(CString("hanim_vt6"));
HAnimHumanoid15.setJoints(&HAnimJoint135);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setUSE(CString("hanim_vt5"));
HAnimHumanoid15.setJoints(&HAnimJoint136);

HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setUSE(CString("hanim_vt4"));
HAnimHumanoid15.setJoints(&HAnimJoint137);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.setUSE(CString("hanim_vt3"));
HAnimHumanoid15.setJoints(&HAnimJoint138);

HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.setUSE(CString("hanim_vt2"));
HAnimHumanoid15.setJoints(&HAnimJoint139);

HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setUSE(CString("hanim_vt1"));
HAnimHumanoid15.setJoints(&HAnimJoint140);

HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.setUSE(CString("hanim_vc7"));
HAnimHumanoid15.setJoints(&HAnimJoint141);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.setUSE(CString("hanim_vc6"));
HAnimHumanoid15.setJoints(&HAnimJoint142);

HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.setUSE(CString("hanim_vc5"));
HAnimHumanoid15.setJoints(&HAnimJoint143);

HAnimJoint& HAnimJoint144 =  HAnimJoint();
HAnimJoint144.setUSE(CString("hanim_vc4"));
HAnimHumanoid15.setJoints(&HAnimJoint144);

HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.setUSE(CString("hanim_vc3"));
HAnimHumanoid15.setJoints(&HAnimJoint145);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setUSE(CString("hanim_vc2"));
HAnimHumanoid15.setJoints(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setUSE(CString("hanim_vc1"));
HAnimHumanoid15.setJoints(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setUSE(CString("hanim_skullbase"));
HAnimHumanoid15.setJoints(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid15.setJoints(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid15.setJoints(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid15.setJoints(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid15.setJoints(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid15.setJoints(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid15.setJoints(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid15.setJoints(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid15.setJoints(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid15.setJoints(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid15.setJoints(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint162);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint163);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint165);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint167);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint169);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint170);

HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint171);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint172);

HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint173);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint174);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid15.setJoints(&HAnimJoint175);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid15.setJoints(&HAnimJoint176);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid15.setJoints(&HAnimJoint177);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid15.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid15.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid15.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid15.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid15.setJoints(&HAnimJoint182);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint183);

HAnimJoint& HAnimJoint184 =  HAnimJoint();
HAnimJoint184.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint184);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint185);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid15.setJoints(&HAnimJoint186);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint187);

HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint188);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint189);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid15.setJoints(&HAnimJoint190);

HAnimJoint& HAnimJoint191 =  HAnimJoint();
HAnimJoint191.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint191);

HAnimJoint& HAnimJoint192 =  HAnimJoint();
HAnimJoint192.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint192);

HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint193);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid15.setJoints(&HAnimJoint194);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint195);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint196);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint197);

HAnimJoint& HAnimJoint198 =  HAnimJoint();
HAnimJoint198.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid15.setJoints(&HAnimJoint198);

Coordinate& Coordinate199 =  Coordinate();
Coordinate199.setDEF(CString("JoeSkinCoord"));
Coordinate199.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
HAnimHumanoid15.setSkinCoord(&Coordinate199);

Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Material& Material202 =  Material();
Material202.setEmissiveColor(new float[]{0.13,0.55,0.13});
Appearance201.addChild(&Material202);

ImageTexture& ImageTexture203 =  ImageTexture();
ImageTexture203.setUrl(new CString[]{CString("bodytexture28.png")}, 1);
Appearance201.addChild(&ImageTexture203);

Shape200.addChild(&Appearance201);

IndexedFaceSet& IndexedFaceSet204 =  IndexedFaceSet();
IndexedFaceSet204.setCreaseAngle(3.1);
IndexedFaceSet204.setColorPerVertex(False);
IndexedFaceSet204.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setUSE(CString("JoeSkinCoord"));
IndexedFaceSet204.setCoord(&Coordinate205);

Shape200.setGeometry(&IndexedFaceSet204);

HAnimHumanoid15.setSkin(&Shape200);

Group14.addChild(&HAnimHumanoid15);

Scene6.addChild(&Group14);

Transform& Transform206 =  Transform();
Transform206.setDEF(CString("SBall"));
Transform206.setTranslation(new float[]{-0.074397,0.094551,-0.074397});
Transform206.setRotation(new float[]{-0.70711,0,-0.70711,1.231});
Transform206.setScale(new float[]{0.23,0.23,0.23});
Shape& Shape207 =  Shape();
Appearance& Appearance208 =  Appearance();
Material& Material209 =  Material();
Material209.setDiffuseColor(new float[]{0,0.8353,0});
Material209.setSpecularColor(new float[]{0,0.6849,0});
Material209.setEmissiveColor(new float[]{1,1,1});
Appearance208.addChild(&Material209);

ImageTexture& ImageTexture210 =  ImageTexture();
ImageTexture210.setUrl(new CString[]{CString("bodytexture28.png")}, 1);
Appearance208.addChild(&ImageTexture210);

Shape207.addChild(&Appearance208);

IndexedFaceSet& IndexedFaceSet211 =  IndexedFaceSet();
IndexedFaceSet211.setDEF(CString("ball"));
IndexedFaceSet211.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setPoint(new float[]{0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0}, 186);
IndexedFaceSet211.setCoord(&Coordinate212);

Shape207.setGeometry(&IndexedFaceSet211);

Transform206.addChild(&Shape207);

Viewpoint& Viewpoint213 =  Viewpoint();
Viewpoint213.setDEF(CString("ballView"));
Viewpoint213.setDescription(CString("ball View"));
Transform206.addChild(&Viewpoint213);

Scene6.addChild(&Transform206);

Transform& Transform214 =  Transform();
Transform214.setDEF(CString("scenecordsys"));
Transform214.setScale(new float[]{0.275,0.275,0.275});
Inline& Inline215 =  Inline();
Inline215.setGlobal(True);
Inline215.setUrl(new CString[]{CString("JointCoordinateAxes.x3dv")}, 1);
Transform214.addChild(&Inline215);

Scene6.addChild(&Transform214);

Transform& Transform216 =  Transform();
Transform216.setDEF(CString("Circle0"));
Transform216.setScale(new float[]{1.175,1,1.175});
Shape& Shape217 =  Shape();
Appearance& Appearance218 =  Appearance();
Material& Material219 =  Material();
Material219.setDiffuseColor(new float[]{0.9,0,0.7});
Material219.setEmissiveColor(new float[]{0.42496,0.48398,1});
Appearance218.addChild(&Material219);

Shape217.addChild(&Appearance218);

IndexedLineSet& IndexedLineSet220 =  IndexedLineSet();
IndexedLineSet220.setDEF(CString("Orbit1"));
IndexedLineSet220.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate& Coordinate221 =  Coordinate();
Coordinate221.setPoint(new float[]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.99452,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0}, 183);
IndexedLineSet220.setCoord(&Coordinate221);

Shape217.setGeometry(&IndexedLineSet220);

Transform216.addChild(&Shape217);

Scene6.addChild(&Transform216);

Transform& Transform222 =  Transform();
Transform222.setDEF(CString("Circle1"));
Transform222.setScale(new float[]{0.5,1,0.5});
Shape& Shape223 =  Shape();
Appearance& Appearance224 =  Appearance();
Material& Material225 =  Material();
Material225.setDiffuseColor(new float[]{0.9,0,0.7});
Material225.setEmissiveColor(new float[]{0.42496,0.48398,1});
Appearance224.addChild(&Material225);

Shape223.addChild(&Appearance224);

IndexedLineSet& IndexedLineSet226 =  IndexedLineSet();
IndexedLineSet226.setUSE(CString("Orbit1"));
Shape223.setGeometry(&IndexedLineSet226);

Transform222.addChild(&Shape223);

Scene6.addChild(&Transform222);

Transform& Transform227 =  Transform();
Transform227.setDEF(CString("Circle2"));
Transform227.setScale(new float[]{0.25,1,0.25});
Shape& Shape228 =  Shape();
Appearance& Appearance229 =  Appearance();
Material& Material230 =  Material();
Material230.setDiffuseColor(new float[]{0.9,0,0.7});
Material230.setEmissiveColor(new float[]{0.42496,0.48398,1});
Appearance229.addChild(&Material230);

Shape228.addChild(&Appearance229);

IndexedLineSet& IndexedLineSet231 =  IndexedLineSet();
IndexedLineSet231.setUSE(CString("Orbit1"));
Shape228.setGeometry(&IndexedLineSet231);

Transform227.addChild(&Shape228);

Scene6.addChild(&Transform227);

X3D0.setScene(&Scene6);

}
