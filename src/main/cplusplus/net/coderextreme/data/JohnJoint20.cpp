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
meta3->setContent("JohnJoint20.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("h2.pl");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("20 Jan 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("creator");
meta8->setContent("John Carlson");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("created");
meta9->setContent("9 November 2020");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
//DEF for markerfor XYZ axes
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
Shape13->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
CIndexedLineSet* IndexedLineSet14 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet14->setColorIndex(new int[3]{0,1,2});
IndexedLineSet14->setColorPerVertex(False);
IndexedLineSet14->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate15 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet14->setCoord(*Coordinate15);

CColor* Color16 = (CColor *)(m_pScene.createNode("Color"));
Color16->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet14->setColor(*Color16);

Shape13->setGeometry(IndexedLineSet14);

Transform12->addChild(*Shape13);

group->addChildren(*Transform12);

CGroup* Group17 = (CGroup *)(m_pScene.createNode("Group"));
//DEFS for markers of skeleton joints, segments, and sites
CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setTranslation(new float[3]{0,2,0});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
Shape20->setDEF("HAnimRootShape");
CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDEF("HAnimRootMaterial");
Material23->setDiffuseColor(new float[3]{0.8,0,0});
Material23->setTransparency(0.3);
Appearance22->setMaterial(*Material23);

Shape20->setAppearance(*Appearance22);

Transform19->addChild(*Shape20);

Transform18->addChildren(*Transform19);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{0,2.1,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
Shape25->setDEF("HAnimJointShape");
CSphere* Sphere26 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere26->setRadius(0.02);
Shape25->setGeometry(Sphere26);

CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDEF("HAnimJointMaterial");
Material28->setDiffuseColor(new float[3]{0,0,0.8});
Material28->setTransparency(0.3);
Appearance27->setMaterial(*Material28);

Shape25->setAppearance(*Appearance27);

Transform24->addChild(*Shape25);

Transform18->addChildren(*Transform24);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{0,2.05,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
Shape30->setDEF("HAnimSegmentLine");
CLineSet* LineSet31 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet31->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA32 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA32->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA32->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet31->setColor(*ColorRGBA32);

CCoordinate* Coordinate33 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate33->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet31->setCoord(*Coordinate33);

Shape30->setGeometry(LineSet31);

Transform29->addChild(*Shape30);

Transform18->addChildren(*Transform29);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{0,2.1,0});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
Shape35->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet36 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet36->setDEF("DiamondIFS");
IndexedFaceSet36->setCreaseAngle(0.5);
IndexedFaceSet36->setSolid(False);
IndexedFaceSet36->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CColorRGBA* ColorRGBA37 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA37->setDEF("HAnimSiteColorRGBA");
ColorRGBA37->setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
IndexedFaceSet36->setColor(*ColorRGBA37);

CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet36->setCoord(*Coordinate38);

Shape35->setGeometry(IndexedFaceSet36);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{1,1,0});
Material40->setTransparency(0.3);
Appearance39->setMaterial(*Material40);

Shape35->setAppearance(*Appearance39);

Transform34->addChild(*Shape35);

Transform18->addChildren(*Transform34);

Group17->addChildren(*Transform18);

group->addChildren(*Group17);

CNavigationInfo* NavigationInfo41 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo41->setSpeed(1.5);
group->addChildren(*NavigationInfo41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setDescription("default");
group->addChildren(*Viewpoint42);

CHAnimHumanoid* HAnimHumanoid43 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid43->setName("HAnim");
HAnimHumanoid43->setDEF("hanim_HAnim");
HAnimHumanoid43->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid43->setVersion("2.0");
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
Shape44->setDEF("SkinShape");
CIndexedFaceSet* IndexedFaceSet45 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet45->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
IndexedFaceSet45->setCreaseAngle(3.1);
CCoordinate* Coordinate46 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate46->setDEF("TheSkinCoord");
Coordinate46->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
IndexedFaceSet45->setCoord(*Coordinate46);

CColor* Color47 = (CColor *)(m_pScene.createNode("Color"));
Color47->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet45->setColor(*Color47);

Shape44->setGeometry(IndexedFaceSet45);

CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance48->setDEF("SkinAppearance");
CImageTexture* ImageTexture49 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture49->setDEF("zBlueSpiralBkg2");
ImageTexture49->setUrl(new CString[4]{"../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 4);
Appearance48->setTexture(*ImageTexture49);

CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setDEF("SkinMaterial");
Material50->setAmbientIntensity(0.6);
Material50->setDiffuseColor(new float[3]{1,1,1});
Material50->setShininess(0.6);
Material50->setTransparency(0.2);
Appearance48->setMaterial(*Material50);

Shape44->setAppearance(*Appearance48);

HAnimHumanoid43->setSkin(*Shape44);

CCoordinate* Coordinate51 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate51->setUSE("TheSkinCoord");
HAnimHumanoid43->setSkinCoord(*Coordinate51);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("humanoid_root");
HAnimJoint52->setDEF("hanim_humanoid_root");
HAnimJoint52->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("sacrum");
HAnimSegment53->setDEF("hanim_sacrum");
CHAnimDisplacer* HAnimDisplacer54 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer54->setName("sacrum_feature");
HAnimDisplacer54->setCoordIndex(new int[1]{0});
HAnimDisplacer54->setDisplacements(new float[3]{0,0,0});
HAnimSegment53->addDisplacers(*HAnimDisplacer54);

CHAnimDisplacer* HAnimDisplacer55 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer55->setName("sacrum_config");
HAnimDisplacer55->setCoordIndex(new int[1]{0});
HAnimDisplacer55->setDisplacements(new float[3]{0,0,0});
HAnimSegment53->addDisplacers(*HAnimDisplacer55);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
Shape58->setUSE("HAnimJointShape");
Transform57->addChild(*Shape58);

Transform56->addChildren(*Transform57);

HAnimSegment53->addChildren(*Transform56);

CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet60 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet60->setVertexCount(new int[1]{2});
CCoordinate* Coordinate61 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate61->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet60->setCoord(*Coordinate61);

//from humanoid_root to sacroiliac vertices 2
CColorRGBA* ColorRGBA62 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA62->setUSE("HAnimSegmentLineColorRGBA");
LineSet60->setColor(*ColorRGBA62);

Shape59->setGeometry(LineSet60);

HAnimSegment53->addChildren(*Shape59);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite63->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
HAnimSite63->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor64 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor64->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite63->addChildren(*TouchSensor64);

CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
Shape65->setUSE("HAnimSiteShape");
HAnimSite63->addChildren(*Shape65);

HAnimSegment53->addChildren(*HAnimSite63);

CHAnimSite* HAnimSite66 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite66->setName("crotch_pt");
HAnimSite66->setDEF("hanim_crotch_pt");
HAnimSite66->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor67 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor67->setDescription("HAnimSite crotch_pt");
HAnimSite66->addChildren(*TouchSensor67);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setUSE("HAnimSiteShape");
HAnimSite66->addChildren(*Shape68);

HAnimSegment53->addChildren(*HAnimSite66);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_asis_pt");
HAnimSite69->setDEF("hanim_l_asis_pt");
HAnimSite69->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor70 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor70->setDescription("HAnimSite l_asis_pt");
HAnimSite69->addChildren(*TouchSensor70);

CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
Shape71->setUSE("HAnimSiteShape");
HAnimSite69->addChildren(*Shape71);

HAnimSegment53->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite72 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite72->setName("l_iliocristale_pt");
HAnimSite72->setDEF("hanim_l_iliocristale_pt");
HAnimSite72->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor73 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor73->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite72->addChildren(*TouchSensor73);

CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setUSE("HAnimSiteShape");
HAnimSite72->addChildren(*Shape74);

HAnimSegment53->addChildren(*HAnimSite72);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("l_psis_pt");
HAnimSite75->setDEF("hanim_l_psis_pt");
HAnimSite75->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor76 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor76->setDescription("HAnimSite l_psis_pt");
HAnimSite75->addChildren(*TouchSensor76);

CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
Shape77->setUSE("HAnimSiteShape");
HAnimSite75->addChildren(*Shape77);

HAnimSegment53->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite78 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite78->setName("l_trochanterion_pt");
HAnimSite78->setDEF("hanim_l_trochanterion_pt");
HAnimSite78->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor79 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor79->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite78->addChildren(*TouchSensor79);

CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("HAnimSiteShape");
HAnimSite78->addChildren(*Shape80);

HAnimSegment53->addChildren(*HAnimSite78);

CHAnimSite* HAnimSite81 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite81->setName("r_asis_pt");
HAnimSite81->setDEF("hanim_r_asis_pt");
HAnimSite81->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor82 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor82->setDescription("HAnimSite r_asis_pt");
HAnimSite81->addChildren(*TouchSensor82);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
Shape83->setUSE("HAnimSiteShape");
HAnimSite81->addChildren(*Shape83);

HAnimSegment53->addChildren(*HAnimSite81);

CHAnimSite* HAnimSite84 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite84->setName("r_iliocristale_pt");
HAnimSite84->setDEF("hanim_r_iliocristale_pt");
HAnimSite84->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor85 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor85->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite84->addChildren(*TouchSensor85);

CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
Shape86->setUSE("HAnimSiteShape");
HAnimSite84->addChildren(*Shape86);

HAnimSegment53->addChildren(*HAnimSite84);

CHAnimSite* HAnimSite87 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite87->setName("r_psis_pt");
HAnimSite87->setDEF("hanim_r_psis_pt");
HAnimSite87->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor88 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor88->setDescription("HAnimSite r_psis_pt");
HAnimSite87->addChildren(*TouchSensor88);

CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
Shape89->setUSE("HAnimSiteShape");
HAnimSite87->addChildren(*Shape89);

HAnimSegment53->addChildren(*HAnimSite87);

CHAnimSite* HAnimSite90 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite90->setName("r_trochanterion_pt");
HAnimSite90->setDEF("hanim_r_trochanterion_pt");
HAnimSite90->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor91 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor91->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite90->addChildren(*TouchSensor91);

CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
Shape92->setUSE("HAnimSiteShape");
HAnimSite90->addChildren(*Shape92);

HAnimSegment53->addChildren(*HAnimSite90);

CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet94 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet94->setVertexCount(new int[1]{2});
CCoordinate* Coordinate95 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate95->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet94->setCoord(*Coordinate95);

//from humanoid_root to vl5 vertices 2
CColorRGBA* ColorRGBA96 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA96->setUSE("HAnimSegmentLineColorRGBA");
LineSet94->setColor(*ColorRGBA96);

Shape93->setGeometry(LineSet94);

HAnimSegment53->addChildren(*Shape93);

CHAnimSite* HAnimSite97 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite97->setName("navel_pt");
HAnimSite97->setDEF("hanim_navel_pt");
HAnimSite97->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor98 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor98->setDescription("HAnimSite navel_pt");
HAnimSite97->addChildren(*TouchSensor98);

CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
Shape99->setUSE("HAnimSiteShape");
HAnimSite97->addChildren(*Shape99);

HAnimSegment53->addChildren(*HAnimSite97);

CHAnimSite* HAnimSite100 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite100->setName("waist_preferred_anterior_pt");
HAnimSite100->setDEF("hanim_waist_preferred_anterior_pt");
HAnimSite100->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor101 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor101->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite100->addChildren(*TouchSensor101);

CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
Shape102->setUSE("HAnimSiteShape");
HAnimSite100->addChildren(*Shape102);

HAnimSegment53->addChildren(*HAnimSite100);

CHAnimSite* HAnimSite103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite103->setName("waist_preferred_posterior_pt");
HAnimSite103->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite103->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor104 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor104->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite103->addChildren(*TouchSensor104);

CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
Shape105->setUSE("HAnimSiteShape");
HAnimSite103->addChildren(*Shape105);

HAnimSegment53->addChildren(*HAnimSite103);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("sacroiliac");
HAnimJoint106->setDEF("hanim_sacroiliac");
HAnimJoint106->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint106->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint106->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment107->setName("pelvis");
HAnimSegment107->setDEF("hanim_pelvis");
CTransform* Transform108 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("HAnimJointShape");
Transform109->addChild(*Shape110);

Transform108->addChildren(*Transform109);

HAnimSegment107->addChildren(*Transform108);

CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet112 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet112->setVertexCount(new int[1]{2});
CCoordinate* Coordinate113 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate113->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet112->setCoord(*Coordinate113);

//from sacroiliac to l_hip vertices 2
CColorRGBA* ColorRGBA114 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA114->setUSE("HAnimSegmentLineColorRGBA");
LineSet112->setColor(*ColorRGBA114);

Shape111->setGeometry(LineSet112);

HAnimSegment107->addChildren(*Shape111);

CHAnimSite* HAnimSite115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite115->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite115->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite115->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor116 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor116->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite115->addChildren(*TouchSensor116);

CShape* Shape117 = (CShape *)(m_pScene.createNode("Shape"));
Shape117->setUSE("HAnimSiteShape");
HAnimSite115->addChildren(*Shape117);

HAnimSegment107->addChildren(*HAnimSite115);

CHAnimSite* HAnimSite118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite118->setName("l_femoral_medial_epicondyles_pt");
HAnimSite118->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite118->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor119 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor119->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite118->addChildren(*TouchSensor119);

CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("HAnimSiteShape");
HAnimSite118->addChildren(*Shape120);

HAnimSegment107->addChildren(*HAnimSite118);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("l_knee_crease_pt");
HAnimSite121->setDEF("hanim_l_knee_crease_pt");
HAnimSite121->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor122 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor122->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite121->addChildren(*TouchSensor122);

CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
Shape123->setUSE("HAnimSiteShape");
HAnimSite121->addChildren(*Shape123);

HAnimSegment107->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("l_suprapatella_pt");
HAnimSite124->setDEF("hanim_l_suprapatella_pt");
HAnimSite124->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor125 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor125->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite124->addChildren(*TouchSensor125);

CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("HAnimSiteShape");
HAnimSite124->addChildren(*Shape126);

HAnimSegment107->addChildren(*HAnimSite124);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet128 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet128->setVertexCount(new int[1]{2});
CCoordinate* Coordinate129 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate129->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet128->setCoord(*Coordinate129);

//from sacroiliac to r_hip vertices 2
CColorRGBA* ColorRGBA130 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA130->setUSE("HAnimSegmentLineColorRGBA");
LineSet128->setColor(*ColorRGBA130);

Shape127->setGeometry(LineSet128);

HAnimSegment107->addChildren(*Shape127);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite131->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite131->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite131->addChildren(*TouchSensor132);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChildren(*Shape133);

HAnimSegment107->addChildren(*HAnimSite131);

CHAnimSite* HAnimSite134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite134->setName("r_femoral_medial_epicondyles_pt");
HAnimSite134->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite134->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor135 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor135->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite134->addChildren(*TouchSensor135);

CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
Shape136->setUSE("HAnimSiteShape");
HAnimSite134->addChildren(*Shape136);

HAnimSegment107->addChildren(*HAnimSite134);

CHAnimSite* HAnimSite137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite137->setName("r_knee_crease_pt");
HAnimSite137->setDEF("hanim_r_knee_crease_pt");
HAnimSite137->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor138 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor138->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite137->addChildren(*TouchSensor138);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("HAnimSiteShape");
HAnimSite137->addChildren(*Shape139);

HAnimSegment107->addChildren(*HAnimSite137);

CHAnimSite* HAnimSite140 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite140->setName("r_suprapatella_pt");
HAnimSite140->setDEF("hanim_r_suprapatella_pt");
HAnimSite140->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor141 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor141->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite140->addChildren(*TouchSensor141);

CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
Shape142->setUSE("HAnimSiteShape");
HAnimSite140->addChildren(*Shape142);

HAnimSegment107->addChildren(*HAnimSite140);

HAnimJoint106->addChildren(*HAnimSegment107);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setName("l_hip");
HAnimJoint143->setDEF("hanim_l_hip");
HAnimJoint143->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment144->setName("l_thigh");
HAnimSegment144->setDEF("hanim_l_thigh");
CTransform* Transform145 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("HAnimJointShape");
Transform146->addChild(*Shape147);

Transform145->addChildren(*Transform146);

HAnimSegment144->addChildren(*Transform145);

CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet149 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet149->setVertexCount(new int[1]{2});
CCoordinate* Coordinate150 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate150->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet149->setCoord(*Coordinate150);

//from l_hip to l_knee vertices 2
CColorRGBA* ColorRGBA151 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA151->setUSE("HAnimSegmentLineColorRGBA");
LineSet149->setColor(*ColorRGBA151);

Shape148->setGeometry(LineSet149);

HAnimSegment144->addChildren(*Shape148);

CHAnimSite* HAnimSite152 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite152->setName("l_lateral_malleolus_pt");
HAnimSite152->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite152->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor153 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor153->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite152->addChildren(*TouchSensor153);

CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
Shape154->setUSE("HAnimSiteShape");
HAnimSite152->addChildren(*Shape154);

HAnimSegment144->addChildren(*HAnimSite152);

CHAnimSite* HAnimSite155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite155->setName("l_medial_malleolus_pt");
HAnimSite155->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite155->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor156 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor156->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite155->addChildren(*TouchSensor156);

CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
Shape157->setUSE("HAnimSiteShape");
HAnimSite155->addChildren(*Shape157);

HAnimSegment144->addChildren(*HAnimSite155);

CHAnimSite* HAnimSite158 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite158->setName("l_tibiale_pt");
HAnimSite158->setDEF("hanim_l_tibiale_pt");
HAnimSite158->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor159 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor159->setDescription("HAnimSite l_tibiale_pt");
HAnimSite158->addChildren(*TouchSensor159);

CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
Shape160->setUSE("HAnimSiteShape");
HAnimSite158->addChildren(*Shape160);

HAnimSegment144->addChildren(*HAnimSite158);

HAnimJoint143->addChildren(*HAnimSegment144);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setName("l_knee");
HAnimJoint161->setDEF("hanim_l_knee");
HAnimJoint161->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint161->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint161->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment162 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment162->setName("l_calf");
HAnimSegment162->setDEF("hanim_l_calf");
CTransform* Transform163 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
Shape165->setUSE("HAnimJointShape");
Transform164->addChild(*Shape165);

Transform163->addChildren(*Transform164);

HAnimSegment162->addChildren(*Transform163);

CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet167 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet167->setVertexCount(new int[1]{2});
CCoordinate* Coordinate168 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate168->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet167->setCoord(*Coordinate168);

//from l_knee to l_talocrural vertices 2
CColorRGBA* ColorRGBA169 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA169->setUSE("HAnimSegmentLineColorRGBA");
LineSet167->setColor(*ColorRGBA169);

Shape166->setGeometry(LineSet167);

HAnimSegment162->addChildren(*Shape166);

CHAnimSite* HAnimSite170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite170->setName("l_calcaneus_posterior_pt");
HAnimSite170->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite170->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor171 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor171->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite170->addChildren(*TouchSensor171);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
Shape172->setUSE("HAnimSiteShape");
HAnimSite170->addChildren(*Shape172);

HAnimSegment162->addChildren(*HAnimSite170);

CHAnimSite* HAnimSite173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite173->setName("l_sphyrion_pt");
HAnimSite173->setDEF("hanim_l_sphyrion_pt");
HAnimSite173->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor174 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor174->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite173->addChildren(*TouchSensor174);

CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("HAnimSiteShape");
HAnimSite173->addChildren(*Shape175);

HAnimSegment162->addChildren(*HAnimSite173);

HAnimJoint161->addChildren(*HAnimSegment162);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setName("l_talocrural");
HAnimJoint176->setDEF("hanim_l_talocrural");
HAnimJoint176->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint176->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint176->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment177->setName("l_talus");
HAnimSegment177->setDEF("hanim_l_talus");
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setScale(new float[3]{0.15,0.15,0.15});
Transform178->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform178->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
CTransform* Transform179 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform left foot
CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
Shape180->setUSE("HAnimJointShape");
Transform179->addChild(*Shape180);

Transform178->addChildren(*Transform179);

HAnimSegment177->addChildren(*Transform178);

CShape* Shape181 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet182 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet182->setVertexCount(new int[1]{2});
CCoordinate* Coordinate183 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate183->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet182->setCoord(*Coordinate183);

//from l_talocrural to l_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA184 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA184->setUSE("HAnimSegmentLineColorRGBA");
LineSet182->setColor(*ColorRGBA184);

Shape181->setGeometry(LineSet182);

HAnimSegment177->addChildren(*Shape181);

CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet186->setVertexCount(new int[1]{2});
CCoordinate* Coordinate187 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate187->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet186->setCoord(*Coordinate187);

//from l_talocrural to l_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA188 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA188->setUSE("HAnimSegmentLineColorRGBA");
LineSet186->setColor(*ColorRGBA188);

Shape185->setGeometry(LineSet186);

HAnimSegment177->addChildren(*Shape185);

HAnimJoint176->addChildren(*HAnimSegment177);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setName("l_talocalcaneonavicular");
HAnimJoint189->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint189->setCenter(new float[3]{0,1,0});
HAnimJoint189->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint189->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment190->setName("l_navicular");
HAnimSegment190->setDEF("hanim_l_navicular");
CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform192 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
Shape193->setUSE("HAnimJointShape");
Transform192->addChild(*Shape193);

Transform191->addChildren(*Transform192);

HAnimSegment190->addChildren(*Transform191);

CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet195->setVertexCount(new int[1]{2});
CCoordinate* Coordinate196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate196->setPoint(new float[6]{0,1,0,0,1,0});
LineSet195->setCoord(*Coordinate196);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA197 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA197->setUSE("HAnimSegmentLineColorRGBA");
LineSet195->setColor(*ColorRGBA197);

Shape194->setGeometry(LineSet195);

HAnimSegment190->addChildren(*Shape194);

CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet199 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet199->setVertexCount(new int[1]{2});
CCoordinate* Coordinate200 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate200->setPoint(new float[6]{0,1,0,0,1,0});
LineSet199->setCoord(*Coordinate200);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA201 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA201->setUSE("HAnimSegmentLineColorRGBA");
LineSet199->setColor(*ColorRGBA201);

Shape198->setGeometry(LineSet199);

HAnimSegment190->addChildren(*Shape198);

CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet203 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet203->setVertexCount(new int[1]{2});
CCoordinate* Coordinate204 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate204->setPoint(new float[6]{0,1,0,0,1,0});
LineSet203->setCoord(*Coordinate204);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA205 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA205->setUSE("HAnimSegmentLineColorRGBA");
LineSet203->setColor(*ColorRGBA205);

Shape202->setGeometry(LineSet203);

HAnimSegment190->addChildren(*Shape202);

HAnimJoint189->addChildren(*HAnimSegment190);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setName("l_cuneonavicular_1");
HAnimJoint206->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint206->setCenter(new float[3]{0,1,0});
HAnimJoint206->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint206->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setName("l_cuneiform_1");
HAnimSegment207->setDEF("hanim_l_cuneiform_1");
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform209 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
Shape210->setUSE("HAnimJointShape");
Transform209->addChild(*Shape210);

Transform208->addChildren(*Transform209);

HAnimSegment207->addChildren(*Transform208);

CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet212 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet212->setVertexCount(new int[1]{2});
CCoordinate* Coordinate213 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate213->setPoint(new float[6]{0,1,0,0,1,0});
LineSet212->setCoord(*Coordinate213);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA214 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA214->setUSE("HAnimSegmentLineColorRGBA");
LineSet212->setColor(*ColorRGBA214);

Shape211->setGeometry(LineSet212);

HAnimSegment207->addChildren(*Shape211);

HAnimJoint206->addChildren(*HAnimSegment207);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setName("l_tarsometatarsal_1");
HAnimJoint215->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint215->setCenter(new float[3]{0,1,0});
HAnimJoint215->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint215->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment216 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment216->setName("l_metatarsal_1");
HAnimSegment216->setDEF("hanim_l_metatarsal_1");
CTransform* Transform217 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
Shape219->setUSE("HAnimJointShape");
Transform218->addChild(*Shape219);

Transform217->addChildren(*Transform218);

HAnimSegment216->addChildren(*Transform217);

CShape* Shape220 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet221 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet221->setVertexCount(new int[1]{2});
CCoordinate* Coordinate222 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate222->setPoint(new float[6]{0,1,0,0,1,0});
LineSet221->setCoord(*Coordinate222);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA223 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA223->setUSE("HAnimSegmentLineColorRGBA");
LineSet221->setColor(*ColorRGBA223);

Shape220->setGeometry(LineSet221);

HAnimSegment216->addChildren(*Shape220);

CHAnimSite* HAnimSite224 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite224->setName("l_metatarsal_phalanx_1_pt");
HAnimSite224->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite224->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor225 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor225->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite224->addChildren(*TouchSensor225);

CShape* Shape226 = (CShape *)(m_pScene.createNode("Shape"));
Shape226->setUSE("HAnimSiteShape");
HAnimSite224->addChildren(*Shape226);

HAnimSegment216->addChildren(*HAnimSite224);

HAnimJoint215->addChildren(*HAnimSegment216);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("l_metatarsophalangeal_1");
HAnimJoint227->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint227->setCenter(new float[3]{0,1,0});
HAnimJoint227->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment228->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment228->setDEF("hanim_l_tarsal_proximal_phalanx_1");
CTransform* Transform229 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform230 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
Shape231->setUSE("HAnimJointShape");
Transform230->addChild(*Shape231);

Transform229->addChildren(*Transform230);

HAnimSegment228->addChildren(*Transform229);

CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet233 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet233->setVertexCount(new int[1]{2});
CCoordinate* Coordinate234 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate234->setPoint(new float[6]{0,1,0,0,1,0});
LineSet233->setCoord(*Coordinate234);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA235 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA235->setUSE("HAnimSegmentLineColorRGBA");
LineSet233->setColor(*ColorRGBA235);

Shape232->setGeometry(LineSet233);

HAnimSegment228->addChildren(*Shape232);

CHAnimSite* HAnimSite236 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite236->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite236->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimSite236->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor237 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor237->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite236->addChildren(*TouchSensor237);

CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
Shape238->setUSE("HAnimSiteShape");
HAnimSite236->addChildren(*Shape238);

HAnimSegment228->addChildren(*HAnimSite236);

HAnimJoint227->addChildren(*HAnimSegment228);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setName("l_tarsal_interphalangeal_1");
HAnimJoint239->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint239->setCenter(new float[3]{0,1,0});
HAnimJoint239->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint239->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->addChildren(*HAnimJoint239);

HAnimJoint215->addChildren(*HAnimJoint227);

HAnimJoint206->addChildren(*HAnimJoint215);

HAnimJoint189->addChildren(*HAnimJoint206);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setName("l_cuneonavicular_2");
HAnimJoint240->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint240->setCenter(new float[3]{0,1,0});
HAnimJoint240->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint240->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setName("l_cuneiform_2");
HAnimSegment241->setDEF("hanim_l_cuneiform_2");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform243 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
Shape244->setUSE("HAnimJointShape");
Transform243->addChild(*Shape244);

Transform242->addChildren(*Transform243);

HAnimSegment241->addChildren(*Transform242);

CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet246 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet246->setVertexCount(new int[1]{2});
CCoordinate* Coordinate247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate247->setPoint(new float[6]{0,1,0,0,1,0});
LineSet246->setCoord(*Coordinate247);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA248 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA248->setUSE("HAnimSegmentLineColorRGBA");
LineSet246->setColor(*ColorRGBA248);

Shape245->setGeometry(LineSet246);

HAnimSegment241->addChildren(*Shape245);

HAnimJoint240->addChildren(*HAnimSegment241);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("l_tarsometatarsal_2");
HAnimJoint249->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint249->setCenter(new float[3]{0,1,0});
HAnimJoint249->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint249->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setName("l_metatarsal_2");
HAnimSegment250->setDEF("hanim_l_metatarsal_2");
CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("HAnimJointShape");
Transform252->addChild(*Shape253);

Transform251->addChildren(*Transform252);

HAnimSegment250->addChildren(*Transform251);

CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet255 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet255->setVertexCount(new int[1]{2});
CCoordinate* Coordinate256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate256->setPoint(new float[6]{0,1,0,0,1,0});
LineSet255->setCoord(*Coordinate256);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA257 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA257->setUSE("HAnimSegmentLineColorRGBA");
LineSet255->setColor(*ColorRGBA257);

Shape254->setGeometry(LineSet255);

HAnimSegment250->addChildren(*Shape254);

HAnimJoint249->addChildren(*HAnimSegment250);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setName("l_metatarsophalangeal_2");
HAnimJoint258->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint258->setCenter(new float[3]{0,1,0});
HAnimJoint258->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint258->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment259->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
Shape262->setUSE("HAnimJointShape");
Transform261->addChild(*Shape262);

Transform260->addChildren(*Transform261);

HAnimSegment259->addChildren(*Transform260);

CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet264 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet264->setVertexCount(new int[1]{2});
CCoordinate* Coordinate265 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate265->setPoint(new float[6]{0,1,0,0,1,0});
LineSet264->setCoord(*Coordinate265);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA266 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA266->setUSE("HAnimSegmentLineColorRGBA");
LineSet264->setColor(*ColorRGBA266);

Shape263->setGeometry(LineSet264);

HAnimSegment259->addChildren(*Shape263);

HAnimJoint258->addChildren(*HAnimSegment259);

CHAnimJoint* HAnimJoint267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint267->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint267->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint267->setCenter(new float[3]{0,1,0});
HAnimJoint267->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint267->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment268->setName("l_tarsal_middle_phalanx_2");
HAnimSegment268->setDEF("hanim_l_tarsal_middle_phalanx_2");
CTransform* Transform269 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform270 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
Shape271->setUSE("HAnimJointShape");
Transform270->addChild(*Shape271);

Transform269->addChildren(*Transform270);

HAnimSegment268->addChildren(*Transform269);

CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet273 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet273->setVertexCount(new int[1]{2});
CCoordinate* Coordinate274 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate274->setPoint(new float[6]{0,1,0,0,1,0});
LineSet273->setCoord(*Coordinate274);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA275 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA275->setUSE("HAnimSegmentLineColorRGBA");
LineSet273->setColor(*ColorRGBA275);

Shape272->setGeometry(LineSet273);

HAnimSegment268->addChildren(*Shape272);

CHAnimSite* HAnimSite276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite276->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite276->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite276->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor277 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor277->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite276->addChildren(*TouchSensor277);

CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("HAnimSiteShape");
HAnimSite276->addChildren(*Shape278);

HAnimSegment268->addChildren(*HAnimSite276);

HAnimJoint267->addChildren(*HAnimSegment268);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint279->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint279->setCenter(new float[3]{0,1,0});
HAnimJoint279->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint279->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint267->addChildren(*HAnimJoint279);

HAnimJoint258->addChildren(*HAnimJoint267);

HAnimJoint249->addChildren(*HAnimJoint258);

HAnimJoint240->addChildren(*HAnimJoint249);

HAnimJoint189->addChildren(*HAnimJoint240);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setName("l_cuneonavicular_3");
HAnimJoint280->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint280->setCenter(new float[3]{0,1,0});
HAnimJoint280->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint280->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment281->setName("l_cuneiform_3");
HAnimSegment281->setDEF("hanim_l_cuneiform_3");
CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform283 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
Shape284->setUSE("HAnimJointShape");
Transform283->addChild(*Shape284);

Transform282->addChildren(*Transform283);

HAnimSegment281->addChildren(*Transform282);

CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet286 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet286->setVertexCount(new int[1]{2});
CCoordinate* Coordinate287 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate287->setPoint(new float[6]{0,1,0,0,1,0});
LineSet286->setCoord(*Coordinate287);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA288 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA288->setUSE("HAnimSegmentLineColorRGBA");
LineSet286->setColor(*ColorRGBA288);

Shape285->setGeometry(LineSet286);

HAnimSegment281->addChildren(*Shape285);

HAnimJoint280->addChildren(*HAnimSegment281);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setName("l_tarsometatarsal_3");
HAnimJoint289->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint289->setCenter(new float[3]{0,1,0});
HAnimJoint289->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint289->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setName("l_metatarsal_3");
HAnimSegment290->setDEF("hanim_l_metatarsal_3");
CTransform* Transform291 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform292 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
Shape293->setUSE("HAnimJointShape");
Transform292->addChild(*Shape293);

Transform291->addChildren(*Transform292);

HAnimSegment290->addChildren(*Transform291);

CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet295 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet295->setVertexCount(new int[1]{2});
CCoordinate* Coordinate296 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate296->setPoint(new float[6]{0,1,0,0,1,0});
LineSet295->setCoord(*Coordinate296);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
CColorRGBA* ColorRGBA297 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA297->setUSE("HAnimSegmentLineColorRGBA");
LineSet295->setColor(*ColorRGBA297);

Shape294->setGeometry(LineSet295);

HAnimSegment290->addChildren(*Shape294);

HAnimJoint289->addChildren(*HAnimSegment290);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setName("l_metatarsophalangeal_3");
HAnimJoint298->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint298->setCenter(new float[3]{0,1,0});
HAnimJoint298->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint298->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment299->setDEF("hanim_l_tarsal_proximal_phalanx_3");
CTransform* Transform300 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("HAnimJointShape");
Transform301->addChild(*Shape302);

Transform300->addChildren(*Transform301);

HAnimSegment299->addChildren(*Transform300);

CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet304 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet304->setVertexCount(new int[1]{2});
CCoordinate* Coordinate305 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate305->setPoint(new float[6]{0,1,0,0,1,0});
LineSet304->setCoord(*Coordinate305);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA306 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA306->setUSE("HAnimSegmentLineColorRGBA");
LineSet304->setColor(*ColorRGBA306);

Shape303->setGeometry(LineSet304);

HAnimSegment299->addChildren(*Shape303);

HAnimJoint298->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint307->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint307->setCenter(new float[3]{0,1,0});
HAnimJoint307->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint307->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setName("l_tarsal_middle_phalanx_3");
HAnimSegment308->setDEF("hanim_l_tarsal_middle_phalanx_3");
CTransform* Transform309 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform310 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
Shape311->setUSE("HAnimJointShape");
Transform310->addChild(*Shape311);

Transform309->addChildren(*Transform310);

HAnimSegment308->addChildren(*Transform309);

CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet313 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet313->setVertexCount(new int[1]{2});
CCoordinate* Coordinate314 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate314->setPoint(new float[6]{0,1,0,0,1,0});
LineSet313->setCoord(*Coordinate314);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA315 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA315->setUSE("HAnimSegmentLineColorRGBA");
LineSet313->setColor(*ColorRGBA315);

Shape312->setGeometry(LineSet313);

HAnimSegment308->addChildren(*Shape312);

CHAnimSite* HAnimSite316 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite316->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite316->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimSite316->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor317 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor317->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite316->addChildren(*TouchSensor317);

CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
Shape318->setUSE("HAnimSiteShape");
HAnimSite316->addChildren(*Shape318);

HAnimSegment308->addChildren(*HAnimSite316);

HAnimJoint307->addChildren(*HAnimSegment308);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint319->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint319->setCenter(new float[3]{0,1,0});
HAnimJoint319->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint319->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint307->addChildren(*HAnimJoint319);

HAnimJoint298->addChildren(*HAnimJoint307);

HAnimJoint289->addChildren(*HAnimJoint298);

HAnimJoint280->addChildren(*HAnimJoint289);

HAnimJoint189->addChildren(*HAnimJoint280);

HAnimJoint176->addChildren(*HAnimJoint189);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setName("l_calcaneocuboid");
HAnimJoint320->setDEF("hanim_l_calcaneocuboid");
HAnimJoint320->setCenter(new float[3]{0,1,0});
HAnimJoint320->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint320->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setName("l_calcaneus");
HAnimSegment321->setDEF("hanim_l_calcaneus");
CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
Shape324->setUSE("HAnimJointShape");
Transform323->addChild(*Shape324);

Transform322->addChildren(*Transform323);

HAnimSegment321->addChildren(*Transform322);

CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet326 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet326->setVertexCount(new int[1]{2});
CCoordinate* Coordinate327 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate327->setPoint(new float[6]{0,1,0,0,1,0});
LineSet326->setCoord(*Coordinate327);

//from l_calcaneocuboid to l_transversetarsal vertices 2
CColorRGBA* ColorRGBA328 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA328->setUSE("HAnimSegmentLineColorRGBA");
LineSet326->setColor(*ColorRGBA328);

Shape325->setGeometry(LineSet326);

HAnimSegment321->addChildren(*Shape325);

HAnimJoint320->addChildren(*HAnimSegment321);

CHAnimJoint* HAnimJoint329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint329->setName("l_transversetarsal");
HAnimJoint329->setDEF("hanim_l_transversetarsal");
HAnimJoint329->setCenter(new float[3]{0,1,0});
HAnimJoint329->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint329->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment330 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment330->setName("l_cuboid");
HAnimSegment330->setDEF("hanim_l_cuboid");
CTransform* Transform331 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform332 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
Shape333->setUSE("HAnimJointShape");
Transform332->addChild(*Shape333);

Transform331->addChildren(*Transform332);

HAnimSegment330->addChildren(*Transform331);

CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet335 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet335->setVertexCount(new int[1]{2});
CCoordinate* Coordinate336 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate336->setPoint(new float[6]{0,1,0,0,1,0});
LineSet335->setCoord(*Coordinate336);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA337 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA337->setUSE("HAnimSegmentLineColorRGBA");
LineSet335->setColor(*ColorRGBA337);

Shape334->setGeometry(LineSet335);

HAnimSegment330->addChildren(*Shape334);

CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet339 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet339->setVertexCount(new int[1]{2});
CCoordinate* Coordinate340 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate340->setPoint(new float[6]{0,1,0,0,1,0});
LineSet339->setCoord(*Coordinate340);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA341 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA341->setUSE("HAnimSegmentLineColorRGBA");
LineSet339->setColor(*ColorRGBA341);

Shape338->setGeometry(LineSet339);

HAnimSegment330->addChildren(*Shape338);

HAnimJoint329->addChildren(*HAnimSegment330);

CHAnimJoint* HAnimJoint342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint342->setName("l_tarsometatarsal_4");
HAnimJoint342->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint342->setCenter(new float[3]{0,1,0});
HAnimJoint342->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint342->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment343 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment343->setName("l_metatarsal_4");
HAnimSegment343->setDEF("hanim_l_metatarsal_4");
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform345 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
Shape346->setUSE("HAnimJointShape");
Transform345->addChild(*Shape346);

Transform344->addChildren(*Transform345);

HAnimSegment343->addChildren(*Transform344);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet348 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet348->setVertexCount(new int[1]{2});
CCoordinate* Coordinate349 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate349->setPoint(new float[6]{0,1,0,0,1,0});
LineSet348->setCoord(*Coordinate349);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA350 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA350->setUSE("HAnimSegmentLineColorRGBA");
LineSet348->setColor(*ColorRGBA350);

Shape347->setGeometry(LineSet348);

HAnimSegment343->addChildren(*Shape347);

HAnimJoint342->addChildren(*HAnimSegment343);

CHAnimJoint* HAnimJoint351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint351->setName("l_metatarsophalangeal_4");
HAnimJoint351->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint351->setCenter(new float[3]{0,1,0});
HAnimJoint351->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint351->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment352 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment352->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment352->setDEF("hanim_l_tarsal_proximal_phalanx_4");
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("HAnimJointShape");
Transform354->addChild(*Shape355);

Transform353->addChildren(*Transform354);

HAnimSegment352->addChildren(*Transform353);

CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet357 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet357->setVertexCount(new int[1]{2});
CCoordinate* Coordinate358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate358->setPoint(new float[6]{0,1,0,0,1,0});
LineSet357->setCoord(*Coordinate358);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA359 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA359->setUSE("HAnimSegmentLineColorRGBA");
LineSet357->setColor(*ColorRGBA359);

Shape356->setGeometry(LineSet357);

HAnimSegment352->addChildren(*Shape356);

HAnimJoint351->addChildren(*HAnimSegment352);

CHAnimJoint* HAnimJoint360 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint360->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint360->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint360->setCenter(new float[3]{0,1,0});
HAnimJoint360->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint360->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment361 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment361->setName("l_tarsal_middle_phalanx_4");
HAnimSegment361->setDEF("hanim_l_tarsal_middle_phalanx_4");
CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform363 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
Shape364->setUSE("HAnimJointShape");
Transform363->addChild(*Shape364);

Transform362->addChildren(*Transform363);

HAnimSegment361->addChildren(*Transform362);

CShape* Shape365 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet366 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet366->setVertexCount(new int[1]{2});
CCoordinate* Coordinate367 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate367->setPoint(new float[6]{0,1,0,0,1,0});
LineSet366->setCoord(*Coordinate367);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA368 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA368->setUSE("HAnimSegmentLineColorRGBA");
LineSet366->setColor(*ColorRGBA368);

Shape365->setGeometry(LineSet366);

HAnimSegment361->addChildren(*Shape365);

CHAnimSite* HAnimSite369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite369->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite369->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimSite369->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor370 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor370->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite369->addChildren(*TouchSensor370);

CShape* Shape371 = (CShape *)(m_pScene.createNode("Shape"));
Shape371->setUSE("HAnimSiteShape");
HAnimSite369->addChildren(*Shape371);

HAnimSegment361->addChildren(*HAnimSite369);

HAnimJoint360->addChildren(*HAnimSegment361);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint372->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint372->setCenter(new float[3]{0,1,0});
HAnimJoint372->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint372->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint360->addChildren(*HAnimJoint372);

HAnimJoint351->addChildren(*HAnimJoint360);

HAnimJoint342->addChildren(*HAnimJoint351);

HAnimJoint329->addChildren(*HAnimJoint342);

CHAnimJoint* HAnimJoint373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint373->setName("l_tarsometatarsal_5");
HAnimJoint373->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint373->setCenter(new float[3]{0,1,0});
HAnimJoint373->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint373->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment374 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment374->setName("l_metatarsal_5");
HAnimSegment374->setDEF("hanim_l_metatarsal_5");
CTransform* Transform375 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
Shape377->setUSE("HAnimJointShape");
Transform376->addChild(*Shape377);

Transform375->addChildren(*Transform376);

HAnimSegment374->addChildren(*Transform375);

CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet379 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet379->setVertexCount(new int[1]{2});
CCoordinate* Coordinate380 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate380->setPoint(new float[6]{0,1,0,0,1,0});
LineSet379->setCoord(*Coordinate380);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA381 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA381->setUSE("HAnimSegmentLineColorRGBA");
LineSet379->setColor(*ColorRGBA381);

Shape378->setGeometry(LineSet379);

HAnimSegment374->addChildren(*Shape378);

CHAnimSite* HAnimSite382 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite382->setName("l_metatarsal_phalanx_5_pt");
HAnimSite382->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite382->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor383 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor383->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite382->addChildren(*TouchSensor383);

CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
Shape384->setUSE("HAnimSiteShape");
HAnimSite382->addChildren(*Shape384);

HAnimSegment374->addChildren(*HAnimSite382);

HAnimJoint373->addChildren(*HAnimSegment374);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setName("l_metatarsophalangeal_5");
HAnimJoint385->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint385->setCenter(new float[3]{0,1,0});
HAnimJoint385->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint385->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment386 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment386->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment386->setDEF("hanim_l_tarsal_proximal_phalanx_5");
CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform388 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
Shape389->setUSE("HAnimJointShape");
Transform388->addChild(*Shape389);

Transform387->addChildren(*Transform388);

HAnimSegment386->addChildren(*Transform387);

CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet391 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet391->setVertexCount(new int[1]{2});
CCoordinate* Coordinate392 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate392->setPoint(new float[6]{0,1,0,0,1,0});
LineSet391->setCoord(*Coordinate392);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA393 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA393->setUSE("HAnimSegmentLineColorRGBA");
LineSet391->setColor(*ColorRGBA393);

Shape390->setGeometry(LineSet391);

HAnimSegment386->addChildren(*Shape390);

HAnimJoint385->addChildren(*HAnimSegment386);

CHAnimJoint* HAnimJoint394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint394->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint394->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint394->setCenter(new float[3]{0,1,0});
HAnimJoint394->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint394->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment395 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment395->setName("l_tarsal_middle_phalanx_5");
HAnimSegment395->setDEF("hanim_l_tarsal_middle_phalanx_5");
CTransform* Transform396 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform397 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape398 = (CShape *)(m_pScene.createNode("Shape"));
Shape398->setUSE("HAnimJointShape");
Transform397->addChild(*Shape398);

Transform396->addChildren(*Transform397);

HAnimSegment395->addChildren(*Transform396);

CShape* Shape399 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet400 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet400->setVertexCount(new int[1]{2});
CCoordinate* Coordinate401 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate401->setPoint(new float[6]{0,1,0,0,1,0});
LineSet400->setCoord(*Coordinate401);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA402 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA402->setUSE("HAnimSegmentLineColorRGBA");
LineSet400->setColor(*ColorRGBA402);

Shape399->setGeometry(LineSet400);

HAnimSegment395->addChildren(*Shape399);

CHAnimSite* HAnimSite403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite403->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite403->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimSite403->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor404 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor404->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite403->addChildren(*TouchSensor404);

CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
Shape405->setUSE("HAnimSiteShape");
HAnimSite403->addChildren(*Shape405);

HAnimSegment395->addChildren(*HAnimSite403);

HAnimJoint394->addChildren(*HAnimSegment395);

CHAnimJoint* HAnimJoint406 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint406->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint406->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint406->setCenter(new float[3]{0,1,0});
HAnimJoint406->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint406->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint394->addChildren(*HAnimJoint406);

HAnimJoint385->addChildren(*HAnimJoint394);

HAnimJoint373->addChildren(*HAnimJoint385);

HAnimJoint329->addChildren(*HAnimJoint373);

HAnimJoint320->addChildren(*HAnimJoint329);

HAnimJoint176->addChildren(*HAnimJoint320);

HAnimJoint161->addChildren(*HAnimJoint176);

HAnimJoint143->addChildren(*HAnimJoint161);

HAnimJoint106->addChildren(*HAnimJoint143);

CHAnimJoint* HAnimJoint407 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint407->setName("r_hip");
HAnimJoint407->setDEF("hanim_r_hip");
HAnimJoint407->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint407->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint407->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment408 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment408->setName("r_thigh");
HAnimSegment408->setDEF("hanim_r_thigh");
CTransform* Transform409 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform410 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
Shape411->setUSE("HAnimJointShape");
Transform410->addChild(*Shape411);

Transform409->addChildren(*Transform410);

HAnimSegment408->addChildren(*Transform409);

CShape* Shape412 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet413 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet413->setVertexCount(new int[1]{2});
CCoordinate* Coordinate414 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate414->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet413->setCoord(*Coordinate414);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA415 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA415->setUSE("HAnimSegmentLineColorRGBA");
LineSet413->setColor(*ColorRGBA415);

Shape412->setGeometry(LineSet413);

HAnimSegment408->addChildren(*Shape412);

CHAnimSite* HAnimSite416 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite416->setName("r_lateral_malleolus_pt");
HAnimSite416->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite416->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor417 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor417->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite416->addChildren(*TouchSensor417);

CShape* Shape418 = (CShape *)(m_pScene.createNode("Shape"));
Shape418->setUSE("HAnimSiteShape");
HAnimSite416->addChildren(*Shape418);

HAnimSegment408->addChildren(*HAnimSite416);

CHAnimSite* HAnimSite419 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite419->setName("r_medial_malleolus_pt");
HAnimSite419->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite419->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor420 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor420->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite419->addChildren(*TouchSensor420);

CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
Shape421->setUSE("HAnimSiteShape");
HAnimSite419->addChildren(*Shape421);

HAnimSegment408->addChildren(*HAnimSite419);

CHAnimSite* HAnimSite422 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite422->setName("r_tibiale_pt");
HAnimSite422->setDEF("hanim_r_tibiale_pt");
HAnimSite422->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor423 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor423->setDescription("HAnimSite r_tibiale_pt");
HAnimSite422->addChildren(*TouchSensor423);

CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
Shape424->setUSE("HAnimSiteShape");
HAnimSite422->addChildren(*Shape424);

HAnimSegment408->addChildren(*HAnimSite422);

HAnimJoint407->addChildren(*HAnimSegment408);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setName("r_knee");
HAnimJoint425->setDEF("hanim_r_knee");
HAnimJoint425->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint425->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint425->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment426 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment426->setName("r_calf");
HAnimSegment426->setDEF("hanim_r_calf");
CTransform* Transform427 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform428 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
Shape429->setUSE("HAnimJointShape");
Transform428->addChild(*Shape429);

Transform427->addChildren(*Transform428);

HAnimSegment426->addChildren(*Transform427);

CShape* Shape430 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet431 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet431->setVertexCount(new int[1]{2});
CCoordinate* Coordinate432 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate432->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet431->setCoord(*Coordinate432);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA433 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA433->setUSE("HAnimSegmentLineColorRGBA");
LineSet431->setColor(*ColorRGBA433);

Shape430->setGeometry(LineSet431);

HAnimSegment426->addChildren(*Shape430);

CHAnimSite* HAnimSite434 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite434->setName("r_calcaneus_posterior_pt");
HAnimSite434->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite434->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor435 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor435->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite434->addChildren(*TouchSensor435);

CShape* Shape436 = (CShape *)(m_pScene.createNode("Shape"));
Shape436->setUSE("HAnimSiteShape");
HAnimSite434->addChildren(*Shape436);

HAnimSegment426->addChildren(*HAnimSite434);

CHAnimSite* HAnimSite437 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite437->setName("r_sphyrion_pt");
HAnimSite437->setDEF("hanim_r_sphyrion_pt");
HAnimSite437->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor438->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite437->addChildren(*TouchSensor438);

CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
Shape439->setUSE("HAnimSiteShape");
HAnimSite437->addChildren(*Shape439);

HAnimSegment426->addChildren(*HAnimSite437);

HAnimJoint425->addChildren(*HAnimSegment426);

CHAnimJoint* HAnimJoint440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint440->setName("r_talocrural");
HAnimJoint440->setDEF("hanim_r_talocrural");
HAnimJoint440->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint440->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint440->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment441 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment441->setName("r_talus");
HAnimSegment441->setDEF("hanim_r_talus");
CTransform* Transform442 = (CTransform *)(m_pScene.createNode("Transform"));
Transform442->setScale(new float[3]{0.15,0.15,0.15});
Transform442->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform442->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform443 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape444 = (CShape *)(m_pScene.createNode("Shape"));
Shape444->setUSE("HAnimJointShape");
Transform443->addChild(*Shape444);

Transform442->addChildren(*Transform443);

HAnimSegment441->addChildren(*Transform442);

CShape* Shape445 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet446 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet446->setVertexCount(new int[1]{2});
CCoordinate* Coordinate447 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate447->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet446->setCoord(*Coordinate447);

//from r_talocrural to r_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA448 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA448->setUSE("HAnimSegmentLineColorRGBA");
LineSet446->setColor(*ColorRGBA448);

Shape445->setGeometry(LineSet446);

HAnimSegment441->addChildren(*Shape445);

CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet450->setVertexCount(new int[1]{2});
CCoordinate* Coordinate451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate451->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet450->setCoord(*Coordinate451);

//from r_talocrural to r_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA452 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA452->setUSE("HAnimSegmentLineColorRGBA");
LineSet450->setColor(*ColorRGBA452);

Shape449->setGeometry(LineSet450);

HAnimSegment441->addChildren(*Shape449);

HAnimJoint440->addChildren(*HAnimSegment441);

CHAnimJoint* HAnimJoint453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint453->setName("r_talocalcaneonavicular");
HAnimJoint453->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint453->setCenter(new float[3]{0,1,0});
HAnimJoint453->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint453->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment454->setName("r_navicular");
HAnimSegment454->setDEF("hanim_r_navicular");
CTransform* Transform455 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform456 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
Shape457->setUSE("HAnimJointShape");
Transform456->addChild(*Shape457);

Transform455->addChildren(*Transform456);

HAnimSegment454->addChildren(*Transform455);

CShape* Shape458 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet459 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet459->setVertexCount(new int[1]{2});
CCoordinate* Coordinate460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate460->setPoint(new float[6]{0,1,0,0,1,0});
LineSet459->setCoord(*Coordinate460);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA461 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA461->setUSE("HAnimSegmentLineColorRGBA");
LineSet459->setColor(*ColorRGBA461);

Shape458->setGeometry(LineSet459);

HAnimSegment454->addChildren(*Shape458);

CShape* Shape462 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet463 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet463->setVertexCount(new int[1]{2});
CCoordinate* Coordinate464 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate464->setPoint(new float[6]{0,1,0,0,1,0});
LineSet463->setCoord(*Coordinate464);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA465 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA465->setUSE("HAnimSegmentLineColorRGBA");
LineSet463->setColor(*ColorRGBA465);

Shape462->setGeometry(LineSet463);

HAnimSegment454->addChildren(*Shape462);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet467 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet467->setVertexCount(new int[1]{2});
CCoordinate* Coordinate468 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate468->setPoint(new float[6]{0,1,0,0,1,0});
LineSet467->setCoord(*Coordinate468);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA469 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA469->setUSE("HAnimSegmentLineColorRGBA");
LineSet467->setColor(*ColorRGBA469);

Shape466->setGeometry(LineSet467);

HAnimSegment454->addChildren(*Shape466);

HAnimJoint453->addChildren(*HAnimSegment454);

CHAnimJoint* HAnimJoint470 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint470->setName("r_cuneonavicular_1");
HAnimJoint470->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint470->setCenter(new float[3]{0,1,0});
HAnimJoint470->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint470->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment471->setName("r_cuneiform_1");
HAnimSegment471->setDEF("hanim_r_cuneiform_1");
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform473 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
Shape474->setUSE("HAnimJointShape");
Transform473->addChild(*Shape474);

Transform472->addChildren(*Transform473);

HAnimSegment471->addChildren(*Transform472);

CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet476 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet476->setVertexCount(new int[1]{2});
CCoordinate* Coordinate477 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate477->setPoint(new float[6]{0,1,0,0,1,0});
LineSet476->setCoord(*Coordinate477);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA478 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA478->setUSE("HAnimSegmentLineColorRGBA");
LineSet476->setColor(*ColorRGBA478);

Shape475->setGeometry(LineSet476);

HAnimSegment471->addChildren(*Shape475);

HAnimJoint470->addChildren(*HAnimSegment471);

CHAnimJoint* HAnimJoint479 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint479->setName("r_tarsometatarsal_1");
HAnimJoint479->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint479->setCenter(new float[3]{0,1,0});
HAnimJoint479->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint479->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment480 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment480->setName("r_metatarsal_1");
HAnimSegment480->setDEF("hanim_r_metatarsal_1");
CTransform* Transform481 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform482 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape483 = (CShape *)(m_pScene.createNode("Shape"));
Shape483->setUSE("HAnimJointShape");
Transform482->addChild(*Shape483);

Transform481->addChildren(*Transform482);

HAnimSegment480->addChildren(*Transform481);

CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet485 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet485->setVertexCount(new int[1]{2});
CCoordinate* Coordinate486 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate486->setPoint(new float[6]{0,1,0,0,1,0});
LineSet485->setCoord(*Coordinate486);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA487 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA487->setUSE("HAnimSegmentLineColorRGBA");
LineSet485->setColor(*ColorRGBA487);

Shape484->setGeometry(LineSet485);

HAnimSegment480->addChildren(*Shape484);

CHAnimSite* HAnimSite488 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite488->setName("r_metatarsal_phalanx_1_pt");
HAnimSite488->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite488->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor489 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor489->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite488->addChildren(*TouchSensor489);

CShape* Shape490 = (CShape *)(m_pScene.createNode("Shape"));
Shape490->setUSE("HAnimSiteShape");
HAnimSite488->addChildren(*Shape490);

HAnimSegment480->addChildren(*HAnimSite488);

HAnimJoint479->addChildren(*HAnimSegment480);

CHAnimJoint* HAnimJoint491 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint491->setName("r_metatarsophalangeal_1");
HAnimJoint491->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint491->setCenter(new float[3]{0,1,0});
HAnimJoint491->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint491->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment492->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment492->setDEF("hanim_r_tarsal_proximal_phalanx_1");
CTransform* Transform493 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform494 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape495 = (CShape *)(m_pScene.createNode("Shape"));
Shape495->setUSE("HAnimJointShape");
Transform494->addChild(*Shape495);

Transform493->addChildren(*Transform494);

HAnimSegment492->addChildren(*Transform493);

CShape* Shape496 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet497 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet497->setVertexCount(new int[1]{2});
CCoordinate* Coordinate498 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate498->setPoint(new float[6]{0,1,0,0,1,0});
LineSet497->setCoord(*Coordinate498);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA499 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA499->setUSE("HAnimSegmentLineColorRGBA");
LineSet497->setColor(*ColorRGBA499);

Shape496->setGeometry(LineSet497);

HAnimSegment492->addChildren(*Shape496);

CHAnimSite* HAnimSite500 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite500->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite500->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimSite500->setTranslation(new float[3]{0.1,-1.05,0});
CTouchSensor* TouchSensor501 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor501->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite500->addChildren(*TouchSensor501);

CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
Shape502->setUSE("HAnimSiteShape");
HAnimSite500->addChildren(*Shape502);

HAnimSegment492->addChildren(*HAnimSite500);

HAnimJoint491->addChildren(*HAnimSegment492);

CHAnimJoint* HAnimJoint503 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint503->setName("r_tarsal_interphalangeal_1");
HAnimJoint503->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint503->setCenter(new float[3]{0,1,0});
HAnimJoint503->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint503->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint491->addChildren(*HAnimJoint503);

HAnimJoint479->addChildren(*HAnimJoint491);

HAnimJoint470->addChildren(*HAnimJoint479);

HAnimJoint453->addChildren(*HAnimJoint470);

CHAnimJoint* HAnimJoint504 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint504->setName("r_cuneonavicular_2");
HAnimJoint504->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint504->setCenter(new float[3]{0,1,0});
HAnimJoint504->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint504->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment505->setName("r_cuneiform_2");
HAnimSegment505->setDEF("hanim_r_cuneiform_2");
CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform507 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
Shape508->setUSE("HAnimJointShape");
Transform507->addChild(*Shape508);

Transform506->addChildren(*Transform507);

HAnimSegment505->addChildren(*Transform506);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet510 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet510->setVertexCount(new int[1]{2});
CCoordinate* Coordinate511 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate511->setPoint(new float[6]{0,1,0,0,1,0});
LineSet510->setCoord(*Coordinate511);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA512 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA512->setUSE("HAnimSegmentLineColorRGBA");
LineSet510->setColor(*ColorRGBA512);

Shape509->setGeometry(LineSet510);

HAnimSegment505->addChildren(*Shape509);

HAnimJoint504->addChildren(*HAnimSegment505);

CHAnimJoint* HAnimJoint513 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint513->setName("r_tarsometatarsal_2");
HAnimJoint513->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint513->setCenter(new float[3]{0,1,0});
HAnimJoint513->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint513->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment514->setName("r_metatarsal_2");
HAnimSegment514->setDEF("hanim_r_metatarsal_2");
CTransform* Transform515 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform516 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
Shape517->setUSE("HAnimJointShape");
Transform516->addChild(*Shape517);

Transform515->addChildren(*Transform516);

HAnimSegment514->addChildren(*Transform515);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet519 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet519->setVertexCount(new int[1]{2});
CCoordinate* Coordinate520 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate520->setPoint(new float[6]{0,1,0,0,1,0});
LineSet519->setCoord(*Coordinate520);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA521 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA521->setUSE("HAnimSegmentLineColorRGBA");
LineSet519->setColor(*ColorRGBA521);

Shape518->setGeometry(LineSet519);

HAnimSegment514->addChildren(*Shape518);

HAnimJoint513->addChildren(*HAnimSegment514);

CHAnimJoint* HAnimJoint522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint522->setName("r_metatarsophalangeal_2");
HAnimJoint522->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint522->setCenter(new float[3]{0,1,0});
HAnimJoint522->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint522->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment523->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform524 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape526 = (CShape *)(m_pScene.createNode("Shape"));
Shape526->setUSE("HAnimJointShape");
Transform525->addChild(*Shape526);

Transform524->addChildren(*Transform525);

HAnimSegment523->addChildren(*Transform524);

CShape* Shape527 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet528 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet528->setVertexCount(new int[1]{2});
CCoordinate* Coordinate529 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate529->setPoint(new float[6]{0,1,0,0,1,0});
LineSet528->setCoord(*Coordinate529);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA530 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA530->setUSE("HAnimSegmentLineColorRGBA");
LineSet528->setColor(*ColorRGBA530);

Shape527->setGeometry(LineSet528);

HAnimSegment523->addChildren(*Shape527);

HAnimJoint522->addChildren(*HAnimSegment523);

CHAnimJoint* HAnimJoint531 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint531->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint531->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint531->setCenter(new float[3]{0,1,0});
HAnimJoint531->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint531->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment532 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment532->setName("r_tarsal_middle_phalanx_2");
HAnimSegment532->setDEF("hanim_r_tarsal_middle_phalanx_2");
CTransform* Transform533 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform534 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape535 = (CShape *)(m_pScene.createNode("Shape"));
Shape535->setUSE("HAnimJointShape");
Transform534->addChild(*Shape535);

Transform533->addChildren(*Transform534);

HAnimSegment532->addChildren(*Transform533);

CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet537 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet537->setVertexCount(new int[1]{2});
CCoordinate* Coordinate538 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate538->setPoint(new float[6]{0,1,0,0,1,0});
LineSet537->setCoord(*Coordinate538);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA539 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA539->setUSE("HAnimSegmentLineColorRGBA");
LineSet537->setColor(*ColorRGBA539);

Shape536->setGeometry(LineSet537);

HAnimSegment532->addChildren(*Shape536);

CHAnimSite* HAnimSite540 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite540->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite540->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite540->setTranslation(new float[3]{-0.05,-1.12,0});
CTouchSensor* TouchSensor541 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor541->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite540->addChildren(*TouchSensor541);

CShape* Shape542 = (CShape *)(m_pScene.createNode("Shape"));
Shape542->setUSE("HAnimSiteShape");
HAnimSite540->addChildren(*Shape542);

HAnimSegment532->addChildren(*HAnimSite540);

HAnimJoint531->addChildren(*HAnimSegment532);

CHAnimJoint* HAnimJoint543 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint543->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint543->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint543->setCenter(new float[3]{0,1,0});
HAnimJoint543->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint543->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint531->addChildren(*HAnimJoint543);

HAnimJoint522->addChildren(*HAnimJoint531);

HAnimJoint513->addChildren(*HAnimJoint522);

HAnimJoint504->addChildren(*HAnimJoint513);

HAnimJoint453->addChildren(*HAnimJoint504);

CHAnimJoint* HAnimJoint544 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint544->setName("r_cuneonavicular_3");
HAnimJoint544->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint544->setCenter(new float[3]{0,1,0});
HAnimJoint544->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint544->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setName("r_cuneiform_3");
HAnimSegment545->setDEF("hanim_r_cuneiform_3");
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform547 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
Shape548->setUSE("HAnimJointShape");
Transform547->addChild(*Shape548);

Transform546->addChildren(*Transform547);

HAnimSegment545->addChildren(*Transform546);

CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet550 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet550->setVertexCount(new int[1]{2});
CCoordinate* Coordinate551 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate551->setPoint(new float[6]{0,1,0,0,1,0});
LineSet550->setCoord(*Coordinate551);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA552 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA552->setUSE("HAnimSegmentLineColorRGBA");
LineSet550->setColor(*ColorRGBA552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChildren(*Shape549);

HAnimJoint544->addChildren(*HAnimSegment545);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint553->setName("r_tarsometatarsal_3");
HAnimJoint553->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint553->setCenter(new float[3]{0,1,0});
HAnimJoint553->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint553->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment554->setName("r_metatarsal_3");
HAnimSegment554->setDEF("hanim_r_metatarsal_3");
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform556 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
Shape557->setUSE("HAnimJointShape");
Transform556->addChild(*Shape557);

Transform555->addChildren(*Transform556);

HAnimSegment554->addChildren(*Transform555);

CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet559 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet559->setVertexCount(new int[1]{2});
CCoordinate* Coordinate560 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate560->setPoint(new float[6]{0,1,0,0,1,0});
LineSet559->setCoord(*Coordinate560);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
CColorRGBA* ColorRGBA561 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA561->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(*ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChildren(*Shape558);

HAnimJoint553->addChildren(*HAnimSegment554);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint562->setName("r_metatarsophalangeal_3");
HAnimJoint562->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint562->setCenter(new float[3]{0,1,0});
HAnimJoint562->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint562->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment563 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment563->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment563->setDEF("hanim_r_tarsal_proximal_phalanx_3");
CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform565 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
Shape566->setUSE("HAnimJointShape");
Transform565->addChild(*Shape566);

Transform564->addChildren(*Transform565);

HAnimSegment563->addChildren(*Transform564);

CShape* Shape567 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet568 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet568->setVertexCount(new int[1]{2});
CCoordinate* Coordinate569 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate569->setPoint(new float[6]{0,1,0,0,1,0});
LineSet568->setCoord(*Coordinate569);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA570 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA570->setUSE("HAnimSegmentLineColorRGBA");
LineSet568->setColor(*ColorRGBA570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChildren(*Shape567);

HAnimJoint562->addChildren(*HAnimSegment563);

CHAnimJoint* HAnimJoint571 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint571->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint571->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint571->setCenter(new float[3]{0,1,0});
HAnimJoint571->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint571->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment572 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment572->setName("r_tarsal_middle_phalanx_3");
HAnimSegment572->setDEF("hanim_r_tarsal_middle_phalanx_3");
CTransform* Transform573 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform574 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape575 = (CShape *)(m_pScene.createNode("Shape"));
Shape575->setUSE("HAnimJointShape");
Transform574->addChild(*Shape575);

Transform573->addChildren(*Transform574);

HAnimSegment572->addChildren(*Transform573);

CShape* Shape576 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet577 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet577->setVertexCount(new int[1]{2});
CCoordinate* Coordinate578 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate578->setPoint(new float[6]{0,1,0,0,1,0});
LineSet577->setCoord(*Coordinate578);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA579 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA579->setUSE("HAnimSegmentLineColorRGBA");
LineSet577->setColor(*ColorRGBA579);

Shape576->setGeometry(LineSet577);

HAnimSegment572->addChildren(*Shape576);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite580->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimSite580->setTranslation(new float[3]{-0.15,-1.13,0});
CTouchSensor* TouchSensor581 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor581->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite580->addChildren(*TouchSensor581);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("HAnimSiteShape");
HAnimSite580->addChildren(*Shape582);

HAnimSegment572->addChildren(*HAnimSite580);

HAnimJoint571->addChildren(*HAnimSegment572);

CHAnimJoint* HAnimJoint583 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint583->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint583->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint583->setCenter(new float[3]{0,1,0});
HAnimJoint583->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint583->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint571->addChildren(*HAnimJoint583);

HAnimJoint562->addChildren(*HAnimJoint571);

HAnimJoint553->addChildren(*HAnimJoint562);

HAnimJoint544->addChildren(*HAnimJoint553);

HAnimJoint453->addChildren(*HAnimJoint544);

HAnimJoint440->addChildren(*HAnimJoint453);

CHAnimJoint* HAnimJoint584 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint584->setName("r_calcaneocuboid");
HAnimJoint584->setDEF("hanim_r_calcaneocuboid");
HAnimJoint584->setCenter(new float[3]{0,1,0});
HAnimJoint584->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint584->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment585 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment585->setName("r_calcaneus");
HAnimSegment585->setDEF("hanim_r_calcaneus");
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform587 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimJointShape");
Transform587->addChild(*Shape588);

Transform586->addChildren(*Transform587);

HAnimSegment585->addChildren(*Transform586);

CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet590 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet590->setVertexCount(new int[1]{2});
CCoordinate* Coordinate591 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate591->setPoint(new float[6]{0,1,0,0,1,0});
LineSet590->setCoord(*Coordinate591);

//from r_calcaneocuboid to r_transversetarsal vertices 2
CColorRGBA* ColorRGBA592 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA592->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(*ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChildren(*Shape589);

HAnimJoint584->addChildren(*HAnimSegment585);

CHAnimJoint* HAnimJoint593 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint593->setName("r_transversetarsal");
HAnimJoint593->setDEF("hanim_r_transversetarsal");
HAnimJoint593->setCenter(new float[3]{0,1,0});
HAnimJoint593->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint593->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment594 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment594->setName("r_cuboid");
HAnimSegment594->setDEF("hanim_r_cuboid");
CTransform* Transform595 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform596 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape597 = (CShape *)(m_pScene.createNode("Shape"));
Shape597->setUSE("HAnimJointShape");
Transform596->addChild(*Shape597);

Transform595->addChildren(*Transform596);

HAnimSegment594->addChildren(*Transform595);

CShape* Shape598 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet599 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet599->setVertexCount(new int[1]{2});
CCoordinate* Coordinate600 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate600->setPoint(new float[6]{0,1,0,0,1,0});
LineSet599->setCoord(*Coordinate600);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA601 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA601->setUSE("HAnimSegmentLineColorRGBA");
LineSet599->setColor(*ColorRGBA601);

Shape598->setGeometry(LineSet599);

HAnimSegment594->addChildren(*Shape598);

CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet603 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet603->setVertexCount(new int[1]{2});
CCoordinate* Coordinate604 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate604->setPoint(new float[6]{0,1,0,0,1,0});
LineSet603->setCoord(*Coordinate604);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA605 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA605->setUSE("HAnimSegmentLineColorRGBA");
LineSet603->setColor(*ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment594->addChildren(*Shape602);

HAnimJoint593->addChildren(*HAnimSegment594);

CHAnimJoint* HAnimJoint606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint606->setName("r_tarsometatarsal_4");
HAnimJoint606->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint606->setCenter(new float[3]{0,1,0});
HAnimJoint606->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint606->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment607 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment607->setName("r_metatarsal_4");
HAnimSegment607->setDEF("hanim_r_metatarsal_4");
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform609 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape610 = (CShape *)(m_pScene.createNode("Shape"));
Shape610->setUSE("HAnimJointShape");
Transform609->addChild(*Shape610);

Transform608->addChildren(*Transform609);

HAnimSegment607->addChildren(*Transform608);

CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet612 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet612->setVertexCount(new int[1]{2});
CCoordinate* Coordinate613 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate613->setPoint(new float[6]{0,1,0,0,1,0});
LineSet612->setCoord(*Coordinate613);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA614 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(*ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChildren(*Shape611);

HAnimJoint606->addChildren(*HAnimSegment607);

CHAnimJoint* HAnimJoint615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint615->setName("r_metatarsophalangeal_4");
HAnimJoint615->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint615->setCenter(new float[3]{0,1,0});
HAnimJoint615->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint615->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment616 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment616->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment616->setDEF("hanim_r_tarsal_proximal_phalanx_4");
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform618 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
Shape619->setUSE("HAnimJointShape");
Transform618->addChild(*Shape619);

Transform617->addChildren(*Transform618);

HAnimSegment616->addChildren(*Transform617);

CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet621 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet621->setVertexCount(new int[1]{2});
CCoordinate* Coordinate622 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate622->setPoint(new float[6]{0,1,0,0,1,0});
LineSet621->setCoord(*Coordinate622);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA623 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA623->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(*ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChildren(*Shape620);

HAnimJoint615->addChildren(*HAnimSegment616);

CHAnimJoint* HAnimJoint624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint624->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint624->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint624->setCenter(new float[3]{0,1,0});
HAnimJoint624->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint624->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment625 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment625->setName("r_tarsal_middle_phalanx_4");
HAnimSegment625->setDEF("hanim_r_tarsal_middle_phalanx_4");
CTransform* Transform626 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform627 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape628 = (CShape *)(m_pScene.createNode("Shape"));
Shape628->setUSE("HAnimJointShape");
Transform627->addChild(*Shape628);

Transform626->addChildren(*Transform627);

HAnimSegment625->addChildren(*Transform626);

CShape* Shape629 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet630 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet630->setVertexCount(new int[1]{2});
CCoordinate* Coordinate631 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate631->setPoint(new float[6]{0,1,0,0,1,0});
LineSet630->setCoord(*Coordinate631);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA632 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA632->setUSE("HAnimSegmentLineColorRGBA");
LineSet630->setColor(*ColorRGBA632);

Shape629->setGeometry(LineSet630);

HAnimSegment625->addChildren(*Shape629);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite633->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimSite633->setTranslation(new float[3]{-0.25,-1.1,0});
CTouchSensor* TouchSensor634 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor634->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite633->addChildren(*TouchSensor634);

CShape* Shape635 = (CShape *)(m_pScene.createNode("Shape"));
Shape635->setUSE("HAnimSiteShape");
HAnimSite633->addChildren(*Shape635);

HAnimSegment625->addChildren(*HAnimSite633);

HAnimJoint624->addChildren(*HAnimSegment625);

CHAnimJoint* HAnimJoint636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint636->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint636->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint636->setCenter(new float[3]{0,1,0});
HAnimJoint636->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint636->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint624->addChildren(*HAnimJoint636);

HAnimJoint615->addChildren(*HAnimJoint624);

HAnimJoint606->addChildren(*HAnimJoint615);

HAnimJoint593->addChildren(*HAnimJoint606);

CHAnimJoint* HAnimJoint637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint637->setName("r_tarsometatarsal_5");
HAnimJoint637->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint637->setCenter(new float[3]{0,1,0});
HAnimJoint637->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint637->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment638 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment638->setName("r_metatarsal_5");
HAnimSegment638->setDEF("hanim_r_metatarsal_5");
CTransform* Transform639 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform640 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape641 = (CShape *)(m_pScene.createNode("Shape"));
Shape641->setUSE("HAnimJointShape");
Transform640->addChild(*Shape641);

Transform639->addChildren(*Transform640);

HAnimSegment638->addChildren(*Transform639);

CShape* Shape642 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet643 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet643->setVertexCount(new int[1]{2});
CCoordinate* Coordinate644 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate644->setPoint(new float[6]{0,1,0,0,1,0});
LineSet643->setCoord(*Coordinate644);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA645 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA645->setUSE("HAnimSegmentLineColorRGBA");
LineSet643->setColor(*ColorRGBA645);

Shape642->setGeometry(LineSet643);

HAnimSegment638->addChildren(*Shape642);

CHAnimSite* HAnimSite646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite646->setName("r_metatarsal_phalanx_5_pt");
HAnimSite646->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite646->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor647 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor647->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite646->addChildren(*TouchSensor647);

CShape* Shape648 = (CShape *)(m_pScene.createNode("Shape"));
Shape648->setUSE("HAnimSiteShape");
HAnimSite646->addChildren(*Shape648);

HAnimSegment638->addChildren(*HAnimSite646);

HAnimJoint637->addChildren(*HAnimSegment638);

CHAnimJoint* HAnimJoint649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint649->setName("r_metatarsophalangeal_5");
HAnimJoint649->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint649->setCenter(new float[3]{0,1,0});
HAnimJoint649->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint649->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment650 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment650->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment650->setDEF("hanim_r_tarsal_proximal_phalanx_5");
CTransform* Transform651 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform652 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
Shape653->setUSE("HAnimJointShape");
Transform652->addChild(*Shape653);

Transform651->addChildren(*Transform652);

HAnimSegment650->addChildren(*Transform651);

CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet655 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet655->setVertexCount(new int[1]{2});
CCoordinate* Coordinate656 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate656->setPoint(new float[6]{0,1,0,0,1,0});
LineSet655->setCoord(*Coordinate656);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA657 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA657->setUSE("HAnimSegmentLineColorRGBA");
LineSet655->setColor(*ColorRGBA657);

Shape654->setGeometry(LineSet655);

HAnimSegment650->addChildren(*Shape654);

HAnimJoint649->addChildren(*HAnimSegment650);

CHAnimJoint* HAnimJoint658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint658->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint658->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint658->setCenter(new float[3]{0,1,0});
HAnimJoint658->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint658->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment659 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment659->setName("r_tarsal_middle_phalanx_5");
HAnimSegment659->setDEF("hanim_r_tarsal_middle_phalanx_5");
CTransform* Transform660 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform661 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape662 = (CShape *)(m_pScene.createNode("Shape"));
Shape662->setUSE("HAnimJointShape");
Transform661->addChild(*Shape662);

Transform660->addChildren(*Transform661);

HAnimSegment659->addChildren(*Transform660);

CShape* Shape663 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet664 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet664->setVertexCount(new int[1]{2});
CCoordinate* Coordinate665 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate665->setPoint(new float[6]{0,1,0,0,1,0});
LineSet664->setCoord(*Coordinate665);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA666 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA666->setUSE("HAnimSegmentLineColorRGBA");
LineSet664->setColor(*ColorRGBA666);

Shape663->setGeometry(LineSet664);

HAnimSegment659->addChildren(*Shape663);

CHAnimSite* HAnimSite667 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite667->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite667->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimSite667->setTranslation(new float[3]{-0.34,-1.05,0});
CTouchSensor* TouchSensor668 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor668->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite667->addChildren(*TouchSensor668);

CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
Shape669->setUSE("HAnimSiteShape");
HAnimSite667->addChildren(*Shape669);

HAnimSegment659->addChildren(*HAnimSite667);

HAnimJoint658->addChildren(*HAnimSegment659);

CHAnimJoint* HAnimJoint670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint670->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint670->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint670->setCenter(new float[3]{0,1,0});
HAnimJoint670->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint670->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint658->addChildren(*HAnimJoint670);

HAnimJoint649->addChildren(*HAnimJoint658);

HAnimJoint637->addChildren(*HAnimJoint649);

HAnimJoint593->addChildren(*HAnimJoint637);

HAnimJoint584->addChildren(*HAnimJoint593);

HAnimJoint440->addChildren(*HAnimJoint584);

HAnimJoint425->addChildren(*HAnimJoint440);

HAnimJoint407->addChildren(*HAnimJoint425);

HAnimJoint106->addChildren(*HAnimJoint407);

HAnimJoint52->addChildren(*HAnimJoint106);

CHAnimJoint* HAnimJoint671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint671->setName("vl5");
HAnimJoint671->setDEF("hanim_vl5");
HAnimJoint671->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint671->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint671->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment672 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment672->setName("l5");
HAnimSegment672->setDEF("hanim_l5");
CTransform* Transform673 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform674 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("HAnimJointShape");
Transform674->addChild(*Shape675);

Transform673->addChildren(*Transform674);

HAnimSegment672->addChildren(*Transform673);

CShape* Shape676 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet677 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet677->setVertexCount(new int[1]{2});
CCoordinate* Coordinate678 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate678->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet677->setCoord(*Coordinate678);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA679 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA679->setUSE("HAnimSegmentLineColorRGBA");
LineSet677->setColor(*ColorRGBA679);

Shape676->setGeometry(LineSet677);

HAnimSegment672->addChildren(*Shape676);

HAnimJoint671->addChildren(*HAnimSegment672);

CHAnimJoint* HAnimJoint680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint680->setName("vl4");
HAnimJoint680->setDEF("hanim_vl4");
HAnimJoint680->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint680->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint680->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment681 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment681->setName("l4");
HAnimSegment681->setDEF("hanim_l4");
CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform683 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
Shape684->setUSE("HAnimJointShape");
Transform683->addChild(*Shape684);

Transform682->addChildren(*Transform683);

HAnimSegment681->addChildren(*Transform682);

CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet686 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet686->setVertexCount(new int[1]{2});
CCoordinate* Coordinate687 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate687->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet686->setCoord(*Coordinate687);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA688 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA688->setUSE("HAnimSegmentLineColorRGBA");
LineSet686->setColor(*ColorRGBA688);

Shape685->setGeometry(LineSet686);

HAnimSegment681->addChildren(*Shape685);

HAnimJoint680->addChildren(*HAnimSegment681);

CHAnimJoint* HAnimJoint689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint689->setName("vl3");
HAnimJoint689->setDEF("hanim_vl3");
HAnimJoint689->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint689->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint689->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment690 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment690->setName("l3");
HAnimSegment690->setDEF("hanim_l3");
CTransform* Transform691 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform692 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape693 = (CShape *)(m_pScene.createNode("Shape"));
Shape693->setUSE("HAnimJointShape");
Transform692->addChild(*Shape693);

Transform691->addChildren(*Transform692);

HAnimSegment690->addChildren(*Transform691);

CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet695 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet695->setVertexCount(new int[1]{2});
CCoordinate* Coordinate696 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate696->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet695->setCoord(*Coordinate696);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA697 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA697->setUSE("HAnimSegmentLineColorRGBA");
LineSet695->setColor(*ColorRGBA697);

Shape694->setGeometry(LineSet695);

HAnimSegment690->addChildren(*Shape694);

CHAnimSite* HAnimSite698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite698->setName("l_rib10_pt");
HAnimSite698->setDEF("hanim_l_rib10_pt");
HAnimSite698->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor699 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor699->setDescription("HAnimSite l_rib10_pt");
HAnimSite698->addChildren(*TouchSensor699);

CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("HAnimSiteShape");
HAnimSite698->addChildren(*Shape700);

HAnimSegment690->addChildren(*HAnimSite698);

CHAnimSite* HAnimSite701 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite701->setName("r_rib10_pt");
HAnimSite701->setDEF("hanim_r_rib10_pt");
HAnimSite701->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor702 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor702->setDescription("HAnimSite r_rib10_pt");
HAnimSite701->addChildren(*TouchSensor702);

CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
Shape703->setUSE("HAnimSiteShape");
HAnimSite701->addChildren(*Shape703);

HAnimSegment690->addChildren(*HAnimSite701);

CHAnimSite* HAnimSite704 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite704->setName("spine_2_middle_back_pt");
HAnimSite704->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite704->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor705 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor705->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite704->addChildren(*TouchSensor705);

CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
Shape706->setUSE("HAnimSiteShape");
HAnimSite704->addChildren(*Shape706);

HAnimSegment690->addChildren(*HAnimSite704);

HAnimJoint689->addChildren(*HAnimSegment690);

CHAnimJoint* HAnimJoint707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint707->setName("vl2");
HAnimJoint707->setDEF("hanim_vl2");
HAnimJoint707->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint707->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint707->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment708 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment708->setName("l2");
HAnimSegment708->setDEF("hanim_l2");
CTransform* Transform709 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform710 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape711 = (CShape *)(m_pScene.createNode("Shape"));
Shape711->setUSE("HAnimJointShape");
Transform710->addChild(*Shape711);

Transform709->addChildren(*Transform710);

HAnimSegment708->addChildren(*Transform709);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet713 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet713->setVertexCount(new int[1]{2});
CCoordinate* Coordinate714 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate714->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet713->setCoord(*Coordinate714);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA715 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA715->setUSE("HAnimSegmentLineColorRGBA");
LineSet713->setColor(*ColorRGBA715);

Shape712->setGeometry(LineSet713);

HAnimSegment708->addChildren(*Shape712);

HAnimJoint707->addChildren(*HAnimSegment708);

CHAnimJoint* HAnimJoint716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint716->setName("vl1");
HAnimJoint716->setDEF("hanim_vl1");
HAnimJoint716->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint716->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint716->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment717 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment717->setName("l1");
HAnimSegment717->setDEF("hanim_l1");
CTransform* Transform718 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform719 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
Shape720->setUSE("HAnimJointShape");
Transform719->addChild(*Shape720);

Transform718->addChildren(*Transform719);

HAnimSegment717->addChildren(*Transform718);

CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet722 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet722->setVertexCount(new int[1]{2});
CCoordinate* Coordinate723 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate723->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet722->setCoord(*Coordinate723);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA724 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA724->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(*ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimSegment717->addChildren(*Shape721);

HAnimJoint716->addChildren(*HAnimSegment717);

CHAnimJoint* HAnimJoint725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint725->setName("vt12");
HAnimJoint725->setDEF("hanim_vt12");
HAnimJoint725->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint725->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint725->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment726 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment726->setName("t12");
HAnimSegment726->setDEF("hanim_t12");
CTransform* Transform727 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform728 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
Shape729->setUSE("HAnimJointShape");
Transform728->addChild(*Shape729);

Transform727->addChildren(*Transform728);

HAnimSegment726->addChildren(*Transform727);

CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet731 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet731->setVertexCount(new int[1]{2});
CCoordinate* Coordinate732 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate732->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet731->setCoord(*Coordinate732);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA733 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA733->setUSE("HAnimSegmentLineColorRGBA");
LineSet731->setColor(*ColorRGBA733);

Shape730->setGeometry(LineSet731);

HAnimSegment726->addChildren(*Shape730);

HAnimJoint725->addChildren(*HAnimSegment726);

CHAnimJoint* HAnimJoint734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint734->setName("vt11");
HAnimJoint734->setDEF("hanim_vt11");
HAnimJoint734->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint734->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint734->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment735 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment735->setName("t11");
HAnimSegment735->setDEF("hanim_t11");
CTransform* Transform736 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform737 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape738 = (CShape *)(m_pScene.createNode("Shape"));
Shape738->setUSE("HAnimJointShape");
Transform737->addChild(*Shape738);

Transform736->addChildren(*Transform737);

HAnimSegment735->addChildren(*Transform736);

CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet740 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet740->setVertexCount(new int[1]{2});
CCoordinate* Coordinate741 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate741->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet740->setCoord(*Coordinate741);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA742 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA742->setUSE("HAnimSegmentLineColorRGBA");
LineSet740->setColor(*ColorRGBA742);

Shape739->setGeometry(LineSet740);

HAnimSegment735->addChildren(*Shape739);

CHAnimSite* HAnimSite743 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite743->setName("substernale_pt");
HAnimSite743->setDEF("hanim_substernale_pt");
HAnimSite743->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor744 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor744->setDescription("HAnimSite substernale_pt");
HAnimSite743->addChildren(*TouchSensor744);

CShape* Shape745 = (CShape *)(m_pScene.createNode("Shape"));
Shape745->setUSE("HAnimSiteShape");
HAnimSite743->addChildren(*Shape745);

HAnimSegment735->addChildren(*HAnimSite743);

HAnimJoint734->addChildren(*HAnimSegment735);

CHAnimJoint* HAnimJoint746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint746->setName("vt10");
HAnimJoint746->setDEF("hanim_vt10");
HAnimJoint746->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint746->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint746->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment747 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment747->setName("t10");
HAnimSegment747->setDEF("hanim_t10");
CTransform* Transform748 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform749 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
Shape750->setUSE("HAnimJointShape");
Transform749->addChild(*Shape750);

Transform748->addChildren(*Transform749);

HAnimSegment747->addChildren(*Transform748);

CShape* Shape751 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet752 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet752->setVertexCount(new int[1]{2});
CCoordinate* Coordinate753 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate753->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet752->setCoord(*Coordinate753);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA754 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA754->setUSE("HAnimSegmentLineColorRGBA");
LineSet752->setColor(*ColorRGBA754);

Shape751->setGeometry(LineSet752);

HAnimSegment747->addChildren(*Shape751);

CHAnimSite* HAnimSite755 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite755->setName("l_thelion_pt");
HAnimSite755->setDEF("hanim_l_thelion_pt");
HAnimSite755->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor756 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor756->setDescription("HAnimSite l_thelion_pt");
HAnimSite755->addChildren(*TouchSensor756);

CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
Shape757->setUSE("HAnimSiteShape");
HAnimSite755->addChildren(*Shape757);

HAnimSegment747->addChildren(*HAnimSite755);

CHAnimSite* HAnimSite758 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite758->setName("r_thelion_pt");
HAnimSite758->setDEF("hanim_r_thelion_pt");
HAnimSite758->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor759 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor759->setDescription("HAnimSite r_thelion_pt");
HAnimSite758->addChildren(*TouchSensor759);

CShape* Shape760 = (CShape *)(m_pScene.createNode("Shape"));
Shape760->setUSE("HAnimSiteShape");
HAnimSite758->addChildren(*Shape760);

HAnimSegment747->addChildren(*HAnimSite758);

HAnimJoint746->addChildren(*HAnimSegment747);

CHAnimJoint* HAnimJoint761 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint761->setName("vt9");
HAnimJoint761->setDEF("hanim_vt9");
HAnimJoint761->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint761->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint761->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment762->setName("t9");
HAnimSegment762->setDEF("hanim_t9");
CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform764 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
Shape765->setUSE("HAnimJointShape");
Transform764->addChild(*Shape765);

Transform763->addChildren(*Transform764);

HAnimSegment762->addChildren(*Transform763);

CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet767 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet767->setVertexCount(new int[1]{2});
CCoordinate* Coordinate768 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate768->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet767->setCoord(*Coordinate768);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA769 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA769->setUSE("HAnimSegmentLineColorRGBA");
LineSet767->setColor(*ColorRGBA769);

Shape766->setGeometry(LineSet767);

HAnimSegment762->addChildren(*Shape766);

HAnimJoint761->addChildren(*HAnimSegment762);

CHAnimJoint* HAnimJoint770 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint770->setName("vt8");
HAnimJoint770->setDEF("hanim_vt8");
HAnimJoint770->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint770->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint770->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment771->setName("t8");
HAnimSegment771->setDEF("hanim_t8");
CTransform* Transform772 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
Shape774->setUSE("HAnimJointShape");
Transform773->addChild(*Shape774);

Transform772->addChildren(*Transform773);

HAnimSegment771->addChildren(*Transform772);

CShape* Shape775 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet776 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet776->setVertexCount(new int[1]{2});
CCoordinate* Coordinate777 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate777->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet776->setCoord(*Coordinate777);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA778 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA778->setUSE("HAnimSegmentLineColorRGBA");
LineSet776->setColor(*ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment771->addChildren(*Shape775);

HAnimJoint770->addChildren(*HAnimSegment771);

CHAnimJoint* HAnimJoint779 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint779->setName("vt7");
HAnimJoint779->setDEF("hanim_vt7");
HAnimJoint779->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint779->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint779->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment780->setName("t7");
HAnimSegment780->setDEF("hanim_t7");
CTransform* Transform781 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform782 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
Shape783->setUSE("HAnimJointShape");
Transform782->addChild(*Shape783);

Transform781->addChildren(*Transform782);

HAnimSegment780->addChildren(*Transform781);

CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet785 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet785->setVertexCount(new int[1]{2});
CCoordinate* Coordinate786 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate786->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet785->setCoord(*Coordinate786);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA787 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA787->setUSE("HAnimSegmentLineColorRGBA");
LineSet785->setColor(*ColorRGBA787);

Shape784->setGeometry(LineSet785);

HAnimSegment780->addChildren(*Shape784);

CHAnimSite* HAnimSite788 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite788->setName("l_chest_midsagittal_plane_pt");
HAnimSite788->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite788->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor789 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor789->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite788->addChildren(*TouchSensor789);

CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChildren(*Shape790);

HAnimSegment780->addChildren(*HAnimSite788);

CHAnimSite* HAnimSite791 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite791->setName("mesosternale_pt");
HAnimSite791->setDEF("hanim_mesosternale_pt");
HAnimSite791->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor792 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor792->setDescription("HAnimSite mesosternale_pt");
HAnimSite791->addChildren(*TouchSensor792);

CShape* Shape793 = (CShape *)(m_pScene.createNode("Shape"));
Shape793->setUSE("HAnimSiteShape");
HAnimSite791->addChildren(*Shape793);

HAnimSegment780->addChildren(*HAnimSite791);

CHAnimSite* HAnimSite794 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite794->setName("r_chest_midsagittal_plane_pt");
HAnimSite794->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite794->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor795 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor795->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite794->addChildren(*TouchSensor795);

CShape* Shape796 = (CShape *)(m_pScene.createNode("Shape"));
Shape796->setUSE("HAnimSiteShape");
HAnimSite794->addChildren(*Shape796);

HAnimSegment780->addChildren(*HAnimSite794);

CHAnimSite* HAnimSite797 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite797->setName("rear_center_midsagittal_plane_pt");
HAnimSite797->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite797->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor798 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor798->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite797->addChildren(*TouchSensor798);

CShape* Shape799 = (CShape *)(m_pScene.createNode("Shape"));
Shape799->setUSE("HAnimSiteShape");
HAnimSite797->addChildren(*Shape799);

HAnimSegment780->addChildren(*HAnimSite797);

HAnimJoint779->addChildren(*HAnimSegment780);

CHAnimJoint* HAnimJoint800 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint800->setName("vt6");
HAnimJoint800->setDEF("hanim_vt6");
HAnimJoint800->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint800->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint800->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment801->setName("t6");
HAnimSegment801->setDEF("hanim_t6");
CTransform* Transform802 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform803 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
Shape804->setUSE("HAnimJointShape");
Transform803->addChild(*Shape804);

Transform802->addChildren(*Transform803);

HAnimSegment801->addChildren(*Transform802);

CShape* Shape805 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet806 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet806->setVertexCount(new int[1]{2});
CCoordinate* Coordinate807 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate807->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet806->setCoord(*Coordinate807);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA808 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA808->setUSE("HAnimSegmentLineColorRGBA");
LineSet806->setColor(*ColorRGBA808);

Shape805->setGeometry(LineSet806);

HAnimSegment801->addChildren(*Shape805);

CHAnimSite* HAnimSite809 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite809->setName("spine_1_middle_back_pt");
HAnimSite809->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite809->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor810 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor810->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite809->addChildren(*TouchSensor810);

CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
Shape811->setUSE("HAnimSiteShape");
HAnimSite809->addChildren(*Shape811);

HAnimSegment801->addChildren(*HAnimSite809);

HAnimJoint800->addChildren(*HAnimSegment801);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setName("vt5");
HAnimJoint812->setDEF("hanim_vt5");
HAnimJoint812->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint812->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint812->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setName("t5");
HAnimSegment813->setDEF("hanim_t5");
CTransform* Transform814 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform815 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
Shape816->setUSE("HAnimJointShape");
Transform815->addChild(*Shape816);

Transform814->addChildren(*Transform815);

HAnimSegment813->addChildren(*Transform814);

CShape* Shape817 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet818 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet818->setVertexCount(new int[1]{2});
CCoordinate* Coordinate819 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate819->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet818->setCoord(*Coordinate819);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA820 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA820->setUSE("HAnimSegmentLineColorRGBA");
LineSet818->setColor(*ColorRGBA820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChildren(*Shape817);

HAnimJoint812->addChildren(*HAnimSegment813);

CHAnimJoint* HAnimJoint821 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint821->setName("vt4");
HAnimJoint821->setDEF("hanim_vt4");
HAnimJoint821->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint821->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint821->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment822->setName("t4");
HAnimSegment822->setDEF("hanim_t4");
CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform824 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape825 = (CShape *)(m_pScene.createNode("Shape"));
Shape825->setUSE("HAnimJointShape");
Transform824->addChild(*Shape825);

Transform823->addChildren(*Transform824);

HAnimSegment822->addChildren(*Transform823);

CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet827 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet827->setVertexCount(new int[1]{2});
CCoordinate* Coordinate828 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate828->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet827->setCoord(*Coordinate828);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA829 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA829->setUSE("HAnimSegmentLineColorRGBA");
LineSet827->setColor(*ColorRGBA829);

Shape826->setGeometry(LineSet827);

HAnimSegment822->addChildren(*Shape826);

HAnimJoint821->addChildren(*HAnimSegment822);

CHAnimJoint* HAnimJoint830 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint830->setName("vt3");
HAnimJoint830->setDEF("hanim_vt3");
HAnimJoint830->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint830->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint830->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment831->setName("t3");
HAnimSegment831->setDEF("hanim_t3");
CTransform* Transform832 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform833 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
Shape834->setUSE("HAnimJointShape");
Transform833->addChild(*Shape834);

Transform832->addChildren(*Transform833);

HAnimSegment831->addChildren(*Transform832);

CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet836 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet836->setVertexCount(new int[1]{2});
CCoordinate* Coordinate837 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate837->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet836->setCoord(*Coordinate837);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA838 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA838->setUSE("HAnimSegmentLineColorRGBA");
LineSet836->setColor(*ColorRGBA838);

Shape835->setGeometry(LineSet836);

HAnimSegment831->addChildren(*Shape835);

HAnimJoint830->addChildren(*HAnimSegment831);

CHAnimJoint* HAnimJoint839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint839->setName("vt2");
HAnimJoint839->setDEF("hanim_vt2");
HAnimJoint839->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint839->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint839->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment840->setName("t2");
HAnimSegment840->setDEF("hanim_t2");
CTransform* Transform841 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform842 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
Shape843->setUSE("HAnimJointShape");
Transform842->addChild(*Shape843);

Transform841->addChildren(*Transform842);

HAnimSegment840->addChildren(*Transform841);

CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet845 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet845->setVertexCount(new int[1]{2});
CCoordinate* Coordinate846 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate846->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet845->setCoord(*Coordinate846);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA847 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA847->setUSE("HAnimSegmentLineColorRGBA");
LineSet845->setColor(*ColorRGBA847);

Shape844->setGeometry(LineSet845);

HAnimSegment840->addChildren(*Shape844);

CHAnimSite* HAnimSite848 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite848->setName("cervicale_pt");
HAnimSite848->setDEF("hanim_cervicale_pt");
HAnimSite848->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor849 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor849->setDescription("HAnimSite cervicale_pt");
HAnimSite848->addChildren(*TouchSensor849);

CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
Shape850->setUSE("HAnimSiteShape");
HAnimSite848->addChildren(*Shape850);

HAnimSegment840->addChildren(*HAnimSite848);

CHAnimSite* HAnimSite851 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite851->setName("suprasternale_pt");
HAnimSite851->setDEF("hanim_suprasternale_pt");
HAnimSite851->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor852 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor852->setDescription("HAnimSite suprasternale_pt");
HAnimSite851->addChildren(*TouchSensor852);

CShape* Shape853 = (CShape *)(m_pScene.createNode("Shape"));
Shape853->setUSE("HAnimSiteShape");
HAnimSite851->addChildren(*Shape853);

HAnimSegment840->addChildren(*HAnimSite851);

HAnimJoint839->addChildren(*HAnimSegment840);

CHAnimJoint* HAnimJoint854 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint854->setName("vt1");
HAnimJoint854->setDEF("hanim_vt1");
HAnimJoint854->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint854->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint854->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment855->setName("t1");
HAnimSegment855->setDEF("hanim_t1");
CTransform* Transform856 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform857 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
Shape858->setUSE("HAnimJointShape");
Transform857->addChild(*Shape858);

Transform856->addChildren(*Transform857);

HAnimSegment855->addChildren(*Transform856);

CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet860 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet860->setVertexCount(new int[1]{2});
CCoordinate* Coordinate861 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate861->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet860->setCoord(*Coordinate861);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA862 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA862->setUSE("HAnimSegmentLineColorRGBA");
LineSet860->setColor(*ColorRGBA862);

Shape859->setGeometry(LineSet860);

HAnimSegment855->addChildren(*Shape859);

CHAnimSite* HAnimSite863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite863->setName("l_neck_base_pt");
HAnimSite863->setDEF("hanim_l_neck_base_pt");
HAnimSite863->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor864 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor864->setDescription("HAnimSite l_neck_base_pt");
HAnimSite863->addChildren(*TouchSensor864);

CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("HAnimSiteShape");
HAnimSite863->addChildren(*Shape865);

HAnimSegment855->addChildren(*HAnimSite863);

CHAnimSite* HAnimSite866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite866->setName("r_neck_base_pt");
HAnimSite866->setDEF("hanim_r_neck_base_pt");
HAnimSite866->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor867 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor867->setDescription("HAnimSite r_neck_base_pt");
HAnimSite866->addChildren(*TouchSensor867);

CShape* Shape868 = (CShape *)(m_pScene.createNode("Shape"));
Shape868->setUSE("HAnimSiteShape");
HAnimSite866->addChildren(*Shape868);

HAnimSegment855->addChildren(*HAnimSite866);

CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet870 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet870->setVertexCount(new int[1]{2});
CCoordinate* Coordinate871 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate871->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet870->setCoord(*Coordinate871);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA872 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA872->setUSE("HAnimSegmentLineColorRGBA");
LineSet870->setColor(*ColorRGBA872);

Shape869->setGeometry(LineSet870);

HAnimSegment855->addChildren(*Shape869);

CHAnimSite* HAnimSite873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite873->setName("l_acromion_pt");
HAnimSite873->setDEF("hanim_l_acromion_pt");
HAnimSite873->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor874 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor874->setDescription("HAnimSite l_acromion_pt");
HAnimSite873->addChildren(*TouchSensor874);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimSiteShape");
HAnimSite873->addChildren(*Shape875);

HAnimSegment855->addChildren(*HAnimSite873);

CHAnimSite* HAnimSite876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite876->setName("l_axilla_distal_pt");
HAnimSite876->setDEF("hanim_l_axilla_distal_pt");
HAnimSite876->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor877 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor877->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite876->addChildren(*TouchSensor877);

CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("HAnimSiteShape");
HAnimSite876->addChildren(*Shape878);

HAnimSegment855->addChildren(*HAnimSite876);

CHAnimSite* HAnimSite879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite879->setName("l_axilla_posterior_folds_pt");
HAnimSite879->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite879->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor880 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor880->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite879->addChildren(*TouchSensor880);

CShape* Shape881 = (CShape *)(m_pScene.createNode("Shape"));
Shape881->setUSE("HAnimSiteShape");
HAnimSite879->addChildren(*Shape881);

HAnimSegment855->addChildren(*HAnimSite879);

CHAnimSite* HAnimSite882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite882->setName("l_axilla_proximal_pt");
HAnimSite882->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite882->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor883 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor883->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite882->addChildren(*TouchSensor883);

CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("HAnimSiteShape");
HAnimSite882->addChildren(*Shape884);

HAnimSegment855->addChildren(*HAnimSite882);

CHAnimSite* HAnimSite885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite885->setName("l_clavicale_pt");
HAnimSite885->setDEF("hanim_l_clavicale_pt");
HAnimSite885->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor886 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor886->setDescription("HAnimSite l_clavicale_pt");
HAnimSite885->addChildren(*TouchSensor886);

CShape* Shape887 = (CShape *)(m_pScene.createNode("Shape"));
Shape887->setUSE("HAnimSiteShape");
HAnimSite885->addChildren(*Shape887);

HAnimSegment855->addChildren(*HAnimSite885);

CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet889 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet889->setVertexCount(new int[1]{2});
CCoordinate* Coordinate890 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate890->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet889->setCoord(*Coordinate890);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA891 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA891->setUSE("HAnimSegmentLineColorRGBA");
LineSet889->setColor(*ColorRGBA891);

Shape888->setGeometry(LineSet889);

HAnimSegment855->addChildren(*Shape888);

CHAnimSite* HAnimSite892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite892->setName("r_acromion_pt");
HAnimSite892->setDEF("hanim_r_acromion_pt");
HAnimSite892->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor893 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor893->setDescription("HAnimSite r_acromion_pt");
HAnimSite892->addChildren(*TouchSensor893);

CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("HAnimSiteShape");
HAnimSite892->addChildren(*Shape894);

HAnimSegment855->addChildren(*HAnimSite892);

CHAnimSite* HAnimSite895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite895->setName("r_axilla_distal_pt");
HAnimSite895->setDEF("hanim_r_axilla_distal_pt");
HAnimSite895->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor896 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor896->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite895->addChildren(*TouchSensor896);

CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
Shape897->setUSE("HAnimSiteShape");
HAnimSite895->addChildren(*Shape897);

HAnimSegment855->addChildren(*HAnimSite895);

CHAnimSite* HAnimSite898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite898->setName("r_axilla_posterior_folds_pt");
HAnimSite898->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite898->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor899 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor899->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite898->addChildren(*TouchSensor899);

CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
Shape900->setUSE("HAnimSiteShape");
HAnimSite898->addChildren(*Shape900);

HAnimSegment855->addChildren(*HAnimSite898);

CHAnimSite* HAnimSite901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite901->setName("r_axilla_proximal_pt");
HAnimSite901->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite901->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor902 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor902->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite901->addChildren(*TouchSensor902);

CShape* Shape903 = (CShape *)(m_pScene.createNode("Shape"));
Shape903->setUSE("HAnimSiteShape");
HAnimSite901->addChildren(*Shape903);

HAnimSegment855->addChildren(*HAnimSite901);

CHAnimSite* HAnimSite904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite904->setName("r_clavicale_pt");
HAnimSite904->setDEF("hanim_r_clavicale_pt");
HAnimSite904->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor905 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor905->setDescription("HAnimSite r_clavicale_pt");
HAnimSite904->addChildren(*TouchSensor905);

CShape* Shape906 = (CShape *)(m_pScene.createNode("Shape"));
Shape906->setUSE("HAnimSiteShape");
HAnimSite904->addChildren(*Shape906);

HAnimSegment855->addChildren(*HAnimSite904);

HAnimJoint854->addChildren(*HAnimSegment855);

CHAnimJoint* HAnimJoint907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint907->setName("vc7");
HAnimJoint907->setDEF("hanim_vc7");
HAnimJoint907->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint907->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint907->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment908 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment908->setName("c7");
HAnimSegment908->setDEF("hanim_c7");
CTransform* Transform909 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform910 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape911 = (CShape *)(m_pScene.createNode("Shape"));
Shape911->setUSE("HAnimJointShape");
Transform910->addChild(*Shape911);

Transform909->addChildren(*Transform910);

HAnimSegment908->addChildren(*Transform909);

CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet913 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet913->setVertexCount(new int[1]{2});
CCoordinate* Coordinate914 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate914->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet913->setCoord(*Coordinate914);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA915 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA915->setUSE("HAnimSegmentLineColorRGBA");
LineSet913->setColor(*ColorRGBA915);

Shape912->setGeometry(LineSet913);

HAnimSegment908->addChildren(*Shape912);

HAnimJoint907->addChildren(*HAnimSegment908);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setName("vc6");
HAnimJoint916->setDEF("hanim_vc6");
HAnimJoint916->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint916->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint916->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment917 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment917->setName("c6");
HAnimSegment917->setDEF("hanim_c6");
CTransform* Transform918 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform919 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
Shape920->setUSE("HAnimJointShape");
Transform919->addChild(*Shape920);

Transform918->addChildren(*Transform919);

HAnimSegment917->addChildren(*Transform918);

CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet922 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet922->setVertexCount(new int[1]{2});
CCoordinate* Coordinate923 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate923->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet922->setCoord(*Coordinate923);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA924 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA924->setUSE("HAnimSegmentLineColorRGBA");
LineSet922->setColor(*ColorRGBA924);

Shape921->setGeometry(LineSet922);

HAnimSegment917->addChildren(*Shape921);

HAnimJoint916->addChildren(*HAnimSegment917);

CHAnimJoint* HAnimJoint925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint925->setName("vc5");
HAnimJoint925->setDEF("hanim_vc5");
HAnimJoint925->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint925->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint925->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment926 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment926->setName("c5");
HAnimSegment926->setDEF("hanim_c5");
CTransform* Transform927 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
Shape929->setUSE("HAnimJointShape");
Transform928->addChild(*Shape929);

Transform927->addChildren(*Transform928);

HAnimSegment926->addChildren(*Transform927);

CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet931 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet931->setVertexCount(new int[1]{2});
CCoordinate* Coordinate932 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate932->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet931->setCoord(*Coordinate932);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA933 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA933->setUSE("HAnimSegmentLineColorRGBA");
LineSet931->setColor(*ColorRGBA933);

Shape930->setGeometry(LineSet931);

HAnimSegment926->addChildren(*Shape930);

HAnimJoint925->addChildren(*HAnimSegment926);

CHAnimJoint* HAnimJoint934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint934->setName("vc4");
HAnimJoint934->setDEF("hanim_vc4");
HAnimJoint934->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint934->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint934->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment935 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment935->setName("c4");
HAnimSegment935->setDEF("hanim_c4");
CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform937 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape938 = (CShape *)(m_pScene.createNode("Shape"));
Shape938->setUSE("HAnimJointShape");
Transform937->addChild(*Shape938);

Transform936->addChildren(*Transform937);

HAnimSegment935->addChildren(*Transform936);

CShape* Shape939 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet940 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet940->setVertexCount(new int[1]{2});
CCoordinate* Coordinate941 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate941->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet940->setCoord(*Coordinate941);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA942 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA942->setUSE("HAnimSegmentLineColorRGBA");
LineSet940->setColor(*ColorRGBA942);

Shape939->setGeometry(LineSet940);

HAnimSegment935->addChildren(*Shape939);

HAnimJoint934->addChildren(*HAnimSegment935);

CHAnimJoint* HAnimJoint943 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint943->setName("vc3");
HAnimJoint943->setDEF("hanim_vc3");
HAnimJoint943->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint943->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint943->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment944 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment944->setName("c3");
HAnimSegment944->setDEF("hanim_c3");
CTransform* Transform945 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform946 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape947 = (CShape *)(m_pScene.createNode("Shape"));
Shape947->setUSE("HAnimJointShape");
Transform946->addChild(*Shape947);

Transform945->addChildren(*Transform946);

HAnimSegment944->addChildren(*Transform945);

CShape* Shape948 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet949 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet949->setVertexCount(new int[1]{2});
CCoordinate* Coordinate950 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate950->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet949->setCoord(*Coordinate950);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA951 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA951->setUSE("HAnimSegmentLineColorRGBA");
LineSet949->setColor(*ColorRGBA951);

Shape948->setGeometry(LineSet949);

HAnimSegment944->addChildren(*Shape948);

CHAnimSite* HAnimSite952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite952->setName("adams_apple_pt");
HAnimSite952->setDEF("hanim_adams_apple_pt");
HAnimSite952->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor953 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor953->setDescription("HAnimSite adams_apple_pt");
HAnimSite952->addChildren(*TouchSensor953);

CShape* Shape954 = (CShape *)(m_pScene.createNode("Shape"));
Shape954->setUSE("HAnimSiteShape");
HAnimSite952->addChildren(*Shape954);

HAnimSegment944->addChildren(*HAnimSite952);

HAnimJoint943->addChildren(*HAnimSegment944);

CHAnimJoint* HAnimJoint955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint955->setName("vc2");
HAnimJoint955->setDEF("hanim_vc2");
HAnimJoint955->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint955->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint955->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment956 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment956->setName("c2");
HAnimSegment956->setDEF("hanim_c2");
CTransform* Transform957 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform958 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
Shape959->setUSE("HAnimJointShape");
Transform958->addChild(*Shape959);

Transform957->addChildren(*Transform958);

HAnimSegment956->addChildren(*Transform957);

CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet961 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet961->setVertexCount(new int[1]{2});
CCoordinate* Coordinate962 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate962->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet961->setCoord(*Coordinate962);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA963 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA963->setUSE("HAnimSegmentLineColorRGBA");
LineSet961->setColor(*ColorRGBA963);

Shape960->setGeometry(LineSet961);

HAnimSegment956->addChildren(*Shape960);

HAnimJoint955->addChildren(*HAnimSegment956);

CHAnimJoint* HAnimJoint964 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint964->setName("vc1");
HAnimJoint964->setDEF("hanim_vc1");
HAnimJoint964->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint964->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint964->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment965 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment965->setName("c1");
HAnimSegment965->setDEF("hanim_c1");
CTransform* Transform966 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform967 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("HAnimJointShape");
Transform967->addChild(*Shape968);

Transform966->addChildren(*Transform967);

HAnimSegment965->addChildren(*Transform966);

CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet970 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet970->setVertexCount(new int[1]{2});
CCoordinate* Coordinate971 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate971->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet970->setCoord(*Coordinate971);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA972 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA972->setUSE("HAnimSegmentLineColorRGBA");
LineSet970->setColor(*ColorRGBA972);

Shape969->setGeometry(LineSet970);

HAnimSegment965->addChildren(*Shape969);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setName("glabella_pt");
HAnimSite973->setDEF("hanim_glabella_pt");
HAnimSite973->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("HAnimSite glabella_pt");
HAnimSite973->addChildren(*TouchSensor974);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(*Shape975);

HAnimSegment965->addChildren(*HAnimSite973);

CHAnimSite* HAnimSite976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite976->setName("l_ectocanthus_pt");
HAnimSite976->setDEF("hanim_l_ectocanthus_pt");
HAnimSite976->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor977 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor977->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite976->addChildren(*TouchSensor977);

CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
Shape978->setUSE("HAnimSiteShape");
HAnimSite976->addChildren(*Shape978);

HAnimSegment965->addChildren(*HAnimSite976);

CHAnimSite* HAnimSite979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite979->setName("l_infraorbitale_pt");
HAnimSite979->setDEF("hanim_l_infraorbitale_pt");
HAnimSite979->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor980 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor980->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite979->addChildren(*TouchSensor980);

CShape* Shape981 = (CShape *)(m_pScene.createNode("Shape"));
Shape981->setUSE("HAnimSiteShape");
HAnimSite979->addChildren(*Shape981);

HAnimSegment965->addChildren(*HAnimSite979);

CHAnimSite* HAnimSite982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite982->setName("l_tragion_pt");
HAnimSite982->setDEF("hanim_l_tragion_pt");
HAnimSite982->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor983 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor983->setDescription("HAnimSite l_tragion_pt");
HAnimSite982->addChildren(*TouchSensor983);

CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
Shape984->setUSE("HAnimSiteShape");
HAnimSite982->addChildren(*Shape984);

HAnimSegment965->addChildren(*HAnimSite982);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setName("nuchale_pt");
HAnimSite985->setDEF("hanim_nuchale_pt");
HAnimSite985->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor986 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor986->setDescription("HAnimSite nuchale_pt");
HAnimSite985->addChildren(*TouchSensor986);

CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
Shape987->setUSE("HAnimSiteShape");
HAnimSite985->addChildren(*Shape987);

HAnimSegment965->addChildren(*HAnimSite985);

CHAnimSite* HAnimSite988 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite988->setName("opisthocranion_pt");
HAnimSite988->setDEF("hanim_opisthocranion_pt");
HAnimSite988->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor989 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor989->setDescription("HAnimSite opisthocranion_pt");
HAnimSite988->addChildren(*TouchSensor989);

CShape* Shape990 = (CShape *)(m_pScene.createNode("Shape"));
Shape990->setUSE("HAnimSiteShape");
HAnimSite988->addChildren(*Shape990);

HAnimSegment965->addChildren(*HAnimSite988);

CHAnimSite* HAnimSite991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite991->setName("r_ectocanthus_pt");
HAnimSite991->setDEF("hanim_r_ectocanthus_pt");
HAnimSite991->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor992 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor992->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite991->addChildren(*TouchSensor992);

CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
Shape993->setUSE("HAnimSiteShape");
HAnimSite991->addChildren(*Shape993);

HAnimSegment965->addChildren(*HAnimSite991);

CHAnimSite* HAnimSite994 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite994->setName("r_infraorbitale_pt");
HAnimSite994->setDEF("hanim_r_infraorbitale_pt");
HAnimSite994->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor995 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor995->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite994->addChildren(*TouchSensor995);

CShape* Shape996 = (CShape *)(m_pScene.createNode("Shape"));
Shape996->setUSE("HAnimSiteShape");
HAnimSite994->addChildren(*Shape996);

HAnimSegment965->addChildren(*HAnimSite994);

CHAnimSite* HAnimSite997 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite997->setName("r_tragion_pt");
HAnimSite997->setDEF("hanim_r_tragion_pt");
HAnimSite997->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor998 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor998->setDescription("HAnimSite r_tragion_pt");
HAnimSite997->addChildren(*TouchSensor998);

CShape* Shape999 = (CShape *)(m_pScene.createNode("Shape"));
Shape999->setUSE("HAnimSiteShape");
HAnimSite997->addChildren(*Shape999);

HAnimSegment965->addChildren(*HAnimSite997);

CHAnimSite* HAnimSite1000 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1000->setName("sellion_pt");
HAnimSite1000->setDEF("hanim_sellion_pt");
HAnimSite1000->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor1001 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1001->setDescription("HAnimSite sellion_pt");
HAnimSite1000->addChildren(*TouchSensor1001);

CShape* Shape1002 = (CShape *)(m_pScene.createNode("Shape"));
Shape1002->setUSE("HAnimSiteShape");
HAnimSite1000->addChildren(*Shape1002);

HAnimSegment965->addChildren(*HAnimSite1000);

CHAnimSite* HAnimSite1003 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1003->setName("skull_vertex_pt");
HAnimSite1003->setDEF("hanim_skull_vertex_pt");
HAnimSite1003->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor1004 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1004->setDescription("HAnimSite skull_vertex_pt");
HAnimSite1003->addChildren(*TouchSensor1004);

CShape* Shape1005 = (CShape *)(m_pScene.createNode("Shape"));
Shape1005->setUSE("HAnimSiteShape");
HAnimSite1003->addChildren(*Shape1005);

HAnimSegment965->addChildren(*HAnimSite1003);

HAnimJoint964->addChildren(*HAnimSegment965);

CHAnimJoint* HAnimJoint1006 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1006->setName("skullbase");
HAnimJoint1006->setDEF("hanim_skullbase");
HAnimJoint1006->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint1006->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1007 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1007->setName("skull");
HAnimSegment1007->setDEF("hanim_skull");
CTransform* Transform1008 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1009 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1010 = (CShape *)(m_pScene.createNode("Shape"));
Shape1010->setUSE("HAnimJointShape");
Transform1009->addChild(*Shape1010);

Transform1008->addChildren(*Transform1009);

HAnimSegment1007->addChildren(*Transform1008);

CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1012 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1012->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1013 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1013->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1012->setCoord(*Coordinate1013);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1014 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1014->setUSE("HAnimSegmentLineColorRGBA");
LineSet1012->setColor(*ColorRGBA1014);

Shape1011->setGeometry(LineSet1012);

HAnimSegment1007->addChildren(*Shape1011);

CShape* Shape1015 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1016 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1016->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1017 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1017->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1016->setCoord(*Coordinate1017);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1018 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1018->setUSE("HAnimSegmentLineColorRGBA");
LineSet1016->setColor(*ColorRGBA1018);

Shape1015->setGeometry(LineSet1016);

HAnimSegment1007->addChildren(*Shape1015);

CShape* Shape1019 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1020 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1020->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1021 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1021->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1020->setCoord(*Coordinate1021);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1022 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1022->setUSE("HAnimSegmentLineColorRGBA");
LineSet1020->setColor(*ColorRGBA1022);

Shape1019->setGeometry(LineSet1020);

HAnimSegment1007->addChildren(*Shape1019);

CShape* Shape1023 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1024 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1024->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1025 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1025->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1024->setCoord(*Coordinate1025);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1026 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1026->setUSE("HAnimSegmentLineColorRGBA");
LineSet1024->setColor(*ColorRGBA1026);

Shape1023->setGeometry(LineSet1024);

HAnimSegment1007->addChildren(*Shape1023);

CShape* Shape1027 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1028 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1028->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1029 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1029->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1028->setCoord(*Coordinate1029);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1030 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1030->setUSE("HAnimSegmentLineColorRGBA");
LineSet1028->setColor(*ColorRGBA1030);

Shape1027->setGeometry(LineSet1028);

HAnimSegment1007->addChildren(*Shape1027);

CShape* Shape1031 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1032 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1032->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1033 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1033->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1032->setCoord(*Coordinate1033);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1034 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1034->setUSE("HAnimSegmentLineColorRGBA");
LineSet1032->setColor(*ColorRGBA1034);

Shape1031->setGeometry(LineSet1032);

HAnimSegment1007->addChildren(*Shape1031);

CShape* Shape1035 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1036 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1036->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1037 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1037->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1036->setCoord(*Coordinate1037);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA1038 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1038->setUSE("HAnimSegmentLineColorRGBA");
LineSet1036->setColor(*ColorRGBA1038);

Shape1035->setGeometry(LineSet1036);

HAnimSegment1007->addChildren(*Shape1035);

CHAnimSite* HAnimSite1039 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1039->setName("l_gonion_pt");
HAnimSite1039->setDEF("hanim_l_gonion_pt");
HAnimSite1039->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor1040 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1040->setDescription("HAnimSite l_gonion_pt");
HAnimSite1039->addChildren(*TouchSensor1040);

CShape* Shape1041 = (CShape *)(m_pScene.createNode("Shape"));
Shape1041->setUSE("HAnimSiteShape");
HAnimSite1039->addChildren(*Shape1041);

HAnimSegment1007->addChildren(*HAnimSite1039);

CHAnimSite* HAnimSite1042 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1042->setName("menton_pt");
HAnimSite1042->setDEF("hanim_menton_pt");
HAnimSite1042->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1043 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1043->setDescription("HAnimSite menton_pt");
HAnimSite1042->addChildren(*TouchSensor1043);

CShape* Shape1044 = (CShape *)(m_pScene.createNode("Shape"));
Shape1044->setUSE("HAnimSiteShape");
HAnimSite1042->addChildren(*Shape1044);

HAnimSegment1007->addChildren(*HAnimSite1042);

CHAnimSite* HAnimSite1045 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1045->setName("r_gonion_pt");
HAnimSite1045->setDEF("hanim_r_gonion_pt");
HAnimSite1045->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor1046 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1046->setDescription("HAnimSite r_gonion_pt");
HAnimSite1045->addChildren(*TouchSensor1046);

CShape* Shape1047 = (CShape *)(m_pScene.createNode("Shape"));
Shape1047->setUSE("HAnimSiteShape");
HAnimSite1045->addChildren(*Shape1047);

HAnimSegment1007->addChildren(*HAnimSite1045);

CHAnimSite* HAnimSite1048 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1048->setName("supramenton_pt");
HAnimSite1048->setDEF("hanim_supramenton_pt");
HAnimSite1048->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor1049 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1049->setDescription("HAnimSite supramenton_pt");
HAnimSite1048->addChildren(*TouchSensor1049);

CShape* Shape1050 = (CShape *)(m_pScene.createNode("Shape"));
Shape1050->setUSE("HAnimSiteShape");
HAnimSite1048->addChildren(*Shape1050);

HAnimSegment1007->addChildren(*HAnimSite1048);

HAnimJoint1006->addChildren(*HAnimSegment1007);

CHAnimJoint* HAnimJoint1051 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1051->setName("l_eyelid_joint");
HAnimJoint1051->setDEF("hanim_l_eyelid_joint");
HAnimJoint1051->setCenter(new float[3]{0,1,0});
HAnimJoint1051->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1051->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1051);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setName("r_eyelid_joint");
HAnimJoint1052->setDEF("hanim_r_eyelid_joint");
HAnimJoint1052->setCenter(new float[3]{0,1,0});
HAnimJoint1052->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1052->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1052);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setName("l_eyeball_joint");
HAnimJoint1053->setDEF("hanim_l_eyeball_joint");
HAnimJoint1053->setCenter(new float[3]{0,1,0});
HAnimJoint1053->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1053->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1053);

CHAnimJoint* HAnimJoint1054 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1054->setName("r_eyeball_joint");
HAnimJoint1054->setDEF("hanim_r_eyeball_joint");
HAnimJoint1054->setCenter(new float[3]{0,1,0});
HAnimJoint1054->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1054->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1054);

CHAnimJoint* HAnimJoint1055 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1055->setName("l_eyebrow_joint");
HAnimJoint1055->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1055->setCenter(new float[3]{0,1,0});
HAnimJoint1055->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1055->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1055);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setName("r_eyebrow_joint");
HAnimJoint1056->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1056->setCenter(new float[3]{0,1,0});
HAnimJoint1056->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1056->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1056);

CHAnimJoint* HAnimJoint1057 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1057->setName("temporomandibular");
HAnimJoint1057->setDEF("hanim_temporomandibular");
HAnimJoint1057->setCenter(new float[3]{0,1,0});
HAnimJoint1057->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1057->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1006->addChildren(*HAnimJoint1057);

CHAnimDisplacer* HAnimDisplacer1058 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer1058->setName("skull_tip_raiser_action");
HAnimDisplacer1058->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer1058->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer1058->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint1006->addDisplacers(*HAnimDisplacer1058);

HAnimJoint964->addChildren(*HAnimJoint1006);

HAnimJoint955->addChildren(*HAnimJoint964);

HAnimJoint943->addChildren(*HAnimJoint955);

HAnimJoint934->addChildren(*HAnimJoint943);

HAnimJoint925->addChildren(*HAnimJoint934);

HAnimJoint916->addChildren(*HAnimJoint925);

HAnimJoint907->addChildren(*HAnimJoint916);

HAnimJoint854->addChildren(*HAnimJoint907);

CHAnimJoint* HAnimJoint1059 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1059->setName("l_sternoclavicular");
HAnimJoint1059->setDEF("hanim_l_sternoclavicular");
HAnimJoint1059->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint1059->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1059->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1060 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1060->setName("l_clavicle");
HAnimSegment1060->setDEF("hanim_l_clavicle");
CTransform* Transform1061 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1062 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
Shape1063->setUSE("HAnimJointShape");
Transform1062->addChild(*Shape1063);

Transform1061->addChildren(*Transform1062);

HAnimSegment1060->addChildren(*Transform1061);

CShape* Shape1064 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1065 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1065->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1066 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1066->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1065->setCoord(*Coordinate1066);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1067 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1067->setUSE("HAnimSegmentLineColorRGBA");
LineSet1065->setColor(*ColorRGBA1067);

Shape1064->setGeometry(LineSet1065);

HAnimSegment1060->addChildren(*Shape1064);

HAnimJoint1059->addChildren(*HAnimSegment1060);

CHAnimJoint* HAnimJoint1068 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1068->setName("l_acromioclavicular");
HAnimJoint1068->setDEF("hanim_l_acromioclavicular");
HAnimJoint1068->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint1068->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1068->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1069 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1069->setName("l_scapula");
HAnimSegment1069->setDEF("hanim_l_scapula");
CTransform* Transform1070 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1071 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1072 = (CShape *)(m_pScene.createNode("Shape"));
Shape1072->setUSE("HAnimJointShape");
Transform1071->addChild(*Shape1072);

Transform1070->addChildren(*Transform1071);

HAnimSegment1069->addChildren(*Transform1070);

CShape* Shape1073 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1074 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1074->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1075 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1075->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1074->setCoord(*Coordinate1075);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA1076 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1076->setUSE("HAnimSegmentLineColorRGBA");
LineSet1074->setColor(*ColorRGBA1076);

Shape1073->setGeometry(LineSet1074);

HAnimSegment1069->addChildren(*Shape1073);

CHAnimSite* HAnimSite1077 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1077->setName("l_bideltoid_pt");
HAnimSite1077->setDEF("hanim_l_bideltoid_pt");
HAnimSite1077->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1078 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1078->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1077->addChildren(*TouchSensor1078);

CShape* Shape1079 = (CShape *)(m_pScene.createNode("Shape"));
Shape1079->setUSE("HAnimSiteShape");
HAnimSite1077->addChildren(*Shape1079);

HAnimSegment1069->addChildren(*HAnimSite1077);

CHAnimSite* HAnimSite1080 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1080->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1080->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1080->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor1081 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1081->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1080->addChildren(*TouchSensor1081);

CShape* Shape1082 = (CShape *)(m_pScene.createNode("Shape"));
Shape1082->setUSE("HAnimSiteShape");
HAnimSite1080->addChildren(*Shape1082);

HAnimSegment1069->addChildren(*HAnimSite1080);

HAnimJoint1068->addChildren(*HAnimSegment1069);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setName("l_shoulder");
HAnimJoint1083->setDEF("hanim_l_shoulder");
HAnimJoint1083->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint1083->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1083->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setName("l_upperarm");
HAnimSegment1084->setDEF("hanim_l_upperarm");
CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1086 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
Shape1087->setUSE("HAnimJointShape");
Transform1086->addChild(*Shape1087);

Transform1085->addChildren(*Transform1086);

HAnimSegment1084->addChildren(*Transform1085);

CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1089 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1089->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1090 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1090->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1089->setCoord(*Coordinate1090);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA1091 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1091->setUSE("HAnimSegmentLineColorRGBA");
LineSet1089->setColor(*ColorRGBA1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChildren(*Shape1088);

CHAnimSite* HAnimSite1092 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1092->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1092->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1092->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor1093 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1093->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1092->addChildren(*TouchSensor1093);

CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("HAnimSiteShape");
HAnimSite1092->addChildren(*Shape1094);

HAnimSegment1084->addChildren(*HAnimSite1092);

CHAnimSite* HAnimSite1095 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1095->setName("l_olecranon_pt");
HAnimSite1095->setDEF("hanim_l_olecranon_pt");
HAnimSite1095->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor1096 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1096->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1095->addChildren(*TouchSensor1096);

CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
Shape1097->setUSE("HAnimSiteShape");
HAnimSite1095->addChildren(*Shape1097);

HAnimSegment1084->addChildren(*HAnimSite1095);

CHAnimSite* HAnimSite1098 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1098->setName("l_radial_styloid_pt");
HAnimSite1098->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1098->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor1099 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1099->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1098->addChildren(*TouchSensor1099);

CShape* Shape1100 = (CShape *)(m_pScene.createNode("Shape"));
Shape1100->setUSE("HAnimSiteShape");
HAnimSite1098->addChildren(*Shape1100);

HAnimSegment1084->addChildren(*HAnimSite1098);

CHAnimSite* HAnimSite1101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1101->setName("l_radiale_pt");
HAnimSite1101->setDEF("hanim_l_radiale_pt");
HAnimSite1101->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor1102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1102->setDescription("HAnimSite l_radiale_pt");
HAnimSite1101->addChildren(*TouchSensor1102);

CShape* Shape1103 = (CShape *)(m_pScene.createNode("Shape"));
Shape1103->setUSE("HAnimSiteShape");
HAnimSite1101->addChildren(*Shape1103);

HAnimSegment1084->addChildren(*HAnimSite1101);

HAnimJoint1083->addChildren(*HAnimSegment1084);

CHAnimJoint* HAnimJoint1104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1104->setName("l_elbow");
HAnimJoint1104->setDEF("hanim_l_elbow");
HAnimJoint1104->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint1104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1105->setName("l_forearm");
HAnimSegment1105->setDEF("hanim_l_forearm");
CTransform* Transform1106 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1107 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1108 = (CShape *)(m_pScene.createNode("Shape"));
Shape1108->setUSE("HAnimJointShape");
Transform1107->addChild(*Shape1108);

Transform1106->addChildren(*Transform1107);

HAnimSegment1105->addChildren(*Transform1106);

CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1110 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1110->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1111->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1110->setCoord(*Coordinate1111);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA1112 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1112->setUSE("HAnimSegmentLineColorRGBA");
LineSet1110->setColor(*ColorRGBA1112);

Shape1109->setGeometry(LineSet1110);

HAnimSegment1105->addChildren(*Shape1109);

CHAnimSite* HAnimSite1113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1113->setName("l_ulnar_styloid_pt");
HAnimSite1113->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1113->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor1114 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1114->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1113->addChildren(*TouchSensor1114);

CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
Shape1115->setUSE("HAnimSiteShape");
HAnimSite1113->addChildren(*Shape1115);

HAnimSegment1105->addChildren(*HAnimSite1113);

HAnimJoint1104->addChildren(*HAnimSegment1105);

CHAnimJoint* HAnimJoint1116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1116->setName("l_radiocarpal");
HAnimJoint1116->setDEF("hanim_l_radiocarpal");
HAnimJoint1116->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint1116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1117->setName("l_carpal");
HAnimSegment1117->setDEF("hanim_l_carpal");
CTransform* Transform1118 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1118->setScale(new float[3]{0.2,0.2,0.2});
Transform1118->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1118->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform1119 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1119->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape1120 = (CShape *)(m_pScene.createNode("Shape"));
Shape1120->setUSE("HAnimJointShape");
Transform1119->addChild(*Shape1120);

Transform1118->addChildren(*Transform1119);

HAnimSegment1117->addChildren(*Transform1118);

CShape* Shape1121 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1122 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1122->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1123 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1123->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1122->setCoord(*Coordinate1123);

//from l_radiocarpal to l_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1124 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1124->setUSE("HAnimSegmentLineColorRGBA");
LineSet1122->setColor(*ColorRGBA1124);

Shape1121->setGeometry(LineSet1122);

HAnimSegment1117->addChildren(*Shape1121);

CShape* Shape1125 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1126 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1126->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1127->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1126->setCoord(*Coordinate1127);

//from l_radiocarpal to l_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1128 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1128->setUSE("HAnimSegmentLineColorRGBA");
LineSet1126->setColor(*ColorRGBA1128);

Shape1125->setGeometry(LineSet1126);

HAnimSegment1117->addChildren(*Shape1125);

CShape* Shape1129 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1130 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1130->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1131 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1131->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1130->setCoord(*Coordinate1131);

//from l_radiocarpal to l_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1132 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1132->setUSE("HAnimSegmentLineColorRGBA");
LineSet1130->setColor(*ColorRGBA1132);

Shape1129->setGeometry(LineSet1130);

HAnimSegment1117->addChildren(*Shape1129);

CShape* Shape1133 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1134 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1134->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1135->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1134->setCoord(*Coordinate1135);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1136 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1136->setUSE("HAnimSegmentLineColorRGBA");
LineSet1134->setColor(*ColorRGBA1136);

Shape1133->setGeometry(LineSet1134);

HAnimSegment1117->addChildren(*Shape1133);

HAnimJoint1116->addChildren(*HAnimSegment1117);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1137->setName("l_midcarpal_1");
HAnimJoint1137->setDEF("hanim_l_midcarpal_1");
HAnimJoint1137->setCenter(new float[3]{0,1,0});
HAnimJoint1137->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1137->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1138 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1138->setName("l_trapezium");
HAnimSegment1138->setDEF("hanim_l_trapezium");
CTransform* Transform1139 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1140 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1141 = (CShape *)(m_pScene.createNode("Shape"));
Shape1141->setUSE("HAnimJointShape");
Transform1140->addChild(*Shape1141);

Transform1139->addChildren(*Transform1140);

HAnimSegment1138->addChildren(*Transform1139);

CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1143 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1143->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1144 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1144->setPoint(new float[6]{0,1,0,0.1924,0.8472,-0.0534});
LineSet1143->setCoord(*Coordinate1144);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1145 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1145->setUSE("HAnimSegmentLineColorRGBA");
LineSet1143->setColor(*ColorRGBA1145);

Shape1142->setGeometry(LineSet1143);

HAnimSegment1138->addChildren(*Shape1142);

HAnimJoint1137->addChildren(*HAnimSegment1138);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setName("l_carpometacarpal_1");
HAnimJoint1146->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1146->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1146->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1146->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1147 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1147->setName("l_metacarpal_1");
HAnimSegment1147->setDEF("hanim_l_metacarpal_1");
CTransform* Transform1148 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1149 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1150 = (CShape *)(m_pScene.createNode("Shape"));
Shape1150->setUSE("HAnimJointShape");
Transform1149->addChild(*Shape1150);

Transform1148->addChildren(*Transform1149);

HAnimSegment1147->addChildren(*Transform1148);

CShape* Shape1151 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1152 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1152->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1153 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1153->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1152->setCoord(*Coordinate1153);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1154 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1154->setUSE("HAnimSegmentLineColorRGBA");
LineSet1152->setColor(*ColorRGBA1154);

Shape1151->setGeometry(LineSet1152);

HAnimSegment1147->addChildren(*Shape1151);

HAnimJoint1146->addChildren(*HAnimSegment1147);

CHAnimJoint* HAnimJoint1155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1155->setName("l_metacarpophalangeal_1");
HAnimJoint1155->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1155->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1155->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1155->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1156 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1156->setName("l_carpal_proximal_phalanx_1");
HAnimSegment1156->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform1157 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1158 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1159 = (CShape *)(m_pScene.createNode("Shape"));
Shape1159->setUSE("HAnimJointShape");
Transform1158->addChild(*Shape1159);

Transform1157->addChildren(*Transform1158);

HAnimSegment1156->addChildren(*Transform1157);

CShape* Shape1160 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1161 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1161->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1162 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1162->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1161->setCoord(*Coordinate1162);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1163 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1163->setUSE("HAnimSegmentLineColorRGBA");
LineSet1161->setColor(*ColorRGBA1163);

Shape1160->setGeometry(LineSet1161);

HAnimSegment1156->addChildren(*Shape1160);

CHAnimSite* HAnimSite1164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1164->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite1164->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite1164->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1165 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1165->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1164->addChildren(*TouchSensor1165);

CShape* Shape1166 = (CShape *)(m_pScene.createNode("Shape"));
Shape1166->setUSE("HAnimSiteShape");
HAnimSite1164->addChildren(*Shape1166);

HAnimSegment1156->addChildren(*HAnimSite1164);

HAnimJoint1155->addChildren(*HAnimSegment1156);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1167->setName("l_carpal_interphalangeal_1");
HAnimJoint1167->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1167->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1167->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1167->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1155->addChildren(*HAnimJoint1167);

HAnimJoint1146->addChildren(*HAnimJoint1155);

HAnimJoint1137->addChildren(*HAnimJoint1146);

HAnimJoint1116->addChildren(*HAnimJoint1137);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setName("l_midcarpal_2");
HAnimJoint1168->setDEF("hanim_l_midcarpal_2");
HAnimJoint1168->setCenter(new float[3]{0,1,0});
HAnimJoint1168->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1168->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1169 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1169->setName("l_trapezoid");
HAnimSegment1169->setDEF("hanim_l_trapezoid");
CTransform* Transform1170 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1171 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1172 = (CShape *)(m_pScene.createNode("Shape"));
Shape1172->setUSE("HAnimJointShape");
Transform1171->addChild(*Shape1172);

Transform1170->addChildren(*Transform1171);

HAnimSegment1169->addChildren(*Transform1170);

CShape* Shape1173 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1174 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1174->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1175->setPoint(new float[6]{0,1,0,0.1983,0.8024,-0.028});
LineSet1174->setCoord(*Coordinate1175);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1176 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1176->setUSE("HAnimSegmentLineColorRGBA");
LineSet1174->setColor(*ColorRGBA1176);

Shape1173->setGeometry(LineSet1174);

HAnimSegment1169->addChildren(*Shape1173);

CHAnimSite* HAnimSite1177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1177->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1177->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1177->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor1178 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1178->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1177->addChildren(*TouchSensor1178);

CShape* Shape1179 = (CShape *)(m_pScene.createNode("Shape"));
Shape1179->setUSE("HAnimSiteShape");
HAnimSite1177->addChildren(*Shape1179);

HAnimSegment1169->addChildren(*HAnimSite1177);

HAnimJoint1168->addChildren(*HAnimSegment1169);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setName("l_carpometacarpal_2");
HAnimJoint1180->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1180->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1180->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1181->setName("l_metacarpal_2");
HAnimSegment1181->setDEF("hanim_l_metacarpal_2");
CTransform* Transform1182 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1183 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1184 = (CShape *)(m_pScene.createNode("Shape"));
Shape1184->setUSE("HAnimJointShape");
Transform1183->addChild(*Shape1184);

Transform1182->addChildren(*Transform1183);

HAnimSegment1181->addChildren(*Transform1182);

CShape* Shape1185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1186->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1187 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1187->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1186->setCoord(*Coordinate1187);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1188 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1188->setUSE("HAnimSegmentLineColorRGBA");
LineSet1186->setColor(*ColorRGBA1188);

Shape1185->setGeometry(LineSet1186);

HAnimSegment1181->addChildren(*Shape1185);

HAnimJoint1180->addChildren(*HAnimSegment1181);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setName("l_metacarpophalangeal_2");
HAnimJoint1189->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1189->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1189->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1189->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1190->setName("l_carpal_proximal_phalanx_2");
HAnimSegment1190->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform1191 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1192 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
Shape1193->setUSE("HAnimJointShape");
Transform1192->addChild(*Shape1193);

Transform1191->addChildren(*Transform1192);

HAnimSegment1190->addChildren(*Transform1191);

CShape* Shape1194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1195->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1196->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1195->setCoord(*Coordinate1196);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1197 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1197->setUSE("HAnimSegmentLineColorRGBA");
LineSet1195->setColor(*ColorRGBA1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1190->addChildren(*Shape1194);

HAnimJoint1189->addChildren(*HAnimSegment1190);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1198->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1198->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1198->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1198->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1199 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1199->setName("l_carpal_middle_phalanx_2");
HAnimSegment1199->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform1200 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1201 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1202 = (CShape *)(m_pScene.createNode("Shape"));
Shape1202->setUSE("HAnimJointShape");
Transform1201->addChild(*Shape1202);

Transform1200->addChildren(*Transform1201);

HAnimSegment1199->addChildren(*Transform1200);

CShape* Shape1203 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1204 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1204->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1205->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1204->setCoord(*Coordinate1205);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1206 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1206->setUSE("HAnimSegmentLineColorRGBA");
LineSet1204->setColor(*ColorRGBA1206);

Shape1203->setGeometry(LineSet1204);

HAnimSegment1199->addChildren(*Shape1203);

CHAnimSite* HAnimSite1207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1207->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite1207->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite1207->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1208 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1208->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1207->addChildren(*TouchSensor1208);

CShape* Shape1209 = (CShape *)(m_pScene.createNode("Shape"));
Shape1209->setUSE("HAnimSiteShape");
HAnimSite1207->addChildren(*Shape1209);

HAnimSegment1199->addChildren(*HAnimSite1207);

CHAnimSite* HAnimSite1210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1210->setName("l_dactylion_pt");
HAnimSite1210->setDEF("hanim_l_dactylion_pt");
HAnimSite1210->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor1211 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1211->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1210->addChildren(*TouchSensor1211);

CShape* Shape1212 = (CShape *)(m_pScene.createNode("Shape"));
Shape1212->setUSE("HAnimSiteShape");
HAnimSite1210->addChildren(*Shape1212);

HAnimSegment1199->addChildren(*HAnimSite1210);

HAnimJoint1198->addChildren(*HAnimSegment1199);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1213->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1213->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1213->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1213->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1198->addChildren(*HAnimJoint1213);

HAnimJoint1189->addChildren(*HAnimJoint1198);

HAnimJoint1180->addChildren(*HAnimJoint1189);

HAnimJoint1168->addChildren(*HAnimJoint1180);

HAnimJoint1116->addChildren(*HAnimJoint1168);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setName("l_midcarpal_3");
HAnimJoint1214->setDEF("hanim_l_midcarpal_3");
HAnimJoint1214->setCenter(new float[3]{0,1,0});
HAnimJoint1214->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1214->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1215 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1215->setName("l_capitate");
HAnimSegment1215->setDEF("hanim_l_capitate");
CTransform* Transform1216 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1217 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1218 = (CShape *)(m_pScene.createNode("Shape"));
Shape1218->setUSE("HAnimJointShape");
Transform1217->addChild(*Shape1218);

Transform1216->addChildren(*Transform1217);

HAnimSegment1215->addChildren(*Transform1216);

CShape* Shape1219 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1220 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1220->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1221->setPoint(new float[6]{0,1,0,0.1987,0.8029,-0.053});
LineSet1220->setCoord(*Coordinate1221);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1222 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1222->setUSE("HAnimSegmentLineColorRGBA");
LineSet1220->setColor(*ColorRGBA1222);

Shape1219->setGeometry(LineSet1220);

HAnimSegment1215->addChildren(*Shape1219);

CHAnimSite* HAnimSite1223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1223->setName("l_metacarpal_phalanx_3_pt");
HAnimSite1223->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite1223->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1224 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1224->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1223->addChildren(*TouchSensor1224);

CShape* Shape1225 = (CShape *)(m_pScene.createNode("Shape"));
Shape1225->setUSE("HAnimSiteShape");
HAnimSite1223->addChildren(*Shape1225);

HAnimSegment1215->addChildren(*HAnimSite1223);

HAnimJoint1214->addChildren(*HAnimSegment1215);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setName("l_carpometacarpal_3");
HAnimJoint1226->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1226->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1226->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1226->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1227->setName("l_metacarpal_3");
HAnimSegment1227->setDEF("hanim_l_metacarpal_3");
CTransform* Transform1228 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1229 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1230 = (CShape *)(m_pScene.createNode("Shape"));
Shape1230->setUSE("HAnimJointShape");
Transform1229->addChild(*Shape1230);

Transform1228->addChildren(*Transform1229);

HAnimSegment1227->addChildren(*Transform1228);

CShape* Shape1231 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1232 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1232->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1233 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1233->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1232->setCoord(*Coordinate1233);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1234 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1234->setUSE("HAnimSegmentLineColorRGBA");
LineSet1232->setColor(*ColorRGBA1234);

Shape1231->setGeometry(LineSet1232);

HAnimSegment1227->addChildren(*Shape1231);

HAnimJoint1226->addChildren(*HAnimSegment1227);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setName("l_metacarpophalangeal_3");
HAnimJoint1235->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1235->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1235->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1235->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1236->setName("l_carpal_proximal_phalanx_3");
HAnimSegment1236->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform1237 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1238 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1239 = (CShape *)(m_pScene.createNode("Shape"));
Shape1239->setUSE("HAnimJointShape");
Transform1238->addChild(*Shape1239);

Transform1237->addChildren(*Transform1238);

HAnimSegment1236->addChildren(*Transform1237);

CShape* Shape1240 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1241 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1241->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1242 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1242->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1241->setCoord(*Coordinate1242);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1243 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1243->setUSE("HAnimSegmentLineColorRGBA");
LineSet1241->setColor(*ColorRGBA1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1236->addChildren(*Shape1240);

HAnimJoint1235->addChildren(*HAnimSegment1236);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1244->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1244->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1244->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1244->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1245->setName("l_carpal_middle_phalanx_3");
HAnimSegment1245->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform1246 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1247 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1248 = (CShape *)(m_pScene.createNode("Shape"));
Shape1248->setUSE("HAnimJointShape");
Transform1247->addChild(*Shape1248);

Transform1246->addChildren(*Transform1247);

HAnimSegment1245->addChildren(*Transform1246);

CShape* Shape1249 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1250 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1250->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1251 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1251->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1250->setCoord(*Coordinate1251);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1252 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1252->setUSE("HAnimSegmentLineColorRGBA");
LineSet1250->setColor(*ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1245->addChildren(*Shape1249);

CHAnimSite* HAnimSite1253 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1253->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite1253->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite1253->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1254 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1254->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1253->addChildren(*TouchSensor1254);

CShape* Shape1255 = (CShape *)(m_pScene.createNode("Shape"));
Shape1255->setUSE("HAnimSiteShape");
HAnimSite1253->addChildren(*Shape1255);

HAnimSegment1245->addChildren(*HAnimSite1253);

HAnimJoint1244->addChildren(*HAnimSegment1245);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1256->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1256->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1256->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1244->addChildren(*HAnimJoint1256);

HAnimJoint1235->addChildren(*HAnimJoint1244);

HAnimJoint1226->addChildren(*HAnimJoint1235);

HAnimJoint1214->addChildren(*HAnimJoint1226);

HAnimJoint1116->addChildren(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setName("l_midcarpal_4_5");
HAnimJoint1257->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint1257->setCenter(new float[3]{0,1,0});
HAnimJoint1257->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1257->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1258->setName("l_hamate");
HAnimSegment1258->setDEF("hanim_l_hamate");
CTransform* Transform1259 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1260 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1261 = (CShape *)(m_pScene.createNode("Shape"));
Shape1261->setUSE("HAnimJointShape");
Transform1260->addChild(*Shape1261);

Transform1259->addChildren(*Transform1260);

HAnimSegment1258->addChildren(*Transform1259);

CShape* Shape1262 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1263 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1263->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1264->setPoint(new float[6]{0,1,0,0.1956,0.8019,-0.0794});
LineSet1263->setCoord(*Coordinate1264);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1265 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1265->setUSE("HAnimSegmentLineColorRGBA");
LineSet1263->setColor(*ColorRGBA1265);

Shape1262->setGeometry(LineSet1263);

HAnimSegment1258->addChildren(*Shape1262);

CShape* Shape1266 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1267 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1267->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1268 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1268->setPoint(new float[6]{0,1,0,0.1925,0.8066,-0.1036});
LineSet1267->setCoord(*Coordinate1268);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1269 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1269->setUSE("HAnimSegmentLineColorRGBA");
LineSet1267->setColor(*ColorRGBA1269);

Shape1266->setGeometry(LineSet1267);

HAnimSegment1258->addChildren(*Shape1266);

CHAnimSite* HAnimSite1270 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1270->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1270->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1270->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor1271 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1271->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1270->addChildren(*TouchSensor1271);

CShape* Shape1272 = (CShape *)(m_pScene.createNode("Shape"));
Shape1272->setUSE("HAnimSiteShape");
HAnimSite1270->addChildren(*Shape1272);

HAnimSegment1258->addChildren(*HAnimSite1270);

HAnimJoint1257->addChildren(*HAnimSegment1258);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setName("l_carpometacarpal_4");
HAnimJoint1273->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1273->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1273->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1273->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1274->setName("l_metacarpal_4");
HAnimSegment1274->setDEF("hanim_l_metacarpal_4");
CTransform* Transform1275 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1276 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1277 = (CShape *)(m_pScene.createNode("Shape"));
Shape1277->setUSE("HAnimJointShape");
Transform1276->addChild(*Shape1277);

Transform1275->addChildren(*Transform1276);

HAnimSegment1274->addChildren(*Transform1275);

CShape* Shape1278 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1279 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1279->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1280 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1280->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1279->setCoord(*Coordinate1280);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1281 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1281->setUSE("HAnimSegmentLineColorRGBA");
LineSet1279->setColor(*ColorRGBA1281);

Shape1278->setGeometry(LineSet1279);

HAnimSegment1274->addChildren(*Shape1278);

HAnimJoint1273->addChildren(*HAnimSegment1274);

CHAnimJoint* HAnimJoint1282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1282->setName("l_metacarpophalangeal_4");
HAnimJoint1282->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1282->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1282->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1282->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1283->setName("l_carpal_proximal_phalanx_4");
HAnimSegment1283->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform1284 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1285 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1286 = (CShape *)(m_pScene.createNode("Shape"));
Shape1286->setUSE("HAnimJointShape");
Transform1285->addChild(*Shape1286);

Transform1284->addChildren(*Transform1285);

HAnimSegment1283->addChildren(*Transform1284);

CShape* Shape1287 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1288 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1288->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1289 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1289->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1288->setCoord(*Coordinate1289);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1290 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1290->setUSE("HAnimSegmentLineColorRGBA");
LineSet1288->setColor(*ColorRGBA1290);

Shape1287->setGeometry(LineSet1288);

HAnimSegment1283->addChildren(*Shape1287);

HAnimJoint1282->addChildren(*HAnimSegment1283);

CHAnimJoint* HAnimJoint1291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1291->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1291->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1291->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1291->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1291->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1292->setName("l_carpal_middle_phalanx_4");
HAnimSegment1292->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform1293 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1294 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1295 = (CShape *)(m_pScene.createNode("Shape"));
Shape1295->setUSE("HAnimJointShape");
Transform1294->addChild(*Shape1295);

Transform1293->addChildren(*Transform1294);

HAnimSegment1292->addChildren(*Transform1293);

CShape* Shape1296 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1297 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1297->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1298 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1298->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1297->setCoord(*Coordinate1298);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1299 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1299->setUSE("HAnimSegmentLineColorRGBA");
LineSet1297->setColor(*ColorRGBA1299);

Shape1296->setGeometry(LineSet1297);

HAnimSegment1292->addChildren(*Shape1296);

CHAnimSite* HAnimSite1300 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1300->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite1300->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite1300->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1301 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1301->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1300->addChildren(*TouchSensor1301);

CShape* Shape1302 = (CShape *)(m_pScene.createNode("Shape"));
Shape1302->setUSE("HAnimSiteShape");
HAnimSite1300->addChildren(*Shape1302);

HAnimSegment1292->addChildren(*HAnimSite1300);

HAnimJoint1291->addChildren(*HAnimSegment1292);

CHAnimJoint* HAnimJoint1303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1303->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1303->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1303->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1303->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1303->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1291->addChildren(*HAnimJoint1303);

HAnimJoint1282->addChildren(*HAnimJoint1291);

HAnimJoint1273->addChildren(*HAnimJoint1282);

HAnimJoint1257->addChildren(*HAnimJoint1273);

CHAnimJoint* HAnimJoint1304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1304->setName("l_carpometacarpal_5");
HAnimJoint1304->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1304->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1304->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1304->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1305->setName("l_metacarpal_5");
HAnimSegment1305->setDEF("hanim_l_metacarpal_5");
CTransform* Transform1306 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1307 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1308 = (CShape *)(m_pScene.createNode("Shape"));
Shape1308->setUSE("HAnimJointShape");
Transform1307->addChild(*Shape1308);

Transform1306->addChildren(*Transform1307);

HAnimSegment1305->addChildren(*Transform1306);

CShape* Shape1309 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1310 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1310->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1311 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1311->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1310->setCoord(*Coordinate1311);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1312 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1312->setUSE("HAnimSegmentLineColorRGBA");
LineSet1310->setColor(*ColorRGBA1312);

Shape1309->setGeometry(LineSet1310);

HAnimSegment1305->addChildren(*Shape1309);

HAnimJoint1304->addChildren(*HAnimSegment1305);

CHAnimJoint* HAnimJoint1313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1313->setName("l_metacarpophalangeal_5");
HAnimJoint1313->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1313->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1313->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1313->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1314->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1314->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform1315 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1316 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1317 = (CShape *)(m_pScene.createNode("Shape"));
Shape1317->setUSE("HAnimJointShape");
Transform1316->addChild(*Shape1317);

Transform1315->addChildren(*Transform1316);

HAnimSegment1314->addChildren(*Transform1315);

CShape* Shape1318 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1319 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1319->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1320 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1320->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1319->setCoord(*Coordinate1320);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1321 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1321->setUSE("HAnimSegmentLineColorRGBA");
LineSet1319->setColor(*ColorRGBA1321);

Shape1318->setGeometry(LineSet1319);

HAnimSegment1314->addChildren(*Shape1318);

HAnimJoint1313->addChildren(*HAnimSegment1314);

CHAnimJoint* HAnimJoint1322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1322->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1322->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1322->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1322->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1322->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1323->setName("l_carpal_middle_phalanx_5");
HAnimSegment1323->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform1324 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1325 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1326 = (CShape *)(m_pScene.createNode("Shape"));
Shape1326->setUSE("HAnimJointShape");
Transform1325->addChild(*Shape1326);

Transform1324->addChildren(*Transform1325);

HAnimSegment1323->addChildren(*Transform1324);

CShape* Shape1327 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1328 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1328->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1329 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1329->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1328->setCoord(*Coordinate1329);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1330 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1330->setUSE("HAnimSegmentLineColorRGBA");
LineSet1328->setColor(*ColorRGBA1330);

Shape1327->setGeometry(LineSet1328);

HAnimSegment1323->addChildren(*Shape1327);

CHAnimSite* HAnimSite1331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1331->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite1331->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite1331->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1332 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1332->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1331->addChildren(*TouchSensor1332);

CShape* Shape1333 = (CShape *)(m_pScene.createNode("Shape"));
Shape1333->setUSE("HAnimSiteShape");
HAnimSite1331->addChildren(*Shape1333);

HAnimSegment1323->addChildren(*HAnimSite1331);

HAnimJoint1322->addChildren(*HAnimSegment1323);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1334->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1334->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1334->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1334->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1322->addChildren(*HAnimJoint1334);

HAnimJoint1313->addChildren(*HAnimJoint1322);

HAnimJoint1304->addChildren(*HAnimJoint1313);

HAnimJoint1257->addChildren(*HAnimJoint1304);

HAnimJoint1116->addChildren(*HAnimJoint1257);

HAnimJoint1104->addChildren(*HAnimJoint1116);

HAnimJoint1083->addChildren(*HAnimJoint1104);

HAnimJoint1068->addChildren(*HAnimJoint1083);

HAnimJoint1059->addChildren(*HAnimJoint1068);

HAnimJoint854->addChildren(*HAnimJoint1059);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1335->setName("r_sternoclavicular");
HAnimJoint1335->setDEF("hanim_r_sternoclavicular");
HAnimJoint1335->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint1335->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1335->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1336->setName("r_clavicle");
HAnimSegment1336->setDEF("hanim_r_clavicle");
CTransform* Transform1337 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1338 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1339 = (CShape *)(m_pScene.createNode("Shape"));
Shape1339->setUSE("HAnimJointShape");
Transform1338->addChild(*Shape1339);

Transform1337->addChildren(*Transform1338);

HAnimSegment1336->addChildren(*Transform1337);

CShape* Shape1340 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1341 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1341->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1342 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1342->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1341->setCoord(*Coordinate1342);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1343 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1343->setUSE("HAnimSegmentLineColorRGBA");
LineSet1341->setColor(*ColorRGBA1343);

Shape1340->setGeometry(LineSet1341);

HAnimSegment1336->addChildren(*Shape1340);

HAnimJoint1335->addChildren(*HAnimSegment1336);

CHAnimJoint* HAnimJoint1344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1344->setName("r_acromioclavicular");
HAnimJoint1344->setDEF("hanim_r_acromioclavicular");
HAnimJoint1344->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint1344->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1344->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1345 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1345->setName("r_scapula");
HAnimSegment1345->setDEF("hanim_r_scapula");
CTransform* Transform1346 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1347 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1348 = (CShape *)(m_pScene.createNode("Shape"));
Shape1348->setUSE("HAnimJointShape");
Transform1347->addChild(*Shape1348);

Transform1346->addChildren(*Transform1347);

HAnimSegment1345->addChildren(*Transform1346);

CShape* Shape1349 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1350 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1350->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1351 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1351->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1350->setCoord(*Coordinate1351);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA1352 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1352->setUSE("HAnimSegmentLineColorRGBA");
LineSet1350->setColor(*ColorRGBA1352);

Shape1349->setGeometry(LineSet1350);

HAnimSegment1345->addChildren(*Shape1349);

CHAnimSite* HAnimSite1353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1353->setName("r_bideltoid_pt");
HAnimSite1353->setDEF("hanim_r_bideltoid_pt");
HAnimSite1353->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1354 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1354->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1353->addChildren(*TouchSensor1354);

CShape* Shape1355 = (CShape *)(m_pScene.createNode("Shape"));
Shape1355->setUSE("HAnimSiteShape");
HAnimSite1353->addChildren(*Shape1355);

HAnimSegment1345->addChildren(*HAnimSite1353);

CHAnimSite* HAnimSite1356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1356->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1356->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1356->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor1357 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1357->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1356->addChildren(*TouchSensor1357);

CShape* Shape1358 = (CShape *)(m_pScene.createNode("Shape"));
Shape1358->setUSE("HAnimSiteShape");
HAnimSite1356->addChildren(*Shape1358);

HAnimSegment1345->addChildren(*HAnimSite1356);

HAnimJoint1344->addChildren(*HAnimSegment1345);

CHAnimJoint* HAnimJoint1359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1359->setName("r_shoulder");
HAnimJoint1359->setDEF("hanim_r_shoulder");
HAnimJoint1359->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint1359->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1359->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1360 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1360->setName("r_upperarm");
HAnimSegment1360->setDEF("hanim_r_upperarm");
CTransform* Transform1361 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1362 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1363 = (CShape *)(m_pScene.createNode("Shape"));
Shape1363->setUSE("HAnimJointShape");
Transform1362->addChild(*Shape1363);

Transform1361->addChildren(*Transform1362);

HAnimSegment1360->addChildren(*Transform1361);

CShape* Shape1364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1366 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1366->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1365->setCoord(*Coordinate1366);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA1367 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1367->setUSE("HAnimSegmentLineColorRGBA");
LineSet1365->setColor(*ColorRGBA1367);

Shape1364->setGeometry(LineSet1365);

HAnimSegment1360->addChildren(*Shape1364);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1368->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1368->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor1369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1369->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1368->addChildren(*TouchSensor1369);

CShape* Shape1370 = (CShape *)(m_pScene.createNode("Shape"));
Shape1370->setUSE("HAnimSiteShape");
HAnimSite1368->addChildren(*Shape1370);

HAnimSegment1360->addChildren(*HAnimSite1368);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setName("r_olecranon_pt");
HAnimSite1371->setDEF("hanim_r_olecranon_pt");
HAnimSite1371->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor1372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1372->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1371->addChildren(*TouchSensor1372);

CShape* Shape1373 = (CShape *)(m_pScene.createNode("Shape"));
Shape1373->setUSE("HAnimSiteShape");
HAnimSite1371->addChildren(*Shape1373);

HAnimSegment1360->addChildren(*HAnimSite1371);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setName("r_radial_styloid_pt");
HAnimSite1374->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1374->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor1375 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1375->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1374->addChildren(*TouchSensor1375);

CShape* Shape1376 = (CShape *)(m_pScene.createNode("Shape"));
Shape1376->setUSE("HAnimSiteShape");
HAnimSite1374->addChildren(*Shape1376);

HAnimSegment1360->addChildren(*HAnimSite1374);

CHAnimSite* HAnimSite1377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1377->setName("r_radiale_pt");
HAnimSite1377->setDEF("hanim_r_radiale_pt");
HAnimSite1377->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor1378 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1378->setDescription("HAnimSite r_radiale_pt");
HAnimSite1377->addChildren(*TouchSensor1378);

CShape* Shape1379 = (CShape *)(m_pScene.createNode("Shape"));
Shape1379->setUSE("HAnimSiteShape");
HAnimSite1377->addChildren(*Shape1379);

HAnimSegment1360->addChildren(*HAnimSite1377);

HAnimJoint1359->addChildren(*HAnimSegment1360);

CHAnimJoint* HAnimJoint1380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1380->setName("r_elbow");
HAnimJoint1380->setDEF("hanim_r_elbow");
HAnimJoint1380->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint1380->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1380->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1381 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1381->setName("r_forearm");
HAnimSegment1381->setDEF("hanim_r_forearm");
CTransform* Transform1382 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1383 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1384 = (CShape *)(m_pScene.createNode("Shape"));
Shape1384->setUSE("HAnimJointShape");
Transform1383->addChild(*Shape1384);

Transform1382->addChildren(*Transform1383);

HAnimSegment1381->addChildren(*Transform1382);

CShape* Shape1385 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1386 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1386->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1387 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1387->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1386->setCoord(*Coordinate1387);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA1388 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1388->setUSE("HAnimSegmentLineColorRGBA");
LineSet1386->setColor(*ColorRGBA1388);

Shape1385->setGeometry(LineSet1386);

HAnimSegment1381->addChildren(*Shape1385);

CHAnimSite* HAnimSite1389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1389->setName("r_ulnar_styloid_pt");
HAnimSite1389->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1389->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor1390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1390->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1389->addChildren(*TouchSensor1390);

CShape* Shape1391 = (CShape *)(m_pScene.createNode("Shape"));
Shape1391->setUSE("HAnimSiteShape");
HAnimSite1389->addChildren(*Shape1391);

HAnimSegment1381->addChildren(*HAnimSite1389);

HAnimJoint1380->addChildren(*HAnimSegment1381);

CHAnimJoint* HAnimJoint1392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1392->setName("r_radiocarpal");
HAnimJoint1392->setDEF("hanim_r_radiocarpal");
HAnimJoint1392->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint1392->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1392->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1393 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1393->setName("r_carpal");
HAnimSegment1393->setDEF("hanim_r_carpal");
CTransform* Transform1394 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1394->setScale(new float[3]{0.2,0.2,0.2});
Transform1394->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1394->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform1395 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1395->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape1396 = (CShape *)(m_pScene.createNode("Shape"));
Shape1396->setUSE("HAnimJointShape");
Transform1395->addChild(*Shape1396);

Transform1394->addChildren(*Transform1395);

HAnimSegment1393->addChildren(*Transform1394);

CShape* Shape1397 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1398 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1398->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1399->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1398->setCoord(*Coordinate1399);

//from r_radiocarpal to r_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1400 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1400->setUSE("HAnimSegmentLineColorRGBA");
LineSet1398->setColor(*ColorRGBA1400);

Shape1397->setGeometry(LineSet1398);

HAnimSegment1393->addChildren(*Shape1397);

CShape* Shape1401 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1402 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1402->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1403 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1403->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1402->setCoord(*Coordinate1403);

//from r_radiocarpal to r_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1404 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1404->setUSE("HAnimSegmentLineColorRGBA");
LineSet1402->setColor(*ColorRGBA1404);

Shape1401->setGeometry(LineSet1402);

HAnimSegment1393->addChildren(*Shape1401);

CShape* Shape1405 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1406 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1406->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1407 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1407->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1406->setCoord(*Coordinate1407);

//from r_radiocarpal to r_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1408 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1408->setUSE("HAnimSegmentLineColorRGBA");
LineSet1406->setColor(*ColorRGBA1408);

Shape1405->setGeometry(LineSet1406);

HAnimSegment1393->addChildren(*Shape1405);

CShape* Shape1409 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1410 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1410->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1411 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1411->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1410->setCoord(*Coordinate1411);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1412 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1412->setUSE("HAnimSegmentLineColorRGBA");
LineSet1410->setColor(*ColorRGBA1412);

Shape1409->setGeometry(LineSet1410);

HAnimSegment1393->addChildren(*Shape1409);

HAnimJoint1392->addChildren(*HAnimSegment1393);

CHAnimJoint* HAnimJoint1413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1413->setName("r_midcarpal_1");
HAnimJoint1413->setDEF("hanim_r_midcarpal_1");
HAnimJoint1413->setCenter(new float[3]{0,1,0});
HAnimJoint1413->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1413->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1414->setName("r_trapezium");
HAnimSegment1414->setDEF("hanim_r_trapezium");
CTransform* Transform1415 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1416 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1417 = (CShape *)(m_pScene.createNode("Shape"));
Shape1417->setUSE("HAnimJointShape");
Transform1416->addChild(*Shape1417);

Transform1415->addChildren(*Transform1416);

HAnimSegment1414->addChildren(*Transform1415);

CShape* Shape1418 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1419 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1419->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1420 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1420->setPoint(new float[6]{0,1,0,-0.1899,0.8502,-0.0473});
LineSet1419->setCoord(*Coordinate1420);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1421 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1421->setUSE("HAnimSegmentLineColorRGBA");
LineSet1419->setColor(*ColorRGBA1421);

Shape1418->setGeometry(LineSet1419);

HAnimSegment1414->addChildren(*Shape1418);

HAnimJoint1413->addChildren(*HAnimSegment1414);

CHAnimJoint* HAnimJoint1422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1422->setName("r_carpometacarpal_1");
HAnimJoint1422->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1422->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1422->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1422->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1423 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1423->setName("r_metacarpal_1");
HAnimSegment1423->setDEF("hanim_r_metacarpal_1");
CTransform* Transform1424 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1425 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
Shape1426->setUSE("HAnimJointShape");
Transform1425->addChild(*Shape1426);

Transform1424->addChildren(*Transform1425);

HAnimSegment1423->addChildren(*Transform1424);

CShape* Shape1427 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1428 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1428->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1429 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1429->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1428->setCoord(*Coordinate1429);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1430 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1430->setUSE("HAnimSegmentLineColorRGBA");
LineSet1428->setColor(*ColorRGBA1430);

Shape1427->setGeometry(LineSet1428);

HAnimSegment1423->addChildren(*Shape1427);

HAnimJoint1422->addChildren(*HAnimSegment1423);

CHAnimJoint* HAnimJoint1431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1431->setName("r_metacarpophalangeal_1");
HAnimJoint1431->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1431->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1431->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1431->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1432->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1432->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform1433 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1434 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1435 = (CShape *)(m_pScene.createNode("Shape"));
Shape1435->setUSE("HAnimJointShape");
Transform1434->addChild(*Shape1435);

Transform1433->addChildren(*Transform1434);

HAnimSegment1432->addChildren(*Transform1433);

CShape* Shape1436 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1437 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1437->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1438 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1438->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1437->setCoord(*Coordinate1438);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1439 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1439->setUSE("HAnimSegmentLineColorRGBA");
LineSet1437->setColor(*ColorRGBA1439);

Shape1436->setGeometry(LineSet1437);

HAnimSegment1432->addChildren(*Shape1436);

CHAnimSite* HAnimSite1440 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1440->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1440->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite1440->setTranslation(new float[3]{-0.35,0.4,0});
CTouchSensor* TouchSensor1441 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1441->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1440->addChildren(*TouchSensor1441);

CShape* Shape1442 = (CShape *)(m_pScene.createNode("Shape"));
Shape1442->setUSE("HAnimSiteShape");
HAnimSite1440->addChildren(*Shape1442);

HAnimSegment1432->addChildren(*HAnimSite1440);

HAnimJoint1431->addChildren(*HAnimSegment1432);

CHAnimJoint* HAnimJoint1443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1443->setName("r_carpal_interphalangeal_1");
HAnimJoint1443->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1443->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1443->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1443->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1431->addChildren(*HAnimJoint1443);

HAnimJoint1422->addChildren(*HAnimJoint1431);

HAnimJoint1413->addChildren(*HAnimJoint1422);

HAnimJoint1392->addChildren(*HAnimJoint1413);

CHAnimJoint* HAnimJoint1444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1444->setName("r_midcarpal_2");
HAnimJoint1444->setDEF("hanim_r_midcarpal_2");
HAnimJoint1444->setCenter(new float[3]{0,1,0});
HAnimJoint1444->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1444->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1445 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1445->setName("r_trapezoid");
HAnimSegment1445->setDEF("hanim_r_trapezoid");
CTransform* Transform1446 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1447 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1448 = (CShape *)(m_pScene.createNode("Shape"));
Shape1448->setUSE("HAnimJointShape");
Transform1447->addChild(*Shape1448);

Transform1446->addChildren(*Transform1447);

HAnimSegment1445->addChildren(*Transform1446);

CShape* Shape1449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1450->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1451->setPoint(new float[6]{0,1,0,-0.1961,0.8055,-0.0218});
LineSet1450->setCoord(*Coordinate1451);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1452 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1452->setUSE("HAnimSegmentLineColorRGBA");
LineSet1450->setColor(*ColorRGBA1452);

Shape1449->setGeometry(LineSet1450);

HAnimSegment1445->addChildren(*Shape1449);

CHAnimSite* HAnimSite1453 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1453->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1453->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1453->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1454 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1454->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1453->addChildren(*TouchSensor1454);

CShape* Shape1455 = (CShape *)(m_pScene.createNode("Shape"));
Shape1455->setUSE("HAnimSiteShape");
HAnimSite1453->addChildren(*Shape1455);

HAnimSegment1445->addChildren(*HAnimSite1453);

HAnimJoint1444->addChildren(*HAnimSegment1445);

CHAnimJoint* HAnimJoint1456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1456->setName("r_carpometacarpal_2");
HAnimJoint1456->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1456->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1456->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1456->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1457 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1457->setName("r_metacarpal_2");
HAnimSegment1457->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1458 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1459 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1460 = (CShape *)(m_pScene.createNode("Shape"));
Shape1460->setUSE("HAnimJointShape");
Transform1459->addChild(*Shape1460);

Transform1458->addChildren(*Transform1459);

HAnimSegment1457->addChildren(*Transform1458);

CShape* Shape1461 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1462 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1462->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1463 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1463->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1462->setCoord(*Coordinate1463);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1464 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1464->setUSE("HAnimSegmentLineColorRGBA");
LineSet1462->setColor(*ColorRGBA1464);

Shape1461->setGeometry(LineSet1462);

HAnimSegment1457->addChildren(*Shape1461);

HAnimJoint1456->addChildren(*HAnimSegment1457);

CHAnimJoint* HAnimJoint1465 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1465->setName("r_metacarpophalangeal_2");
HAnimJoint1465->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1465->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1465->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1465->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1466->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1466->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1467 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1468 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1469 = (CShape *)(m_pScene.createNode("Shape"));
Shape1469->setUSE("HAnimJointShape");
Transform1468->addChild(*Shape1469);

Transform1467->addChildren(*Transform1468);

HAnimSegment1466->addChildren(*Transform1467);

CShape* Shape1470 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1471 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1471->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1472 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1472->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1471->setCoord(*Coordinate1472);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1473 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1473->setUSE("HAnimSegmentLineColorRGBA");
LineSet1471->setColor(*ColorRGBA1473);

Shape1470->setGeometry(LineSet1471);

HAnimSegment1466->addChildren(*Shape1470);

HAnimJoint1465->addChildren(*HAnimSegment1466);

CHAnimJoint* HAnimJoint1474 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1474->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1474->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1474->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1474->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1474->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1475 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1475->setName("r_carpal_middle_phalanx_2");
HAnimSegment1475->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1476 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1477 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1478 = (CShape *)(m_pScene.createNode("Shape"));
Shape1478->setUSE("HAnimJointShape");
Transform1477->addChild(*Shape1478);

Transform1476->addChildren(*Transform1477);

HAnimSegment1475->addChildren(*Transform1476);

CShape* Shape1479 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1480 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1480->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1481 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1481->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1480->setCoord(*Coordinate1481);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1482 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1482->setUSE("HAnimSegmentLineColorRGBA");
LineSet1480->setColor(*ColorRGBA1482);

Shape1479->setGeometry(LineSet1480);

HAnimSegment1475->addChildren(*Shape1479);

CHAnimSite* HAnimSite1483 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1483->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1483->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1483->setTranslation(new float[3]{-0.24,0.87,0});
CTouchSensor* TouchSensor1484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1484->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1483->addChildren(*TouchSensor1484);

CShape* Shape1485 = (CShape *)(m_pScene.createNode("Shape"));
Shape1485->setUSE("HAnimSiteShape");
HAnimSite1483->addChildren(*Shape1485);

HAnimSegment1475->addChildren(*HAnimSite1483);

CHAnimSite* HAnimSite1486 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1486->setName("r_dactylion_pt");
HAnimSite1486->setDEF("hanim_r_dactylion_pt");
HAnimSite1486->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1487 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1487->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1486->addChildren(*TouchSensor1487);

CShape* Shape1488 = (CShape *)(m_pScene.createNode("Shape"));
Shape1488->setUSE("HAnimSiteShape");
HAnimSite1486->addChildren(*Shape1488);

HAnimSegment1475->addChildren(*HAnimSite1486);

HAnimJoint1474->addChildren(*HAnimSegment1475);

CHAnimJoint* HAnimJoint1489 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1489->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1489->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1489->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1489->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1489->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1474->addChildren(*HAnimJoint1489);

HAnimJoint1465->addChildren(*HAnimJoint1474);

HAnimJoint1456->addChildren(*HAnimJoint1465);

HAnimJoint1444->addChildren(*HAnimJoint1456);

HAnimJoint1392->addChildren(*HAnimJoint1444);

CHAnimJoint* HAnimJoint1490 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1490->setName("r_midcarpal_3");
HAnimJoint1490->setDEF("hanim_r_midcarpal_3");
HAnimJoint1490->setCenter(new float[3]{0,1,0});
HAnimJoint1490->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1490->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1491->setName("r_capitate");
HAnimSegment1491->setDEF("hanim_r_capitate");
CTransform* Transform1492 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1493 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1494 = (CShape *)(m_pScene.createNode("Shape"));
Shape1494->setUSE("HAnimJointShape");
Transform1493->addChild(*Shape1494);

Transform1492->addChildren(*Transform1493);

HAnimSegment1491->addChildren(*Transform1492);

CShape* Shape1495 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1496 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1496->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1497 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1497->setPoint(new float[6]{0,1,0,-0.1972,0.806,-0.0468});
LineSet1496->setCoord(*Coordinate1497);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1498 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1498->setUSE("HAnimSegmentLineColorRGBA");
LineSet1496->setColor(*ColorRGBA1498);

Shape1495->setGeometry(LineSet1496);

HAnimSegment1491->addChildren(*Shape1495);

CHAnimSite* HAnimSite1499 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1499->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1499->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite1499->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1500 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1500->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1499->addChildren(*TouchSensor1500);

CShape* Shape1501 = (CShape *)(m_pScene.createNode("Shape"));
Shape1501->setUSE("HAnimSiteShape");
HAnimSite1499->addChildren(*Shape1501);

HAnimSegment1491->addChildren(*HAnimSite1499);

HAnimJoint1490->addChildren(*HAnimSegment1491);

CHAnimJoint* HAnimJoint1502 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1502->setName("r_carpometacarpal_3");
HAnimJoint1502->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1502->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1502->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1502->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1503->setName("r_metacarpal_3");
HAnimSegment1503->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1504 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1505 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1506 = (CShape *)(m_pScene.createNode("Shape"));
Shape1506->setUSE("HAnimJointShape");
Transform1505->addChild(*Shape1506);

Transform1504->addChildren(*Transform1505);

HAnimSegment1503->addChildren(*Transform1504);

CShape* Shape1507 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1508 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1508->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1509 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1509->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1508->setCoord(*Coordinate1509);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1510 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1510->setUSE("HAnimSegmentLineColorRGBA");
LineSet1508->setColor(*ColorRGBA1510);

Shape1507->setGeometry(LineSet1508);

HAnimSegment1503->addChildren(*Shape1507);

HAnimJoint1502->addChildren(*HAnimSegment1503);

CHAnimJoint* HAnimJoint1511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1511->setName("r_metacarpophalangeal_3");
HAnimJoint1511->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1511->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1511->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1511->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1512->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1512->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1513 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1514 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1515 = (CShape *)(m_pScene.createNode("Shape"));
Shape1515->setUSE("HAnimJointShape");
Transform1514->addChild(*Shape1515);

Transform1513->addChildren(*Transform1514);

HAnimSegment1512->addChildren(*Transform1513);

CShape* Shape1516 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1517 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1517->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1518 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1518->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1517->setCoord(*Coordinate1518);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1519 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1519->setUSE("HAnimSegmentLineColorRGBA");
LineSet1517->setColor(*ColorRGBA1519);

Shape1516->setGeometry(LineSet1517);

HAnimSegment1512->addChildren(*Shape1516);

HAnimJoint1511->addChildren(*HAnimSegment1512);

CHAnimJoint* HAnimJoint1520 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1520->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1520->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1520->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1520->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1520->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1521 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1521->setName("r_carpal_middle_phalanx_3");
HAnimSegment1521->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1522 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1523 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1524 = (CShape *)(m_pScene.createNode("Shape"));
Shape1524->setUSE("HAnimJointShape");
Transform1523->addChild(*Shape1524);

Transform1522->addChildren(*Transform1523);

HAnimSegment1521->addChildren(*Transform1522);

CShape* Shape1525 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1526 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1526->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1527 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1527->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1526->setCoord(*Coordinate1527);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1528 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1528->setUSE("HAnimSegmentLineColorRGBA");
LineSet1526->setColor(*ColorRGBA1528);

Shape1525->setGeometry(LineSet1526);

HAnimSegment1521->addChildren(*Shape1525);

CHAnimSite* HAnimSite1529 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1529->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1529->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1529->setTranslation(new float[3]{-0.08,0.96,0});
CTouchSensor* TouchSensor1530 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1530->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1529->addChildren(*TouchSensor1530);

CShape* Shape1531 = (CShape *)(m_pScene.createNode("Shape"));
Shape1531->setUSE("HAnimSiteShape");
HAnimSite1529->addChildren(*Shape1531);

HAnimSegment1521->addChildren(*HAnimSite1529);

HAnimJoint1520->addChildren(*HAnimSegment1521);

CHAnimJoint* HAnimJoint1532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1532->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1532->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1532->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1532->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1532->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1520->addChildren(*HAnimJoint1532);

HAnimJoint1511->addChildren(*HAnimJoint1520);

HAnimJoint1502->addChildren(*HAnimJoint1511);

HAnimJoint1490->addChildren(*HAnimJoint1502);

HAnimJoint1392->addChildren(*HAnimJoint1490);

CHAnimJoint* HAnimJoint1533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1533->setName("r_midcarpal_4_5");
HAnimJoint1533->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1533->setCenter(new float[3]{0,1,0});
HAnimJoint1533->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1533->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1534->setName("r_hamate");
HAnimSegment1534->setDEF("hanim_r_hamate");
CTransform* Transform1535 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1536 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1537 = (CShape *)(m_pScene.createNode("Shape"));
Shape1537->setUSE("HAnimJointShape");
Transform1536->addChild(*Shape1537);

Transform1535->addChildren(*Transform1536);

HAnimSegment1534->addChildren(*Transform1535);

CShape* Shape1538 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1539 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1539->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1540 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1540->setPoint(new float[6]{0,1,0,-0.1951,0.8049,-0.0732});
LineSet1539->setCoord(*Coordinate1540);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1541 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1541->setUSE("HAnimSegmentLineColorRGBA");
LineSet1539->setColor(*ColorRGBA1541);

Shape1538->setGeometry(LineSet1539);

HAnimSegment1534->addChildren(*Shape1538);

CShape* Shape1542 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1543 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1543->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1544 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1544->setPoint(new float[6]{0,1,0,-0.1926,0.8096,-0.0975});
LineSet1543->setCoord(*Coordinate1544);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1545 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1545->setUSE("HAnimSegmentLineColorRGBA");
LineSet1543->setColor(*ColorRGBA1545);

Shape1542->setGeometry(LineSet1543);

HAnimSegment1534->addChildren(*Shape1542);

CHAnimSite* HAnimSite1546 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1546->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1546->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1546->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1547 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1547->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1546->addChildren(*TouchSensor1547);

CShape* Shape1548 = (CShape *)(m_pScene.createNode("Shape"));
Shape1548->setUSE("HAnimSiteShape");
HAnimSite1546->addChildren(*Shape1548);

HAnimSegment1534->addChildren(*HAnimSite1546);

HAnimJoint1533->addChildren(*HAnimSegment1534);

CHAnimJoint* HAnimJoint1549 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1549->setName("r_carpometacarpal_4");
HAnimJoint1549->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1549->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1549->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1549->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1550->setName("r_metacarpal_4");
HAnimSegment1550->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1551 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1552 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1553 = (CShape *)(m_pScene.createNode("Shape"));
Shape1553->setUSE("HAnimJointShape");
Transform1552->addChild(*Shape1553);

Transform1551->addChildren(*Transform1552);

HAnimSegment1550->addChildren(*Transform1551);

CShape* Shape1554 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1555 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1555->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1556 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1556->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1555->setCoord(*Coordinate1556);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1557 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1557->setUSE("HAnimSegmentLineColorRGBA");
LineSet1555->setColor(*ColorRGBA1557);

Shape1554->setGeometry(LineSet1555);

HAnimSegment1550->addChildren(*Shape1554);

HAnimJoint1549->addChildren(*HAnimSegment1550);

CHAnimJoint* HAnimJoint1558 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1558->setName("r_metacarpophalangeal_4");
HAnimJoint1558->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1558->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1558->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1558->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1559 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1559->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1559->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1560 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1561 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1562 = (CShape *)(m_pScene.createNode("Shape"));
Shape1562->setUSE("HAnimJointShape");
Transform1561->addChild(*Shape1562);

Transform1560->addChildren(*Transform1561);

HAnimSegment1559->addChildren(*Transform1560);

CShape* Shape1563 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1564 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1564->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1565 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1565->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1564->setCoord(*Coordinate1565);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1566 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1566->setUSE("HAnimSegmentLineColorRGBA");
LineSet1564->setColor(*ColorRGBA1566);

Shape1563->setGeometry(LineSet1564);

HAnimSegment1559->addChildren(*Shape1563);

HAnimJoint1558->addChildren(*HAnimSegment1559);

CHAnimJoint* HAnimJoint1567 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1567->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1567->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1567->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1567->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1567->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1568 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1568->setName("r_carpal_middle_phalanx_4");
HAnimSegment1568->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1569 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1570 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1571 = (CShape *)(m_pScene.createNode("Shape"));
Shape1571->setUSE("HAnimJointShape");
Transform1570->addChild(*Shape1571);

Transform1569->addChildren(*Transform1570);

HAnimSegment1568->addChildren(*Transform1569);

CShape* Shape1572 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1573 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1573->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1574 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1574->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1573->setCoord(*Coordinate1574);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1575 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1575->setUSE("HAnimSegmentLineColorRGBA");
LineSet1573->setColor(*ColorRGBA1575);

Shape1572->setGeometry(LineSet1573);

HAnimSegment1568->addChildren(*Shape1572);

CHAnimSite* HAnimSite1576 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1576->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1576->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1576->setTranslation(new float[3]{0.1,0.93,0});
CTouchSensor* TouchSensor1577 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1577->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1576->addChildren(*TouchSensor1577);

CShape* Shape1578 = (CShape *)(m_pScene.createNode("Shape"));
Shape1578->setUSE("HAnimSiteShape");
HAnimSite1576->addChildren(*Shape1578);

HAnimSegment1568->addChildren(*HAnimSite1576);

HAnimJoint1567->addChildren(*HAnimSegment1568);

CHAnimJoint* HAnimJoint1579 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1579->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1579->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1579->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1579->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1579->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1567->addChildren(*HAnimJoint1579);

HAnimJoint1558->addChildren(*HAnimJoint1567);

HAnimJoint1549->addChildren(*HAnimJoint1558);

HAnimJoint1533->addChildren(*HAnimJoint1549);

CHAnimJoint* HAnimJoint1580 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1580->setName("r_carpometacarpal_5");
HAnimJoint1580->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1580->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1580->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1580->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1581 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1581->setName("r_metacarpal_5");
HAnimSegment1581->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1582 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1583 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1584 = (CShape *)(m_pScene.createNode("Shape"));
Shape1584->setUSE("HAnimJointShape");
Transform1583->addChild(*Shape1584);

Transform1582->addChildren(*Transform1583);

HAnimSegment1581->addChildren(*Transform1582);

CShape* Shape1585 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1586 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1586->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1587 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1587->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1586->setCoord(*Coordinate1587);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1588 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1588->setUSE("HAnimSegmentLineColorRGBA");
LineSet1586->setColor(*ColorRGBA1588);

Shape1585->setGeometry(LineSet1586);

HAnimSegment1581->addChildren(*Shape1585);

HAnimJoint1580->addChildren(*HAnimSegment1581);

CHAnimJoint* HAnimJoint1589 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1589->setName("r_metacarpophalangeal_5");
HAnimJoint1589->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1589->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1589->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1589->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1590 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1590->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1590->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1591 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1592 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1593 = (CShape *)(m_pScene.createNode("Shape"));
Shape1593->setUSE("HAnimJointShape");
Transform1592->addChild(*Shape1593);

Transform1591->addChildren(*Transform1592);

HAnimSegment1590->addChildren(*Transform1591);

CShape* Shape1594 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1595 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1595->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1596 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1596->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1595->setCoord(*Coordinate1596);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1597 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1597->setUSE("HAnimSegmentLineColorRGBA");
LineSet1595->setColor(*ColorRGBA1597);

Shape1594->setGeometry(LineSet1595);

HAnimSegment1590->addChildren(*Shape1594);

HAnimJoint1589->addChildren(*HAnimSegment1590);

CHAnimJoint* HAnimJoint1598 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1598->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1598->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1598->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1598->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1598->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1599 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1599->setName("r_carpal_middle_phalanx_5");
HAnimSegment1599->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1600 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CTransform* Transform1601 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1602 = (CShape *)(m_pScene.createNode("Shape"));
Shape1602->setUSE("HAnimJointShape");
Transform1601->addChild(*Shape1602);

Transform1600->addChildren(*Transform1601);

HAnimSegment1599->addChildren(*Transform1600);

CShape* Shape1603 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1604 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1604->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1605 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1605->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1604->setCoord(*Coordinate1605);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1606 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1606->setUSE("HAnimSegmentLineColorRGBA");
LineSet1604->setColor(*ColorRGBA1606);

Shape1603->setGeometry(LineSet1604);

HAnimSegment1599->addChildren(*Shape1603);

CHAnimSite* HAnimSite1607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1607->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1607->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1607->setTranslation(new float[3]{0.25,0.79,0});
CTouchSensor* TouchSensor1608 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1608->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1607->addChildren(*TouchSensor1608);

CShape* Shape1609 = (CShape *)(m_pScene.createNode("Shape"));
Shape1609->setUSE("HAnimSiteShape");
HAnimSite1607->addChildren(*Shape1609);

HAnimSegment1599->addChildren(*HAnimSite1607);

HAnimJoint1598->addChildren(*HAnimSegment1599);

CHAnimJoint* HAnimJoint1610 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1610->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1610->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1610->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1610->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1610->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1598->addChildren(*HAnimJoint1610);

HAnimJoint1589->addChildren(*HAnimJoint1598);

HAnimJoint1580->addChildren(*HAnimJoint1589);

HAnimJoint1533->addChildren(*HAnimJoint1580);

HAnimJoint1392->addChildren(*HAnimJoint1533);

HAnimJoint1380->addChildren(*HAnimJoint1392);

HAnimJoint1359->addChildren(*HAnimJoint1380);

HAnimJoint1344->addChildren(*HAnimJoint1359);

HAnimJoint1335->addChildren(*HAnimJoint1344);

HAnimJoint854->addChildren(*HAnimJoint1335);

HAnimJoint839->addChildren(*HAnimJoint854);

HAnimJoint830->addChildren(*HAnimJoint839);

HAnimJoint821->addChildren(*HAnimJoint830);

HAnimJoint812->addChildren(*HAnimJoint821);

HAnimJoint800->addChildren(*HAnimJoint812);

HAnimJoint779->addChildren(*HAnimJoint800);

HAnimJoint770->addChildren(*HAnimJoint779);

HAnimJoint761->addChildren(*HAnimJoint770);

HAnimJoint746->addChildren(*HAnimJoint761);

HAnimJoint734->addChildren(*HAnimJoint746);

HAnimJoint725->addChildren(*HAnimJoint734);

HAnimJoint716->addChildren(*HAnimJoint725);

HAnimJoint707->addChildren(*HAnimJoint716);

HAnimJoint689->addChildren(*HAnimJoint707);

HAnimJoint680->addChildren(*HAnimJoint689);

HAnimJoint671->addChildren(*HAnimJoint680);

HAnimJoint52->addChildren(*HAnimJoint671);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint1611 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1611->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1611);

CHAnimJoint* HAnimJoint1612 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1612->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1612);

CHAnimJoint* HAnimJoint1613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1613->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1613);

CHAnimJoint* HAnimJoint1614 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1614->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1614);

CHAnimJoint* HAnimJoint1615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1615->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1615);

CHAnimJoint* HAnimJoint1616 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1616->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1616);

CHAnimJoint* HAnimJoint1617 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1617->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1617);

CHAnimJoint* HAnimJoint1618 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1618->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1618);

CHAnimJoint* HAnimJoint1619 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1619->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1619);

CHAnimJoint* HAnimJoint1620 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1620->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1620);

CHAnimJoint* HAnimJoint1621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1621->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1621);

CHAnimJoint* HAnimJoint1622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1622->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1622);

CHAnimJoint* HAnimJoint1623 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1623->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1623);

