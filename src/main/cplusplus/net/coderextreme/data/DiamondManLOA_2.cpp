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
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("DiamondManLOA_2.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Matthew T. Beitler");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Joel S. Pawloski");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("12 November 2001");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("23 December 2021");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("DiamondManLOA_2.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("Image");
meta10->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("motto");
meta11->setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("subject");
meta13->setContent("human animation, x3d, vrml, animation");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d");
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
WorldInfo18->setInfo(new CString[1]{"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"}, 1);
WorldInfo18->setTitle("HANIM 1.1 Default Joint Centers, LOA1");
group->addChildren(*WorldInfo18);

CNavigationInfo* NavigationInfo19 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo19->setSpeed(1.5);
group->addChildren(*NavigationInfo19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint20->setDescription("Diamond Man, LOA 2");
Viewpoint20->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint20);

CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setTranslation(new float[3]{1,1.5,0});
CBillboard* Billboard22 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text24 = (CText *)(m_pScene.createNode("Text"));
Text24->setString(new CString[1]{"Diamond Man Key"}, 1);
CFontStyle* FontStyle25 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle25->setFamily(new CString[1]{"SANS"}, 1);
FontStyle25->setSize(0.1);
Text24->setFontStyle(*FontStyle25);

Shape23->setGeometry(Text24);

CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material27 = (CMaterial *)(m_pScene.createNode("Material"));
Material27->setDEF("TextMaterial");
Material27->setDiffuseColor(new float[3]{0.9,0.9,0.9});
Appearance26->setMaterial(*Material27);

Shape23->setAppearance(*Appearance26);

Billboard22->addChildren(*Shape23);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{0,-0.3,0});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere30 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere30->setRadius(0.08);
Shape29->setGeometry(Sphere30);

CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setDEF("MIN_COLOR");
Material32->setDiffuseColor(new float[3]{1,0,0});
Appearance31->setMaterial(*Material32);

Shape29->setAppearance(*Appearance31);

Transform28->addChildren(*Shape29);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setTranslation(new float[3]{0.2,0,0});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text35 = (CText *)(m_pScene.createNode("Text"));
Text35->setString(new CString[1]{"Minimal Humanoid Joints"}, 1);
CFontStyle* FontStyle36 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle36->setFamily(new CString[1]{"SANS"}, 1);
FontStyle36->setSize(0.1);
Text35->setFontStyle(*FontStyle36);

Shape34->setGeometry(Text35);

CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setUSE("TextMaterial");
Appearance37->setMaterial(*Material38);

Shape34->setAppearance(*Appearance37);

Transform33->addChildren(*Shape34);

Transform28->addChildren(*Transform33);

Billboard22->addChildren(*Transform28);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setTranslation(new float[3]{0,-0.5,0});
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere41 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere41->setRadius(0.08);
Shape40->setGeometry(Sphere41);

CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setDEF("JOINT_COLOR");
Material43->setDiffuseColor(new float[3]{1,1,0});
Appearance42->setMaterial(*Material43);

Shape40->setAppearance(*Appearance42);

Transform39->addChildren(*Shape40);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setTranslation(new float[3]{0.2,0,0});
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text46 = (CText *)(m_pScene.createNode("Text"));
Text46->setString(new CString[1]{"Humanoid Joints"}, 1);
CFontStyle* FontStyle47 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle47->setFamily(new CString[1]{"SANS"}, 1);
FontStyle47->setSize(0.1);
Text46->setFontStyle(*FontStyle47);

Shape45->setGeometry(Text46);

CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setUSE("TextMaterial");
Appearance48->setMaterial(*Material49);

Shape45->setAppearance(*Appearance48);

Transform44->addChildren(*Shape45);

Transform39->addChildren(*Transform44);

Billboard22->addChildren(*Transform39);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setTranslation(new float[3]{0,-0.7,0});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere52 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere52->setRadius(0.08);
Shape51->setGeometry(Sphere52);

CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setDEF("REC_SPINAL_COLOR");
Material54->setDiffuseColor(new float[3]{1,0,1});
Appearance53->setMaterial(*Material54);

Shape51->setAppearance(*Appearance53);

Transform50->addChildren(*Shape51);

CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setTranslation(new float[3]{0.2,0,0});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text57 = (CText *)(m_pScene.createNode("Text"));
Text57->setString(new CString[1]{"Recommended Spinal Joints"}, 1);
CFontStyle* FontStyle58 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle58->setFamily(new CString[1]{"SANS"}, 1);
FontStyle58->setSize(0.1);
Text57->setFontStyle(*FontStyle58);

Shape56->setGeometry(Text57);

CAppearance* Appearance59 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material60 = (CMaterial *)(m_pScene.createNode("Material"));
Material60->setUSE("TextMaterial");
Appearance59->setMaterial(*Material60);

Shape56->setAppearance(*Appearance59);

Transform55->addChildren(*Shape56);

Transform50->addChildren(*Transform55);

Billboard22->addChildren(*Transform50);

CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setTranslation(new float[3]{0,-0.9,0});
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere63 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere63->setRadius(0.08);
Shape62->setGeometry(Sphere63);

CAppearance* Appearance64 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material65 = (CMaterial *)(m_pScene.createNode("Material"));
Material65->setDEF("SPINAL_COLOR");
Material65->setDiffuseColor(new float[3]{0,1,0});
Appearance64->setMaterial(*Material65);

Shape62->setAppearance(*Appearance64);

Transform61->addChildren(*Shape62);

CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{0.2,0,0});
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text68 = (CText *)(m_pScene.createNode("Text"));
Text68->setString(new CString[1]{"Spinal Joints"}, 1);
CFontStyle* FontStyle69 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle69->setFamily(new CString[1]{"SANS"}, 1);
FontStyle69->setSize(0.1);
Text68->setFontStyle(*FontStyle69);

Shape67->setGeometry(Text68);

CAppearance* Appearance70 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material71 = (CMaterial *)(m_pScene.createNode("Material"));
Material71->setUSE("TextMaterial");
Appearance70->setMaterial(*Material71);

Shape67->setAppearance(*Appearance70);

Transform66->addChildren(*Shape67);

Transform61->addChildren(*Transform66);

Billboard22->addChildren(*Transform61);

CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setTranslation(new float[3]{0,-1.3,0});
CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere74 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere74->setRadius(0.08);
Shape73->setGeometry(Sphere74);

CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setDEF("SITE_COLOR");
Material76->setDiffuseColor(new float[3]{0,0,1});
Appearance75->setMaterial(*Material76);

Shape73->setAppearance(*Appearance75);

Transform72->addChildren(*Shape73);

CTransform* Transform77 = (CTransform *)(m_pScene.createNode("Transform"));
Transform77->setTranslation(new float[3]{0.2,0,0});
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text79 = (CText *)(m_pScene.createNode("Text"));
Text79->setString(new CString[1]{"Humanoid Sites"}, 1);
CFontStyle* FontStyle80 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle80->setFamily(new CString[1]{"SANS"}, 1);
FontStyle80->setSize(0.1);
Text79->setFontStyle(*FontStyle80);

Shape78->setGeometry(Text79);

CAppearance* Appearance81 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material82 = (CMaterial *)(m_pScene.createNode("Material"));
Material82->setUSE("TextMaterial");
Appearance81->setMaterial(*Material82);

Shape78->setAppearance(*Appearance81);

Transform77->addChildren(*Shape78);

Transform72->addChildren(*Transform77);

Billboard22->addChildren(*Transform72);

CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setTranslation(new float[3]{0,-1.1,0});
CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere85 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere85->setRadius(0.08);
Shape84->setGeometry(Sphere85);

CAppearance* Appearance86 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material87 = (CMaterial *)(m_pScene.createNode("Material"));
Material87->setDEF("HAND_FEET_COLOR");
Material87->setDiffuseColor(new float[3]{0,1,1});
Appearance86->setMaterial(*Material87);

Shape84->setAppearance(*Appearance86);

Transform83->addChildren(*Shape84);

CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setTranslation(new float[3]{0.2,0,0});
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text90 = (CText *)(m_pScene.createNode("Text"));
Text90->setString(new CString[1]{"Hand & Feet Joints"}, 1);
CFontStyle* FontStyle91 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle91->setFamily(new CString[1]{"SANS"}, 1);
FontStyle91->setSize(0.1);
Text90->setFontStyle(*FontStyle91);

Shape89->setGeometry(Text90);

CAppearance* Appearance92 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material93 = (CMaterial *)(m_pScene.createNode("Material"));
Material93->setUSE("TextMaterial");
Appearance92->setMaterial(*Material93);

Shape89->setAppearance(*Appearance92);

Transform88->addChildren(*Shape89);

Transform83->addChildren(*Transform88);

Billboard22->addChildren(*Transform83);

Transform21->addChildren(*Billboard22);

group->addChildren(*Transform21);

CHAnimHumanoid* HAnimHumanoid94 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid94->setName("humanoid");
HAnimHumanoid94->setDEF("hanim_humanoid");
HAnimHumanoid94->setVersion("1.0");
//original HAnimHumanoid info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'
CMetadataSet* MetadataSet95 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet95->setName("HAnimHumanoid.info");
MetadataSet95->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString96 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString96->setName("humanoidVersion");
MetadataString96->setValue(new CString[1]{"Nancy V1.2b"}, 1);
MetadataSet95->setValue(*MetadataString96);

CMetadataString* MetadataString97 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString97->setName("authorEmail");
MetadataString97->setValue(new CString[1]{"cindy@ballreich.net"}, 1);
MetadataSet95->addValue(*MetadataString97);

CMetadataString* MetadataString98 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString98->setName("authorName");
MetadataString98->setValue(new CString[1]{"Cindy Ballreich"}, 1);
MetadataSet95->addValue(*MetadataString98);

CMetadataString* MetadataString99 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString99->setName("copyright");
MetadataString99->setValue(new CString[1]{"1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."}, 1);
MetadataSet95->addValue(*MetadataString99);

CMetadataString* MetadataString100 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString100->setName("creationDate");
MetadataString100->setValue(new CString[1]{"Tue Dec 30 08:30:08 PST 1997"}, 1);
MetadataSet95->addValue(*MetadataString100);

CMetadataString* MetadataString101 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString101->setName("usageRestrictions");
MetadataString101->setValue(new CString[1]{"Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."}, 1);
MetadataSet95->addValue(*MetadataString101);

HAnimHumanoid94->setMetadata(*MetadataSet95);

CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("HumanoidRoot");
HAnimJoint102->setDEF("hanim_HumanoidRoot");
HAnimJoint102->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment103->setName("sacrum");
HAnimSegment103->setDEF("hanim_sacrum");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
Shape105->setDEF("DiamondShape");
CIndexedFaceSet* IndexedFaceSet106 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet106->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet106->setCreaseAngle(0.5);
CCoordinate* Coordinate107 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate107->setDEF("points");
Coordinate107->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet106->setCoord(*Coordinate107);

Shape105->setGeometry(IndexedFaceSet106);

CAppearance* Appearance108 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material109 = (CMaterial *)(m_pScene.createNode("Material"));
Material109->setDEF("ROOT_COLOR");
Material109->setDiffuseColor(new float[3]{1,1,1});
Appearance108->setMaterial(*Material109);

Shape105->setAppearance(*Appearance108);

Transform104->addChildren(*Shape105);

CTransform* Transform110 = (CTransform *)(m_pScene.createNode("Transform"));
Transform110->setTranslation(new float[3]{0,0.01,0});
CBillboard* Billboard111 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text113 = (CText *)(m_pScene.createNode("Text"));
Text113->setString(new CString[1]{"Humanoid Root"}, 1);
CFontStyle* FontStyle114 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle114->setFamily(new CString[1]{"SANS"}, 1);
FontStyle114->setSize(0.01);
FontStyle114->setStyle("ITALIC");
Text113->setFontStyle(*FontStyle114);

Shape112->setGeometry(Text113);

CAppearance* Appearance115 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material116 = (CMaterial *)(m_pScene.createNode("Material"));
Material116->setDiffuseColor(new float[3]{0.039216,1,0.568627});
Appearance115->setMaterial(*Material116);

Shape112->setAppearance(*Appearance115);

Billboard111->addChildren(*Shape112);

Transform110->addChildren(*Billboard111);

Transform104->addChildren(*Transform110);

HAnimSegment103->addChildren(*Transform104);

HAnimJoint102->addChildren(*HAnimSegment103);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("sacroiliac");
HAnimJoint117->setDEF("hanim_sacroiliac");
HAnimJoint117->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint117->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment118->setName("pelvis");
HAnimSegment118->setDEF("hanim_pelvis");
CTransform* Transform119 = (CTransform *)(m_pScene.createNode("Transform"));
Transform119->setDEF("sacroiliacPos");
Transform119->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet121 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet121->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet121->setCreaseAngle(0.5);
CCoordinate* Coordinate122 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate122->setUSE("points");
IndexedFaceSet121->setCoord(*Coordinate122);

Shape120->setGeometry(IndexedFaceSet121);

CAppearance* Appearance123 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material124 = (CMaterial *)(m_pScene.createNode("Material"));
Material124->setUSE("MIN_COLOR");
Appearance123->setMaterial(*Material124);

Shape120->setAppearance(*Appearance123);

Transform119->addChildren(*Shape120);

HAnimSegment118->addChildren(*Transform119);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("r_iliocristale_pt");
HAnimSite125->setDEF("hanim_r_iliocristale_pt");
HAnimSite125->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet127 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet127->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet127->setCreaseAngle(0.5);
CCoordinate* Coordinate128 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate128->setUSE("points");
IndexedFaceSet127->setCoord(*Coordinate128);

Shape126->setGeometry(IndexedFaceSet127);

CAppearance* Appearance129 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material130 = (CMaterial *)(m_pScene.createNode("Material"));
Material130->setUSE("SITE_COLOR");
Appearance129->setMaterial(*Material130);

Shape126->setAppearance(*Appearance129);

HAnimSite125->addChildren(*Shape126);

HAnimSegment118->addChildren(*HAnimSite125);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setName("r_trochanterion_pt");
HAnimSite131->setDEF("hanim_r_trochanterion_pt");
HAnimSite131->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet133 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet133->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet133->setCreaseAngle(0.5);
CCoordinate* Coordinate134 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate134->setUSE("points");
IndexedFaceSet133->setCoord(*Coordinate134);

Shape132->setGeometry(IndexedFaceSet133);

CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setUSE("SITE_COLOR");
Appearance135->setMaterial(*Material136);

Shape132->setAppearance(*Appearance135);

HAnimSite131->addChildren(*Shape132);

HAnimSegment118->addChildren(*HAnimSite131);

CHAnimSite* HAnimSite137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite137->setName("l_iliocristale_pt");
HAnimSite137->setDEF("hanim_l_iliocristale_pt");
HAnimSite137->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet139 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet139->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet139->setCreaseAngle(0.5);
CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setUSE("points");
IndexedFaceSet139->setCoord(*Coordinate140);

Shape138->setGeometry(IndexedFaceSet139);

CAppearance* Appearance141 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material142 = (CMaterial *)(m_pScene.createNode("Material"));
Material142->setUSE("SITE_COLOR");
Appearance141->setMaterial(*Material142);

Shape138->setAppearance(*Appearance141);

HAnimSite137->addChildren(*Shape138);

HAnimSegment118->addChildren(*HAnimSite137);

CHAnimSite* HAnimSite143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite143->setName("l_trochanterion_pt");
HAnimSite143->setDEF("hanim_l_trochanterion_pt");
HAnimSite143->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet145 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet145->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet145->setCreaseAngle(0.5);
CCoordinate* Coordinate146 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate146->setUSE("points");
IndexedFaceSet145->setCoord(*Coordinate146);

Shape144->setGeometry(IndexedFaceSet145);

CAppearance* Appearance147 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material148 = (CMaterial *)(m_pScene.createNode("Material"));
Material148->setUSE("SITE_COLOR");
Appearance147->setMaterial(*Material148);

Shape144->setAppearance(*Appearance147);

HAnimSite143->addChildren(*Shape144);

HAnimSegment118->addChildren(*HAnimSite143);

CHAnimSite* HAnimSite149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite149->setName("r_asis_pt");
HAnimSite149->setDEF("hanim_r_asis_pt");
HAnimSite149->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet151 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet151->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet151->setCreaseAngle(0.5);
CCoordinate* Coordinate152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate152->setUSE("points");
IndexedFaceSet151->setCoord(*Coordinate152);

Shape150->setGeometry(IndexedFaceSet151);

CAppearance* Appearance153 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material154 = (CMaterial *)(m_pScene.createNode("Material"));
Material154->setUSE("SITE_COLOR");
Appearance153->setMaterial(*Material154);

Shape150->setAppearance(*Appearance153);

HAnimSite149->addChildren(*Shape150);

HAnimSegment118->addChildren(*HAnimSite149);

CHAnimSite* HAnimSite155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite155->setName("l_asis_pt");
HAnimSite155->setDEF("hanim_l_asis_pt");
HAnimSite155->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet157 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet157->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet157->setCreaseAngle(0.5);
CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setUSE("points");
IndexedFaceSet157->setCoord(*Coordinate158);

Shape156->setGeometry(IndexedFaceSet157);

