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
meta3->setContent(CString("Humanoid4_1.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("identifier"));
meta4->setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d"));
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
Transform* Transform19 = new Transform();
Transform19->setTranslation(new float[3]{0,2,0});
Shape* Shape20 = new Shape();
Shape20->setDEF(CString("HAnimRootShape"));
Sphere* Sphere21 = new Sphere();
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDEF(CString("HAnimRootMaterial"));
Material23->setDiffuseColor(new float[3]{0.8,0,0});
Material23->setTransparency(0.3);
Appearance22->addChild(Material23);

Shape20->addChild(Appearance22);

Transform19->addChild(Shape20);

Transform18->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{0,2.1,0});
Shape* Shape25 = new Shape();
Shape25->setDEF(CString("HAnimJointShape"));
Sphere* Sphere26 = new Sphere();
Sphere26->setRadius(0.02);
Shape25->setGeometry(Sphere26);

Appearance* Appearance27 = new Appearance();
Material* Material28 = new Material();
Material28->setDEF(CString("HAnimJointMaterial"));
Material28->setDiffuseColor(new float[3]{0,0,0.8});
Material28->setTransparency(0.3);
Appearance27->addChild(Material28);

Shape25->addChild(Appearance27);

Transform24->addChild(Shape25);

Transform18->addChild(Transform24);

Transform* Transform29 = new Transform();
Transform29->setTranslation(new float[3]{0,2.05,0});
Shape* Shape30 = new Shape();
Shape30->setDEF(CString("HAnimSegmentLine"));
LineSet* LineSet31 = new LineSet();
LineSet31->setVertexCount(new int32_t[1]{2}, 1);
ColorRGBA* ColorRGBA32 = new ColorRGBA();
ColorRGBA32->setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA32->setColor(new float[8]{1,1,0,1,1,1,0,0.1}, 8);
LineSet31->addChild(ColorRGBA32);

Coordinate* Coordinate33 = new Coordinate();
Coordinate33->setPoint(new float[6]{-0.05,0,0,0.05,0,0}, 6);
LineSet31->addChild(Coordinate33);

Shape30->setGeometry(LineSet31);

Transform29->addChild(Shape30);

Transform18->addChild(Transform29);

Transform* Transform34 = new Transform();
Transform34->setTranslation(new float[3]{0,2.1,0});
Shape* Shape35 = new Shape();
Shape35->setDEF(CString("HAnimSiteShape"));
IndexedFaceSet* IndexedFaceSet36 = new IndexedFaceSet();
IndexedFaceSet36->setDEF(CString("DiamondIFS"));
IndexedFaceSet36->setCreaseAngle(0.5);
IndexedFaceSet36->setSolid(False);
IndexedFaceSet36->setCoordIndex(new int32_t[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA* ColorRGBA37 = new ColorRGBA();
ColorRGBA37->setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA37->setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1}, 24);
IndexedFaceSet36->addChild(ColorRGBA37);

Coordinate* Coordinate38 = new Coordinate();
Coordinate38->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet36->addChild(Coordinate38);

Shape35->setGeometry(IndexedFaceSet36);

Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setDiffuseColor(new float[3]{1,1,0});
Material40->setTransparency(0.3);
Appearance39->addChild(Material40);

Shape35->addChild(Appearance39);

Transform34->addChild(Shape35);

Transform18->addChild(Transform34);

Group17->addChild(Transform18);

Scene11->addChild(Group17);

NavigationInfo* NavigationInfo41 = new NavigationInfo();
NavigationInfo41->setSpeed(1.5);
Scene11->addChild(NavigationInfo41);

Viewpoint* Viewpoint42 = new Viewpoint();
Viewpoint42->setDescription(CString("default"));
Scene11->addChild(Viewpoint42);

HAnimHumanoid* HAnimHumanoid43 = new HAnimHumanoid();
HAnimHumanoid43->setName(CString("HAnim"));
HAnimHumanoid43->setDEF(CString("hanim_HAnim"));
HAnimHumanoid43->setInfo(new CString[1]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid43->setVersion(CString("2.0"));
//</LOD>
Coordinate* Coordinate44 = new Coordinate();
Coordinate44->setUSE(CString("TheSkinCoord"));
HAnimHumanoid43->setSkinCoord(Coordinate44);

HAnimJoint* HAnimJoint45 = new HAnimJoint();
HAnimJoint45->setName(CString("humanoid_root"));
HAnimJoint45->setDEF(CString("hanim_humanoid_root"));
HAnimJoint45->setCenter(new float[3]{0,0.824,0.0277});
HAnimSegment* HAnimSegment46 = new HAnimSegment();
HAnimSegment46->setName(CString("sacrum"));
HAnimSegment46->setDEF(CString("hanim_sacrum"));
Transform* Transform47 = new Transform();
Transform47->setTranslation(new float[3]{0,0.824,0.0277});
Transform* Transform48 = new Transform();
//Empty Transform
Shape* Shape49 = new Shape();
Shape49->setUSE(CString("HAnimJointShape"));
Transform48->addChild(Shape49);

Transform47->addChild(Transform48);

HAnimSegment46->addChild(Transform47);

Shape* Shape50 = new Shape();
LineSet* LineSet51 = new LineSet();
LineSet51->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate52 = new Coordinate();
Coordinate52->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet51->addChild(Coordinate52);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA* ColorRGBA53 = new ColorRGBA();
ColorRGBA53->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet51->addChild(ColorRGBA53);

Shape50->setGeometry(LineSet51);

HAnimSegment46->addChild(Shape50);

HAnimSite* HAnimSite54 = new HAnimSite();
HAnimSite54->setName(CString("buttocks_standing_wall_contact_point_pt"));
HAnimSite54->setDEF(CString("hanim_buttocks_standing_wall_contact_point_pt"));
TouchSensor* TouchSensor55 = new TouchSensor();
TouchSensor55->setDescription(CString("HAnimSite buttocks_standing_wall_contact_point_pt"));
HAnimSite54->addChild(TouchSensor55);

Shape* Shape56 = new Shape();
Shape56->setUSE(CString("HAnimSiteShape"));
HAnimSite54->addChild(Shape56);

HAnimSegment46->addChild(HAnimSite54);

HAnimSite* HAnimSite57 = new HAnimSite();
HAnimSite57->setName(CString("crotch_pt"));
HAnimSite57->setDEF(CString("hanim_crotch_pt"));
HAnimSite57->setTranslation(new float[3]{0.0034,0.8266,0.0257});
TouchSensor* TouchSensor58 = new TouchSensor();
TouchSensor58->setDescription(CString("HAnimSite crotch_pt"));
HAnimSite57->addChild(TouchSensor58);

Shape* Shape59 = new Shape();
Shape59->setUSE(CString("HAnimSiteShape"));
HAnimSite57->addChild(Shape59);

HAnimSegment46->addChild(HAnimSite57);

HAnimSite* HAnimSite60 = new HAnimSite();
HAnimSite60->setName(CString("l_asis_pt"));
HAnimSite60->setDEF(CString("hanim_l_asis_pt"));
HAnimSite60->setTranslation(new float[3]{0.0925,0.9983,0.1052});
TouchSensor* TouchSensor61 = new TouchSensor();
TouchSensor61->setDescription(CString("HAnimSite l_asis_pt"));
HAnimSite60->addChild(TouchSensor61);

Shape* Shape62 = new Shape();
Shape62->setUSE(CString("HAnimSiteShape"));
HAnimSite60->addChild(Shape62);

HAnimSegment46->addChild(HAnimSite60);

HAnimSite* HAnimSite63 = new HAnimSite();
HAnimSite63->setName(CString("l_iliocristale_pt"));
HAnimSite63->setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite63->setTranslation(new float[3]{0.1612,1.0537,0.0008});
TouchSensor* TouchSensor64 = new TouchSensor();
TouchSensor64->setDescription(CString("HAnimSite l_iliocristale_pt"));
HAnimSite63->addChild(TouchSensor64);

Shape* Shape65 = new Shape();
Shape65->setUSE(CString("HAnimSiteShape"));
HAnimSite63->addChild(Shape65);

HAnimSegment46->addChild(HAnimSite63);

HAnimSite* HAnimSite66 = new HAnimSite();
HAnimSite66->setName(CString("l_psis_pt"));
HAnimSite66->setDEF(CString("hanim_l_psis_pt"));
HAnimSite66->setTranslation(new float[3]{0.0774,1.019,-0.1151});
TouchSensor* TouchSensor67 = new TouchSensor();
TouchSensor67->setDescription(CString("HAnimSite l_psis_pt"));
HAnimSite66->addChild(TouchSensor67);

Shape* Shape68 = new Shape();
Shape68->setUSE(CString("HAnimSiteShape"));
HAnimSite66->addChild(Shape68);

HAnimSegment46->addChild(HAnimSite66);

HAnimSite* HAnimSite69 = new HAnimSite();
HAnimSite69->setName(CString("l_trochanterion_pt"));
HAnimSite69->setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite69->setTranslation(new float[3]{0.1677,0.8336,0.0303});
TouchSensor* TouchSensor70 = new TouchSensor();
TouchSensor70->setDescription(CString("HAnimSite l_trochanterion_pt"));
HAnimSite69->addChild(TouchSensor70);

Shape* Shape71 = new Shape();
Shape71->setUSE(CString("HAnimSiteShape"));
HAnimSite69->addChild(Shape71);

HAnimSegment46->addChild(HAnimSite69);

HAnimSite* HAnimSite72 = new HAnimSite();
HAnimSite72->setName(CString("r_asis_pt"));
HAnimSite72->setDEF(CString("hanim_r_asis_pt"));
HAnimSite72->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
TouchSensor* TouchSensor73 = new TouchSensor();
TouchSensor73->setDescription(CString("HAnimSite r_asis_pt"));
HAnimSite72->addChild(TouchSensor73);

Shape* Shape74 = new Shape();
Shape74->setUSE(CString("HAnimSiteShape"));
HAnimSite72->addChild(Shape74);

HAnimSegment46->addChild(HAnimSite72);

HAnimSite* HAnimSite75 = new HAnimSite();
HAnimSite75->setName(CString("r_iliocristale_pt"));
HAnimSite75->setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite75->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
TouchSensor* TouchSensor76 = new TouchSensor();
TouchSensor76->setDescription(CString("HAnimSite r_iliocristale_pt"));
HAnimSite75->addChild(TouchSensor76);

Shape* Shape77 = new Shape();
Shape77->setUSE(CString("HAnimSiteShape"));
HAnimSite75->addChild(Shape77);

HAnimSegment46->addChild(HAnimSite75);

HAnimSite* HAnimSite78 = new HAnimSite();
HAnimSite78->setName(CString("r_psis_pt"));
HAnimSite78->setDEF(CString("hanim_r_psis_pt"));
HAnimSite78->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
TouchSensor* TouchSensor79 = new TouchSensor();
TouchSensor79->setDescription(CString("HAnimSite r_psis_pt"));
HAnimSite78->addChild(TouchSensor79);

Shape* Shape80 = new Shape();
Shape80->setUSE(CString("HAnimSiteShape"));
HAnimSite78->addChild(Shape80);

HAnimSegment46->addChild(HAnimSite78);

HAnimSite* HAnimSite81 = new HAnimSite();
HAnimSite81->setName(CString("r_trochanterion_pt"));
HAnimSite81->setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite81->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
TouchSensor* TouchSensor82 = new TouchSensor();
TouchSensor82->setDescription(CString("HAnimSite r_trochanterion_pt"));
HAnimSite81->addChild(TouchSensor82);

Shape* Shape83 = new Shape();
Shape83->setUSE(CString("HAnimSiteShape"));
HAnimSite81->addChild(Shape83);

HAnimSegment46->addChild(HAnimSite81);

Shape* Shape84 = new Shape();
LineSet* LineSet85 = new LineSet();
LineSet85->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate86 = new Coordinate();
Coordinate86->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet85->addChild(Coordinate86);

//from humanoid_root to vl5 vertices 2
ColorRGBA* ColorRGBA87 = new ColorRGBA();
ColorRGBA87->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet85->addChild(ColorRGBA87);

Shape84->setGeometry(LineSet85);

HAnimSegment46->addChild(Shape84);

HAnimSite* HAnimSite88 = new HAnimSite();
HAnimSite88->setName(CString("navel_pt"));
HAnimSite88->setDEF(CString("hanim_navel_pt"));
HAnimSite88->setTranslation(new float[3]{0.0069,1.0966,0.1017});
TouchSensor* TouchSensor89 = new TouchSensor();
TouchSensor89->setDescription(CString("HAnimSite navel_pt"));
HAnimSite88->addChild(TouchSensor89);

Shape* Shape90 = new Shape();
Shape90->setUSE(CString("HAnimSiteShape"));
HAnimSite88->addChild(Shape90);

HAnimSegment46->addChild(HAnimSite88);

HAnimSite* HAnimSite91 = new HAnimSite();
HAnimSite91->setName(CString("waist_preferred_anterior_pt"));
HAnimSite91->setDEF(CString("hanim_waist_preferred_anterior_pt"));
TouchSensor* TouchSensor92 = new TouchSensor();
TouchSensor92->setDescription(CString("HAnimSite waist_preferred_anterior_pt"));
HAnimSite91->addChild(TouchSensor92);

Shape* Shape93 = new Shape();
Shape93->setUSE(CString("HAnimSiteShape"));
HAnimSite91->addChild(Shape93);

HAnimSegment46->addChild(HAnimSite91);

HAnimSite* HAnimSite94 = new HAnimSite();
HAnimSite94->setName(CString("waist_preferred_posterior_pt"));
HAnimSite94->setDEF(CString("hanim_waist_preferred_posterior_pt"));
HAnimSite94->setTranslation(new float[3]{0.29,1.0915,-0.1091});
TouchSensor* TouchSensor95 = new TouchSensor();
TouchSensor95->setDescription(CString("HAnimSite waist_preferred_posterior_pt"));
HAnimSite94->addChild(TouchSensor95);

Shape* Shape96 = new Shape();
Shape96->setUSE(CString("HAnimSiteShape"));
HAnimSite94->addChild(Shape96);

HAnimSegment46->addChild(HAnimSite94);

HAnimJoint45->addChild(HAnimSegment46);

HAnimJoint* HAnimJoint97 = new HAnimJoint();
HAnimJoint97->setName(CString("sacroiliac"));
HAnimJoint97->setDEF(CString("hanim_sacroiliac"));
HAnimJoint97->setCenter(new float[3]{0,0.9149,0.0016});
HAnimSegment* HAnimSegment98 = new HAnimSegment();
HAnimSegment98->setName(CString("pelvis"));
HAnimSegment98->setDEF(CString("hanim_pelvis"));
Transform* Transform99 = new Transform();
Transform99->setTranslation(new float[3]{0,0.9149,0.0016});
Transform* Transform100 = new Transform();
//Empty Transform
Shape* Shape101 = new Shape();
Shape101->setUSE(CString("HAnimJointShape"));
Transform100->addChild(Shape101);

Transform99->addChild(Transform100);

HAnimSegment98->addChild(Transform99);

Shape* Shape102 = new Shape();
LineSet* LineSet103 = new LineSet();
LineSet103->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate104 = new Coordinate();
Coordinate104->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet103->addChild(Coordinate104);

//from sacroiliac to l_hip vertices 2
ColorRGBA* ColorRGBA105 = new ColorRGBA();
ColorRGBA105->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet103->addChild(ColorRGBA105);

Shape102->setGeometry(LineSet103);

HAnimSegment98->addChild(Shape102);

HAnimSite* HAnimSite106 = new HAnimSite();
HAnimSite106->setName(CString("l_femoral_lateral_epicondyles_pt"));
HAnimSite106->setDEF(CString("hanim_l_femoral_lateral_epicondyles_pt"));
HAnimSite106->setTranslation(new float[3]{0.1598,0.4967,0.0297});
TouchSensor* TouchSensor107 = new TouchSensor();
TouchSensor107->setDescription(CString("HAnimSite l_femoral_lateral_epicondyles_pt"));
HAnimSite106->addChild(TouchSensor107);

Shape* Shape108 = new Shape();
Shape108->setUSE(CString("HAnimSiteShape"));
HAnimSite106->addChild(Shape108);

HAnimSegment98->addChild(HAnimSite106);

HAnimSite* HAnimSite109 = new HAnimSite();
HAnimSite109->setName(CString("l_femoral_medial_epicondyles_pt"));
HAnimSite109->setDEF(CString("hanim_l_femoral_medial_epicondyles_pt"));
HAnimSite109->setTranslation(new float[3]{0.0398,0.4946,0.0303});
TouchSensor* TouchSensor110 = new TouchSensor();
TouchSensor110->setDescription(CString("HAnimSite l_femoral_medial_epicondyles_pt"));
HAnimSite109->addChild(TouchSensor110);

Shape* Shape111 = new Shape();
Shape111->setUSE(CString("HAnimSiteShape"));
HAnimSite109->addChild(Shape111);

HAnimSegment98->addChild(HAnimSite109);

HAnimSite* HAnimSite112 = new HAnimSite();
HAnimSite112->setName(CString("l_knee_crease_pt"));
HAnimSite112->setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite112->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
TouchSensor* TouchSensor113 = new TouchSensor();
TouchSensor113->setDescription(CString("HAnimSite l_knee_crease_pt"));
HAnimSite112->addChild(TouchSensor113);

Shape* Shape114 = new Shape();
Shape114->setUSE(CString("HAnimSiteShape"));
HAnimSite112->addChild(Shape114);

HAnimSegment98->addChild(HAnimSite112);

HAnimSite* HAnimSite115 = new HAnimSite();
HAnimSite115->setName(CString("l_suprapatella_pt"));
HAnimSite115->setDEF(CString("hanim_l_suprapatella_pt"));
TouchSensor* TouchSensor116 = new TouchSensor();
TouchSensor116->setDescription(CString("HAnimSite l_suprapatella_pt"));
HAnimSite115->addChild(TouchSensor116);

Shape* Shape117 = new Shape();
Shape117->setUSE(CString("HAnimSiteShape"));
HAnimSite115->addChild(Shape117);

HAnimSegment98->addChild(HAnimSite115);

Shape* Shape118 = new Shape();
LineSet* LineSet119 = new LineSet();
LineSet119->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate120 = new Coordinate();
Coordinate120->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet119->addChild(Coordinate120);

//from sacroiliac to r_hip vertices 2
ColorRGBA* ColorRGBA121 = new ColorRGBA();
ColorRGBA121->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet119->addChild(ColorRGBA121);

Shape118->setGeometry(LineSet119);

HAnimSegment98->addChild(Shape118);

HAnimSite* HAnimSite122 = new HAnimSite();
HAnimSite122->setName(CString("r_femoral_lateral_epicondyles_pt"));
HAnimSite122->setDEF(CString("hanim_r_femoral_lateral_epicondyles_pt"));
HAnimSite122->setTranslation(new float[3]{-0.1421,0.4992,0.031});
TouchSensor* TouchSensor123 = new TouchSensor();
TouchSensor123->setDescription(CString("HAnimSite r_femoral_lateral_epicondyles_pt"));
HAnimSite122->addChild(TouchSensor123);

Shape* Shape124 = new Shape();
Shape124->setUSE(CString("HAnimSiteShape"));
HAnimSite122->addChild(Shape124);

HAnimSegment98->addChild(HAnimSite122);

HAnimSite* HAnimSite125 = new HAnimSite();
HAnimSite125->setName(CString("r_femoral_medial_epicondyles_pt"));
HAnimSite125->setDEF(CString("hanim_r_femoral_medial_epicondyles_pt"));
HAnimSite125->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
TouchSensor* TouchSensor126 = new TouchSensor();
TouchSensor126->setDescription(CString("HAnimSite r_femoral_medial_epicondyles_pt"));
HAnimSite125->addChild(TouchSensor126);

Shape* Shape127 = new Shape();
Shape127->setUSE(CString("HAnimSiteShape"));
HAnimSite125->addChild(Shape127);

HAnimSegment98->addChild(HAnimSite125);

HAnimSite* HAnimSite128 = new HAnimSite();
HAnimSite128->setName(CString("r_knee_crease_pt"));
HAnimSite128->setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite128->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
TouchSensor* TouchSensor129 = new TouchSensor();
TouchSensor129->setDescription(CString("HAnimSite r_knee_crease_pt"));
HAnimSite128->addChild(TouchSensor129);

Shape* Shape130 = new Shape();
Shape130->setUSE(CString("HAnimSiteShape"));
HAnimSite128->addChild(Shape130);

HAnimSegment98->addChild(HAnimSite128);

HAnimSite* HAnimSite131 = new HAnimSite();
HAnimSite131->setName(CString("r_suprapatella_pt"));
HAnimSite131->setDEF(CString("hanim_r_suprapatella_pt"));
TouchSensor* TouchSensor132 = new TouchSensor();
TouchSensor132->setDescription(CString("HAnimSite r_suprapatella_pt"));
HAnimSite131->addChild(TouchSensor132);

Shape* Shape133 = new Shape();
Shape133->setUSE(CString("HAnimSiteShape"));
HAnimSite131->addChild(Shape133);

HAnimSegment98->addChild(HAnimSite131);

HAnimJoint97->addChild(HAnimSegment98);

HAnimJoint* HAnimJoint134 = new HAnimJoint();
HAnimJoint134->setName(CString("l_hip"));
HAnimJoint134->setDEF(CString("hanim_l_hip"));
HAnimJoint134->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimSegment* HAnimSegment135 = new HAnimSegment();
HAnimSegment135->setName(CString("l_thigh"));
HAnimSegment135->setDEF(CString("hanim_l_thigh"));
Transform* Transform136 = new Transform();
Transform136->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
Transform* Transform137 = new Transform();
//Empty Transform
Shape* Shape138 = new Shape();
Shape138->setUSE(CString("HAnimJointShape"));
Transform137->addChild(Shape138);

Transform136->addChild(Transform137);

HAnimSegment135->addChild(Transform136);

Shape* Shape139 = new Shape();
LineSet* LineSet140 = new LineSet();
LineSet140->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate141 = new Coordinate();
Coordinate141->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet140->addChild(Coordinate141);

//from l_hip to l_knee vertices 2
ColorRGBA* ColorRGBA142 = new ColorRGBA();
ColorRGBA142->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet140->addChild(ColorRGBA142);

Shape139->setGeometry(LineSet140);

HAnimSegment135->addChild(Shape139);

HAnimSite* HAnimSite143 = new HAnimSite();
HAnimSite143->setName(CString("l_lateral_malleolus_pt"));
HAnimSite143->setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite143->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
TouchSensor* TouchSensor144 = new TouchSensor();
TouchSensor144->setDescription(CString("HAnimSite l_lateral_malleolus_pt"));
HAnimSite143->addChild(TouchSensor144);

Shape* Shape145 = new Shape();
Shape145->setUSE(CString("HAnimSiteShape"));
HAnimSite143->addChild(Shape145);

HAnimSegment135->addChild(HAnimSite143);

HAnimSite* HAnimSite146 = new HAnimSite();
HAnimSite146->setName(CString("l_medial_malleolus_pt"));
HAnimSite146->setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite146->setTranslation(new float[3]{0.089,0.0716,-0.0881});
TouchSensor* TouchSensor147 = new TouchSensor();
TouchSensor147->setDescription(CString("HAnimSite l_medial_malleolus_pt"));
HAnimSite146->addChild(TouchSensor147);

Shape* Shape148 = new Shape();
Shape148->setUSE(CString("HAnimSiteShape"));
HAnimSite146->addChild(Shape148);

HAnimSegment135->addChild(HAnimSite146);

HAnimSite* HAnimSite149 = new HAnimSite();
HAnimSite149->setName(CString("l_tibiale_pt"));
HAnimSite149->setDEF(CString("hanim_l_tibiale_pt"));
TouchSensor* TouchSensor150 = new TouchSensor();
TouchSensor150->setDescription(CString("HAnimSite l_tibiale_pt"));
HAnimSite149->addChild(TouchSensor150);

Shape* Shape151 = new Shape();
Shape151->setUSE(CString("HAnimSiteShape"));
HAnimSite149->addChild(Shape151);

HAnimSegment135->addChild(HAnimSite149);

HAnimJoint134->addChild(HAnimSegment135);

HAnimJoint* HAnimJoint152 = new HAnimJoint();
HAnimJoint152->setName(CString("l_knee"));
HAnimJoint152->setDEF(CString("hanim_l_knee"));
HAnimJoint152->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimSegment* HAnimSegment153 = new HAnimSegment();
HAnimSegment153->setName(CString("l_calf"));
HAnimSegment153->setDEF(CString("hanim_l_calf"));
Transform* Transform154 = new Transform();
Transform154->setTranslation(new float[3]{0.104,0.4867,0.0308});
Transform* Transform155 = new Transform();
//Empty Transform
Shape* Shape156 = new Shape();
Shape156->setUSE(CString("HAnimJointShape"));
Transform155->addChild(Shape156);

Transform154->addChild(Transform155);

HAnimSegment153->addChild(Transform154);

Shape* Shape157 = new Shape();
LineSet* LineSet158 = new LineSet();
LineSet158->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate159 = new Coordinate();
Coordinate159->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet158->addChild(Coordinate159);

//from l_knee to l_talocrural vertices 2
ColorRGBA* ColorRGBA160 = new ColorRGBA();
ColorRGBA160->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet158->addChild(ColorRGBA160);

Shape157->setGeometry(LineSet158);

HAnimSegment153->addChild(Shape157);

HAnimSite* HAnimSite161 = new HAnimSite();
HAnimSite161->setName(CString("l_calcaneus_posterior_pt"));
HAnimSite161->setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite161->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
TouchSensor* TouchSensor162 = new TouchSensor();
TouchSensor162->setDescription(CString("HAnimSite l_calcaneus_posterior_pt"));
HAnimSite161->addChild(TouchSensor162);

Shape* Shape163 = new Shape();
Shape163->setUSE(CString("HAnimSiteShape"));
HAnimSite161->addChild(Shape163);

HAnimSegment153->addChild(HAnimSite161);

HAnimSite* HAnimSite164 = new HAnimSite();
HAnimSite164->setName(CString("l_sphyrion_pt"));
HAnimSite164->setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite164->setTranslation(new float[3]{0.089,0.0575,-0.0943});
TouchSensor* TouchSensor165 = new TouchSensor();
TouchSensor165->setDescription(CString("HAnimSite l_sphyrion_pt"));
HAnimSite164->addChild(TouchSensor165);

Shape* Shape166 = new Shape();
Shape166->setUSE(CString("HAnimSiteShape"));
HAnimSite164->addChild(Shape166);

HAnimSegment153->addChild(HAnimSite164);

HAnimJoint152->addChild(HAnimSegment153);

HAnimJoint* HAnimJoint167 = new HAnimJoint();
HAnimJoint167->setName(CString("l_talocrural"));
HAnimJoint167->setDEF(CString("hanim_l_talocrural"));
HAnimJoint167->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimSegment* HAnimSegment168 = new HAnimSegment();
HAnimSegment168->setName(CString("l_talus"));
HAnimSegment168->setDEF(CString("hanim_l_talus"));
Transform* Transform169 = new Transform();
Transform169->setScale(new float[3]{0.15,0.15,0.15});
Transform169->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform169->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
Transform* Transform170 = new Transform();
//Empty Transform left foot
Shape* Shape171 = new Shape();
Shape171->setUSE(CString("HAnimJointShape"));
Transform170->addChild(Shape171);

Transform169->addChild(Transform170);

HAnimSegment168->addChild(Transform169);

Shape* Shape172 = new Shape();
LineSet* LineSet173 = new LineSet();
LineSet173->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate174 = new Coordinate();
Coordinate174->setPoint(new float[6]{0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807}, 6);
LineSet173->addChild(Coordinate174);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA* ColorRGBA175 = new ColorRGBA();
ColorRGBA175->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet173->addChild(ColorRGBA175);

Shape172->setGeometry(LineSet173);

HAnimSegment168->addChild(Shape172);

Shape* Shape176 = new Shape();
LineSet* LineSet177 = new LineSet();
LineSet177->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate178 = new Coordinate();
Coordinate178->setPoint(new float[6]{0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895}, 6);
LineSet177->addChild(Coordinate178);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA* ColorRGBA179 = new ColorRGBA();
ColorRGBA179->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet177->addChild(ColorRGBA179);

Shape176->setGeometry(LineSet177);

HAnimSegment168->addChild(Shape176);

HAnimJoint167->addChild(HAnimSegment168);

HAnimJoint* HAnimJoint180 = new HAnimJoint();
HAnimJoint180->setName(CString("l_talocalcaneonavicular"));
HAnimJoint180->setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint180->setCenter(new float[3]{3.4715,0.0374,0.6807});
HAnimSegment* HAnimSegment181 = new HAnimSegment();
HAnimSegment181->setName(CString("l_navicular"));
HAnimSegment181->setDEF(CString("hanim_l_navicular"));
Transform* Transform182 = new Transform();
Transform182->setTranslation(new float[3]{3.4715,0.0374,0.6807});
Transform* Transform183 = new Transform();
//Empty Transform
Shape* Shape184 = new Shape();
Shape184->setUSE(CString("HAnimJointShape"));
Transform183->addChild(Shape184);

Transform182->addChild(Transform183);

HAnimSegment181->addChild(Transform182);

Shape* Shape185 = new Shape();
LineSet* LineSet186 = new LineSet();
LineSet186->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate187 = new Coordinate();
Coordinate187->setPoint(new float[6]{3.4715,0.0374,0.6807,2.9855,0.0311,1.2819}, 6);
LineSet186->addChild(Coordinate187);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA* ColorRGBA188 = new ColorRGBA();
ColorRGBA188->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet186->addChild(ColorRGBA188);

Shape185->setGeometry(LineSet186);

HAnimSegment181->addChild(Shape185);

Shape* Shape189 = new Shape();
LineSet* LineSet190 = new LineSet();
LineSet190->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate191 = new Coordinate();
Coordinate191->setPoint(new float[6]{3.4715,0.0374,0.6807,3.6105,0.033,1.4168}, 6);
LineSet190->addChild(Coordinate191);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA* ColorRGBA192 = new ColorRGBA();
ColorRGBA192->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet190->addChild(ColorRGBA192);

Shape189->setGeometry(LineSet190);

HAnimSegment181->addChild(Shape189);

Shape* Shape193 = new Shape();
LineSet* LineSet194 = new LineSet();
LineSet194->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate195 = new Coordinate();
Coordinate195->setPoint(new float[6]{3.4715,0.0374,0.6807,4.1235,0.0328,1.3453}, 6);
LineSet194->addChild(Coordinate195);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA* ColorRGBA196 = new ColorRGBA();
ColorRGBA196->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet194->addChild(ColorRGBA196);

Shape193->setGeometry(LineSet194);

HAnimSegment181->addChild(Shape193);

HAnimJoint180->addChild(HAnimSegment181);

HAnimJoint* HAnimJoint197 = new HAnimJoint();
HAnimJoint197->setName(CString("l_cuneonavicular_1"));
HAnimJoint197->setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint197->setCenter(new float[3]{2.9855,0.0311,1.2819});
HAnimSegment* HAnimSegment198 = new HAnimSegment();
HAnimSegment198->setName(CString("l_cuneiform_1"));
HAnimSegment198->setDEF(CString("hanim_l_cuneiform_1"));
Transform* Transform199 = new Transform();
Transform199->setTranslation(new float[3]{2.9855,0.0311,1.2819});
Transform* Transform200 = new Transform();
//Empty Transform
Shape* Shape201 = new Shape();
Shape201->setUSE(CString("HAnimJointShape"));
Transform200->addChild(Shape201);

Transform199->addChild(Transform200);

HAnimSegment198->addChild(Transform199);

Shape* Shape202 = new Shape();
LineSet* LineSet203 = new LineSet();
LineSet203->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate204 = new Coordinate();
Coordinate204->setPoint(new float[6]{2.9855,0.0311,1.2819,2.8635,0.0194,2.4285}, 6);
LineSet203->addChild(Coordinate204);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA* ColorRGBA205 = new ColorRGBA();
ColorRGBA205->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet203->addChild(ColorRGBA205);

Shape202->setGeometry(LineSet203);

HAnimSegment198->addChild(Shape202);

HAnimJoint197->addChild(HAnimSegment198);

HAnimJoint* HAnimJoint206 = new HAnimJoint();
HAnimJoint206->setName(CString("l_tarsometatarsal_1"));
HAnimJoint206->setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint206->setCenter(new float[3]{2.8635,0.0194,2.4285});
HAnimSegment* HAnimSegment207 = new HAnimSegment();
HAnimSegment207->setName(CString("l_metatarsal_1"));
HAnimSegment207->setDEF(CString("hanim_l_metatarsal_1"));
Transform* Transform208 = new Transform();
Transform208->setTranslation(new float[3]{2.8635,0.0194,2.4285});
Transform* Transform209 = new Transform();
//Empty Transform
Shape* Shape210 = new Shape();
Shape210->setUSE(CString("HAnimJointShape"));
Transform209->addChild(Shape210);

Transform208->addChild(Transform209);

HAnimSegment207->addChild(Transform208);

Shape* Shape211 = new Shape();
LineSet* LineSet212 = new LineSet();
LineSet212->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate213 = new Coordinate();
Coordinate213->setPoint(new float[6]{2.8635,0.0194,2.4285,2.7525,0.0077,4.6255}, 6);
LineSet212->addChild(Coordinate213);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA* ColorRGBA214 = new ColorRGBA();
ColorRGBA214->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet212->addChild(ColorRGBA214);

Shape211->setGeometry(LineSet212);

HAnimSegment207->addChild(Shape211);

HAnimSite* HAnimSite215 = new HAnimSite();
HAnimSite215->setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite215->setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
TouchSensor* TouchSensor216 = new TouchSensor();
TouchSensor216->setDescription(CString("HAnimSite l_metatarsal_phalanx_1_pt"));
HAnimSite215->addChild(TouchSensor216);

Shape* Shape217 = new Shape();
Shape217->setUSE(CString("HAnimSiteShape"));
HAnimSite215->addChild(Shape217);

HAnimSegment207->addChild(HAnimSite215);

HAnimJoint206->addChild(HAnimSegment207);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setName(CString("l_metatarsophalangeal_1"));
HAnimJoint218->setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint218->setCenter(new float[3]{2.7525,0.0077,4.6255});
HAnimSegment* HAnimSegment219 = new HAnimSegment();
HAnimSegment219->setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment219->setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform* Transform220 = new Transform();
Transform220->setTranslation(new float[3]{2.7525,0.0077,4.6255});
Transform* Transform221 = new Transform();
//Empty Transform
Shape* Shape222 = new Shape();
Shape222->setUSE(CString("HAnimJointShape"));
Transform221->addChild(Shape222);

Transform220->addChild(Transform221);

HAnimSegment219->addChild(Transform220);

Shape* Shape223 = new Shape();
LineSet* LineSet224 = new LineSet();
LineSet224->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate225 = new Coordinate();
Coordinate225->setPoint(new float[6]{2.7525,0.0077,4.6255,2.7525,0.0077,4.6255}, 6);
LineSet224->addChild(Coordinate225);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA226 = new ColorRGBA();
ColorRGBA226->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet224->addChild(ColorRGBA226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChild(Shape223);

HAnimSite* HAnimSite227 = new HAnimSite();
HAnimSite227->setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite227->setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor228 = new TouchSensor();
TouchSensor228->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite227->addChild(TouchSensor228);

Shape* Shape229 = new Shape();
Shape229->setUSE(CString("HAnimSiteShape"));
HAnimSite227->addChild(Shape229);

HAnimSegment219->addChild(HAnimSite227);

HAnimJoint218->addChild(HAnimSegment219);

HAnimJoint* HAnimJoint230 = new HAnimJoint();
HAnimJoint230->setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint230->setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint218->addChild(HAnimJoint230);

HAnimJoint206->addChild(HAnimJoint218);

HAnimJoint197->addChild(HAnimJoint206);

HAnimJoint180->addChild(HAnimJoint197);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setName(CString("l_cuneonavicular_2"));
HAnimJoint231->setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint231->setCenter(new float[3]{3.6105,0.033,1.4168});
HAnimSegment* HAnimSegment232 = new HAnimSegment();
HAnimSegment232->setName(CString("l_cuneiform_2"));
HAnimSegment232->setDEF(CString("hanim_l_cuneiform_2"));
Transform* Transform233 = new Transform();
Transform233->setTranslation(new float[3]{3.6105,0.033,1.4168});
Transform* Transform234 = new Transform();
//Empty Transform
Shape* Shape235 = new Shape();
Shape235->setUSE(CString("HAnimJointShape"));
Transform234->addChild(Shape235);

Transform233->addChild(Transform234);

HAnimSegment232->addChild(Transform233);

Shape* Shape236 = new Shape();
LineSet* LineSet237 = new LineSet();
LineSet237->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate238 = new Coordinate();
Coordinate238->setPoint(new float[6]{3.6105,0.033,1.4168,3.5555,0.0232,2.2895}, 6);
LineSet237->addChild(Coordinate238);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA239 = new ColorRGBA();
ColorRGBA239->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet237->addChild(ColorRGBA239);

Shape236->setGeometry(LineSet237);

HAnimSegment232->addChild(Shape236);

HAnimJoint231->addChild(HAnimSegment232);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setName(CString("l_tarsometatarsal_2"));
HAnimJoint240->setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint240->setCenter(new float[3]{3.5555,0.0232,2.2895});
HAnimSegment* HAnimSegment241 = new HAnimSegment();
HAnimSegment241->setName(CString("l_metatarsal_2"));
HAnimSegment241->setDEF(CString("hanim_l_metatarsal_2"));
Transform* Transform242 = new Transform();
Transform242->setTranslation(new float[3]{3.5555,0.0232,2.2895});
Transform* Transform243 = new Transform();
//Empty Transform
Shape* Shape244 = new Shape();
Shape244->setUSE(CString("HAnimJointShape"));
Transform243->addChild(Shape244);

Transform242->addChild(Transform243);

HAnimSegment241->addChild(Transform242);

Shape* Shape245 = new Shape();
LineSet* LineSet246 = new LineSet();
LineSet246->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate247 = new Coordinate();
Coordinate247->setPoint(new float[6]{3.5555,0.0232,2.2895,3.6595,0.0085,4.8125}, 6);
LineSet246->addChild(Coordinate247);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA248 = new ColorRGBA();
ColorRGBA248->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet246->addChild(ColorRGBA248);

Shape245->setGeometry(LineSet246);

HAnimSegment241->addChild(Shape245);

HAnimJoint240->addChild(HAnimSegment241);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setName(CString("l_metatarsophalangeal_2"));
HAnimJoint249->setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint249->setCenter(new float[3]{3.6595,0.0085,4.8125});
HAnimSegment* HAnimSegment250 = new HAnimSegment();
HAnimSegment250->setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment250->setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform* Transform251 = new Transform();
Transform251->setTranslation(new float[3]{3.6595,0.0085,4.8125});
Transform* Transform252 = new Transform();
//Empty Transform
Shape* Shape253 = new Shape();
Shape253->setUSE(CString("HAnimJointShape"));
Transform252->addChild(Shape253);

Transform251->addChild(Transform252);

HAnimSegment250->addChild(Transform251);

Shape* Shape254 = new Shape();
LineSet* LineSet255 = new LineSet();
LineSet255->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate256 = new Coordinate();
Coordinate256->setPoint(new float[6]{3.6595,0.0085,4.8125,3.7385,0.0054,5.5315}, 6);
LineSet255->addChild(Coordinate256);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA257 = new ColorRGBA();
ColorRGBA257->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet255->addChild(ColorRGBA257);

Shape254->setGeometry(LineSet255);

HAnimSegment250->addChild(Shape254);

HAnimJoint249->addChild(HAnimSegment250);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint258->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint258->setCenter(new float[3]{3.7385,0.0054,5.5315});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment259->setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform* Transform260 = new Transform();
Transform260->setTranslation(new float[3]{3.7385,0.0054,5.5315});
Transform* Transform261 = new Transform();
//Empty Transform
Shape* Shape262 = new Shape();
Shape262->setUSE(CString("HAnimJointShape"));
Transform261->addChild(Shape262);

Transform260->addChild(Transform261);

HAnimSegment259->addChild(Transform260);

Shape* Shape263 = new Shape();
LineSet* LineSet264 = new LineSet();
LineSet264->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate265 = new Coordinate();
Coordinate265->setPoint(new float[6]{3.7385,0.0054,5.5315,3.7385,0.0017,5.9505}, 6);
LineSet264->addChild(Coordinate265);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA266 = new ColorRGBA();
ColorRGBA266->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet264->addChild(ColorRGBA266);

Shape263->setGeometry(LineSet264);

HAnimSegment259->addChild(Shape263);

HAnimSite* HAnimSite267 = new HAnimSite();
HAnimSite267->setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite267->setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite267->setTranslation(new float[3]{0.1195,0.0079,0.1433});
TouchSensor* TouchSensor268 = new TouchSensor();
TouchSensor268->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite267->addChild(TouchSensor268);

Shape* Shape269 = new Shape();
Shape269->setUSE(CString("HAnimSiteShape"));
HAnimSite267->addChild(Shape269);

HAnimSegment259->addChild(HAnimSite267);

HAnimJoint258->addChild(HAnimSegment259);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint270->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint270->setCenter(new float[3]{3.7385,0.0017,5.9505});
HAnimJoint258->addChild(HAnimJoint270);

HAnimJoint249->addChild(HAnimJoint258);

HAnimJoint240->addChild(HAnimJoint249);

HAnimJoint231->addChild(HAnimJoint240);

HAnimJoint180->addChild(HAnimJoint231);

HAnimJoint* HAnimJoint271 = new HAnimJoint();
HAnimJoint271->setName(CString("l_cuneonavicular_3"));
HAnimJoint271->setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint271->setCenter(new float[3]{4.1235,0.0328,1.3453});
HAnimSegment* HAnimSegment272 = new HAnimSegment();
HAnimSegment272->setName(CString("l_cuneiform_3"));
HAnimSegment272->setDEF(CString("hanim_l_cuneiform_3"));
Transform* Transform273 = new Transform();
Transform273->setTranslation(new float[3]{4.1235,0.0328,1.3453});
Transform* Transform274 = new Transform();
//Empty Transform
Shape* Shape275 = new Shape();
Shape275->setUSE(CString("HAnimJointShape"));
Transform274->addChild(Shape275);

Transform273->addChild(Transform274);

HAnimSegment272->addChild(Transform273);

Shape* Shape276 = new Shape();
LineSet* LineSet277 = new LineSet();
LineSet277->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate278 = new Coordinate();
Coordinate278->setPoint(new float[6]{4.1235,0.0328,1.3453,3.7385,0.0017,5.9505}, 6);
LineSet277->addChild(Coordinate278);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA* ColorRGBA279 = new ColorRGBA();
ColorRGBA279->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet277->addChild(ColorRGBA279);

Shape276->setGeometry(LineSet277);

HAnimSegment272->addChild(Shape276);

HAnimJoint271->addChild(HAnimSegment272);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setName(CString("l_tarsometatarsal_3"));
HAnimJoint280->setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimSegment* HAnimSegment281 = new HAnimSegment();
HAnimSegment281->setName(CString("l_metatarsal_3"));
HAnimSegment281->setDEF(CString("hanim_l_metatarsal_3"));
Transform* Transform282 = new Transform();
Transform282->setTranslation(new float[3]{4.1235,0.0328,1.3453});
Transform* Transform283 = new Transform();
//Empty Transform
Shape* Shape284 = new Shape();
Shape284->setUSE(CString("HAnimJointShape"));
Transform283->addChild(Shape284);

Transform282->addChild(Transform283);

HAnimSegment281->addChild(Transform282);

Shape* Shape285 = new Shape();
LineSet* LineSet286 = new LineSet();
LineSet286->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate287 = new Coordinate();
Coordinate287->setPoint(new float[3]{4.2795,0.0086,4.7055}, 3);
LineSet286->addChild(Coordinate287);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
ColorRGBA* ColorRGBA288 = new ColorRGBA();
ColorRGBA288->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet286->addChild(ColorRGBA288);

Shape285->setGeometry(LineSet286);

HAnimSegment281->addChild(Shape285);

HAnimJoint280->addChild(HAnimSegment281);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setName(CString("l_metatarsophalangeal_3"));
HAnimJoint289->setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint289->setCenter(new float[3]{4.2795,0.0086,4.7055});
HAnimSegment* HAnimSegment290 = new HAnimSegment();
HAnimSegment290->setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment290->setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform* Transform291 = new Transform();
Transform291->setTranslation(new float[3]{4.2795,0.0086,4.7055});
Transform* Transform292 = new Transform();
//Empty Transform
Shape* Shape293 = new Shape();
Shape293->setUSE(CString("HAnimJointShape"));
Transform292->addChild(Shape293);

Transform291->addChild(Transform292);

HAnimSegment290->addChild(Transform291);

Shape* Shape294 = new Shape();
LineSet* LineSet295 = new LineSet();
LineSet295->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate296 = new Coordinate();
Coordinate296->setPoint(new float[6]{4.2795,0.0086,4.7055,4.3855,0.0044,5.3745}, 6);
LineSet295->addChild(Coordinate296);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA297 = new ColorRGBA();
ColorRGBA297->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet295->addChild(ColorRGBA297);

Shape294->setGeometry(LineSet295);

HAnimSegment290->addChild(Shape294);

HAnimJoint289->addChild(HAnimSegment290);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint298->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint298->setCenter(new float[3]{4.3855,0.0044,5.3745});
HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment299->setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform* Transform300 = new Transform();
Transform300->setTranslation(new float[3]{4.3855,0.0044,5.3745});
Transform* Transform301 = new Transform();
//Empty Transform
Shape* Shape302 = new Shape();
Shape302->setUSE(CString("HAnimJointShape"));
Transform301->addChild(Shape302);

Transform300->addChild(Transform301);

HAnimSegment299->addChild(Transform300);

Shape* Shape303 = new Shape();
LineSet* LineSet304 = new LineSet();
LineSet304->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate305 = new Coordinate();
Coordinate305->setPoint(new float[6]{4.3855,0.0044,5.3745,4.4545,0.0017,5.7845}, 6);
LineSet304->addChild(Coordinate305);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA306 = new ColorRGBA();
ColorRGBA306->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet304->addChild(ColorRGBA306);

Shape303->setGeometry(LineSet304);

HAnimSegment299->addChild(Shape303);

HAnimSite* HAnimSite307 = new HAnimSite();
HAnimSite307->setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite307->setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor308 = new TouchSensor();
TouchSensor308->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite307->addChild(TouchSensor308);

Shape* Shape309 = new Shape();
Shape309->setUSE(CString("HAnimSiteShape"));
HAnimSite307->addChild(Shape309);

HAnimSegment299->addChild(HAnimSite307);

HAnimJoint298->addChild(HAnimSegment299);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint310->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint310->setCenter(new float[3]{4.4545,0.0017,5.7845});
HAnimJoint298->addChild(HAnimJoint310);

HAnimJoint289->addChild(HAnimJoint298);

HAnimJoint280->addChild(HAnimJoint289);

HAnimJoint271->addChild(HAnimJoint280);

HAnimJoint180->addChild(HAnimJoint271);

HAnimJoint167->addChild(HAnimJoint180);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setName(CString("l_calcaneocuboid"));
HAnimJoint311->setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint311->setCenter(new float[3]{3.9515,0.0653,-0.6895});
HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setName(CString("l_calcaneus"));
HAnimSegment312->setDEF(CString("hanim_l_calcaneus"));
Transform* Transform313 = new Transform();
Transform313->setTranslation(new float[3]{3.9515,0.0653,-0.6895});
Transform* Transform314 = new Transform();
//Empty Transform
Shape* Shape315 = new Shape();
Shape315->setUSE(CString("HAnimJointShape"));
Transform314->addChild(Shape315);

Transform313->addChild(Transform314);

HAnimSegment312->addChild(Transform313);

Shape* Shape316 = new Shape();
LineSet* LineSet317 = new LineSet();
LineSet317->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate318 = new Coordinate();
Coordinate318->setPoint(new float[6]{3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574}, 6);
LineSet317->addChild(Coordinate318);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA* ColorRGBA319 = new ColorRGBA();
ColorRGBA319->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet317->addChild(ColorRGBA319);

Shape316->setGeometry(LineSet317);

HAnimSegment312->addChild(Shape316);

HAnimJoint311->addChild(HAnimSegment312);

HAnimJoint* HAnimJoint320 = new HAnimJoint();
HAnimJoint320->setName(CString("l_transversetarsal"));
HAnimJoint320->setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint320->setCenter(new float[3]{4.9085,0.0353,0.5574});
HAnimSegment* HAnimSegment321 = new HAnimSegment();
HAnimSegment321->setName(CString("l_cuboid"));
HAnimSegment321->setDEF(CString("hanim_l_cuboid"));
Transform* Transform322 = new Transform();
Transform322->setTranslation(new float[3]{4.9085,0.0353,0.5574});
Transform* Transform323 = new Transform();
//Empty Transform
Shape* Shape324 = new Shape();
Shape324->setUSE(CString("HAnimJointShape"));
Transform323->addChild(Shape324);

Transform322->addChild(Transform323);

HAnimSegment321->addChild(Transform322);

Shape* Shape325 = new Shape();
LineSet* LineSet326 = new LineSet();
LineSet326->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate327 = new Coordinate();
Coordinate327->setPoint(new float[6]{4.9085,0.0353,0.5574,4.7245,0.0211,2.1725}, 6);
LineSet326->addChild(Coordinate327);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA* ColorRGBA328 = new ColorRGBA();
ColorRGBA328->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet326->addChild(ColorRGBA328);

Shape325->setGeometry(LineSet326);

HAnimSegment321->addChild(Shape325);

Shape* Shape329 = new Shape();
LineSet* LineSet330 = new LineSet();
LineSet330->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate331 = new Coordinate();
Coordinate331->setPoint(new float[6]{4.9085,0.0353,0.5574,5.3615,0.0164,2.0085}, 6);
LineSet330->addChild(Coordinate331);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA* ColorRGBA332 = new ColorRGBA();
ColorRGBA332->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet330->addChild(ColorRGBA332);

Shape329->setGeometry(LineSet330);

HAnimSegment321->addChild(Shape329);

HAnimJoint320->addChild(HAnimSegment321);

HAnimJoint* HAnimJoint333 = new HAnimJoint();
HAnimJoint333->setName(CString("l_tarsometatarsal_4"));
HAnimJoint333->setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint333->setCenter(new float[3]{4.7245,0.0211,2.1725});
HAnimSegment* HAnimSegment334 = new HAnimSegment();
HAnimSegment334->setName(CString("l_metatarsal_4"));
HAnimSegment334->setDEF(CString("hanim_l_metatarsal_4"));
Transform* Transform335 = new Transform();
Transform335->setTranslation(new float[3]{4.7245,0.0211,2.1725});
Transform* Transform336 = new Transform();
//Empty Transform
Shape* Shape337 = new Shape();
Shape337->setUSE(CString("HAnimJointShape"));
Transform336->addChild(Shape337);

Transform335->addChild(Transform336);

HAnimSegment334->addChild(Transform335);

Shape* Shape338 = new Shape();
LineSet* LineSet339 = new LineSet();
LineSet339->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate340 = new Coordinate();
Coordinate340->setPoint(new float[6]{4.7245,0.0211,2.1725,4.8745,0.0076,4.5165}, 6);
LineSet339->addChild(Coordinate340);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA* ColorRGBA341 = new ColorRGBA();
ColorRGBA341->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet339->addChild(ColorRGBA341);

Shape338->setGeometry(LineSet339);

HAnimSegment334->addChild(Shape338);

HAnimJoint333->addChild(HAnimSegment334);

HAnimJoint* HAnimJoint342 = new HAnimJoint();
HAnimJoint342->setName(CString("l_metatarsophalangeal_4"));
HAnimJoint342->setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint342->setCenter(new float[3]{4.8745,0.0076,4.5165});
HAnimSegment* HAnimSegment343 = new HAnimSegment();
HAnimSegment343->setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment343->setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform* Transform344 = new Transform();
Transform344->setTranslation(new float[3]{4.8745,0.0076,4.5165});
Transform* Transform345 = new Transform();
//Empty Transform
Shape* Shape346 = new Shape();
Shape346->setUSE(CString("HAnimJointShape"));
Transform345->addChild(Shape346);

Transform344->addChild(Transform345);

HAnimSegment343->addChild(Transform344);

Shape* Shape347 = new Shape();
LineSet* LineSet348 = new LineSet();
LineSet348->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate349 = new Coordinate();
Coordinate349->setPoint(new float[6]{4.8745,0.0076,4.5165,5.0655,0.0049,5.1895}, 6);
LineSet348->addChild(Coordinate349);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA350 = new ColorRGBA();
ColorRGBA350->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet348->addChild(ColorRGBA350);

Shape347->setGeometry(LineSet348);

HAnimSegment343->addChild(Shape347);

HAnimJoint342->addChild(HAnimSegment343);

HAnimJoint* HAnimJoint351 = new HAnimJoint();
HAnimJoint351->setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint351->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint351->setCenter(new float[3]{5.0655,0.0049,5.1895});
HAnimSegment* HAnimSegment352 = new HAnimSegment();
HAnimSegment352->setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment352->setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform* Transform353 = new Transform();
Transform353->setTranslation(new float[3]{5.0655,0.0049,5.1895});
Transform* Transform354 = new Transform();
//Empty Transform
Shape* Shape355 = new Shape();
Shape355->setUSE(CString("HAnimJointShape"));
Transform354->addChild(Shape355);

Transform353->addChild(Transform354);

HAnimSegment352->addChild(Transform353);

Shape* Shape356 = new Shape();
LineSet* LineSet357 = new LineSet();
LineSet357->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate358 = new Coordinate();
Coordinate358->setPoint(new float[6]{5.0655,0.0049,5.1895,5.1325,0.0011,5.5175}, 6);
LineSet357->addChild(Coordinate358);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA359 = new ColorRGBA();
ColorRGBA359->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet357->addChild(ColorRGBA359);

Shape356->setGeometry(LineSet357);

HAnimSegment352->addChild(Shape356);

HAnimSite* HAnimSite360 = new HAnimSite();
HAnimSite360->setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite360->setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor361 = new TouchSensor();
TouchSensor361->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite360->addChild(TouchSensor361);

Shape* Shape362 = new Shape();
Shape362->setUSE(CString("HAnimSiteShape"));
HAnimSite360->addChild(Shape362);

HAnimSegment352->addChild(HAnimSite360);

HAnimJoint351->addChild(HAnimSegment352);

HAnimJoint* HAnimJoint363 = new HAnimJoint();
HAnimJoint363->setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint363->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint363->setCenter(new float[3]{5.1325,0.0011,5.5175});
HAnimJoint351->addChild(HAnimJoint363);

HAnimJoint342->addChild(HAnimJoint351);

HAnimJoint333->addChild(HAnimJoint342);

HAnimJoint320->addChild(HAnimJoint333);

HAnimJoint* HAnimJoint364 = new HAnimJoint();
HAnimJoint364->setName(CString("l_tarsometatarsal_5"));
HAnimJoint364->setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint364->setCenter(new float[3]{5.3615,0.0164,2.0085});
HAnimSegment* HAnimSegment365 = new HAnimSegment();
HAnimSegment365->setName(CString("l_metatarsal_5"));
HAnimSegment365->setDEF(CString("hanim_l_metatarsal_5"));
Transform* Transform366 = new Transform();
Transform366->setTranslation(new float[3]{5.3615,0.0164,2.0085});
Transform* Transform367 = new Transform();
//Empty Transform
Shape* Shape368 = new Shape();
Shape368->setUSE(CString("HAnimJointShape"));
Transform367->addChild(Shape368);

Transform366->addChild(Transform367);

HAnimSegment365->addChild(Transform366);

Shape* Shape369 = new Shape();
LineSet* LineSet370 = new LineSet();
LineSet370->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate371 = new Coordinate();
Coordinate371->setPoint(new float[6]{5.3615,0.0164,2.0085,5.5055,0.0067,4.3115}, 6);
LineSet370->addChild(Coordinate371);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA* ColorRGBA372 = new ColorRGBA();
ColorRGBA372->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet370->addChild(ColorRGBA372);

Shape369->setGeometry(LineSet370);

HAnimSegment365->addChild(Shape369);

HAnimSite* HAnimSite373 = new HAnimSite();
HAnimSite373->setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite373->setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
TouchSensor* TouchSensor374 = new TouchSensor();
TouchSensor374->setDescription(CString("HAnimSite l_metatarsal_phalanx_5_pt"));
HAnimSite373->addChild(TouchSensor374);

Shape* Shape375 = new Shape();
Shape375->setUSE(CString("HAnimSiteShape"));
HAnimSite373->addChild(Shape375);

HAnimSegment365->addChild(HAnimSite373);

HAnimJoint364->addChild(HAnimSegment365);

HAnimJoint* HAnimJoint376 = new HAnimJoint();
HAnimJoint376->setName(CString("l_metatarsophalangeal_5"));
HAnimJoint376->setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint376->setCenter(new float[3]{5.5055,0.0067,4.3115});
HAnimSegment* HAnimSegment377 = new HAnimSegment();
HAnimSegment377->setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment377->setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform* Transform378 = new Transform();
Transform378->setTranslation(new float[3]{5.5055,0.0067,4.3115});
Transform* Transform379 = new Transform();
//Empty Transform
Shape* Shape380 = new Shape();
Shape380->setUSE(CString("HAnimJointShape"));
Transform379->addChild(Shape380);

Transform378->addChild(Transform379);

HAnimSegment377->addChild(Transform378);

Shape* Shape381 = new Shape();
LineSet* LineSet382 = new LineSet();
LineSet382->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate383 = new Coordinate();
Coordinate383->setPoint(new float[6]{5.5055,0.0067,4.3115,5.6085,0.003,4.6485}, 6);
LineSet382->addChild(Coordinate383);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA384 = new ColorRGBA();
ColorRGBA384->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet382->addChild(ColorRGBA384);

Shape381->setGeometry(LineSet382);

HAnimSegment377->addChild(Shape381);

HAnimJoint376->addChild(HAnimSegment377);

HAnimJoint* HAnimJoint385 = new HAnimJoint();
HAnimJoint385->setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint385->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint385->setCenter(new float[3]{5.6085,0.003,4.6485});
HAnimSegment* HAnimSegment386 = new HAnimSegment();
HAnimSegment386->setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment386->setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform* Transform387 = new Transform();
Transform387->setTranslation(new float[3]{5.6085,0.003,4.6485});
Transform* Transform388 = new Transform();
//Empty Transform
Shape* Shape389 = new Shape();
Shape389->setUSE(CString("HAnimJointShape"));
Transform388->addChild(Shape389);

Transform387->addChild(Transform388);

HAnimSegment386->addChild(Transform387);

Shape* Shape390 = new Shape();
LineSet* LineSet391 = new LineSet();
LineSet391->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate392 = new Coordinate();
Coordinate392->setPoint(new float[6]{5.6085,0.003,4.6485,5.6485,0,4.9925}, 6);
LineSet391->addChild(Coordinate392);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA393 = new ColorRGBA();
ColorRGBA393->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet391->addChild(ColorRGBA393);

Shape390->setGeometry(LineSet391);

HAnimSegment386->addChild(Shape390);

HAnimSite* HAnimSite394 = new HAnimSite();
HAnimSite394->setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite394->setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor395 = new TouchSensor();
TouchSensor395->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite394->addChild(TouchSensor395);

Shape* Shape396 = new Shape();
Shape396->setUSE(CString("HAnimSiteShape"));
HAnimSite394->addChild(Shape396);

HAnimSegment386->addChild(HAnimSite394);

HAnimJoint385->addChild(HAnimSegment386);

HAnimJoint* HAnimJoint397 = new HAnimJoint();
HAnimJoint397->setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint397->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint397->setCenter(new float[3]{5.6485,0,4.9925});
HAnimJoint385->addChild(HAnimJoint397);

HAnimJoint376->addChild(HAnimJoint385);

HAnimJoint364->addChild(HAnimJoint376);

HAnimJoint320->addChild(HAnimJoint364);

HAnimJoint311->addChild(HAnimJoint320);

HAnimJoint167->addChild(HAnimJoint311);

HAnimJoint152->addChild(HAnimJoint167);

HAnimJoint134->addChild(HAnimJoint152);

HAnimJoint97->addChild(HAnimJoint134);

HAnimJoint* HAnimJoint398 = new HAnimJoint();
HAnimJoint398->setName(CString("r_hip"));
HAnimJoint398->setDEF(CString("hanim_r_hip"));
HAnimJoint398->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimSegment* HAnimSegment399 = new HAnimSegment();
HAnimSegment399->setName(CString("r_thigh"));
HAnimSegment399->setDEF(CString("hanim_r_thigh"));
Transform* Transform400 = new Transform();
Transform400->setTranslation(new float[3]{-0.095,0.9171,0.0029});
Transform* Transform401 = new Transform();
//Empty Transform
Shape* Shape402 = new Shape();
Shape402->setUSE(CString("HAnimJointShape"));
Transform401->addChild(Shape402);

Transform400->addChild(Transform401);

HAnimSegment399->addChild(Transform400);

Shape* Shape403 = new Shape();
LineSet* LineSet404 = new LineSet();
LineSet404->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate405 = new Coordinate();
Coordinate405->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet404->addChild(Coordinate405);

//from r_hip to r_knee vertices 2
ColorRGBA* ColorRGBA406 = new ColorRGBA();
ColorRGBA406->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet404->addChild(ColorRGBA406);

Shape403->setGeometry(LineSet404);

HAnimSegment399->addChild(Shape403);

HAnimSite* HAnimSite407 = new HAnimSite();
HAnimSite407->setName(CString("r_lateral_malleolus_pt"));
HAnimSite407->setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite407->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
TouchSensor* TouchSensor408 = new TouchSensor();
TouchSensor408->setDescription(CString("HAnimSite r_lateral_malleolus_pt"));
HAnimSite407->addChild(TouchSensor408);

Shape* Shape409 = new Shape();
Shape409->setUSE(CString("HAnimSiteShape"));
HAnimSite407->addChild(Shape409);

HAnimSegment399->addChild(HAnimSite407);

HAnimSite* HAnimSite410 = new HAnimSite();
HAnimSite410->setName(CString("r_medial_malleolus_pt"));
HAnimSite410->setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite410->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
TouchSensor* TouchSensor411 = new TouchSensor();
TouchSensor411->setDescription(CString("HAnimSite r_medial_malleolus_pt"));
HAnimSite410->addChild(TouchSensor411);

Shape* Shape412 = new Shape();
Shape412->setUSE(CString("HAnimSiteShape"));
HAnimSite410->addChild(Shape412);

HAnimSegment399->addChild(HAnimSite410);

HAnimSite* HAnimSite413 = new HAnimSite();
HAnimSite413->setName(CString("r_tibiale_pt"));
HAnimSite413->setDEF(CString("hanim_r_tibiale_pt"));
TouchSensor* TouchSensor414 = new TouchSensor();
TouchSensor414->setDescription(CString("HAnimSite r_tibiale_pt"));
HAnimSite413->addChild(TouchSensor414);

Shape* Shape415 = new Shape();
Shape415->setUSE(CString("HAnimSiteShape"));
HAnimSite413->addChild(Shape415);

HAnimSegment399->addChild(HAnimSite413);

HAnimJoint398->addChild(HAnimSegment399);

HAnimJoint* HAnimJoint416 = new HAnimJoint();
HAnimJoint416->setName(CString("r_knee"));
HAnimJoint416->setDEF(CString("hanim_r_knee"));
HAnimJoint416->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimSegment* HAnimSegment417 = new HAnimSegment();
HAnimSegment417->setName(CString("r_calf"));
HAnimSegment417->setDEF(CString("hanim_r_calf"));
Transform* Transform418 = new Transform();
Transform418->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
Transform* Transform419 = new Transform();
//Empty Transform
Shape* Shape420 = new Shape();
Shape420->setUSE(CString("HAnimJointShape"));
Transform419->addChild(Shape420);

Transform418->addChild(Transform419);

HAnimSegment417->addChild(Transform418);

Shape* Shape421 = new Shape();
LineSet* LineSet422 = new LineSet();
LineSet422->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate423 = new Coordinate();
Coordinate423->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet422->addChild(Coordinate423);

//from r_knee to r_talocrural vertices 2
ColorRGBA* ColorRGBA424 = new ColorRGBA();
ColorRGBA424->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet422->addChild(ColorRGBA424);

Shape421->setGeometry(LineSet422);

HAnimSegment417->addChild(Shape421);

HAnimSite* HAnimSite425 = new HAnimSite();
HAnimSite425->setName(CString("r_calcaneus_posterior_pt"));
HAnimSite425->setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite425->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
TouchSensor* TouchSensor426 = new TouchSensor();
TouchSensor426->setDescription(CString("HAnimSite r_calcaneus_posterior_pt"));
HAnimSite425->addChild(TouchSensor426);

Shape* Shape427 = new Shape();
Shape427->setUSE(CString("HAnimSiteShape"));
HAnimSite425->addChild(Shape427);

HAnimSegment417->addChild(HAnimSite425);

HAnimSite* HAnimSite428 = new HAnimSite();
HAnimSite428->setName(CString("r_sphyrion_pt"));
HAnimSite428->setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite428->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
TouchSensor* TouchSensor429 = new TouchSensor();
TouchSensor429->setDescription(CString("HAnimSite r_sphyrion_pt"));
HAnimSite428->addChild(TouchSensor429);

Shape* Shape430 = new Shape();
Shape430->setUSE(CString("HAnimSiteShape"));
HAnimSite428->addChild(Shape430);

HAnimSegment417->addChild(HAnimSite428);

HAnimJoint416->addChild(HAnimSegment417);

HAnimJoint* HAnimJoint431 = new HAnimJoint();
HAnimJoint431->setName(CString("r_talocrural"));
HAnimJoint431->setDEF(CString("hanim_r_talocrural"));
HAnimJoint431->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimSegment* HAnimSegment432 = new HAnimSegment();
HAnimSegment432->setName(CString("r_talus"));
HAnimSegment432->setDEF(CString("hanim_r_talus"));
Transform* Transform433 = new Transform();
Transform433->setScale(new float[3]{0.15,0.15,0.15});
Transform433->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform433->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
Transform* Transform434 = new Transform();
//Empty Transform right foot
Shape* Shape435 = new Shape();
Shape435->setUSE(CString("HAnimJointShape"));
Transform434->addChild(Shape435);

Transform433->addChild(Transform434);

HAnimSegment432->addChild(Transform433);

Shape* Shape436 = new Shape();
LineSet* LineSet437 = new LineSet();
LineSet437->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate438 = new Coordinate();
Coordinate438->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807}, 6);
LineSet437->addChild(Coordinate438);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA* ColorRGBA439 = new ColorRGBA();
ColorRGBA439->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet437->addChild(ColorRGBA439);

Shape436->setGeometry(LineSet437);

HAnimSegment432->addChild(Shape436);

Shape* Shape440 = new Shape();
LineSet* LineSet441 = new LineSet();
LineSet441->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate442 = new Coordinate();
Coordinate442->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895}, 6);
LineSet441->addChild(Coordinate442);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA* ColorRGBA443 = new ColorRGBA();
ColorRGBA443->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet441->addChild(ColorRGBA443);

