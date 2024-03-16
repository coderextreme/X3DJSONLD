/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("JohnJoint2.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("h2.pl");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("14 Jan 2023");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("creator");
meta8->setContent("John Carlson");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("created");
meta9->setContent("9 November 2020");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(meta10);

X3D0->setHead(head1);

Scene* Scene11 = new Scene();
Transform* Transform12 = new Transform();
//DEF for markerfor XYZ axes
Shape* Shape13 = new Shape();
Shape13->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
IndexedLineSet* IndexedLineSet14 = new IndexedLineSet();
IndexedLineSet14->setColorIndex(new int[3]{0,1,2});
IndexedLineSet14->setColorPerVertex(False);
IndexedLineSet14->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
Coordinate* Coordinate15 = new Coordinate();
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet14->setCoord(Coordinate15);

Color* Color16 = new Color();
Color16->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet14->setColor(Color16);

Shape13->setGeometry(IndexedLineSet14);

Transform12->addChild(Shape13);

Scene11->addChild(Transform12);

Group* Group17 = new Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform* Transform18 = new Transform();
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform* Transform19 = new Transform();
Transform19->setTranslation(new float[3]{0,2.1,0});
Shape* Shape20 = new Shape();
Shape20->setDEF("HAnimJointShape");
Sphere* Sphere21 = new Sphere();
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDEF("HAnimJointMaterial");
Material23->setDiffuseColor(new float[3]{0,0,0.8});
Material23->setTransparency(0.3);
Appearance22->setMaterial(Material23);

Shape20->setAppearance(Appearance22);

Transform19->addChild(Shape20);

Transform18->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{0,2.05,0});
Shape* Shape25 = new Shape();
Shape25->setDEF("HAnimSegmentLine");
LineSet* LineSet26 = new LineSet();
LineSet26->setVertexCount(new int[1]{2});
ColorRGBA* ColorRGBA27 = new ColorRGBA();
ColorRGBA27->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA27->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet26->setColor(ColorRGBA27);

Coordinate* Coordinate28 = new Coordinate();
Coordinate28->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet26->setCoord(Coordinate28);

Shape25->setGeometry(LineSet26);

Transform24->addChild(Shape25);

Transform18->addChild(Transform24);

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group17->addChild(Transform18);

Scene11->addChild(Group17);

NavigationInfo* NavigationInfo29 = new NavigationInfo();
NavigationInfo29->setSpeed(1.5);
Scene11->addChild(NavigationInfo29);

Viewpoint* Viewpoint30 = new Viewpoint();
Viewpoint30->setDescription("default");
Scene11->addChild(Viewpoint30);