CAppearance* Appearance159 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material160 = (CMaterial *)(m_pScene.createNode("Material"));
Material160->setUSE("SITE_COLOR");
Appearance159->setMaterial(*Material160);

Shape156->setAppearance(*Appearance159);

HAnimSite155->addChildren(*Shape156);

HAnimSegment118->addChildren(*HAnimSite155);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setName("r_psis_pt");
HAnimSite161->setDEF("hanim_r_psis_pt");
HAnimSite161->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet163 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet163->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet163->setCreaseAngle(0.5);
CCoordinate* Coordinate164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate164->setUSE("points");
IndexedFaceSet163->setCoord(*Coordinate164);

Shape162->setGeometry(IndexedFaceSet163);

CAppearance* Appearance165 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material166 = (CMaterial *)(m_pScene.createNode("Material"));
Material166->setUSE("SITE_COLOR");
Appearance165->setMaterial(*Material166);

Shape162->setAppearance(*Appearance165);

HAnimSite161->addChildren(*Shape162);

HAnimSegment118->addChildren(*HAnimSite161);

CHAnimSite* HAnimSite167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite167->setName("l_psis_pt");
HAnimSite167->setDEF("hanim_l_psis_pt");
HAnimSite167->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet169 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet169->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet169->setCreaseAngle(0.5);
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setUSE("points");
IndexedFaceSet169->setCoord(*Coordinate170);

Shape168->setGeometry(IndexedFaceSet169);

CAppearance* Appearance171 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material172 = (CMaterial *)(m_pScene.createNode("Material"));
Material172->setUSE("SITE_COLOR");
Appearance171->setMaterial(*Material172);

Shape168->setAppearance(*Appearance171);

HAnimSite167->addChildren(*Shape168);

HAnimSegment118->addChildren(*HAnimSite167);

CHAnimSite* HAnimSite173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite173->setName("crotch_pt");
HAnimSite173->setDEF("hanim_crotch_pt");
HAnimSite173->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet175 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet175->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet175->setCreaseAngle(0.5);
CCoordinate* Coordinate176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate176->setUSE("points");
IndexedFaceSet175->setCoord(*Coordinate176);

Shape174->setGeometry(IndexedFaceSet175);

CAppearance* Appearance177 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material178 = (CMaterial *)(m_pScene.createNode("Material"));
Material178->setUSE("SITE_COLOR");
Appearance177->setMaterial(*Material178);

Shape174->setAppearance(*Appearance177);

HAnimSite173->addChildren(*Shape174);

HAnimSegment118->addChildren(*HAnimSite173);

HAnimJoint117->addChildren(*HAnimSegment118);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setName("l_hip");
HAnimJoint179->setDEF("hanim_l_hip");
HAnimJoint179->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint179->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint179->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment180 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment180->setName("l_thigh");
HAnimSegment180->setDEF("hanim_l_thigh");
CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform181->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape182 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet183 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet183->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet183->setCreaseAngle(0.5);
CCoordinate* Coordinate184 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate184->setUSE("points");
IndexedFaceSet183->setCoord(*Coordinate184);

Shape182->setGeometry(IndexedFaceSet183);

CAppearance* Appearance185 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material186 = (CMaterial *)(m_pScene.createNode("Material"));
Material186->setUSE("MIN_COLOR");
Appearance185->setMaterial(*Material186);

Shape182->setAppearance(*Appearance185);

Transform181->addChildren(*Shape182);

HAnimSegment180->addChildren(*Transform181);

CHAnimSite* HAnimSite187 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite187->setName("l_knee_crease_pt");
HAnimSite187->setDEF("hanim_l_knee_crease_pt");
HAnimSite187->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet189 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet189->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet189->setCreaseAngle(0.5);
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setUSE("points");
IndexedFaceSet189->setCoord(*Coordinate190);

Shape188->setGeometry(IndexedFaceSet189);

CAppearance* Appearance191 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material192 = (CMaterial *)(m_pScene.createNode("Material"));
Material192->setUSE("SITE_COLOR");
Appearance191->setMaterial(*Material192);

Shape188->setAppearance(*Appearance191);

HAnimSite187->addChildren(*Shape188);

HAnimSegment180->addChildren(*HAnimSite187);

CHAnimSite* HAnimSite193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite193->setName("l_femoral_lateral_epicn_pt");
HAnimSite193->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite193->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet195 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet195->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet195->setCreaseAngle(0.5);
CCoordinate* Coordinate196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate196->setUSE("points");
IndexedFaceSet195->setCoord(*Coordinate196);

Shape194->setGeometry(IndexedFaceSet195);

CAppearance* Appearance197 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material198 = (CMaterial *)(m_pScene.createNode("Material"));
Material198->setUSE("SITE_COLOR");
Appearance197->setMaterial(*Material198);

Shape194->setAppearance(*Appearance197);

HAnimSite193->addChildren(*Shape194);

HAnimSegment180->addChildren(*HAnimSite193);

CHAnimSite* HAnimSite199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite199->setName("l_femoral_medial_epicn_pt");
HAnimSite199->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite199->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet201 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet201->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet201->setCreaseAngle(0.5);
CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setUSE("points");
IndexedFaceSet201->setCoord(*Coordinate202);

Shape200->setGeometry(IndexedFaceSet201);

CAppearance* Appearance203 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material204 = (CMaterial *)(m_pScene.createNode("Material"));
Material204->setUSE("SITE_COLOR");
Appearance203->setMaterial(*Material204);

Shape200->setAppearance(*Appearance203);

HAnimSite199->addChildren(*Shape200);

HAnimSegment180->addChildren(*HAnimSite199);

HAnimJoint179->addChildren(*HAnimSegment180);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setName("l_knee");
HAnimJoint205->setDEF("hanim_l_knee");
HAnimJoint205->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint205->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint205->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment206->setName("l_calf");
HAnimSegment206->setDEF("hanim_l_calf");
CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
Transform207->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet209 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet209->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet209->setCreaseAngle(0.5);
CCoordinate* Coordinate210 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate210->setUSE("points");
IndexedFaceSet209->setCoord(*Coordinate210);

Shape208->setGeometry(IndexedFaceSet209);

CAppearance* Appearance211 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material212 = (CMaterial *)(m_pScene.createNode("Material"));
Material212->setUSE("MIN_COLOR");
Appearance211->setMaterial(*Material212);

Shape208->setAppearance(*Appearance211);

Transform207->addChildren(*Shape208);

HAnimSegment206->addChildren(*Transform207);

HAnimJoint205->addChildren(*HAnimSegment206);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("l_ankle");
HAnimJoint213->setDEF("hanim_l_ankle");
HAnimJoint213->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint213->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint213->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setName("l_hindfoot");
HAnimSegment214->setDEF("hanim_l_hindfoot");
CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet217 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet217->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet217->setCreaseAngle(0.5);
CCoordinate* Coordinate218 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate218->setUSE("points");
IndexedFaceSet217->setCoord(*Coordinate218);

Shape216->setGeometry(IndexedFaceSet217);

CAppearance* Appearance219 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material220 = (CMaterial *)(m_pScene.createNode("Material"));
Material220->setUSE("MIN_COLOR");
Appearance219->setMaterial(*Material220);

Shape216->setAppearance(*Appearance219);

Transform215->addChildren(*Shape216);

HAnimSegment214->addChildren(*Transform215);

CHAnimSite* HAnimSite221 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite221->setName("l_lateral_malleolus_pt");
HAnimSite221->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite221->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet223 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet223->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet223->setCreaseAngle(0.5);
CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setUSE("points");
IndexedFaceSet223->setCoord(*Coordinate224);

Shape222->setGeometry(IndexedFaceSet223);

CAppearance* Appearance225 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material226 = (CMaterial *)(m_pScene.createNode("Material"));
Material226->setUSE("HAND_FEET_COLOR");
Appearance225->setMaterial(*Material226);

Shape222->setAppearance(*Appearance225);

HAnimSite221->addChildren(*Shape222);

HAnimSegment214->addChildren(*HAnimSite221);

CHAnimSite* HAnimSite227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite227->setName("l_medial_malleolus_pt");
HAnimSite227->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite227->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet229 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet229->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet229->setCreaseAngle(0.5);
CCoordinate* Coordinate230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate230->setUSE("points");
IndexedFaceSet229->setCoord(*Coordinate230);

Shape228->setGeometry(IndexedFaceSet229);

CAppearance* Appearance231 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material232 = (CMaterial *)(m_pScene.createNode("Material"));
Material232->setUSE("HAND_FEET_COLOR");
Appearance231->setMaterial(*Material232);

Shape228->setAppearance(*Appearance231);

HAnimSite227->addChildren(*Shape228);

HAnimSegment214->addChildren(*HAnimSite227);

CHAnimSite* HAnimSite233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite233->setName("l_sphyrion_pt");
HAnimSite233->setDEF("hanim_l_sphyrion_pt");
HAnimSite233->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet235 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet235->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet235->setCreaseAngle(0.5);
CCoordinate* Coordinate236 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate236->setUSE("points");
IndexedFaceSet235->setCoord(*Coordinate236);

Shape234->setGeometry(IndexedFaceSet235);

CAppearance* Appearance237 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material238 = (CMaterial *)(m_pScene.createNode("Material"));
Material238->setUSE("HAND_FEET_COLOR");
Appearance237->setMaterial(*Material238);

Shape234->setAppearance(*Appearance237);

HAnimSite233->addChildren(*Shape234);

HAnimSegment214->addChildren(*HAnimSite233);

CHAnimSite* HAnimSite239 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite239->setName("l_calcaneous_post_pt");
HAnimSite239->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite239->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CShape* Shape240 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet241 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet241->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet241->setCreaseAngle(0.5);
CCoordinate* Coordinate242 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate242->setUSE("points");
IndexedFaceSet241->setCoord(*Coordinate242);

Shape240->setGeometry(IndexedFaceSet241);

CAppearance* Appearance243 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material244 = (CMaterial *)(m_pScene.createNode("Material"));
Material244->setUSE("HAND_FEET_COLOR");
Appearance243->setMaterial(*Material244);

Shape240->setAppearance(*Appearance243);

HAnimSite239->addChildren(*Shape240);

HAnimSegment214->addChildren(*HAnimSite239);

HAnimJoint213->addChildren(*HAnimSegment214);

CHAnimJoint* HAnimJoint245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint245->setName("l_subtalar");
HAnimJoint245->setDEF("hanim_l_subtalar");
HAnimJoint245->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint245->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint245->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setName("midproximal");
HAnimSegment246->setDEF("hanim_midproximal");
CTransform* Transform247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform247->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet249 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet249->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet249->setCreaseAngle(0.5);
CCoordinate* Coordinate250 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate250->setUSE("points");
IndexedFaceSet249->setCoord(*Coordinate250);

Shape248->setGeometry(IndexedFaceSet249);

CAppearance* Appearance251 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material252 = (CMaterial *)(m_pScene.createNode("Material"));
Material252->setUSE("MIN_COLOR");
Appearance251->setMaterial(*Material252);

Shape248->setAppearance(*Appearance251);

Transform247->addChildren(*Shape248);

HAnimSegment246->addChildren(*Transform247);

HAnimJoint245->addChildren(*HAnimSegment246);

CHAnimJoint* HAnimJoint253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint253->setName("l_midtarsal");
HAnimJoint253->setDEF("hanim_l_midtarsal");
HAnimJoint253->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint253->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint253->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment254 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment254->setName("l_middistal");
HAnimSegment254->setDEF("hanim_l_middistal");
CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet257 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet257->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet257->setCreaseAngle(0.5);
CCoordinate* Coordinate258 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate258->setUSE("points");
IndexedFaceSet257->setCoord(*Coordinate258);

Shape256->setGeometry(IndexedFaceSet257);

CAppearance* Appearance259 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material260 = (CMaterial *)(m_pScene.createNode("Material"));
Material260->setUSE("JOINT_COLOR");
Appearance259->setMaterial(*Material260);

Shape256->setAppearance(*Appearance259);

Transform255->addChildren(*Shape256);

HAnimSegment254->addChildren(*Transform255);

CHAnimSite* HAnimSite261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite261->setName("l_middistal_tip");
HAnimSite261->setDEF("hanim_l_middistal_tip");
HAnimSite261->setTranslation(new float[3]{0.1354,0.0016,0.1476});
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet263 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet263->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet263->setCreaseAngle(0.5);
CCoordinate* Coordinate264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate264->setUSE("points");
IndexedFaceSet263->setCoord(*Coordinate264);

Shape262->setGeometry(IndexedFaceSet263);

CAppearance* Appearance265 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material266 = (CMaterial *)(m_pScene.createNode("Material"));
Material266->setUSE("HAND_FEET_COLOR");
Appearance265->setMaterial(*Material266);

Shape262->setAppearance(*Appearance265);

HAnimSite261->addChildren(*Shape262);

HAnimSegment254->addChildren(*HAnimSite261);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setName("l_metatarsal_pha1_pt");
HAnimSite267->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite267->setTranslation(new float[3]{0.0816,0.0232,0.0106});
CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet269 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet269->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet269->setCreaseAngle(0.5);
CCoordinate* Coordinate270 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate270->setUSE("points");
IndexedFaceSet269->setCoord(*Coordinate270);

Shape268->setGeometry(IndexedFaceSet269);

CAppearance* Appearance271 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material272 = (CMaterial *)(m_pScene.createNode("Material"));
Material272->setUSE("HAND_FEET_COLOR");
Appearance271->setMaterial(*Material272);

Shape268->setAppearance(*Appearance271);

HAnimSite267->addChildren(*Shape268);

HAnimSegment254->addChildren(*HAnimSite267);

HAnimJoint253->addChildren(*HAnimSegment254);

CHAnimJoint* HAnimJoint273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint273->setName("l_metatarsal");
HAnimJoint273->setDEF("hanim_l_metatarsal");
HAnimJoint273->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint273->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint273->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment274->setName("l_forefoot");
HAnimSegment274->setDEF("hanim_l_forefoot");
CTransform* Transform275 = (CTransform *)(m_pScene.createNode("Transform"));
Transform275->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet277 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet277->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet277->setCreaseAngle(0.5);
CCoordinate* Coordinate278 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate278->setUSE("points");
IndexedFaceSet277->setCoord(*Coordinate278);

Shape276->setGeometry(IndexedFaceSet277);

CAppearance* Appearance279 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material280 = (CMaterial *)(m_pScene.createNode("Material"));
Material280->setUSE("JOINT_COLOR");
Appearance279->setMaterial(*Material280);

Shape276->setAppearance(*Appearance279);

Transform275->addChildren(*Shape276);

HAnimSegment274->addChildren(*Transform275);

CHAnimSite* HAnimSite281 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite281->setName("l_forefoot_tip");
HAnimSite281->setDEF("hanim_l_forefoot_tip");
HAnimSite281->setTranslation(new float[3]{0.1354,0.0016,0.1476});
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet283 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet283->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet283->setCreaseAngle(0.5);
CCoordinate* Coordinate284 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate284->setUSE("points");
IndexedFaceSet283->setCoord(*Coordinate284);

Shape282->setGeometry(IndexedFaceSet283);

CAppearance* Appearance285 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material286 = (CMaterial *)(m_pScene.createNode("Material"));
Material286->setUSE("HAND_FEET_COLOR");
Appearance285->setMaterial(*Material286);

Shape282->setAppearance(*Appearance285);

HAnimSite281->addChildren(*Shape282);

HAnimSegment274->addChildren(*HAnimSite281);

CHAnimSite* HAnimSite287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite287->setName("l_metatarsal_pha5_pt");
HAnimSite287->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite287->setTranslation(new float[3]{0.1825,0.007,0.0928});
//# CAESAR Feature Point #66
CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet289 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet289->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet289->setCreaseAngle(0.5);
CCoordinate* Coordinate290 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate290->setUSE("points");
IndexedFaceSet289->setCoord(*Coordinate290);

Shape288->setGeometry(IndexedFaceSet289);

CAppearance* Appearance291 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material292 = (CMaterial *)(m_pScene.createNode("Material"));
Material292->setUSE("HAND_FEET_COLOR");
Appearance291->setMaterial(*Material292);

Shape288->setAppearance(*Appearance291);

HAnimSite287->addChildren(*Shape288);

HAnimSegment274->addChildren(*HAnimSite287);

CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setName("l_digit2_pt");
HAnimSite293->setDEF("hanim_l_digit2_pt");
HAnimSite293->setTranslation(new float[3]{0.1195,0.0079,0.1433});
//# CAESAR Feature Point #72
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet295 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet295->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet295->setCreaseAngle(0.5);
CCoordinate* Coordinate296 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate296->setUSE("points");
IndexedFaceSet295->setCoord(*Coordinate296);

Shape294->setGeometry(IndexedFaceSet295);

CAppearance* Appearance297 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material298 = (CMaterial *)(m_pScene.createNode("Material"));
Material298->setUSE("HAND_FEET_COLOR");
Appearance297->setMaterial(*Material298);

Shape294->setAppearance(*Appearance297);

HAnimSite293->addChildren(*Shape294);

HAnimSegment274->addChildren(*HAnimSite293);

HAnimJoint273->addChildren(*HAnimSegment274);

HAnimJoint253->addChildren(*HAnimJoint273);

