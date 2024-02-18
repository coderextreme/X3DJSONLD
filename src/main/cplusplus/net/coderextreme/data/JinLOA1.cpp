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
meta3->setContent("JinLOA1.x3d");
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
meta9->setName("TODO");
meta9->setContent("rescale smaller than 30m! convert inches to meters? what about motion scaling?");
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
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("Suwon HAnim Converter");
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
WorldInfo21->setTitle("JinLOA1.x3d");
group->addChildren(*WorldInfo21);

CNavigationInfo* NavigationInfo22 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo22->setSpeed(1.5);
group->addChildren(*NavigationInfo22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint23->setDescription("JinLOA1");
Viewpoint23->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint23);

CHAnimHumanoid* HAnimHumanoid24 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid24->setName("JinLOA1");
HAnimHumanoid24->setDEF("hanim_JinLOA1");
HAnimHumanoid24->setLoa(1);
HAnimHumanoid24->setScale(new float[3]{0.0225,0.0225,0.0225});
HAnimHumanoid24->setVersion("2.0");
CMetadataSet* MetadataSet25 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet25->setName("HAnimHumanoid.info");
MetadataSet25->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString26 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString26->setName("authorName");
MetadataString26->setValue(new CString[1]{"Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"}, 1);
MetadataSet25->setValue(*MetadataString26);

CMetadataString* MetadataString27 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString27->setName("authorEmail");
MetadataString27->setValue(new CString[1]{"myeongwonlee@gmail.com"}, 1);
MetadataSet25->setValue(*MetadataString27);

CMetadataString* MetadataString28 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString28->setName("creationDate");
MetadataString28->setValue(new CString[1]{"31 March 2011"}, 1);
MetadataSet25->setValue(*MetadataString28);

CMetadataString* MetadataString29 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString29->setName("gender");
MetadataString29->setValue(new CString[1]{"female"}, 1);
MetadataSet25->setValue(*MetadataString29);

CMetadataFloat* MetadataFloat30 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat30->setName("height");
MetadataFloat30->setValue(new float[1]{1.5}, 1);
MetadataSet25->setValue(*MetadataFloat30);

CMetadataFloat* MetadataFloat31 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat31->setName("weight");
MetadataFloat31->setValue(new float[1]{50}, 1);
MetadataSet25->setValue(*MetadataFloat31);

CMetadataString* MetadataString32 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString32->setName("humanoidVersion");
MetadataString32->setValue(new CString[1]{"validation testing"}, 1);
MetadataSet25->setValue(*MetadataString32);

HAnimHumanoid24->setMetadata(*MetadataSet25);

CHAnimJoint* HAnimJoint33 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint33->setName("humanoid_root");
HAnimJoint33->setDEF("hanim_humanoid_root");
HAnimJoint33->setCenter(new float[3]{0,30.530001,-0.7076});
HAnimJoint33->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint33->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment34 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment34->setName("sacrum");
HAnimSegment34->setDEF("hanim_sacrum");
CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setTranslation(new float[3]{0,30.530001,-0.7076});
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance37->setMaterial(*Material38);

CImageTexture* ImageTexture39 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture39->setDEF("JinLOA1TextureAtlas");
ImageTexture39->setUrl(new CString[2]{"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"}, 2);
Appearance37->setTexture(*ImageTexture39);

Shape36->setAppearance(*Appearance37);

CIndexedFaceSet* IndexedFaceSet40 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet40->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
IndexedFaceSet40->setCreaseAngle(3.14159);
IndexedFaceSet40->setTexCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
CCoordinate* Coordinate41 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate41->setPoint(new float[186]{0,10.79,0.1424,0,10.06,-2.825,-2.283,10.06,-2.428,-3.954,10.06,-1.948,-4.566,10.06,0.1424,-3.954,10.06,2.233,-2.283,10.06,2.712,0,10.06,3.11,2.283,10.06,2.712,3.954,10.06,2.233,4.566,10.06,0.1424,3.954,10.06,-1.948,2.283,10.06,-2.428,0,8.045,-4.614,-2.953,8.045,-3.977,-5.114,8.045,-2.236,-5.905,8.045,0.1424,-5.114,8.045,2.521,-2.953,8.045,3.645,0,8.045,4.282,2.953,8.045,3.645,5.114,8.045,2.521,5.905,8.045,0.1424,5.114,8.045,-2.236,2.953,8.045,-3.977,0,5.297,-5.018,-3.409,5.297,-4.282,-5.905,5.297,-2.272,-6.819,5.297,0.1424,-5.905,5.297,2.889,-3.409,5.297,4.282,0,5.297,5.018,3.409,5.297,4.282,5.905,5.297,2.889,6.819,5.297,0.1424,5.905,5.297,-2.272,3.409,5.297,-4.282,0,2.548,-4.282,-2.953,2.548,-3.645,-5.114,2.548,-1.904,-5.905,2.548,0.1424,-5.114,2.548,2.521,-2.953,2.548,3.645,0,2.548,4.282,2.953,2.548,3.645,5.114,2.548,2.521,5.905,2.548,0.1424,5.114,2.548,-1.904,2.953,2.548,-3.645,0,0.5362,-2.272,-1.705,0.5362,-1.904,-2.953,0.5362,-1.231,-3.409,0.5362,0.1424,-2.953,0.5362,1.516,-1.705,0.5362,2.521,0,0.5362,2.889,1.705,0.5362,2.521,2.953,0.5362,1.516,3.409,0.5362,0.1424,2.953,0.5362,-1.231,1.705,0.5362,-1.904,0,-0.2003,0.1424});
IndexedFaceSet40->setCoord(*Coordinate41);

CTextureCoordinate* TextureCoordinate42 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate42->setPoint(new float[124]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398});
IndexedFaceSet40->setTexCoord(*TextureCoordinate42);

Shape36->setGeometry(IndexedFaceSet40);

Transform35->addChild(*Shape36);

HAnimSegment34->addChildren(*Transform35);

HAnimJoint33->addChildren(*HAnimSegment34);

CHAnimJoint* HAnimJoint43 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint43->setName("sacroiliac");
HAnimJoint43->setDEF("hanim_sacroiliac");
HAnimJoint43->setCenter(new float[3]{0,35.799999,-0.7076});
HAnimJoint43->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint43->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment44 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment44->setName("pelvis");
HAnimSegment44->setDEF("hanim_pelvis");
CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setTranslation(new float[3]{0,35.799999,-0.7076});
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material48 = (CMaterial *)(m_pScene.createNode("Material"));
Material48->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance47->setMaterial(*Material48);

CImageTexture* ImageTexture49 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture49->setUSE("JinLOA1TextureAtlas");
Appearance47->setTexture(*ImageTexture49);

Shape46->setAppearance(*Appearance47);

CIndexedFaceSet* IndexedFaceSet50 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet50->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
IndexedFaceSet50->setCreaseAngle(3.14159);
IndexedFaceSet50->setTexCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
CCoordinate* Coordinate51 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate51->setPoint(new float[186]{0,1.053,0.0273,0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.875,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0,0.9123,0.596,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.875,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.98,0.5267,-0.4285,-1.132,0.5267,0.0273,-0.98,0.5267,0.483,-0.5658,0.5267,0.6985,0,0.5267,0.8206,0.5658,0.5267,0.6985,0.98,0.5267,0.483,1.132,0.5267,0.0273,0.98,0.5267,-0.4285,0.5658,0.5267,-0.7621,0,0,-0.9616,-0.6534,0,-0.8206,-1.132,0,-0.4353,-1.307,0,0.0273,-1.132,0,0.5536,-0.6534,0,0.8206,0,0,0.9616,0.6534,0,0.8206,1.132,0,0.5536,1.307,0,0.0273,1.132,0,-0.4353,0.6534,0,-0.8206,0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.98,-0.5267,-0.3648,-1.132,-0.5267,0.0273,-0.98,-0.5267,0.483,-0.5658,-0.5267,0.6985,0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.98,-0.5267,0.483,1.132,-0.5267,0.0273,0.98,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.483,0,-0.9123,0.5536,0.3267,-0.9123,0.483,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0,-1.053,0.0273});
IndexedFaceSet50->setCoord(*Coordinate51);

CTextureCoordinate* TextureCoordinate52 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate52->setPoint(new float[124]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398});
IndexedFaceSet50->setTexCoord(*TextureCoordinate52);

Shape46->setGeometry(IndexedFaceSet50);

Transform45->addChild(*Shape46);

HAnimSegment44->addChildren(*Transform45);

HAnimJoint43->addChildren(*HAnimSegment44);

CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("l_hip");
HAnimJoint53->setDEF("hanim_l_hip");
HAnimJoint53->setCenter(new float[3]{4.207,32.02,-0.8155});
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment54 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment54->setName("l_thigh");
HAnimSegment54->setDEF("hanim_l_thigh");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setTranslation(new float[3]{4.207,32.02,-0.8155});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance57->setMaterial(*Material58);

CImageTexture* ImageTexture59 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture59->setUSE("JinLOA1TextureAtlas");
Appearance57->setTexture(*ImageTexture59);

Shape56->setAppearance(*Appearance57);

