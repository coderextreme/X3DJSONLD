#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JohnJoint2.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("h2.pl"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("14 Jan 2023"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("creator"));
meta8.setContent(CString("John Carlson"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("9 November 2020"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("license"));
meta10.setContent(CString("../license.html"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
Transform& Transform12 =  Transform();
//DEF for markerfor XYZ axes
Shape& Shape13 =  Shape();
Shape13.setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet& IndexedLineSet14 =  IndexedLineSet();
IndexedLineSet14.setColorIndex(new int[3]{0,1,2}, 3);
IndexedLineSet14.setColorPerVertex(False);
IndexedLineSet14.setCoordIndex(new int32_t[9]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[12]{0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}, 12);
IndexedLineSet14.setCoord(&Coordinate15);

CColor& Color16 =  CColor();
Color16.setColor(new float[9]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet14.setColor(&Color16);

Shape13.setGeometry(&IndexedLineSet14);

Transform12.addChild(&Shape13);

Scene11.addChild(&Transform12);

Group& Group17 =  Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform& Transform18 =  Transform();
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[3]{0.0,2.1,0.0});
Shape& Shape20 =  Shape();
Shape20.setDEF(CString("HAnimJointShape"));
Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.02);
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("HAnimJointMaterial"));
Material23.setDiffuseColor(new float[3]{0.0,0.0,0.8});
Material23.setTransparency(0.3);
Appearance22.addChild(&Material23);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[3]{0.0,2.05,0.0});
Shape& Shape25 =  Shape();
Shape25.setDEF(CString("HAnimSegmentLine"));
LineSet& LineSet26 =  LineSet();
LineSet26.setVertexCount(new int32_t[1]{2}, 1);
ColorRGBA& ColorRGBA27 =  ColorRGBA();
ColorRGBA27.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA27.setColor(new float[8]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
LineSet26.addChild(&ColorRGBA27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setPoint(new float[6]{-0.05,0.0,0.0,0.05,0.0,0.0}, 6);
LineSet26.setCoord(Coordinate28);

Shape25.setGeometry(&LineSet26);

Transform24.addChild(&Shape25);

Transform18.addChild(&Transform24);

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group17.addChild(&Transform18);

Scene11.addChild(&Group17);

NavigationInfo& NavigationInfo29 =  NavigationInfo();
NavigationInfo29.setSpeed(1.5);
Scene11.addChild(&NavigationInfo29);

Viewpoint& Viewpoint30 =  Viewpoint();
Viewpoint30.setDescription(CString("default"));
Scene11.addChild(&Viewpoint30);

HAnimHumanoid& HAnimHumanoid31 =  HAnimHumanoid();
HAnimHumanoid31.X3DNode::setName(CString("HAnim"));
HAnimHumanoid31.setDEF(CString("hanim_HAnim"));
HAnimHumanoid31.setInfo(new CString[1]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid31.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint32 =  HAnimJoint();
HAnimJoint32.X3DNode::setName(CString("humanoid_root"));
HAnimJoint32.setDEF(CString("hanim_humanoid_root"));
HAnimJoint32.setCenter(new float[3]{0.0,0.824,0.0277});
HAnimJoint& HAnimJoint33 =  HAnimJoint();
HAnimJoint33.X3DNode::setName(CString("sacroiliac"));
HAnimJoint33.setDEF(CString("hanim_sacroiliac"));
HAnimJoint33.setCenter(new float[3]{0.0,0.9149,0.0016});
HAnimJoint& HAnimJoint34 =  HAnimJoint();
HAnimJoint34.X3DNode::setName(CString("l_hip"));
HAnimJoint34.setDEF(CString("hanim_l_hip"));
HAnimJoint34.setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint& HAnimJoint35 =  HAnimJoint();
HAnimJoint35.X3DNode::setName(CString("l_knee"));
HAnimJoint35.setDEF(CString("hanim_l_knee"));
HAnimJoint35.setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.X3DNode::setName(CString("l_talocrural"));
HAnimJoint36.setDEF(CString("hanim_l_talocrural"));
HAnimJoint36.setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint37.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint37.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint38 =  HAnimJoint();
HAnimJoint38.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint38.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint38.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint39.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint39.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint40.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint40.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint41.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint41.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint40.addChildren(&HAnimJoint41);

HAnimJoint39.addChildren(&HAnimJoint40);

HAnimJoint38.addChildren(&HAnimJoint39);

HAnimJoint37.addChildren(&HAnimJoint38);

HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint42.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint42.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint43.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint43.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint44.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint44.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint45.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint45.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint46.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint46.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint45.addChildren(&HAnimJoint46);

HAnimJoint44.addChildren(&HAnimJoint45);

HAnimJoint43.addChildren(&HAnimJoint44);

HAnimJoint42.addChildren(&HAnimJoint43);

HAnimJoint37.addChildren(&HAnimJoint42);

HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint47.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint47.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint48.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint48.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint49.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint49.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint50.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint50.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint51.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint51.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint50.addChildren(&HAnimJoint51);

HAnimJoint49.addChildren(&HAnimJoint50);

HAnimJoint48.addChildren(&HAnimJoint49);

HAnimJoint47.addChildren(&HAnimJoint48);

HAnimJoint37.addChildren(&HAnimJoint47);

HAnimJoint36.addChildren(&HAnimJoint37);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint52.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint52.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint53.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint53.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint54.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint54.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint55.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint55.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint56.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint56.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint57.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint57.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint56.addChildren(&HAnimJoint57);

HAnimJoint55.addChildren(&HAnimJoint56);

HAnimJoint54.addChildren(&HAnimJoint55);

HAnimJoint53.addChildren(&HAnimJoint54);

HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint58.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint58.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint59.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint59.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint60.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint60.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint61.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint61.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint60.addChildren(&HAnimJoint61);

HAnimJoint59.addChildren(&HAnimJoint60);

HAnimJoint58.addChildren(&HAnimJoint59);

HAnimJoint53.addChildren(&HAnimJoint58);

HAnimJoint52.addChildren(&HAnimJoint53);

HAnimJoint36.addChildren(&HAnimJoint52);

HAnimJoint35.addChildren(&HAnimJoint36);

HAnimJoint34.addChildren(&HAnimJoint35);

HAnimJoint33.addChildren(&HAnimJoint34);

HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.X3DNode::setName(CString("r_hip"));
HAnimJoint62.setDEF(CString("hanim_r_hip"));
HAnimJoint62.setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.X3DNode::setName(CString("r_knee"));
HAnimJoint63.setDEF(CString("hanim_r_knee"));
HAnimJoint63.setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(CString("r_talocrural"));
HAnimJoint64.setDEF(CString("hanim_r_talocrural"));
HAnimJoint64.setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint65.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint65.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint66.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint66.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint67.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint67.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint68.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint68.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint69.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint69.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint68.addChildren(&HAnimJoint69);

HAnimJoint67.addChildren(&HAnimJoint68);

HAnimJoint66.addChildren(&HAnimJoint67);

HAnimJoint65.addChildren(&HAnimJoint66);

HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint70.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint70.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint71.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint71.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint72.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint72.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint73.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint73.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint74.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint74.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint73.addChildren(&HAnimJoint74);

HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint65.addChildren(&HAnimJoint70);

HAnimJoint& HAnimJoint75 =  HAnimJoint();
HAnimJoint75.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint75.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint75.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint76.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint76.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint77.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint77.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint78.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint78.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint79.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint79.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint78.addChildren(&HAnimJoint79);

HAnimJoint77.addChildren(&HAnimJoint78);

HAnimJoint76.addChildren(&HAnimJoint77);

HAnimJoint75.addChildren(&HAnimJoint76);

HAnimJoint65.addChildren(&HAnimJoint75);

HAnimJoint64.addChildren(&HAnimJoint65);

HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint80.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint80.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint81.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint81.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint82.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint82.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint83.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint83.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint84.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint84.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint85.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint85.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint84.addChildren(&HAnimJoint85);

HAnimJoint83.addChildren(&HAnimJoint84);

HAnimJoint82.addChildren(&HAnimJoint83);

HAnimJoint81.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint86.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint86.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint87.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint87.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint88.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint88.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint89.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint89.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint87.addChildren(&HAnimJoint88);

HAnimJoint86.addChildren(&HAnimJoint87);

HAnimJoint81.addChildren(&HAnimJoint86);

HAnimJoint80.addChildren(&HAnimJoint81);

HAnimJoint64.addChildren(&HAnimJoint80);

HAnimJoint63.addChildren(&HAnimJoint64);

HAnimJoint62.addChildren(&HAnimJoint63);

HAnimJoint33.addChildren(&HAnimJoint62);

HAnimJoint32.addChildren(&HAnimJoint33);

HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("vl5"));
HAnimJoint90.setDEF(CString("hanim_vl5"));
HAnimJoint90.setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(CString("vl4"));
HAnimJoint91.setDEF(CString("hanim_vl4"));
HAnimJoint91.setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.X3DNode::setName(CString("vl3"));
HAnimJoint92.setDEF(CString("hanim_vl3"));
HAnimJoint92.setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.X3DNode::setName(CString("vl2"));
HAnimJoint93.setDEF(CString("hanim_vl2"));
HAnimJoint93.setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.X3DNode::setName(CString("vl1"));
HAnimJoint94.setDEF(CString("hanim_vl1"));
HAnimJoint94.setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.X3DNode::setName(CString("vt12"));
HAnimJoint95.setDEF(CString("hanim_vt12"));
HAnimJoint95.setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.X3DNode::setName(CString("vt11"));
HAnimJoint96.setDEF(CString("hanim_vt11"));
HAnimJoint96.setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.X3DNode::setName(CString("vt10"));
HAnimJoint97.setDEF(CString("hanim_vt10"));
HAnimJoint97.setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.X3DNode::setName(CString("vt9"));
HAnimJoint98.setDEF(CString("hanim_vt9"));
HAnimJoint98.setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.X3DNode::setName(CString("vt8"));
HAnimJoint99.setDEF(CString("hanim_vt8"));
HAnimJoint99.setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(CString("vt7"));
HAnimJoint100.setDEF(CString("hanim_vt7"));
HAnimJoint100.setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.X3DNode::setName(CString("vt6"));
HAnimJoint101.setDEF(CString("hanim_vt6"));
HAnimJoint101.setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.X3DNode::setName(CString("vt5"));
HAnimJoint102.setDEF(CString("hanim_vt5"));
HAnimJoint102.setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.X3DNode::setName(CString("vt4"));
HAnimJoint103.setDEF(CString("hanim_vt4"));
HAnimJoint103.setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.X3DNode::setName(CString("vt3"));
HAnimJoint104.setDEF(CString("hanim_vt3"));
HAnimJoint104.setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.X3DNode::setName(CString("vt2"));
HAnimJoint105.setDEF(CString("hanim_vt2"));
HAnimJoint105.setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.X3DNode::setName(CString("vt1"));
HAnimJoint106.setDEF(CString("hanim_vt1"));
HAnimJoint106.setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.X3DNode::setName(CString("vc7"));
HAnimJoint107.setDEF(CString("hanim_vc7"));
HAnimJoint107.setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.X3DNode::setName(CString("vc6"));
HAnimJoint108.setDEF(CString("hanim_vc6"));
HAnimJoint108.setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("vc5"));
HAnimJoint109.setDEF(CString("hanim_vc5"));
HAnimJoint109.setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.X3DNode::setName(CString("vc4"));
HAnimJoint110.setDEF(CString("hanim_vc4"));
HAnimJoint110.setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.X3DNode::setName(CString("vc3"));
HAnimJoint111.setDEF(CString("hanim_vc3"));
HAnimJoint111.setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.X3DNode::setName(CString("vc2"));
HAnimJoint112.setDEF(CString("hanim_vc2"));
HAnimJoint112.setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.X3DNode::setName(CString("vc1"));
HAnimJoint113.setDEF(CString("hanim_vc1"));
HAnimJoint113.setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.X3DNode::setName(CString("skullbase"));
HAnimJoint114.setDEF(CString("hanim_skullbase"));
HAnimJoint114.setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint115.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint115.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint115);

HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint116.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint116.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint116);

HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint117.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint117.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint117);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint118.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint118.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint118);

HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint119.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint119.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint119);

HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint120.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint120.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint120);

HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.X3DNode::setName(CString("temporomandibular"));
HAnimJoint121.setDEF(CString("hanim_temporomandibular"));
HAnimJoint121.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint114.addChildren(&HAnimJoint121);

HAnimJoint113.addChildren(&HAnimJoint114);

HAnimJoint112.addChildren(&HAnimJoint113);

HAnimJoint111.addChildren(&HAnimJoint112);

HAnimJoint110.addChildren(&HAnimJoint111);

HAnimJoint109.addChildren(&HAnimJoint110);

HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint107.addChildren(&HAnimJoint108);

HAnimJoint106.addChildren(&HAnimJoint107);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint122.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint122.setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint123.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint123.setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.X3DNode::setName(CString("l_shoulder"));
HAnimJoint124.setDEF(CString("hanim_l_shoulder"));
HAnimJoint124.setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.X3DNode::setName(CString("l_elbow"));
HAnimJoint125.setDEF(CString("hanim_l_elbow"));
HAnimJoint125.setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint126.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint126.setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint127.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint127.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint128.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint128.setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint129.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint129.setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint130.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint130.setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint129.addChildren(&HAnimJoint130);