CHAnimJoint* HAnimJoint1624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1624->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1624);

CHAnimJoint* HAnimJoint1625 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1625->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1625);

CHAnimJoint* HAnimJoint1626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1626->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1626);

CHAnimJoint* HAnimJoint1627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1627->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1627);

CHAnimJoint* HAnimJoint1628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1628->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1628);

CHAnimJoint* HAnimJoint1629 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1629->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1629);

CHAnimJoint* HAnimJoint1630 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1630->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1630);

CHAnimJoint* HAnimJoint1631 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1631->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1631);

CHAnimJoint* HAnimJoint1632 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1632->setUSE("hanim_l_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1632);

CHAnimJoint* HAnimJoint1633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1633->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1633);

CHAnimJoint* HAnimJoint1634 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1634->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1634);

CHAnimJoint* HAnimJoint1635 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1635->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1635);

CHAnimJoint* HAnimJoint1636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1636->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1636);

CHAnimJoint* HAnimJoint1637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1637->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1637);

CHAnimJoint* HAnimJoint1638 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1638->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1638);

CHAnimJoint* HAnimJoint1639 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1639->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1639);

CHAnimJoint* HAnimJoint1640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1640->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1640);

CHAnimJoint* HAnimJoint1641 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1641->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1641);

CHAnimJoint* HAnimJoint1642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1642->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1642);