HAnimHumanoid* HAnimHumanoid31 = new HAnimHumanoid();
HAnimHumanoid31->setName("HAnim");
HAnimHumanoid31->setDEF("hanim_HAnim");
HAnimHumanoid31->setInfo(new String[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid31->setVersion("2.0");
HAnimJoint* HAnimJoint32 = new HAnimJoint();
HAnimJoint32->setName("humanoid_root");
HAnimJoint32->setDEF("hanim_humanoid_root");
HAnimJoint32->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint* HAnimJoint33 = new HAnimJoint();
HAnimJoint33->setName("sacroiliac");
HAnimJoint33->setDEF("hanim_sacroiliac");
HAnimJoint33->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint* HAnimJoint34 = new HAnimJoint();
HAnimJoint34->setName("l_hip");
HAnimJoint34->setDEF("hanim_l_hip");
HAnimJoint34->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint* HAnimJoint35 = new HAnimJoint();
HAnimJoint35->setName("l_knee");
HAnimJoint35->setDEF("hanim_l_knee");
HAnimJoint35->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint* HAnimJoint36 = new HAnimJoint();
HAnimJoint36->setName("l_talocrural");
HAnimJoint36->setDEF("hanim_l_talocrural");
HAnimJoint36->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint* HAnimJoint37 = new HAnimJoint();
HAnimJoint37->setName("l_talocalcaneonavicular");
HAnimJoint37->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint37->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint38 = new HAnimJoint();
HAnimJoint38->setName("l_cuneonavicular_1");
HAnimJoint38->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint38->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint39 = new HAnimJoint();
HAnimJoint39->setName("l_tarsometatarsal_1");
HAnimJoint39->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint39->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint40 = new HAnimJoint();
HAnimJoint40->setName("l_metatarsophalangeal_1");
HAnimJoint40->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint40->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint41 = new HAnimJoint();
HAnimJoint41->setName("l_tarsal_interphalangeal_1");
HAnimJoint41->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint41->setCenter(new float[3]{0,1,0});
HAnimJoint40->addChild(HAnimJoint41);

HAnimJoint39->addChild(HAnimJoint40);

HAnimJoint38->addChild(HAnimJoint39);

HAnimJoint37->addChild(HAnimJoint38);

HAnimJoint* HAnimJoint42 = new HAnimJoint();
HAnimJoint42->setName("l_cuneonavicular_2");
HAnimJoint42->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint42->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint43 = new HAnimJoint();
HAnimJoint43->setName("l_tarsometatarsal_2");
HAnimJoint43->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint43->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint44 = new HAnimJoint();
HAnimJoint44->setName("l_metatarsophalangeal_2");
HAnimJoint44->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint44->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint45 = new HAnimJoint();
HAnimJoint45->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint45->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint45->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint46 = new HAnimJoint();
HAnimJoint46->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint46->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint46->setCenter(new float[3]{0,1,0});
HAnimJoint45->addChild(HAnimJoint46);

HAnimJoint44->addChild(HAnimJoint45);

HAnimJoint43->addChild(HAnimJoint44);

HAnimJoint42->addChild(HAnimJoint43);

HAnimJoint37->addChild(HAnimJoint42);

HAnimJoint* HAnimJoint47 = new HAnimJoint();
HAnimJoint47->setName("l_cuneonavicular_3");
HAnimJoint47->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint47->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint48 = new HAnimJoint();
HAnimJoint48->setName("l_tarsometatarsal_3");
HAnimJoint48->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint48->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint49 = new HAnimJoint();
HAnimJoint49->setName("l_metatarsophalangeal_3");
HAnimJoint49->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint49->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint50 = new HAnimJoint();
HAnimJoint50->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint50->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint50->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint51 = new HAnimJoint();
HAnimJoint51->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint51->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint51->setCenter(new float[3]{0,1,0});
HAnimJoint50->addChild(HAnimJoint51);

HAnimJoint49->addChild(HAnimJoint50);

HAnimJoint48->addChild(HAnimJoint49);

HAnimJoint47->addChild(HAnimJoint48);

HAnimJoint37->addChild(HAnimJoint47);

HAnimJoint36->addChild(HAnimJoint37);

HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName("l_calcaneocuboid");
HAnimJoint52->setDEF("hanim_l_calcaneocuboid");
HAnimJoint52->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint53 = new HAnimJoint();
HAnimJoint53->setName("l_transversetarsal");
HAnimJoint53->setDEF("hanim_l_transversetarsal");
HAnimJoint53->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint54 = new HAnimJoint();
HAnimJoint54->setName("l_tarsometatarsal_4");
HAnimJoint54->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint54->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint55 = new HAnimJoint();
HAnimJoint55->setName("l_metatarsophalangeal_4");
HAnimJoint55->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint55->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint56 = new HAnimJoint();
HAnimJoint56->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint56->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint56->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint57 = new HAnimJoint();
HAnimJoint57->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint57->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint57->setCenter(new float[3]{0,1,0});
HAnimJoint56->addChild(HAnimJoint57);

HAnimJoint55->addChild(HAnimJoint56);

HAnimJoint54->addChild(HAnimJoint55);

HAnimJoint53->addChild(HAnimJoint54);

HAnimJoint* HAnimJoint58 = new HAnimJoint();
HAnimJoint58->setName("l_tarsometatarsal_5");
HAnimJoint58->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint58->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint59 = new HAnimJoint();
HAnimJoint59->setName("l_metatarsophalangeal_5");
HAnimJoint59->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint59->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint60 = new HAnimJoint();
HAnimJoint60->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint60->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint60->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint61 = new HAnimJoint();
HAnimJoint61->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint61->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint61->setCenter(new float[3]{0,1,0});
HAnimJoint60->addChild(HAnimJoint61);

HAnimJoint59->addChild(HAnimJoint60);

HAnimJoint58->addChild(HAnimJoint59);

HAnimJoint53->addChild(HAnimJoint58);

HAnimJoint52->addChild(HAnimJoint53);

HAnimJoint36->addChild(HAnimJoint52);

HAnimJoint35->addChild(HAnimJoint36);

HAnimJoint34->addChild(HAnimJoint35);

HAnimJoint33->addChild(HAnimJoint34);

HAnimJoint* HAnimJoint62 = new HAnimJoint();
HAnimJoint62->setName("r_hip");
HAnimJoint62->setDEF("hanim_r_hip");
HAnimJoint62->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint* HAnimJoint63 = new HAnimJoint();
HAnimJoint63->setName("r_knee");
HAnimJoint63->setDEF("hanim_r_knee");
HAnimJoint63->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName("r_talocrural");
HAnimJoint64->setDEF("hanim_r_talocrural");
HAnimJoint64->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint* HAnimJoint65 = new HAnimJoint();
HAnimJoint65->setName("r_talocalcaneonavicular");
HAnimJoint65->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint65->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint66 = new HAnimJoint();
HAnimJoint66->setName("r_cuneonavicular_1");
HAnimJoint66->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint66->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint67 = new HAnimJoint();
HAnimJoint67->setName("r_tarsometatarsal_1");
HAnimJoint67->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint67->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint68 = new HAnimJoint();
HAnimJoint68->setName("r_metatarsophalangeal_1");
HAnimJoint68->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint68->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint69 = new HAnimJoint();
HAnimJoint69->setName("r_tarsal_interphalangeal_1");
HAnimJoint69->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint69->setCenter(new float[3]{0,1,0});
HAnimJoint68->addChild(HAnimJoint69);

HAnimJoint67->addChild(HAnimJoint68);

HAnimJoint66->addChild(HAnimJoint67);

HAnimJoint65->addChild(HAnimJoint66);

HAnimJoint* HAnimJoint70 = new HAnimJoint();
HAnimJoint70->setName("r_cuneonavicular_2");
HAnimJoint70->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint70->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint71 = new HAnimJoint();
HAnimJoint71->setName("r_tarsometatarsal_2");
HAnimJoint71->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint71->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint72 = new HAnimJoint();
HAnimJoint72->setName("r_metatarsophalangeal_2");
HAnimJoint72->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint72->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint73->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint73->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint74 = new HAnimJoint();
HAnimJoint74->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint74->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint74->setCenter(new float[3]{0,1,0});
HAnimJoint73->addChild(HAnimJoint74);

HAnimJoint72->addChild(HAnimJoint73);

HAnimJoint71->addChild(HAnimJoint72);

HAnimJoint70->addChild(HAnimJoint71);

HAnimJoint65->addChild(HAnimJoint70);

HAnimJoint* HAnimJoint75 = new HAnimJoint();
HAnimJoint75->setName("r_cuneonavicular_3");
HAnimJoint75->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint75->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint76 = new HAnimJoint();
HAnimJoint76->setName("r_tarsometatarsal_3");
HAnimJoint76->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint76->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint77 = new HAnimJoint();
HAnimJoint77->setName("r_metatarsophalangeal_3");
HAnimJoint77->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint77->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint78->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint78->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint79 = new HAnimJoint();
HAnimJoint79->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint79->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint79->setCenter(new float[3]{0,1,0});
HAnimJoint78->addChild(HAnimJoint79);

HAnimJoint77->addChild(HAnimJoint78);

HAnimJoint76->addChild(HAnimJoint77);

HAnimJoint75->addChild(HAnimJoint76);

HAnimJoint65->addChild(HAnimJoint75);

HAnimJoint64->addChild(HAnimJoint65);

HAnimJoint* HAnimJoint80 = new HAnimJoint();
HAnimJoint80->setName("r_calcaneocuboid");
HAnimJoint80->setDEF("hanim_r_calcaneocuboid");
HAnimJoint80->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint81 = new HAnimJoint();
HAnimJoint81->setName("r_transversetarsal");
HAnimJoint81->setDEF("hanim_r_transversetarsal");
HAnimJoint81->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName("r_tarsometatarsal_4");
HAnimJoint82->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint82->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint83 = new HAnimJoint();
HAnimJoint83->setName("r_metatarsophalangeal_4");
HAnimJoint83->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint83->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint84 = new HAnimJoint();
HAnimJoint84->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint84->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint84->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint85 = new HAnimJoint();
HAnimJoint85->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint85->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint85->setCenter(new float[3]{0,1,0});
HAnimJoint84->addChild(HAnimJoint85);

HAnimJoint83->addChild(HAnimJoint84);

HAnimJoint82->addChild(HAnimJoint83);

HAnimJoint81->addChild(HAnimJoint82);

HAnimJoint* HAnimJoint86 = new HAnimJoint();
HAnimJoint86->setName("r_tarsometatarsal_5");
HAnimJoint86->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint86->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName("r_metatarsophalangeal_5");
HAnimJoint87->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint87->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint88 = new HAnimJoint();
HAnimJoint88->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint88->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint88->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint89 = new HAnimJoint();
HAnimJoint89->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint89->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint89->setCenter(new float[3]{0,1,0});
HAnimJoint88->addChild(HAnimJoint89);

HAnimJoint87->addChild(HAnimJoint88);

HAnimJoint86->addChild(HAnimJoint87);

HAnimJoint81->addChild(HAnimJoint86);

HAnimJoint80->addChild(HAnimJoint81);

HAnimJoint64->addChild(HAnimJoint80);

HAnimJoint63->addChild(HAnimJoint64);

HAnimJoint62->addChild(HAnimJoint63);

HAnimJoint33->addChild(HAnimJoint62);

HAnimJoint32->addChild(HAnimJoint33);

HAnimJoint* HAnimJoint90 = new HAnimJoint();
HAnimJoint90->setName("vl5");
HAnimJoint90->setDEF("hanim_vl5");
HAnimJoint90->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName("vl4");
HAnimJoint91->setDEF("hanim_vl4");
HAnimJoint91->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint* HAnimJoint92 = new HAnimJoint();
HAnimJoint92->setName("vl3");
HAnimJoint92->setDEF("hanim_vl3");
HAnimJoint92->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint* HAnimJoint93 = new HAnimJoint();
HAnimJoint93->setName("vl2");
HAnimJoint93->setDEF("hanim_vl2");
HAnimJoint93->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint* HAnimJoint94 = new HAnimJoint();
HAnimJoint94->setName("vl1");
HAnimJoint94->setDEF("hanim_vl1");
HAnimJoint94->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint* HAnimJoint95 = new HAnimJoint();
HAnimJoint95->setName("vt12");
HAnimJoint95->setDEF("hanim_vt12");
HAnimJoint95->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName("vt11");
HAnimJoint96->setDEF("hanim_vt11");
HAnimJoint96->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint* HAnimJoint97 = new HAnimJoint();
HAnimJoint97->setName("vt10");
HAnimJoint97->setDEF("hanim_vt10");
HAnimJoint97->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint* HAnimJoint98 = new HAnimJoint();
HAnimJoint98->setName("vt9");
HAnimJoint98->setDEF("hanim_vt9");
HAnimJoint98->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint* HAnimJoint99 = new HAnimJoint();
HAnimJoint99->setName("vt8");
HAnimJoint99->setDEF("hanim_vt8");
HAnimJoint99->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName("vt7");
HAnimJoint100->setDEF("hanim_vt7");
HAnimJoint100->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint* HAnimJoint101 = new HAnimJoint();
HAnimJoint101->setName("vt6");
HAnimJoint101->setDEF("hanim_vt6");
HAnimJoint101->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint* HAnimJoint102 = new HAnimJoint();
HAnimJoint102->setName("vt5");
HAnimJoint102->setDEF("hanim_vt5");
HAnimJoint102->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint* HAnimJoint103 = new HAnimJoint();
HAnimJoint103->setName("vt4");
HAnimJoint103->setDEF("hanim_vt4");
HAnimJoint103->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint* HAnimJoint104 = new HAnimJoint();
HAnimJoint104->setName("vt3");
HAnimJoint104->setDEF("hanim_vt3");
HAnimJoint104->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint* HAnimJoint105 = new HAnimJoint();
HAnimJoint105->setName("vt2");
HAnimJoint105->setDEF("hanim_vt2");
HAnimJoint105->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint* HAnimJoint106 = new HAnimJoint();
HAnimJoint106->setName("vt1");
HAnimJoint106->setDEF("hanim_vt1");
HAnimJoint106->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint* HAnimJoint107 = new HAnimJoint();
HAnimJoint107->setName("vc7");
HAnimJoint107->setDEF("hanim_vc7");
HAnimJoint107->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint* HAnimJoint108 = new HAnimJoint();
HAnimJoint108->setName("vc6");
HAnimJoint108->setDEF("hanim_vc6");
HAnimJoint108->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName("vc5");
HAnimJoint109->setDEF("hanim_vc5");
HAnimJoint109->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint* HAnimJoint110 = new HAnimJoint();
HAnimJoint110->setName("vc4");
HAnimJoint110->setDEF("hanim_vc4");
HAnimJoint110->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint* HAnimJoint111 = new HAnimJoint();
HAnimJoint111->setName("vc3");
HAnimJoint111->setDEF("hanim_vc3");
HAnimJoint111->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint* HAnimJoint112 = new HAnimJoint();
HAnimJoint112->setName("vc2");
HAnimJoint112->setDEF("hanim_vc2");
HAnimJoint112->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint* HAnimJoint113 = new HAnimJoint();
HAnimJoint113->setName("vc1");
HAnimJoint113->setDEF("hanim_vc1");
HAnimJoint113->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName("skullbase");
HAnimJoint114->setDEF("hanim_skullbase");
HAnimJoint114->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint* HAnimJoint115 = new HAnimJoint();
HAnimJoint115->setName("l_eyelid_joint");
HAnimJoint115->setDEF("hanim_l_eyelid_joint");
HAnimJoint115->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint115);

HAnimJoint* HAnimJoint116 = new HAnimJoint();
HAnimJoint116->setName("r_eyelid_joint");
HAnimJoint116->setDEF("hanim_r_eyelid_joint");
HAnimJoint116->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint116);