HAnimJoint128.addChildren(&HAnimJoint129);

HAnimJoint127.addChildren(&HAnimJoint128);

HAnimJoint126.addChildren(&HAnimJoint127);

HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint131.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint131.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint132.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint132.setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint133.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint133.setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint134.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint134.setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint135.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint135.setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint134.addChildren(&HAnimJoint135);

HAnimJoint133.addChildren(&HAnimJoint134);

HAnimJoint132.addChildren(&HAnimJoint133);

HAnimJoint131.addChildren(&HAnimJoint132);

HAnimJoint126.addChildren(&HAnimJoint131);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint136.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint136.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint137.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint137.setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint138.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint138.setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint139.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint139.setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint140.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint140.setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint139.addChildren(&HAnimJoint140);

HAnimJoint138.addChildren(&HAnimJoint139);

HAnimJoint137.addChildren(&HAnimJoint138);

HAnimJoint136.addChildren(&HAnimJoint137);

HAnimJoint126.addChildren(&HAnimJoint136);

HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint141.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint141.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint142.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint142.setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint143.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint143.setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint& HAnimJoint144 =  HAnimJoint();
HAnimJoint144.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint144.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint144.setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint145.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint145.setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint144.addChildren(&HAnimJoint145);

HAnimJoint143.addChildren(&HAnimJoint144);