CHAnimJoint* HAnimJoint1643 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1643->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1643);

CHAnimJoint* HAnimJoint1644 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1644->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1644);

CHAnimJoint* HAnimJoint1645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1645->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1645);

CHAnimJoint* HAnimJoint1646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1646->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1646);

CHAnimJoint* HAnimJoint1647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1647->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1647);

CHAnimJoint* HAnimJoint1648 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1648->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1648);

CHAnimJoint* HAnimJoint1649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1649->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1649);

CHAnimJoint* HAnimJoint1650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1650->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1650);

CHAnimJoint* HAnimJoint1651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1651->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1651);

CHAnimJoint* HAnimJoint1652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1652->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1652);

CHAnimJoint* HAnimJoint1653 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1653->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1653);

CHAnimJoint* HAnimJoint1654 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1654->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1654);

CHAnimJoint* HAnimJoint1655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1655->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1655);

CHAnimJoint* HAnimJoint1656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1656->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1656);

CHAnimJoint* HAnimJoint1657 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1657->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1657);

CHAnimJoint* HAnimJoint1658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1658->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1658);

CHAnimJoint* HAnimJoint1659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1659->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1659);

CHAnimJoint* HAnimJoint1660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1660->setUSE("hanim_r_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1660);

CHAnimJoint* HAnimJoint1661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1661->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1661);

