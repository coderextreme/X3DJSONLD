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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("KoreanCharacter09Ru.x3d");
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
meta8->setContent("13 March 2021");
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
meta13->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d");
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

Cmeta* meta18 = new Cmeta();
meta18->setName("license");
meta18->setContent("../license.html");
head1->addMeta(*meta18);

X3D0->setHead(*head1);

CScene* Scene19 = new CScene();
CWorldInfo* WorldInfo20 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo20->setTitle("KoreanCharacter09Ru.x3d");
group->addChildren(*WorldInfo20);

CNavigationInfo* NavigationInfo21 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo21->setSpeed(1.5);
group->addChildren(*NavigationInfo21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint22->setDescription("Ru");
Viewpoint22->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint22);

CHAnimHumanoid* HAnimHumanoid23 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid23->setName("Ru");
HAnimHumanoid23->setDEF("hanim_Ru");
HAnimHumanoid23->setScale(new float[3]{0.0225,0.0225,0.0225});
HAnimHumanoid23->setVersion("2.0");
//HAnimHumanoid original info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=male\" \"height=1.5\"'
CMetadataSet* MetadataSet24 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet24->setName("HAnimHumanoid.info");
MetadataSet24->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString25 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString25->setName("authorName");
MetadataString25->setValue(new CString[1]{"Chul Hee Jung and Myeong Won Lee"}, 1);
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
MetadataString28->setValue(new CString[1]{"male"}, 1);
MetadataSet24->addValue(*MetadataString28);

CMetadataFloat* MetadataFloat29 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat29->setName("height");
MetadataFloat29->setValue(new float[1]{1.5});
MetadataSet24->addValue(*MetadataFloat29);

CMetadataString* MetadataString30 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString30->setName("humanoidVersion");
MetadataString30->setValue(new CString[1]{"2.0"}, 1);
MetadataSet24->addValue(*MetadataString30);

HAnimHumanoid23->setMetadata(*MetadataSet24);

CHAnimJoint* HAnimJoint31 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint31->setName("humanoid_root");
HAnimJoint31->setDEF("hanim_humanoid_root");
HAnimJoint31->setCenter(new float[3]{0,35.950001,-1.712});
HAnimJoint31->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment32 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment32->setName("sacrum");
HAnimSegment32->setDEF("hanim_sacrum");
CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setTranslation(new float[3]{0,35.950001,-1.712});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance35->setMaterial(*Material36);

CImageTexture* ImageTexture37 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture37->setDEF("RuTextureAtlas");
ImageTexture37->setUrl(new CString[2]{"images/Ru.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ru.png"}, 2);
Appearance35->setTexture(*ImageTexture37);

Shape34->setAppearance(*Appearance35);

CIndexedFaceSet* IndexedFaceSet38 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet38->setCoordIndex(new int[192]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,10,2,1,-1,1,9,10,-1,11,3,2,-1,2,10,11,-1,12,4,3,-1,3,11,12,-1,13,5,4,-1,4,12,13,-1,14,6,5,-1,5,13,14,-1,15,7,6,-1,6,14,15,-1,16,8,7,-1,7,15,16,-1,9,1,8,-1,8,16,9,-1,18,10,9,-1,9,17,18,-1,19,11,10,-1,10,18,19,-1,20,12,11,-1,11,19,20,-1,21,13,12,-1,12,20,21,-1,22,14,13,-1,13,21,22,-1,23,15,14,-1,14,22,23,-1,24,16,15,-1,15,23,24,-1,17,9,16,-1,16,24,17,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1});
IndexedFaceSet38->setCreaseAngle(1.57);
IndexedFaceSet38->setTexCoordIndex(new int[192]{0,8,9,-1,1,9,10,-1,2,10,11,-1,3,11,12,-1,4,12,13,-1,5,13,14,-1,6,14,15,-1,7,15,16,-1,18,9,8,-1,8,17,18,-1,19,10,9,-1,9,18,19,-1,20,11,10,-1,10,19,20,-1,21,12,11,-1,11,20,21,-1,22,13,12,-1,12,21,22,-1,23,14,13,-1,13,22,23,-1,24,15,14,-1,14,23,24,-1,25,16,15,-1,15,24,25,-1,27,18,17,-1,17,26,27,-1,28,19,18,-1,18,27,28,-1,29,20,19,-1,19,28,29,-1,30,21,20,-1,20,29,30,-1,31,22,21,-1,21,30,31,-1,32,23,22,-1,22,31,32,-1,33,24,23,-1,23,32,33,-1,34,25,24,-1,24,33,34,-1,35,27,26,-1,36,28,27,-1,37,29,28,-1,38,30,29,-1,39,31,30,-1,40,32,31,-1,41,33,32,-1,42,34,33,-1});
CCoordinate* Coordinate39 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate39->setPoint(new float[78]{0,1.234,0,0,0.8727,-0.8727,-0.6171,0.8727,-0.6171,-0.8727,0.8727,0,-0.6171,0.8727,0.6171,0,0.8727,0.8727,0.6171,0.8727,0.6171,0.8727,0.8727,0,0.6171,0.8727,-0.6171,0,0,-1.234,-0.8727,0,-0.8727,-1.234,0,0,-0.8727,0,0.8727,0,0,1.234,0.8727,0,0.8727,1.234,0,0,0.8727,0,-0.8727,0,-0.8727,-0.8727,-0.6171,-0.8727,-0.6171,-0.8727,-0.8727,0,-0.6171,-0.8727,0.6171,0,-0.8727,0.8727,0.6171,-0.8727,0.6171,0.8727,-0.8727,0,0.6171,-0.8727,-0.6171,0,-1.234,0});
IndexedFaceSet38->setCoord(*Coordinate39);

CTextureCoordinate* TextureCoordinate40 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate40->setPoint(new float[84]{0.7928,0.4648,0.8105,0.4648,0.8282,0.4648,0.8458,0.4648,0.8635,0.4648,0.8811,0.4648,0.8988,0.4648,0.9165,0.4648,0.7928,0.4295,0.8105,0.4295,0.8282,0.4295,0.8458,0.4295,0.8635,0.4295,0.8811,0.4295,0.8988,0.4295,0.9165,0.4295,0.9341,0.4295,0.7928,0.3942,0.8105,0.3942,0.8282,0.3942,0.8458,0.3942,0.8635,0.3942,0.8811,0.3942,0.8988,0.3942,0.9165,0.3942,0.9341,0.3942,0.7928,0.3589,0.8105,0.3589,0.8282,0.3589,0.8458,0.3589,0.8635,0.3589,0.8811,0.3589,0.8988,0.3589,0.9165,0.3589,0.9341,0.3589,0.7928,0.3235,0.8105,0.3235,0.8282,0.3235,0.8458,0.3235,0.8635,0.3235,0.8811,0.3235,0.8988,0.3235});
IndexedFaceSet38->setTexCoord(*TextureCoordinate40);

Shape34->setGeometry(IndexedFaceSet38);

Transform33->addChildren(*Shape34);

HAnimSegment32->addChildren(*Transform33);

HAnimJoint31->addChildren(*HAnimSegment32);

CHAnimJoint* HAnimJoint41 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint41->setName("l_hip");
HAnimJoint41->setDEF("hanim_l_hip");
HAnimJoint41->setCenter(new float[3]{3.602,33.740002,-1.967});
HAnimJoint41->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment42 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment42->setName("l_thigh");
HAnimSegment42->setDEF("hanim_l_thigh");
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setTranslation(new float[3]{3.602,33.740002,-1.967});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance45->setMaterial(*Material46);

CImageTexture* ImageTexture47 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture47->setUSE("RuTextureAtlas");
Appearance45->setTexture(*ImageTexture47);

Shape44->setAppearance(*Appearance45);

CIndexedFaceSet* IndexedFaceSet48 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet48->setCoordIndex(new int[448]{47,16,2,-1,2,48,47,-1,1,18,15,-1,15,0,1,-1,2,16,18,-1,18,1,2,-1,4,19,3,-1,5,20,19,-1,19,4,5,-1,0,15,20,-1,20,5,0,-1,17,14,6,-1,6,10,17,-1,1,0,7,-1,7,8,1,-1,2,1,8,-1,8,9,2,-1,3,17,10,-1,10,11,3,-1,4,3,11,-1,11,12,4,-1,5,4,12,-1,12,13,5,-1,0,5,13,-1,13,7,0,-1,14,48,6,-1,10,6,45,-1,45,39,10,-1,8,7,36,-1,36,37,8,-1,9,8,37,-1,37,38,9,-1,10,39,40,-1,40,11,10,-1,11,40,41,-1,41,12,11,-1,12,41,42,-1,42,13,12,-1,13,42,36,-1,36,7,13,-1,6,9,38,-1,38,45,6,-1,15,50,49,-1,49,20,15,-1,18,51,50,-1,50,15,18,-1,16,52,51,-1,51,18,16,-1,47,57,52,-1,52,16,47,-1,17,54,53,-1,53,14,17,-1,3,55,54,-1,54,17,3,-1,19,56,55,-1,55,3,19,-1,19,20,49,-1,49,56,19,-1,22,23,29,-1,29,30,22,-1,23,24,31,-1,31,29,23,-1,24,43,44,-1,44,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,28,35,34,-1,34,27,28,-1,22,30,35,-1,35,28,22,-1,29,37,36,-1,36,30,29,-1,38,37,29,-1,29,31,38,-1,39,45,44,-1,44,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,42,41,-1,41,34,35,-1,30,36,42,-1,42,35,30,-1,44,43,25,-1,25,32,44,-1,45,38,31,-1,31,44,45,-1,23,22,46,-1,22,28,46,-1,28,27,46,-1,27,26,46,-1,26,25,46,-1,25,43,46,-1,43,24,46,-1,24,23,46,-1,47,14,53,-1,53,57,47,-1,48,14,47,-1,48,2,9,-1,9,6,48,-1,50,21,49,-1,51,21,50,-1,52,21,51,-1,57,21,52,-1,54,21,53,-1,55,21,54,-1,56,21,55,-1,49,21,56,-1,53,21,57,-1});
IndexedFaceSet48->setCreaseAngle(1.57);
IndexedFaceSet48->setTexCoordIndex(new int[448]{0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,2,1,5,-1,5,4,2,-1,8,9,10,-1,11,12,9,-1,9,8,11,-1,7,6,12,-1,12,11,7,-1,13,14,15,-1,15,16,13,-1,4,7,17,-1,17,18,4,-1,2,4,18,-1,18,19,2,-1,10,58,59,-1,59,20,10,-1,8,10,20,-1,20,21,8,-1,11,8,21,-1,21,22,11,-1,7,11,22,-1,22,17,7,-1,14,3,15,-1,16,15,23,-1,23,24,16,-1,18,17,25,-1,25,26,18,-1,19,18,26,-1,26,27,19,-1,59,60,28,-1,28,20,59,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,25,-1,25,17,22,-1,15,19,27,-1,27,23,15,-1,6,31,32,-1,32,12,6,-1,5,33,31,-1,31,6,5,-1,1,34,33,-1,33,5,1,-1,0,35,34,-1,34,1,0,-1,13,36,37,-1,37,14,13,-1,10,38,61,-1,61,58,10,-1,9,39,38,-1,38,10,9,-1,9,12,32,-1,32,39,9,-1,40,41,42,-1,42,43,40,-1,41,44,45,-1,45,42,41,-1,44,46,47,-1,47,45,44,-1,48,49,50,-1,50,63,48,-1,49,52,53,-1,53,50,49,-1,54,55,53,-1,53,52,54,-1,40,43,55,-1,55,54,40,-1,42,26,25,-1,25,43,42,-1,27,26,42,-1,42,45,27,-1,24,23,47,-1,47,51,24,-1,28,60,63,-1,63,50,28,-1,29,28,50,-1,50,53,29,-1,55,30,29,-1,29,53,55,-1,43,25,30,-1,30,55,43,-1,47,46,62,-1,62,51,47,-1,23,27,45,-1,45,47,23,-1,41,40,56,-1,40,54,56,-1,54,52,56,-1,52,49,56,-1,49,48,56,-1,62,46,56,-1,46,44,56,-1,44,41,56,-1,0,14,37,-1,37,35,0,-1,3,14,0,-1,3,2,19,-1,19,15,3,-1,31,57,32,-1,33,57,31,-1,34,57,33,-1,35,57,34,-1,36,57,37,-1,38,57,61,-1,39,57,38,-1,32,57,39,-1,37,57,35,-1});
CCoordinate* Coordinate49 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate49->setPoint(new float[174]{2.85,0.184,-0.0877,1.943,-0.0169,-2.625,0.2938,-0.3737,-3.684,-2.014,-0.4184,2.863,0.4655,-0.1834,3.684,2.292,0.0611,2.606,-2.041,-2.804,-2.638,2.889,-2.284,-0.1304,2.106,-2.227,-2.528,0.3997,-2.429,-3.492,-2.615,-2.821,0.2779,-2.01,-2.771,2.799,0.4314,-2.557,3.503,2.337,-2.353,2.596,-2.689,-1.211,-1.912,2.566,2.007,-0.2931,0.1862,0.5185,-3.836,-2.889,-1.234,0.2837,1.7,1.054,-2.553,0.5021,0.9112,3.721,2.177,2.02,2.446,-0.132,2.674,-0.0464,2.493,-16.06,0.0189,1.981,-16.06,-1.51,0.4055,-16.06,-2.241,-1.9,-16.06,0.0547,-1.36,-16.06,1.631,0.3864,-16.06,2.303,1.984,-16.06,1.708,1.905,-15.17,-1.72,2.559,-15.17,0.0146,0.4031,-15.17,-2.394,-1.99,-15.17,0.1027,-1.439,-15.17,1.844,0.4264,-15.17,2.502,1.942,-15.17,1.869,2.807,-8.352,-0.0819,2.112,-8.429,-2.226,0.3241,-8.502,-3.114,-2.308,-8.699,0.145,-1.8,-8.657,2.285,0.3885,-8.574,3.097,2.326,-8.409,2.335,-1.392,-16.06,-1.493,-1.465,-15.17,-1.629,-1.871,-8.695,-2.153,0.3229,-16.55,0.0433,-1.798,-0.2819,-3.275,-1.755,-0.7534,-3.133,1.182,2.698,1.952,1.563,2.686,-0.6893,0.6494,2.081,-2.868,0.0109,1.733,-3.589,-2.44,0.3902,-1.735,-2.489,0.4031,0.3834,-1.958,0.7621,2.871,0.2562,2.428,3.694,-1.75,1.174,-3.179});
IndexedFaceSet48->setCoord(*Coordinate49);

CTextureCoordinate* TextureCoordinate50 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate50->setPoint(new float[128]{0.6973,0.5621,0.6732,0.5606,0.6756,0.5519,0.6995,0.5558,0.6514,0.5517,0.651,0.5639,0.6265,0.5674,0.6243,0.5513,0.5714,0.5516,0.5801,0.5716,0.5399,0.5593,0.5961,0.5491,0.6012,0.5661,0.7333,0.5682,0.7145,0.5596,0.7098,0.5282,0.7413,0.5299,0.6253,0.5254,0.653,0.5279,0.6771,0.5279,0.5348,0.5231,0.5674,0.5231,0.5944,0.524,0.7049,0.442,0.7293,0.4364,0.6272,0.4503,0.6521,0.4495,0.6763,0.4477,0.5451,0.4382,0.5738,0.4439,0.5999,0.4487,0.6315,0.5952,0.6081,0.5939,0.6539,0.5942,0.6605,0.5859,0.6782,0.5885,0.7019,0.6058,0.6914,0.5906,0.5618,0.5888,0.595,0.5899,0.6258,0.3561,0.636,0.3553,0.6403,0.3637,0.6255,0.3643,0.6483,0.35,0.6552,0.3607,0.6618,0.3404,0.6747,0.3534,0.5858,0.3255,0.5913,0.338,0.5779,0.3505,0.6892,0.3432,0.6036,0.3477,0.5961,0.3584,0.6143,0.3548,0.61,0.3628,0.6267,0.3323,0.6238,0.6177,0.5128,0.5646,0.5065,0.5242,0.5221,0.4313,0.545,0.6041,0.6679,0.3286,0.5641,0.3396});
IndexedFaceSet48->setTexCoord(*TextureCoordinate50);

Shape44->setGeometry(IndexedFaceSet48);

Transform43->addChildren(*Shape44);

HAnimSegment42->addChildren(*Transform43);

HAnimJoint41->addChildren(*HAnimSegment42);

CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setName("l_knee");
HAnimJoint51->setDEF("hanim_l_knee");
HAnimJoint51->setCenter(new float[3]{3.931,18.23,-1.935});
HAnimJoint51->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment52 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment52->setName("l_calf");
HAnimSegment52->setDEF("hanim_l_calf");
CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setTranslation(new float[3]{3.931,18.23,-1.935});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance55->setMaterial(*Material56);

CImageTexture* ImageTexture57 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture57->setUSE("RuTextureAtlas");
Appearance55->setTexture(*ImageTexture57);

Shape54->setAppearance(*Appearance55);

CIndexedFaceSet* IndexedFaceSet58 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet58->setCoordIndex(new int[320]{32,38,1,-1,1,0,32,-1,33,32,0,-1,0,2,33,-1,34,39,14,-1,14,3,34,-1,35,34,3,-1,3,4,35,-1,5,36,35,-1,35,4,5,-1,6,37,36,-1,36,5,6,-1,1,38,37,-1,37,6,1,-1,24,7,8,-1,8,25,24,-1,26,25,8,-1,8,9,26,-1,15,10,27,-1,27,31,15,-1,11,28,27,-1,27,10,11,-1,12,29,28,-1,28,11,12,-1,13,30,29,-1,29,12,13,-1,24,30,13,-1,13,7,24,-1,9,18,20,-1,20,15,9,-1,31,26,9,-1,9,15,31,-1,8,7,17,-1,17,16,8,-1,9,8,16,-1,16,18,9,-1,19,10,15,-1,15,20,19,-1,21,11,10,-1,10,19,21,-1,22,12,11,-1,11,21,22,-1,23,13,12,-1,12,22,23,-1,7,13,23,-1,23,17,7,-1,33,39,20,-1,20,18,33,-1,16,17,38,-1,38,32,16,-1,18,16,32,-1,32,33,18,-1,19,20,39,-1,39,34,19,-1,35,21,19,-1,19,34,35,-1,36,22,21,-1,21,35,36,-1,37,23,22,-1,22,36,37,-1,38,17,23,-1,23,37,38,-1,2,14,39,-1,39,33,2,-1,24,25,40,-1,25,26,40,-1,26,31,40,-1,31,27,40,-1,27,28,40,-1,28,29,40,-1,29,30,40,-1,30,24,40,-1,0,1,41,-1,1,6,41,-1,6,5,41,-1,5,4,41,-1,4,3,41,-1,3,14,41,-1,14,2,41,-1,2,0,41,-1});
IndexedFaceSet58->setCreaseAngle(1.57);
IndexedFaceSet58->setTexCoordIndex(new int[320]{1,2,3,-1,3,0,1,-1,5,1,0,-1,0,4,5,-1,7,8,9,-1,9,6,7,-1,11,43,42,-1,42,10,11,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,3,2,15,-1,15,14,3,-1,18,19,16,-1,16,17,18,-1,21,17,16,-1,16,20,21,-1,24,25,22,-1,22,23,24,-1,26,27,44,-1,44,45,26,-1,28,29,27,-1,27,26,28,-1,30,31,29,-1,29,28,30,-1,18,31,30,-1,30,19,18,-1,20,32,33,-1,33,24,20,-1,23,21,20,-1,20,24,23,-1,16,19,35,-1,35,34,16,-1,20,16,34,-1,34,32,20,-1,36,25,24,-1,24,33,36,-1,37,26,45,-1,45,46,37,-1,38,28,26,-1,26,37,38,-1,39,30,28,-1,28,38,39,-1,19,30,39,-1,39,35,19,-1,5,8,33,-1,33,32,5,-1,34,35,2,-1,2,1,34,-1,32,34,1,-1,1,5,32,-1,36,33,8,-1,8,7,36,-1,11,37,46,-1,46,43,11,-1,13,38,37,-1,37,11,13,-1,15,39,38,-1,38,13,15,-1,2,35,39,-1,39,15,2,-1,4,9,8,-1,8,5,4,-1,18,17,40,-1,17,21,40,-1,21,23,40,-1,23,22,40,-1,44,27,40,-1,27,29,40,-1,29,31,40,-1,31,18,40,-1,0,3,41,-1,3,14,41,-1,14,12,41,-1,12,10,41,-1,10,42,41,-1,6,9,41,-1,9,4,41,-1,4,0,41,-1});
CCoordinate* Coordinate59 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate59->setPoint(new float[126]{1.182,-14.56,-1.091,1.553,-14.56,-0.1072,-0.017,-14.56,-1.525,-1.457,-14.56,0.0005,-1.094,-14.56,1.145,-0.0351,-14.56,1.587,1.152,-14.56,1.015,2.207,-0.1521,-0.0163,1.741,-0.1513,-1.643,0.0996,-0.1509,-2.309,-2.273,-0.1521,-0.0254,-1.777,-0.153,1.747,0.0533,-0.1533,2.309,1.78,-0.153,1.71,-1.127,-14.56,-1.093,-1.751,-0.1513,-1.552,1.478,-6.77,-1.405,2.057,-6.579,0.0221,0.0355,-7.09,-2.115,-2.021,-7.528,-0.1026,-1.592,-7.4,-1.399,-1.559,-7.392,1.458,0.0464,-7.091,2.044,1.588,-6.828,1.431,2.162,0.6392,-0.0205,1.659,0.6662,-1.561,0.1032,0.6473,-2.279,-2.22,0.6402,0.0258,-1.673,0.6576,1.57,0.0642,0.6305,2.263,1.651,0.6333,1.643,-1.706,0.6436,-1.513,1.251,-13.99,-1.252,-0.0065,-13.99,-1.806,-1.765,-13.99,-0.0246,-1.337,-13.99,1.25,-0.0302,-13.99,1.876,1.35,-13.99,1.226,1.865,-13.99,-0.0781,-1.425,-13.99,-1.381,0.0589,1.002,0.1259,0.0075,-14.75,-0.0616});
IndexedFaceSet58->setCoord(*Coordinate59);

CTextureCoordinate* TextureCoordinate60 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate60->setPoint(new float[94]{0.6463,0.046,0.6495,0.0509,0.6387,0.0526,0.6389,0.0477,0.6574,0.0396,0.6629,0.0479,0.6737,0.0226,0.6912,0.036,0.6786,0.0436,0.6681,0.033,0.6077,0.0348,0.5971,0.0443,0.617,0.0409,0.6118,0.0489,0.6293,0.0459,0.6272,0.0516,0.6536,0.2562,0.6522,0.265,0.6412,0.2644,0.6406,0.2561,0.6708,0.2596,0.6649,0.2701,0.687,0.2926,0.6797,0.28,0.6919,0.2662,0.7071,0.2736,0.5893,0.2674,0.6011,0.2817,0.6093,0.2616,0.616,0.2723,0.6268,0.257,0.6285,0.2656,0.6804,0.1534,0.7038,0.1483,0.6596,0.1586,0.6418,0.1619,0.72,0.1456,0.5782,0.1504,0.6015,0.1548,0.6244,0.1586,0.6394,0.2899,0.6382,0.0267,0.6022,0.024,0.5845,0.0373,0.5928,0.2944,0.5718,0.2758,0.5583,0.1475});
IndexedFaceSet58->setTexCoord(*TextureCoordinate60);

Shape54->setGeometry(IndexedFaceSet58);

Transform53->addChildren(*Shape54);

HAnimSegment52->addChildren(*Transform53);

HAnimJoint51->addChildren(*HAnimSegment52);

CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setName("l_talocrural");
HAnimJoint61->setDEF("hanim_l_talocrural");
HAnimJoint61->setCenter(new float[3]{4.077,4.031,-1.998});
HAnimJoint61->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment62 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment62->setName("l_talus");
HAnimSegment62->setDEF("hanim_l_talus");
CTransform* Transform63 = (CTransform *)(m_pScene.createNode("Transform"));
Transform63->setTranslation(new float[3]{4.077,4.031,-1.998});
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance65 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material66 = (CMaterial *)(m_pScene.createNode("Material"));
Material66->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance65->setMaterial(*Material66);

CImageTexture* ImageTexture67 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture67->setUSE("RuTextureAtlas");
Appearance65->setTexture(*ImageTexture67);

Shape64->setAppearance(*Appearance65);

CIndexedFaceSet* IndexedFaceSet68 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet68->setCoordIndex(new int[440]{0,1,10,-1,10,16,0,-1,2,11,10,-1,10,1,2,-1,3,12,11,-1,11,2,3,-1,4,13,12,-1,12,3,4,-1,41,0,16,-1,16,15,41,-1,0,41,44,-1,44,18,0,-1,17,19,4,-1,4,3,17,-1,20,17,3,-1,3,2,20,-1,21,20,2,-1,2,1,21,-1,18,21,1,-1,1,0,18,-1,18,44,42,-1,42,6,18,-1,8,7,19,-1,19,17,8,-1,23,8,17,-1,17,20,23,-1,9,23,20,-1,20,21,9,-1,6,9,21,-1,21,18,6,-1,10,24,26,-1,26,16,10,-1,11,25,24,-1,24,10,11,-1,12,27,25,-1,25,11,12,-1,13,28,27,-1,27,12,13,-1,5,28,13,-1,13,14,5,-1,30,29,39,-1,39,15,30,-1,26,30,15,-1,15,16,26,-1,8,23,22,-1,22,7,8,-1,9,6,22,-1,22,23,9,-1,6,42,46,-1,46,22,6,-1,33,34,35,-1,35,36,37,-1,37,38,31,-1,35,37,31,-1,33,35,31,-1,32,33,31,-1,28,5,32,-1,32,31,28,-1,5,29,33,-1,33,32,5,-1,29,30,34,-1,34,33,29,-1,30,26,35,-1,35,34,30,-1,26,24,36,-1,36,35,26,-1,24,25,37,-1,37,36,24,-1,25,27,38,-1,38,37,25,-1,27,28,31,-1,31,38,27,-1,39,29,5,-1,5,14,39,-1,7,22,46,-1,46,43,7,-1,4,19,45,-1,45,40,4,-1,19,7,43,-1,43,45,19,-1,4,40,14,-1,14,13,4,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,53,54,55,-1,52,53,55,-1,48,52,55,-1,48,55,56,-1,48,56,47,-1,15,39,48,-1,48,47,15,-1,39,14,49,-1,49,48,39,-1,14,40,50,-1,50,49,14,-1,40,45,51,-1,51,50,40,-1,45,43,52,-1,52,51,45,-1,43,46,53,-1,53,52,43,-1,46,42,54,-1,54,53,46,-1,42,44,55,-1,55,54,42,-1,44,41,56,-1,56,55,44,-1,41,15,47,-1,47,56,41,-1});
IndexedFaceSet68->setCreaseAngle(1.57);
IndexedFaceSet68->setTexCoordIndex(new int[440]{0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,0,3,-1,3,11,10,-1,0,10,12,-1,12,13,0,-1,14,15,8,-1,8,6,14,-1,16,14,6,-1,6,4,16,-1,17,16,4,-1,4,1,17,-1,13,17,1,-1,1,0,13,-1,66,65,18,-1,18,19,66,-1,20,21,68,-1,68,67,20,-1,22,20,67,-1,67,69,22,-1,23,22,69,-1,69,70,23,-1,19,23,70,-1,70,66,19,-1,2,24,25,-1,25,3,2,-1,5,26,24,-1,24,2,5,-1,7,27,26,-1,26,5,7,-1,9,28,27,-1,27,7,9,-1,30,28,9,-1,9,29,30,-1,31,32,33,-1,33,11,31,-1,25,31,11,-1,11,3,25,-1,59,61,34,-1,34,60,59,-1,62,58,34,-1,34,61,62,-1,58,57,63,-1,63,34,58,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,37,39,43,-1,36,37,43,-1,28,30,36,-1,36,43,28,-1,30,32,37,-1,37,36,30,-1,32,31,38,-1,38,37,32,-1,31,25,39,-1,39,38,31,-1,25,24,40,-1,40,39,25,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,28,43,-1,43,42,27,-1,33,32,30,-1,30,29,33,-1,60,34,63,-1,63,64,60,-1,8,15,46,-1,46,45,8,-1,68,21,44,-1,44,71,68,-1,8,45,29,-1,29,9,8,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,52,53,54,-1,51,52,54,-1,47,51,54,-1,47,54,55,-1,47,55,56,-1,11,33,47,-1,47,56,11,-1,33,29,48,-1,48,47,33,-1,29,45,49,-1,49,48,29,-1,45,46,50,-1,50,49,45,-1,71,44,73,-1,73,72,71,-1,44,35,74,-1,74,73,44,-1,35,18,75,-1,75,74,35,-1,18,65,76,-1,76,75,18,-1,12,10,55,-1,55,54,12,-1,10,11,56,-1,56,55,10,-1});
CCoordinate* Coordinate69 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate69->setPoint(new float[171]{1.731,-1.878,0.029,1.222,-1.878,-1.495,-0.1851,-1.878,-1.825,-1.363,-1.878,-1.501,-1.883,-1.878,0.029,-0.9249,-0.0082,0.7476,1.502,-4.021,0.029,-1.633,-4.021,0.029,-1.266,-4.021,-1.51,1.131,-4.021,-1.504,0.9183,-1.002,-1.283,-0.1851,-0.9421,-1.604,-1.202,-0.9993,-1.283,-1.721,-1.025,0.029,-1.52,-0.9401,1.079,1.206,-0.9401,1.08,1.395,-1.025,0.029,-1.383,-3.557,-1.518,1.652,-3.557,0.029,-1.788,-3.557,0.029,-0.1851,-3.557,-1.914,1.246,-3.557,-1.516,-0.1851,-4.021,0.029,-0.1851,-4.021,-1.886,0.6003,-0.0082,-0.7875,-0.1851,-0.0082,-1.132,1.019,-0.0082,0.029,-0.8784,-0.0082,-0.8046,-1.274,-0.0082,0.029,-0.1851,-0.0082,1.203,0.6064,-0.0082,0.7351,-0.9328,0.8725,0.0232,-0.6695,0.8725,0.538,-0.1788,0.8725,0.8317,0.3605,0.8725,0.5208,0.6667,0.8725,0.0213,0.3805,0.8725,-0.5818,-0.1786,0.8725,-0.8408,-0.657,0.8725,-0.6004,-0.1851,-0.5691,1.74,-1.796,-1.86,0.9221,1.592,-1.86,0.9179,1.541,-4.021,0.9221,-1.639,-4.021,0.9221,1.708,-3.557,0.9221,-1.82,-3.557,0.9221,-0.1851,-4.021,0.9221,1.084,-1.469,1.63,-0.4507,-0.8535,1.908,-1.352,-1.469,1.635,-1.508,-1.986,1.539,-1.527,-3.593,1.555,-1.442,-3.815,1.585,-0.1848,-3.815,1.585,1.338,-3.815,1.585,1.413,-3.593,1.554,1.298,-1.986,1.54});
IndexedFaceSet68->setCoord(*Coordinate69);