HAnimJoint142.addChildren(&HAnimJoint143);

HAnimJoint141.addChildren(&HAnimJoint142);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint146.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint146.setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint147.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint147.setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint148.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint148.setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint149.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint149.setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint148.addChildren(&HAnimJoint149);

HAnimJoint147.addChildren(&HAnimJoint148);

HAnimJoint146.addChildren(&HAnimJoint147);

HAnimJoint141.addChildren(&HAnimJoint146);

HAnimJoint126.addChildren(&HAnimJoint141);

HAnimJoint125.addChildren(&HAnimJoint126);

HAnimJoint124.addChildren(&HAnimJoint125);

HAnimJoint123.addChildren(&HAnimJoint124);

HAnimJoint122.addChildren(&HAnimJoint123);

HAnimJoint106.addChildren(&HAnimJoint122);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint150.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint150.setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint151.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint151.setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.X3DNode::setName(CString("r_shoulder"));
HAnimJoint152.setDEF(CString("hanim_r_shoulder"));
HAnimJoint152.setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.X3DNode::setName(CString("r_elbow"));
HAnimJoint153.setDEF(CString("hanim_r_elbow"));
HAnimJoint153.setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint154.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint154.setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint155.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint155.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint156.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint156.setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint157.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint157.setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint158.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint158.setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint157.addChildren(&HAnimJoint158);

HAnimJoint156.addChildren(&HAnimJoint157);

HAnimJoint155.addChildren(&HAnimJoint156);

HAnimJoint154.addChildren(&HAnimJoint155);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint159.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint159.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint160.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint160.setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint161.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint161.setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint162.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint162.setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint163.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint163.setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint162.addChildren(&HAnimJoint163);

HAnimJoint161.addChildren(&HAnimJoint162);

HAnimJoint160.addChildren(&HAnimJoint161);

HAnimJoint159.addChildren(&HAnimJoint160);

HAnimJoint154.addChildren(&HAnimJoint159);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint164.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint164.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint165.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint165.setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint166.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint166.setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint167.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint167.setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint168.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint168.setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint167.addChildren(&HAnimJoint168);

