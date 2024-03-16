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
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("HAnim"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("JohnJoint2.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("identifier"));
meta4->setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("description"));
meta5->setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("generator"));
meta6->setContent(CString("h2.pl"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("modified"));
meta7->setContent(CString("14 Jan 2023"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("creator"));
meta8->setContent(CString("John Carlson"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("created"));
meta9->setContent(CString("9 November 2020"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("license"));
meta10->setContent(CString("../license.html"));
head1->addMeta(meta10);

X3D0->setHead(head1);

Scene* Scene11 = new Scene();
Transform* Transform12 = new Transform();
//DEF for markerfor XYZ axes
Shape* Shape13 = new Shape();
Shape13->setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet* IndexedLineSet14 = new IndexedLineSet();
IndexedLineSet14->setColorIndex(new int[3]{0,1,2}, 3);
IndexedLineSet14->setColorPerVertex(False);
IndexedLineSet14->setCoordIndex(new int32_t[9]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate* Coordinate15 = new Coordinate();
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1}, 12);
IndexedLineSet14->addChild(Coordinate15);

CColor* Color16 = new CColor();
Color16->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet14->addChild(Color16);

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
Shape20->setDEF(CString("HAnimJointShape"));
Sphere* Sphere21 = new Sphere();
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDEF(CString("HAnimJointMaterial"));
Material23->setDiffuseColor(new float[3]{0,0,0.8});
Material23->setTransparency(0.3);
Appearance22->addChild(Material23);

Shape20->addChild(Appearance22);

Transform19->addChild(Shape20);

Transform18->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{0,2.05,0});
Shape* Shape25 = new Shape();
Shape25->setDEF(CString("HAnimSegmentLine"));
LineSet* LineSet26 = new LineSet();
LineSet26->setVertexCount(new int32_t[1]{2}, 1);
ColorRGBA* ColorRGBA27 = new ColorRGBA();
ColorRGBA27->setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA27->setColor(new float[8]{1,1,0,1,1,1,0,0.1}, 8);
LineSet26->addChild(ColorRGBA27);

Coordinate* Coordinate28 = new Coordinate();
Coordinate28->setPoint(new float[6]{-0.05,0,0,0.05,0,0}, 6);
LineSet26->addChild(Coordinate28);

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
Viewpoint30->setDescription(CString("default"));
Scene11->addChild(Viewpoint30);

HAnimHumanoid* HAnimHumanoid31 = new HAnimHumanoid();
HAnimHumanoid31->setName(CString("HAnim"));
HAnimHumanoid31->setDEF(CString("hanim_HAnim"));
HAnimHumanoid31->setInfo(new CString[1]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid31->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint32 = new HAnimJoint();
HAnimJoint32->setName(CString("humanoid_root"));
HAnimJoint32->setDEF(CString("hanim_humanoid_root"));
HAnimJoint32->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint* HAnimJoint33 = new HAnimJoint();
HAnimJoint33->setName(CString("sacroiliac"));
HAnimJoint33->setDEF(CString("hanim_sacroiliac"));
HAnimJoint33->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint* HAnimJoint34 = new HAnimJoint();
HAnimJoint34->setName(CString("l_hip"));
HAnimJoint34->setDEF(CString("hanim_l_hip"));
HAnimJoint34->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint* HAnimJoint35 = new HAnimJoint();
HAnimJoint35->setName(CString("l_knee"));
HAnimJoint35->setDEF(CString("hanim_l_knee"));
HAnimJoint35->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint* HAnimJoint36 = new HAnimJoint();
HAnimJoint36->setName(CString("l_talocrural"));
HAnimJoint36->setDEF(CString("hanim_l_talocrural"));
HAnimJoint36->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint* HAnimJoint37 = new HAnimJoint();
HAnimJoint37->setName(CString("l_talocalcaneonavicular"));
HAnimJoint37->setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint37->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint38 = new HAnimJoint();
HAnimJoint38->setName(CString("l_cuneonavicular_1"));
HAnimJoint38->setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint38->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint39 = new HAnimJoint();
HAnimJoint39->setName(CString("l_tarsometatarsal_1"));
HAnimJoint39->setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint39->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint40 = new HAnimJoint();
HAnimJoint40->setName(CString("l_metatarsophalangeal_1"));
HAnimJoint40->setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint40->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint41 = new HAnimJoint();
HAnimJoint41->setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint41->setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint41->setCenter(new float[3]{0,1,0});
HAnimJoint40->addChild(HAnimJoint41);

HAnimJoint39->addChild(HAnimJoint40);

HAnimJoint38->addChild(HAnimJoint39);

HAnimJoint37->addChild(HAnimJoint38);

HAnimJoint* HAnimJoint42 = new HAnimJoint();
HAnimJoint42->setName(CString("l_cuneonavicular_2"));
HAnimJoint42->setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint42->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint43 = new HAnimJoint();
HAnimJoint43->setName(CString("l_tarsometatarsal_2"));
HAnimJoint43->setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint43->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint44 = new HAnimJoint();
HAnimJoint44->setName(CString("l_metatarsophalangeal_2"));
HAnimJoint44->setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint44->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint45 = new HAnimJoint();
HAnimJoint45->setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint45->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint45->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint46 = new HAnimJoint();
HAnimJoint46->setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint46->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint46->setCenter(new float[3]{0,1,0});
HAnimJoint45->addChild(HAnimJoint46);

HAnimJoint44->addChild(HAnimJoint45);

HAnimJoint43->addChild(HAnimJoint44);

HAnimJoint42->addChild(HAnimJoint43);

HAnimJoint37->addChild(HAnimJoint42);

HAnimJoint* HAnimJoint47 = new HAnimJoint();
HAnimJoint47->setName(CString("l_cuneonavicular_3"));
HAnimJoint47->setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint47->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint48 = new HAnimJoint();
HAnimJoint48->setName(CString("l_tarsometatarsal_3"));
HAnimJoint48->setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint48->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint49 = new HAnimJoint();
HAnimJoint49->setName(CString("l_metatarsophalangeal_3"));
HAnimJoint49->setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint49->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint50 = new HAnimJoint();
HAnimJoint50->setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint50->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint50->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint51 = new HAnimJoint();
HAnimJoint51->setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint51->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint51->setCenter(new float[3]{0,1,0});
HAnimJoint50->addChild(HAnimJoint51);

HAnimJoint49->addChild(HAnimJoint50);

HAnimJoint48->addChild(HAnimJoint49);

HAnimJoint47->addChild(HAnimJoint48);

HAnimJoint37->addChild(HAnimJoint47);

HAnimJoint36->addChild(HAnimJoint37);

HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName(CString("l_calcaneocuboid"));
HAnimJoint52->setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint52->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint53 = new HAnimJoint();
HAnimJoint53->setName(CString("l_transversetarsal"));
HAnimJoint53->setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint53->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint54 = new HAnimJoint();
HAnimJoint54->setName(CString("l_tarsometatarsal_4"));
HAnimJoint54->setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint54->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint55 = new HAnimJoint();
HAnimJoint55->setName(CString("l_metatarsophalangeal_4"));
HAnimJoint55->setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint55->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint56 = new HAnimJoint();
HAnimJoint56->setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint56->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint56->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint57 = new HAnimJoint();
HAnimJoint57->setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint57->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint57->setCenter(new float[3]{0,1,0});
HAnimJoint56->addChild(HAnimJoint57);

HAnimJoint55->addChild(HAnimJoint56);

HAnimJoint54->addChild(HAnimJoint55);

HAnimJoint53->addChild(HAnimJoint54);

HAnimJoint* HAnimJoint58 = new HAnimJoint();
HAnimJoint58->setName(CString("l_tarsometatarsal_5"));
HAnimJoint58->setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint58->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint59 = new HAnimJoint();
HAnimJoint59->setName(CString("l_metatarsophalangeal_5"));
HAnimJoint59->setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint59->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint60 = new HAnimJoint();
HAnimJoint60->setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint60->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint60->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint61 = new HAnimJoint();
HAnimJoint61->setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint61->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
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
HAnimJoint62->setName(CString("r_hip"));
HAnimJoint62->setDEF(CString("hanim_r_hip"));
HAnimJoint62->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint* HAnimJoint63 = new HAnimJoint();
HAnimJoint63->setName(CString("r_knee"));
HAnimJoint63->setDEF(CString("hanim_r_knee"));
HAnimJoint63->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName(CString("r_talocrural"));
HAnimJoint64->setDEF(CString("hanim_r_talocrural"));
HAnimJoint64->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint* HAnimJoint65 = new HAnimJoint();
HAnimJoint65->setName(CString("r_talocalcaneonavicular"));
HAnimJoint65->setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint65->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint66 = new HAnimJoint();
HAnimJoint66->setName(CString("r_cuneonavicular_1"));
HAnimJoint66->setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint66->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint67 = new HAnimJoint();
HAnimJoint67->setName(CString("r_tarsometatarsal_1"));
HAnimJoint67->setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint67->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint68 = new HAnimJoint();
HAnimJoint68->setName(CString("r_metatarsophalangeal_1"));
HAnimJoint68->setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint68->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint69 = new HAnimJoint();
HAnimJoint69->setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint69->setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint69->setCenter(new float[3]{0,1,0});
HAnimJoint68->addChild(HAnimJoint69);

HAnimJoint67->addChild(HAnimJoint68);

HAnimJoint66->addChild(HAnimJoint67);

HAnimJoint65->addChild(HAnimJoint66);

HAnimJoint* HAnimJoint70 = new HAnimJoint();
HAnimJoint70->setName(CString("r_cuneonavicular_2"));
HAnimJoint70->setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint70->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint71 = new HAnimJoint();
HAnimJoint71->setName(CString("r_tarsometatarsal_2"));
HAnimJoint71->setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint71->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint72 = new HAnimJoint();
HAnimJoint72->setName(CString("r_metatarsophalangeal_2"));
HAnimJoint72->setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint72->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint73->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint73->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint74 = new HAnimJoint();
HAnimJoint74->setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint74->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint74->setCenter(new float[3]{0,1,0});
HAnimJoint73->addChild(HAnimJoint74);

HAnimJoint72->addChild(HAnimJoint73);

HAnimJoint71->addChild(HAnimJoint72);

HAnimJoint70->addChild(HAnimJoint71);

HAnimJoint65->addChild(HAnimJoint70);

HAnimJoint* HAnimJoint75 = new HAnimJoint();
HAnimJoint75->setName(CString("r_cuneonavicular_3"));
HAnimJoint75->setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint75->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint76 = new HAnimJoint();
HAnimJoint76->setName(CString("r_tarsometatarsal_3"));
HAnimJoint76->setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint76->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint77 = new HAnimJoint();
HAnimJoint77->setName(CString("r_metatarsophalangeal_3"));
HAnimJoint77->setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint77->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint78->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint78->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint79 = new HAnimJoint();
HAnimJoint79->setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint79->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint79->setCenter(new float[3]{0,1,0});
HAnimJoint78->addChild(HAnimJoint79);

HAnimJoint77->addChild(HAnimJoint78);

HAnimJoint76->addChild(HAnimJoint77);

HAnimJoint75->addChild(HAnimJoint76);

HAnimJoint65->addChild(HAnimJoint75);

HAnimJoint64->addChild(HAnimJoint65);

HAnimJoint* HAnimJoint80 = new HAnimJoint();
HAnimJoint80->setName(CString("r_calcaneocuboid"));
HAnimJoint80->setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint80->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint81 = new HAnimJoint();
HAnimJoint81->setName(CString("r_transversetarsal"));
HAnimJoint81->setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint81->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName(CString("r_tarsometatarsal_4"));
HAnimJoint82->setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint82->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint83 = new HAnimJoint();
HAnimJoint83->setName(CString("r_metatarsophalangeal_4"));
HAnimJoint83->setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint83->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint84 = new HAnimJoint();
HAnimJoint84->setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint84->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint84->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint85 = new HAnimJoint();
HAnimJoint85->setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint85->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint85->setCenter(new float[3]{0,1,0});
HAnimJoint84->addChild(HAnimJoint85);

HAnimJoint83->addChild(HAnimJoint84);

HAnimJoint82->addChild(HAnimJoint83);

HAnimJoint81->addChild(HAnimJoint82);

HAnimJoint* HAnimJoint86 = new HAnimJoint();
HAnimJoint86->setName(CString("r_tarsometatarsal_5"));
HAnimJoint86->setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint86->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName(CString("r_metatarsophalangeal_5"));
HAnimJoint87->setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint87->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint88 = new HAnimJoint();
HAnimJoint88->setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint88->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint88->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint89 = new HAnimJoint();
HAnimJoint89->setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint89->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
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
HAnimJoint90->setName(CString("vl5"));
HAnimJoint90->setDEF(CString("hanim_vl5"));
HAnimJoint90->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName(CString("vl4"));
HAnimJoint91->setDEF(CString("hanim_vl4"));
HAnimJoint91->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint* HAnimJoint92 = new HAnimJoint();
HAnimJoint92->setName(CString("vl3"));
HAnimJoint92->setDEF(CString("hanim_vl3"));
HAnimJoint92->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint* HAnimJoint93 = new HAnimJoint();
HAnimJoint93->setName(CString("vl2"));
HAnimJoint93->setDEF(CString("hanim_vl2"));
HAnimJoint93->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint* HAnimJoint94 = new HAnimJoint();
HAnimJoint94->setName(CString("vl1"));
HAnimJoint94->setDEF(CString("hanim_vl1"));
HAnimJoint94->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint* HAnimJoint95 = new HAnimJoint();
HAnimJoint95->setName(CString("vt12"));
HAnimJoint95->setDEF(CString("hanim_vt12"));
HAnimJoint95->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName(CString("vt11"));
HAnimJoint96->setDEF(CString("hanim_vt11"));
HAnimJoint96->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint* HAnimJoint97 = new HAnimJoint();
HAnimJoint97->setName(CString("vt10"));
HAnimJoint97->setDEF(CString("hanim_vt10"));
HAnimJoint97->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint* HAnimJoint98 = new HAnimJoint();
HAnimJoint98->setName(CString("vt9"));
HAnimJoint98->setDEF(CString("hanim_vt9"));
HAnimJoint98->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint* HAnimJoint99 = new HAnimJoint();
HAnimJoint99->setName(CString("vt8"));
HAnimJoint99->setDEF(CString("hanim_vt8"));
HAnimJoint99->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName(CString("vt7"));
HAnimJoint100->setDEF(CString("hanim_vt7"));
HAnimJoint100->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint* HAnimJoint101 = new HAnimJoint();
HAnimJoint101->setName(CString("vt6"));
HAnimJoint101->setDEF(CString("hanim_vt6"));
HAnimJoint101->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint* HAnimJoint102 = new HAnimJoint();
HAnimJoint102->setName(CString("vt5"));
HAnimJoint102->setDEF(CString("hanim_vt5"));
HAnimJoint102->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint* HAnimJoint103 = new HAnimJoint();
HAnimJoint103->setName(CString("vt4"));
HAnimJoint103->setDEF(CString("hanim_vt4"));
HAnimJoint103->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint* HAnimJoint104 = new HAnimJoint();
HAnimJoint104->setName(CString("vt3"));
HAnimJoint104->setDEF(CString("hanim_vt3"));
HAnimJoint104->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint* HAnimJoint105 = new HAnimJoint();
HAnimJoint105->setName(CString("vt2"));
HAnimJoint105->setDEF(CString("hanim_vt2"));
HAnimJoint105->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint* HAnimJoint106 = new HAnimJoint();
HAnimJoint106->setName(CString("vt1"));
HAnimJoint106->setDEF(CString("hanim_vt1"));
HAnimJoint106->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint* HAnimJoint107 = new HAnimJoint();
HAnimJoint107->setName(CString("vc7"));
HAnimJoint107->setDEF(CString("hanim_vc7"));
HAnimJoint107->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint* HAnimJoint108 = new HAnimJoint();
HAnimJoint108->setName(CString("vc6"));
HAnimJoint108->setDEF(CString("hanim_vc6"));
HAnimJoint108->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName(CString("vc5"));
HAnimJoint109->setDEF(CString("hanim_vc5"));
HAnimJoint109->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint* HAnimJoint110 = new HAnimJoint();
HAnimJoint110->setName(CString("vc4"));
HAnimJoint110->setDEF(CString("hanim_vc4"));
HAnimJoint110->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint* HAnimJoint111 = new HAnimJoint();
HAnimJoint111->setName(CString("vc3"));
HAnimJoint111->setDEF(CString("hanim_vc3"));
HAnimJoint111->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint* HAnimJoint112 = new HAnimJoint();
HAnimJoint112->setName(CString("vc2"));
HAnimJoint112->setDEF(CString("hanim_vc2"));
HAnimJoint112->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint* HAnimJoint113 = new HAnimJoint();
HAnimJoint113->setName(CString("vc1"));
HAnimJoint113->setDEF(CString("hanim_vc1"));
HAnimJoint113->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName(CString("skullbase"));
HAnimJoint114->setDEF(CString("hanim_skullbase"));
HAnimJoint114->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint* HAnimJoint115 = new HAnimJoint();
HAnimJoint115->setName(CString("l_eyelid_joint"));
HAnimJoint115->setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint115->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint115);

HAnimJoint* HAnimJoint116 = new HAnimJoint();
HAnimJoint116->setName(CString("r_eyelid_joint"));
HAnimJoint116->setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint116->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint116);

HAnimJoint* HAnimJoint117 = new HAnimJoint();
HAnimJoint117->setName(CString("l_eyeball_joint"));
HAnimJoint117->setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint117->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint117);

HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName(CString("r_eyeball_joint"));
HAnimJoint118->setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint118->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint118);

HAnimJoint* HAnimJoint119 = new HAnimJoint();
HAnimJoint119->setName(CString("l_eyebrow_joint"));
HAnimJoint119->setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint119->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint119);

HAnimJoint* HAnimJoint120 = new HAnimJoint();
HAnimJoint120->setName(CString("r_eyebrow_joint"));
HAnimJoint120->setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint120->setCenter(new float[3]{0,1,0});
HAnimJoint114->addChild(HAnimJoint120);

HAnimJoint* HAnimJoint121 = new HAnimJoint();
HAnimJoint121->setName(CString("temporomandibular"));
HAnimJoint121->setDEF(CString("hanim_temporomandibular"));
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
HAnimJoint122->setName(CString("l_sternoclavicular"));
HAnimJoint122->setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint122->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint* HAnimJoint123 = new HAnimJoint();
HAnimJoint123->setName(CString("l_acromioclavicular"));
HAnimJoint123->setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint123->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint* HAnimJoint124 = new HAnimJoint();
HAnimJoint124->setName(CString("l_shoulder"));
HAnimJoint124->setDEF(CString("hanim_l_shoulder"));
HAnimJoint124->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint* HAnimJoint125 = new HAnimJoint();
HAnimJoint125->setName(CString("l_elbow"));
HAnimJoint125->setDEF(CString("hanim_l_elbow"));
HAnimJoint125->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint* HAnimJoint126 = new HAnimJoint();
HAnimJoint126->setName(CString("l_radiocarpal"));
HAnimJoint126->setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint126->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName(CString("l_midcarpal_1"));
HAnimJoint127->setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint127->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint128 = new HAnimJoint();
HAnimJoint128->setName(CString("l_carpometacarpal_1"));
HAnimJoint128->setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint128->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint* HAnimJoint129 = new HAnimJoint();
HAnimJoint129->setName(CString("l_metacarpophalangeal_1"));
HAnimJoint129->setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint129->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint* HAnimJoint130 = new HAnimJoint();
HAnimJoint130->setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint130->setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint130->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint129->addChild(HAnimJoint130);