HAnimJoint* HAnimJoint117 = new HAnimJoint();
HAnimJoint117->setName("l_eyeball_joint");
HAnimJoint117->setDEF("hanim_l_eyeball_joint");
HAnimJoint117->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint117);

HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName("r_eyeball_joint");
HAnimJoint118->setDEF("hanim_r_eyeball_joint");
HAnimJoint118->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint118);

HAnimJoint* HAnimJoint119 = new HAnimJoint();
HAnimJoint119->setName("l_eyebrow_joint");
HAnimJoint119->setDEF("hanim_l_eyebrow_joint");
HAnimJoint119->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint119);

HAnimJoint* HAnimJoint120 = new HAnimJoint();
HAnimJoint120->setName("r_eyebrow_joint");
HAnimJoint120->setDEF("hanim_r_eyebrow_joint");
HAnimJoint120->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint120);

HAnimJoint* HAnimJoint121 = new HAnimJoint();
HAnimJoint121->setName("temporomandibular");
HAnimJoint121->setDEF("hanim_temporomandibular");
HAnimJoint121->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint121);

HAnimJoint113->addChild(HAnimJoint114);

HAnimJoint112->addChild(HAnimJoint113);

HAnimJoint111->addChild(HAnimJoint112);

HAnimJoint110->addChild(HAnimJoint111);