CHAnimJoint* HAnimJoint1662 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1662->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1662);

CHAnimJoint* HAnimJoint1663 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1663->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1663);

CHAnimJoint* HAnimJoint1664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1664->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1664);

CHAnimJoint* HAnimJoint1665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1665->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1665);

CHAnimJoint* HAnimJoint1666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1666->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1666);

CHAnimJoint* HAnimJoint1667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1667->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1667);

CHAnimJoint* HAnimJoint1668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1668->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1668);

CHAnimJoint* HAnimJoint1669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1669->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1669);

CHAnimJoint* HAnimJoint1670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1670->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1670);

CHAnimJoint* HAnimJoint1671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1671->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1671);

CHAnimJoint* HAnimJoint1672 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1672->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1672);

CHAnimJoint* HAnimJoint1673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1673->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1673);

CHAnimJoint* HAnimJoint1674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1674->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1674);

CHAnimJoint* HAnimJoint1675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1675->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1675);

CHAnimJoint* HAnimJoint1676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1676->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1676);

CHAnimJoint* HAnimJoint1677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1677->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1677);

CHAnimJoint* HAnimJoint1678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1678->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1678);

CHAnimJoint* HAnimJoint1679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1679->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1679);

CHAnimJoint* HAnimJoint1680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1680->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1680);