HAnimJoint128->addChild(HAnimJoint129);

HAnimJoint127->addChild(HAnimJoint128);

HAnimJoint126->addChild(HAnimJoint127);

HAnimJoint* HAnimJoint131 = new HAnimJoint();
HAnimJoint131->setName(CString("l_midcarpal_2"));
HAnimJoint131->setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint131->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint132 = new HAnimJoint();
HAnimJoint132->setName(CString("l_carpometacarpal_2"));
HAnimJoint132->setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint132->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint* HAnimJoint133 = new HAnimJoint();
HAnimJoint133->setName(CString("l_metacarpophalangeal_2"));
HAnimJoint133->setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint133->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint* HAnimJoint134 = new HAnimJoint();
HAnimJoint134->setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint134->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint134->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint* HAnimJoint135 = new HAnimJoint();
HAnimJoint135->setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint135->setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint135->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint134->addChild(HAnimJoint135);

HAnimJoint133->addChild(HAnimJoint134);

HAnimJoint132->addChild(HAnimJoint133);

HAnimJoint131->addChild(HAnimJoint132);

HAnimJoint126->addChild(HAnimJoint131);

HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName(CString("l_midcarpal_3"));
HAnimJoint136->setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint136->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint137 = new HAnimJoint();
HAnimJoint137->setName(CString("l_carpometacarpal_3"));
HAnimJoint137->setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint137->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint* HAnimJoint138 = new HAnimJoint();
HAnimJoint138->setName(CString("l_metacarpophalangeal_3"));
HAnimJoint138->setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint138->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint* HAnimJoint139 = new HAnimJoint();
HAnimJoint139->setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint139->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint139->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint* HAnimJoint140 = new HAnimJoint();
HAnimJoint140->setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint140->setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint140->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint139->addChild(HAnimJoint140);