HAnimJoint109->addChild(HAnimJoint110);

HAnimJoint108->addChild(HAnimJoint109);

HAnimJoint107->addChild(HAnimJoint108);

HAnimJoint106->addChild(HAnimJoint107);

HAnimJoint* HAnimJoint122 = new HAnimJoint();
HAnimJoint122->setName("l_sternoclavicular");
HAnimJoint122->setDEF("hanim_l_sternoclavicular");
HAnimJoint122->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint* HAnimJoint123 = new HAnimJoint();
HAnimJoint123->setName("l_acromioclavicular");
HAnimJoint123->setDEF("hanim_l_acromioclavicular");
HAnimJoint123->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint* HAnimJoint124 = new HAnimJoint();
HAnimJoint124->setName("l_shoulder");
HAnimJoint124->setDEF("hanim_l_shoulder");
HAnimJoint124->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint* HAnimJoint125 = new HAnimJoint();
HAnimJoint125->setName("l_elbow");
HAnimJoint125->setDEF("hanim_l_elbow");
HAnimJoint125->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint* HAnimJoint126 = new HAnimJoint();
HAnimJoint126->setName("l_radiocarpal");
HAnimJoint126->setDEF("hanim_l_radiocarpal");
HAnimJoint126->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName("l_midcarpal_1");
HAnimJoint127->setDEF("hanim_l_midcarpal_1");
HAnimJoint127->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint128 = new HAnimJoint();
HAnimJoint128->setName("l_carpometacarpal_1");
HAnimJoint128->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint128->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint* HAnimJoint129 = new HAnimJoint();
HAnimJoint129->setName("l_metacarpophalangeal_1");
HAnimJoint129->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint129->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint* HAnimJoint130 = new HAnimJoint();
HAnimJoint130->setName("l_carpal_interphalangeal_1");
HAnimJoint130->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint130->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint129->addChild(HAnimJoint130);

HAnimJoint128->addChild(HAnimJoint129);

HAnimJoint127->addChild(HAnimJoint128);

HAnimJoint126->addChild(HAnimJoint127);

HAnimJoint* HAnimJoint131 = new HAnimJoint();
HAnimJoint131->setName("l_midcarpal_2");
HAnimJoint131->setDEF("hanim_l_midcarpal_2");
HAnimJoint131->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint132 = new HAnimJoint();
HAnimJoint132->setName("l_carpometacarpal_2");
HAnimJoint132->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint132->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint* HAnimJoint133 = new HAnimJoint();
HAnimJoint133->setName("l_metacarpophalangeal_2");
HAnimJoint133->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint133->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint* HAnimJoint134 = new HAnimJoint();
HAnimJoint134->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint134->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint134->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint* HAnimJoint135 = new HAnimJoint();
HAnimJoint135->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint135->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint135->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint134->addChild(HAnimJoint135);

HAnimJoint133->addChild(HAnimJoint134);

HAnimJoint132->addChild(HAnimJoint133);

HAnimJoint131->addChild(HAnimJoint132);

HAnimJoint126->addChild(HAnimJoint131);

HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName("l_midcarpal_3");
HAnimJoint136->setDEF("hanim_l_midcarpal_3");
HAnimJoint136->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint137 = new HAnimJoint();
HAnimJoint137->setName("l_carpometacarpal_3");
HAnimJoint137->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint137->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint* HAnimJoint138 = new HAnimJoint();
HAnimJoint138->setName("l_metacarpophalangeal_3");
HAnimJoint138->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint138->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint* HAnimJoint139 = new HAnimJoint();
HAnimJoint139->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint139->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint139->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint* HAnimJoint140 = new HAnimJoint();
HAnimJoint140->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint140->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint140->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint139->addChild(HAnimJoint140);

HAnimJoint138->addChild(HAnimJoint139);

HAnimJoint137->addChild(HAnimJoint138);

HAnimJoint136->addChild(HAnimJoint137);

HAnimJoint126->addChild(HAnimJoint136);

HAnimJoint* HAnimJoint141 = new HAnimJoint();
HAnimJoint141->setName("l_midcarpal_4_5");
HAnimJoint141->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint141->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint142 = new HAnimJoint();
HAnimJoint142->setName("l_carpometacarpal_4");
HAnimJoint142->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint142->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint* HAnimJoint143 = new HAnimJoint();
HAnimJoint143->setName("l_metacarpophalangeal_4");
HAnimJoint143->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint143->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint* HAnimJoint144 = new HAnimJoint();
HAnimJoint144->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint144->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint144->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint* HAnimJoint145 = new HAnimJoint();
HAnimJoint145->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint145->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint145->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint144->addChild(HAnimJoint145);