Shape440->setGeometry(LineSet441);

HAnimSegment432->addChild(Shape440);

HAnimJoint431->addChild(HAnimSegment432);

HAnimJoint* HAnimJoint444 = new HAnimJoint();
HAnimJoint444->setName(CString("r_talocalcaneonavicular"));
HAnimJoint444->setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint444->setCenter(new float[3]{-3.4725,0.0374,0.6807});
HAnimSegment* HAnimSegment445 = new HAnimSegment();
HAnimSegment445->setName(CString("r_navicular"));
HAnimSegment445->setDEF(CString("hanim_r_navicular"));
Transform* Transform446 = new Transform();
Transform446->setTranslation(new float[3]{-3.4725,0.0374,0.6807});
Transform* Transform447 = new Transform();
//Empty Transform
Shape* Shape448 = new Shape();
Shape448->setUSE(CString("HAnimJointShape"));
Transform447->addChild(Shape448);

Transform446->addChild(Transform447);

HAnimSegment445->addChild(Transform446);

Shape* Shape449 = new Shape();
LineSet* LineSet450 = new LineSet();
LineSet450->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate451 = new Coordinate();
Coordinate451->setPoint(new float[6]{-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819}, 6);
LineSet450->addChild(Coordinate451);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA* ColorRGBA452 = new ColorRGBA();
ColorRGBA452->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet450->addChild(ColorRGBA452);

Shape449->setGeometry(LineSet450);

HAnimSegment445->addChild(Shape449);

Shape* Shape453 = new Shape();
LineSet* LineSet454 = new LineSet();
LineSet454->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate455 = new Coordinate();
Coordinate455->setPoint(new float[6]{-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168}, 6);
LineSet454->addChild(Coordinate455);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA* ColorRGBA456 = new ColorRGBA();
ColorRGBA456->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet454->addChild(ColorRGBA456);

Shape453->setGeometry(LineSet454);

HAnimSegment445->addChild(Shape453);

Shape* Shape457 = new Shape();
LineSet* LineSet458 = new LineSet();
LineSet458->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate459 = new Coordinate();
Coordinate459->setPoint(new float[6]{-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453}, 6);
LineSet458->addChild(Coordinate459);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA* ColorRGBA460 = new ColorRGBA();
ColorRGBA460->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet458->addChild(ColorRGBA460);

Shape457->setGeometry(LineSet458);

HAnimSegment445->addChild(Shape457);

HAnimJoint444->addChild(HAnimSegment445);

HAnimJoint* HAnimJoint461 = new HAnimJoint();
HAnimJoint461->setName(CString("r_cuneonavicular_1"));
HAnimJoint461->setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint461->setCenter(new float[3]{-2.9855,0.0311,1.2819});
HAnimSegment* HAnimSegment462 = new HAnimSegment();
HAnimSegment462->setName(CString("r_cuneiform_1"));
HAnimSegment462->setDEF(CString("hanim_r_cuneiform_1"));
Transform* Transform463 = new Transform();
Transform463->setTranslation(new float[3]{-2.9855,0.0311,1.2819});
Transform* Transform464 = new Transform();
//Empty Transform
Shape* Shape465 = new Shape();
Shape465->setUSE(CString("HAnimJointShape"));
Transform464->addChild(Shape465);

Transform463->addChild(Transform464);

HAnimSegment462->addChild(Transform463);

Shape* Shape466 = new Shape();
LineSet* LineSet467 = new LineSet();
LineSet467->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate468 = new Coordinate();
Coordinate468->setPoint(new float[6]{-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285}, 6);
LineSet467->addChild(Coordinate468);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA* ColorRGBA469 = new ColorRGBA();
ColorRGBA469->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet467->addChild(ColorRGBA469);

Shape466->setGeometry(LineSet467);

HAnimSegment462->addChild(Shape466);

HAnimJoint461->addChild(HAnimSegment462);

HAnimJoint* HAnimJoint470 = new HAnimJoint();
HAnimJoint470->setName(CString("r_tarsometatarsal_1"));
HAnimJoint470->setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint470->setCenter(new float[3]{-2.8645,0.0194,2.4285});
HAnimSegment* HAnimSegment471 = new HAnimSegment();
HAnimSegment471->setName(CString("r_metatarsal_1"));
HAnimSegment471->setDEF(CString("hanim_r_metatarsal_1"));
Transform* Transform472 = new Transform();
Transform472->setTranslation(new float[3]{-2.8645,0.0194,2.4285});
Transform* Transform473 = new Transform();
//Empty Transform
Shape* Shape474 = new Shape();
Shape474->setUSE(CString("HAnimJointShape"));
Transform473->addChild(Shape474);

Transform472->addChild(Transform473);

HAnimSegment471->addChild(Transform472);

Shape* Shape475 = new Shape();
LineSet* LineSet476 = new LineSet();
LineSet476->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate477 = new Coordinate();
Coordinate477->setPoint(new float[6]{-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255}, 6);
LineSet476->addChild(Coordinate477);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA* ColorRGBA478 = new ColorRGBA();
ColorRGBA478->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet476->addChild(ColorRGBA478);

Shape475->setGeometry(LineSet476);

HAnimSegment471->addChild(Shape475);

HAnimSite* HAnimSite479 = new HAnimSite();
HAnimSite479->setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite479->setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
TouchSensor* TouchSensor480 = new TouchSensor();
TouchSensor480->setDescription(CString("HAnimSite r_metatarsal_phalanx_1_pt"));
HAnimSite479->addChild(TouchSensor480);

Shape* Shape481 = new Shape();
Shape481->setUSE(CString("HAnimSiteShape"));
HAnimSite479->addChild(Shape481);

HAnimSegment471->addChild(HAnimSite479);

HAnimJoint470->addChild(HAnimSegment471);

HAnimJoint* HAnimJoint482 = new HAnimJoint();
HAnimJoint482->setName(CString("r_metatarsophalangeal_1"));
HAnimJoint482->setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint482->setCenter(new float[3]{-2.7535,0.0077,4.6255});
HAnimSegment* HAnimSegment483 = new HAnimSegment();
HAnimSegment483->setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment483->setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform* Transform484 = new Transform();
Transform484->setTranslation(new float[3]{-2.7535,0.0077,4.6255});
Transform* Transform485 = new Transform();
//Empty Transform
Shape* Shape486 = new Shape();
Shape486->setUSE(CString("HAnimJointShape"));
Transform485->addChild(Shape486);

Transform484->addChild(Transform485);

HAnimSegment483->addChild(Transform484);

Shape* Shape487 = new Shape();
LineSet* LineSet488 = new LineSet();
LineSet488->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate489 = new Coordinate();
Coordinate489->setPoint(new float[6]{-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255}, 6);
LineSet488->addChild(Coordinate489);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA490 = new ColorRGBA();
ColorRGBA490->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet488->addChild(ColorRGBA490);

Shape487->setGeometry(LineSet488);

HAnimSegment483->addChild(Shape487);

HAnimSite* HAnimSite491 = new HAnimSite();
HAnimSite491->setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite491->setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor492 = new TouchSensor();
TouchSensor492->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite491->addChild(TouchSensor492);

Shape* Shape493 = new Shape();
Shape493->setUSE(CString("HAnimSiteShape"));
HAnimSite491->addChild(Shape493);

HAnimSegment483->addChild(HAnimSite491);

HAnimJoint482->addChild(HAnimSegment483);

HAnimJoint* HAnimJoint494 = new HAnimJoint();
HAnimJoint494->setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint494->setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint482->addChild(HAnimJoint494);

HAnimJoint470->addChild(HAnimJoint482);

HAnimJoint461->addChild(HAnimJoint470);