HAnimJoint166.addChildren(&HAnimJoint167);

HAnimJoint165.addChildren(&HAnimJoint166);

HAnimJoint164.addChildren(&HAnimJoint165);

HAnimJoint154.addChildren(&HAnimJoint164);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint169.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint169.setCenter(new float[3]{0.0,1.0,0.0});
HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint170.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint170.setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint171.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint171.setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint172.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint172.setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint173.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint173.setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint172.addChildren(&HAnimJoint173);

HAnimJoint171.addChildren(&HAnimJoint172);

HAnimJoint170.addChildren(&HAnimJoint171);

HAnimJoint169.addChildren(&HAnimJoint170);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint174.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint174.setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint175.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint175.setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint176.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint176.setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint177.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint177.setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint176.addChildren(&HAnimJoint177);

HAnimJoint175.addChildren(&HAnimJoint176);

HAnimJoint174.addChildren(&HAnimJoint175);

HAnimJoint169.addChildren(&HAnimJoint174);

HAnimJoint154.addChildren(&HAnimJoint169);

HAnimJoint153.addChildren(&HAnimJoint154);

HAnimJoint152.addChildren(&HAnimJoint153);

HAnimJoint151.addChildren(&HAnimJoint152);

HAnimJoint150.addChildren(&HAnimJoint151);

HAnimJoint106.addChildren(&HAnimJoint150);

HAnimJoint105.addChildren(&HAnimJoint106);

HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint103.addChildren(&HAnimJoint104);

HAnimJoint102.addChildren(&HAnimJoint103);

HAnimJoint101.addChildren(&HAnimJoint102);

HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint99.addChildren(&HAnimJoint100);

HAnimJoint98.addChildren(&HAnimJoint99);

HAnimJoint97.addChildren(&HAnimJoint98);

HAnimJoint96.addChildren(&HAnimJoint97);

HAnimJoint95.addChildren(&HAnimJoint96);

HAnimJoint94.addChildren(&HAnimJoint95);

HAnimJoint93.addChildren(&HAnimJoint94);

HAnimJoint92.addChildren(&HAnimJoint93);

HAnimJoint91.addChildren(&HAnimJoint92);

HAnimJoint90.addChildren(&HAnimJoint91);

HAnimJoint32.addChildren(&HAnimJoint90);

HAnimHumanoid31.setSkeleton(&HAnimJoint32);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid31.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid31.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("hanim_l_hip"));
HAnimHumanoid31.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("hanim_l_knee"));
HAnimHumanoid31.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid31.setJoints(&HAnimJoint182);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid31.setJoints(&HAnimJoint183);

HAnimJoint& HAnimJoint184 =  HAnimJoint();
HAnimJoint184.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid31.setJoints(&HAnimJoint184);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint185);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint186);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint187);

HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid31.setJoints(&HAnimJoint188);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint189);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint190);

HAnimJoint& HAnimJoint191 =  HAnimJoint();
HAnimJoint191.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint191);

HAnimJoint& HAnimJoint192 =  HAnimJoint();
HAnimJoint192.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint192);

HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid31.setJoints(&HAnimJoint193);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint194);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint195);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint196);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint197);

HAnimJoint& HAnimJoint198 =  HAnimJoint();
HAnimJoint198.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid31.setJoints(&HAnimJoint198);

HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid31.setJoints(&HAnimJoint199);

HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint200);

HAnimJoint& HAnimJoint201 =  HAnimJoint();
HAnimJoint201.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint201);

HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint202);

HAnimJoint& HAnimJoint203 =  HAnimJoint();
HAnimJoint203.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint203);

HAnimJoint& HAnimJoint204 =  HAnimJoint();
HAnimJoint204.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint204);

HAnimJoint& HAnimJoint205 =  HAnimJoint();
HAnimJoint205.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint205);

HAnimJoint& HAnimJoint206 =  HAnimJoint();
HAnimJoint206.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint206);

HAnimJoint& HAnimJoint207 =  HAnimJoint();
HAnimJoint207.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint207);

HAnimJoint& HAnimJoint208 =  HAnimJoint();
HAnimJoint208.setUSE(CString("hanim_r_hip"));
HAnimHumanoid31.setJoints(&HAnimJoint208);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.setUSE(CString("hanim_r_knee"));
HAnimHumanoid31.setJoints(&HAnimJoint209);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid31.setJoints(&HAnimJoint210);

