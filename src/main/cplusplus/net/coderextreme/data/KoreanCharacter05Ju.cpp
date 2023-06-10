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
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("KoreanCharacter05Ju.x3d");
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
meta9->setName("warning");
meta9->setContent("HAnimJoint and HAnimSegment names upgraded to HAnim2 but graph topology has inconsistencies that do not match loa=1 specification hierarchy");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("description");
meta10->setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("KoreanCharacter00ReadMe.txt");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("KoreanCharactersIllustrated.pdf");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter05Ju.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("Suwon University HAnim Editor");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("generator");
meta17->setContent("Gnu Image Manipulation Program, http://www.gimp.org");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("generator");
meta18->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("license");
meta19->setContent("../license.html");
head1->addMeta(*meta19);

X3D0->setHead(*head1);

CScene* Scene20 = new CScene();
CWorldInfo* WorldInfo21 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo21->setTitle("KoreanCharacter05Ju.x3d");
group->addChildren(*WorldInfo21);

CNavigationInfo* NavigationInfo22 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo22->setSpeed(1.5);
group->addChildren(*NavigationInfo22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint23->setDescription("Ju");
Viewpoint23->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint23);

CHAnimHumanoid* HAnimHumanoid24 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid24->setName("Ju");
HAnimHumanoid24->setDEF("hanim_Ju");
HAnimHumanoid24->setScale(new float[3]{0.0225,0.0225,0.0225});
HAnimHumanoid24->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"'
CMetadataSet* MetadataSet25 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet25->setName("HAnimHumanoid.info");
MetadataSet25->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString26 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString26->setName("authorName");
MetadataString26->setValue(new CString[1]{"Chul Hee Jung and Myeong Won Lee"}, 1);
MetadataSet25->setValue(*MetadataString26);

CMetadataString* MetadataString27 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString27->setName("authorEmail");
MetadataString27->setValue(new CString[1]{"myeongwonlee@gmail.com"}, 1);
MetadataSet25->addValue(*MetadataString27);

CMetadataString* MetadataString28 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString28->setName("creationDate");
MetadataString28->setValue(new CString[1]{"31 March 2011"}, 1);
MetadataSet25->addValue(*MetadataString28);

CMetadataString* MetadataString29 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString29->setName("gender");
MetadataString29->setValue(new CString[1]{"female"}, 1);
MetadataSet25->addValue(*MetadataString29);

CMetadataFloat* MetadataFloat30 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat30->setName("height");
MetadataFloat30->setValue(new float[1]{1.5}, 1);
MetadataSet25->addValue(*MetadataFloat30);

CMetadataString* MetadataString31 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString31->setName("humanoidVersion");
MetadataString31->setValue(new CString[1]{"2.0"}, 1);
MetadataSet25->addValue(*MetadataString31);

HAnimHumanoid24->setMetadata(*MetadataSet25);

CHAnimJoint* HAnimJoint32 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint32->setName("humanoid_root");
HAnimJoint32->setDEF("hanim_humanoid_root");
HAnimJoint32->setCenter(new float[3]{0,36,-0.008798});
HAnimJoint32->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint32->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment33 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment33->setName("sacrum");
HAnimSegment33->setDEF("hanim_sacrum");
CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{0,36,-0.008798});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material37 = (CMaterial *)(m_pScene.createNode("Material"));
Material37->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance36->setMaterial(*Material37);

CImageTexture* ImageTexture38 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture38->setDEF("JuTextureAtlas");
ImageTexture38->setUrl(new CString[2]{"images/Ju.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ju.png"}, 2);
Appearance36->setTexture(*ImageTexture38);

Shape35->setAppearance(*Appearance36);

CIndexedFaceSet* IndexedFaceSet39 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet39->setCoordIndex(new int[480]{2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1});
IndexedFaceSet39->setCreaseAngle(1.57);
IndexedFaceSet39->setTexCoordIndex(new int[480]{2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1});
CCoordinate* Coordinate40 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate40->setPoint(new float[186]{0,0.4454,-0.7459,0,0.0007,-0.815,-0.5564,0.0003,-0.695,-0.4789,0.4454,-0.6425,-0.9644,-0.0008,-0.4321,-0.8298,0.4454,-0.3599,-1.113,-0.0019,0.0252,-0.958,0.4454,0.0246,-0.967,-0.0019,0.4693,-0.8331,0.4454,0.3868,-0.5615,-0.0019,0.6928,-0.4847,0.4454,0.5842,0,-0.0021,0.815,0,0.4454,0.7124,0.5615,-0.0023,0.6928,0.4843,0.4454,0.5843,0.967,-0.0023,0.4693,0.8333,0.4454,0.3864,1.113,-0.0021,0.0254,0.9579,0.4454,0.025,0.9643,-0.001,-0.4322,0.8295,0.4454,-0.3602,0.5564,0.0003,-0.695,0.4789,0.4454,-0.6425,0,-0.4517,-0.6943,-0.482,-0.4521,-0.5899,-0.8344,-0.4524,-0.3056,-0.9635,-0.4517,0.0254,-0.8367,-0.4526,0.4089,-0.4855,-0.4549,0.587,0,-0.4553,0.6926,0.4853,-0.4539,0.5876,0.8372,-0.4519,0.4089,0.9634,-0.4519,0.0254,0.8348,-0.4521,-0.3053,0.4817,-0.4517,-0.5903,0,-0.7806,-0.3645,-0.2802,-0.7803,-0.3039,-0.481,-0.7808,-0.1965,-0.5545,-0.7803,0.0248,-0.4804,-0.7802,0.248,-0.2774,-0.7821,0.4083,0,-0.783,0.4674,0.2758,-0.7826,0.4083,0.4803,-0.7808,0.2466,0.5547,-0.7802,0.0246,0.4812,-0.7814,-0.1946,0.2787,-0.7807,-0.3037,0,-0.8996,0.0253,-0.0001,0.7482,-0.476,-0.3509,0.7482,-0.4061,-0.5969,0.7482,-0.2229,-0.6804,0.7482,0.0088,-0.6042,0.7482,0.2133,-0.3645,0.7482,0.3391,-0.0001,0.7482,0.4284,0.364,0.7482,0.3391,0.6042,0.7482,0.213,0.6802,0.7482,0.0091,0.5965,0.7482,-0.2231,0.3508,0.7482,-0.4061,-0.0002,0.8996,-0.0243});
IndexedFaceSet39->setCoord(*Coordinate40);

CTextureCoordinate* TextureCoordinate41 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate41->setPoint(new float[124]{0.995,0.6227,0.9911,0.5634,0.9445,0.5634,0.9587,0.6143,0.8611,0.5667,0.8645,0.6158,0.8296,0.5725,0.8297,0.6181,0.7843,0.5725,0.7986,0.6221,0.7343,0.5716,0.7402,0.6181,0.6899,0.5733,0.7033,0.6238,0.7343,0.5716,0.7402,0.6181,0.7843,0.5724,0.7986,0.6221,0.8296,0.5725,0.8297,0.6181,0.8611,0.5667,0.8646,0.6158,0.9445,0.5634,0.9587,0.6143,0.9874,0.5161,0.9409,0.5169,0.8667,0.527,0.8296,0.5279,0.7882,0.5304,0.7381,0.5276,0.6693,0.5234,0.738,0.5277,0.7882,0.5305,0.8296,0.5279,0.8666,0.5271,0.9409,0.517,0.9852,0.4793,0.8833,0.4954,0.8658,0.4954,0.8297,0.4954,0.7933,0.4954,0.7672,0.4952,0.6706,0.4859,0.7672,0.4952,0.7936,0.4954,0.8297,0.4954,0.8655,0.4953,0.8832,0.4954,0.8296,0.4836,0.995,0.6227,0.9587,0.6143,0.8645,0.6158,0.8297,0.6181,0.7986,0.6221,0.7402,0.6181,0.7033,0.6238,0.7402,0.6181,0.7986,0.6221,0.8297,0.6181,0.8646,0.6158,0.9587,0.6143,0.8402,0.6186});
IndexedFaceSet39->setTexCoord(*TextureCoordinate41);

Shape35->setGeometry(IndexedFaceSet39);

Transform34->addChildren(*Shape35);

HAnimSegment33->addChildren(*Transform34);

HAnimJoint32->addChildren(*HAnimSegment33);

CHAnimJoint* HAnimJoint42 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint42->setName("l_hip");
HAnimJoint42->setDEF("hanim_l_hip");
HAnimJoint42->setCenter(new float[3]{3.22,33.619999,-0.2832});
HAnimJoint42->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint42->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment43 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment43->setName("l_thigh");
HAnimSegment43->setDEF("hanim_l_thigh");
CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setTranslation(new float[3]{3.22,33.619999,-0.2832});
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance46->setMaterial(*Material47);

CImageTexture* ImageTexture48 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture48->setUSE("JuTextureAtlas");
Appearance46->setTexture(*ImageTexture48);

Shape45->setAppearance(*Appearance46);

CIndexedFaceSet* IndexedFaceSet49 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet49->setCoordIndex(new int[384]{33,32,31,-1,31,30,29,-1,31,29,28,-1,33,31,28,-1,34,33,28,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,28,29,1,-1,1,0,28,-1,29,30,2,-1,2,1,29,-1,30,31,3,-1,3,2,30,-1,31,32,4,-1,4,3,31,-1,32,33,5,-1,5,4,32,-1,33,34,6,-1,6,5,33,-1,34,28,0,-1,0,6,34,-1,21,22,35,-1,35,36,21,-1,22,23,37,-1,37,35,22,-1,23,24,38,-1,38,37,23,-1,24,25,39,-1,39,38,24,-1,25,26,40,-1,40,39,25,-1,26,27,41,-1,41,40,26,-1,27,21,36,-1,36,41,27,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1});
IndexedFaceSet49->setCreaseAngle(1.57);
IndexedFaceSet49->setTexCoordIndex(new int[384]{5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,29,28,35,-1,35,36,29,-1,28,30,37,-1,37,35,28,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,29,36,-1,36,41,34,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1});
CCoordinate* Coordinate50 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate50->setPoint(new float[150]{2.617,2.231,0.2976,1.527,2.231,2.592,-0.9211,2.231,3.159,-2.617,2.231,1.571,-2.617,2.231,-1.571,-0.9211,2.231,-3.159,1.527,2.231,-2.29,2.617,-1.238,0.2976,1.527,-1.238,2.592,-0.9211,-1.238,3.159,-2.617,-1.238,1.571,-2.617,-1.238,-0.9758,-0.9211,-1.238,-3.009,1.527,-1.238,-2.442,2.617,-6.593,0.2976,1.527,-6.593,2.58,-0.9211,-6.593,3.147,-2.617,-6.593,1.571,-2.617,-6.593,-0.9758,-0.9211,-6.593,-2.564,1.527,-6.593,-1.997,2.264,-11.92,0.2976,1.321,-11.92,2.282,-0.7969,-11.92,2.773,-2.046,-11.92,1.399,-2.046,-11.92,-0.8039,-0.7969,-11.92,-2.177,1.321,-11.92,-1.687,1.864,4.073,0.2976,1.058,4.073,1.995,-0.7536,4.073,2.415,-2.206,4.073,1.24,-2.206,4.073,-0.6446,-0.7536,4.073,-1.819,1.058,4.073,-1.4,1.033,-14.67,1.883,1.786,-14.67,0.2976,-0.6591,-14.67,2.275,-1.657,-14.67,1.178,-1.657,-14.67,-0.5825,-0.6591,-14.67,-1.68,1.033,-14.67,-1.288,0.4256,-15.99,1.041,0.7788,-15.99,0.2976,-0.3682,-15.99,1.225,-0.8362,-15.99,0.7104,-0.8362,-15.99,-0.1152,-0.3682,-15.99,-0.63,0.4256,-15.99,-0.4463,-0.1114,-16.17,0.2976});
IndexedFaceSet49->setCoord(*Coordinate50);

CTextureCoordinate* TextureCoordinate51 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate51->setPoint(new float[100]{0.7387,0.5078,0.7519,0.5078,0.7092,0.5078,0.6855,0.5078,0.6855,0.5078,0.7092,0.5078,0.7387,0.5078,0.7641,0.4868,0.7464,0.4472,0.7641,0.4472,0.7464,0.4868,0.7065,0.4472,0.7065,0.4868,0.6788,0.4472,0.6788,0.4868,0.6788,0.4472,0.6788,0.4868,0.7065,0.4472,0.7065,0.4868,0.7464,0.4472,0.7464,0.4868,0.7464,0.3861,0.7641,0.3861,0.7065,0.3861,0.6788,0.3861,0.6788,0.3861,0.7065,0.3861,0.7464,0.3861,0.743,0.3252,0.7584,0.3252,0.7085,0.3252,0.6882,0.3252,0.6882,0.3252,0.7085,0.3252,0.743,0.3252,0.7383,0.2938,0.7506,0.2938,0.7107,0.2938,0.6945,0.2938,0.6945,0.2938,0.7107,0.2938,0.7383,0.2938,0.7284,0.2787,0.7342,0.2787,0.7155,0.2787,0.7079,0.2787,0.7079,0.2787,0.7155,0.2787,0.7284,0.2787,0.7197,0.2768});
IndexedFaceSet49->setTexCoord(*TextureCoordinate51);

Shape45->setGeometry(IndexedFaceSet49);

Transform44->addChildren(*Shape45);

HAnimSegment43->addChildren(*Transform44);

HAnimJoint42->addChildren(*HAnimSegment43);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("l_knee");
HAnimJoint52->setDEF("hanim_l_knee");
HAnimJoint52->setCenter(new float[3]{3.454,18.67,-0.02158});
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("l_calf");
HAnimSegment53->setDEF("hanim_l_calf");
CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setTranslation(new float[3]{3.454,18.67,-0.02158});
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance56 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material57 = (CMaterial *)(m_pScene.createNode("Material"));
Material57->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance56->setMaterial(*Material57);

CImageTexture* ImageTexture58 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture58->setUSE("JuTextureAtlas");
Appearance56->setTexture(*ImageTexture58);

Shape55->setAppearance(*Appearance56);