HAnimJoint245->addChildren(*HAnimJoint253);

HAnimJoint213->addChildren(*HAnimJoint245);

HAnimJoint205->addChildren(*HAnimJoint213);

HAnimJoint179->addChildren(*HAnimJoint205);

HAnimJoint117->addChildren(*HAnimJoint179);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setName("r_hip");
HAnimJoint299->setDEF("hanim_r_hip");
HAnimJoint299->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint299->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint299->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setName("r_thigh");
HAnimSegment300->setDEF("hanim_r_thigh");
CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
Transform301->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet303 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet303->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet303->setCreaseAngle(0.5);
CCoordinate* Coordinate304 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate304->setUSE("points");
IndexedFaceSet303->setCoord(*Coordinate304);

Shape302->setGeometry(IndexedFaceSet303);

CAppearance* Appearance305 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material306 = (CMaterial *)(m_pScene.createNode("Material"));
Material306->setUSE("MIN_COLOR");
Appearance305->setMaterial(*Material306);

Shape302->setAppearance(*Appearance305);

Transform301->addChildren(*Shape302);

HAnimSegment300->addChildren(*Transform301);

CHAnimSite* HAnimSite307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite307->setName("r_knee_crease_pt");
HAnimSite307->setDEF("hanim_r_knee_crease_pt");
HAnimSite307->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CShape* Shape308 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet309 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet309->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet309->setCreaseAngle(0.5);
CCoordinate* Coordinate310 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate310->setUSE("points");
IndexedFaceSet309->setCoord(*Coordinate310);

Shape308->setGeometry(IndexedFaceSet309);

CAppearance* Appearance311 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material312 = (CMaterial *)(m_pScene.createNode("Material"));
Material312->setUSE("SITE_COLOR");
Appearance311->setMaterial(*Material312);

Shape308->setAppearance(*Appearance311);

HAnimSite307->addChildren(*Shape308);

HAnimSegment300->addChildren(*HAnimSite307);

CHAnimSite* HAnimSite313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite313->setName("r_femoral_lateral_epicn_pt");
HAnimSite313->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite313->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CShape* Shape314 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet315 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet315->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet315->setCreaseAngle(0.5);
CCoordinate* Coordinate316 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate316->setUSE("points");
IndexedFaceSet315->setCoord(*Coordinate316);

Shape314->setGeometry(IndexedFaceSet315);

CAppearance* Appearance317 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material318 = (CMaterial *)(m_pScene.createNode("Material"));
Material318->setUSE("SITE_COLOR");
Appearance317->setMaterial(*Material318);

Shape314->setAppearance(*Appearance317);

HAnimSite313->addChildren(*Shape314);

HAnimSegment300->addChildren(*HAnimSite313);

CHAnimSite* HAnimSite319 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite319->setName("r_femoral_medial_epicn_pt");
HAnimSite319->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite319->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet321 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet321->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet321->setCreaseAngle(0.5);
CCoordinate* Coordinate322 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate322->setUSE("points");
IndexedFaceSet321->setCoord(*Coordinate322);

Shape320->setGeometry(IndexedFaceSet321);

CAppearance* Appearance323 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material324 = (CMaterial *)(m_pScene.createNode("Material"));
Material324->setUSE("SITE_COLOR");
Appearance323->setMaterial(*Material324);

Shape320->setAppearance(*Appearance323);

HAnimSite319->addChildren(*Shape320);

HAnimSegment300->addChildren(*HAnimSite319);

HAnimJoint299->addChildren(*HAnimSegment300);

CHAnimJoint* HAnimJoint325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint325->setName("r_knee");
HAnimJoint325->setDEF("hanim_r_knee");
HAnimJoint325->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint325->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint325->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment326->setName("r_calf");
HAnimSegment326->setDEF("hanim_r_calf");
CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform327->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet329 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet329->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet329->setCreaseAngle(0.5);
CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setUSE("points");
IndexedFaceSet329->setCoord(*Coordinate330);

Shape328->setGeometry(IndexedFaceSet329);

CAppearance* Appearance331 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material332 = (CMaterial *)(m_pScene.createNode("Material"));
Material332->setUSE("SITE_COLOR");
Appearance331->setMaterial(*Material332);

Shape328->setAppearance(*Appearance331);

Transform327->addChildren(*Shape328);

HAnimSegment326->addChildren(*Transform327);

HAnimJoint325->addChildren(*HAnimSegment326);

CHAnimJoint* HAnimJoint333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint333->setName("r_ankle");
HAnimJoint333->setDEF("hanim_r_ankle");
HAnimJoint333->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint333->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint333->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment334->setName("r_hindfoot");
HAnimSegment334->setDEF("hanim_r_hindfoot");
CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
Transform335->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet337 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet337->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet337->setCreaseAngle(0.5);
CCoordinate* Coordinate338 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate338->setUSE("points");
IndexedFaceSet337->setCoord(*Coordinate338);

Shape336->setGeometry(IndexedFaceSet337);

CAppearance* Appearance339 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material340 = (CMaterial *)(m_pScene.createNode("Material"));
Material340->setUSE("MIN_COLOR");
Appearance339->setMaterial(*Material340);

Shape336->setAppearance(*Appearance339);

Transform335->addChildren(*Shape336);

HAnimSegment334->addChildren(*Transform335);

CHAnimSite* HAnimSite341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite341->setName("r_lateral_malleolus_pt");
HAnimSite341->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite341->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CShape* Shape342 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet343 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet343->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet343->setCreaseAngle(0.5);
CCoordinate* Coordinate344 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate344->setUSE("points");
IndexedFaceSet343->setCoord(*Coordinate344);

Shape342->setGeometry(IndexedFaceSet343);

CAppearance* Appearance345 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material346 = (CMaterial *)(m_pScene.createNode("Material"));
Material346->setUSE("HAND_FEET_COLOR");
Appearance345->setMaterial(*Material346);

Shape342->setAppearance(*Appearance345);

HAnimSite341->addChildren(*Shape342);

HAnimSegment334->addChildren(*HAnimSite341);

CHAnimSite* HAnimSite347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite347->setName("r_medial_malleolus_pt");
HAnimSite347->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite347->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CShape* Shape348 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet349 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet349->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet349->setCreaseAngle(0.5);
CCoordinate* Coordinate350 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate350->setUSE("points");
IndexedFaceSet349->setCoord(*Coordinate350);

Shape348->setGeometry(IndexedFaceSet349);

CAppearance* Appearance351 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material352 = (CMaterial *)(m_pScene.createNode("Material"));
Material352->setUSE("HAND_FEET_COLOR");
Appearance351->setMaterial(*Material352);

Shape348->setAppearance(*Appearance351);

HAnimSite347->addChildren(*Shape348);

HAnimSegment334->addChildren(*HAnimSite347);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setName("r_sphyrion_pt");
HAnimSite353->setDEF("hanim_r_sphyrion_pt");
HAnimSite353->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet355 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet355->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet355->setCreaseAngle(0.5);
CCoordinate* Coordinate356 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate356->setUSE("points");
IndexedFaceSet355->setCoord(*Coordinate356);

Shape354->setGeometry(IndexedFaceSet355);

CAppearance* Appearance357 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material358 = (CMaterial *)(m_pScene.createNode("Material"));
Material358->setUSE("HAND_FEET_COLOR");
Appearance357->setMaterial(*Material358);

Shape354->setAppearance(*Appearance357);

HAnimSite353->addChildren(*Shape354);

HAnimSegment334->addChildren(*HAnimSite353);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setName("r_calcaneous_post_pt");
HAnimSite359->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite359->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet361 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet361->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet361->setCreaseAngle(0.5);
CCoordinate* Coordinate362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate362->setUSE("points");
IndexedFaceSet361->setCoord(*Coordinate362);

Shape360->setGeometry(IndexedFaceSet361);

CAppearance* Appearance363 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material364 = (CMaterial *)(m_pScene.createNode("Material"));
Material364->setUSE("HAND_FEET_COLOR");
Appearance363->setMaterial(*Material364);

Shape360->setAppearance(*Appearance363);

HAnimSite359->addChildren(*Shape360);

HAnimSegment334->addChildren(*HAnimSite359);

HAnimJoint333->addChildren(*HAnimSegment334);

CHAnimJoint* HAnimJoint365 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint365->setName("r_midtarsal");
HAnimJoint365->setDEF("hanim_r_midtarsal");
HAnimJoint365->setCenter(new float[3]{-0.0801,0,0.0368});
HAnimJoint365->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint365->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment366 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment366->setName("r_middistal");
HAnimSegment366->setDEF("hanim_r_middistal");
CTransform* Transform367 = (CTransform *)(m_pScene.createNode("Transform"));
Transform367->setTranslation(new float[3]{-0.0801,0,0.0368});
CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet369 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet369->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet369->setCreaseAngle(0.5);
CCoordinate* Coordinate370 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate370->setUSE("points");
IndexedFaceSet369->setCoord(*Coordinate370);

Shape368->setGeometry(IndexedFaceSet369);

CAppearance* Appearance371 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material372 = (CMaterial *)(m_pScene.createNode("Material"));
Material372->setUSE("JOINT_COLOR");
Appearance371->setMaterial(*Material372);

Shape368->setAppearance(*Appearance371);

Transform367->addChildren(*Shape368);

HAnimSegment366->addChildren(*Transform367);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setName("r_middistal_tip");
HAnimSite373->setDEF("hanim_r_middistal_tip");
HAnimSite373->setTranslation(new float[3]{-0.1043,-0.0227,0.145});
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet375 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet375->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet375->setCreaseAngle(0.5);
CCoordinate* Coordinate376 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate376->setUSE("points");
IndexedFaceSet375->setCoord(*Coordinate376);

Shape374->setGeometry(IndexedFaceSet375);

CAppearance* Appearance377 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material378 = (CMaterial *)(m_pScene.createNode("Material"));
Material378->setUSE("HAND_FEET_COLOR");
Appearance377->setMaterial(*Material378);

Shape374->setAppearance(*Appearance377);

HAnimSite373->addChildren(*Shape374);

HAnimSegment366->addChildren(*HAnimSite373);

CHAnimSite* HAnimSite379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite379->setName("r_metatarsal_pha5_pt");
HAnimSite379->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite379->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
CShape* Shape380 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet381 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet381->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet381->setCreaseAngle(0.5);
CCoordinate* Coordinate382 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate382->setUSE("points");
IndexedFaceSet381->setCoord(*Coordinate382);

Shape380->setGeometry(IndexedFaceSet381);

CAppearance* Appearance383 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material384 = (CMaterial *)(m_pScene.createNode("Material"));
Material384->setUSE("HAND_FEET_COLOR");
Appearance383->setMaterial(*Material384);

Shape380->setAppearance(*Appearance383);

HAnimSite379->addChildren(*Shape380);

HAnimSegment366->addChildren(*HAnimSite379);

CHAnimSite* HAnimSite385 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite385->setName("r_metatarsal_pha1_pt");
HAnimSite385->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite385->setTranslation(new float[3]{-0.0521,0.026,0.0127});
CShape* Shape386 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet387 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet387->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet387->setCreaseAngle(0.5);
CCoordinate* Coordinate388 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate388->setUSE("points");
IndexedFaceSet387->setCoord(*Coordinate388);

Shape386->setGeometry(IndexedFaceSet387);

CAppearance* Appearance389 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material390 = (CMaterial *)(m_pScene.createNode("Material"));
Material390->setUSE("HAND_FEET_COLOR");
Appearance389->setMaterial(*Material390);

Shape386->setAppearance(*Appearance389);

HAnimSite385->addChildren(*Shape386);

HAnimSegment366->addChildren(*HAnimSite385);

CHAnimSite* HAnimSite391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite391->setName("r_digit2_pt");
HAnimSite391->setDEF("hanim_r_digit2_pt");
HAnimSite391->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CShape* Shape392 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet393 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet393->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet393->setCreaseAngle(0.5);
CCoordinate* Coordinate394 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate394->setUSE("points");
IndexedFaceSet393->setCoord(*Coordinate394);

Shape392->setGeometry(IndexedFaceSet393);

CAppearance* Appearance395 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material396 = (CMaterial *)(m_pScene.createNode("Material"));
Material396->setUSE("HAND_FEET_COLOR");
Appearance395->setMaterial(*Material396);

Shape392->setAppearance(*Appearance395);

HAnimSite391->addChildren(*Shape392);

HAnimSegment366->addChildren(*HAnimSite391);

HAnimJoint365->addChildren(*HAnimSegment366);

HAnimJoint333->addChildren(*HAnimJoint365);

HAnimJoint325->addChildren(*HAnimJoint333);

HAnimJoint299->addChildren(*HAnimJoint325);

HAnimJoint117->addChildren(*HAnimJoint299);

HAnimJoint102->addChildren(*HAnimJoint117);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setName("vl5");
HAnimJoint397->setDEF("hanim_vl5");
HAnimJoint397->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint397->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint397->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment398 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment398->setName("l5");
HAnimSegment398->setDEF("hanim_l5");
CTransform* Transform399 = (CTransform *)(m_pScene.createNode("Transform"));
Transform399->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet401 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet401->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet401->setCreaseAngle(0.5);
CCoordinate* Coordinate402 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate402->setUSE("points");
IndexedFaceSet401->setCoord(*Coordinate402);

Shape400->setGeometry(IndexedFaceSet401);

CAppearance* Appearance403 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material404 = (CMaterial *)(m_pScene.createNode("Material"));
Material404->setUSE("REC_SPINAL_COLOR");
Appearance403->setMaterial(*Material404);

Shape400->setAppearance(*Appearance403);

Transform399->addChildren(*Shape400);

HAnimSegment398->addChildren(*Transform399);

HAnimJoint397->addChildren(*HAnimSegment398);

CHAnimJoint* HAnimJoint405 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint405->setName("vl4");
HAnimJoint405->setDEF("hanim_vl4");
HAnimJoint405->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint405->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint405->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment406 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment406->setName("l4");
HAnimSegment406->setDEF("hanim_l4");
CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform407->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet409 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet409->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet409->setCreaseAngle(0.5);
CCoordinate* Coordinate410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate410->setUSE("points");
IndexedFaceSet409->setCoord(*Coordinate410);

Shape408->setGeometry(IndexedFaceSet409);

CAppearance* Appearance411 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material412 = (CMaterial *)(m_pScene.createNode("Material"));
Material412->setUSE("SPINAL_COLOR");
Appearance411->setMaterial(*Material412);

Shape408->setAppearance(*Appearance411);

Transform407->addChildren(*Shape408);

HAnimSegment406->addChildren(*Transform407);

HAnimJoint405->addChildren(*HAnimSegment406);

CHAnimJoint* HAnimJoint413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint413->setName("vl3");
HAnimJoint413->setDEF("hanim_vl3");
HAnimJoint413->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint413->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint413->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment414->setName("l3");
HAnimSegment414->setDEF("hanim_l3");
CTransform* Transform415 = (CTransform *)(m_pScene.createNode("Transform"));
Transform415->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet417 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet417->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet417->setCreaseAngle(0.5);
CCoordinate* Coordinate418 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate418->setUSE("points");
IndexedFaceSet417->setCoord(*Coordinate418);

Shape416->setGeometry(IndexedFaceSet417);

CAppearance* Appearance419 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material420 = (CMaterial *)(m_pScene.createNode("Material"));
Material420->setUSE("REC_SPINAL_COLOR");
Appearance419->setMaterial(*Material420);

Shape416->setAppearance(*Appearance419);

Transform415->addChildren(*Shape416);

HAnimSegment414->addChildren(*Transform415);

HAnimJoint413->addChildren(*HAnimSegment414);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setName("vl2");
HAnimJoint421->setDEF("hanim_vl2");
HAnimJoint421->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint421->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint421->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment422 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment422->setName("l2");
HAnimSegment422->setDEF("hanim_l2");
CTransform* Transform423 = (CTransform *)(m_pScene.createNode("Transform"));
Transform423->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet425 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet425->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet425->setCreaseAngle(0.5);
CCoordinate* Coordinate426 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate426->setUSE("points");
IndexedFaceSet425->setCoord(*Coordinate426);

Shape424->setGeometry(IndexedFaceSet425);

CAppearance* Appearance427 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material428 = (CMaterial *)(m_pScene.createNode("Material"));
Material428->setUSE("SPINAL_COLOR");
Appearance427->setMaterial(*Material428);

Shape424->setAppearance(*Appearance427);

Transform423->addChildren(*Shape424);

HAnimSegment422->addChildren(*Transform423);

HAnimJoint421->addChildren(*HAnimSegment422);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setName("vl1");
HAnimJoint429->setDEF("hanim_vl1");
HAnimJoint429->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint429->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint429->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment430 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment430->setName("l1");
HAnimSegment430->setDEF("hanim_l1");
CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
Transform431->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet433 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet433->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet433->setCreaseAngle(0.5);
CCoordinate* Coordinate434 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate434->setUSE("points");
IndexedFaceSet433->setCoord(*Coordinate434);

Shape432->setGeometry(IndexedFaceSet433);

CAppearance* Appearance435 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material436 = (CMaterial *)(m_pScene.createNode("Material"));
Material436->setUSE("REC_SPINAL_COLOR");
Appearance435->setMaterial(*Material436);

