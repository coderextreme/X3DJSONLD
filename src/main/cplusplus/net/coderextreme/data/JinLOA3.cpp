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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("JinLOA3.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Jin Hoon Lee and Min Joo Lee");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Chul Hee Jung and Myeong Won Lee");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("31 March 2011");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translated");
meta7->setContent("1 November 2014");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("23 December 2021");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("description");
meta9->setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("KoreanCharacter00ReadMe.txt");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("KoreanCharactersIllustrated.pdf");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("identifier");
meta13->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA3.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("Suwon HAnim Converter");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("Gnu Image Manipulation Program, http://www.gimp.org");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("generator");
meta17->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("license");
meta18->setContent("../license.html");
head1->addMeta(*meta18);

X3D0->setHead(*head1);

CScene* Scene19 = new CScene();
CWorldInfo* WorldInfo20 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo20->setTitle("JinLOA3.x3d");
group->addChildren(*WorldInfo20);

CNavigationInfo* NavigationInfo21 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo21->setSpeed(1.5);
group->addChildren(*NavigationInfo21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint22->setDescription("JinLOA3");
Viewpoint22->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint22);

CHAnimHumanoid* HAnimHumanoid23 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid23->setName("JinLOA3");
HAnimHumanoid23->setDEF("hanim_JinLOA3");
HAnimHumanoid23->setLoa(3);
HAnimHumanoid23->setScale(new float[3]{0.0225,0.0225,0.0225});
HAnimHumanoid23->setVersion("2.0");
CMetadataSet* MetadataSet24 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet24->setName("HAnimHumanoid.info");
MetadataSet24->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString25 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString25->setName("authorName");
MetadataString25->setValue(new CString[1]{"Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"}, 1);
MetadataSet24->setValue(*MetadataString25);

CMetadataString* MetadataString26 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString26->setName("authorEmail");
MetadataString26->setValue(new CString[1]{"myeongwonlee@gmail.com"}, 1);
MetadataSet24->addValue(*MetadataString26);

CMetadataString* MetadataString27 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString27->setName("creationDate");
MetadataString27->setValue(new CString[1]{"31 March 2011"}, 1);
MetadataSet24->addValue(*MetadataString27);

CMetadataString* MetadataString28 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString28->setName("gender");
MetadataString28->setValue(new CString[1]{"female"}, 1);
MetadataSet24->addValue(*MetadataString28);

CMetadataFloat* MetadataFloat29 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat29->setName("height");
MetadataFloat29->setValue(new float[1]{1.5}, 1);
MetadataSet24->addValue(*MetadataFloat29);

CMetadataString* MetadataString30 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString30->setName("humanoidVersion");
MetadataString30->setValue(new CString[1]{"2.0"}, 1);
MetadataSet24->addValue(*MetadataString30);

HAnimHumanoid23->setMetadata(*MetadataSet24);

CHAnimJoint* HAnimJoint31 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint31->setName("humanoid_root");
HAnimJoint31->setDEF("hanim_humanoid_root");
HAnimJoint31->setCenter(new float[3]{0,35.799999,-0.7076});
HAnimJoint31->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint31->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment32 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment32->setName("sacrum");
HAnimSegment32->setDEF("hanim_sacrum");
CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setTranslation(new float[3]{0,35.799999,-0.7076});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance35->setMaterial(*Material36);

CImageTexture* ImageTexture37 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture37->setDEF("JinLOA3TextureAtlas");
ImageTexture37->setUrl(new CString[2]{"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"}, 2);
Appearance35->setTexture(*ImageTexture37);

Shape34->setAppearance(*Appearance35);

CIndexedFaceSet* IndexedFaceSet38 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet38->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
IndexedFaceSet38->setCreaseAngle(3.14159);
IndexedFaceSet38->setTexCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
CCoordinate* Coordinate39 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate39->setPoint(new float[186]{0,1.053,0.0273,0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.875,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0,0.9123,0.596,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.875,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.98,0.5267,-0.4285,-1.132,0.5267,0.0273,-0.98,0.5267,0.483,-0.5658,0.5267,0.6985,0,0.5267,0.8206,0.5658,0.5267,0.6985,0.98,0.5267,0.483,1.132,0.5267,0.0273,0.98,0.5267,-0.4285,0.5658,0.5267,-0.7621,0,0,-0.9616,-0.6534,0,-0.8206,-1.132,0,-0.4353,-1.307,0,0.0273,-1.132,0,0.5536,-0.6534,0,0.8206,0,0,0.9616,0.6534,0,0.8206,1.132,0,0.5536,1.307,0,0.0273,1.132,0,-0.4353,0.6534,0,-0.8206,0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.98,-0.5267,-0.3648,-1.132,-0.5267,0.0273,-0.98,-0.5267,0.483,-0.5658,-0.5267,0.6985,0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.98,-0.5267,0.483,1.132,-0.5267,0.0273,0.98,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.483,0,-0.9123,0.5536,0.3267,-0.9123,0.483,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0,-1.053,0.0273});
IndexedFaceSet38->setCoord(*Coordinate39);

CTextureCoordinate* TextureCoordinate40 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate40->setPoint(new float[124]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398});
IndexedFaceSet38->setTexCoord(*TextureCoordinate40);

Shape34->setGeometry(IndexedFaceSet38);

Transform33->addChildren(*Shape34);

HAnimSegment32->addChildren(*Transform33);

HAnimJoint31->addChildren(*HAnimSegment32);

CHAnimJoint* HAnimJoint41 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint41->setName("sacroiliac");
HAnimJoint41->setDEF("hanim_sacroiliac");
HAnimJoint41->setCenter(new float[3]{0,30.530001,-0.7076});
HAnimJoint41->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint41->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment42 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment42->setName("pelvis");
HAnimSegment42->setDEF("hanim_pelvis");
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setTranslation(new float[3]{0,30.530001,-0.7076});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance45->setMaterial(*Material46);

CImageTexture* ImageTexture47 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture47->setUSE("JinLOA3TextureAtlas");
Appearance45->setTexture(*ImageTexture47);

Shape44->setAppearance(*Appearance45);

CIndexedFaceSet* IndexedFaceSet48 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet48->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
IndexedFaceSet48->setCreaseAngle(3.14159);
IndexedFaceSet48->setTexCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
CCoordinate* Coordinate49 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate49->setPoint(new float[186]{0,10.79,0.1424,0,10.06,-2.825,-2.283,10.06,-2.428,-3.954,10.06,-1.948,-4.566,10.06,0.1424,-3.954,10.06,2.233,-2.283,10.06,2.712,0,10.06,3.11,2.283,10.06,2.712,3.954,10.06,2.233,4.566,10.06,0.1424,3.954,10.06,-1.948,2.283,10.06,-2.428,0,8.045,-4.614,-2.953,8.045,-3.977,-5.114,8.045,-2.236,-5.905,8.045,0.1424,-5.114,8.045,2.521,-2.953,8.045,3.645,0,8.045,4.282,2.953,8.045,3.645,5.114,8.045,2.521,5.905,8.045,0.1424,5.114,8.045,-2.236,2.953,8.045,-3.977,0,5.297,-5.018,-3.409,5.297,-4.282,-5.905,5.297,-2.272,-6.819,5.297,0.1424,-5.905,5.297,2.889,-3.409,5.297,4.282,0,5.297,5.018,3.409,5.297,4.282,5.905,5.297,2.889,6.819,5.297,0.1424,5.905,5.297,-2.272,3.409,5.297,-4.282,0,2.548,-4.282,-2.953,2.548,-3.645,-5.114,2.548,-1.904,-5.905,2.548,0.1424,-5.114,2.548,2.521,-2.953,2.548,3.645,0,2.548,4.282,2.953,2.548,3.645,5.114,2.548,2.521,5.905,2.548,0.1424,5.114,2.548,-1.904,2.953,2.548,-3.645,0,0.5362,-2.272,-1.705,0.5362,-1.904,-2.953,0.5362,-1.231,-3.409,0.5362,0.1424,-2.953,0.5362,1.516,-1.705,0.5362,2.521,0,0.5362,2.889,1.705,0.5362,2.521,2.953,0.5362,1.516,3.409,0.5362,0.1424,2.953,0.5362,-1.231,1.705,0.5362,-1.904,0,-0.2003,0.1424});
IndexedFaceSet48->setCoord(*Coordinate49);

CTextureCoordinate* TextureCoordinate50 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate50->setPoint(new float[124]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398});
IndexedFaceSet48->setTexCoord(*TextureCoordinate50);

Shape44->setGeometry(IndexedFaceSet48);

Transform43->addChildren(*Shape44);

HAnimSegment42->addChildren(*Transform43);

HAnimJoint41->addChildren(*HAnimSegment42);

CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setName("l_hip");
HAnimJoint51->setDEF("hanim_l_hip");
HAnimJoint51->setCenter(new float[3]{4.207,35.830002,-0.8155});
HAnimJoint51->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint51->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment52 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment52->setName("l_thigh");
HAnimSegment52->setDEF("hanim_l_thigh");
CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setTranslation(new float[3]{4.207,35.830002,-0.8155});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance55->setMaterial(*Material56);

CImageTexture* ImageTexture57 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture57->setUSE("JinLOA3TextureAtlas");
Appearance55->setTexture(*ImageTexture57);

Shape54->setAppearance(*Appearance55);

CIndexedFaceSet* IndexedFaceSet58 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet58->setCoordIndex(new int[488]{47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
IndexedFaceSet58->setCreaseAngle(3.14159);
IndexedFaceSet58->setTexCoordIndex(new int[488]{5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
CCoordinate* Coordinate59 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate59->setPoint(new float[189]{2.96,-0.0706,0,1.643,-0.0706,3.209,-1.316,-0.0706,4.002,-3.367,-0.0706,1.781,-3.367,-0.0706,-1.781,-1.316,-0.0706,-4.002,1.643,-0.0706,-3.209,2.96,-3.82,0,1.643,-3.82,3.209,-1.316,-3.82,4.002,-3.367,-3.82,1.781,-3.367,-3.82,-1.781,-1.316,-3.82,-4.002,1.643,-3.82,-3.209,2.96,-10.32,0,1.643,-10.32,3.209,-1.316,-10.32,4.002,-3.367,-10.32,1.781,-3.367,-10.32,-1.781,-1.316,-10.32,-4.002,1.643,-10.32,-3.209,3.367,-16.94,0,1.897,-16.94,3.582,-1.407,-16.94,4.467,-3.355,-16.94,1.988,-3.355,-16.94,-1.988,-1.407,-16.94,-4.467,1.897,-16.94,-3.582,2.146,-8.794,0,1.136,-8.794,2.462,-1.135,-8.794,3.07,-2.633,-8.794,1.366,-2.633,-8.794,-1.366,-1.135,-8.794,-3.07,1.136,-8.794,-2.462,2.156,-15.25,0,1.225,-15.25,1.956,-0.8662,-15.25,2.439,-2.543,-15.25,1.085,-2.543,-15.25,-1.085,-0.8662,-15.25,-2.439,1.225,-15.25,-1.956,2.051,1.92,0,1.076,1.92,2.375,-1.114,1.92,2.961,-2.87,1.92,1.318,-2.87,1.92,-1.318,-1.114,1.92,-2.961,1.076,1.92,-2.375,1.842,-18.93,0,1.03,-18.93,1.873,-0.7965,-18.93,2.295,-2.261,-18.93,1.113,-2.261,-18.93,-0.9478,-0.7965,-18.93,-2.13,1.03,-18.93,-1.708,0.6277,-19.91,0,0.2723,-19.91,0.912,-0.5262,-19.91,1.096,-1.167,-19.91,0.5796,-1.167,-19.91,-0.4145,-0.5262,-19.91,-0.9313,0.2723,-19.91,-0.7469});
IndexedFaceSet58->setCoord(*Coordinate59);

CTextureCoordinate* TextureCoordinate60 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate60->setPoint(new float[140]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581});
IndexedFaceSet58->setTexCoord(*TextureCoordinate60);

Shape54->setGeometry(IndexedFaceSet58);

Transform53->addChildren(*Shape54);

HAnimSegment52->addChildren(*Transform53);

HAnimJoint51->addChildren(*HAnimSegment52);

CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setName("l_knee");
HAnimJoint61->setDEF("hanim_l_knee");
HAnimJoint61->setCenter(new float[3]{4.116,17.26,-0.8639});
HAnimJoint61->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint61->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment62 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment62->setName("l_calf");
HAnimSegment62->setDEF("hanim_l_calf");
CTransform* Transform63 = (CTransform *)(m_pScene.createNode("Transform"));
Transform63->setTranslation(new float[3]{4.116,17.26,-0.8639});
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance65 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material66 = (CMaterial *)(m_pScene.createNode("Material"));
Material66->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance65->setMaterial(*Material66);

CImageTexture* ImageTexture67 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture67->setUSE("JinLOA3TextureAtlas");
Appearance65->setTexture(*ImageTexture67);

Shape64->setAppearance(*Appearance65);

CIndexedFaceSet* IndexedFaceSet68 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet68->setCoordIndex(new int[300]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
IndexedFaceSet68->setCreaseAngle(3.14159);
IndexedFaceSet68->setTexCoordIndex(new int[300]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
CCoordinate* Coordinate69 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate69->setPoint(new float[126]{0.7186,0.9688,0.0234,0.3632,0.9688,0.9354,-0.4353,0.9688,1.12,-1.076,0.9688,0.603,-1.076,0.9688,-0.3911,-0.4353,0.9688,-0.9079,0.3632,0.9688,-0.7235,2.337,-4.613,0.0234,1.46,-3.622,2.019,1.236,-1.628,2.42,2.118,-1.912,0.0234,-0.8111,-3.622,2.567,-0.7468,-1.628,2.903,-2.254,-4.613,1.255,-2.337,-1.912,0.9793,-2.254,-5.383,-1.368,-2.337,-1.912,-0.9325,-0.8111,-5.383,-2.903,-0.7468,-1.912,-2.368,1.46,-5.383,-2.355,1.236,-1.912,-1.885,1.121,-0.0032,1.896,1.933,-0.0032,0.0234,-0.7056,-0.0032,2.318,-2.17,-0.0032,1.136,-2.17,-0.0032,-0.9244,-0.7056,-0.0032,-2.061,1.121,-0.0032,-1.64,1.607,-12.92,0.0032,0.9216,-12.91,1.565,-0.619,-12.91,1.951,-1.854,-12.92,0.8701,-1.854,-12.94,-0.9762,-0.619,-12.94,-1.742,0.9216,-12.94,-1.356,0.7072,-14.53,0.0239,0.3604,-14.53,0.814,-0.4188,-14.53,1.009,-1.044,-14.53,0.4624,-1.044,-14.54,-0.4714,-0.4188,-14.54,-0.8587,0.3604,-14.54,-0.6635});
IndexedFaceSet68->setCoord(*Coordinate69);

CTextureCoordinate* TextureCoordinate70 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate70->setPoint(new float[84]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243});
IndexedFaceSet68->setTexCoord(*TextureCoordinate70);

Shape64->setGeometry(IndexedFaceSet68);

Transform63->addChildren(*Shape64);

HAnimSegment62->addChildren(*Transform63);

HAnimJoint61->addChildren(*HAnimSegment62);

CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("l_talocrural");
HAnimJoint71->setDEF("hanim_l_talocrural");
HAnimJoint71->setCenter(new float[3]{3.854,3.939,-0.7038});
HAnimJoint71->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint71->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment72 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment72->setName("l_talus");
HAnimSegment72->setDEF("hanim_l_talus");
CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
Transform73->setTranslation(new float[3]{3.854,3.939,-0.7038});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance75->setMaterial(*Material76);

CImageTexture* ImageTexture77 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture77->setUSE("JinLOA3TextureAtlas");
Appearance75->setTexture(*ImageTexture77);

Shape74->setAppearance(*Appearance75);

CIndexedFaceSet* IndexedFaceSet78 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet78->setCoordIndex(new int[200]{1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1});
IndexedFaceSet78->setCreaseAngle(3.14159);
IndexedFaceSet78->setTexCoordIndex(new int[200]{1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1});
CCoordinate* Coordinate79 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate79->setPoint(new float[81]{0.9768,-0.0192,-1.681,1.657,-0.0192,0.4309,0,-0.0192,-1.681,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0,0.7316,-1.463,0,0.7316,1.471,-1.657,-0.0192,0.4309,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,-0.9768,-0.0192,-1.681,0,-0.0192,1.75,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0,-0.6007,-2.046,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0,-1.207,-1.841,1.023,-1.207,-1.841,1.913,-1.223,0.5161,1.601,-0.9325,1.406,0,-0.6582,1.708,-1.601,-0.9325,1.406,-1.913,-1.223,0.5161,-1.023,-1.207,-1.841});
IndexedFaceSet78->setCoord(*Coordinate79);

CTextureCoordinate* TextureCoordinate80 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate80->setPoint(new float[64]{0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398});
IndexedFaceSet78->setTexCoord(*TextureCoordinate80);

Shape74->setGeometry(IndexedFaceSet78);

Transform73->addChildren(*Shape74);

HAnimSegment72->addChildren(*Transform73);

HAnimJoint71->addChildren(*HAnimSegment72);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setName("l_tarsometatarsal_2");
HAnimJoint81->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint81->setCenter(new float[3]{3.854,3.336,-1.514});
HAnimJoint81->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint81->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment82 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment82->setName("l_metatarsal_2");
HAnimSegment82->setDEF("hanim_l_metatarsal_2");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setTranslation(new float[3]{3.854,3.336,-1.514});
CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance85 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material86 = (CMaterial *)(m_pScene.createNode("Material"));
Material86->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance85->setMaterial(*Material86);

CImageTexture* ImageTexture87 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture87->setUSE("JinLOA3TextureAtlas");
Appearance85->setTexture(*ImageTexture87);

Shape84->setAppearance(*Appearance85);

CIndexedFaceSet* IndexedFaceSet88 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet88->setCoordIndex(new int[208]{6,4,3,-1,3,0,6,-1,9,0,3,-1,3,11,9,-1,2,6,0,-1,0,1,2,-1,10,1,0,-1,0,9,10,-1,1,10,15,-1,15,2,1,-1,6,5,7,-1,7,4,6,-1,12,13,7,-1,7,5,12,-1,2,8,5,-1,5,6,2,-1,14,12,5,-1,5,8,14,-1,8,2,15,-1,15,14,8,-1,17,18,19,-1,17,19,20,-1,17,20,16,-1,24,25,26,-1,27,21,22,-1,26,27,22,-1,24,26,22,-1,24,22,23,-1,3,4,17,-1,17,16,3,-1,4,7,18,-1,18,17,4,-1,7,13,19,-1,19,18,7,-1,13,11,20,-1,20,19,13,-1,11,3,16,-1,16,20,11,-1,10,9,22,-1,22,21,10,-1,9,11,23,-1,23,22,9,-1,11,13,24,-1,24,23,11,-1,13,12,25,-1,25,24,13,-1,12,14,26,-1,26,25,12,-1,14,15,27,-1,27,26,14,-1,15,10,21,-1,21,27,15,-1});
IndexedFaceSet88->setCreaseAngle(3.14159);
IndexedFaceSet88->setTexCoordIndex(new int[208]{2,6,5,-1,5,0,2,-1,14,0,5,-1,5,16,14,-1,3,2,0,-1,0,1,3,-1,15,1,0,-1,0,14,15,-1,1,15,21,-1,21,4,1,-1,8,7,10,-1,10,9,8,-1,17,18,10,-1,10,7,17,-1,12,11,7,-1,7,8,12,-1,19,17,7,-1,7,11,19,-1,11,13,20,-1,20,19,11,-1,23,24,25,-1,23,25,26,-1,23,26,22,-1,30,31,32,-1,33,27,28,-1,32,33,28,-1,30,32,28,-1,30,28,29,-1,5,6,23,-1,23,22,5,-1,9,10,24,-1,24,23,9,-1,10,18,25,-1,25,24,10,-1,18,16,26,-1,26,25,18,-1,16,5,22,-1,22,26,16,-1,15,14,28,-1,28,27,15,-1,14,16,29,-1,29,28,14,-1,16,18,30,-1,30,29,16,-1,18,17,31,-1,31,30,18,-1,17,19,32,-1,32,31,17,-1,19,20,33,-1,33,32,19,-1,21,15,27,-1,27,33,21,-1});
CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setPoint(new float[84]{1.409,-1.322,-2.067,1.409,-3.344,-0.8708,0,-3.344,-0.8708,1.109,0.0027,-1.236,0,0.0027,-1.236,-1.409,-1.322,-2.067,0,-1.322,-2.067,-1.109,0.0027,-1.236,-1.409,-3.344,-0.8708,2.927,-1.322,1.241,2.089,-3.344,1.241,2.045,0.0027,1.241,-2.927,-1.322,1.241,-2.045,0.0027,1.241,-2.089,-3.344,1.241,0,-3.344,1.241,0.9442,0.2881,-0.8816,0,0.2881,-0.8816,-0.9442,0.2881,-0.8816,-1.7,0.2881,1.12,1.7,0.2881,1.12,1.86,-3.19,2.175,2.541,-1.36,2.175,1.861,-0.3398,2.175,-1.861,-0.3398,2.175,-2.541,-1.36,2.175,-1.86,-3.19,2.175,0,-3.19,2.175});
IndexedFaceSet88->setCoord(*Coordinate89);

CTextureCoordinate* TextureCoordinate90 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate90->setPoint(new float[68]{0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186});
IndexedFaceSet88->setTexCoord(*TextureCoordinate90);

Shape84->setGeometry(IndexedFaceSet88);

Transform83->addChildren(*Shape84);

HAnimSegment82->addChildren(*Transform83);

HAnimJoint81->addChildren(*HAnimSegment82);

CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setName("l_metatarsophalangeal_2");
HAnimJoint91->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint91->setCenter(new float[3]{3.854,3.64,0.7402});
HAnimJoint91->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint91->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment92 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment92->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment92->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{3.854,3.64,0.7402});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance95 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material96 = (CMaterial *)(m_pScene.createNode("Material"));
Material96->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance95->setMaterial(*Material96);

CImageTexture* ImageTexture97 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture97->setUSE("JinLOA3TextureAtlas");
Appearance95->setTexture(*ImageTexture97);

Shape94->setAppearance(*Appearance95);

CIndexedFaceSet* IndexedFaceSet98 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet98->setCoordIndex(new int[248]{3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,26,27,28,-1,28,29,30,-1,26,28,30,-1,26,30,31,-1,26,31,32,-1,26,32,25,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,11,10,26,-1,26,25,11,-1,10,17,27,-1,27,26,10,-1,17,13,28,-1,28,27,17,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,15,16,31,-1,31,30,15,-1,16,12,32,-1,32,31,16,-1,12,11,25,-1,25,32,12,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1});
IndexedFaceSet98->setCreaseAngle(3.14159);
IndexedFaceSet98->setTexCoordIndex(new int[248]{4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,30,31,32,-1,32,33,34,-1,30,32,34,-1,30,34,35,-1,30,35,36,-1,30,36,29,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,13,12,30,-1,30,29,13,-1,12,21,31,-1,31,30,12,-1,20,15,32,-1,32,31,20,-1,15,16,33,-1,33,32,15,-1,16,17,34,-1,34,33,16,-1,17,18,35,-1,35,34,17,-1,19,14,36,-1,36,35,19,-1,14,13,29,-1,29,36,14,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1});
CCoordinate* Coordinate99 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate99->setPoint(new float[99]{2.927,-1.627,-1.013,2.089,-3.648,-1.013,0,0.2797,0.3064,2.045,-0.3017,-1.013,1.695,0.0029,-0.0151,-2.927,-1.627,-1.013,-2.045,-0.3017,-1.013,-2.089,-3.648,-1.013,-1.695,0.0029,-0.0151,0,-3.648,-1.013,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,0,-3.648,0.9192,0,-0.0274,1.661,2.405,-1.656,-1.915,1.75,-2.942,-1.915,0,-2.942,-1.915,-1.75,-2.942,-1.915,-2.405,-1.656,-1.915,-1.742,-0.5681,-1.915,1.742,-0.5681,-1.915,2.393,-1.966,1.567,1.583,-0.608,1.784,0,-0.3446,2.283,-1.583,-0.608,1.784,-2.393,-1.966,1.567,-1.955,-3.469,1.601,0,-3.469,1.601,1.955,-3.469,1.601});
IndexedFaceSet98->setCoord(*Coordinate99);

CTextureCoordinate* TextureCoordinate100 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate100->setPoint(new float[74]{0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.4607,0.0558,0.464,0.1246,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166});
IndexedFaceSet98->setTexCoord(*TextureCoordinate100);

Shape94->setGeometry(IndexedFaceSet98);

Transform93->addChildren(*Shape94);

HAnimSegment92->addChildren(*Transform93);

HAnimJoint91->addChildren(*HAnimSegment92);

CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint101->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint101->setCenter(new float[3]{3.854,1.956,1.682});
HAnimJoint101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint101->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment102->setName("l_tarsal_distal_phalanx_2");
HAnimSegment102->setDEF("hanim_l_tarsal_distal_phalanx_2");
CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setTranslation(new float[3]{3.854,1.956,1.682});
CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material106 = (CMaterial *)(m_pScene.createNode("Material"));
Material106->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance105->setMaterial(*Material106);

CImageTexture* ImageTexture107 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture107->setUSE("JinLOA3TextureAtlas");
Appearance105->setTexture(*ImageTexture107);

Shape104->setAppearance(*Appearance105);

CIndexedFaceSet* IndexedFaceSet108 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet108->setCoordIndex(new int[192]{3,1,0,-1,0,4,3,-1,10,2,1,-1,1,3,10,-1,2,10,15,-1,0,1,6,-1,6,5,0,-1,6,1,2,-1,2,7,6,-1,7,2,15,-1,15,16,7,-1,17,4,0,-1,0,5,17,-1,3,4,9,-1,9,8,3,-1,10,3,8,-1,8,11,10,-1,11,15,10,-1,9,12,13,-1,13,8,9,-1,13,14,11,-1,11,8,13,-1,14,16,15,-1,15,11,14,-1,17,12,9,-1,9,4,17,-1,19,20,21,-1,21,22,23,-1,23,24,25,-1,21,23,25,-1,19,21,25,-1,19,25,18,-1,5,6,19,-1,19,18,5,-1,6,7,20,-1,20,19,6,-1,7,16,21,-1,21,20,7,-1,16,14,22,-1,22,21,16,-1,14,13,23,-1,23,22,14,-1,13,12,24,-1,24,23,13,-1,12,17,25,-1,25,24,12,-1,17,5,18,-1,18,25,17,-1});
IndexedFaceSet108->setCreaseAngle(3.14159);
IndexedFaceSet108->setTexCoordIndex(new int[192]{1,3,2,-1,2,0,1,-1,4,5,3,-1,3,1,4,-1,5,4,6,-1,2,3,8,-1,8,7,2,-1,8,3,5,-1,5,9,8,-1,9,5,6,-1,6,10,9,-1,11,0,2,-1,2,7,11,-1,12,15,14,-1,14,13,12,-1,16,12,13,-1,13,17,16,-1,17,21,16,-1,14,18,19,-1,19,13,14,-1,19,20,17,-1,17,13,19,-1,20,22,21,-1,21,17,20,-1,23,18,14,-1,14,15,23,-1,25,26,27,-1,27,28,29,-1,29,30,31,-1,27,29,31,-1,25,27,31,-1,25,31,24,-1,7,8,25,-1,25,24,7,-1,8,9,26,-1,26,25,8,-1,9,10,27,-1,27,26,9,-1,22,20,28,-1,28,27,22,-1,20,19,29,-1,29,28,20,-1,19,18,30,-1,30,29,19,-1,18,23,31,-1,31,30,18,-1,11,7,24,-1,24,31,11,-1});
CCoordinate* Coordinate109 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate109->setPoint(new float[78]{1.784,1.036,1.39,2.216,-0.5826,3.202,2.216,-1.964,2.834,0,-0.5826,4.521,0,1.138,3.008,1.74,1.362,0.2166,2.661,-0.1823,-0.0226,2.14,-1.964,-0.0226,-2.216,-0.5826,3.202,-1.784,1.036,1.39,0,-1.964,4.154,-2.216,-1.964,2.834,-1.74,1.362,0.2166,-2.661,-0.1823,-0.0226,-2.14,-1.964,-0.0226,0,-1.964,2.834,0,-1.964,-0.0226,0,1.657,0.7196,1.601,1.243,-0.4207,2.424,-0.1368,-0.64,1.977,-1.746,-0.61,0,-1.746,-0.61,-1.977,-1.746,-0.61,-2.424,-0.1368,-0.64,-1.601,1.243,-0.4207,0,1.51,0.0788});
IndexedFaceSet108->setCoord(*Coordinate109);

CTextureCoordinate* TextureCoordinate110 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate110->setPoint(new float[64]{0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166,0.4607,0.0558,0.464,0.1246,0.4868,0.1432});
IndexedFaceSet108->setTexCoord(*TextureCoordinate110);

Shape104->setGeometry(IndexedFaceSet108);

Transform103->addChildren(*Shape104);

HAnimSegment102->addChildren(*Transform103);

HAnimJoint101->addChildren(*HAnimSegment102);

HAnimJoint91->addChildren(*HAnimJoint101);

HAnimJoint81->addChildren(*HAnimJoint91);

HAnimJoint71->addChildren(*HAnimJoint81);

HAnimJoint61->addChildren(*HAnimJoint71);

HAnimJoint51->addChildren(*HAnimJoint61);

HAnimJoint41->addChildren(*HAnimJoint51);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("r_hip");
HAnimJoint111->setDEF("hanim_r_hip");
HAnimJoint111->setCenter(new float[3]{-4.207,35.830002,-0.8155});
HAnimJoint111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment112->setName("r_thigh");
HAnimSegment112->setDEF("hanim_r_thigh");
CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setTranslation(new float[3]{-4.207,35.830002,-0.8155});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance115 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material116 = (CMaterial *)(m_pScene.createNode("Material"));
Material116->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance115->setMaterial(*Material116);

CImageTexture* ImageTexture117 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture117->setUSE("JinLOA3TextureAtlas");
Appearance115->setTexture(*ImageTexture117);

Shape114->setAppearance(*Appearance115);

CIndexedFaceSet* IndexedFaceSet118 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet118->setCoordIndex(new int[488]{43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
IndexedFaceSet118->setCreaseAngle(3.14159);
IndexedFaceSet118->setTexCoordIndex(new int[488]{0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
CCoordinate* Coordinate119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate119->setPoint(new float[189]{-2.96,-0.0706,0,-1.643,-0.0706,3.209,1.316,-0.0706,4.002,3.367,-0.0706,1.781,3.367,-0.0706,-1.781,1.316,-0.0706,-4.002,-1.643,-0.0706,-3.209,-2.96,-3.82,0,-1.643,-3.82,3.209,1.316,-3.82,4.002,3.367,-3.82,1.781,3.367,-3.82,-1.781,1.316,-3.82,-4.002,-1.643,-3.82,-3.209,-2.96,-10.32,0,-1.643,-10.32,3.209,1.316,-10.32,4.002,3.367,-10.32,1.781,3.367,-10.32,-1.781,1.316,-10.32,-4.002,-1.643,-10.32,-3.209,-3.367,-16.94,0,-1.897,-16.94,3.582,1.407,-16.94,4.467,3.355,-16.94,1.988,3.355,-16.94,-1.988,1.407,-16.94,-4.467,-1.897,-16.94,-3.582,-2.146,-8.794,0,-1.136,-8.794,2.462,1.135,-8.794,3.07,2.633,-8.794,1.366,2.633,-8.794,-1.366,1.135,-8.794,-3.07,-1.136,-8.794,-2.462,-2.156,-15.25,0,-1.225,-15.25,1.956,0.8662,-15.25,2.439,2.543,-15.25,1.085,2.543,-15.25,-1.085,0.8662,-15.25,-2.439,-1.225,-15.25,-1.956,-2.051,1.92,0,-1.076,1.92,2.375,1.114,1.92,2.961,2.87,1.92,1.318,2.87,1.92,-1.318,1.114,1.92,-2.961,-1.076,1.92,-2.375,-1.842,-18.93,0,-1.03,-18.93,1.873,0.7965,-18.93,2.295,2.261,-18.93,1.113,2.261,-18.93,-0.9478,0.7965,-18.93,-2.13,-1.03,-18.93,-1.708,-0.6277,-19.91,0,-0.2723,-19.91,0.912,0.5262,-19.91,1.096,1.167,-19.91,0.5796,1.167,-19.91,-0.4145,0.5262,-19.91,-0.9313,-0.2723,-19.91,-0.7469});
IndexedFaceSet118->setCoord(*Coordinate119);

CTextureCoordinate* TextureCoordinate120 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate120->setPoint(new float[140]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581});
IndexedFaceSet118->setTexCoord(*TextureCoordinate120);

Shape114->setGeometry(IndexedFaceSet118);

Transform113->addChildren(*Shape114);

HAnimSegment112->addChildren(*Transform113);

HAnimJoint111->addChildren(*HAnimSegment112);

CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("r_knee");
HAnimJoint121->setDEF("hanim_r_knee");
HAnimJoint121->setCenter(new float[3]{-4.116,17.26,-0.8639});
HAnimJoint121->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment122 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment122->setName("r_calf");
HAnimSegment122->setDEF("hanim_r_calf");
CTransform* Transform123 = (CTransform *)(m_pScene.createNode("Transform"));
Transform123->setTranslation(new float[3]{-4.116,17.26,-0.8639});
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance125->setMaterial(*Material126);

CImageTexture* ImageTexture127 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture127->setUSE("JinLOA3TextureAtlas");
Appearance125->setTexture(*ImageTexture127);

Shape124->setAppearance(*Appearance125);

CIndexedFaceSet* IndexedFaceSet128 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet128->setCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
IndexedFaceSet128->setCreaseAngle(3.14159);
IndexedFaceSet128->setTexCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
CCoordinate* Coordinate129 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate129->setPoint(new float[126]{-0.7186,0.9688,0.0234,-0.3632,0.9688,0.9354,0.4353,0.9688,1.12,1.076,0.9688,0.603,1.076,0.9688,-0.3911,0.4353,0.9688,-0.9079,-0.3632,0.9688,-0.7235,-2.337,-4.613,0.0234,-1.46,-3.622,2.019,-1.236,-1.628,2.42,-2.118,-1.912,0.0234,0.8111,-3.622,2.567,0.7468,-1.628,2.903,2.254,-4.613,1.255,2.337,-1.912,0.9793,2.254,-5.383,-1.368,2.337,-1.912,-0.9325,0.8111,-5.383,-2.903,0.7468,-1.912,-2.368,-1.46,-5.383,-2.355,-1.236,-1.912,-1.885,-1.121,-0.0032,1.896,-1.933,-0.0032,0.0234,0.7056,-0.0032,2.318,2.17,-0.0032,1.136,2.17,-0.0032,-0.9244,0.7056,-0.0032,-2.061,-1.121,-0.0032,-1.64,-1.607,-12.92,0.0032,-0.9216,-12.91,1.565,0.619,-12.91,1.951,1.854,-12.92,0.8701,1.854,-12.94,-0.9762,0.619,-12.94,-1.742,-0.9216,-12.94,-1.356,-0.7072,-14.53,0.0239,-0.3604,-14.53,0.814,0.4188,-14.53,1.009,1.044,-14.53,0.4624,1.044,-14.54,-0.4714,0.4188,-14.54,-0.8587,-0.3604,-14.54,-0.6635});
IndexedFaceSet128->setCoord(*Coordinate129);

CTextureCoordinate* TextureCoordinate130 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate130->setPoint(new float[84]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243});
IndexedFaceSet128->setTexCoord(*TextureCoordinate130);

Shape124->setGeometry(IndexedFaceSet128);

Transform123->addChildren(*Shape124);

HAnimSegment122->addChildren(*Transform123);

HAnimJoint121->addChildren(*HAnimSegment122);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setName("r_talocrural");
HAnimJoint131->setDEF("hanim_r_talocrural");
HAnimJoint131->setCenter(new float[3]{-3.854,3.939,-0.7038});
HAnimJoint131->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint131->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment132 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment132->setName("r_talus");
HAnimSegment132->setDEF("hanim_r_talus");
CTransform* Transform133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform133->setTranslation(new float[3]{-3.854,3.939,-0.7038});
CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance135->setMaterial(*Material136);

CImageTexture* ImageTexture137 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture137->setUSE("JinLOA3TextureAtlas");
Appearance135->setTexture(*ImageTexture137);

Shape134->setAppearance(*Appearance135);

CIndexedFaceSet* IndexedFaceSet138 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet138->setCoordIndex(new int[200]{1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1});
IndexedFaceSet138->setCreaseAngle(3.14159);
IndexedFaceSet138->setTexCoordIndex(new int[200]{1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1});
CCoordinate* Coordinate139 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate139->setPoint(new float[81]{-0.9768,-0.0192,-1.681,-1.657,-0.0192,0.4309,0,-0.0192,-1.681,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,0,0.7316,-1.463,0,0.7316,1.471,1.657,-0.0192,0.4309,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0.9768,-0.0192,-1.681,0,-0.0192,1.75,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0,-0.6007,-2.046,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0,-1.207,-1.841,-1.023,-1.207,-1.841,-1.913,-1.223,0.5161,-1.601,-0.9325,1.406,0,-0.6582,1.708,1.601,-0.9325,1.406,1.913,-1.223,0.5161,1.023,-1.207,-1.841});
IndexedFaceSet138->setCoord(*Coordinate139);

CTextureCoordinate* TextureCoordinate140 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate140->setPoint(new float[64]{0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398});
IndexedFaceSet138->setTexCoord(*TextureCoordinate140);

Shape134->setGeometry(IndexedFaceSet138);

Transform133->addChildren(*Shape134);

HAnimSegment132->addChildren(*Transform133);

HAnimJoint131->addChildren(*HAnimSegment132);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("r_tarsometatarsal_2");
HAnimJoint141->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint141->setCenter(new float[3]{-3.854,3.336,-1.514});
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("r_metatarsal_2");
HAnimSegment142->setDEF("hanim_r_metatarsal_2");
CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setTranslation(new float[3]{-3.854,3.336,-1.514});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance145->setMaterial(*Material146);

CImageTexture* ImageTexture147 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture147->setUSE("JinLOA3TextureAtlas");
Appearance145->setTexture(*ImageTexture147);

Shape144->setAppearance(*Appearance145);

CIndexedFaceSet* IndexedFaceSet148 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet148->setCoordIndex(new int[208]{6,0,3,-1,3,4,6,-1,9,11,3,-1,3,0,9,-1,2,1,0,-1,0,6,2,-1,10,9,0,-1,0,1,10,-1,1,2,15,-1,15,10,1,-1,6,4,7,-1,7,5,6,-1,12,5,7,-1,7,13,12,-1,2,6,5,-1,5,8,2,-1,14,8,5,-1,5,12,14,-1,8,14,15,-1,15,2,8,-1,17,16,20,-1,17,20,19,-1,17,19,18,-1,24,23,22,-1,22,21,27,-1,22,27,26,-1,24,22,26,-1,24,26,25,-1,3,16,17,-1,17,4,3,-1,4,17,18,-1,18,7,4,-1,7,18,19,-1,19,13,7,-1,13,19,20,-1,20,11,13,-1,11,20,16,-1,16,3,11,-1,10,21,22,-1,22,9,10,-1,9,22,23,-1,23,11,9,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,12,13,-1,12,25,26,-1,26,14,12,-1,14,26,27,-1,27,15,14,-1,15,27,21,-1,21,10,15,-1});
IndexedFaceSet148->setCreaseAngle(3.14159);
IndexedFaceSet148->setTexCoordIndex(new int[208]{2,0,5,-1,5,6,2,-1,14,16,5,-1,5,0,14,-1,3,1,0,-1,0,2,3,-1,15,14,0,-1,0,1,15,-1,1,4,21,-1,21,15,1,-1,8,9,10,-1,10,7,8,-1,17,7,10,-1,10,18,17,-1,12,8,7,-1,7,11,12,-1,19,11,7,-1,7,17,19,-1,11,19,20,-1,20,13,11,-1,23,22,26,-1,23,26,25,-1,23,25,24,-1,30,29,28,-1,28,27,33,-1,28,33,32,-1,30,28,32,-1,30,32,31,-1,5,22,23,-1,23,6,5,-1,9,23,24,-1,24,10,9,-1,10,24,25,-1,25,18,10,-1,18,25,26,-1,26,16,18,-1,16,26,22,-1,22,5,16,-1,15,27,28,-1,28,14,15,-1,14,28,29,-1,29,16,14,-1,16,29,30,-1,30,18,16,-1,18,30,31,-1,31,17,18,-1,17,31,32,-1,32,19,17,-1,19,32,33,-1,33,20,19,-1,21,33,27,-1,27,15,21,-1});
CCoordinate* Coordinate149 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate149->setPoint(new float[84]{-1.409,-1.322,-2.067,-1.409,-3.344,-0.8708,0,-3.344,-0.8708,-1.109,0.0027,-1.236,0,0.0027,-1.236,1.409,-1.322,-2.067,0,-1.322,-2.067,1.109,0.0027,-1.236,1.409,-3.344,-0.8708,-2.927,-1.322,1.241,-2.089,-3.344,1.241,-2.045,0.0027,1.241,2.927,-1.322,1.241,2.045,0.0027,1.241,2.089,-3.344,1.241,0,-3.344,1.241,-0.9442,0.2881,-0.8816,0,0.2881,-0.8816,0.9442,0.2881,-0.8816,1.7,0.2881,1.12,-1.7,0.2881,1.12,-1.86,-3.19,2.175,-2.541,-1.36,2.175,-1.861,-0.3398,2.175,1.861,-0.3398,2.175,2.541,-1.36,2.175,1.86,-3.19,2.175,0,-3.19,2.175});
IndexedFaceSet148->setCoord(*Coordinate149);

CTextureCoordinate* TextureCoordinate150 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate150->setPoint(new float[68]{0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186});
IndexedFaceSet148->setTexCoord(*TextureCoordinate150);

Shape144->setGeometry(IndexedFaceSet148);

Transform143->addChildren(*Shape144);

HAnimSegment142->addChildren(*Transform143);

HAnimJoint141->addChildren(*HAnimSegment142);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setName("r_metatarsophalangeal_2");
HAnimJoint151->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint151->setCenter(new float[3]{-3.854,3.64,0.7402});
HAnimJoint151->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint151->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment152->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment152->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform153->setTranslation(new float[3]{-3.854,3.64,0.7402});
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance155 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material156 = (CMaterial *)(m_pScene.createNode("Material"));
Material156->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance155->setMaterial(*Material156);

CImageTexture* ImageTexture157 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture157->setUSE("JinLOA3TextureAtlas");
Appearance155->setTexture(*ImageTexture157);

Shape154->setAppearance(*Appearance155);

CIndexedFaceSet* IndexedFaceSet158 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet158->setCoordIndex(new int[248]{10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,26,25,32,-1,26,32,31,-1,26,31,30,-1,30,29,28,-1,26,30,28,-1,26,28,27,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,11,25,26,-1,26,10,11,-1,10,26,27,-1,27,17,10,-1,17,27,28,-1,28,13,17,-1,13,28,29,-1,29,14,13,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,16,15,-1,16,31,32,-1,32,12,16,-1,12,32,25,-1,25,11,12,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1});
IndexedFaceSet158->setCreaseAngle(3.14159);
IndexedFaceSet158->setTexCoordIndex(new int[248]{12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,30,29,36,-1,30,36,35,-1,30,35,34,-1,34,33,32,-1,30,34,32,-1,30,32,31,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,13,29,30,-1,30,12,13,-1,12,30,31,-1,31,21,12,-1,20,31,32,-1,32,15,20,-1,15,32,33,-1,33,16,15,-1,16,33,34,-1,34,17,16,-1,17,34,35,-1,35,18,17,-1,19,35,36,-1,36,14,19,-1,14,36,29,-1,29,13,14,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1});
CCoordinate* Coordinate159 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate159->setPoint(new float[99]{-2.927,-1.627,-1.013,-2.089,-3.648,-1.013,0,0.2797,0.3064,-2.045,-0.3017,-1.013,-1.695,0.0029,-0.0151,2.927,-1.627,-1.013,2.045,-0.3017,-1.013,2.089,-3.648,-1.013,1.695,0.0029,-0.0151,0,-3.648,-1.013,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,0,-3.648,0.9192,0,-0.0274,1.661,-2.405,-1.656,-1.915,-1.75,-2.942,-1.915,0,-2.942,-1.915,1.75,-2.942,-1.915,2.405,-1.656,-1.915,1.742,-0.5681,-1.915,-1.742,-0.5681,-1.915,-2.393,-1.966,1.567,-1.583,-0.608,1.784,0,-0.3446,2.283,1.583,-0.608,1.784,2.393,-1.966,1.567,1.955,-3.469,1.601,0,-3.469,1.601,-1.955,-3.469,1.601});
IndexedFaceSet158->setCoord(*Coordinate159);

CTextureCoordinate* TextureCoordinate160 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate160->setPoint(new float[74]{0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.4607,0.0558,0.464,0.1246,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166});
IndexedFaceSet158->setTexCoord(*TextureCoordinate160);

Shape154->setGeometry(IndexedFaceSet158);

Transform153->addChildren(*Shape154);

HAnimSegment152->addChildren(*Transform153);

HAnimJoint151->addChildren(*HAnimSegment152);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint161->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint161->setCenter(new float[3]{-3.854,1.956,1.682});
HAnimJoint161->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint161->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment162 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment162->setName("r_tarsal_distal_phalanx_2");
HAnimSegment162->setDEF("hanim_r_tarsal_distal_phalanx_2");
CTransform* Transform163 = (CTransform *)(m_pScene.createNode("Transform"));
Transform163->setTranslation(new float[3]{-3.854,1.956,1.682});
CShape* Shape164 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance165 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material166 = (CMaterial *)(m_pScene.createNode("Material"));
Material166->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance165->setMaterial(*Material166);

CImageTexture* ImageTexture167 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture167->setUSE("JinLOA3TextureAtlas");
Appearance165->setTexture(*ImageTexture167);

Shape164->setAppearance(*Appearance165);

CIndexedFaceSet* IndexedFaceSet168 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet168->setCoordIndex(new int[192]{3,4,0,-1,0,1,3,-1,10,3,1,-1,1,2,10,-1,2,15,10,-1,0,5,6,-1,6,1,0,-1,6,7,2,-1,2,1,6,-1,7,16,15,-1,15,2,7,-1,17,5,0,-1,0,4,17,-1,3,8,9,-1,9,4,3,-1,10,11,8,-1,8,3,10,-1,11,10,15,-1,9,8,13,-1,13,12,9,-1,13,8,11,-1,11,14,13,-1,14,11,15,-1,15,16,14,-1,17,4,9,-1,9,12,17,-1,19,18,25,-1,25,24,23,-1,23,22,21,-1,25,23,21,-1,19,25,21,-1,19,21,20,-1,5,18,19,-1,19,6,5,-1,6,19,20,-1,20,7,6,-1,7,20,21,-1,21,16,7,-1,16,21,22,-1,22,14,16,-1,14,22,23,-1,23,13,14,-1,13,23,24,-1,24,12,13,-1,12,24,25,-1,25,17,12,-1,17,25,18,-1,18,5,17,-1});
IndexedFaceSet168->setCreaseAngle(3.14159);
IndexedFaceSet168->setTexCoordIndex(new int[192]{1,0,2,-1,2,3,1,-1,4,1,3,-1,3,5,4,-1,5,6,4,-1,2,7,8,-1,8,3,2,-1,8,9,5,-1,5,3,8,-1,9,10,6,-1,6,5,9,-1,11,7,2,-1,2,0,11,-1,12,13,14,-1,14,15,12,-1,16,17,13,-1,13,12,16,-1,17,16,21,-1,14,13,19,-1,19,18,14,-1,19,13,17,-1,17,20,19,-1,20,17,21,-1,21,22,20,-1,23,15,14,-1,14,18,23,-1,25,24,31,-1,31,30,29,-1,29,28,27,-1,31,29,27,-1,25,31,27,-1,25,27,26,-1,7,24,25,-1,25,8,7,-1,8,25,26,-1,26,9,8,-1,9,26,27,-1,27,10,9,-1,22,27,28,-1,28,20,22,-1,20,28,29,-1,29,19,20,-1,19,29,30,-1,30,18,19,-1,18,30,31,-1,31,23,18,-1,11,31,24,-1,24,7,11,-1});
CCoordinate* Coordinate169 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate169->setPoint(new float[78]{-1.784,1.036,1.39,-2.216,-0.5826,3.202,-2.216,-1.964,2.834,0,-0.5826,4.521,0,1.138,3.008,-1.74,1.362,0.2166,-2.661,-0.1823,-0.0226,-2.14,-1.964,-0.0226,2.216,-0.5826,3.202,1.784,1.036,1.39,0,-1.964,4.154,2.216,-1.964,2.834,1.74,1.362,0.2166,2.661,-0.1823,-0.0226,2.14,-1.964,-0.0226,0,-1.964,2.834,0,-1.964,-0.0226,0,1.657,0.7196,-1.601,1.243,-0.4207,-2.424,-0.1368,-0.64,-1.977,-1.746,-0.61,0,-1.746,-0.61,1.977,-1.746,-0.61,2.424,-0.1368,-0.64,1.601,1.243,-0.4207,0,1.51,0.0788});
IndexedFaceSet168->setCoord(*Coordinate169);

CTextureCoordinate* TextureCoordinate170 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate170->setPoint(new float[64]{0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166,0.4607,0.0558,0.464,0.1246,0.4868,0.1432});
IndexedFaceSet168->setTexCoord(*TextureCoordinate170);

Shape164->setGeometry(IndexedFaceSet168);

Transform163->addChildren(*Shape164);

HAnimSegment162->addChildren(*Transform163);

HAnimJoint161->addChildren(*HAnimSegment162);

HAnimJoint151->addChildren(*HAnimJoint161);

HAnimJoint141->addChildren(*HAnimJoint151);

HAnimJoint131->addChildren(*HAnimJoint141);

HAnimJoint121->addChildren(*HAnimJoint131);

HAnimJoint111->addChildren(*HAnimJoint121);

HAnimJoint41->addChildren(*HAnimJoint111);

HAnimJoint31->addChildren(*HAnimJoint41);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setName("vl5");
HAnimJoint171->setDEF("hanim_vl5");
HAnimJoint171->setCenter(new float[3]{0,40.220001,-0.6117});
HAnimJoint171->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint171->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setName("l5");
HAnimSegment172->setDEF("hanim_l5");
CTransform* Transform173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform173->setTranslation(new float[3]{0,40.220001,-0.6117});
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance175 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material176 = (CMaterial *)(m_pScene.createNode("Material"));
Material176->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance175->setMaterial(*Material176);

CImageTexture* ImageTexture177 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture177->setUSE("JinLOA3TextureAtlas");
Appearance175->setTexture(*ImageTexture177);

Shape174->setAppearance(*Appearance175);

CIndexedFaceSet* IndexedFaceSet178 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet178->setCoordIndex(new int[320]{0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
IndexedFaceSet178->setCreaseAngle(3.14159);
IndexedFaceSet178->setTexCoordIndex(new int[320]{1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[126]{4.178,1.114,3.711,5.76,1.15,1.754,1.52,0.9575,-3.918,3.95,0.9672,-2.776,5.309,1.072,-0.9797,3.789,0.0396,2.969,5.166,0.0713,1.445,1.593,-0.0798,-2.916,3.6,-0.0573,-2.087,4.841,-0.0103,-0.6841,1.635,1.083,4.322,1.595,0.0009,3.405,0,0.0009,3.405,0,1.083,4.322,-1.595,0.0009,3.405,-3.789,0.0396,2.969,-4.178,1.114,3.711,-1.635,1.083,4.322,-5.166,0.0713,1.445,-5.76,1.15,1.754,-3.6,-0.0573,-2.087,-1.593,-0.0798,-2.916,-1.52,0.9575,-3.918,-3.95,0.9672,-2.776,-4.841,-0.0103,-0.6841,-5.309,1.072,-0.9797,0,-0.0798,-2.916,0,0.9575,-3.918,1.609,1.473,4.099,4.053,1.473,3.512,5.524,1.473,1.692,5.098,1.473,-0.8893,3.806,1.473,-2.528,1.47,1.473,-3.626,0,1.473,-3.626,-1.47,1.473,-3.626,-3.806,1.473,-2.528,-5.098,1.473,-0.8893,-5.524,1.473,1.692,-4.053,1.473,3.512,-1.609,1.473,4.099,0,1.473,4.099});
IndexedFaceSet178->setCoord(*Coordinate179);

CTextureCoordinate* TextureCoordinate180 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate180->setPoint(new float[104]{0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.227,0.2131,0.3536,0.2151,0.1879,0.2143,0.3553,0.2398,0.3555,0.2151,0.3557,0.2401,0.3545,0.2151,0.3536,0.2151,0.019,0.2349,0.0206,0.2122,0.0206,0.2122,0.1067,0.2154,0.1011,0.241,0.019,0.2349,0.1463,0.2162,0.1445,0.2419,0.227,0.2131,0.3536,0.2151,0.3561,0.2404,0.2369,0.2375,0.1879,0.2143,0.1927,0.24,0.3553,0.2398,0.3555,0.2151,0.3545,0.2151,0.3557,0.2401,0.0206,0.2122,0.019,0.2349,0.3536,0.2151,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419,0.1011,0.241,0.019,0.2349,0.019,0.2349});
IndexedFaceSet178->setTexCoord(*TextureCoordinate180);

Shape174->setGeometry(IndexedFaceSet178);

Transform173->addChildren(*Shape174);

HAnimSegment172->addChildren(*Transform173);

HAnimJoint171->addChildren(*HAnimSegment172);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("vl4");
HAnimJoint181->setDEF("hanim_vl4");
HAnimJoint181->setCenter(new float[3]{0,41.299999,-0.6117});
HAnimJoint181->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint181->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("l4");
HAnimSegment182->setDEF("hanim_l4");
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0,41.299999,-0.6117});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance185 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material186 = (CMaterial *)(m_pScene.createNode("Material"));
Material186->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance185->setMaterial(*Material186);

CImageTexture* ImageTexture187 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture187->setUSE("JinLOA3TextureAtlas");
Appearance185->setTexture(*ImageTexture187);

Shape184->setAppearance(*Appearance185);

CIndexedFaceSet* IndexedFaceSet188 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet188->setCoordIndex(new int[432]{11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1});
IndexedFaceSet188->setCreaseAngle(3.14159);
IndexedFaceSet188->setTexCoordIndex(new int[432]{15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1});
CCoordinate* Coordinate189 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate189->setPoint(new float[168]{4.026,0.7465,3.365,5.556,0.7644,1.615,1.443,0.6683,-3.473,1.519,0.7312,3.919,3.83,0.6731,-2.414,5.148,0.7257,-0.8425,4.178,0.0328,3.711,5.76,0.0687,1.754,1.52,-0.1236,-3.918,3.95,-0.1138,-2.776,5.309,-0.0087,-0.9797,1.635,0.0023,4.322,0,-0.1236,-3.918,-1.635,0.0023,4.322,-4.178,0.0328,3.711,-4.026,0.7465,3.365,-1.519,0.7312,3.919,-5.76,0.0687,1.754,-5.556,0.7644,1.615,-3.95,-0.1138,-2.776,-1.52,-0.1236,-3.918,-1.443,0.6683,-3.473,-3.83,0.6731,-2.414,-5.309,-0.0087,-0.9797,-5.148,0.7257,-0.8425,0,0.0023,4.322,0,0.7312,3.919,0,0.6683,-3.473,1.493,1.061,3.676,3.895,1.061,3.145,5.297,1.061,1.541,4.918,1.061,-0.7369,3.68,1.061,-2.214,1.392,1.061,-3.23,0,1.061,-3.23,-1.392,1.061,-3.23,-3.68,1.061,-2.214,-4.918,1.061,-0.7369,-5.297,1.061,1.541,-3.895,1.061,3.145,-1.493,1.061,3.676,0,1.061,3.676,3.857,-0.461,3.349,1.533,-0.461,3.907,0,-0.461,3.907,-1.533,-0.461,3.907,-3.857,-0.461,3.349,-5.251,-0.461,1.624,-4.847,-0.461,-0.8254,-3.619,-0.461,-2.448,-1.398,-0.461,-3.492,0,-0.461,-3.492,1.398,-0.461,-3.492,3.619,-0.461,-2.448,4.847,-0.461,-0.8254,5.251,-0.461,1.624});
IndexedFaceSet188->setCoord(*Coordinate189);

CTextureCoordinate* TextureCoordinate190 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate190->setPoint(new float[128]{0.1026,0.2616,0.1481,0.2604,0.3503,0.2575,0.3578,0.2568,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.1011,0.241,0.1445,0.2419,0.3553,0.2398,0.3561,0.2404,0.2369,0.2375,0.1927,0.24,0.019,0.2349,0.3557,0.2401,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1026,0.2616,0.0179,0.2574,0.1445,0.2419,0.1481,0.2604,0.2369,0.2375,0.3561,0.2404,0.3503,0.2575,0.2289,0.2559,0.1927,0.24,0.1884,0.2584,0.019,0.2349,0.0186,0.2582,0.3578,0.2568,0.3553,0.2398,0.3557,0.2401,0.3542,0.2515,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.1011,0.241,0.019,0.2349,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419});
IndexedFaceSet188->setTexCoord(*TextureCoordinate190);

Shape184->setGeometry(IndexedFaceSet188);

Transform183->addChildren(*Shape184);

HAnimSegment182->addChildren(*Transform183);

HAnimJoint181->addChildren(*HAnimSegment182);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setName("vl3");
HAnimJoint191->setDEF("hanim_vl3");
HAnimJoint191->setCenter(new float[3]{0,42.029999,-0.6117});
HAnimJoint191->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint191->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setName("l3");
HAnimSegment192->setDEF("hanim_l3");
CTransform* Transform193 = (CTransform *)(m_pScene.createNode("Transform"));
Transform193->setTranslation(new float[3]{0,42.029999,-0.6117});
CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance195 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material196 = (CMaterial *)(m_pScene.createNode("Material"));
Material196->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance195->setMaterial(*Material196);

CImageTexture* ImageTexture197 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture197->setUSE("JinLOA3TextureAtlas");
Appearance195->setTexture(*ImageTexture197);

Shape194->setAppearance(*Appearance195);

CIndexedFaceSet* IndexedFaceSet198 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet198->setCoordIndex(new int[432]{1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1});
IndexedFaceSet198->setCreaseAngle(3.14159);
IndexedFaceSet198->setTexCoordIndex(new int[432]{4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1});
CCoordinate* Coordinate199 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate199->setPoint(new float[168]{3.874,0.7332,3.02,1.367,0.7332,-3.028,3.71,0.7332,-2.051,4.987,0.7332,-0.7054,1.404,0.7332,3.517,5.353,0.7332,1.475,4.026,0.0196,3.365,5.556,0.0375,1.615,1.443,-0.0586,-3.473,1.519,0.0043,3.919,3.83,-0.0538,-2.414,5.148,-0.0012,-0.8425,0,0.0043,3.919,-1.367,0.7332,-3.028,-1.443,-0.0586,-3.473,0,-0.0586,-3.473,0,0.7332,-3.028,-4.026,0.0196,3.365,-3.874,0.7332,3.02,-1.404,0.7332,3.517,-1.519,0.0043,3.919,-5.556,0.0375,1.615,-5.353,0.7332,1.475,-3.71,0.7332,-2.051,-3.83,-0.0538,-2.414,-4.987,0.7332,-0.7054,-5.148,-0.0012,-0.8425,0,0.7332,3.517,1.366,1.112,3.286,3.726,1.112,2.811,5.078,1.112,1.398,4.742,1.112,-0.6029,3.55,1.112,-1.86,1.311,1.112,-2.794,0,1.112,-2.794,-1.311,1.112,-2.794,-3.55,1.112,-1.86,-4.742,1.112,-0.6029,-5.078,1.112,1.398,-3.726,1.112,2.811,-1.366,1.112,3.286,0,1.112,3.286,3.87,-0.3411,3.153,1.478,-0.3411,3.682,0,-0.3411,3.682,-1.478,-0.3411,3.682,-3.87,-0.3411,3.153,-5.28,-0.3411,1.54,-4.9,-0.3411,-0.7446,-3.661,-0.3411,-2.221,-1.384,-0.3411,-3.233,0,-0.3411,-3.233,1.384,-0.3411,-3.233,3.661,-0.3411,-2.221,4.9,-0.3411,-0.7446,5.28,-0.3411,1.54});
IndexedFaceSet198->setCoord(*Coordinate199);

CTextureCoordinate* TextureCoordinate200 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate200->setPoint(new float[128]{0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.3444,0.2746,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.3527,0.263,0.0181,0.2816,0.1026,0.2616,0.1481,0.2604,0.3578,0.2568,0.3503,0.2575,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.3604,0.2737,0.3578,0.2568,0.3542,0.2515,0.3527,0.263,0.1026,0.2616,0.1041,0.2822,0.0168,0.2798,0.0179,0.2574,0.1481,0.2604,0.1518,0.2789,0.3503,0.2575,0.3444,0.2746,0.221,0.2742,0.2289,0.2559,0.1842,0.2768,0.1884,0.2584,0.0181,0.2816,0.0186,0.2582,0.0168,0.2798,0.1041,0.2822,0.1518,0.2789,0.1842,0.2768,0.221,0.2742,0.3444,0.2746,0.3527,0.263,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.1518,0.2789,0.1041,0.2822,0.0168,0.2798,0.0181,0.2816,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604});
IndexedFaceSet198->setTexCoord(*TextureCoordinate200);

Shape194->setGeometry(IndexedFaceSet198);

Transform193->addChildren(*Shape194);

HAnimSegment192->addChildren(*Transform193);

HAnimJoint191->addChildren(*HAnimSegment192);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setName("vl2");
HAnimJoint201->setDEF("hanim_vl2");
HAnimJoint201->setCenter(new float[3]{0,42.759998,-0.6117});
HAnimJoint201->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint201->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment202 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment202->setName("l2");
HAnimSegment202->setDEF("hanim_l2");
CTransform* Transform203 = (CTransform *)(m_pScene.createNode("Transform"));
Transform203->setTranslation(new float[3]{0,42.759998,-0.6117});
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance205 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material206 = (CMaterial *)(m_pScene.createNode("Material"));
Material206->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance205->setMaterial(*Material206);

CImageTexture* ImageTexture207 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture207->setUSE("JinLOA3TextureAtlas");
Appearance205->setTexture(*ImageTexture207);

Shape204->setAppearance(*Appearance205);

CIndexedFaceSet* IndexedFaceSet208 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet208->setCoordIndex(new int[432]{3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1});
IndexedFaceSet208->setCreaseAngle(3.14159);
IndexedFaceSet208->setTexCoordIndex(new int[432]{6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1});
CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[168]{3.71,0.777,2.648,4.818,0.777,-0.5615,5.128,0.777,1.321,1.293,0.777,-2.595,3.593,0.777,-1.696,1.281,0.777,3.092,3.874,0.0063,3.02,1.367,0.0063,-3.028,3.71,0.0063,-2.051,4.987,0.0063,-0.7054,1.404,0.0063,3.517,5.353,0.0063,1.475,-1.293,0.777,-2.595,-1.367,0.0063,-3.028,0,0.0063,-3.028,0,0.777,-2.595,-3.874,0.0063,3.02,-3.71,0.777,2.648,-1.281,0.777,3.092,-1.404,0.0063,3.517,-5.353,0.0063,1.475,-5.128,0.777,1.321,-3.593,0.777,-1.696,-3.71,0.0063,-2.051,-4.818,0.777,-0.5615,-4.987,0.0063,-0.7054,0,0.777,3.092,0,0.0063,3.517,1.261,1.231,2.872,3.606,1.231,2.442,4.891,1.231,1.241,4.612,1.231,-0.451,3.473,1.231,-1.506,1.251,1.231,-2.375,0,1.231,-2.375,-1.251,1.231,-2.375,-3.473,1.231,-1.506,-4.612,1.231,-0.451,-4.891,1.231,1.241,-3.606,1.231,2.442,-1.261,1.231,2.872,0,1.231,2.872,3.853,-0.3735,2.877,1.415,-0.3735,3.367,0,-0.3735,3.367,-1.415,-0.3735,3.367,-3.853,-0.3735,2.877,-5.24,-0.3735,1.428,-4.895,-0.3735,-0.6254,-3.668,-0.3735,-1.919,-1.354,-0.3735,-2.884,0,-0.3735,-2.884,1.354,-0.3735,-2.884,3.668,-0.3735,-1.919,4.895,-0.3735,-0.6254,5.24,-0.3735,1.428});
IndexedFaceSet208->setCoord(*Coordinate209);

CTextureCoordinate* TextureCoordinate210 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate210->setPoint(new float[128]{0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.3633,0.2922,0.3627,0.2922,0.0177,0.3051,0.1055,0.2814,0.3697,0.2711,0.3605,0.2757,0.2204,0.275,0.1853,0.2768,0.024,0.2813,0.1448,0.2785,0.3603,0.2745,0.0155,0.2778,0.3633,0.2922,0.3697,0.2711,0.3603,0.2745,0.3627,0.2922,0.1055,0.2814,0.0982,0.302,0.0177,0.3051,0.024,0.2813,0.1448,0.2785,0.1487,0.2975,0.3605,0.2757,0.3621,0.2922,0.2175,0.2944,0.2204,0.275,0.1849,0.2961,0.1853,0.2768,0.0177,0.3051,0.0155,0.2778,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.1055,0.2814,0.024,0.2813,0.0155,0.2778,0.024,0.2813,0.1055,0.2814,0.1448,0.2785,0.1853,0.2768,0.2204,0.275,0.3605,0.2757,0.3603,0.2745,0.3697,0.2711,0.2204,0.275,0.1853,0.2768,0.1448,0.2785});
IndexedFaceSet208->setTexCoord(*TextureCoordinate210);

Shape204->setGeometry(IndexedFaceSet208);

Transform203->addChildren(*Shape204);

HAnimSegment202->addChildren(*Transform203);

HAnimJoint201->addChildren(*HAnimSegment202);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setName("vl1");
HAnimJoint211->setDEF("hanim_vl1");
HAnimJoint211->setCenter(new float[3]{0,43.52,-0.6117});
HAnimJoint211->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint211->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment212 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment212->setName("l1");
HAnimSegment212->setDEF("hanim_l1");
CTransform* Transform213 = (CTransform *)(m_pScene.createNode("Transform"));
Transform213->setTranslation(new float[3]{0,43.52,-0.6117});
CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance215 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material216 = (CMaterial *)(m_pScene.createNode("Material"));
Material216->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance215->setMaterial(*Material216);

CImageTexture* ImageTexture217 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture217->setUSE("JinLOA3TextureAtlas");
Appearance215->setTexture(*ImageTexture217);

Shape214->setAppearance(*Appearance215);

CIndexedFaceSet* IndexedFaceSet218 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet218->setCoordIndex(new int[432]{7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1});
IndexedFaceSet218->setCreaseAngle(3.14159);
IndexedFaceSet218->setTexCoordIndex(new int[432]{9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1});
CCoordinate* Coordinate219 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate219->setPoint(new float[168]{3.702,1.056,2.588,1.286,1.056,3.04,5.104,1.056,1.294,1.363,1.056,-2.529,3.588,1.056,-1.686,4.805,1.056,-0.5256,0,1.056,3.04,3.71,0.0128,2.648,4.818,0.0128,-0.5615,0,0.0128,3.092,0,0.0128,-2.595,5.128,0.0128,1.321,1.293,0.0128,-2.595,3.593,0.0128,-1.696,1.281,0.0128,3.092,-1.281,0.0128,3.092,-3.71,0.0128,2.648,-3.702,1.056,2.588,-1.286,1.056,3.04,-5.128,0.0128,1.321,-5.104,1.056,1.294,-3.593,0.0128,-1.696,-1.293,0.0128,-2.595,-1.363,1.056,-2.529,-3.588,1.056,-1.686,-4.818,0.0128,-0.5615,-4.805,1.056,-0.5256,0,1.056,-2.529,1.266,1.5,2.82,3.599,1.5,2.383,4.867,1.5,1.212,4.6,1.5,-0.4169,3.469,1.5,-1.496,1.323,1.5,-2.308,0,1.5,-2.309,-1.323,1.5,-2.308,-3.469,1.5,-1.496,-4.6,1.5,-0.4169,-4.867,1.5,1.212,-3.599,1.5,2.383,-1.266,1.5,2.82,0,1.5,2.82,3.606,-0.3662,2.442,1.261,-0.3662,2.872,0,-0.3662,2.872,-1.261,-0.3662,2.872,-3.606,-0.3662,2.442,-4.891,-0.3662,1.241,-4.612,-0.3662,-0.451,-3.473,-0.3662,-1.506,-1.251,-0.3662,-2.375,0,-0.3662,-2.375,1.251,-0.3662,-2.375,3.473,-0.3662,-1.506,4.612,-0.3662,-0.451,4.891,-0.3662,1.241});
IndexedFaceSet218->setCoord(*Coordinate219);

CTextureCoordinate* TextureCoordinate220 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate220->setPoint(new float[128]{0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3615,0.3195,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.0982,0.302,0.1849,0.2961,0.0177,0.3051,0.3627,0.2922,0.1487,0.2975,0.3633,0.2922,0.3621,0.2922,0.2175,0.2944,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.0943,0.3233,0.0192,0.3251,0.1487,0.2975,0.1489,0.3212,0.2175,0.2944,0.3621,0.2922,0.3615,0.3195,0.2175,0.3185,0.1849,0.2961,0.1844,0.32,0.0177,0.3051,0.0192,0.3251,0.3631,0.318,0.3633,0.2922,0.3627,0.2922,0.3623,0.3188,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975});
IndexedFaceSet218->setTexCoord(*TextureCoordinate220);

Shape214->setGeometry(IndexedFaceSet218);

Transform213->addChildren(*Shape214);

HAnimSegment212->addChildren(*Transform213);

HAnimJoint211->addChildren(*HAnimSegment212);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setName("vt12");
HAnimJoint221->setDEF("hanim_vt12");
HAnimJoint221->setCenter(new float[3]{0,44.57,-0.6117});
HAnimJoint221->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint221->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment222 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment222->setName("t12");
HAnimSegment222->setDEF("hanim_t12");
CTransform* Transform223 = (CTransform *)(m_pScene.createNode("Transform"));
Transform223->setTranslation(new float[3]{0,44.57,-0.6117});
CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance225 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material226 = (CMaterial *)(m_pScene.createNode("Material"));
Material226->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance225->setMaterial(*Material226);

CImageTexture* ImageTexture227 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture227->setUSE("JinLOA3TextureAtlas");
Appearance225->setTexture(*ImageTexture227);

Shape224->setAppearance(*Appearance225);

CIndexedFaceSet* IndexedFaceSet228 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet228->setCoordIndex(new int[432]{4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1});
IndexedFaceSet228->setCreaseAngle(3.14159);
IndexedFaceSet228->setTexCoordIndex(new int[432]{5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1});
CCoordinate* Coordinate229 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate229->setPoint(new float[168]{3.695,1.054,2.529,5.081,1.054,1.266,1.292,1.054,2.988,1.434,1.054,-2.463,3.584,1.054,-1.677,4.793,1.054,-0.4897,3.702,0.0104,2.588,1.286,0.0104,3.04,5.104,0.0104,1.294,1.363,0.0104,-2.529,3.588,0.0104,-1.686,4.805,0.0104,-0.5256,0,0.0104,3.04,-3.584,1.054,-1.677,-4.793,1.054,-0.4897,-4.805,0.0104,-0.5256,-3.588,0.0104,-1.686,0,1.054,-2.464,-1.434,1.054,-2.463,-1.363,0.0104,-2.529,0,0.0104,-2.529,-3.702,0.0104,2.588,-3.695,1.054,2.529,-1.292,1.054,2.988,-1.286,0.0104,3.04,-5.104,0.0104,1.294,-5.081,1.054,1.266,0,1.054,2.988,1.276,1.452,2.823,3.618,1.452,2.375,4.904,1.452,1.204,4.639,1.452,-0.4096,3.494,1.452,-1.534,1.405,1.452,-2.298,0,1.452,-2.298,-1.405,1.452,-2.298,-3.494,1.452,-1.534,-4.639,1.452,-0.4096,-4.904,1.452,1.204,-3.618,1.452,2.375,-1.276,1.452,2.823,0,1.452,2.823,3.625,-0.4686,2.435,1.271,-0.4686,2.875,0,-0.4686,2.875,-1.271,-0.4686,2.875,-3.625,-0.4686,2.435,-4.927,-0.4686,1.233,-4.651,-0.4686,-0.4442,-3.499,-0.4686,-1.544,-1.333,-0.4686,-2.364,0,-0.4686,-2.364,1.333,-0.4686,-2.364,3.499,-0.4686,-1.544,4.651,-0.4686,-0.4442,4.927,-0.4686,1.233});
IndexedFaceSet228->setCoord(*Coordinate229);

CTextureCoordinate* TextureCoordinate230 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate230->setPoint(new float[128]{0.0903,0.3446,0.1491,0.3449,0.0206,0.3452,0.3608,0.3469,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.3619,0.3454,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3631,0.318,0.3615,0.3195,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.2175,0.3427,0.1838,0.3438,0.1844,0.32,0.2175,0.3185,0.3619,0.3454,0.3629,0.3439,0.3631,0.318,0.3623,0.3188,0.0943,0.3233,0.0903,0.3446,0.0206,0.3452,0.0192,0.3251,0.1489,0.3212,0.1491,0.3449,0.3615,0.3195,0.3608,0.3469,0.0206,0.3452,0.0192,0.3251,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212});
IndexedFaceSet228->setTexCoord(*TextureCoordinate230);

Shape224->setGeometry(IndexedFaceSet228);

Transform223->addChildren(*Shape224);

HAnimSegment222->addChildren(*Transform223);

HAnimJoint221->addChildren(*HAnimSegment222);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setName("vt11");
HAnimJoint231->setDEF("hanim_vt11");
HAnimJoint231->setCenter(new float[3]{0,45.610001,-0.6117});
HAnimJoint231->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint231->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setName("t11");
HAnimSegment232->setDEF("hanim_t11");
CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
Transform233->setTranslation(new float[3]{0,45.610001,-0.6117});
CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance235 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material236 = (CMaterial *)(m_pScene.createNode("Material"));
Material236->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance235->setMaterial(*Material236);

CImageTexture* ImageTexture237 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture237->setUSE("JinLOA3TextureAtlas");
Appearance235->setTexture(*ImageTexture237);

Shape234->setAppearance(*Appearance235);

CIndexedFaceSet* IndexedFaceSet238 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet238->setCoordIndex(new int[448]{4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1});
IndexedFaceSet238->setCreaseAngle(3.14159);
IndexedFaceSet238->setTexCoordIndex(new int[448]{6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1});
CCoordinate* Coordinate239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate239->setPoint(new float[174]{3.695,0.0098,2.529,5.081,0.0098,1.266,1.292,0.0098,2.988,1.434,0.0098,-2.463,3.584,0.0098,-1.677,4.793,0.0098,-0.4897,1.292,0.0098,2.988,0,0.0098,2.988,3.86,0.776,2.936,5.361,0.776,1.276,1.588,0.776,-2.498,1.36,0.776,3.192,3.752,0.776,-1.776,4.97,0.776,-0.6037,0,0.776,3.192,-3.584,0.0098,-1.677,-1.434,0.0098,-2.463,-1.588,0.776,-2.498,-3.752,0.776,-1.776,-4.793,0.0098,-0.4897,-4.97,0.776,-0.6037,-5.081,0.0098,1.266,-5.361,0.776,1.276,-1.292,0.0098,2.988,-1.36,0.776,3.192,-3.695,0.0098,2.529,-1.292,0.0098,2.988,-3.86,0.776,2.936,0,0.0098,-2.464,0,0.776,-2.506,3.599,-0.4771,2.338,1.272,-0.4771,2.783,0,-0.4771,2.783,-1.272,-0.4771,2.783,-3.599,-0.4771,2.338,-4.861,-0.4771,1.189,-4.602,-0.4771,-0.3904,-3.472,-0.4771,-1.499,-1.398,-0.4771,-2.258,0,-0.4771,-2.259,1.398,-0.4771,-2.258,3.472,-0.4771,-1.499,4.602,-0.4771,-0.3904,4.861,-0.4771,1.189,3.643,1.099,-1.596,1.555,1.099,-2.294,0,1.099,-2.302,-1.555,1.099,-2.294,-3.643,1.099,-1.596,-4.782,1.099,-0.4999,-5.14,1.099,1.216,-3.76,1.099,2.74,-1.35,1.099,2.987,0,1.099,2.987,1.35,1.099,2.987,3.76,1.099,2.74,5.14,1.099,1.216,4.782,1.099,-0.4999});
IndexedFaceSet238->setCoord(*Coordinate239);

CTextureCoordinate* TextureCoordinate240 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate240->setPoint(new float[136]{0.0206,0.3452,0.0903,0.3446,0.0903,0.3446,0.1491,0.3449,0.3629,0.3439,0.3608,0.3469,0.2175,0.3427,0.1838,0.3438,0.0206,0.3452,0.3619,0.3454,0.0206,0.3452,0.089,0.3604,0.1508,0.3559,0.3623,0.3532,0.3588,0.3561,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.2175,0.3427,0.3608,0.3469,0.3588,0.3561,0.2188,0.3538,0.1838,0.3438,0.1874,0.3541,0.1491,0.3449,0.1508,0.3559,0.0206,0.3452,0.0206,0.3452,0.0232,0.3561,0.0232,0.3546,0.0903,0.3446,0.0206,0.3452,0.0903,0.3446,0.089,0.3604,0.3623,0.3532,0.3629,0.3439,0.3619,0.3454,0.3608,0.3537,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541});
IndexedFaceSet238->setTexCoord(*TextureCoordinate240);

Shape234->setGeometry(IndexedFaceSet238);

Transform233->addChildren(*Shape234);

HAnimSegment232->addChildren(*Transform233);

HAnimJoint231->addChildren(*HAnimSegment232);

CHAnimJoint* HAnimJoint241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint241->setName("vt10");
HAnimJoint241->setDEF("hanim_vt10");
HAnimJoint241->setCenter(new float[3]{0,46.369999,-0.6127});
HAnimJoint241->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint241->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setName("t10");
HAnimSegment242->setDEF("hanim_t10");
CTransform* Transform243 = (CTransform *)(m_pScene.createNode("Transform"));
Transform243->setTranslation(new float[3]{0,46.369999,-0.6127});
CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance245 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material246 = (CMaterial *)(m_pScene.createNode("Material"));
Material246->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance245->setMaterial(*Material246);

CImageTexture* ImageTexture247 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture247->setUSE("JinLOA3TextureAtlas");
Appearance245->setTexture(*ImageTexture247);

Shape244->setAppearance(*Appearance245);

CIndexedFaceSet* IndexedFaceSet248 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet248->setCoordIndex(new int[432]{11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1});
IndexedFaceSet248->setCreaseAngle(3.14159);
IndexedFaceSet248->setTexCoordIndex(new int[432]{15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1});
CCoordinate* Coordinate249 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate249->setPoint(new float[168]{3.86,0.0118,2.936,5.361,0.0118,1.276,1.588,0.0118,-2.498,1.36,0.0118,3.192,3.752,0.0118,-1.776,4.97,0.0118,-0.6037,1.418,0.6583,3.362,3.892,0.6583,-1.86,5.121,0.6583,-0.6992,3.987,0.6583,3.259,5.601,0.6583,1.285,1.717,0.6583,-2.528,0,0.6583,3.363,-1.588,0.0118,-2.498,-1.717,0.6583,-2.528,-3.892,0.6583,-1.86,-3.752,0.0118,-1.776,-5.121,0.6583,-0.6992,-4.97,0.0118,-0.6037,-5.601,0.6583,1.285,-5.361,0.0118,1.276,-1.36,0.0118,3.192,-1.418,0.6583,3.362,0,0.0118,3.192,-3.86,0.0118,2.936,-3.987,0.6583,3.259,0,0.0118,-2.506,0,0.6583,-2.543,1.558,-0.2996,-2.316,3.655,-0.2996,-1.616,4.803,-0.2996,-0.5114,5.164,-0.2996,1.223,3.771,-0.2996,2.762,1.351,-0.2996,3.01,0,-0.2996,3.01,-1.351,-0.2996,3.01,-3.771,-0.2996,2.762,-5.164,-0.2996,1.223,-4.803,-0.2996,-0.5114,-3.655,-0.2996,-1.616,-1.558,-0.2996,-2.316,0,-0.2996,-2.324,1.415,0.9368,3.18,3.898,0.9368,3.08,5.402,0.9368,1.24,4.956,0.9368,-0.6038,3.798,0.9368,-1.698,1.689,0.9368,-2.346,0,0.9368,-2.361,-1.689,0.9368,-2.346,-3.798,0.9368,-1.698,-4.956,0.9368,-0.6038,-5.402,0.9368,1.24,-3.898,0.9368,3.08,-1.415,0.9368,3.18,0,0.9368,3.18});
IndexedFaceSet248->setCoord(*Coordinate249);

CTextureCoordinate* TextureCoordinate250 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate250->setPoint(new float[128]{0.089,0.3604,0.1508,0.3559,0.3588,0.3561,0.3623,0.3532,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.3588,0.3561,0.3589,0.3648,0.2207,0.3633,0.2188,0.3538,0.1922,0.3628,0.1874,0.3541,0.1489,0.3665,0.1508,0.3559,0.0232,0.3561,0.0245,0.3617,0.0254,0.3626,0.0232,0.3546,0.089,0.3604,0.0859,0.3657,0.3617,0.3609,0.3623,0.3532,0.3608,0.3537,0.3616,0.3609,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626});
IndexedFaceSet248->setTexCoord(*TextureCoordinate250);

Shape244->setGeometry(IndexedFaceSet248);

Transform243->addChildren(*Shape244);

HAnimSegment242->addChildren(*Transform243);

HAnimJoint241->addChildren(*HAnimSegment242);

CHAnimJoint* HAnimJoint251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint251->setName("vt9");
HAnimJoint251->setDEF("hanim_vt9");
HAnimJoint251->setCenter(new float[3]{0,47.029999,-0.6117});
HAnimJoint251->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint251->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment252 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment252->setName("t9");
HAnimSegment252->setDEF("hanim_t9");
CTransform* Transform253 = (CTransform *)(m_pScene.createNode("Transform"));
Transform253->setTranslation(new float[3]{0,47.029999,-0.6117});
CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance255 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material256 = (CMaterial *)(m_pScene.createNode("Material"));
Material256->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance255->setMaterial(*Material256);

CImageTexture* ImageTexture257 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture257->setUSE("JinLOA3TextureAtlas");
Appearance255->setTexture(*ImageTexture257);

Shape254->setAppearance(*Appearance255);

CIndexedFaceSet* IndexedFaceSet258 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet258->setCoordIndex(new int[432]{7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1});
IndexedFaceSet258->setCreaseAngle(3.14159);
IndexedFaceSet258->setTexCoordIndex(new int[432]{9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1});
CCoordinate* Coordinate259 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate259->setPoint(new float[168]{1.418,0.0059,3.362,3.892,0.0059,-1.86,5.121,0.0059,-0.6992,3.987,0.0059,3.259,5.601,0.0059,1.285,1.717,0.0059,-2.528,0,0.0059,3.363,1.476,0.6524,3.533,4.033,0.6524,-1.943,5.271,0.6524,-0.7947,4.115,0.6524,3.582,5.84,0.6524,1.295,1.845,0.6524,-2.558,0,0.6524,3.533,-1.476,0.6524,3.533,-1.418,0.0059,3.362,-3.987,0.0059,3.259,-4.115,0.6524,3.582,-1.845,0.6524,-2.558,-1.717,0.0059,-2.528,0,0.0059,-2.543,0,0.6524,-2.58,-5.601,0.0059,1.285,-5.84,0.6524,1.295,-4.033,0.6524,-1.943,-3.892,0.0059,-1.86,-5.271,0.6524,-0.7947,-5.121,0.0059,-0.6992,3.895,-0.2838,3.074,1.415,-0.2838,3.173,0,-0.2838,3.173,-1.415,-0.2838,3.173,-3.895,-0.2838,3.074,-5.395,-0.2838,1.239,-4.95,-0.2838,-0.6002,-3.794,-0.2838,-1.692,-1.688,-0.2838,-2.339,0,-0.2838,-2.354,1.688,-0.2838,-2.339,3.794,-0.2838,-1.692,4.95,-0.2838,-0.6002,5.395,-0.2838,1.239,3.937,0.9744,-1.774,1.818,0.9744,-2.369,0,0.9744,-2.391,-1.818,0.9744,-2.369,-3.937,0.9744,-1.774,-5.103,0.9744,-0.6928,-5.633,0.9744,1.255,-4.022,0.9744,3.391,-1.478,0.9744,3.344,0,0.9744,3.344,1.478,0.9744,3.344,4.022,0.9744,3.391,5.633,0.9744,1.255,5.103,0.9744,-0.6928});
IndexedFaceSet258->setCoord(*Coordinate259);

CTextureCoordinate* TextureCoordinate260 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate260->setPoint(new float[128]{0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.0258,0.3672,0.2227,0.3728,0.1969,0.3716,0.0826,0.3711,0.1469,0.377,0.3589,0.3735,0.3612,0.3687,0.0276,0.3706,0.3625,0.3682,0.0258,0.3672,0.0245,0.3617,0.0859,0.3657,0.0826,0.3711,0.3612,0.3687,0.3617,0.3609,0.3616,0.3609,0.3625,0.3682,0.1489,0.3665,0.1469,0.377,0.3589,0.3648,0.3589,0.3735,0.2227,0.3728,0.2207,0.3633,0.1969,0.3716,0.1922,0.3628,0.0276,0.3706,0.0254,0.3626,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.2227,0.3728,0.3589,0.3735,0.3625,0.3682,0.3612,0.3687,0.2227,0.3728,0.1969,0.3716,0.1469,0.377,0.0826,0.3711,0.0258,0.3672,0.0276,0.3706,0.0258,0.3672,0.0826,0.3711,0.1469,0.377,0.1969,0.3716});
IndexedFaceSet258->setTexCoord(*TextureCoordinate260);

Shape254->setGeometry(IndexedFaceSet258);

Transform253->addChildren(*Shape254);

HAnimSegment252->addChildren(*Transform253);

HAnimJoint251->addChildren(*HAnimSegment252);

CHAnimJoint* HAnimJoint261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint261->setName("vt8");
HAnimJoint261->setDEF("hanim_vt8");
HAnimJoint261->setCenter(new float[3]{0,47.68,-0.6117});
HAnimJoint261->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint261->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment262 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment262->setName("t8");
HAnimSegment262->setDEF("hanim_t8");
CTransform* Transform263 = (CTransform *)(m_pScene.createNode("Transform"));
Transform263->setTranslation(new float[3]{0,47.68,-0.6117});
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance265 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material266 = (CMaterial *)(m_pScene.createNode("Material"));
Material266->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance265->setMaterial(*Material266);

CImageTexture* ImageTexture267 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture267->setUSE("JinLOA3TextureAtlas");
Appearance265->setTexture(*ImageTexture267);

Shape264->setAppearance(*Appearance265);

CIndexedFaceSet* IndexedFaceSet268 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet268->setCoordIndex(new int[432]{4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1});
IndexedFaceSet268->setCreaseAngle(3.14159);
IndexedFaceSet268->setTexCoordIndex(new int[432]{1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1});
CCoordinate* Coordinate269 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate269->setPoint(new float[168]{1.476,0.0001,3.533,4.033,0.0001,-1.943,5.271,0.0001,-0.7947,4.234,0.6936,3.898,1.538,0.6936,3.713,6.114,0.7245,1.306,1.987,0.7245,-2.592,4.188,0.7245,-2.037,5.442,0.7245,-0.9006,4.115,0.0001,3.582,5.84,0.0001,1.295,1.845,0.0001,-2.558,0,0.6936,3.713,-1.538,0.6936,3.713,-1.476,0.0001,3.533,-4.115,0.0001,3.582,-4.234,0.6936,3.898,-1.987,0.7245,-2.592,-1.845,0.0001,-2.558,0,0.0001,-2.58,0,0.7245,-2.622,-5.84,0.0001,1.295,-6.114,0.7245,1.306,-4.188,0.7245,-2.037,-4.033,0.0001,-1.943,-5.442,0.7245,-0.9006,-5.271,0.0001,-0.7947,0,0.0001,3.533,1.82,-0.2993,-2.38,3.943,-0.2993,-1.784,5.113,-0.2993,-0.6987,5.646,-0.2993,1.257,4.027,-0.2993,3.403,1.478,-0.2993,3.355,0,-0.2993,3.355,-1.478,-0.2993,3.355,-4.027,-0.2993,3.403,-5.646,-0.2993,1.257,-5.113,-0.2993,-0.6987,-3.943,-0.2993,-1.784,-1.82,-0.2993,-2.38,0,-0.2993,-2.402,0,1.036,3.535,1.544,1.036,3.534,4.148,1.036,3.713,5.917,1.036,1.273,5.286,1.036,-0.8017,4.102,1.036,-1.875,1.963,1.036,-2.414,0,1.036,-2.444,-1.963,1.036,-2.414,-4.102,1.036,-1.875,-5.286,1.036,-0.8017,-5.917,1.036,1.273,-4.148,1.036,3.713,-1.544,1.036,3.534});
IndexedFaceSet268->setCoord(*Coordinate269);

CTextureCoordinate* TextureCoordinate270 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate270->setPoint(new float[128]{0.0908,0.3999,0.0325,0.3879,0.0306,0.3835,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0802,0.3883,0.1575,0.3746,0.3637,0.3704,0.356,0.3713,0.3581,0.3683,0.0256,0.3731,0.0261,0.363,0.2218,0.3729,0.1941,0.3712,0.0325,0.3879,0.0256,0.3731,0.0802,0.3883,0.0908,0.3999,0.3589,0.3783,0.3637,0.3704,0.3581,0.3683,0.3561,0.3769,0.1575,0.3746,0.1568,0.3845,0.356,0.3713,0.3535,0.3812,0.2214,0.3832,0.2218,0.3729,0.1952,0.3809,0.1941,0.3712,0.0306,0.3835,0.0261,0.363,0.3637,0.3704,0.2218,0.3729,0.1941,0.3712,0.1575,0.3746,0.0802,0.3883,0.0256,0.3731,0.0261,0.363,0.0256,0.3731,0.0802,0.3883,0.1575,0.3746,0.1941,0.3712,0.2218,0.3729,0.356,0.3713,0.3581,0.3683,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999,0.0325,0.3879});
IndexedFaceSet268->setTexCoord(*TextureCoordinate270);

Shape264->setGeometry(IndexedFaceSet268);

Transform263->addChildren(*Shape264);

HAnimSegment262->addChildren(*Transform263);

HAnimJoint261->addChildren(*HAnimSegment262);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setName("vt7");
HAnimJoint271->setDEF("hanim_vt7");
HAnimJoint271->setCenter(new float[3]{0,48.369999,-0.6117});
HAnimJoint271->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint271->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setName("t7");
HAnimSegment272->setDEF("hanim_t7");
CTransform* Transform273 = (CTransform *)(m_pScene.createNode("Transform"));
Transform273->setTranslation(new float[3]{0,48.369999,-0.6117});
CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance275 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material276 = (CMaterial *)(m_pScene.createNode("Material"));
Material276->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance275->setMaterial(*Material276);

CImageTexture* ImageTexture277 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture277->setUSE("JinLOA3TextureAtlas");
Appearance275->setTexture(*ImageTexture277);

Shape274->setAppearance(*Appearance275);

CIndexedFaceSet* IndexedFaceSet278 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet278->setCoordIndex(new int[432]{0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1});
IndexedFaceSet278->setCreaseAngle(3.14159);
IndexedFaceSet278->setTexCoordIndex(new int[432]{3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1});
CCoordinate* Coordinate279 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate279->setPoint(new float[168]{6.285,0.5819,1.319,2.062,0.5819,-2.618,4.101,0.5819,3.729,4.29,0.5819,-2.105,5.572,0.5819,-0.9516,1.585,0.5819,3.822,4.234,0.0006,3.898,1.538,0.0006,3.713,6.114,0.0315,1.306,1.987,0.0315,-2.592,4.188,0.0315,-2.037,5.442,0.0315,-0.9006,-6.114,0.0315,1.306,-6.285,0.5819,1.319,-4.101,0.5819,3.729,-4.234,0.0006,3.898,-2.062,0.5819,-2.618,-1.987,0.0315,-2.592,0,0.0315,-2.622,0,0.5819,-2.665,-1.538,0.0006,3.713,-1.585,0.5819,3.822,0,0.5819,3.826,0,0.0006,3.713,-4.29,0.5819,-2.105,-4.188,0.0315,-2.037,-5.572,0.5819,-0.9516,-5.442,0.0315,-0.9006,2.035,0.9259,-2.406,0,0.9259,-2.453,-2.035,0.9259,-2.406,-4.189,0.9259,-1.911,-5.387,0.9259,-0.8326,-6.046,0.9259,1.267,-4.004,0.9259,3.52,-1.581,0.9259,3.609,0,0.9259,3.614,1.581,0.9259,3.609,4.004,0.9259,3.52,6.046,0.9259,1.267,5.387,0.9259,-0.8326,4.189,0.9259,-1.911,1.524,-0.369,3.422,0,-0.369,3.422,-1.524,-0.369,3.422,-4.074,-0.369,3.594,-5.798,-0.369,1.248,-5.183,-0.369,-0.7464,-4.029,-0.369,-1.779,-1.931,-0.369,-2.301,0,-0.369,-2.33,1.931,-0.369,-2.301,4.029,-0.369,-1.779,5.183,-0.369,-0.7464,5.798,-0.369,1.248,4.074,-0.369,3.594});
IndexedFaceSet278->setCoord(*Coordinate279);

CTextureCoordinate* TextureCoordinate280 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate280->setPoint(new float[128]{0.0437,0.4075,0.2185,0.3912,0.3484,0.3944,0.1518,0.3905,0.1902,0.3894,0.3503,0.3879,0.3505,0.3886,0.0427,0.408,0.0961,0.4138,0.0908,0.3999,0.0325,0.3879,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0306,0.3835,0.1568,0.3845,0.1518,0.3905,0.0961,0.4138,0.0908,0.3999,0.3503,0.3879,0.3589,0.3783,0.3561,0.3769,0.3505,0.3886,0.0325,0.3879,0.0437,0.4075,0.0427,0.408,0.0306,0.3835,0.3535,0.3812,0.3484,0.3944,0.2185,0.3912,0.2214,0.3832,0.1902,0.3894,0.1952,0.3809,0.3484,0.3944,0.3505,0.3886,0.3503,0.3879,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.0325,0.3879,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999});
IndexedFaceSet278->setTexCoord(*TextureCoordinate280);

Shape274->setGeometry(IndexedFaceSet278);

Transform273->addChildren(*Shape274);

HAnimSegment272->addChildren(*Transform273);

HAnimJoint271->addChildren(*HAnimSegment272);

CHAnimJoint* HAnimJoint281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint281->setName("vt6");
HAnimJoint281->setDEF("hanim_vt6");
HAnimJoint281->setCenter(new float[3]{0,48.950001,-0.6117});
HAnimJoint281->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint281->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment282->setName("t6");
HAnimSegment282->setDEF("hanim_t6");
CTransform* Transform283 = (CTransform *)(m_pScene.createNode("Transform"));
Transform283->setTranslation(new float[3]{0,48.950001,-0.6117});
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance285 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material286 = (CMaterial *)(m_pScene.createNode("Material"));
Material286->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance285->setMaterial(*Material286);

CImageTexture* ImageTexture287 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture287->setUSE("JinLOA3TextureAtlas");
Appearance285->setTexture(*ImageTexture287);

Shape284->setAppearance(*Appearance285);

CIndexedFaceSet* IndexedFaceSet288 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet288->setCoordIndex(new int[432]{12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1});
IndexedFaceSet288->setCreaseAngle(3.14159);
IndexedFaceSet288->setTexCoordIndex(new int[432]{17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1});
CCoordinate* Coordinate289 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate289->setPoint(new float[168]{1.937,0.6896,-2.644,6.192,0.6897,1.374,5.738,0.6897,-0.7614,1.615,0.6897,3.729,4.273,0.6897,-2.169,3.945,0.6897,3.53,6.285,0.0041,1.319,2.062,0.0041,-2.618,0,0.0041,3.826,4.101,0.0041,3.729,4.29,0.0041,-2.105,5.572,0.0041,-0.9516,1.585,0.0041,3.822,-1.585,0.0041,3.822,-4.101,0.0041,3.729,-3.945,0.6897,3.53,-1.615,0.6897,3.729,-5.572,0.0041,-0.9516,-5.738,0.6897,-0.7614,-6.192,0.6897,1.374,-6.285,0.0041,1.319,-1.937,0.6896,-2.644,-2.062,0.0041,-2.618,0,0.0041,-2.665,0,0.6896,-2.735,0,0.6897,3.756,-4.29,0.0041,-2.105,-4.273,0.6897,-2.169,1.603,1.033,3.489,3.84,1.033,3.298,5.929,1.033,1.293,5.518,1.033,-0.6393,4.157,1.033,-1.947,1.907,1.033,-2.405,0,1.033,-2.494,-1.907,1.033,-2.405,-4.157,1.033,-1.947,-5.518,1.033,-0.6393,-5.929,1.033,1.293,-3.84,1.033,3.298,-1.603,1.033,3.489,0,1.033,3.516,0,-0.2313,-2.425,2.032,-0.2313,-2.378,4.176,-0.2313,-1.885,5.362,-0.2313,-0.8168,6.015,-0.2313,1.26,3.991,-0.2313,3.492,1.581,-0.2313,3.581,0,-0.2313,3.586,-1.581,-0.2313,3.581,-3.991,-0.2313,3.492,-6.015,-0.2313,1.26,-5.362,-0.2313,-0.8168,-4.176,-0.2313,-1.885,-2.032,-0.2313,-2.378});
IndexedFaceSet288->setCoord(*Coordinate289);

CTextureCoordinate* TextureCoordinate290 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate290->setPoint(new float[128]{0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.1518,0.3905,0.3506,0.3865,0.3484,0.3944,0.0427,0.408,0.0961,0.4138,0.3437,0.3934,0.2185,0.3912,0.1902,0.3894,0.0437,0.4075,0.0437,0.4075,0.0961,0.4138,0.1008,0.4259,0.055,0.4216,0.1902,0.3894,0.1843,0.4071,0.1528,0.4078,0.1518,0.3905,0.3364,0.4029,0.3506,0.3865,0.3437,0.3934,0.3325,0.4068,0.0482,0.4185,0.0427,0.408,0.2185,0.3912,0.221,0.4256,0.3484,0.3944,0.3061,0.4256,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.3437,0.3934,0.3506,0.3865,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.3484,0.3944});
IndexedFaceSet288->setTexCoord(*TextureCoordinate290);

Shape284->setGeometry(IndexedFaceSet288);

Transform283->addChildren(*Shape284);

HAnimSegment282->addChildren(*Transform283);

HAnimJoint281->addChildren(*HAnimSegment282);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setName("vt5");
HAnimJoint291->setDEF("hanim_vt5");
HAnimJoint291->setCenter(new float[3]{0,49.639999,-0.6117});
HAnimJoint291->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint291->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment292->setName("t5");
HAnimSegment292->setDEF("hanim_t5");
CTransform* Transform293 = (CTransform *)(m_pScene.createNode("Transform"));
Transform293->setTranslation(new float[3]{0,49.639999,-0.6117});
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance295 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material296 = (CMaterial *)(m_pScene.createNode("Material"));
Material296->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance295->setMaterial(*Material296);

CImageTexture* ImageTexture297 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture297->setUSE("JinLOA3TextureAtlas");
Appearance295->setTexture(*ImageTexture297);

Shape294->setAppearance(*Appearance295);

CIndexedFaceSet* IndexedFaceSet298 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet298->setCoordIndex(new int[432]{0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1});
IndexedFaceSet298->setCreaseAngle(3.14159);
IndexedFaceSet298->setTexCoordIndex(new int[432]{5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1});
CCoordinate* Coordinate299 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate299->setPoint(new float[168]{1.811,0.6855,-2.67,5.903,0.6856,-0.5713,3.788,0.6856,3.331,1.646,0.6856,3.637,4.256,0.6856,-2.233,6.098,0.6856,1.429,1.937,0,-2.644,6.192,0.0001,1.374,5.738,0.0001,-0.7614,1.615,0.0001,3.729,0,0.0001,3.756,4.273,0.0001,-2.169,3.945,0.0001,3.53,0,0.6855,-2.804,-1.811,0.6855,-2.67,-1.937,0,-2.644,0,0,-2.735,0,0.6856,3.687,-1.615,0.0001,3.729,-1.646,0.6856,3.637,-3.788,0.6856,3.331,-3.945,0.0001,3.53,-6.192,0.0001,1.374,-6.098,0.6856,1.429,-5.903,0.6856,-0.5713,-5.738,0.0001,-0.7614,-4.273,0.0001,-2.169,-4.256,0.6856,-2.233,1.621,1.052,3.355,3.67,1.052,3.062,5.802,1.052,1.306,5.631,1.052,-0.4437,4.118,1.052,-1.97,1.776,1.052,-2.389,0,1.052,-2.52,-1.776,1.052,-2.389,-4.118,1.052,-1.97,-5.631,1.052,-0.4437,-5.802,1.052,1.306,-3.67,1.052,3.062,-1.621,1.052,3.355,0,1.052,3.404,3.821,-0.3346,3.256,1.601,-0.3346,3.447,0,-0.3346,3.474,-1.601,-0.3346,3.447,-3.821,-0.3346,3.256,-5.882,-0.3346,1.279,-5.479,-0.3346,-0.6177,-4.136,-0.3346,-1.908,-1.902,-0.3347,-2.363,0,-0.3347,-2.451,1.902,-0.3347,-2.363,4.136,-0.3346,-1.908,5.479,-0.3346,-0.6177,5.882,-0.3346,1.279});
IndexedFaceSet298->setCoord(*Coordinate299);

CTextureCoordinate* TextureCoordinate300 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate300->setPoint(new float[128]{0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.1538,0.4251,0.1784,0.4249,0.3223,0.4192,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.3214,0.4203,0.3223,0.4192,0.3364,0.4029,0.3325,0.4068,0.0537,0.4289,0.0482,0.4185,0.055,0.4216,0.0663,0.4356,0.1055,0.438,0.1008,0.4259,0.1528,0.4078,0.1538,0.4251,0.1784,0.4249,0.1843,0.4071,0.221,0.4256,0.2236,0.46,0.3061,0.4256,0.2638,0.4568,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078});
IndexedFaceSet298->setTexCoord(*TextureCoordinate300);

Shape294->setGeometry(IndexedFaceSet298);

Transform293->addChildren(*Shape294);

HAnimSegment292->addChildren(*Transform293);

HAnimJoint291->addChildren(*HAnimSegment292);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setName("vt4");
HAnimJoint301->setDEF("hanim_vt4");
HAnimJoint301->setCenter(new float[3]{0,50.310001,-0.6117});
HAnimJoint301->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint301->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setName("t4");
HAnimSegment302->setDEF("hanim_t4");
CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{0,50.310001,-0.6117});
CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance305 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material306 = (CMaterial *)(m_pScene.createNode("Material"));
Material306->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance305->setMaterial(*Material306);

CImageTexture* ImageTexture307 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture307->setUSE("JinLOA3TextureAtlas");
Appearance305->setTexture(*ImageTexture307);

Shape304->setAppearance(*Appearance305);

CIndexedFaceSet* IndexedFaceSet308 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet308->setCoordIndex(new int[464]{2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1});
IndexedFaceSet308->setCreaseAngle(3.14159);
IndexedFaceSet308->setTexCoordIndex(new int[464]{3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1});
CCoordinate* Coordinate309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate309->setPoint(new float[180]{1.681,0.822,3.528,5.775,0.849,-0.9043,5.825,0.7894,1.521,3.585,0.9022,3.073,1.811,0.849,-2.505,4.284,0.849,-2.108,4.617,0.849,-2.072,1.811,0.0128,-2.67,5.903,0.0129,-0.5713,3.788,0.0129,3.331,1.646,0.0129,3.637,4.256,0.0129,-2.233,6.098,0.0129,1.429,-6.098,0.0129,1.429,-5.825,0.7894,1.521,-3.585,0.9022,3.073,-3.788,0.0129,3.331,-1.681,0.822,3.528,-1.646,0.0129,3.637,-1.811,0.0128,-2.67,0,0.0128,-2.804,0,0.849,-2.639,-1.811,0.849,-2.505,-4.256,0.0129,-2.233,-4.284,0.849,-2.108,0,0.822,3.616,0,0.0129,3.687,-4.617,0.849,-2.072,-5.775,0.849,-0.9043,-5.903,0.0129,-0.5713,3.461,1.375,2.795,5.523,1.375,1.367,5.479,1.375,-0.7788,4.48,1.375,-1.787,4.244,1.375,-1.812,1.776,1.375,-2.209,0,1.375,-2.34,-1.776,1.375,-2.209,-4.244,1.375,-1.812,-4.48,1.375,-1.787,-5.479,1.375,-0.7788,-5.523,1.375,1.367,-3.461,1.375,2.795,-1.638,1.375,3.231,0,1.375,3.317,1.638,1.375,3.231,3.663,-0.3222,3.047,1.62,-0.3222,3.339,0,-0.3222,3.388,-1.62,-0.3222,3.339,-3.663,-0.3222,3.047,-5.786,-0.3222,1.299,-5.616,-0.3222,-0.4366,-4.111,-0.3222,-1.955,-1.774,-0.3222,-2.373,0,-0.3222,-2.505,1.774,-0.3222,-2.373,4.111,-0.3222,-1.955,5.616,-0.3222,-0.4366,5.786,-0.3222,1.299});
IndexedFaceSet308->setCoord(*Coordinate309);

CTextureCoordinate* TextureCoordinate310 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate310->setPoint(new float[140]{0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.2633,0.457,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.3223,0.4192,0.2638,0.4568,0.1784,0.4249,0.1784,0.4249,0.1055,0.438,0.0663,0.4356,0.2236,0.46,0.3214,0.4203,0.1538,0.4251,0.0537,0.4289,0.1538,0.4251,0.1504,0.4433,0.1107,0.4532,0.1055,0.438,0.0777,0.4495,0.0663,0.4356,0.3223,0.4192,0.3214,0.4203,0.3214,0.4203,0.3222,0.4193,0.2236,0.46,0.2638,0.4568,0.2633,0.457,0.2198,0.4731,0.0639,0.4488,0.0537,0.4289,0.2144,0.4674,0.1846,0.4438,0.1784,0.4249,0.1784,0.4249,0.1107,0.4532,0.1504,0.4433,0.1846,0.4438,0.2144,0.4674,0.2198,0.4731,0.2633,0.457,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.0777,0.4495,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251});
IndexedFaceSet308->setTexCoord(*TextureCoordinate310);

Shape304->setGeometry(IndexedFaceSet308);

Transform303->addChildren(*Shape304);

HAnimSegment302->addChildren(*Transform303);

HAnimJoint301->addChildren(*HAnimSegment302);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setName("vt3");
HAnimJoint311->setDEF("hanim_vt3");
HAnimJoint311->setCenter(new float[3]{0,51.130001,-0.6117});
HAnimJoint311->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint311->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setName("t3");
HAnimSegment312->setDEF("hanim_t3");
CTransform* Transform313 = (CTransform *)(m_pScene.createNode("Transform"));
Transform313->setTranslation(new float[3]{0,51.130001,-0.6117});
CShape* Shape314 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance315 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material316 = (CMaterial *)(m_pScene.createNode("Material"));
Material316->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance315->setMaterial(*Material316);

CImageTexture* ImageTexture317 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture317->setUSE("JinLOA3TextureAtlas");
Appearance315->setTexture(*ImageTexture317);

Shape314->setAppearance(*Appearance315);

CIndexedFaceSet* IndexedFaceSet318 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet318->setCoordIndex(new int[448]{16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1});
IndexedFaceSet318->setCreaseAngle(3.14159);
IndexedFaceSet318->setTexCoordIndex(new int[448]{2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1});
CCoordinate* Coordinate319 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate319->setPoint(new float[198]{1.713,0.7435,3.428,5.378,1.242,1.672,4.324,1.242,-1.927,5.141,1.242,-1.839,5.589,1.242,-1.387,3.32,1.242,2.736,1.811,1.242,-2.266,1.593,1.064,4.098,1.681,0.002,3.528,5.775,0.029,-0.9043,5.825,-0.0306,1.521,3.585,0.0822,3.073,1.811,0.029,-2.505,4.284,0.029,-2.108,4.617,0.029,-2.072,0,0.002,3.616,0,0.3874,4.121,0,0.029,-2.639,0,1.242,-2.4,5.018,1.668,-1.583,4.292,1.668,-1.661,1.783,1.668,-2,1.521,1.668,3.814,3.175,1.668,2.51,5.121,1.668,1.504,5.314,1.668,-1.285,5.669,-0.44,1.408,3.545,-0.44,2.879,1.676,-0.44,3.326,0,-0.44,3.413,1.817,-0.44,-2.289,4.335,-0.44,-1.884,4.586,-0.44,-1.857,5.623,-0.44,-0.8114,-1.713,0.7435,3.428,-1.593,1.064,4.098,-1.681,0.002,3.528,-5.825,-0.0306,1.521,-5.378,1.242,1.672,-3.32,1.242,2.736,-3.585,0.0822,3.073,-1.811,1.242,-2.266,-1.811,0.029,-2.505,-5.141,1.242,-1.839,-4.617,0.029,-2.072,-4.284,0.029,-2.108,-4.324,1.242,-1.927,-5.589,1.242,-1.387,-5.775,0.029,-0.9043,0,1.15,3.82,-4.292,1.668,-1.661,-5.018,1.668,-1.583,-1.783,1.668,-2,0,1.668,-2.132,-3.175,1.668,2.51,-1.521,1.668,3.814,-5.121,1.668,1.504,-5.314,1.668,-1.285,-3.545,-0.44,2.879,-5.669,-0.44,1.408,-1.676,-0.44,3.326,-1.817,-0.44,-2.289,0,-0.44,-2.423,-4.335,-0.44,-1.884,-4.586,-0.44,-1.857,-5.623,-0.44,-0.8114});
IndexedFaceSet318->setCoord(*Coordinate319);

CTextureCoordinate* TextureCoordinate320 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate320->setPoint(new float[156]{0.0763,0.4945,0.0877,0.4617,0.0525,0.4715,0.0399,0.5407,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.3222,0.4193,0.2633,0.457,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.2035,0.4795,0.2169,0.492,0.2635,0.4569,0.3214,0.4203,0.0763,0.4945,0.1178,0.4708,0.1491,0.4682,0.1915,0.4696,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.0639,0.4488,0.0877,0.4617,0.0763,0.4945,0.0525,0.4715,0.0777,0.4495,0.1504,0.4433,0.1491,0.4682,0.1178,0.4708,0.1107,0.4532,0.3214,0.4203,0.3214,0.4203,0.3223,0.4193,0.3222,0.4193,0.2035,0.4795,0.2144,0.4674,0.2198,0.4731,0.2169,0.492,0.1915,0.4696,0.1846,0.4438,0.2633,0.457,0.2635,0.4569,0.0399,0.5407,0.2169,0.492,0.2035,0.4795,0.2635,0.4569,0.3214,0.4203,0.1178,0.4708,0.0763,0.4945,0.1491,0.4682,0.1915,0.4696,0.1107,0.4532,0.1504,0.4433,0.0777,0.4495,0.0639,0.4488,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438});
IndexedFaceSet318->setTexCoord(*TextureCoordinate320);

Shape314->setGeometry(IndexedFaceSet318);

Transform313->addChildren(*Shape314);

HAnimSegment312->addChildren(*Transform313);

HAnimJoint311->addChildren(*HAnimSegment312);

CHAnimJoint* HAnimJoint321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint321->setName("vt2");
HAnimJoint321->setDEF("hanim_vt2");
HAnimJoint321->setCenter(new float[3]{0,52.23,-0.6127});
HAnimJoint321->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint321->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment322 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment322->setName("t2");
HAnimSegment322->setDEF("hanim_t2");
CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
Transform323->setTranslation(new float[3]{0,52.23,-0.6127});
CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance325 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material326 = (CMaterial *)(m_pScene.createNode("Material"));
Material326->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance325->setMaterial(*Material326);

CImageTexture* ImageTexture327 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture327->setUSE("JinLOA3TextureAtlas");
Appearance325->setTexture(*ImageTexture327);

Shape324->setAppearance(*Appearance325);

CIndexedFaceSet* IndexedFaceSet328 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet328->setCoordIndex(new int[440]{1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1});
IndexedFaceSet328->setCreaseAngle(3.14159);
IndexedFaceSet328->setTexCoordIndex(new int[440]{0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1});
CCoordinate* Coordinate329 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate329->setPoint(new float[198]{3.131,0.4823,3.66,1.373,0.5334,3.428,1.38,0.5334,3.897,0,0.9032,-2.25,0,-0.0071,3.661,2.043,1.067,3.089,5.086,0.9718,1.771,2.245,1.223,3.581,1.811,0.9032,-2.116,5.472,0.9071,-1.692,4.349,0.906,-1.813,3.805,1.161,2.723,1.182,1.067,2.765,5.378,0.1425,1.672,4.324,0.1425,-1.927,5.141,0.1425,-1.839,5.589,0.1425,-1.387,3.32,0.1425,2.736,1.811,0.1425,-2.266,1.593,-0.036,4.098,0,0.0508,3.82,0,0.1425,-2.4,4.884,1.323,1.266,4.971,1.271,-1.4,4.325,1.271,-1.641,1.791,1.268,-1.912,4.298,-0.4521,-1.715,5.043,-0.4521,-1.635,5.369,-0.4521,-1.306,5.173,-0.4521,1.538,3.204,-0.4521,2.555,1.535,-0.4521,2.956,1.789,-0.4521,-2.054,-1.373,0.5334,3.428,-2.043,1.067,3.089,-1.182,1.067,2.765,-1.593,-0.036,4.098,-3.131,0.4823,3.66,-2.245,1.223,3.581,-1.38,0.5334,3.897,-3.805,1.161,2.723,-3.32,0.1425,2.736,-5.086,0.9718,1.771,-4.349,0.906,-1.813,-5.472,0.9071,-1.692,-5.141,0.1425,-1.839,-4.324,0.1425,-1.927,-5.589,0.1425,-1.387,-1.811,0.1425,-2.266,-1.811,0.9032,-2.116,-5.378,0.1425,1.672,0,1.067,2.596,-4.971,1.271,-1.4,-4.884,1.323,1.266,-4.325,1.271,-1.641,-1.791,1.268,-1.912,0,1.268,-2.03,-5.043,-0.4521,-1.635,-4.298,-0.4521,-1.715,-5.369,-0.4521,-1.306,-5.173,-0.4521,1.538,-3.204,-0.4521,2.555,-1.535,-0.4521,2.956,0,-0.4521,3.603,-1.789,-0.4521,-2.054,0,-0.4521,-2.186});
IndexedFaceSet328->setCoord(*Coordinate329);

CTextureCoordinate* TextureCoordinate330 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate330->setPoint(new float[168]{0.4473,0.6921,0.4449,0.6914,0.4513,0.6918,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.0786,0.5849,0.0516,0.5759,0.1474,0.4856,0.1963,0.4863,0.0346,0.5664,0.3214,0.4203,0.3223,0.4192,0.2638,0.4568,0.2146,0.5039,0.1227,0.5144,0.4468,0.6898,0.4495,0.6881,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0763,0.4945,0.0399,0.5407,0.1474,0.4856,0.1963,0.4863,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3214,0.4203,0.3223,0.4193,0.4473,0.6921,0.4449,0.6914,0.4468,0.6898,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1227,0.5144,0.0786,0.5849,0.0516,0.5759,0.1178,0.4708,0.1474,0.4856,0.0346,0.5664,0.0399,0.5407,0.2146,0.5039,0.1963,0.4863,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.2635,0.4569,0.2638,0.4568,0.1491,0.4682,0.3214,0.4203,0.3214,0.4203,0.3223,0.4192,0.3223,0.4193,0.4495,0.6881,0.4513,0.6918,0.1963,0.4863,0.1474,0.4856,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3223,0.4193,0.3214,0.4203});
IndexedFaceSet328->setTexCoord(*TextureCoordinate330);

Shape324->setGeometry(IndexedFaceSet328);

Transform323->addChildren(*Shape324);

HAnimSegment322->addChildren(*Transform323);

HAnimJoint321->addChildren(*HAnimSegment322);

CHAnimJoint* HAnimJoint331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint331->setName("vt1");
HAnimJoint331->setDEF("hanim_vt1");
HAnimJoint331->setCenter(new float[3]{0,53.290001,-0.6117});
HAnimJoint331->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint331->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment332 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment332->setName("t1");
HAnimSegment332->setDEF("hanim_t1");
CTransform* Transform333 = (CTransform *)(m_pScene.createNode("Transform"));
Transform333->setTranslation(new float[3]{0,53.290001,-0.6117});
CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance335 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material336 = (CMaterial *)(m_pScene.createNode("Material"));
Material336->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance335->setMaterial(*Material336);

CImageTexture* ImageTexture337 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture337->setUSE("JinLOA3TextureAtlas");
Appearance335->setTexture(*ImageTexture337);

Shape334->setAppearance(*Appearance335);

CIndexedFaceSet* IndexedFaceSet338 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet338->setCoordIndex(new int[720]{1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1});
IndexedFaceSet338->setCreaseAngle(3.14159);
IndexedFaceSet338->setTexCoordIndex(new int[720]{14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1});
CCoordinate* Coordinate339 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate339->setPoint(new float[276]{1.47,1.71,-1.15,2.016,1.688,0.0414,2.914,1.242,0.0931,3.187,0.3754,1.303,0.7806,1.128,1.368,1.573,1.389,0.8702,2.043,0.0045,3.089,2.245,0.1604,3.581,5.472,-0.1553,-1.692,3.805,0.0984,2.723,1.182,0.0045,2.765,0,0.0045,2.596,0,1.333,-0.0527,2.599,2.142,-1.646,0.9629,2.166,-3.392,2.035,2.193,-3.055,3.439,2.077,0.1272,3.953,1.215,-2.467,5.073,1.55,0.1272,4.655,0.2739,-2.02,1.032,-0.6843,-4.667,0,-0.6754,-4.802,2.39,-0.2981,-4.154,1.677,-4.028,-3.387,4.12,-2.512,-3.272,0,-3.532,-2.804,0,1.519,-1.61,2.982,1.02,1.941,4.42,0.7184,1.865,5.602,0.5099,-0.0537,1.811,-3.383,-2.67,1.811,-0.1592,-2.116,1.833,-2.424,-2.283,4.241,-2.424,-2.283,4.225,-0.1553,-1.692,0.6928,1.497,-1.503,-2.914,1.242,0.0931,-2.016,1.688,0.0414,-1.573,1.389,0.8702,-2.043,0.0045,3.089,-2.245,0.1604,3.581,-2.982,1.02,1.941,-0.7806,1.128,1.368,0,1.119,1.49,-1.182,0.0045,2.765,-0.6928,1.497,-1.503,-5.602,0.5099,-0.0537,-3.805,0.0984,2.723,-0.9629,2.166,-3.392,0,2.143,-3.557,-2.035,2.193,-3.055,-1.47,1.71,-1.15,-5.073,1.55,0.1272,-4.655,0.2739,-2.02,-3.953,1.215,-2.467,-3.439,2.077,0.1272,-4.42,0.7184,1.865,-2.599,2.142,-1.646,-3.187,0.3754,1.303,-5.472,-0.1553,-1.692,-1.677,-4.028,-3.387,0,-4.35,-3.506,-1.032,-0.6843,-4.667,-4.12,-2.512,-3.272,-2.39,-0.2981,-4.154,-1.811,-3.383,-2.67,-4.241,-2.424,-2.283,-1.811,-0.1592,-2.116,0,-0.1592,-2.25,0,-2.424,-2.283,-1.833,-2.424,-2.283,-4.225,-0.1553,-1.692,5.086,-0.0906,1.771,-5.086,-0.0906,1.771,2.337,-0.4422,3.448,2.182,-0.4422,3.182,1.228,-0.4422,2.736,0,-0.4422,2.56,-1.228,-0.4422,2.736,-2.182,-0.4422,3.182,-2.337,-0.4422,3.448,-3.706,-0.4422,2.653,-4.913,-0.4422,1.734,-5.268,-0.4422,-1.51,-4.209,-0.4422,-1.51,-1.789,-0.4422,-1.935,0,-0.4422,-2.068,1.789,-0.4422,-1.935,4.209,-0.4422,-1.51,5.268,-0.4422,-1.51,4.913,-0.4422,1.734,3.706,-0.4422,2.653});
IndexedFaceSet338->setCoord(*Coordinate339);

CTextureCoordinate* TextureCoordinate340 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate340->setPoint(new float[304]{0.4416,0.6747,0.4535,0.6485,0.4483,0.6438,0.4499,0.6371,0.4594,0.6763,0.4399,0.6472,0.4645,0.6783,0.4385,0.6236,0.4279,0.6258,0.1412,0.5207,0.1108,0.5655,0.1073,0.5839,0.1708,0.4854,0.4376,0.6345,0.4528,0.6648,0.4548,0.6714,0.4459,0.6652,0.4669,0.6678,0.0786,0.5849,0.4476,0.6884,0.1474,0.4856,0.0865,0.5614,0.1963,0.4863,0.1227,0.5144,0.4539,0.6879,0.4621,0.6889,0.2661,0.5914,0.3505,0.5919,0.241,0.592,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.2067,0.5908,0.2708,0.4736,0.347,0.4317,0.3616,0.5328,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.3477,0.431,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3477,0.431,0.3511,0.5932,0.3206,0.4193,0.2505,0.5754,0.3554,0.5911,0.2112,0.5805,0.1632,0.5887,0.1073,0.5839,0.1474,0.4856,0.1108,0.5655,0.1412,0.5207,0.1708,0.4854,0.1963,0.4863,0.3223,0.4192,0.2638,0.4568,0.3206,0.4193,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.2252,0.4828,0.4337,0.6239,0.4689,0.6806,0.4689,0.6702,0.4627,0.667,0.4583,0.6722,0.4578,0.6906,0.1073,0.5839,0.0786,0.5849,0.0865,0.5614,0.1108,0.5655,0.4514,0.6379,0.4463,0.6454,0.4498,0.6514,0.4521,0.6748,0.4466,0.6744,0.4444,0.685,0.4523,0.6875,0.4395,0.6457,0.4393,0.633,0.4295,0.6275,0.4284,0.6322,0.4488,0.6639,0.1708,0.4854,0.1412,0.5207,0.1227,0.5144,0.1963,0.4863,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.1412,0.5207,0.1108,0.5655,0.2067,0.5908,0.1632,0.5887,0.1073,0.5839,0.1708,0.4854,0.1963,0.4863,0.1474,0.4856,0.3477,0.431,0.347,0.4317,0.3616,0.5328,0.3623,0.5333,0.238,0.493,0.2708,0.4736,0.2733,0.5359,0.249,0.5451,0.3505,0.5919,0.3511,0.5932,0.3623,0.5333,0.3223,0.4192,0.3206,0.4193,0.3477,0.431,0.2252,0.4828,0.2638,0.4568,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.1963,0.4863,0.3206,0.4193,0.1474,0.4856,0.4323,0.622,0.0865,0.5614,0.0786,0.5849,0.4539,0.6879,0.4621,0.6889,0.4523,0.6875,0.4578,0.6906,0.0865,0.5614,0.1227,0.5144,0.1474,0.4856,0.1474,0.4856,0.1227,0.5144,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1999,0.4849,0.1421,0.507,0.1227,0.5144});
IndexedFaceSet338->setTexCoord(*TextureCoordinate340);

Shape334->setGeometry(IndexedFaceSet338);

Transform333->addChildren(*Shape334);

HAnimSegment332->addChildren(*Transform333);

HAnimJoint331->addChildren(*HAnimSegment332);

CHAnimJoint* HAnimJoint341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint341->setName("vc7");
HAnimJoint341->setDEF("hanim_vc7");
HAnimJoint341->setCenter(new float[3]{0,54.450001,-0.6695});
HAnimJoint341->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint341->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment342 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment342->setName("c7");
HAnimSegment342->setDEF("hanim_c7");
CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform343->setTranslation(new float[3]{0,54.450001,-0.6695});
CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance345 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material346 = (CMaterial *)(m_pScene.createNode("Material"));
Material346->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance345->setMaterial(*Material346);

CImageTexture* ImageTexture347 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture347->setUSE("JinLOA3TextureAtlas");
Appearance345->setTexture(*ImageTexture347);

Shape344->setAppearance(*Appearance345);

CIndexedFaceSet* IndexedFaceSet348 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet348->setCoordIndex(new int[368]{5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
IndexedFaceSet348->setCreaseAngle(3.14159);
IndexedFaceSet348->setTexCoordIndex(new int[368]{5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
CCoordinate* Coordinate349 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate349->setPoint(new float[144]{0.5369,0.1071,-1.124,0,0.1694,-1.195,1.139,0.1756,-0.8504,1.562,0.1474,0.0729,1.219,-0.0249,0.7152,0,-0.3558,1.195,0.605,-0.345,1.101,-0.5369,0.1071,-1.124,-1.139,0.1755,-0.8504,-1.562,0.1474,0.0729,-1.219,-0.0249,0.7153,-0.605,-0.345,1.101,0,-0.711,-1.028,0.4943,-0.7203,-0.9649,0.999,-0.7546,-0.733,1.342,-0.8648,0.0135,1.076,-0.9372,0.5038,0.5328,-0.9856,0.832,0,-0.9977,0.9139,-0.5328,-0.9856,0.832,-1.076,-0.9372,0.5038,-1.342,-0.8648,0.0136,-0.999,-0.7546,-0.733,-0.4943,-0.7203,-0.9649,0.5369,0.5357,-1.124,1.139,0.5357,-0.8504,1.562,0.5357,0.0729,1.219,0.5357,0.7153,0,0.5357,1.195,-0.605,0.5357,1.101,-1.139,0.5357,-0.8504,-1.562,0.5357,0.0729,0,0.5357,-1.195,0.605,0.5357,1.101,-0.5369,0.5357,-1.124,-1.219,0.5357,0.7153,0.4947,0.7335,-0.9348,0,0.7335,-1,-0.4947,0.7335,-0.9348,-1.008,0.7335,-0.7016,-1.361,0.7335,0.069,-1.091,0.7335,0.5735,-0.5462,0.7335,0.9162,0,0.7335,1.001,0.5462,0.7335,0.9162,1.091,0.7335,0.5735,1.361,0.7335,0.0689,1.008,0.7335,-0.7016});
IndexedFaceSet348->setCoord(*Coordinate349);

CTextureCoordinate* TextureCoordinate350 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate350->setPoint(new float[96]{0.3995,0.6285,0.3906,0.6293,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.3906,0.6224,0.4006,0.6225,0.3818,0.6285,0.3719,0.632,0.3649,0.6316,0.3706,0.6267,0.3807,0.6225,0.3906,0.6293,0.3995,0.6285,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.4006,0.6225,0.3906,0.6224,0.3807,0.6225,0.3706,0.6267,0.3649,0.6316,0.3719,0.632,0.3818,0.6285,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6534,0.3906,0.6538,0.3818,0.6534,0.3719,0.6549,0.3649,0.6547,0.3706,0.6527,0.3807,0.6518,0.3906,0.6475,0.4006,0.6518,0.4107,0.6527,0.4164,0.6547,0.4094,0.6549});
IndexedFaceSet348->setTexCoord(*TextureCoordinate350);

Shape344->setGeometry(IndexedFaceSet348);

Transform343->addChildren(*Shape344);

HAnimSegment342->addChildren(*Transform343);

HAnimJoint341->addChildren(*HAnimSegment342);

CHAnimJoint* HAnimJoint351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint351->setName("vc6");
HAnimJoint351->setDEF("hanim_vc6");
HAnimJoint351->setCenter(new float[3]{0,54.98,-0.6695});
HAnimJoint351->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint351->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment352 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment352->setName("c6");
HAnimSegment352->setDEF("hanim_c6");
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
Transform353->setTranslation(new float[3]{0,54.98,-0.6695});
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance355 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material356 = (CMaterial *)(m_pScene.createNode("Material"));
Material356->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance355->setMaterial(*Material356);

CImageTexture* ImageTexture357 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture357->setUSE("JinLOA3TextureAtlas");
Appearance355->setTexture(*ImageTexture357);

Shape354->setAppearance(*Appearance355);

CIndexedFaceSet* IndexedFaceSet358 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet358->setCoordIndex(new int[368]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
IndexedFaceSet358->setCreaseAngle(3.14159);
IndexedFaceSet358->setTexCoordIndex(new int[368]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
CCoordinate* Coordinate359 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate359->setPoint(new float[144]{0.5369,0.5581,-1.124,1.139,0.5581,-0.8504,1.562,0.5581,0.0729,1.219,0.5581,0.7153,0,0.5581,1.195,-0.605,0.5581,1.101,-1.139,0.5581,-0.8504,-1.562,0.5581,0.0729,0,0.5581,-1.195,0.605,0.5581,1.101,-0.5369,0.5581,-1.124,-1.219,0.5581,0.7153,0.5369,0.0038,-1.124,1.139,0.0038,-0.8504,1.562,0.0038,0.0729,1.219,0.0038,0.7153,0,0.0038,1.195,-0.605,0.0038,1.101,-1.139,0.0038,-0.8504,-1.562,0.0038,0.0729,0,0.0038,-1.195,0.605,0.0038,1.101,-0.5369,0.0038,-1.124,-1.219,0.0038,0.7153,0.4947,0.756,-0.9348,0,0.756,-1,-0.4947,0.756,-0.9348,-1.008,0.756,-0.7016,-1.361,0.756,0.069,-1.091,0.756,0.5735,-0.5462,0.756,0.9162,0,0.756,1.001,0.5462,0.756,0.9162,1.091,0.756,0.5735,1.361,0.756,0.069,1.008,0.756,-0.7016,0,-0.2355,-1,0.4947,-0.2355,-0.9348,1.008,-0.2355,-0.7016,1.361,-0.2355,0.0689,1.091,-0.2355,0.5735,0.5462,-0.2355,0.9162,0,-0.2355,1.001,-0.5462,-0.2355,0.9162,-1.091,-0.2355,0.5735,-1.361,-0.2355,0.069,-1.008,-0.2355,-0.7016,-0.4947,-0.2355,-0.9348});
IndexedFaceSet358->setCoord(*Coordinate359);

CTextureCoordinate* TextureCoordinate360 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate360->setPoint(new float[96]{0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6565,0.3906,0.6568,0.3818,0.6565,0.3719,0.6578,0.3649,0.6576,0.3706,0.6559,0.3807,0.6555,0.3906,0.6507,0.4006,0.6555,0.4107,0.6559,0.4164,0.6576,0.4094,0.6578,0.3906,0.6538,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.4006,0.6518,0.3906,0.6475,0.3807,0.6518,0.3706,0.6527,0.3649,0.6547,0.3719,0.6549,0.3818,0.6534});
IndexedFaceSet358->setTexCoord(*TextureCoordinate360);

Shape354->setGeometry(IndexedFaceSet358);

Transform353->addChildren(*Shape354);

HAnimSegment352->addChildren(*Transform353);

HAnimJoint351->addChildren(*HAnimSegment352);

CHAnimJoint* HAnimJoint361 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint361->setName("vc5");
HAnimJoint361->setDEF("hanim_vc5");
HAnimJoint361->setCenter(new float[3]{0,55.540001,-0.6695});
HAnimJoint361->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint361->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment362 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment362->setName("c5");
HAnimSegment362->setDEF("hanim_c5");
CTransform* Transform363 = (CTransform *)(m_pScene.createNode("Transform"));
Transform363->setTranslation(new float[3]{0,55.540001,-0.6695});
CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance365 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material366 = (CMaterial *)(m_pScene.createNode("Material"));
Material366->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance365->setMaterial(*Material366);

CImageTexture* ImageTexture367 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture367->setUSE("JinLOA3TextureAtlas");
Appearance365->setTexture(*ImageTexture367);

Shape364->setAppearance(*Appearance365);

CIndexedFaceSet* IndexedFaceSet368 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet368->setCoordIndex(new int[368]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
IndexedFaceSet368->setCreaseAngle(3.14159);
IndexedFaceSet368->setTexCoordIndex(new int[368]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
CCoordinate* Coordinate369 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate369->setPoint(new float[144]{0.5369,0.5456,-1.124,1.139,0.5456,-0.8504,1.562,0.5456,0.0729,1.219,0.5456,0.7153,0,0.5456,1.195,-0.605,0.5456,1.101,-1.139,0.5456,-0.8504,-1.562,0.5456,0.0729,0,0.5456,-1.195,0.605,0.5456,1.101,-0.5369,0.5456,-1.124,-1.219,0.5456,0.7153,0.5369,0.0012,-1.124,1.139,0.0012,-0.8504,1.562,0.0012,0.0729,1.219,0.0012,0.7153,0,0.0012,1.195,-0.605,0.0012,1.101,-1.139,0.0012,-0.8504,-1.562,0.0012,0.0729,0,0.0012,-1.195,0.605,0.0012,1.101,-0.5369,0.0012,-1.124,-1.219,0.0012,0.7153,0.4947,0.7434,-0.9348,0,0.7434,-1,-0.4947,0.7434,-0.9348,-1.008,0.7434,-0.7016,-1.361,0.7434,0.069,-1.091,0.7434,0.5735,-0.5462,0.7434,0.9162,0,0.7434,1.001,0.5462,0.7434,0.9162,1.091,0.7434,0.5735,1.361,0.7434,0.069,1.008,0.7434,-0.7016,0,-0.2282,-1,0.4947,-0.2282,-0.9348,1.008,-0.2282,-0.7016,1.361,-0.2282,0.069,1.091,-0.2282,0.5735,0.5462,-0.2282,0.9162,0,-0.2282,1.001,-0.5462,-0.2282,0.9162,-1.091,-0.2282,0.5735,-1.361,-0.2282,0.069,-1.008,-0.2282,-0.7016,-0.4947,-0.2282,-0.9348});
IndexedFaceSet368->setCoord(*Coordinate369);

CTextureCoordinate* TextureCoordinate370 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate370->setPoint(new float[96]{0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6596,0.3906,0.6599,0.3818,0.6596,0.3719,0.6606,0.3649,0.6605,0.3706,0.6591,0.3807,0.6592,0.3906,0.6538,0.4006,0.6592,0.4107,0.6591,0.4164,0.6605,0.4094,0.6606,0.3906,0.6568,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.4006,0.6555,0.3906,0.6507,0.3807,0.6555,0.3706,0.6559,0.3649,0.6576,0.3719,0.6578,0.3818,0.6565});
IndexedFaceSet368->setTexCoord(*TextureCoordinate370);

Shape364->setGeometry(IndexedFaceSet368);

Transform363->addChildren(*Shape364);

HAnimSegment362->addChildren(*Transform363);

HAnimJoint361->addChildren(*HAnimSegment362);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setName("vc4");
HAnimJoint371->setDEF("hanim_vc4");
HAnimJoint371->setCenter(new float[3]{0,56.080002,-0.6695});
HAnimJoint371->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint371->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment372 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment372->setName("c4");
HAnimSegment372->setDEF("hanim_c4");
CTransform* Transform373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform373->setTranslation(new float[3]{0,56.080002,-0.6695});
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance375 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material376 = (CMaterial *)(m_pScene.createNode("Material"));
Material376->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance375->setMaterial(*Material376);

CImageTexture* ImageTexture377 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture377->setUSE("JinLOA3TextureAtlas");
Appearance375->setTexture(*ImageTexture377);

Shape374->setAppearance(*Appearance375);

CIndexedFaceSet* IndexedFaceSet378 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet378->setCoordIndex(new int[368]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
IndexedFaceSet378->setCreaseAngle(3.14159);
IndexedFaceSet378->setTexCoordIndex(new int[368]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
CCoordinate* Coordinate379 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate379->setPoint(new float[144]{0.5369,0.5776,-1.124,1.139,0.5776,-0.8504,1.562,0.5776,0.0729,1.219,0.5776,0.7153,0,0.5776,1.195,-0.605,0.5776,1.101,-1.139,0.5776,-0.8504,-1.562,0.5776,0.0729,0,0.5776,-1.195,0.605,0.5776,1.101,-0.5369,0.5776,-1.124,-1.219,0.5776,0.7153,0.5369,0.0017,-1.124,1.139,0.0017,-0.8504,1.562,0.0017,0.0729,1.219,0.0017,0.7153,0,0.0017,1.195,-0.605,0.0017,1.101,-1.139,0.0017,-0.8504,-1.562,0.0017,0.0729,0,0.0017,-1.195,0.605,0.0017,1.101,-0.5369,0.0017,-1.124,-1.219,0.0017,0.7153,0.4947,0.7754,-0.9348,0,0.7754,-1,-0.4947,0.7754,-0.9348,-1.008,0.7754,-0.7016,-1.361,0.7754,0.069,-1.091,0.7754,0.5735,-0.5462,0.7754,0.9162,0,0.7754,1.001,0.5462,0.7754,0.9162,1.091,0.7754,0.5735,1.361,0.7754,0.069,1.008,0.7754,-0.7016,0,-0.2388,-1,0.4947,-0.2388,-0.9348,1.008,-0.2388,-0.7016,1.361,-0.2388,0.069,1.091,-0.2388,0.5735,0.5462,-0.2388,0.9162,0,-0.2388,1.001,-0.5462,-0.2388,0.9162,-1.091,-0.2388,0.5735,-1.361,-0.2388,0.069,-1.008,-0.2388,-0.7016,-0.4947,-0.2388,-0.9348});
IndexedFaceSet378->setCoord(*Coordinate379);

CTextureCoordinate* TextureCoordinate380 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate380->setPoint(new float[96]{0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6628,0.3906,0.6629,0.3818,0.6628,0.3719,0.6635,0.3649,0.6634,0.3706,0.6624,0.3807,0.6628,0.3906,0.657,0.4006,0.6628,0.4107,0.6624,0.4164,0.6634,0.4094,0.6635,0.3906,0.6599,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.4006,0.6592,0.3906,0.6538,0.3807,0.6592,0.3706,0.6591,0.3649,0.6605,0.3719,0.6606,0.3818,0.6596});
IndexedFaceSet378->setTexCoord(*TextureCoordinate380);

Shape374->setGeometry(IndexedFaceSet378);

Transform373->addChildren(*Shape374);

HAnimSegment372->addChildren(*Transform373);

HAnimJoint371->addChildren(*HAnimSegment372);

CHAnimJoint* HAnimJoint381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint381->setName("vc3");
HAnimJoint381->setDEF("hanim_vc3");
HAnimJoint381->setCenter(new float[3]{0,56.66,-0.6695});
HAnimJoint381->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint381->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment382 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment382->setName("c3");
HAnimSegment382->setDEF("hanim_c3");
CTransform* Transform383 = (CTransform *)(m_pScene.createNode("Transform"));
Transform383->setTranslation(new float[3]{0,56.66,-0.6695});
CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance385 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material386 = (CMaterial *)(m_pScene.createNode("Material"));
Material386->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance385->setMaterial(*Material386);

CImageTexture* ImageTexture387 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture387->setUSE("JinLOA3TextureAtlas");
Appearance385->setTexture(*ImageTexture387);

Shape384->setAppearance(*Appearance385);

CIndexedFaceSet* IndexedFaceSet388 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet388->setCoordIndex(new int[368]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
IndexedFaceSet388->setCreaseAngle(3.14159);
IndexedFaceSet388->setTexCoordIndex(new int[368]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
CCoordinate* Coordinate389 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate389->setPoint(new float[144]{0.5369,0.5152,-1.124,1.139,0.5152,-0.8504,1.562,0.5152,0.0729,1.219,0.5152,0.7153,0,0.5152,1.195,-0.605,0.5152,1.101,-1.139,0.5152,-0.8504,-1.562,0.5152,0.0729,0,0.5152,-1.195,0.605,0.5152,1.101,-0.5369,0.5152,-1.124,-1.219,0.5152,0.7153,0.5369,0.0015,-1.124,1.139,0.0015,-0.8504,1.562,0.0015,0.0729,1.219,0.0015,0.7153,0,0.0015,1.195,-0.605,0.0015,1.101,-1.139,0.0015,-0.8504,-1.562,0.0015,0.0729,0,0.0015,-1.195,0.605,0.0015,1.101,-0.5369,0.0015,-1.124,-1.219,0.0015,0.7153,0.4947,0.7138,-0.9348,0,0.7138,-1,-0.4947,0.7138,-0.9348,-1.008,0.7138,-0.7016,-1.361,0.7138,0.069,-1.091,0.7138,0.5735,-0.5462,0.7138,0.9162,0,0.7138,1.001,0.5462,0.7138,0.9162,1.091,0.7138,0.5735,1.361,0.7138,0.069,1.008,0.7138,-0.7016,0,-0.2398,-1,0.4947,-0.2398,-0.9348,1.008,-0.2398,-0.7016,1.361,-0.2398,0.069,1.091,-0.2398,0.5735,0.5462,-0.2398,0.9162,0,-0.2398,1.001,-0.5462,-0.2398,0.9162,-1.091,-0.2398,0.5735,-1.361,-0.2398,0.069,-1.008,-0.2398,-0.7016,-0.4947,-0.2398,-0.9348});
IndexedFaceSet388->setCoord(*Coordinate389);

CTextureCoordinate* TextureCoordinate390 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate390->setPoint(new float[96]{0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6659,0.3906,0.666,0.3818,0.6659,0.3719,0.6664,0.3649,0.6663,0.3706,0.6656,0.3807,0.6665,0.3906,0.6601,0.4006,0.6665,0.4107,0.6656,0.4164,0.6663,0.4094,0.6664,0.3906,0.6629,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.4006,0.6628,0.3906,0.657,0.3807,0.6628,0.3706,0.6624,0.3649,0.6634,0.3719,0.6635,0.3818,0.6628});
IndexedFaceSet388->setTexCoord(*TextureCoordinate390);

Shape384->setGeometry(IndexedFaceSet388);

Transform383->addChildren(*Shape384);

HAnimSegment382->addChildren(*Transform383);

HAnimJoint381->addChildren(*HAnimSegment382);

CHAnimJoint* HAnimJoint391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint391->setName("vc2");
HAnimJoint391->setDEF("hanim_vc2");
HAnimJoint391->setCenter(new float[3]{0,57.169998,-0.6695});
HAnimJoint391->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint391->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment392 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment392->setName("c2");
HAnimSegment392->setDEF("hanim_c2");
CTransform* Transform393 = (CTransform *)(m_pScene.createNode("Transform"));
Transform393->setTranslation(new float[3]{0,57.169998,-0.6695});
CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance395 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material396 = (CMaterial *)(m_pScene.createNode("Material"));
Material396->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance395->setMaterial(*Material396);

CImageTexture* ImageTexture397 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture397->setUSE("JinLOA3TextureAtlas");
Appearance395->setTexture(*ImageTexture397);

Shape394->setAppearance(*Appearance395);

CIndexedFaceSet* IndexedFaceSet398 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet398->setCoordIndex(new int[368]{14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
IndexedFaceSet398->setCreaseAngle(3.14159);
IndexedFaceSet398->setTexCoordIndex(new int[368]{14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
CCoordinate* Coordinate399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate399->setPoint(new float[144]{0.5369,0.5216,-1.124,0,0.5216,-1.195,1.139,0.5216,-0.8504,1.562,0.5216,0.073,1.219,0.5216,0.7153,0.605,0.5216,1.101,0,0.5216,1.195,-0.5369,0.5216,-1.124,-1.139,0.5216,-0.8504,-1.562,0.5216,0.0729,-1.219,0.5216,0.7153,-0.605,0.5216,1.101,0.4798,0.7591,-0.9247,0,0.7591,-0.9883,-0.4798,0.7591,-0.9247,-0.9844,0.7591,-0.6953,-1.333,0.7591,0.066,-1.064,0.7591,0.5706,-0.5317,0.7591,0.9052,0,0.7591,0.9877,0.5317,0.7591,0.9052,1.064,0.7591,0.5706,1.333,0.7591,0.066,0.9844,0.7591,-0.6953,0.5369,0.0018,-1.124,1.139,0.0018,-0.8504,1.562,0.0018,0.073,1.219,0.0018,0.7153,0,0.0018,1.195,-0.605,0.0018,1.101,-1.139,0.0018,-0.8504,-1.562,0.0018,0.0729,0,0.0018,-1.195,0.605,0.0018,1.101,-0.5369,0.0018,-1.124,-1.219,0.0018,0.7153,0,-0.2146,-1,0.4947,-0.2146,-0.9348,1.008,-0.2146,-0.7016,1.361,-0.2146,0.069,1.091,-0.2146,0.5735,0.5462,-0.2146,0.9162,0,-0.2146,1.001,-0.5462,-0.2146,0.9162,-1.091,-0.2146,0.5735,-1.361,-0.2146,0.069,-1.008,-0.2146,-0.7016,-0.4947,-0.2146,-0.9348});
IndexedFaceSet398->setCoord(*Coordinate399);

CTextureCoordinate* TextureCoordinate400 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate400->setPoint(new float[96]{0.3995,0.6721,0.3906,0.6721,0.4094,0.6721,0.4164,0.6721,0.4107,0.6721,0.4006,0.6738,0.3906,0.6664,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3995,0.6721,0.3906,0.6721,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3906,0.6664,0.4006,0.6738,0.4107,0.6721,0.4164,0.6721,0.4094,0.6721,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3906,0.669,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.4006,0.6702,0.3906,0.6632,0.3807,0.6702,0.3706,0.6689,0.3649,0.6692,0.3719,0.6692,0.3818,0.669});
IndexedFaceSet398->setTexCoord(*TextureCoordinate400);

Shape394->setGeometry(IndexedFaceSet398);

Transform393->addChildren(*Shape394);

HAnimSegment392->addChildren(*Transform393);

HAnimJoint391->addChildren(*HAnimSegment392);

CHAnimJoint* HAnimJoint401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint401->setName("vc1");
HAnimJoint401->setDEF("hanim_vc1");
HAnimJoint401->setCenter(new float[3]{0,57.689999,-0.6695});
HAnimJoint401->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint401->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment402 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment402->setName("c1");
HAnimSegment402->setDEF("hanim_c1");
CTransform* Transform403 = (CTransform *)(m_pScene.createNode("Transform"));
Transform403->setTranslation(new float[3]{0,57.689999,-0.6695});
CShape* Shape404 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance405 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material406 = (CMaterial *)(m_pScene.createNode("Material"));
Material406->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance405->setMaterial(*Material406);

CImageTexture* ImageTexture407 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture407->setUSE("JinLOA3TextureAtlas");
Appearance405->setTexture(*ImageTexture407);

Shape404->setAppearance(*Appearance405);

CIndexedFaceSet* IndexedFaceSet408 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet408->setCoordIndex(new int[368]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
IndexedFaceSet408->setCreaseAngle(3.14159);
IndexedFaceSet408->setTexCoordIndex(new int[368]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
CCoordinate* Coordinate409 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate409->setPoint(new float[144]{0.5369,0.5724,-1.124,1.139,0.5724,-0.8504,1.562,0.5724,0.073,1.219,0.5724,0.7153,0,0.5724,1.195,-0.605,0.5724,1.101,-1.139,0.5724,-0.8504,-1.562,0.5724,0.0729,0,0.5724,-1.195,0.605,0.5724,1.101,-0.5369,0.5724,-1.124,-1.219,0.5724,0.7153,0.5369,0.0022,-1.124,1.139,0.0022,-0.8504,1.562,0.0022,0.0729,1.219,0.0022,0.7153,0,0.0022,1.195,-0.605,0.0022,1.101,-1.139,0.0022,-0.8504,-1.562,0.0022,0.0729,0,0.0022,-1.195,0.605,0.0022,1.101,-0.5369,0.0022,-1.124,-1.219,0.0022,0.7153,0.4947,0.7703,-0.9348,0,0.7703,-1,-0.4947,0.7703,-0.9348,-1.008,0.7703,-0.7016,-1.361,0.7703,0.069,-1.091,0.7703,0.5735,-0.5462,0.7703,0.9162,0,0.7703,1.001,0.5462,0.7703,0.9162,1.091,0.7703,0.5735,1.361,0.7703,0.069,1.008,0.7703,-0.7016,0,-0.2078,-1,0.4947,-0.2078,-0.9348,1.008,-0.2078,-0.7016,1.361,-0.2078,0.069,1.091,-0.2078,0.5735,0.5462,-0.2078,0.9162,0,-0.2078,1.001,-0.5462,-0.2078,0.9162,-1.091,-0.2078,0.5735,-1.361,-0.2078,0.069,-1.008,-0.2078,-0.7016,-0.4947,-0.2078,-0.9348});
IndexedFaceSet408->setCoord(*Coordinate409);

CTextureCoordinate* TextureCoordinate410 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate410->setPoint(new float[96]{0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.669,0.3906,0.669,0.3818,0.669,0.3719,0.6692,0.3649,0.6692,0.3706,0.6689,0.3807,0.6702,0.3906,0.6632,0.4006,0.6702,0.4107,0.6689,0.4164,0.6692,0.4094,0.6692,0.3906,0.666,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.4006,0.6665,0.3906,0.6601,0.3807,0.6665,0.3706,0.6656,0.3649,0.6663,0.3719,0.6664,0.3818,0.6659});
IndexedFaceSet408->setTexCoord(*TextureCoordinate410);

Shape404->setGeometry(IndexedFaceSet408);

Transform403->addChildren(*Shape404);

HAnimSegment402->addChildren(*Transform403);

HAnimJoint401->addChildren(*HAnimSegment402);

CHAnimJoint* HAnimJoint411 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint411->setName("skullbase");
HAnimJoint411->setDEF("hanim_skullbase");
HAnimJoint411->setCenter(new float[3]{0,57.43,-0.6863});
HAnimJoint411->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint411->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment412 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment412->setName("skull");
HAnimSegment412->setDEF("hanim_skull");
CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform413->setTranslation(new float[3]{0,57.43,-0.6863});
CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance415 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material416 = (CMaterial *)(m_pScene.createNode("Material"));
Material416->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance415->setMaterial(*Material416);

CImageTexture* ImageTexture417 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture417->setUSE("JinLOA3TextureAtlas");
Appearance415->setTexture(*ImageTexture417);

Shape414->setAppearance(*Appearance415);

CIndexedFaceSet* IndexedFaceSet418 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet418->setCoordIndex(new int[2480]{51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1});
IndexedFaceSet418->setCreaseAngle(3.14159);
IndexedFaceSet418->setTexCoordIndex(new int[2480]{0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1});
CCoordinate* Coordinate419 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate419->setPoint(new float[1068]{2.596,3.055,-7.113,5.82,3.915,-2.239,3.712,1.225,-2.29,3.261,1.453,-4.252,5.658,2.599,-1.983,1.82,1.289,-5.164,2.395,4.95,6.346,0.7761,4.912,6.883,4.408,9.203,3.673,0,11.25,5.65,2.225,10.89,5.304,5.962,4.414,1.165,4.041,0.8383,3.523,1.972,9.601,6.357,2.537,7.001,6.362,3.694,6.649,5.287,0.4475,7.341,7.362,4.843,6.188,3.431,3.886,6.593,4.951,3.681,5.194,5.001,3.826,5.001,4.664,3.284,2.472,4.49,4.543,4.124,3.499,3.859,3.861,4.364,4.575,3.792,4.006,5.065,1.183,1.247,4.863,1.73,2.37,5.256,2.695,2.024,5.549,5.532,2.714,5.161,2.035,2.722,5.442,3.878,2.887,6.111,4.389,0.2634,4.062,5.868,4.221,6.007,7.856,-0.5637,7.021,1.661,-0.9157,6.568,4.855,-0.7308,6.326,4.691,-1.55,6.23,0.8303,-3.441,4.977,5.364,-5.673,6.326,4.656,-2.95,4.216,3.427,-5.131,3.522,5.818,-7.166,3.424,1.86,-7.278,2.479,7.925,-6.757,1.927,1.981,-8.89,5.584,7.691,-2.78,5.853,7.683,-1.772,5.181,8.476,2.104,3.038,10.79,4.444,5.123,3.032,-5.304,5.664,8.061,0.8754,4.721,7.925,-5.258,2.479,5.82,-7.483,5.595,7.63,-2.141,1.173,1.832,-6.114,3.978,2.324,-4.64,2.917,-0.9285,-7.31,3.323,2.08,-5.371,1.968,-1.561,-5.013,4.713,2.444,-3.477,4.42,-0.2924,-4.477,1.411,0.5541,-3.484,2.275,0.8807,-3.763,0.9407,0.7103,-4.537,3.818,1.729,-3.139,4.664,1.866,-1.436,3.657,9.188,4.96,1.559,7.266,7.008,2.791,5.041,6.017,2.479,12.6,2.191,0,12.77,-3.073,2.479,13.01,-0.5905,2.479,12.47,-3.073,2.479,11.8,3.665,4.738,11.13,-0.5905,4.581,10.59,1.893,4.776,9.342,-4.254,4.651,10.94,-2.696,2.479,10.58,-5.873,5.038,2.087,0.2634,5.351,2.269,0.2568,5.575,4.993,0.4877,5.759,4.313,-0.6689,5.672,3.119,-0.6884,4.617,3.919,1.981,2.507,0.2122,3.467,1.252,-0.7037,3.753,2.181,1.29,4.703,1.083,-0.2065,4.531,4.006,4.226,3.45,3.843,3.486,3.474,0.2615,3.949,5.823,2.043,5.094,5.803,1.599,4.225,5.429,2.175,4.422,5.292,1.061,2.841,5.24,3.345,2.806,3.987,2.647,2.75,4.481,3.082,3.581,4.206,1.044,3.885,5.454,1.356,3.642,5.241,3.227,3.707,4.111,3.028,4.567,4.683,2.472,2.023,4.722,0.9194,2.354,5.382,3.515,2.199,3.631,3.685,4.225,3.891,0.1458,1.141,5.967,0.4592,1.442,5.549,3.443,1.22,3.201,1.972,6.686,5.769,3.551,6.468,4.66,1.125,6.641,6.224,2.799,0.2961,1.981,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,4.342,2.994,2.484,1.972,10.18,5.298,3.829,8.081,4.078,4.754,5.519,2.97,2.795,3.568,4.497,1.835,3.587,5.011,4.074,1.813,1.489,4.073,1.537,-0.251,4.798,4.414,1.165,0.4079,0.7711,5.733,0.2244,0.7989,5.843,1.184,0.5011,4.895,0.2244,0.5907,5.545,2.091,-0.0943,-1.629,0.4475,7.341,7.362,0.7761,4.912,6.883,0.4475,7.341,7.362,4.734,2.295,-0.478,3.712,1.225,-2.29,5.658,2.599,-1.983,0.513,6.698,7.119,5.054,4.389,0.2634,3.561,1.081,-1.554,2.09,4.432,3.699,1.621,4.356,4.123,1.332,4.202,4.217,1.07,3.93,4.244,1.254,3.737,4.129,1.514,3.69,3.988,2.035,3.658,3.658,2.202,3.647,3.455,2.276,3.737,3.378,2.499,4.118,3.181,0,2.738,-7.551,0,4.192,6.16,0,7.925,-7.347,0,0.1375,-3.592,0,-0.9435,-6.54,0,-0.6349,1.532,0.5806,0.4168,3.813,0.1288,0.4247,4.012,0.5566,-0.2209,3.55,0,6.577,6.529,0,-1.299,4.283,0,0.7989,5.843,0.2132,0.5713,5.365,0.5926,3.49,5.582,0.9241,3.763,5.471,3.843,5.112,4.093,1.112,4.786,6.09,3.261,5.262,4.816,1.327,4.522,5.859,2.089,4.758,5.599,3.171,4.95,4.784,0.646,4.262,6.112,0,5.519,-7.965,0,9.74,6.859,0,7.548,7.405,0,2.998,5.872,0,1.753,6.811,0,0.5907,5.545,0.7426,4.743,6.135,-3.522,5.818,-7.166,-2.479,7.925,-6.757,-4.721,7.925,-5.258,-4.977,5.364,-5.673,-2.479,5.82,-7.483,-5.123,3.032,-5.304,-3.424,1.86,-7.278,-1.927,1.981,-8.89,0,3.753,-8.454,-2.479,10.58,-5.873,-4.776,9.342,-4.254,0,10.91,-6.064,-1.972,9.601,6.357,-2.225,10.89,5.304,-2.479,11.8,3.665,0,12.19,4.069,-5.962,4.414,1.165,-5.664,8.061,0.8754,-5.256,2.695,2.024,-0.4475,7.341,7.362,-1.559,7.266,7.008,-2.537,7.001,6.362,-2.791,5.041,6.017,-3.694,6.649,5.287,-0.7761,4.912,6.883,-2.395,4.95,6.346,-0.513,6.698,7.119,-0.4475,7.341,7.362,-0.7761,4.912,6.883,-0.4475,7.341,7.362,-3.886,6.593,4.951,-3.681,5.194,5.001,-3.826,5.001,4.664,-4.062,5.868,4.221,-4.843,6.188,3.431,-4.408,9.203,3.673,-3.657,9.188,4.96,-4.575,3.792,4.006,-3.859,3.861,4.364,-3.284,2.472,4.49,-4.543,4.124,3.499,-5.065,1.183,1.247,-6.111,4.389,0.2634,-5.549,5.532,2.714,-5.442,3.878,2.887,-5.161,2.035,2.722,-4.041,0.8383,3.523,-4.863,1.73,2.37,-5.82,3.915,-2.239,-7.021,1.661,-0.9157,-6.326,4.691,-1.55,-6.568,4.855,-0.7308,-4.216,3.427,-5.131,-6.23,0.8303,-3.441,-6.326,4.656,-2.95,-2.596,3.055,-7.113,-5.584,7.691,-2.78,-4.651,10.94,-2.696,-5.595,7.63,-2.141,-5.853,7.683,-1.772,-6.007,7.856,-0.5637,-4.738,11.13,-0.5905,-5.181,8.476,2.104,-4.581,10.59,1.893,-3.038,10.79,4.444,-1.173,1.832,-6.114,0,1.035,-6.031,0,0.1227,-8.281,-2.917,-0.9285,-7.31,-3.978,2.324,-4.64,-3.323,2.08,-5.371,-3.261,1.453,-4.252,-2.275,0.8807,-3.763,-1.82,1.289,-5.164,-1.968,-1.561,-5.013,-3.818,1.729,-3.139,-3.712,1.225,-2.29,-1.411,0.5541,-3.484,-4.42,-0.2924,-4.477,-4.713,2.444,-3.477,-5.658,2.599,-1.983,-0.9407,0.7103,-4.537,-4.734,2.295,-0.478,-4.664,1.866,-1.436,-2.479,12.6,2.191,0,12.89,2.191,-2.479,13.01,-0.5905,-2.479,12.47,-3.073,0,13.3,-0.5905,-3.561,1.081,-1.554,-4.073,1.537,-0.251,-2.799,0.2961,1.981,-5.038,2.087,0.2634,-4.074,1.813,1.489,-5.351,2.269,0.2568,-5.054,4.389,0.2634,-4.798,4.414,1.165,-5.575,4.993,0.4877,-5.759,4.313,-0.6689,-5.672,3.119,-0.6884,-4.617,3.919,1.981,-4.342,2.994,2.484,-4.754,5.519,2.97,-3.443,1.22,3.201,-1.438,-0.7799,2.92,-2.098,-0.0622,0.3894,-1.125,6.641,6.224,-1.972,10.18,5.298,0,9.837,5.8,-2.091,-0.0943,-1.629,-1.972,6.686,5.769,-3.551,6.468,4.66,-2.507,0.2122,3.467,-1.252,-0.7037,3.753,-0.2244,0.7989,5.843,-0.1458,1.141,5.967,0,1.141,5.968,-0.4079,0.7711,5.733,-0.4592,1.442,5.549,-2.181,1.29,4.703,-1.184,0.5011,4.895,-2.472,2.023,4.722,-0.9194,2.354,5.382,0,-1.065,3.009,0,-1.23,3.575,-3.515,2.199,3.631,-1.083,-0.2065,4.531,0,2.206,6.446,-0.646,4.262,6.112,0,3.949,5.823,-0.2615,3.949,5.823,-1.061,2.841,5.24,-0.5926,3.49,5.582,0,4.73,6.243,-0.7426,4.743,6.135,-3.843,3.486,3.474,-4.006,4.226,3.45,-2.175,4.422,5.292,-2.089,4.758,5.599,-1.327,4.522,5.859,-1.599,4.225,5.429,-3.345,2.806,3.987,-2.647,2.75,4.481,-2.795,3.568,4.497,-1.835,3.587,5.011,-3.082,3.581,4.206,-1.356,3.642,5.241,-0.9241,3.763,5.471,-1.044,3.885,5.454,-3.227,3.707,4.111,-2.043,5.094,5.803,-3.685,4.225,3.891,-1.112,4.786,6.09,-3.829,8.081,4.078,-3.843,5.112,4.093,-3.261,5.262,4.816,-5.658,2.599,-1.983,-3.712,1.225,-2.29,-0.2244,0.5907,5.545,-3.028,4.567,4.683,-1.621,4.356,4.123,-2.09,4.432,3.699,-1.332,4.202,4.217,-1.07,3.93,4.244,-1.254,3.737,4.129,-1.514,3.69,3.988,-2.035,3.658,3.658,-2.202,3.647,3.455,-2.276,3.737,3.378,-2.499,4.118,3.181,-0.5806,0.4168,3.813,-0.5566,-0.2209,3.55,-0.2132,0.5713,5.365,-0.1288,0.4247,4.012,0,0.5723,5.368,0,0.4306,4.006,0,-0.2612,3.286,-3.171,4.95,4.784});
IndexedFaceSet418->setCoord(*Coordinate419);

CTextureCoordinate* TextureCoordinate420 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate420->setPoint(new float[972]{0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.7576,0.779,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.637,0.4385,0.639,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.652,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2934,0.905,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.626,0.3051,0.6166,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.696,0.2636,0.664,0.3484,0.6888,0.3007,0.651,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.2441,0.7326,0.2441,0.7109,0.2441,0.7705,0.2441,0.816,0.2466,0.8272,0.2826,0.8198,0.263,0.8101,0.3011,0.7644,0.4294,0.848,0.295,0.8569,0.4229,0.7906,0.445,0.8342,0.3273,0.8725,0.3401,0.8443,0.4194,0.891,0.3844,0.8819,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.2864,0.8094,0.3065,0.7969,0.4051,0.8004,0.4267,0.8291,0.3243,0.8795,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4658,0.6252,0.465,0.6281,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.4156,0.6279,0.3783,0.625,0.3984,0.649,0.4325,0.6718,0.4443,0.6446,0.428,0.6022,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.4215,0.6174,0.6418,0.6585,0.6441,0.671,0.6214,0.6731,0.616,0.6731,0.6418,0.6585,0.623,0.6494,0.6418,0.6585,0.6441,0.671,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.616,0.6731,0.6214,0.6731,0.2441,0.6529,0.314,0.8296,0.3898,0.85,0.2746,0.7881,0.2889,0.7981,0.4442,0.8857,0.2745,0.8415,0.3079,0.8417,0.3393,0.8544,0.3891,0.8542,0.2699,0.8521,0.246,0.853,0.4715,0.8911,0.9421,0.8701,0.9509,0.8981,0.9175,0.8974,0.924,0.8702,0.9824,0.8682,0.9824,0.8971,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7553,0.8982,0.7616,0.9147,0.7343,0.9169,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8324,0.8647,0.8348,0.9045,0.8187,0.8433,0.74,0.8745,0.7497,0.8755,0.761,0.8768,0.7647,0.8593,0.777,0.8787,0.7438,0.8546,0.7596,0.8565,0.7372,0.8736,0.7343,0.8756,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7821,0.8667,0.7875,0.8787,0.8011,0.8823,0.7952,0.9076,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.8107,0.8538,0.8058,0.8252,0.786,0.7876,0.8096,0.8166,0.8767,0.8622,0.8589,0.7975,0.8669,0.8674,0.8568,0.8668,0.9208,0.8549,0.8792,0.7991,0.9139,0.8636,0.8835,0.8633,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7208,0.8401,0.7279,0.8339,0.7338,0.8385,0.7338,0.7727,0.7338,0.7681,0.7397,0.7767,0.7192,0.8201,0.7139,0.8364,0.7171,0.8352,0.7127,0.8419,0.7175,0.832,0.7224,0.8292,0.7247,0.8312,0.7239,0.8169,0.7146,0.8334,0.7452,0.772,0.753,0.7762,0.7152,0.8309,0.7409,0.7703,0.7502,0.7748,0.756,0.7661,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7338,0.8254,0.7291,0.8283,0.7267,0.8275,0.7338,0.7628,0.7385,0.7711,0.7338,0.7682,0.7338,0.82,0.7437,0.7597,0.7484,0.7629,0.7429,0.774,0.7505,0.778,0.7116,0.8233,0.763,0.7872,0.7576,0.779,0.7622,0.7806,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4514,0.6319,0.4421,0.6351,0.4263,0.6263,0.4385,0.639,0.4298,0.637,0.4385,0.6403,0.4385,0.6553,0.4321,0.6555,0.4369,0.6596,0.4451,0.6548,0.4452,0.6463,0.4263,0.652,0.4227,0.6454,0.4193,0.6633,0.4176,0.6328,0.4196,0.6187,0.4376,0.6237,0.2441,0.9417,0.2934,0.905,0.3384,0.9887,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2441,0.6653,0.2548,0.6653,0.2511,0.6816,0.2441,0.6816,0.2636,0.664,0.2661,0.696,0.3484,0.6888,0.3007,0.651,0.3623,0.7239,0.2881,0.7397,0.4215,0.6174,0.4295,0.6197,0.4151,0.6155,0.4116,0.6201,0.4518,0.7703,0.4123,0.7323,0.4088,0.6855,0.364,0.6372,0.2959,0.626,0.3051,0.6166,0.2441,0.7326,0.2441,0.7705,0.2441,0.7109,0.2745,0.8415,0.2466,0.8272,0.2441,0.816,0.263,0.8101,0.3011,0.7644,0.2746,0.7881,0.246,0.853,0.2699,0.8521,0.4229,0.7906,0.445,0.8342,0.3401,0.8443,0.3393,0.8544,0.3079,0.8417,0.314,0.8296,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.3065,0.7969,0.2889,0.7981,0.2826,0.8198,0.2864,0.8094,0.4051,0.8004,0.3243,0.8795,0.4267,0.8291,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4715,0.8911,0.4658,0.6252,0.465,0.6281,0.4194,0.891,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.3984,0.649,0.3783,0.625,0.4156,0.6279,0.4325,0.6718,0.428,0.6022,0.4443,0.6446,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.3898,0.85,0.6418,0.6585,0.6441,0.671,0.6441,0.671,0.6418,0.6585,0.6214,0.6731,0.6214,0.6731,0.616,0.6731,0.616,0.6731,0.623,0.6494,0.6418,0.6585,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.2441,0.6529,0.3891,0.8542,0.4294,0.848,0.4442,0.8857,0.295,0.8569,0.3273,0.8725,0.3844,0.8819});
IndexedFaceSet418->setTexCoord(*TextureCoordinate420);

Shape414->setGeometry(IndexedFaceSet418);

Transform413->addChildren(*Shape414);

HAnimSegment412->addChildren(*Transform413);

HAnimJoint411->addChildren(*HAnimSegment412);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setName("l_eyelid_joint");
HAnimJoint421->setDEF("hanim_l_eyelid_joint");
HAnimJoint421->setCenter(new float[3]{2.245,62.400002,1.464});
HAnimJoint421->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint421->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment422 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment422->setName("l_eyelid");
HAnimSegment422->setDEF("hanim_l_eyelid");
CTransform* Transform423 = (CTransform *)(m_pScene.createNode("Transform"));
Transform423->setRotation(new float[4]{1,0,0,-0.5236});
Transform423->setTranslation(new float[3]{2.245,62.400002,1.464});
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance425 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material426 = (CMaterial *)(m_pScene.createNode("Material"));
Material426->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance425->setMaterial(*Material426);

CImageTexture* ImageTexture427 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture427->setUSE("JinLOA3TextureAtlas");
Appearance425->setTexture(*ImageTexture427);

Shape424->setAppearance(*Appearance425);

CIndexedFaceSet* IndexedFaceSet428 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet428->setCoordIndex(new int[168]{0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1});
IndexedFaceSet428->setCreaseAngle(3.14159);
IndexedFaceSet428->setTexCoordIndex(new int[168]{0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1});
CCoordinate* Coordinate429 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate429->setPoint(new float[84]{0.7812,-0.3922,2.571,-0.0916,-0.4605,3.239,-0.6939,-0.6908,3.379,-1.201,-1.081,3.304,1.44,-0.7409,1.741,0.5651,-1.538,2.334,-0.0316,-1.56,2.732,-0.5556,-1.456,2.994,-0.9123,-1.31,3.138,1.238,-0.9979,1.826,1.125,-0.5541,2.164,0.8496,-1.396,2.061,0.6573,-0.3994,2.377,-0.1708,-0.5443,2.903,-0.7043,-0.7411,3.046,-1.214,-1.081,3.172,1.382,-0.7409,1.7,0.5305,-1.549,2.255,-0.061,-1.557,2.59,-0.5907,-1.457,2.881,-0.9336,-1.31,3.023,1.226,-0.991,1.738,1.011,-0.5701,2.042,0.8046,-1.4,2.015,0.7041,-1.015,2.416,-0.0583,-1.031,3.036,-0.5943,-1.139,3.166,0.9909,-1.005,2.116});
IndexedFaceSet428->setCoord(*Coordinate429);

CTextureCoordinate* TextureCoordinate430 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate430->setPoint(new float[56]{0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603});
IndexedFaceSet428->setTexCoord(*TextureCoordinate430);

Shape424->setGeometry(IndexedFaceSet428);

Transform423->addChildren(*Shape424);

HAnimSegment422->addChildren(*Transform423);

HAnimJoint421->addChildren(*HAnimSegment422);

HAnimJoint411->addChildren(*HAnimJoint421);

CHAnimJoint* HAnimJoint431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint431->setName("r_eyelid_joint");
HAnimJoint431->setDEF("hanim_r_eyelid_joint");
HAnimJoint431->setCenter(new float[3]{-2.245,62.400002,1.464});
HAnimJoint431->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint431->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment432->setName("r_eyelid");
HAnimSegment432->setDEF("hanim_r_eyelid");
CTransform* Transform433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform433->setRotation(new float[4]{1,0,0,-0.5236});
Transform433->setTranslation(new float[3]{-2.245,62.400002,1.464});
CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance435 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material436 = (CMaterial *)(m_pScene.createNode("Material"));
Material436->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance435->setMaterial(*Material436);

CImageTexture* ImageTexture437 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture437->setUSE("JinLOA3TextureAtlas");
Appearance435->setTexture(*ImageTexture437);

Shape434->setAppearance(*Appearance435);

CIndexedFaceSet* IndexedFaceSet438 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet438->setCoordIndex(new int[168]{0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1});
IndexedFaceSet438->setCreaseAngle(3.14159);
IndexedFaceSet438->setTexCoordIndex(new int[168]{0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1});
CCoordinate* Coordinate439 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate439->setPoint(new float[84]{-0.7812,-0.3922,2.571,0.0916,-0.4605,3.239,0.6939,-0.6908,3.379,1.201,-1.081,3.304,-1.44,-0.7409,1.741,-0.5651,-1.538,2.334,0.0316,-1.56,2.732,0.5556,-1.456,2.994,0.9123,-1.31,3.138,-1.238,-0.9979,1.826,-1.125,-0.5541,2.164,-0.8496,-1.396,2.061,-0.6573,-0.3994,2.377,0.1708,-0.5443,2.903,0.7043,-0.7411,3.046,1.214,-1.081,3.172,-1.382,-0.7409,1.7,-0.5305,-1.549,2.255,0.061,-1.557,2.59,0.5907,-1.457,2.881,0.9336,-1.31,3.023,-1.226,-0.991,1.738,-1.011,-0.5701,2.042,-0.8046,-1.4,2.015,-0.7041,-1.015,2.416,0.0583,-1.031,3.036,0.5943,-1.139,3.166,-0.9909,-1.005,2.116});
IndexedFaceSet438->setCoord(*Coordinate439);

CTextureCoordinate* TextureCoordinate440 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate440->setPoint(new float[56]{0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603});
IndexedFaceSet438->setTexCoord(*TextureCoordinate440);

Shape434->setGeometry(IndexedFaceSet438);

Transform433->addChildren(*Shape434);

HAnimSegment432->addChildren(*Transform433);

HAnimJoint431->addChildren(*HAnimSegment432);

HAnimJoint411->addChildren(*HAnimJoint431);

CHAnimJoint* HAnimJoint441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint441->setName("l_eyeball_joint");
HAnimJoint441->setDEF("hanim_l_eyeball_joint");
HAnimJoint441->setCenter(new float[3]{2.139,61.529999,3.691});
HAnimJoint441->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint441->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment442 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment442->setName("l_eyeball");
HAnimSegment442->setDEF("hanim_l_eyeball");
CTransform* Transform443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform443->setTranslation(new float[3]{2.139,61.529999,3.691});
CShape* Shape444 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance445 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material446 = (CMaterial *)(m_pScene.createNode("Material"));
Material446->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance445->setMaterial(*Material446);

CImageTexture* ImageTexture447 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture447->setUSE("JinLOA3TextureAtlas");
Appearance445->setTexture(*ImageTexture447);

Shape444->setAppearance(*Appearance445);

CIndexedFaceSet* IndexedFaceSet448 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet448->setCoordIndex(new int[200]{1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1});
IndexedFaceSet448->setCreaseAngle(3.14159);
IndexedFaceSet448->setTexCoordIndex(new int[200]{4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1});
CCoordinate* Coordinate449 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate449->setPoint(new float[93]{-0.5714,0.1308,1.022,0.0065,0.3275,0.8903,0.9254,-0.514,-0.1858,-1.127,-0.2093,1.04,-0.8123,-0.4527,0.8311,1.071,-0.3875,-0.2786,0.8656,0.4725,0.2913,1.531,0.131,-0.4935,0.6347,-0.5265,0.1025,-0.3305,-0.5079,0.6059,-0.9072,0.3038,0.6607,-0.2821,0.6036,0.4543,0.8055,-0.7341,-0.6018,-1.538,-0.196,0.7028,-1.179,-0.6703,0.471,0.9784,-0.5205,-0.7082,0.7686,0.7606,-0.1253,1.439,0.2188,-0.9066,0.4776,-0.7606,-0.3045,-0.6264,-0.7495,0.2298,-0.4184,0.4603,0.0509,0.5401,0.5849,-0.4428,1.071,0.2019,-1.042,0.7894,-0.2743,-0.8837,0.6127,-0.4156,-0.7848,0.3441,-0.4361,-0.5345,-0.763,-0.4066,-0.0392,-1.24,-0.3287,0.1376,-1.414,-0.1566,0.1789,-0.9737,0.2094,0.2088,0.2912,-0.0892,0.5676});
IndexedFaceSet448->setCoord(*Coordinate449);

CTextureCoordinate* TextureCoordinate450 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate450->setPoint(new float[82]{0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819});
IndexedFaceSet448->setTexCoord(*TextureCoordinate450);

Shape444->setGeometry(IndexedFaceSet448);

Transform443->addChildren(*Shape444);

HAnimSegment442->addChildren(*Transform443);

HAnimJoint441->addChildren(*HAnimSegment442);

HAnimJoint411->addChildren(*HAnimJoint441);

CHAnimJoint* HAnimJoint451 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint451->setName("r_eyeball_joint");
HAnimJoint451->setDEF("hanim_r_eyeball_joint");
HAnimJoint451->setCenter(new float[3]{-2.139,61.529999,3.691});
HAnimJoint451->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint451->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment452 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment452->setName("r_eyeball");
HAnimSegment452->setDEF("hanim_r_eyeball");
CTransform* Transform453 = (CTransform *)(m_pScene.createNode("Transform"));
Transform453->setTranslation(new float[3]{-2.139,61.529999,3.691});
CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance455 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material456 = (CMaterial *)(m_pScene.createNode("Material"));
Material456->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance455->setMaterial(*Material456);

CImageTexture* ImageTexture457 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture457->setUSE("JinLOA3TextureAtlas");
Appearance455->setTexture(*ImageTexture457);

Shape454->setAppearance(*Appearance455);

CIndexedFaceSet* IndexedFaceSet458 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet458->setCoordIndex(new int[200]{1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1});
IndexedFaceSet458->setCreaseAngle(3.14159);
IndexedFaceSet458->setTexCoordIndex(new int[200]{4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1});
CCoordinate* Coordinate459 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate459->setPoint(new float[93]{0.5714,0.1308,1.022,-0.0065,0.3275,0.8903,-0.9254,-0.514,-0.1858,1.127,-0.2093,1.04,0.8123,-0.4527,0.8311,-1.071,-0.3875,-0.2786,-0.8656,0.4725,0.2913,-1.531,0.131,-0.4935,-0.6347,-0.5265,0.1025,0.3305,-0.5079,0.6059,0.9072,0.3038,0.6607,0.2821,0.6036,0.4543,-0.8055,-0.7341,-0.6018,1.538,-0.196,0.7028,1.179,-0.6703,0.471,-0.9784,-0.5205,-0.7082,-0.7686,0.7606,-0.1254,-1.439,0.2188,-0.9066,-0.4776,-0.7606,-0.3045,0.6264,-0.7495,0.2298,0.4184,0.4603,0.0509,-0.5401,0.5849,-0.4428,-1.071,0.2019,-1.042,-0.7894,-0.2743,-0.8837,-0.6127,-0.4156,-0.7848,-0.3441,-0.4361,-0.5345,0.763,-0.4066,-0.0392,1.24,-0.3287,0.1376,1.414,-0.1566,0.1789,0.9737,0.2094,0.2088,-0.2912,-0.0892,0.5676});
IndexedFaceSet458->setCoord(*Coordinate459);

CTextureCoordinate* TextureCoordinate460 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate460->setPoint(new float[82]{0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819});
IndexedFaceSet458->setTexCoord(*TextureCoordinate460);

Shape454->setGeometry(IndexedFaceSet458);

Transform453->addChildren(*Shape454);

HAnimSegment452->addChildren(*Transform453);

HAnimJoint451->addChildren(*HAnimSegment452);

HAnimJoint411->addChildren(*HAnimJoint451);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setName("l_eyebrow_joint");
HAnimJoint461->setDEF("hanim_l_eyebrow_joint");
HAnimJoint461->setCenter(new float[3]{0.9666,61.93,4.753});
HAnimJoint461->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint461->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setName("l_eyebrow");
HAnimSegment462->setDEF("hanim_l_eyebrow");
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{0.9666,61.93,4.753});
CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance465 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material466 = (CMaterial *)(m_pScene.createNode("Material"));
Material466->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance465->setMaterial(*Material466);

CImageTexture* ImageTexture467 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture467->setUSE("JinLOA3TextureAtlas");
Appearance465->setTexture(*ImageTexture467);

Shape464->setAppearance(*Appearance465);

CIndexedFaceSet* IndexedFaceSet468 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet468->setCoordIndex(new int[136]{2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1});
IndexedFaceSet468->setCreaseAngle(3.14159);
IndexedFaceSet468->setTexCoordIndex(new int[136]{0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1});
CCoordinate* Coordinate469 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate469->setPoint(new float[69]{-0.3218,-0.2298,0.7043,1.083,0.5974,0.3796,1.096,0.4225,0.3238,2.278,0.6308,-0.5919,2.889,0.6602,-1.322,0.1489,0.2892,0.6667,2.301,0.7666,-0.6065,1.117,0.2554,0.2024,2.208,0.4503,-0.6419,-0.2543,-0.2957,0.5866,2.872,0.5692,-1.343,-0.2774,-0.216,0.4476,1.079,0.5765,0.1724,2.807,0.6568,-1.386,0.1761,0.2697,0.4332,2.269,0.7395,-0.7309,1.111,0.2424,0.0098,2.17,0.434,-0.7637,-0.2034,-0.285,0.3399,2.78,0.5442,-1.406,0.2769,0.1224,0.5591,0.3788,-0.0007,0.4194,0.3389,-0.0414,0.2053});
IndexedFaceSet468->setCoord(*Coordinate469);

CTextureCoordinate* TextureCoordinate470 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate470->setPoint(new float[46]{0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417});
IndexedFaceSet468->setTexCoord(*TextureCoordinate470);

Shape464->setGeometry(IndexedFaceSet468);

Transform463->addChildren(*Shape464);

HAnimSegment462->addChildren(*Transform463);

HAnimJoint461->addChildren(*HAnimSegment462);

HAnimJoint411->addChildren(*HAnimJoint461);

CHAnimJoint* HAnimJoint471 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint471->setName("r_eyebrow_joint");
HAnimJoint471->setDEF("hanim_r_eyebrow_joint");
HAnimJoint471->setCenter(new float[3]{-0.9666,61.93,4.753});
HAnimJoint471->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint471->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment472->setName("r_eyebrow");
HAnimSegment472->setDEF("hanim_r_eyebrow");
CTransform* Transform473 = (CTransform *)(m_pScene.createNode("Transform"));
Transform473->setTranslation(new float[3]{-0.9666,61.93,4.753});
CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance475 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material476 = (CMaterial *)(m_pScene.createNode("Material"));
Material476->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance475->setMaterial(*Material476);

CImageTexture* ImageTexture477 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture477->setUSE("JinLOA3TextureAtlas");
Appearance475->setTexture(*ImageTexture477);

Shape474->setAppearance(*Appearance475);

CIndexedFaceSet* IndexedFaceSet478 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet478->setCoordIndex(new int[136]{2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1});
IndexedFaceSet478->setCreaseAngle(3.14159);
IndexedFaceSet478->setTexCoordIndex(new int[136]{0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1});
CCoordinate* Coordinate479 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate479->setPoint(new float[69]{0.3218,-0.2298,0.7043,-1.083,0.5974,0.3796,-1.096,0.4225,0.3238,-2.278,0.6308,-0.5919,-2.889,0.6602,-1.322,-0.1489,0.2892,0.6667,-2.301,0.7666,-0.6065,-1.117,0.2554,0.2024,-2.208,0.4503,-0.6419,0.2543,-0.2957,0.5866,-2.872,0.5692,-1.343,0.2774,-0.216,0.4476,-1.079,0.5765,0.1724,-2.807,0.6568,-1.386,-0.1761,0.2697,0.4332,-2.269,0.7395,-0.7309,-1.111,0.2424,0.0098,-2.17,0.434,-0.7637,0.2034,-0.285,0.3399,-2.78,0.5442,-1.406,-0.2769,0.1224,0.5591,-0.3788,-0.0007,0.4194,-0.3389,-0.0414,0.2053});
IndexedFaceSet478->setCoord(*Coordinate479);

CTextureCoordinate* TextureCoordinate480 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate480->setPoint(new float[46]{0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417});
IndexedFaceSet478->setTexCoord(*TextureCoordinate480);

Shape474->setGeometry(IndexedFaceSet478);

Transform473->addChildren(*Shape474);

HAnimSegment472->addChildren(*Transform473);

HAnimJoint471->addChildren(*HAnimSegment472);

HAnimJoint411->addChildren(*HAnimJoint471);

CHAnimJoint* HAnimJoint481 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint481->setName("temporomandibular");
HAnimJoint481->setDEF("hanim_temporomandibular");
HAnimJoint481->setCenter(new float[3]{0,57.450001,0.6835});
HAnimJoint481->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint481->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment482->setName("jaw");
HAnimSegment482->setDEF("hanim_jaw");
CTransform* Transform483 = (CTransform *)(m_pScene.createNode("Transform"));
Transform483->setTranslation(new float[3]{0,57.450001,0.6835});
CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance485 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material486 = (CMaterial *)(m_pScene.createNode("Material"));
Material486->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance485->setMaterial(*Material486);

CImageTexture* ImageTexture487 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture487->setUSE("JinLOA3TextureAtlas");
Appearance485->setTexture(*ImageTexture487);

Shape484->setAppearance(*Appearance485);

CIndexedFaceSet* IndexedFaceSet488 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet488->setCoordIndex(new int[168]{0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1});
IndexedFaceSet488->setCreaseAngle(3.14159);
IndexedFaceSet488->setTexCoordIndex(new int[168]{0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1});
CCoordinate* Coordinate489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate489->setPoint(new float[81]{0,-1.317,2.914,1.252,-0.7221,2.383,1.083,-0.2249,3.164,0.2244,0.5712,4.007,1.184,0.4815,3.532,0.2244,1.038,1.387,1.073,1.14,1.338,0.2244,0.6336,3.483,1.09,0.6458,3.144,1.93,0.1375,0.7069,1.991,0.7184,0.9789,-1.083,-0.2249,3.164,0,-0.2295,3.585,0,0.1459,4.012,-0.2244,0.5712,4.007,0,0.5712,4.007,-1.184,0.4815,3.532,-1.252,-0.7221,2.383,0,-0.2922,0.9103,-1.93,0.1375,0.7069,-1.991,0.7184,0.9789,-1.073,1.14,1.338,-1.09,0.6458,3.144,-0.2244,0.6336,3.483,0,0.6336,3.483,-0.2244,1.038,1.387,0,0.9359,1.424});
IndexedFaceSet488->setCoord(*Coordinate489);

CTextureCoordinate* TextureCoordinate490 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate490->setPoint(new float[84]{0.2448,0.6067,0.3051,0.6166,0.2959,0.6259,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3007,0.651,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3051,0.6166,0.3007,0.651,0.3007,0.651,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166});
IndexedFaceSet488->setTexCoord(*TextureCoordinate490);

Shape484->setGeometry(IndexedFaceSet488);

Transform483->addChildren(*Shape484);

HAnimSegment482->addChildren(*Transform483);

HAnimJoint481->addChildren(*HAnimSegment482);

HAnimJoint411->addChildren(*HAnimJoint481);

HAnimJoint401->addChildren(*HAnimJoint411);

HAnimJoint391->addChildren(*HAnimJoint401);

HAnimJoint381->addChildren(*HAnimJoint391);

HAnimJoint371->addChildren(*HAnimJoint381);

HAnimJoint361->addChildren(*HAnimJoint371);

HAnimJoint351->addChildren(*HAnimJoint361);

HAnimJoint341->addChildren(*HAnimJoint351);

HAnimJoint331->addChildren(*HAnimJoint341);

CHAnimJoint* HAnimJoint491 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint491->setName("l_acromioclavicular");
HAnimJoint491->setDEF("hanim_l_acromioclavicular");
HAnimJoint491->setCenter(new float[3]{1.71,52.82,-0.6127});
HAnimJoint491->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint491->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment492->setName("l_clavicle");
HAnimSegment492->setDEF("hanim_l_clavicle");
CTransform* Transform493 = (CTransform *)(m_pScene.createNode("Transform"));
Transform493->setTranslation(new float[3]{1.71,52.82,-0.6127});
CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance495 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material496 = (CMaterial *)(m_pScene.createNode("Material"));
Material496->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance495->setMaterial(*Material496);

CImageTexture* ImageTexture497 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture497->setUSE("JinLOA3TextureAtlas");
Appearance495->setTexture(*ImageTexture497);

Shape494->setAppearance(*Appearance495);

CIndexedFaceSet* IndexedFaceSet498 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet498->setCoordIndex(new int[104]{9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
IndexedFaceSet498->setCreaseAngle(3.14159);
IndexedFaceSet498->setTexCoordIndex(new int[104]{9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
CCoordinate* Coordinate499 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate499->setPoint(new float[45]{4.99,0.104,-0.8644,5.073,0.4993,0.047,4.706,0.1695,1.198,4.631,-1.819,1.104,4.586,-1.648,-0.1248,3.376,0.3884,1.771,3.891,0.989,-0.0537,4.193,-2.49,-0.5713,4.388,-2.49,1.429,3.761,0.3238,-1.692,-0.1237,0.6312,-0.1883,-0.1237,0.3007,-0.9426,-0.1237,-1.418,-0.2577,-0.1237,-1.392,0.6264,-0.1237,0.2586,0.8179});
IndexedFaceSet498->setCoord(*Coordinate499);

CTextureCoordinate* TextureCoordinate500 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate500->setPoint(new float[30]{0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926});
IndexedFaceSet498->setTexCoord(*TextureCoordinate500);

Shape494->setGeometry(IndexedFaceSet498);

Transform493->addChildren(*Shape494);

HAnimSegment492->addChildren(*Transform493);

HAnimJoint491->addChildren(*HAnimSegment492);

CHAnimJoint* HAnimJoint501 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint501->setName("l_sternoclavicular");
HAnimJoint501->setDEF("hanim_l_sternoclavicular");
HAnimJoint501->setCenter(new float[3]{5.464,52.060001,-0.5732});
HAnimJoint501->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint501->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment502->setName("l_scapula");
HAnimSegment502->setDEF("hanim_l_scapula");
CTransform* Transform503 = (CTransform *)(m_pScene.createNode("Transform"));
Transform503->setTranslation(new float[3]{5.464,52.060001,-0.5732});
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance505 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material506 = (CMaterial *)(m_pScene.createNode("Material"));
Material506->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance505->setMaterial(*Material506);

CImageTexture* ImageTexture507 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture507->setUSE("JinLOA3TextureAtlas");
Appearance505->setTexture(*ImageTexture507);

Shape504->setAppearance(*Appearance505);

CIndexedFaceSet* IndexedFaceSet508 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet508->setCoordIndex(new int[112]{5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
IndexedFaceSet508->setCreaseAngle(3.14159);
IndexedFaceSet508->setTexCoordIndex(new int[112]{5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
CCoordinate* Coordinate509 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate509->setPoint(new float[48]{1.935,1.466,-0.0932,1.515,0.6492,-1.732,1.534,0.7105,1.619,-0.3782,1.139,1.732,0.1374,1.74,-0.0932,0.0076,1.074,-1.731,0.8341,-1.572,1.39,0.4391,-1.74,-0.6109,0.8275,-1.58,-0.6098,0.6342,-1.74,1.389,-1.237,1.407,-0.0712,-1.547,0.8515,-1.142,-0.7525,-1.603,-0.4744,-0.7511,-1.595,1.16,-1.51,1.034,1.296,-1.59,-0.0185,0.1351});
IndexedFaceSet508->setCoord(*Coordinate509);

CTextureCoordinate* TextureCoordinate510 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate510->setPoint(new float[40]{0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618});
IndexedFaceSet508->setTexCoord(*TextureCoordinate510);

Shape504->setGeometry(IndexedFaceSet508);

Transform503->addChildren(*Shape504);

HAnimSegment502->addChildren(*Transform503);

HAnimJoint501->addChildren(*HAnimSegment502);

CHAnimJoint* HAnimJoint511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint511->setName("l_shoulder");
HAnimJoint511->setDEF("hanim_l_shoulder");
HAnimJoint511->setCenter(new float[3]{7.336,51.48,-0.1452});
HAnimJoint511->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint511->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setName("l_upperarm");
HAnimSegment512->setDEF("hanim_l_upperarm");
CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setTranslation(new float[3]{7.336,51.48,-0.1452});
CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance515 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material516 = (CMaterial *)(m_pScene.createNode("Material"));
Material516->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance515->setMaterial(*Material516);

CImageTexture* ImageTexture517 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture517->setUSE("JinLOA3TextureAtlas");
Appearance515->setTexture(*ImageTexture517);

Shape514->setAppearance(*Appearance515);

CIndexedFaceSet* IndexedFaceSet518 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet518->setCoordIndex(new int[304]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
IndexedFaceSet518->setCreaseAngle(3.14159);
IndexedFaceSet518->setTexCoordIndex(new int[304]{2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
CCoordinate* Coordinate519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate519->setPoint(new float[120]{1.164,1.767,-1.68,2.32,1.756,0.0337,1.047,1.768,1.663,-0.895,1.785,0.9556,-0.8229,1.784,-1.11,1.382,0.4997,-2.31,2.978,0.4855,0.057,1.221,0.5011,2.307,-1.462,0.525,1.33,-1.362,0.5241,-1.523,1.36,-2.014,-2.31,2.956,-2.028,0.057,1.198,-2.012,2.307,-1.484,-1.988,1.33,-1.384,-1.989,-1.523,1.398,-3.089,-2.442,3.087,-3.104,0.0619,1.228,-3.087,2.442,-1.61,-3.062,1.409,-1.505,-3.063,-1.61,0.8845,-1.238,-1.939,2.105,-1.248,-0.4543,1.473,-1.243,1.629,-0.1375,-1.229,1.432,-0.5011,-1.225,-0.7734,0.9027,-7.045,-1.569,2.17,-7.056,-0.378,1.514,-7.051,1.293,-0.1588,-7.036,1.135,-0.5365,-7.032,-0.634,0.9066,-11.1,-1.511,2.127,-11.11,-0.3651,1.495,-11.1,1.243,-0.1154,-11.09,1.091,-0.4791,-11.08,-0.6115,0.852,-11.65,-0.8985,1.567,-11.65,-0.2267,1.197,-11.65,0.716,0.2531,-11.64,0.6268,0.0399,-11.64,-0.3711});
IndexedFaceSet518->setCoord(*Coordinate519);

CTextureCoordinate* TextureCoordinate520 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate520->setPoint(new float[124]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114});
IndexedFaceSet518->setTexCoord(*TextureCoordinate520);

Shape514->setGeometry(IndexedFaceSet518);

Transform513->addChildren(*Shape514);

HAnimSegment512->addChildren(*Transform513);

HAnimJoint511->addChildren(*HAnimSegment512);

CHAnimJoint* HAnimJoint521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint521->setName("l_elbow");
HAnimJoint521->setDEF("hanim_l_elbow");
HAnimJoint521->setCenter(new float[3]{8.093,40.380001,-0.2502});
HAnimJoint521->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint521->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment522->setName("l_forearm");
HAnimSegment522->setDEF("hanim_l_forearm");
CTransform* Transform523 = (CTransform *)(m_pScene.createNode("Transform"));
Transform523->setTranslation(new float[3]{8.093,40.380001,-0.2502});
CShape* Shape524 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance525 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material526 = (CMaterial *)(m_pScene.createNode("Material"));
Material526->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance525->setMaterial(*Material526);

CImageTexture* ImageTexture527 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture527->setUSE("JinLOA3TextureAtlas");
Appearance525->setTexture(*ImageTexture527);

Shape524->setAppearance(*Appearance525);

CIndexedFaceSet* IndexedFaceSet528 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet528->setCoordIndex(new int[184]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
IndexedFaceSet528->setCreaseAngle(3.14159);
IndexedFaceSet528->setTexCoordIndex(new int[184]{2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
CCoordinate* Coordinate529 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate529->setPoint(new float[75]{0.215,0.3047,-1.152,1.155,0.2966,-0.2588,0.6199,0.3013,1.04,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.625,1.472,-0.8561,-0.4271,0.7164,-0.8496,1.625,-1.079,-0.8342,1.482,-1.433,-0.8312,-0.6588,0.1328,-3.5,-1.607,1.551,-3.513,-0.4225,0.781,-2.925,1.61,-1.136,-2.909,1.468,-1.551,-3.486,-0.6519,0.0592,-8.713,-1.437,1.093,-8.722,-0.1279,0.5047,-8.716,1.51,-0.8932,-8.704,1.377,-1.169,-8.702,-0.3428,0.0092,-9.336,-0.8855,0.7154,-9.342,0.0084,0.3135,-9.339,1.043,-0.6412,-9.331,0.9519,-0.8292,-9.329,-0.1383});
IndexedFaceSet528->setCoord(*Coordinate529);

CTextureCoordinate* TextureCoordinate530 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate530->setPoint(new float[74]{0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674});
IndexedFaceSet528->setTexCoord(*TextureCoordinate530);

Shape524->setGeometry(IndexedFaceSet528);

Transform523->addChildren(*Shape524);

HAnimSegment522->addChildren(*Transform523);

HAnimJoint521->addChildren(*HAnimSegment522);

CHAnimJoint* HAnimJoint531 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint531->setName("l_radiocarpal");
HAnimJoint531->setDEF("hanim_l_radiocarpal");
HAnimJoint531->setCenter(new float[3]{7.899,31.43,-0.3809});
HAnimJoint531->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint531->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment532 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment532->setName("l_carpal");
HAnimSegment532->setDEF("hanim_l_carpal");
CTransform* Transform533 = (CTransform *)(m_pScene.createNode("Transform"));
Transform533->setTranslation(new float[3]{7.899,31.43,-0.3809});
CShape* Shape534 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance535 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material536 = (CMaterial *)(m_pScene.createNode("Material"));
Material536->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance535->setMaterial(*Material536);

CImageTexture* ImageTexture537 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture537->setUSE("JinLOA3TextureAtlas");
Appearance535->setTexture(*ImageTexture537);

Shape534->setAppearance(*Appearance535);

CIndexedFaceSet* IndexedFaceSet538 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet538->setCoordIndex(new int[424]{36,37,38,-1,38,41,36,-1,44,45,54,-1,31,4,53,-1,53,30,31,-1,6,10,11,-1,11,7,6,-1,11,10,33,-1,33,32,11,-1,34,24,7,-1,7,11,34,-1,13,17,15,-1,15,27,13,-1,25,22,35,-1,30,5,20,-1,13,34,11,-1,11,32,13,-1,23,22,28,-1,28,29,23,-1,17,16,14,-1,14,15,17,-1,18,5,53,-1,53,19,18,-1,9,8,16,-1,16,17,9,-1,14,42,43,-1,43,15,14,-1,21,16,8,-1,8,33,21,-1,21,35,22,-1,22,23,21,-1,39,40,41,-1,41,38,39,-1,26,20,24,-1,27,12,20,-1,20,26,27,-1,3,30,12,-1,12,43,3,-1,0,54,28,-1,28,25,0,-1,13,32,9,-1,9,17,13,-1,28,31,29,-1,29,42,14,-1,14,23,29,-1,16,21,23,-1,23,14,16,-1,30,3,2,-1,2,31,30,-1,8,9,32,-1,32,33,8,-1,33,10,35,-1,35,21,33,-1,35,10,6,-1,6,25,35,-1,13,27,26,-1,26,34,13,-1,34,26,24,-1,1,0,47,-1,47,46,1,-1,25,48,47,-1,47,0,25,-1,25,6,49,-1,49,48,25,-1,6,7,50,-1,50,49,6,-1,24,51,50,-1,50,7,24,-1,24,1,46,-1,46,51,24,-1,2,3,43,-1,43,42,2,-1,15,43,12,-1,12,27,15,-1,29,31,2,-1,2,42,29,-1,18,44,52,-1,52,5,18,-1,28,22,25,-1,18,19,45,-1,45,44,18,-1,1,24,52,-1,52,44,1,-1,45,4,28,-1,28,4,31,-1,45,19,4,-1,37,36,46,-1,46,47,37,-1,48,38,37,-1,37,47,48,-1,39,38,48,-1,48,49,39,-1,40,39,49,-1,49,50,40,-1,51,41,40,-1,40,50,51,-1,36,41,51,-1,51,46,36,-1,24,20,52,-1,52,20,5,-1,53,5,30,-1,53,4,19,-1,54,45,28,-1,44,54,0,-1,0,1,44,-1,20,12,30,-1});
IndexedFaceSet538->setCreaseAngle(3.14159);
IndexedFaceSet538->setTexCoordIndex(new int[424]{0,1,2,-1,2,3,0,-1,4,5,6,-1,8,9,10,-1,10,7,8,-1,12,13,14,-1,14,11,12,-1,14,13,15,-1,15,16,14,-1,17,18,11,-1,11,14,17,-1,20,21,22,-1,22,19,20,-1,23,24,25,-1,7,26,27,-1,20,17,14,-1,14,16,20,-1,28,24,29,-1,29,30,28,-1,21,31,32,-1,32,22,21,-1,33,26,10,-1,10,34,33,-1,35,36,31,-1,31,21,35,-1,32,37,38,-1,38,22,32,-1,39,31,36,-1,36,15,39,-1,39,25,24,-1,24,28,39,-1,40,41,3,-1,3,2,40,-1,42,27,18,-1,19,43,27,-1,27,42,19,-1,44,7,43,-1,43,38,44,-1,45,6,29,-1,29,23,45,-1,20,16,35,-1,35,21,20,-1,29,8,30,-1,30,37,32,-1,32,28,30,-1,31,39,28,-1,28,32,31,-1,7,44,46,-1,46,8,7,-1,36,35,16,-1,16,15,36,-1,15,13,25,-1,25,39,15,-1,25,13,12,-1,12,23,25,-1,20,19,42,-1,42,17,20,-1,17,42,18,-1,47,45,48,-1,48,49,47,-1,23,50,48,-1,48,45,23,-1,23,12,51,-1,51,50,23,-1,12,11,52,-1,52,51,12,-1,18,53,52,-1,52,11,18,-1,18,47,49,-1,49,53,18,-1,46,44,38,-1,38,37,46,-1,22,38,43,-1,43,19,22,-1,30,8,46,-1,46,37,30,-1,33,4,54,-1,54,26,33,-1,29,24,23,-1,33,34,5,-1,5,4,33,-1,47,18,54,-1,54,4,47,-1,5,9,29,-1,29,9,8,-1,5,34,9,-1,1,0,49,-1,49,48,1,-1,50,2,1,-1,1,48,50,-1,40,2,50,-1,50,51,40,-1,41,40,51,-1,51,52,41,-1,53,3,41,-1,41,52,53,-1,0,3,53,-1,53,49,0,-1,18,27,54,-1,54,27,26,-1,10,26,7,-1,10,9,34,-1,6,5,29,-1,4,6,45,-1,45,47,4,-1,27,43,7,-1});
CCoordinate* Coordinate539 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate539->setPoint(new float[165]{0.615,-0.6885,1.418,-0.2519,-0.7698,1.606,0.894,-4.14,1.405,0.2357,-4.221,1.472,0.7106,-2.848,1.537,-0.2913,-2.795,1.561,0.3511,-0.9723,-1.085,-0.332,-1.036,-1.083,0.6255,-3.82,-1.576,0.076,-3.93,-1.587,0.5517,-2.055,-1.417,-0.1089,-2.163,-1.46,0.0149,-3.564,0.866,-0.0687,-3.436,-0.8707,0.9147,-4.192,-0.1153,0.2445,-4.253,-0.1554,0.7883,-4.028,-0.9461,0.1878,-4.111,-0.9619,-0.1749,-2.558,2.351,0.5105,-2.795,2.344,-0.1613,-2.264,1.005,0.8473,-3.286,-0.8304,0.9399,-2.17,-0.0115,0.979,-3.369,-0.052,-0.4715,-0.9186,0.2017,0.7286,-0.8328,0.1541,-0.1459,-2.365,0.1498,-0.0501,-3.575,-0.0433,0.969,-2.127,0.9718,0.9825,-3.348,0.8866,0.0909,-3.383,1.556,0.8371,-3.169,1.547,0.041,-3.318,-1.568,0.5921,-3.194,-1.578,-0.2264,-2.304,-0.7602,0.8375,-2.137,-0.8044,-0.2818,0.1713,1.187,0.2277,0.2301,1.179,0.2277,0.4881,0.2572,0.1331,0.2707,-0.6889,-0.3764,0.2118,-0.6809,-0.4614,0.4054,0.2565,0.9242,-4.241,0.7847,0.2647,-4.324,0.8047,-0.3043,-1.534,2.164,0.8425,-1.789,2.123,-0.201,-0.4603,1.254,0.3856,-0.405,1.248,0.4965,-0.283,0.2553,0.2563,-0.4079,-0.7647,-0.3314,-0.4586,-0.758,-0.3822,-0.3913,0.2697,-0.4485,-1.891,1.52,0.3893,-2.936,1.555,0.7623,-1.12,1.731});
IndexedFaceSet538->setCoord(*Coordinate539);

CTextureCoordinate* TextureCoordinate540 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate540->setPoint(new float[110]{0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628});
IndexedFaceSet538->setTexCoord(*TextureCoordinate540);

Shape534->setGeometry(IndexedFaceSet538);

Transform533->addChildren(*Shape534);

HAnimSegment532->addChildren(*Transform533);

HAnimJoint531->addChildren(*HAnimSegment532);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setName("l_carpometacarpal_1");
HAnimJoint541->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint541->setCenter(new float[3]{8.205,29.6,1.302});
HAnimJoint541->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint541->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setName("l_metacarpal_1");
HAnimSegment542->setDEF("hanim_l_metacarpal_1");
CTransform* Transform543 = (CTransform *)(m_pScene.createNode("Transform"));
Transform543->setTranslation(new float[3]{8.205,29.6,1.302});
CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance545 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material546 = (CMaterial *)(m_pScene.createNode("Material"));
Material546->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance545->setMaterial(*Material546);

CImageTexture* ImageTexture547 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture547->setUSE("JinLOA3TextureAtlas");
Appearance545->setTexture(*ImageTexture547);

Shape544->setAppearance(*Appearance545);

CIndexedFaceSet* IndexedFaceSet548 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet548->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet548->setCreaseAngle(3.14159);
IndexedFaceSet548->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate549 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate549->setPoint(new float[111]{-0.375,-0.9214,0.322,-0.212,-1.009,0.0858,-0.1385,-0.9095,0.5036,0.0245,-0.9973,0.2674,-0.533,-0.8014,0.1471,-0.4779,-0.7267,0.4605,-0.2413,-0.7148,0.6421,0.0584,-0.7717,0.6012,0.2213,-0.8595,0.365,0.1662,-0.9342,0.0516,-0.0704,-0.9461,-0.13,-0.3701,-0.8892,-0.0891,-0.4847,-0.0791,-0.0791,-0.4228,0.0048,0.2724,-0.1414,0.0189,0.4885,0.1948,-0.0449,0.4426,0.3887,-0.1493,0.1616,0.3268,-0.2331,-0.1899,0.0453,-0.2473,-0.406,-0.2908,-0.1835,-0.3601,-0.5058,0.0372,-0.1235,-0.4385,0.1283,0.2586,-0.1325,0.1437,0.4936,0.233,0.0743,0.4437,0.4438,-0.0392,0.1381,0.3765,-0.1303,-0.244,0.0705,-0.1457,-0.479,-0.2949,-0.0763,-0.4291,-0.3497,0.1392,-0.1192,-0.3021,0.2036,0.1511,-0.0857,0.2145,0.3172,0.1727,0.1654,0.2819,0.3218,0.0852,0.0659,0.2742,0.0207,-0.2044,0.0578,0.0098,-0.3705,-0.2006,0.0589,-0.3352,-0.0069,0.159,-0.0407});
IndexedFaceSet548->setCoord(*Coordinate549);

CTextureCoordinate* TextureCoordinate550 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate550->setPoint(new float[74]{0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648});
IndexedFaceSet548->setTexCoord(*TextureCoordinate550);

Shape544->setGeometry(IndexedFaceSet548);

Transform543->addChildren(*Shape544);

HAnimSegment542->addChildren(*Transform543);

HAnimJoint541->addChildren(*HAnimSegment542);

CHAnimJoint* HAnimJoint551 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint551->setName("l_metacarpophalangeal_1");
HAnimJoint551->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint551->setCenter(new float[3]{8.08,28.73,1.55});
HAnimJoint551->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint551->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment552 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment552->setName("l_carpal_proximal_phalanx_1");
HAnimSegment552->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform553 = (CTransform *)(m_pScene.createNode("Transform"));
Transform553->setTranslation(new float[3]{8.08,28.73,1.55});
CShape* Shape554 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance555 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material556 = (CMaterial *)(m_pScene.createNode("Material"));
Material556->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance555->setMaterial(*Material556);

CImageTexture* ImageTexture557 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture557->setUSE("JinLOA3TextureAtlas");
Appearance555->setTexture(*ImageTexture557);

Shape554->setAppearance(*Appearance555);

CIndexedFaceSet* IndexedFaceSet558 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet558->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet558->setCreaseAngle(3.14159);
IndexedFaceSet558->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate559 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate559->setPoint(new float[111]{-0.5258,-1.001,0.2196,-0.3901,-1.074,0.023,-0.3376,-1.029,0.3799,-0.2019,-1.102,0.1833,-0.6244,-0.8415,0.0751,-0.585,-0.8078,0.3428,-0.3968,-0.8361,0.503,-0.1539,-0.912,0.4758,-0.0182,-0.985,0.2792,-0.0576,-1.019,0.0115,-0.2458,-0.9905,-0.1487,-0.4887,-0.9145,-0.1215,-0.4357,-0.0607,-0.0712,-0.3915,-0.0229,0.229,-0.1676,-0.0565,0.4196,0.1048,-0.1417,0.3891,0.2662,-0.2286,0.1552,0.222,-0.2663,-0.1451,-0.0018,-0.2328,-0.3357,-0.2743,-0.1476,-0.3051,-0.4293,0.0682,-0.1026,-0.3812,0.1092,0.2242,-0.1376,0.0727,0.4317,0.1589,-0.02,0.3984,0.3346,-0.1146,0.1438,0.2865,-0.1556,-0.1829,0.0429,-0.1191,-0.3904,-0.2536,-0.0264,-0.3572,-0.2801,0.1629,-0.0879,-0.2461,0.1919,0.1432,-0.0738,0.1661,0.2899,0.1359,0.1005,0.2664,0.2601,0.0337,0.0864,0.2261,0.0046,-0.1447,0.0538,0.0304,-0.2914,-0.1558,0.096,-0.2679,0.0055,0.1486,-0.0096});
IndexedFaceSet558->setCoord(*Coordinate559);

CTextureCoordinate* TextureCoordinate560 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate560->setPoint(new float[74]{0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566});
IndexedFaceSet558->setTexCoord(*TextureCoordinate560);

Shape554->setGeometry(IndexedFaceSet558);

Transform553->addChildren(*Shape554);

HAnimSegment552->addChildren(*Transform553);

HAnimJoint551->addChildren(*HAnimSegment552);

CHAnimJoint* HAnimJoint561 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint561->setName("l_carpal_interphalangeal_1");
HAnimJoint561->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint561->setCenter(new float[3]{7.832,27.85,1.735});
HAnimJoint561->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment562 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment562->setName("l_carpal_distal_phalanx_1");
HAnimSegment562->setDEF("hanim_l_carpal_distal_phalanx_1");
CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setTranslation(new float[3]{7.832,27.85,1.735});
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance565 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material566 = (CMaterial *)(m_pScene.createNode("Material"));
Material566->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance565->setMaterial(*Material566);

CImageTexture* ImageTexture567 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture567->setUSE("JinLOA3TextureAtlas");
Appearance565->setTexture(*ImageTexture567);

Shape564->setAppearance(*Appearance565);

CIndexedFaceSet* IndexedFaceSet568 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet568->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet568->setCreaseAngle(3.14159);
IndexedFaceSet568->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate569 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate569->setPoint(new float[87]{-0.5817,-0.8003,0.0727,-0.4584,-0.8658,-0.106,-0.4372,-0.8552,0.2109,-0.314,-0.9207,0.0322,-0.6359,-0.6464,-0.0377,-0.62,-0.6384,0.2,-0.4756,-0.6933,0.3382,-0.2748,-0.7836,0.3078,-0.1516,-0.8492,0.1291,-0.1675,-0.8572,-0.1085,-0.3119,-0.8023,-0.2467,-0.5127,-0.712,-0.2163,-0.374,-0.0036,-0.0838,-0.3562,0.0054,0.1827,-0.1843,-0.0599,0.3471,0.0408,-0.1612,0.313,0.1875,-0.2392,0.1004,0.1697,-0.2482,-0.1661,-0.0022,-0.1829,-0.3305,-0.2274,-0.0816,-0.2964,-0.2142,0.1671,-0.0744,-0.2005,0.174,0.1306,-0.0683,0.1238,0.257,0.1048,0.0459,0.2308,0.2176,-0.0141,0.0673,0.2039,-0.021,-0.1376,0.0717,0.0292,-0.264,-0.1014,0.1072,-0.2378,0.0214,0.1175,-0.006});
IndexedFaceSet568->setCoord(*Coordinate569);

CTextureCoordinate* TextureCoordinate570 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate570->setPoint(new float[58]{0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648});
IndexedFaceSet568->setTexCoord(*TextureCoordinate570);

Shape564->setGeometry(IndexedFaceSet568);

Transform563->addChildren(*Shape564);

HAnimSegment562->addChildren(*Transform563);

HAnimJoint561->addChildren(*HAnimSegment562);

HAnimJoint551->addChildren(*HAnimJoint561);

HAnimJoint541->addChildren(*HAnimJoint551);

HAnimJoint531->addChildren(*HAnimJoint541);

CHAnimJoint* HAnimJoint571 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint571->setName("l_carpometacarpal_2");
HAnimJoint571->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint571->setCenter(new float[3]{8.376,28.549999,0.5997});
HAnimJoint571->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint571->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment572 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment572->setName("l_metacarpal_2");
HAnimSegment572->setDEF("hanim_l_metacarpal_2");
CTransform* Transform573 = (CTransform *)(m_pScene.createNode("Transform"));
Transform573->setTranslation(new float[3]{8.376,28.549999,0.5997});
CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance575 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material576 = (CMaterial *)(m_pScene.createNode("Material"));
Material576->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance575->setMaterial(*Material576);

CImageTexture* ImageTexture577 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture577->setUSE("JinLOA3TextureAtlas");
Appearance575->setTexture(*ImageTexture577);

Shape574->setAppearance(*Appearance575);

CIndexedFaceSet* IndexedFaceSet578 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet578->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet578->setCreaseAngle(3.14159);
IndexedFaceSet578->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate579 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate579->setPoint(new float[111]{-0.0229,-1.485,0.1659,-0.0277,-1.493,-0.0662,0.2213,-1.467,0.1625,0.2166,-1.475,-0.0696,-0.2194,-1.321,0.162,-0.0326,-1.302,0.3335,0.2116,-1.284,0.3301,0.3912,-1.276,0.1535,0.3864,-1.284,-0.0786,0.1997,-1.303,-0.2501,-0.0446,-1.321,-0.2467,-0.2242,-1.329,-0.0701,-0.3384,-0.3382,0.1488,-0.1289,-0.3166,0.3412,0.1617,-0.2951,0.3371,0.3631,-0.2862,0.139,0.3574,-0.2953,-0.1371,0.148,-0.3169,-0.3295,-0.1426,-0.3384,-0.3254,-0.3441,-0.3473,-0.1273,-0.3796,-0.1843,0.1553,-0.1523,-0.1608,0.364,0.1629,-0.1375,0.3596,0.3814,-0.1279,0.1446,0.3753,-0.1377,-0.1549,0.148,-0.1611,-0.3636,-0.1672,-0.1845,-0.3592,-0.3858,-0.1941,-0.1442,-0.2808,-0.0217,0.1042,-0.1201,-0.0051,0.2518,0.1029,0.0114,0.2486,0.2574,0.0182,0.0967,0.253,0.0113,-0.1151,0.0923,-0.0053,-0.2627,-0.1306,-0.0218,-0.2596,-0.2851,-0.0286,-0.1076,-0.0187,0.0593,-0.0078});
IndexedFaceSet578->setCoord(*Coordinate579);

CTextureCoordinate* TextureCoordinate580 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate580->setPoint(new float[74]{0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533});
IndexedFaceSet578->setTexCoord(*TextureCoordinate580);

Shape574->setGeometry(IndexedFaceSet578);

Transform573->addChildren(*Shape574);

HAnimSegment572->addChildren(*Transform573);

HAnimJoint571->addChildren(*HAnimSegment572);

CHAnimJoint* HAnimJoint581 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint581->setName("l_metacarpophalangeal_2");
HAnimJoint581->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint581->setCenter(new float[3]{8.52,27.24,0.6551});
HAnimJoint581->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint581->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment582 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment582->setName("l_carpal_proximal_phalanx_2");
HAnimSegment582->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform583 = (CTransform *)(m_pScene.createNode("Transform"));
Transform583->setTranslation(new float[3]{8.52,27.24,0.6551});
CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance585 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material586 = (CMaterial *)(m_pScene.createNode("Material"));
Material586->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance585->setMaterial(*Material586);

CImageTexture* ImageTexture587 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture587->setUSE("JinLOA3TextureAtlas");
Appearance585->setTexture(*ImageTexture587);

Shape584->setAppearance(*Appearance585);

CIndexedFaceSet* IndexedFaceSet588 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet588->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet588->setCreaseAngle(3.14159);
IndexedFaceSet588->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate589 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate589->setPoint(new float[111]{-0.2499,-1.331,0.1644,-0.2541,-1.339,-0.0655,-0.0349,-1.351,0.1633,-0.0391,-1.359,-0.0666,-0.3958,-1.152,0.159,-0.2314,-1.162,0.3307,-0.0165,-1.182,0.3296,0.1416,-1.203,0.1563,0.1374,-1.21,-0.0736,-0.0269,-1.201,-0.2453,-0.2419,-1.181,-0.2442,-0.4,-1.16,-0.0709,-0.3504,-0.2375,0.1465,-0.166,-0.2482,0.3391,0.0897,-0.2722,0.3377,0.267,-0.2955,0.1434,0.2621,-0.3044,-0.1302,0.0777,-0.2937,-0.3227,-0.1781,-0.2697,-0.3214,-0.3554,-0.2464,-0.127,-0.3661,-0.0905,0.1542,-0.1642,-0.1021,0.365,0.1159,-0.1284,0.3636,0.3101,-0.1539,0.1508,0.3046,-0.1637,-0.1488,0.1027,-0.152,-0.3596,-0.1774,-0.1258,-0.3581,-0.3715,-0.1003,-0.1453,-0.2544,0.0426,0.1044,-0.1117,0.0344,0.2535,0.0864,0.0158,0.2525,0.2237,-0.0022,0.102,0.2198,-0.0091,-0.1098,0.077,-0.0009,-0.2589,-0.121,0.0177,-0.2579,-0.2583,0.0357,-0.1074,-0.0117,0.0763,-0.005});
IndexedFaceSet588->setCoord(*Coordinate589);

CTextureCoordinate* TextureCoordinate590 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate590->setPoint(new float[74]{0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412});
IndexedFaceSet588->setTexCoord(*TextureCoordinate590);

Shape584->setGeometry(IndexedFaceSet588);

Transform583->addChildren(*Shape584);

HAnimSegment582->addChildren(*Transform583);

HAnimJoint581->addChildren(*HAnimSegment582);

CHAnimJoint* HAnimJoint591 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint591->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint591->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint591->setCenter(new float[3]{8.45,26.1,0.6956});
HAnimJoint591->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint591->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment592 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment592->setName("l_carpal_middle_phalanx_2");
HAnimSegment592->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform593 = (CTransform *)(m_pScene.createNode("Transform"));
Transform593->setTranslation(new float[3]{8.45,26.1,0.6956});
CShape* Shape594 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance595 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material596 = (CMaterial *)(m_pScene.createNode("Material"));
Material596->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance595->setMaterial(*Material596);

CImageTexture* ImageTexture597 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture597->setUSE("JinLOA3TextureAtlas");
Appearance595->setTexture(*ImageTexture597);

Shape594->setAppearance(*Appearance595);

CIndexedFaceSet* IndexedFaceSet598 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet598->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet598->setCreaseAngle(3.14159);
IndexedFaceSet598->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate599 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate599->setPoint(new float[87]{-0.4479,-1.125,0.1554,-0.4519,-1.132,-0.0632,-0.2499,-1.18,0.1557,-0.2539,-1.187,-0.0629,-0.5544,-0.9319,0.1491,-0.4029,-0.9674,0.3134,-0.2049,-1.022,0.3137,-0.0594,-1.068,0.1499,-0.0634,-1.075,-0.0687,-0.2149,-1.04,-0.2329,-0.4129,-0.9852,-0.2333,-0.5584,-0.939,-0.0695,-0.3333,-0.0803,0.1251,-0.1781,-0.1166,0.2933,0.037,-0.1758,0.2937,0.186,-0.2231,0.1259,0.1817,-0.2308,-0.1116,0.0265,-0.1945,-0.2799,-0.1886,-0.1353,-0.2802,-0.3376,-0.088,-0.1125,-0.2019,0.1709,0.088,-0.0815,0.1427,0.2185,0.0854,0.0967,0.2188,0.2011,0.06,0.0887,0.1977,0.054,-0.0957,0.0773,0.0822,-0.2262,-0.0896,0.1281,-0.2265,-0.2053,0.1648,-0.0963,0.0132,0.1679,-0.006});
IndexedFaceSet598->setCoord(*Coordinate599);

CTextureCoordinate* TextureCoordinate600 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate600->setPoint(new float[58]{0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313});
IndexedFaceSet598->setTexCoord(*TextureCoordinate600);

Shape594->setGeometry(IndexedFaceSet598);

Transform593->addChildren(*Shape594);

HAnimSegment592->addChildren(*Transform593);

HAnimJoint591->addChildren(*HAnimSegment592);

CHAnimJoint* HAnimJoint601 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint601->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint601->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint601->setCenter(new float[3]{8.192,25.17,0.7315});
HAnimJoint601->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint601->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment602 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment602->setName("l_carpal_distal_phalanx_2");
HAnimSegment602->setDEF("hanim_l_carpal_distal_phalanx_2");
CTransform* Transform603 = (CTransform *)(m_pScene.createNode("Transform"));
Transform603->setTranslation(new float[3]{8.192,25.17,0.7315});
CShape* Shape604 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance605 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material606 = (CMaterial *)(m_pScene.createNode("Material"));
Material606->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance605->setMaterial(*Material606);

CImageTexture* ImageTexture607 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture607->setUSE("JinLOA3TextureAtlas");
Appearance605->setTexture(*ImageTexture607);

Shape604->setAppearance(*Appearance605);

CIndexedFaceSet* IndexedFaceSet608 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet608->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet608->setCreaseAngle(3.14159);
IndexedFaceSet608->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate609 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate609->setPoint(new float[87]{-0.6187,-1.071,0.1411,-0.6221,-1.077,-0.0485,-0.4578,-1.147,0.1426,-0.4613,-1.153,-0.047,-0.6714,-0.8704,0.1341,-0.5482,-0.923,0.2774,-0.3873,-0.9993,0.2789,-0.2693,-1.061,0.1378,-0.2727,-1.067,-0.0518,-0.396,-1.015,-0.1951,-0.5568,-0.9385,-0.1966,-0.6749,-0.8765,-0.0555,-0.3236,-0.0612,0.1191,-0.1854,-0.1202,0.2799,0.006,-0.211,0.2816,0.1384,-0.2805,0.1233,0.1343,-0.2879,-0.1023,-0.004,-0.2288,-0.263,-0.1953,-0.138,-0.2647,-0.3277,-0.0685,-0.1065,-0.2135,0.0836,0.0963,-0.0945,0.035,0.233,0.0723,-0.0325,0.2317,0.1865,-0.0807,0.0968,0.1843,-0.0816,-0.0912,0.0691,-0.0336,-0.2249,-0.0937,0.0356,-0.2277,-0.2116,0.0844,-0.0958,0.0314,0.0875,-0.0035});
IndexedFaceSet608->setCoord(*Coordinate609);

CTextureCoordinate* TextureCoordinate610 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate610->setPoint(new float[58]{0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218});
IndexedFaceSet608->setTexCoord(*TextureCoordinate610);

Shape604->setGeometry(IndexedFaceSet608);

Transform603->addChildren(*Shape604);

HAnimSegment602->addChildren(*Transform603);

HAnimJoint601->addChildren(*HAnimSegment602);

HAnimJoint591->addChildren(*HAnimJoint601);

HAnimJoint581->addChildren(*HAnimJoint591);

HAnimJoint571->addChildren(*HAnimJoint581);

HAnimJoint531->addChildren(*HAnimJoint571);

CHAnimJoint* HAnimJoint611 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint611->setName("l_carpometacarpal_3");
HAnimJoint611->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint611->setCenter(new float[3]{8.344,28.65,-0.194});
HAnimJoint611->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint611->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment612 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment612->setName("l_metacarpal_3");
HAnimSegment612->setDEF("hanim_l_metacarpal_3");
CTransform* Transform613 = (CTransform *)(m_pScene.createNode("Transform"));
Transform613->setTranslation(new float[3]{8.344,28.65,-0.194});
CShape* Shape614 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance615 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material616 = (CMaterial *)(m_pScene.createNode("Material"));
Material616->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance615->setMaterial(*Material616);

CImageTexture* ImageTexture617 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture617->setUSE("JinLOA3TextureAtlas");
Appearance615->setTexture(*ImageTexture617);

Shape614->setAppearance(*Appearance615);

CIndexedFaceSet* IndexedFaceSet618 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet618->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet618->setCreaseAngle(3.14159);
IndexedFaceSet618->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate619 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate619->setPoint(new float[111]{0.0157,-1.601,0.0972,0.0217,-1.599,-0.1348,0.2598,-1.581,0.1076,0.2658,-1.578,-0.1245,-0.183,-1.427,0.091,-0.0045,-1.414,0.2728,0.2395,-1.393,0.2832,0.4271,-1.376,0.1169,0.4331,-1.374,-0.1151,0.2546,-1.387,-0.2969,0.0105,-1.408,-0.3073,-0.177,-1.425,-0.1411,-0.3164,-0.3793,0.1197,-0.1161,-0.3643,0.3236,0.1742,-0.3403,0.3359,0.3846,-0.3213,0.1495,0.3918,-0.3185,-0.1266,0.1915,-0.3335,-0.3306,-0.0988,-0.3575,-0.3429,-0.3092,-0.3765,-0.1564,-0.3602,-0.2157,0.1315,-0.143,-0.1995,0.3527,0.172,-0.1734,0.3661,0.4003,-0.1528,0.1638,0.408,-0.1498,-0.1357,0.1908,-0.166,-0.357,-0.1242,-0.1921,-0.3703,-0.3524,-0.2126,-0.168,-0.2615,-0.0399,0.0937,-0.1079,-0.0284,0.2501,0.1148,-0.01,0.2596,0.2762,0.0046,0.1165,0.2817,0.0068,-0.0952,0.1281,-0.0047,-0.2517,-0.0946,-0.0232,-0.2611,-0.256,-0.0377,-0.1181,0.0044,0.0523,-0.0002});
IndexedFaceSet618->setCoord(*Coordinate619);

CTextureCoordinate* TextureCoordinate620 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate620->setPoint(new float[74]{0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537});
IndexedFaceSet618->setTexCoord(*TextureCoordinate620);

Shape614->setGeometry(IndexedFaceSet618);

Transform613->addChildren(*Shape614);

HAnimSegment612->addChildren(*Transform613);

HAnimJoint611->addChildren(*HAnimSegment612);

CHAnimJoint* HAnimJoint621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint621->setName("l_metacarpophalangeal_3");
HAnimJoint621->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint621->setCenter(new float[3]{8.52,27.26,-0.1959});
HAnimJoint621->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint621->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment622 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment622->setName("l_carpal_proximal_phalanx_3");
HAnimSegment622->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform623 = (CTransform *)(m_pScene.createNode("Transform"));
Transform623->setTranslation(new float[3]{8.52,27.26,-0.1959});
CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance625 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material626 = (CMaterial *)(m_pScene.createNode("Material"));
Material626->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance625->setMaterial(*Material626);

CImageTexture* ImageTexture627 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture627->setUSE("JinLOA3TextureAtlas");
Appearance625->setTexture(*ImageTexture627);

Shape624->setAppearance(*Appearance625);

CIndexedFaceSet* IndexedFaceSet628 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet628->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet628->setCreaseAngle(3.14159);
IndexedFaceSet628->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate629 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate629->setPoint(new float[111]{-0.2259,-1.448,0.0923,-0.2194,-1.446,-0.1376,-0.0106,-1.469,0.1016,-0.0041,-1.467,-0.1283,-0.3742,-1.258,0.088,-0.2177,-1.275,0.2673,-0.0024,-1.296,0.2766,0.1639,-1.31,0.1112,0.1704,-1.307,-0.1187,0.0138,-1.29,-0.2981,-0.2014,-1.269,-0.3073,-0.3677,-1.255,-0.1419,-0.3422,-0.2825,0.1227,-0.1666,-0.302,0.3239,0.0895,-0.3267,0.3349,0.2761,-0.3422,0.1493,0.2838,-0.3394,-0.1242,0.1082,-0.3199,-0.3253,-0.1479,-0.2952,-0.3364,-0.3345,-0.2797,-0.1508,-0.3605,-0.1263,0.1367,-0.1681,-0.1476,0.357,0.1123,-0.1747,0.3691,0.3166,-0.1917,0.1659,0.3251,-0.1886,-0.1336,0.1327,-0.1672,-0.3539,-0.1477,-0.1401,-0.366,-0.352,-0.1232,-0.1627,-0.2486,0.0181,0.0994,-0.1126,0.003,0.2552,0.0857,-0.0161,0.2638,0.2302,-0.0281,0.1201,0.2362,-0.0259,-0.0917,0.1002,-0.0108,-0.2475,-0.0981,0.0083,-0.256,-0.2426,0.0203,-0.1123,-0.0014,0.0597,0.0048});
IndexedFaceSet628->setCoord(*Coordinate629);

CTextureCoordinate* TextureCoordinate630 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate630->setPoint(new float[74]{0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407});
IndexedFaceSet628->setTexCoord(*TextureCoordinate630);

Shape624->setGeometry(IndexedFaceSet628);

Transform623->addChildren(*Shape624);

HAnimSegment622->addChildren(*Transform623);

HAnimJoint621->addChildren(*HAnimSegment622);

CHAnimJoint* HAnimJoint631 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint631->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint631->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint631->setCenter(new float[3]{8.477,26.07,-0.2214});
HAnimJoint631->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint631->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment632 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment632->setName("l_carpal_middle_phalanx_3");
HAnimSegment632->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform633 = (CTransform *)(m_pScene.createNode("Transform"));
Transform633->setTranslation(new float[3]{8.477,26.07,-0.2214});
CShape* Shape634 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance635 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material636 = (CMaterial *)(m_pScene.createNode("Material"));
Material636->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance635->setMaterial(*Material636);

CImageTexture* ImageTexture637 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture637->setUSE("JinLOA3TextureAtlas");
Appearance635->setTexture(*ImageTexture637);

Shape634->setAppearance(*Appearance635);

CIndexedFaceSet* IndexedFaceSet638 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet638->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet638->setCreaseAngle(3.14159);
IndexedFaceSet638->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate639 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate639->setPoint(new float[87]{-0.4389,-1.268,0.089,-0.4327,-1.265,-0.1296,-0.2401,-1.325,0.0971,-0.234,-1.323,-0.1215,-0.5481,-1.062,0.0865,-0.4036,-1.106,0.2566,-0.2049,-1.164,0.2647,-0.0512,-1.205,0.1068,-0.045,-1.203,-0.1118,-0.1894,-1.158,-0.2818,-0.3882,-1.101,-0.2899,-0.5419,-1.059,-0.132,-0.3388,-0.1526,0.1159,-0.1909,-0.1984,0.2901,0.025,-0.2608,0.2989,0.1825,-0.3032,0.1372,0.1892,-0.3008,-0.1003,0.0412,-0.2549,-0.2744,-0.1747,-0.1925,-0.2833,-0.3321,-0.1501,-0.1216,-0.2096,0.117,0.0982,-0.0948,0.0814,0.2333,0.0727,0.033,0.2402,0.1949,0.0001,0.1147,0.2001,0.002,-0.0696,0.0853,0.0376,-0.2048,-0.0823,0.086,-0.2116,-0.2044,0.1189,-0.0861,0.0097,0.1188,0.0156});
IndexedFaceSet638->setCoord(*Coordinate639);

CTextureCoordinate* TextureCoordinate640 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate640->setPoint(new float[58]{0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301});
IndexedFaceSet638->setTexCoord(*TextureCoordinate640);

Shape634->setGeometry(IndexedFaceSet638);

Transform633->addChildren(*Shape634);

HAnimSegment632->addChildren(*Transform633);

HAnimJoint631->addChildren(*HAnimSegment632);

CHAnimJoint* HAnimJoint641 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint641->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint641->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint641->setCenter(new float[3]{8.25,25.030001,-0.2187});
HAnimJoint641->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint641->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment642 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment642->setName("l_carpal_distal_phalanx_3");
HAnimSegment642->setDEF("hanim_l_carpal_distal_phalanx_3");
CTransform* Transform643 = (CTransform *)(m_pScene.createNode("Transform"));
Transform643->setTranslation(new float[3]{8.25,25.030001,-0.2187});
CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance645 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material646 = (CMaterial *)(m_pScene.createNode("Material"));
Material646->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance645->setMaterial(*Material646);

CImageTexture* ImageTexture647 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture647->setUSE("JinLOA3TextureAtlas");
Appearance645->setTexture(*ImageTexture647);

Shape644->setAppearance(*Appearance645);

CIndexedFaceSet* IndexedFaceSet648 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet648->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet648->setCreaseAngle(3.14159);
IndexedFaceSet648->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate649 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate649->setPoint(new float[87]{-0.631,-1.169,0.0421,-0.6256,-1.167,-0.1475,-0.4691,-1.25,0.0483,-0.4637,-1.248,-0.1413,-0.6864,-0.9557,0.0421,-0.569,-1.018,0.1889,-0.4071,-1.099,0.1951,-0.2817,-1.158,0.0576,-0.2763,-1.156,-0.1319,-0.3937,-1.094,-0.2788,-0.5556,-1.013,-0.285,-0.681,-0.9537,-0.1474,-0.3504,-0.0919,0.0851,-0.2187,-0.1616,0.2498,-0.026,-0.2579,0.2572,0.1147,-0.3243,0.1029,0.121,-0.322,-0.1226,-0.0106,-0.2523,-0.2873,-0.2033,-0.156,-0.2946,-0.344,-0.0896,-0.1404,-0.2414,0.0637,0.0753,-0.128,0.0061,0.2155,0.0399,-0.0652,0.2197,0.161,-0.1101,0.0888,0.1675,-0.1027,-0.0988,0.0577,-0.0458,-0.2359,-0.106,0.0275,-0.2439,-0.2307,0.0733,-0.1162,0.0079,0.0731,-0.0112});
IndexedFaceSet648->setCoord(*Coordinate649);

CTextureCoordinate* TextureCoordinate650 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate650->setPoint(new float[58]{0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199});
IndexedFaceSet648->setTexCoord(*TextureCoordinate650);

Shape644->setGeometry(IndexedFaceSet648);

Transform643->addChildren(*Shape644);

HAnimSegment642->addChildren(*Transform643);

HAnimJoint641->addChildren(*HAnimSegment642);

HAnimJoint631->addChildren(*HAnimJoint641);

HAnimJoint621->addChildren(*HAnimJoint631);

HAnimJoint611->addChildren(*HAnimJoint621);

HAnimJoint531->addChildren(*HAnimJoint611);

CHAnimJoint* HAnimJoint651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint651->setName("l_carpometacarpal_4");
HAnimJoint651->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint651->setCenter(new float[3]{8.339,28.57,-0.9243});
HAnimJoint651->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint651->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment652 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment652->setName("l_metacarpal_4");
HAnimSegment652->setDEF("hanim_l_metacarpal_4");
CTransform* Transform653 = (CTransform *)(m_pScene.createNode("Transform"));
Transform653->setTranslation(new float[3]{8.339,28.57,-0.9243});
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance655 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material656 = (CMaterial *)(m_pScene.createNode("Material"));
Material656->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance655->setMaterial(*Material656);

CImageTexture* ImageTexture657 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture657->setUSE("JinLOA3TextureAtlas");
Appearance655->setTexture(*ImageTexture657);

Shape654->setAppearance(*Appearance655);

CIndexedFaceSet* IndexedFaceSet658 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet658->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet658->setCreaseAngle(3.14159);
IndexedFaceSet658->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate659 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate659->setPoint(new float[111]{-0.014,-1.366,0.0295,-0.0298,-1.354,-0.1885,0.2211,-1.344,0.0143,0.2053,-1.332,-0.2037,-0.205,-1.209,0.0528,-0.0169,-1.202,0.2049,0.2182,-1.181,0.1897,0.3826,-1.156,0.0148,0.3668,-1.144,-0.2032,0.1787,-1.151,-0.3553,-0.0564,-1.172,-0.3401,-0.2209,-1.197,-0.1652,-0.3293,-0.2545,0.1423,-0.1183,-0.2468,0.3129,0.1614,-0.2216,0.2949,0.3458,-0.1936,0.0987,0.327,-0.1793,-0.1607,0.116,-0.187,-0.3313,-0.1637,-0.2122,-0.3132,-0.3482,-0.2402,-0.117,-0.3702,-0.1061,0.1656,-0.1412,-0.0977,0.3507,0.1622,-0.0704,0.3311,0.3623,-0.04,0.1183,0.3419,-0.0245,-0.1631,0.1129,-0.0329,-0.3482,-0.1905,-0.0602,-0.3286,-0.3906,-0.0905,-0.1158,-0.2788,0.0575,0.1279,-0.1169,0.0634,0.2588,0.0976,0.0827,0.2449,0.2391,0.1042,0.0944,0.2247,0.1152,-0.1045,0.0628,0.1093,-0.2354,-0.1518,0.0899,-0.2215,-0.2933,0.0685,-0.0711,-0.0325,0.1491,0.016});
IndexedFaceSet658->setCoord(*Coordinate659);

CTextureCoordinate* TextureCoordinate660 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate660->setPoint(new float[74]{0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539});
IndexedFaceSet658->setTexCoord(*TextureCoordinate660);

Shape654->setGeometry(IndexedFaceSet658);

Transform653->addChildren(*Shape654);

HAnimSegment652->addChildren(*Transform653);

HAnimJoint651->addChildren(*HAnimSegment652);

CHAnimJoint* HAnimJoint661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint661->setName("l_metacarpophalangeal_4");
HAnimJoint661->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint661->setCenter(new float[3]{8.428,27.299999,-0.9985});
HAnimJoint661->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint661->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment662 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment662->setName("l_carpal_proximal_phalanx_4");
HAnimSegment662->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform663 = (CTransform *)(m_pScene.createNode("Transform"));
Transform663->setTranslation(new float[3]{8.428,27.299999,-0.9985});
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance665 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material666 = (CMaterial *)(m_pScene.createNode("Material"));
Material666->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance665->setMaterial(*Material666);

CImageTexture* ImageTexture667 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture667->setUSE("JinLOA3TextureAtlas");
Appearance665->setTexture(*ImageTexture667);

Shape664->setAppearance(*Appearance665);

CIndexedFaceSet* IndexedFaceSet668 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet668->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet668->setCreaseAngle(3.14159);
IndexedFaceSet668->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate669 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate669->setPoint(new float[111]{-0.1847,-1.253,0.0467,-0.1998,-1.241,-0.1693,0.0227,-1.271,0.0316,0.0076,-1.259,-0.1844,-0.3279,-1.08,0.0673,-0.161,-1.102,0.2179,0.0464,-1.12,0.2028,0.1906,-1.124,0.0295,0.1754,-1.112,-0.1865,0.0085,-1.09,-0.3372,-0.1989,-1.072,-0.3221,-0.3431,-1.068,-0.1487,-0.2967,-0.1902,0.1418,-0.1095,-0.215,0.3108,0.1373,-0.2358,0.2929,0.299,-0.2404,0.0984,0.281,-0.2262,-0.1586,0.0938,-0.2014,-0.3276,-0.153,-0.1807,-0.3096,-0.3147,-0.176,-0.1151,-0.3133,-0.0482,0.1642,-0.1083,-0.0753,0.3493,0.1619,-0.0981,0.3296,0.339,-0.1032,0.1167,0.3192,-0.0876,-0.1647,0.1142,-0.0605,-0.3498,-0.156,-0.0377,-0.3301,-0.3331,-0.0327,-0.1172,-0.2099,0.0863,0.1241,-0.0649,0.0671,0.255,0.1261,0.051,0.2411,0.2514,0.0474,0.0905,0.2374,0.0585,-0.1085,0.0924,0.0776,-0.2393,-0.0986,0.0937,-0.2254,-0.2239,0.0973,-0.0749,0.0182,0.1305,0.0112});
IndexedFaceSet668->setCoord(*Coordinate669);

CTextureCoordinate* TextureCoordinate670 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate670->setPoint(new float[74]{0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418});
IndexedFaceSet668->setTexCoord(*TextureCoordinate670);

Shape664->setGeometry(IndexedFaceSet668);

Transform663->addChildren(*Shape664);

HAnimSegment662->addChildren(*Transform663);

HAnimJoint661->addChildren(*HAnimSegment662);

CHAnimJoint* HAnimJoint671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint671->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint671->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint671->setCenter(new float[3]{8.428,26.290001,-1.034});
HAnimJoint671->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint671->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment672 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment672->setName("l_carpal_middle_phalanx_4");
HAnimSegment672->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform673 = (CTransform *)(m_pScene.createNode("Transform"));
Transform673->setTranslation(new float[3]{8.428,26.290001,-1.034});
CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance675 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material676 = (CMaterial *)(m_pScene.createNode("Material"));
Material676->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance675->setMaterial(*Material676);

CImageTexture* ImageTexture677 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture677->setUSE("JinLOA3TextureAtlas");
Appearance675->setTexture(*ImageTexture677);

Shape674->setAppearance(*Appearance675);

CIndexedFaceSet* IndexedFaceSet678 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet678->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet678->setCreaseAngle(3.14159);
IndexedFaceSet678->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate679 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate679->setPoint(new float[87]{-0.412,-1.137,0.0335,-0.4261,-1.125,-0.1679,-0.2243,-1.187,0.0176,-0.2385,-1.176,-0.1838,-0.5153,-0.9493,0.0522,-0.3639,-0.9958,0.1913,-0.1762,-1.047,0.1754,-0.0461,-1.076,0.0125,-0.0602,-1.065,-0.1888,-0.2116,-1.019,-0.3279,-0.3992,-0.9679,-0.312,-0.5294,-0.9381,-0.1491,-0.3178,-0.1177,0.1,-0.1627,-0.1653,0.2425,0.0412,-0.2206,0.2252,0.1745,-0.2511,0.0583,0.1591,-0.239,-0.1604,0.0041,-0.1914,-0.3029,-0.1998,-0.1361,-0.2856,-0.3331,-0.1056,-0.1188,-0.1985,0.1307,0.0829,-0.0782,0.0937,0.1934,0.08,0.0508,0.18,0.1835,0.0271,0.0505,0.1716,0.0365,-0.1192,0.0513,0.0735,-0.2298,-0.1069,0.1164,-0.2164,-0.2104,0.1401,-0.0869,0.0002,0.1379,-0.0157});
IndexedFaceSet678->setCoord(*Coordinate679);

CTextureCoordinate* TextureCoordinate680 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate680->setPoint(new float[58]{0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323});
IndexedFaceSet678->setTexCoord(*TextureCoordinate680);

Shape674->setGeometry(IndexedFaceSet678);

Transform673->addChildren(*Shape674);

HAnimSegment672->addChildren(*Transform673);

HAnimJoint671->addChildren(*HAnimSegment672);

CHAnimJoint* HAnimJoint681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint681->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint681->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint681->setCenter(new float[3]{8.192,25.309999,-1.124});
HAnimJoint681->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint681->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment682 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment682->setName("l_carpal_distal_phalanx_4");
HAnimSegment682->setDEF("hanim_l_carpal_distal_phalanx_4");
CTransform* Transform683 = (CTransform *)(m_pScene.createNode("Transform"));
Transform683->setTranslation(new float[3]{8.192,25.309999,-1.124});
CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance685 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material686 = (CMaterial *)(m_pScene.createNode("Material"));
Material686->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance685->setMaterial(*Material686);

CImageTexture* ImageTexture687 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture687->setUSE("JinLOA3TextureAtlas");
Appearance685->setTexture(*ImageTexture687);

Shape684->setAppearance(*Appearance685);

CIndexedFaceSet* IndexedFaceSet688 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet688->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet688->setCreaseAngle(3.14159);
IndexedFaceSet688->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate689 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate689->setPoint(new float[87]{-0.5436,-1.006,0.082,-0.5559,-0.9964,-0.0922,-0.3911,-1.079,0.0671,-0.4033,-1.069,-0.1071,-0.596,-0.8116,0.0978,-0.4725,-0.8732,0.2172,-0.3199,-0.9458,0.2024,-0.2147,-0.9931,0.0605,-0.2269,-0.9834,-0.1137,-0.3505,-0.9218,-0.2332,-0.503,-0.8491,-0.2183,-0.6083,-0.8019,-0.0765,-0.2786,-0.0205,0.1427,-0.14,-0.0896,0.2768,0.0415,-0.176,0.2591,0.1596,-0.229,0.1,0.1451,-0.2175,-0.1073,0.0064,-0.1484,-0.2413,-0.1751,-0.062,-0.2236,-0.2931,-0.009,-0.0645,-0.1776,0.1232,0.1297,-0.0583,0.0659,0.2438,0.0996,0.0023,0.2269,0.2013,-0.0322,0.0923,0.1903,-0.0176,-0.08,0.0748,0.0389,-0.1916,-0.0796,0.1047,-0.1786,-0.185,0.14,-0.0465,0.0484,0.1379,0.025});
IndexedFaceSet688->setCoord(*Coordinate689);

CTextureCoordinate* TextureCoordinate690 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate690->setPoint(new float[58]{0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232});
IndexedFaceSet688->setTexCoord(*TextureCoordinate690);

Shape684->setGeometry(IndexedFaceSet688);

Transform683->addChildren(*Shape684);

HAnimSegment682->addChildren(*Transform683);

HAnimJoint681->addChildren(*HAnimSegment682);

HAnimJoint671->addChildren(*HAnimJoint681);

HAnimJoint661->addChildren(*HAnimJoint671);

HAnimJoint651->addChildren(*HAnimJoint661);

HAnimJoint531->addChildren(*HAnimJoint651);

CHAnimJoint* HAnimJoint691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint691->setName("l_carpometacarpal_5");
HAnimJoint691->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint691->setCenter(new float[3]{8.197,28.370001,-1.528});
HAnimJoint691->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint691->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment692 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment692->setName("l_metacarpal_5");
HAnimSegment692->setDEF("hanim_l_metacarpal_5");
CTransform* Transform693 = (CTransform *)(m_pScene.createNode("Transform"));
Transform693->setTranslation(new float[3]{8.197,28.370001,-1.528});
CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance695 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material696 = (CMaterial *)(m_pScene.createNode("Material"));
Material696->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance695->setMaterial(*Material696);

CImageTexture* ImageTexture697 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture697->setUSE("JinLOA3TextureAtlas");
Appearance695->setTexture(*ImageTexture697);

Shape694->setAppearance(*Appearance695);

CIndexedFaceSet* IndexedFaceSet698 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet698->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet698->setCreaseAngle(3.14159);
IndexedFaceSet698->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate699 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate699->setPoint(new float[111]{0.0463,-0.9645,-0.0622,0.0267,-0.942,-0.253,0.2519,-0.9328,-0.0794,0.2324,-0.9103,-0.2702,-0.1254,-0.8655,-0.031,0.0435,-0.8586,0.0992,0.2492,-0.8269,0.082,0.3888,-0.7862,-0.074,0.3693,-0.7638,-0.2648,0.2004,-0.7707,-0.395,-0.0053,-0.8024,-0.3779,-0.1449,-0.843,-0.2218,-0.2585,-0.1911,0.0918,-0.069,-0.1834,0.2379,0.1757,-0.1456,0.2175,0.3323,-0.1,0.0425,0.309,-0.0733,-0.1846,0.1196,-0.0811,-0.3307,-0.1251,-0.1188,-0.3102,-0.2817,-0.1644,-0.1352,-0.2978,-0.0883,0.1196,-0.0923,-0.0799,0.2781,0.1732,-0.0389,0.2559,0.343,0.0105,0.066,0.3178,0.0395,-0.1803,0.1123,0.0311,-0.3387,-0.1532,-0.0098,-0.3166,-0.3231,-0.0593,-0.1267,-0.223,0.0382,0.0917,-0.0776,0.0442,0.2038,0.1101,0.0732,0.1881,0.2302,0.1081,0.0539,0.2124,0.1286,-0.1203,0.0671,0.1227,-0.2324,-0.1207,0.0937,-0.2167,-0.2408,0.0588,-0.0824,-0.0116,0.1281,-0.0076});
IndexedFaceSet698->setCoord(*Coordinate699);

CTextureCoordinate* TextureCoordinate700 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate700->setPoint(new float[74]{0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653});
IndexedFaceSet698->setTexCoord(*TextureCoordinate700);

Shape694->setGeometry(IndexedFaceSet698);

Transform693->addChildren(*Shape694);

HAnimSegment692->addChildren(*Transform693);

HAnimJoint691->addChildren(*HAnimSegment692);

CHAnimJoint* HAnimJoint701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint701->setName("l_metacarpophalangeal_5");
HAnimJoint701->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint701->setCenter(new float[3]{8.334,27.5,-1.701});
HAnimJoint701->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint701->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment702 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment702->setName("l_carpal_proximal_phalanx_5");
HAnimSegment702->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform703 = (CTransform *)(m_pScene.createNode("Transform"));
Transform703->setTranslation(new float[3]{8.334,27.5,-1.701});
CShape* Shape704 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance705 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material706 = (CMaterial *)(m_pScene.createNode("Material"));
Material706->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance705->setMaterial(*Material706);

CImageTexture* ImageTexture707 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture707->setUSE("JinLOA3TextureAtlas");
Appearance705->setTexture(*ImageTexture707);

Shape704->setAppearance(*Appearance705);

CIndexedFaceSet* IndexedFaceSet708 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet708->setCoordIndex(new int[280]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
IndexedFaceSet708->setCreaseAngle(3.14159);
IndexedFaceSet708->setTexCoordIndex(new int[280]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
CCoordinate* Coordinate709 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate709->setPoint(new float[111]{-0.1298,-0.9343,0.012,-0.1487,-0.912,-0.1771,0.0526,-0.9323,-0.0063,0.0337,-0.91,-0.1954,-0.2599,-0.8204,0.0405,-0.1089,-0.8356,0.1686,0.0735,-0.8336,0.1504,0.1961,-0.8154,-0.0051,0.1772,-0.793,-0.1942,0.0262,-0.7778,-0.3224,-0.1562,-0.7798,-0.3041,-0.2788,-0.7981,-0.1486,-0.2549,-0.1812,0.1442,-0.0856,-0.1983,0.2879,0.1314,-0.1959,0.2662,0.269,-0.1755,0.0918,0.2465,-0.1489,-0.1332,0.0771,-0.1318,-0.2769,-0.1399,-0.1342,-0.2552,-0.2774,-0.1547,-0.0808,-0.2729,-0.0814,0.1704,-0.0874,-0.1001,0.3278,0.1502,-0.0975,0.304,0.3008,-0.0751,0.113,0.2762,-0.046,-0.1333,0.0907,-0.0273,-0.2907,-0.1469,-0.0299,-0.2669,-0.2975,-0.0523,-0.0759,-0.1866,0.0252,0.139,-0.0555,0.012,0.2502,0.1126,0.0138,0.2334,0.2191,0.0297,0.0984,0.2016,0.0502,-0.0758,0.0705,0.0635,-0.1871,-0.0975,0.0616,-0.1703,-0.204,0.0458,-0.0352,0.0099,0.0797,0.0369});
IndexedFaceSet708->setCoord(*Coordinate709);

CTextureCoordinate* TextureCoordinate710 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate710->setPoint(new float[74]{0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444});
IndexedFaceSet708->setTexCoord(*TextureCoordinate710);

Shape704->setGeometry(IndexedFaceSet708);

Transform703->addChildren(*Shape704);

HAnimSegment702->addChildren(*Transform703);

HAnimJoint701->addChildren(*HAnimSegment702);

CHAnimJoint* HAnimJoint711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint711->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint711->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint711->setCenter(new float[3]{8.338,26.780001,-1.768});
HAnimJoint711->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint711->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment712 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment712->setName("l_carpal_middle_phalanx_5");
HAnimSegment712->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform713 = (CTransform *)(m_pScene.createNode("Transform"));
Transform713->setTranslation(new float[3]{8.338,26.780001,-1.768});
CShape* Shape714 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance715 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material716 = (CMaterial *)(m_pScene.createNode("Material"));
Material716->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance715->setMaterial(*Material716);

CImageTexture* ImageTexture717 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture717->setUSE("JinLOA3TextureAtlas");
Appearance715->setTexture(*ImageTexture717);

Shape714->setAppearance(*Appearance715);

CIndexedFaceSet* IndexedFaceSet718 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet718->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet718->setCreaseAngle(3.14159);
IndexedFaceSet718->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate719 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate719->setPoint(new float[87]{-0.3103,-0.8684,0.0017,-0.3279,-0.8476,-0.1746,-0.1444,-0.8917,-0.0183,-0.162,-0.8709,-0.1946,-0.4057,-0.7413,0.0284,-0.268,-0.7744,0.1456,-0.1021,-0.7977,0.1256,0.0092,-0.7996,-0.0215,-0.0085,-0.7788,-0.1978,-0.1461,-0.7457,-0.315,-0.3121,-0.7224,-0.295,-0.4234,-0.7205,-0.1478,-0.2537,-0.1316,0.1027,-0.1126,-0.1655,0.2227,0.0677,-0.1909,0.201,0.1817,-0.1928,0.0502,0.1625,-0.1702,-0.1412,0.0215,-0.1363,-0.2613,-0.1588,-0.1109,-0.2396,-0.2728,-0.109,-0.0888,-0.156,0.0566,0.096,-0.0465,0.0303,0.1892,0.0934,0.0106,0.1723,0.1818,0.0091,0.0553,0.1669,0.0266,-0.0933,0.0575,0.0529,-0.1864,-0.0824,0.0726,-0.1696,-0.1709,0.0741,-0.0526,0.016,0.0815,0.0057});
IndexedFaceSet718->setCoord(*Coordinate719);

CTextureCoordinate* TextureCoordinate720 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate720->setPoint(new float[58]{0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376});
IndexedFaceSet718->setTexCoord(*TextureCoordinate720);

Shape714->setGeometry(IndexedFaceSet718);

Transform713->addChildren(*Shape714);

HAnimSegment712->addChildren(*Transform713);

HAnimJoint711->addChildren(*HAnimSegment712);

CHAnimJoint* HAnimJoint721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint721->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint721->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint721->setCenter(new float[3]{8.153,26.040001,-1.886});
HAnimJoint721->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint721->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment722 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment722->setName("l_carpal_distal_phalanx_5");
HAnimSegment722->setDEF("hanim_l_carpal_distal_phalanx_5");
CTransform* Transform723 = (CTransform *)(m_pScene.createNode("Transform"));
Transform723->setTranslation(new float[3]{8.153,26.040001,-1.886});
CShape* Shape724 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance725 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material726 = (CMaterial *)(m_pScene.createNode("Material"));
Material726->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance725->setMaterial(*Material726);

CImageTexture* ImageTexture727 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture727->setUSE("JinLOA3TextureAtlas");
Appearance725->setTexture(*ImageTexture727);

Shape724->setAppearance(*Appearance725);

CIndexedFaceSet* IndexedFaceSet728 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet728->setCoordIndex(new int[216]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
IndexedFaceSet728->setCreaseAngle(3.14159);
IndexedFaceSet728->setTexCoordIndex(new int[216]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
CCoordinate* Coordinate729 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate729->setPoint(new float[87]{-0.4265,-0.7665,0.0531,-0.4417,-0.7485,-0.0994,-0.2908,-0.8079,0.0337,-0.306,-0.7899,-0.1188,-0.4775,-0.6307,0.0765,-0.3642,-0.6752,0.1764,-0.2285,-0.7166,0.157,-0.1382,-0.7341,0.0281,-0.1534,-0.7161,-0.1244,-0.2667,-0.6716,-0.2242,-0.4024,-0.6302,-0.2049,-0.4927,-0.6127,-0.076,-0.2189,-0.0422,0.1441,-0.0919,-0.0921,0.2561,0.0696,-0.1414,0.2331,0.1709,-0.161,0.0886,0.1528,-0.1396,-0.0929,0.0258,-0.0897,-0.2049,-0.1357,-0.0404,-0.1819,-0.2371,-0.0207,-0.0373,-0.1344,0.069,0.1368,-0.0252,0.0277,0.2322,0.1149,-0.0067,0.2114,0.202,-0.0158,0.0895,0.1878,0.0058,-0.0611,0.082,0.0466,-0.1545,-0.0552,0.083,-0.137,-0.1456,0.0926,-0.0171,0.0613,0.1015,0.0409});
IndexedFaceSet728->setCoord(*Coordinate729);

CTextureCoordinate* TextureCoordinate730 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate730->setPoint(new float[58]{0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309});
IndexedFaceSet728->setTexCoord(*TextureCoordinate730);

Shape724->setGeometry(IndexedFaceSet728);

Transform723->addChildren(*Shape724);

HAnimSegment722->addChildren(*Transform723);

HAnimJoint721->addChildren(*HAnimSegment722);

HAnimJoint711->addChildren(*HAnimJoint721);

HAnimJoint701->addChildren(*HAnimJoint711);

HAnimJoint691->addChildren(*HAnimJoint701);

HAnimJoint531->addChildren(*HAnimJoint691);

HAnimJoint521->addChildren(*HAnimJoint531);

HAnimJoint511->addChildren(*HAnimJoint521);

HAnimJoint501->addChildren(*HAnimJoint511);

HAnimJoint491->addChildren(*HAnimJoint501);

HAnimJoint331->addChildren(*HAnimJoint491);

CHAnimJoint* HAnimJoint731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint731->setName("r_acromioclavicular");
HAnimJoint731->setDEF("hanim_r_acromioclavicular");
HAnimJoint731->setCenter(new float[3]{-1.71,52.82,-0.6127});
HAnimJoint731->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint731->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment732 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment732->setName("r_clavicle");
HAnimSegment732->setDEF("hanim_r_clavicle");
CTransform* Transform733 = (CTransform *)(m_pScene.createNode("Transform"));
Transform733->setTranslation(new float[3]{-1.71,52.82,-0.6127});
CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance735 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material736 = (CMaterial *)(m_pScene.createNode("Material"));
Material736->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance735->setMaterial(*Material736);

CImageTexture* ImageTexture737 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture737->setUSE("JinLOA3TextureAtlas");
Appearance735->setTexture(*ImageTexture737);

Shape734->setAppearance(*Appearance735);

CIndexedFaceSet* IndexedFaceSet738 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet738->setCoordIndex(new int[104]{9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
IndexedFaceSet738->setCreaseAngle(3.14159);
IndexedFaceSet738->setTexCoordIndex(new int[104]{9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
CCoordinate* Coordinate739 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate739->setPoint(new float[45]{-4.99,0.104,-0.8644,-5.073,0.4993,0.047,-4.706,0.1695,1.198,-4.631,-1.819,1.104,-4.586,-1.648,-0.1248,-3.376,0.3884,1.771,-3.891,0.989,-0.0537,-4.193,-2.49,-0.5713,-4.388,-2.49,1.429,-3.761,0.3238,-1.692,0.1237,0.6312,-0.1883,0.1237,0.3007,-0.9426,0.1237,-1.418,-0.2577,0.1237,-1.392,0.6264,0.1237,0.2586,0.8179});
IndexedFaceSet738->setCoord(*Coordinate739);

CTextureCoordinate* TextureCoordinate740 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate740->setPoint(new float[30]{0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926});
IndexedFaceSet738->setTexCoord(*TextureCoordinate740);

Shape734->setGeometry(IndexedFaceSet738);

Transform733->addChildren(*Shape734);

HAnimSegment732->addChildren(*Transform733);

HAnimJoint731->addChildren(*HAnimSegment732);

CHAnimJoint* HAnimJoint741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint741->setName("r_sternoclavicular");
HAnimJoint741->setDEF("hanim_r_sternoclavicular");
HAnimJoint741->setCenter(new float[3]{-5.464,52.060001,-0.5732});
HAnimJoint741->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint741->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment742 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment742->setName("r_scapula");
HAnimSegment742->setDEF("hanim_r_scapula");
CTransform* Transform743 = (CTransform *)(m_pScene.createNode("Transform"));
Transform743->setTranslation(new float[3]{-5.464,52.060001,-0.5732});
CShape* Shape744 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance745 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material746 = (CMaterial *)(m_pScene.createNode("Material"));
Material746->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance745->setMaterial(*Material746);

CImageTexture* ImageTexture747 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture747->setUSE("JinLOA3TextureAtlas");
Appearance745->setTexture(*ImageTexture747);

Shape744->setAppearance(*Appearance745);

CIndexedFaceSet* IndexedFaceSet748 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet748->setCoordIndex(new int[112]{5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
IndexedFaceSet748->setCreaseAngle(3.14159);
IndexedFaceSet748->setTexCoordIndex(new int[112]{5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
CCoordinate* Coordinate749 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate749->setPoint(new float[48]{-1.935,1.466,-0.0932,-1.515,0.6492,-1.732,-1.534,0.7105,1.619,0.3782,1.139,1.732,-0.1374,1.74,-0.0932,-0.0076,1.074,-1.731,-0.8341,-1.572,1.39,-0.4391,-1.74,-0.6109,-0.8275,-1.58,-0.6098,-0.6342,-1.74,1.389,1.237,1.407,-0.0712,1.547,0.8515,-1.142,0.7525,-1.603,-0.4744,0.7511,-1.595,1.16,1.51,1.034,1.296,1.59,-0.0185,0.1351});
IndexedFaceSet748->setCoord(*Coordinate749);

CTextureCoordinate* TextureCoordinate750 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate750->setPoint(new float[40]{0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618});
IndexedFaceSet748->setTexCoord(*TextureCoordinate750);

Shape744->setGeometry(IndexedFaceSet748);

Transform743->addChildren(*Shape744);

HAnimSegment742->addChildren(*Transform743);

HAnimJoint741->addChildren(*HAnimSegment742);

CHAnimJoint* HAnimJoint751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint751->setName("r_shoulder");
HAnimJoint751->setDEF("hanim_r_shoulder");
HAnimJoint751->setCenter(new float[3]{-7.336,51.48,-0.1452});
HAnimJoint751->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint751->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment752 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment752->setName("r_upperarm");
HAnimSegment752->setDEF("hanim_r_upperarm");
CTransform* Transform753 = (CTransform *)(m_pScene.createNode("Transform"));
Transform753->setTranslation(new float[3]{-7.336,51.48,-0.1452});
CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance755 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material756 = (CMaterial *)(m_pScene.createNode("Material"));
Material756->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance755->setMaterial(*Material756);

CImageTexture* ImageTexture757 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture757->setUSE("JinLOA3TextureAtlas");
Appearance755->setTexture(*ImageTexture757);

Shape754->setAppearance(*Appearance755);

CIndexedFaceSet* IndexedFaceSet758 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet758->setCoordIndex(new int[304]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
IndexedFaceSet758->setCreaseAngle(3.14159);
IndexedFaceSet758->setTexCoordIndex(new int[304]{1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
CCoordinate* Coordinate759 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate759->setPoint(new float[120]{-1.164,1.767,-1.68,-2.32,1.756,0.0337,-1.047,1.768,1.663,0.895,1.785,0.9556,0.8229,1.784,-1.11,-1.382,0.4997,-2.31,-2.978,0.4855,0.057,-1.221,0.5011,2.307,1.462,0.525,1.33,1.362,0.5241,-1.523,-1.36,-2.014,-2.31,-2.956,-2.028,0.057,-1.198,-2.012,2.307,1.484,-1.988,1.33,1.384,-1.989,-1.523,-1.398,-3.089,-2.442,-3.087,-3.104,0.0619,-1.228,-3.087,2.442,1.61,-3.062,1.409,1.505,-3.063,-1.61,-0.8845,-1.238,-1.939,-2.105,-1.248,-0.4543,-1.473,-1.243,1.629,0.1375,-1.229,1.432,0.5011,-1.225,-0.7734,-0.9027,-7.045,-1.569,-2.17,-7.056,-0.378,-1.514,-7.051,1.293,0.1588,-7.036,1.135,0.5365,-7.032,-0.634,-0.9066,-11.1,-1.511,-2.127,-11.11,-0.3651,-1.495,-11.1,1.243,0.1154,-11.09,1.091,0.4791,-11.08,-0.6115,-0.852,-11.65,-0.8985,-1.567,-11.65,-0.2267,-1.197,-11.65,0.716,-0.2531,-11.64,0.6268,-0.0399,-11.64,-0.3711});
IndexedFaceSet758->setCoord(*Coordinate759);

CTextureCoordinate* TextureCoordinate760 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate760->setPoint(new float[124]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114});
IndexedFaceSet758->setTexCoord(*TextureCoordinate760);

Shape754->setGeometry(IndexedFaceSet758);

Transform753->addChildren(*Shape754);

HAnimSegment752->addChildren(*Transform753);

HAnimJoint751->addChildren(*HAnimSegment752);

CHAnimJoint* HAnimJoint761 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint761->setName("r_elbow");
HAnimJoint761->setDEF("hanim_r_elbow");
HAnimJoint761->setCenter(new float[3]{-8.093,40.380001,-0.2502});
HAnimJoint761->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint761->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment762->setName("r_forearm");
HAnimSegment762->setDEF("hanim_r_forearm");
CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
Transform763->setTranslation(new float[3]{-8.093,40.380001,-0.2502});
CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance765 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material766 = (CMaterial *)(m_pScene.createNode("Material"));
Material766->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance765->setMaterial(*Material766);

CImageTexture* ImageTexture767 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture767->setUSE("JinLOA3TextureAtlas");
Appearance765->setTexture(*ImageTexture767);

Shape764->setAppearance(*Appearance765);

CIndexedFaceSet* IndexedFaceSet768 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet768->setCoordIndex(new int[184]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
IndexedFaceSet768->setCreaseAngle(3.14159);
IndexedFaceSet768->setTexCoordIndex(new int[184]{26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
CCoordinate* Coordinate769 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate769->setPoint(new float[75]{-0.215,0.3047,-1.152,-1.155,0.2966,-0.2588,-0.6199,0.3013,1.04,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.625,-1.472,-0.8561,-0.4271,-0.7164,-0.8496,1.625,1.079,-0.8342,1.482,1.433,-0.8312,-0.6588,-0.1328,-3.5,-1.607,-1.551,-3.513,-0.4225,-0.781,-2.925,1.61,1.136,-2.909,1.468,1.551,-3.486,-0.6519,-0.0592,-8.713,-1.437,-1.093,-8.722,-0.1279,-0.5047,-8.716,1.51,0.8932,-8.704,1.377,1.169,-8.702,-0.3428,-0.0092,-9.336,-0.8855,-0.7154,-9.342,0.0084,-0.3135,-9.339,1.043,0.6412,-9.331,0.9519,0.8292,-9.329,-0.1383});
IndexedFaceSet768->setCoord(*Coordinate769);

CTextureCoordinate* TextureCoordinate770 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate770->setPoint(new float[74]{0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674});
IndexedFaceSet768->setTexCoord(*TextureCoordinate770);

Shape764->setGeometry(IndexedFaceSet768);

Transform763->addChildren(*Shape764);

HAnimSegment762->addChildren(*Transform763);

HAnimJoint761->addChildren(*HAnimSegment762);

CHAnimJoint* HAnimJoint771 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint771->setName("r_radiocarpal");
HAnimJoint771->setDEF("hanim_r_radiocarpal");
HAnimJoint771->setCenter(new float[3]{-7.899,31.43,-0.3809});
HAnimJoint771->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint771->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment772->setName("r_carpal");
HAnimSegment772->setDEF("hanim_r_carpal");
CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
Transform773->setTranslation(new float[3]{-7.899,31.43,-0.3809});
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance775 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material776 = (CMaterial *)(m_pScene.createNode("Material"));
Material776->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance775->setMaterial(*Material776);

CImageTexture* ImageTexture777 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture777->setUSE("JinLOA3TextureAtlas");
Appearance775->setTexture(*ImageTexture777);

Shape774->setAppearance(*Appearance775);

CIndexedFaceSet* IndexedFaceSet778 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet778->setCoordIndex(new int[424]{36,41,38,-1,38,37,36,-1,44,54,45,-1,31,30,53,-1,53,4,31,-1,6,7,11,-1,11,10,6,-1,11,32,33,-1,33,10,11,-1,34,11,7,-1,7,24,34,-1,13,27,15,-1,15,17,13,-1,25,35,22,-1,30,20,5,-1,13,32,11,-1,11,34,13,-1,23,29,28,-1,28,22,23,-1,17,15,14,-1,14,16,17,-1,18,19,53,-1,53,5,18,-1,9,17,16,-1,16,8,9,-1,14,15,43,-1,43,42,14,-1,21,33,8,-1,8,16,21,-1,21,23,22,-1,22,35,21,-1,39,38,41,-1,41,40,39,-1,26,24,20,-1,27,26,20,-1,20,12,27,-1,3,43,12,-1,12,30,3,-1,0,25,28,-1,28,54,0,-1,13,17,9,-1,9,32,13,-1,28,29,31,-1,29,23,14,-1,14,42,29,-1,16,14,23,-1,23,21,16,-1,30,31,2,-1,2,3,30,-1,8,33,32,-1,32,9,8,-1,33,21,35,-1,35,10,33,-1,35,25,6,-1,6,10,35,-1,13,34,26,-1,26,27,13,-1,34,24,26,-1,1,46,47,-1,47,0,1,-1,25,0,47,-1,47,48,25,-1,25,48,49,-1,49,6,25,-1,6,49,50,-1,50,7,6,-1,24,7,50,-1,50,51,24,-1,24,51,46,-1,46,1,24,-1,2,42,43,-1,43,3,2,-1,15,27,12,-1,12,43,15,-1,29,42,2,-1,2,31,29,-1,18,5,52,-1,52,44,18,-1,28,25,22,-1,18,44,45,-1,45,19,18,-1,1,44,52,-1,52,24,1,-1,45,28,4,-1,28,31,4,-1,45,4,19,-1,37,47,46,-1,46,36,37,-1,48,47,37,-1,37,38,48,-1,39,49,48,-1,48,38,39,-1,40,50,49,-1,49,39,40,-1,51,50,40,-1,40,41,51,-1,36,46,51,-1,51,41,36,-1,24,52,20,-1,52,5,20,-1,53,30,5,-1,53,19,4,-1,54,28,45,-1,44,1,0,-1,0,54,44,-1,20,30,12,-1});
IndexedFaceSet778->setCreaseAngle(3.14159);
IndexedFaceSet778->setTexCoordIndex(new int[424]{0,3,2,-1,2,1,0,-1,4,6,5,-1,8,7,10,-1,10,9,8,-1,12,11,14,-1,14,13,12,-1,14,16,15,-1,15,13,14,-1,17,14,11,-1,11,18,17,-1,20,19,22,-1,22,21,20,-1,23,25,24,-1,7,27,26,-1,20,16,14,-1,14,17,20,-1,28,30,29,-1,29,24,28,-1,21,22,32,-1,32,31,21,-1,33,34,10,-1,10,26,33,-1,35,21,31,-1,31,36,35,-1,32,22,38,-1,38,37,32,-1,39,15,36,-1,36,31,39,-1,39,28,24,-1,24,25,39,-1,40,2,3,-1,3,41,40,-1,42,18,27,-1,19,42,27,-1,27,43,19,-1,44,38,43,-1,43,7,44,-1,45,23,29,-1,29,6,45,-1,20,21,35,-1,35,16,20,-1,29,30,8,-1,30,28,32,-1,32,37,30,-1,31,32,28,-1,28,39,31,-1,7,8,46,-1,46,44,7,-1,36,15,16,-1,16,35,36,-1,15,39,25,-1,25,13,15,-1,25,23,12,-1,12,13,25,-1,20,17,42,-1,42,19,20,-1,17,18,42,-1,47,49,48,-1,48,45,47,-1,23,45,48,-1,48,50,23,-1,23,50,51,-1,51,12,23,-1,12,51,52,-1,52,11,12,-1,18,11,52,-1,52,53,18,-1,18,53,49,-1,49,47,18,-1,46,37,38,-1,38,44,46,-1,22,19,43,-1,43,38,22,-1,30,37,46,-1,46,8,30,-1,33,26,54,-1,54,4,33,-1,29,23,24,-1,33,4,5,-1,5,34,33,-1,47,4,54,-1,54,18,47,-1,5,29,9,-1,29,8,9,-1,5,9,34,-1,1,48,49,-1,49,0,1,-1,50,48,1,-1,1,2,50,-1,40,51,50,-1,50,2,40,-1,41,52,51,-1,51,40,41,-1,53,52,41,-1,41,3,53,-1,0,49,53,-1,53,3,0,-1,18,54,27,-1,54,26,27,-1,10,7,26,-1,10,34,9,-1,6,29,5,-1,4,47,45,-1,45,6,4,-1,27,7,43,-1});
CCoordinate* Coordinate779 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate779->setPoint(new float[165]{-0.615,-0.6885,1.418,0.2519,-0.7698,1.606,-0.894,-4.14,1.405,-0.2357,-4.221,1.472,-0.7106,-2.848,1.537,0.2913,-2.795,1.561,-0.3511,-0.9723,-1.085,0.332,-1.036,-1.083,-0.6255,-3.82,-1.576,-0.076,-3.93,-1.587,-0.5517,-2.055,-1.417,0.1089,-2.163,-1.46,-0.0149,-3.564,0.866,0.0687,-3.436,-0.8707,-0.9147,-4.192,-0.1153,-0.2445,-4.253,-0.1554,-0.7883,-4.028,-0.9461,-0.1878,-4.111,-0.9619,0.1749,-2.558,2.351,-0.5105,-2.795,2.344,0.1613,-2.264,1.005,-0.8473,-3.286,-0.8304,-0.9399,-2.17,-0.0115,-0.979,-3.369,-0.052,0.4715,-0.9186,0.2017,-0.7286,-0.8328,0.1541,0.1459,-2.365,0.1498,0.0501,-3.575,-0.0433,-0.969,-2.127,0.9718,-0.9825,-3.348,0.8866,-0.0909,-3.383,1.556,-0.8371,-3.169,1.547,-0.041,-3.318,-1.568,-0.5921,-3.194,-1.578,0.2264,-2.304,-0.7602,-0.8375,-2.137,-0.8044,0.2818,0.1713,1.187,-0.2277,0.2301,1.179,-0.2277,0.4881,0.2572,-0.1331,0.2707,-0.6889,0.3764,0.2118,-0.6809,0.4614,0.4054,0.2565,-0.9242,-4.241,0.7847,-0.2647,-4.324,0.8047,0.3043,-1.534,2.164,-0.8425,-1.789,2.123,0.201,-0.4603,1.254,-0.3856,-0.405,1.248,-0.4965,-0.283,0.2553,-0.2563,-0.4079,-0.7647,0.3314,-0.4586,-0.758,0.3822,-0.3913,0.2697,0.4485,-1.891,1.52,-0.3893,-2.936,1.555,-0.7623,-1.12,1.731});
IndexedFaceSet778->setCoord(*Coordinate779);

CTextureCoordinate* TextureCoordinate780 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate780->setPoint(new float[110]{0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628});
IndexedFaceSet778->setTexCoord(*TextureCoordinate780);

Shape774->setGeometry(IndexedFaceSet778);

Transform773->addChildren(*Shape774);

HAnimSegment772->addChildren(*Transform773);

HAnimJoint771->addChildren(*HAnimSegment772);

CHAnimJoint* HAnimJoint781 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint781->setName("r_carpometacarpal_1");
HAnimJoint781->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint781->setCenter(new float[3]{-8.205,29.6,1.302});
HAnimJoint781->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint781->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment782->setName("r_metacarpal_1");
HAnimSegment782->setDEF("hanim_r_metacarpal_1");
CTransform* Transform783 = (CTransform *)(m_pScene.createNode("Transform"));
Transform783->setTranslation(new float[3]{-8.205,29.6,1.302});
CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance785 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material786 = (CMaterial *)(m_pScene.createNode("Material"));
Material786->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance785->setMaterial(*Material786);

CImageTexture* ImageTexture787 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture787->setUSE("JinLOA3TextureAtlas");
Appearance785->setTexture(*ImageTexture787);

Shape784->setAppearance(*Appearance785);

CIndexedFaceSet* IndexedFaceSet788 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet788->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet788->setCreaseAngle(3.14159);
IndexedFaceSet788->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate789 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate789->setPoint(new float[111]{0.375,-0.9214,0.322,0.212,-1.009,0.0858,0.1385,-0.9095,0.5036,-0.0245,-0.9973,0.2674,0.533,-0.8014,0.1471,0.4779,-0.7267,0.4605,0.2413,-0.7148,0.6421,-0.0584,-0.7717,0.6012,-0.2213,-0.8595,0.365,-0.1662,-0.9342,0.0516,0.0704,-0.9461,-0.13,0.3701,-0.8892,-0.0891,0.4847,-0.0791,-0.0791,0.4228,0.0048,0.2724,0.1414,0.0189,0.4885,-0.1948,-0.0449,0.4426,-0.3887,-0.1493,0.1616,-0.3268,-0.2331,-0.1899,-0.0453,-0.2473,-0.406,0.2908,-0.1835,-0.3601,0.5058,0.0372,-0.1235,0.4385,0.1283,0.2586,0.1325,0.1437,0.4936,-0.233,0.0743,0.4437,-0.4438,-0.0392,0.1381,-0.3765,-0.1303,-0.244,-0.0705,-0.1457,-0.479,0.2949,-0.0763,-0.4291,0.3497,0.1392,-0.1192,0.3021,0.2036,0.1511,0.0857,0.2145,0.3172,-0.1727,0.1654,0.2819,-0.3218,0.0852,0.0659,-0.2742,0.0207,-0.2044,-0.0578,0.0098,-0.3705,0.2006,0.0589,-0.3352,0.0069,0.159,-0.0407});
IndexedFaceSet788->setCoord(*Coordinate789);

CTextureCoordinate* TextureCoordinate790 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate790->setPoint(new float[74]{0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648});
IndexedFaceSet788->setTexCoord(*TextureCoordinate790);

Shape784->setGeometry(IndexedFaceSet788);

Transform783->addChildren(*Shape784);

HAnimSegment782->addChildren(*Transform783);

HAnimJoint781->addChildren(*HAnimSegment782);

CHAnimJoint* HAnimJoint791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint791->setName("r_metacarpophalangeal_1");
HAnimJoint791->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint791->setCenter(new float[3]{-8.08,28.73,1.55});
HAnimJoint791->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint791->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment792->setName("r_carpal_proximal_phalanx_1");
HAnimSegment792->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
Transform793->setTranslation(new float[3]{-8.08,28.73,1.55});
CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance795 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material796 = (CMaterial *)(m_pScene.createNode("Material"));
Material796->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance795->setMaterial(*Material796);

CImageTexture* ImageTexture797 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture797->setUSE("JinLOA3TextureAtlas");
Appearance795->setTexture(*ImageTexture797);

Shape794->setAppearance(*Appearance795);

CIndexedFaceSet* IndexedFaceSet798 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet798->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet798->setCreaseAngle(3.14159);
IndexedFaceSet798->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate799 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate799->setPoint(new float[111]{0.5258,-1.001,0.2196,0.3901,-1.074,0.023,0.3376,-1.029,0.3799,0.2019,-1.102,0.1833,0.6244,-0.8415,0.0751,0.585,-0.8078,0.3428,0.3968,-0.8361,0.503,0.1539,-0.912,0.4758,0.0182,-0.985,0.2792,0.0576,-1.019,0.0115,0.2458,-0.9905,-0.1487,0.4887,-0.9145,-0.1215,0.4357,-0.0607,-0.0712,0.3915,-0.0229,0.229,0.1676,-0.0565,0.4196,-0.1048,-0.1417,0.3891,-0.2662,-0.2286,0.1552,-0.222,-0.2663,-0.1451,0.0018,-0.2328,-0.3357,0.2743,-0.1476,-0.3051,0.4293,0.0682,-0.1026,0.3812,0.1092,0.2242,0.1376,0.0727,0.4317,-0.1589,-0.02,0.3984,-0.3346,-0.1146,0.1438,-0.2865,-0.1556,-0.1829,-0.0429,-0.1191,-0.3904,0.2536,-0.0264,-0.3572,0.2801,0.1629,-0.0879,0.2461,0.1919,0.1432,0.0738,0.1661,0.2899,-0.1359,0.1005,0.2664,-0.2601,0.0337,0.0864,-0.2261,0.0046,-0.1447,-0.0538,0.0304,-0.2914,0.1558,0.096,-0.2679,-0.0055,0.1486,-0.0096});
IndexedFaceSet798->setCoord(*Coordinate799);

CTextureCoordinate* TextureCoordinate800 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate800->setPoint(new float[74]{0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566});
IndexedFaceSet798->setTexCoord(*TextureCoordinate800);

Shape794->setGeometry(IndexedFaceSet798);

Transform793->addChildren(*Shape794);

HAnimSegment792->addChildren(*Transform793);

HAnimJoint791->addChildren(*HAnimSegment792);

CHAnimJoint* HAnimJoint801 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint801->setName("r_carpal_interphalangeal_1");
HAnimJoint801->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint801->setCenter(new float[3]{-7.832,27.85,1.735});
HAnimJoint801->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint801->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment802->setName("r_carpal_distal_phalanx_1");
HAnimSegment802->setDEF("hanim_r_carpal_distal_phalanx_1");
CTransform* Transform803 = (CTransform *)(m_pScene.createNode("Transform"));
Transform803->setTranslation(new float[3]{-7.832,27.85,1.735});
CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance805 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material806 = (CMaterial *)(m_pScene.createNode("Material"));
Material806->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance805->setMaterial(*Material806);

CImageTexture* ImageTexture807 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture807->setUSE("JinLOA3TextureAtlas");
Appearance805->setTexture(*ImageTexture807);

Shape804->setAppearance(*Appearance805);

CIndexedFaceSet* IndexedFaceSet808 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet808->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet808->setCreaseAngle(3.14159);
IndexedFaceSet808->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate809 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate809->setPoint(new float[87]{0.5817,-0.8003,0.0727,0.4584,-0.8658,-0.106,0.4372,-0.8552,0.2109,0.314,-0.9207,0.0322,0.6359,-0.6464,-0.0377,0.62,-0.6384,0.2,0.4756,-0.6933,0.3382,0.2748,-0.7836,0.3078,0.1516,-0.8492,0.1291,0.1675,-0.8572,-0.1085,0.3119,-0.8023,-0.2467,0.5127,-0.712,-0.2163,0.374,-0.0036,-0.0838,0.3562,0.0054,0.1827,0.1843,-0.0599,0.3471,-0.0408,-0.1612,0.313,-0.1875,-0.2392,0.1004,-0.1697,-0.2482,-0.1661,0.0022,-0.1829,-0.3305,0.2274,-0.0816,-0.2964,0.2142,0.1671,-0.0744,0.2005,0.174,0.1306,0.0683,0.1238,0.257,-0.1048,0.0459,0.2308,-0.2176,-0.0141,0.0673,-0.2039,-0.021,-0.1376,-0.0717,0.0292,-0.264,0.1014,0.1072,-0.2378,-0.0214,0.1175,-0.006});
IndexedFaceSet808->setCoord(*Coordinate809);

CTextureCoordinate* TextureCoordinate810 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate810->setPoint(new float[58]{0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648});
IndexedFaceSet808->setTexCoord(*TextureCoordinate810);

Shape804->setGeometry(IndexedFaceSet808);

Transform803->addChildren(*Shape804);

HAnimSegment802->addChildren(*Transform803);

HAnimJoint801->addChildren(*HAnimSegment802);

HAnimJoint791->addChildren(*HAnimJoint801);

HAnimJoint781->addChildren(*HAnimJoint791);

HAnimJoint771->addChildren(*HAnimJoint781);

CHAnimJoint* HAnimJoint811 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint811->setName("r_carpometacarpal_2");
HAnimJoint811->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint811->setCenter(new float[3]{-8.376,28.549999,0.5997});
HAnimJoint811->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint811->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment812->setName("r_metacarpal_2");
HAnimSegment812->setDEF("hanim_r_metacarpal_2");
CTransform* Transform813 = (CTransform *)(m_pScene.createNode("Transform"));
Transform813->setTranslation(new float[3]{-8.376,28.549999,0.5997});
CShape* Shape814 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance815 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material816 = (CMaterial *)(m_pScene.createNode("Material"));
Material816->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance815->setMaterial(*Material816);

CImageTexture* ImageTexture817 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture817->setUSE("JinLOA3TextureAtlas");
Appearance815->setTexture(*ImageTexture817);

Shape814->setAppearance(*Appearance815);

CIndexedFaceSet* IndexedFaceSet818 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet818->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet818->setCreaseAngle(3.14159);
IndexedFaceSet818->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate819 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate819->setPoint(new float[111]{0.0229,-1.485,0.1659,0.0277,-1.493,-0.0662,-0.2213,-1.467,0.1625,-0.2166,-1.475,-0.0696,0.2194,-1.321,0.162,0.0326,-1.302,0.3335,-0.2116,-1.284,0.3301,-0.3912,-1.276,0.1535,-0.3864,-1.284,-0.0786,-0.1997,-1.303,-0.2501,0.0446,-1.321,-0.2467,0.2242,-1.329,-0.0701,0.3384,-0.3382,0.1488,0.1289,-0.3166,0.3412,-0.1617,-0.2951,0.3371,-0.3631,-0.2862,0.139,-0.3574,-0.2953,-0.1371,-0.148,-0.3169,-0.3295,0.1426,-0.3384,-0.3254,0.3441,-0.3473,-0.1273,0.3796,-0.1843,0.1553,0.1523,-0.1608,0.364,-0.1629,-0.1375,0.3596,-0.3814,-0.1279,0.1446,-0.3753,-0.1377,-0.1549,-0.148,-0.1611,-0.3636,0.1672,-0.1845,-0.3592,0.3858,-0.1941,-0.1442,0.2808,-0.0217,0.1042,0.1201,-0.0051,0.2518,-0.1029,0.0114,0.2486,-0.2574,0.0182,0.0967,-0.253,0.0113,-0.1151,-0.0923,-0.0053,-0.2627,0.1306,-0.0218,-0.2596,0.2851,-0.0286,-0.1076,0.0187,0.0593,-0.0078});
IndexedFaceSet818->setCoord(*Coordinate819);

CTextureCoordinate* TextureCoordinate820 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate820->setPoint(new float[74]{0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533});
IndexedFaceSet818->setTexCoord(*TextureCoordinate820);

Shape814->setGeometry(IndexedFaceSet818);

Transform813->addChildren(*Shape814);

HAnimSegment812->addChildren(*Transform813);

HAnimJoint811->addChildren(*HAnimSegment812);

CHAnimJoint* HAnimJoint821 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint821->setName("r_metacarpophalangeal_2");
HAnimJoint821->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint821->setCenter(new float[3]{-8.52,27.24,0.6551});
HAnimJoint821->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint821->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment822->setName("r_carpal_proximal_phalanx_2");
HAnimSegment822->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
Transform823->setTranslation(new float[3]{-8.52,27.24,0.6551});
CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance825 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material826 = (CMaterial *)(m_pScene.createNode("Material"));
Material826->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance825->setMaterial(*Material826);

CImageTexture* ImageTexture827 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture827->setUSE("JinLOA3TextureAtlas");
Appearance825->setTexture(*ImageTexture827);

Shape824->setAppearance(*Appearance825);

CIndexedFaceSet* IndexedFaceSet828 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet828->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet828->setCreaseAngle(3.14159);
IndexedFaceSet828->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate829 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate829->setPoint(new float[111]{0.2499,-1.331,0.1644,0.2541,-1.339,-0.0655,0.0349,-1.351,0.1633,0.0391,-1.359,-0.0666,0.3958,-1.152,0.159,0.2314,-1.162,0.3307,0.0165,-1.182,0.3296,-0.1416,-1.203,0.1563,-0.1374,-1.21,-0.0736,0.0269,-1.201,-0.2453,0.2419,-1.181,-0.2442,0.4,-1.16,-0.0709,0.3504,-0.2375,0.1465,0.166,-0.2482,0.3391,-0.0897,-0.2722,0.3377,-0.267,-0.2955,0.1434,-0.2621,-0.3044,-0.1302,-0.0777,-0.2937,-0.3227,0.1781,-0.2697,-0.3214,0.3554,-0.2464,-0.127,0.3661,-0.0905,0.1542,0.1642,-0.1021,0.365,-0.1159,-0.1284,0.3636,-0.3101,-0.1539,0.1508,-0.3046,-0.1637,-0.1488,-0.1027,-0.152,-0.3596,0.1774,-0.1258,-0.3581,0.3715,-0.1003,-0.1453,0.2544,0.0426,0.1044,0.1117,0.0344,0.2535,-0.0864,0.0158,0.2525,-0.2237,-0.0022,0.102,-0.2198,-0.0091,-0.1098,-0.077,-0.0009,-0.2589,0.121,0.0177,-0.2579,0.2583,0.0357,-0.1074,0.0117,0.0763,-0.005});
IndexedFaceSet828->setCoord(*Coordinate829);

CTextureCoordinate* TextureCoordinate830 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate830->setPoint(new float[74]{0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412});
IndexedFaceSet828->setTexCoord(*TextureCoordinate830);

Shape824->setGeometry(IndexedFaceSet828);

Transform823->addChildren(*Shape824);

HAnimSegment822->addChildren(*Transform823);

HAnimJoint821->addChildren(*HAnimSegment822);

CHAnimJoint* HAnimJoint831 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint831->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint831->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint831->setCenter(new float[3]{-8.45,26.1,0.6956});
HAnimJoint831->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint831->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment832->setName("r_carpal_middle_phalanx_2");
HAnimSegment832->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform833 = (CTransform *)(m_pScene.createNode("Transform"));
Transform833->setTranslation(new float[3]{-8.45,26.1,0.6956});
CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance835 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material836 = (CMaterial *)(m_pScene.createNode("Material"));
Material836->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance835->setMaterial(*Material836);

CImageTexture* ImageTexture837 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture837->setUSE("JinLOA3TextureAtlas");
Appearance835->setTexture(*ImageTexture837);

Shape834->setAppearance(*Appearance835);

CIndexedFaceSet* IndexedFaceSet838 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet838->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet838->setCreaseAngle(3.14159);
IndexedFaceSet838->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate839 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate839->setPoint(new float[87]{0.4479,-1.125,0.1554,0.4519,-1.132,-0.0632,0.2499,-1.18,0.1557,0.2539,-1.187,-0.0629,0.5544,-0.9319,0.1491,0.4029,-0.9674,0.3134,0.2049,-1.022,0.3137,0.0594,-1.068,0.1499,0.0634,-1.075,-0.0687,0.2149,-1.04,-0.2329,0.4129,-0.9852,-0.2333,0.5584,-0.939,-0.0695,0.3333,-0.0803,0.1251,0.1781,-0.1166,0.2933,-0.037,-0.1758,0.2937,-0.186,-0.2231,0.1259,-0.1817,-0.2308,-0.1116,-0.0265,-0.1945,-0.2799,0.1886,-0.1353,-0.2802,0.3376,-0.088,-0.1125,0.2019,0.1709,0.088,0.0815,0.1427,0.2185,-0.0854,0.0967,0.2188,-0.2011,0.06,0.0887,-0.1977,0.054,-0.0957,-0.0773,0.0822,-0.2262,0.0896,0.1281,-0.2265,0.2053,0.1648,-0.0963,-0.0132,0.1679,-0.006});
IndexedFaceSet838->setCoord(*Coordinate839);

CTextureCoordinate* TextureCoordinate840 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate840->setPoint(new float[58]{0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313});
IndexedFaceSet838->setTexCoord(*TextureCoordinate840);

Shape834->setGeometry(IndexedFaceSet838);

Transform833->addChildren(*Shape834);

HAnimSegment832->addChildren(*Transform833);

HAnimJoint831->addChildren(*HAnimSegment832);

CHAnimJoint* HAnimJoint841 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint841->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint841->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint841->setCenter(new float[3]{-8.192,25.17,0.7315});
HAnimJoint841->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint841->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment842->setName("r_carpal_distal_phalanx_2");
HAnimSegment842->setDEF("hanim_r_carpal_distal_phalanx_2");
CTransform* Transform843 = (CTransform *)(m_pScene.createNode("Transform"));
Transform843->setTranslation(new float[3]{-8.192,25.17,0.7315});
CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance845 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material846 = (CMaterial *)(m_pScene.createNode("Material"));
Material846->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance845->setMaterial(*Material846);

CImageTexture* ImageTexture847 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture847->setUSE("JinLOA3TextureAtlas");
Appearance845->setTexture(*ImageTexture847);

Shape844->setAppearance(*Appearance845);

CIndexedFaceSet* IndexedFaceSet848 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet848->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet848->setCreaseAngle(3.14159);
IndexedFaceSet848->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate849 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate849->setPoint(new float[87]{0.6187,-1.071,0.1411,0.6221,-1.077,-0.0485,0.4578,-1.147,0.1426,0.4613,-1.153,-0.047,0.6714,-0.8704,0.1341,0.5482,-0.923,0.2774,0.3873,-0.9993,0.2789,0.2693,-1.061,0.1378,0.2727,-1.067,-0.0518,0.396,-1.015,-0.1951,0.5568,-0.9385,-0.1966,0.6749,-0.8765,-0.0555,0.3236,-0.0612,0.1191,0.1854,-0.1202,0.2799,-0.006,-0.211,0.2816,-0.1384,-0.2805,0.1233,-0.1343,-0.2879,-0.1023,0.004,-0.2288,-0.263,0.1953,-0.138,-0.2647,0.3277,-0.0685,-0.1065,0.2135,0.0836,0.0963,0.0945,0.035,0.233,-0.0723,-0.0325,0.2317,-0.1865,-0.0807,0.0968,-0.1843,-0.0816,-0.0912,-0.0691,-0.0336,-0.2249,0.0937,0.0356,-0.2277,0.2116,0.0844,-0.0958,-0.0314,0.0875,-0.0035});
IndexedFaceSet848->setCoord(*Coordinate849);

CTextureCoordinate* TextureCoordinate850 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate850->setPoint(new float[58]{0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218});
IndexedFaceSet848->setTexCoord(*TextureCoordinate850);

Shape844->setGeometry(IndexedFaceSet848);

Transform843->addChildren(*Shape844);

HAnimSegment842->addChildren(*Transform843);

HAnimJoint841->addChildren(*HAnimSegment842);

HAnimJoint831->addChildren(*HAnimJoint841);

HAnimJoint821->addChildren(*HAnimJoint831);

HAnimJoint811->addChildren(*HAnimJoint821);

HAnimJoint771->addChildren(*HAnimJoint811);

CHAnimJoint* HAnimJoint851 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint851->setName("r_carpometacarpal_3");
HAnimJoint851->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint851->setCenter(new float[3]{-8.344,28.65,-0.194});
HAnimJoint851->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint851->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment852->setName("r_metacarpal_3");
HAnimSegment852->setDEF("hanim_r_metacarpal_3");
CTransform* Transform853 = (CTransform *)(m_pScene.createNode("Transform"));
Transform853->setTranslation(new float[3]{-8.344,28.65,-0.194});
CShape* Shape854 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance855 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material856 = (CMaterial *)(m_pScene.createNode("Material"));
Material856->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance855->setMaterial(*Material856);

CImageTexture* ImageTexture857 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture857->setUSE("JinLOA3TextureAtlas");
Appearance855->setTexture(*ImageTexture857);

Shape854->setAppearance(*Appearance855);

CIndexedFaceSet* IndexedFaceSet858 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet858->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet858->setCreaseAngle(3.14159);
IndexedFaceSet858->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate859 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate859->setPoint(new float[111]{-0.0157,-1.601,0.0972,-0.0217,-1.599,-0.1348,-0.2598,-1.581,0.1076,-0.2658,-1.578,-0.1245,0.183,-1.427,0.091,0.0045,-1.414,0.2728,-0.2395,-1.393,0.2832,-0.4271,-1.376,0.1169,-0.4331,-1.374,-0.1151,-0.2546,-1.387,-0.2969,-0.0105,-1.408,-0.3073,0.177,-1.425,-0.1411,0.3164,-0.3793,0.1197,0.1161,-0.3643,0.3236,-0.1742,-0.3403,0.3359,-0.3846,-0.3213,0.1495,-0.3918,-0.3185,-0.1266,-0.1915,-0.3335,-0.3306,0.0988,-0.3575,-0.3429,0.3092,-0.3765,-0.1564,0.3602,-0.2157,0.1315,0.143,-0.1995,0.3527,-0.172,-0.1734,0.3661,-0.4003,-0.1528,0.1638,-0.408,-0.1498,-0.1357,-0.1908,-0.166,-0.357,0.1242,-0.1921,-0.3703,0.3524,-0.2126,-0.168,0.2615,-0.0399,0.0937,0.1079,-0.0284,0.2501,-0.1148,-0.01,0.2596,-0.2762,0.0046,0.1165,-0.2817,0.0068,-0.0952,-0.1281,-0.0047,-0.2517,0.0946,-0.0232,-0.2611,0.256,-0.0377,-0.1181,-0.0044,0.0523,-0.0002});
IndexedFaceSet858->setCoord(*Coordinate859);

CTextureCoordinate* TextureCoordinate860 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate860->setPoint(new float[74]{0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537});
IndexedFaceSet858->setTexCoord(*TextureCoordinate860);

Shape854->setGeometry(IndexedFaceSet858);

Transform853->addChildren(*Shape854);

HAnimSegment852->addChildren(*Transform853);

HAnimJoint851->addChildren(*HAnimSegment852);

CHAnimJoint* HAnimJoint861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint861->setName("r_metacarpophalangeal_3");
HAnimJoint861->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint861->setCenter(new float[3]{-8.52,27.26,-0.1959});
HAnimJoint861->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint861->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment862->setName("r_carpal_proximal_phalanx_3");
HAnimSegment862->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform863 = (CTransform *)(m_pScene.createNode("Transform"));
Transform863->setTranslation(new float[3]{-8.52,27.26,-0.1959});
CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance865 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material866 = (CMaterial *)(m_pScene.createNode("Material"));
Material866->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance865->setMaterial(*Material866);

CImageTexture* ImageTexture867 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture867->setUSE("JinLOA3TextureAtlas");
Appearance865->setTexture(*ImageTexture867);

Shape864->setAppearance(*Appearance865);

CIndexedFaceSet* IndexedFaceSet868 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet868->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet868->setCreaseAngle(3.14159);
IndexedFaceSet868->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate869 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate869->setPoint(new float[111]{0.2259,-1.448,0.0923,0.2194,-1.446,-0.1376,0.0106,-1.469,0.1016,0.0041,-1.467,-0.1283,0.3742,-1.258,0.088,0.2177,-1.275,0.2673,0.0024,-1.296,0.2766,-0.1639,-1.31,0.1112,-0.1704,-1.307,-0.1187,-0.0138,-1.29,-0.2981,0.2014,-1.269,-0.3073,0.3677,-1.255,-0.1419,0.3422,-0.2825,0.1227,0.1666,-0.302,0.3239,-0.0895,-0.3267,0.3349,-0.2761,-0.3422,0.1493,-0.2838,-0.3394,-0.1242,-0.1082,-0.3199,-0.3253,0.1479,-0.2952,-0.3364,0.3345,-0.2797,-0.1508,0.3605,-0.1263,0.1367,0.1681,-0.1476,0.357,-0.1123,-0.1747,0.3691,-0.3166,-0.1917,0.1659,-0.3251,-0.1886,-0.1336,-0.1327,-0.1672,-0.3539,0.1477,-0.1401,-0.366,0.352,-0.1232,-0.1627,0.2486,0.0181,0.0994,0.1126,0.003,0.2552,-0.0857,-0.0161,0.2638,-0.2302,-0.0281,0.1201,-0.2362,-0.0259,-0.0917,-0.1002,-0.0108,-0.2475,0.0981,0.0083,-0.256,0.2426,0.0203,-0.1123,0.0014,0.0597,0.0048});
IndexedFaceSet868->setCoord(*Coordinate869);

CTextureCoordinate* TextureCoordinate870 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate870->setPoint(new float[74]{0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407});
IndexedFaceSet868->setTexCoord(*TextureCoordinate870);

Shape864->setGeometry(IndexedFaceSet868);

Transform863->addChildren(*Shape864);

HAnimSegment862->addChildren(*Transform863);

HAnimJoint861->addChildren(*HAnimSegment862);

CHAnimJoint* HAnimJoint871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint871->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint871->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint871->setCenter(new float[3]{-8.477,26.07,-0.2214});
HAnimJoint871->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint871->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment872->setName("r_carpal_middle_phalanx_3");
HAnimSegment872->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform873 = (CTransform *)(m_pScene.createNode("Transform"));
Transform873->setTranslation(new float[3]{-8.477,26.07,-0.2214});
CShape* Shape874 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance875 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material876 = (CMaterial *)(m_pScene.createNode("Material"));
Material876->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance875->setMaterial(*Material876);

CImageTexture* ImageTexture877 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture877->setUSE("JinLOA3TextureAtlas");
Appearance875->setTexture(*ImageTexture877);

Shape874->setAppearance(*Appearance875);

CIndexedFaceSet* IndexedFaceSet878 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet878->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet878->setCreaseAngle(3.14159);
IndexedFaceSet878->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate879 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate879->setPoint(new float[87]{0.4389,-1.268,0.089,0.4327,-1.265,-0.1296,0.2401,-1.325,0.0971,0.234,-1.323,-0.1215,0.5481,-1.062,0.0865,0.4036,-1.106,0.2566,0.2049,-1.164,0.2647,0.0512,-1.205,0.1068,0.045,-1.203,-0.1118,0.1894,-1.158,-0.2818,0.3882,-1.101,-0.2899,0.5419,-1.059,-0.132,0.3388,-0.1526,0.1159,0.1909,-0.1984,0.2901,-0.025,-0.2608,0.2989,-0.1825,-0.3032,0.1372,-0.1892,-0.3008,-0.1003,-0.0412,-0.2549,-0.2744,0.1747,-0.1925,-0.2833,0.3321,-0.1501,-0.1216,0.2096,0.117,0.0982,0.0948,0.0814,0.2333,-0.0727,0.033,0.2402,-0.1949,0.0001,0.1147,-0.2001,0.002,-0.0696,-0.0853,0.0376,-0.2048,0.0823,0.086,-0.2116,0.2044,0.1189,-0.0861,-0.0097,0.1188,0.0156});
IndexedFaceSet878->setCoord(*Coordinate879);

CTextureCoordinate* TextureCoordinate880 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate880->setPoint(new float[58]{0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301});
IndexedFaceSet878->setTexCoord(*TextureCoordinate880);

Shape874->setGeometry(IndexedFaceSet878);

Transform873->addChildren(*Shape874);

HAnimSegment872->addChildren(*Transform873);

HAnimJoint871->addChildren(*HAnimSegment872);

CHAnimJoint* HAnimJoint881 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint881->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint881->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint881->setCenter(new float[3]{-8.25,25.030001,-0.2187});
HAnimJoint881->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint881->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment882 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment882->setName("r_carpal_distal_phalanx_3");
HAnimSegment882->setDEF("hanim_r_carpal_distal_phalanx_3");
CTransform* Transform883 = (CTransform *)(m_pScene.createNode("Transform"));
Transform883->setTranslation(new float[3]{-8.25,25.030001,-0.2187});
CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance885 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material886 = (CMaterial *)(m_pScene.createNode("Material"));
Material886->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance885->setMaterial(*Material886);

CImageTexture* ImageTexture887 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture887->setUSE("JinLOA3TextureAtlas");
Appearance885->setTexture(*ImageTexture887);

Shape884->setAppearance(*Appearance885);

CIndexedFaceSet* IndexedFaceSet888 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet888->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet888->setCreaseAngle(3.14159);
IndexedFaceSet888->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate889 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate889->setPoint(new float[87]{0.631,-1.169,0.0421,0.6256,-1.167,-0.1475,0.4691,-1.25,0.0483,0.4637,-1.248,-0.1413,0.6864,-0.9557,0.0421,0.569,-1.018,0.1889,0.4071,-1.099,0.1951,0.2817,-1.158,0.0576,0.2763,-1.156,-0.1319,0.3937,-1.094,-0.2788,0.5556,-1.013,-0.285,0.681,-0.9537,-0.1474,0.3504,-0.0919,0.0851,0.2187,-0.1616,0.2498,0.026,-0.2579,0.2572,-0.1147,-0.3243,0.1029,-0.121,-0.322,-0.1226,0.0106,-0.2523,-0.2873,0.2033,-0.156,-0.2946,0.344,-0.0896,-0.1404,0.2414,0.0637,0.0753,0.128,0.0061,0.2155,-0.0399,-0.0652,0.2197,-0.161,-0.1101,0.0888,-0.1675,-0.1027,-0.0988,-0.0577,-0.0458,-0.2359,0.106,0.0275,-0.2439,0.2307,0.0733,-0.1162,-0.0079,0.0731,-0.0112});
IndexedFaceSet888->setCoord(*Coordinate889);

CTextureCoordinate* TextureCoordinate890 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate890->setPoint(new float[58]{0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199});
IndexedFaceSet888->setTexCoord(*TextureCoordinate890);

Shape884->setGeometry(IndexedFaceSet888);

Transform883->addChildren(*Shape884);

HAnimSegment882->addChildren(*Transform883);

HAnimJoint881->addChildren(*HAnimSegment882);

HAnimJoint871->addChildren(*HAnimJoint881);

HAnimJoint861->addChildren(*HAnimJoint871);

HAnimJoint851->addChildren(*HAnimJoint861);

HAnimJoint771->addChildren(*HAnimJoint851);

CHAnimJoint* HAnimJoint891 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint891->setName("r_carpometacarpal_4");
HAnimJoint891->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint891->setCenter(new float[3]{-8.339,28.57,-0.9243});
HAnimJoint891->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint891->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment892 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment892->setName("r_metacarpal_4");
HAnimSegment892->setDEF("hanim_r_metacarpal_4");
CTransform* Transform893 = (CTransform *)(m_pScene.createNode("Transform"));
Transform893->setTranslation(new float[3]{-8.339,28.57,-0.9243});
CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance895 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material896 = (CMaterial *)(m_pScene.createNode("Material"));
Material896->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance895->setMaterial(*Material896);

CImageTexture* ImageTexture897 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture897->setUSE("JinLOA3TextureAtlas");
Appearance895->setTexture(*ImageTexture897);

Shape894->setAppearance(*Appearance895);

CIndexedFaceSet* IndexedFaceSet898 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet898->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet898->setCreaseAngle(3.14159);
IndexedFaceSet898->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate899 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate899->setPoint(new float[111]{0.014,-1.366,0.0295,0.0298,-1.354,-0.1885,-0.2211,-1.344,0.0143,-0.2053,-1.332,-0.2037,0.205,-1.209,0.0528,0.0169,-1.202,0.2049,-0.2182,-1.181,0.1897,-0.3826,-1.156,0.0148,-0.3668,-1.144,-0.2032,-0.1787,-1.151,-0.3553,0.0564,-1.172,-0.3401,0.2209,-1.197,-0.1652,0.3293,-0.2545,0.1423,0.1183,-0.2468,0.3129,-0.1614,-0.2216,0.2949,-0.3458,-0.1936,0.0987,-0.327,-0.1793,-0.1607,-0.116,-0.187,-0.3313,0.1637,-0.2122,-0.3132,0.3482,-0.2402,-0.117,0.3702,-0.1061,0.1656,0.1412,-0.0977,0.3507,-0.1622,-0.0704,0.3311,-0.3623,-0.04,0.1183,-0.3419,-0.0245,-0.1631,-0.1129,-0.0329,-0.3482,0.1905,-0.0602,-0.3286,0.3906,-0.0905,-0.1158,0.2788,0.0575,0.1279,0.1169,0.0634,0.2588,-0.0976,0.0827,0.2449,-0.2391,0.1042,0.0944,-0.2247,0.1152,-0.1045,-0.0628,0.1093,-0.2354,0.1518,0.0899,-0.2215,0.2933,0.0685,-0.0711,0.0325,0.1491,0.016});
IndexedFaceSet898->setCoord(*Coordinate899);

CTextureCoordinate* TextureCoordinate900 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate900->setPoint(new float[74]{0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539});
IndexedFaceSet898->setTexCoord(*TextureCoordinate900);

Shape894->setGeometry(IndexedFaceSet898);

Transform893->addChildren(*Shape894);

HAnimSegment892->addChildren(*Transform893);

HAnimJoint891->addChildren(*HAnimSegment892);

CHAnimJoint* HAnimJoint901 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint901->setName("r_metacarpophalangeal_4");
HAnimJoint901->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint901->setCenter(new float[3]{-8.428,27.299999,-0.9985});
HAnimJoint901->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint901->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment902 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment902->setName("r_carpal_proximal_phalanx_4");
HAnimSegment902->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setTranslation(new float[3]{-8.428,27.299999,-0.9985});
CShape* Shape904 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance905 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material906 = (CMaterial *)(m_pScene.createNode("Material"));
Material906->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance905->setMaterial(*Material906);

CImageTexture* ImageTexture907 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture907->setUSE("JinLOA3TextureAtlas");
Appearance905->setTexture(*ImageTexture907);

Shape904->setAppearance(*Appearance905);

CIndexedFaceSet* IndexedFaceSet908 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet908->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet908->setCreaseAngle(3.14159);
IndexedFaceSet908->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate909 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate909->setPoint(new float[111]{0.1847,-1.253,0.0467,0.1998,-1.241,-0.1693,-0.0227,-1.271,0.0316,-0.0076,-1.259,-0.1844,0.3279,-1.08,0.0673,0.161,-1.102,0.2179,-0.0464,-1.12,0.2028,-0.1906,-1.124,0.0295,-0.1754,-1.112,-0.1865,-0.0085,-1.09,-0.3372,0.1989,-1.072,-0.3221,0.3431,-1.068,-0.1487,0.2967,-0.1902,0.1418,0.1095,-0.215,0.3108,-0.1373,-0.2358,0.2929,-0.299,-0.2404,0.0984,-0.281,-0.2262,-0.1586,-0.0938,-0.2014,-0.3276,0.153,-0.1807,-0.3096,0.3147,-0.176,-0.1151,0.3133,-0.0482,0.1642,0.1083,-0.0753,0.3493,-0.1619,-0.0981,0.3296,-0.339,-0.1032,0.1167,-0.3192,-0.0876,-0.1647,-0.1142,-0.0605,-0.3498,0.156,-0.0377,-0.3301,0.3331,-0.0327,-0.1172,0.2099,0.0863,0.1241,0.0649,0.0671,0.255,-0.1261,0.051,0.2411,-0.2514,0.0474,0.0905,-0.2374,0.0585,-0.1085,-0.0924,0.0776,-0.2393,0.0986,0.0937,-0.2254,0.2239,0.0973,-0.0749,-0.0182,0.1305,0.0112});
IndexedFaceSet908->setCoord(*Coordinate909);

CTextureCoordinate* TextureCoordinate910 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate910->setPoint(new float[74]{0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418});
IndexedFaceSet908->setTexCoord(*TextureCoordinate910);

Shape904->setGeometry(IndexedFaceSet908);

Transform903->addChildren(*Shape904);

HAnimSegment902->addChildren(*Transform903);

HAnimJoint901->addChildren(*HAnimSegment902);

CHAnimJoint* HAnimJoint911 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint911->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint911->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint911->setCenter(new float[3]{-8.428,26.290001,-1.034});
HAnimJoint911->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint911->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment912 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment912->setName("r_carpal_middle_phalanx_4");
HAnimSegment912->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform913 = (CTransform *)(m_pScene.createNode("Transform"));
Transform913->setTranslation(new float[3]{-8.428,26.290001,-1.034});
CShape* Shape914 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance915 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material916 = (CMaterial *)(m_pScene.createNode("Material"));
Material916->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance915->setMaterial(*Material916);

CImageTexture* ImageTexture917 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture917->setUSE("JinLOA3TextureAtlas");
Appearance915->setTexture(*ImageTexture917);

Shape914->setAppearance(*Appearance915);

CIndexedFaceSet* IndexedFaceSet918 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet918->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet918->setCreaseAngle(3.14159);
IndexedFaceSet918->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate919 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate919->setPoint(new float[87]{0.412,-1.137,0.0335,0.4261,-1.125,-0.1679,0.2243,-1.187,0.0176,0.2385,-1.176,-0.1838,0.5153,-0.9493,0.0522,0.3639,-0.9958,0.1913,0.1762,-1.047,0.1754,0.0461,-1.076,0.0125,0.0602,-1.065,-0.1888,0.2116,-1.019,-0.3279,0.3992,-0.9679,-0.312,0.5294,-0.9381,-0.1491,0.3178,-0.1177,0.1,0.1627,-0.1653,0.2425,-0.0412,-0.2206,0.2252,-0.1745,-0.2511,0.0583,-0.1591,-0.239,-0.1604,-0.0041,-0.1914,-0.3029,0.1998,-0.1361,-0.2856,0.3331,-0.1056,-0.1188,0.1985,0.1307,0.0829,0.0782,0.0937,0.1934,-0.08,0.0508,0.18,-0.1835,0.0271,0.0505,-0.1716,0.0365,-0.1192,-0.0513,0.0735,-0.2298,0.1069,0.1164,-0.2164,0.2104,0.1401,-0.0869,-0.0002,0.1379,-0.0157});
IndexedFaceSet918->setCoord(*Coordinate919);

CTextureCoordinate* TextureCoordinate920 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate920->setPoint(new float[58]{0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323});
IndexedFaceSet918->setTexCoord(*TextureCoordinate920);

Shape914->setGeometry(IndexedFaceSet918);

Transform913->addChildren(*Shape914);

HAnimSegment912->addChildren(*Transform913);

HAnimJoint911->addChildren(*HAnimSegment912);

CHAnimJoint* HAnimJoint921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint921->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint921->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint921->setCenter(new float[3]{-8.192,25.309999,-1.124});
HAnimJoint921->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint921->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment922 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment922->setName("r_carpal_distal_phalanx_4");
HAnimSegment922->setDEF("hanim_r_carpal_distal_phalanx_4");
CTransform* Transform923 = (CTransform *)(m_pScene.createNode("Transform"));
Transform923->setTranslation(new float[3]{-8.192,25.309999,-1.124});
CShape* Shape924 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance925 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material926 = (CMaterial *)(m_pScene.createNode("Material"));
Material926->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance925->setMaterial(*Material926);

CImageTexture* ImageTexture927 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture927->setUSE("JinLOA3TextureAtlas");
Appearance925->setTexture(*ImageTexture927);

Shape924->setAppearance(*Appearance925);

CIndexedFaceSet* IndexedFaceSet928 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet928->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet928->setCreaseAngle(3.14159);
IndexedFaceSet928->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate929 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate929->setPoint(new float[87]{0.5436,-1.006,0.082,0.5559,-0.9964,-0.0922,0.3911,-1.079,0.0671,0.4033,-1.069,-0.1071,0.596,-0.8116,0.0978,0.4725,-0.8732,0.2172,0.3199,-0.9458,0.2024,0.2147,-0.9931,0.0605,0.2269,-0.9834,-0.1137,0.3505,-0.9218,-0.2332,0.503,-0.8491,-0.2183,0.6083,-0.8019,-0.0765,0.2786,-0.0205,0.1427,0.14,-0.0896,0.2768,-0.0415,-0.176,0.2591,-0.1596,-0.229,0.1,-0.1451,-0.2175,-0.1073,-0.0064,-0.1484,-0.2413,0.1751,-0.062,-0.2236,0.2931,-0.009,-0.0645,0.1776,0.1232,0.1297,0.0583,0.0659,0.2438,-0.0996,0.0023,0.2269,-0.2013,-0.0322,0.0923,-0.1903,-0.0176,-0.08,-0.0748,0.0389,-0.1916,0.0796,0.1047,-0.1786,0.185,0.14,-0.0465,-0.0484,0.1379,0.025});
IndexedFaceSet928->setCoord(*Coordinate929);

CTextureCoordinate* TextureCoordinate930 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate930->setPoint(new float[58]{0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232});
IndexedFaceSet928->setTexCoord(*TextureCoordinate930);

Shape924->setGeometry(IndexedFaceSet928);

Transform923->addChildren(*Shape924);

HAnimSegment922->addChildren(*Transform923);

HAnimJoint921->addChildren(*HAnimSegment922);

HAnimJoint911->addChildren(*HAnimJoint921);

HAnimJoint901->addChildren(*HAnimJoint911);

HAnimJoint891->addChildren(*HAnimJoint901);

HAnimJoint771->addChildren(*HAnimJoint891);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setName("r_carpometacarpal_5");
HAnimJoint931->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint931->setCenter(new float[3]{-8.197,28.370001,-1.528});
HAnimJoint931->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint931->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment932 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment932->setName("r_metacarpal_5");
HAnimSegment932->setDEF("hanim_r_metacarpal_5");
CTransform* Transform933 = (CTransform *)(m_pScene.createNode("Transform"));
Transform933->setTranslation(new float[3]{-8.197,28.370001,-1.528});
CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance935 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material936 = (CMaterial *)(m_pScene.createNode("Material"));
Material936->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance935->setMaterial(*Material936);

CImageTexture* ImageTexture937 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture937->setUSE("JinLOA3TextureAtlas");
Appearance935->setTexture(*ImageTexture937);

Shape934->setAppearance(*Appearance935);

CIndexedFaceSet* IndexedFaceSet938 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet938->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet938->setCreaseAngle(3.14159);
IndexedFaceSet938->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate939 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate939->setPoint(new float[111]{-0.0463,-0.9645,-0.0622,-0.0267,-0.942,-0.253,-0.2519,-0.9328,-0.0794,-0.2324,-0.9103,-0.2702,0.1254,-0.8655,-0.031,-0.0435,-0.8586,0.0992,-0.2492,-0.8269,0.082,-0.3888,-0.7862,-0.074,-0.3693,-0.7638,-0.2648,-0.2004,-0.7707,-0.395,0.0053,-0.8024,-0.3779,0.1449,-0.843,-0.2218,0.2585,-0.1911,0.0918,0.069,-0.1834,0.2379,-0.1757,-0.1456,0.2175,-0.3323,-0.1,0.0425,-0.309,-0.0733,-0.1846,-0.1196,-0.0811,-0.3307,0.1251,-0.1188,-0.3102,0.2817,-0.1644,-0.1352,0.2978,-0.0883,0.1196,0.0923,-0.0799,0.2781,-0.1732,-0.0389,0.2559,-0.343,0.0105,0.066,-0.3178,0.0395,-0.1803,-0.1123,0.0311,-0.3387,0.1532,-0.0098,-0.3166,0.3231,-0.0593,-0.1267,0.223,0.0382,0.0917,0.0776,0.0442,0.2038,-0.1101,0.0732,0.1881,-0.2302,0.1081,0.0539,-0.2124,0.1286,-0.1203,-0.0671,0.1227,-0.2324,0.1207,0.0937,-0.2167,0.2408,0.0588,-0.0824,0.0116,0.1281,-0.0076});
IndexedFaceSet938->setCoord(*Coordinate939);

CTextureCoordinate* TextureCoordinate940 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate940->setPoint(new float[74]{0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653});
IndexedFaceSet938->setTexCoord(*TextureCoordinate940);

Shape934->setGeometry(IndexedFaceSet938);

Transform933->addChildren(*Shape934);

HAnimSegment932->addChildren(*Transform933);

HAnimJoint931->addChildren(*HAnimSegment932);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setName("r_metacarpophalangeal_5");
HAnimJoint941->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint941->setCenter(new float[3]{-8.334,27.5,-1.701});
HAnimJoint941->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint941->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment942 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment942->setName("r_carpal_proximal_phalanx_5");
HAnimSegment942->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform943 = (CTransform *)(m_pScene.createNode("Transform"));
Transform943->setTranslation(new float[3]{-8.334,27.5,-1.701});
CShape* Shape944 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance945 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material946 = (CMaterial *)(m_pScene.createNode("Material"));
Material946->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance945->setMaterial(*Material946);

CImageTexture* ImageTexture947 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture947->setUSE("JinLOA3TextureAtlas");
Appearance945->setTexture(*ImageTexture947);

Shape944->setAppearance(*Appearance945);

CIndexedFaceSet* IndexedFaceSet948 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet948->setCoordIndex(new int[280]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
IndexedFaceSet948->setCreaseAngle(3.14159);
IndexedFaceSet948->setTexCoordIndex(new int[280]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
CCoordinate* Coordinate949 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate949->setPoint(new float[111]{0.1298,-0.9343,0.012,0.1487,-0.912,-0.1771,-0.0526,-0.9323,-0.0063,-0.0337,-0.91,-0.1954,0.2599,-0.8204,0.0405,0.1089,-0.8356,0.1686,-0.0735,-0.8336,0.1504,-0.1961,-0.8154,-0.0051,-0.1772,-0.793,-0.1942,-0.0262,-0.7778,-0.3224,0.1562,-0.7798,-0.3041,0.2788,-0.7981,-0.1486,0.2549,-0.1812,0.1442,0.0856,-0.1983,0.2879,-0.1314,-0.1959,0.2662,-0.269,-0.1755,0.0918,-0.2465,-0.1489,-0.1332,-0.0771,-0.1318,-0.2769,0.1399,-0.1342,-0.2552,0.2774,-0.1547,-0.0808,0.2729,-0.0814,0.1704,0.0874,-0.1001,0.3278,-0.1502,-0.0975,0.304,-0.3008,-0.0751,0.113,-0.2762,-0.046,-0.1333,-0.0907,-0.0273,-0.2907,0.1469,-0.0299,-0.2669,0.2975,-0.0523,-0.0759,0.1866,0.0252,0.139,0.0555,0.012,0.2502,-0.1126,0.0138,0.2334,-0.2191,0.0297,0.0984,-0.2016,0.0502,-0.0758,-0.0705,0.0635,-0.1871,0.0975,0.0616,-0.1703,0.204,0.0458,-0.0352,-0.0099,0.0797,0.0369});
IndexedFaceSet948->setCoord(*Coordinate949);

CTextureCoordinate* TextureCoordinate950 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate950->setPoint(new float[74]{0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444});
IndexedFaceSet948->setTexCoord(*TextureCoordinate950);

Shape944->setGeometry(IndexedFaceSet948);

Transform943->addChildren(*Shape944);

HAnimSegment942->addChildren(*Transform943);

HAnimJoint941->addChildren(*HAnimSegment942);

CHAnimJoint* HAnimJoint951 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint951->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint951->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint951->setCenter(new float[3]{-8.338,26.780001,-1.768});
HAnimJoint951->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint951->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment952 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment952->setName("r_carpal_middle_phalanx_5");
HAnimSegment952->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform953 = (CTransform *)(m_pScene.createNode("Transform"));
Transform953->setTranslation(new float[3]{-8.338,26.780001,-1.768});
CShape* Shape954 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance955 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material956 = (CMaterial *)(m_pScene.createNode("Material"));
Material956->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance955->setMaterial(*Material956);

CImageTexture* ImageTexture957 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture957->setUSE("JinLOA3TextureAtlas");
Appearance955->setTexture(*ImageTexture957);

Shape954->setAppearance(*Appearance955);

CIndexedFaceSet* IndexedFaceSet958 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet958->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet958->setCreaseAngle(3.14159);
IndexedFaceSet958->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate959 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate959->setPoint(new float[87]{0.3103,-0.8684,0.0017,0.3279,-0.8476,-0.1746,0.1444,-0.8917,-0.0183,0.162,-0.8709,-0.1946,0.4057,-0.7413,0.0284,0.268,-0.7744,0.1456,0.1021,-0.7977,0.1256,-0.0092,-0.7996,-0.0215,0.0085,-0.7788,-0.1978,0.1461,-0.7457,-0.315,0.3121,-0.7224,-0.295,0.4234,-0.7205,-0.1478,0.2537,-0.1316,0.1027,0.1126,-0.1655,0.2227,-0.0677,-0.1909,0.201,-0.1817,-0.1928,0.0502,-0.1625,-0.1702,-0.1412,-0.0215,-0.1363,-0.2613,0.1588,-0.1109,-0.2396,0.2728,-0.109,-0.0888,0.156,0.0566,0.096,0.0465,0.0303,0.1892,-0.0934,0.0106,0.1723,-0.1818,0.0091,0.0553,-0.1669,0.0266,-0.0933,-0.0575,0.0529,-0.1864,0.0824,0.0726,-0.1696,0.1709,0.0741,-0.0526,-0.016,0.0815,0.0057});
IndexedFaceSet958->setCoord(*Coordinate959);

CTextureCoordinate* TextureCoordinate960 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate960->setPoint(new float[58]{0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376});
IndexedFaceSet958->setTexCoord(*TextureCoordinate960);

Shape954->setGeometry(IndexedFaceSet958);

Transform953->addChildren(*Shape954);

HAnimSegment952->addChildren(*Transform953);

HAnimJoint951->addChildren(*HAnimSegment952);

CHAnimJoint* HAnimJoint961 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint961->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint961->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint961->setCenter(new float[3]{-8.153,26.040001,-1.886});
HAnimJoint961->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint961->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment962 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment962->setName("r_carpal_distal_phalanx_5");
HAnimSegment962->setDEF("hanim_r_carpal_distal_phalanx_5");
CTransform* Transform963 = (CTransform *)(m_pScene.createNode("Transform"));
Transform963->setTranslation(new float[3]{-8.153,26.040001,-1.886});
CShape* Shape964 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance965 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material966 = (CMaterial *)(m_pScene.createNode("Material"));
Material966->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance965->setMaterial(*Material966);

CImageTexture* ImageTexture967 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture967->setUSE("JinLOA3TextureAtlas");
Appearance965->setTexture(*ImageTexture967);

Shape964->setAppearance(*Appearance965);

CIndexedFaceSet* IndexedFaceSet968 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet968->setCoordIndex(new int[216]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
IndexedFaceSet968->setCreaseAngle(3.14159);
IndexedFaceSet968->setTexCoordIndex(new int[216]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
CCoordinate* Coordinate969 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate969->setPoint(new float[87]{0.4265,-0.7665,0.0531,0.4417,-0.7485,-0.0994,0.2908,-0.8079,0.0337,0.306,-0.7899,-0.1188,0.4775,-0.6307,0.0765,0.3642,-0.6752,0.1764,0.2285,-0.7166,0.157,0.1382,-0.7341,0.0281,0.1534,-0.7161,-0.1244,0.2667,-0.6716,-0.2242,0.4024,-0.6302,-0.2049,0.4927,-0.6127,-0.076,0.2189,-0.0422,0.1441,0.0919,-0.0921,0.2561,-0.0696,-0.1414,0.2331,-0.1709,-0.161,0.0886,-0.1528,-0.1396,-0.0929,-0.0258,-0.0897,-0.2049,0.1357,-0.0404,-0.1819,0.2371,-0.0207,-0.0373,0.1344,0.069,0.1368,0.0252,0.0277,0.2322,-0.1149,-0.0067,0.2114,-0.202,-0.0158,0.0895,-0.1878,0.0058,-0.0611,-0.082,0.0466,-0.1545,0.0552,0.083,-0.137,0.1456,0.0926,-0.0171,-0.0613,0.1015,0.0409});
IndexedFaceSet968->setCoord(*Coordinate969);

CTextureCoordinate* TextureCoordinate970 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate970->setPoint(new float[58]{0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309});
IndexedFaceSet968->setTexCoord(*TextureCoordinate970);

Shape964->setGeometry(IndexedFaceSet968);

Transform963->addChildren(*Shape964);

HAnimSegment962->addChildren(*Transform963);

HAnimJoint961->addChildren(*HAnimSegment962);

HAnimJoint951->addChildren(*HAnimJoint961);

HAnimJoint941->addChildren(*HAnimJoint951);

HAnimJoint931->addChildren(*HAnimJoint941);

HAnimJoint771->addChildren(*HAnimJoint931);

HAnimJoint761->addChildren(*HAnimJoint771);

HAnimJoint751->addChildren(*HAnimJoint761);

HAnimJoint741->addChildren(*HAnimJoint751);

HAnimJoint731->addChildren(*HAnimJoint741);

HAnimJoint331->addChildren(*HAnimJoint731);

HAnimJoint321->addChildren(*HAnimJoint331);

HAnimJoint311->addChildren(*HAnimJoint321);

HAnimJoint301->addChildren(*HAnimJoint311);

HAnimJoint291->addChildren(*HAnimJoint301);

HAnimJoint281->addChildren(*HAnimJoint291);

HAnimJoint271->addChildren(*HAnimJoint281);

HAnimJoint261->addChildren(*HAnimJoint271);

HAnimJoint251->addChildren(*HAnimJoint261);

HAnimJoint241->addChildren(*HAnimJoint251);

HAnimJoint231->addChildren(*HAnimJoint241);

HAnimJoint221->addChildren(*HAnimJoint231);

HAnimJoint211->addChildren(*HAnimJoint221);

HAnimJoint201->addChildren(*HAnimJoint211);

HAnimJoint191->addChildren(*HAnimJoint201);

HAnimJoint181->addChildren(*HAnimJoint191);

HAnimJoint171->addChildren(*HAnimJoint181);

HAnimJoint31->addChildren(*HAnimJoint171);

HAnimHumanoid23->setSkeleton(*HAnimJoint31);

CHAnimJoint* HAnimJoint971 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint971->setUSE("hanim_humanoid_root");
HAnimHumanoid23->addJoints(*HAnimJoint971);

CHAnimJoint* HAnimJoint972 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint972->setUSE("hanim_sacroiliac");
HAnimHumanoid23->addJoints(*HAnimJoint972);

CHAnimJoint* HAnimJoint973 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint973->setUSE("hanim_vl5");
HAnimHumanoid23->addJoints(*HAnimJoint973);

CHAnimJoint* HAnimJoint974 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint974->setUSE("hanim_vl4");
HAnimHumanoid23->addJoints(*HAnimJoint974);

CHAnimJoint* HAnimJoint975 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint975->setUSE("hanim_vl3");
HAnimHumanoid23->addJoints(*HAnimJoint975);

CHAnimJoint* HAnimJoint976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint976->setUSE("hanim_vl2");
HAnimHumanoid23->addJoints(*HAnimJoint976);

CHAnimJoint* HAnimJoint977 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint977->setUSE("hanim_vl1");
HAnimHumanoid23->addJoints(*HAnimJoint977);

CHAnimJoint* HAnimJoint978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint978->setUSE("hanim_vt12");
HAnimHumanoid23->addJoints(*HAnimJoint978);

CHAnimJoint* HAnimJoint979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint979->setUSE("hanim_vt11");
HAnimHumanoid23->addJoints(*HAnimJoint979);

CHAnimJoint* HAnimJoint980 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint980->setUSE("hanim_vt10");
HAnimHumanoid23->addJoints(*HAnimJoint980);

CHAnimJoint* HAnimJoint981 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint981->setUSE("hanim_vt9");
HAnimHumanoid23->addJoints(*HAnimJoint981);

CHAnimJoint* HAnimJoint982 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint982->setUSE("hanim_vt8");
HAnimHumanoid23->addJoints(*HAnimJoint982);

CHAnimJoint* HAnimJoint983 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint983->setUSE("hanim_vt7");
HAnimHumanoid23->addJoints(*HAnimJoint983);

CHAnimJoint* HAnimJoint984 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint984->setUSE("hanim_vt6");
HAnimHumanoid23->addJoints(*HAnimJoint984);

CHAnimJoint* HAnimJoint985 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint985->setUSE("hanim_vt5");
HAnimHumanoid23->addJoints(*HAnimJoint985);

CHAnimJoint* HAnimJoint986 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint986->setUSE("hanim_vt4");
HAnimHumanoid23->addJoints(*HAnimJoint986);

CHAnimJoint* HAnimJoint987 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint987->setUSE("hanim_vt3");
HAnimHumanoid23->addJoints(*HAnimJoint987);

CHAnimJoint* HAnimJoint988 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint988->setUSE("hanim_vt2");
HAnimHumanoid23->addJoints(*HAnimJoint988);

CHAnimJoint* HAnimJoint989 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint989->setUSE("hanim_vt1");
HAnimHumanoid23->addJoints(*HAnimJoint989);

CHAnimJoint* HAnimJoint990 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint990->setUSE("hanim_vc7");
HAnimHumanoid23->addJoints(*HAnimJoint990);

CHAnimJoint* HAnimJoint991 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint991->setUSE("hanim_vc6");
HAnimHumanoid23->addJoints(*HAnimJoint991);

CHAnimJoint* HAnimJoint992 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint992->setUSE("hanim_vc5");
HAnimHumanoid23->addJoints(*HAnimJoint992);

CHAnimJoint* HAnimJoint993 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint993->setUSE("hanim_vc4");
HAnimHumanoid23->addJoints(*HAnimJoint993);

CHAnimJoint* HAnimJoint994 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint994->setUSE("hanim_vc3");
HAnimHumanoid23->addJoints(*HAnimJoint994);

CHAnimJoint* HAnimJoint995 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint995->setUSE("hanim_vc2");
HAnimHumanoid23->addJoints(*HAnimJoint995);

CHAnimJoint* HAnimJoint996 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint996->setUSE("hanim_vc1");
HAnimHumanoid23->addJoints(*HAnimJoint996);

CHAnimJoint* HAnimJoint997 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint997->setUSE("hanim_skullbase");
HAnimHumanoid23->addJoints(*HAnimJoint997);

CHAnimJoint* HAnimJoint998 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint998->setUSE("hanim_temporomandibular");
HAnimHumanoid23->addJoints(*HAnimJoint998);

CHAnimJoint* HAnimJoint999 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint999->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid23->addJoints(*HAnimJoint999);

CHAnimJoint* HAnimJoint1000 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1000->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid23->addJoints(*HAnimJoint1000);

CHAnimJoint* HAnimJoint1001 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1001->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1001);

CHAnimJoint* HAnimJoint1002 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1002->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1002);

CHAnimJoint* HAnimJoint1003 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1003->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1003);

CHAnimJoint* HAnimJoint1004 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1004->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1004);

CHAnimJoint* HAnimJoint1005 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1005->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1005);

CHAnimJoint* HAnimJoint1006 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1006->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1006);

CHAnimJoint* HAnimJoint1007 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1007->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1007);

CHAnimJoint* HAnimJoint1008 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1008->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1008);

CHAnimJoint* HAnimJoint1009 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1009->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint1009);

CHAnimJoint* HAnimJoint1010 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1010->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint1010);

CHAnimJoint* HAnimJoint1011 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1011->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1011);

CHAnimJoint* HAnimJoint1012 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1012->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1012);

CHAnimJoint* HAnimJoint1013 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1013->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1013);

CHAnimJoint* HAnimJoint1014 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1014->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1014);

CHAnimJoint* HAnimJoint1015 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1015->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1015);

CHAnimJoint* HAnimJoint1016 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1016->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1016);

CHAnimJoint* HAnimJoint1017 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1017->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1017);

CHAnimJoint* HAnimJoint1018 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1018->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1018);

CHAnimJoint* HAnimJoint1019 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1019->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid23->addJoints(*HAnimJoint1019);

CHAnimJoint* HAnimJoint1020 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1020->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid23->addJoints(*HAnimJoint1020);

CHAnimJoint* HAnimJoint1021 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1021->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1021);

CHAnimJoint* HAnimJoint1022 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1022->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1022);

CHAnimJoint* HAnimJoint1023 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1023->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1023);

CHAnimJoint* HAnimJoint1024 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1024->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1024);

CHAnimJoint* HAnimJoint1025 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1025->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1025);

CHAnimJoint* HAnimJoint1026 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1026->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1026);

CHAnimJoint* HAnimJoint1027 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1027->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1027);

CHAnimJoint* HAnimJoint1028 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1028->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1028);

CHAnimJoint* HAnimJoint1029 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1029->setUSE("hanim_l_elbow");
HAnimHumanoid23->addJoints(*HAnimJoint1029);

CHAnimJoint* HAnimJoint1030 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1030->setUSE("hanim_r_elbow");
HAnimHumanoid23->addJoints(*HAnimJoint1030);

CHAnimJoint* HAnimJoint1031 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1031->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid23->addJoints(*HAnimJoint1031);

CHAnimJoint* HAnimJoint1032 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1032->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid23->addJoints(*HAnimJoint1032);

CHAnimJoint* HAnimJoint1033 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1033->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid23->addJoints(*HAnimJoint1033);

CHAnimJoint* HAnimJoint1034 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1034->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid23->addJoints(*HAnimJoint1034);

CHAnimJoint* HAnimJoint1035 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1035->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid23->addJoints(*HAnimJoint1035);

CHAnimJoint* HAnimJoint1036 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1036->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid23->addJoints(*HAnimJoint1036);

CHAnimJoint* HAnimJoint1037 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1037->setUSE("hanim_l_hip");
HAnimHumanoid23->addJoints(*HAnimJoint1037);

CHAnimJoint* HAnimJoint1038 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1038->setUSE("hanim_r_hip");
HAnimHumanoid23->addJoints(*HAnimJoint1038);

CHAnimJoint* HAnimJoint1039 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1039->setUSE("hanim_l_knee");
HAnimHumanoid23->addJoints(*HAnimJoint1039);

CHAnimJoint* HAnimJoint1040 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1040->setUSE("hanim_r_knee");
HAnimHumanoid23->addJoints(*HAnimJoint1040);

CHAnimJoint* HAnimJoint1041 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1041->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint1041);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1044);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1046 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1046->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint1046);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint1048);

CHAnimJoint* HAnimJoint1049 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1049->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1049);

CHAnimJoint* HAnimJoint1050 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1050->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint1050);

CHAnimJoint* HAnimJoint1051 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1051->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1051);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1052);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setUSE("hanim_l_radiocarpal");
HAnimHumanoid23->addJoints(*HAnimJoint1053);

CHAnimJoint* HAnimJoint1054 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1054->setUSE("hanim_r_radiocarpal");
HAnimHumanoid23->addJoints(*HAnimJoint1054);

CHAnimJoint* HAnimJoint1055 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1055->setUSE("hanim_l_shoulder");
HAnimHumanoid23->addJoints(*HAnimJoint1055);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setUSE("hanim_r_shoulder");
HAnimHumanoid23->addJoints(*HAnimJoint1056);

CHAnimJoint* HAnimJoint1057 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1057->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid23->addJoints(*HAnimJoint1057);

CHAnimJoint* HAnimJoint1058 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1058->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid23->addJoints(*HAnimJoint1058);

CHAnimJoint* HAnimJoint1059 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1059->setUSE("hanim_l_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint1059);

CHAnimJoint* HAnimJoint1060 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1060->setUSE("hanim_r_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint1060);

CHAnimJoint* HAnimJoint1061 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1061->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1061);

CHAnimJoint* HAnimJoint1062 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1062->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1062);

CHAnimJoint* HAnimJoint1063 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1063->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1063);

CHAnimJoint* HAnimJoint1064 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1064->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid23->addJoints(*HAnimJoint1064);

CHAnimSegment* HAnimSegment1065 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1065->setUSE("hanim_sacrum");
HAnimHumanoid23->setSegments(*HAnimSegment1065);

CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setUSE("hanim_pelvis");
HAnimHumanoid23->setSegments(*HAnimSegment1066);

CHAnimSegment* HAnimSegment1067 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1067->setUSE("hanim_l5");
HAnimHumanoid23->setSegments(*HAnimSegment1067);

CHAnimSegment* HAnimSegment1068 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1068->setUSE("hanim_l4");
HAnimHumanoid23->setSegments(*HAnimSegment1068);

CHAnimSegment* HAnimSegment1069 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1069->setUSE("hanim_l3");
HAnimHumanoid23->setSegments(*HAnimSegment1069);

CHAnimSegment* HAnimSegment1070 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1070->setUSE("hanim_l2");
HAnimHumanoid23->setSegments(*HAnimSegment1070);

CHAnimSegment* HAnimSegment1071 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1071->setUSE("hanim_l1");
HAnimHumanoid23->setSegments(*HAnimSegment1071);

CHAnimSegment* HAnimSegment1072 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1072->setUSE("hanim_t12");
HAnimHumanoid23->setSegments(*HAnimSegment1072);

CHAnimSegment* HAnimSegment1073 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1073->setUSE("hanim_t11");
HAnimHumanoid23->setSegments(*HAnimSegment1073);

CHAnimSegment* HAnimSegment1074 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1074->setUSE("hanim_t10");
HAnimHumanoid23->setSegments(*HAnimSegment1074);

CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setUSE("hanim_t9");
HAnimHumanoid23->setSegments(*HAnimSegment1075);

CHAnimSegment* HAnimSegment1076 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1076->setUSE("hanim_t8");
HAnimHumanoid23->setSegments(*HAnimSegment1076);

CHAnimSegment* HAnimSegment1077 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1077->setUSE("hanim_t7");
HAnimHumanoid23->setSegments(*HAnimSegment1077);

CHAnimSegment* HAnimSegment1078 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1078->setUSE("hanim_t6");
HAnimHumanoid23->setSegments(*HAnimSegment1078);

CHAnimSegment* HAnimSegment1079 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1079->setUSE("hanim_t5");
HAnimHumanoid23->setSegments(*HAnimSegment1079);

CHAnimSegment* HAnimSegment1080 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1080->setUSE("hanim_t4");
HAnimHumanoid23->setSegments(*HAnimSegment1080);

CHAnimSegment* HAnimSegment1081 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1081->setUSE("hanim_t3");
HAnimHumanoid23->setSegments(*HAnimSegment1081);

CHAnimSegment* HAnimSegment1082 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1082->setUSE("hanim_t2");
HAnimHumanoid23->setSegments(*HAnimSegment1082);

CHAnimSegment* HAnimSegment1083 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1083->setUSE("hanim_t1");
HAnimHumanoid23->setSegments(*HAnimSegment1083);

CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setUSE("hanim_c7");
HAnimHumanoid23->setSegments(*HAnimSegment1084);

CHAnimSegment* HAnimSegment1085 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1085->setUSE("hanim_c6");
HAnimHumanoid23->setSegments(*HAnimSegment1085);

CHAnimSegment* HAnimSegment1086 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1086->setUSE("hanim_c5");
HAnimHumanoid23->setSegments(*HAnimSegment1086);

CHAnimSegment* HAnimSegment1087 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1087->setUSE("hanim_c4");
HAnimHumanoid23->setSegments(*HAnimSegment1087);

CHAnimSegment* HAnimSegment1088 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1088->setUSE("hanim_c3");
HAnimHumanoid23->setSegments(*HAnimSegment1088);

CHAnimSegment* HAnimSegment1089 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1089->setUSE("hanim_c2");
HAnimHumanoid23->setSegments(*HAnimSegment1089);

CHAnimSegment* HAnimSegment1090 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1090->setUSE("hanim_c1");
HAnimHumanoid23->setSegments(*HAnimSegment1090);

CHAnimSegment* HAnimSegment1091 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1091->setUSE("hanim_skull");
HAnimHumanoid23->setSegments(*HAnimSegment1091);

CHAnimSegment* HAnimSegment1092 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1092->setUSE("hanim_jaw");
HAnimHumanoid23->setSegments(*HAnimSegment1092);

CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setUSE("hanim_l_calf");
HAnimHumanoid23->setSegments(*HAnimSegment1093);

CHAnimSegment* HAnimSegment1094 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1094->setUSE("hanim_r_calf");
HAnimHumanoid23->setSegments(*HAnimSegment1094);

CHAnimSegment* HAnimSegment1095 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1095->setUSE("hanim_l_carpal");
HAnimHumanoid23->setSegments(*HAnimSegment1095);

CHAnimSegment* HAnimSegment1096 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1096->setUSE("hanim_r_carpal");
HAnimHumanoid23->setSegments(*HAnimSegment1096);

CHAnimSegment* HAnimSegment1097 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1097->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment1097);

CHAnimSegment* HAnimSegment1098 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1098->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment1098);

CHAnimSegment* HAnimSegment1099 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1099->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1099);

CHAnimSegment* HAnimSegment1100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1100->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1100);

CHAnimSegment* HAnimSegment1101 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1101->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment1101);

CHAnimSegment* HAnimSegment1102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1102->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment1102);

CHAnimSegment* HAnimSegment1103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1103->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment1103);

CHAnimSegment* HAnimSegment1104 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1104->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment1104);

CHAnimSegment* HAnimSegment1105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1105->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment1105);

CHAnimSegment* HAnimSegment1106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1106->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment1106);

CHAnimSegment* HAnimSegment1107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1107->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1107);

CHAnimSegment* HAnimSegment1108 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1108->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1108);

CHAnimSegment* HAnimSegment1109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1109->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment1109);

CHAnimSegment* HAnimSegment1110 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1110->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment1110);

CHAnimSegment* HAnimSegment1111 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1111->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment1111);

CHAnimSegment* HAnimSegment1112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1112->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment1112);

CHAnimSegment* HAnimSegment1113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1113->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment1113);

CHAnimSegment* HAnimSegment1114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1114->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment1114);

CHAnimSegment* HAnimSegment1115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1115->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment1115);

CHAnimSegment* HAnimSegment1116 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1116->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment1116);

CHAnimSegment* HAnimSegment1117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1117->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1117);

CHAnimSegment* HAnimSegment1118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1118->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1118);

CHAnimSegment* HAnimSegment1119 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1119->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment1119);

CHAnimSegment* HAnimSegment1120 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1120->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment1120);

CHAnimSegment* HAnimSegment1121 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1121->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment1121);

CHAnimSegment* HAnimSegment1122 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1122->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment1122);

CHAnimSegment* HAnimSegment1123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1123->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment1123);

CHAnimSegment* HAnimSegment1124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1124->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment1124);

CHAnimSegment* HAnimSegment1125 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1125->setUSE("hanim_l_clavicle");
HAnimHumanoid23->setSegments(*HAnimSegment1125);

CHAnimSegment* HAnimSegment1126 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1126->setUSE("hanim_r_clavicle");
HAnimHumanoid23->setSegments(*HAnimSegment1126);

CHAnimSegment* HAnimSegment1127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1127->setUSE("hanim_l_eyeball");
HAnimHumanoid23->setSegments(*HAnimSegment1127);

CHAnimSegment* HAnimSegment1128 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1128->setUSE("hanim_r_eyeball");
HAnimHumanoid23->setSegments(*HAnimSegment1128);

CHAnimSegment* HAnimSegment1129 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1129->setUSE("hanim_l_eyebrow");
HAnimHumanoid23->setSegments(*HAnimSegment1129);

CHAnimSegment* HAnimSegment1130 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1130->setUSE("hanim_r_eyebrow");
HAnimHumanoid23->setSegments(*HAnimSegment1130);

CHAnimSegment* HAnimSegment1131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1131->setUSE("hanim_l_eyelid");
HAnimHumanoid23->setSegments(*HAnimSegment1131);

CHAnimSegment* HAnimSegment1132 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1132->setUSE("hanim_r_eyelid");
HAnimHumanoid23->setSegments(*HAnimSegment1132);

CHAnimSegment* HAnimSegment1133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1133->setUSE("hanim_l_forearm");
HAnimHumanoid23->setSegments(*HAnimSegment1133);

CHAnimSegment* HAnimSegment1134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1134->setUSE("hanim_r_forearm");
HAnimHumanoid23->setSegments(*HAnimSegment1134);

CHAnimSegment* HAnimSegment1135 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1135->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid23->setSegments(*HAnimSegment1135);

CHAnimSegment* HAnimSegment1136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1136->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid23->setSegments(*HAnimSegment1136);

CHAnimSegment* HAnimSegment1137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1137->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid23->setSegments(*HAnimSegment1137);

CHAnimSegment* HAnimSegment1138 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1138->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid23->setSegments(*HAnimSegment1138);

CHAnimSegment* HAnimSegment1139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1139->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid23->setSegments(*HAnimSegment1139);

CHAnimSegment* HAnimSegment1140 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1140->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid23->setSegments(*HAnimSegment1140);

CHAnimSegment* HAnimSegment1141 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1141->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid23->setSegments(*HAnimSegment1141);

CHAnimSegment* HAnimSegment1142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1142->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid23->setSegments(*HAnimSegment1142);

CHAnimSegment* HAnimSegment1143 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1143->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid23->setSegments(*HAnimSegment1143);

CHAnimSegment* HAnimSegment1144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1144->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid23->setSegments(*HAnimSegment1144);

CHAnimSegment* HAnimSegment1145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1145->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid23->setSegments(*HAnimSegment1145);

CHAnimSegment* HAnimSegment1146 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1146->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid23->setSegments(*HAnimSegment1146);

CHAnimSegment* HAnimSegment1147 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1147->setUSE("hanim_l_scapula");
HAnimHumanoid23->setSegments(*HAnimSegment1147);

CHAnimSegment* HAnimSegment1148 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1148->setUSE("hanim_r_scapula");
HAnimHumanoid23->setSegments(*HAnimSegment1148);

CHAnimSegment* HAnimSegment1149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1149->setUSE("hanim_l_talus");
HAnimHumanoid23->setSegments(*HAnimSegment1149);

CHAnimSegment* HAnimSegment1150 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1150->setUSE("hanim_r_talus");
HAnimHumanoid23->setSegments(*HAnimSegment1150);

CHAnimSegment* HAnimSegment1151 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1151->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1151);

CHAnimSegment* HAnimSegment1152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1152->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1152);

CHAnimSegment* HAnimSegment1153 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1153->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1153);

CHAnimSegment* HAnimSegment1154 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1154->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment1154);

CHAnimSegment* HAnimSegment1155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1155->setUSE("hanim_l_thigh");
HAnimHumanoid23->setSegments(*HAnimSegment1155);

CHAnimSegment* HAnimSegment1156 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1156->setUSE("hanim_r_thigh");
HAnimHumanoid23->setSegments(*HAnimSegment1156);

CHAnimSegment* HAnimSegment1157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1157->setUSE("hanim_l_upperarm");
HAnimHumanoid23->setSegments(*HAnimSegment1157);

CHAnimSegment* HAnimSegment1158 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1158->setUSE("hanim_r_upperarm");
HAnimHumanoid23->setSegments(*HAnimSegment1158);

group->addChildren(*HAnimHumanoid23);

X3D0->setScene(*Scene19);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