CTextureCoordinate* TextureCoordinate70 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate70->setPoint(new float[154]{0.8159,0.2271,0.781,0.2271,0.7858,0.2412,0.8159,0.2408,0.7734,0.2271,0.7785,0.2421,0.7808,0.2271,0.7858,0.2412,0.8159,0.2271,0.8159,0.2408,0.8362,0.2274,0.84,0.2422,0.8363,0.2002,0.8159,0.2002,0.7804,0.2002,0.8159,0.2002,0.7714,0.2002,0.7805,0.2002,0.8299,0.1039,0.8095,0.1039,0.7742,0.1039,0.8095,0.1039,0.7656,0.1039,0.7744,0.1039,0.7972,0.2571,0.8159,0.2571,0.7893,0.2571,0.7968,0.2571,0.8159,0.2571,0.8399,0.2422,0.8323,0.2571,0.8321,0.2571,0.8428,0.2571,0.8551,0.2481,0.8079,0.0874,0.8299,0.1039,0.8275,0.2712,0.8343,0.2712,0.8271,0.2712,0.8157,0.2712,0.8019,0.2712,0.796,0.2712,0.8015,0.2712,0.8157,0.2712,0.8299,0.1039,0.8363,0.2274,0.8363,0.2002,0.8589,0.2435,0.8527,0.2337,0.8505,0.2254,0.8508,0.1997,0.8515,0.1961,0.8515,0.1961,0.8515,0.1961,0.8508,0.1997,0.8505,0.2254,0.8525,0.2337,0.8284,0.0874,0.8079,0.0874,0.7726,0.0874,0.8079,0.0874,0.764,0.0874,0.7728,0.0874,0.8284,0.0874,0.8284,0.0874,0.8299,0.1114,0.8095,0.1114,0.7741,0.1114,0.8095,0.1114,0.765,0.1114,0.7741,0.1114,0.8299,0.1114,0.8445,0.1108,0.8451,0.1072,0.8451,0.1072,0.8451,0.1072,0.8444,0.1108});
IndexedFaceSet68->setTexCoord(*TextureCoordinate70);

Shape64->setGeometry(IndexedFaceSet68);

Transform63->addChildren(*Shape64);

HAnimSegment62->addChildren(*Transform63);

HAnimJoint61->addChildren(*HAnimSegment62);

CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("l_metatarsophalangeal_2");
HAnimJoint71->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint71->setCenter(new float[3]{4.077,3.104,-0.9239});
HAnimJoint71->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment72 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment72->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment72->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
Transform73->setTranslation(new float[3]{4.077,3.104,-0.9239});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance75->setMaterial(*Material76);

CImageTexture* ImageTexture77 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture77->setUSE("RuTextureAtlas");
Appearance75->setTexture(*ImageTexture77);

Shape74->setAppearance(*Appearance75);

CIndexedFaceSet* IndexedFaceSet78 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet78->setCoordIndex(new int[408]{36,0,33,-1,1,35,33,-1,33,0,1,-1,34,35,1,-1,1,2,34,-1,5,39,42,-1,42,4,5,-1,25,31,18,-1,18,19,25,-1,32,25,19,-1,19,20,32,-1,36,41,26,-1,26,0,36,-1,22,21,31,-1,31,25,22,-1,23,22,25,-1,25,32,23,-1,41,39,5,-1,5,26,41,-1,7,6,2,-1,2,1,7,-1,8,7,1,-1,1,0,8,-1,9,10,4,-1,4,3,9,-1,10,11,5,-1,5,4,10,-1,6,27,24,-1,24,2,6,-1,28,8,0,-1,0,26,28,-1,27,9,3,-1,3,24,27,-1,11,28,26,-1,26,5,11,-1,13,12,6,-1,6,7,13,-1,12,29,27,-1,27,6,12,-1,14,13,7,-1,7,8,14,-1,30,14,8,-1,8,28,30,-1,15,16,10,-1,10,9,15,-1,29,15,9,-1,9,27,29,-1,17,30,28,-1,28,11,17,-1,16,17,11,-1,11,10,16,-1,19,18,12,-1,12,13,19,-1,18,31,29,-1,29,12,18,-1,20,19,13,-1,13,14,20,-1,32,20,14,-1,14,30,32,-1,21,22,16,-1,16,15,21,-1,31,21,15,-1,15,29,31,-1,23,32,30,-1,30,17,23,-1,22,23,17,-1,17,16,22,-1,37,2,24,-1,24,40,37,-1,40,24,3,-1,3,38,40,-1,38,3,4,-1,4,42,38,-1,34,2,37,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,46,50,52,-1,44,46,52,-1,44,52,43,-1,35,34,44,-1,44,43,35,-1,34,37,45,-1,45,44,34,-1,37,40,46,-1,46,45,37,-1,40,38,47,-1,47,46,40,-1,38,42,48,-1,48,47,38,-1,42,39,49,-1,49,48,42,-1,39,41,50,-1,50,49,39,-1,41,36,51,-1,51,50,41,-1,36,33,52,-1,52,51,36,-1,33,35,43,-1,43,52,33,-1});
IndexedFaceSet78->setCreaseAngle(1.57);
IndexedFaceSet78->setTexCoordIndex(new int[408]{0,1,2,-1,3,4,2,-1,2,1,3,-1,6,4,3,-1,3,5,6,-1,53,54,55,-1,55,7,53,-1,13,14,11,-1,11,12,13,-1,16,13,12,-1,12,15,16,-1,0,17,18,-1,18,1,0,-1,19,20,66,-1,66,65,19,-1,21,19,65,-1,65,67,21,-1,68,9,8,-1,8,69,68,-1,22,23,5,-1,5,3,22,-1,24,22,3,-1,3,1,24,-1,60,27,7,-1,7,59,60,-1,27,61,53,-1,53,7,27,-1,23,30,29,-1,29,5,23,-1,31,24,1,-1,1,18,31,-1,71,26,25,-1,25,70,71,-1,28,72,69,-1,69,8,28,-1,32,33,23,-1,23,22,32,-1,33,34,30,-1,30,23,33,-1,35,32,22,-1,22,24,35,-1,36,35,24,-1,24,31,36,-1,62,38,27,-1,27,60,62,-1,73,37,26,-1,26,71,73,-1,39,74,72,-1,72,28,39,-1,38,63,61,-1,61,27,38,-1,12,11,33,-1,33,32,12,-1,11,14,34,-1,34,33,11,-1,15,12,32,-1,32,35,15,-1,16,15,35,-1,35,36,16,-1,57,56,38,-1,38,62,57,-1,66,20,37,-1,37,73,66,-1,21,67,74,-1,74,39,21,-1,56,58,63,-1,63,38,56,-1,40,5,29,-1,29,41,40,-1,75,70,25,-1,25,42,75,-1,64,59,7,-1,7,55,64,-1,6,5,40,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,45,49,51,-1,43,45,51,-1,43,51,52,-1,4,6,43,-1,43,52,4,-1,6,40,44,-1,44,43,6,-1,40,41,45,-1,45,44,40,-1,75,42,77,-1,77,76,75,-1,42,10,78,-1,78,77,42,-1,10,9,79,-1,79,78,10,-1,9,68,80,-1,80,79,9,-1,17,0,50,-1,50,49,17,-1,0,2,51,-1,51,50,0,-1,2,4,52,-1,52,51,2,-1});
CCoordinate* Coordinate79 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate79->setPoint(new float[159]{-1.696,-0.8024,0.901,-0.1851,-0.1712,1.313,1.433,-0.8024,0.8928,1.585,-3.095,0.8819,-0.1851,-3.095,0.8819,-1.646,-3.095,0.8819,1.846,-1.229,2.182,-0.2812,-0.6275,2.435,-1.968,-1.229,2.184,2.007,-3.095,2.178,-0.1851,-3.095,2.178,-2.112,-3.095,2.178,1.931,-1.633,3.572,-0.2858,-1.142,3.845,-2.059,-1.633,3.562,2.148,-3.095,3.628,-0.1851,-3.095,3.628,-2.25,-3.095,3.628,1.486,-2.129,4.51,-0.2858,-1.597,4.893,-1.797,-2.129,4.446,1.781,-3.095,4.687,-0.2858,-3.095,5.256,-1.925,-3.095,4.687,1.772,-2.631,0.8819,-0.2858,-2.631,5.412,-1.857,-2.631,0.8819,2.223,-2.631,2.178,-2.293,-2.631,2.178,2.341,-2.631,3.628,-2.394,-2.631,3.628,1.84,-2.631,4.756,-2.017,-2.631,4.756,-1.52,-0.0134,0.0048,1.206,-0.0134,0.0061,-0.1851,0.3576,0.6662,-1.796,-0.9332,-0.1518,1.592,-0.9332,-0.1559,1.541,-3.095,-0.1518,-1.639,-3.095,-0.1518,1.708,-2.631,-0.1518,-1.82,-2.631,-0.1518,-0.1851,-3.095,-0.1518,-0.1828,0.0846,-0.6939,0.8905,-0.1781,-1.341,1.175,-0.8458,-1.468,1.281,-2.321,-1.412,1.245,-2.492,-1.394,-0.1856,-2.492,-1.394,-1.352,-2.492,-1.394,-1.398,-2.321,-1.412,-1.375,-0.8458,-1.468,-1.178,-0.1781,-1.341});
IndexedFaceSet78->setCoord(*Coordinate79);

CTextureCoordinate* TextureCoordinate80 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate80->setPoint(new float[162]{0.8363,0.2274,0.8605,0.2295,0.8399,0.2422,0.8699,0.2396,0.8551,0.2481,0.8603,0.2295,0.84,0.2422,0.852,0.0874,0.8536,0.1039,0.8299,0.1039,0.8299,0.1039,0.9432,0.2103,0.9472,0.2203,0.9665,0.2076,0.948,0.2019,0.9418,0.2099,0.948,0.2019,0.8363,0.2002,0.86,0.2002,0.9605,0.1109,0.9438,0.1056,0.9438,0.1056,0.8956,0.2323,0.8898,0.2227,0.8898,0.2227,0.8536,0.1039,0.8839,0.0983,0.8823,0.0818,0.8839,0.0983,0.86,0.2002,0.8902,0.1946,0.8902,0.1946,0.9211,0.2215,0.9191,0.2126,0.9212,0.1946,0.9189,0.2126,0.9212,0.1946,0.9185,0.0988,0.9169,0.0823,0.9185,0.0988,0.8362,0.2274,0.8363,0.2002,0.8299,0.1039,0.8091,0.2395,0.8062,0.2288,0.8075,0.2052,0.8079,0.2025,0.8079,0.2025,0.8079,0.2025,0.8075,0.2052,0.8062,0.2288,0.8091,0.2395,0.8239,0.2437,0.852,0.0874,0.8284,0.0874,0.8284,0.0874,0.9589,0.0944,0.9422,0.0891,0.9422,0.0891,0.852,0.0874,0.8823,0.0818,0.8823,0.0818,0.9169,0.0823,0.9169,0.0823,0.8284,0.0874,0.9602,0.1187,0.9416,0.113,0.9416,0.113,0.8299,0.1114,0.8536,0.1114,0.8536,0.1114,0.8839,0.1057,0.8839,0.1057,0.9149,0.1058,0.9149,0.1058,0.8299,0.1114,0.8011,0.1163,0.8015,0.1136,0.8015,0.1136,0.8015,0.1136,0.8011,0.1163});
IndexedFaceSet78->setTexCoord(*TextureCoordinate80);

Shape74->setGeometry(IndexedFaceSet78);

Transform73->addChildren(*Shape74);

HAnimSegment72->addChildren(*Transform73);

HAnimJoint71->addChildren(*HAnimSegment72);

HAnimJoint61->addChildren(*HAnimJoint71);

HAnimJoint51->addChildren(*HAnimJoint61);

HAnimJoint41->addChildren(*HAnimJoint51);

HAnimJoint31->addChildren(*HAnimJoint41);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setName("r_hip");
HAnimJoint81->setDEF("hanim_r_hip");
HAnimJoint81->setCenter(new float[3]{-3.602,33.740002,-1.967});
HAnimJoint81->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment82 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment82->setName("r_thigh");
HAnimSegment82->setDEF("hanim_r_thigh");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setTranslation(new float[3]{-3.602,33.740002,-1.967});
CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance85 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material86 = (CMaterial *)(m_pScene.createNode("Material"));
Material86->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance85->setMaterial(*Material86);

CImageTexture* ImageTexture87 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture87->setUSE("RuTextureAtlas");
Appearance85->setTexture(*ImageTexture87);

Shape84->setAppearance(*Appearance85);

CIndexedFaceSet* IndexedFaceSet88 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet88->setCoordIndex(new int[448]{47,48,2,-1,2,16,47,-1,1,0,15,-1,15,18,1,-1,2,1,18,-1,18,16,2,-1,4,3,19,-1,5,4,19,-1,19,20,5,-1,0,5,20,-1,20,15,0,-1,17,10,6,-1,6,14,17,-1,1,8,7,-1,7,0,1,-1,2,9,8,-1,8,1,2,-1,3,11,10,-1,10,17,3,-1,4,12,11,-1,11,3,4,-1,5,13,12,-1,12,4,5,-1,0,7,13,-1,13,5,0,-1,14,6,48,-1,10,39,45,-1,45,6,10,-1,8,37,36,-1,36,7,8,-1,9,38,37,-1,37,8,9,-1,10,11,40,-1,40,39,10,-1,11,12,41,-1,41,40,11,-1,12,13,42,-1,42,41,12,-1,13,7,36,-1,36,42,13,-1,6,45,38,-1,38,9,6,-1,15,20,49,-1,49,50,15,-1,18,15,50,-1,50,51,18,-1,16,18,51,-1,51,52,16,-1,47,16,52,-1,52,57,47,-1,17,14,53,-1,53,54,17,-1,3,17,54,-1,54,55,3,-1,19,3,55,-1,55,56,19,-1,19,56,49,-1,49,20,19,-1,22,30,29,-1,29,23,22,-1,23,29,31,-1,31,24,23,-1,24,31,44,-1,44,43,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,28,27,34,-1,34,35,28,-1,22,28,35,-1,35,30,22,-1,29,30,36,-1,36,37,29,-1,38,31,29,-1,29,37,38,-1,39,32,44,-1,44,45,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,34,41,-1,41,42,35,-1,30,35,42,-1,42,36,30,-1,44,32,25,-1,25,43,44,-1,45,44,31,-1,31,38,45,-1,23,46,22,-1,22,46,28,-1,28,46,27,-1,27,46,26,-1,26,46,25,-1,25,46,43,-1,43,46,24,-1,24,46,23,-1,47,57,53,-1,53,14,47,-1,48,47,14,-1,48,6,9,-1,9,2,48,-1,50,49,21,-1,51,50,21,-1,52,51,21,-1,57,52,21,-1,54,53,21,-1,55,54,21,-1,56,55,21,-1,49,56,21,-1,53,57,21,-1});
IndexedFaceSet88->setCreaseAngle(1.57);
IndexedFaceSet88->setTexCoordIndex(new int[448]{0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,2,4,5,-1,5,1,2,-1,8,10,9,-1,11,8,9,-1,9,12,11,-1,7,11,12,-1,12,6,7,-1,13,16,15,-1,15,14,13,-1,4,18,17,-1,17,7,4,-1,2,19,18,-1,18,4,2,-1,10,20,59,-1,59,58,10,-1,8,21,20,-1,20,10,8,-1,11,22,21,-1,21,8,11,-1,7,17,22,-1,22,11,7,-1,14,15,3,-1,16,24,23,-1,23,15,16,-1,18,26,25,-1,25,17,18,-1,19,27,26,-1,26,18,19,-1,59,20,28,-1,28,60,59,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,17,25,-1,25,30,22,-1,15,23,27,-1,27,19,15,-1,6,12,32,-1,32,31,6,-1,5,6,31,-1,31,33,5,-1,1,5,33,-1,33,34,1,-1,0,1,34,-1,34,35,0,-1,13,14,37,-1,37,36,13,-1,10,58,61,-1,61,38,10,-1,9,10,38,-1,38,39,9,-1,9,39,32,-1,32,12,9,-1,40,43,42,-1,42,41,40,-1,41,42,45,-1,45,44,41,-1,44,45,47,-1,47,46,44,-1,48,63,50,-1,50,49,48,-1,49,50,53,-1,53,52,49,-1,54,52,53,-1,53,55,54,-1,40,54,55,-1,55,43,40,-1,42,43,25,-1,25,26,42,-1,27,45,42,-1,42,26,27,-1,24,51,47,-1,47,23,24,-1,28,50,63,-1,63,60,28,-1,29,53,50,-1,50,28,29,-1,55,53,29,-1,29,30,55,-1,43,55,30,-1,30,25,43,-1,47,51,62,-1,62,46,47,-1,23,47,45,-1,45,27,23,-1,41,56,40,-1,40,56,54,-1,54,56,52,-1,52,56,49,-1,49,56,48,-1,62,56,46,-1,46,56,44,-1,44,56,41,-1,0,35,37,-1,37,14,0,-1,3,0,14,-1,3,15,19,-1,19,2,3,-1,31,32,57,-1,33,31,57,-1,34,33,57,-1,35,34,57,-1,36,37,57,-1,38,61,57,-1,39,38,57,-1,32,39,57,-1,37,35,57,-1});
CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setPoint(new float[174]{-2.85,0.184,-0.0877,-1.943,-0.0169,-2.625,-0.2938,-0.3737,-3.684,2.014,-0.4184,2.863,-0.4655,-0.1834,3.684,-2.292,0.0611,2.606,2.041,-2.804,-2.638,-2.889,-2.284,-0.1304,-2.106,-2.227,-2.528,-0.3997,-2.429,-3.492,2.615,-2.821,0.2779,2.01,-2.771,2.799,-0.4314,-2.557,3.503,-2.337,-2.353,2.596,2.689,-1.211,-1.912,-2.566,2.007,-0.2931,-0.1862,0.5185,-3.836,2.889,-1.234,0.2837,-1.7,1.054,-2.553,-0.5021,0.9112,3.721,-2.177,2.02,2.446,0.132,2.674,-0.0464,-2.493,-16.06,0.0189,-1.981,-16.06,-1.51,-0.4055,-16.06,-2.241,1.9,-16.06,0.0547,1.36,-16.06,1.631,-0.3864,-16.06,2.303,-1.984,-16.06,1.708,-1.905,-15.17,-1.72,-2.559,-15.17,0.0146,-0.4031,-15.17,-2.394,1.99,-15.17,0.1027,1.439,-15.17,1.844,-0.4264,-15.17,2.502,-1.942,-15.17,1.869,-2.807,-8.352,-0.0819,-2.112,-8.429,-2.226,-0.3241,-8.502,-3.114,2.308,-8.699,0.145,1.8,-8.657,2.285,-0.3885,-8.574,3.097,-2.326,-8.409,2.335,1.392,-16.06,-1.493,1.465,-15.17,-1.629,1.871,-8.695,-2.153,-0.3229,-16.55,0.0433,1.798,-0.2819,-3.275,1.755,-0.7534,-3.133,-1.182,2.698,1.952,-1.563,2.686,-0.6893,-0.6494,2.081,-2.868,-0.0109,1.733,-3.589,2.44,0.3902,-1.735,2.489,0.4031,0.3834,1.958,0.7621,2.871,-0.2562,2.428,3.694,1.75,1.174,-3.179});
IndexedFaceSet88->setCoord(*Coordinate89);

CTextureCoordinate* TextureCoordinate90 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate90->setPoint(new float[128]{0.6973,0.5621,0.6732,0.5606,0.6756,0.5519,0.6995,0.5558,0.6514,0.5517,0.651,0.5639,0.6265,0.5674,0.6243,0.5513,0.5714,0.5516,0.5801,0.5716,0.5399,0.5593,0.5961,0.5491,0.6012,0.5661,0.7333,0.5682,0.7145,0.5596,0.7098,0.5282,0.7413,0.5299,0.6253,0.5254,0.653,0.5279,0.6771,0.5279,0.5348,0.5231,0.5674,0.5231,0.5944,0.524,0.7049,0.442,0.7293,0.4364,0.6272,0.4503,0.6521,0.4495,0.6763,0.4477,0.5451,0.4382,0.5738,0.4439,0.5999,0.4487,0.6315,0.5952,0.6081,0.5939,0.6539,0.5942,0.6605,0.5859,0.6782,0.5885,0.7019,0.6058,0.6914,0.5906,0.5618,0.5888,0.595,0.5899,0.6258,0.3561,0.636,0.3553,0.6403,0.3637,0.6255,0.3643,0.6483,0.35,0.6552,0.3607,0.6618,0.3404,0.6747,0.3534,0.5858,0.3255,0.5913,0.338,0.5779,0.3505,0.6892,0.3432,0.6036,0.3477,0.5961,0.3584,0.6143,0.3548,0.61,0.3628,0.6267,0.3323,0.6238,0.6177,0.5128,0.5646,0.5065,0.5242,0.5221,0.4313,0.545,0.6041,0.6679,0.3286,0.5641,0.3396});
IndexedFaceSet88->setTexCoord(*TextureCoordinate90);

Shape84->setGeometry(IndexedFaceSet88);

Transform83->addChildren(*Shape84);

HAnimSegment82->addChildren(*Transform83);

HAnimJoint81->addChildren(*HAnimSegment82);

CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setName("r_knee");
HAnimJoint91->setDEF("hanim_r_knee");
HAnimJoint91->setCenter(new float[3]{-3.931,18.23,-1.935});
HAnimJoint91->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment92 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment92->setName("r_calf");
HAnimSegment92->setDEF("hanim_r_calf");
CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{-3.931,18.23,-1.935});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance95 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material96 = (CMaterial *)(m_pScene.createNode("Material"));
Material96->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance95->setMaterial(*Material96);

CImageTexture* ImageTexture97 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture97->setUSE("RuTextureAtlas");
Appearance95->setTexture(*ImageTexture97);

Shape94->setAppearance(*Appearance95);

CIndexedFaceSet* IndexedFaceSet98 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet98->setCoordIndex(new int[320]{32,0,1,-1,1,38,32,-1,33,2,0,-1,0,32,33,-1,34,3,14,-1,14,39,34,-1,35,4,3,-1,3,34,35,-1,5,4,35,-1,35,36,5,-1,6,5,36,-1,36,37,6,-1,1,6,37,-1,37,38,1,-1,24,25,8,-1,8,7,24,-1,26,9,8,-1,8,25,26,-1,15,31,27,-1,27,10,15,-1,11,10,27,-1,27,28,11,-1,12,11,28,-1,28,29,12,-1,13,12,29,-1,29,30,13,-1,24,7,13,-1,13,30,24,-1,9,15,20,-1,20,18,9,-1,31,15,9,-1,9,26,31,-1,8,16,17,-1,17,7,8,-1,9,18,16,-1,16,8,9,-1,19,20,15,-1,15,10,19,-1,21,19,10,-1,10,11,21,-1,22,21,11,-1,11,12,22,-1,23,22,12,-1,12,13,23,-1,7,17,23,-1,23,13,7,-1,33,18,20,-1,20,39,33,-1,16,32,38,-1,38,17,16,-1,18,33,32,-1,32,16,18,-1,19,34,39,-1,39,20,19,-1,35,34,19,-1,19,21,35,-1,36,35,21,-1,21,22,36,-1,37,36,22,-1,22,23,37,-1,38,37,23,-1,23,17,38,-1,2,33,39,-1,39,14,2,-1,24,40,25,-1,25,40,26,-1,26,40,31,-1,31,40,27,-1,27,40,28,-1,28,40,29,-1,29,40,30,-1,30,40,24,-1,0,41,1,-1,1,41,6,-1,6,41,5,-1,5,41,4,-1,4,41,3,-1,3,41,14,-1,14,41,2,-1,2,41,0,-1});
IndexedFaceSet98->setCreaseAngle(1.57);
IndexedFaceSet98->setTexCoordIndex(new int[320]{1,0,3,-1,3,2,1,-1,5,4,0,-1,0,1,5,-1,7,6,9,-1,9,8,7,-1,11,10,42,-1,42,43,11,-1,12,10,11,-1,11,13,12,-1,14,12,13,-1,13,15,14,-1,3,14,15,-1,15,2,3,-1,18,17,16,-1,16,19,18,-1,21,20,16,-1,16,17,21,-1,24,23,22,-1,22,25,24,-1,26,45,44,-1,44,27,26,-1,28,26,27,-1,27,29,28,-1,30,28,29,-1,29,31,30,-1,18,19,30,-1,30,31,18,-1,20,24,33,-1,33,32,20,-1,23,24,20,-1,20,21,23,-1,16,34,35,-1,35,19,16,-1,20,32,34,-1,34,16,20,-1,36,33,24,-1,24,25,36,-1,37,46,45,-1,45,26,37,-1,38,37,26,-1,26,28,38,-1,39,38,28,-1,28,30,39,-1,19,35,39,-1,39,30,19,-1,5,32,33,-1,33,8,5,-1,34,1,2,-1,2,35,34,-1,32,5,1,-1,1,34,32,-1,36,7,8,-1,8,33,36,-1,11,43,46,-1,46,37,11,-1,13,11,37,-1,37,38,13,-1,15,13,38,-1,38,39,15,-1,2,15,39,-1,39,35,2,-1,4,5,8,-1,8,9,4,-1,18,40,17,-1,17,40,21,-1,21,40,23,-1,23,40,22,-1,44,40,27,-1,27,40,29,-1,29,40,31,-1,31,40,18,-1,0,41,3,-1,3,41,14,-1,14,41,12,-1,12,41,10,-1,10,41,42,-1,6,41,9,-1,9,41,4,-1,4,41,0,-1});
CCoordinate* Coordinate99 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate99->setPoint(new float[126]{-1.182,-14.56,-1.091,-1.553,-14.56,-0.1072,0.017,-14.56,-1.525,1.457,-14.56,0.0005,1.094,-14.56,1.145,0.0351,-14.56,1.587,-1.152,-14.56,1.015,-2.207,-0.1521,-0.0163,-1.741,-0.1513,-1.643,-0.0996,-0.1509,-2.309,2.273,-0.1521,-0.0254,1.777,-0.153,1.747,-0.0533,-0.1533,2.309,-1.78,-0.153,1.71,1.127,-14.56,-1.093,1.751,-0.1513,-1.552,-1.478,-6.77,-1.405,-2.057,-6.579,0.0221,-0.0355,-7.09,-2.115,2.021,-7.528,-0.1026,1.592,-7.4,-1.399,1.559,-7.392,1.458,-0.0464,-7.091,2.044,-1.588,-6.828,1.431,-2.162,0.6392,-0.0205,-1.659,0.6662,-1.561,-0.1032,0.6473,-2.279,2.22,0.6402,0.0258,1.673,0.6576,1.57,-0.0642,0.6305,2.263,-1.651,0.6333,1.643,1.706,0.6436,-1.513,-1.251,-13.99,-1.252,0.0065,-13.99,-1.806,1.765,-13.99,-0.0246,1.337,-13.99,1.25,0.0302,-13.99,1.876,-1.35,-13.99,1.226,-1.865,-13.99,-0.0781,1.425,-13.99,-1.381,-0.0589,1.002,0.1259,-0.0075,-14.75,-0.0616});
IndexedFaceSet98->setCoord(*Coordinate99);

CTextureCoordinate* TextureCoordinate100 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate100->setPoint(new float[94]{0.6463,0.046,0.6495,0.0509,0.6387,0.0526,0.6389,0.0477,0.6574,0.0396,0.6629,0.0479,0.6737,0.0226,0.6912,0.036,0.6786,0.0436,0.6681,0.033,0.6077,0.0348,0.5971,0.0443,0.617,0.0409,0.6118,0.0489,0.6293,0.0459,0.6272,0.0516,0.6536,0.2562,0.6522,0.265,0.6412,0.2644,0.6406,0.2561,0.6708,0.2596,0.6649,0.2701,0.687,0.2926,0.6797,0.28,0.6919,0.2662,0.7071,0.2736,0.5893,0.2674,0.6011,0.2817,0.6093,0.2616,0.616,0.2723,0.6268,0.257,0.6285,0.2656,0.6804,0.1534,0.7038,0.1483,0.6596,0.1586,0.6418,0.1619,0.72,0.1456,0.5782,0.1504,0.6015,0.1548,0.6244,0.1586,0.6394,0.2899,0.6382,0.0267,0.6022,0.024,0.5845,0.0373,0.5928,0.2944,0.5718,0.2758,0.5583,0.1475});
IndexedFaceSet98->setTexCoord(*TextureCoordinate100);

Shape94->setGeometry(IndexedFaceSet98);

Transform93->addChildren(*Shape94);

HAnimSegment92->addChildren(*Transform93);

HAnimJoint91->addChildren(*HAnimSegment92);

CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setName("r_talocrural");
HAnimJoint101->setDEF("hanim_r_talocrural");
HAnimJoint101->setCenter(new float[3]{-4.077,4.031,-1.998});
HAnimJoint101->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment102->setName("r_talus");
HAnimSegment102->setDEF("hanim_r_talus");
CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setTranslation(new float[3]{-4.077,4.031,-1.998});
CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material106 = (CMaterial *)(m_pScene.createNode("Material"));
Material106->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance105->setMaterial(*Material106);

CImageTexture* ImageTexture107 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture107->setUSE("RuTextureAtlas");
Appearance105->setTexture(*ImageTexture107);

Shape104->setAppearance(*Appearance105);