HAnimJoint138->addChild(HAnimJoint139);

HAnimJoint137->addChild(HAnimJoint138);

HAnimJoint136->addChild(HAnimJoint137);

HAnimJoint126->addChild(HAnimJoint136);

HAnimJoint* HAnimJoint141 = new HAnimJoint();
HAnimJoint141->setName(CString("l_midcarpal_4_5"));
HAnimJoint141->setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint141->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint142 = new HAnimJoint();
HAnimJoint142->setName(CString("l_carpometacarpal_4"));
HAnimJoint142->setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint142->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint* HAnimJoint143 = new HAnimJoint();
HAnimJoint143->setName(CString("l_metacarpophalangeal_4"));
HAnimJoint143->setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint143->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint* HAnimJoint144 = new HAnimJoint();
HAnimJoint144->setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint144->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint144->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint* HAnimJoint145 = new HAnimJoint();
HAnimJoint145->setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint145->setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint145->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint144->addChild(HAnimJoint145);

HAnimJoint143->addChild(HAnimJoint144);

HAnimJoint142->addChild(HAnimJoint143);

HAnimJoint141->addChild(HAnimJoint142);

HAnimJoint* HAnimJoint146 = new HAnimJoint();
HAnimJoint146->setName(CString("l_carpometacarpal_5"));
HAnimJoint146->setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint146->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint* HAnimJoint147 = new HAnimJoint();
HAnimJoint147->setName(CString("l_metacarpophalangeal_5"));
HAnimJoint147->setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint147->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint* HAnimJoint148 = new HAnimJoint();
HAnimJoint148->setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint148->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint148->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint* HAnimJoint149 = new HAnimJoint();
HAnimJoint149->setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint149->setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
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
HAnimJoint150->setName(CString("r_sternoclavicular"));
HAnimJoint150->setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint150->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint* HAnimJoint151 = new HAnimJoint();
HAnimJoint151->setName(CString("r_acromioclavicular"));
HAnimJoint151->setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint151->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint* HAnimJoint152 = new HAnimJoint();
HAnimJoint152->setName(CString("r_shoulder"));
HAnimJoint152->setDEF(CString("hanim_r_shoulder"));
HAnimJoint152->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint* HAnimJoint153 = new HAnimJoint();
HAnimJoint153->setName(CString("r_elbow"));
HAnimJoint153->setDEF(CString("hanim_r_elbow"));
HAnimJoint153->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName(CString("r_radiocarpal"));
HAnimJoint154->setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint154->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint* HAnimJoint155 = new HAnimJoint();
HAnimJoint155->setName(CString("r_midcarpal_1"));
HAnimJoint155->setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint155->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint156 = new HAnimJoint();
HAnimJoint156->setName(CString("r_carpometacarpal_1"));
HAnimJoint156->setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint156->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint* HAnimJoint157 = new HAnimJoint();
HAnimJoint157->setName(CString("r_metacarpophalangeal_1"));
HAnimJoint157->setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint157->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint* HAnimJoint158 = new HAnimJoint();
HAnimJoint158->setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint158->setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint158->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint157->addChild(HAnimJoint158);