Shape432->setAppearance(*Appearance435);

Transform431->addChildren(*Shape432);

HAnimSegment430->addChildren(*Transform431);

HAnimJoint429->addChildren(*HAnimSegment430);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setName("vt12");
HAnimJoint437->setDEF("hanim_vt12");
HAnimJoint437->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint437->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint437->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment438->setName("t12");
HAnimSegment438->setDEF("hanim_t12");
CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet441 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet441->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet441->setCreaseAngle(0.5);
CCoordinate* Coordinate442 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate442->setUSE("points");
IndexedFaceSet441->setCoord(*Coordinate442);

Shape440->setGeometry(IndexedFaceSet441);

CAppearance* Appearance443 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material444 = (CMaterial *)(m_pScene.createNode("Material"));
Material444->setUSE("SPINAL_COLOR");
Appearance443->setMaterial(*Material444);

Shape440->setAppearance(*Appearance443);

Transform439->addChildren(*Shape440);

HAnimSegment438->addChildren(*Transform439);

HAnimJoint437->addChildren(*HAnimSegment438);

CHAnimJoint* HAnimJoint445 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint445->setName("vt11");
HAnimJoint445->setDEF("hanim_vt11");
HAnimJoint445->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint445->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint445->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment446 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment446->setName("t11");
HAnimSegment446->setDEF("hanim_t11");
CTransform* Transform447 = (CTransform *)(m_pScene.createNode("Transform"));
Transform447->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet449 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet449->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet449->setCreaseAngle(0.5);
CCoordinate* Coordinate450 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate450->setUSE("points");
IndexedFaceSet449->setCoord(*Coordinate450);

Shape448->setGeometry(IndexedFaceSet449);

CAppearance* Appearance451 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material452 = (CMaterial *)(m_pScene.createNode("Material"));
Material452->setUSE("SPINAL_COLOR");
Appearance451->setMaterial(*Material452);

Shape448->setAppearance(*Appearance451);

Transform447->addChildren(*Shape448);

HAnimSegment446->addChildren(*Transform447);

HAnimJoint445->addChildren(*HAnimSegment446);

CHAnimJoint* HAnimJoint453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint453->setName("vt10");
HAnimJoint453->setDEF("hanim_vt10");
HAnimJoint453->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint453->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint453->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment454->setName("t10");
HAnimSegment454->setDEF("hanim_t10");
CTransform* Transform455 = (CTransform *)(m_pScene.createNode("Transform"));
Transform455->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet457 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet457->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet457->setCreaseAngle(0.5);
CCoordinate* Coordinate458 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate458->setUSE("points");
IndexedFaceSet457->setCoord(*Coordinate458);

Shape456->setGeometry(IndexedFaceSet457);

CAppearance* Appearance459 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material460 = (CMaterial *)(m_pScene.createNode("Material"));
Material460->setUSE("REC_SPINAL_COLOR");
Appearance459->setMaterial(*Material460);

Shape456->setAppearance(*Appearance459);

Transform455->addChildren(*Shape456);

HAnimSegment454->addChildren(*Transform455);

HAnimJoint453->addChildren(*HAnimSegment454);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setName("vt9");
HAnimJoint461->setDEF("hanim_vt9");
HAnimJoint461->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint461->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint461->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setName("t9");
HAnimSegment462->setDEF("hanim_t9");
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet465 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet465->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet465->setCreaseAngle(0.5);
CCoordinate* Coordinate466 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate466->setUSE("points");
IndexedFaceSet465->setCoord(*Coordinate466);

Shape464->setGeometry(IndexedFaceSet465);

CAppearance* Appearance467 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material468 = (CMaterial *)(m_pScene.createNode("Material"));
Material468->setUSE("SPINAL_COLOR");
Appearance467->setMaterial(*Material468);

Shape464->setAppearance(*Appearance467);

Transform463->addChildren(*Shape464);

HAnimSegment462->addChildren(*Transform463);

HAnimJoint461->addChildren(*HAnimSegment462);

CHAnimJoint* HAnimJoint469 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint469->setName("vt8");
HAnimJoint469->setDEF("hanim_vt8");
HAnimJoint469->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint469->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint469->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setName("t8");
HAnimSegment470->setDEF("hanim_t8");
CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform471->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet473 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet473->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet473->setCreaseAngle(0.5);
CCoordinate* Coordinate474 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate474->setUSE("points");
IndexedFaceSet473->setCoord(*Coordinate474);

Shape472->setGeometry(IndexedFaceSet473);

CAppearance* Appearance475 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material476 = (CMaterial *)(m_pScene.createNode("Material"));
Material476->setUSE("SPINAL_COLOR");
Appearance475->setMaterial(*Material476);

Shape472->setAppearance(*Appearance475);

Transform471->addChildren(*Shape472);

HAnimSegment470->addChildren(*Transform471);

HAnimJoint469->addChildren(*HAnimSegment470);

CHAnimJoint* HAnimJoint477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint477->setName("vt7");
HAnimJoint477->setDEF("hanim_vt7");
HAnimJoint477->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint477->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint477->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setName("t7");
HAnimSegment478->setDEF("hanim_t7");
CTransform* Transform479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform479->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet481 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet481->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet481->setCreaseAngle(0.5);
CCoordinate* Coordinate482 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate482->setUSE("points");
IndexedFaceSet481->setCoord(*Coordinate482);

Shape480->setGeometry(IndexedFaceSet481);

CAppearance* Appearance483 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material484 = (CMaterial *)(m_pScene.createNode("Material"));
Material484->setUSE("SPINAL_COLOR");
Appearance483->setMaterial(*Material484);

Shape480->setAppearance(*Appearance483);

Transform479->addChildren(*Shape480);

HAnimSegment478->addChildren(*Transform479);

HAnimJoint477->addChildren(*HAnimSegment478);

CHAnimJoint* HAnimJoint485 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint485->setName("vt6");
HAnimJoint485->setDEF("hanim_vt6");
HAnimJoint485->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint485->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint485->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setName("t6");
HAnimSegment486->setDEF("hanim_t6");
CTransform* Transform487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform487->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet489 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet489->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet489->setCreaseAngle(0.5);
CCoordinate* Coordinate490 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate490->setUSE("points");
IndexedFaceSet489->setCoord(*Coordinate490);

Shape488->setGeometry(IndexedFaceSet489);

CAppearance* Appearance491 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material492 = (CMaterial *)(m_pScene.createNode("Material"));
Material492->setUSE("REC_SPINAL_COLOR");
Appearance491->setMaterial(*Material492);

Shape488->setAppearance(*Appearance491);

Transform487->addChildren(*Shape488);

HAnimSegment486->addChildren(*Transform487);

HAnimJoint485->addChildren(*HAnimSegment486);

CHAnimJoint* HAnimJoint493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint493->setName("vt5");
HAnimJoint493->setDEF("hanim_vt5");
HAnimJoint493->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint493->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint493->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setName("t5");
HAnimSegment494->setDEF("hanim_t5");
CTransform* Transform495 = (CTransform *)(m_pScene.createNode("Transform"));
Transform495->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape496 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet497 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet497->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet497->setCreaseAngle(0.5);
CCoordinate* Coordinate498 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate498->setUSE("points");
IndexedFaceSet497->setCoord(*Coordinate498);

Shape496->setGeometry(IndexedFaceSet497);

CAppearance* Appearance499 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material500 = (CMaterial *)(m_pScene.createNode("Material"));
Material500->setUSE("SPINAL_COLOR");
Appearance499->setMaterial(*Material500);

Shape496->setAppearance(*Appearance499);

Transform495->addChildren(*Shape496);

HAnimSegment494->addChildren(*Transform495);

HAnimJoint493->addChildren(*HAnimSegment494);

CHAnimJoint* HAnimJoint501 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint501->setName("vt4");
HAnimJoint501->setDEF("hanim_vt4");
HAnimJoint501->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint501->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint501->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment502->setName("t4");
HAnimSegment502->setDEF("hanim_t4");
CTransform* Transform503 = (CTransform *)(m_pScene.createNode("Transform"));
Transform503->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet505 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet505->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet505->setCreaseAngle(0.5);
CCoordinate* Coordinate506 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate506->setUSE("points");
IndexedFaceSet505->setCoord(*Coordinate506);

Shape504->setGeometry(IndexedFaceSet505);

CAppearance* Appearance507 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material508 = (CMaterial *)(m_pScene.createNode("Material"));
Material508->setUSE("SPINAL_COLOR");
Appearance507->setMaterial(*Material508);

Shape504->setAppearance(*Appearance507);

Transform503->addChildren(*Shape504);

HAnimSegment502->addChildren(*Transform503);

HAnimJoint501->addChildren(*HAnimSegment502);

CHAnimJoint* HAnimJoint509 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint509->setName("vt3");
HAnimJoint509->setDEF("hanim_vt3");
HAnimJoint509->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint509->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint509->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment510->setName("t3");
HAnimSegment510->setDEF("hanim_t3");
CTransform* Transform511 = (CTransform *)(m_pScene.createNode("Transform"));
Transform511->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet513 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet513->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet513->setCreaseAngle(0.5);
CCoordinate* Coordinate514 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate514->setUSE("points");
IndexedFaceSet513->setCoord(*Coordinate514);

Shape512->setGeometry(IndexedFaceSet513);

CAppearance* Appearance515 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material516 = (CMaterial *)(m_pScene.createNode("Material"));
Material516->setUSE("SPINAL_COLOR");
Appearance515->setMaterial(*Material516);

Shape512->setAppearance(*Appearance515);

Transform511->addChildren(*Shape512);

HAnimSegment510->addChildren(*Transform511);

HAnimJoint509->addChildren(*HAnimSegment510);

CHAnimJoint* HAnimJoint517 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint517->setName("vt2");
HAnimJoint517->setDEF("hanim_vt2");
HAnimJoint517->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint517->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint517->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment518 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment518->setName("t2");
HAnimSegment518->setDEF("hanim_t2");
CTransform* Transform519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform519->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape520 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet521 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet521->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet521->setCreaseAngle(0.5);
CCoordinate* Coordinate522 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate522->setUSE("points");
IndexedFaceSet521->setCoord(*Coordinate522);

Shape520->setGeometry(IndexedFaceSet521);

CAppearance* Appearance523 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material524 = (CMaterial *)(m_pScene.createNode("Material"));
Material524->setUSE("SPINAL_COLOR");
Appearance523->setMaterial(*Material524);

Shape520->setAppearance(*Appearance523);

Transform519->addChildren(*Shape520);

HAnimSegment518->addChildren(*Transform519);

HAnimJoint517->addChildren(*HAnimSegment518);

CHAnimJoint* HAnimJoint525 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint525->setName("vt1");
HAnimJoint525->setDEF("hanim_vt1");
HAnimJoint525->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint525->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint525->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment526->setName("t1");
HAnimSegment526->setDEF("hanim_t1");
CTransform* Transform527 = (CTransform *)(m_pScene.createNode("Transform"));
Transform527->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet529 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet529->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet529->setCreaseAngle(0.5);
CCoordinate* Coordinate530 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate530->setUSE("points");
IndexedFaceSet529->setCoord(*Coordinate530);

Shape528->setGeometry(IndexedFaceSet529);

CAppearance* Appearance531 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material532 = (CMaterial *)(m_pScene.createNode("Material"));
Material532->setUSE("REC_SPINAL_COLOR");
Appearance531->setMaterial(*Material532);

Shape528->setAppearance(*Appearance531);

Transform527->addChildren(*Shape528);

HAnimSegment526->addChildren(*Transform527);

HAnimJoint525->addChildren(*HAnimSegment526);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setName("l_shoulder");
HAnimJoint533->setDEF("hanim_l_shoulder");
HAnimJoint533->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint533->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint533->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setName("l_upperarm");
HAnimSegment534->setDEF("hanim_l_upperarm");
CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
Transform535->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet537 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet537->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet537->setCreaseAngle(0.5);
CCoordinate* Coordinate538 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate538->setUSE("points");
IndexedFaceSet537->setCoord(*Coordinate538);

Shape536->setGeometry(IndexedFaceSet537);

CAppearance* Appearance539 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material540 = (CMaterial *)(m_pScene.createNode("Material"));
Material540->setUSE("MIN_COLOR");
Appearance539->setMaterial(*Material540);

Shape536->setAppearance(*Appearance539);

Transform535->addChildren(*Shape536);

HAnimSegment534->addChildren(*Transform535);

CTransform* Transform541 = (CTransform *)(m_pScene.createNode("Transform"));
Transform541->setDEF("l_upperarm_adjust");
Transform541->setCenter(new float[3]{0.182,1.22,-0.047});
Transform541->setRotation(new float[4]{1,0,0,0.119});
Transform541->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
HAnimSegment534->addChildren(*Transform541);

CHAnimSite* HAnimSite542 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite542->setName("l_humeral_lateral_epicn_pt");
HAnimSite542->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite542->setTranslation(new float[3]{0.228,1.1482,-0.11});
CShape* Shape543 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet544 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet544->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet544->setCreaseAngle(0.5);
CCoordinate* Coordinate545 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate545->setUSE("points");
IndexedFaceSet544->setCoord(*Coordinate545);

Shape543->setGeometry(IndexedFaceSet544);

CAppearance* Appearance546 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material547 = (CMaterial *)(m_pScene.createNode("Material"));
Material547->setUSE("SITE_COLOR");
Appearance546->setMaterial(*Material547);

Shape543->setAppearance(*Appearance546);

HAnimSite542->addChildren(*Shape543);

HAnimSegment534->addChildren(*HAnimSite542);

HAnimJoint533->addChildren(*HAnimSegment534);

CHAnimJoint* HAnimJoint548 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint548->setName("l_elbow");
HAnimJoint548->setDEF("hanim_l_elbow");
HAnimJoint548->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint548->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint548->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setName("l_forearm");
HAnimSegment549->setDEF("hanim_l_forearm");
CTransform* Transform550 = (CTransform *)(m_pScene.createNode("Transform"));
Transform550->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape551 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet552 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet552->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet552->setCreaseAngle(0.5);
CCoordinate* Coordinate553 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate553->setUSE("points");
IndexedFaceSet552->setCoord(*Coordinate553);

Shape551->setGeometry(IndexedFaceSet552);

CAppearance* Appearance554 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material555 = (CMaterial *)(m_pScene.createNode("Material"));
Material555->setUSE("MIN_COLOR");
Appearance554->setMaterial(*Material555);

Shape551->setAppearance(*Appearance554);

Transform550->addChildren(*Shape551);

HAnimSegment549->addChildren(*Transform550);

CTransform* Transform556 = (CTransform *)(m_pScene.createNode("Transform"));
Transform556->setDEF("l_forearm_adjust");
Transform556->setCenter(new float[3]{0.198,0.961,-0.0405});
Transform556->setRotation(new float[4]{-1,0,0,0.1});
Transform556->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
HAnimSegment549->addChildren(*Transform556);

CHAnimSite* HAnimSite557 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite557->setName("l_radial_styloid_pt");
HAnimSite557->setDEF("hanim_l_radial_styloid_pt");
HAnimSite557->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet559 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet559->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet559->setCreaseAngle(0.5);
CCoordinate* Coordinate560 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate560->setUSE("points");
IndexedFaceSet559->setCoord(*Coordinate560);

Shape558->setGeometry(IndexedFaceSet559);

CAppearance* Appearance561 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material562 = (CMaterial *)(m_pScene.createNode("Material"));
Material562->setUSE("SITE_COLOR");
Appearance561->setMaterial(*Material562);

Shape558->setAppearance(*Appearance561);

HAnimSite557->addChildren(*Shape558);

HAnimSegment549->addChildren(*HAnimSite557);

CHAnimSite* HAnimSite563 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite563->setName("l_olecranon_pt");
HAnimSite563->setDEF("hanim_l_olecranon_pt");
HAnimSite563->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet565 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet565->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet565->setCreaseAngle(0.5);
CCoordinate* Coordinate566 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate566->setUSE("points");
IndexedFaceSet565->setCoord(*Coordinate566);

Shape564->setGeometry(IndexedFaceSet565);

CAppearance* Appearance567 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material568 = (CMaterial *)(m_pScene.createNode("Material"));
Material568->setUSE("SITE_COLOR");
Appearance567->setMaterial(*Material568);

Shape564->setAppearance(*Appearance567);

HAnimSite563->addChildren(*Shape564);

HAnimSegment549->addChildren(*HAnimSite563);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setName("l_humeral_medial_epicn_pt");
HAnimSite569->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite569->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CShape* Shape570 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet571 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet571->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet571->setCreaseAngle(0.5);
CCoordinate* Coordinate572 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate572->setUSE("points");
IndexedFaceSet571->setCoord(*Coordinate572);

Shape570->setGeometry(IndexedFaceSet571);

CAppearance* Appearance573 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material574 = (CMaterial *)(m_pScene.createNode("Material"));
Material574->setUSE("SITE_COLOR");
Appearance573->setMaterial(*Material574);

Shape570->setAppearance(*Appearance573);

HAnimSite569->addChildren(*Shape570);