CHAnimJoint* HAnimJoint1681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1681->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1681);

CHAnimJoint* HAnimJoint1682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1682->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1682);

CHAnimJoint* HAnimJoint1683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1683->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1683);

CHAnimJoint* HAnimJoint1684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1684->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1684);

CHAnimJoint* HAnimJoint1685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1685->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1685);

CHAnimJoint* HAnimJoint1686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1686->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1686);

CHAnimJoint* HAnimJoint1687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1687->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1687);

CHAnimJoint* HAnimJoint1688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1688->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1688);

CHAnimJoint* HAnimJoint1689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1689->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1689);

CHAnimJoint* HAnimJoint1690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1690->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1690);

CHAnimJoint* HAnimJoint1691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1691->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1691);

CHAnimJoint* HAnimJoint1692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1692->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1692);

CHAnimJoint* HAnimJoint1693 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1693->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1693);

CHAnimJoint* HAnimJoint1694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1694->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1694);

CHAnimJoint* HAnimJoint1695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1695->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1695);

CHAnimJoint* HAnimJoint1696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1696->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1696);

CHAnimJoint* HAnimJoint1697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1697->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1697);

CHAnimJoint* HAnimJoint1698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1698->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1698);

CHAnimJoint* HAnimJoint1699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1699->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1699);