HAnimJoint143->addChild(HAnimJoint144);

HAnimJoint142->addChild(HAnimJoint143);

HAnimJoint141->addChild(HAnimJoint142);

HAnimJoint* HAnimJoint146 = new HAnimJoint();
HAnimJoint146->setName("l_carpometacarpal_5");
HAnimJoint146->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint146->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint* HAnimJoint147 = new HAnimJoint();
HAnimJoint147->setName("l_metacarpophalangeal_5");
HAnimJoint147->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint147->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint* HAnimJoint148 = new HAnimJoint();
HAnimJoint148->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint148->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint148->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint* HAnimJoint149 = new HAnimJoint();
HAnimJoint149->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint149->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint149->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint148->addChild(HAnimJoint149);

HAnimJoint147->addChild(HAnimJoint148);

HAnimJoint146->addChild(HAnimJoint147);

HAnimJoint141->addChild(HAnimJoint146);

HAnimJoint126->addChild(HAnimJoint141);

HAnimJoint125->addChild(HAnimJoint126);

HAnimJoint124->addChild(HAnimJoint125);

HAnimJoint123->addChild(HAnimJoint124);

HAnimJoint122->addChild(HAnimJoint123);

HAnimJoint106->addChild(HAnimJoint122);

HAnimJoint* HAnimJoint150 = new HAnimJoint();
HAnimJoint150->setName("r_sternoclavicular");
HAnimJoint150->setDEF("hanim_r_sternoclavicular");
HAnimJoint150->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint* HAnimJoint151 = new HAnimJoint();
HAnimJoint151->setName("r_acromioclavicular");
HAnimJoint151->setDEF("hanim_r_acromioclavicular");
HAnimJoint151->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint* HAnimJoint152 = new HAnimJoint();
HAnimJoint152->setName("r_shoulder");
HAnimJoint152->setDEF("hanim_r_shoulder");
HAnimJoint152->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint* HAnimJoint153 = new HAnimJoint();
HAnimJoint153->setName("r_elbow");
HAnimJoint153->setDEF("hanim_r_elbow");
HAnimJoint153->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName("r_radiocarpal");
HAnimJoint154->setDEF("hanim_r_radiocarpal");
HAnimJoint154->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint* HAnimJoint155 = new HAnimJoint();
HAnimJoint155->setName("r_midcarpal_1");
HAnimJoint155->setDEF("hanim_r_midcarpal_1");
HAnimJoint155->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint156 = new HAnimJoint();
HAnimJoint156->setName("r_carpometacarpal_1");
HAnimJoint156->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint156->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint* HAnimJoint157 = new HAnimJoint();
HAnimJoint157->setName("r_metacarpophalangeal_1");
HAnimJoint157->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint157->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint* HAnimJoint158 = new HAnimJoint();
HAnimJoint158->setName("r_carpal_interphalangeal_1");
HAnimJoint158->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint158->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint157->addChild(HAnimJoint158);

HAnimJoint156->addChild(HAnimJoint157);

HAnimJoint155->addChild(HAnimJoint156);

HAnimJoint154->addChild(HAnimJoint155);

HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setName("r_midcarpal_2");
HAnimJoint159->setDEF("hanim_r_midcarpal_2");
HAnimJoint159->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint160 = new HAnimJoint();
HAnimJoint160->setName("r_carpometacarpal_2");
HAnimJoint160->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint160->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint* HAnimJoint161 = new HAnimJoint();
HAnimJoint161->setName("r_metacarpophalangeal_2");
HAnimJoint161->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint161->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint* HAnimJoint162 = new HAnimJoint();
HAnimJoint162->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint162->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint162->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint163->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint163->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint162->addChild(HAnimJoint163);

HAnimJoint161->addChild(HAnimJoint162);

HAnimJoint160->addChild(HAnimJoint161);

HAnimJoint159->addChild(HAnimJoint160);

HAnimJoint154->addChild(HAnimJoint159);

HAnimJoint* HAnimJoint164 = new HAnimJoint();
HAnimJoint164->setName("r_midcarpal_3");
HAnimJoint164->setDEF("hanim_r_midcarpal_3");
HAnimJoint164->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint165 = new HAnimJoint();
HAnimJoint165->setName("r_carpometacarpal_3");
HAnimJoint165->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint165->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint* HAnimJoint166 = new HAnimJoint();
HAnimJoint166->setName("r_metacarpophalangeal_3");
HAnimJoint166->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint166->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint* HAnimJoint167 = new HAnimJoint();
HAnimJoint167->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint167->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint167->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint* HAnimJoint168 = new HAnimJoint();
HAnimJoint168->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint168->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint168->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint167->addChild(HAnimJoint168);

HAnimJoint166->addChild(HAnimJoint167);

HAnimJoint165->addChild(HAnimJoint166);

HAnimJoint164->addChild(HAnimJoint165);

HAnimJoint154->addChild(HAnimJoint164);

HAnimJoint* HAnimJoint169 = new HAnimJoint();
HAnimJoint169->setName("r_midcarpal_4_5");
HAnimJoint169->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint169->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint170 = new HAnimJoint();
HAnimJoint170->setName("r_carpometacarpal_4");
HAnimJoint170->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint170->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint* HAnimJoint171 = new HAnimJoint();
HAnimJoint171->setName("r_metacarpophalangeal_4");
HAnimJoint171->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint171->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint172->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint172->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint* HAnimJoint173 = new HAnimJoint();
HAnimJoint173->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint173->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint173->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint172->addChild(HAnimJoint173);

HAnimJoint171->addChild(HAnimJoint172);

HAnimJoint170->addChild(HAnimJoint171);

HAnimJoint169->addChild(HAnimJoint170);