HAnimJoint444->addChild(HAnimJoint461);

HAnimJoint* HAnimJoint495 = new HAnimJoint();
HAnimJoint495->setName(CString("r_cuneonavicular_2"));
HAnimJoint495->setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint495->setCenter(new float[3]{-3.6105,0.033,1.4168});
HAnimSegment* HAnimSegment496 = new HAnimSegment();
HAnimSegment496->setName(CString("r_cuneiform_2"));
HAnimSegment496->setDEF(CString("hanim_r_cuneiform_2"));
Transform* Transform497 = new Transform();
Transform497->setTranslation(new float[3]{-3.6105,0.033,1.4168});
Transform* Transform498 = new Transform();
//Empty Transform
Shape* Shape499 = new Shape();
Shape499->setUSE(CString("HAnimJointShape"));
Transform498->addChild(Shape499);

Transform497->addChild(Transform498);

HAnimSegment496->addChild(Transform497);

Shape* Shape500 = new Shape();
LineSet* LineSet501 = new LineSet();
LineSet501->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate502 = new Coordinate();
Coordinate502->setPoint(new float[6]{-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895}, 6);
LineSet501->addChild(Coordinate502);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA503 = new ColorRGBA();
ColorRGBA503->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet501->addChild(ColorRGBA503);

Shape500->setGeometry(LineSet501);

HAnimSegment496->addChild(Shape500);

HAnimJoint495->addChild(HAnimSegment496);

HAnimJoint* HAnimJoint504 = new HAnimJoint();
HAnimJoint504->setName(CString("r_tarsometatarsal_2"));
HAnimJoint504->setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint504->setCenter(new float[3]{-3.5565,0.0232,2.2895});
HAnimSegment* HAnimSegment505 = new HAnimSegment();
HAnimSegment505->setName(CString("r_metatarsal_2"));
HAnimSegment505->setDEF(CString("hanim_r_metatarsal_2"));
Transform* Transform506 = new Transform();
Transform506->setTranslation(new float[3]{-3.5565,0.0232,2.2895});
Transform* Transform507 = new Transform();
//Empty Transform
Shape* Shape508 = new Shape();
Shape508->setUSE(CString("HAnimJointShape"));
Transform507->addChild(Shape508);

Transform506->addChild(Transform507);

HAnimSegment505->addChild(Transform506);

Shape* Shape509 = new Shape();
LineSet* LineSet510 = new LineSet();
LineSet510->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate511 = new Coordinate();
Coordinate511->setPoint(new float[6]{-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125}, 6);
LineSet510->addChild(Coordinate511);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA512 = new ColorRGBA();
ColorRGBA512->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet510->addChild(ColorRGBA512);

Shape509->setGeometry(LineSet510);

HAnimSegment505->addChild(Shape509);

HAnimJoint504->addChild(HAnimSegment505);

HAnimJoint* HAnimJoint513 = new HAnimJoint();
HAnimJoint513->setName(CString("r_metatarsophalangeal_2"));
HAnimJoint513->setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint513->setCenter(new float[3]{-3.6595,0.0085,4.8125});
HAnimSegment* HAnimSegment514 = new HAnimSegment();
HAnimSegment514->setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment514->setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform* Transform515 = new Transform();
Transform515->setTranslation(new float[3]{-3.6595,0.0085,4.8125});
Transform* Transform516 = new Transform();
//Empty Transform
Shape* Shape517 = new Shape();
Shape517->setUSE(CString("HAnimJointShape"));
Transform516->addChild(Shape517);

Transform515->addChild(Transform516);

HAnimSegment514->addChild(Transform515);

Shape* Shape518 = new Shape();
LineSet* LineSet519 = new LineSet();
LineSet519->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate520 = new Coordinate();
Coordinate520->setPoint(new float[6]{-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315}, 6);
LineSet519->addChild(Coordinate520);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA521 = new ColorRGBA();
ColorRGBA521->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet519->addChild(ColorRGBA521);

Shape518->setGeometry(LineSet519);

HAnimSegment514->addChild(Shape518);

HAnimJoint513->addChild(HAnimSegment514);

HAnimJoint* HAnimJoint522 = new HAnimJoint();
HAnimJoint522->setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint522->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint522->setCenter(new float[3]{-3.7385,0.0054,5.5315});
HAnimSegment* HAnimSegment523 = new HAnimSegment();
HAnimSegment523->setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment523->setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform* Transform524 = new Transform();
Transform524->setTranslation(new float[3]{-3.7385,0.0054,5.5315});
Transform* Transform525 = new Transform();
//Empty Transform
Shape* Shape526 = new Shape();
Shape526->setUSE(CString("HAnimJointShape"));
Transform525->addChild(Shape526);

Transform524->addChild(Transform525);

HAnimSegment523->addChild(Transform524);

Shape* Shape527 = new Shape();
LineSet* LineSet528 = new LineSet();
LineSet528->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate529 = new Coordinate();
Coordinate529->setPoint(new float[6]{-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505}, 6);
LineSet528->addChild(Coordinate529);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA530 = new ColorRGBA();
ColorRGBA530->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet528->addChild(ColorRGBA530);

Shape527->setGeometry(LineSet528);

HAnimSegment523->addChild(Shape527);

HAnimSite* HAnimSite531 = new HAnimSite();
HAnimSite531->setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite531->setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite531->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
TouchSensor* TouchSensor532 = new TouchSensor();
TouchSensor532->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite531->addChild(TouchSensor532);

Shape* Shape533 = new Shape();
Shape533->setUSE(CString("HAnimSiteShape"));
HAnimSite531->addChild(Shape533);

HAnimSegment523->addChild(HAnimSite531);

HAnimJoint522->addChild(HAnimSegment523);

HAnimJoint* HAnimJoint534 = new HAnimJoint();
HAnimJoint534->setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint534->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint534->setCenter(new float[3]{-3.7385,0.0017,5.9505});
HAnimJoint522->addChild(HAnimJoint534);

HAnimJoint513->addChild(HAnimJoint522);

HAnimJoint504->addChild(HAnimJoint513);

HAnimJoint495->addChild(HAnimJoint504);

HAnimJoint444->addChild(HAnimJoint495);

HAnimJoint* HAnimJoint535 = new HAnimJoint();
HAnimJoint535->setName(CString("r_cuneonavicular_3"));
HAnimJoint535->setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint535->setCenter(new float[3]{-4.1245,0.0328,1.3453});
HAnimSegment* HAnimSegment536 = new HAnimSegment();
HAnimSegment536->setName(CString("r_cuneiform_3"));
HAnimSegment536->setDEF(CString("hanim_r_cuneiform_3"));
Transform* Transform537 = new Transform();
Transform537->setTranslation(new float[3]{-4.1245,0.0328,1.3453});
Transform* Transform538 = new Transform();
//Empty Transform
Shape* Shape539 = new Shape();
Shape539->setUSE(CString("HAnimJointShape"));
Transform538->addChild(Shape539);

Transform537->addChild(Transform538);

HAnimSegment536->addChild(Transform537);

Shape* Shape540 = new Shape();
LineSet* LineSet541 = new LineSet();
LineSet541->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate542 = new Coordinate();
Coordinate542->setPoint(new float[6]{-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505}, 6);
LineSet541->addChild(Coordinate542);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA* ColorRGBA543 = new ColorRGBA();
ColorRGBA543->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet541->addChild(ColorRGBA543);

Shape540->setGeometry(LineSet541);

HAnimSegment536->addChild(Shape540);

HAnimJoint535->addChild(HAnimSegment536);

HAnimJoint* HAnimJoint544 = new HAnimJoint();
HAnimJoint544->setName(CString("r_tarsometatarsal_3"));
HAnimJoint544->setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimSegment* HAnimSegment545 = new HAnimSegment();
HAnimSegment545->setName(CString("r_metatarsal_3"));
HAnimSegment545->setDEF(CString("hanim_r_metatarsal_3"));
Transform* Transform546 = new Transform();
Transform546->setTranslation(new float[3]{-4.1245,0.0328,1.3453});
Transform* Transform547 = new Transform();
//Empty Transform
Shape* Shape548 = new Shape();
Shape548->setUSE(CString("HAnimJointShape"));
Transform547->addChild(Shape548);

Transform546->addChild(Transform547);

HAnimSegment545->addChild(Transform546);