CHAnimJoint* HAnimJoint1700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1700->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1747->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1748->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1749->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1750->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1751->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1752->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1753->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1753);

CHAnimJoint* HAnimJoint1754 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1754->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1754);

CHAnimJoint* HAnimJoint1755 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1755->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1755);

CHAnimJoint* HAnimJoint1756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1756->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_l_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_l_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_l_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_r_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_r_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_r_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_l_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_l_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_l_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_l_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1852->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1853->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1854->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1855->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1856->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1857->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1858->setUSE("hanim_r_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1859->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1860->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1861->setUSE("hanim_r_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1862->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1863->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1864->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1864);

CHAnimSegment* HAnimSegment1865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1865->setUSE("hanim_r_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1865);

CHAnimSegment* HAnimSegment1866 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1866->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1866);

CHAnimSegment* HAnimSegment1867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1867->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1867);

CHAnimSegment* HAnimSegment1868 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1868->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1868);

CHAnimSegment* HAnimSegment1869 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1869->setUSE("hanim_r_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1869);

CHAnimSegment* HAnimSegment1870 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1870->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1870);

CHAnimSegment* HAnimSegment1871 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1871->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1871);

CHAnimSegment* HAnimSegment1872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1872->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1872);

CHAnimSegment* HAnimSegment1873 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1873->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1873);