HAnimJoint* HAnimJoint174 = new HAnimJoint();
HAnimJoint174->setName("r_carpometacarpal_5");
HAnimJoint174->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint174->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint* HAnimJoint175 = new HAnimJoint();
HAnimJoint175->setName("r_metacarpophalangeal_5");
HAnimJoint175->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint175->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint* HAnimJoint176 = new HAnimJoint();
HAnimJoint176->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint176->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint176->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint* HAnimJoint177 = new HAnimJoint();
HAnimJoint177->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint177->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint177->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint176->addChild(HAnimJoint177);

HAnimJoint175->addChild(HAnimJoint176);

HAnimJoint174->addChild(HAnimJoint175);

HAnimJoint169->addChild(HAnimJoint174);

HAnimJoint154->addChild(HAnimJoint169);

HAnimJoint153->addChild(HAnimJoint154);

HAnimJoint152->addChild(HAnimJoint153);

HAnimJoint151->addChild(HAnimJoint152);

HAnimJoint150->addChild(HAnimJoint151);

HAnimJoint106->addChild(HAnimJoint150);

HAnimJoint105->addChild(HAnimJoint106);

HAnimJoint104->addChild(HAnimJoint105);

HAnimJoint103->addChild(HAnimJoint104);

HAnimJoint102->addChild(HAnimJoint103);

HAnimJoint101->addChild(HAnimJoint102);

HAnimJoint100->addChild(HAnimJoint101);

HAnimJoint99->addChild(HAnimJoint100);

HAnimJoint98->addChild(HAnimJoint99);

HAnimJoint97->addChild(HAnimJoint98);

HAnimJoint96->addChild(HAnimJoint97);

HAnimJoint95->addChild(HAnimJoint96);

HAnimJoint94->addChild(HAnimJoint95);

HAnimJoint93->addChild(HAnimJoint94);

HAnimJoint92->addChild(HAnimJoint93);

HAnimJoint91->addChild(HAnimJoint92);

HAnimJoint90->addChild(HAnimJoint91);

HAnimJoint32->addChild(HAnimJoint90);

HAnimHumanoid31->setSkeleton(HAnimJoint32);

HAnimJoint* HAnimJoint178 = new HAnimJoint();
HAnimJoint178->setUSE("hanim_humanoid_root");
HAnimHumanoid31->addJoints(HAnimJoint178);

HAnimJoint* HAnimJoint179 = new HAnimJoint();
HAnimJoint179->setUSE("hanim_sacroiliac");
HAnimHumanoid31->addJoints(HAnimJoint179);

HAnimJoint* HAnimJoint180 = new HAnimJoint();
HAnimJoint180->setUSE("hanim_l_hip");
HAnimHumanoid31->addJoints(HAnimJoint180);

HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setUSE("hanim_l_knee");
HAnimHumanoid31->addJoints(HAnimJoint181);

HAnimJoint* HAnimJoint182 = new HAnimJoint();
HAnimJoint182->setUSE("hanim_l_talocrural");
HAnimHumanoid31->addJoints(HAnimJoint182);

HAnimJoint* HAnimJoint183 = new HAnimJoint();
HAnimJoint183->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid31->addJoints(HAnimJoint183);

HAnimJoint* HAnimJoint184 = new HAnimJoint();
HAnimJoint184->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid31->addJoints(HAnimJoint184);

HAnimJoint* HAnimJoint185 = new HAnimJoint();
HAnimJoint185->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid31->addJoints(HAnimJoint185);

HAnimJoint* HAnimJoint186 = new HAnimJoint();
HAnimJoint186->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint186);

HAnimJoint* HAnimJoint187 = new HAnimJoint();
HAnimJoint187->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint187);

HAnimJoint* HAnimJoint188 = new HAnimJoint();
HAnimJoint188->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid31->addJoints(HAnimJoint188);

HAnimJoint* HAnimJoint189 = new HAnimJoint();
HAnimJoint189->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid31->addJoints(HAnimJoint189);

HAnimJoint* HAnimJoint190 = new HAnimJoint();
HAnimJoint190->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint190);

HAnimJoint* HAnimJoint191 = new HAnimJoint();
HAnimJoint191->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint191);

HAnimJoint* HAnimJoint192 = new HAnimJoint();
HAnimJoint192->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint192);

HAnimJoint* HAnimJoint193 = new HAnimJoint();
HAnimJoint193->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid31->addJoints(HAnimJoint193);

HAnimJoint* HAnimJoint194 = new HAnimJoint();
HAnimJoint194->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid31->addJoints(HAnimJoint194);

HAnimJoint* HAnimJoint195 = new HAnimJoint();
HAnimJoint195->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint195);

HAnimJoint* HAnimJoint196 = new HAnimJoint();
HAnimJoint196->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint196);

HAnimJoint* HAnimJoint197 = new HAnimJoint();
HAnimJoint197->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint197);

HAnimJoint* HAnimJoint198 = new HAnimJoint();
HAnimJoint198->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid31->addJoints(HAnimJoint198);

HAnimJoint* HAnimJoint199 = new HAnimJoint();
HAnimJoint199->setUSE("hanim_l_transversetarsal");
HAnimHumanoid31->addJoints(HAnimJoint199);

HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid31->addJoints(HAnimJoint200);

HAnimJoint* HAnimJoint201 = new HAnimJoint();
HAnimJoint201->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint201);

HAnimJoint* HAnimJoint202 = new HAnimJoint();
HAnimJoint202->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint202);

HAnimJoint* HAnimJoint203 = new HAnimJoint();
HAnimJoint203->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint203);

HAnimJoint* HAnimJoint204 = new HAnimJoint();
HAnimJoint204->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid31->addJoints(HAnimJoint204);

HAnimJoint* HAnimJoint205 = new HAnimJoint();
HAnimJoint205->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint205);

HAnimJoint* HAnimJoint206 = new HAnimJoint();
HAnimJoint206->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint206);

HAnimJoint* HAnimJoint207 = new HAnimJoint();
HAnimJoint207->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint207);

HAnimJoint* HAnimJoint208 = new HAnimJoint();
HAnimJoint208->setUSE("hanim_r_hip");
HAnimHumanoid31->addJoints(HAnimJoint208);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setUSE("hanim_r_knee");
HAnimHumanoid31->addJoints(HAnimJoint209);