HAnimJoint& HAnimJoint211 =  HAnimJoint();
HAnimJoint211.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid31.setJoints(&HAnimJoint211);

HAnimJoint& HAnimJoint212 =  HAnimJoint();
HAnimJoint212.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid31.setJoints(&HAnimJoint212);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint213);

HAnimJoint& HAnimJoint214 =  HAnimJoint();
HAnimJoint214.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint214);

HAnimJoint& HAnimJoint215 =  HAnimJoint();
HAnimJoint215.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint215);

HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid31.setJoints(&HAnimJoint216);

HAnimJoint& HAnimJoint217 =  HAnimJoint();
HAnimJoint217.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint217);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint218);

HAnimJoint& HAnimJoint219 =  HAnimJoint();
HAnimJoint219.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint219);

HAnimJoint& HAnimJoint220 =  HAnimJoint();
HAnimJoint220.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint220);

HAnimJoint& HAnimJoint221 =  HAnimJoint();
HAnimJoint221.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid31.setJoints(&HAnimJoint221);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint222);

HAnimJoint& HAnimJoint223 =  HAnimJoint();
HAnimJoint223.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint223);

HAnimJoint& HAnimJoint224 =  HAnimJoint();
HAnimJoint224.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint224);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint225);

HAnimJoint& HAnimJoint226 =  HAnimJoint();
HAnimJoint226.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid31.setJoints(&HAnimJoint226);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid31.setJoints(&HAnimJoint227);

HAnimJoint& HAnimJoint228 =  HAnimJoint();
HAnimJoint228.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint228);

HAnimJoint& HAnimJoint229 =  HAnimJoint();
HAnimJoint229.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint229);

HAnimJoint& HAnimJoint230 =  HAnimJoint();
HAnimJoint230.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint230);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint231);

HAnimJoint& HAnimJoint232 =  HAnimJoint();
HAnimJoint232.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint232);

HAnimJoint& HAnimJoint233 =  HAnimJoint();
HAnimJoint233.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint233);

HAnimJoint& HAnimJoint234 =  HAnimJoint();
HAnimJoint234.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint234);

HAnimJoint& HAnimJoint235 =  HAnimJoint();
HAnimJoint235.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint235);

HAnimJoint& HAnimJoint236 =  HAnimJoint();
HAnimJoint236.setUSE(CString("hanim_vl5"));
HAnimHumanoid31.setJoints(&HAnimJoint236);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.setUSE(CString("hanim_vl4"));
HAnimHumanoid31.setJoints(&HAnimJoint237);

HAnimJoint& HAnimJoint238 =  HAnimJoint();
HAnimJoint238.setUSE(CString("hanim_vl3"));
HAnimHumanoid31.setJoints(&HAnimJoint238);

HAnimJoint& HAnimJoint239 =  HAnimJoint();
HAnimJoint239.setUSE(CString("hanim_vl2"));
HAnimHumanoid31.setJoints(&HAnimJoint239);

HAnimJoint& HAnimJoint240 =  HAnimJoint();
HAnimJoint240.setUSE(CString("hanim_vl1"));
HAnimHumanoid31.setJoints(&HAnimJoint240);

HAnimJoint& HAnimJoint241 =  HAnimJoint();
HAnimJoint241.setUSE(CString("hanim_vt12"));
HAnimHumanoid31.setJoints(&HAnimJoint241);

HAnimJoint& HAnimJoint242 =  HAnimJoint();
HAnimJoint242.setUSE(CString("hanim_vt11"));
HAnimHumanoid31.setJoints(&HAnimJoint242);

HAnimJoint& HAnimJoint243 =  HAnimJoint();
HAnimJoint243.setUSE(CString("hanim_vt10"));
HAnimHumanoid31.setJoints(&HAnimJoint243);

HAnimJoint& HAnimJoint244 =  HAnimJoint();
HAnimJoint244.setUSE(CString("hanim_vt9"));
HAnimHumanoid31.setJoints(&HAnimJoint244);

HAnimJoint& HAnimJoint245 =  HAnimJoint();
HAnimJoint245.setUSE(CString("hanim_vt8"));
HAnimHumanoid31.setJoints(&HAnimJoint245);