CIndexedFaceSet* IndexedFaceSet108 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet108->setCoordIndex(new int[440]{0,16,10,-1,10,1,0,-1,2,1,10,-1,10,11,2,-1,3,2,11,-1,11,12,3,-1,4,3,12,-1,12,13,4,-1,41,15,16,-1,16,0,41,-1,0,18,44,-1,44,41,0,-1,17,3,4,-1,4,19,17,-1,20,2,3,-1,3,17,20,-1,21,1,2,-1,2,20,21,-1,18,0,1,-1,1,21,18,-1,18,6,42,-1,42,44,18,-1,8,17,19,-1,19,7,8,-1,23,20,17,-1,17,8,23,-1,9,21,20,-1,20,23,9,-1,6,18,21,-1,21,9,6,-1,10,16,26,-1,26,24,10,-1,11,10,24,-1,24,25,11,-1,12,11,25,-1,25,27,12,-1,13,12,27,-1,27,28,13,-1,5,14,13,-1,13,28,5,-1,30,15,39,-1,39,29,30,-1,26,16,15,-1,15,30,26,-1,8,7,22,-1,22,23,8,-1,9,23,22,-1,22,6,9,-1,6,22,46,-1,46,42,6,-1,31,38,37,-1,37,36,35,-1,31,37,35,-1,35,34,33,-1,31,35,33,-1,32,31,33,-1,28,31,32,-1,32,5,28,-1,5,32,33,-1,33,29,5,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,26,30,-1,26,35,36,-1,36,24,26,-1,24,36,37,-1,37,25,24,-1,25,37,38,-1,38,27,25,-1,27,38,31,-1,31,28,27,-1,39,14,5,-1,5,29,39,-1,7,43,46,-1,46,22,7,-1,4,40,45,-1,45,19,4,-1,19,45,43,-1,43,7,19,-1,4,13,14,-1,14,40,4,-1,48,47,56,-1,48,56,55,-1,55,54,53,-1,55,53,52,-1,48,55,52,-1,52,51,50,-1,48,52,50,-1,48,50,49,-1,15,47,48,-1,48,39,15,-1,39,48,49,-1,49,14,39,-1,14,49,50,-1,50,40,14,-1,40,50,51,-1,51,45,40,-1,45,51,52,-1,52,43,45,-1,43,52,53,-1,53,46,43,-1,46,53,54,-1,54,42,46,-1,42,54,55,-1,55,44,42,-1,44,55,56,-1,56,41,44,-1,41,56,47,-1,47,15,41,-1});
IndexedFaceSet108->setCreaseAngle(1.57);
IndexedFaceSet108->setTexCoordIndex(new int[440]{0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,6,4,5,-1,5,7,6,-1,8,6,7,-1,7,9,8,-1,10,11,3,-1,3,0,10,-1,0,13,12,-1,12,10,0,-1,14,6,8,-1,8,15,14,-1,16,4,6,-1,6,14,16,-1,17,1,4,-1,4,16,17,-1,13,0,1,-1,1,17,13,-1,66,19,18,-1,18,65,66,-1,20,67,68,-1,68,21,20,-1,22,69,67,-1,67,20,22,-1,23,70,69,-1,69,22,23,-1,19,66,70,-1,70,23,19,-1,2,3,25,-1,25,24,2,-1,5,2,24,-1,24,26,5,-1,7,5,26,-1,26,27,7,-1,9,7,27,-1,27,28,9,-1,30,29,9,-1,9,28,30,-1,31,11,33,-1,33,32,31,-1,25,3,11,-1,11,31,25,-1,59,60,34,-1,34,61,59,-1,62,61,34,-1,34,58,62,-1,58,34,63,-1,63,57,58,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,39,38,37,-1,43,39,37,-1,36,43,37,-1,28,43,36,-1,36,30,28,-1,30,36,37,-1,37,32,30,-1,32,37,38,-1,38,31,32,-1,31,38,39,-1,39,25,31,-1,25,39,40,-1,40,24,25,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,28,27,-1,33,29,30,-1,30,32,33,-1,60,64,63,-1,63,34,60,-1,8,45,46,-1,46,15,8,-1,68,71,44,-1,44,21,68,-1,8,9,29,-1,29,45,8,-1,47,56,55,-1,47,55,54,-1,54,53,52,-1,54,52,51,-1,47,54,51,-1,51,50,49,-1,47,51,49,-1,47,49,48,-1,11,56,47,-1,47,33,11,-1,33,47,48,-1,48,29,33,-1,29,48,49,-1,49,45,29,-1,45,49,50,-1,50,46,45,-1,71,72,73,-1,73,44,71,-1,44,73,74,-1,74,35,44,-1,35,74,75,-1,75,18,35,-1,18,75,76,-1,76,65,18,-1,12,54,55,-1,55,10,12,-1,10,55,56,-1,56,11,10,-1});
CCoordinate* Coordinate109 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate109->setPoint(new float[171]{-1.731,-1.878,0.029,-1.222,-1.878,-1.495,0.1851,-1.878,-1.825,1.363,-1.878,-1.501,1.883,-1.878,0.029,0.9249,-0.0082,0.7476,-1.502,-4.021,0.029,1.633,-4.021,0.029,1.266,-4.021,-1.51,-1.131,-4.021,-1.504,-0.9183,-1.002,-1.283,0.1851,-0.9421,-1.604,1.202,-0.9993,-1.283,1.721,-1.025,0.029,1.52,-0.9401,1.079,-1.206,-0.9401,1.08,-1.395,-1.025,0.029,1.383,-3.557,-1.518,-1.652,-3.557,0.029,1.788,-3.557,0.029,0.1851,-3.557,-1.914,-1.246,-3.557,-1.516,0.1851,-4.021,0.029,0.1851,-4.021,-1.886,-0.6003,-0.0082,-0.7875,0.1851,-0.0082,-1.132,-1.019,-0.0082,0.029,0.8784,-0.0082,-0.8046,1.274,-0.0082,0.029,0.1851,-0.0082,1.203,-0.6064,-0.0082,0.7351,0.9328,0.8725,0.0232,0.6695,0.8725,0.538,0.1788,0.8725,0.8317,-0.3605,0.8725,0.5208,-0.6667,0.8725,0.0213,-0.3805,0.8725,-0.5818,0.1786,0.8725,-0.8408,0.657,0.8725,-0.6004,0.1851,-0.5691,1.74,1.796,-1.86,0.9221,-1.592,-1.86,0.9179,-1.541,-4.021,0.9221,1.639,-4.021,0.9221,-1.708,-3.557,0.9221,1.82,-3.557,0.9221,0.1851,-4.021,0.9221,-1.084,-1.469,1.63,0.4507,-0.8535,1.908,1.352,-1.469,1.635,1.508,-1.986,1.539,1.527,-3.593,1.555,1.442,-3.815,1.585,0.1848,-3.815,1.585,-1.338,-3.815,1.585,-1.413,-3.593,1.554,-1.298,-1.986,1.54});
IndexedFaceSet108->setCoord(*Coordinate109);

CTextureCoordinate* TextureCoordinate110 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate110->setPoint(new float[154]{0.8159,0.2271,0.781,0.2271,0.7858,0.2412,0.8159,0.2408,0.7734,0.2271,0.7785,0.2421,0.7808,0.2271,0.7858,0.2412,0.8159,0.2271,0.8159,0.2408,0.8362,0.2274,0.84,0.2422,0.8363,0.2002,0.8159,0.2002,0.7804,0.2002,0.8159,0.2002,0.7714,0.2002,0.7805,0.2002,0.8299,0.1039,0.8095,0.1039,0.7742,0.1039,0.8095,0.1039,0.7656,0.1039,0.7744,0.1039,0.7972,0.2571,0.8159,0.2571,0.7893,0.2571,0.7968,0.2571,0.8159,0.2571,0.8399,0.2422,0.8323,0.2571,0.8321,0.2571,0.8428,0.2571,0.8551,0.2481,0.8079,0.0874,0.8299,0.1039,0.8275,0.2712,0.8343,0.2712,0.8271,0.2712,0.8157,0.2712,0.8019,0.2712,0.796,0.2712,0.8015,0.2712,0.8157,0.2712,0.8299,0.1039,0.8363,0.2274,0.8363,0.2002,0.8589,0.2435,0.8527,0.2337,0.8505,0.2254,0.8508,0.1997,0.8515,0.1961,0.8515,0.1961,0.8515,0.1961,0.8508,0.1997,0.8505,0.2254,0.8525,0.2337,0.8284,0.0874,0.8079,0.0874,0.7726,0.0874,0.8079,0.0874,0.764,0.0874,0.7728,0.0874,0.8284,0.0874,0.8284,0.0874,0.8299,0.1114,0.8095,0.1114,0.7741,0.1114,0.8095,0.1114,0.765,0.1114,0.7741,0.1114,0.8299,0.1114,0.8445,0.1108,0.8451,0.1072,0.8451,0.1072,0.8451,0.1072,0.8444,0.1108});
IndexedFaceSet108->setTexCoord(*TextureCoordinate110);

Shape104->setGeometry(IndexedFaceSet108);

Transform103->addChildren(*Shape104);

HAnimSegment102->addChildren(*Transform103);

HAnimJoint101->addChildren(*HAnimSegment102);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("r_metatarsophalangeal_2");
HAnimJoint111->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint111->setCenter(new float[3]{-4.077,3.104,-0.9239});
HAnimJoint111->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment112->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment112->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setTranslation(new float[3]{-4.077,3.104,-0.9239});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance115 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material116 = (CMaterial *)(m_pScene.createNode("Material"));
Material116->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance115->setMaterial(*Material116);

CImageTexture* ImageTexture117 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture117->setUSE("RuTextureAtlas");
Appearance115->setTexture(*ImageTexture117);

Shape114->setAppearance(*Appearance115);

CIndexedFaceSet* IndexedFaceSet118 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet118->setCoordIndex(new int[408]{36,33,0,-1,1,0,33,-1,33,35,1,-1,34,2,1,-1,1,35,34,-1,5,4,42,-1,42,39,5,-1,25,19,18,-1,18,31,25,-1,32,20,19,-1,19,25,32,-1,36,0,26,-1,26,41,36,-1,22,25,31,-1,31,21,22,-1,23,32,25,-1,25,22,23,-1,41,26,5,-1,5,39,41,-1,7,1,2,-1,2,6,7,-1,8,0,1,-1,1,7,8,-1,9,3,4,-1,4,10,9,-1,10,4,5,-1,5,11,10,-1,6,2,24,-1,24,27,6,-1,28,26,0,-1,0,8,28,-1,27,24,3,-1,3,9,27,-1,11,5,26,-1,26,28,11,-1,13,7,6,-1,6,12,13,-1,12,6,27,-1,27,29,12,-1,14,8,7,-1,7,13,14,-1,30,28,8,-1,8,14,30,-1,15,9,10,-1,10,16,15,-1,29,27,9,-1,9,15,29,-1,17,11,28,-1,28,30,17,-1,16,10,11,-1,11,17,16,-1,19,13,12,-1,12,18,19,-1,18,12,29,-1,29,31,18,-1,20,14,13,-1,13,19,20,-1,32,30,14,-1,14,20,32,-1,21,15,16,-1,16,22,21,-1,31,29,15,-1,15,21,31,-1,23,17,30,-1,30,32,23,-1,22,16,17,-1,17,23,22,-1,37,40,24,-1,24,2,37,-1,40,38,3,-1,3,24,40,-1,38,42,4,-1,4,3,38,-1,34,37,2,-1,44,43,52,-1,52,51,50,-1,50,49,48,-1,48,47,46,-1,50,48,46,-1,52,50,46,-1,44,52,46,-1,44,46,45,-1,35,43,44,-1,44,34,35,-1,34,44,45,-1,45,37,34,-1,37,45,46,-1,46,40,37,-1,40,46,47,-1,47,38,40,-1,38,47,48,-1,48,42,38,-1,42,48,49,-1,49,39,42,-1,39,49,50,-1,50,41,39,-1,41,50,51,-1,51,36,41,-1,36,51,52,-1,52,33,36,-1,33,52,43,-1,43,35,33,-1});
IndexedFaceSet118->setCreaseAngle(1.57);
IndexedFaceSet118->setTexCoordIndex(new int[408]{0,2,1,-1,3,1,2,-1,2,4,3,-1,6,5,3,-1,3,4,6,-1,53,7,55,-1,55,54,53,-1,13,12,11,-1,11,14,13,-1,16,15,12,-1,12,13,16,-1,0,1,18,-1,18,17,0,-1,19,65,66,-1,66,20,19,-1,21,67,65,-1,65,19,21,-1,68,69,8,-1,8,9,68,-1,22,3,5,-1,5,23,22,-1,24,1,3,-1,3,22,24,-1,60,59,7,-1,7,27,60,-1,27,7,53,-1,53,61,27,-1,23,5,29,-1,29,30,23,-1,31,18,1,-1,1,24,31,-1,71,70,25,-1,25,26,71,-1,28,8,69,-1,69,72,28,-1,32,22,23,-1,23,33,32,-1,33,23,30,-1,30,34,33,-1,35,24,22,-1,22,32,35,-1,36,31,24,-1,24,35,36,-1,62,60,27,-1,27,38,62,-1,73,71,26,-1,26,37,73,-1,39,28,72,-1,72,74,39,-1,38,27,61,-1,61,63,38,-1,12,32,33,-1,33,11,12,-1,11,33,34,-1,34,14,11,-1,15,35,32,-1,32,12,15,-1,16,36,35,-1,35,15,16,-1,57,62,38,-1,38,56,57,-1,66,73,37,-1,37,20,66,-1,21,39,74,-1,74,67,21,-1,56,38,63,-1,63,58,56,-1,40,41,29,-1,29,5,40,-1,75,42,25,-1,25,70,75,-1,64,55,7,-1,7,59,64,-1,6,40,5,-1,43,52,51,-1,51,50,49,-1,49,48,47,-1,47,46,45,-1,49,47,45,-1,51,49,45,-1,43,51,45,-1,43,45,44,-1,4,52,43,-1,43,6,4,-1,6,43,44,-1,44,40,6,-1,40,44,45,-1,45,41,40,-1,75,76,77,-1,77,42,75,-1,42,77,78,-1,78,10,42,-1,10,78,79,-1,79,9,10,-1,9,79,80,-1,80,68,9,-1,17,49,50,-1,50,0,17,-1,0,50,51,-1,51,2,0,-1,2,51,52,-1,52,4,2,-1});
CCoordinate* Coordinate119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate119->setPoint(new float[159]{1.696,-0.8024,0.901,0.1851,-0.1712,1.313,-1.433,-0.8024,0.8928,-1.585,-3.095,0.8819,0.1851,-3.095,0.8819,1.646,-3.095,0.8819,-1.846,-1.229,2.182,0.2812,-0.6275,2.435,1.968,-1.229,2.184,-2.007,-3.095,2.178,0.1851,-3.095,2.178,2.112,-3.095,2.178,-1.931,-1.633,3.572,0.2858,-1.142,3.845,2.059,-1.633,3.562,-2.148,-3.095,3.628,0.1851,-3.095,3.628,2.25,-3.095,3.628,-1.486,-2.129,4.51,0.2858,-1.597,4.893,1.797,-2.129,4.446,-1.781,-3.095,4.687,0.2858,-3.095,5.256,1.925,-3.095,4.687,-1.772,-2.631,0.8819,0.2858,-2.631,5.412,1.857,-2.631,0.8819,-2.223,-2.631,2.178,2.293,-2.631,2.178,-2.341,-2.631,3.628,2.394,-2.631,3.628,-1.84,-2.631,4.756,2.017,-2.631,4.756,1.52,-0.0134,0.0048,-1.206,-0.0134,0.0061,0.1851,0.3576,0.6662,1.796,-0.9332,-0.1518,-1.592,-0.9332,-0.1559,-1.541,-3.095,-0.1518,1.639,-3.095,-0.1518,-1.708,-2.631,-0.1518,1.82,-2.631,-0.1518,0.1851,-3.095,-0.1518,0.1828,0.0846,-0.6939,-0.8905,-0.1781,-1.341,-1.175,-0.8458,-1.468,-1.281,-2.321,-1.412,-1.245,-2.492,-1.394,0.1856,-2.492,-1.394,1.352,-2.492,-1.394,1.398,-2.321,-1.412,1.375,-0.8458,-1.468,1.178,-0.1781,-1.341});
IndexedFaceSet118->setCoord(*Coordinate119);

CTextureCoordinate* TextureCoordinate120 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate120->setPoint(new float[162]{0.8363,0.2274,0.8605,0.2295,0.8399,0.2422,0.8699,0.2396,0.8551,0.2481,0.8603,0.2295,0.84,0.2422,0.852,0.0874,0.8536,0.1039,0.8299,0.1039,0.8299,0.1039,0.9432,0.2103,0.9472,0.2203,0.9665,0.2076,0.948,0.2019,0.9418,0.2099,0.948,0.2019,0.8363,0.2002,0.86,0.2002,0.9605,0.1109,0.9438,0.1056,0.9438,0.1056,0.8956,0.2323,0.8898,0.2227,0.8898,0.2227,0.8536,0.1039,0.8839,0.0983,0.8823,0.0818,0.8839,0.0983,0.86,0.2002,0.8902,0.1946,0.8902,0.1946,0.9211,0.2215,0.9191,0.2126,0.9212,0.1946,0.9189,0.2126,0.9212,0.1946,0.9185,0.0988,0.9169,0.0823,0.9185,0.0988,0.8362,0.2274,0.8363,0.2002,0.8299,0.1039,0.8091,0.2395,0.8062,0.2288,0.8075,0.2052,0.8079,0.2025,0.8079,0.2025,0.8079,0.2025,0.8075,0.2052,0.8062,0.2288,0.8091,0.2395,0.8239,0.2437,0.852,0.0874,0.8284,0.0874,0.8284,0.0874,0.9589,0.0944,0.9422,0.0891,0.9422,0.0891,0.852,0.0874,0.8823,0.0818,0.8823,0.0818,0.9169,0.0823,0.9169,0.0823,0.8284,0.0874,0.9602,0.1187,0.9416,0.113,0.9416,0.113,0.8299,0.1114,0.8536,0.1114,0.8536,0.1114,0.8839,0.1057,0.8839,0.1057,0.9149,0.1058,0.9149,0.1058,0.8299,0.1114,0.8011,0.1163,0.8015,0.1136,0.8015,0.1136,0.8015,0.1136,0.8011,0.1163});
IndexedFaceSet118->setTexCoord(*TextureCoordinate120);

Shape114->setGeometry(IndexedFaceSet118);

Transform113->addChildren(*Shape114);

HAnimSegment112->addChildren(*Transform113);

HAnimJoint111->addChildren(*HAnimSegment112);

HAnimJoint101->addChildren(*HAnimJoint111);

HAnimJoint91->addChildren(*HAnimJoint101);

HAnimJoint81->addChildren(*HAnimJoint91);

HAnimJoint31->addChildren(*HAnimJoint81);

CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("sacroiliac");
HAnimJoint121->setDEF("hanim_sacroiliac");
HAnimJoint121->setCenter(new float[3]{0,32.209999,-2.058});
HAnimJoint121->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment122 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment122->setName("pelvis");
HAnimSegment122->setDEF("hanim_pelvis");
CTransform* Transform123 = (CTransform *)(m_pScene.createNode("Transform"));
Transform123->setTranslation(new float[3]{0,32.209999,-2.058});
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance125->setMaterial(*Material126);

CImageTexture* ImageTexture127 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture127->setUSE("RuTextureAtlas");
Appearance125->setTexture(*ImageTexture127);

Shape124->setAppearance(*Appearance125);

CIndexedFaceSet* IndexedFaceSet128 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet128->setCoordIndex(new int[544]{18,0,6,-1,6,8,18,-1,30,31,10,-1,10,12,30,-1,14,5,3,-1,3,12,14,-1,15,8,6,-1,6,1,15,-1,19,48,22,-1,22,2,19,-1,18,20,4,-1,4,0,18,-1,14,12,10,-1,15,1,5,-1,5,14,15,-1,9,16,19,-1,19,20,9,-1,11,33,55,-1,55,7,11,-1,7,55,57,-1,57,17,7,-1,16,58,48,-1,48,19,16,-1,13,9,20,-1,20,18,13,-1,2,4,20,-1,20,19,2,-1,8,13,18,-1,8,15,21,-1,15,14,21,-1,14,10,21,-1,10,11,21,-1,11,7,21,-1,7,17,21,-1,17,16,9,-1,9,13,21,-1,13,8,21,-1,17,57,58,-1,58,16,17,-1,12,3,61,-1,61,30,12,-1,11,10,31,-1,31,33,11,-1,3,24,34,-1,34,61,3,-1,0,29,23,-1,23,6,0,-1,5,25,24,-1,24,3,5,-1,1,26,25,-1,25,5,1,-1,1,6,23,-1,23,26,1,-1,2,22,32,-1,32,27,2,-1,4,2,27,-1,27,28,4,-1,0,4,28,-1,28,29,0,-1,24,69,34,-1,29,69,23,-1,25,69,24,-1,26,69,25,-1,23,69,26,-1,32,69,27,-1,27,69,28,-1,28,69,29,-1,9,21,17,-1,35,38,37,-1,37,36,35,-1,30,39,40,-1,40,31,30,-1,41,39,43,-1,43,42,41,-1,45,44,37,-1,37,38,45,-1,47,46,22,-1,22,48,47,-1,35,36,50,-1,50,49,35,-1,41,40,39,-1,45,41,42,-1,42,44,45,-1,51,49,47,-1,47,52,51,-1,54,53,55,-1,55,33,54,-1,53,56,57,-1,57,55,53,-1,52,47,48,-1,48,58,52,-1,59,35,49,-1,49,51,59,-1,46,47,49,-1,49,50,46,-1,38,35,59,-1,38,60,45,-1,45,60,41,-1,41,60,40,-1,40,60,54,-1,54,60,53,-1,53,60,56,-1,56,51,52,-1,51,60,59,-1,59,60,38,-1,56,52,58,-1,58,57,56,-1,39,30,61,-1,61,43,39,-1,54,33,31,-1,31,40,54,-1,43,61,34,-1,34,62,43,-1,36,37,64,-1,64,63,36,-1,42,43,62,-1,62,65,42,-1,44,42,65,-1,65,66,44,-1,44,66,64,-1,64,37,44,-1,46,67,32,-1,32,22,46,-1,50,68,67,-1,67,46,50,-1,36,63,68,-1,68,50,36,-1,62,34,69,-1,63,64,69,-1,65,62,69,-1,66,65,69,-1,64,66,69,-1,32,67,69,-1,67,68,69,-1,68,63,69,-1,51,56,60,-1});
IndexedFaceSet128->setCreaseAngle(1.57);
IndexedFaceSet128->setTexCoordIndex(new int[544]{0,1,2,-1,2,3,0,-1,5,6,7,-1,7,4,5,-1,8,9,10,-1,10,4,8,-1,12,3,2,-1,2,11,12,-1,14,15,16,-1,16,13,14,-1,0,17,18,-1,18,1,0,-1,8,4,7,-1,12,11,9,-1,9,8,12,-1,19,20,14,-1,14,17,19,-1,22,23,24,-1,24,21,22,-1,21,24,26,-1,26,25,21,-1,20,27,15,-1,15,14,20,-1,28,19,17,-1,17,0,28,-1,13,18,17,-1,17,14,13,-1,3,28,0,-1,3,12,29,-1,12,8,29,-1,8,7,29,-1,7,22,29,-1,22,21,29,-1,21,25,29,-1,25,20,19,-1,19,28,29,-1,28,3,29,-1,25,26,27,-1,27,20,25,-1,4,10,30,-1,30,5,4,-1,22,7,6,-1,6,23,22,-1,10,31,32,-1,32,30,10,-1,1,33,34,-1,34,2,1,-1,9,35,31,-1,31,10,9,-1,11,36,35,-1,35,9,11,-1,11,2,34,-1,34,36,11,-1,13,16,37,-1,37,38,13,-1,18,13,38,-1,38,39,18,-1,1,18,39,-1,39,33,1,-1,31,40,32,-1,33,40,34,-1,35,40,31,-1,36,40,35,-1,34,40,36,-1,37,40,38,-1,38,40,39,-1,39,40,33,-1,19,29,25,-1,41,44,43,-1,43,42,41,-1,46,45,48,-1,48,47,46,-1,49,45,51,-1,51,50,49,-1,53,52,43,-1,43,44,53,-1,55,54,57,-1,57,56,55,-1,41,42,59,-1,59,58,41,-1,49,48,45,-1,53,49,50,-1,50,52,53,-1,60,58,55,-1,55,61,60,-1,63,62,65,-1,65,64,63,-1,62,66,67,-1,67,65,62,-1,61,55,56,-1,56,68,61,-1,69,41,58,-1,58,60,69,-1,54,55,58,-1,58,59,54,-1,44,41,69,-1,44,70,53,-1,53,70,49,-1,49,70,48,-1,48,70,63,-1,63,70,62,-1,62,70,66,-1,66,60,61,-1,60,70,69,-1,69,70,44,-1,66,61,68,-1,68,67,66,-1,45,46,71,-1,71,51,45,-1,63,64,47,-1,47,48,63,-1,51,71,73,-1,73,72,51,-1,42,43,75,-1,75,74,42,-1,50,51,72,-1,72,76,50,-1,52,50,76,-1,76,77,52,-1,52,77,75,-1,75,43,52,-1,54,79,78,-1,78,57,54,-1,59,80,79,-1,79,54,59,-1,42,74,80,-1,80,59,42,-1,72,73,81,-1,74,75,81,-1,76,72,81,-1,77,76,81,-1,75,77,81,-1,78,79,81,-1,79,80,81,-1,80,74,81,-1,60,66,70,-1});
CCoordinate* Coordinate129 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate129->setPoint(new float[210]{5.134,5.325,-2.307,5.576,5.321,2.301,1.832,5.327,-3.845,2.086,5.319,4.18,3.647,5.326,-3.249,4.222,5.32,3.791,5.958,5.323,-0.2102,0.7731,-0.058,-1.78,6.278,3.051,-0.2117,3.851,1.892,-3.731,1.54,0.8381,3.067,0.7171,-0.083,0.417,2.083,2.979,4.091,5.393,2.384,-2.433,4.115,2.271,3.82,5.902,3.054,2.516,1.939,2.202,-3.979,1.796,0.7587,-3.184,5.25,4.121,-2.481,1.886,3.782,-4.216,3.692,3.921,-3.627,4.102,0.4756,0.1189,0,5.326,-3.886,5.295,6.313,-0.0673,1.724,6.311,3.429,3.717,6.311,2.966,5.256,6.312,1.591,1.559,6.315,-2.781,3.155,6.314,-2.379,4.417,6.314,-1.616,0,2.897,4.06,0,0.7347,3.129,0,6.315,-2.897,0,0.0013,0.3996,0,6.311,3.36,-5.25,4.121,-2.481,-5.134,5.325,-2.307,-5.958,5.323,-0.2102,-6.278,3.051,-0.2117,-2.083,2.979,4.091,-1.54,0.8381,3.067,-4.115,2.271,3.82,-4.222,5.32,3.791,-2.086,5.319,4.18,-5.576,5.321,2.301,-5.902,3.054,2.516,-1.832,5.327,-3.845,-1.886,3.782,-4.216,0,3.734,-4.153,-3.692,3.921,-3.627,-3.647,5.326,-3.249,-3.851,1.892,-3.731,-1.939,2.202,-3.979,-0.7731,-0.058,-1.78,-0.7171,-0.083,0.417,0,-0.0038,-1.933,-1.796,0.7587,-3.184,0,0.8288,-3.107,0,2.089,-4.038,-5.393,2.384,-2.433,-4.102,0.4756,0.1189,0,5.319,4.216,-1.724,6.311,3.429,-4.417,6.314,-1.616,-5.295,6.313,-0.0673,-3.717,6.311,2.966,-5.256,6.312,1.591,-1.559,6.315,-2.781,-3.155,6.314,-2.379,0,7.026,0.3018});
IndexedFaceSet128->setCoord(*Coordinate129);

CTextureCoordinate* TextureCoordinate130 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate130->setPoint(new float[164]{0.9018,0.4063,0.9014,0.4179,0.8749,0.4137,0.8692,0.3961,0.7959,0.3949,0.7654,0.3904,0.7886,0.3363,0.8054,0.35,0.8179,0.3996,0.8253,0.4272,0.8027,0.4379,0.8443,0.4178,0.8385,0.4005,0.9428,0.4333,0.9499,0.4012,0.9783,0.4006,0.968,0.4454,0.926,0.4038,0.9199,0.4248,0.9164,0.3759,0.94,0.3697,0.8948,0.3174,0.8493,0.3173,0.8453,0.3032,0.9009,0.3021,0.9215,0.3436,0.9383,0.321,0.9669,0.3558,0.8974,0.3907,0.8612,0.3435,0.7744,0.45,0.8174,0.462,0.8018,0.4827,0.8943,0.4333,0.8741,0.4244,0.8364,0.4415,0.8559,0.4235,0.9411,0.4779,0.9246,0.4601,0.9083,0.445,0.8725,0.511,0.9018,0.4063,0.9014,0.4179,0.8749,0.4137,0.8692,0.3961,0.7959,0.3949,0.7654,0.3904,0.7886,0.3363,0.8054,0.35,0.8179,0.3996,0.8253,0.4272,0.8027,0.4379,0.8443,0.4178,0.8385,0.4005,0.9428,0.4333,0.9499,0.4012,0.9783,0.4006,0.968,0.4454,0.926,0.4038,0.9199,0.4248,0.9164,0.3759,0.94,0.3697,0.8948,0.3174,0.8493,0.3173,0.8453,0.3032,0.9009,0.3021,0.9215,0.3436,0.9383,0.321,0.9669,0.3558,0.8974,0.3907,0.8612,0.3435,0.7744,0.45,0.8174,0.462,0.8018,0.4827,0.8943,0.4333,0.8741,0.4244,0.8364,0.4415,0.8559,0.4235,0.9411,0.4779,0.9246,0.4601,0.9083,0.445,0.8725,0.511});
IndexedFaceSet128->setTexCoord(*TextureCoordinate130);

Shape124->setGeometry(IndexedFaceSet128);

Transform123->addChildren(*Shape124);

HAnimSegment122->addChildren(*Transform123);

HAnimJoint121->addChildren(*HAnimSegment122);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setName("l_shoulder");
HAnimJoint131->setDEF("hanim_l_shoulder");
HAnimJoint131->setCenter(new float[3]{6.479,53.209999,-2.007});
HAnimJoint131->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment132 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment132->setName("l_upperarm");
HAnimSegment132->setDEF("hanim_l_upperarm");
CTransform* Transform133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform133->setTranslation(new float[3]{6.479,53.209999,-2.007});
CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance135->setMaterial(*Material136);

CImageTexture* ImageTexture137 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture137->setUSE("RuTextureAtlas");
Appearance135->setTexture(*ImageTexture137);

Shape134->setAppearance(*Appearance135);

CIndexedFaceSet* IndexedFaceSet138 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet138->setCoordIndex(new int[320]{0,1,2,-1,2,3,0,-1,4,5,1,-1,1,0,4,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,12,15,14,-1,14,13,12,-1,3,2,14,-1,14,15,3,-1,16,0,3,-1,3,17,16,-1,18,4,0,-1,0,16,18,-1,6,4,18,-1,18,19,6,-1,8,6,19,-1,19,20,8,-1,21,10,8,-1,8,20,21,-1,22,12,10,-1,10,21,22,-1,15,12,22,-1,22,23,15,-1,3,15,23,-1,23,17,3,-1,2,1,24,-1,1,5,24,-1,5,7,24,-1,7,9,24,-1,9,11,24,-1,11,13,24,-1,13,14,24,-1,14,2,24,-1,16,17,26,-1,26,27,16,-1,18,16,27,-1,27,28,18,-1,29,19,18,-1,18,28,29,-1,30,20,19,-1,19,29,30,-1,31,21,20,-1,20,30,31,-1,32,22,21,-1,21,31,32,-1,23,22,32,-1,32,33,23,-1,17,23,33,-1,33,26,17,-1,25,35,34,-1,25,36,35,-1,25,37,36,-1,25,38,37,-1,25,39,38,-1,25,40,39,-1,25,41,40,-1,25,34,41,-1,27,26,34,-1,34,35,27,-1,28,27,35,-1,35,36,28,-1,29,28,36,-1,36,37,29,-1,30,29,37,-1,37,38,30,-1,31,30,38,-1,38,39,31,-1,32,31,39,-1,39,40,32,-1,33,32,40,-1,40,41,33,-1,33,41,34,-1,34,26,33,-1});
IndexedFaceSet138->setCreaseAngle(1.57);
IndexedFaceSet138->setTexCoordIndex(new int[320]{0,1,2,-1,2,3,0,-1,4,5,1,-1,1,0,4,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,42,15,14,-1,14,43,42,-1,3,2,14,-1,14,15,3,-1,16,0,3,-1,3,17,16,-1,18,4,0,-1,0,16,18,-1,6,4,18,-1,18,19,6,-1,8,6,19,-1,19,20,8,-1,21,10,8,-1,8,20,21,-1,22,12,10,-1,10,21,22,-1,15,42,44,-1,44,23,15,-1,3,15,23,-1,23,17,3,-1,2,1,24,-1,1,5,24,-1,5,7,24,-1,7,9,24,-1,9,11,24,-1,11,13,24,-1,43,14,24,-1,14,2,24,-1,16,17,26,-1,26,25,16,-1,18,16,25,-1,25,27,18,-1,28,19,18,-1,18,27,28,-1,29,20,19,-1,19,28,29,-1,30,21,20,-1,20,29,30,-1,31,22,21,-1,21,30,31,-1,23,44,45,-1,45,32,23,-1,17,23,32,-1,32,26,17,-1,33,34,35,-1,33,36,34,-1,33,37,36,-1,33,38,37,-1,33,39,38,-1,33,40,39,-1,33,41,46,-1,33,35,41,-1,25,26,35,-1,35,34,25,-1,27,25,34,-1,34,36,27,-1,28,27,36,-1,36,37,28,-1,29,28,37,-1,37,38,29,-1,30,29,38,-1,38,39,30,-1,31,30,39,-1,39,40,31,-1,32,45,46,-1,46,41,32,-1,32,41,35,-1,35,26,32,-1});
CCoordinate* Coordinate139 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate139->setPoint(new float[126]{1.853,-8.001,-1.131,1.555,-8.618,-1.014,1.014,-8.62,-1.334,0.9953,-8.075,-1.385,2.34,-8.052,-0.0296,2.134,-8.614,-0.0297,1.839,-8.042,1.074,1.598,-8.587,1.002,0.9837,-8.082,1.43,0.988,-8.641,1.378,0.0348,-8.127,1.025,0.1545,-8.661,0.9998,-0.3741,-8.196,-0.0258,-0.2114,-8.69,-0.0182,0.1972,-8.613,-1.238,0.0821,-8.125,-1.155,1.921,-4.808,-1.213,0.8418,-4.986,-1.48,2.346,-4.733,-0.0206,1.87,-4.825,1.171,0.804,-4.994,1.523,-0.1829,-5.101,1.199,-0.6835,-5.152,-0.0154,-0.2177,-5.083,-1.201,1.01,-9.2,-0.0265,0.109,1.824,-0.1201,0.5264,-0.531,-1.561,1.497,-0.0819,-1.233,2.033,0.1309,-0.0568,1.489,-0.0849,1.192,0.4844,-0.5477,1.561,-0.5618,-0.9799,1.174,-1.097,-1.171,-0.144,-0.551,-0.9542,-1.234,0.3442,1.218,-1.532,1.099,1.626,-1.185,1.618,1.881,-0.0559,1.108,1.636,1.081,0.2776,1.21,1.302,-0.7595,0.7242,1.035,-1.286,0.5448,-0.0664,-0.738,0.7348,-1.247});
IndexedFaceSet138->setCoord(*Coordinate139);