CHAnimSegment* HAnimSegment1874 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1874->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1874);

CHAnimSegment* HAnimSegment1875 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1875->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1875);

CHAnimSite* HAnimSite1876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1876->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(*HAnimSite1876);

CHAnimSite* HAnimSite1877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1877->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1877);

CHAnimSite* HAnimSite1878 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1878->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1878);

CHAnimSite* HAnimSite1879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1879->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1879);

CHAnimSite* HAnimSite1880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1880->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1880);

CHAnimSite* HAnimSite1881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1881->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1881);

CHAnimSite* HAnimSite1882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1882->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1882);

CHAnimSite* HAnimSite1883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1883->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1883);

CHAnimSite* HAnimSite1884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1884->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1884);

CHAnimSite* HAnimSite1885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1885->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1885);

CHAnimSite* HAnimSite1886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1886->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1886);

CHAnimSite* HAnimSite1887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1887->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1887);

CHAnimSite* HAnimSite1888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1888->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1943->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1944->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1945->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1946->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(*HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1947->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1948->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1949->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1950->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1951->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1952->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1953->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1954->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1955->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1956->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1957->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1958->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1959->setUSE("hanim_menton_pt");
HAnimHumanoid43->setSites(*HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1960->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1961->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1962->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1963->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1964->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1965->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1966->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1967->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1968->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1969->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1970->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1971->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1972->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1973->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1974->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1975->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1976->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1977->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1978->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1979->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1979);

CHAnimSite* HAnimSite1980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1980->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1980);

CHAnimSite* HAnimSite1981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1981->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1981);

CHAnimSite* HAnimSite1982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1982->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1982);

CHAnimSite* HAnimSite1983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1983->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1983);

CHAnimSite* HAnimSite1984 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1984->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1984);

CHAnimSite* HAnimSite1985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1985->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1985);

CHAnimSite* HAnimSite1986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1986->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1986);

CHAnimSite* HAnimSite1987 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1987->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1987);

CHAnimSite* HAnimSite1988 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1988->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1988);

CHAnimSite* HAnimSite1989 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1989->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1989);

CHAnimSite* HAnimSite1990 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1990->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1990);

CHAnimSite* HAnimSite1991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1991->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1991);

CHAnimSite* HAnimSite1992 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1992->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1992);

CHAnimSite* HAnimSite1993 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1993->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1993);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