HAnimJoint& HAnimJoint246 =  HAnimJoint();
HAnimJoint246.setUSE(CString("hanim_vt7"));
HAnimHumanoid31.setJoints(&HAnimJoint246);

HAnimJoint& HAnimJoint247 =  HAnimJoint();
HAnimJoint247.setUSE(CString("hanim_vt6"));
HAnimHumanoid31.setJoints(&HAnimJoint247);

HAnimJoint& HAnimJoint248 =  HAnimJoint();
HAnimJoint248.setUSE(CString("hanim_vt5"));
HAnimHumanoid31.setJoints(&HAnimJoint248);

HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.setUSE(CString("hanim_vt4"));
HAnimHumanoid31.setJoints(&HAnimJoint249);

HAnimJoint& HAnimJoint250 =  HAnimJoint();
HAnimJoint250.setUSE(CString("hanim_vt3"));
HAnimHumanoid31.setJoints(&HAnimJoint250);

HAnimJoint& HAnimJoint251 =  HAnimJoint();
HAnimJoint251.setUSE(CString("hanim_vt2"));
HAnimHumanoid31.setJoints(&HAnimJoint251);

HAnimJoint& HAnimJoint252 =  HAnimJoint();
HAnimJoint252.setUSE(CString("hanim_vt1"));
HAnimHumanoid31.setJoints(&HAnimJoint252);

HAnimJoint& HAnimJoint253 =  HAnimJoint();
HAnimJoint253.setUSE(CString("hanim_vc7"));
HAnimHumanoid31.setJoints(&HAnimJoint253);

HAnimJoint& HAnimJoint254 =  HAnimJoint();
HAnimJoint254.setUSE(CString("hanim_vc6"));
HAnimHumanoid31.setJoints(&HAnimJoint254);

HAnimJoint& HAnimJoint255 =  HAnimJoint();
HAnimJoint255.setUSE(CString("hanim_vc5"));
HAnimHumanoid31.setJoints(&HAnimJoint255);

HAnimJoint& HAnimJoint256 =  HAnimJoint();
HAnimJoint256.setUSE(CString("hanim_vc4"));
HAnimHumanoid31.setJoints(&HAnimJoint256);

HAnimJoint& HAnimJoint257 =  HAnimJoint();
HAnimJoint257.setUSE(CString("hanim_vc3"));
HAnimHumanoid31.setJoints(&HAnimJoint257);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.setUSE(CString("hanim_vc2"));
HAnimHumanoid31.setJoints(&HAnimJoint258);

HAnimJoint& HAnimJoint259 =  HAnimJoint();
HAnimJoint259.setUSE(CString("hanim_vc1"));
HAnimHumanoid31.setJoints(&HAnimJoint259);

HAnimJoint& HAnimJoint260 =  HAnimJoint();
HAnimJoint260.setUSE(CString("hanim_skullbase"));
HAnimHumanoid31.setJoints(&HAnimJoint260);

HAnimJoint& HAnimJoint261 =  HAnimJoint();
HAnimJoint261.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid31.setJoints(&HAnimJoint261);

HAnimJoint& HAnimJoint262 =  HAnimJoint();
HAnimJoint262.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid31.setJoints(&HAnimJoint262);

HAnimJoint& HAnimJoint263 =  HAnimJoint();
HAnimJoint263.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid31.setJoints(&HAnimJoint263);

HAnimJoint& HAnimJoint264 =  HAnimJoint();
HAnimJoint264.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid31.setJoints(&HAnimJoint264);

HAnimJoint& HAnimJoint265 =  HAnimJoint();
HAnimJoint265.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid31.setJoints(&HAnimJoint265);

HAnimJoint& HAnimJoint266 =  HAnimJoint();
HAnimJoint266.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid31.setJoints(&HAnimJoint266);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid31.setJoints(&HAnimJoint267);

HAnimJoint& HAnimJoint268 =  HAnimJoint();
HAnimJoint268.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid31.setJoints(&HAnimJoint268);

HAnimJoint& HAnimJoint269 =  HAnimJoint();
HAnimJoint269.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid31.setJoints(&HAnimJoint269);

HAnimJoint& HAnimJoint270 =  HAnimJoint();
HAnimJoint270.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid31.setJoints(&HAnimJoint270);