CTextureCoordinate* TextureCoordinate140 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate140->setPoint(new float[94]{0.9104,0.7733,0.9089,0.762,0.9165,0.7594,0.9251,0.7687,0.8941,0.7739,0.8948,0.7682,0.8792,0.7744,0.8789,0.7656,0.8631,0.7729,0.8681,0.7628,0.8481,0.769,0.8595,0.7565,0.8342,0.7599,0.8515,0.7428,0.9247,0.7551,0.9373,0.7639,0.9167,0.8347,0.9371,0.832,0.896,0.8365,0.8749,0.8365,0.8546,0.8359,0.8342,0.8353,0.8132,0.8346,0.9589,0.8298,0.8918,0.7432,0.9186,0.9279,0.933,0.9259,0.904,0.9287,0.8854,0.9279,0.8672,0.9274,0.8429,0.9271,0.8212,0.9318,0.9579,0.9236,0.9015,0.9859,0.9101,0.9578,0.9213,0.9612,0.8999,0.9572,0.889,0.9597,0.8726,0.9656,0.8571,0.9688,0.8467,0.9805,0.9448,0.9662,0.9525,0.7534,0.9319,0.7396,0.979,0.8271,0.9772,0.9252,0.9568,0.9774});
IndexedFaceSet138->setTexCoord(*TextureCoordinate140);

Shape134->setGeometry(IndexedFaceSet138);

Transform133->addChildren(*Shape134);

HAnimSegment132->addChildren(*Transform133);

HAnimJoint131->addChildren(*HAnimSegment132);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("l_elbow");
HAnimJoint141->setDEF("hanim_l_elbow");
HAnimJoint141->setCenter(new float[3]{7.489,44.990002,-2.016});
HAnimJoint141->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("l_forearm");
HAnimSegment142->setDEF("hanim_l_forearm");
CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setTranslation(new float[3]{7.489,44.990002,-2.016});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance145->setMaterial(*Material146);

CImageTexture* ImageTexture147 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture147->setUSE("RuTextureAtlas");
Appearance145->setTexture(*ImageTexture147);

Shape144->setAppearance(*Appearance145);

CIndexedFaceSet* IndexedFaceSet148 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet148->setCoordIndex(new int[320]{14,12,0,-1,0,20,14,-1,13,12,14,-1,14,15,13,-1,1,13,15,-1,15,21,1,-1,2,1,21,-1,21,22,2,-1,3,2,22,-1,22,23,3,-1,18,3,23,-1,23,16,18,-1,18,16,17,-1,17,19,18,-1,20,0,19,-1,19,17,20,-1,0,12,34,-1,34,35,0,-1,12,13,36,-1,36,34,12,-1,36,13,1,-1,1,37,36,-1,37,1,2,-1,2,38,37,-1,38,2,3,-1,3,39,38,-1,39,3,18,-1,18,40,39,-1,41,19,0,-1,0,35,41,-1,18,19,41,-1,41,40,18,-1,4,11,31,-1,31,24,4,-1,11,5,25,-1,25,31,11,-1,5,8,28,-1,28,25,5,-1,10,6,26,-1,26,30,10,-1,7,4,24,-1,24,27,7,-1,8,9,29,-1,29,28,8,-1,9,10,30,-1,30,29,9,-1,6,7,27,-1,27,26,6,-1,24,31,32,-1,31,25,32,-1,25,28,32,-1,28,29,32,-1,29,30,32,-1,30,26,32,-1,26,27,32,-1,27,24,32,-1,14,20,33,-1,20,17,33,-1,17,16,33,-1,16,23,33,-1,23,22,33,-1,22,21,33,-1,21,15,33,-1,15,14,33,-1,35,34,11,-1,11,4,35,-1,34,36,5,-1,5,11,34,-1,5,36,37,-1,37,8,5,-1,8,37,38,-1,38,9,8,-1,9,38,39,-1,39,10,9,-1,10,39,40,-1,40,6,10,-1,7,41,35,-1,35,4,7,-1,40,41,7,-1,7,6,40,-1});
IndexedFaceSet148->setCreaseAngle(1.57);
IndexedFaceSet148->setTexCoordIndex(new int[320]{0,1,2,-1,2,3,0,-1,5,1,0,-1,0,4,5,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,35,34,14,-1,14,15,35,-1,3,2,15,-1,15,14,3,-1,2,1,38,-1,38,39,2,-1,1,5,40,-1,40,38,1,-1,40,5,7,-1,7,41,40,-1,41,7,9,-1,9,42,41,-1,42,9,11,-1,11,43,42,-1,43,11,13,-1,13,44,43,-1,46,15,2,-1,2,39,46,-1,35,15,46,-1,46,45,35,-1,17,16,24,-1,24,25,17,-1,16,18,26,-1,26,24,16,-1,18,19,27,-1,27,26,18,-1,21,22,28,-1,28,29,21,-1,23,17,25,-1,25,30,23,-1,19,20,31,-1,31,27,19,-1,20,21,29,-1,29,31,20,-1,36,23,30,-1,30,37,36,-1,25,24,32,-1,24,26,32,-1,26,27,32,-1,27,31,32,-1,31,29,32,-1,29,28,32,-1,37,30,32,-1,30,25,32,-1,0,3,33,-1,3,14,33,-1,14,34,33,-1,12,10,33,-1,10,8,33,-1,8,6,33,-1,6,4,33,-1,4,0,33,-1,39,38,16,-1,16,17,39,-1,38,40,18,-1,18,16,38,-1,18,40,41,-1,41,19,18,-1,19,41,42,-1,42,20,19,-1,20,42,43,-1,43,21,20,-1,21,43,44,-1,44,22,21,-1,23,46,39,-1,39,17,23,-1,45,46,23,-1,23,36,45,-1});
CCoordinate* Coordinate149 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate149->setPoint(new float[126]{-0.0246,-0.0996,-1.423,0.9308,0.0352,1.023,-0.025,-0.0276,1.456,-0.987,-0.1055,1.017,0.3866,-8.889,-1.414,1.347,-8.703,-0.0853,-0.7431,-8.9,-0.1678,-0.4355,-8.905,-1.089,1.069,-8.749,0.6858,0.4497,-8.829,1.068,-0.3755,-8.871,0.7256,1.067,-8.789,-1.005,0.8291,0.0315,-1.078,1.346,0.0538,-0.0909,0.75,0.6447,-1.028,1.208,0.6328,-0.1077,-1.261,0.4914,-0.0773,-0.8657,0.5588,-1.004,-1.396,-0.1374,-0.0986,-0.914,-0.1085,-1.079,0.0178,0.6327,-1.352,0.7203,0.6751,0.9784,-0.0595,0.61,1.423,-0.8763,0.5302,0.9933,0.3214,-9.476,-1.195,1.115,-9.341,-0.0767,-0.5909,-9.457,-0.1463,-0.3596,-9.503,-0.97,0.9355,-9.346,0.5698,0.3749,-9.449,0.8567,-0.344,-9.47,0.6083,0.8587,-9.41,-0.8794,0.1329,-9.648,-0.1193,0.0471,0.9117,-0.0956,0.9673,-4.665,-1.002,0.1032,-4.802,-1.456,1.396,-4.557,-0.0747,1.048,-4.632,0.8237,0.1608,-4.749,1.262,-0.6989,-4.773,0.8223,-1.063,-4.738,-0.2088,-0.7684,-4.744,-1.02});
IndexedFaceSet148->setCoord(*Coordinate149);

CTextureCoordinate* TextureCoordinate150 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate150->setPoint(new float[94]{0.9157,0.7044,0.9151,0.6926,0.928,0.6893,0.9222,0.7043,0.898,0.7025,0.8979,0.6938,0.8797,0.7052,0.8796,0.6945,0.8694,0.7049,0.8649,0.694,0.862,0.7093,0.8506,0.6957,0.8505,0.7262,0.8313,0.701,0.9288,0.705,0.9387,0.6908,0.9028,0.5513,0.9105,0.5495,0.8894,0.5563,0.882,0.5554,0.872,0.555,0.8586,0.5534,0.8467,0.5497,0.9198,0.5512,0.8991,0.5423,0.9041,0.5398,0.8883,0.5471,0.8822,0.5465,0.8615,0.5326,0.8677,0.5402,0.9108,0.5387,0.8748,0.5458,0.8877,0.531,0.8968,0.7248,0.9428,0.721,0.9616,0.6952,0.9315,0.546,0.9149,0.5301,0.909,0.6219,0.9193,0.6194,0.8937,0.6251,0.8808,0.6249,0.8684,0.6245,0.8546,0.6246,0.839,0.6253,0.9466,0.6206,0.9292,0.621});
IndexedFaceSet148->setTexCoord(*TextureCoordinate150);

Shape144->setGeometry(IndexedFaceSet148);

Transform143->addChildren(*Shape144);

HAnimSegment142->addChildren(*Transform143);

HAnimJoint141->addChildren(*HAnimSegment142);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setName("l_radiocarpal");
HAnimJoint151->setDEF("hanim_l_radiocarpal");
HAnimJoint151->setCenter(new float[3]{7.938,35.98,-1.856});
HAnimJoint151->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment152->setName("l_carpal");
HAnimSegment152->setDEF("hanim_l_carpal");
CTransform* Transform153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform153->setTranslation(new float[3]{7.938,35.98,-1.856});
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance155 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material156 = (CMaterial *)(m_pScene.createNode("Material"));
Material156->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance155->setMaterial(*Material156);

CImageTexture* ImageTexture157 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture157->setUSE("RuTextureAtlas");
Appearance155->setTexture(*ImageTexture157);

Shape154->setAppearance(*Appearance155);

CIndexedFaceSet* IndexedFaceSet158 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet158->setCoordIndex(new int[792]{14,17,18,-1,18,13,14,-1,12,19,20,-1,20,11,12,-1,4,8,6,-1,6,0,4,-1,10,21,22,-1,22,9,10,-1,16,18,17,-1,17,15,16,-1,2,6,8,-1,8,5,2,-1,13,20,19,-1,19,14,13,-1,3,5,8,-1,8,7,3,-1,15,22,21,-1,21,16,15,-1,8,4,1,-1,1,7,8,-1,2,5,17,-1,17,14,2,-1,18,32,28,-1,28,13,18,-1,12,0,6,-1,6,19,12,-1,20,35,24,-1,24,11,20,-1,10,26,36,-1,36,21,10,-1,22,7,1,-1,1,9,22,-1,30,32,18,-1,18,16,30,-1,17,5,3,-1,3,15,17,-1,28,35,20,-1,20,13,28,-1,19,6,2,-1,2,14,19,-1,3,7,22,-1,22,15,3,-1,21,36,30,-1,30,16,21,-1,28,32,33,-1,33,27,28,-1,24,35,34,-1,34,23,24,-1,25,37,36,-1,36,26,25,-1,30,29,33,-1,33,32,30,-1,31,23,34,-1,34,38,31,-1,29,37,38,-1,38,33,29,-1,28,27,34,-1,34,35,28,-1,29,30,36,-1,36,37,29,-1,27,33,38,-1,38,34,27,-1,31,38,37,-1,37,25,31,-1,73,44,43,-1,43,39,73,-1,40,46,45,-1,45,41,40,-1,42,39,43,-1,43,48,42,-1,47,60,41,-1,41,45,47,-1,42,48,46,-1,46,40,42,-1,9,1,50,-1,50,52,9,-1,4,0,49,-1,49,51,4,-1,11,24,57,-1,57,64,11,-1,1,4,51,-1,51,50,1,-1,10,9,52,-1,52,53,10,-1,26,10,53,-1,53,74,26,-1,0,12,76,-1,76,49,0,-1,31,25,67,-1,67,61,31,-1,25,26,74,-1,74,67,25,-1,24,23,54,-1,54,57,24,-1,23,31,61,-1,61,54,23,-1,54,55,57,-1,39,42,56,-1,56,55,39,-1,42,40,58,-1,58,56,42,-1,40,41,59,-1,59,58,40,-1,59,41,60,-1,60,61,59,-1,61,60,73,-1,73,54,61,-1,57,55,62,-1,62,64,57,-1,55,56,63,-1,63,62,55,-1,56,58,65,-1,65,63,56,-1,58,59,66,-1,66,65,58,-1,59,61,66,-1,52,50,69,-1,69,71,52,-1,51,49,68,-1,68,70,51,-1,50,51,70,-1,70,69,50,-1,53,52,71,-1,71,72,53,-1,76,77,68,-1,68,49,76,-1,74,75,66,-1,66,67,74,-1,78,79,71,-1,71,69,78,-1,79,80,72,-1,72,71,79,-1,87,75,72,-1,72,80,87,-1,81,82,65,-1,65,66,81,-1,82,83,63,-1,63,65,82,-1,83,84,62,-1,62,63,83,-1,88,77,62,-1,62,84,88,-1,85,86,70,-1,70,68,85,-1,86,78,69,-1,69,70,86,-1,60,47,44,-1,44,73,60,-1,54,73,39,-1,39,55,54,-1,74,53,72,-1,72,75,74,-1,81,66,75,-1,75,87,81,-1,61,67,66,-1,64,62,77,-1,77,76,64,-1,85,68,77,-1,77,88,85,-1,12,11,64,-1,64,76,12,-1,47,45,46,-1,46,48,47,-1,47,48,43,-1,43,44,47,-1,78,91,90,-1,90,79,78,-1,86,92,91,-1,91,78,86,-1,85,93,92,-1,92,86,85,-1,88,94,93,-1,93,85,88,-1,84,95,94,-1,94,88,84,-1,83,96,95,-1,95,84,83,-1,82,97,96,-1,96,83,82,-1,81,98,97,-1,97,82,81,-1,87,99,98,-1,98,81,87,-1,80,100,99,-1,99,87,80,-1,80,79,90,-1,90,100,80,-1,91,89,90,-1,92,89,91,-1,93,89,92,-1,94,89,93,-1,95,89,94,-1,96,89,95,-1,97,89,96,-1,98,89,97,-1,99,89,98,-1,100,89,99,-1,90,89,100,-1});
IndexedFaceSet158->setCreaseAngle(1.57);
IndexedFaceSet158->setTexCoordIndex(new int[792]{1,2,3,-1,3,0,1,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,13,14,15,-1,15,12,13,-1,17,96,95,-1,95,16,17,-1,19,11,10,-1,10,18,19,-1,0,7,6,-1,6,1,0,-1,21,99,98,-1,98,20,21,-1,16,15,14,-1,14,17,16,-1,98,97,22,-1,22,20,98,-1,19,18,2,-1,2,1,19,-1,3,23,24,-1,24,0,3,-1,5,8,11,-1,11,6,5,-1,7,25,26,-1,26,4,7,-1,13,27,28,-1,28,14,13,-1,15,20,22,-1,22,12,15,-1,29,100,96,-1,96,17,29,-1,95,99,21,-1,21,16,95,-1,24,25,7,-1,7,0,24,-1,6,11,19,-1,19,1,6,-1,21,20,15,-1,15,16,21,-1,14,28,29,-1,29,17,14,-1,24,23,31,-1,31,30,24,-1,26,25,33,-1,33,32,26,-1,34,35,28,-1,28,27,34,-1,29,36,101,-1,101,100,29,-1,37,32,33,-1,33,39,37,-1,36,35,38,-1,38,101,36,-1,24,30,33,-1,33,25,24,-1,36,29,28,-1,28,35,36,-1,30,31,39,-1,39,33,30,-1,102,38,35,-1,35,34,102,-1,41,42,47,-1,47,40,41,-1,44,45,46,-1,46,43,44,-1,48,40,47,-1,47,53,48,-1,49,50,43,-1,43,46,49,-1,103,104,45,-1,45,44,103,-1,12,22,51,-1,51,52,12,-1,9,8,54,-1,54,55,9,-1,4,26,56,-1,56,59,4,-1,22,97,105,-1,105,51,22,-1,13,12,52,-1,52,57,13,-1,27,13,57,-1,57,58,27,-1,8,5,62,-1,62,54,8,-1,102,34,60,-1,60,61,102,-1,34,27,58,-1,58,60,34,-1,26,32,63,-1,63,56,26,-1,32,37,64,-1,64,63,32,-1,63,67,56,-1,40,48,68,-1,68,67,40,-1,103,44,65,-1,65,106,103,-1,44,43,66,-1,66,65,44,-1,66,43,50,-1,50,61,66,-1,64,73,41,-1,41,63,64,-1,56,67,74,-1,74,59,56,-1,67,68,76,-1,76,74,67,-1,106,65,69,-1,69,107,106,-1,65,66,70,-1,70,69,65,-1,66,61,70,-1,52,51,71,-1,71,72,52,-1,55,54,85,-1,85,86,55,-1,51,105,108,-1,108,71,51,-1,57,52,72,-1,72,75,57,-1,62,87,85,-1,85,54,62,-1,58,77,70,-1,70,60,58,-1,78,79,72,-1,72,71,78,-1,79,80,75,-1,75,72,79,-1,81,77,75,-1,75,80,81,-1,82,83,69,-1,69,70,82,-1,83,84,107,-1,107,69,83,-1,88,89,74,-1,74,76,88,-1,90,87,74,-1,74,89,90,-1,91,92,86,-1,86,85,91,-1,109,78,71,-1,71,108,109,-1,73,93,42,-1,42,41,73,-1,63,41,40,-1,40,67,63,-1,58,57,75,-1,75,77,58,-1,82,70,77,-1,77,81,82,-1,61,60,70,-1,59,74,87,-1,87,62,59,-1,91,85,87,-1,87,90,91,-1,5,4,59,-1,59,62,5,-1,49,46,45,-1,45,104,49,-1,93,53,47,-1,47,42,93,-1,78,112,111,-1,111,79,78,-1,109,113,112,-1,112,78,109,-1,91,115,114,-1,114,92,91,-1,90,116,115,-1,115,91,90,-1,89,117,116,-1,116,90,89,-1,88,118,117,-1,117,89,88,-1,83,120,119,-1,119,84,83,-1,82,121,120,-1,120,83,82,-1,81,122,121,-1,121,82,81,-1,80,123,122,-1,122,81,80,-1,80,79,111,-1,111,123,80,-1,112,110,111,-1,113,110,112,-1,115,94,114,-1,116,94,115,-1,117,94,116,-1,118,94,117,-1,120,110,119,-1,121,110,120,-1,122,110,121,-1,123,110,122,-1,111,110,123,-1});
CCoordinate* Coordinate159 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate159->setPoint(new float[303]{-0.4805,-4.072,-1.733,0.3197,-3.697,-1.94,-0.2172,-5.295,-1.695,0.2708,-5.518,-1.884,-0.1555,-3.799,-1.961,-0.048,-5.588,-1.832,-0.3354,-4.841,-1.743,0.4051,-5.015,-2.018,0.0167,-4.962,-1.998,0.8588,-3.821,-1.325,1.161,-3.961,-0.6733,-0.1296,-4.409,-0.5447,-0.3047,-4.264,-1.209,0.2764,-6.009,-0.6719,0.082,-5.714,-1.296,0.7579,-5.921,-1.321,0.9044,-6.123,-0.7124,0.4461,-5.989,-1.263,0.6207,-6.212,-0.6694,-0.0645,-5.195,-1.193,0.1579,-5.378,-0.6459,1.157,-5.647,-0.735,0.9367,-5.407,-1.39,-0.0001,-4.25,0.8557,0.0271,-4.326,0.1664,0.9498,-4.042,0.8066,1.172,-4.058,0.2494,-0.0555,-5.735,0.6419,0.2243,-6.062,0.044,0.5243,-5.78,0.7126,0.7944,-6.138,0.0298,0.4691,-4.104,0.9417,0.5256,-6.194,0.0519,0.2003,-5.844,0.7491,-0.0648,-5.205,0.6928,0.1496,-5.478,0.1258,1.018,-5.621,0.1132,0.7335,-5.249,0.764,0.3589,-5.185,0.881,-0.9673,-3.095,1.223,-0.8527,-2.995,1.677,-0.3851,-3.156,1.825,-1.172,-2.984,1.338,-0.9524,-3.933,1.508,-0.7254,-4.071,1.649,-0.6556,-3.956,2.018,-0.8456,-3.862,1.931,-0.6811,-4.084,1.845,-1.035,-3.855,1.726,-0.657,-2.8,-1.582,0.3206,-2.466,-1.739,-0.3601,-2.574,-1.789,0.8543,-2.538,-1.17,1.107,-2.581,-0.5577,-0.2905,-2.785,0.9258,-0.8384,-2.18,0.5892,-1.035,-1.907,0.9056,-0.4111,-3.107,0.2325,-0.6174,-1.819,1.22,-0.0919,-1.995,1.365,-0.3176,-3.276,1.618,0.2272,-2.331,1.082,-0.9176,-1.335,-0.1309,-0.9204,-1.184,0.444,-0.5848,-3.209,-0.4235,-0.4997,-1.221,0.9152,0.3712,-1.275,0.8202,0.7394,-2.543,0.9421,-0.7591,-1.468,-1.338,0.2252,-1.405,-1.538,-0.4345,-1.491,-1.582,0.6535,-1.436,-1.04,0.8692,-1.437,-0.4375,-0.4931,-3.268,1.288,1.058,-2.624,0.2617,0.742,-1.406,0.1843,-0.6112,-3.062,-1.146,-0.8569,-1.409,-0.945,-0.1045,-0.4296,-1.222,0.2441,-0.4394,-0.9043,0.4315,-0.4253,-0.4785,0.1702,-0.4301,0.3676,-0.4546,-0.4436,0.4998,-0.9059,-0.5417,0.1414,-0.8986,-0.5047,-0.2525,-0.7242,-0.468,-1.102,-0.476,-0.4143,-1.241,0.3586,-0.4357,-0.0084,-0.8793,-0.5461,-0.7066,-0.311,0.7798,-0.3609,0.1788,0.2316,-0.832,-0.2601,0.2388,-1.126,-0.4753,0.2447,-1.148,-0.656,0.2107,-0.9607,-0.7996,0.1384,-0.5951,-0.8175,0.1767,-0.1748,-0.8243,0.1424,0.1899,-0.4144,0.249,0.4678,0.164,0.2615,0.3454,0.2821,0.1638,-0.0026,0.3474,0.1791,-0.4378});
IndexedFaceSet158->setCoord(*Coordinate159);

CTextureCoordinate* TextureCoordinate160 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate160->setPoint(new float[248]{0.6005,0.707,0.5925,0.7213,0.602,0.7209,0.6087,0.7078,0.5652,0.7019,0.5609,0.7176,0.5812,0.7183,0.5867,0.7055,0.5556,0.73,0.5508,0.7388,0.5758,0.7397,0.5719,0.731,0.7133,0.7144,0.7093,0.6986,0.6754,0.7005,0.681,0.7149,0.6704,0.715,0.6654,0.701,0.5886,0.734,0.5817,0.7305,0.6902,0.7318,0.6793,0.731,0.7176,0.7316,0.6093,0.6913,0.6025,0.6908,0.59,0.6882,0.5651,0.685,0.7068,0.6806,0.675,0.6818,0.6637,0.6838,0.6014,0.6749,0.6061,0.6717,0.5658,0.6648,0.591,0.673,0.7075,0.6603,0.6775,0.6647,0.6663,0.6659,0.5664,0.6544,0.6768,0.6569,0.5932,0.6639,0.5128,0.65,0.5206,0.6478,0.5227,0.6284,0.7464,0.6245,0.7564,0.6214,0.7429,0.6085,0.7391,0.6094,0.5183,0.6321,0.5079,0.6495,0.7365,0.6074,0.7414,0.6263,0.7431,0.7258,0.7369,0.7104,0.5147,0.629,0.5234,0.7258,0.5246,0.7348,0.5411,0.6815,0.7365,0.6957,0.7356,0.6772,0.5409,0.6992,0.7389,0.6607,0.7473,0.6515,0.5349,0.7156,0.5309,0.6622,0.5365,0.6534,0.7711,0.6435,0.7592,0.6469,0.5149,0.6752,0.5059,0.6718,0.7808,0.661,0.7727,0.668,0.7648,0.7193,0.7587,0.7055,0.5243,0.6431,0.4973,0.6939,0.7643,0.6955,0.493,0.6815,0.7653,0.6807,0.7861,0.7103,0.7823,0.7023,0.7805,0.6952,0.7817,0.6875,0.782,0.6813,0.7884,0.6756,0.7997,0.6759,0.5001,0.7211,0.5017,0.7319,0.4998,0.7123,0.476,0.6921,0.4771,0.6993,0.4792,0.7071,0.4793,0.7145,0.4761,0.72,0.5247,0.6251,0.4639,0.7037,0.6652,0.7179,0.66,0.7013,0.7174,0.741,0.6908,0.7391,0.6755,0.7358,0.6586,0.6826,0.6617,0.6622,0.7077,0.6531,0.7654,0.6173,0.747,0.6046,0.7456,0.7389,0.7809,0.6382,0.7933,0.6548,0.7692,0.7315,0.7918,0.7141,0.7931,0.6933,0.7877,0.6978,0.7896,0.7018,0.7924,0.7037,0.47,0.7119,0.4716,0.7091,0.4715,0.7054,0.4705,0.7015,0.47,0.6979,0.7964,0.6846,0.7908,0.6844,0.7876,0.6873,0.7874,0.6904,0.7868,0.6942});
IndexedFaceSet158->setTexCoord(*TextureCoordinate160);

Shape154->setGeometry(IndexedFaceSet158);

Transform153->addChildren(*Shape154);

HAnimSegment152->addChildren(*Transform153);

HAnimJoint151->addChildren(*HAnimSegment152);

HAnimJoint141->addChildren(*HAnimJoint151);

HAnimJoint131->addChildren(*HAnimJoint141);

HAnimJoint121->addChildren(*HAnimJoint131);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setName("r_shoulder");
HAnimJoint161->setDEF("hanim_r_shoulder");
HAnimJoint161->setCenter(new float[3]{-6.479,53.209999,-2.007});
HAnimJoint161->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment162 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment162->setName("r_upperarm");
HAnimSegment162->setDEF("hanim_r_upperarm");
CTransform* Transform163 = (CTransform *)(m_pScene.createNode("Transform"));
Transform163->setTranslation(new float[3]{-6.479,53.209999,-2.007});
CShape* Shape164 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance165 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material166 = (CMaterial *)(m_pScene.createNode("Material"));
Material166->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance165->setMaterial(*Material166);

CImageTexture* ImageTexture167 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture167->setUSE("RuTextureAtlas");
Appearance165->setTexture(*ImageTexture167);

Shape164->setAppearance(*Appearance165);

CIndexedFaceSet* IndexedFaceSet168 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet168->setCoordIndex(new int[320]{0,3,2,-1,2,1,0,-1,4,0,1,-1,1,5,4,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,12,13,14,-1,14,15,12,-1,3,15,14,-1,14,2,3,-1,16,17,3,-1,3,0,16,-1,18,16,0,-1,0,4,18,-1,6,19,18,-1,18,4,6,-1,8,20,19,-1,19,6,8,-1,21,20,8,-1,8,10,21,-1,22,21,10,-1,10,12,22,-1,15,23,22,-1,22,12,15,-1,3,17,23,-1,23,15,3,-1,2,24,1,-1,1,24,5,-1,5,24,7,-1,7,24,9,-1,9,24,11,-1,11,24,13,-1,13,24,14,-1,14,24,2,-1,16,27,26,-1,26,17,16,-1,18,28,27,-1,27,16,18,-1,29,28,18,-1,18,19,29,-1,30,29,19,-1,19,20,30,-1,31,30,20,-1,20,21,31,-1,32,31,21,-1,21,22,32,-1,23,33,32,-1,32,22,23,-1,17,26,33,-1,33,23,17,-1,25,34,35,-1,25,35,36,-1,25,36,37,-1,25,37,38,-1,25,38,39,-1,25,39,40,-1,25,40,41,-1,25,41,34,-1,27,35,34,-1,34,26,27,-1,28,36,35,-1,35,27,28,-1,29,37,36,-1,36,28,29,-1,30,38,37,-1,37,29,30,-1,31,39,38,-1,38,30,31,-1,32,40,39,-1,39,31,32,-1,33,41,40,-1,40,32,33,-1,33,26,34,-1,34,41,33,-1});
IndexedFaceSet168->setCreaseAngle(1.57);
IndexedFaceSet168->setTexCoordIndex(new int[320]{0,3,2,-1,2,1,0,-1,4,0,1,-1,1,5,4,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,42,43,14,-1,14,15,42,-1,3,15,14,-1,14,2,3,-1,16,17,3,-1,3,0,16,-1,18,16,0,-1,0,4,18,-1,6,19,18,-1,18,4,6,-1,8,20,19,-1,19,6,8,-1,21,20,8,-1,8,10,21,-1,22,21,10,-1,10,12,22,-1,15,23,44,-1,44,42,15,-1,3,17,23,-1,23,15,3,-1,2,24,1,-1,1,24,5,-1,5,24,7,-1,7,24,9,-1,9,24,11,-1,11,24,13,-1,43,24,14,-1,14,24,2,-1,16,25,26,-1,26,17,16,-1,18,27,25,-1,25,16,18,-1,28,27,18,-1,18,19,28,-1,29,28,19,-1,19,20,29,-1,30,29,20,-1,20,21,30,-1,31,30,21,-1,21,22,31,-1,23,32,45,-1,45,44,23,-1,17,26,32,-1,32,23,17,-1,33,35,34,-1,33,34,36,-1,33,36,37,-1,33,37,38,-1,33,38,39,-1,33,39,40,-1,33,46,41,-1,33,41,35,-1,25,34,35,-1,35,26,25,-1,27,36,34,-1,34,25,27,-1,28,37,36,-1,36,27,28,-1,29,38,37,-1,37,28,29,-1,30,39,38,-1,38,29,30,-1,31,40,39,-1,39,30,31,-1,32,41,46,-1,46,45,32,-1,32,26,35,-1,35,41,32,-1});
CCoordinate* Coordinate169 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate169->setPoint(new float[126]{-1.853,-8.001,-1.131,-1.555,-8.618,-1.014,-1.014,-8.62,-1.334,-0.9953,-8.075,-1.385,-2.34,-8.052,-0.0296,-2.134,-8.614,-0.0297,-1.839,-8.042,1.074,-1.598,-8.587,1.002,-0.9837,-8.082,1.43,-0.988,-8.641,1.378,-0.0348,-8.127,1.025,-0.1545,-8.661,0.9998,0.3741,-8.196,-0.0258,0.2114,-8.69,-0.0182,-0.1972,-8.613,-1.238,-0.0821,-8.125,-1.155,-1.921,-4.808,-1.213,-0.8418,-4.986,-1.48,-2.346,-4.733,-0.0206,-1.87,-4.825,1.171,-0.804,-4.994,1.523,0.1829,-5.101,1.199,0.6835,-5.152,-0.0154,0.2177,-5.083,-1.201,-1.01,-9.2,-0.0265,-0.109,1.824,-0.1201,-0.5264,-0.531,-1.561,-1.497,-0.0819,-1.233,-2.033,0.1309,-0.0568,-1.489,-0.0849,1.192,-0.4844,-0.5477,1.561,0.5618,-0.9799,1.174,1.097,-1.171,-0.144,0.551,-0.9542,-1.234,-0.3442,1.218,-1.532,-1.099,1.626,-1.185,-1.618,1.881,-0.0559,-1.108,1.636,1.081,-0.2776,1.21,1.302,0.7595,0.7242,1.035,1.286,0.5448,-0.0664,0.738,0.7348,-1.247});
IndexedFaceSet168->setCoord(*Coordinate169);