HAnimSegment549->addChildren(*HAnimSite569);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setName("l_radiale_pt");
HAnimSite575->setDEF("hanim_l_radiale_pt");
HAnimSite575->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CShape* Shape576 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet577 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet577->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet577->setCreaseAngle(0.5);
CCoordinate* Coordinate578 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate578->setUSE("points");
IndexedFaceSet577->setCoord(*Coordinate578);

Shape576->setGeometry(IndexedFaceSet577);

CAppearance* Appearance579 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material580 = (CMaterial *)(m_pScene.createNode("Material"));
Material580->setUSE("SITE_COLOR");
Appearance579->setMaterial(*Material580);

Shape576->setAppearance(*Appearance579);

HAnimSite575->addChildren(*Shape576);

HAnimSegment549->addChildren(*HAnimSite575);

HAnimJoint548->addChildren(*HAnimSegment549);

CHAnimJoint* HAnimJoint581 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint581->setName("l_wrist");
HAnimJoint581->setDEF("hanim_l_wrist");
HAnimJoint581->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint581->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint581->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment582 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment582->setName("l_hand");
HAnimSegment582->setDEF("hanim_l_hand");
CTransform* Transform583 = (CTransform *)(m_pScene.createNode("Transform"));
Transform583->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet585 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet585->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet585->setCreaseAngle(0.5);
CCoordinate* Coordinate586 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate586->setUSE("points");
IndexedFaceSet585->setCoord(*Coordinate586);

Shape584->setGeometry(IndexedFaceSet585);

CAppearance* Appearance587 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material588 = (CMaterial *)(m_pScene.createNode("Material"));
Material588->setUSE("MIN_COLOR");
Appearance587->setMaterial(*Material588);

Shape584->setAppearance(*Appearance587);

Transform583->addChildren(*Shape584);

HAnimSegment582->addChildren(*Transform583);

CTransform* Transform589 = (CTransform *)(m_pScene.createNode("Transform"));
Transform589->setDEF("l_hand_adjust");
Transform589->setCenter(new float[3]{0.213,0.811,-0.0338});
Transform589->setRotation(new float[4]{-0.06361,-0.9967,0.04988,1.333});
Transform589->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
HAnimSegment582->addChildren(*Transform589);

CHAnimSite* HAnimSite590 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite590->setName("l_hand_tip");
HAnimSite590->setDEF("hanim_l_hand_tip");
HAnimSite590->setTranslation(new float[3]{0.208,0.6731,-0.0491});
CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet592 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet592->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet592->setCreaseAngle(0.5);
CCoordinate* Coordinate593 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate593->setUSE("points");
IndexedFaceSet592->setCoord(*Coordinate593);

Shape591->setGeometry(IndexedFaceSet592);

CAppearance* Appearance594 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material595 = (CMaterial *)(m_pScene.createNode("Material"));
Material595->setUSE("SITE_COLOR");
Appearance594->setMaterial(*Material595);

Shape591->setAppearance(*Appearance594);

HAnimSite590->addChildren(*Shape591);

HAnimSegment582->addChildren(*HAnimSite590);

CHAnimSite* HAnimSite596 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite596->setName("l_metacarpal_pha2_pt");
HAnimSite596->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite596->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CShape* Shape597 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet598 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet598->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet598->setCreaseAngle(0.5);
CCoordinate* Coordinate599 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate599->setUSE("points");
IndexedFaceSet598->setCoord(*Coordinate599);

Shape597->setGeometry(IndexedFaceSet598);

CAppearance* Appearance600 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material601 = (CMaterial *)(m_pScene.createNode("Material"));
Material601->setUSE("SITE_COLOR");
Appearance600->setMaterial(*Material601);

Shape597->setAppearance(*Appearance600);

HAnimSite596->addChildren(*Shape597);

HAnimSegment582->addChildren(*HAnimSite596);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setName("l_dactylion_pt");
HAnimSite602->setDEF("hanim_l_dactylion_pt");
HAnimSite602->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CShape* Shape603 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet604 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet604->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet604->setCreaseAngle(0.5);
CCoordinate* Coordinate605 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate605->setUSE("points");
IndexedFaceSet604->setCoord(*Coordinate605);

Shape603->setGeometry(IndexedFaceSet604);

CAppearance* Appearance606 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material607 = (CMaterial *)(m_pScene.createNode("Material"));
Material607->setUSE("SITE_COLOR");
Appearance606->setMaterial(*Material607);

Shape603->setAppearance(*Appearance606);

HAnimSite602->addChildren(*Shape603);

HAnimSegment582->addChildren(*HAnimSite602);

CHAnimSite* HAnimSite608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite608->setName("l_ulnar_styloid_pt");
HAnimSite608->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite608->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet610 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet610->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet610->setCreaseAngle(0.5);
CCoordinate* Coordinate611 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate611->setUSE("points");
IndexedFaceSet610->setCoord(*Coordinate611);

Shape609->setGeometry(IndexedFaceSet610);

CAppearance* Appearance612 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material613 = (CMaterial *)(m_pScene.createNode("Material"));
Material613->setUSE("SITE_COLOR");
Appearance612->setMaterial(*Material613);

Shape609->setAppearance(*Appearance612);

HAnimSite608->addChildren(*Shape609);

HAnimSegment582->addChildren(*HAnimSite608);

CHAnimSite* HAnimSite614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite614->setName("l_metacarpal_pha5_pt");
HAnimSite614->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite614->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CShape* Shape615 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet616 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet616->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet616->setCreaseAngle(0.5);
CCoordinate* Coordinate617 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate617->setUSE("points");
IndexedFaceSet616->setCoord(*Coordinate617);

Shape615->setGeometry(IndexedFaceSet616);

CAppearance* Appearance618 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material619 = (CMaterial *)(m_pScene.createNode("Material"));
Material619->setUSE("SITE_COLOR");
Appearance618->setMaterial(*Material619);

Shape615->setAppearance(*Appearance618);

HAnimSite614->addChildren(*Shape615);

HAnimSegment582->addChildren(*HAnimSite614);

HAnimJoint581->addChildren(*HAnimSegment582);

CHAnimJoint* HAnimJoint620 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint620->setName("l_thumb1");
HAnimJoint620->setDEF("hanim_l_thumb1");
HAnimJoint620->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint620->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint620->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment621 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment621->setName("l_thumb_metacarpal");
HAnimSegment621->setDEF("hanim_l_thumb_metacarpal");
CTransform* Transform622 = (CTransform *)(m_pScene.createNode("Transform"));
Transform622->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape623 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet624 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet624->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet624->setCreaseAngle(0.5);
CCoordinate* Coordinate625 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate625->setUSE("points");
IndexedFaceSet624->setCoord(*Coordinate625);

Shape623->setGeometry(IndexedFaceSet624);

CAppearance* Appearance626 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material627 = (CMaterial *)(m_pScene.createNode("Material"));
Material627->setUSE("JOINT_COLOR");
Appearance626->setMaterial(*Material627);

Shape623->setAppearance(*Appearance626);

Transform622->addChildren(*Shape623);

HAnimSegment621->addChildren(*Transform622);

HAnimJoint620->addChildren(*HAnimSegment621);

CHAnimJoint* HAnimJoint628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint628->setName("l_thumb2");
HAnimJoint628->setDEF("hanim_l_thumb2");
HAnimJoint628->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint628->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint628->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment629 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment629->setName("l_thumb_proximal");
HAnimSegment629->setDEF("hanim_l_thumb_proximal");
CTransform* Transform630 = (CTransform *)(m_pScene.createNode("Transform"));
Transform630->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet632 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet632->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet632->setCreaseAngle(0.5);
CCoordinate* Coordinate633 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate633->setUSE("points");
IndexedFaceSet632->setCoord(*Coordinate633);

Shape631->setGeometry(IndexedFaceSet632);

CAppearance* Appearance634 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material635 = (CMaterial *)(m_pScene.createNode("Material"));
Material635->setUSE("JOINT_COLOR");
Appearance634->setMaterial(*Material635);

Shape631->setAppearance(*Appearance634);

Transform630->addChildren(*Shape631);

HAnimSegment629->addChildren(*Transform630);

HAnimJoint628->addChildren(*HAnimSegment629);

CHAnimJoint* HAnimJoint636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint636->setName("l_thumb3");
HAnimJoint636->setDEF("hanim_l_thumb3");
HAnimJoint636->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint636->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint636->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment637 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment637->setName("l_thumb_distal");
HAnimSegment637->setDEF("hanim_l_thumb_distal");
CTransform* Transform638 = (CTransform *)(m_pScene.createNode("Transform"));
Transform638->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet640 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet640->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet640->setCreaseAngle(0.5);
CCoordinate* Coordinate641 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate641->setUSE("points");
IndexedFaceSet640->setCoord(*Coordinate641);

Shape639->setGeometry(IndexedFaceSet640);

CAppearance* Appearance642 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material643 = (CMaterial *)(m_pScene.createNode("Material"));
Material643->setUSE("JOINT_COLOR");
Appearance642->setMaterial(*Material643);

Shape639->setAppearance(*Appearance642);

Transform638->addChildren(*Shape639);

HAnimSegment637->addChildren(*Transform638);

CHAnimSite* HAnimSite644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite644->setName("l_thumb_distal_tip");
HAnimSite644->setDEF("hanim_l_thumb_distal_tip");
HAnimSite644->setTranslation(new float[3]{0.1982,0.8061,0.0759});
CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet646 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet646->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet646->setCreaseAngle(0.5);
CCoordinate* Coordinate647 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate647->setUSE("points");
IndexedFaceSet646->setCoord(*Coordinate647);

Shape645->setGeometry(IndexedFaceSet646);

CAppearance* Appearance648 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material649 = (CMaterial *)(m_pScene.createNode("Material"));
Material649->setUSE("HAND_FEET_COLOR");
Appearance648->setMaterial(*Material649);

Shape645->setAppearance(*Appearance648);

HAnimSite644->addChildren(*Shape645);

HAnimSegment637->addChildren(*HAnimSite644);

HAnimJoint636->addChildren(*HAnimSegment637);

HAnimJoint628->addChildren(*HAnimJoint636);

HAnimJoint620->addChildren(*HAnimJoint628);

HAnimJoint581->addChildren(*HAnimJoint620);

CHAnimJoint* HAnimJoint650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint650->setName("l_index0");
HAnimJoint650->setDEF("hanim_l_index0");
HAnimJoint650->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint650->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint650->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment651 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment651->setName("l_index_metacarpal");
HAnimSegment651->setDEF("hanim_l_index_metacarpal");
CTransform* Transform652 = (CTransform *)(m_pScene.createNode("Transform"));
Transform652->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet654 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet654->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet654->setCreaseAngle(0.5);
CCoordinate* Coordinate655 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate655->setUSE("points");
IndexedFaceSet654->setCoord(*Coordinate655);

Shape653->setGeometry(IndexedFaceSet654);

CAppearance* Appearance656 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material657 = (CMaterial *)(m_pScene.createNode("Material"));
Material657->setUSE("JOINT_COLOR");
Appearance656->setMaterial(*Material657);

Shape653->setAppearance(*Appearance656);

Transform652->addChildren(*Shape653);

HAnimSegment651->addChildren(*Transform652);

HAnimJoint650->addChildren(*HAnimSegment651);

CHAnimJoint* HAnimJoint658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint658->setName("l_index1");
HAnimJoint658->setDEF("hanim_l_index1");
HAnimJoint658->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint658->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint658->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment659 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment659->setName("l_index_proximal");
HAnimSegment659->setDEF("hanim_l_index_proximal");
CTransform* Transform660 = (CTransform *)(m_pScene.createNode("Transform"));
Transform660->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet662 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet662->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet662->setCreaseAngle(0.5);
CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setUSE("points");
IndexedFaceSet662->setCoord(*Coordinate663);

Shape661->setGeometry(IndexedFaceSet662);

CAppearance* Appearance664 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material665 = (CMaterial *)(m_pScene.createNode("Material"));
Material665->setUSE("JOINT_COLOR");
Appearance664->setMaterial(*Material665);

Shape661->setAppearance(*Appearance664);

Transform660->addChildren(*Shape661);

HAnimSegment659->addChildren(*Transform660);

HAnimJoint658->addChildren(*HAnimSegment659);

CHAnimJoint* HAnimJoint666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint666->setName("l_index2");
HAnimJoint666->setDEF("hanim_l_index2");
HAnimJoint666->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint666->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint666->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment667 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment667->setName("l_index_middle");
HAnimSegment667->setDEF("hanim_l_index_middle");
CTransform* Transform668 = (CTransform *)(m_pScene.createNode("Transform"));
Transform668->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet670 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet670->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet670->setCreaseAngle(0.5);
CCoordinate* Coordinate671 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate671->setUSE("points");
IndexedFaceSet670->setCoord(*Coordinate671);

Shape669->setGeometry(IndexedFaceSet670);

CAppearance* Appearance672 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material673 = (CMaterial *)(m_pScene.createNode("Material"));
Material673->setUSE("JOINT_COLOR");
Appearance672->setMaterial(*Material673);

Shape669->setAppearance(*Appearance672);

Transform668->addChildren(*Shape669);

HAnimSegment667->addChildren(*Transform668);

HAnimJoint666->addChildren(*HAnimSegment667);

CHAnimJoint* HAnimJoint674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint674->setName("l_index3");
HAnimJoint674->setDEF("hanim_l_index3");
HAnimJoint674->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint674->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint674->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment675 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment675->setName("l_index_distal");
HAnimSegment675->setDEF("hanim_l_index_distal");
CTransform* Transform676 = (CTransform *)(m_pScene.createNode("Transform"));
Transform676->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape677 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet678 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet678->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet678->setCreaseAngle(0.5);
CCoordinate* Coordinate679 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate679->setUSE("points");
IndexedFaceSet678->setCoord(*Coordinate679);

Shape677->setGeometry(IndexedFaceSet678);

CAppearance* Appearance680 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material681 = (CMaterial *)(m_pScene.createNode("Material"));
Material681->setUSE("JOINT_COLOR");
Appearance680->setMaterial(*Material681);

Shape677->setAppearance(*Appearance680);

Transform676->addChildren(*Shape677);

HAnimSegment675->addChildren(*Transform676);

CHAnimSite* HAnimSite682 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite682->setName("l_index_distal_tip");
HAnimSite682->setDEF("hanim_l_index_distal_tip");
HAnimSite682->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet684 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet684->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet684->setCreaseAngle(0.5);
CCoordinate* Coordinate685 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate685->setUSE("points");
IndexedFaceSet684->setCoord(*Coordinate685);

Shape683->setGeometry(IndexedFaceSet684);

CAppearance* Appearance686 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material687 = (CMaterial *)(m_pScene.createNode("Material"));
Material687->setUSE("HAND_FEET_COLOR");
Appearance686->setMaterial(*Material687);

Shape683->setAppearance(*Appearance686);

HAnimSite682->addChildren(*Shape683);

HAnimSegment675->addChildren(*HAnimSite682);

HAnimJoint674->addChildren(*HAnimSegment675);

HAnimJoint666->addChildren(*HAnimJoint674);

HAnimJoint658->addChildren(*HAnimJoint666);

HAnimJoint650->addChildren(*HAnimJoint658);

HAnimJoint581->addChildren(*HAnimJoint650);

HAnimJoint548->addChildren(*HAnimJoint581);

HAnimJoint533->addChildren(*HAnimJoint548);

HAnimJoint525->addChildren(*HAnimJoint533);

CHAnimJoint* HAnimJoint688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint688->setName("r_shoulder");
HAnimJoint688->setDEF("hanim_r_shoulder");
HAnimJoint688->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint688->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint688->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment689 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment689->setName("r_upperarm");
HAnimSegment689->setDEF("hanim_r_upperarm");
CTransform* Transform690 = (CTransform *)(m_pScene.createNode("Transform"));
Transform690->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet692 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet692->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet692->setCreaseAngle(0.5);
CCoordinate* Coordinate693 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate693->setUSE("points");
IndexedFaceSet692->setCoord(*Coordinate693);

Shape691->setGeometry(IndexedFaceSet692);

CAppearance* Appearance694 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material695 = (CMaterial *)(m_pScene.createNode("Material"));
Material695->setUSE("MIN_COLOR");
Appearance694->setMaterial(*Material695);

Shape691->setAppearance(*Appearance694);

Transform690->addChildren(*Shape691);

HAnimSegment689->addChildren(*Transform690);

CTransform* Transform696 = (CTransform *)(m_pScene.createNode("Transform"));
Transform696->setDEF("r_upperarm_adjust");
Transform696->setCenter(new float[3]{-0.182,1.22,-0.047});
Transform696->setRotation(new float[4]{1,0,0,0.0836});
Transform696->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
HAnimSegment689->addChildren(*Transform696);

CHAnimSite* HAnimSite697 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite697->setName("r_humeral_lateral_epicn_pt");
HAnimSite697->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite697->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CShape* Shape698 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet699 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet699->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet699->setCreaseAngle(0.5);
CCoordinate* Coordinate700 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate700->setUSE("points");
IndexedFaceSet699->setCoord(*Coordinate700);

Shape698->setGeometry(IndexedFaceSet699);

CAppearance* Appearance701 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material702 = (CMaterial *)(m_pScene.createNode("Material"));
Material702->setUSE("SITE_COLOR");
Appearance701->setMaterial(*Material702);

