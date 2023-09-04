/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("KoreanCharacter05Ju.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Jin Hoon Lee and Min Joo Lee");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("translator");
meta4->setContent("Chul Hee Jung and Myeong Won Lee");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("31 March 2011");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translated");
meta6->setContent("1 November 2014");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("23 December 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("HAnimJoint and HAnimSegment names upgraded to HAnim2 but graph topology has inconsistencies that do not match loa=1 specification hierarchy");
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
meta13->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter05Ju.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("Suwon University HAnim Editor");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("Gnu Image Manipulation Program, http://www.gimp.org");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("generator");
meta17->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta17);

Ccomponent* component18 = new Ccomponent();
component18->setName("HAnim");
component18->setLevel(1);
head1->addComponent(*component18);

X3D0->setHead(*head1);

CScene* Scene19 = new CScene();
CWorldInfo* WorldInfo20 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo20->setTitle("KoreanCharacter05Ju.x3d");
group->addChildren(*WorldInfo20);

CNavigationInfo* NavigationInfo21 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo21->setSpeed(1.5);
group->addChildren(*NavigationInfo21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDescription("Ju");
Viewpoint22->setPosition(new float[3]{0,1,3});
Viewpoint22->setCenterOfRotation(new float[3]{0,1,0});
group->addChildren(*Viewpoint22);

CHAnimHumanoid* HAnimHumanoid23 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid23->setDEF("hanim_Ju");
HAnimHumanoid23->setVersion("2.0");
HAnimHumanoid23->setName("Ju");
HAnimHumanoid23->setScale(new float[3]{0.0225,0.0225,0.0225});
CMetadataSet* MetadataSet24 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet24->setName("HAnimHumanoid.info");
MetadataSet24->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString25 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString25->setName("humanoidVersion");
MetadataString25->setValue(new CString[1]{"2.0"}, 1);
MetadataSet24->setMetadata(*MetadataString25);

HAnimHumanoid23->setMetadata(*MetadataSet24);

CHAnimJoint* HAnimJoint26 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint26->setDEF("hanim_humanoid_root");
HAnimJoint26->setName("humanoid_root");
HAnimJoint26->setCenter(new float[3]{0,36,-0.008798});
CHAnimSegment* HAnimSegment27 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment27->setDEF("hanim_sacrum");
HAnimSegment27->setName("sacrum");
CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{0,36,-0.008798});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Material31->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance30->setMaterial(*Material31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setDEF("JuTextureAtlas");
ImageTexture32->setUrl(new CString[2]{"images/Ju.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ju.png"}, 2);
Appearance30->setTexture(*ImageTexture32);

Shape29->setAppearance(*Appearance30);

CIndexedFaceSet* IndexedFaceSet33 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet33->setCreaseAngle(1.57);
IndexedFaceSet33->setTexCoordIndex(new int[480]{2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1});
IndexedFaceSet33->setCoordIndex(new int[480]{2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1});
CTextureCoordinate* TextureCoordinate34 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate34->setPoint(new float[124]{0.995,0.6227,0.9911,0.5634,0.9445,0.5634,0.9587,0.6143,0.8611,0.5667,0.8645,0.6158,0.8296,0.5725,0.8297,0.6181,0.7843,0.5725,0.7986,0.6221,0.7343,0.5716,0.7402,0.6181,0.6899,0.5733,0.7033,0.6238,0.7343,0.5716,0.7402,0.6181,0.7843,0.5724,0.7986,0.6221,0.8296,0.5725,0.8297,0.6181,0.8611,0.5667,0.8646,0.6158,0.9445,0.5634,0.9587,0.6143,0.9874,0.5161,0.9409,0.5169,0.8667,0.527,0.8296,0.5279,0.7882,0.5304,0.7381,0.5276,0.6693,0.5234,0.738,0.5277,0.7882,0.5305,0.8296,0.5279,0.8666,0.5271,0.9409,0.517,0.9852,0.4793,0.8833,0.4954,0.8658,0.4954,0.8297,0.4954,0.7933,0.4954,0.7672,0.4952,0.6706,0.4859,0.7672,0.4952,0.7936,0.4954,0.8297,0.4954,0.8655,0.4953,0.8832,0.4954,0.8296,0.4836,0.995,0.6227,0.9587,0.6143,0.8645,0.6158,0.8297,0.6181,0.7986,0.6221,0.7402,0.6181,0.7033,0.6238,0.7402,0.6181,0.7986,0.6221,0.8297,0.6181,0.8646,0.6158,0.9587,0.6143,0.8402,0.6186});
IndexedFaceSet33->setTexCoord(*TextureCoordinate34);

CCoordinate* Coordinate35 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate35->setPoint(new float[186]{0,0.4454,-0.7459,0,0.0007,-0.815,-0.5564,0.0003,-0.695,-0.4789,0.4454,-0.6425,-0.9644,-0.0008,-0.4321,-0.8298,0.4454,-0.3599,-1.113,-0.0019,0.0252,-0.958,0.4454,0.0246,-0.967,-0.0019,0.4693,-0.8331,0.4454,0.3868,-0.5615,-0.0019,0.6928,-0.4847,0.4454,0.5842,0,-0.0021,0.815,0,0.4454,0.7124,0.5615,-0.0023,0.6928,0.4843,0.4454,0.5843,0.967,-0.0023,0.4693,0.8333,0.4454,0.3864,1.113,-0.0021,0.0254,0.9579,0.4454,0.025,0.9643,-0.001,-0.4322,0.8295,0.4454,-0.3602,0.5564,0.0003,-0.695,0.4789,0.4454,-0.6425,0,-0.4517,-0.6943,-0.482,-0.4521,-0.5899,-0.8344,-0.4524,-0.3056,-0.9635,-0.4517,0.0254,-0.8367,-0.4526,0.4089,-0.4855,-0.4549,0.587,0,-0.4553,0.6926,0.4853,-0.4539,0.5876,0.8372,-0.4519,0.4089,0.9634,-0.4519,0.0254,0.8348,-0.4521,-0.3053,0.4817,-0.4517,-0.5903,0,-0.7806,-0.3645,-0.2802,-0.7803,-0.3039,-0.481,-0.7808,-0.1965,-0.5545,-0.7803,0.0248,-0.4804,-0.7802,0.248,-0.2774,-0.7821,0.4083,0,-0.783,0.4674,0.2758,-0.7826,0.4083,0.4803,-0.7808,0.2466,0.5547,-0.7802,0.0246,0.4812,-0.7814,-0.1946,0.2787,-0.7807,-0.3037,0,-0.8996,0.0253,-0.0001,0.7482,-0.476,-0.3509,0.7482,-0.4061,-0.5969,0.7482,-0.2229,-0.6804,0.7482,0.0088,-0.6042,0.7482,0.2133,-0.3645,0.7482,0.3391,-0.0001,0.7482,0.4284,0.364,0.7482,0.3391,0.6042,0.7482,0.213,0.6802,0.7482,0.0091,0.5965,0.7482,-0.2231,0.3508,0.7482,-0.4061,-0.0002,0.8996,-0.0243});
IndexedFaceSet33->setCoord(*Coordinate35);

Shape29->setGeometry(IndexedFaceSet33);

Transform28->addChild(*Shape29);

HAnimSegment27->addChildren(*Transform28);

HAnimJoint26->addChildren(*HAnimSegment27);

CHAnimJoint* HAnimJoint36 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint36->setDEF("hanim_l_hip");
HAnimJoint36->setName("l_hip");
HAnimJoint36->setCenter(new float[3]{3.22,33.62,-0.2832});
CHAnimSegment* HAnimSegment37 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment37->setDEF("hanim_l_thigh");
HAnimSegment37->setName("l_thigh");
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setTranslation(new float[3]{3.22,33.62,-0.2832});
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance40->setMaterial(*Material41);

CImageTexture* ImageTexture42 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture42->setUSE("JuTextureAtlas");
Appearance40->setTexture(*ImageTexture42);

Shape39->setAppearance(*Appearance40);

CIndexedFaceSet* IndexedFaceSet43 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet43->setCreaseAngle(1.57);
IndexedFaceSet43->setTexCoordIndex(new int[384]{5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,29,28,35,-1,35,36,29,-1,28,30,37,-1,37,35,28,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,29,36,-1,36,41,34,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1});
IndexedFaceSet43->setCoordIndex(new int[384]{33,32,31,-1,31,30,29,-1,31,29,28,-1,33,31,28,-1,34,33,28,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,28,29,1,-1,1,0,28,-1,29,30,2,-1,2,1,29,-1,30,31,3,-1,3,2,30,-1,31,32,4,-1,4,3,31,-1,32,33,5,-1,5,4,32,-1,33,34,6,-1,6,5,33,-1,34,28,0,-1,0,6,34,-1,21,22,35,-1,35,36,21,-1,22,23,37,-1,37,35,22,-1,23,24,38,-1,38,37,23,-1,24,25,39,-1,39,38,24,-1,25,26,40,-1,40,39,25,-1,26,27,41,-1,41,40,26,-1,27,21,36,-1,36,41,27,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1});
CTextureCoordinate* TextureCoordinate44 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate44->setPoint(new float[100]{0.7387,0.5078,0.7519,0.5078,0.7092,0.5078,0.6855,0.5078,0.6855,0.5078,0.7092,0.5078,0.7387,0.5078,0.7641,0.4868,0.7464,0.4472,0.7641,0.4472,0.7464,0.4868,0.7065,0.4472,0.7065,0.4868,0.6788,0.4472,0.6788,0.4868,0.6788,0.4472,0.6788,0.4868,0.7065,0.4472,0.7065,0.4868,0.7464,0.4472,0.7464,0.4868,0.7464,0.3861,0.7641,0.3861,0.7065,0.3861,0.6788,0.3861,0.6788,0.3861,0.7065,0.3861,0.7464,0.3861,0.743,0.3252,0.7584,0.3252,0.7085,0.3252,0.6882,0.3252,0.6882,0.3252,0.7085,0.3252,0.743,0.3252,0.7383,0.2938,0.7506,0.2938,0.7107,0.2938,0.6945,0.2938,0.6945,0.2938,0.7107,0.2938,0.7383,0.2938,0.7284,0.2787,0.7342,0.2787,0.7155,0.2787,0.7079,0.2787,0.7079,0.2787,0.7155,0.2787,0.7284,0.2787,0.7197,0.2768});
IndexedFaceSet43->setTexCoord(*TextureCoordinate44);

CCoordinate* Coordinate45 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate45->setPoint(new float[150]{2.617,2.231,0.2976,1.527,2.231,2.592,-0.9211,2.231,3.159,-2.617,2.231,1.571,-2.617,2.231,-1.571,-0.9211,2.231,-3.159,1.527,2.231,-2.29,2.617,-1.238,0.2976,1.527,-1.238,2.592,-0.9211,-1.238,3.159,-2.617,-1.238,1.571,-2.617,-1.238,-0.9758,-0.9211,-1.238,-3.009,1.527,-1.238,-2.442,2.617,-6.593,0.2976,1.527,-6.593,2.58,-0.9211,-6.593,3.147,-2.617,-6.593,1.571,-2.617,-6.593,-0.9758,-0.9211,-6.593,-2.564,1.527,-6.593,-1.997,2.264,-11.92,0.2976,1.321,-11.92,2.282,-0.7969,-11.92,2.773,-2.046,-11.92,1.399,-2.046,-11.92,-0.8039,-0.7969,-11.92,-2.177,1.321,-11.92,-1.687,1.864,4.073,0.2976,1.058,4.073,1.995,-0.7536,4.073,2.415,-2.206,4.073,1.24,-2.206,4.073,-0.6446,-0.7536,4.073,-1.819,1.058,4.073,-1.4,1.033,-14.67,1.883,1.786,-14.67,0.2976,-0.6591,-14.67,2.275,-1.657,-14.67,1.178,-1.657,-14.67,-0.5825,-0.6591,-14.67,-1.68,1.033,-14.67,-1.288,0.4256,-15.99,1.041,0.7788,-15.99,0.2976,-0.3682,-15.99,1.225,-0.8362,-15.99,0.7104,-0.8362,-15.99,-0.1152,-0.3682,-15.99,-0.63,0.4256,-15.99,-0.4463,-0.1114,-16.17,0.2976});
IndexedFaceSet43->setCoord(*Coordinate45);

Shape39->setGeometry(IndexedFaceSet43);

Transform38->addChild(*Shape39);

HAnimSegment37->addChildren(*Transform38);

HAnimJoint36->addChildren(*HAnimSegment37);

CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setDEF("hanim_l_knee");
HAnimJoint46->setName("l_knee");
HAnimJoint46->setCenter(new float[3]{3.454,18.67,-0.02158});
CHAnimSegment* HAnimSegment47 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment47->setDEF("hanim_l_calf");
HAnimSegment47->setName("l_calf");
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setTranslation(new float[3]{3.454,18.67,-0.02158});
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance50->setMaterial(*Material51);

CImageTexture* ImageTexture52 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture52->setUSE("JuTextureAtlas");
Appearance50->setTexture(*ImageTexture52);

Shape49->setAppearance(*Appearance50);

CIndexedFaceSet* IndexedFaceSet53 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet53->setCreaseAngle(1.57);
IndexedFaceSet53->setTexCoordIndex(new int[300]{4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
IndexedFaceSet53->setCoordIndex(new int[300]{4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
CTextureCoordinate* TextureCoordinate54 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate54->setPoint(new float[84]{0.7637,0.172,0.755,0.172,0.7356,0.172,0.72,0.172,0.72,0.172,0.7356,0.172,0.755,0.172,0.8032,0.2271,0.7818,0.2173,0.7763,0.1976,0.7978,0.2004,0.7264,0.2173,0.728,0.1976,0.6912,0.2271,0.6892,0.2004,0.6912,0.2347,0.6892,0.2004,0.7264,0.2347,0.728,0.2004,0.7818,0.2347,0.7763,0.2004,0.7735,0.1816,0.7933,0.1816,0.729,0.1816,0.6933,0.1816,0.6933,0.1816,0.729,0.1816,0.7735,0.1816,0.806,0.339,0.7815,0.3388,0.7265,0.3388,0.6824,0.339,0.6824,0.3392,0.7265,0.3392,0.7815,0.3392,0.7634,0.3549,0.755,0.3548,0.736,0.3548,0.7207,0.3549,0.7207,0.355,0.736,0.355,0.755,0.355});
IndexedFaceSet53->setTexCoord(*TextureCoordinate54);

CCoordinate* Coordinate55 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate55->setPoint(new float[126]{0.7406,0.9639,0.0216,0.4117,0.9639,0.8655,-0.3272,0.9639,1.036,-0.9197,0.9639,0.5579,-0.9197,0.9639,-0.3619,-0.3272,0.9639,-0.8401,0.4117,0.9639,-0.6694,2.238,-4.201,0.0216,1.426,-3.284,1.868,1.219,-1.439,2.239,2.036,-1.701,0.0216,-0.6748,-3.284,2.375,-0.6153,-1.439,2.686,-2.01,-4.201,1.161,-2.086,-1.701,0.9061,-2.01,-4.913,-1.265,-2.086,-1.701,-0.8628,-0.6748,-4.913,-2.686,-0.6153,-1.701,-2.191,1.426,-4.913,-2.179,1.219,-1.701,-1.744,1.112,0.0646,1.755,1.864,0.0646,0.0216,-0.5772,0.0646,2.145,-1.932,0.0646,1.051,-1.932,0.0646,-0.8553,-0.5772,0.0646,-1.907,1.112,0.0646,-1.517,2.345,-14.69,-0.0151,1.416,-14.67,2.102,-0.6712,-14.67,2.624,-2.345,-14.69,1.16,-2.345,-14.71,-1.342,-0.6712,-14.71,-2.38,1.416,-14.71,-1.857,0.73,-16.18,0.0221,0.4092,-16.17,0.7532,-0.3118,-16.17,0.9337,-0.89,-16.18,0.4278,-0.89,-16.19,-0.4362,-0.3118,-16.19,-0.7945,0.4092,-16.19,-0.614});
IndexedFaceSet53->setCoord(*Coordinate55);

Shape49->setGeometry(IndexedFaceSet53);

Transform48->addChild(*Shape49);

HAnimSegment47->addChildren(*Transform48);

HAnimJoint46->addChildren(*HAnimSegment47);

CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setDEF("hanim_l_talocrural");
HAnimJoint56->setName("l_talocrural");
HAnimJoint56->setCenter(new float[3]{3.467,3.522,0.118});
CHAnimSegment* HAnimSegment57 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment57->setDEF("hanim_l_talus");
HAnimSegment57->setName("l_talus");
CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setTranslation(new float[3]{3.467,3.522,0.118});
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance60->setMaterial(*Material61);

CImageTexture* ImageTexture62 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture62->setUSE("JuTextureAtlas");
Appearance60->setTexture(*ImageTexture62);

Shape59->setAppearance(*Appearance60);

CIndexedFaceSet* IndexedFaceSet63 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet63->setCreaseAngle(1.57);
IndexedFaceSet63->setTexCoordIndex(new int[288]{1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1});
IndexedFaceSet63->setCoordIndex(new int[288]{1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1});
CTextureCoordinate* TextureCoordinate64 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate64->setPoint(new float[114]{0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4623,0.4901,0.4777,0.4914,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4777,0.4914,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4284,0.4641,0.4284,0.4641,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4611,0.4911,0.4777,0.4914,0.4611,0.4911,0.4321,0.4164,0.4315,0.3728,0.4321,0.4164,0.4315,0.3728,0.4315,0.3728,0.4309,0.4635,0.4284,0.4641,0.4321,0.4164,0.4321,0.4164,0.4284,0.4641,0.4309,0.4635,0.4315,0.3728,0.4315,0.3728,0.4315,0.3728,0.4804,0.417,0.4726,0.3714,0.4687,0.4544,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4687,0.4544});
IndexedFaceSet63->setTexCoord(*TextureCoordinate64);

CCoordinate* Coordinate65 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate65->setPoint(new float[114]{0.8966,-0.0174,-1.568,1.521,-0.0174,0.4019,0,-0.0174,-1.568,1.288,0.6634,0.3302,0.7503,0.6634,-1.364,0,0.6634,-1.364,0,0.6634,1.372,-1.521,-0.0174,0.4019,-1.288,0.6634,0.3302,-0.7503,0.6634,-1.364,-0.8967,-0.0174,-1.568,0,-0.0174,1.633,1.556,-0.2684,1.333,-1.556,-0.2684,1.333,1.293,-1.746,-2.684,1.293,-3.579,-1.568,0,-3.579,-1.568,1.018,-0.5447,-1.908,0,-0.5447,-1.908,-1.293,-1.746,-2.684,0,-1.746,-2.684,-1.018,-0.5447,-1.908,-1.293,-3.579,-1.568,2.687,-1.746,0.4019,1.918,-3.579,0.4019,1.877,-0.5447,0.4019,-2.687,-1.746,0.4019,-1.877,-0.5447,0.4019,-1.918,-3.579,0.4019,0,-3.579,0.4019,1.708,-3.439,1.272,2.332,-1.78,1.272,-2.332,-1.78,1.272,-1.708,-3.439,1.272,0,-3.439,1.272,1.469,-0.8455,1.311,-1.469,-0.8455,1.311,0,-0.5969,1.593});
IndexedFaceSet63->setCoord(*Coordinate65);

Shape59->setGeometry(IndexedFaceSet63);

Transform58->addChild(*Shape59);

HAnimSegment57->addChildren(*Transform58);

HAnimJoint56->addChildren(*HAnimSegment57);

CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint66->setName("l_metatarsophalangeal_2");
HAnimJoint66->setCenter(new float[3]{3.467,3.251,1.465});
CHAnimSegment* HAnimSegment67 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment67->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimSegment67->setName("l_tarsal_proximal_phalanx_2");
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setTranslation(new float[3]{3.467,3.251,1.465});
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance70 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material71 = (CMaterial *)(m_pScene.createNode("Material"));
Material71->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance70->setMaterial(*Material71);

CImageTexture* ImageTexture72 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture72->setUSE("JuTextureAtlas");
Appearance70->setTexture(*ImageTexture72);

Shape69->setAppearance(*Appearance70);

CIndexedFaceSet* IndexedFaceSet73 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet73->setCreaseAngle(1.57);
IndexedFaceSet73->setTexCoordIndex(new int[264]{4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,18,-1,18,3,1,-1,2,20,12,-1,12,5,2,-1,12,10,7,-1,15,12,7,-1,6,15,7,-1,8,16,15,-1,15,6,8,-1,8,11,17,-1,17,16,8,-1,9,10,12,-1,12,19,9,-1,23,24,25,-1,23,25,26,-1,23,26,27,-1,22,23,27,-1,22,27,21,-1,0,1,22,-1,22,21,0,-1,1,3,23,-1,23,22,1,-1,11,8,24,-1,24,23,11,-1,8,6,25,-1,25,24,8,-1,6,7,26,-1,26,25,6,-1,7,4,27,-1,27,26,7,-1,4,0,21,-1,21,27,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,29,30,12,-1,12,28,29,-1,31,32,30,-1,30,29,31,-1,32,31,33,-1,12,30,34,-1,34,12,12,-1,34,30,32,-1,32,35,34,-1,35,32,33,-1,33,36,35,-1,37,28,12,-1,12,12,37,-1,38,40,12,-1,12,39,38,-1,41,38,39,-1,39,42,41,-1,42,45,41,-1,12,12,43,-1,43,39,12,-1,43,44,42,-1,42,39,43,-1,44,46,45,-1,45,42,44,-1,47,12,12,-1,12,40,47,-1});
IndexedFaceSet73->setCoordIndex(new int[264]{3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1});
CTextureCoordinate* TextureCoordinate74 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate74->setPoint(new float[96]{0.4804,0.417,0.4726,0.3714,0.4777,0.4914,0.4726,0.3714,0.4687,0.4544,0.4611,0.4911,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4777,0.4914,0.4611,0.4911,0.4726,0.3714,0.5184,0.4692,0.5392,0.409,0.5352,0.3721,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.537,0.3715,0.5123,0.477,0.5123,0.477,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.5785,0.4537,0.601,0.4307,0.5382,0.4079,0.6345,0.3741,0.5897,0.3729,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.5123,0.477,0.601,0.4307,0.5382,0.4079,0.5785,0.4537,0.6345,0.3741,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.5897,0.3729,0.537,0.3715,0.5123,0.477});
IndexedFaceSet73->setTexCoord(*TextureCoordinate74);

CCoordinate* Coordinate75 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate75->setPoint(new float[105]{2.687,-1.475,-0.9449,1.918,-3.308,-0.9449,0,0.2536,0.2858,1.877,-0.2736,-0.9449,1.556,0.0026,-0.0141,-2.687,-1.475,-0.9449,-1.877,-0.2736,-0.9449,-1.918,-3.308,-0.9449,-1.556,0.0026,-0.0141,0,-3.308,-0.9449,1.965,-3.308,0.8573,-1.965,-3.308,0.8573,0,-3.308,0.8573,2.208,-1.501,-1.786,1.607,-2.668,-1.786,0,-2.668,-1.786,-1.607,-2.668,-1.786,-2.208,-1.501,-1.786,-1.599,-0.5151,-1.786,1.599,-0.5151,-1.786,1.638,-0.5877,2.175,2.034,-2.055,3.865,2.034,-3.308,3.522,0,-2.055,5.096,0,-0.4955,3.684,1.597,-0.2925,1.08,2.442,-1.692,0.8573,-2.034,-2.055,3.865,-1.638,-0.5877,2.175,0,-3.308,4.753,-2.034,-3.308,3.522,-1.597,-0.2925,1.08,-2.442,-1.692,0.8573,0,-3.308,3.522,0,-0.0249,1.55});
IndexedFaceSet73->setCoord(*Coordinate75);

Shape69->setGeometry(IndexedFaceSet73);

Transform68->addChild(*Shape69);

HAnimSegment67->addChildren(*Transform68);

HAnimJoint66->addChildren(*HAnimSegment67);

HAnimJoint56->addChildren(*HAnimJoint66);

HAnimJoint46->addChildren(*HAnimJoint56);

HAnimJoint36->addChildren(*HAnimJoint46);

HAnimJoint26->addChildren(*HAnimJoint36);

CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setDEF("hanim_r_hip");
HAnimJoint76->setName("r_hip");
HAnimJoint76->setCenter(new float[3]{-3.22,33.62,-0.2832});
CHAnimSegment* HAnimSegment77 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment77->setDEF("hanim_r_thigh");
HAnimSegment77->setName("r_thigh");
CTransform* Transform78 = (CTransform *)(m_pScene.createNode("Transform"));
Transform78->setTranslation(new float[3]{-3.22,33.62,-0.2832});
CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance80 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material81 = (CMaterial *)(m_pScene.createNode("Material"));
Material81->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance80->setMaterial(*Material81);

CImageTexture* ImageTexture82 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture82->setUSE("JuTextureAtlas");
Appearance80->setTexture(*ImageTexture82);

Shape79->setAppearance(*Appearance80);

CIndexedFaceSet* IndexedFaceSet83 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet83->setCreaseAngle(1.57);
IndexedFaceSet83->setTexCoordIndex(new int[384]{0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,29,36,35,-1,35,28,29,-1,28,35,37,-1,37,30,28,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,36,-1,36,29,34,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1});
IndexedFaceSet83->setCoordIndex(new int[384]{29,30,31,-1,28,29,31,-1,31,32,33,-1,28,31,33,-1,34,28,33,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,28,0,1,-1,1,29,28,-1,29,1,2,-1,2,30,29,-1,30,2,3,-1,3,31,30,-1,31,3,4,-1,4,32,31,-1,32,4,5,-1,5,33,32,-1,33,5,6,-1,6,34,33,-1,34,6,0,-1,0,28,34,-1,21,36,35,-1,35,22,21,-1,22,35,37,-1,37,23,22,-1,23,37,38,-1,38,24,23,-1,24,38,39,-1,39,25,24,-1,25,39,40,-1,40,26,25,-1,26,40,41,-1,41,27,26,-1,27,41,36,-1,36,21,27,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1});
CTextureCoordinate* TextureCoordinate84 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate84->setPoint(new float[100]{0.7387,0.5078,0.7519,0.5078,0.7092,0.5078,0.6855,0.5078,0.6855,0.5078,0.7092,0.5078,0.7387,0.5078,0.7641,0.4868,0.7464,0.4472,0.7641,0.4472,0.7464,0.4868,0.7065,0.4472,0.7065,0.4868,0.6788,0.4472,0.6788,0.4868,0.6788,0.4472,0.6788,0.4868,0.7065,0.4472,0.7065,0.4868,0.7464,0.4472,0.7464,0.4868,0.7464,0.3861,0.7641,0.3861,0.7065,0.3861,0.6788,0.3861,0.6788,0.3861,0.7065,0.3861,0.7464,0.3861,0.743,0.3252,0.7584,0.3252,0.7085,0.3252,0.6882,0.3252,0.6882,0.3252,0.7085,0.3252,0.743,0.3252,0.7383,0.2938,0.7506,0.2938,0.7107,0.2938,0.6945,0.2938,0.6945,0.2938,0.7107,0.2938,0.7383,0.2938,0.7284,0.2787,0.7342,0.2787,0.7155,0.2787,0.7079,0.2787,0.7079,0.2787,0.7155,0.2787,0.7284,0.2787,0.7197,0.2768});
IndexedFaceSet83->setTexCoord(*TextureCoordinate84);

CCoordinate* Coordinate85 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate85->setPoint(new float[150]{-2.617,2.231,0.2976,-1.527,2.231,2.592,0.9211,2.231,3.159,2.617,2.231,1.571,2.617,2.231,-1.571,0.9211,2.231,-3.159,-1.527,2.231,-2.29,-2.617,-1.238,0.2976,-1.527,-1.238,2.592,0.9211,-1.238,3.159,2.617,-1.238,1.571,2.617,-1.238,-0.9758,0.9211,-1.238,-3.009,-1.527,-1.238,-2.442,-2.617,-6.593,0.2976,-1.527,-6.593,2.58,0.9211,-6.593,3.147,2.617,-6.593,1.571,2.617,-6.593,-0.9758,0.9211,-6.593,-2.564,-1.527,-6.593,-1.997,-2.264,-11.92,0.2976,-1.321,-11.92,2.282,0.7969,-11.92,2.773,2.046,-11.92,1.399,2.046,-11.92,-0.8039,0.7969,-11.92,-2.177,-1.321,-11.92,-1.687,-1.864,4.073,0.2976,-1.058,4.073,1.995,0.7536,4.073,2.415,2.206,4.073,1.24,2.206,4.073,-0.6446,0.7536,4.073,-1.819,-1.058,4.073,-1.4,-1.033,-14.67,1.883,-1.786,-14.67,0.2976,0.6591,-14.67,2.275,1.657,-14.67,1.178,1.657,-14.67,-0.5825,0.6591,-14.67,-1.68,-1.033,-14.67,-1.288,-0.4256,-15.99,1.041,-0.7788,-15.99,0.2976,0.3682,-15.99,1.225,0.8362,-15.99,0.7104,0.8362,-15.99,-0.1152,0.3682,-15.99,-0.63,-0.4256,-15.99,-0.4463,0.1114,-16.17,0.2976});
IndexedFaceSet83->setCoord(*Coordinate85);

Shape79->setGeometry(IndexedFaceSet83);

Transform78->addChild(*Shape79);

HAnimSegment77->addChildren(*Transform78);

HAnimJoint76->addChildren(*HAnimSegment77);

CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setDEF("hanim_r_knee");
HAnimJoint86->setName("r_knee");
HAnimJoint86->setCenter(new float[3]{-3.454,18.67,-0.02158});
CHAnimSegment* HAnimSegment87 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment87->setDEF("hanim_r_calf");
HAnimSegment87->setName("r_calf");
CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setTranslation(new float[3]{-3.454,18.67,-0.02158});
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance90 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material91 = (CMaterial *)(m_pScene.createNode("Material"));
Material91->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance90->setMaterial(*Material91);

CImageTexture* ImageTexture92 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture92->setUSE("JuTextureAtlas");
Appearance90->setTexture(*ImageTexture92);

Shape89->setAppearance(*Appearance90);

CIndexedFaceSet* IndexedFaceSet93 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet93->setCreaseAngle(1.57);
IndexedFaceSet93->setTexCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
IndexedFaceSet93->setCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
CTextureCoordinate* TextureCoordinate94 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate94->setPoint(new float[84]{0.7637,0.172,0.755,0.172,0.7356,0.172,0.72,0.172,0.72,0.172,0.7356,0.172,0.755,0.172,0.8032,0.2271,0.7818,0.2173,0.7763,0.1976,0.7978,0.2004,0.7264,0.2173,0.728,0.1976,0.6912,0.2271,0.6892,0.2004,0.6912,0.2347,0.6892,0.2004,0.7264,0.2347,0.728,0.2004,0.7818,0.2347,0.7763,0.2004,0.7735,0.1816,0.7933,0.1816,0.729,0.1816,0.6933,0.1816,0.6933,0.1816,0.729,0.1816,0.7735,0.1816,0.806,0.339,0.7815,0.3388,0.7265,0.3388,0.6824,0.339,0.6824,0.3392,0.7265,0.3392,0.7815,0.3392,0.7634,0.3549,0.755,0.3548,0.736,0.3548,0.7207,0.3549,0.7207,0.355,0.736,0.355,0.755,0.355});
IndexedFaceSet93->setTexCoord(*TextureCoordinate94);

CCoordinate* Coordinate95 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate95->setPoint(new float[126]{-0.7406,0.9639,0.0216,-0.4117,0.9639,0.8655,0.3272,0.9639,1.036,0.9197,0.9639,0.5579,0.9197,0.9639,-0.3619,0.3272,0.9639,-0.8401,-0.4117,0.9639,-0.6694,-2.238,-4.201,0.0216,-1.426,-3.284,1.868,-1.219,-1.439,2.239,-2.036,-1.701,0.0216,0.6748,-3.284,2.375,0.6153,-1.439,2.686,2.01,-4.201,1.161,2.086,-1.701,0.9061,2.01,-4.913,-1.265,2.086,-1.701,-0.8628,0.6748,-4.913,-2.686,0.6153,-1.701,-2.191,-1.426,-4.913,-2.179,-1.219,-1.701,-1.744,-1.112,0.0646,1.755,-1.864,0.0646,0.0216,0.5772,0.0646,2.145,1.932,0.0646,1.051,1.932,0.0646,-0.8553,0.5772,0.0646,-1.907,-1.112,0.0646,-1.517,-2.345,-14.69,-0.0151,-1.416,-14.67,2.102,0.6712,-14.67,2.624,2.345,-14.69,1.16,2.345,-14.71,-1.342,0.6712,-14.71,-2.38,-1.416,-14.71,-1.857,-0.73,-16.18,0.0221,-0.4092,-16.17,0.7532,0.3118,-16.17,0.9337,0.89,-16.18,0.4278,0.89,-16.19,-0.4362,0.3118,-16.19,-0.7945,-0.4092,-16.19,-0.614});
IndexedFaceSet93->setCoord(*Coordinate95);

Shape89->setGeometry(IndexedFaceSet93);

Transform88->addChild(*Shape89);

HAnimSegment87->addChildren(*Transform88);

HAnimJoint86->addChildren(*HAnimSegment87);

CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setDEF("hanim_r_talocrural");
HAnimJoint96->setName("r_talocrural");
HAnimJoint96->setCenter(new float[3]{-3.679,3.522,0.118});
CHAnimSegment* HAnimSegment97 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment97->setDEF("hanim_r_talus");
HAnimSegment97->setName("r_talus");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setTranslation(new float[3]{-3.679,3.522,0.118});
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance100->setMaterial(*Material101);

CImageTexture* ImageTexture102 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture102->setUSE("JuTextureAtlas");
Appearance100->setTexture(*ImageTexture102);

Shape99->setAppearance(*Appearance100);

CIndexedFaceSet* IndexedFaceSet103 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet103->setCreaseAngle(1.57);
IndexedFaceSet103->setTexCoordIndex(new int[288]{1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1});
IndexedFaceSet103->setCoordIndex(new int[288]{1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1});
CTextureCoordinate* TextureCoordinate104 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate104->setPoint(new float[114]{0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4623,0.4901,0.4777,0.4914,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4777,0.4914,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4284,0.4641,0.4284,0.4641,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4611,0.4911,0.4777,0.4914,0.4611,0.4911,0.4321,0.4164,0.4315,0.3728,0.4321,0.4164,0.4315,0.3728,0.4315,0.3728,0.4309,0.4635,0.4284,0.4641,0.4321,0.4164,0.4321,0.4164,0.4284,0.4641,0.4309,0.4635,0.4315,0.3728,0.4315,0.3728,0.4315,0.3728,0.4804,0.417,0.4726,0.3714,0.4687,0.4544,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4687,0.4544});
IndexedFaceSet103->setTexCoord(*TextureCoordinate104);

CCoordinate* Coordinate105 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate105->setPoint(new float[114]{-0.8966,-0.0174,-1.568,-1.521,-0.0174,0.4019,0,-0.0174,-1.568,-1.288,0.6634,0.3302,-0.7503,0.6634,-1.364,0,0.6634,-1.364,0,0.6634,1.372,1.521,-0.0174,0.4019,1.288,0.6634,0.3302,0.7503,0.6634,-1.364,0.8967,-0.0174,-1.568,0,-0.0174,1.633,-1.556,-0.2684,1.333,1.556,-0.2684,1.333,-1.293,-1.746,-2.684,-1.293,-3.579,-1.568,0,-3.579,-1.568,-1.018,-0.5447,-1.908,0,-0.5447,-1.908,1.293,-1.746,-2.684,0,-1.746,-2.684,1.018,-0.5447,-1.908,1.293,-3.579,-1.568,-2.687,-1.746,0.4019,-1.918,-3.579,0.4019,-1.877,-0.5447,0.4019,2.687,-1.746,0.4019,1.877,-0.5447,0.4019,1.918,-3.579,0.4019,0,-3.579,0.4019,-1.708,-3.439,1.272,-2.332,-1.78,1.272,2.332,-1.78,1.272,1.708,-3.439,1.272,0,-3.439,1.272,-1.469,-0.8455,1.311,1.469,-0.8455,1.311,0,-0.5969,1.593});
IndexedFaceSet103->setCoord(*Coordinate105);

Shape99->setGeometry(IndexedFaceSet103);

Transform98->addChild(*Shape99);

HAnimSegment97->addChildren(*Transform98);

HAnimJoint96->addChildren(*HAnimSegment97);

CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint106->setName("r_metatarsophalangeal_2");
HAnimJoint106->setCenter(new float[3]{-3.679,3.251,1.465});
CHAnimSegment* HAnimSegment107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment107->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimSegment107->setName("r_tarsal_proximal_phalanx_2");
CTransform* Transform108 = (CTransform *)(m_pScene.createNode("Transform"));
Transform108->setTranslation(new float[3]{-3.679,3.251,1.465});
CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material111 = (CMaterial *)(m_pScene.createNode("Material"));
Material111->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance110->setMaterial(*Material111);

CImageTexture* ImageTexture112 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture112->setUSE("JuTextureAtlas");
Appearance110->setTexture(*ImageTexture112);

Shape109->setAppearance(*Appearance110);

CIndexedFaceSet* IndexedFaceSet113 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet113->setCreaseAngle(1.57);
IndexedFaceSet113->setTexCoordIndex(new int[264]{12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,18,-1,18,14,1,-1,2,5,12,-1,12,20,2,-1,7,10,12,-1,7,12,15,-1,6,7,15,-1,8,6,15,-1,15,16,8,-1,8,16,17,-1,17,11,8,-1,9,19,12,-1,12,10,9,-1,22,21,27,-1,25,24,23,-1,26,25,23,-1,27,26,23,-1,22,27,23,-1,0,21,22,-1,22,1,0,-1,1,22,23,-1,23,3,1,-1,11,23,24,-1,24,8,11,-1,8,24,25,-1,25,6,8,-1,6,25,26,-1,26,7,6,-1,7,26,27,-1,27,4,7,-1,4,27,21,-1,21,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,29,28,12,-1,12,30,29,-1,31,29,30,-1,30,32,31,-1,32,33,31,-1,12,12,34,-1,34,30,12,-1,34,35,32,-1,32,30,34,-1,35,36,33,-1,33,32,35,-1,37,12,12,-1,12,28,37,-1,38,39,12,-1,12,40,38,-1,41,42,39,-1,39,38,41,-1,42,41,45,-1,12,39,43,-1,43,12,12,-1,43,39,42,-1,42,44,43,-1,44,42,45,-1,45,46,44,-1,47,40,12,-1,12,12,47,-1});
IndexedFaceSet113->setCoordIndex(new int[264]{25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1});
CTextureCoordinate* TextureCoordinate114 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate114->setPoint(new float[96]{0.4804,0.417,0.4726,0.3714,0.4777,0.4914,0.4726,0.3714,0.4687,0.4544,0.4611,0.4911,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4777,0.4914,0.4611,0.4911,0.4726,0.3714,0.5246,0.4611,0.5392,0.409,0.5352,0.3721,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.537,0.3715,0.5123,0.477,0.5123,0.477,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.5785,0.4537,0.601,0.4307,0.5382,0.4079,0.6345,0.3741,0.5897,0.3729,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.5123,0.477,0.601,0.4307,0.5382,0.4079,0.5785,0.4537,0.6345,0.3741,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.5897,0.3729,0.537,0.3715,0.5123,0.477});
IndexedFaceSet113->setTexCoord(*TextureCoordinate114);

CCoordinate* Coordinate115 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate115->setPoint(new float[105]{-2.687,-1.475,-0.9449,-1.918,-3.308,-0.9449,0,0.2536,0.2858,-1.877,-0.2736,-0.9449,-1.556,0.0026,-0.0141,2.687,-1.475,-0.9449,1.877,-0.2736,-0.9449,1.918,-3.308,-0.9449,1.556,0.0026,-0.0141,0,-3.308,-0.9449,-1.965,-3.308,0.8573,1.965,-3.308,0.8573,0,-3.308,0.8573,-2.208,-1.501,-1.786,-1.607,-2.668,-1.786,0,-2.668,-1.786,1.607,-2.668,-1.786,2.208,-1.501,-1.786,1.599,-0.5151,-1.786,-1.599,-0.5151,-1.786,-1.638,-0.5877,2.175,-2.034,-2.055,3.865,-2.034,-3.308,3.522,0,-2.055,5.096,0,-0.4955,3.684,-1.597,-0.2925,1.08,-2.442,-1.692,0.8573,2.034,-2.055,3.865,1.638,-0.5877,2.175,0,-3.308,4.753,2.034,-3.308,3.522,1.597,-0.2925,1.08,2.442,-1.692,0.8573,0,-3.308,3.522,0,-0.0249,1.55});
IndexedFaceSet113->setCoord(*Coordinate115);

Shape109->setGeometry(IndexedFaceSet113);

Transform108->addChild(*Shape109);

HAnimSegment107->addChildren(*Transform108);

HAnimJoint106->addChildren(*HAnimSegment107);

HAnimJoint96->addChildren(*HAnimJoint106);

HAnimJoint86->addChildren(*HAnimJoint96);

HAnimJoint76->addChildren(*HAnimJoint86);

HAnimJoint26->addChildren(*HAnimJoint76);

CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setDEF("hanim_sacroiliac");
HAnimJoint116->setName("sacroiliac");
HAnimJoint116->setCenter(new float[3]{0.000034,31.26,-0.008798});
CHAnimSegment* HAnimSegment117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment117->setDEF("hanim_pelvis");
HAnimSegment117->setName("pelvis");
CTransform* Transform118 = (CTransform *)(m_pScene.createNode("Transform"));
Transform118->setTranslation(new float[3]{0.000034,31.26,-0.008798});
CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance120 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material121 = (CMaterial *)(m_pScene.createNode("Material"));
Material121->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance120->setMaterial(*Material121);

CImageTexture* ImageTexture122 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture122->setUSE("JuTextureAtlas");
Appearance120->setTexture(*ImageTexture122);

Shape119->setAppearance(*Appearance120);

CIndexedFaceSet* IndexedFaceSet123 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet123->setCreaseAngle(1.57);
IndexedFaceSet123->setTexCoordIndex(new int[576]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,39,40,37,-1,37,38,39,-1,41,42,40,-1,40,39,41,-1,43,44,42,-1,42,41,43,-1,45,46,44,-1,44,43,45,-1,47,48,46,-1,46,45,47,-1,49,50,48,-1,48,47,49,-1,51,52,50,-1,50,49,51,-1,53,54,52,-1,52,51,53,-1,55,56,54,-1,54,53,55,-1,57,58,56,-1,56,55,57,-1,59,60,58,-1,58,57,59,-1,38,37,60,-1,60,59,38,-1,62,39,38,-1,38,61,62,-1,63,41,39,-1,39,62,63,-1,64,43,41,-1,41,63,64,-1,65,45,43,-1,43,64,65,-1,66,47,45,-1,45,65,66,-1,67,49,47,-1,47,66,67,-1,68,51,49,-1,49,67,68,-1,69,53,51,-1,51,68,69,-1,70,55,53,-1,53,69,70,-1,71,57,55,-1,55,70,71,-1,72,59,57,-1,57,71,72,-1,61,38,59,-1,59,72,61,-1,74,62,61,-1,61,73,74,-1,75,63,62,-1,62,74,75,-1,76,64,63,-1,63,75,76,-1,77,65,64,-1,64,76,77,-1,78,66,65,-1,65,77,78,-1,79,67,66,-1,66,78,79,-1,80,68,67,-1,67,79,80,-1,81,69,68,-1,68,80,81,-1,82,70,69,-1,69,81,82,-1,83,71,70,-1,70,82,83,-1,84,72,71,-1,71,83,84,-1,73,61,72,-1,72,84,73,-1,85,74,73,-1,85,75,74,-1,85,76,75,-1,85,77,76,-1,85,78,77,-1,85,79,78,-1,85,80,79,-1,85,81,80,-1,85,82,81,-1,85,83,82,-1,85,84,83,-1,85,73,84,-1,25,26,14,-1,14,13,25,-1,26,27,15,-1,15,14,26,-1,27,28,16,-1,16,15,27,-1,28,29,17,-1,17,16,28,-1,29,30,18,-1,18,17,29,-1,30,31,19,-1,19,18,30,-1,31,32,20,-1,20,19,31,-1,32,33,21,-1,21,20,32,-1,33,34,22,-1,22,21,33,-1,34,35,23,-1,23,22,34,-1,35,36,24,-1,24,23,35,-1,36,25,13,-1,13,24,36,-1});
IndexedFaceSet123->setCoordIndex(new int[576]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,63,62,-1,62,25,26,-1,27,64,63,-1,63,26,27,-1,28,65,64,-1,64,27,28,-1,29,66,65,-1,65,28,29,-1,30,67,66,-1,66,29,30,-1,31,68,67,-1,67,30,31,-1,32,69,68,-1,68,31,32,-1,33,70,69,-1,69,32,33,-1,34,71,70,-1,70,33,34,-1,35,72,71,-1,71,34,35,-1,36,73,72,-1,72,35,36,-1,25,62,73,-1,73,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1,62,63,14,-1,14,13,62,-1,63,64,15,-1,15,14,63,-1,64,65,16,-1,16,15,64,-1,65,66,17,-1,17,16,65,-1,66,67,18,-1,18,17,66,-1,67,68,19,-1,19,18,67,-1,68,69,20,-1,20,19,68,-1,69,70,21,-1,21,20,69,-1,70,71,22,-1,22,21,70,-1,71,72,23,-1,23,22,71,-1,72,73,24,-1,24,23,72,-1,73,62,13,-1,13,24,73,-1});
CTextureCoordinate* TextureCoordinate124 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate124->setPoint(new float[172]{0.2061,0.2498,0.2067,0.1822,0.1471,0.1822,0.1035,0.1822,0.0875,0.1822,0.1035,0.1822,0.1471,0.1822,0.2067,0.1822,0.2663,0.1822,0.31,0.1822,0.3259,0.1822,0.31,0.1822,0.2663,0.1822,0.208,0.1494,0.1373,0.1495,0.0855,0.1495,0.0666,0.1495,0.0855,0.1496,0.1373,0.1495,0.208,0.1495,0.2788,0.1495,0.3305,0.1496,0.3495,0.1495,0.3305,0.1495,0.2788,0.1495,0.208,0.1494,0.1414,0.1495,0.0926,0.1495,0.0748,0.1495,0.0922,0.1495,0.1406,0.1495,0.208,0.1495,0.2754,0.1495,0.3239,0.1495,0.3412,0.1495,0.3234,0.1495,0.2746,0.1495,0.995,0.6227,0.9911,0.5634,0.9445,0.5634,0.9587,0.6143,0.8611,0.5667,0.8645,0.6158,0.8296,0.5725,0.8297,0.6181,0.7843,0.5725,0.7986,0.6221,0.7343,0.5716,0.7402,0.6181,0.6899,0.5733,0.7033,0.6238,0.7343,0.5716,0.7402,0.6181,0.7843,0.5724,0.7986,0.6221,0.8296,0.5725,0.8297,0.6181,0.8611,0.5667,0.8646,0.6158,0.9445,0.5634,0.9587,0.6143,0.9874,0.5161,0.9409,0.5169,0.8667,0.527,0.8296,0.5279,0.7882,0.5304,0.7381,0.5276,0.6693,0.5234,0.738,0.5277,0.7882,0.5305,0.8296,0.5279,0.8666,0.5271,0.9409,0.517,0.9852,0.4793,0.8833,0.4954,0.8658,0.4954,0.8297,0.4954,0.7933,0.4954,0.7672,0.4952,0.6706,0.4859,0.7672,0.4952,0.7936,0.4954,0.8297,0.4954,0.8655,0.4953,0.8832,0.4954,0.8296,0.4836});
IndexedFaceSet123->setTexCoord(*TextureCoordinate124);

CCoordinate* Coordinate125 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate125->setPoint(new float[222]{0,10.03,0.1297,0,9.057,-2.567,-2.075,9.057,-2.206,-3.594,9.057,-1.77,-4.15,9.057,0.1297,-3.594,9.057,2.03,-2.075,9.057,2.465,0,9.057,2.827,2.075,9.057,2.465,3.594,9.057,2.03,4.15,9.057,0.1297,3.594,9.057,-1.77,2.075,9.057,-2.206,0,6.725,-4.193,-2.684,7.001,-3.614,-4.648,7.228,-2.032,-5.367,7.228,0.1297,-4.648,7.4,2.189,-2.684,7.228,3.313,0,7.024,4.004,2.684,7.228,3.313,4.648,7.4,2.189,5.367,7.228,0.1297,4.648,7.228,-2.032,2.684,7.001,-3.614,0,4.745,-4.3,-2.936,4.743,-3.667,-5.089,4.738,-2.28,-5.874,4.731,0.133,-5.102,4.731,2.476,-2.963,4.731,3.656,0,4.73,4.3,2.963,4.73,3.656,5.102,4.73,2.476,5.874,4.731,0.134,5.088,4.737,-2.281,2.936,4.743,-3.667,0,2.358,-3.663,-2.543,2.356,-3.113,-4.402,2.355,-1.613,-5.084,2.358,0.134,-4.415,2.354,2.157,-2.562,2.341,3.097,0,2.339,3.654,2.56,2.347,3.101,4.417,2.357,2.158,5.083,2.357,0.1338,4.404,2.356,-1.611,2.542,2.358,-3.115,0,0.6228,-1.923,-1.478,0.6244,-1.603,-2.538,0.622,-1.037,-2.926,0.6243,0.1308,-2.535,0.6248,1.308,-1.464,0.6148,2.154,0,0.6102,2.466,1.455,0.6123,2.154,2.534,0.6219,1.301,2.927,0.6248,0.1297,2.539,0.6184,-1.027,1.471,0.6221,-1.602,0,-0.0048,0.1335,0,6.687,-3.936,-2.527,6.96,-3.39,-4.378,7.174,-1.899,-5.055,7.161,0.1297,-4.396,7.33,2.041,-2.558,7.161,3.082,0,6.834,3.759,2.555,7.163,3.083,4.397,7.332,2.039,5.054,7.163,0.1318,4.376,7.176,-1.9,2.527,6.96,-3.39});
IndexedFaceSet123->setCoord(*Coordinate125);

Shape119->setGeometry(IndexedFaceSet123);

Transform118->addChild(*Shape119);

HAnimSegment117->addChildren(*Transform118);

HAnimJoint116->addChildren(*HAnimSegment117);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setDEF("hanim_l_shoulder");
HAnimJoint126->setName("l_shoulder");
HAnimJoint126->setCenter(new float[3]{4.778,51.03,-2.069});
CHAnimSegment* HAnimSegment127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment127->setDEF("hanim_l_upperarm");
HAnimSegment127->setName("l_upperarm");
CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{4.778,51.03,-2.069});
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance130 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material131 = (CMaterial *)(m_pScene.createNode("Material"));
Material131->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance130->setMaterial(*Material131);

CImageTexture* ImageTexture132 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture132->setUSE("JuTextureAtlas");
Appearance130->setTexture(*ImageTexture132);

Shape129->setAppearance(*Appearance130);

CIndexedFaceSet* IndexedFaceSet133 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet133->setCreaseAngle(1.57);
IndexedFaceSet133->setTexCoordIndex(new int[304]{2,0,53,-1,3,2,53,-1,54,3,53,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,34,35,36,-1,33,34,36,-1,37,33,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,40,39,-1,39,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,48,40,-1,40,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,34,48,-1,48,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
IndexedFaceSet133->setCoordIndex(new int[304]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
CTextureCoordinate* TextureCoordinate134 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate134->setPoint(new float[110]{0.2661,0.1332,0.3717,0.1332,0.1245,0.1332,0.0067,0.1321,0.2119,0.1332,0.2707,0.1099,0.3728,0.1099,0.1275,0.1099,0.0049,0.1088,0.2167,0.1099,0.271,0.0284,0.3751,0.0284,0.1295,0.0284,0.0061,0.0273,0.2178,0.0284,0.2716,0.0086,0.3751,0.0086,0.1299,0.0086,0.0058,0.0075,0.2184,0.0086,0.2836,0.0426,0.3685,0.0426,0.1368,0.0426,0.0085,0.0415,0.2198,0.0426,0.0067,0.1343,0.0084,0.111,0.0084,0.111,0.0073,0.0295,0.0073,0.0295,0.0076,0.0097,0.0076,0.0097,0.0065,0.0437,0.6285,0.3174,0.6285,0.3316,0.6285,0.3312,0.6285,0.3167,0.6285,0.3082,0.5864,0.3116,0.5864,0.3376,0.6087,0.339,0.6087,0.3139,0.5864,0.3394,0.6087,0.3383,0.5864,0.3146,0.6087,0.3128,0.5864,0.2974,0.6087,0.2977,0.6261,0.339,0.6261,0.3148,0.6261,0.3383,0.6261,0.3137,0.6261,0.2992,0.0441,0.1287,-0.1162,0.128});
IndexedFaceSet133->setTexCoord(*TextureCoordinate134);

CCoordinate* Coordinate135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate135->setPoint(new float[120]{0.7458,1.679,-1.189,1.565,1.679,0.0238,0.6631,1.679,1.177,-0.714,1.679,0.6762,-0.6628,1.679,-0.7857,0.9082,0.4486,-1.634,2.04,0.4486,0.0404,0.794,0.4486,1.632,-1.108,0.4486,0.9413,-1.037,0.4486,-1.078,0.9397,-2.611,-1.634,2.071,-2.611,0.0404,0.8254,-2.611,1.632,-1.076,-2.611,0.9413,-1.006,-2.611,-1.078,0.9738,-3.656,-1.728,2.171,-3.656,0.0439,0.8529,-3.656,1.728,-1.159,-3.656,0.9971,-1.084,-3.656,-1.139,0.598,-1.86,-1.372,1.463,-1.86,-0.3215,1.015,-1.86,1.153,-0.1265,-1.86,1.013,-0.3843,-1.86,-0.5473,0.6162,-6.896,-1.11,1.515,-6.896,-0.2675,1.049,-6.896,0.9149,-0.1364,-6.896,0.8029,-0.4042,-6.896,-0.4486,0.6445,-10.84,-1.07,1.509,-10.84,-0.2583,1.062,-10.84,0.88,-0.0801,-10.84,0.7722,-0.3379,-10.84,-0.4327,0.6093,-11.37,-0.6358,1.116,-11.37,-0.1604,0.8538,-11.37,0.5067,0.1847,-11.37,0.4436,0.0336,-11.37,-0.2626});
IndexedFaceSet133->setCoord(*Coordinate135);

Shape129->setGeometry(IndexedFaceSet133);

Transform128->addChild(*Shape129);

HAnimSegment127->addChildren(*Transform128);

HAnimJoint126->addChildren(*HAnimSegment127);

CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setDEF("hanim_l_elbow");
HAnimJoint136->setName("l_elbow");
HAnimJoint136->setCenter(new float[3]{5.297,40.12,-2.055});
CHAnimSegment* HAnimSegment137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment137->setDEF("hanim_l_forearm");
HAnimSegment137->setName("l_forearm");
CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform138->setTranslation(new float[3]{5.297,40.12,-2.055});
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance140 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material141 = (CMaterial *)(m_pScene.createNode("Material"));
Material141->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance140->setMaterial(*Material141);

CImageTexture* ImageTexture142 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture142->setUSE("JuTextureAtlas");
Appearance140->setTexture(*ImageTexture142);

Shape139->setAppearance(*Appearance140);

CIndexedFaceSet* IndexedFaceSet143 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet143->setCreaseAngle(1.57);
IndexedFaceSet143->setTexCoordIndex(new int[184]{3,2,0,-1,3,0,1,-1,4,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,16,-1,16,15,21,-1,22,21,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,16,20,-1});
IndexedFaceSet143->setCoordIndex(new int[184]{3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
CTextureCoordinate* TextureCoordinate144 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate144->setPoint(new float[50]{0.5159,0.3385,0.5159,0.3244,0.5159,0.3332,0.5159,0.3157,0.5159,0.3103,0.521,0.3428,0.521,0.3229,0.521,0.3355,0.521,0.3108,0.521,0.3029,0.5327,0.3442,0.5327,0.3231,0.5302,0.3366,0.5302,0.3103,0.5327,0.3016,0.5558,0.339,0.5558,0.323,0.5558,0.3334,0.5558,0.3141,0.5558,0.3079,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302,0.5585,0.317,0.5585,0.3129});
IndexedFaceSet143->setTexCoord(*TextureCoordinate144);

CCoordinate* Coordinate145 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate145->setPoint(new float[75]{0.1284,0.6566,-0.794,0.7947,0.6566,-0.1619,0.4154,0.6566,0.757,-0.4852,0.6566,0.6929,-0.6626,0.6566,-0.2657,0.0855,-0.4623,-1.129,1.027,-0.4623,-0.281,0.4911,-0.4623,1.171,-0.7817,-0.4623,1.07,-1.032,-0.4623,-0.445,0.0941,-3.046,-1.116,1.1,-3.046,-0.2777,0.55,-2.481,1.16,-0.8091,-2.481,1.06,-1.1,-3.046,-0.4401,0.084,-8.01,-1.171,1.025,-7.982,-0.1359,0.3907,-8.118,1.09,-0.6003,-8.118,0.9957,-0.9132,-8.109,-0.2244,0.0434,-8.725,-0.6054,0.5441,-8.725,0.0272,0.2591,-8.725,0.759,-0.4177,-8.725,0.6949,-0.551,-8.725,-0.0767});
IndexedFaceSet143->setCoord(*Coordinate145);

Shape139->setGeometry(IndexedFaceSet143);

Transform138->addChild(*Shape139);

HAnimSegment137->addChildren(*Transform138);

HAnimJoint136->addChildren(*HAnimSegment137);

CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setDEF("hanim_l_radiocarpal");
HAnimJoint146->setName("l_radiocarpal");
HAnimJoint146->setCenter(new float[3]{5.07,31.99,-1.559});
CHAnimSegment* HAnimSegment147 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment147->setDEF("hanim_l_carpal");
HAnimSegment147->setName("l_carpal");
CTransform* Transform148 = (CTransform *)(m_pScene.createNode("Transform"));
Transform148->setTranslation(new float[3]{5.07,31.99,-1.559});
CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance150 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material151 = (CMaterial *)(m_pScene.createNode("Material"));
Material151->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance150->setMaterial(*Material151);

CImageTexture* ImageTexture152 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture152->setUSE("JuTextureAtlas");
Appearance150->setTexture(*ImageTexture152);

Shape149->setAppearance(*Appearance150);

CIndexedFaceSet* IndexedFaceSet153 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet153->setCreaseAngle(1.57);
IndexedFaceSet153->setTexCoordIndex(new int[160]{0,2,1,-1,1,3,0,-1,36,38,37,-1,37,39,36,-1,28,30,29,-1,29,31,28,-1,4,5,2,-1,2,0,4,-1,40,41,38,-1,38,36,40,-1,32,33,31,-1,31,29,32,-1,6,7,5,-1,5,4,6,-1,42,43,41,-1,41,40,42,-1,34,35,33,-1,33,32,34,-1,10,12,11,-1,12,14,13,-1,13,11,12,-1,15,17,16,-1,16,18,15,-1,19,11,13,-1,13,20,19,-1,21,19,22,-1,22,19,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,4,0,8,-1,8,9,4,-1,10,11,16,-1,16,17,10,-1,11,19,18,-1,18,16,11,-1,19,21,15,-1,15,18,19,-1,14,12,26,-1,26,27,14,-1});
IndexedFaceSet153->setCoordIndex(new int[160]{4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,3,2,0,-1,0,1,3,-1});
CTextureCoordinate* TextureCoordinate154 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate154->setPoint(new float[88]{0.4675,0.2229,0.4534,0.3224,0.4709,0.3268,0.4579,0.2308,0.5552,0.233,0.5504,0.3288,0.6215,0.2576,0.6159,0.3282,0.478,0.1884,0.5527,0.2007,0.4618,0.1862,0.4629,0.1191,0.4583,0.192,0.4802,0.0435,0.4672,0.0405,0.5177,0.1794,0.4789,0.1246,0.4811,0.1812,0.515,0.132,0.538,0.1232,0.5459,0.0341,0.5348,0.1824,0.6006,0.1887,0.5977,0.0452,0.6323,0.1888,0.629,0.0403,0.4501,0.1899,0.4535,0.0388,0.5577,0.3108,0.5496,0.3395,0.5573,0.3333,0.5503,0.3041,0.5263,0.3468,0.527,0.2997,0.5106,0.3433,0.5113,0.3032,0.4584,0.3225,0.4544,0.2224,0.4607,0.2253,0.4525,0.325,0.5365,0.3334,0.5532,0.2053,0.6323,0.3251,0.6179,0.2145});
IndexedFaceSet153->setTexCoord(*TextureCoordinate154);

CCoordinate* Coordinate155 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate155->setPoint(new float[66]{0.8732,0.4437,0.6298,0.8463,0.4584,-1.065,-0.5135,0.3661,0.7037,-0.5196,0.3675,-1.013,-0.6654,-0.1688,1.167,1.16,0.015,1.096,1.119,0.0434,-1.571,-0.747,-0.1537,-1.566,-0.5777,-1.832,1.902,1.387,-1.647,1.643,1.345,-1.619,-1.902,-0.8391,-1.916,-1.775,-0.3897,-3.083,1.338,0.6425,-3.283,1.382,0.6009,-3.255,-1.636,-0.5412,-3.094,-1.527,-0.742,-0.1555,-0.1478,-1.159,-1.873,1.533,-1.387,-0.4699,0.0458,-1.361,-0.5281,1.488,-1.163,-1.872,0.1088,-0.7494,-1.912,-0.1591});
IndexedFaceSet153->setCoord(*Coordinate155);

Shape149->setGeometry(IndexedFaceSet153);

Transform148->addChild(*Shape149);

HAnimSegment147->addChildren(*Transform148);

HAnimJoint146->addChildren(*HAnimSegment147);

HAnimJoint136->addChildren(*HAnimJoint146);

HAnimJoint126->addChildren(*HAnimJoint136);

HAnimJoint116->addChildren(*HAnimJoint126);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setDEF("hanim_r_shoulder");
HAnimJoint156->setName("r_shoulder");
HAnimJoint156->setCenter(new float[3]{-4.778,51.03,-2.069});
CHAnimSegment* HAnimSegment157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment157->setDEF("hanim_r_upperarm");
HAnimSegment157->setName("r_upperarm");
CTransform* Transform158 = (CTransform *)(m_pScene.createNode("Transform"));
Transform158->setTranslation(new float[3]{-4.778,51.03,-2.069});
CShape* Shape159 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance160 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material161 = (CMaterial *)(m_pScene.createNode("Material"));
Material161->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance160->setMaterial(*Material161);

CImageTexture* ImageTexture162 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture162->setUSE("JuTextureAtlas");
Appearance160->setTexture(*ImageTexture162);

Shape159->setAppearance(*Appearance160);

CIndexedFaceSet* IndexedFaceSet163 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet163->setCreaseAngle(1.57);
IndexedFaceSet163->setTexCoordIndex(new int[304]{53,0,2,-1,53,2,3,-1,54,53,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,34,-1,36,34,33,-1,37,36,33,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,39,-1,39,40,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,40,-1,40,48,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,48,-1,48,34,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
IndexedFaceSet163->setCoordIndex(new int[304]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
CTextureCoordinate* TextureCoordinate164 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate164->setPoint(new float[110]{0.2661,0.1332,0.3717,0.1332,0.1245,0.1332,0.0067,0.1321,0.2119,0.1332,0.2707,0.1099,0.3728,0.1099,0.1275,0.1099,0.0049,0.1088,0.2167,0.1099,0.271,0.0284,0.3751,0.0284,0.1295,0.0284,0.0061,0.0273,0.2178,0.0284,0.2716,0.0086,0.3751,0.0086,0.1299,0.0086,0.0058,0.0075,0.2184,0.0086,0.2836,0.0426,0.3685,0.0426,0.1368,0.0426,0.0085,0.0415,0.2198,0.0426,0.0067,0.1343,0.0084,0.111,0.0084,0.111,0.0073,0.0295,0.0073,0.0295,0.0076,0.0097,0.0076,0.0097,0.0065,0.0437,0.6285,0.3174,0.6285,0.3316,0.6285,0.3312,0.6285,0.3167,0.6285,0.3082,0.5864,0.3116,0.5864,0.3376,0.6087,0.339,0.6087,0.3139,0.5864,0.3394,0.6087,0.3383,0.5864,0.3146,0.6087,0.3128,0.5864,0.2974,0.6087,0.2977,0.6261,0.339,0.6261,0.3148,0.6261,0.3383,0.6261,0.3137,0.6261,0.2992,0.0441,0.1287,-0.1162,0.128});
IndexedFaceSet163->setTexCoord(*TextureCoordinate164);

CCoordinate* Coordinate165 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate165->setPoint(new float[120]{-0.7458,1.679,-1.189,-1.565,1.679,0.0238,-0.6631,1.679,1.177,0.714,1.679,0.6762,0.6628,1.679,-0.7857,-0.9082,0.4486,-1.634,-2.04,0.4486,0.0404,-0.794,0.4486,1.632,1.108,0.4486,0.9413,1.037,0.4486,-1.078,-0.9397,-2.611,-1.634,-2.071,-2.611,0.0404,-0.8254,-2.611,1.632,1.076,-2.611,0.9413,1.006,-2.611,-1.078,-0.9738,-3.656,-1.728,-2.171,-3.656,0.0439,-0.8529,-3.656,1.728,1.159,-3.656,0.9971,1.084,-3.656,-1.139,-0.598,-1.86,-1.372,-1.463,-1.86,-0.3215,-1.015,-1.86,1.153,0.1265,-1.86,1.013,0.3843,-1.86,-0.5473,-0.6162,-6.896,-1.11,-1.515,-6.896,-0.2675,-1.049,-6.896,0.9149,0.1364,-6.896,0.8029,0.4042,-6.896,-0.4486,-0.6445,-10.84,-1.07,-1.509,-10.84,-0.2583,-1.062,-10.84,0.88,0.0801,-10.84,0.7722,0.3379,-10.84,-0.4327,-0.6093,-11.37,-0.6358,-1.116,-11.37,-0.1604,-0.8538,-11.37,0.5067,-0.1847,-11.37,0.4436,-0.0336,-11.37,-0.2626});
IndexedFaceSet163->setCoord(*Coordinate165);

Shape159->setGeometry(IndexedFaceSet163);

Transform158->addChild(*Shape159);

HAnimSegment157->addChildren(*Transform158);

HAnimJoint156->addChildren(*HAnimSegment157);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setDEF("hanim_r_elbow");
HAnimJoint166->setName("r_elbow");
HAnimJoint166->setCenter(new float[3]{-5.297,40.12,-2.055});
CHAnimSegment* HAnimSegment167 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment167->setDEF("hanim_r_forearm");
HAnimSegment167->setName("r_forearm");
CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setTranslation(new float[3]{-5.297,40.12,-2.055});
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance170 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material171 = (CMaterial *)(m_pScene.createNode("Material"));
Material171->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance170->setMaterial(*Material171);

CImageTexture* ImageTexture172 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture172->setUSE("JuTextureAtlas");
Appearance170->setTexture(*ImageTexture172);

Shape169->setAppearance(*Appearance170);

CIndexedFaceSet* IndexedFaceSet173 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet173->setCreaseAngle(1.57);
IndexedFaceSet173->setTexCoordIndex(new int[184]{0,2,3,-1,1,0,3,-1,4,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,15,16,-1,16,20,21,-1,22,17,15,-1,15,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,16,19,-1,19,24,20,-1});
IndexedFaceSet173->setCoordIndex(new int[184]{1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
CTextureCoordinate* TextureCoordinate174 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate174->setPoint(new float[50]{0.5159,0.3385,0.5159,0.3244,0.5159,0.3332,0.5159,0.3157,0.5159,0.3103,0.521,0.3428,0.521,0.3229,0.521,0.3355,0.521,0.3108,0.521,0.3029,0.5327,0.3442,0.5327,0.3231,0.5302,0.3366,0.5302,0.3103,0.5327,0.3016,0.5558,0.339,0.5558,0.323,0.5558,0.3334,0.5558,0.3141,0.5558,0.3079,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302,0.5585,0.317,0.5585,0.3129});
IndexedFaceSet173->setTexCoord(*TextureCoordinate174);

CCoordinate* Coordinate175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate175->setPoint(new float[75]{-0.1284,0.6566,-0.794,-0.7947,0.6566,-0.1619,-0.4154,0.6566,0.757,0.4852,0.6566,0.6929,0.6626,0.6566,-0.2657,-0.0855,-0.4623,-1.129,-1.027,-0.4623,-0.281,-0.4911,-0.4623,1.171,0.7817,-0.4623,1.07,1.032,-0.4623,-0.445,-0.0941,-3.046,-1.116,-1.1,-3.046,-0.2777,-0.55,-2.481,1.16,0.8091,-2.481,1.06,1.1,-3.046,-0.4401,-0.084,-8.01,-1.171,-1.025,-7.982,-0.1359,-0.3907,-8.118,1.09,0.6003,-8.118,0.9957,0.9132,-8.109,-0.2244,-0.0434,-8.725,-0.6054,-0.5441,-8.725,0.0272,-0.2591,-8.725,0.759,0.4177,-8.725,0.6949,0.551,-8.725,-0.0767});
IndexedFaceSet173->setCoord(*Coordinate175);

Shape169->setGeometry(IndexedFaceSet173);

Transform168->addChild(*Shape169);

HAnimSegment167->addChildren(*Transform168);

HAnimJoint166->addChildren(*HAnimSegment167);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setDEF("hanim_r_radiocarpal");
HAnimJoint176->setName("r_radiocarpal");
HAnimJoint176->setCenter(new float[3]{-5.07,31.99,-1.559});
CHAnimSegment* HAnimSegment177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment177->setDEF("hanim_r_carpal");
HAnimSegment177->setName("r_carpal");
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setTranslation(new float[3]{-5.07,31.99,-1.559});
CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance180 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material181 = (CMaterial *)(m_pScene.createNode("Material"));
Material181->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance180->setMaterial(*Material181);

CImageTexture* ImageTexture182 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture182->setUSE("JuTextureAtlas");
Appearance180->setTexture(*ImageTexture182);

Shape179->setAppearance(*Appearance180);

CIndexedFaceSet* IndexedFaceSet183 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet183->setCreaseAngle(1.57);
IndexedFaceSet183->setTexCoordIndex(new int[160]{0,3,1,-1,1,2,0,-1,36,39,37,-1,37,38,36,-1,28,31,29,-1,29,30,28,-1,4,0,2,-1,2,5,4,-1,40,36,38,-1,38,41,40,-1,32,29,31,-1,31,33,32,-1,6,4,5,-1,5,7,6,-1,42,40,41,-1,41,43,42,-1,34,32,33,-1,33,35,34,-1,10,11,12,-1,12,11,13,-1,13,14,12,-1,15,18,16,-1,16,17,15,-1,19,20,13,-1,13,11,19,-1,21,22,19,-1,22,23,20,-1,20,19,22,-1,24,25,23,-1,23,22,24,-1,4,9,8,-1,8,0,4,-1,10,17,16,-1,16,11,10,-1,11,16,18,-1,18,19,11,-1,19,18,15,-1,15,21,19,-1,14,27,26,-1,26,12,14,-1});
IndexedFaceSet183->setCoordIndex(new int[160]{4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,3,1,0,-1,0,2,3,-1});
CTextureCoordinate* TextureCoordinate184 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate184->setPoint(new float[88]{0.4675,0.2229,0.4534,0.3224,0.4709,0.3268,0.4579,0.2308,0.5552,0.233,0.5504,0.3288,0.6215,0.2576,0.6159,0.3282,0.478,0.1884,0.5527,0.2007,0.4618,0.1862,0.4629,0.1191,0.4583,0.192,0.4802,0.0435,0.4672,0.0405,0.5177,0.1794,0.4789,0.1246,0.4811,0.1812,0.515,0.132,0.538,0.1232,0.5459,0.0341,0.5348,0.1824,0.6006,0.1887,0.5977,0.0452,0.6323,0.1888,0.629,0.0403,0.4501,0.1899,0.4535,0.0388,0.5577,0.3108,0.5496,0.3395,0.5573,0.3333,0.5503,0.3041,0.5263,0.3468,0.527,0.2997,0.5106,0.3433,0.5113,0.3032,0.4584,0.3225,0.4544,0.2224,0.4607,0.2253,0.4525,0.325,0.5365,0.3334,0.5532,0.2053,0.6323,0.3251,0.6179,0.2145});
IndexedFaceSet183->setTexCoord(*TextureCoordinate184);

CCoordinate* Coordinate185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate185->setPoint(new float[66]{-0.8732,0.4437,0.6298,-0.8463,0.4584,-1.065,0.5135,0.3661,0.7037,0.5196,0.3675,-1.013,0.6654,-0.1688,1.167,-1.16,0.015,1.096,-1.119,0.0434,-1.571,0.747,-0.1537,-1.566,0.5777,-1.832,1.902,-1.387,-1.647,1.643,-1.345,-1.619,-1.902,0.8391,-1.916,-1.775,0.3897,-3.083,1.338,-0.6425,-3.283,1.382,-0.6009,-3.255,-1.636,0.5412,-3.094,-1.527,0.742,-0.1555,-0.1478,1.159,-1.873,1.533,1.387,-0.4699,0.0458,1.361,-0.5281,1.488,1.163,-1.872,0.1088,0.7494,-1.912,-0.1591});
IndexedFaceSet183->setCoord(*Coordinate185);

Shape179->setGeometry(IndexedFaceSet183);

Transform178->addChild(*Shape179);

HAnimSegment177->addChildren(*Transform178);

HAnimJoint176->addChildren(*HAnimSegment177);

HAnimJoint166->addChildren(*HAnimJoint176);

HAnimJoint156->addChildren(*HAnimJoint166);

HAnimJoint116->addChildren(*HAnimJoint156);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setDEF("hanim_vl5");
HAnimJoint186->setName("vl5");
HAnimJoint186->setCenter(new float[3]{0.000025,39.84,0.1163});
CHAnimSegment* HAnimSegment187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment187->setDEF("hanim_l5");
HAnimSegment187->setName("l5");
CTransform* Transform188 = (CTransform *)(m_pScene.createNode("Transform"));
Transform188->setTranslation(new float[3]{0.000025,39.84,0.1163});
CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance190 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material191 = (CMaterial *)(m_pScene.createNode("Material"));
Material191->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance190->setMaterial(*Material191);

CImageTexture* ImageTexture192 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture192->setUSE("JuTextureAtlas");
Appearance190->setTexture(*ImageTexture192);

Shape189->setAppearance(*Appearance190);

CIndexedFaceSet* IndexedFaceSet193 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet193->setCreaseAngle(1.57);
IndexedFaceSet193->setTexCoordIndex(new int[584]{2,3,0,-1,0,1,2,-1,4,3,2,-1,5,3,4,-1,2,1,6,-1,6,7,2,-1,7,4,2,-1,0,8,1,-1,8,6,1,-1,4,7,9,-1,10,11,12,-1,10,12,9,-1,11,13,12,-1,14,15,11,-1,15,13,11,-1,15,14,16,-1,16,17,15,-1,0,14,8,-1,0,16,14,-1,0,18,16,-1,18,0,3,-1,5,18,3,-1,19,18,20,-1,22,14,11,-1,11,21,22,-1,21,11,10,-1,10,23,21,-1,21,23,24,-1,24,22,21,-1,6,23,10,-1,23,6,24,-1,8,24,6,-1,18,19,16,-1,25,16,19,-1,25,17,16,-1,26,17,25,-1,10,9,7,-1,6,10,7,-1,20,18,5,-1,27,20,5,-1,19,20,28,-1,28,29,19,-1,25,19,29,-1,29,30,25,-1,26,25,30,-1,30,31,26,-1,20,27,32,-1,32,28,20,-1,14,22,24,-1,24,8,14,-1,35,34,33,-1,33,36,35,-1,37,35,36,-1,38,37,36,-1,35,40,39,-1,39,34,35,-1,40,35,37,-1,33,34,41,-1,41,34,39,-1,37,42,40,-1,43,45,44,-1,43,42,45,-1,44,45,46,-1,47,44,48,-1,48,44,46,-1,48,50,49,-1,49,47,48,-1,33,41,47,-1,33,47,49,-1,33,49,51,-1,51,36,33,-1,38,36,51,-1,52,53,51,-1,55,54,44,-1,44,47,55,-1,54,56,43,-1,43,44,54,-1,54,55,57,-1,57,56,54,-1,39,43,56,-1,56,57,39,-1,41,39,57,-1,51,49,52,-1,58,52,49,-1,58,49,50,-1,59,58,50,-1,43,40,42,-1,39,40,43,-1,53,38,51,-1,60,38,53,-1,52,62,61,-1,61,53,52,-1,58,63,62,-1,62,52,58,-1,59,64,63,-1,63,58,59,-1,53,61,65,-1,65,60,53,-1,47,41,57,-1,57,55,47,-1,67,70,69,-1,69,66,67,-1,66,69,71,-1,71,68,66,-1,70,73,72,-1,72,69,70,-1,69,72,74,-1,74,71,69,-1,71,74,89,-1,89,85,71,-1,73,76,75,-1,75,72,73,-1,72,75,77,-1,77,74,72,-1,79,75,76,-1,76,78,79,-1,80,77,75,-1,75,79,80,-1,77,80,95,-1,95,92,77,-1,81,84,83,-1,83,82,81,-1,84,86,85,-1,85,83,84,-1,86,68,71,-1,71,85,86,-1,82,83,88,-1,88,87,82,-1,83,85,89,-1,89,88,83,-1,87,88,91,-1,91,90,87,-1,88,89,92,-1,92,91,88,-1,89,74,77,-1,77,92,89,-1,94,93,90,-1,90,91,94,-1,95,94,91,-1,91,92,95,-1,68,86,84,-1,68,84,81,-1,66,68,81,-1,95,80,79,-1,94,95,79,-1,78,94,79,-1});
IndexedFaceSet193->setCoordIndex(new int[584]{7,10,11,-1,11,9,7,-1,33,10,7,-1,34,10,33,-1,7,9,13,-1,13,12,7,-1,12,33,7,-1,11,8,9,-1,8,13,9,-1,33,12,0,-1,14,17,1,-1,14,1,0,-1,17,2,1,-1,16,42,17,-1,42,2,17,-1,42,16,15,-1,15,4,42,-1,11,16,8,-1,11,15,16,-1,11,6,15,-1,6,11,10,-1,34,6,10,-1,19,6,5,-1,22,16,17,-1,17,23,22,-1,23,17,14,-1,14,21,23,-1,23,21,20,-1,20,22,23,-1,13,21,14,-1,21,13,20,-1,8,20,13,-1,6,19,15,-1,18,15,19,-1,18,4,15,-1,52,4,18,-1,14,0,12,-1,13,14,12,-1,5,6,34,-1,3,5,34,-1,19,5,24,-1,24,25,19,-1,18,19,25,-1,25,26,18,-1,52,18,26,-1,26,27,52,-1,5,3,28,-1,28,24,5,-1,16,22,20,-1,20,8,16,-1,31,30,29,-1,29,32,31,-1,33,31,32,-1,34,33,32,-1,31,36,35,-1,35,30,31,-1,36,31,33,-1,29,30,37,-1,37,30,35,-1,33,0,36,-1,38,40,39,-1,38,0,40,-1,39,40,2,-1,41,39,42,-1,42,39,2,-1,42,4,43,-1,43,41,42,-1,29,37,41,-1,29,41,43,-1,29,43,44,-1,44,32,29,-1,34,32,44,-1,45,46,44,-1,48,47,39,-1,39,41,48,-1,47,49,38,-1,38,39,47,-1,47,48,50,-1,50,49,47,-1,35,38,49,-1,49,50,35,-1,37,35,50,-1,44,43,45,-1,51,45,43,-1,51,43,4,-1,52,51,4,-1,38,36,0,-1,35,36,38,-1,46,34,44,-1,3,34,46,-1,45,54,53,-1,53,46,45,-1,51,55,54,-1,54,45,51,-1,52,27,55,-1,55,51,52,-1,46,53,28,-1,28,3,46,-1,41,37,50,-1,50,48,41,-1,68,69,58,-1,58,56,68,-1,56,58,59,-1,59,57,56,-1,69,60,61,-1,61,58,69,-1,58,61,62,-1,62,59,58,-1,59,62,75,-1,75,72,59,-1,60,76,63,-1,63,61,60,-1,61,63,64,-1,64,62,61,-1,66,63,76,-1,76,65,66,-1,67,64,63,-1,63,66,67,-1,64,67,80,-1,80,78,64,-1,68,71,70,-1,70,69,68,-1,71,73,72,-1,72,70,71,-1,73,57,59,-1,59,72,73,-1,69,70,74,-1,74,60,69,-1,70,72,75,-1,75,74,70,-1,60,74,77,-1,77,76,60,-1,74,75,78,-1,78,77,74,-1,75,62,64,-1,64,78,75,-1,79,65,76,-1,76,77,79,-1,80,79,77,-1,77,78,80,-1,57,73,71,-1,57,71,68,-1,56,57,68,-1,80,67,66,-1,79,80,66,-1,65,79,66,-1});
CTextureCoordinate* TextureCoordinate194 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate194->setPoint(new float[192]{0.2049,0.3383,0.2002,0.3958,0.136,0.3803,0.1281,0.3329,0.0546,0.3857,0.0447,0.2768,0.1678,0.4532,0.1416,0.4193,0.2035,0.3953,0.0762,0.5156,0.1396,0.5164,0.1296,0.5174,0.0824,0.5324,0.0762,0.5185,0.1914,0.3925,0.0546,0.383,0.2122,0.2712,0.0453,0.2902,0.2088,0.2721,0.2379,0.2057,0.1995,0.2053,0.2239,0.5518,0.2203,0.4727,0.2239,0.5518,0.2313,0.4794,0.2219,0.2126,0.0439,0.2148,0.0439,0.2182,0.1625,0.1691,0.1889,0.1693,0.1779,0.1741,0.0675,0.1679,0.0675,0.1702,0.2049,0.3383,0.2002,0.3958,0.136,0.3803,0.1281,0.3329,0.0546,0.3857,0.0447,0.2768,0.1678,0.4532,0.1416,0.4193,0.2035,0.3953,0.0762,0.5156,0.1396,0.5164,0.1296,0.5174,0.0824,0.5324,0.0762,0.5185,0.1914,0.3925,0.0546,0.383,0.2122,0.2712,0.0453,0.2902,0.2088,0.2721,0.2379,0.2057,0.1995,0.2053,0.2239,0.5518,0.2203,0.4727,0.2239,0.5518,0.2313,0.4794,0.2219,0.2126,0.0439,0.2148,0.0439,0.2182,0.1625,0.1691,0.1889,0.1693,0.1779,0.1741,0.0675,0.1679,0.0675,0.1702,0.5159,0.3385,0.5159,0.3244,0.5159,0.3332,0.521,0.3428,0.521,0.3229,0.521,0.3355,0.5327,0.3442,0.5327,0.3231,0.5302,0.3366,0.5558,0.339,0.5558,0.323,0.5558,0.3334,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302,0.5159,0.3244,0.521,0.3229,0.521,0.3428,0.5159,0.3385,0.521,0.3355,0.5159,0.3332,0.5327,0.3231,0.5327,0.3442,0.5302,0.3366,0.5558,0.323,0.5558,0.339,0.5558,0.3334,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302});
IndexedFaceSet193->setTexCoord(*TextureCoordinate194);

CCoordinate* Coordinate195 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate195->setPoint(new float[243]{0,13.41,-0.7672,1.02,13.85,-2.25,0,13.51,-3.769,0,0.8188,3.156,0,3.563,-3.333,3.661,0.1281,2.243,3.621,3.118,2.023,2.814,9.08,2.9,4.406,8.825,0.0214,4.314,8.846,1.719,2.299,6.538,2.734,4.032,6.41,1.262,2.29,10.91,1.179,3.407,10.95,0.0607,2.621,13.27,-1.246,3.715,3.086,-1.788,4.067,8.723,-3.836,2.341,13.3,-3.687,4.289,0.3935,-1.658,4.734,0.1406,-0.1384,5.652,10.72,-0.9836,4.811,12.9,-1.603,5.345,10.47,-3.647,4.811,12.9,-3.594,2.517,-1.669,1.502,3.255,-1.66,-0.1346,2.948,-1.486,-1.868,0,-1.281,-2.313,0,-1.194,2.304,-4.032,6.41,1.262,-4.314,8.846,1.719,-2.814,9.08,2.9,-2.299,6.538,2.734,0,9.136,2.246,0,4.716,3.226,-3.407,10.95,0.0607,-2.29,10.91,1.179,-4.406,8.825,0.0214,-2.621,13.27,-1.246,-2.341,13.3,-3.687,-1.02,13.85,-2.25,-4.067,8.723,-3.836,0,8.074,-4.277,-3.715,3.086,-1.788,-3.621,3.118,2.023,-4.734,0.1406,-0.1384,-3.661,0.1281,2.243,-4.811,12.9,-3.594,-5.345,10.47,-3.647,-4.811,12.9,-1.603,-5.652,10.72,-0.9836,-4.289,0.3935,-1.658,0,0.6918,-2.992,-2.517,-1.669,1.502,-3.255,-1.66,-0.1346,-2.948,-1.486,-1.868,0.8892,12.94,-2.608,0.516,12.73,-1.431,1.146,13.39,-2.694,0.6275,13.06,-0.8358,0,14.57,-3.544,1.236,14.38,-2.522,0.6992,13.84,-0.7186,1.176,16.23,-2.013,0.5348,16,-0.4293,0,16.62,-2.52,0.6489,16.47,-1.739,0.3707,16.31,-0.8024,0,13.08,-3.382,0,13.59,-3.731,-1.146,13.39,-2.694,-0.8893,12.94,-2.608,-0.6275,13.06,-0.8358,-0.516,12.73,-1.431,-1.236,14.38,-2.522,-0.6992,13.84,-0.7186,0,16.47,-3.285,-1.176,16.23,-2.013,-0.5348,16,-0.4293,-0.6489,16.47,-1.739,-0.3708,16.31,-0.8024});
IndexedFaceSet193->setCoord(*Coordinate195);

Shape189->setGeometry(IndexedFaceSet193);

Transform188->addChild(*Shape189);

HAnimSegment187->addChildren(*Transform188);

HAnimJoint186->addChildren(*HAnimSegment187);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setDEF("hanim_skullbase");
HAnimJoint196->setName("skullbase");
HAnimJoint196->setCenter(new float[3]{0.000025,56.07,-1.554});
CHAnimSegment* HAnimSegment197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment197->setDEF("hanim_skull");
HAnimSegment197->setName("skull");
CTransform* Transform198 = (CTransform *)(m_pScene.createNode("Transform"));
Transform198->setTranslation(new float[3]{0.000025,56.07,-1.554});
CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance200 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material201 = (CMaterial *)(m_pScene.createNode("Material"));
Material201->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance200->setMaterial(*Material201);

CImageTexture* ImageTexture202 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture202->setUSE("JuTextureAtlas");
Appearance200->setTexture(*ImageTexture202);

Shape199->setAppearance(*Appearance200);

CIndexedFaceSet* IndexedFaceSet203 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet203->setCreaseAngle(1.57);
IndexedFaceSet203->setTexCoordIndex(new int[1200]{55,58,53,-1,53,54,55,-1,58,55,56,-1,56,57,58,-1,54,53,59,-1,59,60,54,-1,61,62,63,-1,64,62,61,-1,65,66,67,-1,53,58,67,-1,67,66,53,-1,53,66,68,-1,68,59,53,-1,69,72,68,-1,68,66,69,-1,70,66,65,-1,70,69,66,-1,72,75,71,-1,71,68,72,-1,75,72,73,-1,73,74,75,-1,75,76,71,-1,30,1,4,-1,4,29,30,-1,2,4,1,-1,136,137,134,-1,134,135,136,-1,157,160,158,-1,158,159,157,-1,161,162,158,-1,158,160,161,-1,165,166,163,-1,163,164,165,-1,167,166,168,-1,163,166,167,-1,158,162,167,-1,165,171,170,-1,170,166,165,-1,166,170,172,-1,172,168,166,-1,139,145,136,-1,136,138,139,-1,135,138,136,-1,172,170,173,-1,170,171,173,-1,78,83,79,-1,79,77,78,-1,140,141,134,-1,134,137,140,-1,143,140,137,-1,137,142,143,-1,140,143,144,-1,158,174,159,-1,158,167,174,-1,162,163,167,-1,71,80,68,-1,68,80,59,-1,59,81,60,-1,59,80,81,-1,137,134,141,-1,141,140,137,-1,142,137,140,-1,140,143,142,-1,144,143,140,-1,177,178,167,-1,167,168,176,-1,177,167,176,-1,178,179,174,-1,174,167,178,-1,81,80,77,-1,77,79,82,-1,81,77,82,-1,83,82,79,-1,77,84,78,-1,83,78,84,-1,84,85,83,-1,82,83,85,-1,169,164,163,-1,181,169,163,-1,180,181,163,-1,180,163,175,-1,162,186,182,-1,162,182,183,-1,162,183,175,-1,162,175,163,-1,169,181,184,-1,183,180,175,-1,185,182,186,-1,16,13,6,-1,6,9,16,-1,17,15,8,-1,8,7,17,-1,14,20,11,-1,11,5,14,-1,13,17,7,-1,7,6,13,-1,18,19,12,-1,12,10,18,-1,24,21,13,-1,13,16,24,-1,25,23,15,-1,15,17,25,-1,21,25,17,-1,17,13,21,-1,22,28,20,-1,20,14,22,-1,26,27,19,-1,19,18,26,-1,207,208,205,-1,205,206,207,-1,211,212,209,-1,209,210,211,-1,208,211,210,-1,210,205,208,-1,212,214,213,-1,213,209,212,-1,216,207,206,-1,206,215,216,-1,139,146,145,-1,0,30,29,-1,29,3,0,-1,63,67,58,-1,58,57,63,-1,62,65,67,-1,67,63,62,-1,64,70,65,-1,65,62,64,-1,73,69,70,-1,70,64,73,-1,69,73,72,-1,86,76,75,-1,75,74,86,-1,87,90,88,-1,88,89,87,-1,56,88,90,-1,90,57,56,-1,91,87,89,-1,89,92,91,-1,61,63,93,-1,64,61,93,-1,94,95,96,-1,95,90,87,-1,87,96,95,-1,97,96,87,-1,87,91,97,-1,97,101,98,-1,98,96,97,-1,99,94,96,-1,99,96,98,-1,100,102,101,-1,101,97,100,-1,73,101,102,-1,102,74,73,-1,102,100,103,-1,35,31,32,-1,32,36,35,-1,34,31,35,-1,147,150,148,-1,148,149,147,-1,189,190,187,-1,187,188,189,-1,189,162,161,-1,161,190,189,-1,191,192,165,-1,165,164,191,-1,193,194,192,-1,191,193,192,-1,189,193,162,-1,195,171,165,-1,165,192,195,-1,196,195,192,-1,192,194,196,-1,148,156,139,-1,139,138,148,-1,149,148,138,-1,196,173,195,-1,195,173,171,-1,105,110,106,-1,106,104,105,-1,147,152,151,-1,151,150,147,-1,150,151,153,-1,153,154,150,-1,151,155,153,-1,189,188,197,-1,189,197,193,-1,162,193,191,-1,38,39,37,-1,100,97,107,-1,97,91,107,-1,91,92,108,-1,91,108,107,-1,150,152,147,-1,152,150,151,-1,154,151,150,-1,151,154,153,-1,155,151,153,-1,154,150,148,-1,199,194,193,-1,200,199,193,-1,200,193,201,-1,197,202,201,-1,201,193,197,-1,109,105,104,-1,108,109,104,-1,108,104,107,-1,110,105,109,-1,104,106,111,-1,111,106,110,-1,110,112,111,-1,109,112,110,-1,203,198,191,-1,191,164,169,-1,191,169,184,-1,203,191,184,-1,162,191,198,-1,162,198,204,-1,162,204,185,-1,162,185,186,-1,169,181,184,-1,204,198,203,-1,182,186,185,-1,139,156,146,-1,36,32,33,-1,33,40,36,-1,90,95,63,-1,63,57,90,-1,95,94,93,-1,93,63,95,-1,94,99,64,-1,64,93,94,-1,99,98,73,-1,73,64,99,-1,98,101,73,-1,102,103,113,-1,113,74,102,-1,41,44,43,-1,43,42,41,-1,45,48,47,-1,47,46,45,-1,46,47,44,-1,44,41,46,-1,44,50,49,-1,49,43,44,-1,48,52,51,-1,51,47,48,-1,47,51,50,-1,50,44,47,-1,217,218,216,-1,216,215,217,-1,213,214,219,-1,219,220,213,-1,220,219,218,-1,218,217,220,-1,117,118,115,-1,115,116,117,-1,120,116,115,-1,115,119,120,-1,117,122,121,-1,121,118,117,-1,125,126,123,-1,123,124,125,-1,123,120,119,-1,119,124,123,-1,128,126,125,-1,125,127,128,-1,119,130,129,-1,129,124,119,-1,130,119,115,-1,115,131,130,-1,118,132,131,-1,131,115,118,-1,124,129,133,-1,133,125,124,-1,133,127,125,-1,132,118,121,-1,74,114,86,-1,74,113,114,-1,222,223,224,-1,224,225,226,-1,222,224,226,-1,226,227,228,-1,226,228,221,-1,222,226,221,-1,221,208,207,-1,207,222,221,-1,207,216,223,-1,223,222,207,-1,216,218,224,-1,224,223,216,-1,218,219,225,-1,225,224,218,-1,219,214,226,-1,226,225,219,-1,214,212,227,-1,227,226,214,-1,212,211,228,-1,228,227,212,-1,211,208,221,-1,221,228,211,-1});
IndexedFaceSet203->setCoordIndex(new int[1200]{66,67,10,-1,10,9,66,-1,67,66,0,-1,0,1,67,-1,9,10,8,-1,8,119,9,-1,2,11,5,-1,6,11,2,-1,69,12,68,-1,10,67,68,-1,68,12,10,-1,10,12,7,-1,7,8,10,-1,71,72,7,-1,7,12,71,-1,70,12,69,-1,70,71,12,-1,72,73,13,-1,13,7,72,-1,73,72,3,-1,3,4,73,-1,73,74,13,-1,66,9,149,-1,149,153,66,-1,119,149,9,-1,149,119,16,-1,16,15,149,-1,74,14,18,-1,18,13,74,-1,19,17,18,-1,18,14,19,-1,22,25,27,-1,27,21,22,-1,26,25,16,-1,27,25,26,-1,18,17,26,-1,22,23,28,-1,28,25,22,-1,25,28,15,-1,15,16,25,-1,65,153,149,-1,149,24,65,-1,15,24,149,-1,15,28,24,-1,28,23,24,-1,38,37,36,-1,36,34,38,-1,29,161,16,-1,16,119,29,-1,30,29,119,-1,119,164,30,-1,29,30,31,-1,18,161,13,-1,18,26,161,-1,17,27,26,-1,13,161,7,-1,7,161,8,-1,147,130,119,-1,160,161,130,-1,119,130,161,-1,161,131,119,-1,164,119,131,-1,131,132,164,-1,150,132,131,-1,32,33,26,-1,26,16,35,-1,32,26,35,-1,33,34,161,-1,161,26,33,-1,16,161,34,-1,34,36,35,-1,16,34,35,-1,37,35,36,-1,34,33,38,-1,37,38,33,-1,33,32,37,-1,35,37,32,-1,20,21,27,-1,41,20,27,-1,43,41,27,-1,43,27,44,-1,17,46,45,-1,17,45,39,-1,17,39,44,-1,17,44,27,-1,20,41,152,-1,39,43,44,-1,151,45,46,-1,52,47,39,-1,39,45,52,-1,51,49,41,-1,41,43,51,-1,49,50,152,-1,152,41,49,-1,47,51,43,-1,43,39,47,-1,48,52,45,-1,45,151,48,-1,58,53,47,-1,47,52,58,-1,57,55,49,-1,49,51,57,-1,53,57,51,-1,51,47,53,-1,55,56,50,-1,50,49,55,-1,54,58,52,-1,52,48,54,-1,64,59,53,-1,53,58,64,-1,63,61,55,-1,55,57,63,-1,59,63,57,-1,57,53,59,-1,61,62,56,-1,56,55,61,-1,60,64,58,-1,58,54,60,-1,65,148,153,-1,0,66,153,-1,153,148,0,-1,5,68,67,-1,67,1,5,-1,11,69,68,-1,68,5,11,-1,6,70,69,-1,69,11,6,-1,3,71,70,-1,70,6,3,-1,71,3,72,-1,14,74,73,-1,73,4,14,-1,75,78,77,-1,77,76,75,-1,0,77,78,-1,78,1,0,-1,79,75,76,-1,76,136,79,-1,2,5,80,-1,6,2,80,-1,81,83,82,-1,83,78,75,-1,75,82,83,-1,84,82,75,-1,75,79,84,-1,84,88,85,-1,85,82,84,-1,86,81,82,-1,86,82,85,-1,87,89,88,-1,88,84,87,-1,3,88,89,-1,89,4,3,-1,89,87,90,-1,163,76,77,-1,77,156,163,-1,136,76,163,-1,92,136,163,-1,163,93,92,-1,94,91,90,-1,90,87,94,-1,94,17,19,-1,19,91,94,-1,95,96,22,-1,22,21,95,-1,97,92,96,-1,95,97,96,-1,94,97,17,-1,98,23,22,-1,22,96,98,-1,93,98,96,-1,96,92,93,-1,163,156,65,-1,65,24,163,-1,93,163,24,-1,93,24,98,-1,98,24,23,-1,101,110,100,-1,100,99,101,-1,92,103,102,-1,102,136,92,-1,136,102,104,-1,104,165,136,-1,102,105,104,-1,94,87,103,-1,94,103,97,-1,17,97,95,-1,139,165,134,-1,87,84,103,-1,84,79,103,-1,154,139,135,-1,162,135,103,-1,139,103,135,-1,103,139,137,-1,165,137,136,-1,137,165,138,-1,157,137,138,-1,165,139,155,-1,107,92,97,-1,108,107,97,-1,108,97,109,-1,103,99,109,-1,109,97,103,-1,107,101,99,-1,92,107,99,-1,92,99,103,-1,110,101,107,-1,99,100,109,-1,109,100,110,-1,110,108,109,-1,107,108,110,-1,111,106,95,-1,95,21,20,-1,95,20,152,-1,111,95,152,-1,17,95,106,-1,17,106,112,-1,17,112,151,-1,17,151,46,-1,140,141,42,-1,112,106,111,-1,142,143,40,-1,65,156,148,-1,156,77,0,-1,0,148,156,-1,78,83,5,-1,5,1,78,-1,83,81,80,-1,80,5,83,-1,81,86,6,-1,6,80,81,-1,86,85,3,-1,3,6,86,-1,85,88,3,-1,89,90,91,-1,91,4,89,-1,112,113,48,-1,48,151,112,-1,152,50,114,-1,114,111,152,-1,111,114,113,-1,113,112,111,-1,113,115,54,-1,54,48,113,-1,50,56,116,-1,116,114,50,-1,114,116,115,-1,115,113,114,-1,115,117,60,-1,60,54,115,-1,56,62,118,-1,118,116,56,-1,116,118,117,-1,117,115,116,-1,122,125,158,-1,158,121,122,-1,120,121,158,-1,158,124,120,-1,122,123,119,-1,119,125,122,-1,129,127,126,-1,126,159,129,-1,126,120,124,-1,124,159,126,-1,128,127,129,-1,129,139,128,-1,124,144,146,-1,146,159,124,-1,144,124,158,-1,158,145,144,-1,125,133,145,-1,145,158,125,-1,159,146,155,-1,155,129,159,-1,155,139,129,-1,133,125,119,-1,4,19,14,-1,4,91,19,-1,167,168,169,-1,169,170,171,-1,167,169,171,-1,171,172,173,-1,171,173,166,-1,167,171,166,-1,166,59,64,-1,64,167,166,-1,64,60,168,-1,168,167,64,-1,60,117,169,-1,169,168,60,-1,117,118,170,-1,170,169,117,-1,118,62,171,-1,171,170,118,-1,62,61,172,-1,172,171,62,-1,61,63,173,-1,173,172,61,-1,63,59,166,-1,166,173,63,-1});
CTextureCoordinate* TextureCoordinate204 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate204->setPoint(new float[458]{0.0199,0.7411,0.304,0.7353,0.4514,0.7245,0.0199,0.9847,0.3019,0.9545,0.315,0.9067,0.2582,0.5588,0.2318,0.8287,0.315,0.9067,0.3537,0.4343,0.5009,0.4343,0.5516,0.8015,0.4488,0.3265,0.2582,0.5588,0.315,0.9067,0.315,0.9067,0.3537,0.4343,0.2318,0.8287,0.5009,0.4343,0.4488,0.3265,0.5516,0.8015,0.2582,0.5588,0.315,0.9067,0.315,0.9067,0.3537,0.4343,0.2318,0.8287,0.5009,0.4343,0.4488,0.3265,0.5516,0.8015,0.1984,0.9656,0.185,0.7377,0.304,0.7353,0.185,0.7377,0.0199,0.7411,0.4514,0.7245,0.3019,0.9545,0.1984,0.9656,0.0634,0.8794,0.0815,0.8144,0.0592,0.7948,0.0199,0.9847,0.2582,0.5588,0.3537,0.4343,0.3537,0.4343,0.2582,0.5588,0.315,0.9067,0.2318,0.8287,0.2318,0.8287,0.315,0.9067,0.3537,0.4343,0.2582,0.5588,0.2318,0.8287,0.315,0.9067,0.4022,0.8072,0.4092,0.9332,0.3423,0.9345,0.2496,0.9363,0.2496,0.808,0.3324,0.8076,0.4487,0.7966,0.4853,0.9277,0.2496,0.7146,0.2838,0.7079,0.2496,0.7548,0.2496,0.6844,0.3214,0.7028,0.3839,0.6943,0.3208,0.7227,0.4105,0.6832,0.3282,0.629,0.3213,0.6897,0.4063,0.6832,0.3336,0.6217,0.2485,0.6026,0.2485,0.6244,0.3109,0.6342,0.3426,0.6501,0.4492,0.7686,0.456,0.773,0.4645,0.8438,0.4405,0.723,0.4866,0.9483,0.4732,0.8841,0.477,0.8588,0.4408,0.7797,0.4619,0.8418,0.3056,0.6309,0.0969,0.8072,0.1568,0.9345,0.09,0.9332,0.1668,0.8076,0.0504,0.7966,0.0139,0.9277,0.2154,0.7079,0.1778,0.7028,0.1783,0.7227,0.1153,0.6943,0.0887,0.6832,0.171,0.629,0.1778,0.6897,0.0928,0.6832,0.1656,0.6217,0.1882,0.6342,0.1566,0.6501,0.0499,0.7686,0.0346,0.8438,0.0432,0.773,0.0587,0.723,0.0125,0.9483,0.026,0.8841,0.0222,0.8588,0.0583,0.7797,0.0373,0.8418,0.1935,0.6309,0.2496,0.6403,0.5986,0.9248,0.6012,0.8499,0.689,0.8561,0.6892,0.9241,0.5242,0.9216,0.5225,0.8475,0.7915,0.897,0.8075,0.8685,0.6012,0.8499,0.5986,0.9248,0.6892,0.9241,0.689,0.8561,0.7915,0.897,0.8075,0.8685,0.6078,0.9826,0.5191,0.9846,0.6077,0.9826,0.7007,0.9832,0.7008,0.9832,0.9771,0.7722,0.9707,0.8593,0.8581,0.8585,0.8839,0.7747,0.9591,0.9681,0.9,0.9681,0.9199,0.6984,0.9684,0.7206,0.8499,0.7752,0.8458,0.7262,0.8298,0.6747,0.865,0.9347,0.8697,0.9696,0.9771,0.7722,0.8581,0.8585,0.9707,0.8593,0.8839,0.7747,0.9199,0.6984,0.9684,0.7206,0.8458,0.7262,0.8499,0.7752,0.8298,0.6747,0.865,0.9347,0.5498,0.7202,0.5638,0.7169,0.5718,0.7409,0.5371,0.7082,0.5326,0.6846,0.5382,0.6801,0.5866,0.6942,0.5873,0.668,0.6438,0.6775,0.6181,0.7065,0.5894,0.7192,0.6547,0.751,0.5605,0.6719,0.679,0.7289,0.7191,0.6946,0.7036,0.762,0.7595,0.76,0.592,0.7489,0.5625,0.6941,0.638,0.7485,0.6245,0.7448,0.6138,0.7412,0.6107,0.7461,0.5568,0.6838,0.5564,0.6793,0.5495,0.6819,0.5528,0.6851,0.5564,0.6793,0.5495,0.6819,0.5416,0.6788,0.5498,0.7202,0.5718,0.7409,0.5638,0.7169,0.5371,0.7082,0.5866,0.6942,0.6181,0.7065,0.5894,0.7191,0.6547,0.751,0.679,0.7289,0.7036,0.7619,0.592,0.7489,0.5625,0.6941,0.638,0.7485,0.6245,0.7448,0.6138,0.7412,0.6107,0.7461,0.5568,0.6838,0.5528,0.6851,0.9104,0.746,0.9034,0.7467,0.9112,0.7728,0.9336,0.7719,0.903,0.7463,0.9106,0.7457,0.9342,0.7713,0.9112,0.7717,0.8789,0.7463,0.8707,0.7717,0.8785,0.7467,0.8707,0.7728,0.8715,0.746,0.8483,0.7719,0.8477,0.7713,0.8713,0.7457,0.9336,0.7719,0.9112,0.7728,0.8707,0.7728,0.8483,0.7719,0.8477,0.7713,0.8707,0.7717,0.9112,0.7717,0.9342,0.7713});
IndexedFaceSet203->setTexCoord(*TextureCoordinate204);

CCoordinate* Coordinate205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate205->setPoint(new float[522]{0,6.248,3.861,0,3.604,3.332,0,1.678,4.132,0,-1.06,2.132,0,-0.6113,0.4257,0,2.508,3.48,0,1.056,3.569,3.122,1.031,1.087,3.864,3.37,0.8051,3.096,6.185,2.785,2.962,3.586,2.468,0.6641,1.54,3.44,2.605,1.26,2.524,3.041,1.031,-0.4007,1.088,-0.0485,-0.7313,3.008,9.038,-0.4634,4.599,7.193,-1.764,0,0.878,-3.276,1.883,1.069,-2.26,0,0.1453,-2.244,0,2.477,-5.252,0,3.279,-5.606,0,8.131,-5.026,0,9.834,-2.714,0,10.08,0.3393,2.985,7.677,-4.117,3.321,2.779,-2.866,2.485,2.748,-4.523,2.609,9.148,-2.623,3.922,0.9315,0.1364,3.294,1.489,2.328,2.942,-0.3907,1.64,4.119,4.301,-2.311,3.711,3.021,-2.417,3.874,2.792,-1.643,4.338,5.172,-1.863,4.171,4.342,-1.796,4.413,4.651,-2.881,4.005,2.883,-2.59,0.4904,1.513,-4.362,-0.2841,1.361,-4.319,0.2529,1.879,-4.875,-0.2529,1.879,-4.875,0.4533,1.752,-4.772,0.9863,1.737,-4.557,0.2841,1.361,-4.319,0,1.064,-3.769,0.4904,1.313,-4.729,-0.2841,1.093,-4.661,0.2529,1.691,-5.12,-0.2529,1.691,-5.12,0.4533,1.524,-4.947,0.2841,1.093,-4.661,0.3923,1.387,-4.921,-0.2512,1.186,-4.739,0.2427,1.709,-5.058,-0.2427,1.709,-5.058,0.3975,1.636,-5.002,0.2512,1.291,-4.92,0.8498,0.4808,-5.345,-0.4084,0.2239,-5.621,0.4082,1.526,-5.625,-0.2698,1.635,-6.083,0.8735,0.8532,-5.488,0.414,0.3346,-5.233,0,9.598,1.657,1.799,6.211,3.236,1.607,3.596,2.915,1.383,1.845,2.973,1.393,1.434,3.096,1.392,1.165,3.011,1.525,-0.0858,2.343,1.629,-0.2382,1.67,1.191,0.0201,0.2184,1.805,0.3477,-0.61,-2.962,3.586,2.468,-3.096,6.185,2.785,-1.799,6.211,3.236,-1.607,3.596,2.915,-3.864,3.37,0.8051,-0.6641,1.54,3.44,-1.393,1.434,3.096,-2.605,1.26,2.524,-1.383,1.845,2.973,-3.122,1.031,1.087,-1.525,-0.0858,2.343,-1.392,1.165,3.011,-3.041,1.031,-0.4007,-1.629,-0.2382,1.67,-1.191,0.0201,0.2184,-1.805,0.3477,-0.61,-1.088,-0.0485,-0.7313,-4.599,6.495,-1.764,-3.008,9.038,-0.4634,-1.883,1.069,-2.26,-2.485,2.748,-4.523,-2.985,7.677,-4.117,-3.321,2.779,-2.866,-2.609,9.148,-2.623,-3.874,2.792,-1.643,-4.005,2.883,-2.59,-4.171,4.342,-1.796,-3.924,0.7167,0.1364,-3.703,1.852,-1.574,-3.294,1.526,2.328,-2.944,-0.6055,1.64,-0.9863,1.737,-4.557,-4.338,5.172,-1.863,-4.119,4.301,-2.311,-3.711,3.021,-2.417,-4.413,4.651,-2.881,-0.4533,1.752,-4.772,-0.4904,1.513,-4.362,-0.4904,1.313,-4.729,-0.4533,1.524,-4.947,-0.3923,1.387,-4.921,-0.3975,1.636,-5.002,-0.861,0.4917,-5.679,-0.8735,1.084,-5.873,4.42,6.072,0.8408,0,4.078,5.465,2.609,4.238,4.383,4.491,4.519,2.859,4.812,4.641,0.25,0,7.281,4.847,4.089,6.811,2.657,-2.609,4.238,4.383,-4.491,4.519,2.859,-4.812,4.641,0.25,-4.089,6.811,2.657,4.599,7.193,-1.764,3.922,0.9315,0.1364,3.294,1.489,2.328,3.051,8.417,1.903,-3.051,8.417,1.903,-4.599,6.495,-1.764,-4.573,6.071,0.8593,-3.924,0.7167,0.1364,-3.294,1.526,2.328,-4.573,6.071,0.8593,0,2.477,-5.252,0.2529,1.879,-4.875,0.2841,1.361,-4.319,0,1.064,-3.769,0,8.876,2.944,1.401,8.728,2.443,-1.401,8.728,2.443,3.864,3.37,0.8051,0,8.876,2.944,3.051,8.417,1.903,2.942,-0.3907,1.64,-0.2841,1.361,-4.319,-0.2529,1.879,-4.875,1.401,8.728,2.443,-3.864,3.37,0.8051,-3.051,8.417,1.903,-1.401,8.728,2.443,-2.944,-0.6055,1.64,2.16,7.239,4.144,-2.16,7.239,4.144,3.864,3.37,0.8051,3.703,2.55,-1.574,-3.864,3.37,0.8051,-3.051,8.417,1.903,3.887,6.402,2.215,-3.887,5.704,2.215,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368});
IndexedFaceSet203->setCoord(*Coordinate205);

Shape199->setGeometry(IndexedFaceSet203);

Transform198->addChild(*Shape199);

HAnimSegment197->addChildren(*Transform198);

HAnimJoint196->addChildren(*HAnimSegment197);

HAnimJoint186->addChildren(*HAnimJoint196);

HAnimJoint116->addChildren(*HAnimJoint186);

HAnimJoint26->addChildren(*HAnimJoint116);

HAnimHumanoid23->setSkeleton(*HAnimJoint26);

CHAnimSegment* HAnimSegment206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment206->setUSE("hanim_l5");
HAnimHumanoid23->setSegments(*HAnimSegment206);

CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setUSE("hanim_pelvis");
HAnimHumanoid23->setSegments(*HAnimSegment207);

CHAnimSegment* HAnimSegment208 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment208->setUSE("hanim_sacrum");
HAnimHumanoid23->setSegments(*HAnimSegment208);

CHAnimSegment* HAnimSegment209 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment209->setUSE("hanim_skull");
HAnimHumanoid23->setSegments(*HAnimSegment209);

CHAnimSegment* HAnimSegment210 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment210->setUSE("hanim_l_calf");
HAnimHumanoid23->setSegments(*HAnimSegment210);

CHAnimSegment* HAnimSegment211 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment211->setUSE("hanim_r_calf");
HAnimHumanoid23->setSegments(*HAnimSegment211);

CHAnimSegment* HAnimSegment212 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment212->setUSE("hanim_l_carpal");
HAnimHumanoid23->setSegments(*HAnimSegment212);

CHAnimSegment* HAnimSegment213 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment213->setUSE("hanim_r_carpal");
HAnimHumanoid23->setSegments(*HAnimSegment213);

CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setUSE("hanim_l_forearm");
HAnimHumanoid23->setSegments(*HAnimSegment214);

CHAnimSegment* HAnimSegment215 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment215->setUSE("hanim_r_forearm");
HAnimHumanoid23->setSegments(*HAnimSegment215);

CHAnimSegment* HAnimSegment216 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment216->setUSE("hanim_l_talus");
HAnimHumanoid23->setSegments(*HAnimSegment216);

CHAnimSegment* HAnimSegment217 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment217->setUSE("hanim_r_talus");
HAnimHumanoid23->setSegments(*HAnimSegment217);

CHAnimSegment* HAnimSegment218 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment218->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment218);

CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment219);

CHAnimSegment* HAnimSegment220 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment220->setUSE("hanim_l_thigh");
HAnimHumanoid23->setSegments(*HAnimSegment220);

CHAnimSegment* HAnimSegment221 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment221->setUSE("hanim_r_thigh");
HAnimHumanoid23->setSegments(*HAnimSegment221);

CHAnimSegment* HAnimSegment222 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment222->setUSE("hanim_l_upperarm");
HAnimHumanoid23->setSegments(*HAnimSegment222);

CHAnimSegment* HAnimSegment223 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment223->setUSE("hanim_r_upperarm");
HAnimHumanoid23->setSegments(*HAnimSegment223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("hanim_humanoid_root");
HAnimHumanoid23->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("hanim_sacroiliac");
HAnimHumanoid23->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("hanim_skullbase");
HAnimHumanoid23->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("hanim_vl5");
HAnimHumanoid23->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("hanim_l_elbow");
HAnimHumanoid23->addJoints(*HAnimJoint228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setUSE("hanim_r_elbow");
HAnimHumanoid23->addJoints(*HAnimJoint229);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setUSE("hanim_l_hip");
HAnimHumanoid23->addJoints(*HAnimJoint230);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setUSE("hanim_r_hip");
HAnimHumanoid23->addJoints(*HAnimJoint231);

CHAnimJoint* HAnimJoint232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint232->setUSE("hanim_l_knee");
HAnimHumanoid23->addJoints(*HAnimJoint232);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setUSE("hanim_r_knee");
HAnimHumanoid23->addJoints(*HAnimJoint233);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint234);

CHAnimJoint* HAnimJoint235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint235->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint235);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setUSE("hanim_l_radiocarpal");
HAnimHumanoid23->addJoints(*HAnimJoint236);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setUSE("hanim_r_radiocarpal");
HAnimHumanoid23->addJoints(*HAnimJoint237);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setUSE("hanim_l_shoulder");
HAnimHumanoid23->addJoints(*HAnimJoint238);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setUSE("hanim_r_shoulder");
HAnimHumanoid23->addJoints(*HAnimJoint239);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setUSE("hanim_l_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint240);

CHAnimJoint* HAnimJoint241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint241->setUSE("hanim_r_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint241);

group->addChildren(*HAnimHumanoid23);

X3D0->setScene(*Scene19);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
