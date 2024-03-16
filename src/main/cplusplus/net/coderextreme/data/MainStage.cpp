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
X3D0->setProfile(CString("Interchange"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("HAnim"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("MainStage.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("Main stage for HAnim scene Winter and Spring."));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("Joe Williams"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("translator"));
meta6->setContent(CString("Joe Williams and Don Brutzman"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("created"));
meta7->setContent(CString("25 May 2023"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("modified"));
meta8->setContent(CString("27 May 2023"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("reference"));
meta9->setContent(CString("originals/0MainStageScene0525.x3dv"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("identifier"));
meta10->setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("generator"));
meta11->setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("license"));
meta12->setContent(CString("../license.html"));
head1->addMeta(meta12);

X3D0->setHead(head1);

Scene* Scene13 = new Scene();
WorldInfo* WorldInfo14 = new WorldInfo();
WorldInfo14->setTitle(CString("MainStage.x3d"));
Scene13->addChild(WorldInfo14);

NavigationInfo* NavigationInfo15 = new NavigationInfo();
NavigationInfo15->setHeadlight(False);
Scene13->addChild(NavigationInfo15);

DirectionalLight* DirectionalLight16 = new DirectionalLight();
DirectionalLight16->setAmbientIntensity(1);
DirectionalLight16->setDirection(new float[3]{-0.5,-0.5,-0.5});
DirectionalLight16->setGlobal(True);
Scene13->addChild(DirectionalLight16);

DirectionalLight* DirectionalLight17 = new DirectionalLight();
DirectionalLight17->setAmbientIntensity(1);
DirectionalLight17->setDirection(new float[3]{-1,-1,-1});
DirectionalLight17->setGlobal(True);
Scene13->addChild(DirectionalLight17);

DirectionalLight* DirectionalLight18 = new DirectionalLight();
DirectionalLight18->setAmbientIntensity(1);
DirectionalLight18->setDirection(new float[3]{1,1,-1});
DirectionalLight18->setGlobal(True);
DirectionalLight18->setIntensity(0.5);
Scene13->addChild(DirectionalLight18);

Viewpoint* Viewpoint19 = new Viewpoint();
Viewpoint19->setDEF(CString("Scene_StageFrontViewFar"));
Viewpoint19->setDescription(CString("hanim_Stage Front View"));
Viewpoint19->setOrientation(new float[4]{1,0,0,-0.449999988});
Viewpoint19->setPosition(new float[3]{0,4,10});
Scene13->addChild(Viewpoint19);

Viewpoint* Viewpoint20 = new Viewpoint();
Viewpoint20->setDEF(CString("Scene_InclinedView"));
Viewpoint20->setDescription(CString("hanim_Inclined View"));
Viewpoint20->setOrientation(new float[4]{-0.112999998,0.992999971,0.034699999,0.671000004});
Viewpoint20->setPosition(new float[3]{2.619999886,1.049999952,4.059999943});
Scene13->addChild(Viewpoint20);

Viewpoint* Viewpoint21 = new Viewpoint();
Viewpoint21->setDEF(CString("Scene_StageFrontView"));
Viewpoint21->setDescription(CString("hanim_Stage Front View"));
Viewpoint21->setPosition(new float[3]{0,1,5});
Scene13->addChild(Viewpoint21);

Viewpoint* Viewpoint22 = new Viewpoint();
Viewpoint22->setDEF(CString("Scene_FeetStageBottomView"));
Viewpoint22->setDescription(CString("hanim_feet View"));
Viewpoint22->setOrientation(new float[4]{1,0,0,1.570000052});
Viewpoint22->setPosition(new float[3]{0,-10,0});
Scene13->addChild(Viewpoint22);

Viewpoint* Viewpoint23 = new Viewpoint();
Viewpoint23->setDEF(CString("Scene_HeadTopView"));
Viewpoint23->setDescription(CString("hanim_Head Top View"));
Viewpoint23->setOrientation(new float[4]{1,0,0,-1.570000052});
Viewpoint23->setPosition(new float[3]{0,15,0});
Scene13->addChild(Viewpoint23);

Viewpoint* Viewpoint24 = new Viewpoint();
Viewpoint24->setDEF(CString("Scene_TopFrontCloseView"));
Viewpoint24->setDescription(CString("hanim_Head Top View"));
Viewpoint24->setOrientation(new float[4]{1,0,0,-1.100000024});
Viewpoint24->setPosition(new float[3]{0,8,3});
Scene13->addChild(Viewpoint24);

Group* Group25 = new Group();
Group25->setDEF(CString("HAnimStage"));
Transform* Transform26 = new Transform();
Transform26->setDEF(CString("cordsysfloor"));
Transform26->setScale(new float[3]{0.174999997,0.174999997,0.174999997});
Inline* Inline27 = new Inline();
Inline27->setUrl(new CString[1]{CString("JointCoordinateAxes.x3dv")}, 1);
Transform26->addChild(Inline27);

Group25->addChild(Transform26);

Transform* Transform28 = new Transform();
Transform28->setDEF(CString("StageGeometry"));
Transform28->setScale(new float[3]{1,0.01,1});
Transform28->setTranslation(new float[3]{0,-0.01,0});
Shape* Shape29 = new Shape();
Appearance* Appearance30 = new Appearance();
Material* Material31 = new Material();
Material31->setTransparency(0.6);
Appearance30->addChild(Material31);

Shape29->addChild(Appearance30);

Box* Box32 = new Box();
Box32->setSize(new float[3]{9,1,9});
Shape29->setGeometry(Box32);

Transform28->addChild(Shape29);

Transform* Transform33 = new Transform();
Transform33->setDEF(CString("Circle0"));
Shape* Shape34 = new Shape();
Appearance* Appearance35 = new Appearance();
Appearance35->setDEF(CString("LineColor"));
Material* Material36 = new Material();
Material36->setAmbientIntensity(1);
Material36->setDiffuseColor(new float[3]{0.699999988,0,0.899999976});
Material36->setEmissiveColor(new float[3]{0.449999988,0.449999988,1});
Material36->setShininess(1);
Material36->setSpecularColor(new float[3]{0,0,1});
Appearance35->addChild(Material36);

Shape34->addChild(Appearance35);

IndexedLineSet* IndexedLineSet37 = new IndexedLineSet();
IndexedLineSet37->setDEF(CString("Orbit1"));
IndexedLineSet37->setCoordIndex(new int32_t[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate* Coordinate38 = new Coordinate();
Coordinate38->setPoint(new float[183]{1,0,0,0.995000005,0,-0.104999997,0.978999972,0,-0.208000004,0.950999975,0,-0.308999985,0.913999975,0,-0.407000005,0.865999997,0,-0.5,0.809000015,0,-0.588,0.742999971,0,-0.66900003,0.66900003,0,-0.742999971,0.588,0,-0.809000015,0.5,0,-0.865999997,0.407000005,0,-0.913999975,0.308999985,0,-0.950999975,0.208000004,0,-0.977999985,0.104999997,0,-0.995000005,0,0,-1,-0.104999997,0,-0.994521976,-0.208000004,0,-0.977999985,-0.308999985,0,-0.950999975,-0.407000005,0,-0.913999975,-0.5,0,-0.865999997,-0.588,0,-0.809000015,-0.66900003,0,-0.742999971,-0.742999971,0,-0.66900003,-0.809000015,0,-0.588,-0.865999997,0,-0.5,-0.913999975,0,-0.407000005,-0.950999975,0,-0.308999985,-0.977999985,0,-0.208000004,-0.995000005,0,-0.104999997,-1,0,0,-0.995000005,0,0.104999997,-0.977999985,0,0.208000004,-0.950999975,0,0.308999985,-0.913999975,0,0.407000005,-0.865999997,0,0.5,-0.809000015,0,0.588,-0.742999971,0,0.66900003,-0.66900003,0,0.742999971,-0.588,0,0.809000015,-0.5,0,0.865999997,-0.407000005,0,0.913999975,-0.308999985,0,0.950999975,-0.208000004,0,0.977999985,-0.104999997,0,0.995000005,0,0,1,0.104999997,0,0.995000005,0.208000004,0,0.977999985,0.308999985,0,0.950999975,0.407000005,0,0.913999975,0.5,0,0.865999997,0.588,0,0.809000015,0.66900003,0,0.742999971,0.742999971,0,0.66900003,0.809000015,0,0.588,0.865999997,0,0.5,0.913999975,0,0.407000005,0.950999975,0,0.308999985,0.977999985,0,0.208000004,0.995000005,0,0.104000002,1,0,0}, 183);
IndexedLineSet37->addChild(Coordinate38);

Shape34->setGeometry(IndexedLineSet37);

Transform33->addChild(Shape34);

Transform28->addChild(Transform33);

Transform* Transform39 = new Transform();
Transform39->setDEF(CString("Circle1"));
Transform39->setScale(new float[3]{0.5,1,0.5});
Shape* Shape40 = new Shape();
Appearance* Appearance41 = new Appearance();
Appearance41->setUSE(CString("LineColor"));
Shape40->addChild(Appearance41);

IndexedLineSet* IndexedLineSet42 = new IndexedLineSet();
IndexedLineSet42->setUSE(CString("Orbit1"));
Shape40->setGeometry(IndexedLineSet42);

Transform39->addChild(Shape40);

Transform28->addChild(Transform39);

Transform* Transform43 = new Transform();
Transform43->setDEF(CString("Circle2"));
Transform43->setScale(new float[3]{0.25,1,0.25});
Shape* Shape44 = new Shape();
Appearance* Appearance45 = new Appearance();
Appearance45->setUSE(CString("LineColor"));
Shape44->addChild(Appearance45);

IndexedLineSet* IndexedLineSet46 = new IndexedLineSet();
IndexedLineSet46->setUSE(CString("Orbit1"));
Shape44->setGeometry(IndexedLineSet46);

Transform43->addChild(Shape44);

Transform28->addChild(Transform43);

Transform* Transform47 = new Transform();
Transform47->setDEF(CString("Circle3"));
Transform47->setScale(new float[3]{2,1,2});
Shape* Shape48 = new Shape();
Appearance* Appearance49 = new Appearance();
Appearance49->setUSE(CString("LineColor"));
Shape48->addChild(Appearance49);

IndexedLineSet* IndexedLineSet50 = new IndexedLineSet();
IndexedLineSet50->setUSE(CString("Orbit1"));
Shape48->setGeometry(IndexedLineSet50);

Transform47->addChild(Shape48);

Transform28->addChild(Transform47);

Transform* Transform51 = new Transform();
Transform51->setDEF(CString("Circle4"));
Transform51->setScale(new float[3]{3,1,3});
Shape* Shape52 = new Shape();
Appearance* Appearance53 = new Appearance();
Appearance53->setUSE(CString("LineColor"));
Shape52->addChild(Appearance53);

IndexedLineSet* IndexedLineSet54 = new IndexedLineSet();
IndexedLineSet54->setUSE(CString("Orbit1"));
Shape52->setGeometry(IndexedLineSet54);

Transform51->addChild(Shape52);

Transform28->addChild(Transform51);

Group25->addChild(Transform28);

Scene13->addChild(Group25);

X3D0->setScene(Scene13);

}