Shape* Shape549 = new Shape();
LineSet* LineSet550 = new LineSet();
LineSet550->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate551 = new Coordinate();
Coordinate551->setPoint(new float[3]{-4.2795,0.0086,4.7055}, 3);
LineSet550->addChild(Coordinate551);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
ColorRGBA* ColorRGBA552 = new ColorRGBA();
ColorRGBA552->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet550->addChild(ColorRGBA552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChild(Shape549);

HAnimJoint544->addChild(HAnimSegment545);

HAnimJoint* HAnimJoint553 = new HAnimJoint();
HAnimJoint553->setName(CString("r_metatarsophalangeal_3"));
HAnimJoint553->setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint553->setCenter(new float[3]{-4.2795,0.0086,4.7055});
HAnimSegment* HAnimSegment554 = new HAnimSegment();
HAnimSegment554->setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment554->setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform* Transform555 = new Transform();
Transform555->setTranslation(new float[3]{-4.2795,0.0086,4.7055});
Transform* Transform556 = new Transform();
//Empty Transform
Shape* Shape557 = new Shape();
Shape557->setUSE(CString("HAnimJointShape"));
Transform556->addChild(Shape557);

Transform555->addChild(Transform556);

HAnimSegment554->addChild(Transform555);

Shape* Shape558 = new Shape();
LineSet* LineSet559 = new LineSet();
LineSet559->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate560 = new Coordinate();
Coordinate560->setPoint(new float[6]{-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745}, 6);
LineSet559->addChild(Coordinate560);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA561 = new ColorRGBA();
ColorRGBA561->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet559->addChild(ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChild(Shape558);

HAnimJoint553->addChild(HAnimSegment554);

HAnimJoint* HAnimJoint562 = new HAnimJoint();
HAnimJoint562->setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint562->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint562->setCenter(new float[3]{-4.3865,0.0044,5.3745});
HAnimSegment* HAnimSegment563 = new HAnimSegment();
HAnimSegment563->setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment563->setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform* Transform564 = new Transform();
Transform564->setTranslation(new float[3]{-4.3865,0.0044,5.3745});
Transform* Transform565 = new Transform();
//Empty Transform
Shape* Shape566 = new Shape();
Shape566->setUSE(CString("HAnimJointShape"));
Transform565->addChild(Shape566);

Transform564->addChild(Transform565);

HAnimSegment563->addChild(Transform564);

Shape* Shape567 = new Shape();
LineSet* LineSet568 = new LineSet();
LineSet568->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate569 = new Coordinate();
Coordinate569->setPoint(new float[6]{-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845}, 6);
LineSet568->addChild(Coordinate569);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA570 = new ColorRGBA();
ColorRGBA570->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet568->addChild(ColorRGBA570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChild(Shape567);

HAnimSite* HAnimSite571 = new HAnimSite();
HAnimSite571->setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite571->setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor572 = new TouchSensor();
TouchSensor572->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite571->addChild(TouchSensor572);

Shape* Shape573 = new Shape();
Shape573->setUSE(CString("HAnimSiteShape"));
HAnimSite571->addChild(Shape573);

HAnimSegment563->addChild(HAnimSite571);

HAnimJoint562->addChild(HAnimSegment563);

HAnimJoint* HAnimJoint574 = new HAnimJoint();
HAnimJoint574->setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint574->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint574->setCenter(new float[3]{-4.4545,0.0017,5.7845});
HAnimJoint562->addChild(HAnimJoint574);

HAnimJoint553->addChild(HAnimJoint562);

HAnimJoint544->addChild(HAnimJoint553);

HAnimJoint535->addChild(HAnimJoint544);

HAnimJoint444->addChild(HAnimJoint535);

HAnimJoint431->addChild(HAnimJoint444);

HAnimJoint* HAnimJoint575 = new HAnimJoint();
HAnimJoint575->setName(CString("r_calcaneocuboid"));
HAnimJoint575->setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint575->setCenter(new float[3]{-3.9515,0.0653,-0.6895});
HAnimSegment* HAnimSegment576 = new HAnimSegment();
HAnimSegment576->setName(CString("r_calcaneus"));
HAnimSegment576->setDEF(CString("hanim_r_calcaneus"));
Transform* Transform577 = new Transform();
Transform577->setTranslation(new float[3]{-3.9515,0.0653,-0.6895});
Transform* Transform578 = new Transform();
//Empty Transform
Shape* Shape579 = new Shape();
Shape579->setUSE(CString("HAnimJointShape"));
Transform578->addChild(Shape579);

Transform577->addChild(Transform578);

HAnimSegment576->addChild(Transform577);

Shape* Shape580 = new Shape();
LineSet* LineSet581 = new LineSet();
LineSet581->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate582 = new Coordinate();
Coordinate582->setPoint(new float[6]{-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574}, 6);
LineSet581->addChild(Coordinate582);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA* ColorRGBA583 = new ColorRGBA();
ColorRGBA583->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet581->addChild(ColorRGBA583);

Shape580->setGeometry(LineSet581);

HAnimSegment576->addChild(Shape580);

HAnimJoint575->addChild(HAnimSegment576);

HAnimJoint* HAnimJoint584 = new HAnimJoint();
HAnimJoint584->setName(CString("r_transversetarsal"));
HAnimJoint584->setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint584->setCenter(new float[3]{-4.9095,0.0353,0.5574});
HAnimSegment* HAnimSegment585 = new HAnimSegment();
HAnimSegment585->setName(CString("r_cuboid"));
HAnimSegment585->setDEF(CString("hanim_r_cuboid"));
Transform* Transform586 = new Transform();
Transform586->setTranslation(new float[3]{-4.9095,0.0353,0.5574});
Transform* Transform587 = new Transform();
//Empty Transform
Shape* Shape588 = new Shape();
Shape588->setUSE(CString("HAnimJointShape"));
Transform587->addChild(Shape588);

Transform586->addChild(Transform587);

HAnimSegment585->addChild(Transform586);

Shape* Shape589 = new Shape();
LineSet* LineSet590 = new LineSet();
LineSet590->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate591 = new Coordinate();
Coordinate591->setPoint(new float[6]{-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725}, 6);
LineSet590->addChild(Coordinate591);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA* ColorRGBA592 = new ColorRGBA();
ColorRGBA592->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet590->addChild(ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChild(Shape589);

Shape* Shape593 = new Shape();
LineSet* LineSet594 = new LineSet();
LineSet594->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate595 = new Coordinate();
Coordinate595->setPoint(new float[6]{-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085}, 6);
LineSet594->addChild(Coordinate595);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA* ColorRGBA596 = new ColorRGBA();
ColorRGBA596->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet594->addChild(ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment585->addChild(Shape593);

HAnimJoint584->addChild(HAnimSegment585);

HAnimJoint* HAnimJoint597 = new HAnimJoint();
HAnimJoint597->setName(CString("r_tarsometatarsal_4"));
HAnimJoint597->setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint597->setCenter(new float[3]{-4.7255,0.0211,2.1725});
HAnimSegment* HAnimSegment598 = new HAnimSegment();
HAnimSegment598->setName(CString("r_metatarsal_4"));
HAnimSegment598->setDEF(CString("hanim_r_metatarsal_4"));
Transform* Transform599 = new Transform();
Transform599->setTranslation(new float[3]{-4.7255,0.0211,2.1725});
Transform* Transform600 = new Transform();
//Empty Transform
Shape* Shape601 = new Shape();
Shape601->setUSE(CString("HAnimJointShape"));
Transform600->addChild(Shape601);

Transform599->addChild(Transform600);

HAnimSegment598->addChild(Transform599);

Shape* Shape602 = new Shape();
LineSet* LineSet603 = new LineSet();
LineSet603->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate604 = new Coordinate();
Coordinate604->setPoint(new float[6]{-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165}, 6);
LineSet603->addChild(Coordinate604);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA* ColorRGBA605 = new ColorRGBA();
ColorRGBA605->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet603->addChild(ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment598->addChild(Shape602);

HAnimJoint597->addChild(HAnimSegment598);

HAnimJoint* HAnimJoint606 = new HAnimJoint();
HAnimJoint606->setName(CString("r_metatarsophalangeal_4"));
HAnimJoint606->setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint606->setCenter(new float[3]{-4.8755,0.0076,4.5165});
HAnimSegment* HAnimSegment607 = new HAnimSegment();
HAnimSegment607->setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment607->setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform* Transform608 = new Transform();
Transform608->setTranslation(new float[3]{-4.8755,0.0076,4.5165});
Transform* Transform609 = new Transform();
//Empty Transform
Shape* Shape610 = new Shape();
Shape610->setUSE(CString("HAnimJointShape"));
Transform609->addChild(Shape610);

Transform608->addChild(Transform609);

HAnimSegment607->addChild(Transform608);

Shape* Shape611 = new Shape();
LineSet* LineSet612 = new LineSet();
LineSet612->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate613 = new Coordinate();
Coordinate613->setPoint(new float[6]{-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895}, 6);
LineSet612->addChild(Coordinate613);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA614 = new ColorRGBA();
ColorRGBA614->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet612->addChild(ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChild(Shape611);

HAnimJoint606->addChild(HAnimSegment607);

HAnimJoint* HAnimJoint615 = new HAnimJoint();
HAnimJoint615->setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint615->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint615->setCenter(new float[3]{-5.0655,0.0049,5.1895});
HAnimSegment* HAnimSegment616 = new HAnimSegment();
HAnimSegment616->setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment616->setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform* Transform617 = new Transform();
Transform617->setTranslation(new float[3]{-5.0655,0.0049,5.1895});
Transform* Transform618 = new Transform();
//Empty Transform
Shape* Shape619 = new Shape();
Shape619->setUSE(CString("HAnimJointShape"));
Transform618->addChild(Shape619);

Transform617->addChild(Transform618);

HAnimSegment616->addChild(Transform617);

Shape* Shape620 = new Shape();
LineSet* LineSet621 = new LineSet();
LineSet621->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate622 = new Coordinate();
Coordinate622->setPoint(new float[6]{-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175}, 6);
LineSet621->addChild(Coordinate622);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA623 = new ColorRGBA();
ColorRGBA623->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet621->addChild(ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChild(Shape620);

HAnimSite* HAnimSite624 = new HAnimSite();
HAnimSite624->setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite624->setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor625 = new TouchSensor();
TouchSensor625->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite624->addChild(TouchSensor625);

Shape* Shape626 = new Shape();
Shape626->setUSE(CString("HAnimSiteShape"));
HAnimSite624->addChild(Shape626);

HAnimSegment616->addChild(HAnimSite624);

HAnimJoint615->addChild(HAnimSegment616);

HAnimJoint* HAnimJoint627 = new HAnimJoint();
HAnimJoint627->setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint627->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint627->setCenter(new float[3]{-5.1335,0.0011,5.5175});
HAnimJoint615->addChild(HAnimJoint627);

HAnimJoint606->addChild(HAnimJoint615);

HAnimJoint597->addChild(HAnimJoint606);

HAnimJoint584->addChild(HAnimJoint597);

HAnimJoint* HAnimJoint628 = new HAnimJoint();
HAnimJoint628->setName(CString("r_tarsometatarsal_5"));
HAnimJoint628->setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint628->setCenter(new float[3]{-5.3615,0.0164,2.0085});
HAnimSegment* HAnimSegment629 = new HAnimSegment();
HAnimSegment629->setName(CString("r_metatarsal_5"));
HAnimSegment629->setDEF(CString("hanim_r_metatarsal_5"));
Transform* Transform630 = new Transform();
Transform630->setTranslation(new float[3]{-5.3615,0.0164,2.0085});
Transform* Transform631 = new Transform();
//Empty Transform
Shape* Shape632 = new Shape();
Shape632->setUSE(CString("HAnimJointShape"));
Transform631->addChild(Shape632);

Transform630->addChild(Transform631);

HAnimSegment629->addChild(Transform630);

Shape* Shape633 = new Shape();
LineSet* LineSet634 = new LineSet();
LineSet634->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate635 = new Coordinate();
Coordinate635->setPoint(new float[6]{-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115}, 6);
LineSet634->addChild(Coordinate635);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA* ColorRGBA636 = new ColorRGBA();
ColorRGBA636->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet634->addChild(ColorRGBA636);

Shape633->setGeometry(LineSet634);

HAnimSegment629->addChild(Shape633);

HAnimSite* HAnimSite637 = new HAnimSite();
HAnimSite637->setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite637->setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
TouchSensor* TouchSensor638 = new TouchSensor();
TouchSensor638->setDescription(CString("HAnimSite r_metatarsal_phalanx_5_pt"));
HAnimSite637->addChild(TouchSensor638);

Shape* Shape639 = new Shape();
Shape639->setUSE(CString("HAnimSiteShape"));
HAnimSite637->addChild(Shape639);

HAnimSegment629->addChild(HAnimSite637);

HAnimJoint628->addChild(HAnimSegment629);

HAnimJoint* HAnimJoint640 = new HAnimJoint();
HAnimJoint640->setName(CString("r_metatarsophalangeal_5"));
HAnimJoint640->setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint640->setCenter(new float[3]{-5.5055,0.0067,4.3115});
HAnimSegment* HAnimSegment641 = new HAnimSegment();
HAnimSegment641->setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment641->setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform* Transform642 = new Transform();
Transform642->setTranslation(new float[3]{-5.5055,0.0067,4.3115});
Transform* Transform643 = new Transform();
//Empty Transform
Shape* Shape644 = new Shape();
Shape644->setUSE(CString("HAnimJointShape"));
Transform643->addChild(Shape644);

Transform642->addChild(Transform643);

HAnimSegment641->addChild(Transform642);

Shape* Shape645 = new Shape();
LineSet* LineSet646 = new LineSet();
LineSet646->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate647 = new Coordinate();
Coordinate647->setPoint(new float[6]{-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485}, 6);
LineSet646->addChild(Coordinate647);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA648 = new ColorRGBA();
ColorRGBA648->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet646->addChild(ColorRGBA648);

Shape645->setGeometry(LineSet646);

HAnimSegment641->addChild(Shape645);

HAnimJoint640->addChild(HAnimSegment641);

HAnimJoint* HAnimJoint649 = new HAnimJoint();
HAnimJoint649->setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint649->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint649->setCenter(new float[3]{-5.6085,0.003,4.6485});
HAnimSegment* HAnimSegment650 = new HAnimSegment();
HAnimSegment650->setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment650->setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform* Transform651 = new Transform();
Transform651->setTranslation(new float[3]{-5.6085,0.003,4.6485});
Transform* Transform652 = new Transform();
//Empty Transform
Shape* Shape653 = new Shape();
Shape653->setUSE(CString("HAnimJointShape"));
Transform652->addChild(Shape653);

Transform651->addChild(Transform652);

HAnimSegment650->addChild(Transform651);

Shape* Shape654 = new Shape();
LineSet* LineSet655 = new LineSet();
LineSet655->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate656 = new Coordinate();
Coordinate656->setPoint(new float[6]{-5.6085,0.003,4.6485,-5.6495,0,4.9925}, 6);
LineSet655->addChild(Coordinate656);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA657 = new ColorRGBA();
ColorRGBA657->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet655->addChild(ColorRGBA657);

Shape654->setGeometry(LineSet655);

HAnimSegment650->addChild(Shape654);

HAnimSite* HAnimSite658 = new HAnimSite();
HAnimSite658->setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite658->setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor659 = new TouchSensor();
TouchSensor659->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite658->addChild(TouchSensor659);

Shape* Shape660 = new Shape();
Shape660->setUSE(CString("HAnimSiteShape"));
HAnimSite658->addChild(Shape660);

HAnimSegment650->addChild(HAnimSite658);

HAnimJoint649->addChild(HAnimSegment650);

HAnimJoint* HAnimJoint661 = new HAnimJoint();
HAnimJoint661->setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint661->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint661->setCenter(new float[3]{-5.6495,0,4.9925});
HAnimJoint649->addChild(HAnimJoint661);

HAnimJoint640->addChild(HAnimJoint649);

HAnimJoint628->addChild(HAnimJoint640);

HAnimJoint584->addChild(HAnimJoint628);

HAnimJoint575->addChild(HAnimJoint584);

HAnimJoint431->addChild(HAnimJoint575);

HAnimJoint416->addChild(HAnimJoint431);

HAnimJoint398->addChild(HAnimJoint416);

HAnimJoint97->addChild(HAnimJoint398);

HAnimJoint45->addChild(HAnimJoint97);

HAnimJoint* HAnimJoint662 = new HAnimJoint();
HAnimJoint662->setName(CString("vl5"));
HAnimJoint662->setDEF(CString("hanim_vl5"));
HAnimJoint662->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimSegment* HAnimSegment663 = new HAnimSegment();
HAnimSegment663->setName(CString("l5"));
HAnimSegment663->setDEF(CString("hanim_l5"));
Transform* Transform664 = new Transform();
Transform664->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
Transform* Transform665 = new Transform();
//Empty Transform
Shape* Shape666 = new Shape();
Shape666->setUSE(CString("HAnimJointShape"));
Transform665->addChild(Shape666);

Transform664->addChild(Transform665);

HAnimSegment663->addChild(Transform664);

Shape* Shape667 = new Shape();
LineSet* LineSet668 = new LineSet();
LineSet668->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate669 = new Coordinate();
Coordinate669->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet668->addChild(Coordinate669);

//from vl5 to vl4 vertices 2
ColorRGBA* ColorRGBA670 = new ColorRGBA();
ColorRGBA670->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet668->addChild(ColorRGBA670);

Shape667->setGeometry(LineSet668);

HAnimSegment663->addChild(Shape667);

HAnimJoint662->addChild(HAnimSegment663);

HAnimJoint* HAnimJoint671 = new HAnimJoint();
HAnimJoint671->setName(CString("vl4"));
HAnimJoint671->setDEF(CString("hanim_vl4"));
HAnimJoint671->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimSegment* HAnimSegment672 = new HAnimSegment();
HAnimSegment672->setName(CString("l4"));
HAnimSegment672->setDEF(CString("hanim_l4"));
Transform* Transform673 = new Transform();
Transform673->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
Transform* Transform674 = new Transform();
//Empty Transform
Shape* Shape675 = new Shape();
Shape675->setUSE(CString("HAnimJointShape"));
Transform674->addChild(Shape675);

Transform673->addChild(Transform674);

HAnimSegment672->addChild(Transform673);

Shape* Shape676 = new Shape();
LineSet* LineSet677 = new LineSet();
LineSet677->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate678 = new Coordinate();
Coordinate678->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet677->addChild(Coordinate678);

//from vl4 to vl3 vertices 2
ColorRGBA* ColorRGBA679 = new ColorRGBA();
ColorRGBA679->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet677->addChild(ColorRGBA679);

Shape676->setGeometry(LineSet677);

HAnimSegment672->addChild(Shape676);

HAnimJoint671->addChild(HAnimSegment672);

HAnimJoint* HAnimJoint680 = new HAnimJoint();
HAnimJoint680->setName(CString("vl3"));
HAnimJoint680->setDEF(CString("hanim_vl3"));
HAnimJoint680->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimSegment* HAnimSegment681 = new HAnimSegment();
HAnimSegment681->setName(CString("l3"));
HAnimSegment681->setDEF(CString("hanim_l3"));
Transform* Transform682 = new Transform();
Transform682->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
Transform* Transform683 = new Transform();
//Empty Transform
Shape* Shape684 = new Shape();
Shape684->setUSE(CString("HAnimJointShape"));
Transform683->addChild(Shape684);

Transform682->addChild(Transform683);

HAnimSegment681->addChild(Transform682);

Shape* Shape685 = new Shape();
LineSet* LineSet686 = new LineSet();
LineSet686->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate687 = new Coordinate();
Coordinate687->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet686->addChild(Coordinate687);

//from vl3 to vl2 vertices 2
ColorRGBA* ColorRGBA688 = new ColorRGBA();
ColorRGBA688->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet686->addChild(ColorRGBA688);

Shape685->setGeometry(LineSet686);

HAnimSegment681->addChild(Shape685);

HAnimSite* HAnimSite689 = new HAnimSite();
HAnimSite689->setName(CString("l_rib10_pt"));
HAnimSite689->setDEF(CString("hanim_l_rib10_pt"));
HAnimSite689->setTranslation(new float[3]{0.0871,1.1925,0.0992});
TouchSensor* TouchSensor690 = new TouchSensor();
TouchSensor690->setDescription(CString("HAnimSite l_rib10_pt"));
HAnimSite689->addChild(TouchSensor690);

Shape* Shape691 = new Shape();
Shape691->setUSE(CString("HAnimSiteShape"));
HAnimSite689->addChild(Shape691);

HAnimSegment681->addChild(HAnimSite689);

HAnimSite* HAnimSite692 = new HAnimSite();
HAnimSite692->setName(CString("r_rib10_pt"));
HAnimSite692->setDEF(CString("hanim_r_rib10_pt"));
HAnimSite692->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
TouchSensor* TouchSensor693 = new TouchSensor();
TouchSensor693->setDescription(CString("HAnimSite r_rib10_pt"));
HAnimSite692->addChild(TouchSensor693);

Shape* Shape694 = new Shape();
Shape694->setUSE(CString("HAnimSiteShape"));
HAnimSite692->addChild(Shape694);

HAnimSegment681->addChild(HAnimSite692);

HAnimSite* HAnimSite695 = new HAnimSite();
HAnimSite695->setName(CString("spine_2_middle_back_pt"));
HAnimSite695->setDEF(CString("hanim_spine_2_middle_back_pt"));
TouchSensor* TouchSensor696 = new TouchSensor();
TouchSensor696->setDescription(CString("HAnimSite spine_2_middle_back_pt"));
HAnimSite695->addChild(TouchSensor696);

Shape* Shape697 = new Shape();
Shape697->setUSE(CString("HAnimSiteShape"));
HAnimSite695->addChild(Shape697);

HAnimSegment681->addChild(HAnimSite695);

HAnimJoint680->addChild(HAnimSegment681);

HAnimJoint* HAnimJoint698 = new HAnimJoint();
HAnimJoint698->setName(CString("vl2"));
HAnimJoint698->setDEF(CString("hanim_vl2"));
HAnimJoint698->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimSegment* HAnimSegment699 = new HAnimSegment();
HAnimSegment699->setName(CString("l2"));
HAnimSegment699->setDEF(CString("hanim_l2"));
Transform* Transform700 = new Transform();
Transform700->setTranslation(new float[3]{0.0045,1.1546,-0.08});
Transform* Transform701 = new Transform();
//Empty Transform
Shape* Shape702 = new Shape();
Shape702->setUSE(CString("HAnimJointShape"));
Transform701->addChild(Shape702);

Transform700->addChild(Transform701);

HAnimSegment699->addChild(Transform700);

Shape* Shape703 = new Shape();
LineSet* LineSet704 = new LineSet();
LineSet704->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate705 = new Coordinate();
Coordinate705->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet704->addChild(Coordinate705);

//from vl2 to vl1 vertices 2
ColorRGBA* ColorRGBA706 = new ColorRGBA();
ColorRGBA706->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet704->addChild(ColorRGBA706);

Shape703->setGeometry(LineSet704);

HAnimSegment699->addChild(Shape703);

HAnimJoint698->addChild(HAnimSegment699);

HAnimJoint* HAnimJoint707 = new HAnimJoint();
HAnimJoint707->setName(CString("vl1"));
HAnimJoint707->setDEF(CString("hanim_vl1"));
HAnimJoint707->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimSegment* HAnimSegment708 = new HAnimSegment();
HAnimSegment708->setName(CString("l1"));
HAnimSegment708->setDEF(CString("hanim_l1"));
Transform* Transform709 = new Transform();
Transform709->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
Transform* Transform710 = new Transform();
//Empty Transform
Shape* Shape711 = new Shape();
Shape711->setUSE(CString("HAnimJointShape"));
Transform710->addChild(Shape711);

Transform709->addChild(Transform710);

HAnimSegment708->addChild(Transform709);

Shape* Shape712 = new Shape();
LineSet* LineSet713 = new LineSet();
LineSet713->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate714 = new Coordinate();
Coordinate714->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet713->addChild(Coordinate714);

//from vl1 to vt12 vertices 2
ColorRGBA* ColorRGBA715 = new ColorRGBA();
ColorRGBA715->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet713->addChild(ColorRGBA715);

Shape712->setGeometry(LineSet713);

HAnimSegment708->addChild(Shape712);

HAnimJoint707->addChild(HAnimSegment708);

HAnimJoint* HAnimJoint716 = new HAnimJoint();
HAnimJoint716->setName(CString("vt12"));
HAnimJoint716->setDEF(CString("hanim_vt12"));
HAnimJoint716->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimSegment* HAnimSegment717 = new HAnimSegment();
HAnimSegment717->setName(CString("t12"));
HAnimSegment717->setDEF(CString("hanim_t12"));
Transform* Transform718 = new Transform();
Transform718->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
Transform* Transform719 = new Transform();
//Empty Transform
Shape* Shape720 = new Shape();
Shape720->setUSE(CString("HAnimJointShape"));
Transform719->addChild(Shape720);

Transform718->addChild(Transform719);

HAnimSegment717->addChild(Transform718);

Shape* Shape721 = new Shape();
LineSet* LineSet722 = new LineSet();
LineSet722->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate723 = new Coordinate();
Coordinate723->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet722->addChild(Coordinate723);

//from vt12 to vt11 vertices 2
ColorRGBA* ColorRGBA724 = new ColorRGBA();
ColorRGBA724->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet722->addChild(ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimSegment717->addChild(Shape721);

HAnimJoint716->addChild(HAnimSegment717);

HAnimJoint* HAnimJoint725 = new HAnimJoint();
HAnimJoint725->setName(CString("vt11"));
HAnimJoint725->setDEF(CString("hanim_vt11"));
HAnimJoint725->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimSegment* HAnimSegment726 = new HAnimSegment();
HAnimSegment726->setName(CString("t11"));
HAnimSegment726->setDEF(CString("hanim_t11"));
Transform* Transform727 = new Transform();
Transform727->setTranslation(new float[3]{0.0053,1.2679,-0.081});
Transform* Transform728 = new Transform();
//Empty Transform
Shape* Shape729 = new Shape();
Shape729->setUSE(CString("HAnimJointShape"));
Transform728->addChild(Shape729);

Transform727->addChild(Transform728);

HAnimSegment726->addChild(Transform727);

Shape* Shape730 = new Shape();
LineSet* LineSet731 = new LineSet();
LineSet731->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate732 = new Coordinate();
Coordinate732->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet731->addChild(Coordinate732);

//from vt11 to vt10 vertices 2
ColorRGBA* ColorRGBA733 = new ColorRGBA();
ColorRGBA733->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet731->addChild(ColorRGBA733);

Shape730->setGeometry(LineSet731);

HAnimSegment726->addChild(Shape730);

HAnimSite* HAnimSite734 = new HAnimSite();
HAnimSite734->setName(CString("substernale_pt"));
HAnimSite734->setDEF(CString("hanim_substernale_pt"));
HAnimSite734->setTranslation(new float[3]{0.0085,1.2995,0.1147});
TouchSensor* TouchSensor735 = new TouchSensor();
TouchSensor735->setDescription(CString("HAnimSite substernale_pt"));
HAnimSite734->addChild(TouchSensor735);

Shape* Shape736 = new Shape();
Shape736->setUSE(CString("HAnimSiteShape"));
HAnimSite734->addChild(Shape736);

HAnimSegment726->addChild(HAnimSite734);

HAnimJoint725->addChild(HAnimSegment726);

HAnimJoint* HAnimJoint737 = new HAnimJoint();
HAnimJoint737->setName(CString("vt10"));
HAnimJoint737->setDEF(CString("hanim_vt10"));
HAnimJoint737->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimSegment* HAnimSegment738 = new HAnimSegment();
HAnimSegment738->setName(CString("t10"));
HAnimSegment738->setDEF(CString("hanim_t10"));
Transform* Transform739 = new Transform();
Transform739->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
Transform* Transform740 = new Transform();
//Empty Transform
Shape* Shape741 = new Shape();
Shape741->setUSE(CString("HAnimJointShape"));
Transform740->addChild(Shape741);

Transform739->addChild(Transform740);

HAnimSegment738->addChild(Transform739);

Shape* Shape742 = new Shape();
LineSet* LineSet743 = new LineSet();
LineSet743->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate744 = new Coordinate();
Coordinate744->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet743->addChild(Coordinate744);

//from vt10 to vt9 vertices 2
ColorRGBA* ColorRGBA745 = new ColorRGBA();
ColorRGBA745->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet743->addChild(ColorRGBA745);

Shape742->setGeometry(LineSet743);

HAnimSegment738->addChild(Shape742);

HAnimSite* HAnimSite746 = new HAnimSite();
HAnimSite746->setName(CString("l_thelion_pt"));
HAnimSite746->setDEF(CString("hanim_l_thelion_pt"));
HAnimSite746->setTranslation(new float[3]{0.0918,1.3382,0.1192});
TouchSensor* TouchSensor747 = new TouchSensor();
TouchSensor747->setDescription(CString("HAnimSite l_thelion_pt"));
HAnimSite746->addChild(TouchSensor747);

Shape* Shape748 = new Shape();
Shape748->setUSE(CString("HAnimSiteShape"));
HAnimSite746->addChild(Shape748);

HAnimSegment738->addChild(HAnimSite746);

HAnimSite* HAnimSite749 = new HAnimSite();
HAnimSite749->setName(CString("r_thelion_pt"));
HAnimSite749->setDEF(CString("hanim_r_thelion_pt"));
HAnimSite749->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
TouchSensor* TouchSensor750 = new TouchSensor();
TouchSensor750->setDescription(CString("HAnimSite r_thelion_pt"));
HAnimSite749->addChild(TouchSensor750);

Shape* Shape751 = new Shape();
Shape751->setUSE(CString("HAnimSiteShape"));
HAnimSite749->addChild(Shape751);

HAnimSegment738->addChild(HAnimSite749);

HAnimJoint737->addChild(HAnimSegment738);

HAnimJoint* HAnimJoint752 = new HAnimJoint();
HAnimJoint752->setName(CString("vt9"));
HAnimJoint752->setDEF(CString("hanim_vt9"));
HAnimJoint752->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimSegment* HAnimSegment753 = new HAnimSegment();
HAnimSegment753->setName(CString("t9"));
HAnimSegment753->setDEF(CString("hanim_t9"));
Transform* Transform754 = new Transform();
Transform754->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
Transform* Transform755 = new Transform();
//Empty Transform
Shape* Shape756 = new Shape();
Shape756->setUSE(CString("HAnimJointShape"));
Transform755->addChild(Shape756);

Transform754->addChild(Transform755);

HAnimSegment753->addChild(Transform754);

Shape* Shape757 = new Shape();
LineSet* LineSet758 = new LineSet();
LineSet758->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate759 = new Coordinate();
Coordinate759->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet758->addChild(Coordinate759);

//from vt9 to vt8 vertices 2
ColorRGBA* ColorRGBA760 = new ColorRGBA();
ColorRGBA760->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet758->addChild(ColorRGBA760);

Shape757->setGeometry(LineSet758);

HAnimSegment753->addChild(Shape757);

HAnimJoint752->addChild(HAnimSegment753);

HAnimJoint* HAnimJoint761 = new HAnimJoint();
HAnimJoint761->setName(CString("vt8"));
HAnimJoint761->setDEF(CString("hanim_vt8"));
HAnimJoint761->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimSegment* HAnimSegment762 = new HAnimSegment();
HAnimSegment762->setName(CString("t8"));
HAnimSegment762->setDEF(CString("hanim_t8"));
Transform* Transform763 = new Transform();
Transform763->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
Transform* Transform764 = new Transform();
//Empty Transform
Shape* Shape765 = new Shape();
Shape765->setUSE(CString("HAnimJointShape"));
Transform764->addChild(Shape765);

Transform763->addChild(Transform764);

HAnimSegment762->addChild(Transform763);

Shape* Shape766 = new Shape();
LineSet* LineSet767 = new LineSet();
LineSet767->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate768 = new Coordinate();
Coordinate768->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet767->addChild(Coordinate768);

//from vt8 to vt7 vertices 2
ColorRGBA* ColorRGBA769 = new ColorRGBA();
ColorRGBA769->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet767->addChild(ColorRGBA769);

Shape766->setGeometry(LineSet767);

HAnimSegment762->addChild(Shape766);

HAnimJoint761->addChild(HAnimSegment762);

HAnimJoint* HAnimJoint770 = new HAnimJoint();
HAnimJoint770->setName(CString("vt7"));
HAnimJoint770->setDEF(CString("hanim_vt7"));
HAnimJoint770->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimSegment* HAnimSegment771 = new HAnimSegment();
HAnimSegment771->setName(CString("t7"));
HAnimSegment771->setDEF(CString("hanim_t7"));
Transform* Transform772 = new Transform();
Transform772->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
Transform* Transform773 = new Transform();
//Empty Transform
Shape* Shape774 = new Shape();
Shape774->setUSE(CString("HAnimJointShape"));
Transform773->addChild(Shape774);

Transform772->addChild(Transform773);

HAnimSegment771->addChild(Transform772);

Shape* Shape775 = new Shape();
LineSet* LineSet776 = new LineSet();
LineSet776->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate777 = new Coordinate();
Coordinate777->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet776->addChild(Coordinate777);

//from vt7 to vt6 vertices 2
ColorRGBA* ColorRGBA778 = new ColorRGBA();
ColorRGBA778->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet776->addChild(ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment771->addChild(Shape775);

HAnimSite* HAnimSite779 = new HAnimSite();
HAnimSite779->setName(CString("l_chest_midsagittal_plane_pt"));
HAnimSite779->setDEF(CString("hanim_l_chest_midsagittal_plane_pt"));
TouchSensor* TouchSensor780 = new TouchSensor();
TouchSensor780->setDescription(CString("HAnimSite l_chest_midsagittal_plane_pt"));
HAnimSite779->addChild(TouchSensor780);

Shape* Shape781 = new Shape();
Shape781->setUSE(CString("HAnimSiteShape"));
HAnimSite779->addChild(Shape781);

HAnimSegment771->addChild(HAnimSite779);

HAnimSite* HAnimSite782 = new HAnimSite();
HAnimSite782->setName(CString("mesosternale_pt"));
HAnimSite782->setDEF(CString("hanim_mesosternale_pt"));
TouchSensor* TouchSensor783 = new TouchSensor();
TouchSensor783->setDescription(CString("HAnimSite mesosternale_pt"));
HAnimSite782->addChild(TouchSensor783);

Shape* Shape784 = new Shape();
Shape784->setUSE(CString("HAnimSiteShape"));
HAnimSite782->addChild(Shape784);

HAnimSegment771->addChild(HAnimSite782);

HAnimSite* HAnimSite785 = new HAnimSite();
HAnimSite785->setName(CString("r_chest_midsagittal_plane_pt"));
HAnimSite785->setDEF(CString("hanim_r_chest_midsagittal_plane_pt"));
TouchSensor* TouchSensor786 = new TouchSensor();
TouchSensor786->setDescription(CString("HAnimSite r_chest_midsagittal_plane_pt"));
HAnimSite785->addChild(TouchSensor786);

Shape* Shape787 = new Shape();
Shape787->setUSE(CString("HAnimSiteShape"));
HAnimSite785->addChild(Shape787);

HAnimSegment771->addChild(HAnimSite785);

HAnimSite* HAnimSite788 = new HAnimSite();
HAnimSite788->setName(CString("rear_center_midsagittal_plane_pt"));
HAnimSite788->setDEF(CString("hanim_rear_center_midsagittal_plane_pt"));
TouchSensor* TouchSensor789 = new TouchSensor();
TouchSensor789->setDescription(CString("HAnimSite rear_center_midsagittal_plane_pt"));
HAnimSite788->addChild(TouchSensor789);

Shape* Shape790 = new Shape();
Shape790->setUSE(CString("HAnimSiteShape"));
HAnimSite788->addChild(Shape790);

HAnimSegment771->addChild(HAnimSite788);

HAnimJoint770->addChild(HAnimSegment771);

HAnimJoint* HAnimJoint791 = new HAnimJoint();
HAnimJoint791->setName(CString("vt6"));
HAnimJoint791->setDEF(CString("hanim_vt6"));
HAnimJoint791->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimSegment* HAnimSegment792 = new HAnimSegment();
HAnimSegment792->setName(CString("t6"));
HAnimSegment792->setDEF(CString("hanim_t6"));
Transform* Transform793 = new Transform();
Transform793->setTranslation(new float[3]{0.0059,1.3866,-0.08});
Transform* Transform794 = new Transform();
//Empty Transform
Shape* Shape795 = new Shape();
Shape795->setUSE(CString("HAnimJointShape"));
Transform794->addChild(Shape795);

Transform793->addChild(Transform794);

HAnimSegment792->addChild(Transform793);

Shape* Shape796 = new Shape();
LineSet* LineSet797 = new LineSet();
LineSet797->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate798 = new Coordinate();
Coordinate798->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet797->addChild(Coordinate798);

//from vt6 to vt5 vertices 2
ColorRGBA* ColorRGBA799 = new ColorRGBA();
ColorRGBA799->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet797->addChild(ColorRGBA799);

Shape796->setGeometry(LineSet797);

HAnimSegment792->addChild(Shape796);

HAnimSite* HAnimSite800 = new HAnimSite();
HAnimSite800->setName(CString("spine_1_middle_back_pt"));
HAnimSite800->setDEF(CString("hanim_spine_1_middle_back_pt"));
TouchSensor* TouchSensor801 = new TouchSensor();
TouchSensor801->setDescription(CString("HAnimSite spine_1_middle_back_pt"));
HAnimSite800->addChild(TouchSensor801);

Shape* Shape802 = new Shape();
Shape802->setUSE(CString("HAnimSiteShape"));
HAnimSite800->addChild(Shape802);

HAnimSegment792->addChild(HAnimSite800);

HAnimJoint791->addChild(HAnimSegment792);

HAnimJoint* HAnimJoint803 = new HAnimJoint();
HAnimJoint803->setName(CString("vt5"));
HAnimJoint803->setDEF(CString("hanim_vt5"));
HAnimJoint803->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimSegment* HAnimSegment804 = new HAnimSegment();
HAnimSegment804->setName(CString("t5"));
HAnimSegment804->setDEF(CString("hanim_t5"));
Transform* Transform805 = new Transform();
Transform805->setTranslation(new float[3]{0.006,1.4102,-0.0745});
Transform* Transform806 = new Transform();
//Empty Transform
Shape* Shape807 = new Shape();
Shape807->setUSE(CString("HAnimJointShape"));
Transform806->addChild(Shape807);

Transform805->addChild(Transform806);

HAnimSegment804->addChild(Transform805);

Shape* Shape808 = new Shape();
LineSet* LineSet809 = new LineSet();
LineSet809->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate810 = new Coordinate();
Coordinate810->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet809->addChild(Coordinate810);

//from vt5 to vt4 vertices 2
ColorRGBA* ColorRGBA811 = new ColorRGBA();
ColorRGBA811->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet809->addChild(ColorRGBA811);

Shape808->setGeometry(LineSet809);

HAnimSegment804->addChild(Shape808);

HAnimJoint803->addChild(HAnimSegment804);

HAnimJoint* HAnimJoint812 = new HAnimJoint();
HAnimJoint812->setName(CString("vt4"));
HAnimJoint812->setDEF(CString("hanim_vt4"));
HAnimJoint812->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimSegment* HAnimSegment813 = new HAnimSegment();
HAnimSegment813->setName(CString("t4"));
HAnimSegment813->setDEF(CString("hanim_t4"));
Transform* Transform814 = new Transform();
Transform814->setTranslation(new float[3]{0.0061,1.432,-0.0675});
Transform* Transform815 = new Transform();
//Empty Transform
Shape* Shape816 = new Shape();
Shape816->setUSE(CString("HAnimJointShape"));
Transform815->addChild(Shape816);

Transform814->addChild(Transform815);

HAnimSegment813->addChild(Transform814);

Shape* Shape817 = new Shape();
LineSet* LineSet818 = new LineSet();
LineSet818->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate819 = new Coordinate();
Coordinate819->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet818->addChild(Coordinate819);

//from vt4 to vt3 vertices 2
ColorRGBA* ColorRGBA820 = new ColorRGBA();
ColorRGBA820->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet818->addChild(ColorRGBA820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChild(Shape817);

HAnimJoint812->addChild(HAnimSegment813);

HAnimJoint* HAnimJoint821 = new HAnimJoint();
HAnimJoint821->setName(CString("vt3"));
HAnimJoint821->setDEF(CString("hanim_vt3"));
HAnimJoint821->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimSegment* HAnimSegment822 = new HAnimSegment();
HAnimSegment822->setName(CString("t3"));
HAnimSegment822->setDEF(CString("hanim_t3"));
Transform* Transform823 = new Transform();
Transform823->setTranslation(new float[3]{0.0062,1.4583,-0.057});
Transform* Transform824 = new Transform();
//Empty Transform
Shape* Shape825 = new Shape();
Shape825->setUSE(CString("HAnimJointShape"));
Transform824->addChild(Shape825);

Transform823->addChild(Transform824);

HAnimSegment822->addChild(Transform823);

Shape* Shape826 = new Shape();
LineSet* LineSet827 = new LineSet();
LineSet827->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate828 = new Coordinate();
Coordinate828->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet827->addChild(Coordinate828);

//from vt3 to vt2 vertices 2
ColorRGBA* ColorRGBA829 = new ColorRGBA();
ColorRGBA829->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet827->addChild(ColorRGBA829);

Shape826->setGeometry(LineSet827);

HAnimSegment822->addChild(Shape826);

HAnimJoint821->addChild(HAnimSegment822);

HAnimJoint* HAnimJoint830 = new HAnimJoint();
HAnimJoint830->setName(CString("vt2"));
HAnimJoint830->setDEF(CString("hanim_vt2"));
HAnimJoint830->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimSegment* HAnimSegment831 = new HAnimSegment();
HAnimSegment831->setName(CString("t2"));
HAnimSegment831->setDEF(CString("hanim_t2"));
Transform* Transform832 = new Transform();
Transform832->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
Transform* Transform833 = new Transform();
//Empty Transform
Shape* Shape834 = new Shape();
Shape834->setUSE(CString("HAnimJointShape"));
Transform833->addChild(Shape834);

Transform832->addChild(Transform833);

HAnimSegment831->addChild(Transform832);

Shape* Shape835 = new Shape();
LineSet* LineSet836 = new LineSet();
LineSet836->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate837 = new Coordinate();
Coordinate837->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet836->addChild(Coordinate837);

//from vt2 to vt1 vertices 2
ColorRGBA* ColorRGBA838 = new ColorRGBA();
ColorRGBA838->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet836->addChild(ColorRGBA838);

Shape835->setGeometry(LineSet836);

HAnimSegment831->addChild(Shape835);

HAnimSite* HAnimSite839 = new HAnimSite();
HAnimSite839->setName(CString("cervicale_pt"));
HAnimSite839->setDEF(CString("hanim_cervicale_pt"));
HAnimSite839->setTranslation(new float[3]{0.0064,1.52,-0.0815});
TouchSensor* TouchSensor840 = new TouchSensor();
TouchSensor840->setDescription(CString("HAnimSite cervicale_pt"));
HAnimSite839->addChild(TouchSensor840);

Shape* Shape841 = new Shape();
Shape841->setUSE(CString("HAnimSiteShape"));
HAnimSite839->addChild(Shape841);

HAnimSegment831->addChild(HAnimSite839);

HAnimSite* HAnimSite842 = new HAnimSite();
HAnimSite842->setName(CString("suprasternale_pt"));
HAnimSite842->setDEF(CString("hanim_suprasternale_pt"));
HAnimSite842->setTranslation(new float[3]{0.0084,1.4714,0.0551});
TouchSensor* TouchSensor843 = new TouchSensor();
TouchSensor843->setDescription(CString("HAnimSite suprasternale_pt"));
HAnimSite842->addChild(TouchSensor843);

Shape* Shape844 = new Shape();
Shape844->setUSE(CString("HAnimSiteShape"));
HAnimSite842->addChild(Shape844);

HAnimSegment831->addChild(HAnimSite842);

HAnimJoint830->addChild(HAnimSegment831);

HAnimJoint* HAnimJoint845 = new HAnimJoint();
HAnimJoint845->setName(CString("vt1"));
HAnimJoint845->setDEF(CString("hanim_vt1"));
HAnimJoint845->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimSegment* HAnimSegment846 = new HAnimSegment();
HAnimSegment846->setName(CString("t1"));
HAnimSegment846->setDEF(CString("hanim_t1"));
Transform* Transform847 = new Transform();
Transform847->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
Transform* Transform848 = new Transform();
//Empty Transform
Shape* Shape849 = new Shape();
Shape849->setUSE(CString("HAnimJointShape"));
Transform848->addChild(Shape849);

Transform847->addChild(Transform848);

HAnimSegment846->addChild(Transform847);

Shape* Shape850 = new Shape();
LineSet* LineSet851 = new LineSet();
LineSet851->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate852 = new Coordinate();
Coordinate852->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet851->addChild(Coordinate852);

//from vt1 to vc7 vertices 2
ColorRGBA* ColorRGBA853 = new ColorRGBA();
ColorRGBA853->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet851->addChild(ColorRGBA853);

Shape850->setGeometry(LineSet851);

HAnimSegment846->addChild(Shape850);

HAnimSite* HAnimSite854 = new HAnimSite();
HAnimSite854->setName(CString("l_neck_base_pt"));
HAnimSite854->setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite854->setTranslation(new float[3]{0.0646,1.5141,-0.038});
TouchSensor* TouchSensor855 = new TouchSensor();
TouchSensor855->setDescription(CString("HAnimSite l_neck_base_pt"));
HAnimSite854->addChild(TouchSensor855);

Shape* Shape856 = new Shape();
Shape856->setUSE(CString("HAnimSiteShape"));
HAnimSite854->addChild(Shape856);

HAnimSegment846->addChild(HAnimSite854);

HAnimSite* HAnimSite857 = new HAnimSite();
HAnimSite857->setName(CString("r_neck_base_pt"));
HAnimSite857->setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite857->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
TouchSensor* TouchSensor858 = new TouchSensor();
TouchSensor858->setDescription(CString("HAnimSite r_neck_base_pt"));
HAnimSite857->addChild(TouchSensor858);

Shape* Shape859 = new Shape();
Shape859->setUSE(CString("HAnimSiteShape"));
HAnimSite857->addChild(Shape859);

HAnimSegment846->addChild(HAnimSite857);

Shape* Shape860 = new Shape();
LineSet* LineSet861 = new LineSet();
LineSet861->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate862 = new Coordinate();
Coordinate862->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet861->addChild(Coordinate862);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA* ColorRGBA863 = new ColorRGBA();
ColorRGBA863->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet861->addChild(ColorRGBA863);

Shape860->setGeometry(LineSet861);

HAnimSegment846->addChild(Shape860);

HAnimSite* HAnimSite864 = new HAnimSite();
HAnimSite864->setName(CString("l_acromion_pt"));
HAnimSite864->setDEF(CString("hanim_l_acromion_pt"));
HAnimSite864->setTranslation(new float[3]{0.2032,1.476,-0.049});
TouchSensor* TouchSensor865 = new TouchSensor();
TouchSensor865->setDescription(CString("HAnimSite l_acromion_pt"));
HAnimSite864->addChild(TouchSensor865);

Shape* Shape866 = new Shape();
Shape866->setUSE(CString("HAnimSiteShape"));
HAnimSite864->addChild(Shape866);

HAnimSegment846->addChild(HAnimSite864);

HAnimSite* HAnimSite867 = new HAnimSite();
HAnimSite867->setName(CString("l_axilla_distal_pt"));
HAnimSite867->setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite867->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
TouchSensor* TouchSensor868 = new TouchSensor();
TouchSensor868->setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite867->addChild(TouchSensor868);

Shape* Shape869 = new Shape();
Shape869->setUSE(CString("HAnimSiteShape"));
HAnimSite867->addChild(Shape869);

HAnimSegment846->addChild(HAnimSite867);

HAnimSite* HAnimSite870 = new HAnimSite();
HAnimSite870->setName(CString("l_axilla_posterior_folds_pt"));
HAnimSite870->setDEF(CString("hanim_l_axilla_posterior_folds_pt"));
TouchSensor* TouchSensor871 = new TouchSensor();
TouchSensor871->setDescription(CString("HAnimSite l_axilla_posterior_folds_pt"));
HAnimSite870->addChild(TouchSensor871);

Shape* Shape872 = new Shape();
Shape872->setUSE(CString("HAnimSiteShape"));
HAnimSite870->addChild(Shape872);

HAnimSegment846->addChild(HAnimSite870);

HAnimSite* HAnimSite873 = new HAnimSite();
HAnimSite873->setName(CString("l_axilla_proximal_pt"));
HAnimSite873->setDEF(CString("hanim_l_axilla_proximal_pt"));
HAnimSite873->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
TouchSensor* TouchSensor874 = new TouchSensor();
TouchSensor874->setDescription(CString("HAnimSite l_axilla_proximal_pt"));
HAnimSite873->addChild(TouchSensor874);

Shape* Shape875 = new Shape();
Shape875->setUSE(CString("HAnimSiteShape"));
HAnimSite873->addChild(Shape875);

HAnimSegment846->addChild(HAnimSite873);

HAnimSite* HAnimSite876 = new HAnimSite();
HAnimSite876->setName(CString("l_clavicale_pt"));
HAnimSite876->setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite876->setTranslation(new float[3]{0.0271,1.4943,0.0394});
TouchSensor* TouchSensor877 = new TouchSensor();
TouchSensor877->setDescription(CString("HAnimSite l_clavicale_pt"));
HAnimSite876->addChild(TouchSensor877);

Shape* Shape878 = new Shape();
Shape878->setUSE(CString("HAnimSiteShape"));
HAnimSite876->addChild(Shape878);

HAnimSegment846->addChild(HAnimSite876);

Shape* Shape879 = new Shape();
LineSet* LineSet880 = new LineSet();
LineSet880->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate881 = new Coordinate();
Coordinate881->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet880->addChild(Coordinate881);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA* ColorRGBA882 = new ColorRGBA();
ColorRGBA882->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet880->addChild(ColorRGBA882);

Shape879->setGeometry(LineSet880);

HAnimSegment846->addChild(Shape879);

HAnimSite* HAnimSite883 = new HAnimSite();
HAnimSite883->setName(CString("r_acromion_pt"));
HAnimSite883->setDEF(CString("hanim_r_acromion_pt"));
HAnimSite883->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
TouchSensor* TouchSensor884 = new TouchSensor();
TouchSensor884->setDescription(CString("HAnimSite r_acromion_pt"));
HAnimSite883->addChild(TouchSensor884);

Shape* Shape885 = new Shape();
Shape885->setUSE(CString("HAnimSiteShape"));
HAnimSite883->addChild(Shape885);

HAnimSegment846->addChild(HAnimSite883);

HAnimSite* HAnimSite886 = new HAnimSite();
HAnimSite886->setName(CString("r_axilla_distal_pt"));
HAnimSite886->setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite886->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
TouchSensor* TouchSensor887 = new TouchSensor();
TouchSensor887->setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite886->addChild(TouchSensor887);

Shape* Shape888 = new Shape();
Shape888->setUSE(CString("HAnimSiteShape"));
HAnimSite886->addChild(Shape888);

HAnimSegment846->addChild(HAnimSite886);

HAnimSite* HAnimSite889 = new HAnimSite();
HAnimSite889->setName(CString("r_axilla_posterior_folds_pt"));
HAnimSite889->setDEF(CString("hanim_r_axilla_posterior_folds_pt"));
TouchSensor* TouchSensor890 = new TouchSensor();
TouchSensor890->setDescription(CString("HAnimSite r_axilla_posterior_folds_pt"));
HAnimSite889->addChild(TouchSensor890);

Shape* Shape891 = new Shape();
Shape891->setUSE(CString("HAnimSiteShape"));
HAnimSite889->addChild(Shape891);

HAnimSegment846->addChild(HAnimSite889);

HAnimSite* HAnimSite892 = new HAnimSite();
HAnimSite892->setName(CString("r_axilla_proximal_pt"));
HAnimSite892->setDEF(CString("hanim_r_axilla_proximal_pt"));
HAnimSite892->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
TouchSensor* TouchSensor893 = new TouchSensor();
TouchSensor893->setDescription(CString("HAnimSite r_axilla_proximal_pt"));
HAnimSite892->addChild(TouchSensor893);

Shape* Shape894 = new Shape();
Shape894->setUSE(CString("HAnimSiteShape"));
HAnimSite892->addChild(Shape894);

HAnimSegment846->addChild(HAnimSite892);

HAnimSite* HAnimSite895 = new HAnimSite();
HAnimSite895->setName(CString("r_clavicale_pt"));
HAnimSite895->setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite895->setTranslation(new float[3]{-0.0115,1.4943,0.04});
TouchSensor* TouchSensor896 = new TouchSensor();
TouchSensor896->setDescription(CString("HAnimSite r_clavicale_pt"));
HAnimSite895->addChild(TouchSensor896);

Shape* Shape897 = new Shape();
Shape897->setUSE(CString("HAnimSiteShape"));
HAnimSite895->addChild(Shape897);

HAnimSegment846->addChild(HAnimSite895);

HAnimJoint845->addChild(HAnimSegment846);

HAnimJoint* HAnimJoint898 = new HAnimJoint();
HAnimJoint898->setName(CString("vc7"));
HAnimJoint898->setDEF(CString("hanim_vc7"));
HAnimJoint898->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimSegment* HAnimSegment899 = new HAnimSegment();
HAnimSegment899->setName(CString("c7"));
HAnimSegment899->setDEF(CString("hanim_c7"));
Transform* Transform900 = new Transform();
Transform900->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
Transform* Transform901 = new Transform();
//Empty Transform
Shape* Shape902 = new Shape();
Shape902->setUSE(CString("HAnimJointShape"));
Transform901->addChild(Shape902);

Transform900->addChild(Transform901);

HAnimSegment899->addChild(Transform900);

Shape* Shape903 = new Shape();
LineSet* LineSet904 = new LineSet();
LineSet904->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate905 = new Coordinate();
Coordinate905->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet904->addChild(Coordinate905);

//from vc7 to vc6 vertices 2
ColorRGBA* ColorRGBA906 = new ColorRGBA();
ColorRGBA906->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet904->addChild(ColorRGBA906);

Shape903->setGeometry(LineSet904);

HAnimSegment899->addChild(Shape903);

HAnimJoint898->addChild(HAnimSegment899);

HAnimJoint* HAnimJoint907 = new HAnimJoint();
HAnimJoint907->setName(CString("vc6"));
HAnimJoint907->setDEF(CString("hanim_vc6"));
HAnimJoint907->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimSegment* HAnimSegment908 = new HAnimSegment();
HAnimSegment908->setName(CString("c6"));
HAnimSegment908->setDEF(CString("hanim_c6"));
Transform* Transform909 = new Transform();
Transform909->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
Transform* Transform910 = new Transform();
//Empty Transform
Shape* Shape911 = new Shape();
Shape911->setUSE(CString("HAnimJointShape"));
Transform910->addChild(Shape911);

Transform909->addChild(Transform910);

HAnimSegment908->addChild(Transform909);

Shape* Shape912 = new Shape();
LineSet* LineSet913 = new LineSet();
LineSet913->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate914 = new Coordinate();
Coordinate914->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet913->addChild(Coordinate914);

//from vc6 to vc5 vertices 2
ColorRGBA* ColorRGBA915 = new ColorRGBA();
ColorRGBA915->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet913->addChild(ColorRGBA915);

Shape912->setGeometry(LineSet913);

HAnimSegment908->addChild(Shape912);

HAnimJoint907->addChild(HAnimSegment908);

HAnimJoint* HAnimJoint916 = new HAnimJoint();
HAnimJoint916->setName(CString("vc5"));
HAnimJoint916->setDEF(CString("hanim_vc5"));
HAnimJoint916->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimSegment* HAnimSegment917 = new HAnimSegment();
HAnimSegment917->setName(CString("c5"));
HAnimSegment917->setDEF(CString("hanim_c5"));
Transform* Transform918 = new Transform();
Transform918->setTranslation(new float[3]{0.0066,1.552,-0.0082});
Transform* Transform919 = new Transform();
//Empty Transform
Shape* Shape920 = new Shape();
Shape920->setUSE(CString("HAnimJointShape"));
Transform919->addChild(Shape920);

Transform918->addChild(Transform919);

HAnimSegment917->addChild(Transform918);

Shape* Shape921 = new Shape();
LineSet* LineSet922 = new LineSet();
LineSet922->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate923 = new Coordinate();
Coordinate923->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet922->addChild(Coordinate923);

//from vc5 to vc4 vertices 2
ColorRGBA* ColorRGBA924 = new ColorRGBA();
ColorRGBA924->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet922->addChild(ColorRGBA924);

Shape921->setGeometry(LineSet922);

HAnimSegment917->addChild(Shape921);

HAnimJoint916->addChild(HAnimSegment917);

HAnimJoint* HAnimJoint925 = new HAnimJoint();
HAnimJoint925->setName(CString("vc4"));
HAnimJoint925->setDEF(CString("hanim_vc4"));
HAnimJoint925->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimSegment* HAnimSegment926 = new HAnimSegment();
HAnimSegment926->setName(CString("c4"));
HAnimSegment926->setDEF(CString("hanim_c4"));
Transform* Transform927 = new Transform();
Transform927->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
Transform* Transform928 = new Transform();
//Empty Transform
Shape* Shape929 = new Shape();
Shape929->setUSE(CString("HAnimJointShape"));
Transform928->addChild(Shape929);

Transform927->addChild(Transform928);

HAnimSegment926->addChild(Transform927);

Shape* Shape930 = new Shape();
LineSet* LineSet931 = new LineSet();
LineSet931->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate932 = new Coordinate();
Coordinate932->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet931->addChild(Coordinate932);

//from vc4 to vc3 vertices 2
ColorRGBA* ColorRGBA933 = new ColorRGBA();
ColorRGBA933->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet931->addChild(ColorRGBA933);

Shape930->setGeometry(LineSet931);

HAnimSegment926->addChild(Shape930);

HAnimJoint925->addChild(HAnimSegment926);

HAnimJoint* HAnimJoint934 = new HAnimJoint();
HAnimJoint934->setName(CString("vc3"));
HAnimJoint934->setDEF(CString("hanim_vc3"));
HAnimJoint934->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimSegment* HAnimSegment935 = new HAnimSegment();
HAnimSegment935->setName(CString("c3"));
HAnimSegment935->setDEF(CString("hanim_c3"));
Transform* Transform936 = new Transform();
Transform936->setTranslation(new float[3]{0.0066,1.58,-0.0103});
Transform* Transform937 = new Transform();
//Empty Transform
Shape* Shape938 = new Shape();
Shape938->setUSE(CString("HAnimJointShape"));
Transform937->addChild(Shape938);

Transform936->addChild(Transform937);

HAnimSegment935->addChild(Transform936);

Shape* Shape939 = new Shape();
LineSet* LineSet940 = new LineSet();
LineSet940->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate941 = new Coordinate();
Coordinate941->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet940->addChild(Coordinate941);

//from vc3 to vc2 vertices 2
ColorRGBA* ColorRGBA942 = new ColorRGBA();
ColorRGBA942->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet940->addChild(ColorRGBA942);

Shape939->setGeometry(LineSet940);

HAnimSegment935->addChild(Shape939);

HAnimSite* HAnimSite943 = new HAnimSite();
HAnimSite943->setName(CString("adams_apple_pt"));
HAnimSite943->setDEF(CString("hanim_adams_apple_pt"));
TouchSensor* TouchSensor944 = new TouchSensor();
TouchSensor944->setDescription(CString("HAnimSite adams_apple_pt"));
HAnimSite943->addChild(TouchSensor944);

Shape* Shape945 = new Shape();
Shape945->setUSE(CString("HAnimSiteShape"));
HAnimSite943->addChild(Shape945);

HAnimSegment935->addChild(HAnimSite943);

HAnimJoint934->addChild(HAnimSegment935);

HAnimJoint* HAnimJoint946 = new HAnimJoint();
HAnimJoint946->setName(CString("vc2"));
HAnimJoint946->setDEF(CString("hanim_vc2"));
HAnimJoint946->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimSegment* HAnimSegment947 = new HAnimSegment();
HAnimSegment947->setName(CString("c2"));
HAnimSegment947->setDEF(CString("hanim_c2"));
Transform* Transform948 = new Transform();
Transform948->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
Transform* Transform949 = new Transform();
//Empty Transform
Shape* Shape950 = new Shape();
Shape950->setUSE(CString("HAnimJointShape"));
Transform949->addChild(Shape950);

Transform948->addChild(Transform949);

HAnimSegment947->addChild(Transform948);

Shape* Shape951 = new Shape();
LineSet* LineSet952 = new LineSet();
LineSet952->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate953 = new Coordinate();
Coordinate953->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet952->addChild(Coordinate953);

//from vc2 to vc1 vertices 2
ColorRGBA* ColorRGBA954 = new ColorRGBA();
ColorRGBA954->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet952->addChild(ColorRGBA954);

Shape951->setGeometry(LineSet952);

HAnimSegment947->addChild(Shape951);

HAnimJoint946->addChild(HAnimSegment947);

HAnimJoint* HAnimJoint955 = new HAnimJoint();
HAnimJoint955->setName(CString("vc1"));
HAnimJoint955->setDEF(CString("hanim_vc1"));
HAnimJoint955->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimSegment* HAnimSegment956 = new HAnimSegment();
HAnimSegment956->setName(CString("c1"));
HAnimSegment956->setDEF(CString("hanim_c1"));
Transform* Transform957 = new Transform();
Transform957->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
Transform* Transform958 = new Transform();
//Empty Transform
Shape* Shape959 = new Shape();
Shape959->setUSE(CString("HAnimJointShape"));
Transform958->addChild(Shape959);

Transform957->addChild(Transform958);

HAnimSegment956->addChild(Transform957);

Shape* Shape960 = new Shape();
LineSet* LineSet961 = new LineSet();
LineSet961->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate962 = new Coordinate();
Coordinate962->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet961->addChild(Coordinate962);

//from vc1 to skullbase vertices 2
ColorRGBA* ColorRGBA963 = new ColorRGBA();
ColorRGBA963->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet961->addChild(ColorRGBA963);

Shape960->setGeometry(LineSet961);

HAnimSegment956->addChild(Shape960);

HAnimSite* HAnimSite964 = new HAnimSite();
HAnimSite964->setName(CString("glabella_pt"));
HAnimSite964->setDEF(CString("hanim_glabella_pt"));
TouchSensor* TouchSensor965 = new TouchSensor();
TouchSensor965->setDescription(CString("HAnimSite glabella_pt"));
HAnimSite964->addChild(TouchSensor965);

Shape* Shape966 = new Shape();
Shape966->setUSE(CString("HAnimSiteShape"));
HAnimSite964->addChild(Shape966);

HAnimSegment956->addChild(HAnimSite964);

HAnimSite* HAnimSite967 = new HAnimSite();
HAnimSite967->setName(CString("l_ectocanthus_pt"));
HAnimSite967->setDEF(CString("hanim_l_ectocanthus_pt"));
TouchSensor* TouchSensor968 = new TouchSensor();
TouchSensor968->setDescription(CString("HAnimSite l_ectocanthus_pt"));
HAnimSite967->addChild(TouchSensor968);

Shape* Shape969 = new Shape();
Shape969->setUSE(CString("HAnimSiteShape"));
HAnimSite967->addChild(Shape969);

HAnimSegment956->addChild(HAnimSite967);

HAnimSite* HAnimSite970 = new HAnimSite();
HAnimSite970->setName(CString("l_infraorbitale_pt"));
HAnimSite970->setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite970->setTranslation(new float[3]{0.0341,1.6171,0.0752});
TouchSensor* TouchSensor971 = new TouchSensor();
TouchSensor971->setDescription(CString("HAnimSite l_infraorbitale_pt"));
HAnimSite970->addChild(TouchSensor971);

Shape* Shape972 = new Shape();
Shape972->setUSE(CString("HAnimSiteShape"));
HAnimSite970->addChild(Shape972);

HAnimSegment956->addChild(HAnimSite970);

HAnimSite* HAnimSite973 = new HAnimSite();
HAnimSite973->setName(CString("l_tragion_pt"));
HAnimSite973->setDEF(CString("hanim_l_tragion_pt"));
HAnimSite973->setTranslation(new float[3]{0.0739,1.6348,0.0282});
TouchSensor* TouchSensor974 = new TouchSensor();
TouchSensor974->setDescription(CString("HAnimSite l_tragion_pt"));
HAnimSite973->addChild(TouchSensor974);

Shape* Shape975 = new Shape();
Shape975->setUSE(CString("HAnimSiteShape"));
HAnimSite973->addChild(Shape975);

HAnimSegment956->addChild(HAnimSite973);

HAnimSite* HAnimSite976 = new HAnimSite();
HAnimSite976->setName(CString("nuchale_pt"));
HAnimSite976->setDEF(CString("hanim_nuchale_pt"));
HAnimSite976->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
TouchSensor* TouchSensor977 = new TouchSensor();
TouchSensor977->setDescription(CString("HAnimSite nuchale_pt"));
HAnimSite976->addChild(TouchSensor977);

Shape* Shape978 = new Shape();
Shape978->setUSE(CString("HAnimSiteShape"));
HAnimSite976->addChild(Shape978);

HAnimSegment956->addChild(HAnimSite976);

HAnimSite* HAnimSite979 = new HAnimSite();
HAnimSite979->setName(CString("opisthocranion_pt"));
HAnimSite979->setDEF(CString("hanim_opisthocranion_pt"));
TouchSensor* TouchSensor980 = new TouchSensor();
TouchSensor980->setDescription(CString("HAnimSite opisthocranion_pt"));
HAnimSite979->addChild(TouchSensor980);

Shape* Shape981 = new Shape();
Shape981->setUSE(CString("HAnimSiteShape"));
HAnimSite979->addChild(Shape981);

HAnimSegment956->addChild(HAnimSite979);

HAnimSite* HAnimSite982 = new HAnimSite();
HAnimSite982->setName(CString("r_ectocanthus_pt"));
HAnimSite982->setDEF(CString("hanim_r_ectocanthus_pt"));
TouchSensor* TouchSensor983 = new TouchSensor();
TouchSensor983->setDescription(CString("HAnimSite r_ectocanthus_pt"));
HAnimSite982->addChild(TouchSensor983);

Shape* Shape984 = new Shape();
Shape984->setUSE(CString("HAnimSiteShape"));
HAnimSite982->addChild(Shape984);

HAnimSegment956->addChild(HAnimSite982);

HAnimSite* HAnimSite985 = new HAnimSite();
HAnimSite985->setName(CString("r_infraorbitale_pt"));
HAnimSite985->setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite985->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
TouchSensor* TouchSensor986 = new TouchSensor();
TouchSensor986->setDescription(CString("HAnimSite r_infraorbitale_pt"));
HAnimSite985->addChild(TouchSensor986);

Shape* Shape987 = new Shape();
Shape987->setUSE(CString("HAnimSiteShape"));
HAnimSite985->addChild(Shape987);

HAnimSegment956->addChild(HAnimSite985);

HAnimSite* HAnimSite988 = new HAnimSite();
HAnimSite988->setName(CString("r_tragion_pt"));
HAnimSite988->setDEF(CString("hanim_r_tragion_pt"));
HAnimSite988->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
TouchSensor* TouchSensor989 = new TouchSensor();
TouchSensor989->setDescription(CString("HAnimSite r_tragion_pt"));
HAnimSite988->addChild(TouchSensor989);

Shape* Shape990 = new Shape();
Shape990->setUSE(CString("HAnimSiteShape"));
HAnimSite988->addChild(Shape990);

HAnimSegment956->addChild(HAnimSite988);

HAnimSite* HAnimSite991 = new HAnimSite();
HAnimSite991->setName(CString("sellion_pt"));
HAnimSite991->setDEF(CString("hanim_sellion_pt"));
HAnimSite991->setTranslation(new float[3]{0.0058,1.6316,0.0852});
TouchSensor* TouchSensor992 = new TouchSensor();
TouchSensor992->setDescription(CString("HAnimSite sellion_pt"));
HAnimSite991->addChild(TouchSensor992);

Shape* Shape993 = new Shape();
Shape993->setUSE(CString("HAnimSiteShape"));
HAnimSite991->addChild(Shape993);

HAnimSegment956->addChild(HAnimSite991);

HAnimSite* HAnimSite994 = new HAnimSite();
HAnimSite994->setName(CString("skull_vertex_pt"));
HAnimSite994->setDEF(CString("hanim_skull_vertex_pt"));
HAnimSite994->setTranslation(new float[3]{0.005,1.7504,0.0055});
TouchSensor* TouchSensor995 = new TouchSensor();
TouchSensor995->setDescription(CString("HAnimSite skull_vertex_pt"));
HAnimSite994->addChild(TouchSensor995);

Shape* Shape996 = new Shape();
Shape996->setUSE(CString("HAnimSiteShape"));
HAnimSite994->addChild(Shape996);

HAnimSegment956->addChild(HAnimSite994);

HAnimJoint955->addChild(HAnimSegment956);

HAnimJoint* HAnimJoint997 = new HAnimJoint();
HAnimJoint997->setName(CString("skullbase"));
HAnimJoint997->setDEF(CString("hanim_skullbase"));
HAnimJoint997->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimSegment* HAnimSegment998 = new HAnimSegment();
HAnimSegment998->setName(CString("skull"));
HAnimSegment998->setDEF(CString("hanim_skull"));
Transform* Transform999 = new Transform();
Transform999->setTranslation(new float[3]{0.0044,1.6209,0.0236});
Transform* Transform1000 = new Transform();
//Empty Transform
Shape* Shape1001 = new Shape();
Shape1001->setUSE(CString("HAnimJointShape"));
Transform1000->addChild(Shape1001);

Transform999->addChild(Transform1000);

HAnimSegment998->addChild(Transform999);

Shape* Shape1002 = new Shape();
LineSet* LineSet1003 = new LineSet();
LineSet1003->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1004 = new Coordinate();
Coordinate1004->setPoint(new float[6]{0.0044,1.6209,0.0236,2.2365,1.87,1.9285}, 6);
LineSet1003->addChild(Coordinate1004);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA* ColorRGBA1005 = new ColorRGBA();
ColorRGBA1005->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1003->addChild(ColorRGBA1005);

Shape1002->setGeometry(LineSet1003);

HAnimSegment998->addChild(Shape1002);

Shape* Shape1006 = new Shape();
LineSet* LineSet1007 = new LineSet();
LineSet1007->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1008 = new Coordinate();
Coordinate1008->setPoint(new float[6]{0.0044,1.6209,0.0236,-2.2535,1.87,1.9285}, 6);
LineSet1007->addChild(Coordinate1008);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA* ColorRGBA1009 = new ColorRGBA();
ColorRGBA1009->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1007->addChild(ColorRGBA1009);

Shape1006->setGeometry(LineSet1007);

HAnimSegment998->addChild(Shape1006);

Shape* Shape1010 = new Shape();
LineSet* LineSet1011 = new LineSet();
LineSet1011->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1012 = new Coordinate();
Coordinate1012->setPoint(new float[6]{0.0044,1.6209,0.0236,2.1305,1.8444,4.1555}, 6);
LineSet1011->addChild(Coordinate1012);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA* ColorRGBA1013 = new ColorRGBA();
ColorRGBA1013->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1011->addChild(ColorRGBA1013);

Shape1010->setGeometry(LineSet1011);

HAnimSegment998->addChild(Shape1010);

Shape* Shape1014 = new Shape();
LineSet* LineSet1015 = new LineSet();
LineSet1015->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1016 = new Coordinate();
Coordinate1016->setPoint(new float[6]{0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555}, 6);
LineSet1015->addChild(Coordinate1016);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA* ColorRGBA1017 = new ColorRGBA();
ColorRGBA1017->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1015->addChild(ColorRGBA1017);

Shape1014->setGeometry(LineSet1015);

HAnimSegment998->addChild(Shape1014);

Shape* Shape1018 = new Shape();
LineSet* LineSet1019 = new LineSet();
LineSet1019->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1020 = new Coordinate();
Coordinate1020->setPoint(new float[6]{0.0044,1.6209,0.0236,0.9581,1.8563,5.2175}, 6);
LineSet1019->addChild(Coordinate1020);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA* ColorRGBA1021 = new ColorRGBA();
ColorRGBA1021->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1019->addChild(ColorRGBA1021);

Shape1018->setGeometry(LineSet1019);

HAnimSegment998->addChild(Shape1018);

Shape* Shape1022 = new Shape();
LineSet* LineSet1023 = new LineSet();
LineSet1023->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1024 = new Coordinate();
Coordinate1024->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175}, 6);
LineSet1023->addChild(Coordinate1024);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA* ColorRGBA1025 = new ColorRGBA();
ColorRGBA1025->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1023->addChild(ColorRGBA1025);

Shape1022->setGeometry(LineSet1023);

HAnimSegment998->addChild(Shape1022);

Shape* Shape1026 = new Shape();
LineSet* LineSet1027 = new LineSet();
LineSet1027->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1028 = new Coordinate();
Coordinate1028->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0085,1.7229,1.148}, 6);
LineSet1027->addChild(Coordinate1028);

//from skullbase to temporomandibular vertices 2
ColorRGBA* ColorRGBA1029 = new ColorRGBA();
ColorRGBA1029->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1027->addChild(ColorRGBA1029);

Shape1026->setGeometry(LineSet1027);

HAnimSegment998->addChild(Shape1026);

HAnimSite* HAnimSite1030 = new HAnimSite();
HAnimSite1030->setName(CString("l_gonion_pt"));
HAnimSite1030->setDEF(CString("hanim_l_gonion_pt"));
HAnimSite1030->setTranslation(new float[3]{0.0631,1.553,0.033});
TouchSensor* TouchSensor1031 = new TouchSensor();
TouchSensor1031->setDescription(CString("HAnimSite l_gonion_pt"));
HAnimSite1030->addChild(TouchSensor1031);

Shape* Shape1032 = new Shape();
Shape1032->setUSE(CString("HAnimSiteShape"));
HAnimSite1030->addChild(Shape1032);

HAnimSegment998->addChild(HAnimSite1030);

HAnimSite* HAnimSite1033 = new HAnimSite();
HAnimSite1033->setName(CString("menton_pt"));
HAnimSite1033->setDEF(CString("hanim_menton_pt"));
TouchSensor* TouchSensor1034 = new TouchSensor();
TouchSensor1034->setDescription(CString("HAnimSite menton_pt"));
HAnimSite1033->addChild(TouchSensor1034);

Shape* Shape1035 = new Shape();
Shape1035->setUSE(CString("HAnimSiteShape"));
HAnimSite1033->addChild(Shape1035);

HAnimSegment998->addChild(HAnimSite1033);

HAnimSite* HAnimSite1036 = new HAnimSite();
HAnimSite1036->setName(CString("r_gonion_pt"));
HAnimSite1036->setDEF(CString("hanim_r_gonion_pt"));
HAnimSite1036->setTranslation(new float[3]{-0.052,1.5529,0.0347});
TouchSensor* TouchSensor1037 = new TouchSensor();
TouchSensor1037->setDescription(CString("HAnimSite r_gonion_pt"));
HAnimSite1036->addChild(TouchSensor1037);

Shape* Shape1038 = new Shape();
Shape1038->setUSE(CString("HAnimSiteShape"));
HAnimSite1036->addChild(Shape1038);

HAnimSegment998->addChild(HAnimSite1036);

HAnimSite* HAnimSite1039 = new HAnimSite();
HAnimSite1039->setName(CString("supramenton_pt"));
HAnimSite1039->setDEF(CString("hanim_supramenton_pt"));
HAnimSite1039->setTranslation(new float[3]{0.0061,1.541,0.0805});
TouchSensor* TouchSensor1040 = new TouchSensor();
TouchSensor1040->setDescription(CString("HAnimSite supramenton_pt"));
HAnimSite1039->addChild(TouchSensor1040);

Shape* Shape1041 = new Shape();
Shape1041->setUSE(CString("HAnimSiteShape"));
HAnimSite1039->addChild(Shape1041);

HAnimSegment998->addChild(HAnimSite1039);

HAnimJoint997->addChild(HAnimSegment998);

HAnimJoint* HAnimJoint1042 = new HAnimJoint();
HAnimJoint1042->setName(CString("l_eyelid_joint"));
HAnimJoint1042->setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint1042->setCenter(new float[3]{2.2365,1.87,1.9285});
HAnimJoint997->addChild(HAnimJoint1042);

HAnimJoint* HAnimJoint1043 = new HAnimJoint();
HAnimJoint1043->setName(CString("r_eyelid_joint"));
HAnimJoint1043->setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint1043->setCenter(new float[3]{-2.2535,1.87,1.9285});
HAnimJoint997->addChild(HAnimJoint1043);

HAnimJoint* HAnimJoint1044 = new HAnimJoint();
HAnimJoint1044->setName(CString("l_eyeball_joint"));
HAnimJoint1044->setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint1044->setCenter(new float[3]{2.1305,1.8444,4.1555});
HAnimJoint997->addChild(HAnimJoint1044);

HAnimJoint* HAnimJoint1045 = new HAnimJoint();
HAnimJoint1045->setName(CString("r_eyeball_joint"));
HAnimJoint1045->setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint1045->setCenter(new float[3]{-2.1475,1.8444,4.1555});
HAnimJoint997->addChild(HAnimJoint1045);

HAnimJoint* HAnimJoint1046 = new HAnimJoint();
HAnimJoint1046->setName(CString("l_eyebrow_joint"));
HAnimJoint1046->setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint1046->setCenter(new float[3]{0.9581,1.8563,5.2175});
HAnimJoint997->addChild(HAnimJoint1046);

HAnimJoint* HAnimJoint1047 = new HAnimJoint();
HAnimJoint1047->setName(CString("r_eyebrow_joint"));
HAnimJoint1047->setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint1047->setCenter(new float[3]{-0.9751,1.8563,5.2175});
HAnimJoint997->addChild(HAnimJoint1047);

HAnimJoint* HAnimJoint1048 = new HAnimJoint();
HAnimJoint1048->setName(CString("temporomandibular"));
HAnimJoint1048->setDEF(CString("hanim_temporomandibular"));
HAnimJoint1048->setCenter(new float[3]{-0.0085,1.7229,1.148});
HAnimJoint997->addChild(HAnimJoint1048);

HAnimJoint955->addChild(HAnimJoint997);

HAnimJoint946->addChild(HAnimJoint955);

HAnimJoint934->addChild(HAnimJoint946);

HAnimJoint925->addChild(HAnimJoint934);

HAnimJoint916->addChild(HAnimJoint925);

HAnimJoint907->addChild(HAnimJoint916);

HAnimJoint898->addChild(HAnimJoint907);

HAnimJoint845->addChild(HAnimJoint898);

HAnimJoint* HAnimJoint1049 = new HAnimJoint();
HAnimJoint1049->setName(CString("l_sternoclavicular"));
HAnimJoint1049->setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint1049->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimSegment* HAnimSegment1050 = new HAnimSegment();
HAnimSegment1050->setName(CString("l_clavicle"));
HAnimSegment1050->setDEF(CString("hanim_l_clavicle"));
Transform* Transform1051 = new Transform();
Transform1051->setTranslation(new float[3]{0.082,1.4488,-0.0353});
Transform* Transform1052 = new Transform();
//Empty Transform
Shape* Shape1053 = new Shape();
Shape1053->setUSE(CString("HAnimJointShape"));
Transform1052->addChild(Shape1053);

Transform1051->addChild(Transform1052);

HAnimSegment1050->addChild(Transform1051);

Shape* Shape1054 = new Shape();
LineSet* LineSet1055 = new LineSet();
LineSet1055->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1056 = new Coordinate();
Coordinate1056->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet1055->addChild(Coordinate1056);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA* ColorRGBA1057 = new ColorRGBA();
ColorRGBA1057->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1055->addChild(ColorRGBA1057);

Shape1054->setGeometry(LineSet1055);

HAnimSegment1050->addChild(Shape1054);

HAnimJoint1049->addChild(HAnimSegment1050);

HAnimJoint* HAnimJoint1058 = new HAnimJoint();
HAnimJoint1058->setName(CString("l_acromioclavicular"));
HAnimJoint1058->setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint1058->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimSegment* HAnimSegment1059 = new HAnimSegment();
HAnimSegment1059->setName(CString("l_scapula"));
HAnimSegment1059->setDEF(CString("hanim_l_scapula"));
Transform* Transform1060 = new Transform();
Transform1060->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
Transform* Transform1061 = new Transform();
//Empty Transform
Shape* Shape1062 = new Shape();
Shape1062->setUSE(CString("HAnimJointShape"));
Transform1061->addChild(Shape1062);

Transform1060->addChild(Transform1061);

HAnimSegment1059->addChild(Transform1060);

Shape* Shape1063 = new Shape();
LineSet* LineSet1064 = new LineSet();
LineSet1064->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1065 = new Coordinate();
Coordinate1065->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet1064->addChild(Coordinate1065);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA* ColorRGBA1066 = new ColorRGBA();
ColorRGBA1066->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1064->addChild(ColorRGBA1066);

Shape1063->setGeometry(LineSet1064);

HAnimSegment1059->addChild(Shape1063);

HAnimSite* HAnimSite1067 = new HAnimSite();
HAnimSite1067->setName(CString("l_bideltoid_pt"));
HAnimSite1067->setDEF(CString("hanim_l_bideltoid_pt"));
TouchSensor* TouchSensor1068 = new TouchSensor();
TouchSensor1068->setDescription(CString("HAnimSite l_bideltoid_pt"));
HAnimSite1067->addChild(TouchSensor1068);

Shape* Shape1069 = new Shape();
Shape1069->setUSE(CString("HAnimSiteShape"));
HAnimSite1067->addChild(Shape1069);

HAnimSegment1059->addChild(HAnimSite1067);

HAnimSite* HAnimSite1070 = new HAnimSite();
HAnimSite1070->setName(CString("l_humeral_lateral_epicondyles_pt"));
HAnimSite1070->setDEF(CString("hanim_l_humeral_lateral_epicondyles_pt"));
HAnimSite1070->setTranslation(new float[3]{0.228,1.1482,-0.11});
TouchSensor* TouchSensor1071 = new TouchSensor();
TouchSensor1071->setDescription(CString("HAnimSite l_humeral_lateral_epicondyles_pt"));
HAnimSite1070->addChild(TouchSensor1071);

Shape* Shape1072 = new Shape();
Shape1072->setUSE(CString("HAnimSiteShape"));
HAnimSite1070->addChild(Shape1072);

HAnimSegment1059->addChild(HAnimSite1070);

HAnimJoint1058->addChild(HAnimSegment1059);

HAnimJoint* HAnimJoint1073 = new HAnimJoint();
HAnimJoint1073->setName(CString("l_shoulder"));
HAnimJoint1073->setDEF(CString("hanim_l_shoulder"));
HAnimJoint1073->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimSegment* HAnimSegment1074 = new HAnimSegment();
HAnimSegment1074->setName(CString("l_upperarm"));
HAnimSegment1074->setDEF(CString("hanim_l_upperarm"));
Transform* Transform1075 = new Transform();
Transform1075->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
Transform* Transform1076 = new Transform();
//Empty Transform
Shape* Shape1077 = new Shape();
Shape1077->setUSE(CString("HAnimJointShape"));
Transform1076->addChild(Shape1077);

Transform1075->addChild(Transform1076);

HAnimSegment1074->addChild(Transform1075);

Shape* Shape1078 = new Shape();
LineSet* LineSet1079 = new LineSet();
LineSet1079->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1080 = new Coordinate();
Coordinate1080->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet1079->addChild(Coordinate1080);

//from l_shoulder to l_elbow vertices 2
ColorRGBA* ColorRGBA1081 = new ColorRGBA();
ColorRGBA1081->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1079->addChild(ColorRGBA1081);

Shape1078->setGeometry(LineSet1079);

HAnimSegment1074->addChild(Shape1078);

HAnimSite* HAnimSite1082 = new HAnimSite();
HAnimSite1082->setName(CString("l_humeral_medial_epicondyles_pt"));
HAnimSite1082->setDEF(CString("hanim_l_humeral_medial_epicondyles_pt"));
HAnimSite1082->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
TouchSensor* TouchSensor1083 = new TouchSensor();
TouchSensor1083->setDescription(CString("HAnimSite l_humeral_medial_epicondyles_pt"));
HAnimSite1082->addChild(TouchSensor1083);

Shape* Shape1084 = new Shape();
Shape1084->setUSE(CString("HAnimSiteShape"));
HAnimSite1082->addChild(Shape1084);

HAnimSegment1074->addChild(HAnimSite1082);

HAnimSite* HAnimSite1085 = new HAnimSite();
HAnimSite1085->setName(CString("l_olecranon_pt"));
HAnimSite1085->setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite1085->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
TouchSensor* TouchSensor1086 = new TouchSensor();
TouchSensor1086->setDescription(CString("HAnimSite l_olecranon_pt"));
HAnimSite1085->addChild(TouchSensor1086);

Shape* Shape1087 = new Shape();
Shape1087->setUSE(CString("HAnimSiteShape"));
HAnimSite1085->addChild(Shape1087);

HAnimSegment1074->addChild(HAnimSite1085);

HAnimSite* HAnimSite1088 = new HAnimSite();
HAnimSite1088->setName(CString("l_radial_styloid_pt"));
HAnimSite1088->setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite1088->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
TouchSensor* TouchSensor1089 = new TouchSensor();
TouchSensor1089->setDescription(CString("HAnimSite l_radial_styloid_pt"));
HAnimSite1088->addChild(TouchSensor1089);

Shape* Shape1090 = new Shape();
Shape1090->setUSE(CString("HAnimSiteShape"));
HAnimSite1088->addChild(Shape1090);

HAnimSegment1074->addChild(HAnimSite1088);

HAnimSite* HAnimSite1091 = new HAnimSite();
HAnimSite1091->setName(CString("l_radiale_pt"));
HAnimSite1091->setDEF(CString("hanim_l_radiale_pt"));
HAnimSite1091->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
TouchSensor* TouchSensor1092 = new TouchSensor();
TouchSensor1092->setDescription(CString("HAnimSite l_radiale_pt"));
HAnimSite1091->addChild(TouchSensor1092);

Shape* Shape1093 = new Shape();
Shape1093->setUSE(CString("HAnimSiteShape"));
HAnimSite1091->addChild(Shape1093);

HAnimSegment1074->addChild(HAnimSite1091);

HAnimJoint1073->addChild(HAnimSegment1074);

HAnimJoint* HAnimJoint1094 = new HAnimJoint();
HAnimJoint1094->setName(CString("l_elbow"));
HAnimJoint1094->setDEF(CString("hanim_l_elbow"));
HAnimJoint1094->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimSegment* HAnimSegment1095 = new HAnimSegment();
HAnimSegment1095->setName(CString("l_forearm"));
HAnimSegment1095->setDEF(CString("hanim_l_forearm"));
Transform* Transform1096 = new Transform();
Transform1096->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
Transform* Transform1097 = new Transform();
//Empty Transform
Shape* Shape1098 = new Shape();
Shape1098->setUSE(CString("HAnimJointShape"));
Transform1097->addChild(Shape1098);

Transform1096->addChild(Transform1097);

HAnimSegment1095->addChild(Transform1096);

Shape* Shape1099 = new Shape();
LineSet* LineSet1100 = new LineSet();
LineSet1100->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1101 = new Coordinate();
Coordinate1101->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet1100->addChild(Coordinate1101);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA* ColorRGBA1102 = new ColorRGBA();
ColorRGBA1102->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1100->addChild(ColorRGBA1102);

Shape1099->setGeometry(LineSet1100);

HAnimSegment1095->addChild(Shape1099);

HAnimSite* HAnimSite1103 = new HAnimSite();
HAnimSite1103->setName(CString("l_ulnar_styloid_pt"));
HAnimSite1103->setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1103->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
TouchSensor* TouchSensor1104 = new TouchSensor();
TouchSensor1104->setDescription(CString("HAnimSite l_ulnar_styloid_pt"));
HAnimSite1103->addChild(TouchSensor1104);

Shape* Shape1105 = new Shape();
Shape1105->setUSE(CString("HAnimSiteShape"));
HAnimSite1103->addChild(Shape1105);

HAnimSegment1095->addChild(HAnimSite1103);

HAnimJoint1094->addChild(HAnimSegment1095);

HAnimJoint* HAnimJoint1106 = new HAnimJoint();
HAnimJoint1106->setName(CString("l_radiocarpal"));
HAnimJoint1106->setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1106->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimSegment* HAnimSegment1107 = new HAnimSegment();
HAnimSegment1107->setName(CString("l_carpal"));
HAnimSegment1107->setDEF(CString("hanim_l_carpal"));
Transform* Transform1108 = new Transform();
Transform1108->setScale(new float[3]{0.2,0.2,0.2});
Transform1108->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1108->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
Transform* Transform1109 = new Transform();
Transform1109->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
Shape* Shape1110 = new Shape();
Shape1110->setUSE(CString("HAnimJointShape"));
Transform1109->addChild(Shape1110);

Transform1108->addChild(Transform1109);

HAnimSegment1107->addChild(Transform1108);

Shape* Shape1111 = new Shape();
LineSet* LineSet1112 = new LineSet();
LineSet1112->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1113 = new Coordinate();
Coordinate1113->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235}, 6);
LineSet1112->addChild(Coordinate1113);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA* ColorRGBA1114 = new ColorRGBA();
ColorRGBA1114->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1112->addChild(ColorRGBA1114);

Shape1111->setGeometry(LineSet1112);

HAnimSegment1107->addChild(Shape1111);

Shape* Shape1115 = new Shape();
LineSet* LineSet1116 = new LineSet();
LineSet1116->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1117 = new Coordinate();
Coordinate1117->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386}, 6);
LineSet1116->addChild(Coordinate1117);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA* ColorRGBA1118 = new ColorRGBA();
ColorRGBA1118->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1116->addChild(ColorRGBA1118);

Shape1115->setGeometry(LineSet1116);

HAnimSegment1107->addChild(Shape1115);

Shape* Shape1119 = new Shape();
LineSet* LineSet1120 = new LineSet();
LineSet1120->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1121 = new Coordinate();
Coordinate1121->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513}, 6);
LineSet1120->addChild(Coordinate1121);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA* ColorRGBA1122 = new ColorRGBA();
ColorRGBA1122->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1120->addChild(ColorRGBA1122);

Shape1119->setGeometry(LineSet1120);

HAnimSegment1107->addChild(Shape1119);

Shape* Shape1123 = new Shape();
LineSet* LineSet1124 = new LineSet();
LineSet1124->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1125 = new Coordinate();
Coordinate1125->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795}, 6);
LineSet1124->addChild(Coordinate1125);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA* ColorRGBA1126 = new ColorRGBA();
ColorRGBA1126->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1124->addChild(ColorRGBA1126);