HAnimJoint& HAnimJoint271 =  HAnimJoint();
HAnimJoint271.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid31.setJoints(&HAnimJoint271);

HAnimJoint& HAnimJoint272 =  HAnimJoint();
HAnimJoint272.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid31.setJoints(&HAnimJoint272);

HAnimJoint& HAnimJoint273 =  HAnimJoint();
HAnimJoint273.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint273);

HAnimJoint& HAnimJoint274 =  HAnimJoint();
HAnimJoint274.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint274);

HAnimJoint& HAnimJoint275 =  HAnimJoint();
HAnimJoint275.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint275);

HAnimJoint& HAnimJoint276 =  HAnimJoint();
HAnimJoint276.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint276);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint277);

HAnimJoint& HAnimJoint278 =  HAnimJoint();
HAnimJoint278.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint278);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint279);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint280);

HAnimJoint& HAnimJoint281 =  HAnimJoint();
HAnimJoint281.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint281);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint282);

HAnimJoint& HAnimJoint283 =  HAnimJoint();
HAnimJoint283.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint283);

HAnimJoint& HAnimJoint284 =  HAnimJoint();
HAnimJoint284.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint284);

HAnimJoint& HAnimJoint285 =  HAnimJoint();
HAnimJoint285.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint285);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint286);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid31.setJoints(&HAnimJoint287);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint288);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint290);

HAnimJoint& HAnimJoint291 =  HAnimJoint();
HAnimJoint291.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint291);

HAnimJoint& HAnimJoint292 =  HAnimJoint();
HAnimJoint292.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint292);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint293);

HAnimJoint& HAnimJoint294 =  HAnimJoint();
HAnimJoint294.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint295);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid31.setJoints(&HAnimJoint296);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid31.setJoints(&HAnimJoint297);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid31.setJoints(&HAnimJoint298);

HAnimJoint& HAnimJoint299 =  HAnimJoint();
HAnimJoint299.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid31.setJoints(&HAnimJoint299);

HAnimJoint& HAnimJoint300 =  HAnimJoint();
HAnimJoint300.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid31.setJoints(&HAnimJoint300);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint301);

HAnimJoint& HAnimJoint302 =  HAnimJoint();
HAnimJoint302.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint302);

HAnimJoint& HAnimJoint303 =  HAnimJoint();
HAnimJoint303.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint303);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid31.setJoints(&HAnimJoint304);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint305);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint306);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint307);

HAnimJoint& HAnimJoint308 =  HAnimJoint();
HAnimJoint308.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint308);

HAnimJoint& HAnimJoint309 =  HAnimJoint();
HAnimJoint309.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid31.setJoints(&HAnimJoint309);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint310);

HAnimJoint& HAnimJoint311 =  HAnimJoint();
HAnimJoint311.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint311);

HAnimJoint& HAnimJoint312 =  HAnimJoint();
HAnimJoint312.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint312);

HAnimJoint& HAnimJoint313 =  HAnimJoint();
HAnimJoint313.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint313);

HAnimJoint& HAnimJoint314 =  HAnimJoint();
HAnimJoint314.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid31.setJoints(&HAnimJoint314);

HAnimJoint& HAnimJoint315 =  HAnimJoint();
HAnimJoint315.setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid31.setJoints(&HAnimJoint315);

HAnimJoint& HAnimJoint316 =  HAnimJoint();
HAnimJoint316.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint316);

HAnimJoint& HAnimJoint317 =  HAnimJoint();
HAnimJoint317.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint317);

HAnimJoint& HAnimJoint318 =  HAnimJoint();
HAnimJoint318.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint318);

HAnimJoint& HAnimJoint319 =  HAnimJoint();
HAnimJoint319.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid31.setJoints(&HAnimJoint319);

HAnimJoint& HAnimJoint320 =  HAnimJoint();
HAnimJoint320.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint320);

HAnimJoint& HAnimJoint321 =  HAnimJoint();
HAnimJoint321.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint321);

HAnimJoint& HAnimJoint322 =  HAnimJoint();
HAnimJoint322.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint322);

HAnimJoint& HAnimJoint323 =  HAnimJoint();
HAnimJoint323.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid31.setJoints(&HAnimJoint323);

Scene11.addChild(&HAnimHumanoid31);

X3D0.setScene(&Scene11);

}