CTextureCoordinate* TextureCoordinate170 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate170->setPoint(new float[94]{0.9104,0.7733,0.9089,0.762,0.9165,0.7594,0.9251,0.7687,0.8941,0.7739,0.8948,0.7682,0.8792,0.7744,0.8789,0.7656,0.8631,0.7729,0.8681,0.7628,0.8481,0.769,0.8595,0.7565,0.8342,0.7599,0.8515,0.7428,0.9247,0.7551,0.9373,0.7639,0.9167,0.8347,0.9371,0.832,0.896,0.8365,0.8749,0.8365,0.8546,0.8359,0.8342,0.8353,0.8132,0.8346,0.9589,0.8298,0.8918,0.7432,0.9186,0.9279,0.933,0.9259,0.904,0.9287,0.8854,0.9279,0.8672,0.9274,0.8429,0.9271,0.8212,0.9318,0.9579,0.9236,0.9015,0.9859,0.9101,0.9578,0.9213,0.9612,0.8999,0.9572,0.889,0.9597,0.8726,0.9656,0.8571,0.9688,0.8467,0.9805,0.9448,0.9662,0.9525,0.7534,0.9319,0.7396,0.979,0.8271,0.9772,0.9252,0.9568,0.9774});
IndexedFaceSet168->setTexCoord(*TextureCoordinate170);

Shape164->setGeometry(IndexedFaceSet168);

Transform163->addChildren(*Shape164);

HAnimSegment162->addChildren(*Transform163);

HAnimJoint161->addChildren(*HAnimSegment162);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setName("r_elbow");
HAnimJoint171->setDEF("hanim_r_elbow");
HAnimJoint171->setCenter(new float[3]{-7.489,44.990002,-2.016});
HAnimJoint171->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setName("r_forearm");
HAnimSegment172->setDEF("hanim_r_forearm");
CTransform* Transform173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform173->setTranslation(new float[3]{-7.489,44.990002,-2.016});
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance175 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material176 = (CMaterial *)(m_pScene.createNode("Material"));
Material176->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance175->setMaterial(*Material176);

CImageTexture* ImageTexture177 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture177->setUSE("RuTextureAtlas");
Appearance175->setTexture(*ImageTexture177);

Shape174->setAppearance(*Appearance175);

CIndexedFaceSet* IndexedFaceSet178 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet178->setCoordIndex(new int[320]{14,20,0,-1,0,12,14,-1,13,15,14,-1,14,12,13,-1,1,21,15,-1,15,13,1,-1,2,22,21,-1,21,1,2,-1,3,23,22,-1,22,2,3,-1,18,16,23,-1,23,3,18,-1,18,19,17,-1,17,16,18,-1,20,17,19,-1,19,0,20,-1,0,35,34,-1,34,12,0,-1,12,34,36,-1,36,13,12,-1,36,37,1,-1,1,13,36,-1,37,38,2,-1,2,1,37,-1,38,39,3,-1,3,2,38,-1,39,40,18,-1,18,3,39,-1,41,35,0,-1,0,19,41,-1,18,40,41,-1,41,19,18,-1,4,24,31,-1,31,11,4,-1,11,31,25,-1,25,5,11,-1,5,25,28,-1,28,8,5,-1,10,30,26,-1,26,6,10,-1,7,27,24,-1,24,4,7,-1,8,28,29,-1,29,9,8,-1,9,29,30,-1,30,10,9,-1,6,26,27,-1,27,7,6,-1,24,32,31,-1,31,32,25,-1,25,32,28,-1,28,32,29,-1,29,32,30,-1,30,32,26,-1,26,32,27,-1,27,32,24,-1,14,33,20,-1,20,33,17,-1,17,33,16,-1,16,33,23,-1,23,33,22,-1,22,33,21,-1,21,33,15,-1,15,33,14,-1,35,4,11,-1,11,34,35,-1,34,11,5,-1,5,36,34,-1,5,8,37,-1,37,36,5,-1,8,9,38,-1,38,37,8,-1,9,10,39,-1,39,38,9,-1,10,6,40,-1,40,39,10,-1,7,4,35,-1,35,41,7,-1,40,6,7,-1,7,41,40,-1});
IndexedFaceSet178->setCreaseAngle(1.57);
IndexedFaceSet178->setTexCoordIndex(new int[320]{0,3,2,-1,2,1,0,-1,5,4,0,-1,0,1,5,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,35,15,14,-1,14,34,35,-1,3,14,15,-1,15,2,3,-1,2,39,38,-1,38,1,2,-1,1,38,40,-1,40,5,1,-1,40,41,7,-1,7,5,40,-1,41,42,9,-1,9,7,41,-1,42,43,11,-1,11,9,42,-1,43,44,13,-1,13,11,43,-1,46,39,2,-1,2,15,46,-1,35,45,46,-1,46,15,35,-1,17,25,24,-1,24,16,17,-1,16,24,26,-1,26,18,16,-1,18,26,27,-1,27,19,18,-1,21,29,28,-1,28,22,21,-1,23,30,25,-1,25,17,23,-1,19,27,31,-1,31,20,19,-1,20,31,29,-1,29,21,20,-1,36,37,30,-1,30,23,36,-1,25,32,24,-1,24,32,26,-1,26,32,27,-1,27,32,31,-1,31,32,29,-1,29,32,28,-1,37,32,30,-1,30,32,25,-1,0,33,3,-1,3,33,14,-1,14,33,34,-1,12,33,10,-1,10,33,8,-1,8,33,6,-1,6,33,4,-1,4,33,0,-1,39,17,16,-1,16,38,39,-1,38,16,18,-1,18,40,38,-1,18,19,41,-1,41,40,18,-1,19,20,42,-1,42,41,19,-1,20,21,43,-1,43,42,20,-1,21,22,44,-1,44,43,21,-1,23,17,39,-1,39,46,23,-1,45,36,23,-1,23,46,45,-1});
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[126]{0.0246,-0.0996,-1.423,-0.9308,0.0352,1.023,0.025,-0.0276,1.456,0.987,-0.1055,1.017,-0.3866,-8.889,-1.414,-1.347,-8.703,-0.0853,0.7431,-8.9,-0.1678,0.4355,-8.905,-1.089,-1.069,-8.749,0.6858,-0.4497,-8.829,1.068,0.3755,-8.871,0.7256,-1.067,-8.789,-1.005,-0.8291,0.0315,-1.078,-1.346,0.0538,-0.0909,-0.75,0.6447,-1.028,-1.208,0.6328,-0.1077,1.261,0.4914,-0.0773,0.8657,0.5588,-1.004,1.396,-0.1374,-0.0986,0.914,-0.1085,-1.079,-0.0178,0.6327,-1.352,-0.7203,0.6751,0.9784,0.0595,0.61,1.423,0.8763,0.5302,0.9933,-0.3214,-9.476,-1.195,-1.115,-9.341,-0.0767,0.5909,-9.457,-0.1463,0.3596,-9.503,-0.97,-0.9355,-9.346,0.5698,-0.3749,-9.449,0.8567,0.344,-9.47,0.6083,-0.8587,-9.41,-0.8794,-0.1329,-9.648,-0.1193,-0.0471,0.9117,-0.0956,-0.9673,-4.665,-1.002,-0.1032,-4.802,-1.456,-1.396,-4.557,-0.0747,-1.048,-4.632,0.8237,-0.1608,-4.749,1.262,0.6989,-4.773,0.8223,1.063,-4.738,-0.2088,0.7684,-4.744,-1.02});
IndexedFaceSet178->setCoord(*Coordinate179);

CTextureCoordinate* TextureCoordinate180 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate180->setPoint(new float[94]{0.9157,0.7044,0.9151,0.6926,0.928,0.6893,0.9222,0.7043,0.898,0.7025,0.8979,0.6938,0.8797,0.7052,0.8796,0.6945,0.8694,0.7049,0.8649,0.694,0.862,0.7093,0.8506,0.6957,0.8505,0.7262,0.8313,0.701,0.9288,0.705,0.9387,0.6908,0.9028,0.5513,0.9105,0.5495,0.8894,0.5563,0.882,0.5554,0.872,0.555,0.8586,0.5534,0.8467,0.5497,0.9198,0.5512,0.8991,0.5423,0.9041,0.5398,0.8883,0.5471,0.8822,0.5465,0.8615,0.5326,0.8677,0.5402,0.9108,0.5387,0.8748,0.5458,0.8877,0.531,0.8968,0.7248,0.9428,0.721,0.9616,0.6952,0.9315,0.546,0.9149,0.5301,0.909,0.6219,0.9193,0.6194,0.8937,0.6251,0.8808,0.6249,0.8684,0.6245,0.8546,0.6246,0.839,0.6253,0.9466,0.6206,0.9292,0.621});
IndexedFaceSet178->setTexCoord(*TextureCoordinate180);

Shape174->setGeometry(IndexedFaceSet178);

Transform173->addChildren(*Shape174);

HAnimSegment172->addChildren(*Transform173);

HAnimJoint171->addChildren(*HAnimSegment172);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("r_radiocarpal");
HAnimJoint181->setDEF("hanim_r_radiocarpal");
HAnimJoint181->setCenter(new float[3]{-7.938,35.98,-1.856});
HAnimJoint181->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("r_carpal");
HAnimSegment182->setDEF("hanim_r_carpal");
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{-7.938,35.98,-1.856});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance185 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material186 = (CMaterial *)(m_pScene.createNode("Material"));
Material186->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance185->setMaterial(*Material186);

CImageTexture* ImageTexture187 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture187->setUSE("RuTextureAtlas");
Appearance185->setTexture(*ImageTexture187);

Shape184->setAppearance(*Appearance185);

CIndexedFaceSet* IndexedFaceSet188 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet188->setCoordIndex(new int[792]{14,13,18,-1,18,17,14,-1,12,11,20,-1,20,19,12,-1,4,0,6,-1,6,8,4,-1,10,9,22,-1,22,21,10,-1,16,15,17,-1,17,18,16,-1,2,5,8,-1,8,6,2,-1,13,14,19,-1,19,20,13,-1,3,7,8,-1,8,5,3,-1,15,16,21,-1,21,22,15,-1,8,7,1,-1,1,4,8,-1,2,14,17,-1,17,5,2,-1,18,13,28,-1,28,32,18,-1,12,19,6,-1,6,0,12,-1,20,11,24,-1,24,35,20,-1,10,21,36,-1,36,26,10,-1,22,9,1,-1,1,7,22,-1,30,16,18,-1,18,32,30,-1,17,15,3,-1,3,5,17,-1,28,13,20,-1,20,35,28,-1,19,14,2,-1,2,6,19,-1,3,15,22,-1,22,7,3,-1,21,16,30,-1,30,36,21,-1,28,27,33,-1,33,32,28,-1,24,23,34,-1,34,35,24,-1,25,26,36,-1,36,37,25,-1,30,32,33,-1,33,29,30,-1,31,38,34,-1,34,23,31,-1,29,33,38,-1,38,37,29,-1,28,35,34,-1,34,27,28,-1,29,37,36,-1,36,30,29,-1,27,34,38,-1,38,33,27,-1,31,25,37,-1,37,38,31,-1,73,39,43,-1,43,44,73,-1,40,41,45,-1,45,46,40,-1,42,48,43,-1,43,39,42,-1,47,45,41,-1,41,60,47,-1,42,40,46,-1,46,48,42,-1,9,52,50,-1,50,1,9,-1,4,51,49,-1,49,0,4,-1,11,64,57,-1,57,24,11,-1,1,50,51,-1,51,4,1,-1,10,53,52,-1,52,9,10,-1,26,74,53,-1,53,10,26,-1,0,49,76,-1,76,12,0,-1,31,61,67,-1,67,25,31,-1,25,67,74,-1,74,26,25,-1,24,57,54,-1,54,23,24,-1,23,54,61,-1,61,31,23,-1,54,57,55,-1,39,55,56,-1,56,42,39,-1,42,56,58,-1,58,40,42,-1,40,58,59,-1,59,41,40,-1,59,61,60,-1,60,41,59,-1,61,54,73,-1,73,60,61,-1,57,64,62,-1,62,55,57,-1,55,62,63,-1,63,56,55,-1,56,63,65,-1,65,58,56,-1,58,65,66,-1,66,59,58,-1,59,66,61,-1,52,71,69,-1,69,50,52,-1,51,70,68,-1,68,49,51,-1,50,69,70,-1,70,51,50,-1,53,72,71,-1,71,52,53,-1,76,49,68,-1,68,77,76,-1,74,67,66,-1,66,75,74,-1,78,69,71,-1,71,79,78,-1,79,71,72,-1,72,80,79,-1,87,80,72,-1,72,75,87,-1,81,66,65,-1,65,82,81,-1,82,65,63,-1,63,83,82,-1,83,63,62,-1,62,84,83,-1,88,84,62,-1,62,77,88,-1,85,68,70,-1,70,86,85,-1,86,70,69,-1,69,78,86,-1,60,73,44,-1,44,47,60,-1,54,55,39,-1,39,73,54,-1,74,75,72,-1,72,53,74,-1,81,87,75,-1,75,66,81,-1,61,66,67,-1,64,76,77,-1,77,62,64,-1,85,88,77,-1,77,68,85,-1,12,76,64,-1,64,11,12,-1,47,48,46,-1,46,45,47,-1,47,44,43,-1,43,48,47,-1,78,79,90,-1,90,91,78,-1,86,78,91,-1,91,92,86,-1,85,86,92,-1,92,93,85,-1,88,85,93,-1,93,94,88,-1,84,88,94,-1,94,95,84,-1,83,84,95,-1,95,96,83,-1,82,83,96,-1,96,97,82,-1,81,82,97,-1,97,98,81,-1,87,81,98,-1,98,99,87,-1,80,87,99,-1,99,100,80,-1,80,100,90,-1,90,79,80,-1,91,90,89,-1,92,91,89,-1,93,92,89,-1,94,93,89,-1,95,94,89,-1,96,95,89,-1,97,96,89,-1,98,97,89,-1,99,98,89,-1,100,99,89,-1,90,100,89,-1});
IndexedFaceSet188->setCreaseAngle(1.57);
IndexedFaceSet188->setTexCoordIndex(new int[792]{1,0,3,-1,3,2,1,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,13,12,15,-1,15,14,13,-1,17,16,95,-1,95,96,17,-1,19,18,10,-1,10,11,19,-1,0,1,6,-1,6,7,0,-1,21,20,98,-1,98,99,21,-1,16,17,14,-1,14,15,16,-1,98,20,22,-1,22,97,98,-1,19,1,2,-1,2,18,19,-1,3,0,24,-1,24,23,3,-1,5,6,11,-1,11,8,5,-1,7,4,26,-1,26,25,7,-1,13,14,28,-1,28,27,13,-1,15,12,22,-1,22,20,15,-1,29,17,96,-1,96,100,29,-1,95,16,21,-1,21,99,95,-1,24,0,7,-1,7,25,24,-1,6,1,19,-1,19,11,6,-1,21,16,15,-1,15,20,21,-1,14,17,29,-1,29,28,14,-1,24,30,31,-1,31,23,24,-1,26,32,33,-1,33,25,26,-1,34,27,28,-1,28,35,34,-1,29,100,101,-1,101,36,29,-1,37,39,33,-1,33,32,37,-1,36,101,38,-1,38,35,36,-1,24,25,33,-1,33,30,24,-1,36,35,28,-1,28,29,36,-1,30,33,39,-1,39,31,30,-1,102,34,35,-1,35,38,102,-1,41,40,47,-1,47,42,41,-1,44,43,46,-1,46,45,44,-1,48,53,47,-1,47,40,48,-1,49,46,43,-1,43,50,49,-1,103,44,45,-1,45,104,103,-1,12,52,51,-1,51,22,12,-1,9,55,54,-1,54,8,9,-1,4,59,56,-1,56,26,4,-1,22,51,105,-1,105,97,22,-1,13,57,52,-1,52,12,13,-1,27,58,57,-1,57,13,27,-1,8,54,62,-1,62,5,8,-1,102,61,60,-1,60,34,102,-1,34,60,58,-1,58,27,34,-1,26,56,63,-1,63,32,26,-1,32,63,64,-1,64,37,32,-1,63,56,67,-1,40,67,68,-1,68,48,40,-1,103,106,65,-1,65,44,103,-1,44,65,66,-1,66,43,44,-1,66,61,50,-1,50,43,66,-1,64,63,41,-1,41,73,64,-1,56,59,74,-1,74,67,56,-1,67,74,76,-1,76,68,67,-1,106,107,69,-1,69,65,106,-1,65,69,70,-1,70,66,65,-1,66,70,61,-1,52,72,71,-1,71,51,52,-1,55,86,85,-1,85,54,55,-1,51,71,108,-1,108,105,51,-1,57,75,72,-1,72,52,57,-1,62,54,85,-1,85,87,62,-1,58,60,70,-1,70,77,58,-1,78,71,72,-1,72,79,78,-1,79,72,75,-1,75,80,79,-1,81,80,75,-1,75,77,81,-1,82,70,69,-1,69,83,82,-1,83,69,107,-1,107,84,83,-1,88,76,74,-1,74,89,88,-1,90,89,74,-1,74,87,90,-1,91,85,86,-1,86,92,91,-1,109,108,71,-1,71,78,109,-1,73,41,42,-1,42,93,73,-1,63,67,40,-1,40,41,63,-1,58,77,75,-1,75,57,58,-1,82,81,77,-1,77,70,82,-1,61,70,60,-1,59,62,87,-1,87,74,59,-1,91,90,87,-1,87,85,91,-1,5,62,59,-1,59,4,5,-1,49,104,45,-1,45,46,49,-1,93,42,47,-1,47,53,93,-1,78,79,111,-1,111,112,78,-1,109,78,112,-1,112,113,109,-1,91,92,114,-1,114,115,91,-1,90,91,115,-1,115,116,90,-1,89,90,116,-1,116,117,89,-1,88,89,117,-1,117,118,88,-1,83,84,119,-1,119,120,83,-1,82,83,120,-1,120,121,82,-1,81,82,121,-1,121,122,81,-1,80,81,122,-1,122,123,80,-1,80,123,111,-1,111,79,80,-1,112,111,110,-1,113,112,110,-1,115,114,94,-1,116,115,94,-1,117,116,94,-1,118,117,94,-1,120,119,110,-1,121,120,110,-1,122,121,110,-1,123,122,110,-1,111,123,110,-1});
CCoordinate* Coordinate189 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate189->setPoint(new float[303]{0.4805,-4.072,-1.733,-0.3197,-3.697,-1.94,0.2172,-5.295,-1.695,-0.2708,-5.518,-1.884,0.1555,-3.799,-1.961,0.048,-5.588,-1.832,0.3354,-4.841,-1.743,-0.4051,-5.015,-2.018,-0.0167,-4.962,-1.998,-0.8588,-3.821,-1.325,-1.161,-3.961,-0.6733,0.1296,-4.409,-0.5447,0.3047,-4.264,-1.209,-0.2764,-6.009,-0.6719,-0.082,-5.714,-1.296,-0.7579,-5.921,-1.321,-0.9044,-6.123,-0.7124,-0.4461,-5.989,-1.263,-0.6207,-6.212,-0.6694,0.0645,-5.195,-1.193,-0.1579,-5.378,-0.6459,-1.157,-5.647,-0.735,-0.9367,-5.407,-1.39,0.0001,-4.25,0.8557,-0.0271,-4.326,0.1664,-0.9498,-4.042,0.8066,-1.172,-4.058,0.2494,0.0555,-5.735,0.6419,-0.2243,-6.062,0.044,-0.5243,-5.78,0.7126,-0.7944,-6.138,0.0298,-0.4691,-4.104,0.9417,-0.5256,-6.194,0.0519,-0.2003,-5.844,0.7491,0.0648,-5.205,0.6928,-0.1496,-5.478,0.1258,-1.018,-5.621,0.1132,-0.7335,-5.249,0.764,-0.3589,-5.185,0.881,0.9673,-3.095,1.223,0.8527,-2.995,1.677,0.3851,-3.156,1.825,1.172,-2.984,1.338,0.9524,-3.933,1.508,0.7254,-4.071,1.649,0.6556,-3.956,2.018,0.8456,-3.862,1.931,0.6811,-4.084,1.845,1.035,-3.855,1.726,0.657,-2.8,-1.582,-0.3206,-2.466,-1.739,0.3601,-2.574,-1.789,-0.8543,-2.538,-1.17,-1.107,-2.581,-0.5577,0.2905,-2.785,0.9258,0.8384,-2.18,0.5892,1.035,-1.907,0.9056,0.4111,-3.107,0.2325,0.6174,-1.819,1.22,0.0919,-1.995,1.365,0.3176,-3.276,1.618,-0.2272,-2.331,1.082,0.9176,-1.335,-0.1309,0.9204,-1.184,0.444,0.5848,-3.209,-0.4235,0.4997,-1.221,0.9152,-0.3712,-1.275,0.8202,-0.7394,-2.543,0.9421,0.7591,-1.468,-1.338,-0.2252,-1.405,-1.538,0.4345,-1.491,-1.582,-0.6535,-1.436,-1.04,-0.8692,-1.437,-0.4375,0.4931,-3.268,1.288,-1.058,-2.624,0.2617,-0.742,-1.406,0.1843,0.6112,-3.062,-1.146,0.8569,-1.409,-0.945,0.1045,-0.4296,-1.222,-0.2441,-0.4394,-0.9043,-0.4315,-0.4253,-0.4785,-0.1702,-0.4301,0.3676,0.4546,-0.4436,0.4998,0.9059,-0.5417,0.1414,0.8986,-0.5047,-0.2525,0.7242,-0.468,-1.102,0.476,-0.4143,-1.241,-0.3586,-0.4357,-0.0084,0.8793,-0.5461,-0.7066,0.311,0.7798,-0.3609,-0.1788,0.2316,-0.832,0.2601,0.2388,-1.126,0.4753,0.2447,-1.148,0.656,0.2107,-0.9607,0.7996,0.1384,-0.5951,0.8175,0.1767,-0.1748,0.8243,0.1424,0.1899,0.4144,0.249,0.4678,-0.164,0.2615,0.3454,-0.2821,0.1638,-0.0026,-0.3474,0.1791,-0.4378});
IndexedFaceSet188->setCoord(*Coordinate189);

CTextureCoordinate* TextureCoordinate190 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate190->setPoint(new float[248]{0.6005,0.707,0.5925,0.7213,0.602,0.7209,0.6087,0.7078,0.5652,0.7019,0.5609,0.7176,0.5812,0.7183,0.5867,0.7055,0.5556,0.73,0.5508,0.7388,0.5758,0.7397,0.5719,0.731,0.7133,0.7144,0.7093,0.6986,0.6754,0.7005,0.681,0.7149,0.6704,0.715,0.6654,0.701,0.5886,0.734,0.5817,0.7305,0.6902,0.7318,0.6793,0.731,0.7176,0.7316,0.6093,0.6913,0.6025,0.6908,0.59,0.6882,0.5651,0.685,0.7068,0.6806,0.675,0.6818,0.6637,0.6838,0.6014,0.6749,0.6061,0.6717,0.5658,0.6648,0.591,0.673,0.7075,0.6603,0.6775,0.6647,0.6663,0.6659,0.5664,0.6544,0.6768,0.6569,0.5932,0.6639,0.5128,0.65,0.5206,0.6478,0.5227,0.6284,0.7464,0.6245,0.7564,0.6214,0.7429,0.6085,0.7391,0.6094,0.5183,0.6321,0.5079,0.6495,0.7365,0.6074,0.7414,0.6263,0.7431,0.7258,0.7369,0.7104,0.5147,0.629,0.5234,0.7258,0.5246,0.7348,0.5411,0.6815,0.7365,0.6957,0.7356,0.6772,0.5409,0.6992,0.7389,0.6607,0.7473,0.6515,0.5349,0.7156,0.5309,0.6622,0.5365,0.6534,0.7711,0.6435,0.7592,0.6469,0.5149,0.6752,0.5059,0.6718,0.7808,0.661,0.7727,0.668,0.7648,0.7193,0.7587,0.7055,0.5243,0.6431,0.4973,0.6939,0.7643,0.6955,0.493,0.6815,0.7653,0.6807,0.7861,0.7103,0.7823,0.7023,0.7805,0.6952,0.7817,0.6875,0.782,0.6813,0.7884,0.6756,0.7997,0.6759,0.5001,0.7211,0.5017,0.7319,0.4998,0.7123,0.476,0.6921,0.4771,0.6993,0.4792,0.7071,0.4793,0.7145,0.4761,0.72,0.5247,0.6251,0.4639,0.7037,0.6652,0.7179,0.66,0.7013,0.7174,0.741,0.6908,0.7391,0.6755,0.7358,0.6586,0.6826,0.6617,0.6622,0.7077,0.6531,0.7654,0.6173,0.747,0.6046,0.7456,0.7389,0.7809,0.6382,0.7933,0.6548,0.7692,0.7315,0.7918,0.7141,0.7931,0.6933,0.7877,0.6978,0.7896,0.7018,0.7924,0.7037,0.47,0.7119,0.4716,0.7091,0.4715,0.7054,0.4705,0.7015,0.47,0.6979,0.7964,0.6846,0.7908,0.6844,0.7876,0.6873,0.7874,0.6904,0.7868,0.6942});
IndexedFaceSet188->setTexCoord(*TextureCoordinate190);

Shape184->setGeometry(IndexedFaceSet188);

Transform183->addChildren(*Shape184);

HAnimSegment182->addChildren(*Transform183);

HAnimJoint181->addChildren(*HAnimSegment182);

HAnimJoint171->addChildren(*HAnimJoint181);

HAnimJoint161->addChildren(*HAnimJoint171);

HAnimJoint121->addChildren(*HAnimJoint161);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setName("vl5");
HAnimJoint191->setDEF("hanim_vl5");
HAnimJoint191->setCenter(new float[3]{0,38.25,-1.903});
HAnimJoint191->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setName("l5");
HAnimSegment192->setDEF("hanim_l5");
CTransform* Transform193 = (CTransform *)(m_pScene.createNode("Transform"));
Transform193->setTranslation(new float[3]{0,38.25,-1.903});
CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance195 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material196 = (CMaterial *)(m_pScene.createNode("Material"));
Material196->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance195->setMaterial(*Material196);

CImageTexture* ImageTexture197 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture197->setUSE("RuTextureAtlas");
Appearance195->setTexture(*ImageTexture197);

Shape194->setAppearance(*Appearance195);