Shape1123->setGeometry(LineSet1124);

HAnimSegment1107->addChild(Shape1123);

HAnimJoint1106->addChild(HAnimSegment1107);

HAnimJoint* HAnimJoint1127 = new HAnimJoint();
HAnimJoint1127->setName(CString("l_midcarpal_1"));
HAnimJoint1127->setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint1127->setCenter(new float[3]{8.0485,0.9213,1.3235});
HAnimSegment* HAnimSegment1128 = new HAnimSegment();
HAnimSegment1128->setName(CString("l_trapezium"));
HAnimSegment1128->setDEF(CString("hanim_l_trapezium"));
Transform* Transform1129 = new Transform();
Transform1129->setTranslation(new float[3]{8.0485,0.9213,1.3235});
Transform* Transform1130 = new Transform();
//Empty Transform
Shape* Shape1131 = new Shape();
Shape1131->setUSE(CString("HAnimJointShape"));
Transform1130->addChild(Shape1131);

Transform1129->addChild(Transform1130);

HAnimSegment1128->addChild(Transform1129);

Shape* Shape1132 = new Shape();
LineSet* LineSet1133 = new LineSet();
LineSet1133->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1134 = new Coordinate();
Coordinate1134->setPoint(new float[6]{8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534}, 6);
LineSet1133->addChild(Coordinate1134);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA1135 = new ColorRGBA();
ColorRGBA1135->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1133->addChild(ColorRGBA1135);

Shape1132->setGeometry(LineSet1133);

HAnimSegment1128->addChild(Shape1132);

HAnimJoint1127->addChild(HAnimSegment1128);

HAnimJoint* HAnimJoint1136 = new HAnimJoint();
HAnimJoint1136->setName(CString("l_carpometacarpal_1"));
HAnimJoint1136->setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1136->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimSegment* HAnimSegment1137 = new HAnimSegment();
HAnimSegment1137->setName(CString("l_metacarpal_1"));
HAnimSegment1137->setDEF(CString("hanim_l_metacarpal_1"));
Transform* Transform1138 = new Transform();
Transform1138->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
Transform* Transform1139 = new Transform();
//Empty Transform
Shape* Shape1140 = new Shape();
Shape1140->setUSE(CString("HAnimJointShape"));
Transform1139->addChild(Shape1140);

Transform1138->addChild(Transform1139);

HAnimSegment1137->addChild(Transform1138);

Shape* Shape1141 = new Shape();
LineSet* LineSet1142 = new LineSet();
LineSet1142->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1143 = new Coordinate();
Coordinate1143->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1142->addChild(Coordinate1143);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA1144 = new ColorRGBA();
ColorRGBA1144->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1142->addChild(ColorRGBA1144);

Shape1141->setGeometry(LineSet1142);

HAnimSegment1137->addChild(Shape1141);

HAnimJoint1136->addChild(HAnimSegment1137);

HAnimJoint* HAnimJoint1145 = new HAnimJoint();
HAnimJoint1145->setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1145->setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1145->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimSegment* HAnimSegment1146 = new HAnimSegment();
HAnimSegment1146->setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1146->setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform* Transform1147 = new Transform();
Transform1147->setTranslation(new float[3]{0.1951,0.8226,0.0246});
Transform* Transform1148 = new Transform();
//Empty Transform
Shape* Shape1149 = new Shape();
Shape1149->setUSE(CString("HAnimJointShape"));
Transform1148->addChild(Shape1149);

Transform1147->addChild(Transform1148);

HAnimSegment1146->addChild(Transform1147);

Shape* Shape1150 = new Shape();
LineSet* LineSet1151 = new LineSet();
LineSet1151->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1152 = new Coordinate();
Coordinate1152->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1151->addChild(Coordinate1152);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA1153 = new ColorRGBA();
ColorRGBA1153->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1151->addChild(ColorRGBA1153);

Shape1150->setGeometry(LineSet1151);

HAnimSegment1146->addChild(Shape1150);

HAnimSite* HAnimSite1154 = new HAnimSite();
HAnimSite1154->setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite1154->setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor1155 = new TouchSensor();
TouchSensor1155->setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite1154->addChild(TouchSensor1155);

Shape* Shape1156 = new Shape();
Shape1156->setUSE(CString("HAnimSiteShape"));
HAnimSite1154->addChild(Shape1156);

HAnimSegment1146->addChild(HAnimSite1154);

HAnimJoint1145->addChild(HAnimSegment1146);

HAnimJoint* HAnimJoint1157 = new HAnimJoint();
HAnimJoint1157->setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1157->setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1157->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1145->addChild(HAnimJoint1157);

HAnimJoint1136->addChild(HAnimJoint1145);

HAnimJoint1127->addChild(HAnimJoint1136);

HAnimJoint1106->addChild(HAnimJoint1127);

HAnimJoint* HAnimJoint1158 = new HAnimJoint();
HAnimJoint1158->setName(CString("l_midcarpal_2"));
HAnimJoint1158->setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint1158->setCenter(new float[3]{8.0485,0.9225,0.8386});
HAnimSegment* HAnimSegment1159 = new HAnimSegment();
HAnimSegment1159->setName(CString("l_trapezoid"));
HAnimSegment1159->setDEF(CString("hanim_l_trapezoid"));
Transform* Transform1160 = new Transform();
Transform1160->setTranslation(new float[3]{8.0485,0.9225,0.8386});
Transform* Transform1161 = new Transform();
//Empty Transform
Shape* Shape1162 = new Shape();
Shape1162->setUSE(CString("HAnimJointShape"));
Transform1161->addChild(Shape1162);

Transform1160->addChild(Transform1161);

HAnimSegment1159->addChild(Transform1160);

Shape* Shape1163 = new Shape();
LineSet* LineSet1164 = new LineSet();
LineSet1164->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1165 = new Coordinate();
Coordinate1165->setPoint(new float[6]{8.0485,0.9225,0.8386,0.1983,0.8024,-0.028}, 6);
LineSet1164->addChild(Coordinate1165);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA1166 = new ColorRGBA();
ColorRGBA1166->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1164->addChild(ColorRGBA1166);

Shape1163->setGeometry(LineSet1164);

HAnimSegment1159->addChild(Shape1163);

HAnimSite* HAnimSite1167 = new HAnimSite();
HAnimSite1167->setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite1167->setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite1167->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
TouchSensor* TouchSensor1168 = new TouchSensor();
TouchSensor1168->setDescription(CString("HAnimSite l_metacarpal_phalanx_2_pt"));
HAnimSite1167->addChild(TouchSensor1168);

Shape* Shape1169 = new Shape();
Shape1169->setUSE(CString("HAnimSiteShape"));
HAnimSite1167->addChild(Shape1169);

HAnimSegment1159->addChild(HAnimSite1167);

HAnimJoint1158->addChild(HAnimSegment1159);

HAnimJoint* HAnimJoint1170 = new HAnimJoint();
HAnimJoint1170->setName(CString("l_carpometacarpal_2"));
HAnimJoint1170->setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1170->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimSegment* HAnimSegment1171 = new HAnimSegment();
HAnimSegment1171->setName(CString("l_metacarpal_2"));
HAnimSegment1171->setDEF(CString("hanim_l_metacarpal_2"));
Transform* Transform1172 = new Transform();
Transform1172->setTranslation(new float[3]{0.1983,0.8024,-0.028});
Transform* Transform1173 = new Transform();
//Empty Transform
Shape* Shape1174 = new Shape();
Shape1174->setUSE(CString("HAnimJointShape"));
Transform1173->addChild(Shape1174);

Transform1172->addChild(Transform1173);

HAnimSegment1171->addChild(Transform1172);

Shape* Shape1175 = new Shape();
LineSet* LineSet1176 = new LineSet();
LineSet1176->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1177 = new Coordinate();
Coordinate1177->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1176->addChild(Coordinate1177);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA1178 = new ColorRGBA();
ColorRGBA1178->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1176->addChild(ColorRGBA1178);

Shape1175->setGeometry(LineSet1176);

HAnimSegment1171->addChild(Shape1175);

HAnimJoint1170->addChild(HAnimSegment1171);

HAnimJoint* HAnimJoint1179 = new HAnimJoint();
HAnimJoint1179->setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1179->setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1179->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimSegment* HAnimSegment1180 = new HAnimSegment();
HAnimSegment1180->setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1180->setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform* Transform1181 = new Transform();
Transform1181->setTranslation(new float[3]{0.1983,0.7815,-0.028});
Transform* Transform1182 = new Transform();
//Empty Transform
Shape* Shape1183 = new Shape();
Shape1183->setUSE(CString("HAnimJointShape"));
Transform1182->addChild(Shape1183);

Transform1181->addChild(Transform1182);

HAnimSegment1180->addChild(Transform1181);

Shape* Shape1184 = new Shape();
LineSet* LineSet1185 = new LineSet();
LineSet1185->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1186 = new Coordinate();
Coordinate1186->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1185->addChild(Coordinate1186);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1187 = new ColorRGBA();
ColorRGBA1187->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1185->addChild(ColorRGBA1187);

Shape1184->setGeometry(LineSet1185);

HAnimSegment1180->addChild(Shape1184);

HAnimJoint1179->addChild(HAnimSegment1180);

HAnimJoint* HAnimJoint1188 = new HAnimJoint();
HAnimJoint1188->setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1188->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1188->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimSegment* HAnimSegment1189 = new HAnimSegment();
HAnimSegment1189->setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1189->setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform* Transform1190 = new Transform();
Transform1190->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
Transform* Transform1191 = new Transform();
//Empty Transform
Shape* Shape1192 = new Shape();
Shape1192->setUSE(CString("HAnimJointShape"));
Transform1191->addChild(Shape1192);

Transform1190->addChild(Transform1191);

HAnimSegment1189->addChild(Transform1190);

Shape* Shape1193 = new Shape();
LineSet* LineSet1194 = new LineSet();
LineSet1194->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1195 = new Coordinate();
Coordinate1195->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1194->addChild(Coordinate1195);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1196 = new ColorRGBA();
ColorRGBA1196->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1194->addChild(ColorRGBA1196);

Shape1193->setGeometry(LineSet1194);

HAnimSegment1189->addChild(Shape1193);

HAnimSite* HAnimSite1197 = new HAnimSite();
HAnimSite1197->setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite1197->setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
TouchSensor* TouchSensor1198 = new TouchSensor();
TouchSensor1198->setDescription(CString("HAnimSite l_carpal_distal_phalanx_2_tip"));
HAnimSite1197->addChild(TouchSensor1198);

Shape* Shape1199 = new Shape();
Shape1199->setUSE(CString("HAnimSiteShape"));
HAnimSite1197->addChild(Shape1199);

HAnimSegment1189->addChild(HAnimSite1197);

HAnimSite* HAnimSite1200 = new HAnimSite();
HAnimSite1200->setName(CString("l_dactylion_pt"));
HAnimSite1200->setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1200->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
TouchSensor* TouchSensor1201 = new TouchSensor();
TouchSensor1201->setDescription(CString("HAnimSite l_dactylion_pt"));
HAnimSite1200->addChild(TouchSensor1201);

Shape* Shape1202 = new Shape();
Shape1202->setUSE(CString("HAnimSiteShape"));
HAnimSite1200->addChild(Shape1202);

HAnimSegment1189->addChild(HAnimSite1200);

HAnimJoint1188->addChild(HAnimSegment1189);

HAnimJoint* HAnimJoint1203 = new HAnimJoint();
HAnimJoint1203->setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1203->setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1203->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1188->addChild(HAnimJoint1203);

HAnimJoint1179->addChild(HAnimJoint1188);

HAnimJoint1170->addChild(HAnimJoint1179);

HAnimJoint1158->addChild(HAnimJoint1170);

HAnimJoint1106->addChild(HAnimJoint1158);

HAnimJoint* HAnimJoint1204 = new HAnimJoint();
HAnimJoint1204->setName(CString("l_midcarpal_3"));
HAnimJoint1204->setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint1204->setCenter(new float[3]{8.0395,0.9246,0.2513});
HAnimSegment* HAnimSegment1205 = new HAnimSegment();
HAnimSegment1205->setName(CString("l_capitate"));
HAnimSegment1205->setDEF(CString("hanim_l_capitate"));
Transform* Transform1206 = new Transform();
Transform1206->setTranslation(new float[3]{8.0395,0.9246,0.2513});
Transform* Transform1207 = new Transform();
//Empty Transform
Shape* Shape1208 = new Shape();
Shape1208->setUSE(CString("HAnimJointShape"));
Transform1207->addChild(Shape1208);

Transform1206->addChild(Transform1207);

HAnimSegment1205->addChild(Transform1206);

Shape* Shape1209 = new Shape();
LineSet* LineSet1210 = new LineSet();
LineSet1210->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1211 = new Coordinate();
Coordinate1211->setPoint(new float[6]{8.0395,0.9246,0.2513,0.1987,0.8029,-0.053}, 6);
LineSet1210->addChild(Coordinate1211);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA1212 = new ColorRGBA();
ColorRGBA1212->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1210->addChild(ColorRGBA1212);

Shape1209->setGeometry(LineSet1210);

HAnimSegment1205->addChild(Shape1209);