CIndexedFaceSet* IndexedFaceSet60 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet60->setCoordIndex(new int[488]{47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
IndexedFaceSet60->setCreaseAngle(3.14159);
IndexedFaceSet60->setTexCoordIndex(new int[488]{5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
CCoordinate* Coordinate61 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate61->setPoint(new float[189]{2.96,3.738,0,1.643,3.738,3.209,-1.316,3.738,4.002,-3.367,3.738,1.781,-3.367,3.738,-1.781,-1.316,3.738,-4.002,1.643,3.738,-3.209,2.96,-0.0114,0,1.643,-0.0114,3.209,-1.316,-0.0114,4.002,-3.367,-0.0114,1.781,-3.367,-0.0114,-1.781,-1.316,-0.0114,-4.002,1.643,-0.0114,-3.209,2.96,-6.507,0,1.643,-6.507,3.209,-1.316,-6.507,4.002,-3.367,-6.507,1.781,-3.367,-6.507,-1.781,-1.316,-6.507,-4.002,1.643,-6.507,-3.209,3.367,-13.13,0,1.897,-13.13,3.582,-1.407,-13.13,4.467,-3.355,-13.13,1.988,-3.355,-13.13,-1.988,-1.407,-13.13,-4.467,1.897,-13.13,-3.582,2.146,-4.985,0,1.136,-4.985,2.462,-1.135,-4.985,3.07,-2.633,-4.985,1.366,-2.633,-4.985,-1.366,-1.135,-4.985,-3.07,1.136,-4.985,-2.462,2.156,-11.45,0,1.225,-11.45,1.956,-0.8662,-11.45,2.439,-2.543,-11.45,1.085,-2.543,-11.45,-1.085,-0.8662,-11.45,-2.439,1.225,-11.45,-1.956,2.051,5.729,0,1.076,5.729,2.375,-1.114,5.729,2.961,-2.87,5.729,1.318,-2.87,5.729,-1.318,-1.114,5.729,-2.961,1.076,5.729,-2.375,1.842,-15.12,0,1.03,-15.12,1.873,-0.7965,-15.12,2.295,-2.261,-15.12,1.113,-2.261,-15.12,-0.9478,-0.7965,-15.12,-2.13,1.03,-15.12,-1.708,0.6277,-16.1,0,0.2723,-16.1,0.912,-0.5262,-16.1,1.096,-1.167,-16.1,0.5796,-1.167,-16.1,-0.4145,-0.5262,-16.1,-0.9313,0.2723,-16.1,-0.7469});
IndexedFaceSet60->setCoord(*Coordinate61);

CTextureCoordinate* TextureCoordinate62 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate62->setPoint(new float[140]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581});
IndexedFaceSet60->setTexCoord(*TextureCoordinate62);

Shape56->setGeometry(IndexedFaceSet60);

Transform55->addChild(*Shape56);

HAnimSegment54->addChildren(*Transform55);

HAnimJoint53->addChildren(*HAnimSegment54);

CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setName("l_knee");
HAnimJoint63->setDEF("hanim_l_knee");
HAnimJoint63->setCenter(new float[3]{4.116,17.26,-0.8639});
HAnimJoint63->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint63->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment64 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment64->setName("l_calf");
HAnimSegment64->setDEF("hanim_l_calf");
CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setTranslation(new float[3]{4.116,17.26,-0.8639});
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance67 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material68 = (CMaterial *)(m_pScene.createNode("Material"));
Material68->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance67->setMaterial(*Material68);

CImageTexture* ImageTexture69 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture69->setUSE("JinLOA1TextureAtlas");
Appearance67->setTexture(*ImageTexture69);

Shape66->setAppearance(*Appearance67);

CIndexedFaceSet* IndexedFaceSet70 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet70->setCoordIndex(new int[300]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
IndexedFaceSet70->setCreaseAngle(3.14159);
IndexedFaceSet70->setTexCoordIndex(new int[300]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
CCoordinate* Coordinate71 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate71->setPoint(new float[126]{0.7186,0.9688,0.0234,0.3632,0.9688,0.9354,-0.4353,0.9688,1.12,-1.076,0.9688,0.603,-1.076,0.9688,-0.3911,-0.4353,0.9688,-0.9079,0.3632,0.9688,-0.7235,2.337,-4.613,0.0234,1.46,-3.622,2.019,1.236,-1.628,2.42,2.118,-1.912,0.0234,-0.8111,-3.622,2.567,-0.7468,-1.628,2.903,-2.254,-4.613,1.255,-2.337,-1.912,0.9793,-2.254,-5.383,-1.368,-2.337,-1.912,-0.9325,-0.8111,-5.383,-2.903,-0.7468,-1.912,-2.368,1.46,-5.383,-2.355,1.236,-1.912,-1.885,1.121,-0.0032,1.896,1.933,-0.0032,0.0234,-0.7056,-0.0032,2.318,-2.17,-0.0032,1.136,-2.17,-0.0032,-0.9244,-0.7056,-0.0032,-2.061,1.121,-0.0032,-1.64,1.607,-12.92,0.0032,0.9216,-12.91,1.565,-0.619,-12.91,1.951,-1.854,-12.92,0.8701,-1.854,-12.94,-0.9762,-0.619,-12.94,-1.742,0.9216,-12.94,-1.356,0.7072,-14.53,0.0239,0.3604,-14.53,0.814,-0.4188,-14.53,1.009,-1.044,-14.53,0.4624,-1.044,-14.54,-0.4714,-0.4188,-14.54,-0.8587,0.3604,-14.54,-0.6635});
IndexedFaceSet70->setCoord(*Coordinate71);

CTextureCoordinate* TextureCoordinate72 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate72->setPoint(new float[84]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243});
IndexedFaceSet70->setTexCoord(*TextureCoordinate72);

Shape66->setGeometry(IndexedFaceSet70);

Transform65->addChild(*Shape66);

HAnimSegment64->addChildren(*Transform65);

HAnimJoint63->addChildren(*HAnimSegment64);

CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("l_talocrural");
HAnimJoint73->setDEF("hanim_l_talocrural");
HAnimJoint73->setCenter(new float[3]{3.854,3.939,-0.7038});
HAnimJoint73->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint73->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment74 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment74->setName("l_talus");
HAnimSegment74->setDEF("hanim_l_talus");
CTransform* Transform75 = (CTransform *)(m_pScene.createNode("Transform"));
Transform75->setTranslation(new float[3]{3.854,3.939,-0.7038});
CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance77 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material78 = (CMaterial *)(m_pScene.createNode("Material"));
Material78->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance77->setMaterial(*Material78);

CImageTexture* ImageTexture79 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture79->setUSE("JinLOA1TextureAtlas");
Appearance77->setTexture(*ImageTexture79);

Shape76->setAppearance(*Appearance77);

CIndexedFaceSet* IndexedFaceSet80 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet80->setCoordIndex(new int[408]{1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1,33,31,30,-1,30,27,33,-1,36,27,30,-1,30,38,36,-1,29,33,27,-1,27,28,29,-1,37,28,27,-1,27,36,37,-1,28,37,42,-1,42,29,28,-1,33,32,34,-1,34,31,33,-1,39,40,34,-1,34,32,39,-1,29,35,32,-1,32,33,29,-1,41,39,32,-1,32,35,41,-1,35,29,42,-1,42,41,35,-1,44,45,46,-1,44,46,47,-1,44,47,43,-1,51,52,53,-1,54,48,49,-1,53,54,49,-1,51,53,49,-1,51,49,50,-1,30,31,44,-1,44,43,30,-1,31,34,45,-1,45,44,31,-1,34,40,46,-1,46,45,34,-1,40,38,47,-1,47,46,40,-1,38,30,43,-1,43,47,38,-1,37,36,49,-1,49,48,37,-1,36,38,50,-1,50,49,36,-1,38,40,51,-1,51,50,38,-1,40,39,52,-1,52,51,40,-1,39,41,53,-1,53,52,39,-1,41,42,54,-1,54,53,41,-1,42,37,48,-1,48,54,42,-1});
IndexedFaceSet80->setCreaseAngle(3.14159);
IndexedFaceSet80->setTexCoordIndex(new int[408]{1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1,34,38,37,-1,37,32,34,-1,46,32,37,-1,37,48,46,-1,35,34,32,-1,32,33,35,-1,47,33,32,-1,32,46,47,-1,33,47,53,-1,53,36,33,-1,40,39,42,-1,42,41,40,-1,49,50,42,-1,42,39,49,-1,44,43,39,-1,39,40,44,-1,51,49,39,-1,39,43,51,-1,43,45,52,-1,52,51,43,-1,55,56,57,-1,55,57,58,-1,55,58,54,-1,62,63,64,-1,65,59,60,-1,64,65,60,-1,62,64,60,-1,62,60,61,-1,37,38,55,-1,55,54,37,-1,41,42,56,-1,56,55,41,-1,42,50,57,-1,57,56,42,-1,50,48,58,-1,58,57,50,-1,48,37,54,-1,54,58,48,-1,47,46,60,-1,60,59,47,-1,46,48,61,-1,61,60,46,-1,48,50,62,-1,62,61,48,-1,50,49,63,-1,63,62,50,-1,49,51,64,-1,64,63,49,-1,51,52,65,-1,65,64,51,-1,53,47,59,-1,59,65,53,-1});
CCoordinate* Coordinate81 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate81->setPoint(new float[165]{0.9768,-0.0192,-1.681,1.657,-0.0192,0.4309,0,-0.0192,-1.681,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0,0.7316,-1.463,0,0.7316,1.471,-1.657,-0.0192,0.4309,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,-0.9768,-0.0192,-1.681,0,-0.0192,1.75,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0,-0.6007,-2.046,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0,-1.207,-1.841,1.023,-1.207,-1.841,1.913,-1.223,0.5161,1.601,-0.9325,1.406,0,-0.6582,1.708,-1.601,-0.9325,1.406,-1.913,-1.223,0.5161,-1.023,-1.207,-1.841,1.409,-1.925,-2.878,1.409,-3.947,-1.681,0,-3.947,-1.681,1.109,-0.6007,-2.046,0,-0.6007,-2.046,-1.409,-1.925,-2.878,0,-1.925,-2.878,-1.109,-0.6007,-2.046,-1.409,-3.947,-1.681,2.927,-1.925,0.4309,2.089,-3.947,0.4309,2.045,-0.6007,0.4309,-2.927,-1.925,0.4309,-2.045,-0.6007,0.4309,-2.089,-3.947,0.4309,0,-3.947,0.4309,0.9442,-0.3153,-1.692,0,-0.3153,-1.692,-0.9442,-0.3153,-1.692,-1.7,-0.3153,0.3093,1.7,-0.3153,0.3093,1.86,-3.793,1.364,2.541,-1.963,1.364,1.861,-0.9431,1.364,-1.861,-0.9431,1.364,-2.541,-1.963,1.364,-1.86,-3.793,1.364,0,-3.793,1.364});
IndexedFaceSet80->setCoord(*Coordinate81);

CTextureCoordinate* TextureCoordinate82 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate82->setPoint(new float[132]{0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398,0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186});
IndexedFaceSet80->setTexCoord(*TextureCoordinate82);

Shape76->setGeometry(IndexedFaceSet80);

Transform75->addChild(*Shape76);

HAnimSegment74->addChildren(*Transform75);

HAnimJoint73->addChildren(*HAnimSegment74);

CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setName("l_metatarsophalangeal_2");
HAnimJoint83->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint83->setCenter(new float[3]{3.854,3.64,0.7402});
HAnimJoint83->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint83->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment84 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment84->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment84->setDEF("hanim_l_tarsal_proximal_phalanx_2");
//TODO append _2
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setTranslation(new float[3]{3.854,3.64,0.7402});
CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance87 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material88 = (CMaterial *)(m_pScene.createNode("Material"));
Material88->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance87->setMaterial(*Material88);

CImageTexture* ImageTexture89 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture89->setUSE("JinLOA1TextureAtlas");
Appearance87->setTexture(*ImageTexture89);

Shape86->setAppearance(*Appearance87);

CIndexedFaceSet* IndexedFaceSet90 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet90->setCoordIndex(new int[264]{3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,28,26,25,-1,25,29,28,-1,35,27,26,-1,26,28,35,-1,27,35,40,-1,25,26,31,-1,31,30,25,-1,31,26,27,-1,27,32,31,-1,32,27,40,-1,40,41,32,-1,42,29,25,-1,25,30,42,-1,28,29,34,-1,34,33,28,-1,35,28,33,-1,33,36,35,-1,36,40,35,-1,34,37,38,-1,38,33,34,-1,38,39,36,-1,36,33,38,-1,39,41,40,-1,40,36,39,-1,42,37,34,-1,34,29,42,-1});
IndexedFaceSet90->setCreaseAngle(3.14159);
IndexedFaceSet90->setTexCoordIndex(new int[264]{4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1});
CCoordinate* Coordinate91 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate91->setPoint(new float[129]{2.927,-1.627,-1.013,2.089,-3.648,-1.013,0,0.2797,0.3064,2.045,-0.3017,-1.013,1.695,0.0029,-0.0151,-2.927,-1.627,-1.013,-2.045,-0.3017,-1.013,-2.089,-3.648,-1.013,-1.695,0.0029,-0.0151,0,-3.648,-1.013,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,0,-3.648,0.9192,0,-0.0274,1.661,2.405,-1.656,-1.915,1.75,-2.942,-1.915,0,-2.942,-1.915,-1.75,-2.942,-1.915,-2.405,-1.656,-1.915,-1.742,-0.5681,-1.915,1.742,-0.5681,-1.915,1.784,-0.648,2.332,2.216,-2.267,4.144,2.216,-3.648,3.776,0,-2.267,5.463,0,-0.5463,3.95,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,-2.216,-2.267,4.144,-1.784,-0.648,2.332,0,-3.648,5.096,-2.216,-3.648,3.776,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,0,-3.648,3.776,0,-3.648,0.9192,0,-0.0274,1.661});
IndexedFaceSet90->setCoord(*Coordinate91);

CTextureCoordinate* TextureCoordinate92 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate92->setPoint(new float[106]{0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432});
IndexedFaceSet90->setTexCoord(*TextureCoordinate92);

Shape86->setGeometry(IndexedFaceSet90);

Transform85->addChild(*Shape86);

HAnimSegment84->addChildren(*Transform85);

HAnimJoint83->addChildren(*HAnimSegment84);

HAnimJoint73->addChildren(*HAnimJoint83);

HAnimJoint63->addChildren(*HAnimJoint73);

HAnimJoint53->addChildren(*HAnimJoint63);

HAnimJoint43->addChildren(*HAnimJoint53);

CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setName("r_hip");
HAnimJoint93->setDEF("hanim_r_hip");
HAnimJoint93->setCenter(new float[3]{-4.207,32.02,-0.8155});
HAnimJoint93->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment94 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment94->setName("r_thigh");
HAnimSegment94->setDEF("hanim_r_thigh");
CTransform* Transform95 = (CTransform *)(m_pScene.createNode("Transform"));
Transform95->setTranslation(new float[3]{-4.207,32.02,-0.8155});
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance97 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material98 = (CMaterial *)(m_pScene.createNode("Material"));
Material98->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance97->setMaterial(*Material98);

CImageTexture* ImageTexture99 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture99->setUSE("JinLOA1TextureAtlas");
Appearance97->setTexture(*ImageTexture99);

Shape96->setAppearance(*Appearance97);

CIndexedFaceSet* IndexedFaceSet100 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet100->setCoordIndex(new int[488]{43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
IndexedFaceSet100->setCreaseAngle(3.14159);
IndexedFaceSet100->setTexCoordIndex(new int[488]{0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
CCoordinate* Coordinate101 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate101->setPoint(new float[189]{-2.96,3.738,0,-1.643,3.738,3.209,1.316,3.738,4.002,3.367,3.738,1.781,3.367,3.738,-1.781,1.316,3.738,-4.002,-1.643,3.738,-3.209,-2.96,-0.0114,0,-1.643,-0.0114,3.209,1.316,-0.0114,4.002,3.367,-0.0114,1.781,3.367,-0.0114,-1.781,1.316,-0.0114,-4.002,-1.643,-0.0114,-3.209,-2.96,-6.507,0,-1.643,-6.507,3.209,1.316,-6.507,4.002,3.367,-6.507,1.781,3.367,-6.507,-1.781,1.316,-6.507,-4.002,-1.643,-6.507,-3.209,-3.367,-13.13,0,-1.897,-13.13,3.582,1.407,-13.13,4.467,3.355,-13.13,1.988,3.355,-13.13,-1.988,1.407,-13.13,-4.467,-1.897,-13.13,-3.582,-2.146,-4.985,0,-1.136,-4.985,2.462,1.135,-4.985,3.07,2.633,-4.985,1.366,2.633,-4.985,-1.366,1.135,-4.985,-3.07,-1.136,-4.985,-2.462,-2.156,-11.45,0,-1.225,-11.45,1.956,0.8662,-11.45,2.439,2.543,-11.45,1.085,2.543,-11.45,-1.085,0.8662,-11.45,-2.439,-1.225,-11.45,-1.956,-2.051,5.729,0,-1.076,5.729,2.375,1.114,5.729,2.961,2.87,5.729,1.318,2.87,5.729,-1.318,1.114,5.729,-2.961,-1.076,5.729,-2.375,-1.842,-15.12,0,-1.03,-15.12,1.873,0.7965,-15.12,2.295,2.261,-15.12,1.113,2.261,-15.12,-0.9478,0.7965,-15.12,-2.13,-1.03,-15.12,-1.708,-0.6277,-16.1,0,-0.2723,-16.1,0.912,0.5262,-16.1,1.096,1.167,-16.1,0.5796,1.167,-16.1,-0.4145,0.5262,-16.1,-0.9313,-0.2723,-16.1,-0.7469});
IndexedFaceSet100->setCoord(*Coordinate101);

CTextureCoordinate* TextureCoordinate102 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate102->setPoint(new float[140]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581});
IndexedFaceSet100->setTexCoord(*TextureCoordinate102);

Shape96->setGeometry(IndexedFaceSet100);

Transform95->addChild(*Shape96);

HAnimSegment94->addChildren(*Transform95);

HAnimJoint93->addChildren(*HAnimSegment94);

CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("r_knee");
HAnimJoint103->setDEF("hanim_r_knee");
HAnimJoint103->setCenter(new float[3]{-4.116,17.26,-0.8639});
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment104 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment104->setName("r_calf");
HAnimSegment104->setDEF("hanim_r_calf");
CTransform* Transform105 = (CTransform *)(m_pScene.createNode("Transform"));
Transform105->setTranslation(new float[3]{-4.116,17.26,-0.8639});
CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance107 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material108 = (CMaterial *)(m_pScene.createNode("Material"));
Material108->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance107->setMaterial(*Material108);

CImageTexture* ImageTexture109 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture109->setUSE("JinLOA1TextureAtlas");
Appearance107->setTexture(*ImageTexture109);

Shape106->setAppearance(*Appearance107);

CIndexedFaceSet* IndexedFaceSet110 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet110->setCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
IndexedFaceSet110->setCreaseAngle(3.14159);
IndexedFaceSet110->setTexCoordIndex(new int[300]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
CCoordinate* Coordinate111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate111->setPoint(new float[126]{-0.7186,0.9688,0.0234,-0.3632,0.9688,0.9354,0.4353,0.9688,1.12,1.076,0.9688,0.603,1.076,0.9688,-0.3911,0.4353,0.9688,-0.9079,-0.3632,0.9688,-0.7235,-2.337,-4.613,0.0234,-1.46,-3.622,2.019,-1.236,-1.628,2.42,-2.118,-1.912,0.0234,0.8111,-3.622,2.567,0.7468,-1.628,2.903,2.254,-4.613,1.255,2.337,-1.912,0.9793,2.254,-5.383,-1.368,2.337,-1.912,-0.9325,0.8111,-5.383,-2.903,0.7468,-1.912,-2.368,-1.46,-5.383,-2.355,-1.236,-1.912,-1.885,-1.121,-0.0032,1.896,-1.933,-0.0032,0.0234,0.7056,-0.0032,2.318,2.17,-0.0032,1.136,2.17,-0.0032,-0.9244,0.7056,-0.0032,-2.061,-1.121,-0.0032,-1.64,-1.607,-12.92,0.0032,-0.9216,-12.91,1.565,0.619,-12.91,1.951,1.854,-12.92,0.8701,1.854,-12.94,-0.9762,0.619,-12.94,-1.742,-0.9216,-12.94,-1.356,-0.7072,-14.53,0.0239,-0.3604,-14.53,0.814,0.4188,-14.53,1.009,1.044,-14.53,0.4624,1.044,-14.54,-0.4714,0.4188,-14.54,-0.8587,-0.3604,-14.54,-0.6635});
IndexedFaceSet110->setCoord(*Coordinate111);

CTextureCoordinate* TextureCoordinate112 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate112->setPoint(new float[84]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243});
IndexedFaceSet110->setTexCoord(*TextureCoordinate112);

Shape106->setGeometry(IndexedFaceSet110);

Transform105->addChild(*Shape106);

HAnimSegment104->addChildren(*Transform105);

HAnimJoint103->addChildren(*HAnimSegment104);

CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("r_talocrural");
HAnimJoint113->setDEF("hanim_r_talocrural");
HAnimJoint113->setCenter(new float[3]{-3.854,3.939,-0.7038});
HAnimJoint113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment114->setName("r_talus");
HAnimSegment114->setDEF("hanim_r_talus");
CTransform* Transform115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform115->setTranslation(new float[3]{-3.854,3.939,-0.7038});
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance117 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material118 = (CMaterial *)(m_pScene.createNode("Material"));
Material118->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance117->setMaterial(*Material118);

CImageTexture* ImageTexture119 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture119->setUSE("JinLOA1TextureAtlas");
Appearance117->setTexture(*ImageTexture119);

Shape116->setAppearance(*Appearance117);

CIndexedFaceSet* IndexedFaceSet120 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet120->setCoordIndex(new int[408]{1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1,33,27,30,-1,30,31,33,-1,36,38,30,-1,30,27,36,-1,29,28,27,-1,27,33,29,-1,37,36,27,-1,27,28,37,-1,28,29,42,-1,42,37,28,-1,33,31,34,-1,34,32,33,-1,39,32,34,-1,34,40,39,-1,29,33,32,-1,32,35,29,-1,41,35,32,-1,32,39,41,-1,35,41,42,-1,42,29,35,-1,44,43,47,-1,44,47,46,-1,44,46,45,-1,51,50,49,-1,49,48,54,-1,49,54,53,-1,51,49,53,-1,51,53,52,-1,30,43,44,-1,44,31,30,-1,31,44,45,-1,45,34,31,-1,34,45,46,-1,46,40,34,-1,40,46,47,-1,47,38,40,-1,38,47,43,-1,43,30,38,-1,37,48,49,-1,49,36,37,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,40,38,-1,40,51,52,-1,52,39,40,-1,39,52,53,-1,53,41,39,-1,41,53,54,-1,54,42,41,-1,42,54,48,-1,48,37,42,-1});
IndexedFaceSet120->setCreaseAngle(3.14159);
IndexedFaceSet120->setTexCoordIndex(new int[408]{1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1,34,32,37,-1,37,38,34,-1,46,48,37,-1,37,32,46,-1,35,33,32,-1,32,34,35,-1,47,46,32,-1,32,33,47,-1,33,36,53,-1,53,47,33,-1,40,41,42,-1,42,39,40,-1,49,39,42,-1,42,50,49,-1,44,40,39,-1,39,43,44,-1,51,43,39,-1,39,49,51,-1,43,51,52,-1,52,45,43,-1,55,54,58,-1,55,58,57,-1,55,57,56,-1,62,61,60,-1,60,59,65,-1,60,65,64,-1,62,60,64,-1,62,64,63,-1,37,54,55,-1,55,38,37,-1,41,55,56,-1,56,42,41,-1,42,56,57,-1,57,50,42,-1,50,57,58,-1,58,48,50,-1,48,58,54,-1,54,37,48,-1,47,59,60,-1,60,46,47,-1,46,60,61,-1,61,48,46,-1,48,61,62,-1,62,50,48,-1,50,62,63,-1,63,49,50,-1,49,63,64,-1,64,51,49,-1,51,64,65,-1,65,52,51,-1,53,65,59,-1,59,47,53,-1});
CCoordinate* Coordinate121 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate121->setPoint(new float[165]{-0.9768,-0.0192,-1.681,-1.657,-0.0192,0.4309,0,-0.0192,-1.681,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,0,0.7316,-1.463,0,0.7316,1.471,1.657,-0.0192,0.4309,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0.9768,-0.0192,-1.681,0,-0.0192,1.75,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0,-0.6007,-2.046,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0,-1.207,-1.841,-1.023,-1.207,-1.841,-1.913,-1.223,0.5161,-1.601,-0.9325,1.406,0,-0.6582,1.708,1.601,-0.9325,1.406,1.913,-1.223,0.5161,1.023,-1.207,-1.841,-1.409,-1.925,-2.878,-1.409,-3.947,-1.681,0,-3.947,-1.681,-1.109,-0.6007,-2.046,0,-0.6007,-2.046,1.409,-1.925,-2.878,0,-1.925,-2.878,1.109,-0.6007,-2.046,1.409,-3.947,-1.681,-2.927,-1.925,0.4309,-2.089,-3.947,0.4309,-2.045,-0.6007,0.4309,2.927,-1.925,0.4309,2.045,-0.6007,0.4309,2.089,-3.947,0.4309,0,-3.947,0.4309,-0.9442,-0.3153,-1.692,0,-0.3153,-1.692,0.9442,-0.3153,-1.692,1.7,-0.3153,0.3093,-1.7,-0.3153,0.3093,-1.86,-3.793,1.364,-2.541,-1.963,1.364,-1.861,-0.9431,1.364,1.861,-0.9431,1.364,2.541,-1.963,1.364,1.86,-3.793,1.364,0,-3.793,1.364});
IndexedFaceSet120->setCoord(*Coordinate121);

CTextureCoordinate* TextureCoordinate122 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate122->setPoint(new float[132]{0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398,0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186});
IndexedFaceSet120->setTexCoord(*TextureCoordinate122);

Shape116->setGeometry(IndexedFaceSet120);

Transform115->addChild(*Shape116);

HAnimSegment114->addChildren(*Transform115);

HAnimJoint113->addChildren(*HAnimSegment114);

CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setName("r_metatarsophalangeal_2");
HAnimJoint123->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint123->setCenter(new float[3]{-3.854,3.64,0.7402});
HAnimJoint123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment124->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment124->setDEF("hanim_r_tarsal_proximal_phalanx_2");
//TODO append _2
CTransform* Transform125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform125->setTranslation(new float[3]{-3.854,3.64,0.7402});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance127 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material128 = (CMaterial *)(m_pScene.createNode("Material"));
Material128->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance127->setMaterial(*Material128);

CImageTexture* ImageTexture129 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture129->setUSE("JinLOA1TextureAtlas");
Appearance127->setTexture(*ImageTexture129);

Shape126->setAppearance(*Appearance127);

CIndexedFaceSet* IndexedFaceSet130 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet130->setCoordIndex(new int[264]{10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,28,29,25,-1,25,26,28,-1,35,28,26,-1,26,27,35,-1,27,40,35,-1,25,30,31,-1,31,26,25,-1,31,32,27,-1,27,26,31,-1,32,41,40,-1,40,27,32,-1,42,30,25,-1,25,29,42,-1,28,33,34,-1,34,29,28,-1,35,36,33,-1,33,28,35,-1,36,35,40,-1,34,33,38,-1,38,37,34,-1,38,33,36,-1,36,39,38,-1,39,36,40,-1,40,41,39,-1,42,29,34,-1,34,37,42,-1});
IndexedFaceSet130->setCreaseAngle(3.14159);
IndexedFaceSet130->setTexCoordIndex(new int[264]{12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1});
CCoordinate* Coordinate131 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate131->setPoint(new float[129]{-2.927,-1.627,-1.013,-2.089,-3.648,-1.013,0,0.2797,0.3064,-2.045,-0.3017,-1.013,-1.695,0.0029,-0.0151,2.927,-1.627,-1.013,2.045,-0.3017,-1.013,2.089,-3.648,-1.013,1.695,0.0029,-0.0151,0,-3.648,-1.013,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,0,-3.648,0.9192,0,-0.0274,1.661,-2.405,-1.656,-1.915,-1.75,-2.942,-1.915,0,-2.942,-1.915,1.75,-2.942,-1.915,2.405,-1.656,-1.915,1.742,-0.5681,-1.915,-1.742,-0.5681,-1.915,-1.784,-0.648,2.332,-2.216,-2.267,4.144,-2.216,-3.648,3.776,0,-2.267,5.463,0,-0.5463,3.95,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,2.216,-2.267,4.144,1.784,-0.648,2.332,0,-3.648,5.096,2.216,-3.648,3.776,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,0,-3.648,3.776,0,-3.648,0.9192,0,-0.0274,1.661});
IndexedFaceSet130->setCoord(*Coordinate131);

CTextureCoordinate* TextureCoordinate132 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate132->setPoint(new float[106]{0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432});
IndexedFaceSet130->setTexCoord(*TextureCoordinate132);

Shape126->setGeometry(IndexedFaceSet130);

Transform125->addChild(*Shape126);

HAnimSegment124->addChildren(*Transform125);

HAnimJoint123->addChildren(*HAnimSegment124);

HAnimJoint113->addChildren(*HAnimJoint123);

HAnimJoint103->addChildren(*HAnimJoint113);

HAnimJoint93->addChildren(*HAnimJoint103);

HAnimJoint43->addChildren(*HAnimJoint93);

HAnimJoint33->addChildren(*HAnimJoint43);

CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("vl5");
HAnimJoint133->setDEF("hanim_vl5");
HAnimJoint133->setCenter(new float[3]{0,40.07,-0.8527});
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment134->setName("l5");
HAnimSegment134->setDEF("hanim_l5");
CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform135->setTranslation(new float[3]{0,40.07,-0.8527});
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance137 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material138 = (CMaterial *)(m_pScene.createNode("Material"));
Material138->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance137->setMaterial(*Material138);

CImageTexture* ImageTexture139 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture139->setUSE("JinLOA1TextureAtlas");
Appearance137->setTexture(*ImageTexture139);

Shape136->setAppearance(*Appearance137);

CIndexedFaceSet* IndexedFaceSet140 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet140->setCoordIndex(new int[1336]{3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1,121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1,79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1,4,3,158,-1,158,159,4,-1,66,4,159,-1,159,163,66,-1,0,1,156,-1,156,155,0,-1,2,0,155,-1,155,157,2,-1,3,2,157,-1,157,158,3,-1,65,66,163,-1,163,162,65,-1,82,83,171,-1,171,170,82,-1,83,140,173,-1,173,171,83,-1,1,80,168,-1,168,156,1,-1,80,81,169,-1,169,168,80,-1,81,82,170,-1,170,169,81,-1,140,65,162,-1,162,173,140,-1});
IndexedFaceSet140->setCreaseAngle(3.14159);
IndexedFaceSet140->setTexCoordIndex(new int[1336]{2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,11,12,-1,12,13,10,-1,14,15,11,-1,11,16,14,-1,11,10,16,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1,140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,13,12,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,15,14,9,-1,9,8,15,-1,105,101,93,-1,93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,185,186,183,-1,183,184,185,-1,186,188,187,-1,187,183,186,-1,188,190,189,-1,189,187,188,-1,190,192,191,-1,191,189,190,-1,195,196,193,-1,193,194,195,-1,192,195,194,-1,194,191,192,-1,197,198,185,-1,185,184,197,-1,199,200,198,-1,198,197,199,-1,201,202,200,-1,200,199,201,-1,203,204,202,-1,202,201,203,-1,193,196,205,-1,205,206,193,-1,206,205,204,-1,204,203,206,-1,3,2,189,-1,189,191,3,-1,6,3,191,-1,191,194,6,-1,207,208,184,-1,184,183,207,-1,7,207,183,-1,183,187,7,-1,2,7,187,-1,187,189,2,-1,8,6,194,-1,194,193,8,-1,12,11,203,-1,203,201,12,-1,11,15,206,-1,206,203,11,-1,208,209,197,-1,197,184,208,-1,209,17,199,-1,199,197,209,-1,17,12,201,-1,201,199,17,-1,15,8,193,-1,193,206,15,-1});
CCoordinate* Coordinate141 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate141->setPoint(new float[522]{0.6928,14.72,-1.263,0,14.77,-1.355,1.47,14.93,-0.9099,2.016,14.91,0.2814,1.573,14.61,1.11,2.914,14.46,0.3331,2.599,15.36,-1.406,3.187,13.6,1.543,2.239,13.38,3.23,0.9629,15.39,-3.152,0,15.36,-3.317,2.035,15.41,-2.815,3.316,12.32,2.97,5.086,13.13,2.011,2.982,14.24,2.181,2.245,13.38,3.821,3.131,12.64,3.9,4.42,13.94,2.105,5.602,13.73,0.1863,5.472,13.06,-1.452,3.439,15.3,0.3672,3.953,14.44,-2.227,5.073,14.77,0.3672,4.655,13.49,-1.78,1.811,9.837,-2.43,0,9.533,-2.564,4.241,10.8,-2.043,1.032,12.54,-4.427,0,12.54,-4.562,2.39,12.92,-3.914,1.677,9.192,-3.147,0,8.87,-3.266,4.12,10.71,-3.032,4.272,8.132,4.186,6.354,8.764,1.543,2.14,8.582,-2.362,4.3,8.685,-1.848,3.695,5.585,2.768,5.081,5.622,1.505,6.096,10.26,1.67,5.904,10.25,-0.3303,5.533,8.718,-0.7796,1.419,5.473,-2.22,3.58,5.528,-1.434,4.793,5.578,-0.2489,3.682,3.592,2.824,5.077,3.631,1.527,1.282,3.303,-2.365,3.586,3.501,-1.437,4.792,3.575,-0.2999,4.178,1.262,3.951,5.76,1.298,1.994,1.52,1.105,-3.678,3.95,1.115,-2.536,5.309,1.22,-0.7397,3.789,0.1874,3.209,5.166,0.2191,1.685,1.593,0.068,-2.676,3.6,0.0905,-1.847,4.841,0.1375,-0.4441,7.399,13.46,0.1863,6.979,12.64,-1.452,6.998,12.7,1.899,6.298,10.42,1.67,6.292,10.41,-0.3303,0,14.34,1.73,0.7806,14.35,1.608,0,12.15,3.901,1.373,12.69,3.668,0,11.05,3.845,1.713,11.8,3.668,1.38,12.69,4.137,0,11.45,4.361,1.593,12.12,4.338,1.579,8.737,4.081,1.292,5.554,3.228,1.281,3.386,3.336,1.635,1.231,4.562,1.595,0.1486,3.645,0,12.21,4.06,-0.6928,14.72,-1.263,-1.47,14.93,-0.9099,-2.016,14.91,0.2814,-1.573,14.61,1.11,-2.914,14.46,0.3331,-2.599,15.36,-1.406,-3.187,13.6,1.543,-2.239,13.38,3.23,-0.9629,15.39,-3.152,-2.035,15.41,-2.815,-3.316,12.32,2.97,-5.086,13.13,2.011,-2.982,14.24,2.181,-2.245,13.38,3.821,-3.131,12.64,3.9,-4.42,13.94,2.105,-5.602,13.73,0.1863,-5.472,13.06,-1.452,-3.439,15.3,0.3672,-3.953,14.44,-2.227,-5.073,14.77,0.3672,-4.655,13.49,-1.78,-1.811,9.837,-2.43,-4.241,10.8,-2.043,-1.032,12.54,-4.427,-2.39,12.92,-3.914,-1.677,9.192,-3.147,-4.12,10.71,-3.032,-4.272,8.132,4.186,-6.354,8.764,1.543,-2.14,8.582,-2.362,-4.3,8.685,-1.848,-3.695,5.585,2.768,-5.081,5.622,1.505,-6.096,10.26,1.67,-5.904,10.25,-0.3303,-5.533,8.718,-0.7796,-1.419,5.473,-2.22,-3.58,5.528,-1.434,-4.793,5.578,-0.2489,-3.682,3.592,2.824,-5.077,3.631,1.527,-1.282,3.303,-2.365,-3.586,3.501,-1.437,-4.792,3.575,-0.2999,-4.178,1.262,3.951,-5.76,1.298,1.994,-1.52,1.105,-3.678,-3.95,1.115,-2.536,-5.309,1.22,-0.7397,-3.789,0.1874,3.209,-5.166,0.2191,1.685,-1.593,0.068,-2.676,-3.6,0.0905,-1.847,-4.841,0.1375,-0.4441,-7.399,13.46,0.1863,-6.979,12.64,-1.452,-6.998,12.7,1.899,-6.298,10.42,1.67,-6.292,10.41,-0.3303,-0.7806,14.35,1.608,-1.373,12.69,3.668,-1.713,11.8,3.668,-1.38,12.69,4.137,-1.593,12.12,4.338,-1.579,8.737,4.081,-1.292,5.554,3.228,-1.281,3.386,3.336,-1.635,1.231,4.562,-1.595,0.1486,3.645,0.5369,17.77,-0.941,0,17.77,-1.012,1.139,17.77,-0.6672,1.562,17.77,0.2561,1.219,17.77,0.8985,0.5424,14.72,-0.9523,0,14.77,-1.024,1.151,14.93,-0.6757,1.578,14.91,0.257,1.232,14.61,0.9059,0.605,17.9,1.285,0,17.34,1.379,0,14.34,1.391,0.6111,14.35,1.296,-0.5369,17.77,-0.941,-1.139,17.77,-0.6672,-1.562,17.77,0.2561,-1.219,17.77,0.8985,-0.5424,14.72,-0.9523,-1.151,14.93,-0.6757,-1.578,14.91,0.257,-1.232,14.61,0.9059,-0.605,17.9,1.285,-0.6111,14.35,1.296});
IndexedFaceSet140->setCoord(*Coordinate141);

CTextureCoordinate* TextureCoordinate142 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate142->setPoint(new float[420]{0.4756,0.618,0.4724,0.6293,0.4618,0.6351,0.4566,0.6312,0.4542,0.6062,0.4644,0.6152,0.4472,0.6278,0.4554,0.6354,0.4381,0.6277,0.4381,0.5991,0.4005,0.618,0.4195,0.6312,0.4143,0.6351,0.4037,0.6293,0.4219,0.6062,0.4289,0.6278,0.4117,0.6152,0.4207,0.6354,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1412,0.5207,0.1108,0.5655,0.0786,0.5849,0.0516,0.5759,0.1073,0.5839,0.0639,0.4488,0.0877,0.4617,0.0525,0.4715,0.1185,0.4741,0.1474,0.4856,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.2067,0.5908,0.1632,0.5887,0.1708,0.4854,0.1963,0.4863,0.2708,0.4736,0.347,0.4316,0.3616,0.5328,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.2638,0.4568,0.3214,0.4203,0.2252,0.4828,0.042,0.406,0.0909,0.398,0.2183,0.385,0.3504,0.3844,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1525,0.3869,0.1538,0.4251,0.1784,0.4249,0.1911,0.3858,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.227,0.2131,0.3536,0.2151,0.1879,0.2143,0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1544,0.4288,0.1782,0.4286,0.0346,0.5664,0.0399,0.5407,0.2661,0.5914,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.0763,0.4945,0.0865,0.5614,0.1025,0.5076,0.0652,0.5465,0.1108,0.5655,0.1412,0.5207,0.0786,0.5849,0.0516,0.5759,0.1073,0.5839,0.0877,0.4617,0.1185,0.4741,0.1474,0.4857,0.1724,0.5255,0.2133,0.556,0.2089,0.5196,0.1645,0.5709,0.2067,0.5908,0.1632,0.5887,0.1708,0.4854,0.1963,0.4863,0.2708,0.4736,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.2638,0.4568,0.2252,0.4828,0.042,0.406,0.0909,0.398,0.2183,0.385,0.3504,0.3844,0.0206,0.3452,0.0903,0.3446,0.1525,0.3869,0.1491,0.3449,0.1538,0.4251,0.1784,0.4249,0.1911,0.3858,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.227,0.2131,0.3536,0.2151,0.1879,0.2143,0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1544,0.4288,0.1782,0.4286,0.3477,0.431,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3223,0.4192,0.3477,0.431,0.3223,0.4192,0.3518,0.3851,0.3554,0.5911,0.3505,0.5919,0.3505,0.5919,0.3518,0.3851,0.3518,0.3851,0.3629,0.3439,0.3629,0.3439,0.3633,0.2922,0.3633,0.2922,0.3553,0.2398,0.3553,0.2398,0.3555,0.2151,0.3511,0.5932,0.3536,0.2151,0.4444,0.6326,0.4381,0.6333,0.4381,0.6725,0.4444,0.6725,0.4516,0.6354,0.4515,0.6725,0.4566,0.6351,0.4565,0.6725,0.4526,0.6312,0.4524,0.6725,0.4381,0.6277,0.4453,0.6278,0.4452,0.6742,0.4381,0.6669,0.4317,0.6326,0.4317,0.6725,0.4245,0.6354,0.4246,0.6725,0.4195,0.6351,0.4197,0.6725,0.4235,0.6312,0.4237,0.6725,0.4309,0.6742,0.4309,0.6278,0.4462,0.6326,0.4381,0.6333,0.4299,0.6326});
IndexedFaceSet140->setTexCoord(*TextureCoordinate142);

Shape136->setGeometry(IndexedFaceSet140);

Transform135->addChild(*Shape136);

HAnimSegment134->addChildren(*Transform135);

HAnimJoint133->addChildren(*HAnimSegment134);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setName("skullbase");
HAnimJoint143->setDEF("hanim_skullbase");
HAnimJoint143->setCenter(new float[3]{0,57.43,-0.6863});
HAnimJoint143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment144->setName("skull");
HAnimSegment144->setDEF("hanim_skull");
CTransform* Transform145 = (CTransform *)(m_pScene.createNode("Transform"));
Transform145->setTranslation(new float[3]{0,57.43,-0.6863});
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance147 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material148 = (CMaterial *)(m_pScene.createNode("Material"));
Material148->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance147->setMaterial(*Material148);

CImageTexture* ImageTexture149 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture149->setUSE("JinLOA1TextureAtlas");
Appearance147->setTexture(*ImageTexture149);

Shape146->setAppearance(*Appearance147);

CIndexedFaceSet* IndexedFaceSet150 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet150->setCoordIndex(new int[2368]{58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1});
IndexedFaceSet150->setCreaseAngle(3.14159);
IndexedFaceSet150->setTexCoordIndex(new int[2368]{0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1});
CCoordinate* Coordinate151 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate151->setPoint(new float[1068]{4.734,2.295,-0.478,0,7.925,-7.347,0,2.738,-7.551,2.596,3.055,-7.113,5.82,3.915,-2.239,3.712,1.225,-2.29,3.261,1.453,-4.252,5.658,2.599,-1.983,1.82,1.289,-5.164,0,0.1375,-3.592,2.395,4.95,6.346,0.7761,4.912,6.883,0,9.74,6.859,4.408,9.203,3.673,0,11.25,5.65,2.225,10.89,5.304,5.962,4.414,1.165,4.041,0.8383,3.523,1.972,9.601,6.357,2.537,7.001,6.362,3.694,6.649,5.287,0.4475,7.341,7.362,0.513,6.698,7.119,4.843,6.188,3.431,3.886,6.593,4.951,3.681,5.194,5.001,3.826,5.001,4.664,3.284,2.472,4.49,4.543,4.124,3.499,3.859,3.861,4.364,4.575,3.792,4.006,5.065,1.183,1.247,4.863,1.73,2.37,5.256,2.695,2.024,5.549,5.532,2.714,5.161,2.035,2.722,5.442,3.878,2.887,6.111,4.389,0.2634,4.062,5.868,4.221,6.007,7.856,-0.5637,7.021,1.661,-0.9157,6.568,4.855,-0.7308,6.326,4.691,-1.55,6.23,0.8303,-3.441,4.977,5.364,-5.673,6.326,4.656,-2.95,4.216,3.427,-5.131,3.522,5.818,-7.166,3.424,1.86,-7.278,2.479,7.925,-6.757,1.927,1.981,-8.89,0,3.753,-8.454,5.584,7.691,-2.78,5.853,7.683,-1.772,5.181,8.476,2.104,3.038,10.79,4.444,5.123,3.032,-5.304,5.664,8.061,0.8754,4.721,7.925,-5.258,0,5.519,-7.965,2.479,5.82,-7.483,5.595,7.63,-2.141,0,0.1227,-8.281,1.173,1.832,-6.114,3.978,2.324,-4.64,2.917,-0.9285,-7.31,3.323,2.08,-5.371,1.968,-1.561,-5.013,0,-0.9435,-6.54,4.713,2.444,-3.477,4.42,-0.2924,-4.477,1.411,0.5541,-3.484,0,1.035,-6.031,2.275,0.8807,-3.763,0.9407,0.7103,-4.537,3.818,1.729,-3.139,4.664,1.866,-1.436,3.657,9.188,4.96,0,7.548,7.405,1.559,7.266,7.008,2.791,5.041,6.017,-4.734,2.295,-0.478,-2.596,3.055,-7.113,-5.82,3.915,-2.239,-3.712,1.225,-2.29,-3.261,1.453,-4.252,-5.658,2.599,-1.983,-1.82,1.289,-5.164,-2.395,4.95,6.346,-0.7761,4.912,6.883,-4.408,9.203,3.673,-2.225,10.89,5.304,-5.962,4.414,1.165,-4.041,0.8383,3.523,-1.972,9.601,6.357,-2.537,7.001,6.362,-3.694,6.649,5.287,-0.4475,7.341,7.362,-0.513,6.698,7.119,-4.843,6.188,3.431,-3.886,6.593,4.951,-3.681,5.194,5.001,-3.826,5.001,4.664,-3.284,2.472,4.49,-4.543,4.124,3.499,-3.859,3.861,4.364,-4.575,3.792,4.006,-5.065,1.183,1.247,-4.863,1.73,2.37,-5.256,2.695,2.024,-5.549,5.532,2.714,-5.161,2.035,2.722,-5.442,3.878,2.887,-6.111,4.389,0.2634,-4.062,5.868,4.221,-6.007,7.856,-0.5637,-7.021,1.661,-0.9157,-6.568,4.855,-0.7308,-6.326,4.691,-1.55,-6.23,0.8303,-3.441,-4.977,5.364,-5.673,-6.326,4.656,-2.95,-4.216,3.427,-5.131,-3.522,5.818,-7.166,-3.424,1.86,-7.278,-2.479,7.925,-6.757,-1.927,1.981,-8.89,-5.584,7.691,-2.78,-5.853,7.683,-1.772,-5.181,8.476,2.104,-3.038,10.79,4.444,-5.123,3.032,-5.304,-5.664,8.061,0.8754,-4.721,7.925,-5.258,-2.479,5.82,-7.483,-5.595,7.63,-2.141,-1.173,1.832,-6.114,-3.978,2.324,-4.64,-2.917,-0.9285,-7.31,-3.323,2.08,-5.371,-1.968,-1.561,-5.013,-4.713,2.444,-3.477,-4.42,-0.2924,-4.477,-1.411,0.5541,-3.484,-2.275,0.8807,-3.763,-0.9407,0.7103,-4.537,-3.818,1.729,-3.139,-4.664,1.866,-1.436,-3.657,9.188,4.96,-1.559,7.266,7.008,-2.791,5.041,6.017,0,12.89,2.191,2.479,12.6,2.191,0,12.77,-3.073,2.479,13.01,-0.5905,0,13.3,-0.5905,2.479,12.47,-3.073,-2.479,12.6,2.191,-2.479,13.01,-0.5905,-2.479,12.47,-3.073,0,12.19,4.069,-2.479,11.8,3.665,2.479,11.8,3.665,-4.738,11.13,-0.5905,-4.581,10.59,1.893,4.738,11.13,-0.5905,4.581,10.59,1.893,-4.776,9.342,-4.254,4.776,9.342,-4.254,-4.651,10.94,-2.696,4.651,10.94,-2.696,0,10.91,-6.064,-2.479,10.58,-5.873,2.479,10.58,-5.873,5.038,2.087,0.2634,5.351,2.269,0.2568,5.575,4.993,0.4877,5.759,4.313,-0.6689,5.672,3.119,-0.6884,5.054,4.389,0.2634,4.617,3.919,1.981,0,-1.299,4.283,2.507,0.2122,3.467,1.252,-0.7037,3.753,2.181,1.29,4.703,1.083,-0.2065,4.531,0,3.949,5.823,4.122,4.752,3.434,0,4.457,6.529,3.843,3.486,3.474,0.6247,4.287,6.217,3.884,5.34,4.144,0.2615,3.949,5.823,2.103,4.881,5.78,1.599,4.225,5.429,2.103,4.763,5.713,2.175,4.422,5.292,1.061,2.841,5.24,3.345,2.806,3.987,2.536,2.741,4.559,3.082,3.581,4.206,3.368,4.077,4.055,1.044,3.885,5.454,1.356,3.642,5.241,3.227,3.707,4.111,3.028,4.567,4.683,2.472,2.023,4.722,0.9194,2.354,5.382,0,2.998,5.872,3.515,2.199,3.631,3.685,4.225,3.891,1.11,4.559,6.074,0,1.141,5.968,0.1458,1.141,5.967,0.4592,1.442,5.549,0,1.753,6.811,3.24,5.132,4.832,0,-1.23,3.575,3.443,1.22,3.201,0,6.577,6.529,1.972,6.686,5.769,3.551,6.468,4.66,1.125,6.641,6.224,2.799,0.2961,1.981,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,4.342,2.994,2.484,0,9.837,5.8,1.972,10.18,5.298,3.829,8.081,4.078,4.754,5.519,2.97,1.641,0.4521,4.705,0,2.206,6.446,2.795,3.568,4.497,1.835,3.587,5.011,3.243,5.188,4.826,4.074,1.813,1.489,4.073,1.537,-0.251,4.798,4.414,1.165,3.561,1.081,-1.554,0,0.5923,5.37,0.2244,0.5923,5.37,0,-0.2097,4.949,0,0.1669,5.375,0,0.7989,5.843,0.4079,0.7711,5.733,0.2244,0.7989,5.843,1.184,0.5011,4.895,1.695,4.1,5.387,2.183,4.262,5.159,2.937,4.372,4.659,-5.038,2.087,0.2634,-5.351,2.269,0.2568,-5.575,4.993,0.4877,-5.759,4.313,-0.6689,-5.672,3.119,-0.6884,-5.054,4.389,0.2634,-4.617,3.919,1.981,-2.507,0.2122,3.467,-1.252,-0.7037,3.753,-2.181,1.29,4.703,-1.083,-0.2065,4.531,-4.122,4.752,3.434,-3.843,3.486,3.474,-0.6247,4.287,6.217,-3.884,5.34,4.144,-0.2615,3.949,5.823,-2.103,4.881,5.78,-1.599,4.225,5.429,-2.103,4.763,5.713,-2.175,4.422,5.292,-1.061,2.841,5.24,-3.345,2.806,3.987,-2.536,2.741,4.559,-3.082,3.581,4.206,-3.368,4.077,4.055,-1.044,3.885,5.454,-1.356,3.642,5.241,-3.227,3.707,4.111,-3.028,4.567,4.683,-2.472,2.023,4.722,-0.9194,2.354,5.382,-3.515,2.199,3.631,-3.685,4.225,3.891,-1.11,4.559,6.074,-0.1458,1.141,5.967,-0.4592,1.442,5.549,-3.24,5.132,4.832,-3.443,1.22,3.201,-1.972,6.686,5.769,-3.551,6.468,4.66,-1.125,6.641,6.224,-2.799,0.2961,1.981,-1.438,-0.7799,2.92,-2.098,-0.0622,0.3894,-4.342,2.994,2.484,-1.972,10.18,5.298,-3.829,8.081,4.078,-4.754,5.519,2.97,-1.641,0.4521,4.705,-2.795,3.568,4.497,-1.835,3.587,5.011,-3.243,5.188,4.826,-4.074,1.813,1.489,-4.073,1.537,-0.251,-4.798,4.414,1.165,-3.561,1.081,-1.554,-0.2244,0.5923,5.37,-0.4079,0.7711,5.733,-0.2244,0.7989,5.843,-1.184,0.5011,4.895,-1.695,4.1,5.387,-2.183,4.262,5.159,-2.937,4.372,4.659,0,0.5907,5.545,0.2244,0.5907,5.545,-0.2244,0.5907,5.545,-2.091,-0.0943,-1.629,2.091,-0.0943,-1.629,0,-0.6349,1.532,0.4475,7.341,7.362,0.7761,4.912,6.883,0.7761,4.912,6.883,0.4475,7.341,7.362,-0.7761,4.912,6.883,-0.4475,7.341,7.362,-0.4475,7.341,7.362,-0.7761,4.912,6.883,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,2.799,0.2961,1.981,1.438,-0.7799,2.92,4.734,2.295,-0.478,5.658,2.599,-1.983,4.734,2.295,-0.478,3.712,1.225,-2.29,-3.561,1.081,-1.554,-2.098,-0.0622,0.3894,-1.438,-0.7799,2.92,-2.799,0.2961,1.981,-5.658,2.599,-1.983,-4.734,2.295,-0.478,-3.712,1.225,-2.29,-4.734,2.295,-0.478,5.658,2.599,-1.983,0.513,6.698,7.119,0,7.548,7.405,-5.658,2.599,-1.983,-0.513,6.698,7.119,5.054,4.389,0.2634,3.561,1.081,-1.554,-5.054,4.389,0.2634,-1.438,-0.7799,2.92,-3.561,1.081,-1.554,0,7.548,7.405,3.561,1.081,-1.554});
IndexedFaceSet150->setCoord(*Coordinate151);

CTextureCoordinate* TextureCoordinate152 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate152->setPoint(new float[772]{0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.7576,0.779,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.5511,0.8974,0.5442,0.8881,0.5261,0.888,0.5173,0.916,0.5142,0.8897,0.4859,0.8861,0.4859,0.915,0.5538,0.8129,0.5221,0.9505,0.5019,0.9448,0.4833,0.9442,0.5221,0.9409,0.5615,0.9135,0.4859,0.9465,0.7132,0.8982,0.707,0.9147,0.6947,0.9327,0.6362,0.8647,0.6338,0.9045,0.6499,0.8433,0.7286,0.8745,0.7189,0.8755,0.7076,0.8768,0.7039,0.8593,0.6916,0.8787,0.7247,0.8546,0.709,0.8565,0.7314,0.8736,0.7292,0.8706,0.728,0.8536,0.69,0.8666,0.6878,0.8802,0.6865,0.8667,0.6811,0.8787,0.6675,0.8823,0.6734,0.9076,0.6941,0.9003,0.6841,0.8549,0.6747,0.8518,0.6955,0.8049,0.6707,0.8609,0.65,0.8054,0.6247,0.8655,0.6555,0.8741,0.6826,0.7876,0.6628,0.8252,0.6579,0.8538,0.659,0.8166,0.5919,0.8622,0.6097,0.7975,0.6017,0.8674,0.6119,0.8668,0.5894,0.7991,0.5477,0.8549,0.5851,0.8633,0.5547,0.8636,0.5069,0.9121,0.4833,0.9711,0.5841,0.9021,0.5806,0.931,0.5925,0.9036,0.5981,0.9018,0.6148,0.9345,0.6142,0.902,0.6513,0.9068,0.653,0.9257,0.6932,0.9186,0.6854,0.9041,0.7468,0.8401,0.7397,0.8339,0.7279,0.7767,0.7484,0.8201,0.7549,0.8419,0.7538,0.8364,0.7505,0.8352,0.7502,0.832,0.7452,0.8292,0.7429,0.8312,0.7437,0.8169,0.753,0.8334,0.7524,0.8309,0.7267,0.7703,0.7224,0.772,0.7146,0.7762,0.7175,0.7748,0.7116,0.7661,0.7574,0.837,0.7102,0.7798,0.7622,0.8378,0.7385,0.8283,0.7409,0.8275,0.7291,0.7711,0.7239,0.7597,0.7192,0.7629,0.7247,0.774,0.7171,0.778,0.756,0.8233,0.7046,0.7872,0.71,0.779,0.7054,0.7806,0.763,0.8444,0.7104,0.7769,0.7152,0.7737,0.7572,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.6805,0.9479,0.6189,0.9637,0.5528,0.9539,0.4859,0.9842,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.637,0.4385,0.639,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.652,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2979,0.9448,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3384,0.9469,0.414,0.9365,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.626,0.3051,0.6166,0.258,0.6076,0.2606,0.6259,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.696,0.2636,0.664,0.3484,0.6888,0.3007,0.651,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.2441,0.7326,0.2496,0.7705,0.2441,0.7109,0.2441,0.7705,0.2441,0.816,0.2441,0.8403,0.274,0.8322,0.2566,0.816,0.2949,0.763,0.3447,0.8549,0.3206,0.8292,0.4279,0.7939,0.4413,0.8544,0.3889,0.8456,0.3991,0.8726,0.4299,0.8825,0.3482,0.8386,0.4041,0.7613,0.3654,0.7582,0.3778,0.7978,0.3319,0.7987,0.3916,0.7984,0.2943,0.815,0.3252,0.8232,0.3846,0.8362,0.4052,0.8221,0.3485,0.831,0.309,0.8013,0.3985,0.8044,0.2937,0.8109,0.4204,0.8292,0.3447,0.8606,0.2972,0.8452,0.4715,0.8911,0.431,0.9594,0.4658,0.6252,0.465,0.6281,0.3226,0.6487,0.3993,0.8753,0.2441,0.6554,0.2548,0.6554,0.2557,0.6351,0.4544,0.6426,0.1498,0.9887,0.1903,0.9448,0.1498,0.9469,0.0742,0.9365,0.2323,0.6076,0.1853,0.6166,0.1923,0.626,0.2275,0.6259,0.2371,0.6816,0.2334,0.6653,0.2246,0.664,0.2221,0.696,0.1875,0.651,0.1398,0.6888,0.1258,0.7239,0.2001,0.7397,0.0364,0.7703,0.0759,0.7323,0.0794,0.6855,0.1242,0.6372,0.2386,0.7705,0.2316,0.816,0.2142,0.8322,0.1933,0.763,0.1676,0.8292,0.1435,0.8549,0.0602,0.7939,0.0469,0.8544,0.0583,0.8825,0.0891,0.8726,0.0992,0.8456,0.14,0.8386,0.084,0.7613,0.1228,0.7582,0.1104,0.7978,0.1563,0.7987,0.0966,0.7984,0.163,0.8232,0.1939,0.815,0.083,0.8221,0.1036,0.8362,0.1397,0.831,0.1792,0.8013,0.0897,0.8044,0.1944,0.8109,0.0678,0.8292,0.1435,0.8606,0.191,0.8452,0.0166,0.8911,0.0646,0.9594,0.1656,0.6487,0.0889,0.8753,0.2325,0.6351,0.2334,0.6554,0.2548,0.6553,0.2441,0.6553,0.2334,0.6553,0.4156,0.6279,0.3783,0.625,0.3984,0.649,0.4325,0.6718,0.4443,0.6446,0.428,0.6022});
IndexedFaceSet150->setTexCoord(*TextureCoordinate152);

Shape146->setGeometry(IndexedFaceSet150);

Transform145->addChild(*Shape146);

HAnimSegment144->addChildren(*Transform145);

HAnimJoint143->addChildren(*HAnimSegment144);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setName("l_shoulder");
HAnimJoint153->setDEF("hanim_l_shoulder");
HAnimJoint153->setCenter(new float[3]{5.975,52,-0.1452});
HAnimJoint153->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint153->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment154 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment154->setName("l_upperarm");
HAnimSegment154->setDEF("hanim_l_upperarm");
CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{5.975,52,-0.1452});
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance157 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material158 = (CMaterial *)(m_pScene.createNode("Material"));
Material158->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance157->setMaterial(*Material158);

CImageTexture* ImageTexture159 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture159->setUSE("JinLOA1TextureAtlas");
Appearance157->setTexture(*ImageTexture159);

Shape156->setAppearance(*Appearance157);

CIndexedFaceSet* IndexedFaceSet160 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet160->setCoordIndex(new int[304]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
IndexedFaceSet160->setCreaseAngle(3.14159);
IndexedFaceSet160->setTexCoordIndex(new int[304]{2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[120]{2.525,1.246,-1.68,3.681,1.236,0.0337,2.408,1.247,1.663,0.4657,1.264,0.9556,0.5379,1.264,-1.11,2.743,-0.0209,-2.31,4.339,-0.0351,0.057,2.581,-0.0195,2.307,-0.1009,0.0044,1.33,-0.0013,0.0036,-1.523,2.72,-2.534,-2.31,4.317,-2.548,0.057,2.559,-2.533,2.307,-0.1233,-2.509,1.33,-0.0237,-2.51,-1.523,2.759,-3.609,-2.442,4.448,-3.624,0.0619,2.588,-3.608,2.442,-0.2497,-3.583,1.409,-0.1443,-3.583,-1.61,2.245,-1.758,-1.939,3.465,-1.769,-0.4543,2.834,-1.763,1.629,1.223,-1.749,1.432,0.8596,-1.746,-0.7734,2.263,-7.566,-1.569,3.531,-7.577,-0.378,2.875,-7.571,1.293,1.202,-7.556,1.135,0.8242,-7.553,-0.634,2.267,-11.62,-1.511,3.487,-11.63,-0.3651,2.856,-11.62,1.243,1.245,-11.61,1.091,0.8817,-11.6,-0.6115,2.213,-12.17,-0.8985,2.928,-12.17,-0.2267,2.558,-12.17,0.716,1.614,-12.16,0.6268,1.401,-12.16,-0.3711});
IndexedFaceSet160->setCoord(*Coordinate161);

CTextureCoordinate* TextureCoordinate162 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate162->setPoint(new float[124]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114});
IndexedFaceSet160->setTexCoord(*TextureCoordinate162);

Shape156->setGeometry(IndexedFaceSet160);

Transform155->addChild(*Shape156);

HAnimSegment154->addChildren(*Transform155);

HAnimJoint153->addChildren(*HAnimSegment154);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("l_elbow");
HAnimJoint163->setDEF("hanim_l_elbow");
HAnimJoint163->setCenter(new float[3]{8.093,40.380001,-0.2502});
HAnimJoint163->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint163->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("l_forearm");
HAnimSegment164->setDEF("hanim_l_forearm");
CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setTranslation(new float[3]{8.093,40.380001,-0.2502});
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance167 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material168 = (CMaterial *)(m_pScene.createNode("Material"));
Material168->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance167->setMaterial(*Material168);

CImageTexture* ImageTexture169 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture169->setUSE("JinLOA1TextureAtlas");
Appearance167->setTexture(*ImageTexture169);

Shape166->setAppearance(*Appearance167);

CIndexedFaceSet* IndexedFaceSet170 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet170->setCoordIndex(new int[184]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
IndexedFaceSet170->setCreaseAngle(3.14159);
IndexedFaceSet170->setTexCoordIndex(new int[184]{2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
CCoordinate* Coordinate171 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate171->setPoint(new float[75]{0.215,0.3047,-1.152,1.155,0.2966,-0.2588,0.6199,0.3013,1.04,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.625,1.472,-0.8561,-0.4271,0.7164,-0.8496,1.625,-1.079,-0.8342,1.482,-1.433,-0.8312,-0.6588,0.1328,-3.5,-1.607,1.551,-3.513,-0.4225,0.781,-2.925,1.61,-1.136,-2.909,1.468,-1.551,-3.486,-0.6519,0.0592,-8.713,-1.437,1.093,-8.722,-0.1279,0.5047,-8.716,1.51,-0.8932,-8.704,1.377,-1.169,-8.702,-0.3428,0.0092,-9.336,-0.8855,0.7154,-9.342,0.0084,0.3135,-9.339,1.043,-0.6412,-9.331,0.9519,-0.8292,-9.329,-0.1383});
IndexedFaceSet170->setCoord(*Coordinate171);

CTextureCoordinate* TextureCoordinate172 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate172->setPoint(new float[74]{0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674});
IndexedFaceSet170->setTexCoord(*TextureCoordinate172);

Shape166->setGeometry(IndexedFaceSet170);

Transform165->addChild(*Shape166);

HAnimSegment164->addChildren(*Transform165);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setName("l_radiocarpal");
HAnimJoint173->setDEF("hanim_l_radiocarpal");
HAnimJoint173->setCenter(new float[3]{7.808,31.459999,-0.05849});
HAnimJoint173->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint173->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment174 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment174->setName("l_carpal");
HAnimSegment174->setDEF("hanim_l_carpal");
CTransform* Transform175 = (CTransform *)(m_pScene.createNode("Transform"));
Transform175->setTranslation(new float[3]{7.808,31.459999,-0.05849});
CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance177 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material178 = (CMaterial *)(m_pScene.createNode("Material"));
Material178->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance177->setMaterial(*Material178);

CImageTexture* ImageTexture179 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture179->setUSE("JinLOA1TextureAtlas");
Appearance177->setTexture(*ImageTexture179);

Shape176->setAppearance(*Appearance177);

CIndexedFaceSet* IndexedFaceSet180 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet180->setCoordIndex(new int[160]{4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1});
IndexedFaceSet180->setCreaseAngle(3.14159);
IndexedFaceSet180->setTexCoordIndex(new int[160]{4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1});
CCoordinate* Coordinate181 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate181->setPoint(new float[84]{1.247,0.07,0.7975,1.209,0.0872,-1.349,-0.7098,-0.0015,0.8912,-0.7183,0.0002,-1.283,-0.9295,-0.613,1.478,1.647,-0.4252,1.388,1.589,-0.3921,-1.989,-1.044,-0.5947,-1.984,-0.8227,-2.521,2.408,1.951,-2.334,2.08,1.892,-2.301,-2.409,-1.192,-2.614,-2.248,-0.5703,-3.958,1.694,0.8836,-4.2,1.75,0.8251,-4.167,-2.071,-0.7842,-3.968,-1.934,-1.037,-0.5968,-0.1872,-1.642,-2.561,1.941,-1.951,-0.9492,0.058,-1.914,-1.016,1.885,-1.649,-2.56,0.1377,-1.066,-2.61,-0.2014,1.209,0.0872,-1.349,-0.7183,0.0002,-1.283,-0.7098,-0.0015,0.8912,1.247,0.07,0.7975,1.209,0.0872,-1.349,-0.7098,-0.0015,0.8912});
IndexedFaceSet180->setCoord(*Coordinate181);

CTextureCoordinate* TextureCoordinate182 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate182->setPoint(new float[88]{0.8107,0.9924,0.8122,0.9033,0.7694,0.9912,0.7683,0.9026,0.1329,0.0347,0.0307,0.0051,0.0134,0.0353,0.1366,0.0058,0.1249,0.1081,0.0147,0.117,0.1349,0.1856,0.0462,0.1842,0.1559,0.0454,0.148,0.1033,0.3244,0.0096,0.1758,0.0039,0.1759,0.011,0.3241,0.0033,0.173,0.1764,0.3074,0.1757,0.1732,0.1519,0.3074,0.1513,0.1756,0.032,0.2159,0.0368,0.1791,0.0165,0.3169,0.0458,0.3158,0.0193,0.172,0.0594,0.2087,0.0476,0.1736,0.0504,0.2073,0.064,0.2362,0.0821,0.3267,0.0796,0.1717,0.0822,0.1726,0.1297,0.3077,0.1289,0.3074,0.1865,0.1742,0.184,0.0061,0.1086,0.1366,0.0368,0.1241,0.1189,0.0168,0.0309,0.0211,0.1882,0.14,0.1857});
IndexedFaceSet180->setTexCoord(*TextureCoordinate182);

Shape176->setGeometry(IndexedFaceSet180);

Transform175->addChild(*Shape176);

HAnimSegment174->addChildren(*Transform175);

HAnimJoint173->addChildren(*HAnimSegment174);

HAnimJoint163->addChildren(*HAnimJoint173);

HAnimJoint153->addChildren(*HAnimJoint163);

HAnimJoint143->addChildren(*HAnimJoint153);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setName("r_shoulder");
HAnimJoint183->setDEF("hanim_r_shoulder");
HAnimJoint183->setCenter(new float[3]{-5.975,52,-0.1452});
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setName("r_upperarm");
HAnimSegment184->setDEF("hanim_r_upperarm");
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{-5.975,52,-0.1452});
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance187 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material188 = (CMaterial *)(m_pScene.createNode("Material"));
Material188->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance187->setMaterial(*Material188);

CImageTexture* ImageTexture189 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture189->setUSE("JinLOA1TextureAtlas");
Appearance187->setTexture(*ImageTexture189);

Shape186->setAppearance(*Appearance187);

CIndexedFaceSet* IndexedFaceSet190 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet190->setCoordIndex(new int[304]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
IndexedFaceSet190->setCreaseAngle(3.14159);
IndexedFaceSet190->setTexCoordIndex(new int[304]{1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
CCoordinate* Coordinate191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate191->setPoint(new float[120]{-2.525,1.246,-1.68,-3.681,1.236,0.0337,-2.408,1.247,1.663,-0.4657,1.264,0.9556,-0.5379,1.264,-1.11,-2.743,-0.0209,-2.31,-4.339,-0.0351,0.057,-2.581,-0.0195,2.307,0.1009,0.0044,1.33,0.0013,0.0036,-1.523,-2.72,-2.534,-2.31,-4.317,-2.548,0.057,-2.559,-2.533,2.307,0.1233,-2.509,1.33,0.0237,-2.51,-1.523,-2.759,-3.609,-2.442,-4.448,-3.624,0.0619,-2.588,-3.608,2.442,0.2497,-3.583,1.409,0.1443,-3.583,-1.61,-2.245,-1.758,-1.939,-3.465,-1.769,-0.4543,-2.834,-1.763,1.629,-1.223,-1.749,1.432,-0.8596,-1.746,-0.7734,-2.263,-7.566,-1.569,-3.531,-7.577,-0.378,-2.875,-7.571,1.293,-1.202,-7.556,1.135,-0.8242,-7.553,-0.634,-2.267,-11.62,-1.511,-3.487,-11.63,-0.3651,-2.856,-11.62,1.243,-1.245,-11.61,1.091,-0.8817,-11.6,-0.6115,-2.213,-12.17,-0.8985,-2.928,-12.17,-0.2267,-2.558,-12.17,0.716,-1.614,-12.16,0.6268,-1.401,-12.16,-0.3711});
IndexedFaceSet190->setCoord(*Coordinate191);

CTextureCoordinate* TextureCoordinate192 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate192->setPoint(new float[124]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114});
IndexedFaceSet190->setTexCoord(*TextureCoordinate192);

Shape186->setGeometry(IndexedFaceSet190);

Transform185->addChild(*Shape186);

HAnimSegment184->addChildren(*Transform185);

HAnimJoint183->addChildren(*HAnimSegment184);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setName("r_elbow");
HAnimJoint193->setDEF("hanim_r_elbow");
HAnimJoint193->setCenter(new float[3]{-8.093,40.380001,-0.2502});
HAnimJoint193->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint193->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment194 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment194->setName("r_forearm");
HAnimSegment194->setDEF("hanim_r_forearm");
CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
Transform195->setTranslation(new float[3]{-8.093,40.380001,-0.2502});
CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance197 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material198 = (CMaterial *)(m_pScene.createNode("Material"));
Material198->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance197->setMaterial(*Material198);

CImageTexture* ImageTexture199 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture199->setUSE("JinLOA1TextureAtlas");
Appearance197->setTexture(*ImageTexture199);

Shape196->setAppearance(*Appearance197);

CIndexedFaceSet* IndexedFaceSet200 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet200->setCoordIndex(new int[184]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
IndexedFaceSet200->setCreaseAngle(3.14159);
IndexedFaceSet200->setTexCoordIndex(new int[184]{26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
CCoordinate* Coordinate201 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate201->setPoint(new float[75]{-0.215,0.3047,-1.152,-1.155,0.2966,-0.2588,-0.6199,0.3013,1.04,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.625,-1.472,-0.8561,-0.4271,-0.7164,-0.8496,1.625,1.079,-0.8342,1.482,1.433,-0.8312,-0.6588,-0.1328,-3.5,-1.607,-1.551,-3.513,-0.4225,-0.781,-2.925,1.61,1.136,-2.909,1.468,1.551,-3.486,-0.6519,-0.0592,-8.713,-1.437,-1.093,-8.722,-0.1279,-0.5047,-8.716,1.51,0.8932,-8.704,1.377,1.169,-8.702,-0.3428,-0.0092,-9.336,-0.8855,-0.7154,-9.342,0.0084,-0.3135,-9.339,1.043,0.6412,-9.331,0.9519,0.8292,-9.329,-0.1383});
IndexedFaceSet200->setCoord(*Coordinate201);

CTextureCoordinate* TextureCoordinate202 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate202->setPoint(new float[74]{0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674});
IndexedFaceSet200->setTexCoord(*TextureCoordinate202);

Shape196->setGeometry(IndexedFaceSet200);

Transform195->addChild(*Shape196);

HAnimSegment194->addChildren(*Transform195);

HAnimJoint193->addChildren(*HAnimSegment194);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setName("r_radiocarpal");
HAnimJoint203->setDEF("hanim_r_radiocarpal");
HAnimJoint203->setCenter(new float[3]{-7.808,31.459999,-0.05849});
HAnimJoint203->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint203->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment204 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment204->setName("r_carpal");
HAnimSegment204->setDEF("hanim_r_carpal");
CTransform* Transform205 = (CTransform *)(m_pScene.createNode("Transform"));
Transform205->setTranslation(new float[3]{-7.808,31.459999,-0.05849});
CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance207 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material208 = (CMaterial *)(m_pScene.createNode("Material"));
Material208->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance207->setMaterial(*Material208);

CImageTexture* ImageTexture209 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture209->setUSE("JinLOA1TextureAtlas");
Appearance207->setTexture(*ImageTexture209);

Shape206->setAppearance(*Appearance207);

CIndexedFaceSet* IndexedFaceSet210 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet210->setCoordIndex(new int[160]{4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1});
IndexedFaceSet210->setCreaseAngle(3.14159);
IndexedFaceSet210->setTexCoordIndex(new int[160]{4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1});
CCoordinate* Coordinate211 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate211->setPoint(new float[84]{-1.247,0.07,0.7975,-1.209,0.0872,-1.349,0.7098,-0.0015,0.8912,0.7183,0.0002,-1.283,0.9295,-0.613,1.478,-1.647,-0.4252,1.388,-1.589,-0.3921,-1.989,1.044,-0.5947,-1.984,0.8227,-2.521,2.408,-1.951,-2.334,2.08,-1.892,-2.301,-2.409,1.192,-2.614,-2.248,0.5703,-3.958,1.694,-0.8836,-4.2,1.75,-0.8251,-4.167,-2.071,0.7842,-3.968,-1.934,1.037,-0.5968,-0.1872,1.642,-2.561,1.941,1.951,-0.9492,0.058,1.914,-1.016,1.885,1.649,-2.56,0.1377,1.066,-2.61,-0.2014,-1.209,0.0872,-1.349,0.7183,0.0002,-1.283,0.7098,-0.0015,0.8912,-1.247,0.07,0.7975,-1.209,0.0872,-1.349,0.7098,-0.0015,0.8912});
IndexedFaceSet210->setCoord(*Coordinate211);

CTextureCoordinate* TextureCoordinate212 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate212->setPoint(new float[88]{0.8107,0.9924,0.8122,0.9033,0.7694,0.9912,0.7683,0.9026,0.1329,0.0347,0.0307,0.0051,0.0134,0.0353,0.1366,0.0058,0.1249,0.1081,0.0147,0.117,0.1349,0.1856,0.0462,0.1842,0.1559,0.0454,0.148,0.1033,0.3244,0.0096,0.1758,0.0039,0.1759,0.011,0.3241,0.0033,0.173,0.1764,0.3074,0.1757,0.1732,0.1519,0.3074,0.1513,0.1756,0.032,0.2159,0.0368,0.1791,0.0165,0.3169,0.0458,0.3158,0.0193,0.172,0.0594,0.2087,0.0476,0.1736,0.0504,0.2073,0.064,0.2362,0.0821,0.3267,0.0796,0.1717,0.0822,0.1726,0.1297,0.3077,0.1289,0.3074,0.1865,0.1742,0.184,0.0061,0.1086,0.1366,0.0368,0.1241,0.1189,0.0168,0.0309,0.0211,0.1882,0.14,0.1857});
IndexedFaceSet210->setTexCoord(*TextureCoordinate212);

Shape206->setGeometry(IndexedFaceSet210);

Transform205->addChild(*Shape206);

HAnimSegment204->addChildren(*Transform205);

HAnimJoint203->addChildren(*HAnimSegment204);

HAnimJoint193->addChildren(*HAnimJoint203);

HAnimJoint183->addChildren(*HAnimJoint193);

HAnimJoint143->addChildren(*HAnimJoint183);

HAnimJoint133->addChildren(*HAnimJoint143);

HAnimJoint33->addChildren(*HAnimJoint133);

HAnimHumanoid24->setSkeleton(*HAnimJoint33);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setUSE("hanim_humanoid_root");
HAnimHumanoid24->addJoints(*HAnimJoint213);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setUSE("hanim_sacroiliac");
HAnimHumanoid24->addJoints(*HAnimJoint214);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setUSE("hanim_vl5");
HAnimHumanoid24->addJoints(*HAnimJoint215);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setUSE("hanim_skullbase");
HAnimHumanoid24->addJoints(*HAnimJoint216);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setUSE("hanim_l_elbow");
HAnimHumanoid24->addJoints(*HAnimJoint217);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("hanim_r_elbow");
HAnimHumanoid24->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("hanim_l_hip");
HAnimHumanoid24->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("hanim_r_hip");
HAnimHumanoid24->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("hanim_l_knee");
HAnimHumanoid24->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("hanim_r_knee");
HAnimHumanoid24->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("hanim_l_radiocarpal");
HAnimHumanoid24->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("hanim_r_radiocarpal");
HAnimHumanoid24->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("hanim_l_shoulder");
HAnimHumanoid24->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("hanim_r_shoulder");
HAnimHumanoid24->addJoints(*HAnimJoint228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setUSE("hanim_l_talocrural");
HAnimHumanoid24->addJoints(*HAnimJoint229);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setUSE("hanim_r_talocrural");
HAnimHumanoid24->addJoints(*HAnimJoint230);

CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setUSE("hanim_sacrum");
HAnimHumanoid24->setSegments(*HAnimSegment231);

CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setUSE("hanim_pelvis");
HAnimHumanoid24->setSegments(*HAnimSegment232);

CHAnimSegment* HAnimSegment233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment233->setUSE("hanim_l5");
HAnimHumanoid24->setSegments(*HAnimSegment233);

CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setUSE("hanim_skull");
HAnimHumanoid24->setSegments(*HAnimSegment234);

CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setUSE("hanim_l_calf");
HAnimHumanoid24->setSegments(*HAnimSegment235);

CHAnimSegment* HAnimSegment236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment236->setUSE("hanim_r_calf");
HAnimHumanoid24->setSegments(*HAnimSegment236);

CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setUSE("hanim_l_carpal");
HAnimHumanoid24->setSegments(*HAnimSegment237);

CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setUSE("hanim_r_carpal");
HAnimHumanoid24->setSegments(*HAnimSegment238);

CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setUSE("hanim_l_forearm");
HAnimHumanoid24->setSegments(*HAnimSegment239);

CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setUSE("hanim_r_forearm");
HAnimHumanoid24->setSegments(*HAnimSegment240);

CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setUSE("hanim_l_talus");
HAnimHumanoid24->setSegments(*HAnimSegment241);

CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setUSE("hanim_r_talus");
HAnimHumanoid24->setSegments(*HAnimSegment242);

CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment243);

CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment244);

CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setUSE("hanim_l_thigh");
HAnimHumanoid24->setSegments(*HAnimSegment245);

CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setUSE("hanim_r_thigh");
HAnimHumanoid24->setSegments(*HAnimSegment246);

CHAnimSegment* HAnimSegment247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment247->setUSE("hanim_l_upperarm");
HAnimHumanoid24->setSegments(*HAnimSegment247);

CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setUSE("hanim_r_upperarm");
HAnimHumanoid24->setSegments(*HAnimSegment248);

group->addChildren(*HAnimHumanoid24);

X3D0->setScene(*Scene20);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