HAnimJoint156->addChild(HAnimJoint157);

HAnimJoint155->addChild(HAnimJoint156);

HAnimJoint154->addChild(HAnimJoint155);

HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setName(CString("r_midcarpal_2"));
HAnimJoint159->setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint159->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint160 = new HAnimJoint();
HAnimJoint160->setName(CString("r_carpometacarpal_2"));
HAnimJoint160->setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint160->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint* HAnimJoint161 = new HAnimJoint();
HAnimJoint161->setName(CString("r_metacarpophalangeal_2"));
HAnimJoint161->setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint161->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint* HAnimJoint162 = new HAnimJoint();
HAnimJoint162->setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint162->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint162->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint163->setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint163->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint162->addChild(HAnimJoint163);

HAnimJoint161->addChild(HAnimJoint162);

HAnimJoint160->addChild(HAnimJoint161);

HAnimJoint159->addChild(HAnimJoint160);

HAnimJoint154->addChild(HAnimJoint159);

HAnimJoint* HAnimJoint164 = new HAnimJoint();
HAnimJoint164->setName(CString("r_midcarpal_3"));
HAnimJoint164->setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint164->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint165 = new HAnimJoint();
HAnimJoint165->setName(CString("r_carpometacarpal_3"));
HAnimJoint165->setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint165->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint* HAnimJoint166 = new HAnimJoint();
HAnimJoint166->setName(CString("r_metacarpophalangeal_3"));
HAnimJoint166->setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint166->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint* HAnimJoint167 = new HAnimJoint();
HAnimJoint167->setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint167->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint167->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint* HAnimJoint168 = new HAnimJoint();
HAnimJoint168->setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint168->setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint168->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint167->addChild(HAnimJoint168);

HAnimJoint166->addChild(HAnimJoint167);

HAnimJoint165->addChild(HAnimJoint166);

HAnimJoint164->addChild(HAnimJoint165);

HAnimJoint154->addChild(HAnimJoint164);

HAnimJoint* HAnimJoint169 = new HAnimJoint();
HAnimJoint169->setName(CString("r_midcarpal_4_5"));
HAnimJoint169->setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint169->setCenter(new float[3]{0,1,0});
HAnimJoint* HAnimJoint170 = new HAnimJoint();
HAnimJoint170->setName(CString("r_carpometacarpal_4"));
HAnimJoint170->setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint170->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint* HAnimJoint171 = new HAnimJoint();
HAnimJoint171->setName(CString("r_metacarpophalangeal_4"));
HAnimJoint171->setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint171->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint172->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint172->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint* HAnimJoint173 = new HAnimJoint();
HAnimJoint173->setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint173->setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint173->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint172->addChild(HAnimJoint173);

HAnimJoint171->addChild(HAnimJoint172);