HAnimSite* HAnimSite1213 = new HAnimSite();
HAnimSite1213->setName(CString("l_metacarpal_phalanx_3_pt"));
HAnimSite1213->setDEF(CString("hanim_l_metacarpal_phalanx_3_pt"));
TouchSensor* TouchSensor1214 = new TouchSensor();
TouchSensor1214->setDescription(CString("HAnimSite l_metacarpal_phalanx_3_pt"));
HAnimSite1213->addChild(TouchSensor1214);

Shape* Shape1215 = new Shape();
Shape1215->setUSE(CString("HAnimSiteShape"));
HAnimSite1213->addChild(Shape1215);

HAnimSegment1205->addChild(HAnimSite1213);

HAnimJoint1204->addChild(HAnimSegment1205);

HAnimJoint* HAnimJoint1216 = new HAnimJoint();
HAnimJoint1216->setName(CString("l_carpometacarpal_3"));
HAnimJoint1216->setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1216->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimSegment* HAnimSegment1217 = new HAnimSegment();
HAnimSegment1217->setName(CString("l_metacarpal_3"));
HAnimSegment1217->setDEF(CString("hanim_l_metacarpal_3"));
Transform* Transform1218 = new Transform();
Transform1218->setTranslation(new float[3]{0.1987,0.8029,-0.053});
Transform* Transform1219 = new Transform();
//Empty Transform
Shape* Shape1220 = new Shape();
Shape1220->setUSE(CString("HAnimJointShape"));
Transform1219->addChild(Shape1220);

Transform1218->addChild(Transform1219);

HAnimSegment1217->addChild(Transform1218);

Shape* Shape1221 = new Shape();
LineSet* LineSet1222 = new LineSet();
LineSet1222->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1223 = new Coordinate();
Coordinate1223->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1222->addChild(Coordinate1223);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA1224 = new ColorRGBA();
ColorRGBA1224->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1222->addChild(ColorRGBA1224);

Shape1221->setGeometry(LineSet1222);

HAnimSegment1217->addChild(Shape1221);

HAnimJoint1216->addChild(HAnimSegment1217);

HAnimJoint* HAnimJoint1225 = new HAnimJoint();
HAnimJoint1225->setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1225->setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1225->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimSegment* HAnimSegment1226 = new HAnimSegment();
HAnimSegment1226->setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1226->setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform* Transform1227 = new Transform();
Transform1227->setTranslation(new float[3]{0.1987,0.7818,-0.053});
Transform* Transform1228 = new Transform();
//Empty Transform
Shape* Shape1229 = new Shape();
Shape1229->setUSE(CString("HAnimJointShape"));
Transform1228->addChild(Shape1229);

Transform1227->addChild(Transform1228);

HAnimSegment1226->addChild(Transform1227);

Shape* Shape1230 = new Shape();
LineSet* LineSet1231 = new LineSet();
LineSet1231->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1232 = new Coordinate();
Coordinate1232->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1231->addChild(Coordinate1232);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1233 = new ColorRGBA();
ColorRGBA1233->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1231->addChild(ColorRGBA1233);

Shape1230->setGeometry(LineSet1231);

HAnimSegment1226->addChild(Shape1230);

HAnimJoint1225->addChild(HAnimSegment1226);

HAnimJoint* HAnimJoint1234 = new HAnimJoint();
HAnimJoint1234->setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1234->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1234->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimSegment* HAnimSegment1235 = new HAnimSegment();
HAnimSegment1235->setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1235->setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform* Transform1236 = new Transform();
Transform1236->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
Transform* Transform1237 = new Transform();
//Empty Transform
Shape* Shape1238 = new Shape();
Shape1238->setUSE(CString("HAnimJointShape"));
Transform1237->addChild(Shape1238);

Transform1236->addChild(Transform1237);

HAnimSegment1235->addChild(Transform1236);

Shape* Shape1239 = new Shape();
LineSet* LineSet1240 = new LineSet();
LineSet1240->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1241 = new Coordinate();
Coordinate1241->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1240->addChild(Coordinate1241);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1242 = new ColorRGBA();
ColorRGBA1242->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1240->addChild(ColorRGBA1242);

Shape1239->setGeometry(LineSet1240);

HAnimSegment1235->addChild(Shape1239);

HAnimSite* HAnimSite1243 = new HAnimSite();
HAnimSite1243->setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite1243->setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor1244 = new TouchSensor();
TouchSensor1244->setDescription(CString("HAnimSite l_carpal_distal_phalanx_3_tip"));
HAnimSite1243->addChild(TouchSensor1244);

Shape* Shape1245 = new Shape();
Shape1245->setUSE(CString("HAnimSiteShape"));
HAnimSite1243->addChild(Shape1245);

HAnimSegment1235->addChild(HAnimSite1243);

HAnimJoint1234->addChild(HAnimSegment1235);

HAnimJoint* HAnimJoint1246 = new HAnimJoint();
HAnimJoint1246->setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1246->setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1246->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1234->addChild(HAnimJoint1246);

HAnimJoint1225->addChild(HAnimJoint1234);

HAnimJoint1216->addChild(HAnimJoint1225);

HAnimJoint1204->addChild(HAnimJoint1216);

HAnimJoint1106->addChild(HAnimJoint1204);

HAnimJoint* HAnimJoint1247 = new HAnimJoint();
HAnimJoint1247->setName(CString("l_midcarpal_4_5"));
HAnimJoint1247->setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint1247->setCenter(new float[3]{8.0395,0.921,-0.6795});
HAnimSegment* HAnimSegment1248 = new HAnimSegment();
HAnimSegment1248->setName(CString("l_hamate"));
HAnimSegment1248->setDEF(CString("hanim_l_hamate"));
Transform* Transform1249 = new Transform();
Transform1249->setTranslation(new float[3]{8.0395,0.921,-0.6795});
Transform* Transform1250 = new Transform();
//Empty Transform
Shape* Shape1251 = new Shape();
Shape1251->setUSE(CString("HAnimJointShape"));
Transform1250->addChild(Shape1251);

Transform1249->addChild(Transform1250);

HAnimSegment1248->addChild(Transform1249);

Shape* Shape1252 = new Shape();
LineSet* LineSet1253 = new LineSet();
LineSet1253->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1254 = new Coordinate();
Coordinate1254->setPoint(new float[6]{8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794}, 6);
LineSet1253->addChild(Coordinate1254);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA1255 = new ColorRGBA();
ColorRGBA1255->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1253->addChild(ColorRGBA1255);

Shape1252->setGeometry(LineSet1253);

HAnimSegment1248->addChild(Shape1252);

Shape* Shape1256 = new Shape();
LineSet* LineSet1257 = new LineSet();
LineSet1257->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1258 = new Coordinate();
Coordinate1258->setPoint(new float[6]{8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036}, 6);
LineSet1257->addChild(Coordinate1258);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA1259 = new ColorRGBA();
ColorRGBA1259->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1257->addChild(ColorRGBA1259);

Shape1256->setGeometry(LineSet1257);

HAnimSegment1248->addChild(Shape1256);

HAnimSite* HAnimSite1260 = new HAnimSite();
HAnimSite1260->setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite1260->setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite1260->setTranslation(new float[3]{0.1929,0.786,-0.1122});
TouchSensor* TouchSensor1261 = new TouchSensor();
TouchSensor1261->setDescription(CString("HAnimSite l_metacarpal_phalanx_5_pt"));
HAnimSite1260->addChild(TouchSensor1261);

Shape* Shape1262 = new Shape();
Shape1262->setUSE(CString("HAnimSiteShape"));
HAnimSite1260->addChild(Shape1262);

HAnimSegment1248->addChild(HAnimSite1260);

HAnimJoint1247->addChild(HAnimSegment1248);

HAnimJoint* HAnimJoint1263 = new HAnimJoint();
HAnimJoint1263->setName(CString("l_carpometacarpal_4"));
HAnimJoint1263->setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1263->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimSegment* HAnimSegment1264 = new HAnimSegment();
HAnimSegment1264->setName(CString("l_metacarpal_4"));
HAnimSegment1264->setDEF(CString("hanim_l_metacarpal_4"));
Transform* Transform1265 = new Transform();
Transform1265->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
Transform* Transform1266 = new Transform();
//Empty Transform
Shape* Shape1267 = new Shape();
Shape1267->setUSE(CString("HAnimJointShape"));
Transform1266->addChild(Shape1267);

Transform1265->addChild(Transform1266);

HAnimSegment1264->addChild(Transform1265);

Shape* Shape1268 = new Shape();
LineSet* LineSet1269 = new LineSet();
LineSet1269->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1270 = new Coordinate();
Coordinate1270->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1269->addChild(Coordinate1270);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA1271 = new ColorRGBA();
ColorRGBA1271->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1269->addChild(ColorRGBA1271);

Shape1268->setGeometry(LineSet1269);

HAnimSegment1264->addChild(Shape1268);

HAnimJoint1263->addChild(HAnimSegment1264);

HAnimJoint* HAnimJoint1272 = new HAnimJoint();
HAnimJoint1272->setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1272->setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1272->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimSegment* HAnimSegment1273 = new HAnimSegment();
HAnimSegment1273->setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1273->setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform* Transform1274 = new Transform();
Transform1274->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
Transform* Transform1275 = new Transform();
//Empty Transform
Shape* Shape1276 = new Shape();
Shape1276->setUSE(CString("HAnimJointShape"));
Transform1275->addChild(Shape1276);

Transform1274->addChild(Transform1275);

HAnimSegment1273->addChild(Transform1274);

Shape* Shape1277 = new Shape();
LineSet* LineSet1278 = new LineSet();
LineSet1278->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1279 = new Coordinate();
Coordinate1279->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1278->addChild(Coordinate1279);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1280 = new ColorRGBA();
ColorRGBA1280->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1278->addChild(ColorRGBA1280);

Shape1277->setGeometry(LineSet1278);

HAnimSegment1273->addChild(Shape1277);

HAnimJoint1272->addChild(HAnimSegment1273);

HAnimJoint* HAnimJoint1281 = new HAnimJoint();
HAnimJoint1281->setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1281->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1281->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimSegment* HAnimSegment1282 = new HAnimSegment();
HAnimSegment1282->setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1282->setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform* Transform1283 = new Transform();
Transform1283->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
Transform* Transform1284 = new Transform();
//Empty Transform
Shape* Shape1285 = new Shape();
Shape1285->setUSE(CString("HAnimJointShape"));
Transform1284->addChild(Shape1285);

Transform1283->addChild(Transform1284);

HAnimSegment1282->addChild(Transform1283);

Shape* Shape1286 = new Shape();
LineSet* LineSet1287 = new LineSet();
LineSet1287->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1288 = new Coordinate();
Coordinate1288->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1287->addChild(Coordinate1288);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1289 = new ColorRGBA();
ColorRGBA1289->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1287->addChild(ColorRGBA1289);

Shape1286->setGeometry(LineSet1287);

HAnimSegment1282->addChild(Shape1286);

HAnimSite* HAnimSite1290 = new HAnimSite();
HAnimSite1290->setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite1290->setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor1291 = new TouchSensor();
TouchSensor1291->setDescription(CString("HAnimSite l_carpal_distal_phalanx_4_tip"));
HAnimSite1290->addChild(TouchSensor1291);

Shape* Shape1292 = new Shape();
Shape1292->setUSE(CString("HAnimSiteShape"));
HAnimSite1290->addChild(Shape1292);

HAnimSegment1282->addChild(HAnimSite1290);

HAnimJoint1281->addChild(HAnimSegment1282);

HAnimJoint* HAnimJoint1293 = new HAnimJoint();
HAnimJoint1293->setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1293->setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1293->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1281->addChild(HAnimJoint1293);

HAnimJoint1272->addChild(HAnimJoint1281);

HAnimJoint1263->addChild(HAnimJoint1272);

HAnimJoint1247->addChild(HAnimJoint1263);

HAnimJoint* HAnimJoint1294 = new HAnimJoint();
HAnimJoint1294->setName(CString("l_carpometacarpal_5"));
HAnimJoint1294->setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1294->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimSegment* HAnimSegment1295 = new HAnimSegment();
HAnimSegment1295->setName(CString("l_metacarpal_5"));
HAnimSegment1295->setDEF(CString("hanim_l_metacarpal_5"));
Transform* Transform1296 = new Transform();
Transform1296->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
Transform* Transform1297 = new Transform();
//Empty Transform
Shape* Shape1298 = new Shape();
Shape1298->setUSE(CString("HAnimJointShape"));
Transform1297->addChild(Shape1298);

Transform1296->addChild(Transform1297);

HAnimSegment1295->addChild(Transform1296);

Shape* Shape1299 = new Shape();
LineSet* LineSet1300 = new LineSet();
LineSet1300->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1301 = new Coordinate();
Coordinate1301->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1300->addChild(Coordinate1301);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA1302 = new ColorRGBA();
ColorRGBA1302->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1300->addChild(ColorRGBA1302);

Shape1299->setGeometry(LineSet1300);

HAnimSegment1295->addChild(Shape1299);

HAnimJoint1294->addChild(HAnimSegment1295);

HAnimJoint* HAnimJoint1303 = new HAnimJoint();
HAnimJoint1303->setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1303->setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1303->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimSegment* HAnimSegment1304 = new HAnimSegment();
HAnimSegment1304->setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1304->setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform* Transform1305 = new Transform();
Transform1305->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
Transform* Transform1306 = new Transform();
//Empty Transform
Shape* Shape1307 = new Shape();
Shape1307->setUSE(CString("HAnimJointShape"));
Transform1306->addChild(Shape1307);

Transform1305->addChild(Transform1306);

HAnimSegment1304->addChild(Transform1305);

Shape* Shape1308 = new Shape();
LineSet* LineSet1309 = new LineSet();
LineSet1309->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1310 = new Coordinate();
Coordinate1310->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1309->addChild(Coordinate1310);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1311 = new ColorRGBA();
ColorRGBA1311->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1309->addChild(ColorRGBA1311);

Shape1308->setGeometry(LineSet1309);

HAnimSegment1304->addChild(Shape1308);

HAnimJoint1303->addChild(HAnimSegment1304);

HAnimJoint* HAnimJoint1312 = new HAnimJoint();
HAnimJoint1312->setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1312->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1312->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimSegment* HAnimSegment1313 = new HAnimSegment();
HAnimSegment1313->setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1313->setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform* Transform1314 = new Transform();
Transform1314->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
Transform* Transform1315 = new Transform();
//Empty Transform
Shape* Shape1316 = new Shape();
Shape1316->setUSE(CString("HAnimJointShape"));
Transform1315->addChild(Shape1316);

Transform1314->addChild(Transform1315);

HAnimSegment1313->addChild(Transform1314);

Shape* Shape1317 = new Shape();
LineSet* LineSet1318 = new LineSet();
LineSet1318->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1319 = new Coordinate();
Coordinate1319->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1318->addChild(Coordinate1319);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1320 = new ColorRGBA();
ColorRGBA1320->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1318->addChild(ColorRGBA1320);

Shape1317->setGeometry(LineSet1318);

HAnimSegment1313->addChild(Shape1317);

HAnimSite* HAnimSite1321 = new HAnimSite();
HAnimSite1321->setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite1321->setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor1322 = new TouchSensor();
TouchSensor1322->setDescription(CString("HAnimSite l_carpal_distal_phalanx_5_tip"));
HAnimSite1321->addChild(TouchSensor1322);

Shape* Shape1323 = new Shape();
Shape1323->setUSE(CString("HAnimSiteShape"));
HAnimSite1321->addChild(Shape1323);

HAnimSegment1313->addChild(HAnimSite1321);

HAnimJoint1312->addChild(HAnimSegment1313);

HAnimJoint* HAnimJoint1324 = new HAnimJoint();
HAnimJoint1324->setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1324->setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1324->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1312->addChild(HAnimJoint1324);

HAnimJoint1303->addChild(HAnimJoint1312);

HAnimJoint1294->addChild(HAnimJoint1303);

HAnimJoint1247->addChild(HAnimJoint1294);

HAnimJoint1106->addChild(HAnimJoint1247);

HAnimJoint1094->addChild(HAnimJoint1106);

HAnimJoint1073->addChild(HAnimJoint1094);

HAnimJoint1058->addChild(HAnimJoint1073);

HAnimJoint1049->addChild(HAnimJoint1058);

HAnimJoint845->addChild(HAnimJoint1049);

HAnimJoint* HAnimJoint1325 = new HAnimJoint();
HAnimJoint1325->setName(CString("r_sternoclavicular"));
HAnimJoint1325->setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1325->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimSegment* HAnimSegment1326 = new HAnimSegment();
HAnimSegment1326->setName(CString("r_clavicle"));
HAnimSegment1326->setDEF(CString("hanim_r_clavicle"));
Transform* Transform1327 = new Transform();
Transform1327->setTranslation(new float[3]{-0.0694,1.46,-0.033});
Transform* Transform1328 = new Transform();
//Empty Transform
Shape* Shape1329 = new Shape();
Shape1329->setUSE(CString("HAnimJointShape"));
Transform1328->addChild(Shape1329);

Transform1327->addChild(Transform1328);

HAnimSegment1326->addChild(Transform1327);

Shape* Shape1330 = new Shape();
LineSet* LineSet1331 = new LineSet();
LineSet1331->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1332 = new Coordinate();
Coordinate1332->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1331->addChild(Coordinate1332);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA* ColorRGBA1333 = new ColorRGBA();
ColorRGBA1333->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1331->addChild(ColorRGBA1333);

Shape1330->setGeometry(LineSet1331);

HAnimSegment1326->addChild(Shape1330);

HAnimJoint1325->addChild(HAnimSegment1326);

HAnimJoint* HAnimJoint1334 = new HAnimJoint();
HAnimJoint1334->setName(CString("r_acromioclavicular"));
HAnimJoint1334->setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1334->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimSegment* HAnimSegment1335 = new HAnimSegment();
HAnimSegment1335->setName(CString("r_scapula"));
HAnimSegment1335->setDEF(CString("hanim_r_scapula"));
Transform* Transform1336 = new Transform();
Transform1336->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
Transform* Transform1337 = new Transform();
//Empty Transform
Shape* Shape1338 = new Shape();
Shape1338->setUSE(CString("HAnimJointShape"));
Transform1337->addChild(Shape1338);

Transform1336->addChild(Transform1337);

HAnimSegment1335->addChild(Transform1336);

Shape* Shape1339 = new Shape();
LineSet* LineSet1340 = new LineSet();
LineSet1340->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1341 = new Coordinate();
Coordinate1341->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1340->addChild(Coordinate1341);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA* ColorRGBA1342 = new ColorRGBA();
ColorRGBA1342->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1340->addChild(ColorRGBA1342);

Shape1339->setGeometry(LineSet1340);

HAnimSegment1335->addChild(Shape1339);

HAnimSite* HAnimSite1343 = new HAnimSite();
HAnimSite1343->setName(CString("r_bideltoid_pt"));
HAnimSite1343->setDEF(CString("hanim_r_bideltoid_pt"));
TouchSensor* TouchSensor1344 = new TouchSensor();
TouchSensor1344->setDescription(CString("HAnimSite r_bideltoid_pt"));
HAnimSite1343->addChild(TouchSensor1344);

Shape* Shape1345 = new Shape();
Shape1345->setUSE(CString("HAnimSiteShape"));
HAnimSite1343->addChild(Shape1345);

HAnimSegment1335->addChild(HAnimSite1343);

HAnimSite* HAnimSite1346 = new HAnimSite();
HAnimSite1346->setName(CString("r_humeral_lateral_epicondyles_pt"));
HAnimSite1346->setDEF(CString("hanim_r_humeral_lateral_epicondyles_pt"));
HAnimSite1346->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
TouchSensor* TouchSensor1347 = new TouchSensor();
TouchSensor1347->setDescription(CString("HAnimSite r_humeral_lateral_epicondyles_pt"));
HAnimSite1346->addChild(TouchSensor1347);

Shape* Shape1348 = new Shape();
Shape1348->setUSE(CString("HAnimSiteShape"));
HAnimSite1346->addChild(Shape1348);

HAnimSegment1335->addChild(HAnimSite1346);

HAnimJoint1334->addChild(HAnimSegment1335);

HAnimJoint* HAnimJoint1349 = new HAnimJoint();
HAnimJoint1349->setName(CString("r_shoulder"));
HAnimJoint1349->setDEF(CString("hanim_r_shoulder"));
HAnimJoint1349->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimSegment* HAnimSegment1350 = new HAnimSegment();
HAnimSegment1350->setName(CString("r_upperarm"));
HAnimSegment1350->setDEF(CString("hanim_r_upperarm"));
Transform* Transform1351 = new Transform();
Transform1351->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
Transform* Transform1352 = new Transform();
//Empty Transform
Shape* Shape1353 = new Shape();
Shape1353->setUSE(CString("HAnimJointShape"));
Transform1352->addChild(Shape1353);

Transform1351->addChild(Transform1352);

HAnimSegment1350->addChild(Transform1351);

Shape* Shape1354 = new Shape();
LineSet* LineSet1355 = new LineSet();
LineSet1355->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1356 = new Coordinate();
Coordinate1356->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1355->addChild(Coordinate1356);

//from r_shoulder to r_elbow vertices 2
ColorRGBA* ColorRGBA1357 = new ColorRGBA();
ColorRGBA1357->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1355->addChild(ColorRGBA1357);

Shape1354->setGeometry(LineSet1355);

HAnimSegment1350->addChild(Shape1354);

HAnimSite* HAnimSite1358 = new HAnimSite();
HAnimSite1358->setName(CString("r_humeral_medial_epicondyles_pt"));
HAnimSite1358->setDEF(CString("hanim_r_humeral_medial_epicondyles_pt"));
HAnimSite1358->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
TouchSensor* TouchSensor1359 = new TouchSensor();
TouchSensor1359->setDescription(CString("HAnimSite r_humeral_medial_epicondyles_pt"));
HAnimSite1358->addChild(TouchSensor1359);

Shape* Shape1360 = new Shape();
Shape1360->setUSE(CString("HAnimSiteShape"));
HAnimSite1358->addChild(Shape1360);

HAnimSegment1350->addChild(HAnimSite1358);

HAnimSite* HAnimSite1361 = new HAnimSite();
HAnimSite1361->setName(CString("r_olecranon_pt"));
HAnimSite1361->setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite1361->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
TouchSensor* TouchSensor1362 = new TouchSensor();
TouchSensor1362->setDescription(CString("HAnimSite r_olecranon_pt"));
HAnimSite1361->addChild(TouchSensor1362);

Shape* Shape1363 = new Shape();
Shape1363->setUSE(CString("HAnimSiteShape"));
HAnimSite1361->addChild(Shape1363);

HAnimSegment1350->addChild(HAnimSite1361);

HAnimSite* HAnimSite1364 = new HAnimSite();
HAnimSite1364->setName(CString("r_radial_styloid_pt"));
HAnimSite1364->setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite1364->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
TouchSensor* TouchSensor1365 = new TouchSensor();
TouchSensor1365->setDescription(CString("HAnimSite r_radial_styloid_pt"));
HAnimSite1364->addChild(TouchSensor1365);

Shape* Shape1366 = new Shape();
Shape1366->setUSE(CString("HAnimSiteShape"));
HAnimSite1364->addChild(Shape1366);

HAnimSegment1350->addChild(HAnimSite1364);

HAnimSite* HAnimSite1367 = new HAnimSite();
HAnimSite1367->setName(CString("r_radiale_pt"));
HAnimSite1367->setDEF(CString("hanim_r_radiale_pt"));
HAnimSite1367->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
TouchSensor* TouchSensor1368 = new TouchSensor();
TouchSensor1368->setDescription(CString("HAnimSite r_radiale_pt"));
HAnimSite1367->addChild(TouchSensor1368);

Shape* Shape1369 = new Shape();
Shape1369->setUSE(CString("HAnimSiteShape"));
HAnimSite1367->addChild(Shape1369);

HAnimSegment1350->addChild(HAnimSite1367);

HAnimJoint1349->addChild(HAnimSegment1350);

HAnimJoint* HAnimJoint1370 = new HAnimJoint();
HAnimJoint1370->setName(CString("r_elbow"));
HAnimJoint1370->setDEF(CString("hanim_r_elbow"));
HAnimJoint1370->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimSegment* HAnimSegment1371 = new HAnimSegment();
HAnimSegment1371->setName(CString("r_forearm"));
HAnimSegment1371->setDEF(CString("hanim_r_forearm"));
Transform* Transform1372 = new Transform();
Transform1372->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
Transform* Transform1373 = new Transform();
//Empty Transform
Shape* Shape1374 = new Shape();
Shape1374->setUSE(CString("HAnimJointShape"));
Transform1373->addChild(Shape1374);

Transform1372->addChild(Transform1373);

HAnimSegment1371->addChild(Transform1372);

Shape* Shape1375 = new Shape();
LineSet* LineSet1376 = new LineSet();
LineSet1376->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1377 = new Coordinate();
Coordinate1377->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1376->addChild(Coordinate1377);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA* ColorRGBA1378 = new ColorRGBA();
ColorRGBA1378->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1376->addChild(ColorRGBA1378);

Shape1375->setGeometry(LineSet1376);

HAnimSegment1371->addChild(Shape1375);

HAnimSite* HAnimSite1379 = new HAnimSite();
HAnimSite1379->setName(CString("r_ulnar_styloid_pt"));
HAnimSite1379->setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite1379->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
TouchSensor* TouchSensor1380 = new TouchSensor();
TouchSensor1380->setDescription(CString("HAnimSite r_ulnar_styloid_pt"));
HAnimSite1379->addChild(TouchSensor1380);

Shape* Shape1381 = new Shape();
Shape1381->setUSE(CString("HAnimSiteShape"));
HAnimSite1379->addChild(Shape1381);

HAnimSegment1371->addChild(HAnimSite1379);

HAnimJoint1370->addChild(HAnimSegment1371);

HAnimJoint* HAnimJoint1382 = new HAnimJoint();
HAnimJoint1382->setName(CString("r_radiocarpal"));
HAnimJoint1382->setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1382->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimSegment* HAnimSegment1383 = new HAnimSegment();
HAnimSegment1383->setName(CString("r_carpal"));
HAnimSegment1383->setDEF(CString("hanim_r_carpal"));
Transform* Transform1384 = new Transform();
Transform1384->setScale(new float[3]{0.2,0.2,0.2});
Transform1384->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1384->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
Transform* Transform1385 = new Transform();
Transform1385->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
Shape* Shape1386 = new Shape();
Shape1386->setUSE(CString("HAnimJointShape"));
Transform1385->addChild(Shape1386);

Transform1384->addChild(Transform1385);

HAnimSegment1383->addChild(Transform1384);

Shape* Shape1387 = new Shape();
LineSet* LineSet1388 = new LineSet();
LineSet1388->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1389 = new Coordinate();
Coordinate1389->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235}, 6);
LineSet1388->addChild(Coordinate1389);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA* ColorRGBA1390 = new ColorRGBA();
ColorRGBA1390->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1388->addChild(ColorRGBA1390);

Shape1387->setGeometry(LineSet1388);

HAnimSegment1383->addChild(Shape1387);

Shape* Shape1391 = new Shape();
LineSet* LineSet1392 = new LineSet();
LineSet1392->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1393 = new Coordinate();
Coordinate1393->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386}, 6);
LineSet1392->addChild(Coordinate1393);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA* ColorRGBA1394 = new ColorRGBA();
ColorRGBA1394->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1392->addChild(ColorRGBA1394);

Shape1391->setGeometry(LineSet1392);

HAnimSegment1383->addChild(Shape1391);

Shape* Shape1395 = new Shape();
LineSet* LineSet1396 = new LineSet();
LineSet1396->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1397 = new Coordinate();
Coordinate1397->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513}, 6);
LineSet1396->addChild(Coordinate1397);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA* ColorRGBA1398 = new ColorRGBA();
ColorRGBA1398->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1396->addChild(ColorRGBA1398);

Shape1395->setGeometry(LineSet1396);

HAnimSegment1383->addChild(Shape1395);

Shape* Shape1399 = new Shape();
LineSet* LineSet1400 = new LineSet();
LineSet1400->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1401 = new Coordinate();
Coordinate1401->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795}, 6);
LineSet1400->addChild(Coordinate1401);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA* ColorRGBA1402 = new ColorRGBA();
ColorRGBA1402->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1400->addChild(ColorRGBA1402);

Shape1399->setGeometry(LineSet1400);

HAnimSegment1383->addChild(Shape1399);

HAnimJoint1382->addChild(HAnimSegment1383);

HAnimJoint* HAnimJoint1403 = new HAnimJoint();
HAnimJoint1403->setName(CString("r_midcarpal_1"));
HAnimJoint1403->setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1403->setCenter(new float[3]{-8.0515,0.9213,1.3235});
HAnimSegment* HAnimSegment1404 = new HAnimSegment();
HAnimSegment1404->setName(CString("r_trapezium"));
HAnimSegment1404->setDEF(CString("hanim_r_trapezium"));
Transform* Transform1405 = new Transform();
Transform1405->setTranslation(new float[3]{-8.0515,0.9213,1.3235});
Transform* Transform1406 = new Transform();
//Empty Transform
Shape* Shape1407 = new Shape();
Shape1407->setUSE(CString("HAnimJointShape"));
Transform1406->addChild(Shape1407);

Transform1405->addChild(Transform1406);

HAnimSegment1404->addChild(Transform1405);

Shape* Shape1408 = new Shape();
LineSet* LineSet1409 = new LineSet();
LineSet1409->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1410 = new Coordinate();
Coordinate1410->setPoint(new float[6]{-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473}, 6);
LineSet1409->addChild(Coordinate1410);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA1411 = new ColorRGBA();
ColorRGBA1411->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1409->addChild(ColorRGBA1411);

Shape1408->setGeometry(LineSet1409);

HAnimSegment1404->addChild(Shape1408);

HAnimJoint1403->addChild(HAnimSegment1404);

HAnimJoint* HAnimJoint1412 = new HAnimJoint();
HAnimJoint1412->setName(CString("r_carpometacarpal_1"));
HAnimJoint1412->setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1412->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimSegment* HAnimSegment1413 = new HAnimSegment();
HAnimSegment1413->setName(CString("r_metacarpal_1"));
HAnimSegment1413->setDEF(CString("hanim_r_metacarpal_1"));
Transform* Transform1414 = new Transform();
Transform1414->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
Transform* Transform1415 = new Transform();
//Empty Transform
Shape* Shape1416 = new Shape();
Shape1416->setUSE(CString("HAnimJointShape"));
Transform1415->addChild(Shape1416);

Transform1414->addChild(Transform1415);

HAnimSegment1413->addChild(Transform1414);

Shape* Shape1417 = new Shape();
LineSet* LineSet1418 = new LineSet();
LineSet1418->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1419 = new Coordinate();
Coordinate1419->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1418->addChild(Coordinate1419);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA1420 = new ColorRGBA();
ColorRGBA1420->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1418->addChild(ColorRGBA1420);

Shape1417->setGeometry(LineSet1418);

HAnimSegment1413->addChild(Shape1417);

HAnimJoint1412->addChild(HAnimSegment1413);

HAnimJoint* HAnimJoint1421 = new HAnimJoint();
HAnimJoint1421->setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1421->setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1421->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimSegment* HAnimSegment1422 = new HAnimSegment();
HAnimSegment1422->setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1422->setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform* Transform1423 = new Transform();
Transform1423->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
Transform* Transform1424 = new Transform();
//Empty Transform
Shape* Shape1425 = new Shape();
Shape1425->setUSE(CString("HAnimJointShape"));
Transform1424->addChild(Shape1425);

Transform1423->addChild(Transform1424);

HAnimSegment1422->addChild(Transform1423);

Shape* Shape1426 = new Shape();
LineSet* LineSet1427 = new LineSet();
LineSet1427->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1428 = new Coordinate();
Coordinate1428->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1427->addChild(Coordinate1428);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA1429 = new ColorRGBA();
ColorRGBA1429->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1427->addChild(ColorRGBA1429);

Shape1426->setGeometry(LineSet1427);

HAnimSegment1422->addChild(Shape1426);

HAnimSite* HAnimSite1430 = new HAnimSite();
HAnimSite1430->setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1430->setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor1431 = new TouchSensor();
TouchSensor1431->setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite1430->addChild(TouchSensor1431);

Shape* Shape1432 = new Shape();
Shape1432->setUSE(CString("HAnimSiteShape"));
HAnimSite1430->addChild(Shape1432);

HAnimSegment1422->addChild(HAnimSite1430);

HAnimJoint1421->addChild(HAnimSegment1422);

HAnimJoint* HAnimJoint1433 = new HAnimJoint();
HAnimJoint1433->setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1433->setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1433->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1421->addChild(HAnimJoint1433);

HAnimJoint1412->addChild(HAnimJoint1421);

HAnimJoint1403->addChild(HAnimJoint1412);

HAnimJoint1382->addChild(HAnimJoint1403);

HAnimJoint* HAnimJoint1434 = new HAnimJoint();
HAnimJoint1434->setName(CString("r_midcarpal_2"));
HAnimJoint1434->setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1434->setCenter(new float[3]{-8.0515,0.9225,0.8386});
HAnimSegment* HAnimSegment1435 = new HAnimSegment();
HAnimSegment1435->setName(CString("r_trapezoid"));
HAnimSegment1435->setDEF(CString("hanim_r_trapezoid"));
Transform* Transform1436 = new Transform();
Transform1436->setTranslation(new float[3]{-8.0515,0.9225,0.8386});
Transform* Transform1437 = new Transform();
//Empty Transform
Shape* Shape1438 = new Shape();
Shape1438->setUSE(CString("HAnimJointShape"));
Transform1437->addChild(Shape1438);

Transform1436->addChild(Transform1437);

HAnimSegment1435->addChild(Transform1436);

Shape* Shape1439 = new Shape();
LineSet* LineSet1440 = new LineSet();
LineSet1440->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1441 = new Coordinate();
Coordinate1441->setPoint(new float[6]{-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218}, 6);
LineSet1440->addChild(Coordinate1441);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA1442 = new ColorRGBA();
ColorRGBA1442->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1440->addChild(ColorRGBA1442);

Shape1439->setGeometry(LineSet1440);

HAnimSegment1435->addChild(Shape1439);

HAnimSite* HAnimSite1443 = new HAnimSite();
HAnimSite1443->setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite1443->setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite1443->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
TouchSensor* TouchSensor1444 = new TouchSensor();
TouchSensor1444->setDescription(CString("HAnimSite r_metacarpal_phalanx_2_pt"));
HAnimSite1443->addChild(TouchSensor1444);

Shape* Shape1445 = new Shape();
Shape1445->setUSE(CString("HAnimSiteShape"));
HAnimSite1443->addChild(Shape1445);

HAnimSegment1435->addChild(HAnimSite1443);

HAnimJoint1434->addChild(HAnimSegment1435);

HAnimJoint* HAnimJoint1446 = new HAnimJoint();
HAnimJoint1446->setName(CString("r_carpometacarpal_2"));
HAnimJoint1446->setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1446->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimSegment* HAnimSegment1447 = new HAnimSegment();
HAnimSegment1447->setName(CString("r_metacarpal_2"));
HAnimSegment1447->setDEF(CString("hanim_r_metacarpal_2"));
Transform* Transform1448 = new Transform();
Transform1448->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
Transform* Transform1449 = new Transform();
//Empty Transform
Shape* Shape1450 = new Shape();
Shape1450->setUSE(CString("HAnimJointShape"));
Transform1449->addChild(Shape1450);

Transform1448->addChild(Transform1449);

HAnimSegment1447->addChild(Transform1448);

Shape* Shape1451 = new Shape();
LineSet* LineSet1452 = new LineSet();
LineSet1452->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1453 = new Coordinate();
Coordinate1453->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1452->addChild(Coordinate1453);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA1454 = new ColorRGBA();
ColorRGBA1454->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1452->addChild(ColorRGBA1454);

Shape1451->setGeometry(LineSet1452);

HAnimSegment1447->addChild(Shape1451);

HAnimJoint1446->addChild(HAnimSegment1447);

HAnimJoint* HAnimJoint1455 = new HAnimJoint();
HAnimJoint1455->setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1455->setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1455->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimSegment* HAnimSegment1456 = new HAnimSegment();
HAnimSegment1456->setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1456->setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform* Transform1457 = new Transform();
Transform1457->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
Transform* Transform1458 = new Transform();
//Empty Transform
Shape* Shape1459 = new Shape();
Shape1459->setUSE(CString("HAnimJointShape"));
Transform1458->addChild(Shape1459);

Transform1457->addChild(Transform1458);

HAnimSegment1456->addChild(Transform1457);

Shape* Shape1460 = new Shape();
LineSet* LineSet1461 = new LineSet();
LineSet1461->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1462 = new Coordinate();
Coordinate1462->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1461->addChild(Coordinate1462);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1463 = new ColorRGBA();
ColorRGBA1463->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1461->addChild(ColorRGBA1463);

Shape1460->setGeometry(LineSet1461);

HAnimSegment1456->addChild(Shape1460);

HAnimJoint1455->addChild(HAnimSegment1456);

HAnimJoint* HAnimJoint1464 = new HAnimJoint();
HAnimJoint1464->setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1464->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1464->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimSegment* HAnimSegment1465 = new HAnimSegment();
HAnimSegment1465->setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1465->setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform* Transform1466 = new Transform();
Transform1466->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
Transform* Transform1467 = new Transform();
//Empty Transform
Shape* Shape1468 = new Shape();
Shape1468->setUSE(CString("HAnimJointShape"));
Transform1467->addChild(Shape1468);

Transform1466->addChild(Transform1467);

HAnimSegment1465->addChild(Transform1466);