CIndexedFaceSet* IndexedFaceSet198 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet198->setCoordIndex(new int[2696]{6,4,2,-1,2,3,6,-1,3,7,6,-1,85,0,8,-1,8,165,85,-1,9,8,0,-1,0,1,9,-1,56,14,13,-1,14,15,12,-1,12,13,14,-1,56,13,7,-1,6,7,13,-1,13,12,6,-1,56,75,14,-1,11,15,14,-1,14,75,11,-1,5,4,18,-1,15,20,18,-1,18,12,15,-1,4,6,12,-1,12,18,4,-1,16,17,21,-1,21,20,16,-1,11,16,20,-1,20,15,11,-1,1,5,9,-1,24,104,184,-1,184,121,24,-1,25,105,104,-1,104,24,25,-1,19,21,106,-1,106,25,19,-1,165,8,24,-1,24,121,165,-1,8,9,25,-1,25,24,8,-1,9,5,19,-1,19,25,9,-1,22,192,189,-1,189,26,22,-1,23,22,26,-1,26,27,23,-1,106,107,23,-1,23,27,106,-1,56,102,103,-1,103,75,56,-1,31,30,22,-1,22,23,31,-1,58,77,76,-1,76,57,58,-1,77,32,29,-1,29,76,77,-1,33,100,75,-1,75,103,33,-1,17,98,107,-1,96,90,31,-1,31,23,96,-1,35,34,33,-1,33,29,35,-1,37,36,30,-1,30,31,37,-1,31,90,91,-1,91,37,31,-1,32,38,35,-1,35,29,32,-1,59,78,77,-1,77,58,59,-1,78,39,32,-1,32,77,78,-1,41,40,36,-1,36,37,41,-1,39,42,38,-1,38,32,39,-1,60,79,78,-1,78,59,60,-1,79,43,39,-1,39,78,79,-1,45,44,40,-1,40,41,45,-1,41,92,93,-1,93,45,41,-1,43,46,42,-1,42,39,43,-1,61,47,79,-1,79,60,61,-1,47,48,43,-1,43,79,47,-1,112,111,44,-1,44,45,112,-1,93,94,112,-1,112,45,93,-1,48,113,46,-1,46,43,48,-1,51,52,17,-1,17,16,51,-1,53,51,16,-1,16,11,53,-1,100,101,53,-1,53,11,100,-1,34,96,97,-1,97,55,34,-1,55,54,33,-1,33,34,55,-1,4,5,1,-1,1,2,4,-1,42,92,91,-1,91,38,42,-1,62,63,116,-1,116,245,62,-1,7,3,63,-1,63,62,7,-1,117,81,62,-1,62,245,117,-1,81,10,7,-1,7,62,81,-1,81,108,109,-1,109,10,81,-1,108,110,253,-1,253,64,108,-1,28,64,65,-1,65,72,28,-1,257,65,64,-1,64,253,257,-1,82,73,72,-1,72,65,82,-1,260,82,65,-1,65,257,260,-1,83,86,73,-1,73,82,83,-1,263,83,82,-1,82,260,263,-1,66,67,86,-1,86,83,66,-1,266,66,83,-1,83,263,266,-1,68,69,67,-1,67,66,68,-1,269,68,66,-1,66,266,269,-1,86,67,84,-1,84,74,86,-1,70,71,80,-1,80,84,70,-1,69,70,84,-1,84,67,69,-1,118,192,22,-1,22,30,118,-1,36,119,118,-1,118,30,36,-1,40,275,119,-1,119,36,40,-1,120,275,40,-1,40,44,120,-1,122,120,44,-1,44,111,122,-1,52,51,87,-1,51,53,87,-1,53,101,87,-1,54,55,87,-1,55,97,87,-1,49,50,89,-1,89,88,49,-1,115,95,89,-1,89,50,115,-1,114,49,88,-1,88,283,114,-1,34,35,90,-1,90,96,34,-1,35,38,91,-1,91,90,35,-1,92,42,46,-1,46,93,92,-1,93,46,113,-1,113,94,93,-1,41,37,91,-1,91,92,41,-1,115,80,71,-1,71,95,115,-1,96,98,99,-1,99,97,96,-1,98,17,52,-1,52,99,98,-1,33,54,101,-1,101,100,33,-1,97,99,87,-1,99,52,87,-1,101,54,87,-1,102,57,76,-1,76,103,102,-1,33,103,76,-1,76,29,33,-1,100,11,75,-1,26,189,184,-1,184,104,26,-1,27,26,104,-1,104,105,27,-1,21,17,107,-1,107,106,21,-1,98,96,23,-1,23,107,98,-1,106,27,105,-1,105,25,106,-1,108,64,28,-1,28,109,108,-1,81,117,110,-1,110,108,81,-1,18,19,5,-1,20,21,19,-1,19,18,20,-1,123,124,130,-1,130,129,123,-1,124,125,131,-1,131,130,124,-1,125,126,132,-1,132,131,125,-1,126,127,133,-1,133,132,126,-1,127,128,134,-1,134,133,127,-1,128,123,129,-1,129,134,128,-1,129,130,136,-1,136,135,129,-1,130,131,137,-1,137,136,130,-1,131,132,138,-1,138,137,131,-1,132,133,139,-1,139,138,132,-1,133,134,140,-1,140,139,133,-1,134,129,135,-1,135,140,134,-1,135,136,142,-1,142,141,135,-1,136,137,143,-1,143,142,136,-1,137,138,144,-1,144,143,137,-1,138,139,145,-1,145,144,138,-1,139,140,146,-1,146,145,139,-1,140,135,141,-1,141,146,140,-1,141,142,148,-1,148,147,141,-1,142,143,149,-1,149,148,142,-1,143,144,150,-1,150,149,143,-1,144,145,151,-1,151,150,144,-1,145,146,152,-1,152,151,145,-1,146,141,147,-1,147,152,146,-1,147,148,154,-1,154,153,147,-1,148,149,155,-1,155,154,148,-1,149,150,156,-1,156,155,149,-1,150,151,157,-1,157,156,150,-1,151,152,158,-1,158,157,151,-1,152,147,153,-1,153,158,152,-1,127,126,125,-1,125,124,123,-1,127,125,123,-1,128,127,123,-1,154,155,156,-1,156,157,158,-1,154,156,158,-1,153,154,158,-1,161,160,159,-1,159,162,161,-1,160,161,163,-1,85,165,164,-1,164,166,85,-1,168,167,166,-1,166,164,168,-1,169,171,170,-1,170,171,172,-1,172,173,170,-1,169,163,171,-1,161,172,171,-1,171,163,161,-1,169,170,174,-1,175,174,170,-1,170,173,175,-1,176,177,162,-1,173,172,177,-1,177,178,173,-1,162,177,172,-1,172,161,162,-1,180,178,179,-1,179,181,180,-1,175,173,178,-1,178,180,175,-1,167,168,176,-1,182,121,184,-1,184,183,182,-1,185,182,183,-1,183,186,185,-1,187,185,188,-1,188,179,187,-1,165,121,182,-1,182,164,165,-1,164,182,185,-1,185,168,164,-1,168,185,187,-1,187,176,168,-1,191,190,189,-1,189,192,191,-1,194,193,190,-1,190,191,194,-1,188,193,194,-1,194,195,188,-1,169,174,197,-1,197,196,169,-1,198,194,191,-1,191,199,198,-1,202,201,200,-1,200,203,202,-1,203,200,204,-1,204,205,203,-1,206,197,174,-1,174,207,206,-1,181,195,208,-1,209,194,198,-1,198,210,209,-1,211,204,206,-1,206,212,211,-1,213,198,199,-1,199,214,213,-1,198,213,215,-1,215,210,198,-1,205,204,211,-1,211,216,205,-1,217,202,203,-1,203,218,217,-1,218,203,205,-1,205,219,218,-1,220,213,214,-1,214,221,220,-1,219,205,216,-1,216,222,219,-1,223,217,218,-1,218,224,223,-1,224,218,219,-1,219,225,224,-1,226,220,221,-1,221,227,226,-1,220,226,229,-1,229,228,220,-1,225,219,222,-1,222,230,225,-1,231,223,224,-1,224,232,231,-1,232,224,225,-1,225,233,232,-1,234,226,227,-1,227,235,234,-1,229,226,234,-1,234,236,229,-1,233,225,230,-1,230,237,233,-1,238,180,181,-1,181,239,238,-1,240,175,180,-1,180,238,240,-1,207,175,240,-1,240,241,207,-1,212,243,242,-1,242,209,212,-1,243,212,206,-1,206,244,243,-1,162,159,167,-1,167,176,162,-1,222,216,215,-1,215,228,222,-1,246,245,116,-1,116,247,246,-1,163,246,247,-1,247,160,163,-1,117,245,246,-1,246,248,117,-1,248,246,163,-1,163,249,248,-1,248,249,251,-1,251,250,248,-1,250,252,253,-1,253,110,250,-1,256,255,254,-1,254,252,256,-1,257,253,252,-1,252,254,257,-1,258,254,255,-1,255,259,258,-1,260,257,254,-1,254,258,260,-1,261,258,259,-1,259,262,261,-1,263,260,258,-1,258,261,263,-1,264,261,262,-1,262,265,264,-1,266,263,261,-1,261,264,266,-1,267,264,265,-1,265,268,267,-1,269,266,264,-1,264,267,269,-1,262,271,270,-1,270,265,262,-1,273,270,272,-1,272,274,273,-1,268,265,270,-1,270,273,268,-1,118,199,191,-1,191,192,118,-1,214,199,118,-1,118,119,214,-1,221,214,119,-1,119,275,221,-1,120,227,221,-1,221,275,120,-1,122,235,227,-1,227,120,122,-1,239,276,238,-1,238,276,240,-1,240,276,241,-1,244,276,243,-1,243,276,242,-1,277,280,279,-1,279,278,277,-1,281,278,279,-1,279,282,281,-1,114,283,280,-1,280,277,114,-1,212,209,210,-1,210,211,212,-1,211,210,215,-1,215,216,211,-1,228,229,230,-1,230,222,228,-1,229,236,237,-1,237,230,229,-1,220,228,215,-1,215,213,220,-1,281,282,274,-1,274,272,281,-1,209,242,284,-1,284,208,209,-1,208,284,239,-1,239,181,208,-1,206,207,241,-1,241,244,206,-1,242,276,284,-1,284,276,239,-1,241,276,244,-1,196,197,200,-1,200,201,196,-1,206,204,200,-1,200,197,206,-1,207,174,175,-1,190,183,184,-1,184,189,190,-1,193,186,183,-1,183,190,193,-1,179,188,195,-1,195,181,179,-1,208,195,194,-1,194,209,208,-1,188,185,186,-1,186,193,188,-1,250,251,256,-1,256,252,250,-1,248,250,110,-1,110,117,248,-1,177,176,187,-1,178,177,187,-1,187,179,178,-1,285,288,287,-1,287,286,285,-1,286,287,290,-1,290,289,286,-1,289,290,292,-1,292,291,289,-1,291,292,294,-1,294,293,291,-1,293,294,296,-1,296,295,293,-1,295,296,288,-1,288,285,295,-1,288,298,297,-1,297,287,288,-1,287,297,299,-1,299,290,287,-1,290,299,300,-1,300,292,290,-1,292,300,301,-1,301,294,292,-1,294,301,302,-1,302,296,294,-1,296,302,298,-1,298,288,296,-1,298,304,303,-1,303,297,298,-1,297,303,305,-1,305,299,297,-1,299,305,306,-1,306,300,299,-1,300,306,307,-1,307,301,300,-1,301,307,308,-1,308,302,301,-1,302,308,304,-1,304,298,302,-1,304,310,309,-1,309,303,304,-1,303,309,311,-1,311,305,303,-1,305,311,312,-1,312,306,305,-1,306,312,313,-1,313,307,306,-1,307,313,314,-1,314,308,307,-1,308,314,310,-1,310,304,308,-1,310,316,315,-1,315,309,310,-1,309,315,317,-1,317,311,309,-1,311,317,318,-1,318,312,311,-1,312,318,319,-1,319,313,312,-1,313,319,320,-1,320,314,313,-1,314,320,316,-1,316,310,314,-1,285,286,289,-1,289,291,293,-1,285,289,293,-1,295,285,293,-1,320,319,318,-1,318,317,315,-1,320,318,315,-1,316,320,315,-1,321,322,326,-1,326,330,321,-1,322,323,327,-1,327,326,322,-1,323,342,343,-1,343,327,323,-1,325,329,328,-1,328,324,325,-1,321,330,329,-1,329,325,321,-1,331,335,330,-1,330,326,331,-1,332,331,326,-1,326,327,332,-1,333,341,358,-1,358,328,333,-1,333,328,329,-1,329,334,333,-1,334,329,330,-1,330,335,334,-1,337,336,335,-1,335,331,337,-1,338,337,331,-1,331,332,338,-1,334,340,339,-1,339,333,334,-1,335,336,340,-1,340,334,335,-1,324,328,358,-1,358,365,324,-1,366,332,327,-1,327,343,366,-1,338,332,366,-1,366,367,338,-1,333,339,368,-1,368,341,333,-1,337,372,371,-1,371,336,337,-1,338,373,372,-1,372,337,338,-1,340,370,369,-1,369,339,340,-1,336,371,370,-1,370,340,336,-1,367,375,373,-1,373,338,367,-1,339,369,374,-1,374,368,339,-1,344,347,346,-1,346,345,344,-1,345,346,349,-1,349,348,345,-1,348,349,343,-1,343,342,348,-1,351,350,353,-1,353,352,351,-1,344,351,352,-1,352,347,344,-1,354,346,347,-1,347,355,354,-1,356,349,346,-1,346,354,356,-1,357,353,358,-1,358,341,357,-1,357,359,352,-1,352,353,357,-1,359,355,347,-1,347,352,359,-1,360,354,355,-1,355,361,360,-1,362,356,354,-1,354,360,362,-1,359,357,364,-1,364,363,359,-1,355,359,363,-1,363,361,355,-1,350,365,358,-1,358,353,350,-1,366,343,349,-1,349,356,366,-1,362,367,366,-1,366,356,362,-1,357,341,368,-1,368,364,357,-1,376,377,360,-1,360,361,376,-1,377,380,362,-1,362,360,377,-1,378,379,363,-1,363,364,378,-1,379,376,361,-1,361,363,379,-1,380,375,367,-1,367,362,380,-1,374,378,364,-1,364,368,374,-1,3,2,371,-1,371,372,3,-1,0,85,374,-1,374,369,0,-1,1,0,369,-1,369,370,1,-1,2,1,370,-1,370,371,2,-1,116,63,373,-1,373,375,116,-1,63,3,372,-1,372,373,63,-1,159,160,377,-1,377,376,159,-1,85,166,378,-1,378,374,85,-1,166,167,379,-1,379,378,166,-1,167,159,376,-1,376,379,167,-1,247,116,375,-1,375,380,247,-1,160,247,380,-1,380,377,160,-1});
IndexedFaceSet198->setCreaseAngle(1.57);
IndexedFaceSet198->setTexCoordIndex(new int[2696]{2,3,0,-1,0,1,2,-1,1,4,2,-1,20,21,18,-1,18,19,20,-1,23,18,21,-1,21,22,23,-1,24,25,26,-1,25,28,27,-1,27,26,25,-1,24,26,29,-1,30,29,26,-1,26,27,30,-1,24,31,25,-1,32,28,25,-1,25,31,32,-1,33,34,35,-1,28,36,35,-1,35,27,28,-1,34,30,27,-1,27,35,34,-1,38,39,37,-1,37,36,38,-1,32,38,36,-1,36,28,32,-1,22,33,23,-1,41,42,43,-1,43,40,41,-1,44,45,42,-1,42,41,44,-1,46,37,47,-1,47,44,46,-1,19,18,41,-1,41,40,19,-1,18,23,44,-1,44,41,18,-1,23,33,46,-1,46,44,23,-1,50,51,48,-1,48,49,50,-1,53,50,49,-1,49,52,53,-1,47,54,53,-1,53,52,47,-1,24,55,56,-1,56,31,24,-1,57,58,50,-1,50,53,57,-1,61,62,59,-1,59,60,61,-1,62,64,63,-1,63,59,62,-1,65,66,31,-1,31,56,65,-1,39,67,54,-1,68,69,57,-1,57,53,68,-1,70,71,65,-1,65,63,70,-1,72,73,58,-1,58,57,72,-1,57,69,74,-1,74,72,57,-1,64,75,70,-1,70,63,64,-1,76,77,62,-1,62,61,76,-1,77,78,64,-1,64,62,77,-1,79,80,73,-1,73,72,79,-1,78,81,75,-1,75,64,78,-1,82,83,77,-1,77,76,82,-1,83,84,78,-1,78,77,83,-1,85,86,80,-1,80,79,85,-1,79,87,88,-1,88,85,79,-1,84,89,81,-1,81,78,84,-1,90,91,83,-1,83,82,90,-1,91,92,84,-1,84,83,91,-1,93,122,86,-1,86,85,93,-1,88,123,93,-1,93,85,88,-1,92,124,89,-1,89,84,92,-1,125,126,39,-1,39,38,125,-1,127,125,38,-1,38,32,127,-1,66,128,127,-1,127,32,66,-1,71,68,129,-1,129,130,71,-1,130,131,65,-1,65,71,130,-1,34,33,22,-1,22,132,34,-1,81,87,74,-1,74,75,81,-1,7,8,5,-1,5,6,7,-1,4,1,8,-1,8,7,4,-1,9,10,7,-1,7,6,9,-1,10,11,4,-1,4,7,10,-1,10,12,13,-1,13,11,10,-1,12,15,16,-1,16,14,12,-1,95,14,17,-1,17,94,95,-1,96,17,14,-1,14,16,96,-1,97,98,94,-1,94,17,97,-1,99,97,17,-1,17,96,99,-1,100,101,98,-1,98,97,100,-1,102,100,97,-1,97,99,102,-1,103,104,101,-1,101,100,103,-1,105,103,100,-1,100,102,105,-1,106,107,104,-1,104,103,106,-1,108,106,103,-1,103,105,108,-1,101,104,109,-1,109,110,101,-1,112,113,111,-1,111,109,112,-1,107,112,109,-1,109,104,107,-1,133,51,50,-1,50,58,133,-1,73,134,133,-1,133,58,73,-1,80,135,134,-1,134,73,80,-1,136,135,80,-1,80,86,136,-1,137,136,86,-1,86,122,137,-1,126,125,138,-1,125,127,138,-1,127,128,138,-1,131,130,138,-1,130,129,138,-1,114,115,116,-1,116,117,114,-1,118,119,116,-1,116,115,118,-1,120,114,117,-1,117,121,120,-1,71,70,69,-1,69,68,71,-1,70,75,74,-1,74,69,70,-1,87,81,89,-1,89,88,87,-1,88,89,124,-1,124,123,88,-1,79,72,74,-1,74,87,79,-1,118,111,113,-1,113,119,118,-1,68,67,139,-1,139,129,68,-1,67,39,126,-1,126,139,67,-1,65,131,128,-1,128,66,65,-1,129,139,138,-1,139,126,138,-1,128,131,138,-1,55,60,59,-1,59,56,55,-1,65,56,59,-1,59,63,65,-1,66,32,31,-1,49,48,43,-1,43,42,49,-1,52,49,42,-1,42,45,52,-1,37,39,54,-1,54,47,37,-1,67,68,53,-1,53,54,67,-1,47,52,45,-1,45,44,47,-1,12,14,95,-1,95,13,12,-1,10,9,15,-1,15,12,10,-1,35,46,33,-1,36,37,46,-1,46,35,36,-1,140,141,142,-1,142,143,140,-1,141,144,145,-1,145,142,141,-1,144,146,147,-1,147,145,144,-1,146,148,149,-1,149,147,146,-1,148,150,151,-1,151,149,148,-1,150,140,143,-1,143,151,150,-1,143,142,152,-1,152,153,143,-1,142,145,154,-1,154,152,142,-1,145,147,155,-1,155,154,145,-1,147,149,156,-1,156,155,147,-1,149,151,157,-1,157,156,149,-1,151,143,153,-1,153,157,151,-1,153,152,158,-1,158,159,153,-1,152,154,160,-1,160,158,152,-1,154,155,161,-1,161,160,154,-1,155,156,162,-1,162,161,155,-1,156,157,163,-1,163,162,156,-1,157,153,159,-1,159,163,157,-1,159,158,164,-1,164,165,159,-1,158,160,166,-1,166,164,158,-1,160,161,167,-1,167,166,160,-1,161,162,168,-1,168,167,161,-1,162,163,169,-1,169,168,162,-1,163,159,165,-1,165,169,163,-1,165,164,170,-1,170,171,165,-1,164,166,172,-1,172,170,164,-1,166,167,173,-1,173,172,166,-1,167,168,174,-1,174,173,167,-1,168,169,175,-1,175,174,168,-1,169,165,171,-1,171,175,169,-1,148,146,144,-1,144,141,140,-1,148,144,140,-1,150,148,140,-1,170,172,173,-1,173,174,175,-1,170,173,175,-1,171,170,175,-1,178,177,176,-1,176,179,178,-1,177,178,180,-1,183,182,181,-1,181,184,183,-1,186,185,184,-1,184,181,186,-1,187,189,188,-1,188,189,190,-1,190,191,188,-1,187,192,189,-1,193,190,189,-1,189,192,193,-1,187,188,194,-1,195,194,188,-1,188,191,195,-1,196,198,197,-1,191,190,198,-1,198,199,191,-1,197,198,190,-1,190,193,197,-1,201,199,200,-1,200,202,201,-1,195,191,199,-1,199,201,195,-1,185,186,196,-1,204,203,206,-1,206,205,204,-1,207,204,205,-1,205,208,207,-1,209,207,210,-1,210,200,209,-1,182,203,204,-1,204,181,182,-1,181,204,207,-1,207,186,181,-1,186,207,209,-1,209,196,186,-1,213,212,211,-1,211,214,213,-1,216,215,212,-1,212,213,216,-1,210,215,216,-1,216,217,210,-1,187,194,219,-1,219,218,187,-1,220,216,213,-1,213,221,220,-1,224,223,222,-1,222,225,224,-1,225,222,226,-1,226,227,225,-1,228,219,194,-1,194,229,228,-1,202,217,230,-1,231,216,220,-1,220,232,231,-1,233,226,228,-1,228,234,233,-1,235,220,221,-1,221,236,235,-1,220,235,237,-1,237,232,220,-1,227,226,233,-1,233,238,227,-1,239,224,225,-1,225,240,239,-1,240,225,227,-1,227,241,240,-1,242,235,236,-1,236,243,242,-1,241,227,238,-1,238,244,241,-1,245,239,240,-1,240,246,245,-1,246,240,241,-1,241,247,246,-1,248,242,243,-1,243,249,248,-1,242,248,251,-1,251,250,242,-1,247,241,244,-1,244,252,247,-1,253,245,246,-1,246,254,253,-1,254,246,247,-1,247,255,254,-1,256,248,249,-1,249,257,256,-1,251,248,256,-1,256,258,251,-1,255,247,252,-1,252,259,255,-1,260,201,202,-1,202,261,260,-1,262,195,201,-1,201,260,262,-1,229,195,262,-1,262,263,229,-1,234,265,264,-1,264,231,234,-1,265,234,228,-1,228,266,265,-1,197,267,185,-1,185,196,197,-1,244,238,237,-1,237,250,244,-1,270,269,268,-1,268,271,270,-1,180,270,271,-1,271,177,180,-1,272,269,270,-1,270,273,272,-1,273,270,180,-1,180,274,273,-1,273,274,276,-1,276,275,273,-1,275,277,279,-1,279,278,275,-1,282,281,280,-1,280,277,282,-1,283,279,277,-1,277,280,283,-1,284,280,281,-1,281,285,284,-1,286,283,280,-1,280,284,286,-1,287,284,285,-1,285,288,287,-1,289,286,284,-1,284,287,289,-1,290,287,288,-1,288,291,290,-1,292,289,287,-1,287,290,292,-1,293,290,291,-1,291,294,293,-1,295,292,290,-1,290,293,295,-1,288,297,296,-1,296,291,288,-1,299,296,298,-1,298,300,299,-1,294,291,296,-1,296,299,294,-1,301,221,213,-1,213,214,301,-1,236,221,301,-1,301,302,236,-1,243,236,302,-1,302,303,243,-1,304,249,243,-1,243,303,304,-1,305,257,249,-1,249,304,305,-1,261,306,260,-1,260,306,262,-1,262,306,263,-1,266,306,265,-1,265,306,264,-1,307,310,309,-1,309,308,307,-1,311,308,309,-1,309,312,311,-1,313,314,310,-1,310,307,313,-1,234,231,232,-1,232,233,234,-1,233,232,237,-1,237,238,233,-1,250,251,252,-1,252,244,250,-1,251,258,259,-1,259,252,251,-1,242,250,237,-1,237,235,242,-1,311,312,300,-1,300,298,311,-1,231,264,315,-1,315,230,231,-1,230,315,261,-1,261,202,230,-1,228,229,263,-1,263,266,228,-1,264,306,315,-1,315,306,261,-1,263,306,266,-1,218,219,222,-1,222,223,218,-1,228,226,222,-1,222,219,228,-1,229,194,195,-1,212,205,206,-1,206,211,212,-1,215,208,205,-1,205,212,215,-1,200,210,217,-1,217,202,200,-1,230,217,216,-1,216,231,230,-1,210,207,208,-1,208,215,210,-1,275,276,282,-1,282,277,275,-1,273,275,278,-1,278,272,273,-1,198,196,209,-1,199,198,209,-1,209,200,199,-1,316,319,318,-1,318,317,316,-1,317,318,321,-1,321,320,317,-1,320,321,323,-1,323,322,320,-1,322,323,325,-1,325,324,322,-1,324,325,327,-1,327,326,324,-1,326,327,319,-1,319,316,326,-1,319,329,328,-1,328,318,319,-1,318,328,330,-1,330,321,318,-1,321,330,331,-1,331,323,321,-1,323,331,332,-1,332,325,323,-1,325,332,333,-1,333,327,325,-1,327,333,329,-1,329,319,327,-1,329,335,334,-1,334,328,329,-1,328,334,336,-1,336,330,328,-1,330,336,337,-1,337,331,330,-1,331,337,338,-1,338,332,331,-1,332,338,339,-1,339,333,332,-1,333,339,335,-1,335,329,333,-1,335,341,340,-1,340,334,335,-1,334,340,342,-1,342,336,334,-1,336,342,343,-1,343,337,336,-1,337,343,344,-1,344,338,337,-1,338,344,345,-1,345,339,338,-1,339,345,341,-1,341,335,339,-1,341,347,346,-1,346,340,341,-1,340,346,348,-1,348,342,340,-1,342,348,349,-1,349,343,342,-1,343,349,350,-1,350,344,343,-1,344,350,351,-1,351,345,344,-1,345,351,347,-1,347,341,345,-1,316,317,320,-1,320,322,324,-1,316,320,324,-1,326,316,324,-1,351,350,349,-1,349,348,346,-1,351,349,346,-1,347,351,346,-1,352,353,354,-1,354,355,352,-1,353,356,357,-1,357,354,353,-1,356,358,359,-1,359,357,356,-1,361,362,363,-1,363,360,361,-1,352,355,362,-1,362,361,352,-1,364,365,355,-1,355,354,364,-1,366,364,354,-1,354,357,366,-1,367,368,369,-1,369,363,367,-1,367,363,362,-1,362,370,367,-1,370,362,355,-1,355,365,370,-1,371,372,365,-1,365,364,371,-1,373,371,364,-1,364,366,373,-1,370,374,375,-1,375,367,370,-1,365,372,374,-1,374,370,365,-1,360,363,369,-1,369,376,360,-1,377,366,357,-1,357,359,377,-1,373,366,377,-1,377,378,373,-1,367,375,379,-1,379,368,367,-1,371,409,408,-1,408,372,371,-1,373,410,409,-1,409,371,373,-1,374,412,411,-1,411,375,374,-1,372,408,412,-1,412,374,372,-1,378,419,410,-1,410,373,378,-1,375,411,421,-1,421,379,375,-1,380,383,382,-1,382,381,380,-1,381,382,385,-1,385,384,381,-1,384,385,387,-1,387,386,384,-1,389,388,391,-1,391,390,389,-1,380,389,390,-1,390,383,380,-1,392,382,383,-1,383,393,392,-1,394,385,382,-1,382,392,394,-1,395,391,397,-1,397,396,395,-1,395,398,390,-1,390,391,395,-1,398,393,383,-1,383,390,398,-1,399,392,393,-1,393,400,399,-1,401,394,392,-1,392,399,401,-1,398,395,403,-1,403,402,398,-1,393,398,402,-1,402,400,393,-1,388,404,397,-1,397,391,388,-1,405,387,385,-1,385,394,405,-1,401,406,405,-1,405,394,401,-1,395,396,407,-1,407,403,395,-1,414,413,399,-1,399,400,414,-1,413,415,401,-1,401,399,413,-1,417,416,402,-1,402,403,417,-1,416,414,400,-1,400,402,416,-1,415,418,406,-1,406,401,415,-1,420,417,403,-1,403,407,420,-1,1,0,422,-1,422,423,1,-1,21,20,424,-1,424,425,21,-1,22,21,425,-1,425,426,22,-1,132,22,426,-1,426,427,132,-1,5,8,428,-1,428,429,5,-1,8,1,423,-1,423,428,8,-1,176,177,430,-1,430,431,176,-1,183,184,432,-1,432,433,183,-1,184,185,434,-1,434,432,184,-1,185,267,435,-1,435,434,185,-1,271,268,436,-1,436,437,271,-1,177,271,437,-1,437,430,177,-1});
CCoordinate* Coordinate199 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate199->setPoint(new float[1143]{1.032,18.13,-1.689,1.965,18.04,-1.256,2.349,17.79,-0.1312,2.122,17.34,0.8393,3.81,17.87,0.0333,3.57,18.29,-2.393,3.624,16.97,1.288,3.006,16.4,2.059,1.245,18.35,-3.575,2.552,18.38,-3.224,3.88,15.65,2.312,5.717,16.47,1.675,3.534,17.48,1.803,2.77,16.61,2.449,3.689,15.66,2.605,5.026,17.44,1.872,6.225,17.57,-0.119,6.117,16.95,-1.992,4.008,18.39,0.0687,4.542,18.15,-2.926,5.703,18.31,0.0687,5.269,17.6,-2.795,2.124,13.07,-3.469,4.84,14.07,-3.067,1.316,15.87,-5.54,2.984,15.91,-5.036,1.986,12.68,-4.159,4.715,13.98,-3.938,4.43,10.69,2.731,5.773,10.8,1.663,1.743,10.61,-3.544,3.759,10.68,-2.976,5.92,7.344,1.875,5.892,12.9,1.56,6.096,12.51,-0.3041,5.776,10.76,-0.2443,1.768,7.19,-3.738,3.747,7.224,-3.051,5.78,7.299,0.0032,6.043,4.624,1.924,1.753,4.283,-3.974,3.764,4.432,-3.405,5.992,4.566,-0.0058,6.219,1.279,2.216,1.822,1.09,-4.335,3.936,1.103,-3.731,6.343,1.209,-0.0692,5.389,-1.315,4.417,6.584,-1.285,2.332,1.899,-0.0313,-4.377,3.88,-0.0049,-3.682,8.091,16.84,-0.1246,7.596,16.62,-1.263,7.576,16.62,1.145,6.481,13.3,1.035,6.475,12.9,-0.2648,2.155,15.21,2.974,2.149,10.5,3.491,2.285,7.273,4.179,2.261,4.369,4.49,2.257,1.22,4.82,2.445,-1.356,4.657,1.516,15.86,2.104,1.279,17.05,1.36,1.812,10.57,2.915,1.99,7.306,3.43,2.108,-0.0558,4.302,4.621,-0.1151,3.943,2.124,-0.7558,4.093,4.228,-0.7782,3.735,5.717,-0.7583,1.935,5.98,-0.6986,-0.0058,4.689,7.255,3.315,4.822,4.437,3.743,6.067,1.274,2.239,4.027,15.65,2.312,4.43,10.69,2.731,4.689,7.255,3.609,4.822,4.437,4.037,5.089,1.21,4.443,6.422,0.0575,-0.0592,1.569,14.98,2.563,2.108,4.393,3.81,2.108,1.269,4.21,6.094,0.0198,2.258,0,18.15,-1.788,4.74,1.21,4.063,7.209,14.7,-0.196,1.859,-0.7495,-3.937,3.708,-0.7279,-3.315,5.361,10.74,-1.843,5.225,7.273,-1.88,5.229,4.527,-2.201,5.4,1.151,-2.482,5.73,-1.347,-2.517,5.17,-0.704,-2.086,5.785,13.04,-1.747,6.626,13.86,-1.384,5.89,15.25,-2.217,6.862,15.45,-1.715,5.775,14.88,2.139,6.822,15.17,1.54,2.053,12.55,3.143,4.39,12.58,2.417,1.653,13.08,-4.677,3.812,14.12,-4.522,4.992,15.59,-4.009,5.478,15.3,-2.761,1.691,12.92,2.613,4.389,12.61,2.402,0,13,2.679,2.066,-1.411,-4.526,4.086,-1.384,-3.817,6.701,-1.316,-0.0666,0,-0.0899,-4.399,5.446,0.0297,-2.485,0,16.81,1.547,0,14.99,2.629,0,10.61,-3.544,0,7.19,-3.738,0,1.031,-4.402,0,15.88,-5.68,0,-1.503,-4.548,3.162,15.56,2.666,3.096,15.57,2.712,2.953,15.56,2.739,2.876,15.54,2.72,2.942,15.53,2.673,3.085,15.54,2.646,3.211,14.72,2.866,3.147,14.71,2.915,3.009,14.64,2.949,2.935,14.6,2.934,3,14.6,2.885,3.138,14.66,2.851,3.406,13.65,2.999,3.342,13.65,3.049,3.205,13.61,3.081,3.132,13.58,3.062,3.195,13.59,3.013,3.332,13.63,2.981,3.76,12.6,3.102,3.697,12.59,3.152,3.559,12.55,3.184,3.486,12.52,3.165,3.55,12.53,3.115,3.687,12.57,3.084,3.799,11.36,3.258,3.737,11.38,3.305,3.595,11.39,3.336,3.516,11.39,3.319,3.579,11.37,3.272,3.72,11.35,3.241,3.75,10.43,3.426,3.687,10.46,3.474,3.546,10.47,3.505,3.466,10.46,3.488,3.529,10.44,3.44,3.671,10.43,3.409,-2.349,17.79,-0.1312,-2.122,17.34,0.8393,-3.624,16.97,1.288,-3.81,17.87,0.0333,-3.006,16.4,2.059,-1.245,18.35,-3.575,0,18.33,-3.745,-1.032,18.13,-1.689,-1.965,18.04,-1.256,-2.552,18.38,-3.224,-2.155,15.21,2.974,-3.689,15.66,2.605,-2.77,16.61,2.449,-3.534,17.48,1.803,-5.026,17.44,1.872,-4.027,15.65,2.312,-5.717,16.47,1.675,-3.57,18.29,-2.393,-4.008,18.39,0.0687,-5.703,18.31,0.0687,-5.269,17.6,-2.795,-6.225,17.57,-0.119,-6.117,16.95,-1.992,-1.316,15.87,-5.54,-1.653,13.08,-4.677,0,12.88,-4.781,-2.984,15.91,-5.036,-3.812,14.12,-4.522,-4.542,18.15,-2.926,-4.992,15.59,-4.009,0,12.34,-4.282,-1.986,12.68,-4.159,-2.124,13.07,-3.469,0,12.76,-3.607,-4.715,13.98,-3.938,-4.84,14.07,-3.067,-5.478,15.3,-2.761,-2.053,12.55,3.143,-4.39,12.58,2.417,-3.759,10.68,-2.976,-1.743,10.61,-3.544,-4.43,10.69,2.731,-2.149,10.5,3.491,-2.285,7.273,4.179,-4.689,7.255,3.609,-5.773,10.8,1.663,-5.92,7.344,1.875,-5.892,12.9,1.56,-5.775,14.88,2.139,-5.89,15.25,-2.217,-5.785,13.04,-1.747,-5.361,10.74,-1.843,-5.776,10.76,-0.2443,-6.096,12.51,-0.3041,-3.747,7.224,-3.051,-1.768,7.19,-3.738,-5.225,7.273,-1.88,-5.78,7.299,0.0032,-2.261,4.369,4.49,-4.822,4.437,4.037,-6.043,4.624,1.924,-3.764,4.432,-3.405,-1.753,4.283,-3.974,-5.992,4.566,-0.0058,-2.257,1.22,4.82,-5.089,1.21,4.443,-6.219,1.279,2.216,-3.936,1.103,-3.731,-1.822,1.09,-4.335,-5.229,4.527,-2.201,-5.4,1.151,-2.482,-6.343,1.209,-0.0692,-2.445,-1.356,4.657,-5.389,-1.315,4.417,-6.584,-1.285,2.332,-4.086,-1.384,-3.817,-2.066,-1.411,-4.526,-5.73,-1.347,-2.517,-6.701,-1.316,-0.0666,-8.091,16.84,-0.1246,-7.596,16.62,-1.263,-7.576,16.62,1.145,-6.822,15.17,1.54,-6.626,13.86,-1.384,-6.475,12.9,-0.2648,-6.481,13.3,1.035,0,15.86,2.169,-1.516,15.86,2.104,-1.279,17.05,1.36,-1.569,14.98,2.563,-3.88,15.65,2.312,-1.691,12.92,2.613,-4.389,12.61,2.402,-1.812,10.57,2.915,0,10.66,2.981,-1.99,7.306,3.43,-4.689,7.255,3.315,-4.43,10.69,2.731,0,7.365,3.495,-2.108,4.393,3.81,-4.822,4.437,3.743,0,4.452,3.797,-2.108,1.269,4.21,-4.74,1.21,4.063,0,1.363,4.263,-2.108,-0.0558,4.302,-4.621,-0.1151,3.943,0,0.0377,4.346,-2.124,-0.7558,4.093,-4.228,-0.7782,3.735,0,-0.7927,4.12,-6.094,0.0198,2.258,-6.067,1.274,2.239,-6.422,0.0575,-0.0592,-5.717,-0.7583,1.935,-5.98,-0.6986,-0.0058,0,4.283,-4.028,-7.209,14.7,-0.196,-1.899,-0.0313,-4.377,-3.88,-0.0049,-3.682,-3.708,-0.7279,-3.315,-1.859,-0.7495,-3.937,-5.446,0.0297,-2.485,-5.17,-0.704,-2.086,0,-0.8081,-3.961,-6.862,15.45,-1.715,-3.162,15.56,2.666,-3.096,15.57,2.712,-3.147,14.71,2.915,-3.211,14.72,2.866,-2.953,15.56,2.739,-3.009,14.64,2.949,-2.876,15.54,2.72,-2.935,14.6,2.934,-2.942,15.53,2.673,-3,14.6,2.885,-3.085,15.54,2.646,-3.138,14.66,2.851,-3.342,13.65,3.049,-3.406,13.65,2.999,-3.205,13.61,3.081,-3.132,13.58,3.062,-3.195,13.59,3.013,-3.332,13.63,2.981,-3.697,12.59,3.152,-3.76,12.6,3.102,-3.559,12.55,3.184,-3.486,12.52,3.165,-3.55,12.53,3.115,-3.687,12.57,3.084,-3.737,11.38,3.305,-3.799,11.36,3.258,-3.595,11.39,3.336,-3.516,11.39,3.319,-3.579,11.37,3.272,-3.72,11.35,3.241,-3.687,10.46,3.474,-3.75,10.43,3.426,-3.546,10.47,3.505,-3.466,10.46,3.488,-3.529,10.44,3.44,-3.671,10.43,3.409,1.848,21.36,-0.0594,1.737,21.27,0.4689,0.8492,21.16,1.078,0.9529,21.57,-1.207,1.596,21.48,-0.7204,1.882,19.81,0.8368,1.024,19.55,1.385,1.079,20.11,-1.547,1.76,20.02,-0.9517,2.166,19.96,0.0249,1.834,18.59,0.6777,0.9823,18.46,1.238,1.01,18.86,-1.603,1.617,18.82,-1.089,2.085,18.72,-0.0389,2.408,17.4,-0.0536,2.085,17.14,0.8258,1.124,16.9,1.321,1.196,17.61,-1.753,1.97,17.61,-1.268,0,18.87,-1.722,0,21.12,1.291,0,19.42,1.537,-1.848,21.36,-0.0594,-1.737,21.27,0.4689,-1.882,19.81,0.8368,-2.166,19.96,0.0249,-0.8492,21.16,1.078,-1.024,19.55,1.385,-0.9529,21.57,-1.207,-1.596,21.48,-0.7204,-1.76,20.02,-0.9517,-1.079,20.11,-1.547,-1.834,18.59,0.6777,-2.085,18.72,-0.0389,-0.9823,18.46,1.238,-1.01,18.86,-1.603,0,20.11,-1.705,-1.617,18.82,-1.089,-2.085,17.14,0.8258,-2.408,17.4,-0.0536,-1.124,16.9,1.321,-1.97,17.61,-1.268,-1.196,17.61,-1.753,0,21.6,-1.364,0,18.42,1.406,0,16.76,1.496,0,17.62,-1.89,1.272,17.17,-1.839,2.06,17.06,-1.342,2.625,16.71,-0.0349,2.265,16.37,1.07,1.204,16.09,1.635,0,17.18,-1.984,0,15.93,1.809,-2.625,16.71,-0.0349,-2.265,16.37,1.07,-1.272,17.17,-1.839,-2.06,17.06,-1.342,-1.204,16.09,1.635});
IndexedFaceSet198->setCoord(*Coordinate199);