Shape698->setAppearance(*Appearance701);

HAnimSite697->addChildren(*Shape698);

HAnimSegment689->addChildren(*HAnimSite697);

HAnimJoint688->addChildren(*HAnimSegment689);

CHAnimJoint* HAnimJoint703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint703->setName("r_elbow");
HAnimJoint703->setDEF("hanim_r_elbow");
HAnimJoint703->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint703->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment704 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment704->setName("r_forearm");
HAnimSegment704->setDEF("hanim_r_forearm");
CTransform* Transform705 = (CTransform *)(m_pScene.createNode("Transform"));
Transform705->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet707 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet707->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet707->setCreaseAngle(0.5);
CCoordinate* Coordinate708 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate708->setUSE("points");
IndexedFaceSet707->setCoord(*Coordinate708);

Shape706->setGeometry(IndexedFaceSet707);

CAppearance* Appearance709 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material710 = (CMaterial *)(m_pScene.createNode("Material"));
Material710->setUSE("MIN_COLOR");
Appearance709->setMaterial(*Material710);

Shape706->setAppearance(*Appearance709);

Transform705->addChildren(*Shape706);

HAnimSegment704->addChildren(*Transform705);

CTransform* Transform711 = (CTransform *)(m_pScene.createNode("Transform"));
Transform711->setDEF("r_forearm_adjust");
Transform711->setCenter(new float[3]{-0.198,0.961,-0.0397});
Transform711->setRotation(new float[4]{-1,0,0,0.1254});
Transform711->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
HAnimSegment704->addChildren(*Transform711);

CHAnimSite* HAnimSite712 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite712->setName("r_radial_styloid_pt");
HAnimSite712->setDEF("hanim_r_radial_styloid_pt");
HAnimSite712->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CShape* Shape713 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet714 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet714->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet714->setCreaseAngle(0.5);
CCoordinate* Coordinate715 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate715->setUSE("points");
IndexedFaceSet714->setCoord(*Coordinate715);

Shape713->setGeometry(IndexedFaceSet714);

CAppearance* Appearance716 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material717 = (CMaterial *)(m_pScene.createNode("Material"));
Material717->setUSE("SITE_COLOR");
Appearance716->setMaterial(*Material717);

Shape713->setAppearance(*Appearance716);

HAnimSite712->addChildren(*Shape713);

HAnimSegment704->addChildren(*HAnimSite712);

CHAnimSite* HAnimSite718 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite718->setName("r_olecranon_pt");
HAnimSite718->setDEF("hanim_r_olecranon_pt");
HAnimSite718->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet720 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet720->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet720->setCreaseAngle(0.5);
CCoordinate* Coordinate721 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate721->setUSE("points");
IndexedFaceSet720->setCoord(*Coordinate721);

Shape719->setGeometry(IndexedFaceSet720);

CAppearance* Appearance722 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material723 = (CMaterial *)(m_pScene.createNode("Material"));
Material723->setUSE("SITE_COLOR");
Appearance722->setMaterial(*Material723);

Shape719->setAppearance(*Appearance722);

HAnimSite718->addChildren(*Shape719);

HAnimSegment704->addChildren(*HAnimSite718);

CHAnimSite* HAnimSite724 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite724->setName("r_humeral_medial_epicn_pt");
HAnimSite724->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite724->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CShape* Shape725 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet726 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet726->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet726->setCreaseAngle(0.5);
CCoordinate* Coordinate727 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate727->setUSE("points");
IndexedFaceSet726->setCoord(*Coordinate727);

Shape725->setGeometry(IndexedFaceSet726);

CAppearance* Appearance728 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material729 = (CMaterial *)(m_pScene.createNode("Material"));
Material729->setUSE("SITE_COLOR");
Appearance728->setMaterial(*Material729);

Shape725->setAppearance(*Appearance728);

HAnimSite724->addChildren(*Shape725);

HAnimSegment704->addChildren(*HAnimSite724);

CHAnimSite* HAnimSite730 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite730->setName("r_radiale_pt");
HAnimSite730->setDEF("hanim_r_radiale_pt");
HAnimSite730->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CShape* Shape731 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet732 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet732->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet732->setCreaseAngle(0.5);
CCoordinate* Coordinate733 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate733->setUSE("points");
IndexedFaceSet732->setCoord(*Coordinate733);

Shape731->setGeometry(IndexedFaceSet732);

CAppearance* Appearance734 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material735 = (CMaterial *)(m_pScene.createNode("Material"));
Material735->setUSE("SITE_COLOR");
Appearance734->setMaterial(*Material735);

Shape731->setAppearance(*Appearance734);

HAnimSite730->addChildren(*Shape731);

HAnimSegment704->addChildren(*HAnimSite730);

HAnimJoint703->addChildren(*HAnimSegment704);

CHAnimJoint* HAnimJoint736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint736->setName("r_wrist");
HAnimJoint736->setDEF("hanim_r_wrist");
HAnimJoint736->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint736->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint736->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment737 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment737->setName("r_hand");
HAnimSegment737->setDEF("hanim_r_hand");
CTransform* Transform738 = (CTransform *)(m_pScene.createNode("Transform"));
Transform738->setTranslation(new float[3]{-0.1959,0.8694,-0.0521});
CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet740 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet740->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet740->setCreaseAngle(0.5);
CCoordinate* Coordinate741 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate741->setUSE("points");
IndexedFaceSet740->setCoord(*Coordinate741);

Shape739->setGeometry(IndexedFaceSet740);

CAppearance* Appearance742 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material743 = (CMaterial *)(m_pScene.createNode("Material"));
Material743->setUSE("MIN_COLOR");
Appearance742->setMaterial(*Material743);

Shape739->setAppearance(*Appearance742);

Transform738->addChildren(*Shape739);

HAnimSegment737->addChildren(*Transform738);

CTransform* Transform744 = (CTransform *)(m_pScene.createNode("Transform"));
Transform744->setDEF("r_hand_adjust");
Transform744->setCenter(new float[3]{-0.217,0.811,-0.0338});
Transform744->setRotation(new float[4]{-0.09024,0.994,-0.0624,1.216});
HAnimSegment737->addChildren(*Transform744);

CHAnimSite* HAnimSite745 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite745->setName("r_hand_tip");
HAnimSite745->setDEF("hanim_r_hand_tip");
HAnimSite745->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
CShape* Shape746 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet747 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet747->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet747->setCreaseAngle(0.5);
CCoordinate* Coordinate748 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate748->setUSE("points");
IndexedFaceSet747->setCoord(*Coordinate748);

Shape746->setGeometry(IndexedFaceSet747);

CAppearance* Appearance749 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material750 = (CMaterial *)(m_pScene.createNode("Material"));
Material750->setUSE("SITE_COLOR");
Appearance749->setMaterial(*Material750);

Shape746->setAppearance(*Appearance749);

HAnimSite745->addChildren(*Shape746);

HAnimSegment737->addChildren(*HAnimSite745);

CHAnimSite* HAnimSite751 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite751->setName("r_metacarpal_pha2_pt");
HAnimSite751->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite751->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet753 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet753->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet753->setCreaseAngle(0.5);
CCoordinate* Coordinate754 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate754->setUSE("points");
IndexedFaceSet753->setCoord(*Coordinate754);

Shape752->setGeometry(IndexedFaceSet753);

CAppearance* Appearance755 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material756 = (CMaterial *)(m_pScene.createNode("Material"));
Material756->setUSE("SITE_COLOR");
Appearance755->setMaterial(*Material756);

Shape752->setAppearance(*Appearance755);

HAnimSite751->addChildren(*Shape752);

HAnimSegment737->addChildren(*HAnimSite751);

CHAnimSite* HAnimSite757 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite757->setName("r_dactylion_pt");
HAnimSite757->setDEF("hanim_r_dactylion_pt");
HAnimSite757->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet759 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet759->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet759->setCreaseAngle(0.5);
CCoordinate* Coordinate760 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate760->setUSE("points");
IndexedFaceSet759->setCoord(*Coordinate760);

Shape758->setGeometry(IndexedFaceSet759);

CAppearance* Appearance761 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material762 = (CMaterial *)(m_pScene.createNode("Material"));
Material762->setUSE("SITE_COLOR");
Appearance761->setMaterial(*Material762);

Shape758->setAppearance(*Appearance761);

HAnimSite757->addChildren(*Shape758);

HAnimSegment737->addChildren(*HAnimSite757);

CHAnimSite* HAnimSite763 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite763->setName("r_ulnar_styloid_pt");
HAnimSite763->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite763->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet765 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet765->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet765->setCreaseAngle(0.5);
CCoordinate* Coordinate766 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate766->setUSE("points");
IndexedFaceSet765->setCoord(*Coordinate766);

Shape764->setGeometry(IndexedFaceSet765);

CAppearance* Appearance767 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material768 = (CMaterial *)(m_pScene.createNode("Material"));
Material768->setUSE("SITE_COLOR");
Appearance767->setMaterial(*Material768);

Shape764->setAppearance(*Appearance767);

HAnimSite763->addChildren(*Shape764);

HAnimSegment737->addChildren(*HAnimSite763);

CHAnimSite* HAnimSite769 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite769->setName("r_metacarpal_pha5_pt");
HAnimSite769->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite769->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CShape* Shape770 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet771 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet771->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet771->setCreaseAngle(0.5);
CCoordinate* Coordinate772 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate772->setUSE("points");
IndexedFaceSet771->setCoord(*Coordinate772);

Shape770->setGeometry(IndexedFaceSet771);

CAppearance* Appearance773 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material774 = (CMaterial *)(m_pScene.createNode("Material"));
Material774->setUSE("SITE_COLOR");
Appearance773->setMaterial(*Material774);

Shape770->setAppearance(*Appearance773);

HAnimSite769->addChildren(*Shape770);

HAnimSegment737->addChildren(*HAnimSite769);

HAnimJoint736->addChildren(*HAnimSegment737);

HAnimJoint703->addChildren(*HAnimJoint736);

HAnimJoint688->addChildren(*HAnimJoint703);

HAnimJoint525->addChildren(*HAnimJoint688);

CHAnimJoint* HAnimJoint775 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint775->setName("vc7");
HAnimJoint775->setDEF("hanim_vc7");
HAnimJoint775->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint775->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint775->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment776->setName("c7");
HAnimSegment776->setDEF("hanim_c7");
CTransform* Transform777 = (CTransform *)(m_pScene.createNode("Transform"));
Transform777->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape778 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet779 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet779->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet779->setCreaseAngle(0.5);
CCoordinate* Coordinate780 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate780->setUSE("points");
IndexedFaceSet779->setCoord(*Coordinate780);

Shape778->setGeometry(IndexedFaceSet779);

CAppearance* Appearance781 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material782 = (CMaterial *)(m_pScene.createNode("Material"));
Material782->setUSE("SPINAL_COLOR");
Appearance781->setMaterial(*Material782);

Shape778->setAppearance(*Appearance781);

Transform777->addChildren(*Shape778);

HAnimSegment776->addChildren(*Transform777);

HAnimJoint775->addChildren(*HAnimSegment776);

CHAnimJoint* HAnimJoint783 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint783->setName("vc6");
HAnimJoint783->setDEF("hanim_vc6");
HAnimJoint783->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint783->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint783->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment784->setName("c6");
HAnimSegment784->setDEF("hanim_c6");
CTransform* Transform785 = (CTransform *)(m_pScene.createNode("Transform"));
Transform785->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape786 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet787 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet787->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet787->setCreaseAngle(0.5);
CCoordinate* Coordinate788 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate788->setUSE("points");
IndexedFaceSet787->setCoord(*Coordinate788);

Shape786->setGeometry(IndexedFaceSet787);

CAppearance* Appearance789 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material790 = (CMaterial *)(m_pScene.createNode("Material"));
Material790->setUSE("SPINAL_COLOR");
Appearance789->setMaterial(*Material790);

Shape786->setAppearance(*Appearance789);

Transform785->addChildren(*Shape786);

HAnimSegment784->addChildren(*Transform785);

HAnimJoint783->addChildren(*HAnimSegment784);

CHAnimJoint* HAnimJoint791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint791->setName("vc5");
HAnimJoint791->setDEF("hanim_vc5");
HAnimJoint791->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint791->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint791->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment792->setName("c5");
HAnimSegment792->setDEF("hanim_c5");
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
Transform793->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet795 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet795->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet795->setCreaseAngle(0.5);
CCoordinate* Coordinate796 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate796->setUSE("points");
IndexedFaceSet795->setCoord(*Coordinate796);

Shape794->setGeometry(IndexedFaceSet795);

CAppearance* Appearance797 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material798 = (CMaterial *)(m_pScene.createNode("Material"));
Material798->setUSE("SPINAL_COLOR");
Appearance797->setMaterial(*Material798);

Shape794->setAppearance(*Appearance797);

Transform793->addChildren(*Shape794);

HAnimSegment792->addChildren(*Transform793);

HAnimJoint791->addChildren(*HAnimSegment792);

CHAnimJoint* HAnimJoint799 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint799->setName("vc4");
HAnimJoint799->setDEF("hanim_vc4");
HAnimJoint799->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint799->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint799->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment800->setName("c4");
HAnimSegment800->setDEF("hanim_c4");
CTransform* Transform801 = (CTransform *)(m_pScene.createNode("Transform"));
Transform801->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape802 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet803 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet803->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet803->setCreaseAngle(0.5);
CCoordinate* Coordinate804 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate804->setUSE("points");
IndexedFaceSet803->setCoord(*Coordinate804);

Shape802->setGeometry(IndexedFaceSet803);

CAppearance* Appearance805 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material806 = (CMaterial *)(m_pScene.createNode("Material"));
Material806->setUSE("SPINAL_COLOR");
Appearance805->setMaterial(*Material806);

Shape802->setAppearance(*Appearance805);

Transform801->addChildren(*Shape802);

HAnimSegment800->addChildren(*Transform801);

HAnimJoint799->addChildren(*HAnimSegment800);

CHAnimJoint* HAnimJoint807 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint807->setName("vc3");
HAnimJoint807->setDEF("hanim_vc3");
HAnimJoint807->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint807->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint807->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment808->setName("c3");
HAnimSegment808->setDEF("hanim_c3");
CTransform* Transform809 = (CTransform *)(m_pScene.createNode("Transform"));
Transform809->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape810 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet811 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet811->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet811->setCreaseAngle(0.5);
CCoordinate* Coordinate812 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate812->setUSE("points");
IndexedFaceSet811->setCoord(*Coordinate812);

Shape810->setGeometry(IndexedFaceSet811);

CAppearance* Appearance813 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material814 = (CMaterial *)(m_pScene.createNode("Material"));
Material814->setUSE("SPINAL_COLOR");
Appearance813->setMaterial(*Material814);

Shape810->setAppearance(*Appearance813);

Transform809->addChildren(*Shape810);

HAnimSegment808->addChildren(*Transform809);

HAnimJoint807->addChildren(*HAnimSegment808);

CHAnimJoint* HAnimJoint815 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint815->setName("vc2");
HAnimJoint815->setDEF("hanim_vc2");
HAnimJoint815->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint815->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint815->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment816->setName("c2");
HAnimSegment816->setDEF("hanim_c2");
CTransform* Transform817 = (CTransform *)(m_pScene.createNode("Transform"));
Transform817->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape818 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet819 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet819->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet819->setCreaseAngle(0.5);
CCoordinate* Coordinate820 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate820->setUSE("points");
IndexedFaceSet819->setCoord(*Coordinate820);

Shape818->setGeometry(IndexedFaceSet819);

CAppearance* Appearance821 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material822 = (CMaterial *)(m_pScene.createNode("Material"));
Material822->setUSE("REC_SPINAL_COLOR");
Appearance821->setMaterial(*Material822);

Shape818->setAppearance(*Appearance821);

Transform817->addChildren(*Shape818);

HAnimSegment816->addChildren(*Transform817);

HAnimJoint815->addChildren(*HAnimSegment816);

CHAnimJoint* HAnimJoint823 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint823->setName("vc1");
HAnimJoint823->setDEF("hanim_vc1");
HAnimJoint823->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint823->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint823->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment824->setName("c1");
HAnimSegment824->setDEF("hanim_c1");
CTransform* Transform825 = (CTransform *)(m_pScene.createNode("Transform"));
Transform825->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet827 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet827->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet827->setCreaseAngle(0.5);
CCoordinate* Coordinate828 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate828->setUSE("points");
IndexedFaceSet827->setCoord(*Coordinate828);

Shape826->setGeometry(IndexedFaceSet827);

CAppearance* Appearance829 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material830 = (CMaterial *)(m_pScene.createNode("Material"));
Material830->setUSE("SPINAL_COLOR");
Appearance829->setMaterial(*Material830);

Shape826->setAppearance(*Appearance829);

Transform825->addChildren(*Shape826);

HAnimSegment824->addChildren(*Transform825);

HAnimJoint823->addChildren(*HAnimSegment824);