HAnimJoint* HAnimJoint210 = new HAnimJoint();
HAnimJoint210->setUSE("hanim_r_talocrural");
HAnimHumanoid31->addJoints(HAnimJoint210);

HAnimJoint* HAnimJoint211 = new HAnimJoint();
HAnimJoint211->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid31->addJoints(HAnimJoint211);

HAnimJoint* HAnimJoint212 = new HAnimJoint();
HAnimJoint212->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid31->addJoints(HAnimJoint212);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid31->addJoints(HAnimJoint213);

HAnimJoint* HAnimJoint214 = new HAnimJoint();
HAnimJoint214->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint214);

HAnimJoint* HAnimJoint215 = new HAnimJoint();
HAnimJoint215->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint215);

HAnimJoint* HAnimJoint216 = new HAnimJoint();
HAnimJoint216->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid31->addJoints(HAnimJoint216);

HAnimJoint* HAnimJoint217 = new HAnimJoint();
HAnimJoint217->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid31->addJoints(HAnimJoint217);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint218);

HAnimJoint* HAnimJoint219 = new HAnimJoint();
HAnimJoint219->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint219);

HAnimJoint* HAnimJoint220 = new HAnimJoint();
HAnimJoint220->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint220);

HAnimJoint* HAnimJoint221 = new HAnimJoint();
HAnimJoint221->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid31->addJoints(HAnimJoint221);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid31->addJoints(HAnimJoint222);

HAnimJoint* HAnimJoint223 = new HAnimJoint();
HAnimJoint223->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint223);

HAnimJoint* HAnimJoint224 = new HAnimJoint();
HAnimJoint224->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint224);

HAnimJoint* HAnimJoint225 = new HAnimJoint();
HAnimJoint225->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint225);

HAnimJoint* HAnimJoint226 = new HAnimJoint();
HAnimJoint226->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid31->addJoints(HAnimJoint226);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setUSE("hanim_r_transversetarsal");
HAnimHumanoid31->addJoints(HAnimJoint227);

HAnimJoint* HAnimJoint228 = new HAnimJoint();
HAnimJoint228->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid31->addJoints(HAnimJoint228);

HAnimJoint* HAnimJoint229 = new HAnimJoint();
HAnimJoint229->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint229);

HAnimJoint* HAnimJoint230 = new HAnimJoint();
HAnimJoint230->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint230);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint231);

HAnimJoint* HAnimJoint232 = new HAnimJoint();
HAnimJoint232->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid31->addJoints(HAnimJoint232);

HAnimJoint* HAnimJoint233 = new HAnimJoint();
HAnimJoint233->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint233);

HAnimJoint* HAnimJoint234 = new HAnimJoint();
HAnimJoint234->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint234);

HAnimJoint* HAnimJoint235 = new HAnimJoint();
HAnimJoint235->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint235);

HAnimJoint* HAnimJoint236 = new HAnimJoint();
HAnimJoint236->setUSE("hanim_vl5");
HAnimHumanoid31->addJoints(HAnimJoint236);

HAnimJoint* HAnimJoint237 = new HAnimJoint();
HAnimJoint237->setUSE("hanim_vl4");
HAnimHumanoid31->addJoints(HAnimJoint237);

HAnimJoint* HAnimJoint238 = new HAnimJoint();
HAnimJoint238->setUSE("hanim_vl3");
HAnimHumanoid31->addJoints(HAnimJoint238);

HAnimJoint* HAnimJoint239 = new HAnimJoint();
HAnimJoint239->setUSE("hanim_vl2");
HAnimHumanoid31->addJoints(HAnimJoint239);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setUSE("hanim_vl1");
HAnimHumanoid31->addJoints(HAnimJoint240);

HAnimJoint* HAnimJoint241 = new HAnimJoint();
HAnimJoint241->setUSE("hanim_vt12");
HAnimHumanoid31->addJoints(HAnimJoint241);

HAnimJoint* HAnimJoint242 = new HAnimJoint();
HAnimJoint242->setUSE("hanim_vt11");
HAnimHumanoid31->addJoints(HAnimJoint242);

HAnimJoint* HAnimJoint243 = new HAnimJoint();
HAnimJoint243->setUSE("hanim_vt10");
HAnimHumanoid31->addJoints(HAnimJoint243);

HAnimJoint* HAnimJoint244 = new HAnimJoint();
HAnimJoint244->setUSE("hanim_vt9");
HAnimHumanoid31->addJoints(HAnimJoint244);

HAnimJoint* HAnimJoint245 = new HAnimJoint();
HAnimJoint245->setUSE("hanim_vt8");
HAnimHumanoid31->addJoints(HAnimJoint245);

HAnimJoint* HAnimJoint246 = new HAnimJoint();
HAnimJoint246->setUSE("hanim_vt7");
HAnimHumanoid31->addJoints(HAnimJoint246);

HAnimJoint* HAnimJoint247 = new HAnimJoint();
HAnimJoint247->setUSE("hanim_vt6");
HAnimHumanoid31->addJoints(HAnimJoint247);

HAnimJoint* HAnimJoint248 = new HAnimJoint();
HAnimJoint248->setUSE("hanim_vt5");
HAnimHumanoid31->addJoints(HAnimJoint248);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setUSE("hanim_vt4");
HAnimHumanoid31->addJoints(HAnimJoint249);

HAnimJoint* HAnimJoint250 = new HAnimJoint();
HAnimJoint250->setUSE("hanim_vt3");
HAnimHumanoid31->addJoints(HAnimJoint250);

HAnimJoint* HAnimJoint251 = new HAnimJoint();
HAnimJoint251->setUSE("hanim_vt2");
HAnimHumanoid31->addJoints(HAnimJoint251);

HAnimJoint* HAnimJoint252 = new HAnimJoint();
HAnimJoint252->setUSE("hanim_vt1");
HAnimHumanoid31->addJoints(HAnimJoint252);

HAnimJoint* HAnimJoint253 = new HAnimJoint();
HAnimJoint253->setUSE("hanim_vc7");
HAnimHumanoid31->addJoints(HAnimJoint253);

HAnimJoint* HAnimJoint254 = new HAnimJoint();
HAnimJoint254->setUSE("hanim_vc6");
HAnimHumanoid31->addJoints(HAnimJoint254);