HAnimJoint170->addChild(HAnimJoint171);

HAnimJoint169->addChild(HAnimJoint170);

HAnimJoint* HAnimJoint174 = new HAnimJoint();
HAnimJoint174->setName(CString("r_carpometacarpal_5"));
HAnimJoint174->setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint174->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint* HAnimJoint175 = new HAnimJoint();
HAnimJoint175->setName(CString("r_metacarpophalangeal_5"));
HAnimJoint175->setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint175->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint* HAnimJoint176 = new HAnimJoint();
HAnimJoint176->setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint176->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint176->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint* HAnimJoint177 = new HAnimJoint();
HAnimJoint177->setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint177->setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
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
HAnimJoint178->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid31->addChild(HAnimJoint178);

HAnimJoint* HAnimJoint179 = new HAnimJoint();
HAnimJoint179->setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid31->addChild(HAnimJoint179);

HAnimJoint* HAnimJoint180 = new HAnimJoint();
HAnimJoint180->setUSE(CString("hanim_l_hip"));
HAnimHumanoid31->addChild(HAnimJoint180);

HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setUSE(CString("hanim_l_knee"));
HAnimHumanoid31->addChild(HAnimJoint181);

HAnimJoint* HAnimJoint182 = new HAnimJoint();
HAnimJoint182->setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid31->addChild(HAnimJoint182);

HAnimJoint* HAnimJoint183 = new HAnimJoint();
HAnimJoint183->setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid31->addChild(HAnimJoint183);

HAnimJoint* HAnimJoint184 = new HAnimJoint();
HAnimJoint184->setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid31->addChild(HAnimJoint184);

HAnimJoint* HAnimJoint185 = new HAnimJoint();
HAnimJoint185->setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid31->addChild(HAnimJoint185);

HAnimJoint* HAnimJoint186 = new HAnimJoint();
HAnimJoint186->setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint186);

HAnimJoint* HAnimJoint187 = new HAnimJoint();
HAnimJoint187->setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint187);

HAnimJoint* HAnimJoint188 = new HAnimJoint();
HAnimJoint188->setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid31->addChild(HAnimJoint188);

HAnimJoint* HAnimJoint189 = new HAnimJoint();
HAnimJoint189->setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid31->addChild(HAnimJoint189);

HAnimJoint* HAnimJoint190 = new HAnimJoint();
HAnimJoint190->setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint190);

HAnimJoint* HAnimJoint191 = new HAnimJoint();
HAnimJoint191->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint191);

HAnimJoint* HAnimJoint192 = new HAnimJoint();
HAnimJoint192->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint192);

HAnimJoint* HAnimJoint193 = new HAnimJoint();
HAnimJoint193->setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid31->addChild(HAnimJoint193);

HAnimJoint* HAnimJoint194 = new HAnimJoint();
HAnimJoint194->setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid31->addChild(HAnimJoint194);

HAnimJoint* HAnimJoint195 = new HAnimJoint();
HAnimJoint195->setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint195);

HAnimJoint* HAnimJoint196 = new HAnimJoint();
HAnimJoint196->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint196);

HAnimJoint* HAnimJoint197 = new HAnimJoint();
HAnimJoint197->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint197);

HAnimJoint* HAnimJoint198 = new HAnimJoint();
HAnimJoint198->setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid31->addChild(HAnimJoint198);

HAnimJoint* HAnimJoint199 = new HAnimJoint();
HAnimJoint199->setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid31->addChild(HAnimJoint199);

HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid31->addChild(HAnimJoint200);

HAnimJoint* HAnimJoint201 = new HAnimJoint();
HAnimJoint201->setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint201);

HAnimJoint* HAnimJoint202 = new HAnimJoint();
HAnimJoint202->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint202);

HAnimJoint* HAnimJoint203 = new HAnimJoint();
HAnimJoint203->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint203);

HAnimJoint* HAnimJoint204 = new HAnimJoint();
HAnimJoint204->setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid31->addChild(HAnimJoint204);

HAnimJoint* HAnimJoint205 = new HAnimJoint();
HAnimJoint205->setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint205);

HAnimJoint* HAnimJoint206 = new HAnimJoint();
HAnimJoint206->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint206);

HAnimJoint* HAnimJoint207 = new HAnimJoint();
HAnimJoint207->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint207);

HAnimJoint* HAnimJoint208 = new HAnimJoint();
HAnimJoint208->setUSE(CString("hanim_r_hip"));
HAnimHumanoid31->addChild(HAnimJoint208);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setUSE(CString("hanim_r_knee"));
HAnimHumanoid31->addChild(HAnimJoint209);

HAnimJoint* HAnimJoint210 = new HAnimJoint();
HAnimJoint210->setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid31->addChild(HAnimJoint210);

HAnimJoint* HAnimJoint211 = new HAnimJoint();
HAnimJoint211->setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid31->addChild(HAnimJoint211);

HAnimJoint* HAnimJoint212 = new HAnimJoint();
HAnimJoint212->setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid31->addChild(HAnimJoint212);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid31->addChild(HAnimJoint213);

HAnimJoint* HAnimJoint214 = new HAnimJoint();
HAnimJoint214->setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint214);

HAnimJoint* HAnimJoint215 = new HAnimJoint();
HAnimJoint215->setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint215);

HAnimJoint* HAnimJoint216 = new HAnimJoint();
HAnimJoint216->setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid31->addChild(HAnimJoint216);

HAnimJoint* HAnimJoint217 = new HAnimJoint();
HAnimJoint217->setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid31->addChild(HAnimJoint217);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint218);