CHAnimJoint* HAnimJoint831 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint831->setName("skullbase");
HAnimJoint831->setDEF("hanim_skullbase");
HAnimJoint831->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint831->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint831->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment832->setName("skull");
HAnimSegment832->setDEF("hanim_skull");
CTransform* Transform833 = (CTransform *)(m_pScene.createNode("Transform"));
Transform833->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet835 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet835->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet835->setCreaseAngle(0.5);
CCoordinate* Coordinate836 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate836->setUSE("points");
IndexedFaceSet835->setCoord(*Coordinate836);

Shape834->setGeometry(IndexedFaceSet835);

CAppearance* Appearance837 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material838 = (CMaterial *)(m_pScene.createNode("Material"));
Material838->setUSE("MIN_COLOR");
Appearance837->setMaterial(*Material838);

Shape834->setAppearance(*Appearance837);

Transform833->addChildren(*Shape834);

HAnimSegment832->addChildren(*Transform833);

CHAnimSite* HAnimSite839 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite839->setName("skull_tip");
HAnimSite839->setDEF("hanim_skull_tip");
HAnimSite839->setTranslation(new float[3]{0.005,1.7504,0.0055});
CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet841 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet841->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet841->setCreaseAngle(0.5);
CCoordinate* Coordinate842 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate842->setUSE("points");
IndexedFaceSet841->setCoord(*Coordinate842);

Shape840->setGeometry(IndexedFaceSet841);

CAppearance* Appearance843 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material844 = (CMaterial *)(m_pScene.createNode("Material"));
Material844->setUSE("SITE_COLOR");
Appearance843->setMaterial(*Material844);

Shape840->setAppearance(*Appearance843);

HAnimSite839->addChildren(*Shape840);

HAnimSegment832->addChildren(*HAnimSite839);

CHAnimSite* HAnimSite845 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite845->setName("sellion_pt");
HAnimSite845->setDEF("hanim_sellion_pt");
HAnimSite845->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CShape* Shape846 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet847 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet847->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet847->setCreaseAngle(0.5);
CCoordinate* Coordinate848 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate848->setUSE("points");
IndexedFaceSet847->setCoord(*Coordinate848);

Shape846->setGeometry(IndexedFaceSet847);

CAppearance* Appearance849 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material850 = (CMaterial *)(m_pScene.createNode("Material"));
Material850->setUSE("SITE_COLOR");
Appearance849->setMaterial(*Material850);

Shape846->setAppearance(*Appearance849);

HAnimSite845->addChildren(*Shape846);

HAnimSegment832->addChildren(*HAnimSite845);

CHAnimSite* HAnimSite851 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite851->setName("r_infraorbitale_pt");
HAnimSite851->setDEF("hanim_r_infraorbitale_pt");
HAnimSite851->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CShape* Shape852 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet853 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet853->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet853->setCreaseAngle(0.5);
CCoordinate* Coordinate854 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate854->setUSE("points");
IndexedFaceSet853->setCoord(*Coordinate854);

Shape852->setGeometry(IndexedFaceSet853);

CAppearance* Appearance855 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material856 = (CMaterial *)(m_pScene.createNode("Material"));
Material856->setUSE("SITE_COLOR");
Appearance855->setMaterial(*Material856);

Shape852->setAppearance(*Appearance855);

HAnimSite851->addChildren(*Shape852);

HAnimSegment832->addChildren(*HAnimSite851);

CHAnimSite* HAnimSite857 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite857->setName("l_infraorbitale_pt");
HAnimSite857->setDEF("hanim_l_infraorbitale_pt");
HAnimSite857->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet859 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet859->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet859->setCreaseAngle(0.5);
CCoordinate* Coordinate860 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate860->setUSE("points");
IndexedFaceSet859->setCoord(*Coordinate860);

Shape858->setGeometry(IndexedFaceSet859);

CAppearance* Appearance861 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material862 = (CMaterial *)(m_pScene.createNode("Material"));
Material862->setUSE("SITE_COLOR");
Appearance861->setMaterial(*Material862);

Shape858->setAppearance(*Appearance861);

HAnimSite857->addChildren(*Shape858);

HAnimSegment832->addChildren(*HAnimSite857);

CHAnimSite* HAnimSite863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite863->setName("supramenton_pt");
HAnimSite863->setDEF("hanim_supramenton_pt");
HAnimSite863->setTranslation(new float[3]{0.0061,1.541,0.0805});
CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet865 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet865->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet865->setCreaseAngle(0.5);
CCoordinate* Coordinate866 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate866->setUSE("points");
IndexedFaceSet865->setCoord(*Coordinate866);

Shape864->setGeometry(IndexedFaceSet865);

CAppearance* Appearance867 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material868 = (CMaterial *)(m_pScene.createNode("Material"));
Material868->setUSE("SITE_COLOR");
Appearance867->setMaterial(*Material868);

Shape864->setAppearance(*Appearance867);

HAnimSite863->addChildren(*Shape864);

HAnimSegment832->addChildren(*HAnimSite863);

CHAnimSite* HAnimSite869 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite869->setName("r_tragion_pt");
HAnimSite869->setDEF("hanim_r_tragion_pt");
HAnimSite869->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet871 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet871->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet871->setCreaseAngle(0.5);
CCoordinate* Coordinate872 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate872->setUSE("points");
IndexedFaceSet871->setCoord(*Coordinate872);

Shape870->setGeometry(IndexedFaceSet871);

CAppearance* Appearance873 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material874 = (CMaterial *)(m_pScene.createNode("Material"));
Material874->setUSE("SITE_COLOR");
Appearance873->setMaterial(*Material874);

Shape870->setAppearance(*Appearance873);

HAnimSite869->addChildren(*Shape870);

HAnimSegment832->addChildren(*HAnimSite869);

CHAnimSite* HAnimSite875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite875->setName("r_gonion_pt");
HAnimSite875->setDEF("hanim_r_gonion_pt");
HAnimSite875->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet877 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet877->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet877->setCreaseAngle(0.5);
CCoordinate* Coordinate878 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate878->setUSE("points");
IndexedFaceSet877->setCoord(*Coordinate878);

Shape876->setGeometry(IndexedFaceSet877);

CAppearance* Appearance879 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material880 = (CMaterial *)(m_pScene.createNode("Material"));
Material880->setUSE("SITE_COLOR");
Appearance879->setMaterial(*Material880);

Shape876->setAppearance(*Appearance879);

HAnimSite875->addChildren(*Shape876);

HAnimSegment832->addChildren(*HAnimSite875);

CHAnimSite* HAnimSite881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite881->setName("l_tragion_pt");
HAnimSite881->setDEF("hanim_l_tragion_pt");
HAnimSite881->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CShape* Shape882 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet883 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet883->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet883->setCreaseAngle(0.5);
CCoordinate* Coordinate884 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate884->setUSE("points");
IndexedFaceSet883->setCoord(*Coordinate884);

Shape882->setGeometry(IndexedFaceSet883);

CAppearance* Appearance885 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material886 = (CMaterial *)(m_pScene.createNode("Material"));
Material886->setUSE("SITE_COLOR");
Appearance885->setMaterial(*Material886);

Shape882->setAppearance(*Appearance885);

HAnimSite881->addChildren(*Shape882);

HAnimSegment832->addChildren(*HAnimSite881);

CHAnimSite* HAnimSite887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite887->setName("l_gonion_pt");
HAnimSite887->setDEF("hanim_l_gonion_pt");
HAnimSite887->setTranslation(new float[3]{0.0631,1.553,0.033});
CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet889 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet889->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet889->setCreaseAngle(0.5);
CCoordinate* Coordinate890 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate890->setUSE("points");
IndexedFaceSet889->setCoord(*Coordinate890);

Shape888->setGeometry(IndexedFaceSet889);

CAppearance* Appearance891 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material892 = (CMaterial *)(m_pScene.createNode("Material"));
Material892->setUSE("SITE_COLOR");
Appearance891->setMaterial(*Material892);

Shape888->setAppearance(*Appearance891);

HAnimSite887->addChildren(*Shape888);

HAnimSegment832->addChildren(*HAnimSite887);

CHAnimSite* HAnimSite893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite893->setName("nuchale_pt");
HAnimSite893->setDEF("hanim_nuchale_pt");
HAnimSite893->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet895 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet895->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet895->setCreaseAngle(0.5);
CCoordinate* Coordinate896 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate896->setUSE("points");
IndexedFaceSet895->setCoord(*Coordinate896);

Shape894->setGeometry(IndexedFaceSet895);

CAppearance* Appearance897 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material898 = (CMaterial *)(m_pScene.createNode("Material"));
Material898->setUSE("SITE_COLOR");
Appearance897->setMaterial(*Material898);

Shape894->setAppearance(*Appearance897);

HAnimSite893->addChildren(*Shape894);

HAnimSegment832->addChildren(*HAnimSite893);

HAnimJoint831->addChildren(*HAnimSegment832);

HAnimJoint823->addChildren(*HAnimJoint831);

HAnimJoint815->addChildren(*HAnimJoint823);

HAnimJoint807->addChildren(*HAnimJoint815);

HAnimJoint799->addChildren(*HAnimJoint807);

HAnimJoint791->addChildren(*HAnimJoint799);

HAnimJoint783->addChildren(*HAnimJoint791);

HAnimJoint775->addChildren(*HAnimJoint783);

HAnimJoint525->addChildren(*HAnimJoint775);

HAnimJoint517->addChildren(*HAnimJoint525);

HAnimJoint509->addChildren(*HAnimJoint517);

HAnimJoint501->addChildren(*HAnimJoint509);

HAnimJoint493->addChildren(*HAnimJoint501);

HAnimJoint485->addChildren(*HAnimJoint493);

HAnimJoint477->addChildren(*HAnimJoint485);

HAnimJoint469->addChildren(*HAnimJoint477);

HAnimJoint461->addChildren(*HAnimJoint469);

HAnimJoint453->addChildren(*HAnimJoint461);

HAnimJoint445->addChildren(*HAnimJoint453);

HAnimJoint437->addChildren(*HAnimJoint445);

HAnimJoint429->addChildren(*HAnimJoint437);

HAnimJoint421->addChildren(*HAnimJoint429);

HAnimJoint413->addChildren(*HAnimJoint421);

HAnimJoint405->addChildren(*HAnimJoint413);

HAnimJoint397->addChildren(*HAnimJoint405);

HAnimJoint102->addChildren(*HAnimJoint397);

HAnimHumanoid94->setSkeleton(*HAnimJoint102);

CHAnimSite* HAnimSite899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite899->setName("DiamondManLOA_2_view");
HAnimSite899->setDEF("hanim_DiamondManLOA_2_view");
CViewpoint* Viewpoint900 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint900->setDEF("FrontView");
Viewpoint900->setDescription("Front View");
Viewpoint900->setPosition(new float[3]{0.35,0.854,2.57665});
HAnimSite899->addChildren(*Viewpoint900);

CViewpoint* Viewpoint901 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint901->setDEF("SideView");
Viewpoint901->setDescription("Side View");
Viewpoint901->setOrientation(new float[4]{0,1,0,1.57079});
Viewpoint901->setPosition(new float[3]{2,0.854,0});
HAnimSite899->addChildren(*Viewpoint901);

CViewpoint* Viewpoint902 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint902->setDEF("TopView");
Viewpoint902->setDescription("Top View");
Viewpoint902->setOrientation(new float[4]{1,0,0,-1.57079});
Viewpoint902->setPosition(new float[3]{0,3.4495,0});
HAnimSite899->addChildren(*Viewpoint902);

CViewpoint* Viewpoint903 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint903->setDEF("RootView");
Viewpoint903->setDescription("Humanoid Root View");
Viewpoint903->setPosition(new float[3]{0,0.824,0.277});
HAnimSite899->addChildren(*Viewpoint903);

CViewpoint* Viewpoint904 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint904->setDEF("InclinedView");
Viewpoint904->setDescription("Inclined View");
Viewpoint904->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint904->setPosition(new float[3]{1.62,1.05,2.06});
HAnimSite899->addChildren(*Viewpoint904);

HAnimHumanoid94->addViewpoints(*HAnimSite899);

CHAnimJoint* HAnimJoint905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint905->setUSE("hanim_HumanoidRoot");
HAnimHumanoid94->addJoints(*HAnimJoint905);

CHAnimJoint* HAnimJoint906 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint906->setUSE("hanim_sacroiliac");
HAnimHumanoid94->addJoints(*HAnimJoint906);

CHAnimJoint* HAnimJoint907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint907->setUSE("hanim_vl1");
HAnimHumanoid94->addJoints(*HAnimJoint907);

CHAnimJoint* HAnimJoint908 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint908->setUSE("hanim_vc4");
HAnimHumanoid94->addJoints(*HAnimJoint908);

CHAnimJoint* HAnimJoint909 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint909->setUSE("hanim_skullbase");
HAnimHumanoid94->addJoints(*HAnimJoint909);

CHAnimJoint* HAnimJoint910 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint910->setUSE("hanim_vl5");
HAnimHumanoid94->addJoints(*HAnimJoint910);

CHAnimJoint* HAnimJoint911 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint911->setUSE("hanim_vl4");
HAnimHumanoid94->addJoints(*HAnimJoint911);

CHAnimJoint* HAnimJoint912 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint912->setUSE("hanim_vl3");
HAnimHumanoid94->addJoints(*HAnimJoint912);

CHAnimJoint* HAnimJoint913 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint913->setUSE("hanim_vl2");
HAnimHumanoid94->addJoints(*HAnimJoint913);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setUSE("hanim_vt12");
HAnimHumanoid94->addJoints(*HAnimJoint914);

CHAnimJoint* HAnimJoint915 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint915->setUSE("hanim_vt11");
HAnimHumanoid94->addJoints(*HAnimJoint915);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setUSE("hanim_vt10");
HAnimHumanoid94->addJoints(*HAnimJoint916);

CHAnimJoint* HAnimJoint917 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint917->setUSE("hanim_vt9");
HAnimHumanoid94->addJoints(*HAnimJoint917);

CHAnimJoint* HAnimJoint918 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint918->setUSE("hanim_vt8");
HAnimHumanoid94->addJoints(*HAnimJoint918);

CHAnimJoint* HAnimJoint919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint919->setUSE("hanim_vt7");
HAnimHumanoid94->addJoints(*HAnimJoint919);

CHAnimJoint* HAnimJoint920 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint920->setUSE("hanim_vt6");
HAnimHumanoid94->addJoints(*HAnimJoint920);

CHAnimJoint* HAnimJoint921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint921->setUSE("hanim_vt5");
HAnimHumanoid94->addJoints(*HAnimJoint921);

CHAnimJoint* HAnimJoint922 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint922->setUSE("hanim_vt4");
HAnimHumanoid94->addJoints(*HAnimJoint922);

CHAnimJoint* HAnimJoint923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint923->setUSE("hanim_vt3");
HAnimHumanoid94->addJoints(*HAnimJoint923);

CHAnimJoint* HAnimJoint924 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint924->setUSE("hanim_vt2");
HAnimHumanoid94->addJoints(*HAnimJoint924);

CHAnimJoint* HAnimJoint925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint925->setUSE("hanim_vt1");
HAnimHumanoid94->addJoints(*HAnimJoint925);

CHAnimJoint* HAnimJoint926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint926->setUSE("hanim_vc7");
HAnimHumanoid94->addJoints(*HAnimJoint926);

CHAnimJoint* HAnimJoint927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint927->setUSE("hanim_vc6");
HAnimHumanoid94->addJoints(*HAnimJoint927);

CHAnimJoint* HAnimJoint928 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint928->setUSE("hanim_vc5");
HAnimHumanoid94->addJoints(*HAnimJoint928);

CHAnimJoint* HAnimJoint929 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint929->setUSE("hanim_vc3");
HAnimHumanoid94->addJoints(*HAnimJoint929);

CHAnimJoint* HAnimJoint930 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint930->setUSE("hanim_vc2");
HAnimHumanoid94->addJoints(*HAnimJoint930);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setUSE("hanim_vc1");
HAnimHumanoid94->addJoints(*HAnimJoint931);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setUSE("hanim_l_ankle");
HAnimHumanoid94->addJoints(*HAnimJoint932);

CHAnimJoint* HAnimJoint933 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint933->setUSE("hanim_r_ankle");
HAnimHumanoid94->addJoints(*HAnimJoint933);

CHAnimJoint* HAnimJoint934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint934->setUSE("hanim_l_elbow");
HAnimHumanoid94->addJoints(*HAnimJoint934);

CHAnimJoint* HAnimJoint935 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint935->setUSE("hanim_r_elbow");
HAnimHumanoid94->addJoints(*HAnimJoint935);

CHAnimJoint* HAnimJoint936 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint936->setUSE("hanim_l_hip");
HAnimHumanoid94->addJoints(*HAnimJoint936);

CHAnimJoint* HAnimJoint937 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint937->setUSE("hanim_r_hip");
HAnimHumanoid94->addJoints(*HAnimJoint937);

CHAnimJoint* HAnimJoint938 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint938->setUSE("hanim_l_index0");
HAnimHumanoid94->addJoints(*HAnimJoint938);

CHAnimJoint* HAnimJoint939 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint939->setUSE("hanim_l_index1");
HAnimHumanoid94->addJoints(*HAnimJoint939);

CHAnimJoint* HAnimJoint940 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint940->setUSE("hanim_l_index2");
HAnimHumanoid94->addJoints(*HAnimJoint940);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setUSE("hanim_l_index3");
HAnimHumanoid94->addJoints(*HAnimJoint941);