Shape* Shape1469 = new Shape();
LineSet* LineSet1470 = new LineSet();
LineSet1470->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1471 = new Coordinate();
Coordinate1471->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1470->addChild(Coordinate1471);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1472 = new ColorRGBA();
ColorRGBA1472->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1470->addChild(ColorRGBA1472);

Shape1469->setGeometry(LineSet1470);

HAnimSegment1465->addChild(Shape1469);

HAnimSite* HAnimSite1473 = new HAnimSite();
HAnimSite1473->setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1473->setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
TouchSensor* TouchSensor1474 = new TouchSensor();
TouchSensor1474->setDescription(CString("HAnimSite r_carpal_distal_phalanx_2_tip"));
HAnimSite1473->addChild(TouchSensor1474);

Shape* Shape1475 = new Shape();
Shape1475->setUSE(CString("HAnimSiteShape"));
HAnimSite1473->addChild(Shape1475);

HAnimSegment1465->addChild(HAnimSite1473);

HAnimSite* HAnimSite1476 = new HAnimSite();
HAnimSite1476->setName(CString("r_dactylion_pt"));
HAnimSite1476->setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite1476->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
TouchSensor* TouchSensor1477 = new TouchSensor();
TouchSensor1477->setDescription(CString("HAnimSite r_dactylion_pt"));
HAnimSite1476->addChild(TouchSensor1477);

Shape* Shape1478 = new Shape();
Shape1478->setUSE(CString("HAnimSiteShape"));
HAnimSite1476->addChild(Shape1478);

HAnimSegment1465->addChild(HAnimSite1476);

HAnimJoint1464->addChild(HAnimSegment1465);

HAnimJoint* HAnimJoint1479 = new HAnimJoint();
HAnimJoint1479->setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1479->setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1479->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1464->addChild(HAnimJoint1479);

HAnimJoint1455->addChild(HAnimJoint1464);

HAnimJoint1446->addChild(HAnimJoint1455);

HAnimJoint1434->addChild(HAnimJoint1446);

HAnimJoint1382->addChild(HAnimJoint1434);

HAnimJoint* HAnimJoint1480 = new HAnimJoint();
HAnimJoint1480->setName(CString("r_midcarpal_3"));
HAnimJoint1480->setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1480->setCenter(new float[3]{-8.0405,0.9246,0.2513});
HAnimSegment* HAnimSegment1481 = new HAnimSegment();
HAnimSegment1481->setName(CString("r_capitate"));
HAnimSegment1481->setDEF(CString("hanim_r_capitate"));
Transform* Transform1482 = new Transform();
Transform1482->setTranslation(new float[3]{-8.0405,0.9246,0.2513});
Transform* Transform1483 = new Transform();
//Empty Transform
Shape* Shape1484 = new Shape();
Shape1484->setUSE(CString("HAnimJointShape"));
Transform1483->addChild(Shape1484);

Transform1482->addChild(Transform1483);

HAnimSegment1481->addChild(Transform1482);

Shape* Shape1485 = new Shape();
LineSet* LineSet1486 = new LineSet();
LineSet1486->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1487 = new Coordinate();
Coordinate1487->setPoint(new float[6]{-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468}, 6);
LineSet1486->addChild(Coordinate1487);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA1488 = new ColorRGBA();
ColorRGBA1488->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1486->addChild(ColorRGBA1488);

Shape1485->setGeometry(LineSet1486);

HAnimSegment1481->addChild(Shape1485);

HAnimSite* HAnimSite1489 = new HAnimSite();
HAnimSite1489->setName(CString("r_metacarpal_phalanx_3_pt"));
HAnimSite1489->setDEF(CString("hanim_r_metacarpal_phalanx_3_pt"));
TouchSensor* TouchSensor1490 = new TouchSensor();
TouchSensor1490->setDescription(CString("HAnimSite r_metacarpal_phalanx_3_pt"));
HAnimSite1489->addChild(TouchSensor1490);

Shape* Shape1491 = new Shape();
Shape1491->setUSE(CString("HAnimSiteShape"));
HAnimSite1489->addChild(Shape1491);

HAnimSegment1481->addChild(HAnimSite1489);

HAnimJoint1480->addChild(HAnimSegment1481);

HAnimJoint* HAnimJoint1492 = new HAnimJoint();
HAnimJoint1492->setName(CString("r_carpometacarpal_3"));
HAnimJoint1492->setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1492->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimSegment* HAnimSegment1493 = new HAnimSegment();
HAnimSegment1493->setName(CString("r_metacarpal_3"));
HAnimSegment1493->setDEF(CString("hanim_r_metacarpal_3"));
Transform* Transform1494 = new Transform();
Transform1494->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
Transform* Transform1495 = new Transform();
//Empty Transform
Shape* Shape1496 = new Shape();
Shape1496->setUSE(CString("HAnimJointShape"));
Transform1495->addChild(Shape1496);

Transform1494->addChild(Transform1495);

HAnimSegment1493->addChild(Transform1494);

Shape* Shape1497 = new Shape();
LineSet* LineSet1498 = new LineSet();
LineSet1498->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1499 = new Coordinate();
Coordinate1499->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1498->addChild(Coordinate1499);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA1500 = new ColorRGBA();
ColorRGBA1500->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1498->addChild(ColorRGBA1500);

Shape1497->setGeometry(LineSet1498);

HAnimSegment1493->addChild(Shape1497);

HAnimJoint1492->addChild(HAnimSegment1493);

HAnimJoint* HAnimJoint1501 = new HAnimJoint();
HAnimJoint1501->setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1501->setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1501->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimSegment* HAnimSegment1502 = new HAnimSegment();
HAnimSegment1502->setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1502->setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform* Transform1503 = new Transform();
Transform1503->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
Transform* Transform1504 = new Transform();
//Empty Transform
Shape* Shape1505 = new Shape();
Shape1505->setUSE(CString("HAnimJointShape"));
Transform1504->addChild(Shape1505);

Transform1503->addChild(Transform1504);

HAnimSegment1502->addChild(Transform1503);

Shape* Shape1506 = new Shape();
LineSet* LineSet1507 = new LineSet();
LineSet1507->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1508 = new Coordinate();
Coordinate1508->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1507->addChild(Coordinate1508);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1509 = new ColorRGBA();
ColorRGBA1509->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1507->addChild(ColorRGBA1509);

Shape1506->setGeometry(LineSet1507);

HAnimSegment1502->addChild(Shape1506);

HAnimJoint1501->addChild(HAnimSegment1502);

HAnimJoint* HAnimJoint1510 = new HAnimJoint();
HAnimJoint1510->setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1510->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1510->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimSegment* HAnimSegment1511 = new HAnimSegment();
HAnimSegment1511->setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1511->setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform* Transform1512 = new Transform();
Transform1512->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
Transform* Transform1513 = new Transform();
//Empty Transform
Shape* Shape1514 = new Shape();
Shape1514->setUSE(CString("HAnimJointShape"));
Transform1513->addChild(Shape1514);

Transform1512->addChild(Transform1513);

HAnimSegment1511->addChild(Transform1512);

Shape* Shape1515 = new Shape();
LineSet* LineSet1516 = new LineSet();
LineSet1516->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1517 = new Coordinate();
Coordinate1517->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1516->addChild(Coordinate1517);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1518 = new ColorRGBA();
ColorRGBA1518->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1516->addChild(ColorRGBA1518);

Shape1515->setGeometry(LineSet1516);

HAnimSegment1511->addChild(Shape1515);

HAnimSite* HAnimSite1519 = new HAnimSite();
HAnimSite1519->setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1519->setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor1520 = new TouchSensor();
TouchSensor1520->setDescription(CString("HAnimSite r_carpal_distal_phalanx_3_tip"));
HAnimSite1519->addChild(TouchSensor1520);

Shape* Shape1521 = new Shape();
Shape1521->setUSE(CString("HAnimSiteShape"));
HAnimSite1519->addChild(Shape1521);

HAnimSegment1511->addChild(HAnimSite1519);

HAnimJoint1510->addChild(HAnimSegment1511);

HAnimJoint* HAnimJoint1522 = new HAnimJoint();
HAnimJoint1522->setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1522->setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1522->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1510->addChild(HAnimJoint1522);

HAnimJoint1501->addChild(HAnimJoint1510);

HAnimJoint1492->addChild(HAnimJoint1501);

HAnimJoint1480->addChild(HAnimJoint1492);

HAnimJoint1382->addChild(HAnimJoint1480);

HAnimJoint* HAnimJoint1523 = new HAnimJoint();
HAnimJoint1523->setName(CString("r_midcarpal_4_5"));
HAnimJoint1523->setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1523->setCenter(new float[3]{-8.0405,0.921,-0.6795});
HAnimSegment* HAnimSegment1524 = new HAnimSegment();
HAnimSegment1524->setName(CString("r_hamate"));
HAnimSegment1524->setDEF(CString("hanim_r_hamate"));
Transform* Transform1525 = new Transform();
Transform1525->setTranslation(new float[3]{-8.0405,0.921,-0.6795});
Transform* Transform1526 = new Transform();
//Empty Transform
Shape* Shape1527 = new Shape();
Shape1527->setUSE(CString("HAnimJointShape"));
Transform1526->addChild(Shape1527);

Transform1525->addChild(Transform1526);

HAnimSegment1524->addChild(Transform1525);

Shape* Shape1528 = new Shape();
LineSet* LineSet1529 = new LineSet();
LineSet1529->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1530 = new Coordinate();
Coordinate1530->setPoint(new float[6]{-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732}, 6);
LineSet1529->addChild(Coordinate1530);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA1531 = new ColorRGBA();
ColorRGBA1531->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1529->addChild(ColorRGBA1531);

Shape1528->setGeometry(LineSet1529);

HAnimSegment1524->addChild(Shape1528);

Shape* Shape1532 = new Shape();
LineSet* LineSet1533 = new LineSet();
LineSet1533->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1534 = new Coordinate();
Coordinate1534->setPoint(new float[6]{-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975}, 6);
LineSet1533->addChild(Coordinate1534);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA1535 = new ColorRGBA();
ColorRGBA1535->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1533->addChild(ColorRGBA1535);

Shape1532->setGeometry(LineSet1533);

HAnimSegment1524->addChild(Shape1532);

HAnimSite* HAnimSite1536 = new HAnimSite();
HAnimSite1536->setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite1536->setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite1536->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
TouchSensor* TouchSensor1537 = new TouchSensor();
TouchSensor1537->setDescription(CString("HAnimSite r_metacarpal_phalanx_5_pt"));
HAnimSite1536->addChild(TouchSensor1537);

Shape* Shape1538 = new Shape();
Shape1538->setUSE(CString("HAnimSiteShape"));
HAnimSite1536->addChild(Shape1538);

HAnimSegment1524->addChild(HAnimSite1536);

HAnimJoint1523->addChild(HAnimSegment1524);

HAnimJoint* HAnimJoint1539 = new HAnimJoint();
HAnimJoint1539->setName(CString("r_carpometacarpal_4"));
HAnimJoint1539->setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1539->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimSegment* HAnimSegment1540 = new HAnimSegment();
HAnimSegment1540->setName(CString("r_metacarpal_4"));
HAnimSegment1540->setDEF(CString("hanim_r_metacarpal_4"));
Transform* Transform1541 = new Transform();
Transform1541->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
Transform* Transform1542 = new Transform();
//Empty Transform
Shape* Shape1543 = new Shape();
Shape1543->setUSE(CString("HAnimJointShape"));
Transform1542->addChild(Shape1543);

Transform1541->addChild(Transform1542);

HAnimSegment1540->addChild(Transform1541);

Shape* Shape1544 = new Shape();
LineSet* LineSet1545 = new LineSet();
LineSet1545->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1546 = new Coordinate();
Coordinate1546->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1545->addChild(Coordinate1546);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA1547 = new ColorRGBA();
ColorRGBA1547->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1545->addChild(ColorRGBA1547);

Shape1544->setGeometry(LineSet1545);

HAnimSegment1540->addChild(Shape1544);

HAnimJoint1539->addChild(HAnimSegment1540);

HAnimJoint* HAnimJoint1548 = new HAnimJoint();
HAnimJoint1548->setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1548->setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1548->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimSegment* HAnimSegment1549 = new HAnimSegment();
HAnimSegment1549->setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1549->setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform* Transform1550 = new Transform();
Transform1550->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
Transform* Transform1551 = new Transform();
//Empty Transform
Shape* Shape1552 = new Shape();
Shape1552->setUSE(CString("HAnimJointShape"));
Transform1551->addChild(Shape1552);

Transform1550->addChild(Transform1551);

HAnimSegment1549->addChild(Transform1550);

Shape* Shape1553 = new Shape();
LineSet* LineSet1554 = new LineSet();
LineSet1554->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1555 = new Coordinate();
Coordinate1555->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1554->addChild(Coordinate1555);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1556 = new ColorRGBA();
ColorRGBA1556->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1554->addChild(ColorRGBA1556);

Shape1553->setGeometry(LineSet1554);

HAnimSegment1549->addChild(Shape1553);

HAnimJoint1548->addChild(HAnimSegment1549);

HAnimJoint* HAnimJoint1557 = new HAnimJoint();
HAnimJoint1557->setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1557->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1557->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimSegment* HAnimSegment1558 = new HAnimSegment();
HAnimSegment1558->setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1558->setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform* Transform1559 = new Transform();
Transform1559->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
Transform* Transform1560 = new Transform();
//Empty Transform
Shape* Shape1561 = new Shape();
Shape1561->setUSE(CString("HAnimJointShape"));
Transform1560->addChild(Shape1561);

Transform1559->addChild(Transform1560);

HAnimSegment1558->addChild(Transform1559);

Shape* Shape1562 = new Shape();
LineSet* LineSet1563 = new LineSet();
LineSet1563->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1564 = new Coordinate();
Coordinate1564->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1563->addChild(Coordinate1564);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1565 = new ColorRGBA();
ColorRGBA1565->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1563->addChild(ColorRGBA1565);

Shape1562->setGeometry(LineSet1563);

HAnimSegment1558->addChild(Shape1562);

HAnimSite* HAnimSite1566 = new HAnimSite();
HAnimSite1566->setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1566->setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor1567 = new TouchSensor();
TouchSensor1567->setDescription(CString("HAnimSite r_carpal_distal_phalanx_4_tip"));
HAnimSite1566->addChild(TouchSensor1567);

Shape* Shape1568 = new Shape();
Shape1568->setUSE(CString("HAnimSiteShape"));
HAnimSite1566->addChild(Shape1568);

HAnimSegment1558->addChild(HAnimSite1566);

HAnimJoint1557->addChild(HAnimSegment1558);

HAnimJoint* HAnimJoint1569 = new HAnimJoint();
HAnimJoint1569->setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1569->setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1569->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1557->addChild(HAnimJoint1569);

HAnimJoint1548->addChild(HAnimJoint1557);

HAnimJoint1539->addChild(HAnimJoint1548);

HAnimJoint1523->addChild(HAnimJoint1539);

HAnimJoint* HAnimJoint1570 = new HAnimJoint();
HAnimJoint1570->setName(CString("r_carpometacarpal_5"));
HAnimJoint1570->setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1570->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimSegment* HAnimSegment1571 = new HAnimSegment();
HAnimSegment1571->setName(CString("r_metacarpal_5"));
HAnimSegment1571->setDEF(CString("hanim_r_metacarpal_5"));
Transform* Transform1572 = new Transform();
Transform1572->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
Transform* Transform1573 = new Transform();
//Empty Transform
Shape* Shape1574 = new Shape();
Shape1574->setUSE(CString("HAnimJointShape"));
Transform1573->addChild(Shape1574);

Transform1572->addChild(Transform1573);

HAnimSegment1571->addChild(Transform1572);

Shape* Shape1575 = new Shape();
LineSet* LineSet1576 = new LineSet();
LineSet1576->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1577 = new Coordinate();
Coordinate1577->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1576->addChild(Coordinate1577);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA1578 = new ColorRGBA();
ColorRGBA1578->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1576->addChild(ColorRGBA1578);

Shape1575->setGeometry(LineSet1576);

HAnimSegment1571->addChild(Shape1575);

HAnimJoint1570->addChild(HAnimSegment1571);

HAnimJoint* HAnimJoint1579 = new HAnimJoint();
HAnimJoint1579->setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1579->setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1579->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimSegment* HAnimSegment1580 = new HAnimSegment();
HAnimSegment1580->setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1580->setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform* Transform1581 = new Transform();
Transform1581->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
Transform* Transform1582 = new Transform();
//Empty Transform
Shape* Shape1583 = new Shape();
Shape1583->setUSE(CString("HAnimJointShape"));
Transform1582->addChild(Shape1583);

Transform1581->addChild(Transform1582);

HAnimSegment1580->addChild(Transform1581);

Shape* Shape1584 = new Shape();
LineSet* LineSet1585 = new LineSet();
LineSet1585->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1586 = new Coordinate();
Coordinate1586->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1585->addChild(Coordinate1586);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1587 = new ColorRGBA();
ColorRGBA1587->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1585->addChild(ColorRGBA1587);

Shape1584->setGeometry(LineSet1585);

HAnimSegment1580->addChild(Shape1584);

HAnimJoint1579->addChild(HAnimSegment1580);

HAnimJoint* HAnimJoint1588 = new HAnimJoint();
HAnimJoint1588->setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1588->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1588->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimSegment* HAnimSegment1589 = new HAnimSegment();
HAnimSegment1589->setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1589->setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform* Transform1590 = new Transform();
Transform1590->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
Transform* Transform1591 = new Transform();
//Empty Transform
Shape* Shape1592 = new Shape();
Shape1592->setUSE(CString("HAnimJointShape"));
Transform1591->addChild(Shape1592);

Transform1590->addChild(Transform1591);

HAnimSegment1589->addChild(Transform1590);

Shape* Shape1593 = new Shape();
LineSet* LineSet1594 = new LineSet();
LineSet1594->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1595 = new Coordinate();
Coordinate1595->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1594->addChild(Coordinate1595);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1596 = new ColorRGBA();
ColorRGBA1596->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1594->addChild(ColorRGBA1596);

Shape1593->setGeometry(LineSet1594);

HAnimSegment1589->addChild(Shape1593);

HAnimSite* HAnimSite1597 = new HAnimSite();
HAnimSite1597->setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1597->setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor1598 = new TouchSensor();
TouchSensor1598->setDescription(CString("HAnimSite r_carpal_distal_phalanx_5_tip"));
HAnimSite1597->addChild(TouchSensor1598);

Shape* Shape1599 = new Shape();
Shape1599->setUSE(CString("HAnimSiteShape"));
HAnimSite1597->addChild(Shape1599);

HAnimSegment1589->addChild(HAnimSite1597);

HAnimJoint1588->addChild(HAnimSegment1589);

HAnimJoint* HAnimJoint1600 = new HAnimJoint();
HAnimJoint1600->setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1600->setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1600->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1588->addChild(HAnimJoint1600);

HAnimJoint1579->addChild(HAnimJoint1588);

HAnimJoint1570->addChild(HAnimJoint1579);

HAnimJoint1523->addChild(HAnimJoint1570);

HAnimJoint1382->addChild(HAnimJoint1523);

HAnimJoint1370->addChild(HAnimJoint1382);

HAnimJoint1349->addChild(HAnimJoint1370);

HAnimJoint1334->addChild(HAnimJoint1349);

HAnimJoint1325->addChild(HAnimJoint1334);

HAnimJoint845->addChild(HAnimJoint1325);

HAnimJoint830->addChild(HAnimJoint845);

HAnimJoint821->addChild(HAnimJoint830);

HAnimJoint812->addChild(HAnimJoint821);

HAnimJoint803->addChild(HAnimJoint812);

HAnimJoint791->addChild(HAnimJoint803);

HAnimJoint770->addChild(HAnimJoint791);

HAnimJoint761->addChild(HAnimJoint770);

HAnimJoint752->addChild(HAnimJoint761);

HAnimJoint737->addChild(HAnimJoint752);

HAnimJoint725->addChild(HAnimJoint737);

HAnimJoint716->addChild(HAnimJoint725);

HAnimJoint707->addChild(HAnimJoint716);

HAnimJoint698->addChild(HAnimJoint707);

HAnimJoint680->addChild(HAnimJoint698);

HAnimJoint671->addChild(HAnimJoint680);

HAnimJoint662->addChild(HAnimJoint671);

HAnimJoint45->addChild(HAnimJoint662);

HAnimHumanoid43->setSkeleton(HAnimJoint45);

HAnimJoint* HAnimJoint1601 = new HAnimJoint();
HAnimJoint1601->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43->addChild(HAnimJoint1601);

HAnimJoint* HAnimJoint1602 = new HAnimJoint();
HAnimJoint1602->setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43->addChild(HAnimJoint1602);

HAnimJoint* HAnimJoint1603 = new HAnimJoint();
HAnimJoint1603->setUSE(CString("hanim_l_hip"));
HAnimHumanoid43->addChild(HAnimJoint1603);

HAnimJoint* HAnimJoint1604 = new HAnimJoint();
HAnimJoint1604->setUSE(CString("hanim_l_knee"));
HAnimHumanoid43->addChild(HAnimJoint1604);

HAnimJoint* HAnimJoint1605 = new HAnimJoint();
HAnimJoint1605->setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint1605);

HAnimJoint* HAnimJoint1606 = new HAnimJoint();
HAnimJoint1606->setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43->addChild(HAnimJoint1606);

HAnimJoint* HAnimJoint1607 = new HAnimJoint();
HAnimJoint1607->setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43->addChild(HAnimJoint1607);

HAnimJoint* HAnimJoint1608 = new HAnimJoint();
HAnimJoint1608->setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43->addChild(HAnimJoint1608);

HAnimJoint* HAnimJoint1609 = new HAnimJoint();
HAnimJoint1609->setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1609);

HAnimJoint* HAnimJoint1610 = new HAnimJoint();
HAnimJoint1610->setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1610);

HAnimJoint* HAnimJoint1611 = new HAnimJoint();
HAnimJoint1611->setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43->addChild(HAnimJoint1611);

HAnimJoint* HAnimJoint1612 = new HAnimJoint();
HAnimJoint1612->setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint1612);

HAnimJoint* HAnimJoint1613 = new HAnimJoint();
HAnimJoint1613->setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1613);

HAnimJoint* HAnimJoint1614 = new HAnimJoint();
HAnimJoint1614->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1614);

HAnimJoint* HAnimJoint1615 = new HAnimJoint();
HAnimJoint1615->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1615);

HAnimJoint* HAnimJoint1616 = new HAnimJoint();
HAnimJoint1616->setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43->addChild(HAnimJoint1616);

HAnimJoint* HAnimJoint1617 = new HAnimJoint();
HAnimJoint1617->setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43->addChild(HAnimJoint1617);

HAnimJoint* HAnimJoint1618 = new HAnimJoint();
HAnimJoint1618->setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1618);

HAnimJoint* HAnimJoint1619 = new HAnimJoint();
HAnimJoint1619->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1619);

HAnimJoint* HAnimJoint1620 = new HAnimJoint();
HAnimJoint1620->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1620);

HAnimJoint* HAnimJoint1621 = new HAnimJoint();
HAnimJoint1621->setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43->addChild(HAnimJoint1621);

HAnimJoint* HAnimJoint1622 = new HAnimJoint();
HAnimJoint1622->setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43->addChild(HAnimJoint1622);

HAnimJoint* HAnimJoint1623 = new HAnimJoint();
HAnimJoint1623->setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43->addChild(HAnimJoint1623);

HAnimJoint* HAnimJoint1624 = new HAnimJoint();
HAnimJoint1624->setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1624);

HAnimJoint* HAnimJoint1625 = new HAnimJoint();
HAnimJoint1625->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1625);

HAnimJoint* HAnimJoint1626 = new HAnimJoint();
HAnimJoint1626->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1626);

HAnimJoint* HAnimJoint1627 = new HAnimJoint();
HAnimJoint1627->setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43->addChild(HAnimJoint1627);

HAnimJoint* HAnimJoint1628 = new HAnimJoint();
HAnimJoint1628->setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1628);

HAnimJoint* HAnimJoint1629 = new HAnimJoint();
HAnimJoint1629->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1629);

HAnimJoint* HAnimJoint1630 = new HAnimJoint();
HAnimJoint1630->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1630);

HAnimJoint* HAnimJoint1631 = new HAnimJoint();
HAnimJoint1631->setUSE(CString("hanim_r_hip"));
HAnimHumanoid43->addChild(HAnimJoint1631);

HAnimJoint* HAnimJoint1632 = new HAnimJoint();
HAnimJoint1632->setUSE(CString("hanim_r_knee"));
HAnimHumanoid43->addChild(HAnimJoint1632);

HAnimJoint* HAnimJoint1633 = new HAnimJoint();
HAnimJoint1633->setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint1633);

HAnimJoint* HAnimJoint1634 = new HAnimJoint();
HAnimJoint1634->setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43->addChild(HAnimJoint1634);

HAnimJoint* HAnimJoint1635 = new HAnimJoint();
HAnimJoint1635->setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43->addChild(HAnimJoint1635);

HAnimJoint* HAnimJoint1636 = new HAnimJoint();
HAnimJoint1636->setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43->addChild(HAnimJoint1636);

HAnimJoint* HAnimJoint1637 = new HAnimJoint();
HAnimJoint1637->setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1637);

HAnimJoint* HAnimJoint1638 = new HAnimJoint();
HAnimJoint1638->setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1638);

HAnimJoint* HAnimJoint1639 = new HAnimJoint();
HAnimJoint1639->setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43->addChild(HAnimJoint1639);

HAnimJoint* HAnimJoint1640 = new HAnimJoint();
HAnimJoint1640->setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint1640);

HAnimJoint* HAnimJoint1641 = new HAnimJoint();
HAnimJoint1641->setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1641);

HAnimJoint* HAnimJoint1642 = new HAnimJoint();
HAnimJoint1642->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1642);

HAnimJoint* HAnimJoint1643 = new HAnimJoint();
HAnimJoint1643->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1643);

HAnimJoint* HAnimJoint1644 = new HAnimJoint();
HAnimJoint1644->setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43->addChild(HAnimJoint1644);

HAnimJoint* HAnimJoint1645 = new HAnimJoint();
HAnimJoint1645->setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43->addChild(HAnimJoint1645);

HAnimJoint* HAnimJoint1646 = new HAnimJoint();
HAnimJoint1646->setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1646);

HAnimJoint* HAnimJoint1647 = new HAnimJoint();
HAnimJoint1647->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1647);

HAnimJoint* HAnimJoint1648 = new HAnimJoint();
HAnimJoint1648->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1648);

HAnimJoint* HAnimJoint1649 = new HAnimJoint();
HAnimJoint1649->setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43->addChild(HAnimJoint1649);

HAnimJoint* HAnimJoint1650 = new HAnimJoint();
HAnimJoint1650->setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43->addChild(HAnimJoint1650);

HAnimJoint* HAnimJoint1651 = new HAnimJoint();
HAnimJoint1651->setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43->addChild(HAnimJoint1651);

HAnimJoint* HAnimJoint1652 = new HAnimJoint();
HAnimJoint1652->setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1652);

HAnimJoint* HAnimJoint1653 = new HAnimJoint();
HAnimJoint1653->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1653);

HAnimJoint* HAnimJoint1654 = new HAnimJoint();
HAnimJoint1654->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1654);

HAnimJoint* HAnimJoint1655 = new HAnimJoint();
HAnimJoint1655->setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43->addChild(HAnimJoint1655);

HAnimJoint* HAnimJoint1656 = new HAnimJoint();
HAnimJoint1656->setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1656);

HAnimJoint* HAnimJoint1657 = new HAnimJoint();
HAnimJoint1657->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1657);

HAnimJoint* HAnimJoint1658 = new HAnimJoint();
HAnimJoint1658->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1658);

HAnimJoint* HAnimJoint1659 = new HAnimJoint();
HAnimJoint1659->setUSE(CString("hanim_vl5"));
HAnimHumanoid43->addChild(HAnimJoint1659);

HAnimJoint* HAnimJoint1660 = new HAnimJoint();
HAnimJoint1660->setUSE(CString("hanim_vl4"));
HAnimHumanoid43->addChild(HAnimJoint1660);

HAnimJoint* HAnimJoint1661 = new HAnimJoint();
HAnimJoint1661->setUSE(CString("hanim_vl3"));
HAnimHumanoid43->addChild(HAnimJoint1661);

HAnimJoint* HAnimJoint1662 = new HAnimJoint();
HAnimJoint1662->setUSE(CString("hanim_vl2"));
HAnimHumanoid43->addChild(HAnimJoint1662);

HAnimJoint* HAnimJoint1663 = new HAnimJoint();
HAnimJoint1663->setUSE(CString("hanim_vl1"));
HAnimHumanoid43->addChild(HAnimJoint1663);

HAnimJoint* HAnimJoint1664 = new HAnimJoint();
HAnimJoint1664->setUSE(CString("hanim_vt12"));
HAnimHumanoid43->addChild(HAnimJoint1664);

HAnimJoint* HAnimJoint1665 = new HAnimJoint();
HAnimJoint1665->setUSE(CString("hanim_vt11"));
HAnimHumanoid43->addChild(HAnimJoint1665);

HAnimJoint* HAnimJoint1666 = new HAnimJoint();
HAnimJoint1666->setUSE(CString("hanim_vt10"));
HAnimHumanoid43->addChild(HAnimJoint1666);

HAnimJoint* HAnimJoint1667 = new HAnimJoint();
HAnimJoint1667->setUSE(CString("hanim_vt9"));
HAnimHumanoid43->addChild(HAnimJoint1667);

HAnimJoint* HAnimJoint1668 = new HAnimJoint();
HAnimJoint1668->setUSE(CString("hanim_vt8"));
HAnimHumanoid43->addChild(HAnimJoint1668);

HAnimJoint* HAnimJoint1669 = new HAnimJoint();
HAnimJoint1669->setUSE(CString("hanim_vt7"));
HAnimHumanoid43->addChild(HAnimJoint1669);

HAnimJoint* HAnimJoint1670 = new HAnimJoint();
HAnimJoint1670->setUSE(CString("hanim_vt6"));
HAnimHumanoid43->addChild(HAnimJoint1670);

HAnimJoint* HAnimJoint1671 = new HAnimJoint();
HAnimJoint1671->setUSE(CString("hanim_vt5"));
HAnimHumanoid43->addChild(HAnimJoint1671);

HAnimJoint* HAnimJoint1672 = new HAnimJoint();
HAnimJoint1672->setUSE(CString("hanim_vt4"));
HAnimHumanoid43->addChild(HAnimJoint1672);

HAnimJoint* HAnimJoint1673 = new HAnimJoint();
HAnimJoint1673->setUSE(CString("hanim_vt3"));
HAnimHumanoid43->addChild(HAnimJoint1673);

HAnimJoint* HAnimJoint1674 = new HAnimJoint();
HAnimJoint1674->setUSE(CString("hanim_vt2"));
HAnimHumanoid43->addChild(HAnimJoint1674);

HAnimJoint* HAnimJoint1675 = new HAnimJoint();
HAnimJoint1675->setUSE(CString("hanim_vt1"));
HAnimHumanoid43->addChild(HAnimJoint1675);

HAnimJoint* HAnimJoint1676 = new HAnimJoint();
HAnimJoint1676->setUSE(CString("hanim_vc7"));
HAnimHumanoid43->addChild(HAnimJoint1676);

HAnimJoint* HAnimJoint1677 = new HAnimJoint();
HAnimJoint1677->setUSE(CString("hanim_vc6"));
HAnimHumanoid43->addChild(HAnimJoint1677);

HAnimJoint* HAnimJoint1678 = new HAnimJoint();
HAnimJoint1678->setUSE(CString("hanim_vc5"));
HAnimHumanoid43->addChild(HAnimJoint1678);

HAnimJoint* HAnimJoint1679 = new HAnimJoint();
HAnimJoint1679->setUSE(CString("hanim_vc4"));
HAnimHumanoid43->addChild(HAnimJoint1679);

HAnimJoint* HAnimJoint1680 = new HAnimJoint();
HAnimJoint1680->setUSE(CString("hanim_vc3"));
HAnimHumanoid43->addChild(HAnimJoint1680);

HAnimJoint* HAnimJoint1681 = new HAnimJoint();
HAnimJoint1681->setUSE(CString("hanim_vc2"));
HAnimHumanoid43->addChild(HAnimJoint1681);

HAnimJoint* HAnimJoint1682 = new HAnimJoint();
HAnimJoint1682->setUSE(CString("hanim_vc1"));
HAnimHumanoid43->addChild(HAnimJoint1682);

HAnimJoint* HAnimJoint1683 = new HAnimJoint();
HAnimJoint1683->setUSE(CString("hanim_skullbase"));
HAnimHumanoid43->addChild(HAnimJoint1683);

HAnimJoint* HAnimJoint1684 = new HAnimJoint();
HAnimJoint1684->setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43->addChild(HAnimJoint1684);

HAnimJoint* HAnimJoint1685 = new HAnimJoint();
HAnimJoint1685->setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43->addChild(HAnimJoint1685);

HAnimJoint* HAnimJoint1686 = new HAnimJoint();
HAnimJoint1686->setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43->addChild(HAnimJoint1686);

HAnimJoint* HAnimJoint1687 = new HAnimJoint();
HAnimJoint1687->setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43->addChild(HAnimJoint1687);

HAnimJoint* HAnimJoint1688 = new HAnimJoint();
HAnimJoint1688->setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43->addChild(HAnimJoint1688);

HAnimJoint* HAnimJoint1689 = new HAnimJoint();
HAnimJoint1689->setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43->addChild(HAnimJoint1689);

HAnimJoint* HAnimJoint1690 = new HAnimJoint();
HAnimJoint1690->setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43->addChild(HAnimJoint1690);

HAnimJoint* HAnimJoint1691 = new HAnimJoint();
HAnimJoint1691->setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1691);

HAnimJoint* HAnimJoint1692 = new HAnimJoint();
HAnimJoint1692->setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1692);

HAnimJoint* HAnimJoint1693 = new HAnimJoint();
HAnimJoint1693->setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint1693);

HAnimJoint* HAnimJoint1694 = new HAnimJoint();
HAnimJoint1694->setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43->addChild(HAnimJoint1694);

HAnimJoint* HAnimJoint1695 = new HAnimJoint();
HAnimJoint1695->setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint1695);

HAnimJoint* HAnimJoint1696 = new HAnimJoint();
HAnimJoint1696->setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1696);

HAnimJoint* HAnimJoint1697 = new HAnimJoint();
HAnimJoint1697->setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1697);

HAnimJoint* HAnimJoint1698 = new HAnimJoint();
HAnimJoint1698->setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1698);

HAnimJoint* HAnimJoint1699 = new HAnimJoint();
HAnimJoint1699->setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1699);

HAnimJoint* HAnimJoint1700 = new HAnimJoint();
HAnimJoint1700->setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1700);

HAnimJoint* HAnimJoint1701 = new HAnimJoint();
HAnimJoint1701->setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1701);

HAnimJoint* HAnimJoint1702 = new HAnimJoint();
HAnimJoint1702->setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1702);

HAnimJoint* HAnimJoint1703 = new HAnimJoint();
HAnimJoint1703->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1703);

HAnimJoint* HAnimJoint1704 = new HAnimJoint();
HAnimJoint1704->setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1704);

HAnimJoint* HAnimJoint1705 = new HAnimJoint();
HAnimJoint1705->setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1705);

HAnimJoint* HAnimJoint1706 = new HAnimJoint();
HAnimJoint1706->setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1706);

HAnimJoint* HAnimJoint1707 = new HAnimJoint();
HAnimJoint1707->setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1707);

HAnimJoint* HAnimJoint1708 = new HAnimJoint();
HAnimJoint1708->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1708);

HAnimJoint* HAnimJoint1709 = new HAnimJoint();
HAnimJoint1709->setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1709);

HAnimJoint* HAnimJoint1710 = new HAnimJoint();
HAnimJoint1710->setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43->addChild(HAnimJoint1710);

HAnimJoint* HAnimJoint1711 = new HAnimJoint();
HAnimJoint1711->setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint1711);

HAnimJoint* HAnimJoint1712 = new HAnimJoint();
HAnimJoint1712->setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1712);

HAnimJoint* HAnimJoint1713 = new HAnimJoint();
HAnimJoint1713->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1713);

HAnimJoint* HAnimJoint1714 = new HAnimJoint();
HAnimJoint1714->setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1714);

HAnimJoint* HAnimJoint1715 = new HAnimJoint();
HAnimJoint1715->setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint1715);

HAnimJoint* HAnimJoint1716 = new HAnimJoint();
HAnimJoint1716->setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1716);

HAnimJoint* HAnimJoint1717 = new HAnimJoint();
HAnimJoint1717->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1717);

HAnimJoint* HAnimJoint1718 = new HAnimJoint();
HAnimJoint1718->setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1718);

HAnimJoint* HAnimJoint1719 = new HAnimJoint();
HAnimJoint1719->setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1719);

HAnimJoint* HAnimJoint1720 = new HAnimJoint();
HAnimJoint1720->setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1720);

HAnimJoint* HAnimJoint1721 = new HAnimJoint();
HAnimJoint1721->setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint1721);

HAnimJoint* HAnimJoint1722 = new HAnimJoint();
HAnimJoint1722->setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43->addChild(HAnimJoint1722);

HAnimJoint* HAnimJoint1723 = new HAnimJoint();
HAnimJoint1723->setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint1723);

HAnimJoint* HAnimJoint1724 = new HAnimJoint();
HAnimJoint1724->setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1724);