HAnimJoint* HAnimJoint219 = new HAnimJoint();
HAnimJoint219->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint219);

HAnimJoint* HAnimJoint220 = new HAnimJoint();
HAnimJoint220->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint220);

HAnimJoint* HAnimJoint221 = new HAnimJoint();
HAnimJoint221->setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid31->addChild(HAnimJoint221);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid31->addChild(HAnimJoint222);

HAnimJoint* HAnimJoint223 = new HAnimJoint();
HAnimJoint223->setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint223);

HAnimJoint* HAnimJoint224 = new HAnimJoint();
HAnimJoint224->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint224);

HAnimJoint* HAnimJoint225 = new HAnimJoint();
HAnimJoint225->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint225);

HAnimJoint* HAnimJoint226 = new HAnimJoint();
HAnimJoint226->setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid31->addChild(HAnimJoint226);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid31->addChild(HAnimJoint227);

HAnimJoint* HAnimJoint228 = new HAnimJoint();
HAnimJoint228->setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid31->addChild(HAnimJoint228);

HAnimJoint* HAnimJoint229 = new HAnimJoint();
HAnimJoint229->setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint229);

HAnimJoint* HAnimJoint230 = new HAnimJoint();
HAnimJoint230->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint230);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint231);

HAnimJoint* HAnimJoint232 = new HAnimJoint();
HAnimJoint232->setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid31->addChild(HAnimJoint232);

HAnimJoint* HAnimJoint233 = new HAnimJoint();
HAnimJoint233->setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint233);

HAnimJoint* HAnimJoint234 = new HAnimJoint();
HAnimJoint234->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint234);

HAnimJoint* HAnimJoint235 = new HAnimJoint();
HAnimJoint235->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint235);

HAnimJoint* HAnimJoint236 = new HAnimJoint();
HAnimJoint236->setUSE(CString("hanim_vl5"));
HAnimHumanoid31->addChild(HAnimJoint236);

HAnimJoint* HAnimJoint237 = new HAnimJoint();
HAnimJoint237->setUSE(CString("hanim_vl4"));
HAnimHumanoid31->addChild(HAnimJoint237);

HAnimJoint* HAnimJoint238 = new HAnimJoint();
HAnimJoint238->setUSE(CString("hanim_vl3"));
HAnimHumanoid31->addChild(HAnimJoint238);

HAnimJoint* HAnimJoint239 = new HAnimJoint();
HAnimJoint239->setUSE(CString("hanim_vl2"));
HAnimHumanoid31->addChild(HAnimJoint239);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setUSE(CString("hanim_vl1"));
HAnimHumanoid31->addChild(HAnimJoint240);

HAnimJoint* HAnimJoint241 = new HAnimJoint();
HAnimJoint241->setUSE(CString("hanim_vt12"));
HAnimHumanoid31->addChild(HAnimJoint241);

HAnimJoint* HAnimJoint242 = new HAnimJoint();
HAnimJoint242->setUSE(CString("hanim_vt11"));
HAnimHumanoid31->addChild(HAnimJoint242);

HAnimJoint* HAnimJoint243 = new HAnimJoint();
HAnimJoint243->setUSE(CString("hanim_vt10"));
HAnimHumanoid31->addChild(HAnimJoint243);

HAnimJoint* HAnimJoint244 = new HAnimJoint();
HAnimJoint244->setUSE(CString("hanim_vt9"));
HAnimHumanoid31->addChild(HAnimJoint244);

HAnimJoint* HAnimJoint245 = new HAnimJoint();
HAnimJoint245->setUSE(CString("hanim_vt8"));
HAnimHumanoid31->addChild(HAnimJoint245);

HAnimJoint* HAnimJoint246 = new HAnimJoint();
HAnimJoint246->setUSE(CString("hanim_vt7"));
HAnimHumanoid31->addChild(HAnimJoint246);

HAnimJoint* HAnimJoint247 = new HAnimJoint();
HAnimJoint247->setUSE(CString("hanim_vt6"));
HAnimHumanoid31->addChild(HAnimJoint247);

HAnimJoint* HAnimJoint248 = new HAnimJoint();
HAnimJoint248->setUSE(CString("hanim_vt5"));
HAnimHumanoid31->addChild(HAnimJoint248);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setUSE(CString("hanim_vt4"));
HAnimHumanoid31->addChild(HAnimJoint249);

HAnimJoint* HAnimJoint250 = new HAnimJoint();
HAnimJoint250->setUSE(CString("hanim_vt3"));
HAnimHumanoid31->addChild(HAnimJoint250);

HAnimJoint* HAnimJoint251 = new HAnimJoint();
HAnimJoint251->setUSE(CString("hanim_vt2"));
HAnimHumanoid31->addChild(HAnimJoint251);

HAnimJoint* HAnimJoint252 = new HAnimJoint();
HAnimJoint252->setUSE(CString("hanim_vt1"));
HAnimHumanoid31->addChild(HAnimJoint252);

HAnimJoint* HAnimJoint253 = new HAnimJoint();
HAnimJoint253->setUSE(CString("hanim_vc7"));
HAnimHumanoid31->addChild(HAnimJoint253);

HAnimJoint* HAnimJoint254 = new HAnimJoint();
HAnimJoint254->setUSE(CString("hanim_vc6"));
HAnimHumanoid31->addChild(HAnimJoint254);

HAnimJoint* HAnimJoint255 = new HAnimJoint();
HAnimJoint255->setUSE(CString("hanim_vc5"));
HAnimHumanoid31->addChild(HAnimJoint255);