CHAnimJoint* HAnimJoint942 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint942->setUSE("hanim_l_knee");
HAnimHumanoid94->addJoints(*HAnimJoint942);

CHAnimJoint* HAnimJoint943 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint943->setUSE("hanim_r_knee");
HAnimHumanoid94->addJoints(*HAnimJoint943);

CHAnimJoint* HAnimJoint944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint944->setUSE("hanim_l_metatarsal");
HAnimHumanoid94->addJoints(*HAnimJoint944);

CHAnimJoint* HAnimJoint945 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint945->setUSE("hanim_l_midtarsal");
HAnimHumanoid94->addJoints(*HAnimJoint945);

CHAnimJoint* HAnimJoint946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint946->setUSE("hanim_r_midtarsal");
HAnimHumanoid94->addJoints(*HAnimJoint946);

CHAnimJoint* HAnimJoint947 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint947->setUSE("hanim_l_shoulder");
HAnimHumanoid94->addJoints(*HAnimJoint947);

CHAnimJoint* HAnimJoint948 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint948->setUSE("hanim_r_shoulder");
HAnimHumanoid94->addJoints(*HAnimJoint948);

CHAnimJoint* HAnimJoint949 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint949->setUSE("hanim_l_subtalar");
HAnimHumanoid94->addJoints(*HAnimJoint949);

CHAnimJoint* HAnimJoint950 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint950->setUSE("hanim_l_thumb1");
HAnimHumanoid94->addJoints(*HAnimJoint950);

CHAnimJoint* HAnimJoint951 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint951->setUSE("hanim_l_thumb2");
HAnimHumanoid94->addJoints(*HAnimJoint951);

CHAnimJoint* HAnimJoint952 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint952->setUSE("hanim_l_thumb3");
HAnimHumanoid94->addJoints(*HAnimJoint952);

CHAnimJoint* HAnimJoint953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint953->setUSE("hanim_l_wrist");
HAnimHumanoid94->addJoints(*HAnimJoint953);

CHAnimJoint* HAnimJoint954 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint954->setUSE("hanim_r_wrist");
HAnimHumanoid94->addJoints(*HAnimJoint954);

CHAnimSegment* HAnimSegment955 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment955->setUSE("hanim_pelvis");
HAnimHumanoid94->setSegments(*HAnimSegment955);

CHAnimSegment* HAnimSegment956 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment956->setUSE("hanim_c7");
HAnimHumanoid94->setSegments(*HAnimSegment956);

CHAnimSegment* HAnimSegment957 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment957->setUSE("hanim_c4");
HAnimHumanoid94->setSegments(*HAnimSegment957);

CHAnimSegment* HAnimSegment958 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment958->setUSE("hanim_skull");
HAnimHumanoid94->setSegments(*HAnimSegment958);

CHAnimSegment* HAnimSegment959 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment959->setUSE("hanim_sacrum");
HAnimHumanoid94->setSegments(*HAnimSegment959);

CHAnimSegment* HAnimSegment960 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment960->setUSE("hanim_midproximal");
HAnimHumanoid94->setSegments(*HAnimSegment960);

CHAnimSegment* HAnimSegment961 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment961->setUSE("hanim_l5");
HAnimHumanoid94->setSegments(*HAnimSegment961);

CHAnimSegment* HAnimSegment962 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment962->setUSE("hanim_l4");
HAnimHumanoid94->setSegments(*HAnimSegment962);

CHAnimSegment* HAnimSegment963 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment963->setUSE("hanim_l3");
HAnimHumanoid94->setSegments(*HAnimSegment963);

CHAnimSegment* HAnimSegment964 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment964->setUSE("hanim_l2");
HAnimHumanoid94->setSegments(*HAnimSegment964);

CHAnimSegment* HAnimSegment965 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment965->setUSE("hanim_l1");
HAnimHumanoid94->setSegments(*HAnimSegment965);

CHAnimSegment* HAnimSegment966 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment966->setUSE("hanim_t12");
HAnimHumanoid94->setSegments(*HAnimSegment966);

CHAnimSegment* HAnimSegment967 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment967->setUSE("hanim_t11");
HAnimHumanoid94->setSegments(*HAnimSegment967);

CHAnimSegment* HAnimSegment968 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment968->setUSE("hanim_t10");
HAnimHumanoid94->setSegments(*HAnimSegment968);

CHAnimSegment* HAnimSegment969 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment969->setUSE("hanim_t9");
HAnimHumanoid94->setSegments(*HAnimSegment969);

CHAnimSegment* HAnimSegment970 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment970->setUSE("hanim_t8");
HAnimHumanoid94->setSegments(*HAnimSegment970);

CHAnimSegment* HAnimSegment971 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment971->setUSE("hanim_t7");
HAnimHumanoid94->setSegments(*HAnimSegment971);

CHAnimSegment* HAnimSegment972 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment972->setUSE("hanim_t6");
HAnimHumanoid94->setSegments(*HAnimSegment972);

CHAnimSegment* HAnimSegment973 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment973->setUSE("hanim_t5");
HAnimHumanoid94->setSegments(*HAnimSegment973);

CHAnimSegment* HAnimSegment974 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment974->setUSE("hanim_t4");
HAnimHumanoid94->setSegments(*HAnimSegment974);

CHAnimSegment* HAnimSegment975 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment975->setUSE("hanim_t3");
HAnimHumanoid94->setSegments(*HAnimSegment975);

CHAnimSegment* HAnimSegment976 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment976->setUSE("hanim_t2");
HAnimHumanoid94->setSegments(*HAnimSegment976);

CHAnimSegment* HAnimSegment977 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment977->setUSE("hanim_t1");
HAnimHumanoid94->setSegments(*HAnimSegment977);

CHAnimSegment* HAnimSegment978 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment978->setUSE("hanim_c6");
HAnimHumanoid94->setSegments(*HAnimSegment978);

CHAnimSegment* HAnimSegment979 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment979->setUSE("hanim_c5");
HAnimHumanoid94->setSegments(*HAnimSegment979);

CHAnimSegment* HAnimSegment980 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment980->setUSE("hanim_c3");
HAnimHumanoid94->setSegments(*HAnimSegment980);

CHAnimSegment* HAnimSegment981 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment981->setUSE("hanim_c2");
HAnimHumanoid94->setSegments(*HAnimSegment981);

CHAnimSegment* HAnimSegment982 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment982->setUSE("hanim_c1");
HAnimHumanoid94->setSegments(*HAnimSegment982);

CHAnimSegment* HAnimSegment983 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment983->setUSE("hanim_l_calf");
HAnimHumanoid94->setSegments(*HAnimSegment983);

CHAnimSegment* HAnimSegment984 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment984->setUSE("hanim_r_calf");
HAnimHumanoid94->setSegments(*HAnimSegment984);

CHAnimSegment* HAnimSegment985 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment985->setUSE("hanim_l_forearm");
HAnimHumanoid94->setSegments(*HAnimSegment985);

CHAnimSegment* HAnimSegment986 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment986->setUSE("hanim_r_forearm");
HAnimHumanoid94->setSegments(*HAnimSegment986);

CHAnimSegment* HAnimSegment987 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment987->setUSE("hanim_l_forefoot");
HAnimHumanoid94->setSegments(*HAnimSegment987);

CHAnimSegment* HAnimSegment988 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment988->setUSE("hanim_l_hand");
HAnimHumanoid94->setSegments(*HAnimSegment988);

CHAnimSegment* HAnimSegment989 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment989->setUSE("hanim_r_hand");
HAnimHumanoid94->setSegments(*HAnimSegment989);

CHAnimSegment* HAnimSegment990 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment990->setUSE("hanim_l_hindfoot");
HAnimHumanoid94->setSegments(*HAnimSegment990);

CHAnimSegment* HAnimSegment991 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment991->setUSE("hanim_r_hindfoot");
HAnimHumanoid94->setSegments(*HAnimSegment991);

CHAnimSegment* HAnimSegment992 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment992->setUSE("hanim_l_index_distal");
HAnimHumanoid94->setSegments(*HAnimSegment992);

CHAnimSegment* HAnimSegment993 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment993->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid94->setSegments(*HAnimSegment993);

CHAnimSegment* HAnimSegment994 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment994->setUSE("hanim_l_index_middle");
HAnimHumanoid94->setSegments(*HAnimSegment994);

CHAnimSegment* HAnimSegment995 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment995->setUSE("hanim_l_index_proximal");
HAnimHumanoid94->setSegments(*HAnimSegment995);

CHAnimSegment* HAnimSegment996 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment996->setUSE("hanim_l_middistal");
HAnimHumanoid94->setSegments(*HAnimSegment996);

CHAnimSegment* HAnimSegment997 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment997->setUSE("hanim_r_middistal");
HAnimHumanoid94->setSegments(*HAnimSegment997);

CHAnimSegment* HAnimSegment998 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment998->setUSE("hanim_l_thigh");
HAnimHumanoid94->setSegments(*HAnimSegment998);

CHAnimSegment* HAnimSegment999 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment999->setUSE("hanim_r_thigh");
HAnimHumanoid94->setSegments(*HAnimSegment999);

CHAnimSegment* HAnimSegment1000 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1000->setUSE("hanim_l_thumb_distal");
HAnimHumanoid94->setSegments(*HAnimSegment1000);

CHAnimSegment* HAnimSegment1001 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1001->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid94->setSegments(*HAnimSegment1001);

CHAnimSegment* HAnimSegment1002 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1002->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid94->setSegments(*HAnimSegment1002);

CHAnimSegment* HAnimSegment1003 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1003->setUSE("hanim_l_upperarm");
HAnimHumanoid94->setSegments(*HAnimSegment1003);

CHAnimSegment* HAnimSegment1004 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1004->setUSE("hanim_r_upperarm");
HAnimHumanoid94->setSegments(*HAnimSegment1004);

CHAnimSite* HAnimSite1005 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1005->setUSE("hanim_crotch_pt");
HAnimHumanoid94->setSites(*HAnimSite1005);

CHAnimSite* HAnimSite1006 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1006->setUSE("hanim_skull_tip");
HAnimHumanoid94->setSites(*HAnimSite1006);

CHAnimSite* HAnimSite1007 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1007->setUSE("hanim_sellion_pt");
HAnimHumanoid94->setSites(*HAnimSite1007);

CHAnimSite* HAnimSite1008 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1008->setUSE("hanim_supramenton_pt");
HAnimHumanoid94->setSites(*HAnimSite1008);

CHAnimSite* HAnimSite1009 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1009->setUSE("hanim_nuchale_pt");
HAnimHumanoid94->setSites(*HAnimSite1009);

CHAnimSite* HAnimSite1010 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1010->setUSE("hanim_r_asis_pt");
HAnimHumanoid94->setSites(*HAnimSite1010);

CHAnimSite* HAnimSite1011 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1011->setUSE("hanim_l_asis_pt");
HAnimHumanoid94->setSites(*HAnimSite1011);

CHAnimSite* HAnimSite1012 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1012->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid94->setSites(*HAnimSite1012);

CHAnimSite* HAnimSite1013 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1013->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid94->setSites(*HAnimSite1013);

CHAnimSite* HAnimSite1014 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1014->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid94->setSites(*HAnimSite1014);

CHAnimSite* HAnimSite1015 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1015->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid94->setSites(*HAnimSite1015);

CHAnimSite* HAnimSite1016 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1016->setUSE("hanim_l_digit2_pt");
HAnimHumanoid94->setSites(*HAnimSite1016);

CHAnimSite* HAnimSite1017 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1017->setUSE("hanim_r_digit2_pt");
HAnimHumanoid94->setSites(*HAnimSite1017);

CHAnimSite* HAnimSite1018 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1018->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1018);

CHAnimSite* HAnimSite1019 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1019->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1019);

CHAnimSite* HAnimSite1020 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1020->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1020);

CHAnimSite* HAnimSite1021 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1021->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1021);

CHAnimSite* HAnimSite1022 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1022->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid94->setSites(*HAnimSite1022);

CHAnimSite* HAnimSite1023 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1023->setUSE("hanim_r_gonion_pt");
HAnimHumanoid94->setSites(*HAnimSite1023);

CHAnimSite* HAnimSite1024 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1024->setUSE("hanim_l_gonion_pt");
HAnimHumanoid94->setSites(*HAnimSite1024);

CHAnimSite* HAnimSite1025 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1025->setUSE("hanim_l_hand_tip");
HAnimHumanoid94->setSites(*HAnimSite1025);

CHAnimSite* HAnimSite1026 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1026->setUSE("hanim_r_hand_tip");
HAnimHumanoid94->setSites(*HAnimSite1026);

CHAnimSite* HAnimSite1027 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1027->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1027);

CHAnimSite* HAnimSite1028 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1028->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1028);

CHAnimSite* HAnimSite1029 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1029->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1029);

CHAnimSite* HAnimSite1030 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1030->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid94->setSites(*HAnimSite1030);

CHAnimSite* HAnimSite1031 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1031->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid94->setSites(*HAnimSite1031);

CHAnimSite* HAnimSite1032 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1032->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid94->setSites(*HAnimSite1032);

CHAnimSite* HAnimSite1033 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1033->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid94->setSites(*HAnimSite1033);

CHAnimSite* HAnimSite1034 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1034->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid94->setSites(*HAnimSite1034);

CHAnimSite* HAnimSite1035 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1035->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid94->setSites(*HAnimSite1035);

CHAnimSite* HAnimSite1036 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1036->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid94->setSites(*HAnimSite1036);

CHAnimSite* HAnimSite1037 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1037->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid94->setSites(*HAnimSite1037);

CHAnimSite* HAnimSite1038 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1038->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid94->setSites(*HAnimSite1038);

CHAnimSite* HAnimSite1039 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1039->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid94->setSites(*HAnimSite1039);

CHAnimSite* HAnimSite1040 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1040->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid94->setSites(*HAnimSite1040);

CHAnimSite* HAnimSite1041 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1041->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid94->setSites(*HAnimSite1041);

CHAnimSite* HAnimSite1042 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1042->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid94->setSites(*HAnimSite1042);

CHAnimSite* HAnimSite1043 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1043->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid94->setSites(*HAnimSite1043);

CHAnimSite* HAnimSite1044 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1044->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid94->setSites(*HAnimSite1044);

CHAnimSite* HAnimSite1045 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1045->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid94->setSites(*HAnimSite1045);

CHAnimSite* HAnimSite1046 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1046->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid94->setSites(*HAnimSite1046);

CHAnimSite* HAnimSite1047 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1047->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid94->setSites(*HAnimSite1047);

CHAnimSite* HAnimSite1048 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1048->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid94->setSites(*HAnimSite1048);

CHAnimSite* HAnimSite1049 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1049->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid94->setSites(*HAnimSite1049);

CHAnimSite* HAnimSite1050 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1050->setUSE("hanim_l_middistal_tip");
HAnimHumanoid94->setSites(*HAnimSite1050);

CHAnimSite* HAnimSite1051 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1051->setUSE("hanim_r_middistal_tip");
HAnimHumanoid94->setSites(*HAnimSite1051);

CHAnimSite* HAnimSite1052 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1052->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid94->setSites(*HAnimSite1052);

CHAnimSite* HAnimSite1053 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1053->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid94->setSites(*HAnimSite1053);

CHAnimSite* HAnimSite1054 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1054->setUSE("hanim_r_psis_pt");
HAnimHumanoid94->setSites(*HAnimSite1054);

CHAnimSite* HAnimSite1055 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1055->setUSE("hanim_l_psis_pt");
HAnimHumanoid94->setSites(*HAnimSite1055);

CHAnimSite* HAnimSite1056 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1056->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid94->setSites(*HAnimSite1056);

CHAnimSite* HAnimSite1057 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1057->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid94->setSites(*HAnimSite1057);

CHAnimSite* HAnimSite1058 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1058->setUSE("hanim_l_radiale_pt");
HAnimHumanoid94->setSites(*HAnimSite1058);

CHAnimSite* HAnimSite1059 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1059->setUSE("hanim_r_radiale_pt");
HAnimHumanoid94->setSites(*HAnimSite1059);

CHAnimSite* HAnimSite1060 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1060->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid94->setSites(*HAnimSite1060);

CHAnimSite* HAnimSite1061 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1061->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid94->setSites(*HAnimSite1061);

CHAnimSite* HAnimSite1062 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1062->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid94->setSites(*HAnimSite1062);

CHAnimSite* HAnimSite1063 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1063->setUSE("hanim_r_tragion_pt");
HAnimHumanoid94->setSites(*HAnimSite1063);

CHAnimSite* HAnimSite1064 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1064->setUSE("hanim_l_tragion_pt");
HAnimHumanoid94->setSites(*HAnimSite1064);

CHAnimSite* HAnimSite1065 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1065->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid94->setSites(*HAnimSite1065);

CHAnimSite* HAnimSite1066 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1066->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid94->setSites(*HAnimSite1066);

CHAnimSite* HAnimSite1067 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1067->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid94->setSites(*HAnimSite1067);

CHAnimSite* HAnimSite1068 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1068->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid94->setSites(*HAnimSite1068);

group->addChildren(*HAnimHumanoid94);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