CTextureCoordinate* TextureCoordinate200 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate200->setPoint(new float[876]{0.4262,0.4444,0.4315,0.4238,0.4007,0.4118,0.3959,0.4413,0.4141,0.3939,0.4759,0.4097,0.4772,0.3885,0.4457,0.3873,0.4491,0.4137,0.4785,0.3702,0.4459,0.3686,0.3972,0.3783,0.4453,0.3308,0.3896,0.3225,0.4452,0.2872,0.4803,0.3339,0.4826,0.2917,0.4445,0.2266,0.1013,0.5272,0.0801,0.5422,0.1101,0.5693,0.1277,0.5551,0.1527,0.5457,0.1253,0.5134,0.3034,0.4593,0.2724,0.4582,0.2775,0.4839,0.2501,0.4981,0.2353,0.4766,0.278,0.4931,0.2503,0.5111,0.2664,0.4519,0.2315,0.4579,0.1534,0.5067,0.2057,0.522,0.2063,0.5128,0.2017,0.484,0.1499,0.4783,0.1968,0.4726,0.1632,0.4639,0.0371,0.4937,0.0596,0.482,0.0513,0.4267,0.0184,0.4311,0.0881,0.4688,0.0973,0.4324,0.1492,0.4895,0.1235,0.4476,0.0184,0.4103,0.0587,0.4124,0.0692,0.3975,0.0247,0.3907,0.1156,0.4232,0.1271,0.4143,0.143,0.4365,0.3152,0.4028,0.2651,0.3937,0.1109,0.3516,0.0659,0.3509,0.2681,0.3579,0.3182,0.3613,0.3235,0.3019,0.2727,0.2938,0.2315,0.3558,0.2335,0.2927,0.2293,0.3928,0.2345,0.4292,0.1557,0.4345,0.1578,0.3929,0.1535,0.3524,0.1908,0.3535,0.1895,0.3833,0.1131,0.2884,0.0688,0.288,0.1534,0.2894,0.1946,0.2908,0.3334,0.2508,0.2802,0.2424,0.2356,0.2428,0.1105,0.2368,0.0669,0.235,0.1967,0.2404,0.3457,0.1953,0.2879,0.1835,0.2438,0.1816,0.1091,0.1757,0.0642,0.1766,0.1497,0.2387,0.1478,0.1764,0.1989,0.1784,0.3538,0.14,0.2942,0.1283,0.2475,0.1252,0.1095,0.1212,0.3886,0.2235,0.3907,0.2873,0.4857,0.2309,0.4443,0.1727,0.388,0.1716,0.4879,0.1771,0.4461,0.115,0.3917,0.1129,0.4897,0.1178,0.4465,0.0907,0.3945,0.0889,0.4901,0.0933,0.4459,0.0772,0.4004,0.0752,0.4903,0.0773,0.3574,0.0881,0.3469,0.1083,0.3132,0.0925,0.3528,0.0715,0.3126,0.0759,0.1832,0.0696,0.2242,0.0823,0.2282,0.0673,0.1894,0.0551,0.2626,0.0908,0.267,0.0749,0.148,0.052,0.1548,0.0378,0.0659,0.1218,0.1511,0.1214,0.2018,0.1228,0.1953,0.4648,0.1735,0.4563,0.2157,0.4519,0.2221,0.4331,0.1699,0.409,0.1907,0.3989,0.2152,0.4072,0.1813,0.5494,0.0293,0.35,0.032,0.2882,0.0306,0.2364,0.0266,0.1776,0.0236,0.1281,0.192,0.4219,0.1664,0.4375,0.4127,0.0397,0.4135,0.0407,0.4357,0.0428,0.4344,0.0418,0.4118,0.0385,0.4352,0.0404,0.4093,0.0354,0.4331,0.0373,0.4084,0.0344,0.432,0.0364,0.4101,0.0366,0.4326,0.0386,0.4599,0.0423,0.4586,0.0413,0.4589,0.0403,0.4566,0.0371,0.4553,0.0361,0.4563,0.0382,0.486,0.0441,0.4847,0.0431,0.485,0.0421,0.4827,0.0389,0.4814,0.0379,0.4824,0.04,0.5094,0.0392,0.5086,0.038,0.5077,0.0376,0.5051,0.0347,0.5042,0.0334,0.506,0.0351,0.5283,0.0363,0.5274,0.035,0.5265,0.0346,0.5239,0.0317,0.5231,0.0305,0.5248,0.0321,0.4262,0.4444,0.4315,0.4238,0.4007,0.4118,0.3959,0.4413,0.4141,0.3939,0.1013,0.5272,0.0801,0.5422,0.1101,0.5693,0.1277,0.5551,0.1527,0.5457,0.1253,0.5134,0.3034,0.4593,0.2724,0.4582,0.2775,0.4839,0.2501,0.4981,0.2353,0.4766,0.278,0.4931,0.2503,0.5111,0.2664,0.4519,0.2315,0.4579,0.1534,0.5067,0.2057,0.522,0.2063,0.5128,0.2017,0.484,0.1499,0.4783,0.1968,0.4726,0.1632,0.4639,0.0371,0.4937,0.0596,0.482,0.0513,0.4267,0.0184,0.4311,0.0881,0.4688,0.0973,0.4324,0.1492,0.4895,0.1235,0.4476,0.0184,0.4103,0.0587,0.4124,0.0692,0.3975,0.0247,0.3907,0.1156,0.4232,0.1271,0.4143,0.143,0.4365,0.3152,0.4028,0.2651,0.3937,0.1109,0.3516,0.0659,0.3509,0.2681,0.3579,0.3182,0.3613,0.3235,0.3019,0.2727,0.2938,0.2315,0.3558,0.2335,0.2927,0.2293,0.3928,0.2345,0.4292,0.1557,0.4345,0.1578,0.3929,0.1535,0.3524,0.1908,0.3535,0.1895,0.3833,0.1131,0.2884,0.0688,0.288,0.1534,0.2894,0.1946,0.2908,0.3334,0.2508,0.2802,0.2424,0.2356,0.2428,0.1105,0.2368,0.0669,0.235,0.1967,0.2404,0.3457,0.1953,0.2879,0.1835,0.2438,0.1816,0.1091,0.1757,0.0642,0.1766,0.1497,0.2387,0.1478,0.1764,0.1989,0.1784,0.3538,0.14,0.2942,0.1283,0.2475,0.1252,0.1095,0.1212,0.0659,0.1218,0.1511,0.1214,0.2018,0.1228,0.1953,0.4648,0.1735,0.4563,0.2157,0.4519,0.2221,0.4331,0.1699,0.409,0.1907,0.3989,0.2152,0.4072,0.1813,0.5494,0.4759,0.4097,0.4772,0.3885,0.4457,0.3873,0.4491,0.4137,0.4785,0.3702,0.4459,0.3686,0.3972,0.3783,0.4453,0.3308,0.3896,0.3225,0.4452,0.2872,0.4803,0.3339,0.4826,0.2917,0.4445,0.2266,0.3886,0.2235,0.3907,0.2873,0.4857,0.2309,0.4443,0.1727,0.388,0.1716,0.4879,0.1771,0.4461,0.115,0.3917,0.1129,0.4897,0.1178,0.4465,0.0907,0.3945,0.0889,0.4901,0.0933,0.4459,0.0772,0.4004,0.0752,0.4903,0.0773,0.3574,0.0881,0.3469,0.1083,0.3132,0.0925,0.3528,0.0715,0.3126,0.0759,0.0293,0.35,0.032,0.2882,0.0306,0.2364,0.0266,0.1776,0.0236,0.1281,0.192,0.4219,0.1832,0.0696,0.2242,0.0823,0.2282,0.0673,0.1894,0.0551,0.2626,0.0908,0.267,0.0749,0.148,0.052,0.1548,0.0378,0.1664,0.4375,0.4127,0.0397,0.4135,0.0407,0.4357,0.0428,0.4344,0.0418,0.4118,0.0385,0.4352,0.0404,0.4093,0.0354,0.4331,0.0373,0.4084,0.0344,0.432,0.0364,0.4101,0.0366,0.4326,0.0386,0.4599,0.0423,0.4586,0.0413,0.4589,0.0403,0.4566,0.0371,0.4553,0.0361,0.4563,0.0382,0.486,0.0441,0.4847,0.0431,0.485,0.0421,0.4827,0.0389,0.4814,0.0379,0.4824,0.04,0.5094,0.0392,0.5086,0.038,0.5077,0.0376,0.5051,0.0347,0.5042,0.0334,0.506,0.0351,0.5283,0.0363,0.5274,0.035,0.5265,0.0346,0.5239,0.0317,0.5231,0.0305,0.5248,0.0321,0.0793,0.1031,0.0906,0.1028,0.0924,0.0899,0.0785,0.0914,0.1136,0.1006,0.1095,0.0872,0.1316,0.0988,0.1265,0.0841,0.047,0.111,0.0638,0.1073,0.0615,0.0934,0.0458,0.0967,0.0911,0.0713,0.0773,0.0729,0.1089,0.0708,0.0442,0.0784,0.0272,0.0811,0.0278,0.0979,0.0575,0.0758,0.0922,0.0486,0.0768,0.0522,0.1107,0.048,0.0563,0.0571,0.0417,0.0597,0.027,0.1119,0.1255,0.0715,0.1296,0.0499,0.0225,0.0646,0.0793,0.1031,0.0906,0.1028,0.0924,0.0899,0.0785,0.0914,0.1136,0.1006,0.1095,0.0872,0.1316,0.0988,0.1265,0.0841,0.047,0.111,0.0638,0.1073,0.0615,0.0934,0.0458,0.0967,0.0911,0.0713,0.0773,0.0729,0.1089,0.0708,0.0442,0.0784,0.0272,0.0811,0.0278,0.0979,0.0575,0.0758,0.0922,0.0486,0.0768,0.0522,0.1107,0.048,0.0563,0.0571,0.0417,0.0597,0.027,0.1119,0.1255,0.0715,0.1296,0.0499,0.0225,0.0646,0.076,0.0368,0.0949,0.0316,0.1153,0.0309,0.0401,0.0486,0.0542,0.0446,0.0949,0.0316,0.076,0.0368,0.1153,0.0309,0.0542,0.0446,0.0401,0.0486,0.1356,0.0338,0.1356,0.0338,0.0191,0.0544,0.0191,0.0544,0.4262,0.4444,0.4315,0.4238,0.1101,0.5693,0.1277,0.5551,0.1527,0.5457,0.1813,0.5494,0.4491,0.4137,0.4759,0.4097,0.4315,0.4238,0.4262,0.4444,0.1277,0.5551,0.1101,0.5693,0.1527,0.5457,0.1813,0.5494,0.4759,0.4097,0.4491,0.4137});
IndexedFaceSet198->setTexCoord(*TextureCoordinate200);

Shape194->setGeometry(IndexedFaceSet198);

Transform193->addChildren(*Shape194);

HAnimSegment192->addChildren(*Transform193);

HAnimJoint191->addChildren(*HAnimSegment192);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setName("skullbase");
HAnimJoint201->setDEF("hanim_skullbase");
HAnimJoint201->setCenter(new float[3]{0,58.450001,-1.829});
HAnimJoint201->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment202 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment202->setName("skull");
HAnimSegment202->setDEF("hanim_skull");
CTransform* Transform203 = (CTransform *)(m_pScene.createNode("Transform"));
Transform203->setTranslation(new float[3]{0,58.450001,-1.829});
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance205 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material206 = (CMaterial *)(m_pScene.createNode("Material"));
Material206->setDiffuseColor(new float[3]{0.588,0.588,0.588});
Appearance205->setMaterial(*Material206);

CImageTexture* ImageTexture207 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture207->setUSE("RuTextureAtlas");
Appearance205->setTexture(*ImageTexture207);

Shape204->setAppearance(*Appearance205);