HAnimJoint* HAnimJoint256 = new HAnimJoint();
HAnimJoint256->setUSE(CString("hanim_vc4"));
HAnimHumanoid31->addChild(HAnimJoint256);

HAnimJoint* HAnimJoint257 = new HAnimJoint();
HAnimJoint257->setUSE(CString("hanim_vc3"));
HAnimHumanoid31->addChild(HAnimJoint257);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setUSE(CString("hanim_vc2"));
HAnimHumanoid31->addChild(HAnimJoint258);

HAnimJoint* HAnimJoint259 = new HAnimJoint();
HAnimJoint259->setUSE(CString("hanim_vc1"));
HAnimHumanoid31->addChild(HAnimJoint259);

HAnimJoint* HAnimJoint260 = new HAnimJoint();
HAnimJoint260->setUSE(CString("hanim_skullbase"));
HAnimHumanoid31->addChild(HAnimJoint260);

HAnimJoint* HAnimJoint261 = new HAnimJoint();
HAnimJoint261->setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid31->addChild(HAnimJoint261);

HAnimJoint* HAnimJoint262 = new HAnimJoint();
HAnimJoint262->setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid31->addChild(HAnimJoint262);

HAnimJoint* HAnimJoint263 = new HAnimJoint();
HAnimJoint263->setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid31->addChild(HAnimJoint263);

HAnimJoint* HAnimJoint264 = new HAnimJoint();
HAnimJoint264->setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid31->addChild(HAnimJoint264);

HAnimJoint* HAnimJoint265 = new HAnimJoint();
HAnimJoint265->setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid31->addChild(HAnimJoint265);

HAnimJoint* HAnimJoint266 = new HAnimJoint();
HAnimJoint266->setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid31->addChild(HAnimJoint266);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid31->addChild(HAnimJoint267);

HAnimJoint* HAnimJoint268 = new HAnimJoint();
HAnimJoint268->setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid31->addChild(HAnimJoint268);

HAnimJoint* HAnimJoint269 = new HAnimJoint();
HAnimJoint269->setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid31->addChild(HAnimJoint269);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid31->addChild(HAnimJoint270);

HAnimJoint* HAnimJoint271 = new HAnimJoint();
HAnimJoint271->setUSE(CString("hanim_l_elbow"));
HAnimHumanoid31->addChild(HAnimJoint271);

HAnimJoint* HAnimJoint272 = new HAnimJoint();
HAnimJoint272->setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid31->addChild(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid31->addChild(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid31->addChild(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid31->addChild(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid31->addChild(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid31->addChild(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid31->addChild(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid31->addChild(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid31->addChild(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid31->addChild(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid31->addChild(HAnimJoint296);

HAnimJoint* HAnimJoint297 = new HAnimJoint();
HAnimJoint297->setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid31->addChild(HAnimJoint297);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid31->addChild(HAnimJoint298);

HAnimJoint* HAnimJoint299 = new HAnimJoint();
HAnimJoint299->setUSE(CString("hanim_r_elbow"));
HAnimHumanoid31->addChild(HAnimJoint299);

HAnimJoint* HAnimJoint300 = new HAnimJoint();
HAnimJoint300->setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid31->addChild(HAnimJoint300);

HAnimJoint* HAnimJoint301 = new HAnimJoint();
HAnimJoint301->setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid31->addChild(HAnimJoint301);

HAnimJoint* HAnimJoint302 = new HAnimJoint();
HAnimJoint302->setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid31->addChild(HAnimJoint302);

HAnimJoint* HAnimJoint303 = new HAnimJoint();
HAnimJoint303->setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint303);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid31->addChild(HAnimJoint304);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid31->addChild(HAnimJoint305);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid31->addChild(HAnimJoint306);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint307);

HAnimJoint* HAnimJoint308 = new HAnimJoint();
HAnimJoint308->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint308);

HAnimJoint* HAnimJoint309 = new HAnimJoint();
HAnimJoint309->setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid31->addChild(HAnimJoint309);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid31->addChild(HAnimJoint310);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid31->addChild(HAnimJoint311);

HAnimJoint* HAnimJoint312 = new HAnimJoint();
HAnimJoint312->setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint312);

HAnimJoint* HAnimJoint313 = new HAnimJoint();
HAnimJoint313->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint313);

HAnimJoint* HAnimJoint314 = new HAnimJoint();
HAnimJoint314->setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid31->addChild(HAnimJoint314);

HAnimJoint* HAnimJoint315 = new HAnimJoint();
HAnimJoint315->setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid31->addChild(HAnimJoint315);

HAnimJoint* HAnimJoint316 = new HAnimJoint();
HAnimJoint316->setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid31->addChild(HAnimJoint316);

HAnimJoint* HAnimJoint317 = new HAnimJoint();
HAnimJoint317->setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint317);

HAnimJoint* HAnimJoint318 = new HAnimJoint();
HAnimJoint318->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint318);

HAnimJoint* HAnimJoint319 = new HAnimJoint();
HAnimJoint319->setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid31->addChild(HAnimJoint319);

HAnimJoint* HAnimJoint320 = new HAnimJoint();
HAnimJoint320->setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid31->addChild(HAnimJoint320);

HAnimJoint* HAnimJoint321 = new HAnimJoint();
HAnimJoint321->setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint321);

HAnimJoint* HAnimJoint322 = new HAnimJoint();
HAnimJoint322->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint322);

HAnimJoint* HAnimJoint323 = new HAnimJoint();
HAnimJoint323->setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid31->addChild(HAnimJoint323);

Scene11->addChild(HAnimHumanoid31);

X3D0->setScene(Scene11);

}