CIndexedFaceSet* IndexedFaceSet59 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet59->setCoordIndex(new int[300]{4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
IndexedFaceSet59->setCreaseAngle(1.57);
IndexedFaceSet59->setTexCoordIndex(new int[300]{4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
CCoordinate* Coordinate60 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate60->setPoint(new float[126]{0.7406,0.9639,0.0216,0.4117,0.9639,0.8655,-0.3272,0.9639,1.036,-0.9197,0.9639,0.5579,-0.9197,0.9639,-0.3619,-0.3272,0.9639,-0.8401,0.4117,0.9639,-0.6694,2.238,-4.201,0.0216,1.426,-3.284,1.868,1.219,-1.439,2.239,2.036,-1.701,0.0216,-0.6748,-3.284,2.375,-0.6153,-1.439,2.686,-2.01,-4.201,1.161,-2.086,-1.701,0.9061,-2.01,-4.913,-1.265,-2.086,-1.701,-0.8628,-0.6748,-4.913,-2.686,-0.6153,-1.701,-2.191,1.426,-4.913,-2.179,1.219,-1.701,-1.744,1.112,0.0646,1.755,1.864,0.0646,0.0216,-0.5772,0.0646,2.145,-1.932,0.0646,1.051,-1.932,0.0646,-0.8553,-0.5772,0.0646,-1.907,1.112,0.0646,-1.517,2.345,-14.69,-0.0151,1.416,-14.67,2.102,-0.6712,-14.67,2.624,-2.345,-14.69,1.16,-2.345,-14.71,-1.342,-0.6712,-14.71,-2.38,1.416,-14.71,-1.857,0.73,-16.18,0.0221,0.4092,-16.17,0.7532,-0.3118,-16.17,0.9337,-0.89,-16.18,0.4278,-0.89,-16.19,-0.4362,-0.3118,-16.19,-0.7945,0.4092,-16.19,-0.614});
IndexedFaceSet59->setCoord(*Coordinate60);

CTextureCoordinate* TextureCoordinate61 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate61->setPoint(new float[84]{0.7637,0.172,0.755,0.172,0.7356,0.172,0.72,0.172,0.72,0.172,0.7356,0.172,0.755,0.172,0.8032,0.2271,0.7818,0.2173,0.7763,0.1976,0.7978,0.2004,0.7264,0.2173,0.728,0.1976,0.6912,0.2271,0.6892,0.2004,0.6912,0.2347,0.6892,0.2004,0.7264,0.2347,0.728,0.2004,0.7818,0.2347,0.7763,0.2004,0.7735,0.1816,0.7933,0.1816,0.729,0.1816,0.6933,0.1816,0.6933,0.1816,0.729,0.1816,0.7735,0.1816,0.806,0.339,0.7815,0.3388,0.7265,0.3388,0.6824,0.339,0.6824,0.3392,0.7265,0.3392,0.7815,0.3392,0.7634,0.3549,0.755,0.3548,0.736,0.3548,0.7207,0.3549,0.7207,0.355,0.736,0.355,0.755,0.355});
IndexedFaceSet59->setTexCoord(*TextureCoordinate61);

Shape55->setGeometry(IndexedFaceSet59);

Transform54->addChildren(*Shape55);

HAnimSegment53->addChildren(*Transform54);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setName("l_talocrural");
HAnimJoint62->setDEF("hanim_l_talocrural");
HAnimJoint62->setCenter(new float[3]{3.467,3.522,0.118});
HAnimJoint62->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint62->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment63 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment63->setName("l_talus");
HAnimSegment63->setDEF("hanim_l_talus");
CTransform* Transform64 = (CTransform *)(m_pScene.createNode("Transform"));
Transform64->setTranslation(new float[3]{3.467,3.522,0.118});
CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance66 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material67 = (CMaterial *)(m_pScene.createNode("Material"));
Material67->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance66->setMaterial(*Material67);

CImageTexture* ImageTexture68 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture68->setUSE("JuTextureAtlas");
Appearance66->setTexture(*ImageTexture68);

Shape65->setAppearance(*Appearance66);

CIndexedFaceSet* IndexedFaceSet69 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet69->setCoordIndex(new int[288]{1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1});
IndexedFaceSet69->setCreaseAngle(1.57);
IndexedFaceSet69->setTexCoordIndex(new int[288]{1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1});
CCoordinate* Coordinate70 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate70->setPoint(new float[114]{0.8966,-0.0174,-1.568,1.521,-0.0174,0.4019,0,-0.0174,-1.568,1.288,0.6634,0.3302,0.7503,0.6634,-1.364,0,0.6634,-1.364,0,0.6634,1.372,-1.521,-0.0174,0.4019,-1.288,0.6634,0.3302,-0.7503,0.6634,-1.364,-0.8967,-0.0174,-1.568,0,-0.0174,1.633,1.556,-0.2684,1.333,-1.556,-0.2684,1.333,1.293,-1.746,-2.684,1.293,-3.579,-1.568,0,-3.579,-1.568,1.018,-0.5447,-1.908,0,-0.5447,-1.908,-1.293,-1.746,-2.684,0,-1.746,-2.684,-1.018,-0.5447,-1.908,-1.293,-3.579,-1.568,2.687,-1.746,0.4019,1.918,-3.579,0.4019,1.877,-0.5447,0.4019,-2.687,-1.746,0.4019,-1.877,-0.5447,0.4019,-1.918,-3.579,0.4019,0,-3.579,0.4019,1.708,-3.439,1.272,2.332,-1.78,1.272,-2.332,-1.78,1.272,-1.708,-3.439,1.272,0,-3.439,1.272,1.469,-0.8455,1.311,-1.469,-0.8455,1.311,0,-0.5969,1.593});
IndexedFaceSet69->setCoord(*Coordinate70);

CTextureCoordinate* TextureCoordinate71 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate71->setPoint(new float[114]{0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4623,0.4901,0.4777,0.4914,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4777,0.4914,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4284,0.4641,0.4284,0.4641,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4611,0.4911,0.4777,0.4914,0.4611,0.4911,0.4321,0.4164,0.4315,0.3728,0.4321,0.4164,0.4315,0.3728,0.4315,0.3728,0.4309,0.4635,0.4284,0.4641,0.4321,0.4164,0.4321,0.4164,0.4284,0.4641,0.4309,0.4635,0.4315,0.3728,0.4315,0.3728,0.4315,0.3728,0.4804,0.417,0.4726,0.3714,0.4687,0.4544,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4687,0.4544});
IndexedFaceSet69->setTexCoord(*TextureCoordinate71);

Shape65->setGeometry(IndexedFaceSet69);

Transform64->addChildren(*Shape65);

HAnimSegment63->addChildren(*Transform64);

HAnimJoint62->addChildren(*HAnimSegment63);

CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setName("l_metatarsophalangeal_2");
HAnimJoint72->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint72->setCenter(new float[3]{3.467,3.251,1.465});
HAnimJoint72->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint72->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment73 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment73->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment73->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setTranslation(new float[3]{3.467,3.251,1.465});
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance76 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material77 = (CMaterial *)(m_pScene.createNode("Material"));
Material77->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance76->setMaterial(*Material77);

CImageTexture* ImageTexture78 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture78->setUSE("JuTextureAtlas");
Appearance76->setTexture(*ImageTexture78);

Shape75->setAppearance(*Appearance76);

CIndexedFaceSet* IndexedFaceSet79 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet79->setCoordIndex(new int[264]{3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1});
IndexedFaceSet79->setCreaseAngle(1.57);
IndexedFaceSet79->setTexCoordIndex(new int[264]{4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,18,-1,18,3,1,-1,2,20,12,-1,12,5,2,-1,12,10,7,-1,15,12,7,-1,6,15,7,-1,8,16,15,-1,15,6,8,-1,8,11,17,-1,17,16,8,-1,9,10,12,-1,12,19,9,-1,23,24,25,-1,23,25,26,-1,23,26,27,-1,22,23,27,-1,22,27,21,-1,0,1,22,-1,22,21,0,-1,1,3,23,-1,23,22,1,-1,11,8,24,-1,24,23,11,-1,8,6,25,-1,25,24,8,-1,6,7,26,-1,26,25,6,-1,7,4,27,-1,27,26,7,-1,4,0,21,-1,21,27,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,29,30,12,-1,12,28,29,-1,31,32,30,-1,30,29,31,-1,32,31,33,-1,12,30,34,-1,34,12,12,-1,34,30,32,-1,32,35,34,-1,35,32,33,-1,33,36,35,-1,37,28,12,-1,12,12,37,-1,38,40,12,-1,12,39,38,-1,41,38,39,-1,39,42,41,-1,42,45,41,-1,12,12,43,-1,43,39,12,-1,43,44,42,-1,42,39,43,-1,44,46,45,-1,45,42,44,-1,47,12,12,-1,12,40,47,-1});
CCoordinate* Coordinate80 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate80->setPoint(new float[105]{2.687,-1.475,-0.9449,1.918,-3.308,-0.9449,0,0.2536,0.2858,1.877,-0.2736,-0.9449,1.556,0.0026,-0.0141,-2.687,-1.475,-0.9449,-1.877,-0.2736,-0.9449,-1.918,-3.308,-0.9449,-1.556,0.0026,-0.0141,0,-3.308,-0.9449,1.965,-3.308,0.8573,-1.965,-3.308,0.8573,0,-3.308,0.8573,2.208,-1.501,-1.786,1.607,-2.668,-1.786,0,-2.668,-1.786,-1.607,-2.668,-1.786,-2.208,-1.501,-1.786,-1.599,-0.5151,-1.786,1.599,-0.5151,-1.786,1.638,-0.5877,2.175,2.034,-2.055,3.865,2.034,-3.308,3.522,0,-2.055,5.096,0,-0.4955,3.684,1.597,-0.2925,1.08,2.442,-1.692,0.8573,-2.034,-2.055,3.865,-1.638,-0.5877,2.175,0,-3.308,4.753,-2.034,-3.308,3.522,-1.597,-0.2925,1.08,-2.442,-1.692,0.8573,0,-3.308,3.522,0,-0.0249,1.55});
IndexedFaceSet79->setCoord(*Coordinate80);

CTextureCoordinate* TextureCoordinate81 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate81->setPoint(new float[96]{0.4804,0.417,0.4726,0.3714,0.4777,0.4914,0.4726,0.3714,0.4687,0.4544,0.4611,0.4911,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4777,0.4914,0.4611,0.4911,0.4726,0.3714,0.5184,0.4692,0.5392,0.409,0.5352,0.3721,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.537,0.3715,0.5123,0.477,0.5123,0.477,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.5785,0.4537,0.601,0.4307,0.5382,0.4079,0.6345,0.3741,0.5897,0.3729,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.5123,0.477,0.601,0.4307,0.5382,0.4079,0.5785,0.4537,0.6345,0.3741,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.5897,0.3729,0.537,0.3715,0.5123,0.477});
IndexedFaceSet79->setTexCoord(*TextureCoordinate81);

Shape75->setGeometry(IndexedFaceSet79);

Transform74->addChildren(*Shape75);

HAnimSegment73->addChildren(*Transform74);

HAnimJoint72->addChildren(*HAnimSegment73);

HAnimJoint62->addChildren(*HAnimJoint72);

HAnimJoint52->addChildren(*HAnimJoint62);

HAnimJoint42->addChildren(*HAnimJoint52);

HAnimJoint32->addChildren(*HAnimJoint42);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("r_hip");
HAnimJoint82->setDEF("hanim_r_hip");
HAnimJoint82->setCenter(new float[3]{-3.22,33.619999,-0.2832});
HAnimJoint82->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint82->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment83 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment83->setName("r_thigh");
HAnimSegment83->setDEF("hanim_r_thigh");
CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setTranslation(new float[3]{-3.22,33.619999,-0.2832});
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance86 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material87 = (CMaterial *)(m_pScene.createNode("Material"));
Material87->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance86->setMaterial(*Material87);

CImageTexture* ImageTexture88 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture88->setUSE("JuTextureAtlas");
Appearance86->setTexture(*ImageTexture88);

Shape85->setAppearance(*Appearance86);

CIndexedFaceSet* IndexedFaceSet89 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet89->setCoordIndex(new int[384]{29,30,31,-1,28,29,31,-1,31,32,33,-1,28,31,33,-1,34,28,33,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,28,0,1,-1,1,29,28,-1,29,1,2,-1,2,30,29,-1,30,2,3,-1,3,31,30,-1,31,3,4,-1,4,32,31,-1,32,4,5,-1,5,33,32,-1,33,5,6,-1,6,34,33,-1,34,6,0,-1,0,28,34,-1,21,36,35,-1,35,22,21,-1,22,35,37,-1,37,23,22,-1,23,37,38,-1,38,24,23,-1,24,38,39,-1,39,25,24,-1,25,39,40,-1,40,26,25,-1,26,40,41,-1,41,27,26,-1,27,41,36,-1,36,21,27,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1});
IndexedFaceSet89->setCreaseAngle(1.57);
IndexedFaceSet89->setTexCoordIndex(new int[384]{0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,29,36,35,-1,35,28,29,-1,28,35,37,-1,37,30,28,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,36,-1,36,29,34,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1});
CCoordinate* Coordinate90 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate90->setPoint(new float[150]{-2.617,2.231,0.2976,-1.527,2.231,2.592,0.9211,2.231,3.159,2.617,2.231,1.571,2.617,2.231,-1.571,0.9211,2.231,-3.159,-1.527,2.231,-2.29,-2.617,-1.238,0.2976,-1.527,-1.238,2.592,0.9211,-1.238,3.159,2.617,-1.238,1.571,2.617,-1.238,-0.9758,0.9211,-1.238,-3.009,-1.527,-1.238,-2.442,-2.617,-6.593,0.2976,-1.527,-6.593,2.58,0.9211,-6.593,3.147,2.617,-6.593,1.571,2.617,-6.593,-0.9758,0.9211,-6.593,-2.564,-1.527,-6.593,-1.997,-2.264,-11.92,0.2976,-1.321,-11.92,2.282,0.7969,-11.92,2.773,2.046,-11.92,1.399,2.046,-11.92,-0.8039,0.7969,-11.92,-2.177,-1.321,-11.92,-1.687,-1.864,4.073,0.2976,-1.058,4.073,1.995,0.7536,4.073,2.415,2.206,4.073,1.24,2.206,4.073,-0.6446,0.7536,4.073,-1.819,-1.058,4.073,-1.4,-1.033,-14.67,1.883,-1.786,-14.67,0.2976,0.6591,-14.67,2.275,1.657,-14.67,1.178,1.657,-14.67,-0.5825,0.6591,-14.67,-1.68,-1.033,-14.67,-1.288,-0.4256,-15.99,1.041,-0.7788,-15.99,0.2976,0.3682,-15.99,1.225,0.8362,-15.99,0.7104,0.8362,-15.99,-0.1152,0.3682,-15.99,-0.63,-0.4256,-15.99,-0.4463,0.1114,-16.17,0.2976});
IndexedFaceSet89->setCoord(*Coordinate90);

CTextureCoordinate* TextureCoordinate91 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate91->setPoint(new float[100]{0.7387,0.5078,0.7519,0.5078,0.7092,0.5078,0.6855,0.5078,0.6855,0.5078,0.7092,0.5078,0.7387,0.5078,0.7641,0.4868,0.7464,0.4472,0.7641,0.4472,0.7464,0.4868,0.7065,0.4472,0.7065,0.4868,0.6788,0.4472,0.6788,0.4868,0.6788,0.4472,0.6788,0.4868,0.7065,0.4472,0.7065,0.4868,0.7464,0.4472,0.7464,0.4868,0.7464,0.3861,0.7641,0.3861,0.7065,0.3861,0.6788,0.3861,0.6788,0.3861,0.7065,0.3861,0.7464,0.3861,0.743,0.3252,0.7584,0.3252,0.7085,0.3252,0.6882,0.3252,0.6882,0.3252,0.7085,0.3252,0.743,0.3252,0.7383,0.2938,0.7506,0.2938,0.7107,0.2938,0.6945,0.2938,0.6945,0.2938,0.7107,0.2938,0.7383,0.2938,0.7284,0.2787,0.7342,0.2787,0.7155,0.2787,0.7079,0.2787,0.7079,0.2787,0.7155,0.2787,0.7284,0.2787,0.7197,0.2768});
IndexedFaceSet89->setTexCoord(*TextureCoordinate91);

Shape85->setGeometry(IndexedFaceSet89);

Transform84->addChildren(*Shape85);

HAnimSegment83->addChildren(*Transform84);

HAnimJoint82->addChildren(*HAnimSegment83);

CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setName("r_knee");
HAnimJoint92->setDEF("hanim_r_knee");
HAnimJoint92->setCenter(new float[3]{-3.454,18.67,-0.02158});
HAnimJoint92->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment93 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment93->setName("r_calf");
HAnimSegment93->setDEF("hanim_r_calf");
CTransform* Transform94 = (CTransform *)(m_pScene.createNode("Transform"));
Transform94->setTranslation(new float[3]{-3.454,18.67,-0.02158});
CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance96 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material97 = (CMaterial *)(m_pScene.createNode("Material"));
Material97->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance96->setMaterial(*Material97);

CImageTexture* ImageTexture98 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture98->setUSE("JuTextureAtlas");
Appearance96->setTexture(*ImageTexture98);

Shape95->setAppearance(*Appearance96);

CIndexedFaceSet* IndexedFaceSet99 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet99->setCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
IndexedFaceSet99->setCreaseAngle(1.57);
IndexedFaceSet99->setTexCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
CCoordinate* Coordinate100 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate100->setPoint(new float[126]{-0.7406,0.9639,0.0216,-0.4117,0.9639,0.8655,0.3272,0.9639,1.036,0.9197,0.9639,0.5579,0.9197,0.9639,-0.3619,0.3272,0.9639,-0.8401,-0.4117,0.9639,-0.6694,-2.238,-4.201,0.0216,-1.426,-3.284,1.868,-1.219,-1.439,2.239,-2.036,-1.701,0.0216,0.6748,-3.284,2.375,0.6153,-1.439,2.686,2.01,-4.201,1.161,2.086,-1.701,0.9061,2.01,-4.913,-1.265,2.086,-1.701,-0.8628,0.6748,-4.913,-2.686,0.6153,-1.701,-2.191,-1.426,-4.913,-2.179,-1.219,-1.701,-1.744,-1.112,0.0646,1.755,-1.864,0.0646,0.0216,0.5772,0.0646,2.145,1.932,0.0646,1.051,1.932,0.0646,-0.8553,0.5772,0.0646,-1.907,-1.112,0.0646,-1.517,-2.345,-14.69,-0.0151,-1.416,-14.67,2.102,0.6712,-14.67,2.624,2.345,-14.69,1.16,2.345,-14.71,-1.342,0.6712,-14.71,-2.38,-1.416,-14.71,-1.857,-0.73,-16.18,0.0221,-0.4092,-16.17,0.7532,0.3118,-16.17,0.9337,0.89,-16.18,0.4278,0.89,-16.19,-0.4362,0.3118,-16.19,-0.7945,-0.4092,-16.19,-0.614});
IndexedFaceSet99->setCoord(*Coordinate100);

CTextureCoordinate* TextureCoordinate101 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate101->setPoint(new float[84]{0.7637,0.172,0.755,0.172,0.7356,0.172,0.72,0.172,0.72,0.172,0.7356,0.172,0.755,0.172,0.8032,0.2271,0.7818,0.2173,0.7763,0.1976,0.7978,0.2004,0.7264,0.2173,0.728,0.1976,0.6912,0.2271,0.6892,0.2004,0.6912,0.2347,0.6892,0.2004,0.7264,0.2347,0.728,0.2004,0.7818,0.2347,0.7763,0.2004,0.7735,0.1816,0.7933,0.1816,0.729,0.1816,0.6933,0.1816,0.6933,0.1816,0.729,0.1816,0.7735,0.1816,0.806,0.339,0.7815,0.3388,0.7265,0.3388,0.6824,0.339,0.6824,0.3392,0.7265,0.3392,0.7815,0.3392,0.7634,0.3549,0.755,0.3548,0.736,0.3548,0.7207,0.3549,0.7207,0.355,0.736,0.355,0.755,0.355});
IndexedFaceSet99->setTexCoord(*TextureCoordinate101);

Shape95->setGeometry(IndexedFaceSet99);

Transform94->addChildren(*Shape95);

HAnimSegment93->addChildren(*Transform94);

HAnimJoint92->addChildren(*HAnimSegment93);

CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("r_talocrural");
HAnimJoint102->setDEF("hanim_r_talocrural");
HAnimJoint102->setCenter(new float[3]{-3.679,3.522,0.118});
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment103->setName("r_talus");
HAnimSegment103->setDEF("hanim_r_talus");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{-3.679,3.522,0.118});
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance106 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material107 = (CMaterial *)(m_pScene.createNode("Material"));
Material107->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance106->setMaterial(*Material107);

CImageTexture* ImageTexture108 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture108->setUSE("JuTextureAtlas");
Appearance106->setTexture(*ImageTexture108);

Shape105->setAppearance(*Appearance106);

CIndexedFaceSet* IndexedFaceSet109 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet109->setCoordIndex(new int[288]{1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1});
IndexedFaceSet109->setCreaseAngle(1.57);
IndexedFaceSet109->setTexCoordIndex(new int[288]{1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1});
CCoordinate* Coordinate110 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate110->setPoint(new float[114]{-0.8966,-0.0174,-1.568,-1.521,-0.0174,0.4019,0,-0.0174,-1.568,-1.288,0.6634,0.3302,-0.7503,0.6634,-1.364,0,0.6634,-1.364,0,0.6634,1.372,1.521,-0.0174,0.4019,1.288,0.6634,0.3302,0.7503,0.6634,-1.364,0.8967,-0.0174,-1.568,0,-0.0174,1.633,-1.556,-0.2684,1.333,1.556,-0.2684,1.333,-1.293,-1.746,-2.684,-1.293,-3.579,-1.568,0,-3.579,-1.568,-1.018,-0.5447,-1.908,0,-0.5447,-1.908,1.293,-1.746,-2.684,0,-1.746,-2.684,1.018,-0.5447,-1.908,1.293,-3.579,-1.568,-2.687,-1.746,0.4019,-1.918,-3.579,0.4019,-1.877,-0.5447,0.4019,2.687,-1.746,0.4019,1.877,-0.5447,0.4019,1.918,-3.579,0.4019,0,-3.579,0.4019,-1.708,-3.439,1.272,-2.332,-1.78,1.272,2.332,-1.78,1.272,1.708,-3.439,1.272,0,-3.439,1.272,-1.469,-0.8455,1.311,1.469,-0.8455,1.311,0,-0.5969,1.593});
IndexedFaceSet109->setCoord(*Coordinate110);

CTextureCoordinate* TextureCoordinate111 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate111->setPoint(new float[114]{0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4623,0.4901,0.4777,0.4914,0.4623,0.4901,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4269,0.4898,0.4777,0.4914,0.4777,0.4914,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4284,0.4641,0.4284,0.4641,0.4309,0.4635,0.4687,0.4544,0.4611,0.4911,0.4611,0.4911,0.4777,0.4914,0.4611,0.4911,0.4321,0.4164,0.4315,0.3728,0.4321,0.4164,0.4315,0.3728,0.4315,0.3728,0.4309,0.4635,0.4284,0.4641,0.4321,0.4164,0.4321,0.4164,0.4284,0.4641,0.4309,0.4635,0.4315,0.3728,0.4315,0.3728,0.4315,0.3728,0.4804,0.417,0.4726,0.3714,0.4687,0.4544,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4687,0.4544});
IndexedFaceSet109->setTexCoord(*TextureCoordinate111);

Shape105->setGeometry(IndexedFaceSet109);

Transform104->addChildren(*Shape105);

HAnimSegment103->addChildren(*Transform104);

HAnimJoint102->addChildren(*HAnimSegment103);

CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("r_metatarsophalangeal_2");
HAnimJoint112->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint112->setCenter(new float[3]{-3.679,3.251,1.465});
HAnimJoint112->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint112->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment113->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment113->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform114 = (CTransform *)(m_pScene.createNode("Transform"));
Transform114->setTranslation(new float[3]{-3.679,3.251,1.465});
CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance116 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material117 = (CMaterial *)(m_pScene.createNode("Material"));
Material117->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance116->setMaterial(*Material117);

CImageTexture* ImageTexture118 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture118->setUSE("JuTextureAtlas");
Appearance116->setTexture(*ImageTexture118);

Shape115->setAppearance(*Appearance116);

CIndexedFaceSet* IndexedFaceSet119 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet119->setCoordIndex(new int[264]{25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1});
IndexedFaceSet119->setCreaseAngle(1.57);
IndexedFaceSet119->setTexCoordIndex(new int[264]{12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,18,-1,18,14,1,-1,2,5,12,-1,12,20,2,-1,7,10,12,-1,7,12,15,-1,6,7,15,-1,8,6,15,-1,15,16,8,-1,8,16,17,-1,17,11,8,-1,9,19,12,-1,12,10,9,-1,22,21,27,-1,25,24,23,-1,26,25,23,-1,27,26,23,-1,22,27,23,-1,0,21,22,-1,22,1,0,-1,1,22,23,-1,23,3,1,-1,11,23,24,-1,24,8,11,-1,8,24,25,-1,25,6,8,-1,6,25,26,-1,26,7,6,-1,7,26,27,-1,27,4,7,-1,4,27,21,-1,21,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,29,28,12,-1,12,30,29,-1,31,29,30,-1,30,32,31,-1,32,33,31,-1,12,12,34,-1,34,30,12,-1,34,35,32,-1,32,30,34,-1,35,36,33,-1,33,32,35,-1,37,12,12,-1,12,28,37,-1,38,39,12,-1,12,40,38,-1,41,42,39,-1,39,38,41,-1,42,41,45,-1,12,39,43,-1,43,12,12,-1,43,39,42,-1,42,44,43,-1,44,42,45,-1,45,46,44,-1,47,40,12,-1,12,12,47,-1});
CCoordinate* Coordinate120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate120->setPoint(new float[105]{-2.687,-1.475,-0.9449,-1.918,-3.308,-0.9449,0,0.2536,0.2858,-1.877,-0.2736,-0.9449,-1.556,0.0026,-0.0141,2.687,-1.475,-0.9449,1.877,-0.2736,-0.9449,1.918,-3.308,-0.9449,1.556,0.0026,-0.0141,0,-3.308,-0.9449,-1.965,-3.308,0.8573,1.965,-3.308,0.8573,0,-3.308,0.8573,-2.208,-1.501,-1.786,-1.607,-2.668,-1.786,0,-2.668,-1.786,1.607,-2.668,-1.786,2.208,-1.501,-1.786,1.599,-0.5151,-1.786,-1.599,-0.5151,-1.786,-1.638,-0.5877,2.175,-2.034,-2.055,3.865,-2.034,-3.308,3.522,0,-2.055,5.096,0,-0.4955,3.684,-1.597,-0.2925,1.08,-2.442,-1.692,0.8573,2.034,-2.055,3.865,1.638,-0.5877,2.175,0,-3.308,4.753,2.034,-3.308,3.522,1.597,-0.2925,1.08,2.442,-1.692,0.8573,0,-3.308,3.522,0,-0.0249,1.55});
IndexedFaceSet119->setCoord(*Coordinate120);

CTextureCoordinate* TextureCoordinate121 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate121->setPoint(new float[96]{0.4804,0.417,0.4726,0.3714,0.4777,0.4914,0.4726,0.3714,0.4687,0.4544,0.4611,0.4911,0.4804,0.417,0.4687,0.4544,0.4726,0.3714,0.4777,0.4914,0.4611,0.4911,0.4726,0.3714,0.5246,0.4611,0.5392,0.409,0.5352,0.3721,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.537,0.3715,0.5123,0.477,0.5123,0.477,0.4804,0.417,0.4726,0.3714,0.4726,0.3714,0.4726,0.3714,0.4804,0.417,0.4687,0.4544,0.4687,0.4544,0.5785,0.4537,0.601,0.4307,0.5382,0.4079,0.6345,0.3741,0.5897,0.3729,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.537,0.3715,0.5123,0.477,0.601,0.4307,0.5382,0.4079,0.5785,0.4537,0.6345,0.3741,0.5897,0.3729,0.5392,0.409,0.5352,0.3721,0.5897,0.3729,0.537,0.3715,0.5123,0.477});
IndexedFaceSet119->setTexCoord(*TextureCoordinate121);

Shape115->setGeometry(IndexedFaceSet119);

Transform114->addChildren(*Shape115);

HAnimSegment113->addChildren(*Transform114);

HAnimJoint112->addChildren(*HAnimSegment113);

HAnimJoint102->addChildren(*HAnimJoint112);

HAnimJoint92->addChildren(*HAnimJoint102);

HAnimJoint82->addChildren(*HAnimJoint92);

HAnimJoint32->addChildren(*HAnimJoint82);

CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setName("sacroiliac");
HAnimJoint122->setDEF("hanim_sacroiliac");
HAnimJoint122->setCenter(new float[3]{0.000034,31.26,-0.008798});
HAnimJoint122->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint122->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment123->setName("pelvis");
HAnimSegment123->setDEF("hanim_pelvis");
CTransform* Transform124 = (CTransform *)(m_pScene.createNode("Transform"));
Transform124->setTranslation(new float[3]{0.000034,31.26,-0.008798});
CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance126 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material127 = (CMaterial *)(m_pScene.createNode("Material"));
Material127->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance126->setMaterial(*Material127);

CImageTexture* ImageTexture128 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture128->setUSE("JuTextureAtlas");
Appearance126->setTexture(*ImageTexture128);

Shape125->setAppearance(*Appearance126);

CIndexedFaceSet* IndexedFaceSet129 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet129->setCoordIndex(new int[576]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,63,62,-1,62,25,26,-1,27,64,63,-1,63,26,27,-1,28,65,64,-1,64,27,28,-1,29,66,65,-1,65,28,29,-1,30,67,66,-1,66,29,30,-1,31,68,67,-1,67,30,31,-1,32,69,68,-1,68,31,32,-1,33,70,69,-1,69,32,33,-1,34,71,70,-1,70,33,34,-1,35,72,71,-1,71,34,35,-1,36,73,72,-1,72,35,36,-1,25,62,73,-1,73,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1,62,63,14,-1,14,13,62,-1,63,64,15,-1,15,14,63,-1,64,65,16,-1,16,15,64,-1,65,66,17,-1,17,16,65,-1,66,67,18,-1,18,17,66,-1,67,68,19,-1,19,18,67,-1,68,69,20,-1,20,19,68,-1,69,70,21,-1,21,20,69,-1,70,71,22,-1,22,21,70,-1,71,72,23,-1,23,22,71,-1,72,73,24,-1,24,23,72,-1,73,62,13,-1,13,24,73,-1});
IndexedFaceSet129->setCreaseAngle(1.57);
IndexedFaceSet129->setTexCoordIndex(new int[576]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,39,40,37,-1,37,38,39,-1,41,42,40,-1,40,39,41,-1,43,44,42,-1,42,41,43,-1,45,46,44,-1,44,43,45,-1,47,48,46,-1,46,45,47,-1,49,50,48,-1,48,47,49,-1,51,52,50,-1,50,49,51,-1,53,54,52,-1,52,51,53,-1,55,56,54,-1,54,53,55,-1,57,58,56,-1,56,55,57,-1,59,60,58,-1,58,57,59,-1,38,37,60,-1,60,59,38,-1,62,39,38,-1,38,61,62,-1,63,41,39,-1,39,62,63,-1,64,43,41,-1,41,63,64,-1,65,45,43,-1,43,64,65,-1,66,47,45,-1,45,65,66,-1,67,49,47,-1,47,66,67,-1,68,51,49,-1,49,67,68,-1,69,53,51,-1,51,68,69,-1,70,55,53,-1,53,69,70,-1,71,57,55,-1,55,70,71,-1,72,59,57,-1,57,71,72,-1,61,38,59,-1,59,72,61,-1,74,62,61,-1,61,73,74,-1,75,63,62,-1,62,74,75,-1,76,64,63,-1,63,75,76,-1,77,65,64,-1,64,76,77,-1,78,66,65,-1,65,77,78,-1,79,67,66,-1,66,78,79,-1,80,68,67,-1,67,79,80,-1,81,69,68,-1,68,80,81,-1,82,70,69,-1,69,81,82,-1,83,71,70,-1,70,82,83,-1,84,72,71,-1,71,83,84,-1,73,61,72,-1,72,84,73,-1,85,74,73,-1,85,75,74,-1,85,76,75,-1,85,77,76,-1,85,78,77,-1,85,79,78,-1,85,80,79,-1,85,81,80,-1,85,82,81,-1,85,83,82,-1,85,84,83,-1,85,73,84,-1,25,26,14,-1,14,13,25,-1,26,27,15,-1,15,14,26,-1,27,28,16,-1,16,15,27,-1,28,29,17,-1,17,16,28,-1,29,30,18,-1,18,17,29,-1,30,31,19,-1,19,18,30,-1,31,32,20,-1,20,19,31,-1,32,33,21,-1,21,20,32,-1,33,34,22,-1,22,21,33,-1,34,35,23,-1,23,22,34,-1,35,36,24,-1,24,23,35,-1,36,25,13,-1,13,24,36,-1});
CCoordinate* Coordinate130 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate130->setPoint(new float[222]{0,10.03,0.1297,0,9.057,-2.567,-2.075,9.057,-2.206,-3.594,9.057,-1.77,-4.15,9.057,0.1297,-3.594,9.057,2.03,-2.075,9.057,2.465,0,9.057,2.827,2.075,9.057,2.465,3.594,9.057,2.03,4.15,9.057,0.1297,3.594,9.057,-1.77,2.075,9.057,-2.206,0,6.725,-4.193,-2.684,7.001,-3.614,-4.648,7.228,-2.032,-5.367,7.228,0.1297,-4.648,7.4,2.189,-2.684,7.228,3.313,0,7.024,4.004,2.684,7.228,3.313,4.648,7.4,2.189,5.367,7.228,0.1297,4.648,7.228,-2.032,2.684,7.001,-3.614,0,4.745,-4.3,-2.936,4.743,-3.667,-5.089,4.738,-2.28,-5.874,4.731,0.133,-5.102,4.731,2.476,-2.963,4.731,3.656,0,4.73,4.3,2.963,4.73,3.656,5.102,4.73,2.476,5.874,4.731,0.134,5.088,4.737,-2.281,2.936,4.743,-3.667,0,2.358,-3.663,-2.543,2.356,-3.113,-4.402,2.355,-1.613,-5.084,2.358,0.134,-4.415,2.354,2.157,-2.562,2.341,3.097,0,2.339,3.654,2.56,2.347,3.101,4.417,2.357,2.158,5.083,2.357,0.1338,4.404,2.356,-1.611,2.542,2.358,-3.115,0,0.6228,-1.923,-1.478,0.6244,-1.603,-2.538,0.622,-1.037,-2.926,0.6243,0.1308,-2.535,0.6248,1.308,-1.464,0.6148,2.154,0,0.6102,2.466,1.455,0.6123,2.154,2.534,0.6219,1.301,2.927,0.6248,0.1297,2.539,0.6184,-1.027,1.471,0.6221,-1.602,0,-0.0048,0.1335,0,6.687,-3.936,-2.527,6.96,-3.39,-4.378,7.174,-1.899,-5.055,7.161,0.1297,-4.396,7.33,2.041,-2.558,7.161,3.082,0,6.834,3.759,2.555,7.163,3.083,4.397,7.332,2.039,5.054,7.163,0.1318,4.376,7.176,-1.9,2.527,6.96,-3.39});
IndexedFaceSet129->setCoord(*Coordinate130);

CTextureCoordinate* TextureCoordinate131 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate131->setPoint(new float[172]{0.2061,0.2498,0.2067,0.1822,0.1471,0.1822,0.1035,0.1822,0.0875,0.1822,0.1035,0.1822,0.1471,0.1822,0.2067,0.1822,0.2663,0.1822,0.31,0.1822,0.3259,0.1822,0.31,0.1822,0.2663,0.1822,0.208,0.1494,0.1373,0.1495,0.0855,0.1495,0.0666,0.1495,0.0855,0.1496,0.1373,0.1495,0.208,0.1495,0.2788,0.1495,0.3305,0.1496,0.3495,0.1495,0.3305,0.1495,0.2788,0.1495,0.208,0.1494,0.1414,0.1495,0.0926,0.1495,0.0748,0.1495,0.0922,0.1495,0.1406,0.1495,0.208,0.1495,0.2754,0.1495,0.3239,0.1495,0.3412,0.1495,0.3234,0.1495,0.2746,0.1495,0.995,0.6227,0.9911,0.5634,0.9445,0.5634,0.9587,0.6143,0.8611,0.5667,0.8645,0.6158,0.8296,0.5725,0.8297,0.6181,0.7843,0.5725,0.7986,0.6221,0.7343,0.5716,0.7402,0.6181,0.6899,0.5733,0.7033,0.6238,0.7343,0.5716,0.7402,0.6181,0.7843,0.5724,0.7986,0.6221,0.8296,0.5725,0.8297,0.6181,0.8611,0.5667,0.8646,0.6158,0.9445,0.5634,0.9587,0.6143,0.9874,0.5161,0.9409,0.5169,0.8667,0.527,0.8296,0.5279,0.7882,0.5304,0.7381,0.5276,0.6693,0.5234,0.738,0.5277,0.7882,0.5305,0.8296,0.5279,0.8666,0.5271,0.9409,0.517,0.9852,0.4793,0.8833,0.4954,0.8658,0.4954,0.8297,0.4954,0.7933,0.4954,0.7672,0.4952,0.6706,0.4859,0.7672,0.4952,0.7936,0.4954,0.8297,0.4954,0.8655,0.4953,0.8832,0.4954,0.8296,0.4836});
IndexedFaceSet129->setTexCoord(*TextureCoordinate131);

Shape125->setGeometry(IndexedFaceSet129);

Transform124->addChildren(*Shape125);

HAnimSegment123->addChildren(*Transform124);

HAnimJoint122->addChildren(*HAnimSegment123);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("l_shoulder");
HAnimJoint132->setDEF("hanim_l_shoulder");
HAnimJoint132->setCenter(new float[3]{4.778,51.029999,-2.069});
HAnimJoint132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment133->setName("l_upperarm");
HAnimSegment133->setDEF("hanim_l_upperarm");
CTransform* Transform134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform134->setTranslation(new float[3]{4.778,51.029999,-2.069});
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance136 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material137 = (CMaterial *)(m_pScene.createNode("Material"));
Material137->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance136->setMaterial(*Material137);

CImageTexture* ImageTexture138 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture138->setUSE("JuTextureAtlas");
Appearance136->setTexture(*ImageTexture138);

Shape135->setAppearance(*Appearance136);

CIndexedFaceSet* IndexedFaceSet139 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet139->setCoordIndex(new int[304]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
IndexedFaceSet139->setCreaseAngle(1.57);
IndexedFaceSet139->setTexCoordIndex(new int[304]{2,0,53,-1,3,2,53,-1,54,3,53,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,34,35,36,-1,33,34,36,-1,37,33,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,40,39,-1,39,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,48,40,-1,40,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,34,48,-1,48,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setPoint(new float[120]{0.7458,1.679,-1.189,1.565,1.679,0.0238,0.6631,1.679,1.177,-0.714,1.679,0.6762,-0.6628,1.679,-0.7857,0.9082,0.4486,-1.634,2.04,0.4486,0.0404,0.794,0.4486,1.632,-1.108,0.4486,0.9413,-1.037,0.4486,-1.078,0.9397,-2.611,-1.634,2.071,-2.611,0.0404,0.8254,-2.611,1.632,-1.076,-2.611,0.9413,-1.006,-2.611,-1.078,0.9738,-3.656,-1.728,2.171,-3.656,0.0439,0.8529,-3.656,1.728,-1.159,-3.656,0.9971,-1.084,-3.656,-1.139,0.598,-1.86,-1.372,1.463,-1.86,-0.3215,1.015,-1.86,1.153,-0.1265,-1.86,1.013,-0.3843,-1.86,-0.5473,0.6162,-6.896,-1.11,1.515,-6.896,-0.2675,1.049,-6.896,0.9149,-0.1364,-6.896,0.8029,-0.4042,-6.896,-0.4486,0.6445,-10.84,-1.07,1.509,-10.84,-0.2583,1.062,-10.84,0.88,-0.0801,-10.84,0.7722,-0.3379,-10.84,-0.4327,0.6093,-11.37,-0.6358,1.116,-11.37,-0.1604,0.8538,-11.37,0.5067,0.1847,-11.37,0.4436,0.0336,-11.37,-0.2626});
IndexedFaceSet139->setCoord(*Coordinate140);

CTextureCoordinate* TextureCoordinate141 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate141->setPoint(new float[110]{0.2661,0.1332,0.3717,0.1332,0.1245,0.1332,0.0067,0.1321,0.2119,0.1332,0.2707,0.1099,0.3728,0.1099,0.1275,0.1099,0.0049,0.1088,0.2167,0.1099,0.271,0.0284,0.3751,0.0284,0.1295,0.0284,0.0061,0.0273,0.2178,0.0284,0.2716,0.0086,0.3751,0.0086,0.1299,0.0086,0.0058,0.0075,0.2184,0.0086,0.2836,0.0426,0.3685,0.0426,0.1368,0.0426,0.0085,0.0415,0.2198,0.0426,0.0067,0.1343,0.0084,0.111,0.0084,0.111,0.0073,0.0295,0.0073,0.0295,0.0076,0.0097,0.0076,0.0097,0.0065,0.0437,0.6285,0.3174,0.6285,0.3316,0.6285,0.3312,0.6285,0.3167,0.6285,0.3082,0.5864,0.3116,0.5864,0.3376,0.6087,0.339,0.6087,0.3139,0.5864,0.3394,0.6087,0.3383,0.5864,0.3146,0.6087,0.3128,0.5864,0.2974,0.6087,0.2977,0.6261,0.339,0.6261,0.3148,0.6261,0.3383,0.6261,0.3137,0.6261,0.2992,0.0441,0.1287,-0.1162,0.128});
IndexedFaceSet139->setTexCoord(*TextureCoordinate141);

Shape135->setGeometry(IndexedFaceSet139);

Transform134->addChildren(*Shape135);

HAnimSegment133->addChildren(*Transform134);

HAnimJoint132->addChildren(*HAnimSegment133);

CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setName("l_elbow");
HAnimJoint142->setDEF("hanim_l_elbow");
HAnimJoint142->setCenter(new float[3]{5.297,40.119999,-2.055});
HAnimJoint142->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint142->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment143 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment143->setName("l_forearm");
HAnimSegment143->setDEF("hanim_l_forearm");
CTransform* Transform144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform144->setTranslation(new float[3]{5.297,40.119999,-2.055});
CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance146 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material147 = (CMaterial *)(m_pScene.createNode("Material"));
Material147->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance146->setMaterial(*Material147);

CImageTexture* ImageTexture148 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture148->setUSE("JuTextureAtlas");
Appearance146->setTexture(*ImageTexture148);

Shape145->setAppearance(*Appearance146);

CIndexedFaceSet* IndexedFaceSet149 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet149->setCoordIndex(new int[184]{3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
IndexedFaceSet149->setCreaseAngle(1.57);
IndexedFaceSet149->setTexCoordIndex(new int[184]{3,2,0,-1,3,0,1,-1,4,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,16,-1,16,15,21,-1,22,21,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,16,20,-1});
CCoordinate* Coordinate150 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate150->setPoint(new float[75]{0.1284,0.6566,-0.794,0.7947,0.6566,-0.1619,0.4154,0.6566,0.757,-0.4852,0.6566,0.6929,-0.6626,0.6566,-0.2657,0.0855,-0.4623,-1.129,1.027,-0.4623,-0.281,0.4911,-0.4623,1.171,-0.7817,-0.4623,1.07,-1.032,-0.4623,-0.445,0.0941,-3.046,-1.116,1.1,-3.046,-0.2777,0.55,-2.481,1.16,-0.8091,-2.481,1.06,-1.1,-3.046,-0.4401,0.084,-8.01,-1.171,1.025,-7.982,-0.1359,0.3907,-8.118,1.09,-0.6003,-8.118,0.9957,-0.9132,-8.109,-0.2244,0.0434,-8.725,-0.6054,0.5441,-8.725,0.0272,0.2591,-8.725,0.759,-0.4177,-8.725,0.6949,-0.551,-8.725,-0.0767});
IndexedFaceSet149->setCoord(*Coordinate150);

CTextureCoordinate* TextureCoordinate151 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate151->setPoint(new float[50]{0.5159,0.3385,0.5159,0.3244,0.5159,0.3332,0.5159,0.3157,0.5159,0.3103,0.521,0.3428,0.521,0.3229,0.521,0.3355,0.521,0.3108,0.521,0.3029,0.5327,0.3442,0.5327,0.3231,0.5302,0.3366,0.5302,0.3103,0.5327,0.3016,0.5558,0.339,0.5558,0.323,0.5558,0.3334,0.5558,0.3141,0.5558,0.3079,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302,0.5585,0.317,0.5585,0.3129});
IndexedFaceSet149->setTexCoord(*TextureCoordinate151);

Shape145->setGeometry(IndexedFaceSet149);

Transform144->addChildren(*Shape145);

HAnimSegment143->addChildren(*Transform144);

HAnimJoint142->addChildren(*HAnimSegment143);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setName("l_radiocarpal");
HAnimJoint152->setDEF("hanim_l_radiocarpal");
HAnimJoint152->setCenter(new float[3]{5.07,31.99,-1.559});
HAnimJoint152->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint152->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment153 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment153->setName("l_carpal");
HAnimSegment153->setDEF("hanim_l_carpal");
CTransform* Transform154 = (CTransform *)(m_pScene.createNode("Transform"));
Transform154->setTranslation(new float[3]{5.07,31.99,-1.559});
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance156 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material157 = (CMaterial *)(m_pScene.createNode("Material"));
Material157->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance156->setMaterial(*Material157);

CImageTexture* ImageTexture158 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture158->setUSE("JuTextureAtlas");
Appearance156->setTexture(*ImageTexture158);

Shape155->setAppearance(*Appearance156);

CIndexedFaceSet* IndexedFaceSet159 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet159->setCoordIndex(new int[160]{4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,3,2,0,-1,0,1,3,-1});
IndexedFaceSet159->setCreaseAngle(1.57);
IndexedFaceSet159->setTexCoordIndex(new int[160]{0,2,1,-1,1,3,0,-1,36,38,37,-1,37,39,36,-1,28,30,29,-1,29,31,28,-1,4,5,2,-1,2,0,4,-1,40,41,38,-1,38,36,40,-1,32,33,31,-1,31,29,32,-1,6,7,5,-1,5,4,6,-1,42,43,41,-1,41,40,42,-1,34,35,33,-1,33,32,34,-1,10,12,11,-1,12,14,13,-1,13,11,12,-1,15,17,16,-1,16,18,15,-1,19,11,13,-1,13,20,19,-1,21,19,22,-1,22,19,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,4,0,8,-1,8,9,4,-1,10,11,16,-1,16,17,10,-1,11,19,18,-1,18,16,11,-1,19,21,15,-1,15,18,19,-1,14,12,26,-1,26,27,14,-1});
CCoordinate* Coordinate160 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate160->setPoint(new float[66]{0.8732,0.4437,0.6298,0.8463,0.4584,-1.065,-0.5135,0.3661,0.7037,-0.5196,0.3675,-1.013,-0.6654,-0.1688,1.167,1.16,0.015,1.096,1.119,0.0434,-1.571,-0.747,-0.1537,-1.566,-0.5777,-1.832,1.902,1.387,-1.647,1.643,1.345,-1.619,-1.902,-0.8391,-1.916,-1.775,-0.3897,-3.083,1.338,0.6425,-3.283,1.382,0.6009,-3.255,-1.636,-0.5412,-3.094,-1.527,-0.742,-0.1555,-0.1478,-1.159,-1.873,1.533,-1.387,-0.4699,0.0458,-1.361,-0.5281,1.488,-1.163,-1.872,0.1088,-0.7494,-1.912,-0.1591});
IndexedFaceSet159->setCoord(*Coordinate160);

CTextureCoordinate* TextureCoordinate161 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate161->setPoint(new float[88]{0.4675,0.2229,0.4534,0.3224,0.4709,0.3268,0.4579,0.2308,0.5552,0.233,0.5504,0.3288,0.6215,0.2576,0.6159,0.3282,0.478,0.1884,0.5527,0.2007,0.4618,0.1862,0.4629,0.1191,0.4583,0.192,0.4802,0.0435,0.4672,0.0405,0.5177,0.1794,0.4789,0.1246,0.4811,0.1812,0.515,0.132,0.538,0.1232,0.5459,0.0341,0.5348,0.1824,0.6006,0.1887,0.5977,0.0452,0.6323,0.1888,0.629,0.0403,0.4501,0.1899,0.4535,0.0388,0.5577,0.3108,0.5496,0.3395,0.5573,0.3333,0.5503,0.3041,0.5263,0.3468,0.527,0.2997,0.5106,0.3433,0.5113,0.3032,0.4584,0.3225,0.4544,0.2224,0.4607,0.2253,0.4525,0.325,0.5365,0.3334,0.5532,0.2053,0.6323,0.3251,0.6179,0.2145});
IndexedFaceSet159->setTexCoord(*TextureCoordinate161);

Shape155->setGeometry(IndexedFaceSet159);

Transform154->addChildren(*Shape155);

HAnimSegment153->addChildren(*Transform154);

HAnimJoint152->addChildren(*HAnimSegment153);

HAnimJoint142->addChildren(*HAnimJoint152);

HAnimJoint132->addChildren(*HAnimJoint142);

HAnimJoint122->addChildren(*HAnimJoint132);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setName("r_shoulder");
HAnimJoint162->setDEF("hanim_r_shoulder");
HAnimJoint162->setCenter(new float[3]{-4.778,51.029999,-2.069});
HAnimJoint162->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint162->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment163->setName("r_upperarm");
HAnimSegment163->setDEF("hanim_r_upperarm");
CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setTranslation(new float[3]{-4.778,51.029999,-2.069});
CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance166 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material167 = (CMaterial *)(m_pScene.createNode("Material"));
Material167->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance166->setMaterial(*Material167);

CImageTexture* ImageTexture168 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture168->setUSE("JuTextureAtlas");
Appearance166->setTexture(*ImageTexture168);

Shape165->setAppearance(*Appearance166);

CIndexedFaceSet* IndexedFaceSet169 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet169->setCoordIndex(new int[304]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
IndexedFaceSet169->setCreaseAngle(1.57);
IndexedFaceSet169->setTexCoordIndex(new int[304]{53,0,2,-1,53,2,3,-1,54,53,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,34,-1,36,34,33,-1,37,36,33,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,39,-1,39,40,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,40,-1,40,48,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,48,-1,48,34,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setPoint(new float[120]{-0.7458,1.679,-1.189,-1.565,1.679,0.0238,-0.6631,1.679,1.177,0.714,1.679,0.6762,0.6628,1.679,-0.7857,-0.9082,0.4486,-1.634,-2.04,0.4486,0.0404,-0.794,0.4486,1.632,1.108,0.4486,0.9413,1.037,0.4486,-1.078,-0.9397,-2.611,-1.634,-2.071,-2.611,0.0404,-0.8254,-2.611,1.632,1.076,-2.611,0.9413,1.006,-2.611,-1.078,-0.9738,-3.656,-1.728,-2.171,-3.656,0.0439,-0.8529,-3.656,1.728,1.159,-3.656,0.9971,1.084,-3.656,-1.139,-0.598,-1.86,-1.372,-1.463,-1.86,-0.3215,-1.015,-1.86,1.153,0.1265,-1.86,1.013,0.3843,-1.86,-0.5473,-0.6162,-6.896,-1.11,-1.515,-6.896,-0.2675,-1.049,-6.896,0.9149,0.1364,-6.896,0.8029,0.4042,-6.896,-0.4486,-0.6445,-10.84,-1.07,-1.509,-10.84,-0.2583,-1.062,-10.84,0.88,0.0801,-10.84,0.7722,0.3379,-10.84,-0.4327,-0.6093,-11.37,-0.6358,-1.116,-11.37,-0.1604,-0.8538,-11.37,0.5067,-0.1847,-11.37,0.4436,-0.0336,-11.37,-0.2626});
IndexedFaceSet169->setCoord(*Coordinate170);

CTextureCoordinate* TextureCoordinate171 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate171->setPoint(new float[110]{0.2661,0.1332,0.3717,0.1332,0.1245,0.1332,0.0067,0.1321,0.2119,0.1332,0.2707,0.1099,0.3728,0.1099,0.1275,0.1099,0.0049,0.1088,0.2167,0.1099,0.271,0.0284,0.3751,0.0284,0.1295,0.0284,0.0061,0.0273,0.2178,0.0284,0.2716,0.0086,0.3751,0.0086,0.1299,0.0086,0.0058,0.0075,0.2184,0.0086,0.2836,0.0426,0.3685,0.0426,0.1368,0.0426,0.0085,0.0415,0.2198,0.0426,0.0067,0.1343,0.0084,0.111,0.0084,0.111,0.0073,0.0295,0.0073,0.0295,0.0076,0.0097,0.0076,0.0097,0.0065,0.0437,0.6285,0.3174,0.6285,0.3316,0.6285,0.3312,0.6285,0.3167,0.6285,0.3082,0.5864,0.3116,0.5864,0.3376,0.6087,0.339,0.6087,0.3139,0.5864,0.3394,0.6087,0.3383,0.5864,0.3146,0.6087,0.3128,0.5864,0.2974,0.6087,0.2977,0.6261,0.339,0.6261,0.3148,0.6261,0.3383,0.6261,0.3137,0.6261,0.2992,0.0441,0.1287,-0.1162,0.128});
IndexedFaceSet169->setTexCoord(*TextureCoordinate171);

Shape165->setGeometry(IndexedFaceSet169);

Transform164->addChildren(*Shape165);

HAnimSegment163->addChildren(*Transform164);

HAnimJoint162->addChildren(*HAnimSegment163);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("r_elbow");
HAnimJoint172->setDEF("hanim_r_elbow");
HAnimJoint172->setCenter(new float[3]{-5.297,40.119999,-2.055});
HAnimJoint172->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint172->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setName("r_forearm");
HAnimSegment173->setDEF("hanim_r_forearm");
CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{-5.297,40.119999,-2.055});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance176 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material177 = (CMaterial *)(m_pScene.createNode("Material"));
Material177->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance176->setMaterial(*Material177);

CImageTexture* ImageTexture178 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture178->setUSE("JuTextureAtlas");
Appearance176->setTexture(*ImageTexture178);

Shape175->setAppearance(*Appearance176);

CIndexedFaceSet* IndexedFaceSet179 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet179->setCoordIndex(new int[184]{1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
IndexedFaceSet179->setCreaseAngle(1.57);
IndexedFaceSet179->setTexCoordIndex(new int[184]{0,2,3,-1,1,0,3,-1,4,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,15,16,-1,16,20,21,-1,22,17,15,-1,15,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,16,19,-1,19,24,20,-1});
CCoordinate* Coordinate180 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate180->setPoint(new float[75]{-0.1284,0.6566,-0.794,-0.7947,0.6566,-0.1619,-0.4154,0.6566,0.757,0.4852,0.6566,0.6929,0.6626,0.6566,-0.2657,-0.0855,-0.4623,-1.129,-1.027,-0.4623,-0.281,-0.4911,-0.4623,1.171,0.7817,-0.4623,1.07,1.032,-0.4623,-0.445,-0.0941,-3.046,-1.116,-1.1,-3.046,-0.2777,-0.55,-2.481,1.16,0.8091,-2.481,1.06,1.1,-3.046,-0.4401,-0.084,-8.01,-1.171,-1.025,-7.982,-0.1359,-0.3907,-8.118,1.09,0.6003,-8.118,0.9957,0.9132,-8.109,-0.2244,-0.0434,-8.725,-0.6054,-0.5441,-8.725,0.0272,-0.2591,-8.725,0.759,0.4177,-8.725,0.6949,0.551,-8.725,-0.0767});
IndexedFaceSet179->setCoord(*Coordinate180);

CTextureCoordinate* TextureCoordinate181 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate181->setPoint(new float[50]{0.5159,0.3385,0.5159,0.3244,0.5159,0.3332,0.5159,0.3157,0.5159,0.3103,0.521,0.3428,0.521,0.3229,0.521,0.3355,0.521,0.3108,0.521,0.3029,0.5327,0.3442,0.5327,0.3231,0.5302,0.3366,0.5302,0.3103,0.5327,0.3016,0.5558,0.339,0.5558,0.323,0.5558,0.3334,0.5558,0.3141,0.5558,0.3079,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302,0.5585,0.317,0.5585,0.3129});
IndexedFaceSet179->setTexCoord(*TextureCoordinate181);

Shape175->setGeometry(IndexedFaceSet179);

Transform174->addChildren(*Shape175);

HAnimSegment173->addChildren(*Transform174);

HAnimJoint172->addChildren(*HAnimSegment173);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setName("r_radiocarpal");
HAnimJoint182->setDEF("hanim_r_radiocarpal");
HAnimJoint182->setCenter(new float[3]{-5.07,31.99,-1.559});
HAnimJoint182->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint182->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment183 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment183->setName("r_carpal");
HAnimSegment183->setDEF("hanim_r_carpal");
CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setTranslation(new float[3]{-5.07,31.99,-1.559});
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance186 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material187 = (CMaterial *)(m_pScene.createNode("Material"));
Material187->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance186->setMaterial(*Material187);

CImageTexture* ImageTexture188 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture188->setUSE("JuTextureAtlas");
Appearance186->setTexture(*ImageTexture188);

Shape185->setAppearance(*Appearance186);

CIndexedFaceSet* IndexedFaceSet189 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet189->setCoordIndex(new int[160]{4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,3,1,0,-1,0,2,3,-1});
IndexedFaceSet189->setCreaseAngle(1.57);
IndexedFaceSet189->setTexCoordIndex(new int[160]{0,3,1,-1,1,2,0,-1,36,39,37,-1,37,38,36,-1,28,31,29,-1,29,30,28,-1,4,0,2,-1,2,5,4,-1,40,36,38,-1,38,41,40,-1,32,29,31,-1,31,33,32,-1,6,4,5,-1,5,7,6,-1,42,40,41,-1,41,43,42,-1,34,32,33,-1,33,35,34,-1,10,11,12,-1,12,11,13,-1,13,14,12,-1,15,18,16,-1,16,17,15,-1,19,20,13,-1,13,11,19,-1,21,22,19,-1,22,23,20,-1,20,19,22,-1,24,25,23,-1,23,22,24,-1,4,9,8,-1,8,0,4,-1,10,17,16,-1,16,11,10,-1,11,16,18,-1,18,19,11,-1,19,18,15,-1,15,21,19,-1,14,27,26,-1,26,12,14,-1});
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[66]{-0.8732,0.4437,0.6298,-0.8463,0.4584,-1.065,0.5135,0.3661,0.7037,0.5196,0.3675,-1.013,0.6654,-0.1688,1.167,-1.16,0.015,1.096,-1.119,0.0434,-1.571,0.747,-0.1537,-1.566,0.5777,-1.832,1.902,-1.387,-1.647,1.643,-1.345,-1.619,-1.902,0.8391,-1.916,-1.775,0.3897,-3.083,1.338,-0.6425,-3.283,1.382,-0.6009,-3.255,-1.636,0.5412,-3.094,-1.527,0.742,-0.1555,-0.1478,1.159,-1.873,1.533,1.387,-0.4699,0.0458,1.361,-0.5281,1.488,1.163,-1.872,0.1088,0.7494,-1.912,-0.1591});
IndexedFaceSet189->setCoord(*Coordinate190);

CTextureCoordinate* TextureCoordinate191 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate191->setPoint(new float[88]{0.4675,0.2229,0.4534,0.3224,0.4709,0.3268,0.4579,0.2308,0.5552,0.233,0.5504,0.3288,0.6215,0.2576,0.6159,0.3282,0.478,0.1884,0.5527,0.2007,0.4618,0.1862,0.4629,0.1191,0.4583,0.192,0.4802,0.0435,0.4672,0.0405,0.5177,0.1794,0.4789,0.1246,0.4811,0.1812,0.515,0.132,0.538,0.1232,0.5459,0.0341,0.5348,0.1824,0.6006,0.1887,0.5977,0.0452,0.6323,0.1888,0.629,0.0403,0.4501,0.1899,0.4535,0.0388,0.5577,0.3108,0.5496,0.3395,0.5573,0.3333,0.5503,0.3041,0.5263,0.3468,0.527,0.2997,0.5106,0.3433,0.5113,0.3032,0.4584,0.3225,0.4544,0.2224,0.4607,0.2253,0.4525,0.325,0.5365,0.3334,0.5532,0.2053,0.6323,0.3251,0.6179,0.2145});
IndexedFaceSet189->setTexCoord(*TextureCoordinate191);

Shape185->setGeometry(IndexedFaceSet189);

Transform184->addChildren(*Shape185);

HAnimSegment183->addChildren(*Transform184);

HAnimJoint182->addChildren(*HAnimSegment183);

HAnimJoint172->addChildren(*HAnimJoint182);

HAnimJoint162->addChildren(*HAnimJoint172);

HAnimJoint122->addChildren(*HAnimJoint162);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setName("vl5");
HAnimJoint192->setDEF("hanim_vl5");
HAnimJoint192->setCenter(new float[3]{0.000025,39.84,0.1163});
HAnimJoint192->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint192->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment193 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment193->setName("l5");
HAnimSegment193->setDEF("hanim_l5");
CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform194->setTranslation(new float[3]{0.000025,39.84,0.1163});
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance196 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material197 = (CMaterial *)(m_pScene.createNode("Material"));
Material197->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance196->setMaterial(*Material197);

CImageTexture* ImageTexture198 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture198->setUSE("JuTextureAtlas");
Appearance196->setTexture(*ImageTexture198);

Shape195->setAppearance(*Appearance196);

CIndexedFaceSet* IndexedFaceSet199 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet199->setCoordIndex(new int[584]{7,10,11,-1,11,9,7,-1,33,10,7,-1,34,10,33,-1,7,9,13,-1,13,12,7,-1,12,33,7,-1,11,8,9,-1,8,13,9,-1,33,12,0,-1,14,17,1,-1,14,1,0,-1,17,2,1,-1,16,42,17,-1,42,2,17,-1,42,16,15,-1,15,4,42,-1,11,16,8,-1,11,15,16,-1,11,6,15,-1,6,11,10,-1,34,6,10,-1,19,6,5,-1,22,16,17,-1,17,23,22,-1,23,17,14,-1,14,21,23,-1,23,21,20,-1,20,22,23,-1,13,21,14,-1,21,13,20,-1,8,20,13,-1,6,19,15,-1,18,15,19,-1,18,4,15,-1,52,4,18,-1,14,0,12,-1,13,14,12,-1,5,6,34,-1,3,5,34,-1,19,5,24,-1,24,25,19,-1,18,19,25,-1,25,26,18,-1,52,18,26,-1,26,27,52,-1,5,3,28,-1,28,24,5,-1,16,22,20,-1,20,8,16,-1,31,30,29,-1,29,32,31,-1,33,31,32,-1,34,33,32,-1,31,36,35,-1,35,30,31,-1,36,31,33,-1,29,30,37,-1,37,30,35,-1,33,0,36,-1,38,40,39,-1,38,0,40,-1,39,40,2,-1,41,39,42,-1,42,39,2,-1,42,4,43,-1,43,41,42,-1,29,37,41,-1,29,41,43,-1,29,43,44,-1,44,32,29,-1,34,32,44,-1,45,46,44,-1,48,47,39,-1,39,41,48,-1,47,49,38,-1,38,39,47,-1,47,48,50,-1,50,49,47,-1,35,38,49,-1,49,50,35,-1,37,35,50,-1,44,43,45,-1,51,45,43,-1,51,43,4,-1,52,51,4,-1,38,36,0,-1,35,36,38,-1,46,34,44,-1,3,34,46,-1,45,54,53,-1,53,46,45,-1,51,55,54,-1,54,45,51,-1,52,27,55,-1,55,51,52,-1,46,53,28,-1,28,3,46,-1,41,37,50,-1,50,48,41,-1,68,69,58,-1,58,56,68,-1,56,58,59,-1,59,57,56,-1,69,60,61,-1,61,58,69,-1,58,61,62,-1,62,59,58,-1,59,62,75,-1,75,72,59,-1,60,76,63,-1,63,61,60,-1,61,63,64,-1,64,62,61,-1,66,63,76,-1,76,65,66,-1,67,64,63,-1,63,66,67,-1,64,67,80,-1,80,78,64,-1,68,71,70,-1,70,69,68,-1,71,73,72,-1,72,70,71,-1,73,57,59,-1,59,72,73,-1,69,70,74,-1,74,60,69,-1,70,72,75,-1,75,74,70,-1,60,74,77,-1,77,76,60,-1,74,75,78,-1,78,77,74,-1,75,62,64,-1,64,78,75,-1,79,65,76,-1,76,77,79,-1,80,79,77,-1,77,78,80,-1,57,73,71,-1,57,71,68,-1,56,57,68,-1,80,67,66,-1,79,80,66,-1,65,79,66,-1});
IndexedFaceSet199->setCreaseAngle(1.57);
IndexedFaceSet199->setTexCoordIndex(new int[584]{2,3,0,-1,0,1,2,-1,4,3,2,-1,5,3,4,-1,2,1,6,-1,6,7,2,-1,7,4,2,-1,0,8,1,-1,8,6,1,-1,4,7,9,-1,10,11,12,-1,10,12,9,-1,11,13,12,-1,14,15,11,-1,15,13,11,-1,15,14,16,-1,16,17,15,-1,0,14,8,-1,0,16,14,-1,0,18,16,-1,18,0,3,-1,5,18,3,-1,19,18,20,-1,22,14,11,-1,11,21,22,-1,21,11,10,-1,10,23,21,-1,21,23,24,-1,24,22,21,-1,6,23,10,-1,23,6,24,-1,8,24,6,-1,18,19,16,-1,25,16,19,-1,25,17,16,-1,26,17,25,-1,10,9,7,-1,6,10,7,-1,20,18,5,-1,27,20,5,-1,19,20,28,-1,28,29,19,-1,25,19,29,-1,29,30,25,-1,26,25,30,-1,30,31,26,-1,20,27,32,-1,32,28,20,-1,14,22,24,-1,24,8,14,-1,35,34,33,-1,33,36,35,-1,37,35,36,-1,38,37,36,-1,35,40,39,-1,39,34,35,-1,40,35,37,-1,33,34,41,-1,41,34,39,-1,37,42,40,-1,43,45,44,-1,43,42,45,-1,44,45,46,-1,47,44,48,-1,48,44,46,-1,48,50,49,-1,49,47,48,-1,33,41,47,-1,33,47,49,-1,33,49,51,-1,51,36,33,-1,38,36,51,-1,52,53,51,-1,55,54,44,-1,44,47,55,-1,54,56,43,-1,43,44,54,-1,54,55,57,-1,57,56,54,-1,39,43,56,-1,56,57,39,-1,41,39,57,-1,51,49,52,-1,58,52,49,-1,58,49,50,-1,59,58,50,-1,43,40,42,-1,39,40,43,-1,53,38,51,-1,60,38,53,-1,52,62,61,-1,61,53,52,-1,58,63,62,-1,62,52,58,-1,59,64,63,-1,63,58,59,-1,53,61,65,-1,65,60,53,-1,47,41,57,-1,57,55,47,-1,67,70,69,-1,69,66,67,-1,66,69,71,-1,71,68,66,-1,70,73,72,-1,72,69,70,-1,69,72,74,-1,74,71,69,-1,71,74,89,-1,89,85,71,-1,73,76,75,-1,75,72,73,-1,72,75,77,-1,77,74,72,-1,79,75,76,-1,76,78,79,-1,80,77,75,-1,75,79,80,-1,77,80,95,-1,95,92,77,-1,81,84,83,-1,83,82,81,-1,84,86,85,-1,85,83,84,-1,86,68,71,-1,71,85,86,-1,82,83,88,-1,88,87,82,-1,83,85,89,-1,89,88,83,-1,87,88,91,-1,91,90,87,-1,88,89,92,-1,92,91,88,-1,89,74,77,-1,77,92,89,-1,94,93,90,-1,90,91,94,-1,95,94,91,-1,91,92,95,-1,68,86,84,-1,68,84,81,-1,66,68,81,-1,95,80,79,-1,94,95,79,-1,78,94,79,-1});
CCoordinate* Coordinate200 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate200->setPoint(new float[243]{0,13.41,-0.7672,1.02,13.85,-2.25,0,13.51,-3.769,0,0.8188,3.156,0,3.563,-3.333,3.661,0.1281,2.243,3.621,3.118,2.023,2.814,9.08,2.9,4.406,8.825,0.0214,4.314,8.846,1.719,2.299,6.538,2.734,4.032,6.41,1.262,2.29,10.91,1.179,3.407,10.95,0.0607,2.621,13.27,-1.246,3.715,3.086,-1.788,4.067,8.723,-3.836,2.341,13.3,-3.687,4.289,0.3935,-1.658,4.734,0.1406,-0.1384,5.652,10.72,-0.9836,4.811,12.9,-1.603,5.345,10.47,-3.647,4.811,12.9,-3.594,2.517,-1.669,1.502,3.255,-1.66,-0.1346,2.948,-1.486,-1.868,0,-1.281,-2.313,0,-1.194,2.304,-4.032,6.41,1.262,-4.314,8.846,1.719,-2.814,9.08,2.9,-2.299,6.538,2.734,0,9.136,2.246,0,4.716,3.226,-3.407,10.95,0.0607,-2.29,10.91,1.179,-4.406,8.825,0.0214,-2.621,13.27,-1.246,-2.341,13.3,-3.687,-1.02,13.85,-2.25,-4.067,8.723,-3.836,0,8.074,-4.277,-3.715,3.086,-1.788,-3.621,3.118,2.023,-4.734,0.1406,-0.1384,-3.661,0.1281,2.243,-4.811,12.9,-3.594,-5.345,10.47,-3.647,-4.811,12.9,-1.603,-5.652,10.72,-0.9836,-4.289,0.3935,-1.658,0,0.6918,-2.992,-2.517,-1.669,1.502,-3.255,-1.66,-0.1346,-2.948,-1.486,-1.868,0.8892,12.94,-2.608,0.516,12.73,-1.431,1.146,13.39,-2.694,0.6275,13.06,-0.8358,0,14.57,-3.544,1.236,14.38,-2.522,0.6992,13.84,-0.7186,1.176,16.23,-2.013,0.5348,16,-0.4293,0,16.62,-2.52,0.6489,16.47,-1.739,0.3707,16.31,-0.8024,0,13.08,-3.382,0,13.59,-3.731,-1.146,13.39,-2.694,-0.8893,12.94,-2.608,-0.6275,13.06,-0.8358,-0.516,12.73,-1.431,-1.236,14.38,-2.522,-0.6992,13.84,-0.7186,0,16.47,-3.285,-1.176,16.23,-2.013,-0.5348,16,-0.4293,-0.6489,16.47,-1.739,-0.3708,16.31,-0.8024});
IndexedFaceSet199->setCoord(*Coordinate200);

CTextureCoordinate* TextureCoordinate201 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate201->setPoint(new float[192]{0.2049,0.3383,0.2002,0.3958,0.136,0.3803,0.1281,0.3329,0.0546,0.3857,0.0447,0.2768,0.1678,0.4532,0.1416,0.4193,0.2035,0.3953,0.0762,0.5156,0.1396,0.5164,0.1296,0.5174,0.0824,0.5324,0.0762,0.5185,0.1914,0.3925,0.0546,0.383,0.2122,0.2712,0.0453,0.2902,0.2088,0.2721,0.2379,0.2057,0.1995,0.2053,0.2239,0.5518,0.2203,0.4727,0.2239,0.5518,0.2313,0.4794,0.2219,0.2126,0.0439,0.2148,0.0439,0.2182,0.1625,0.1691,0.1889,0.1693,0.1779,0.1741,0.0675,0.1679,0.0675,0.1702,0.2049,0.3383,0.2002,0.3958,0.136,0.3803,0.1281,0.3329,0.0546,0.3857,0.0447,0.2768,0.1678,0.4532,0.1416,0.4193,0.2035,0.3953,0.0762,0.5156,0.1396,0.5164,0.1296,0.5174,0.0824,0.5324,0.0762,0.5185,0.1914,0.3925,0.0546,0.383,0.2122,0.2712,0.0453,0.2902,0.2088,0.2721,0.2379,0.2057,0.1995,0.2053,0.2239,0.5518,0.2203,0.4727,0.2239,0.5518,0.2313,0.4794,0.2219,0.2126,0.0439,0.2148,0.0439,0.2182,0.1625,0.1691,0.1889,0.1693,0.1779,0.1741,0.0675,0.1679,0.0675,0.1702,0.5159,0.3385,0.5159,0.3244,0.5159,0.3332,0.521,0.3428,0.521,0.3229,0.521,0.3355,0.5327,0.3442,0.5327,0.3231,0.5302,0.3366,0.5558,0.339,0.5558,0.323,0.5558,0.3334,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302,0.5159,0.3244,0.521,0.3229,0.521,0.3428,0.5159,0.3385,0.521,0.3355,0.5159,0.3332,0.5327,0.3231,0.5327,0.3442,0.5302,0.3366,0.5558,0.323,0.5558,0.339,0.5558,0.3334,0.5585,0.3232,0.5585,0.3341,0.5585,0.3302});
IndexedFaceSet199->setTexCoord(*TextureCoordinate201);

Shape195->setGeometry(IndexedFaceSet199);

Transform194->addChildren(*Shape195);

HAnimSegment193->addChildren(*Transform194);

HAnimJoint192->addChildren(*HAnimSegment193);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setName("skullbase");
HAnimJoint202->setDEF("hanim_skullbase");
HAnimJoint202->setCenter(new float[3]{0.000025,56.07,-1.554});
HAnimJoint202->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint202->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment203->setName("skull");
HAnimSegment203->setDEF("hanim_skull");
CTransform* Transform204 = (CTransform *)(m_pScene.createNode("Transform"));
Transform204->setTranslation(new float[3]{0.000025,56.07,-1.554});
CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance206 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material207 = (CMaterial *)(m_pScene.createNode("Material"));
Material207->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance206->setMaterial(*Material207);

CImageTexture* ImageTexture208 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture208->setUSE("JuTextureAtlas");
Appearance206->setTexture(*ImageTexture208);

Shape205->setAppearance(*Appearance206);

CIndexedFaceSet* IndexedFaceSet209 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet209->setCoordIndex(new int[1200]{66,67,10,-1,10,9,66,-1,67,66,0,-1,0,1,67,-1,9,10,8,-1,8,119,9,-1,2,11,5,-1,6,11,2,-1,69,12,68,-1,10,67,68,-1,68,12,10,-1,10,12,7,-1,7,8,10,-1,71,72,7,-1,7,12,71,-1,70,12,69,-1,70,71,12,-1,72,73,13,-1,13,7,72,-1,73,72,3,-1,3,4,73,-1,73,74,13,-1,66,9,149,-1,149,153,66,-1,119,149,9,-1,149,119,16,-1,16,15,149,-1,74,14,18,-1,18,13,74,-1,19,17,18,-1,18,14,19,-1,22,25,27,-1,27,21,22,-1,26,25,16,-1,27,25,26,-1,18,17,26,-1,22,23,28,-1,28,25,22,-1,25,28,15,-1,15,16,25,-1,65,153,149,-1,149,24,65,-1,15,24,149,-1,15,28,24,-1,28,23,24,-1,38,37,36,-1,36,34,38,-1,29,161,16,-1,16,119,29,-1,30,29,119,-1,119,164,30,-1,29,30,31,-1,18,161,13,-1,18,26,161,-1,17,27,26,-1,13,161,7,-1,7,161,8,-1,147,130,119,-1,160,161,130,-1,119,130,161,-1,161,131,119,-1,164,119,131,-1,131,132,164,-1,150,132,131,-1,32,33,26,-1,26,16,35,-1,32,26,35,-1,33,34,161,-1,161,26,33,-1,16,161,34,-1,34,36,35,-1,16,34,35,-1,37,35,36,-1,34,33,38,-1,37,38,33,-1,33,32,37,-1,35,37,32,-1,20,21,27,-1,41,20,27,-1,43,41,27,-1,43,27,44,-1,17,46,45,-1,17,45,39,-1,17,39,44,-1,17,44,27,-1,20,41,152,-1,39,43,44,-1,151,45,46,-1,52,47,39,-1,39,45,52,-1,51,49,41,-1,41,43,51,-1,49,50,152,-1,152,41,49,-1,47,51,43,-1,43,39,47,-1,48,52,45,-1,45,151,48,-1,58,53,47,-1,47,52,58,-1,57,55,49,-1,49,51,57,-1,53,57,51,-1,51,47,53,-1,55,56,50,-1,50,49,55,-1,54,58,52,-1,52,48,54,-1,64,59,53,-1,53,58,64,-1,63,61,55,-1,55,57,63,-1,59,63,57,-1,57,53,59,-1,61,62,56,-1,56,55,61,-1,60,64,58,-1,58,54,60,-1,65,148,153,-1,0,66,153,-1,153,148,0,-1,5,68,67,-1,67,1,5,-1,11,69,68,-1,68,5,11,-1,6,70,69,-1,69,11,6,-1,3,71,70,-1,70,6,3,-1,71,3,72,-1,14,74,73,-1,73,4,14,-1,75,78,77,-1,77,76,75,-1,0,77,78,-1,78,1,0,-1,79,75,76,-1,76,136,79,-1,2,5,80,-1,6,2,80,-1,81,83,82,-1,83,78,75,-1,75,82,83,-1,84,82,75,-1,75,79,84,-1,84,88,85,-1,85,82,84,-1,86,81,82,-1,86,82,85,-1,87,89,88,-1,88,84,87,-1,3,88,89,-1,89,4,3,-1,89,87,90,-1,163,76,77,-1,77,156,163,-1,136,76,163,-1,92,136,163,-1,163,93,92,-1,94,91,90,-1,90,87,94,-1,94,17,19,-1,19,91,94,-1,95,96,22,-1,22,21,95,-1,97,92,96,-1,95,97,96,-1,94,97,17,-1,98,23,22,-1,22,96,98,-1,93,98,96,-1,96,92,93,-1,163,156,65,-1,65,24,163,-1,93,163,24,-1,93,24,98,-1,98,24,23,-1,101,110,100,-1,100,99,101,-1,92,103,102,-1,102,136,92,-1,136,102,104,-1,104,165,136,-1,102,105,104,-1,94,87,103,-1,94,103,97,-1,17,97,95,-1,139,165,134,-1,87,84,103,-1,84,79,103,-1,154,139,135,-1,162,135,103,-1,139,103,135,-1,103,139,137,-1,165,137,136,-1,137,165,138,-1,157,137,138,-1,165,139,155,-1,107,92,97,-1,108,107,97,-1,108,97,109,-1,103,99,109,-1,109,97,103,-1,107,101,99,-1,92,107,99,-1,92,99,103,-1,110,101,107,-1,99,100,109,-1,109,100,110,-1,110,108,109,-1,107,108,110,-1,111,106,95,-1,95,21,20,-1,95,20,152,-1,111,95,152,-1,17,95,106,-1,17,106,112,-1,17,112,151,-1,17,151,46,-1,140,141,42,-1,112,106,111,-1,142,143,40,-1,65,156,148,-1,156,77,0,-1,0,148,156,-1,78,83,5,-1,5,1,78,-1,83,81,80,-1,80,5,83,-1,81,86,6,-1,6,80,81,-1,86,85,3,-1,3,6,86,-1,85,88,3,-1,89,90,91,-1,91,4,89,-1,112,113,48,-1,48,151,112,-1,152,50,114,-1,114,111,152,-1,111,114,113,-1,113,112,111,-1,113,115,54,-1,54,48,113,-1,50,56,116,-1,116,114,50,-1,114,116,115,-1,115,113,114,-1,115,117,60,-1,60,54,115,-1,56,62,118,-1,118,116,56,-1,116,118,117,-1,117,115,116,-1,122,125,158,-1,158,121,122,-1,120,121,158,-1,158,124,120,-1,122,123,119,-1,119,125,122,-1,129,127,126,-1,126,159,129,-1,126,120,124,-1,124,159,126,-1,128,127,129,-1,129,139,128,-1,124,144,146,-1,146,159,124,-1,144,124,158,-1,158,145,144,-1,125,133,145,-1,145,158,125,-1,159,146,155,-1,155,129,159,-1,155,139,129,-1,133,125,119,-1,4,19,14,-1,4,91,19,-1,167,168,169,-1,169,170,171,-1,167,169,171,-1,171,172,173,-1,171,173,166,-1,167,171,166,-1,166,59,64,-1,64,167,166,-1,64,60,168,-1,168,167,64,-1,60,117,169,-1,169,168,60,-1,117,118,170,-1,170,169,117,-1,118,62,171,-1,171,170,118,-1,62,61,172,-1,172,171,62,-1,61,63,173,-1,173,172,61,-1,63,59,166,-1,166,173,63,-1});
IndexedFaceSet209->setCreaseAngle(1.57);
IndexedFaceSet209->setTexCoordIndex(new int[1200]{55,58,53,-1,53,54,55,-1,58,55,56,-1,56,57,58,-1,54,53,59,-1,59,60,54,-1,61,62,63,-1,64,62,61,-1,65,66,67,-1,53,58,67,-1,67,66,53,-1,53,66,68,-1,68,59,53,-1,69,72,68,-1,68,66,69,-1,70,66,65,-1,70,69,66,-1,72,75,71,-1,71,68,72,-1,75,72,73,-1,73,74,75,-1,75,76,71,-1,30,1,4,-1,4,29,30,-1,2,4,1,-1,136,137,134,-1,134,135,136,-1,157,160,158,-1,158,159,157,-1,161,162,158,-1,158,160,161,-1,165,166,163,-1,163,164,165,-1,167,166,168,-1,163,166,167,-1,158,162,167,-1,165,171,170,-1,170,166,165,-1,166,170,172,-1,172,168,166,-1,139,145,136,-1,136,138,139,-1,135,138,136,-1,172,170,173,-1,170,171,173,-1,78,83,79,-1,79,77,78,-1,140,141,134,-1,134,137,140,-1,143,140,137,-1,137,142,143,-1,140,143,144,-1,158,174,159,-1,158,167,174,-1,162,163,167,-1,71,80,68,-1,68,80,59,-1,59,81,60,-1,59,80,81,-1,137,134,141,-1,141,140,137,-1,142,137,140,-1,140,143,142,-1,144,143,140,-1,177,178,167,-1,167,168,176,-1,177,167,176,-1,178,179,174,-1,174,167,178,-1,81,80,77,-1,77,79,82,-1,81,77,82,-1,83,82,79,-1,77,84,78,-1,83,78,84,-1,84,85,83,-1,82,83,85,-1,169,164,163,-1,181,169,163,-1,180,181,163,-1,180,163,175,-1,162,186,182,-1,162,182,183,-1,162,183,175,-1,162,175,163,-1,169,181,184,-1,183,180,175,-1,185,182,186,-1,16,13,6,-1,6,9,16,-1,17,15,8,-1,8,7,17,-1,14,20,11,-1,11,5,14,-1,13,17,7,-1,7,6,13,-1,18,19,12,-1,12,10,18,-1,24,21,13,-1,13,16,24,-1,25,23,15,-1,15,17,25,-1,21,25,17,-1,17,13,21,-1,22,28,20,-1,20,14,22,-1,26,27,19,-1,19,18,26,-1,207,208,205,-1,205,206,207,-1,211,212,209,-1,209,210,211,-1,208,211,210,-1,210,205,208,-1,212,214,213,-1,213,209,212,-1,216,207,206,-1,206,215,216,-1,139,146,145,-1,0,30,29,-1,29,3,0,-1,63,67,58,-1,58,57,63,-1,62,65,67,-1,67,63,62,-1,64,70,65,-1,65,62,64,-1,73,69,70,-1,70,64,73,-1,69,73,72,-1,86,76,75,-1,75,74,86,-1,87,90,88,-1,88,89,87,-1,56,88,90,-1,90,57,56,-1,91,87,89,-1,89,92,91,-1,61,63,93,-1,64,61,93,-1,94,95,96,-1,95,90,87,-1,87,96,95,-1,97,96,87,-1,87,91,97,-1,97,101,98,-1,98,96,97,-1,99,94,96,-1,99,96,98,-1,100,102,101,-1,101,97,100,-1,73,101,102,-1,102,74,73,-1,102,100,103,-1,35,31,32,-1,32,36,35,-1,34,31,35,-1,147,150,148,-1,148,149,147,-1,189,190,187,-1,187,188,189,-1,189,162,161,-1,161,190,189,-1,191,192,165,-1,165,164,191,-1,193,194,192,-1,191,193,192,-1,189,193,162,-1,195,171,165,-1,165,192,195,-1,196,195,192,-1,192,194,196,-1,148,156,139,-1,139,138,148,-1,149,148,138,-1,196,173,195,-1,195,173,171,-1,105,110,106,-1,106,104,105,-1,147,152,151,-1,151,150,147,-1,150,151,153,-1,153,154,150,-1,151,155,153,-1,189,188,197,-1,189,197,193,-1,162,193,191,-1,38,39,37,-1,100,97,107,-1,97,91,107,-1,91,92,108,-1,91,108,107,-1,150,152,147,-1,152,150,151,-1,154,151,150,-1,151,154,153,-1,155,151,153,-1,154,150,148,-1,199,194,193,-1,200,199,193,-1,200,193,201,-1,197,202,201,-1,201,193,197,-1,109,105,104,-1,108,109,104,-1,108,104,107,-1,110,105,109,-1,104,106,111,-1,111,106,110,-1,110,112,111,-1,109,112,110,-1,203,198,191,-1,191,164,169,-1,191,169,184,-1,203,191,184,-1,162,191,198,-1,162,198,204,-1,162,204,185,-1,162,185,186,-1,169,181,184,-1,204,198,203,-1,182,186,185,-1,139,156,146,-1,36,32,33,-1,33,40,36,-1,90,95,63,-1,63,57,90,-1,95,94,93,-1,93,63,95,-1,94,99,64,-1,64,93,94,-1,99,98,73,-1,73,64,99,-1,98,101,73,-1,102,103,113,-1,113,74,102,-1,41,44,43,-1,43,42,41,-1,45,48,47,-1,47,46,45,-1,46,47,44,-1,44,41,46,-1,44,50,49,-1,49,43,44,-1,48,52,51,-1,51,47,48,-1,47,51,50,-1,50,44,47,-1,217,218,216,-1,216,215,217,-1,213,214,219,-1,219,220,213,-1,220,219,218,-1,218,217,220,-1,117,118,115,-1,115,116,117,-1,120,116,115,-1,115,119,120,-1,117,122,121,-1,121,118,117,-1,125,126,123,-1,123,124,125,-1,123,120,119,-1,119,124,123,-1,128,126,125,-1,125,127,128,-1,119,130,129,-1,129,124,119,-1,130,119,115,-1,115,131,130,-1,118,132,131,-1,131,115,118,-1,124,129,133,-1,133,125,124,-1,133,127,125,-1,132,118,121,-1,74,114,86,-1,74,113,114,-1,222,223,224,-1,224,225,226,-1,222,224,226,-1,226,227,228,-1,226,228,221,-1,222,226,221,-1,221,208,207,-1,207,222,221,-1,207,216,223,-1,223,222,207,-1,216,218,224,-1,224,223,216,-1,218,219,225,-1,225,224,218,-1,219,214,226,-1,226,225,219,-1,214,212,227,-1,227,226,214,-1,212,211,228,-1,228,227,212,-1,211,208,221,-1,221,228,211,-1});
CCoordinate* Coordinate210 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate210->setPoint(new float[522]{0,6.248,3.861,0,3.604,3.332,0,1.678,4.132,0,-1.06,2.132,0,-0.6113,0.4257,0,2.508,3.48,0,1.056,3.569,3.122,1.031,1.087,3.864,3.37,0.8051,3.096,6.185,2.785,2.962,3.586,2.468,0.6641,1.54,3.44,2.605,1.26,2.524,3.041,1.031,-0.4007,1.088,-0.0485,-0.7313,3.008,9.038,-0.4634,4.599,7.193,-1.764,0,0.878,-3.276,1.883,1.069,-2.26,0,0.1453,-2.244,0,2.477,-5.252,0,3.279,-5.606,0,8.131,-5.026,0,9.834,-2.714,0,10.08,0.3393,2.985,7.677,-4.117,3.321,2.779,-2.866,2.485,2.748,-4.523,2.609,9.148,-2.623,3.922,0.9315,0.1364,3.294,1.489,2.328,2.942,-0.3907,1.64,4.119,4.301,-2.311,3.711,3.021,-2.417,3.874,2.792,-1.643,4.338,5.172,-1.863,4.171,4.342,-1.796,4.413,4.651,-2.881,4.005,2.883,-2.59,0.4904,1.513,-4.362,-0.2841,1.361,-4.319,0.2529,1.879,-4.875,-0.2529,1.879,-4.875,0.4533,1.752,-4.772,0.9863,1.737,-4.557,0.2841,1.361,-4.319,0,1.064,-3.769,0.4904,1.313,-4.729,-0.2841,1.093,-4.661,0.2529,1.691,-5.12,-0.2529,1.691,-5.12,0.4533,1.524,-4.947,0.2841,1.093,-4.661,0.3923,1.387,-4.921,-0.2512,1.186,-4.739,0.2427,1.709,-5.058,-0.2427,1.709,-5.058,0.3975,1.636,-5.002,0.2512,1.291,-4.92,0.8498,0.4808,-5.345,-0.4084,0.2239,-5.621,0.4082,1.526,-5.625,-0.2698,1.635,-6.083,0.8735,0.8532,-5.488,0.414,0.3346,-5.233,0,9.598,1.657,1.799,6.211,3.236,1.607,3.596,2.915,1.383,1.845,2.973,1.393,1.434,3.096,1.392,1.165,3.011,1.525,-0.0858,2.343,1.629,-0.2382,1.67,1.191,0.0201,0.2184,1.805,0.3477,-0.61,-2.962,3.586,2.468,-3.096,6.185,2.785,-1.799,6.211,3.236,-1.607,3.596,2.915,-3.864,3.37,0.8051,-0.6641,1.54,3.44,-1.393,1.434,3.096,-2.605,1.26,2.524,-1.383,1.845,2.973,-3.122,1.031,1.087,-1.525,-0.0858,2.343,-1.392,1.165,3.011,-3.041,1.031,-0.4007,-1.629,-0.2382,1.67,-1.191,0.0201,0.2184,-1.805,0.3477,-0.61,-1.088,-0.0485,-0.7313,-4.599,6.495,-1.764,-3.008,9.038,-0.4634,-1.883,1.069,-2.26,-2.485,2.748,-4.523,-2.985,7.677,-4.117,-3.321,2.779,-2.866,-2.609,9.148,-2.623,-3.874,2.792,-1.643,-4.005,2.883,-2.59,-4.171,4.342,-1.796,-3.924,0.7167,0.1364,-3.703,1.852,-1.574,-3.294,1.526,2.328,-2.944,-0.6055,1.64,-0.9863,1.737,-4.557,-4.338,5.172,-1.863,-4.119,4.301,-2.311,-3.711,3.021,-2.417,-4.413,4.651,-2.881,-0.4533,1.752,-4.772,-0.4904,1.513,-4.362,-0.4904,1.313,-4.729,-0.4533,1.524,-4.947,-0.3923,1.387,-4.921,-0.3975,1.636,-5.002,-0.861,0.4917,-5.679,-0.8735,1.084,-5.873,4.42,6.072,0.8408,0,4.078,5.465,2.609,4.238,4.383,4.491,4.519,2.859,4.812,4.641,0.25,0,7.281,4.847,4.089,6.811,2.657,-2.609,4.238,4.383,-4.491,4.519,2.859,-4.812,4.641,0.25,-4.089,6.811,2.657,4.599,7.193,-1.764,3.922,0.9315,0.1364,3.294,1.489,2.328,3.051,8.417,1.903,-3.051,8.417,1.903,-4.599,6.495,-1.764,-4.573,6.071,0.8593,-3.924,0.7167,0.1364,-3.294,1.526,2.328,-4.573,6.071,0.8593,0,2.477,-5.252,0.2529,1.879,-4.875,0.2841,1.361,-4.319,0,1.064,-3.769,0,8.876,2.944,1.401,8.728,2.443,-1.401,8.728,2.443,3.864,3.37,0.8051,0,8.876,2.944,3.051,8.417,1.903,2.942,-0.3907,1.64,-0.2841,1.361,-4.319,-0.2529,1.879,-4.875,1.401,8.728,2.443,-3.864,3.37,0.8051,-3.051,8.417,1.903,-1.401,8.728,2.443,-2.944,-0.6055,1.64,2.16,7.239,4.144,-2.16,7.239,4.144,3.864,3.37,0.8051,3.703,2.55,-1.574,-3.864,3.37,0.8051,-3.051,8.417,1.903,3.887,6.402,2.215,-3.887,5.704,2.215,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368,0.0275,0.6889,-6.368});
IndexedFaceSet209->setCoord(*Coordinate210);

CTextureCoordinate* TextureCoordinate211 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate211->setPoint(new float[458]{0.0199,0.7411,0.304,0.7353,0.4514,0.7245,0.0199,0.9847,0.3019,0.9545,0.315,0.9067,0.2582,0.5588,0.2318,0.8287,0.315,0.9067,0.3537,0.4343,0.5009,0.4343,0.5516,0.8015,0.4488,0.3265,0.2582,0.5588,0.315,0.9067,0.315,0.9067,0.3537,0.4343,0.2318,0.8287,0.5009,0.4343,0.4488,0.3265,0.5516,0.8015,0.2582,0.5588,0.315,0.9067,0.315,0.9067,0.3537,0.4343,0.2318,0.8287,0.5009,0.4343,0.4488,0.3265,0.5516,0.8015,0.1984,0.9656,0.185,0.7377,0.304,0.7353,0.185,0.7377,0.0199,0.7411,0.4514,0.7245,0.3019,0.9545,0.1984,0.9656,0.0634,0.8794,0.0815,0.8144,0.0592,0.7948,0.0199,0.9847,0.2582,0.5588,0.3537,0.4343,0.3537,0.4343,0.2582,0.5588,0.315,0.9067,0.2318,0.8287,0.2318,0.8287,0.315,0.9067,0.3537,0.4343,0.2582,0.5588,0.2318,0.8287,0.315,0.9067,0.4022,0.8072,0.4092,0.9332,0.3423,0.9345,0.2496,0.9363,0.2496,0.808,0.3324,0.8076,0.4487,0.7966,0.4853,0.9277,0.2496,0.7146,0.2838,0.7079,0.2496,0.7548,0.2496,0.6844,0.3214,0.7028,0.3839,0.6943,0.3208,0.7227,0.4105,0.6832,0.3282,0.629,0.3213,0.6897,0.4063,0.6832,0.3336,0.6217,0.2485,0.6026,0.2485,0.6244,0.3109,0.6342,0.3426,0.6501,0.4492,0.7686,0.456,0.773,0.4645,0.8438,0.4405,0.723,0.4866,0.9483,0.4732,0.8841,0.477,0.8588,0.4408,0.7797,0.4619,0.8418,0.3056,0.6309,0.0969,0.8072,0.1568,0.9345,0.09,0.9332,0.1668,0.8076,0.0504,0.7966,0.0139,0.9277,0.2154,0.7079,0.1778,0.7028,0.1783,0.7227,0.1153,0.6943,0.0887,0.6832,0.171,0.629,0.1778,0.6897,0.0928,0.6832,0.1656,0.6217,0.1882,0.6342,0.1566,0.6501,0.0499,0.7686,0.0346,0.8438,0.0432,0.773,0.0587,0.723,0.0125,0.9483,0.026,0.8841,0.0222,0.8588,0.0583,0.7797,0.0373,0.8418,0.1935,0.6309,0.2496,0.6403,0.5986,0.9248,0.6012,0.8499,0.689,0.8561,0.6892,0.9241,0.5242,0.9216,0.5225,0.8475,0.7915,0.897,0.8075,0.8685,0.6012,0.8499,0.5986,0.9248,0.6892,0.9241,0.689,0.8561,0.7915,0.897,0.8075,0.8685,0.6078,0.9826,0.5191,0.9846,0.6077,0.9826,0.7007,0.9832,0.7008,0.9832,0.9771,0.7722,0.9707,0.8593,0.8581,0.8585,0.8839,0.7747,0.9591,0.9681,0.9,0.9681,0.9199,0.6984,0.9684,0.7206,0.8499,0.7752,0.8458,0.7262,0.8298,0.6747,0.865,0.9347,0.8697,0.9696,0.9771,0.7722,0.8581,0.8585,0.9707,0.8593,0.8839,0.7747,0.9199,0.6984,0.9684,0.7206,0.8458,0.7262,0.8499,0.7752,0.8298,0.6747,0.865,0.9347,0.5498,0.7202,0.5638,0.7169,0.5718,0.7409,0.5371,0.7082,0.5326,0.6846,0.5382,0.6801,0.5866,0.6942,0.5873,0.668,0.6438,0.6775,0.6181,0.7065,0.5894,0.7192,0.6547,0.751,0.5605,0.6719,0.679,0.7289,0.7191,0.6946,0.7036,0.762,0.7595,0.76,0.592,0.7489,0.5625,0.6941,0.638,0.7485,0.6245,0.7448,0.6138,0.7412,0.6107,0.7461,0.5568,0.6838,0.5564,0.6793,0.5495,0.6819,0.5528,0.6851,0.5564,0.6793,0.5495,0.6819,0.5416,0.6788,0.5498,0.7202,0.5718,0.7409,0.5638,0.7169,0.5371,0.7082,0.5866,0.6942,0.6181,0.7065,0.5894,0.7191,0.6547,0.751,0.679,0.7289,0.7036,0.7619,0.592,0.7489,0.5625,0.6941,0.638,0.7485,0.6245,0.7448,0.6138,0.7412,0.6107,0.7461,0.5568,0.6838,0.5528,0.6851,0.9104,0.746,0.9034,0.7467,0.9112,0.7728,0.9336,0.7719,0.903,0.7463,0.9106,0.7457,0.9342,0.7713,0.9112,0.7717,0.8789,0.7463,0.8707,0.7717,0.8785,0.7467,0.8707,0.7728,0.8715,0.746,0.8483,0.7719,0.8477,0.7713,0.8713,0.7457,0.9336,0.7719,0.9112,0.7728,0.8707,0.7728,0.8483,0.7719,0.8477,0.7713,0.8707,0.7717,0.9112,0.7717,0.9342,0.7713});
IndexedFaceSet209->setTexCoord(*TextureCoordinate211);

Shape205->setGeometry(IndexedFaceSet209);

Transform204->addChildren(*Shape205);

HAnimSegment203->addChildren(*Transform204);

HAnimJoint202->addChildren(*HAnimSegment203);

HAnimJoint192->addChildren(*HAnimJoint202);

HAnimJoint122->addChildren(*HAnimJoint192);

HAnimJoint32->addChildren(*HAnimJoint122);

HAnimHumanoid24->setSkeleton(*HAnimJoint32);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setUSE("hanim_humanoid_root");
HAnimHumanoid24->addJoints(*HAnimJoint212);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setUSE("hanim_sacroiliac");
HAnimHumanoid24->addJoints(*HAnimJoint213);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setUSE("hanim_skullbase");
HAnimHumanoid24->addJoints(*HAnimJoint214);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setUSE("hanim_vl5");
HAnimHumanoid24->addJoints(*HAnimJoint215);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setUSE("hanim_l_elbow");
HAnimHumanoid24->addJoints(*HAnimJoint216);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setUSE("hanim_r_elbow");
HAnimHumanoid24->addJoints(*HAnimJoint217);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("hanim_l_hip");
HAnimHumanoid24->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("hanim_r_hip");
HAnimHumanoid24->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("hanim_l_knee");
HAnimHumanoid24->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("hanim_r_knee");
HAnimHumanoid24->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("hanim_l_radiocarpal");
HAnimHumanoid24->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("hanim_r_radiocarpal");
HAnimHumanoid24->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("hanim_l_shoulder");
HAnimHumanoid24->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("hanim_r_shoulder");
HAnimHumanoid24->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("hanim_l_talocrural");
HAnimHumanoid24->addJoints(*HAnimJoint228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setUSE("hanim_r_talocrural");
HAnimHumanoid24->addJoints(*HAnimJoint229);

CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment230->setUSE("hanim_l5");
HAnimHumanoid24->setSegments(*HAnimSegment230);

CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setUSE("hanim_pelvis");
HAnimHumanoid24->setSegments(*HAnimSegment231);

CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setUSE("hanim_sacrum");
HAnimHumanoid24->setSegments(*HAnimSegment232);

CHAnimSegment* HAnimSegment233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment233->setUSE("hanim_skull");
HAnimHumanoid24->setSegments(*HAnimSegment233);

CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setUSE("hanim_l_calf");
HAnimHumanoid24->setSegments(*HAnimSegment234);

CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setUSE("hanim_r_calf");
HAnimHumanoid24->setSegments(*HAnimSegment235);

CHAnimSegment* HAnimSegment236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment236->setUSE("hanim_l_carpal");
HAnimHumanoid24->setSegments(*HAnimSegment236);

CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setUSE("hanim_r_carpal");
HAnimHumanoid24->setSegments(*HAnimSegment237);

CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setUSE("hanim_l_forearm");
HAnimHumanoid24->setSegments(*HAnimSegment238);

CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setUSE("hanim_r_forearm");
HAnimHumanoid24->setSegments(*HAnimSegment239);

CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setUSE("hanim_l_talus");
HAnimHumanoid24->setSegments(*HAnimSegment240);

CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setUSE("hanim_r_talus");
HAnimHumanoid24->setSegments(*HAnimSegment241);

CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment242);

CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment243);

CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setUSE("hanim_l_thigh");
HAnimHumanoid24->setSegments(*HAnimSegment244);

CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setUSE("hanim_r_thigh");
HAnimHumanoid24->setSegments(*HAnimSegment245);

CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setUSE("hanim_l_upperarm");
HAnimHumanoid24->setSegments(*HAnimSegment246);

CHAnimSegment* HAnimSegment247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment247->setUSE("hanim_r_upperarm");
HAnimHumanoid24->setSegments(*HAnimSegment247);

group->addChildren(*HAnimHumanoid24);

X3D0->setScene(*Scene20);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