CIndexedFaceSet* IndexedFaceSet208 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet208->setCoordIndex(new int[2264]{56,57,19,-1,19,8,56,-1,7,6,18,-1,18,16,7,-1,10,17,18,-1,18,6,10,-1,15,63,9,-1,25,26,17,-1,17,10,25,-1,24,58,59,-1,59,5,24,-1,14,178,62,-1,62,8,14,-1,7,33,13,-1,13,6,7,-1,6,13,12,-1,12,10,6,-1,46,47,49,-1,49,48,46,-1,19,26,25,-1,25,8,19,-1,29,27,32,-1,32,0,29,-1,28,144,191,-1,191,32,28,-1,60,193,178,-1,178,14,60,-1,2,1,61,-1,61,34,2,-1,61,59,12,-1,12,13,61,-1,62,198,56,-1,56,8,62,-1,26,19,28,-1,28,31,26,-1,16,29,30,-1,30,15,16,-1,15,30,20,-1,20,22,15,-1,22,20,21,-1,21,23,22,-1,23,21,205,-1,205,206,23,-1,145,315,53,-1,53,0,145,-1,52,30,29,-1,29,143,52,-1,3,60,58,-1,58,24,3,-1,32,191,145,-1,145,0,32,-1,29,16,18,-1,18,27,29,-1,27,18,17,-1,17,31,27,-1,17,26,31,-1,21,20,55,-1,55,54,21,-1,30,52,55,-1,55,20,30,-1,4,2,34,-1,34,35,4,-1,9,37,42,-1,42,36,9,-1,9,11,38,-1,38,37,9,-1,11,35,39,-1,39,38,11,-1,35,34,40,-1,34,33,41,-1,41,40,34,-1,33,7,36,-1,36,41,33,-1,42,37,38,-1,38,43,42,-1,43,38,39,-1,39,44,43,-1,11,9,63,-1,63,45,11,-1,35,11,45,-1,45,4,35,-1,44,46,48,-1,48,43,44,-1,44,40,47,-1,47,46,44,-1,40,41,49,-1,49,47,40,-1,41,36,50,-1,50,49,41,-1,36,42,51,-1,51,50,36,-1,42,43,48,-1,48,51,42,-1,32,27,31,-1,31,28,32,-1,9,7,16,-1,16,15,9,-1,56,228,57,-1,57,228,229,-1,3,65,193,-1,193,60,3,-1,1,5,59,-1,59,61,1,-1,13,33,34,-1,34,61,13,-1,21,54,66,-1,66,205,21,-1,67,19,57,-1,57,229,67,-1,28,19,67,-1,67,144,28,-1,228,56,198,-1,48,49,50,-1,50,51,48,-1,40,44,39,-1,39,35,40,-1,36,7,9,-1,15,22,64,-1,64,63,15,-1,58,60,14,-1,14,68,58,-1,14,8,25,-1,25,68,14,-1,10,12,68,-1,68,25,10,-1,58,68,12,-1,12,59,58,-1,98,99,81,-1,81,72,98,-1,146,147,122,-1,122,114,146,-1,72,78,98,-1,74,92,91,-1,91,73,74,-1,74,114,122,-1,122,92,74,-1,114,74,104,-1,104,115,114,-1,129,76,105,-1,105,82,129,-1,148,250,116,-1,116,124,148,-1,114,115,252,-1,252,146,114,-1,116,250,149,-1,149,125,116,-1,79,104,74,-1,74,73,79,-1,70,100,99,-1,99,71,70,-1,75,95,97,-1,97,81,75,-1,77,140,129,-1,129,82,77,-1,107,106,77,-1,77,82,107,-1,83,84,109,-1,109,110,83,-1,86,111,88,-1,88,118,86,-1,150,275,276,-1,102,150,276,-1,119,102,276,-1,84,83,71,-1,71,69,84,-1,83,87,70,-1,70,71,83,-1,120,117,109,-1,109,112,120,-1,120,112,113,-1,113,121,120,-1,147,284,123,-1,123,122,147,-1,91,89,84,-1,84,69,91,-1,92,90,89,-1,89,91,92,-1,88,85,151,-1,151,152,88,-1,87,83,110,-1,110,111,87,-1,87,86,103,-1,103,70,87,-1,85,117,290,-1,290,151,85,-1,118,88,152,-1,152,291,118,-1,290,117,120,-1,120,153,290,-1,121,154,153,-1,153,120,121,-1,72,81,97,-1,97,96,72,-1,95,80,94,-1,94,97,95,-1,97,94,93,-1,93,96,97,-1,69,71,99,-1,99,98,69,-1,100,75,81,-1,81,99,100,-1,73,91,69,-1,69,98,73,-1,92,122,123,-1,123,90,92,-1,70,103,101,-1,101,100,70,-1,291,297,150,-1,118,291,150,-1,102,118,150,-1,121,123,284,-1,284,154,121,-1,107,108,104,-1,104,79,107,-1,116,125,108,-1,108,105,116,-1,116,105,76,-1,76,124,116,-1,79,78,106,-1,106,107,79,-1,252,115,125,-1,125,149,252,-1,107,82,105,-1,105,108,107,-1,115,104,108,-1,108,125,115,-1,117,85,110,-1,110,109,117,-1,86,87,111,-1,112,89,90,-1,90,113,112,-1,84,89,112,-1,112,109,84,-1,113,90,123,-1,123,121,113,-1,101,103,102,-1,102,119,101,-1,88,111,110,-1,110,85,88,-1,102,103,86,-1,86,118,102,-1,78,79,73,-1,73,98,78,-1,119,276,127,-1,127,128,119,-1,101,119,128,-1,128,126,101,-1,100,101,126,-1,126,75,100,-1,76,137,138,-1,138,124,76,-1,124,138,155,-1,155,148,124,-1,129,139,137,-1,137,76,129,-1,130,141,142,-1,142,131,130,-1,131,142,308,-1,308,156,131,-1,132,140,141,-1,141,130,132,-1,135,133,134,-1,134,136,135,-1,136,134,314,-1,314,157,136,-1,77,106,133,-1,133,135,77,-1,137,130,131,-1,131,138,137,-1,138,131,156,-1,156,155,138,-1,139,132,130,-1,130,137,139,-1,141,135,136,-1,136,142,141,-1,142,136,157,-1,157,308,142,-1,140,77,135,-1,135,141,140,-1,140,132,139,-1,139,129,140,-1,53,143,29,-1,29,0,53,-1,159,158,161,-1,161,160,159,-1,162,165,164,-1,164,163,162,-1,166,163,164,-1,164,167,166,-1,168,170,169,-1,171,166,167,-1,167,172,171,-1,174,173,176,-1,176,175,174,-1,177,158,62,-1,62,178,177,-1,162,163,180,-1,180,179,162,-1,163,166,181,-1,181,180,163,-1,183,182,185,-1,185,184,183,-1,161,158,171,-1,171,172,161,-1,186,189,188,-1,188,187,186,-1,190,188,191,-1,191,144,190,-1,192,177,178,-1,178,193,192,-1,195,194,197,-1,197,196,195,-1,197,180,181,-1,181,176,197,-1,62,158,159,-1,159,198,62,-1,172,199,190,-1,190,161,172,-1,165,168,200,-1,200,186,165,-1,168,202,201,-1,201,200,168,-1,202,204,203,-1,203,201,202,-1,204,206,205,-1,205,203,204,-1,145,189,207,-1,207,315,145,-1,209,208,186,-1,186,200,209,-1,210,174,175,-1,175,192,210,-1,188,189,145,-1,145,191,188,-1,186,187,164,-1,164,165,186,-1,187,199,167,-1,167,164,187,-1,167,199,172,-1,203,212,211,-1,211,201,203,-1,200,201,211,-1,211,209,200,-1,214,213,194,-1,194,195,214,-1,170,217,216,-1,216,215,170,-1,170,215,219,-1,219,218,170,-1,218,219,220,-1,220,213,218,-1,213,221,194,-1,194,221,222,-1,222,179,194,-1,179,222,217,-1,217,162,179,-1,216,223,219,-1,219,215,216,-1,223,224,220,-1,220,219,223,-1,218,225,169,-1,169,170,218,-1,213,214,225,-1,225,218,213,-1,224,223,182,-1,182,183,224,-1,224,183,184,-1,184,221,224,-1,221,184,185,-1,185,222,221,-1,222,185,226,-1,226,217,222,-1,217,226,227,-1,227,216,217,-1,216,227,182,-1,182,223,216,-1,188,190,199,-1,199,187,188,-1,170,168,165,-1,165,162,170,-1,159,160,228,-1,160,229,228,-1,210,192,193,-1,193,65,210,-1,196,197,176,-1,176,173,196,-1,180,197,194,-1,194,179,180,-1,203,205,66,-1,66,212,203,-1,67,229,160,-1,160,161,67,-1,190,144,67,-1,67,161,190,-1,228,198,159,-1,182,227,226,-1,226,185,182,-1,221,213,220,-1,220,224,221,-1,217,170,162,-1,168,169,230,-1,230,202,168,-1,175,231,177,-1,177,192,175,-1,177,231,171,-1,171,158,177,-1,166,171,231,-1,231,181,166,-1,175,176,181,-1,181,231,175,-1,233,232,235,-1,235,234,233,-1,146,236,237,-1,237,147,146,-1,232,233,238,-1,240,239,242,-1,242,241,240,-1,240,241,237,-1,237,236,240,-1,236,243,244,-1,244,240,236,-1,245,248,247,-1,247,246,245,-1,148,249,251,-1,251,250,148,-1,236,146,252,-1,252,243,236,-1,251,253,149,-1,149,250,251,-1,254,239,240,-1,240,244,254,-1,256,255,234,-1,234,257,256,-1,258,235,260,-1,260,259,258,-1,261,248,245,-1,245,262,261,-1,263,248,261,-1,261,264,263,-1,265,268,267,-1,267,266,265,-1,269,272,271,-1,271,270,269,-1,276,275,150,-1,276,150,274,-1,273,276,274,-1,266,277,255,-1,255,265,266,-1,265,255,256,-1,256,278,265,-1,280,279,267,-1,267,281,280,-1,280,282,283,-1,283,279,280,-1,147,237,285,-1,285,284,147,-1,242,277,266,-1,266,286,242,-1,241,242,286,-1,286,287,241,-1,271,152,151,-1,151,288,271,-1,278,270,268,-1,268,265,278,-1,278,256,289,-1,289,269,278,-1,288,151,290,-1,290,281,288,-1,272,291,152,-1,152,271,272,-1,290,153,280,-1,280,281,290,-1,282,280,153,-1,153,154,282,-1,232,292,260,-1,260,235,232,-1,259,260,294,-1,294,293,259,-1,260,292,295,-1,295,294,260,-1,277,233,234,-1,234,255,277,-1,257,234,235,-1,235,258,257,-1,239,233,277,-1,277,242,239,-1,241,287,285,-1,285,237,241,-1,256,257,296,-1,296,289,256,-1,150,297,291,-1,150,291,272,-1,274,150,272,-1,282,154,284,-1,284,285,282,-1,263,254,244,-1,244,298,263,-1,251,247,298,-1,298,253,251,-1,251,249,246,-1,246,247,251,-1,254,263,264,-1,264,238,254,-1,252,149,253,-1,253,243,252,-1,263,298,247,-1,247,248,263,-1,243,253,298,-1,298,244,243,-1,281,267,268,-1,268,288,281,-1,269,270,278,-1,279,283,287,-1,287,286,279,-1,266,267,279,-1,279,286,266,-1,283,282,285,-1,285,287,283,-1,296,273,274,-1,274,289,296,-1,271,288,268,-1,268,270,271,-1,274,272,269,-1,269,289,274,-1,238,233,239,-1,239,254,238,-1,273,299,127,-1,127,276,273,-1,296,300,299,-1,299,273,296,-1,257,258,300,-1,300,296,257,-1,246,249,302,-1,302,301,246,-1,249,148,155,-1,155,302,249,-1,245,246,301,-1,301,303,245,-1,305,304,307,-1,307,306,305,-1,304,156,308,-1,308,307,304,-1,309,305,306,-1,306,262,309,-1,310,313,312,-1,312,311,310,-1,313,157,314,-1,314,312,313,-1,261,310,311,-1,311,264,261,-1,301,302,304,-1,304,305,301,-1,302,155,156,-1,156,304,302,-1,303,301,305,-1,305,309,303,-1,306,307,313,-1,313,310,306,-1,307,308,157,-1,157,313,307,-1,262,306,310,-1,310,261,262,-1,262,245,303,-1,303,309,262,-1,207,189,186,-1,186,208,207,-1});
IndexedFaceSet208->setCreaseAngle(1.57);
IndexedFaceSet208->setTexCoordIndex(new int[2264]{1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,8,9,6,-1,6,5,8,-1,10,11,12,-1,13,14,9,-1,9,8,13,-1,16,17,18,-1,18,15,16,-1,19,20,21,-1,21,0,19,-1,4,22,23,-1,23,5,4,-1,5,23,24,-1,24,8,5,-1,26,27,28,-1,28,25,26,-1,3,14,13,-1,13,0,3,-1,29,30,31,-1,31,32,29,-1,33,34,54,-1,54,31,33,-1,35,36,20,-1,20,19,35,-1,38,39,40,-1,40,37,38,-1,40,18,24,-1,24,23,40,-1,21,41,1,-1,1,0,21,-1,14,3,33,-1,33,42,14,-1,7,29,43,-1,43,10,7,-1,10,43,44,-1,44,45,10,-1,45,44,46,-1,46,47,45,-1,47,46,48,-1,48,49,47,-1,50,361,51,-1,51,32,50,-1,52,43,29,-1,29,176,52,-1,53,35,17,-1,17,16,53,-1,31,54,50,-1,50,32,31,-1,29,7,6,-1,6,30,29,-1,30,6,9,-1,9,42,30,-1,9,14,42,-1,46,44,55,-1,55,56,46,-1,43,52,55,-1,55,44,43,-1,58,38,37,-1,37,57,58,-1,76,59,60,-1,60,61,76,-1,76,62,63,-1,63,59,76,-1,62,77,64,-1,64,63,62,-1,77,37,65,-1,37,22,66,-1,66,65,37,-1,22,4,61,-1,61,66,22,-1,60,59,63,-1,63,67,60,-1,67,63,64,-1,64,68,67,-1,78,12,11,-1,11,69,78,-1,57,78,69,-1,69,58,57,-1,68,26,25,-1,25,67,68,-1,68,65,27,-1,27,26,68,-1,65,66,28,-1,28,27,65,-1,66,61,70,-1,70,28,66,-1,61,60,71,-1,71,70,61,-1,60,67,25,-1,25,71,60,-1,31,30,42,-1,42,33,31,-1,12,4,7,-1,7,10,12,-1,1,72,2,-1,2,72,73,-1,53,74,36,-1,36,35,53,-1,39,15,18,-1,18,40,39,-1,23,22,37,-1,37,40,23,-1,46,56,79,-1,79,48,46,-1,75,3,2,-1,2,73,75,-1,33,3,75,-1,75,34,33,-1,72,1,41,-1,25,28,70,-1,70,71,25,-1,65,68,64,-1,64,77,65,-1,61,4,76,-1,10,45,80,-1,80,81,10,-1,17,35,19,-1,19,82,17,-1,19,0,13,-1,13,82,19,-1,8,24,82,-1,82,13,8,-1,17,82,24,-1,24,18,17,-1,84,85,86,-1,86,83,84,-1,88,89,90,-1,90,87,88,-1,83,91,84,-1,93,94,95,-1,95,92,93,-1,93,87,90,-1,90,94,93,-1,87,93,97,-1,97,96,87,-1,98,99,100,-1,100,101,98,-1,103,104,105,-1,105,102,103,-1,87,96,106,-1,106,88,87,-1,105,104,107,-1,107,108,105,-1,109,97,93,-1,93,92,109,-1,111,112,85,-1,85,110,111,-1,113,114,115,-1,115,86,113,-1,116,117,98,-1,98,101,116,-1,118,119,116,-1,116,101,118,-1,120,121,122,-1,122,123,120,-1,124,125,126,-1,126,127,124,-1,177,179,130,-1,129,177,130,-1,128,129,130,-1,121,120,110,-1,110,131,121,-1,120,132,111,-1,111,110,120,-1,134,135,122,-1,122,133,134,-1,134,133,137,-1,137,136,134,-1,89,138,139,-1,139,90,89,-1,95,140,121,-1,121,131,95,-1,94,141,140,-1,140,95,94,-1,126,142,143,-1,143,144,126,-1,132,120,123,-1,123,125,132,-1,132,124,145,-1,145,111,132,-1,142,135,146,-1,146,143,142,-1,127,126,144,-1,144,147,127,-1,146,135,134,-1,134,148,146,-1,136,149,148,-1,148,134,136,-1,83,86,115,-1,115,150,83,-1,114,151,152,-1,152,115,114,-1,115,152,153,-1,153,150,115,-1,131,110,85,-1,85,84,131,-1,112,113,86,-1,86,85,112,-1,92,95,131,-1,131,84,92,-1,94,90,139,-1,139,141,94,-1,111,145,154,-1,154,112,111,-1,147,178,177,-1,127,147,177,-1,129,127,177,-1,136,139,138,-1,138,149,136,-1,118,155,97,-1,97,109,118,-1,105,108,155,-1,155,100,105,-1,105,100,99,-1,99,102,105,-1,109,91,119,-1,119,118,109,-1,106,96,108,-1,108,107,106,-1,118,101,100,-1,100,155,118,-1,96,97,155,-1,155,108,96,-1,135,142,123,-1,123,122,135,-1,124,132,125,-1,133,140,141,-1,141,137,133,-1,121,140,133,-1,133,122,121,-1,137,141,139,-1,139,136,137,-1,154,145,129,-1,129,128,154,-1,126,125,123,-1,123,142,126,-1,129,145,124,-1,124,127,129,-1,91,109,92,-1,92,84,91,-1,128,130,156,-1,156,157,128,-1,154,128,157,-1,157,158,154,-1,112,154,158,-1,158,113,112,-1,99,159,160,-1,160,102,99,-1,102,160,161,-1,161,103,102,-1,98,162,159,-1,159,99,98,-1,164,165,166,-1,166,163,164,-1,163,166,168,-1,168,167,163,-1,169,117,165,-1,165,164,169,-1,170,171,172,-1,172,173,170,-1,173,172,174,-1,174,175,173,-1,116,119,171,-1,171,170,116,-1,159,164,163,-1,163,160,159,-1,160,163,167,-1,167,161,160,-1,162,169,164,-1,164,159,162,-1,165,170,173,-1,173,166,165,-1,166,173,175,-1,175,168,166,-1,117,116,170,-1,170,165,117,-1,117,169,162,-1,162,98,117,-1,51,176,29,-1,29,32,51,-1,181,180,183,-1,183,182,181,-1,184,187,186,-1,186,185,184,-1,188,185,186,-1,186,189,188,-1,190,192,191,-1,193,188,189,-1,189,194,193,-1,196,195,198,-1,198,197,196,-1,199,180,201,-1,201,200,199,-1,184,185,203,-1,203,202,184,-1,185,188,204,-1,204,203,185,-1,206,205,208,-1,208,207,206,-1,183,180,193,-1,193,194,183,-1,209,212,211,-1,211,210,209,-1,213,211,215,-1,215,214,213,-1,216,199,200,-1,200,217,216,-1,219,218,221,-1,221,220,219,-1,221,203,204,-1,204,198,221,-1,201,180,181,-1,181,222,201,-1,194,223,213,-1,213,183,194,-1,187,190,224,-1,224,209,187,-1,190,226,225,-1,225,224,190,-1,226,228,227,-1,227,225,226,-1,228,230,229,-1,229,227,228,-1,231,212,232,-1,232,360,231,-1,234,233,209,-1,209,224,234,-1,235,196,197,-1,197,216,235,-1,211,212,231,-1,231,215,211,-1,209,210,186,-1,186,187,209,-1,210,223,189,-1,189,186,210,-1,189,223,194,-1,227,237,236,-1,236,225,227,-1,224,225,236,-1,236,234,224,-1,239,238,218,-1,218,219,239,-1,240,243,242,-1,242,241,240,-1,240,241,245,-1,245,244,240,-1,244,245,247,-1,247,246,244,-1,246,248,218,-1,218,248,249,-1,249,202,218,-1,202,249,243,-1,243,184,202,-1,242,250,245,-1,245,241,242,-1,250,251,247,-1,247,245,250,-1,253,252,191,-1,191,192,253,-1,238,239,252,-1,252,253,238,-1,251,250,205,-1,205,206,251,-1,251,206,207,-1,207,248,251,-1,248,207,208,-1,208,249,248,-1,249,208,254,-1,254,243,249,-1,243,254,255,-1,255,242,243,-1,242,255,205,-1,205,250,242,-1,211,213,223,-1,223,210,211,-1,192,190,187,-1,187,184,192,-1,181,182,256,-1,182,257,256,-1,235,216,217,-1,217,258,235,-1,220,221,198,-1,198,195,220,-1,203,221,218,-1,218,202,203,-1,227,229,259,-1,259,237,227,-1,260,257,182,-1,182,183,260,-1,213,214,260,-1,260,183,213,-1,256,222,181,-1,205,255,254,-1,254,208,205,-1,248,246,247,-1,247,251,248,-1,243,240,184,-1,190,262,261,-1,261,226,190,-1,197,263,199,-1,199,216,197,-1,199,263,193,-1,193,180,199,-1,188,193,263,-1,263,204,188,-1,197,198,204,-1,204,263,197,-1,265,264,267,-1,267,266,265,-1,269,268,271,-1,271,270,269,-1,264,265,272,-1,274,273,276,-1,276,275,274,-1,274,275,271,-1,271,268,274,-1,268,277,278,-1,278,274,268,-1,279,282,281,-1,281,280,279,-1,284,283,286,-1,286,285,284,-1,268,269,287,-1,287,277,268,-1,286,289,288,-1,288,285,286,-1,290,273,274,-1,274,278,290,-1,292,291,266,-1,266,293,292,-1,294,267,296,-1,296,295,294,-1,297,282,279,-1,279,298,297,-1,299,282,297,-1,297,300,299,-1,301,304,303,-1,303,302,301,-1,305,308,307,-1,307,306,305,-1,313,312,311,-1,313,311,310,-1,309,313,310,-1,302,314,291,-1,291,301,302,-1,301,291,292,-1,292,315,301,-1,317,316,303,-1,303,318,317,-1,317,319,320,-1,320,316,317,-1,270,271,322,-1,322,321,270,-1,276,314,302,-1,302,323,276,-1,275,276,323,-1,323,324,275,-1,307,327,326,-1,326,325,307,-1,315,306,304,-1,304,301,315,-1,315,292,328,-1,328,305,315,-1,325,326,329,-1,329,318,325,-1,308,330,327,-1,327,307,308,-1,329,331,317,-1,317,318,329,-1,319,317,331,-1,331,332,319,-1,264,333,296,-1,296,267,264,-1,295,296,335,-1,335,334,295,-1,296,333,336,-1,336,335,296,-1,314,265,266,-1,266,291,314,-1,293,266,267,-1,267,294,293,-1,273,265,314,-1,314,276,273,-1,275,324,322,-1,322,271,275,-1,292,293,337,-1,337,328,292,-1,311,338,330,-1,311,330,308,-1,310,311,308,-1,319,332,321,-1,321,322,319,-1,299,290,278,-1,278,339,299,-1,286,281,339,-1,339,289,286,-1,286,283,280,-1,280,281,286,-1,290,299,300,-1,300,272,290,-1,287,288,289,-1,289,277,287,-1,299,339,281,-1,281,282,299,-1,277,289,339,-1,339,278,277,-1,318,303,304,-1,304,325,318,-1,305,306,315,-1,316,320,324,-1,324,323,316,-1,302,303,316,-1,316,323,302,-1,320,319,322,-1,322,324,320,-1,337,309,310,-1,310,328,337,-1,307,325,304,-1,304,306,307,-1,310,308,305,-1,305,328,310,-1,272,265,273,-1,273,290,272,-1,309,341,340,-1,340,313,309,-1,337,342,341,-1,341,309,337,-1,293,294,342,-1,342,337,293,-1,280,283,344,-1,344,343,280,-1,283,284,345,-1,345,344,283,-1,279,280,343,-1,343,346,279,-1,348,347,350,-1,350,349,348,-1,347,351,352,-1,352,350,347,-1,353,348,349,-1,349,298,353,-1,354,357,356,-1,356,355,354,-1,357,359,358,-1,358,356,357,-1,297,354,355,-1,355,300,297,-1,343,344,347,-1,347,348,343,-1,344,345,351,-1,351,347,344,-1,346,343,348,-1,348,353,346,-1,349,350,357,-1,357,354,349,-1,350,352,359,-1,359,357,350,-1,298,349,354,-1,354,297,298,-1,298,279,346,-1,346,353,298,-1,232,212,209,-1,209,233,232,-1});
CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[948]{1.079,-0.6566,1.833,5.073,7.007,2.332,5.209,5.705,0.1804,0.9912,7.171,5.043,5.124,5.268,-1.688,4.25,7.171,4.041,4.271,2.4,2.314,4.479,2.34,0.1279,0.8825,2.458,4.843,4.523,2.446,-0.2163,3.853,2.407,3.88,5.156,3.633,-0.5852,4.057,3.762,3.794,4.713,3.697,2.338,0.8675,3.799,4.753,3.677,0.9444,-0.807,3.782,0.8045,0.4075,3.234,1.331,3.757,3.565,0.9109,2.342,0.851,1.444,5,2.467,-0.091,-1.72,1.486,0.2676,-2.868,3.126,1.319,-2.465,1.868,1.344,-4.1,2.94,7.219,4.487,2.401,2.419,4.419,2.204,1.443,4.472,2.519,-0.024,2.475,0.9064,0.2181,4.535,2.538,-0.2311,1.079,2.446,-0.0433,-0.2376,2.138,0.6273,4.357,1.091,-0.4897,2.653,4.97,3.581,-0.2215,5.103,4.8,-0.0502,5.129,4.786,-0.4193,4.665,2.361,0.0758,4.889,2.585,-0.6747,5.524,3.934,-1.356,5.461,4.719,-1.01,5.209,4.793,-0.0853,5.099,3.568,-0.2877,5.013,2.583,-0.5238,5.666,3.943,-1.19,5.566,4.736,-0.8064,5.108,3.773,-1.494,5.539,4.639,-0.776,5.249,4.712,-0.1793,5.63,3.984,-1.114,5.14,3.57,-0.368,4.759,2.48,-0.0549,4.988,2.672,-0.4763,1.882,-0.4233,-0.0496,0.9172,-0.8096,1.124,0.933,-0.3619,-1.521,1.531,-0.3548,-0.9213,0.6038,2.13,5.375,0.5828,1.723,5.443,2.655,5.162,4.321,4.096,5.056,3.912,0.8711,5.183,4.748,4.92,4.846,2.335,0,2.661,5.075,4.461,2.452,-1.372,3.574,2.479,-2.907,0,7.145,5.263,0,-0.3674,-1.661,0,1.33,5.18,2.543,3.799,4.246,5.634,7.635,0.173,4.712,7.401,4.237,5.449,7.54,2.482,5.607,4.622,0.0541,5.203,5.922,-2.242,3.841,5.704,-4.226,4.636,4.857,3.49,3.003,0.4779,-3.154,4.823,1.882,-0.8849,5.552,4.892,-0.7547,5.23,4.866,-2.213,4.538,2.161,2.25,5.458,4.574,1.856,4.676,1.884,-2.167,4.888,9.259,2.693,5.126,9.406,0.309,1.933,11.51,2.803,2.958,8.663,5.028,4.242,8.873,4.24,1.755,10.35,4.332,4.72,9.229,-2.071,3.561,8.823,-3.931,5.155,7.489,-2.221,3.824,7.176,-4.169,4.985,1.988,0.3643,4.893,1.892,1.44,4.67,3.269,2.702,5.281,3.371,0.079,5.23,3.357,1.595,5.732,6.029,0.1085,5.549,5.864,2.193,4.619,5.644,4.036,3.148,5.825,5.054,1.614,7.571,5.445,3.044,7.365,5.094,3.774,4.616,-4.155,3.307,1.688,-3.678,5.261,3.424,-0.8545,5.072,3.389,-2.209,3.59,3.232,-3.986,3.696,11.19,0.3043,3.564,10.84,2.745,3.392,9.96,4.065,3.416,10.82,-2.211,2.91,10.08,-3.525,2.04,5.569,-5.209,1.912,4.458,-5.15,1.634,1.6,-4.705,2.047,12.11,0.2994,1.627,8.988,5.363,1.682,5.91,5.527,1.883,11.52,-2.26,1.78,10.41,-4.046,2.023,7.085,-5.207,1.968,8.547,-4.92,1.452,0.3202,-4.003,1.79,3.142,-4.958,3.166,5.241,4.578,0,5.447,5.325,1.555,5.326,5.117,4.053,0.7188,-1.982,2.829,-0.2723,-1.261,1.416,-0.5066,-2.216,3.682,0.1336,-0.4562,3.573,3.097,-1.091,2.121,2.95,-1.848,3.278,1.437,-1.186,1.824,1.255,-1.948,2.916,-0.248,-2.467,1.434,-0.4441,-3.369,3.788,-0.0053,-1.504,4.325,0.9271,-0.6706,3.054,0.5824,-1.223,1.62,0.374,-2.082,1.641,-0.5827,0.6125,0,0.0583,4.638,0,-0.7652,1.862,0,5.505,-5.485,0,7.052,-5.515,0,0.3074,-4.223,0,3.068,-5.195,0,7.712,5.634,0,11.69,2.849,0,10.49,4.451,0,11.76,-2.224,0,10.58,-4.204,0,-0.4577,-3.589,0,-0.4301,-2.436,0,1.172,-2.436,-0.8825,2.458,4.843,-0.6038,2.13,5.375,-0.5828,1.723,5.443,-0.851,1.444,5,-4.479,2.34,0.1279,-4.271,2.4,2.314,-3.565,0.9109,2.342,-3.782,0.8045,0.4075,-3.853,2.407,3.88,-3.234,1.331,3.757,-3.677,0.9444,-0.807,-4.461,2.452,-1.372,-4.523,2.446,-0.2163,-2.401,2.419,4.419,-2.204,1.443,4.472,-4.25,7.171,4.041,-2.94,7.219,4.487,-2.655,5.162,4.321,-4.096,5.056,3.912,-0.8675,3.799,4.753,0,3.799,5.065,-4.97,3.581,-0.2215,-4.713,3.697,2.338,-4.057,3.762,3.794,-5.63,3.984,-1.114,-5.539,4.639,-0.776,-5.249,4.712,-0.1793,-5.14,3.57,-0.368,-2.538,-0.2311,1.079,-2.519,-0.024,2.475,-1.091,-0.4897,2.653,-1.079,-0.6566,1.833,-0.9064,0.2181,4.535,0,-0.6077,2.764,-0.8711,5.183,4.748,0,5.233,5.068,-5.103,4.8,-0.0502,-5.209,5.705,0.1804,-5.073,7.007,2.332,-4.92,4.846,2.335,0,2.302,5.449,-2.138,0.6273,4.357,-2.446,-0.0433,-0.2376,-2.467,-0.091,-1.72,-3.126,1.319,-2.465,-1.486,0.2676,-2.868,-1.868,1.344,-4.1,0,0.2863,-3.065,0,1.372,-4.46,-0.9172,-0.8096,1.124,-1.641,-0.5827,0.6125,-1.882,-0.4233,-0.0496,-0.9912,7.171,5.043,-1.531,-0.3548,-0.9213,-0.933,-0.3619,-1.521,-5.129,4.786,-0.4193,-5.124,5.268,-1.688,-4.889,2.585,-0.6747,-5.013,2.583,-0.5238,-4.665,2.361,0.0758,-5.156,3.633,-0.5852,-5.524,3.934,-1.356,-5.461,4.719,-1.01,-5.209,4.793,-0.0853,-5.099,3.568,-0.2877,-5.666,3.943,-1.19,-5.566,4.736,-0.8064,-5.108,3.773,-1.494,-4.759,2.48,-0.0549,-4.988,2.672,-0.4763,0,1.857,5.671,0,1.59,5.527,-3.574,2.479,-2.907,-2.543,3.799,4.246,-5.607,4.622,0.0541,-5.732,6.029,0.1085,-5.549,5.864,2.193,-5.458,4.574,1.856,-2.04,5.569,-5.209,-2.023,7.085,-5.207,-5.552,4.892,-0.7547,-5.203,5.922,-2.242,-3.841,5.704,-4.226,-3.824,7.176,-4.169,-5.155,7.489,-2.221,-1.912,4.458,-5.15,-3.774,4.616,-4.155,-4.053,0.7188,-1.982,-3.003,0.4779,-3.154,-3.307,1.688,-3.678,-4.676,1.884,-2.167,-1.452,0.3202,-4.003,0,1.525,-4.839,-1.634,1.6,-4.705,0,4.356,-5.377,-1.79,3.142,-4.958,-5.23,4.866,-2.213,-5.449,7.54,2.482,-4.712,7.401,4.237,-4.619,5.644,4.036,-4.636,4.857,3.49,-4.67,3.269,2.702,-5.23,3.357,1.595,-4.823,1.882,-0.8849,-4.325,0.9271,-0.6706,-5.072,3.389,-2.209,-5.261,3.424,-0.8545,-4.888,9.259,2.693,-5.126,9.406,0.309,-3.696,11.19,0.3043,-3.564,10.84,2.745,-2.958,8.663,5.028,-3.392,9.96,4.065,-1.755,10.35,4.332,-1.627,8.988,5.363,-1.682,5.91,5.527,-1.614,7.571,5.445,0,6.137,5.728,0,6.032,5.734,-5.634,7.635,0.173,-4.242,8.873,4.24,-3.416,10.82,-2.211,-1.883,11.52,-2.26,-2.047,12.11,0.2994,-1.78,10.41,-4.046,-2.91,10.08,-3.525,0,8.551,-5.207,-1.968,8.547,-4.92,-4.72,9.229,-2.071,-3.561,8.823,-3.931,-1.933,11.51,2.803,-3.044,7.365,5.094,0,12.35,0.2945,0,9.182,5.533,-5.281,3.371,0.079,-4.538,2.161,2.25,-4.893,1.892,1.44,-4.985,1.988,0.3643,-3.148,5.825,5.054,0,9.09,5.539,-3.59,3.232,-3.986,-1.555,5.326,5.117,-3.166,5.241,4.578,-2.916,-0.248,-2.467,-1.434,-0.4441,-3.369,-3.788,-0.0053,-1.504,-1.416,-0.5066,-2.216,-2.829,-0.2723,-1.261,-3.054,0.5824,-1.223,-1.62,0.374,-2.082,0,0.3256,-2.436,-3.682,0.1336,-0.4562,-3.278,1.437,-1.186,-3.573,3.097,-1.091,-2.121,2.95,-1.848,-1.824,1.255,-1.948,0,2.865,-2.436,0,-0.9507,1.254});
IndexedFaceSet208->setCoord(*Coordinate209);

CTextureCoordinate* TextureCoordinate210 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate210->setPoint(new float[724]{0.0711,0.7869,0.0508,0.7677,0.0509,0.7527,0.0736,0.7437,0.354,0.7628,0.2661,0.7945,0.2506,0.7508,0.3251,0.7259,0.1936,0.8017,0.1832,0.7629,0.3682,0.6983,0.4089,0.7465,0.3643,0.7596,0.1385,0.7949,0.1355,0.7583,0.2136,0.9801,0.1509,0.9796,0.1441,0.8998,0.2091,0.8993,0.0717,0.8407,0.0282,0.8377,0.0287,0.7926,0.3758,0.8129,0.2746,0.8413,0.2069,0.8507,0.4185,0.8282,0.395,0.8433,0.3736,0.8554,0.3823,0.8116,0.2618,0.6608,0.213,0.6881,0.1714,0.6426,0.1999,0.6217,0.0914,0.7041,0.0598,0.681,0.0709,0.8947,0.0248,0.8935,0.3755,0.862,0.3749,0.8976,0.2953,0.9655,0.2816,0.8841,0.0254,0.7758,0.1247,0.7332,0.3143,0.6453,0.3671,0.6152,0.4198,0.6436,0.4007,0.5621,0.4676,0.5698,0.397,0.4976,0.4676,0.4868,0.1664,0.5806,0.2143,0.6034,0.2932,0.6222,0.0622,0.9716,0.1343,0.6043,0.3265,0.5923,0.3453,0.5548,0.3905,0.8546,0.4458,0.8598,0.3854,0.7828,0.3789,0.7825,0.3599,0.7632,0.4283,0.8258,0.4194,0.8298,0.393,0.8376,0.3742,0.8623,0.3802,0.8125,0.4204,0.8292,0.3907,0.839,0.4257,0.8041,0.3616,0.7707,0.3781,0.7819,0.0219,0.7529,0.0295,0.7388,0.0183,0.9673,0.0401,0.7234,0.3805,0.7636,0.3907,0.8623,0.3879,0.8076,0.3427,0.5075,0.4625,0.6722,0.4155,0.7315,0.1428,0.8476,0.6201,0.7958,0.6157,0.8176,0.5793,0.807,0.5869,0.7899,0.6962,0.9046,0.7183,0.9329,0.6982,0.9485,0.6798,0.9184,0.6419,0.8079,0.6487,0.8429,0.6748,0.8756,0.6606,0.8889,0.634,0.8614,0.7083,0.8962,0.6843,0.8667,0.7171,0.8167,0.7266,0.8406,0.7151,0.8484,0.7005,0.8164,0.7519,0.858,0.7739,0.8707,0.7619,0.889,0.7389,0.8727,0.7316,0.9207,0.7456,0.907,0.7223,0.8855,0.6597,0.8304,0.5689,0.829,0.5396,0.8243,0.5435,0.7999,0.5535,0.7816,0.5719,0.7663,0.5923,0.7722,0.706,0.7946,0.7226,0.7962,0.6796,0.8198,0.6782,0.7927,0.5559,0.8526,0.5879,0.8656,0.5726,0.8984,0.5408,0.8808,0.509,0.8465,0.5251,0.8648,0.5023,0.8815,0.4887,0.8578,0.4845,0.8098,0.4851,0.8357,0.4555,0.8158,0.6026,0.8407,0.5326,0.845,0.6072,0.9137,0.5996,0.9403,0.5596,0.9259,0.6329,0.9426,0.629,0.9218,0.6747,0.9614,0.6616,0.9301,0.6181,0.8832,0.6436,0.9052,0.524,0.9038,0.5026,0.9285,0.4776,0.8985,0.509,0.8272,0.5447,0.9572,0.4633,0.8693,0.5924,0.9717,0.6361,0.9727,0.6179,0.7742,0.5804,0.7556,0.5957,0.7549,0.6135,0.7577,0.5115,0.8039,0.6985,0.8574,0.4553,0.8042,0.483,0.7986,0.5152,0.7926,0.7291,0.8326,0.7568,0.8466,0.7802,0.8551,0.7271,0.8125,0.759,0.83,0.731,0.8213,0.7316,0.8147,0.7585,0.8168,0.7835,0.835,0.7863,0.8206,0.7328,0.8013,0.7293,0.8024,0.7165,0.7788,0.7479,0.7775,0.7552,0.8032,0.787,0.7791,0.7872,0.8058,0.2574,0.6226,0.458,0.8433,0.4629,0.8677,0.4556,0.8175,0.0711,0.7869,0.0508,0.7677,0.0509,0.7527,0.0736,0.7437,0.354,0.7628,0.2661,0.7945,0.2506,0.7508,0.3251,0.7259,0.1936,0.8017,0.1832,0.7629,0.3682,0.6983,0.4089,0.7465,0.3643,0.7596,0.1385,0.7949,0.1355,0.7583,0.2136,0.9801,0.1509,0.9796,0.1441,0.8998,0.2091,0.8993,0.0717,0.8407,0.0282,0.8377,0.0287,0.7926,0.3758,0.8129,0.2746,0.8413,0.2069,0.8507,0.4185,0.8282,0.395,0.8433,0.3736,0.8554,0.3823,0.8116,0.2618,0.6608,0.213,0.6881,0.1714,0.6426,0.1999,0.6217,0.0914,0.7041,0.0598,0.681,0.1343,0.6043,0.0709,0.8947,0.0248,0.8935,0.3755,0.862,0.3749,0.8976,0.2953,0.9655,0.2816,0.8841,0.0254,0.7758,0.1247,0.7332,0.3143,0.6453,0.3671,0.6152,0.4198,0.6436,0.4007,0.5621,0.4676,0.5698,0.397,0.4976,0.4676,0.4868,0.1664,0.5806,0.2143,0.6034,0.2574,0.6226,0.2932,0.6222,0.0622,0.9716,0.3265,0.5923,0.3453,0.5548,0.3905,0.8546,0.4458,0.8598,0.3805,0.7636,0.3854,0.7828,0.3789,0.7825,0.3599,0.7632,0.4283,0.8258,0.4194,0.8298,0.3907,0.8623,0.393,0.8376,0.3742,0.8623,0.3802,0.8125,0.4204,0.8292,0.3907,0.839,0.4257,0.8041,0.3879,0.8076,0.3616,0.7707,0.3781,0.7819,0.0219,0.7529,0.0295,0.7388,0.0183,0.9673,0.3427,0.5075,0.0401,0.7234,0.4625,0.6722,0.4155,0.7315,0.1428,0.8476,0.6201,0.7958,0.6157,0.8176,0.5793,0.807,0.5869,0.7899,0.6962,0.9046,0.7183,0.9329,0.6982,0.9485,0.6798,0.9184,0.6419,0.8079,0.6487,0.8429,0.6748,0.8756,0.6606,0.8889,0.634,0.8614,0.7083,0.8962,0.6843,0.8667,0.7171,0.8167,0.7266,0.8406,0.7151,0.8484,0.7005,0.8164,0.7519,0.858,0.7739,0.8707,0.7619,0.889,0.7389,0.8727,0.7316,0.9207,0.7456,0.907,0.7223,0.8855,0.6597,0.8304,0.5689,0.829,0.5396,0.8243,0.5435,0.7999,0.5535,0.7816,0.5719,0.7663,0.5923,0.7722,0.706,0.7946,0.7226,0.7962,0.6796,0.8198,0.6782,0.7927,0.5559,0.8526,0.5879,0.8656,0.5726,0.8984,0.5408,0.8808,0.509,0.8465,0.5251,0.8648,0.5023,0.8815,0.4887,0.8578,0.4845,0.8098,0.4851,0.8357,0.458,0.8433,0.4556,0.8175,0.4555,0.8158,0.6026,0.8407,0.5326,0.845,0.6072,0.9137,0.5996,0.9403,0.5596,0.9259,0.6329,0.9426,0.629,0.9218,0.6747,0.9614,0.6616,0.9301,0.6181,0.8832,0.6436,0.9052,0.524,0.9038,0.5026,0.9285,0.4776,0.8985,0.509,0.8272,0.5447,0.9572,0.4633,0.8693,0.5924,0.9717,0.6361,0.9727,0.6179,0.7742,0.5804,0.7556,0.5957,0.7549,0.6135,0.7577,0.5115,0.8039,0.4629,0.8677,0.6985,0.8574,0.4553,0.8042,0.483,0.7986,0.5152,0.7926,0.7291,0.8326,0.7568,0.8466,0.7802,0.8551,0.7271,0.8125,0.759,0.83,0.731,0.8213,0.7316,0.8147,0.7585,0.8168,0.7835,0.835,0.7863,0.8206,0.7328,0.8013,0.7293,0.8024,0.7165,0.7788,0.7479,0.7775,0.7552,0.8032,0.787,0.7791,0.7872,0.8058,0.1802,0.5703,0.1802,0.5703});
IndexedFaceSet208->setTexCoord(*TextureCoordinate210);

Shape204->setGeometry(IndexedFaceSet208);

Transform203->addChildren(*Shape204);

HAnimSegment202->addChildren(*Transform203);

HAnimJoint201->addChildren(*HAnimSegment202);

HAnimJoint191->addChildren(*HAnimJoint201);

HAnimJoint121->addChildren(*HAnimJoint191);

HAnimJoint31->addChildren(*HAnimJoint121);

HAnimHumanoid23->setSkeleton(*HAnimJoint31);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setUSE("hanim_humanoid_root");
HAnimHumanoid23->addJoints(*HAnimJoint211);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setUSE("hanim_sacroiliac");
HAnimHumanoid23->addJoints(*HAnimJoint212);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setUSE("hanim_skullbase");
HAnimHumanoid23->addJoints(*HAnimJoint213);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setUSE("hanim_vl5");
HAnimHumanoid23->addJoints(*HAnimJoint214);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setUSE("hanim_l_elbow");
HAnimHumanoid23->addJoints(*HAnimJoint215);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setUSE("hanim_r_elbow");
HAnimHumanoid23->addJoints(*HAnimJoint216);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setUSE("hanim_l_hip");
HAnimHumanoid23->addJoints(*HAnimJoint217);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("hanim_r_hip");
HAnimHumanoid23->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("hanim_l_knee");
HAnimHumanoid23->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("hanim_r_knee");
HAnimHumanoid23->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("hanim_l_radiocarpal");
HAnimHumanoid23->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("hanim_r_radiocarpal");
HAnimHumanoid23->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("hanim_l_shoulder");
HAnimHumanoid23->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("hanim_r_shoulder");
HAnimHumanoid23->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("hanim_l_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("hanim_r_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint228);

CHAnimSegment* HAnimSegment229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment229->setUSE("hanim_l5");
HAnimHumanoid23->setSegments(*HAnimSegment229);

CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment230->setUSE("hanim_pelvis");
HAnimHumanoid23->setSegments(*HAnimSegment230);

CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setUSE("hanim_sacrum");
HAnimHumanoid23->setSegments(*HAnimSegment231);

CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setUSE("hanim_skull");
HAnimHumanoid23->setSegments(*HAnimSegment232);

CHAnimSegment* HAnimSegment233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment233->setUSE("hanim_l_calf");
HAnimHumanoid23->setSegments(*HAnimSegment233);

CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setUSE("hanim_r_calf");
HAnimHumanoid23->setSegments(*HAnimSegment234);

CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setUSE("hanim_l_carpal");
HAnimHumanoid23->setSegments(*HAnimSegment235);

CHAnimSegment* HAnimSegment236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment236->setUSE("hanim_r_carpal");
HAnimHumanoid23->setSegments(*HAnimSegment236);

CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setUSE("hanim_l_forearm");
HAnimHumanoid23->setSegments(*HAnimSegment237);

CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setUSE("hanim_r_forearm");
HAnimHumanoid23->setSegments(*HAnimSegment238);

CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setUSE("hanim_l_talus");
HAnimHumanoid23->setSegments(*HAnimSegment239);

CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setUSE("hanim_r_talus");
HAnimHumanoid23->setSegments(*HAnimSegment240);

CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment241);

CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment242);

CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setUSE("hanim_l_thigh");
HAnimHumanoid23->setSegments(*HAnimSegment243);

CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setUSE("hanim_r_thigh");
HAnimHumanoid23->setSegments(*HAnimSegment244);

CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setUSE("hanim_l_upperarm");
HAnimHumanoid23->setSegments(*HAnimSegment245);

CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setUSE("hanim_r_upperarm");
HAnimHumanoid23->setSegments(*HAnimSegment246);

group->addChildren(*HAnimHumanoid23);

X3D0->setScene(*Scene19);

m_pScene.addRootNode(group);
}