HAnimJoint* HAnimJoint255 = new HAnimJoint();
HAnimJoint255->setUSE("hanim_vc5");
HAnimHumanoid31->addJoints(HAnimJoint255);

HAnimJoint* HAnimJoint256 = new HAnimJoint();
HAnimJoint256->setUSE("hanim_vc4");
HAnimHumanoid31->addJoints(HAnimJoint256);

HAnimJoint* HAnimJoint257 = new HAnimJoint();
HAnimJoint257->setUSE("hanim_vc3");
HAnimHumanoid31->addJoints(HAnimJoint257);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setUSE("hanim_vc2");
HAnimHumanoid31->addJoints(HAnimJoint258);

HAnimJoint* HAnimJoint259 = new HAnimJoint();
HAnimJoint259->setUSE("hanim_vc1");
HAnimHumanoid31->addJoints(HAnimJoint259);

HAnimJoint* HAnimJoint260 = new HAnimJoint();
HAnimJoint260->setUSE("hanim_skullbase");
HAnimHumanoid31->addJoints(HAnimJoint260);

HAnimJoint* HAnimJoint261 = new HAnimJoint();
HAnimJoint261->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid31->addJoints(HAnimJoint261);

HAnimJoint* HAnimJoint262 = new HAnimJoint();
HAnimJoint262->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid31->addJoints(HAnimJoint262);

HAnimJoint* HAnimJoint263 = new HAnimJoint();
HAnimJoint263->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid31->addJoints(HAnimJoint263);

HAnimJoint* HAnimJoint264 = new HAnimJoint();
HAnimJoint264->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid31->addJoints(HAnimJoint264);

HAnimJoint* HAnimJoint265 = new HAnimJoint();
HAnimJoint265->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid31->addJoints(HAnimJoint265);

HAnimJoint* HAnimJoint266 = new HAnimJoint();
HAnimJoint266->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid31->addJoints(HAnimJoint266);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setUSE("hanim_temporomandibular");
HAnimHumanoid31->addJoints(HAnimJoint267);

HAnimJoint* HAnimJoint268 = new HAnimJoint();
HAnimJoint268->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid31->addJoints(HAnimJoint268);

HAnimJoint* HAnimJoint269 = new HAnimJoint();
HAnimJoint269->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid31->addJoints(HAnimJoint269);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setUSE("hanim_l_shoulder");
HAnimHumanoid31->addJoints(HAnimJoint270);

HAnimJoint* HAnimJoint271 = new HAnimJoint();
HAnimJoint271->setUSE("hanim_l_elbow");
HAnimHumanoid31->addJoints(HAnimJoint271);

HAnimJoint* HAnimJoint272 = new HAnimJoint();
HAnimJoint272->setUSE("hanim_l_radiocarpal");
HAnimHumanoid31->addJoints(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid31->addJoints(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid31->addJoints(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid31->addJoints(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid31->addJoints(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid31->addJoints(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid31->addJoints(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid31->addJoints(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid31->addJoints(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid31->addJoints(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid31->addJoints(HAnimJoint296);

HAnimJoint* HAnimJoint297 = new HAnimJoint();
HAnimJoint297->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid31->addJoints(HAnimJoint297);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setUSE("hanim_r_shoulder");
HAnimHumanoid31->addJoints(HAnimJoint298);

HAnimJoint* HAnimJoint299 = new HAnimJoint();
HAnimJoint299->setUSE("hanim_r_elbow");
HAnimHumanoid31->addJoints(HAnimJoint299);

HAnimJoint* HAnimJoint300 = new HAnimJoint();
HAnimJoint300->setUSE("hanim_r_radiocarpal");
HAnimHumanoid31->addJoints(HAnimJoint300);

HAnimJoint* HAnimJoint301 = new HAnimJoint();
HAnimJoint301->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid31->addJoints(HAnimJoint301);

HAnimJoint* HAnimJoint302 = new HAnimJoint();
HAnimJoint302->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid31->addJoints(HAnimJoint302);

HAnimJoint* HAnimJoint303 = new HAnimJoint();
HAnimJoint303->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint303);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid31->addJoints(HAnimJoint304);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid31->addJoints(HAnimJoint305);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid31->addJoints(HAnimJoint306);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint307);

HAnimJoint* HAnimJoint308 = new HAnimJoint();
HAnimJoint308->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint308);

HAnimJoint* HAnimJoint309 = new HAnimJoint();
HAnimJoint309->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(HAnimJoint309);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid31->addJoints(HAnimJoint310);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid31->addJoints(HAnimJoint311);

HAnimJoint* HAnimJoint312 = new HAnimJoint();
HAnimJoint312->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint312);

HAnimJoint* HAnimJoint313 = new HAnimJoint();
HAnimJoint313->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint313);

HAnimJoint* HAnimJoint314 = new HAnimJoint();
HAnimJoint314->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(HAnimJoint314);

HAnimJoint* HAnimJoint315 = new HAnimJoint();
HAnimJoint315->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid31->addJoints(HAnimJoint315);

HAnimJoint* HAnimJoint316 = new HAnimJoint();
HAnimJoint316->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid31->addJoints(HAnimJoint316);

HAnimJoint* HAnimJoint317 = new HAnimJoint();
HAnimJoint317->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint317);

HAnimJoint* HAnimJoint318 = new HAnimJoint();
HAnimJoint318->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint318);

HAnimJoint* HAnimJoint319 = new HAnimJoint();
HAnimJoint319->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(HAnimJoint319);

HAnimJoint* HAnimJoint320 = new HAnimJoint();
HAnimJoint320->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid31->addJoints(HAnimJoint320);

HAnimJoint* HAnimJoint321 = new HAnimJoint();
HAnimJoint321->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint321);

HAnimJoint* HAnimJoint322 = new HAnimJoint();
HAnimJoint322->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint322);

HAnimJoint* HAnimJoint323 = new HAnimJoint();
HAnimJoint323->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(HAnimJoint323);

Scene11->addChild(HAnimHumanoid31);

X3D0->setScene(Scene11);

X3D0->toXMLString();
}