HAnimJoint* HAnimJoint1725 = new HAnimJoint();
HAnimJoint1725->setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1725);

HAnimJoint* HAnimJoint1726 = new HAnimJoint();
HAnimJoint1726->setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1726);

HAnimJoint* HAnimJoint1727 = new HAnimJoint();
HAnimJoint1727->setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1727);

HAnimJoint* HAnimJoint1728 = new HAnimJoint();
HAnimJoint1728->setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1728);

HAnimJoint* HAnimJoint1729 = new HAnimJoint();
HAnimJoint1729->setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1729);

HAnimJoint* HAnimJoint1730 = new HAnimJoint();
HAnimJoint1730->setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1730);

HAnimJoint* HAnimJoint1731 = new HAnimJoint();
HAnimJoint1731->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1731);

HAnimJoint* HAnimJoint1732 = new HAnimJoint();
HAnimJoint1732->setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1732);

HAnimJoint* HAnimJoint1733 = new HAnimJoint();
HAnimJoint1733->setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1733);

HAnimJoint* HAnimJoint1734 = new HAnimJoint();
HAnimJoint1734->setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1734);

HAnimJoint* HAnimJoint1735 = new HAnimJoint();
HAnimJoint1735->setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1735);

HAnimJoint* HAnimJoint1736 = new HAnimJoint();
HAnimJoint1736->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1736);

HAnimJoint* HAnimJoint1737 = new HAnimJoint();
HAnimJoint1737->setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1737);

HAnimJoint* HAnimJoint1738 = new HAnimJoint();
HAnimJoint1738->setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43->addChild(HAnimJoint1738);

HAnimJoint* HAnimJoint1739 = new HAnimJoint();
HAnimJoint1739->setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint1739);

HAnimJoint* HAnimJoint1740 = new HAnimJoint();
HAnimJoint1740->setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1740);

HAnimJoint* HAnimJoint1741 = new HAnimJoint();
HAnimJoint1741->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1741);

HAnimJoint* HAnimJoint1742 = new HAnimJoint();
HAnimJoint1742->setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1742);

HAnimJoint* HAnimJoint1743 = new HAnimJoint();
HAnimJoint1743->setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint1743);

HAnimJoint* HAnimJoint1744 = new HAnimJoint();
HAnimJoint1744->setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1744);

HAnimJoint* HAnimJoint1745 = new HAnimJoint();
HAnimJoint1745->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1745);

HAnimJoint* HAnimJoint1746 = new HAnimJoint();
HAnimJoint1746->setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1746);

HAnimSegment* HAnimSegment1747 = new HAnimSegment();
HAnimSegment1747->setUSE(CString("hanim_sacrum"));
HAnimHumanoid43->setSegments(HAnimSegment1747);

HAnimSegment* HAnimSegment1748 = new HAnimSegment();
HAnimSegment1748->setUSE(CString("hanim_pelvis"));
HAnimHumanoid43->setSegments(HAnimSegment1748);

HAnimSegment* HAnimSegment1749 = new HAnimSegment();
HAnimSegment1749->setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43->setSegments(HAnimSegment1749);

HAnimSegment* HAnimSegment1750 = new HAnimSegment();
HAnimSegment1750->setUSE(CString("hanim_l_calf"));
HAnimHumanoid43->setSegments(HAnimSegment1750);

HAnimSegment* HAnimSegment1751 = new HAnimSegment();
HAnimSegment1751->setUSE(CString("hanim_l_talus"));
HAnimHumanoid43->setSegments(HAnimSegment1751);

HAnimSegment* HAnimSegment1752 = new HAnimSegment();
HAnimSegment1752->setUSE(CString("hanim_l_navicular"));
HAnimHumanoid43->setSegments(HAnimSegment1752);

HAnimSegment* HAnimSegment1753 = new HAnimSegment();
HAnimSegment1753->setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid43->setSegments(HAnimSegment1753);

HAnimSegment* HAnimSegment1754 = new HAnimSegment();
HAnimSegment1754->setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1754);

HAnimSegment* HAnimSegment1755 = new HAnimSegment();
HAnimSegment1755->setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1755);

HAnimSegment* HAnimSegment1756 = new HAnimSegment();
HAnimSegment1756->setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid43->setSegments(HAnimSegment1756);

HAnimSegment* HAnimSegment1757 = new HAnimSegment();
HAnimSegment1757->setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1757);

HAnimSegment* HAnimSegment1758 = new HAnimSegment();
HAnimSegment1758->setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1758);

HAnimSegment* HAnimSegment1759 = new HAnimSegment();
HAnimSegment1759->setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1759);

HAnimSegment* HAnimSegment1760 = new HAnimSegment();
HAnimSegment1760->setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid43->setSegments(HAnimSegment1760);

HAnimSegment* HAnimSegment1761 = new HAnimSegment();
HAnimSegment1761->setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1761);

HAnimSegment* HAnimSegment1762 = new HAnimSegment();
HAnimSegment1762->setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1762);

HAnimSegment* HAnimSegment1763 = new HAnimSegment();
HAnimSegment1763->setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1763);

HAnimSegment* HAnimSegment1764 = new HAnimSegment();
HAnimSegment1764->setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid43->setSegments(HAnimSegment1764);

HAnimSegment* HAnimSegment1765 = new HAnimSegment();
HAnimSegment1765->setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid43->setSegments(HAnimSegment1765);

HAnimSegment* HAnimSegment1766 = new HAnimSegment();
HAnimSegment1766->setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1766);

HAnimSegment* HAnimSegment1767 = new HAnimSegment();
HAnimSegment1767->setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1767);

HAnimSegment* HAnimSegment1768 = new HAnimSegment();
HAnimSegment1768->setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1768);

HAnimSegment* HAnimSegment1769 = new HAnimSegment();
HAnimSegment1769->setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1769);

HAnimSegment* HAnimSegment1770 = new HAnimSegment();
HAnimSegment1770->setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1770);

HAnimSegment* HAnimSegment1771 = new HAnimSegment();
HAnimSegment1771->setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1771);

HAnimSegment* HAnimSegment1772 = new HAnimSegment();
HAnimSegment1772->setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43->setSegments(HAnimSegment1772);

HAnimSegment* HAnimSegment1773 = new HAnimSegment();
HAnimSegment1773->setUSE(CString("hanim_r_calf"));
HAnimHumanoid43->setSegments(HAnimSegment1773);

HAnimSegment* HAnimSegment1774 = new HAnimSegment();
HAnimSegment1774->setUSE(CString("hanim_r_talus"));
HAnimHumanoid43->setSegments(HAnimSegment1774);

HAnimSegment* HAnimSegment1775 = new HAnimSegment();
HAnimSegment1775->setUSE(CString("hanim_r_navicular"));
HAnimHumanoid43->setSegments(HAnimSegment1775);

HAnimSegment* HAnimSegment1776 = new HAnimSegment();
HAnimSegment1776->setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid43->setSegments(HAnimSegment1776);

HAnimSegment* HAnimSegment1777 = new HAnimSegment();
HAnimSegment1777->setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1777);

HAnimSegment* HAnimSegment1778 = new HAnimSegment();
HAnimSegment1778->setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1778);

HAnimSegment* HAnimSegment1779 = new HAnimSegment();
HAnimSegment1779->setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid43->setSegments(HAnimSegment1779);

HAnimSegment* HAnimSegment1780 = new HAnimSegment();
HAnimSegment1780->setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1780);

HAnimSegment* HAnimSegment1781 = new HAnimSegment();
HAnimSegment1781->setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1781);

HAnimSegment* HAnimSegment1782 = new HAnimSegment();
HAnimSegment1782->setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1782);

HAnimSegment* HAnimSegment1783 = new HAnimSegment();
HAnimSegment1783->setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid43->setSegments(HAnimSegment1783);

HAnimSegment* HAnimSegment1784 = new HAnimSegment();
HAnimSegment1784->setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1784);

HAnimSegment* HAnimSegment1785 = new HAnimSegment();
HAnimSegment1785->setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1785);

HAnimSegment* HAnimSegment1786 = new HAnimSegment();
HAnimSegment1786->setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1786);

HAnimSegment* HAnimSegment1787 = new HAnimSegment();
HAnimSegment1787->setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid43->setSegments(HAnimSegment1787);

HAnimSegment* HAnimSegment1788 = new HAnimSegment();
HAnimSegment1788->setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid43->setSegments(HAnimSegment1788);

HAnimSegment* HAnimSegment1789 = new HAnimSegment();
HAnimSegment1789->setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1789);

HAnimSegment* HAnimSegment1790 = new HAnimSegment();
HAnimSegment1790->setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1790);

HAnimSegment* HAnimSegment1791 = new HAnimSegment();
HAnimSegment1791->setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1791);

HAnimSegment* HAnimSegment1792 = new HAnimSegment();
HAnimSegment1792->setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1792);

HAnimSegment* HAnimSegment1793 = new HAnimSegment();
HAnimSegment1793->setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1793);

HAnimSegment* HAnimSegment1794 = new HAnimSegment();
HAnimSegment1794->setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1794);

HAnimSegment* HAnimSegment1795 = new HAnimSegment();
HAnimSegment1795->setUSE(CString("hanim_l5"));
HAnimHumanoid43->setSegments(HAnimSegment1795);

HAnimSegment* HAnimSegment1796 = new HAnimSegment();
HAnimSegment1796->setUSE(CString("hanim_l4"));
HAnimHumanoid43->setSegments(HAnimSegment1796);

HAnimSegment* HAnimSegment1797 = new HAnimSegment();
HAnimSegment1797->setUSE(CString("hanim_l3"));
HAnimHumanoid43->setSegments(HAnimSegment1797);

HAnimSegment* HAnimSegment1798 = new HAnimSegment();
HAnimSegment1798->setUSE(CString("hanim_l2"));
HAnimHumanoid43->setSegments(HAnimSegment1798);

HAnimSegment* HAnimSegment1799 = new HAnimSegment();
HAnimSegment1799->setUSE(CString("hanim_l1"));
HAnimHumanoid43->setSegments(HAnimSegment1799);

HAnimSegment* HAnimSegment1800 = new HAnimSegment();
HAnimSegment1800->setUSE(CString("hanim_t12"));
HAnimHumanoid43->setSegments(HAnimSegment1800);

HAnimSegment* HAnimSegment1801 = new HAnimSegment();
HAnimSegment1801->setUSE(CString("hanim_t11"));
HAnimHumanoid43->setSegments(HAnimSegment1801);

HAnimSegment* HAnimSegment1802 = new HAnimSegment();
HAnimSegment1802->setUSE(CString("hanim_t10"));
HAnimHumanoid43->setSegments(HAnimSegment1802);

HAnimSegment* HAnimSegment1803 = new HAnimSegment();
HAnimSegment1803->setUSE(CString("hanim_t9"));
HAnimHumanoid43->setSegments(HAnimSegment1803);

HAnimSegment* HAnimSegment1804 = new HAnimSegment();
HAnimSegment1804->setUSE(CString("hanim_t8"));
HAnimHumanoid43->setSegments(HAnimSegment1804);

HAnimSegment* HAnimSegment1805 = new HAnimSegment();
HAnimSegment1805->setUSE(CString("hanim_t7"));
HAnimHumanoid43->setSegments(HAnimSegment1805);

HAnimSegment* HAnimSegment1806 = new HAnimSegment();
HAnimSegment1806->setUSE(CString("hanim_t6"));
HAnimHumanoid43->setSegments(HAnimSegment1806);

HAnimSegment* HAnimSegment1807 = new HAnimSegment();
HAnimSegment1807->setUSE(CString("hanim_t5"));
HAnimHumanoid43->setSegments(HAnimSegment1807);

HAnimSegment* HAnimSegment1808 = new HAnimSegment();
HAnimSegment1808->setUSE(CString("hanim_t4"));
HAnimHumanoid43->setSegments(HAnimSegment1808);

HAnimSegment* HAnimSegment1809 = new HAnimSegment();
HAnimSegment1809->setUSE(CString("hanim_t3"));
HAnimHumanoid43->setSegments(HAnimSegment1809);

HAnimSegment* HAnimSegment1810 = new HAnimSegment();
HAnimSegment1810->setUSE(CString("hanim_t2"));
HAnimHumanoid43->setSegments(HAnimSegment1810);

HAnimSegment* HAnimSegment1811 = new HAnimSegment();
HAnimSegment1811->setUSE(CString("hanim_t1"));
HAnimHumanoid43->setSegments(HAnimSegment1811);

HAnimSegment* HAnimSegment1812 = new HAnimSegment();
HAnimSegment1812->setUSE(CString("hanim_c7"));
HAnimHumanoid43->setSegments(HAnimSegment1812);

HAnimSegment* HAnimSegment1813 = new HAnimSegment();
HAnimSegment1813->setUSE(CString("hanim_c6"));
HAnimHumanoid43->setSegments(HAnimSegment1813);

HAnimSegment* HAnimSegment1814 = new HAnimSegment();
HAnimSegment1814->setUSE(CString("hanim_c5"));
HAnimHumanoid43->setSegments(HAnimSegment1814);

HAnimSegment* HAnimSegment1815 = new HAnimSegment();
HAnimSegment1815->setUSE(CString("hanim_c4"));
HAnimHumanoid43->setSegments(HAnimSegment1815);

HAnimSegment* HAnimSegment1816 = new HAnimSegment();
HAnimSegment1816->setUSE(CString("hanim_c3"));
HAnimHumanoid43->setSegments(HAnimSegment1816);

HAnimSegment* HAnimSegment1817 = new HAnimSegment();
HAnimSegment1817->setUSE(CString("hanim_c2"));
HAnimHumanoid43->setSegments(HAnimSegment1817);

HAnimSegment* HAnimSegment1818 = new HAnimSegment();
HAnimSegment1818->setUSE(CString("hanim_c1"));
HAnimHumanoid43->setSegments(HAnimSegment1818);

HAnimSegment* HAnimSegment1819 = new HAnimSegment();
HAnimSegment1819->setUSE(CString("hanim_skull"));
HAnimHumanoid43->setSegments(HAnimSegment1819);

HAnimSegment* HAnimSegment1820 = new HAnimSegment();
HAnimSegment1820->setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43->setSegments(HAnimSegment1820);

HAnimSegment* HAnimSegment1821 = new HAnimSegment();
HAnimSegment1821->setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43->setSegments(HAnimSegment1821);

HAnimSegment* HAnimSegment1822 = new HAnimSegment();
HAnimSegment1822->setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43->setSegments(HAnimSegment1822);

HAnimSegment* HAnimSegment1823 = new HAnimSegment();
HAnimSegment1823->setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43->setSegments(HAnimSegment1823);

HAnimSegment* HAnimSegment1824 = new HAnimSegment();
HAnimSegment1824->setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43->setSegments(HAnimSegment1824);

HAnimSegment* HAnimSegment1825 = new HAnimSegment();
HAnimSegment1825->setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid43->setSegments(HAnimSegment1825);

HAnimSegment* HAnimSegment1826 = new HAnimSegment();
HAnimSegment1826->setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1826);

HAnimSegment* HAnimSegment1827 = new HAnimSegment();
HAnimSegment1827->setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1827);

HAnimSegment* HAnimSegment1828 = new HAnimSegment();
HAnimSegment1828->setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid43->setSegments(HAnimSegment1828);

HAnimSegment* HAnimSegment1829 = new HAnimSegment();
HAnimSegment1829->setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1829);

HAnimSegment* HAnimSegment1830 = new HAnimSegment();
HAnimSegment1830->setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1830);

HAnimSegment* HAnimSegment1831 = new HAnimSegment();
HAnimSegment1831->setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1831);

HAnimSegment* HAnimSegment1832 = new HAnimSegment();
HAnimSegment1832->setUSE(CString("hanim_l_capitate"));
HAnimHumanoid43->setSegments(HAnimSegment1832);

HAnimSegment* HAnimSegment1833 = new HAnimSegment();
HAnimSegment1833->setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1833);

HAnimSegment* HAnimSegment1834 = new HAnimSegment();
HAnimSegment1834->setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1834);

HAnimSegment* HAnimSegment1835 = new HAnimSegment();
HAnimSegment1835->setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1835);

HAnimSegment* HAnimSegment1836 = new HAnimSegment();
HAnimSegment1836->setUSE(CString("hanim_l_hamate"));
HAnimHumanoid43->setSegments(HAnimSegment1836);

HAnimSegment* HAnimSegment1837 = new HAnimSegment();
HAnimSegment1837->setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1837);

HAnimSegment* HAnimSegment1838 = new HAnimSegment();
HAnimSegment1838->setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1838);

HAnimSegment* HAnimSegment1839 = new HAnimSegment();
HAnimSegment1839->setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1839);

HAnimSegment* HAnimSegment1840 = new HAnimSegment();
HAnimSegment1840->setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1840);

HAnimSegment* HAnimSegment1841 = new HAnimSegment();
HAnimSegment1841->setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1841);

HAnimSegment* HAnimSegment1842 = new HAnimSegment();
HAnimSegment1842->setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1842);

HAnimSegment* HAnimSegment1843 = new HAnimSegment();
HAnimSegment1843->setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43->setSegments(HAnimSegment1843);

HAnimSegment* HAnimSegment1844 = new HAnimSegment();
HAnimSegment1844->setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43->setSegments(HAnimSegment1844);

HAnimSegment* HAnimSegment1845 = new HAnimSegment();
HAnimSegment1845->setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43->setSegments(HAnimSegment1845);

HAnimSegment* HAnimSegment1846 = new HAnimSegment();
HAnimSegment1846->setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43->setSegments(HAnimSegment1846);

HAnimSegment* HAnimSegment1847 = new HAnimSegment();
HAnimSegment1847->setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43->setSegments(HAnimSegment1847);

HAnimSegment* HAnimSegment1848 = new HAnimSegment();
HAnimSegment1848->setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid43->setSegments(HAnimSegment1848);

HAnimSegment* HAnimSegment1849 = new HAnimSegment();
HAnimSegment1849->setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1849);

HAnimSegment* HAnimSegment1850 = new HAnimSegment();
HAnimSegment1850->setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1850);

HAnimSegment* HAnimSegment1851 = new HAnimSegment();
HAnimSegment1851->setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid43->setSegments(HAnimSegment1851);

HAnimSegment* HAnimSegment1852 = new HAnimSegment();
HAnimSegment1852->setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1852);

HAnimSegment* HAnimSegment1853 = new HAnimSegment();
HAnimSegment1853->setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1853);

HAnimSegment* HAnimSegment1854 = new HAnimSegment();
HAnimSegment1854->setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1854);

HAnimSegment* HAnimSegment1855 = new HAnimSegment();
HAnimSegment1855->setUSE(CString("hanim_r_capitate"));
HAnimHumanoid43->setSegments(HAnimSegment1855);

HAnimSegment* HAnimSegment1856 = new HAnimSegment();
HAnimSegment1856->setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1856);

HAnimSegment* HAnimSegment1857 = new HAnimSegment();
HAnimSegment1857->setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1857);

HAnimSegment* HAnimSegment1858 = new HAnimSegment();
HAnimSegment1858->setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1858);

HAnimSegment* HAnimSegment1859 = new HAnimSegment();
HAnimSegment1859->setUSE(CString("hanim_r_hamate"));
HAnimHumanoid43->setSegments(HAnimSegment1859);

HAnimSegment* HAnimSegment1860 = new HAnimSegment();
HAnimSegment1860->setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1860);

HAnimSegment* HAnimSegment1861 = new HAnimSegment();
HAnimSegment1861->setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1861);

HAnimSegment* HAnimSegment1862 = new HAnimSegment();
HAnimSegment1862->setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1862);

HAnimSegment* HAnimSegment1863 = new HAnimSegment();
HAnimSegment1863->setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1863);

HAnimSegment* HAnimSegment1864 = new HAnimSegment();
HAnimSegment1864->setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1864);

HAnimSegment* HAnimSegment1865 = new HAnimSegment();
HAnimSegment1865->setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1865);

HAnimSite* HAnimSite1866 = new HAnimSite();
HAnimSite1866->setUSE(CString("hanim_buttocks_standing_wall_contact_point_pt"));
HAnimHumanoid43->setSites(HAnimSite1866);

HAnimSite* HAnimSite1867 = new HAnimSite();
HAnimSite1867->setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid43->setSites(HAnimSite1867);

HAnimSite* HAnimSite1868 = new HAnimSite();
HAnimSite1868->setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid43->setSites(HAnimSite1868);

HAnimSite* HAnimSite1869 = new HAnimSite();
HAnimSite1869->setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid43->setSites(HAnimSite1869);

HAnimSite* HAnimSite1870 = new HAnimSite();
HAnimSite1870->setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid43->setSites(HAnimSite1870);

HAnimSite* HAnimSite1871 = new HAnimSite();
HAnimSite1871->setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid43->setSites(HAnimSite1871);

HAnimSite* HAnimSite1872 = new HAnimSite();
HAnimSite1872->setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid43->setSites(HAnimSite1872);

HAnimSite* HAnimSite1873 = new HAnimSite();
HAnimSite1873->setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid43->setSites(HAnimSite1873);

HAnimSite* HAnimSite1874 = new HAnimSite();
HAnimSite1874->setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid43->setSites(HAnimSite1874);

HAnimSite* HAnimSite1875 = new HAnimSite();
HAnimSite1875->setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid43->setSites(HAnimSite1875);

HAnimSite* HAnimSite1876 = new HAnimSite();
HAnimSite1876->setUSE(CString("hanim_navel_pt"));
HAnimHumanoid43->setSites(HAnimSite1876);

HAnimSite* HAnimSite1877 = new HAnimSite();
HAnimSite1877->setUSE(CString("hanim_waist_preferred_anterior_pt"));
HAnimHumanoid43->setSites(HAnimSite1877);

HAnimSite* HAnimSite1878 = new HAnimSite();
HAnimSite1878->setUSE(CString("hanim_waist_preferred_posterior_pt"));
HAnimHumanoid43->setSites(HAnimSite1878);

HAnimSite* HAnimSite1879 = new HAnimSite();
HAnimSite1879->setUSE(CString("hanim_l_femoral_lateral_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1879);

HAnimSite* HAnimSite1880 = new HAnimSite();
HAnimSite1880->setUSE(CString("hanim_l_femoral_medial_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1880);

HAnimSite* HAnimSite1881 = new HAnimSite();
HAnimSite1881->setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid43->setSites(HAnimSite1881);

HAnimSite* HAnimSite1882 = new HAnimSite();
HAnimSite1882->setUSE(CString("hanim_l_suprapatella_pt"));
HAnimHumanoid43->setSites(HAnimSite1882);

HAnimSite* HAnimSite1883 = new HAnimSite();
HAnimSite1883->setUSE(CString("hanim_r_femoral_lateral_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1883);

HAnimSite* HAnimSite1884 = new HAnimSite();
HAnimSite1884->setUSE(CString("hanim_r_femoral_medial_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1884);

HAnimSite* HAnimSite1885 = new HAnimSite();
HAnimSite1885->setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid43->setSites(HAnimSite1885);

HAnimSite* HAnimSite1886 = new HAnimSite();
HAnimSite1886->setUSE(CString("hanim_r_suprapatella_pt"));
HAnimHumanoid43->setSites(HAnimSite1886);

HAnimSite* HAnimSite1887 = new HAnimSite();
HAnimSite1887->setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid43->setSites(HAnimSite1887);

HAnimSite* HAnimSite1888 = new HAnimSite();
HAnimSite1888->setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid43->setSites(HAnimSite1888);

HAnimSite* HAnimSite1889 = new HAnimSite();
HAnimSite1889->setUSE(CString("hanim_l_tibiale_pt"));
HAnimHumanoid43->setSites(HAnimSite1889);

HAnimSite* HAnimSite1890 = new HAnimSite();
HAnimSite1890->setUSE(CString("hanim_l_calcaneus_posterior_pt"));
HAnimHumanoid43->setSites(HAnimSite1890);

HAnimSite* HAnimSite1891 = new HAnimSite();
HAnimSite1891->setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid43->setSites(HAnimSite1891);

HAnimSite* HAnimSite1892 = new HAnimSite();
HAnimSite1892->setUSE(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid43->setSites(HAnimSite1892);

HAnimSite* HAnimSite1893 = new HAnimSite();
HAnimSite1893->setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1893);

HAnimSite* HAnimSite1894 = new HAnimSite();
HAnimSite1894->setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1894);

HAnimSite* HAnimSite1895 = new HAnimSite();
HAnimSite1895->setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1895);

HAnimSite* HAnimSite1896 = new HAnimSite();
HAnimSite1896->setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1896);

HAnimSite* HAnimSite1897 = new HAnimSite();
HAnimSite1897->setUSE(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid43->setSites(HAnimSite1897);

HAnimSite* HAnimSite1898 = new HAnimSite();
HAnimSite1898->setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1898);

HAnimSite* HAnimSite1899 = new HAnimSite();
HAnimSite1899->setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid43->setSites(HAnimSite1899);

HAnimSite* HAnimSite1900 = new HAnimSite();
HAnimSite1900->setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid43->setSites(HAnimSite1900);

HAnimSite* HAnimSite1901 = new HAnimSite();
HAnimSite1901->setUSE(CString("hanim_r_tibiale_pt"));
HAnimHumanoid43->setSites(HAnimSite1901);

HAnimSite* HAnimSite1902 = new HAnimSite();
HAnimSite1902->setUSE(CString("hanim_r_calcaneus_posterior_pt"));
HAnimHumanoid43->setSites(HAnimSite1902);

HAnimSite* HAnimSite1903 = new HAnimSite();
HAnimSite1903->setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid43->setSites(HAnimSite1903);

HAnimSite* HAnimSite1904 = new HAnimSite();
HAnimSite1904->setUSE(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid43->setSites(HAnimSite1904);

HAnimSite* HAnimSite1905 = new HAnimSite();
HAnimSite1905->setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1905);

HAnimSite* HAnimSite1906 = new HAnimSite();
HAnimSite1906->setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1906);

HAnimSite* HAnimSite1907 = new HAnimSite();
HAnimSite1907->setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1907);

HAnimSite* HAnimSite1908 = new HAnimSite();
HAnimSite1908->setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1908);

HAnimSite* HAnimSite1909 = new HAnimSite();
HAnimSite1909->setUSE(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid43->setSites(HAnimSite1909);

HAnimSite* HAnimSite1910 = new HAnimSite();
HAnimSite1910->setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1910);

HAnimSite* HAnimSite1911 = new HAnimSite();
HAnimSite1911->setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid43->setSites(HAnimSite1911);

HAnimSite* HAnimSite1912 = new HAnimSite();
HAnimSite1912->setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid43->setSites(HAnimSite1912);

HAnimSite* HAnimSite1913 = new HAnimSite();
HAnimSite1913->setUSE(CString("hanim_spine_2_middle_back_pt"));
HAnimHumanoid43->setSites(HAnimSite1913);

HAnimSite* HAnimSite1914 = new HAnimSite();
HAnimSite1914->setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid43->setSites(HAnimSite1914);

HAnimSite* HAnimSite1915 = new HAnimSite();
HAnimSite1915->setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid43->setSites(HAnimSite1915);

HAnimSite* HAnimSite1916 = new HAnimSite();
HAnimSite1916->setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid43->setSites(HAnimSite1916);

HAnimSite* HAnimSite1917 = new HAnimSite();
HAnimSite1917->setUSE(CString("hanim_l_chest_midsagittal_plane_pt"));
HAnimHumanoid43->setSites(HAnimSite1917);

HAnimSite* HAnimSite1918 = new HAnimSite();
HAnimSite1918->setUSE(CString("hanim_mesosternale_pt"));
HAnimHumanoid43->setSites(HAnimSite1918);

HAnimSite* HAnimSite1919 = new HAnimSite();
HAnimSite1919->setUSE(CString("hanim_r_chest_midsagittal_plane_pt"));
HAnimHumanoid43->setSites(HAnimSite1919);

HAnimSite* HAnimSite1920 = new HAnimSite();
HAnimSite1920->setUSE(CString("hanim_rear_center_midsagittal_plane_pt"));
HAnimHumanoid43->setSites(HAnimSite1920);

HAnimSite* HAnimSite1921 = new HAnimSite();
HAnimSite1921->setUSE(CString("hanim_spine_1_middle_back_pt"));
HAnimHumanoid43->setSites(HAnimSite1921);

HAnimSite* HAnimSite1922 = new HAnimSite();
HAnimSite1922->setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid43->setSites(HAnimSite1922);

HAnimSite* HAnimSite1923 = new HAnimSite();
HAnimSite1923->setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid43->setSites(HAnimSite1923);

HAnimSite* HAnimSite1924 = new HAnimSite();
HAnimSite1924->setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid43->setSites(HAnimSite1924);

HAnimSite* HAnimSite1925 = new HAnimSite();
HAnimSite1925->setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid43->setSites(HAnimSite1925);

HAnimSite* HAnimSite1926 = new HAnimSite();
HAnimSite1926->setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid43->setSites(HAnimSite1926);

HAnimSite* HAnimSite1927 = new HAnimSite();
HAnimSite1927->setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43->setSites(HAnimSite1927);

HAnimSite* HAnimSite1928 = new HAnimSite();
HAnimSite1928->setUSE(CString("hanim_l_axilla_posterior_folds_pt"));
HAnimHumanoid43->setSites(HAnimSite1928);

HAnimSite* HAnimSite1929 = new HAnimSite();
HAnimSite1929->setUSE(CString("hanim_l_axilla_proximal_pt"));
HAnimHumanoid43->setSites(HAnimSite1929);

HAnimSite* HAnimSite1930 = new HAnimSite();
HAnimSite1930->setUSE(CString("hanim_l_clavicale_pt"));
HAnimHumanoid43->setSites(HAnimSite1930);

HAnimSite* HAnimSite1931 = new HAnimSite();
HAnimSite1931->setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid43->setSites(HAnimSite1931);

HAnimSite* HAnimSite1932 = new HAnimSite();
HAnimSite1932->setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43->setSites(HAnimSite1932);

HAnimSite* HAnimSite1933 = new HAnimSite();
HAnimSite1933->setUSE(CString("hanim_r_axilla_posterior_folds_pt"));
HAnimHumanoid43->setSites(HAnimSite1933);

HAnimSite* HAnimSite1934 = new HAnimSite();
HAnimSite1934->setUSE(CString("hanim_r_axilla_proximal_pt"));
HAnimHumanoid43->setSites(HAnimSite1934);

HAnimSite* HAnimSite1935 = new HAnimSite();
HAnimSite1935->setUSE(CString("hanim_r_clavicale_pt"));
HAnimHumanoid43->setSites(HAnimSite1935);

HAnimSite* HAnimSite1936 = new HAnimSite();
HAnimSite1936->setUSE(CString("hanim_adams_apple_pt"));
HAnimHumanoid43->setSites(HAnimSite1936);

HAnimSite* HAnimSite1937 = new HAnimSite();
HAnimSite1937->setUSE(CString("hanim_glabella_pt"));
HAnimHumanoid43->setSites(HAnimSite1937);

HAnimSite* HAnimSite1938 = new HAnimSite();
HAnimSite1938->setUSE(CString("hanim_l_ectocanthus_pt"));
HAnimHumanoid43->setSites(HAnimSite1938);

HAnimSite* HAnimSite1939 = new HAnimSite();
HAnimSite1939->setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid43->setSites(HAnimSite1939);

HAnimSite* HAnimSite1940 = new HAnimSite();
HAnimSite1940->setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid43->setSites(HAnimSite1940);

HAnimSite* HAnimSite1941 = new HAnimSite();
HAnimSite1941->setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid43->setSites(HAnimSite1941);

HAnimSite* HAnimSite1942 = new HAnimSite();
HAnimSite1942->setUSE(CString("hanim_opisthocranion_pt"));
HAnimHumanoid43->setSites(HAnimSite1942);

HAnimSite* HAnimSite1943 = new HAnimSite();
HAnimSite1943->setUSE(CString("hanim_r_ectocanthus_pt"));
HAnimHumanoid43->setSites(HAnimSite1943);

HAnimSite* HAnimSite1944 = new HAnimSite();
HAnimSite1944->setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid43->setSites(HAnimSite1944);

HAnimSite* HAnimSite1945 = new HAnimSite();
HAnimSite1945->setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid43->setSites(HAnimSite1945);

HAnimSite* HAnimSite1946 = new HAnimSite();
HAnimSite1946->setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid43->setSites(HAnimSite1946);

HAnimSite* HAnimSite1947 = new HAnimSite();
HAnimSite1947->setUSE(CString("hanim_skull_vertex_pt"));
HAnimHumanoid43->setSites(HAnimSite1947);

HAnimSite* HAnimSite1948 = new HAnimSite();
HAnimSite1948->setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid43->setSites(HAnimSite1948);

HAnimSite* HAnimSite1949 = new HAnimSite();
HAnimSite1949->setUSE(CString("hanim_menton_pt"));
HAnimHumanoid43->setSites(HAnimSite1949);

HAnimSite* HAnimSite1950 = new HAnimSite();
HAnimSite1950->setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid43->setSites(HAnimSite1950);

HAnimSite* HAnimSite1951 = new HAnimSite();
HAnimSite1951->setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid43->setSites(HAnimSite1951);

HAnimSite* HAnimSite1952 = new HAnimSite();
HAnimSite1952->setUSE(CString("hanim_l_bideltoid_pt"));
HAnimHumanoid43->setSites(HAnimSite1952);

HAnimSite* HAnimSite1953 = new HAnimSite();
HAnimSite1953->setUSE(CString("hanim_l_humeral_lateral_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1953);

HAnimSite* HAnimSite1954 = new HAnimSite();
HAnimSite1954->setUSE(CString("hanim_l_humeral_medial_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1954);

HAnimSite* HAnimSite1955 = new HAnimSite();
HAnimSite1955->setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid43->setSites(HAnimSite1955);

HAnimSite* HAnimSite1956 = new HAnimSite();
HAnimSite1956->setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid43->setSites(HAnimSite1956);

HAnimSite* HAnimSite1957 = new HAnimSite();
HAnimSite1957->setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid43->setSites(HAnimSite1957);

HAnimSite* HAnimSite1958 = new HAnimSite();
HAnimSite1958->setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid43->setSites(HAnimSite1958);

HAnimSite* HAnimSite1959 = new HAnimSite();
HAnimSite1959->setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1959);

HAnimSite* HAnimSite1960 = new HAnimSite();
HAnimSite1960->setUSE(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid43->setSites(HAnimSite1960);

HAnimSite* HAnimSite1961 = new HAnimSite();
HAnimSite1961->setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1961);

HAnimSite* HAnimSite1962 = new HAnimSite();
HAnimSite1962->setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid43->setSites(HAnimSite1962);

HAnimSite* HAnimSite1963 = new HAnimSite();
HAnimSite1963->setUSE(CString("hanim_l_metacarpal_phalanx_3_pt"));
HAnimHumanoid43->setSites(HAnimSite1963);

HAnimSite* HAnimSite1964 = new HAnimSite();
HAnimSite1964->setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1964);

HAnimSite* HAnimSite1965 = new HAnimSite();
HAnimSite1965->setUSE(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid43->setSites(HAnimSite1965);

HAnimSite* HAnimSite1966 = new HAnimSite();
HAnimSite1966->setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1966);

HAnimSite* HAnimSite1967 = new HAnimSite();
HAnimSite1967->setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1967);

HAnimSite* HAnimSite1968 = new HAnimSite();
HAnimSite1968->setUSE(CString("hanim_r_bideltoid_pt"));
HAnimHumanoid43->setSites(HAnimSite1968);

HAnimSite* HAnimSite1969 = new HAnimSite();
HAnimSite1969->setUSE(CString("hanim_r_humeral_lateral_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1969);

HAnimSite* HAnimSite1970 = new HAnimSite();
HAnimSite1970->setUSE(CString("hanim_r_humeral_medial_epicondyles_pt"));
HAnimHumanoid43->setSites(HAnimSite1970);

HAnimSite* HAnimSite1971 = new HAnimSite();
HAnimSite1971->setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid43->setSites(HAnimSite1971);

HAnimSite* HAnimSite1972 = new HAnimSite();
HAnimSite1972->setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid43->setSites(HAnimSite1972);

HAnimSite* HAnimSite1973 = new HAnimSite();
HAnimSite1973->setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid43->setSites(HAnimSite1973);

HAnimSite* HAnimSite1974 = new HAnimSite();
HAnimSite1974->setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid43->setSites(HAnimSite1974);

HAnimSite* HAnimSite1975 = new HAnimSite();
HAnimSite1975->setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1975);

HAnimSite* HAnimSite1976 = new HAnimSite();
HAnimSite1976->setUSE(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid43->setSites(HAnimSite1976);

HAnimSite* HAnimSite1977 = new HAnimSite();
HAnimSite1977->setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1977);

HAnimSite* HAnimSite1978 = new HAnimSite();
HAnimSite1978->setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid43->setSites(HAnimSite1978);

HAnimSite* HAnimSite1979 = new HAnimSite();
HAnimSite1979->setUSE(CString("hanim_r_metacarpal_phalanx_3_pt"));
HAnimHumanoid43->setSites(HAnimSite1979);

HAnimSite* HAnimSite1980 = new HAnimSite();
HAnimSite1980->setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1980);

HAnimSite* HAnimSite1981 = new HAnimSite();
HAnimSite1981->setUSE(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid43->setSites(HAnimSite1981);

HAnimSite* HAnimSite1982 = new HAnimSite();
HAnimSite1982->setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1982);

HAnimSite* HAnimSite1983 = new HAnimSite();
HAnimSite1983->setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1983);

Scene11->addChild(HAnimHumanoid43);

X3D0->setScene(Scene11);

}
