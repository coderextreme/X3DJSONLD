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
meta3->setContent("Humanoid1.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d");
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
meta7->setContent("14 Jan 2023");
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
ImageTexture49->setDescription("Blue Spiral Pattern");
ImageTexture49->setUrl(new CString[3]{"./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 3);
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
CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setTranslation(new float[3]{0,0.824,0.0277});
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setUSE("HAnimJointShape");
Transform55->addChild(*Shape56);

Transform54->addChildren(*Transform55);

HAnimSegment53->addChildren(*Transform54);

CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet58 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet58->setVertexCount(new int[1]{2});
CCoordinate* Coordinate59 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate59->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet58->setCoord(*Coordinate59);

//from humanoid_root to sacroiliac vertices 2
CColorRGBA* ColorRGBA60 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA60->setUSE("HAnimSegmentLineColorRGBA");
LineSet58->setColor(*ColorRGBA60);

Shape57->setGeometry(LineSet58);

HAnimSegment53->addChildren(*Shape57);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("buttocks_standing_wall_contact_point");
HAnimSite61->setDEF("hanim_buttocks_standing_wall_contact_point");
CTouchSensor* TouchSensor62 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor62->setDescription("HAnimSite buttocks_standing_wall_contact_point");
HAnimSite61->addChildren(*TouchSensor62);

CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
Shape63->setUSE("HAnimSiteShape");
HAnimSite61->addChildren(*Shape63);

HAnimSegment53->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite64 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite64->setName("crotch");
HAnimSite64->setDEF("hanim_crotch");
HAnimSite64->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor65 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor65->setDescription("HAnimSite crotch");
HAnimSite64->addChildren(*TouchSensor65);

CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("HAnimSiteShape");
HAnimSite64->addChildren(*Shape66);

HAnimSegment53->addChildren(*HAnimSite64);

CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_asis");
HAnimSite67->setDEF("hanim_l_asis");
HAnimSite67->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor68 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor68->setDescription("HAnimSite l_asis");
HAnimSite67->addChildren(*TouchSensor68);

CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
Shape69->setUSE("HAnimSiteShape");
HAnimSite67->addChildren(*Shape69);

HAnimSegment53->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite70 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite70->setName("l_iliocristale");
HAnimSite70->setDEF("hanim_l_iliocristale");
HAnimSite70->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor71 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor71->setDescription("HAnimSite l_iliocristale");
HAnimSite70->addChildren(*TouchSensor71);

CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("HAnimSiteShape");
HAnimSite70->addChildren(*Shape72);

HAnimSegment53->addChildren(*HAnimSite70);

CHAnimSite* HAnimSite73 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite73->setName("l_psis");
HAnimSite73->setDEF("hanim_l_psis");
HAnimSite73->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor74 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor74->setDescription("HAnimSite l_psis");
HAnimSite73->addChildren(*TouchSensor74);

CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
Shape75->setUSE("HAnimSiteShape");
HAnimSite73->addChildren(*Shape75);

HAnimSegment53->addChildren(*HAnimSite73);

CHAnimSite* HAnimSite76 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite76->setName("l_trochanterion");
HAnimSite76->setDEF("hanim_l_trochanterion");
HAnimSite76->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor77 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor77->setDescription("HAnimSite l_trochanterion");
HAnimSite76->addChildren(*TouchSensor77);

CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("HAnimSiteShape");
HAnimSite76->addChildren(*Shape78);

HAnimSegment53->addChildren(*HAnimSite76);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setName("r_asis");
HAnimSite79->setDEF("hanim_r_asis");
HAnimSite79->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor80 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor80->setDescription("HAnimSite r_asis");
HAnimSite79->addChildren(*TouchSensor80);

CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("HAnimSiteShape");
HAnimSite79->addChildren(*Shape81);

HAnimSegment53->addChildren(*HAnimSite79);

CHAnimSite* HAnimSite82 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite82->setName("r_iliocristale");
HAnimSite82->setDEF("hanim_r_iliocristale");
HAnimSite82->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor83 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor83->setDescription("HAnimSite r_iliocristale");
HAnimSite82->addChildren(*TouchSensor83);

CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
Shape84->setUSE("HAnimSiteShape");
HAnimSite82->addChildren(*Shape84);

HAnimSegment53->addChildren(*HAnimSite82);

CHAnimSite* HAnimSite85 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite85->setName("r_psis");
HAnimSite85->setDEF("hanim_r_psis");
HAnimSite85->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor86 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor86->setDescription("HAnimSite r_psis");
HAnimSite85->addChildren(*TouchSensor86);

CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
Shape87->setUSE("HAnimSiteShape");
HAnimSite85->addChildren(*Shape87);

HAnimSegment53->addChildren(*HAnimSite85);

CHAnimSite* HAnimSite88 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite88->setName("r_trochanterion");
HAnimSite88->setDEF("hanim_r_trochanterion");
HAnimSite88->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor89 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor89->setDescription("HAnimSite r_trochanterion");
HAnimSite88->addChildren(*TouchSensor89);

CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
Shape90->setUSE("HAnimSiteShape");
HAnimSite88->addChildren(*Shape90);

HAnimSegment53->addChildren(*HAnimSite88);

CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet92 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet92->setVertexCount(new int[1]{2});
CCoordinate* Coordinate93 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate93->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet92->setCoord(*Coordinate93);

//from humanoid_root to vl5 vertices 2
CColorRGBA* ColorRGBA94 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA94->setUSE("HAnimSegmentLineColorRGBA");
LineSet92->setColor(*ColorRGBA94);

Shape91->setGeometry(LineSet92);

HAnimSegment53->addChildren(*Shape91);

CHAnimSite* HAnimSite95 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite95->setName("adams_apple");
HAnimSite95->setDEF("hanim_adams_apple");
CTouchSensor* TouchSensor96 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor96->setDescription("HAnimSite adams_apple");
HAnimSite95->addChildren(*TouchSensor96);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("HAnimSiteShape");
HAnimSite95->addChildren(*Shape97);

HAnimSegment53->addChildren(*HAnimSite95);

CHAnimSite* HAnimSite98 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite98->setName("cervicale");
HAnimSite98->setDEF("hanim_cervicale");
HAnimSite98->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor99 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor99->setDescription("HAnimSite cervicale");
HAnimSite98->addChildren(*TouchSensor99);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("HAnimSiteShape");
HAnimSite98->addChildren(*Shape100);

HAnimSegment53->addChildren(*HAnimSite98);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("l_acromion");
HAnimSite101->setDEF("hanim_l_acromion");
HAnimSite101->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor102->setDescription("HAnimSite l_acromion");
HAnimSite101->addChildren(*TouchSensor102);

CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
Shape103->setUSE("HAnimSiteShape");
HAnimSite101->addChildren(*Shape103);

HAnimSegment53->addChildren(*HAnimSite101);

CHAnimSite* HAnimSite104 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite104->setName("l_axilla_distal_pt");
HAnimSite104->setDEF("hanim_l_axilla_distal_pt");
HAnimSite104->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor105 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor105->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite104->addChildren(*TouchSensor105);

CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setUSE("HAnimSiteShape");
HAnimSite104->addChildren(*Shape106);

HAnimSegment53->addChildren(*HAnimSite104);

CHAnimSite* HAnimSite107 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite107->setName("l_axilla_posterior_folds");
HAnimSite107->setDEF("hanim_l_axilla_posterior_folds");
CTouchSensor* TouchSensor108 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor108->setDescription("HAnimSite l_axilla_posterior_folds");
HAnimSite107->addChildren(*TouchSensor108);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
Shape109->setUSE("HAnimSiteShape");
HAnimSite107->addChildren(*Shape109);

HAnimSegment53->addChildren(*HAnimSite107);

CHAnimSite* HAnimSite110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite110->setName("l_axilla_proximal");
HAnimSite110->setDEF("hanim_l_axilla_proximal");
HAnimSite110->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor111 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor111->setDescription("HAnimSite l_axilla_proximal");
HAnimSite110->addChildren(*TouchSensor111);

CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("HAnimSiteShape");
HAnimSite110->addChildren(*Shape112);

HAnimSegment53->addChildren(*HAnimSite110);

CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setName("l_chest_midsagittal_plane");
HAnimSite113->setDEF("hanim_l_chest_midsagittal_plane");
CTouchSensor* TouchSensor114 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor114->setDescription("HAnimSite l_chest_midsagittal_plane");
HAnimSite113->addChildren(*TouchSensor114);

CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("HAnimSiteShape");
HAnimSite113->addChildren(*Shape115);

HAnimSegment53->addChildren(*HAnimSite113);

CHAnimSite* HAnimSite116 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite116->setName("l_clavicale");
HAnimSite116->setDEF("hanim_l_clavicale");
HAnimSite116->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor117 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor117->setDescription("HAnimSite l_clavicale");
HAnimSite116->addChildren(*TouchSensor117);

CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
Shape118->setUSE("HAnimSiteShape");
HAnimSite116->addChildren(*Shape118);

HAnimSegment53->addChildren(*HAnimSite116);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("l_neck_base");
HAnimSite119->setDEF("hanim_l_neck_base");
HAnimSite119->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor120 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor120->setDescription("HAnimSite l_neck_base");
HAnimSite119->addChildren(*TouchSensor120);

CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("HAnimSiteShape");
HAnimSite119->addChildren(*Shape121);

HAnimSegment53->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("l_rib10");
HAnimSite122->setDEF("hanim_l_rib10");
HAnimSite122->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor123 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor123->setDescription("HAnimSite l_rib10");
HAnimSite122->addChildren(*TouchSensor123);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("HAnimSiteShape");
HAnimSite122->addChildren(*Shape124);

HAnimSegment53->addChildren(*HAnimSite122);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("l_thelion");
HAnimSite125->setDEF("hanim_l_thelion");
HAnimSite125->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor126->setDescription("HAnimSite l_thelion");
HAnimSite125->addChildren(*TouchSensor126);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
Shape127->setUSE("HAnimSiteShape");
HAnimSite125->addChildren(*Shape127);

HAnimSegment53->addChildren(*HAnimSite125);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("mesosternale");
HAnimSite128->setDEF("hanim_mesosternale");
CTouchSensor* TouchSensor129 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor129->setDescription("HAnimSite mesosternale");
HAnimSite128->addChildren(*TouchSensor129);

CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimSiteShape");
HAnimSite128->addChildren(*Shape130);

HAnimSegment53->addChildren(*HAnimSite128);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setName("navel");
HAnimSite131->setDEF("hanim_navel");
HAnimSite131->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("HAnimSite navel");
HAnimSite131->addChildren(*TouchSensor132);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChildren(*Shape133);

HAnimSegment53->addChildren(*HAnimSite131);

CHAnimSite* HAnimSite134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite134->setName("r_acromion");
HAnimSite134->setDEF("hanim_r_acromion");
HAnimSite134->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor135 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor135->setDescription("HAnimSite r_acromion");
HAnimSite134->addChildren(*TouchSensor135);

CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
Shape136->setUSE("HAnimSiteShape");
HAnimSite134->addChildren(*Shape136);

HAnimSegment53->addChildren(*HAnimSite134);

CHAnimSite* HAnimSite137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite137->setName("r_axilla_distal_pt");
HAnimSite137->setDEF("hanim_r_axilla_distal_pt");
HAnimSite137->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor138 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor138->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite137->addChildren(*TouchSensor138);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("HAnimSiteShape");
HAnimSite137->addChildren(*Shape139);

HAnimSegment53->addChildren(*HAnimSite137);

CHAnimSite* HAnimSite140 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite140->setName("r_axilla_posterior_folds");
HAnimSite140->setDEF("hanim_r_axilla_posterior_folds");
CTouchSensor* TouchSensor141 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor141->setDescription("HAnimSite r_axilla_posterior_folds");
HAnimSite140->addChildren(*TouchSensor141);

CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
Shape142->setUSE("HAnimSiteShape");
HAnimSite140->addChildren(*Shape142);

HAnimSegment53->addChildren(*HAnimSite140);

CHAnimSite* HAnimSite143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite143->setName("r_axilla_proximal");
HAnimSite143->setDEF("hanim_r_axilla_proximal");
HAnimSite143->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor144 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor144->setDescription("HAnimSite r_axilla_proximal");
HAnimSite143->addChildren(*TouchSensor144);

CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("HAnimSiteShape");
HAnimSite143->addChildren(*Shape145);

HAnimSegment53->addChildren(*HAnimSite143);

CHAnimSite* HAnimSite146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite146->setName("r_chest_midsagittal_plane");
HAnimSite146->setDEF("hanim_r_chest_midsagittal_plane");
CTouchSensor* TouchSensor147 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor147->setDescription("HAnimSite r_chest_midsagittal_plane");
HAnimSite146->addChildren(*TouchSensor147);

CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
Shape148->setUSE("HAnimSiteShape");
HAnimSite146->addChildren(*Shape148);

HAnimSegment53->addChildren(*HAnimSite146);

CHAnimSite* HAnimSite149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite149->setName("r_clavicale");
HAnimSite149->setDEF("hanim_r_clavicale");
HAnimSite149->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor150->setDescription("HAnimSite r_clavicale");
HAnimSite149->addChildren(*TouchSensor150);

CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
Shape151->setUSE("HAnimSiteShape");
HAnimSite149->addChildren(*Shape151);

HAnimSegment53->addChildren(*HAnimSite149);

CHAnimSite* HAnimSite152 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite152->setName("r_neck_base");
HAnimSite152->setDEF("hanim_r_neck_base");
HAnimSite152->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor153 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor153->setDescription("HAnimSite r_neck_base");
HAnimSite152->addChildren(*TouchSensor153);

CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
Shape154->setUSE("HAnimSiteShape");
HAnimSite152->addChildren(*Shape154);

HAnimSegment53->addChildren(*HAnimSite152);

CHAnimSite* HAnimSite155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite155->setName("r_rib10");
HAnimSite155->setDEF("hanim_r_rib10");
HAnimSite155->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor156 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor156->setDescription("HAnimSite r_rib10");
HAnimSite155->addChildren(*TouchSensor156);

CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
Shape157->setUSE("HAnimSiteShape");
HAnimSite155->addChildren(*Shape157);

HAnimSegment53->addChildren(*HAnimSite155);

CHAnimSite* HAnimSite158 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite158->setName("r_thelion");
HAnimSite158->setDEF("hanim_r_thelion");
HAnimSite158->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor159 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor159->setDescription("HAnimSite r_thelion");
HAnimSite158->addChildren(*TouchSensor159);

CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
Shape160->setUSE("HAnimSiteShape");
HAnimSite158->addChildren(*Shape160);

HAnimSegment53->addChildren(*HAnimSite158);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setName("rear_center_midsagittal_plane");
HAnimSite161->setDEF("hanim_rear_center_midsagittal_plane");
CTouchSensor* TouchSensor162 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor162->setDescription("HAnimSite rear_center_midsagittal_plane");
HAnimSite161->addChildren(*TouchSensor162);

CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
Shape163->setUSE("HAnimSiteShape");
HAnimSite161->addChildren(*Shape163);

HAnimSegment53->addChildren(*HAnimSite161);

CHAnimSite* HAnimSite164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite164->setName("spine_1_middle_back");
HAnimSite164->setDEF("hanim_spine_1_middle_back");
CTouchSensor* TouchSensor165 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor165->setDescription("HAnimSite spine_1_middle_back");
HAnimSite164->addChildren(*TouchSensor165);

CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("HAnimSiteShape");
HAnimSite164->addChildren(*Shape166);

HAnimSegment53->addChildren(*HAnimSite164);

CHAnimSite* HAnimSite167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite167->setName("spine_2_middle_back");
HAnimSite167->setDEF("hanim_spine_2_middle_back");
CTouchSensor* TouchSensor168 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor168->setDescription("HAnimSite spine_2_middle_back");
HAnimSite167->addChildren(*TouchSensor168);

CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
Shape169->setUSE("HAnimSiteShape");
HAnimSite167->addChildren(*Shape169);

HAnimSegment53->addChildren(*HAnimSite167);

CHAnimSite* HAnimSite170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite170->setName("substernale");
HAnimSite170->setDEF("hanim_substernale");
HAnimSite170->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor171 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor171->setDescription("HAnimSite substernale");
HAnimSite170->addChildren(*TouchSensor171);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
Shape172->setUSE("HAnimSiteShape");
HAnimSite170->addChildren(*Shape172);

HAnimSegment53->addChildren(*HAnimSite170);

CHAnimSite* HAnimSite173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite173->setName("suprasternale");
HAnimSite173->setDEF("hanim_suprasternale");
HAnimSite173->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor174 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor174->setDescription("HAnimSite suprasternale");
HAnimSite173->addChildren(*TouchSensor174);

CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("HAnimSiteShape");
HAnimSite173->addChildren(*Shape175);

HAnimSegment53->addChildren(*HAnimSite173);

CHAnimSite* HAnimSite176 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite176->setName("waist_preferred_anterior");
HAnimSite176->setDEF("hanim_waist_preferred_anterior");
CTouchSensor* TouchSensor177 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor177->setDescription("HAnimSite waist_preferred_anterior");
HAnimSite176->addChildren(*TouchSensor177);

CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
Shape178->setUSE("HAnimSiteShape");
HAnimSite176->addChildren(*Shape178);

HAnimSegment53->addChildren(*HAnimSite176);

CHAnimSite* HAnimSite179 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite179->setName("waist_preferred_posterior");
HAnimSite179->setDEF("hanim_waist_preferred_posterior");
HAnimSite179->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor180 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor180->setDescription("HAnimSite waist_preferred_posterior");
HAnimSite179->addChildren(*TouchSensor180);

CShape* Shape181 = (CShape *)(m_pScene.createNode("Shape"));
Shape181->setUSE("HAnimSiteShape");
HAnimSite179->addChildren(*Shape181);

HAnimSegment53->addChildren(*HAnimSite179);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setName("sacroiliac");
HAnimJoint182->setDEF("hanim_sacroiliac");
HAnimJoint182->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint182->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint182->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment183 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment183->setName("pelvis");
HAnimSegment183->setDEF("hanim_pelvis");
CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
Shape186->setUSE("HAnimJointShape");
Transform185->addChild(*Shape186);

Transform184->addChildren(*Transform185);

HAnimSegment183->addChildren(*Transform184);

CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet188 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet188->setVertexCount(new int[1]{2});
CCoordinate* Coordinate189 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate189->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet188->setCoord(*Coordinate189);

//from sacroiliac to l_hip vertices 2
CColorRGBA* ColorRGBA190 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA190->setUSE("HAnimSegmentLineColorRGBA");
LineSet188->setColor(*ColorRGBA190);

Shape187->setGeometry(LineSet188);

HAnimSegment183->addChildren(*Shape187);

CHAnimSite* HAnimSite191 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite191->setName("l_femoral_lateral_epicondyles");
HAnimSite191->setDEF("hanim_l_femoral_lateral_epicondyles");
HAnimSite191->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor192 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor192->setDescription("HAnimSite l_femoral_lateral_epicondyles");
HAnimSite191->addChildren(*TouchSensor192);

CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
Shape193->setUSE("HAnimSiteShape");
HAnimSite191->addChildren(*Shape193);

HAnimSegment183->addChildren(*HAnimSite191);

CHAnimSite* HAnimSite194 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite194->setName("l_femoral_medial_epicondyles");
HAnimSite194->setDEF("hanim_l_femoral_medial_epicondyles");
HAnimSite194->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor195 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor195->setDescription("HAnimSite l_femoral_medial_epicondyles");
HAnimSite194->addChildren(*TouchSensor195);

CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
Shape196->setUSE("HAnimSiteShape");
HAnimSite194->addChildren(*Shape196);

HAnimSegment183->addChildren(*HAnimSite194);

CHAnimSite* HAnimSite197 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite197->setName("l_knee_crease");
HAnimSite197->setDEF("hanim_l_knee_crease");
HAnimSite197->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor198 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor198->setDescription("HAnimSite l_knee_crease");
HAnimSite197->addChildren(*TouchSensor198);

CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
Shape199->setUSE("HAnimSiteShape");
HAnimSite197->addChildren(*Shape199);

HAnimSegment183->addChildren(*HAnimSite197);

CHAnimSite* HAnimSite200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite200->setName("l_suprapatella");
HAnimSite200->setDEF("hanim_l_suprapatella");
CTouchSensor* TouchSensor201 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor201->setDescription("HAnimSite l_suprapatella");
HAnimSite200->addChildren(*TouchSensor201);

CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
Shape202->setUSE("HAnimSiteShape");
HAnimSite200->addChildren(*Shape202);

HAnimSegment183->addChildren(*HAnimSite200);

CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet204 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet204->setVertexCount(new int[1]{2});
CCoordinate* Coordinate205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate205->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet204->setCoord(*Coordinate205);

//from sacroiliac to r_hip vertices 2
CColorRGBA* ColorRGBA206 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA206->setUSE("HAnimSegmentLineColorRGBA");
LineSet204->setColor(*ColorRGBA206);

Shape203->setGeometry(LineSet204);

HAnimSegment183->addChildren(*Shape203);

CHAnimSite* HAnimSite207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite207->setName("r_femoral_lateral_epicondyles");
HAnimSite207->setDEF("hanim_r_femoral_lateral_epicondyles");
HAnimSite207->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor208 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor208->setDescription("HAnimSite r_femoral_lateral_epicondyles");
HAnimSite207->addChildren(*TouchSensor208);

CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("HAnimSiteShape");
HAnimSite207->addChildren(*Shape209);

HAnimSegment183->addChildren(*HAnimSite207);

CHAnimSite* HAnimSite210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite210->setName("r_femoral_medial_epicondyles");
HAnimSite210->setDEF("hanim_r_femoral_medial_epicondyles");
HAnimSite210->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor211 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor211->setDescription("HAnimSite r_femoral_medial_epicondyles");
HAnimSite210->addChildren(*TouchSensor211);

CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
Shape212->setUSE("HAnimSiteShape");
HAnimSite210->addChildren(*Shape212);

HAnimSegment183->addChildren(*HAnimSite210);

CHAnimSite* HAnimSite213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite213->setName("r_knee_crease");
HAnimSite213->setDEF("hanim_r_knee_crease");
HAnimSite213->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor214 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor214->setDescription("HAnimSite r_knee_crease");
HAnimSite213->addChildren(*TouchSensor214);

CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
Shape215->setUSE("HAnimSiteShape");
HAnimSite213->addChildren(*Shape215);

HAnimSegment183->addChildren(*HAnimSite213);

CHAnimSite* HAnimSite216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite216->setName("r_suprapatella");
HAnimSite216->setDEF("hanim_r_suprapatella");
CTouchSensor* TouchSensor217 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor217->setDescription("HAnimSite r_suprapatella");
HAnimSite216->addChildren(*TouchSensor217);

CShape* Shape218 = (CShape *)(m_pScene.createNode("Shape"));
Shape218->setUSE("HAnimSiteShape");
HAnimSite216->addChildren(*Shape218);

HAnimSegment183->addChildren(*HAnimSite216);

HAnimJoint182->addChildren(*HAnimSegment183);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setName("l_hip");
HAnimJoint219->setDEF("hanim_l_hip");
HAnimJoint219->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint219->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint219->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment220 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment220->setName("l_thigh");
HAnimSegment220->setDEF("hanim_l_thigh");
CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
Transform221->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CTransform* Transform222 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
Shape223->setUSE("HAnimJointShape");
Transform222->addChild(*Shape223);

Transform221->addChildren(*Transform222);

HAnimSegment220->addChildren(*Transform221);

CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet225 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet225->setVertexCount(new int[1]{2});
CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet225->setCoord(*Coordinate226);

//from l_hip to l_knee vertices 2
CColorRGBA* ColorRGBA227 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA227->setUSE("HAnimSegmentLineColorRGBA");
LineSet225->setColor(*ColorRGBA227);

Shape224->setGeometry(LineSet225);

HAnimSegment220->addChildren(*Shape224);

CHAnimSite* HAnimSite228 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite228->setName("l_lateral_malleolus");
HAnimSite228->setDEF("hanim_l_lateral_malleolus");
HAnimSite228->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor229 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor229->setDescription("HAnimSite l_lateral_malleolus");
HAnimSite228->addChildren(*TouchSensor229);

CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
Shape230->setUSE("HAnimSiteShape");
HAnimSite228->addChildren(*Shape230);

HAnimSegment220->addChildren(*HAnimSite228);

CHAnimSite* HAnimSite231 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite231->setName("l_medial_malleolus");
HAnimSite231->setDEF("hanim_l_medial_malleolus");
HAnimSite231->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor232 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor232->setDescription("HAnimSite l_medial_malleolus");
HAnimSite231->addChildren(*TouchSensor232);

CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
Shape233->setUSE("HAnimSiteShape");
HAnimSite231->addChildren(*Shape233);

HAnimSegment220->addChildren(*HAnimSite231);

CHAnimSite* HAnimSite234 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite234->setName("l_tibiale");
HAnimSite234->setDEF("hanim_l_tibiale");
CTouchSensor* TouchSensor235 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor235->setDescription("HAnimSite l_tibiale");
HAnimSite234->addChildren(*TouchSensor235);

CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
Shape236->setUSE("HAnimSiteShape");
HAnimSite234->addChildren(*Shape236);

HAnimSegment220->addChildren(*HAnimSite234);

HAnimJoint219->addChildren(*HAnimSegment220);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setName("l_knee");
HAnimJoint237->setDEF("hanim_l_knee");
HAnimJoint237->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint237->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint237->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setName("l_calf");
HAnimSegment238->setDEF("hanim_l_calf");
CTransform* Transform239 = (CTransform *)(m_pScene.createNode("Transform"));
Transform239->setTranslation(new float[3]{0.104,0.4867,0.0308});
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("HAnimJointShape");
Transform240->addChild(*Shape241);

Transform239->addChildren(*Transform240);

HAnimSegment238->addChildren(*Transform239);

CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet243 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet243->setVertexCount(new int[1]{2});
CCoordinate* Coordinate244 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate244->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet243->setCoord(*Coordinate244);

//from l_knee to l_talocrural vertices 2
CColorRGBA* ColorRGBA245 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA245->setUSE("HAnimSegmentLineColorRGBA");
LineSet243->setColor(*ColorRGBA245);

Shape242->setGeometry(LineSet243);

HAnimSegment238->addChildren(*Shape242);

CHAnimSite* HAnimSite246 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite246->setName("l_calcaneus_posterior");
HAnimSite246->setDEF("hanim_l_calcaneus_posterior");
HAnimSite246->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor247 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor247->setDescription("HAnimSite l_calcaneus_posterior");
HAnimSite246->addChildren(*TouchSensor247);

CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("HAnimSiteShape");
HAnimSite246->addChildren(*Shape248);

HAnimSegment238->addChildren(*HAnimSite246);

CHAnimSite* HAnimSite249 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite249->setName("l_sphyrion");
HAnimSite249->setDEF("hanim_l_sphyrion");
HAnimSite249->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor250 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor250->setDescription("HAnimSite l_sphyrion");
HAnimSite249->addChildren(*TouchSensor250);

CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("HAnimSiteShape");
HAnimSite249->addChildren(*Shape251);

HAnimSegment238->addChildren(*HAnimSite249);

HAnimJoint237->addChildren(*HAnimSegment238);

CHAnimJoint* HAnimJoint252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint252->setName("l_talocrural");
HAnimJoint252->setDEF("hanim_l_talocrural");
HAnimJoint252->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint252->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint252->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment253 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment253->setName("l_talus");
HAnimSegment253->setDEF("hanim_l_talus");
CTransform* Transform254 = (CTransform *)(m_pScene.createNode("Transform"));
Transform254->setScale(new float[3]{0.15,0.15,0.15});
Transform254->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform254->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform left foot
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
Shape256->setUSE("HAnimJointShape");
Transform255->addChild(*Shape256);

Transform254->addChildren(*Transform255);

HAnimSegment253->addChildren(*Transform254);

CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet258 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet258->setVertexCount(new int[1]{2});
CCoordinate* Coordinate259 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate259->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004});
LineSet258->setCoord(*Coordinate259);

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA260 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA260->setUSE("HAnimSegmentLineColorRGBA");
LineSet258->setColor(*ColorRGBA260);

Shape257->setGeometry(LineSet258);

HAnimSegment253->addChildren(*Shape257);

CHAnimSite* HAnimSite261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite261->setName("l_metatarsal_phalanx_1");
HAnimSite261->setDEF("hanim_l_metatarsal_phalanx_1");
CTouchSensor* TouchSensor262 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor262->setDescription("HAnimSite l_metatarsal_phalanx_1");
HAnimSite261->addChildren(*TouchSensor262);

CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
Shape263->setUSE("HAnimSiteShape");
HAnimSite261->addChildren(*Shape263);

HAnimSegment253->addChildren(*HAnimSite261);

CHAnimSite* HAnimSite264 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite264->setName("l_metatarsal_phalanx_5");
HAnimSite264->setDEF("hanim_l_metatarsal_phalanx_5");
CTouchSensor* TouchSensor265 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor265->setDescription("HAnimSite l_metatarsal_phalanx_5");
HAnimSite264->addChildren(*TouchSensor265);

CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
Shape266->setUSE("HAnimSiteShape");
HAnimSite264->addChildren(*Shape266);

HAnimSegment253->addChildren(*HAnimSite264);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite267->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor268 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor268->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite267->addChildren(*TouchSensor268);

CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimSiteShape");
HAnimSite267->addChildren(*Shape269);

HAnimSegment253->addChildren(*HAnimSite267);

CHAnimSite* HAnimSite270 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite270->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite270->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite270->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor271 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor271->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite270->addChildren(*TouchSensor271);

CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
Shape272->setUSE("HAnimSiteShape");
HAnimSite270->addChildren(*Shape272);

HAnimSegment253->addChildren(*HAnimSite270);

CHAnimSite* HAnimSite273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite273->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite273->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor274 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor274->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite273->addChildren(*TouchSensor274);

CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
Shape275->setUSE("HAnimSiteShape");
HAnimSite273->addChildren(*Shape275);

HAnimSegment253->addChildren(*HAnimSite273);

CHAnimSite* HAnimSite276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite276->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite276->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor277 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor277->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite276->addChildren(*TouchSensor277);

CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("HAnimSiteShape");
HAnimSite276->addChildren(*Shape278);

HAnimSegment253->addChildren(*HAnimSite276);

CHAnimSite* HAnimSite279 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite279->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite279->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor280 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor280->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite279->addChildren(*TouchSensor280);

CShape* Shape281 = (CShape *)(m_pScene.createNode("Shape"));
Shape281->setUSE("HAnimSiteShape");
HAnimSite279->addChildren(*Shape281);

HAnimSegment253->addChildren(*HAnimSite279);

HAnimJoint252->addChildren(*HAnimSegment253);

CHAnimJoint* HAnimJoint282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint282->setName("l_metatarsophalangeal_2");
HAnimJoint282->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint282->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint282->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint282->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint252->addChildren(*HAnimJoint282);

HAnimJoint237->addChildren(*HAnimJoint252);

HAnimJoint219->addChildren(*HAnimJoint237);

HAnimJoint182->addChildren(*HAnimJoint219);

CHAnimJoint* HAnimJoint283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint283->setName("r_hip");
HAnimJoint283->setDEF("hanim_r_hip");
HAnimJoint283->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint283->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint283->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment284->setName("r_thigh");
HAnimSegment284->setDEF("hanim_r_thigh");
CTransform* Transform285 = (CTransform *)(m_pScene.createNode("Transform"));
Transform285->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform286 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
Shape287->setUSE("HAnimJointShape");
Transform286->addChild(*Shape287);

Transform285->addChildren(*Transform286);

HAnimSegment284->addChildren(*Transform285);

CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet289 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet289->setVertexCount(new int[1]{2});
CCoordinate* Coordinate290 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate290->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet289->setCoord(*Coordinate290);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA291 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA291->setUSE("HAnimSegmentLineColorRGBA");
LineSet289->setColor(*ColorRGBA291);

Shape288->setGeometry(LineSet289);

HAnimSegment284->addChildren(*Shape288);

CHAnimSite* HAnimSite292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite292->setName("r_lateral_malleolus");
HAnimSite292->setDEF("hanim_r_lateral_malleolus");
HAnimSite292->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor293 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor293->setDescription("HAnimSite r_lateral_malleolus");
HAnimSite292->addChildren(*TouchSensor293);

CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("HAnimSiteShape");
HAnimSite292->addChildren(*Shape294);

HAnimSegment284->addChildren(*HAnimSite292);

CHAnimSite* HAnimSite295 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite295->setName("r_medial_malleolus");
HAnimSite295->setDEF("hanim_r_medial_malleolus");
HAnimSite295->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor296 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor296->setDescription("HAnimSite r_medial_malleolus");
HAnimSite295->addChildren(*TouchSensor296);

CShape* Shape297 = (CShape *)(m_pScene.createNode("Shape"));
Shape297->setUSE("HAnimSiteShape");
HAnimSite295->addChildren(*Shape297);

HAnimSegment284->addChildren(*HAnimSite295);

CHAnimSite* HAnimSite298 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite298->setName("r_tibiale");
HAnimSite298->setDEF("hanim_r_tibiale");
CTouchSensor* TouchSensor299 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor299->setDescription("HAnimSite r_tibiale");
HAnimSite298->addChildren(*TouchSensor299);

CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
Shape300->setUSE("HAnimSiteShape");
HAnimSite298->addChildren(*Shape300);

HAnimSegment284->addChildren(*HAnimSite298);

HAnimJoint283->addChildren(*HAnimSegment284);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setName("r_knee");
HAnimJoint301->setDEF("hanim_r_knee");
HAnimJoint301->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint301->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint301->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setName("r_calf");
HAnimSegment302->setDEF("hanim_r_calf");
CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
Shape305->setUSE("HAnimJointShape");
Transform304->addChild(*Shape305);

Transform303->addChildren(*Transform304);

HAnimSegment302->addChildren(*Transform303);

CShape* Shape306 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet307 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet307->setVertexCount(new int[1]{2});
CCoordinate* Coordinate308 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate308->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet307->setCoord(*Coordinate308);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA309 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA309->setUSE("HAnimSegmentLineColorRGBA");
LineSet307->setColor(*ColorRGBA309);

Shape306->setGeometry(LineSet307);

HAnimSegment302->addChildren(*Shape306);

CHAnimSite* HAnimSite310 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite310->setName("r_calcaneus_posterior");
HAnimSite310->setDEF("hanim_r_calcaneus_posterior");
HAnimSite310->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor311 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor311->setDescription("HAnimSite r_calcaneus_posterior");
HAnimSite310->addChildren(*TouchSensor311);

CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
Shape312->setUSE("HAnimSiteShape");
HAnimSite310->addChildren(*Shape312);

HAnimSegment302->addChildren(*HAnimSite310);

CHAnimSite* HAnimSite313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite313->setName("r_sphyrion");
HAnimSite313->setDEF("hanim_r_sphyrion");
HAnimSite313->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor314 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor314->setDescription("HAnimSite r_sphyrion");
HAnimSite313->addChildren(*TouchSensor314);

CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
Shape315->setUSE("HAnimSiteShape");
HAnimSite313->addChildren(*Shape315);

HAnimSegment302->addChildren(*HAnimSite313);

HAnimJoint301->addChildren(*HAnimSegment302);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setName("r_talocrural");
HAnimJoint316->setDEF("hanim_r_talocrural");
HAnimJoint316->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint316->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint316->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setName("r_talus");
HAnimSegment317->setDEF("hanim_r_talus");
CTransform* Transform318 = (CTransform *)(m_pScene.createNode("Transform"));
Transform318->setScale(new float[3]{0.15,0.15,0.15});
Transform318->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform318->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform319 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
Shape320->setUSE("HAnimJointShape");
Transform319->addChild(*Shape320);

Transform318->addChildren(*Transform319);

HAnimSegment317->addChildren(*Transform318);

CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet322 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet322->setVertexCount(new int[1]{2});
CCoordinate* Coordinate323 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate323->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004});
LineSet322->setCoord(*Coordinate323);

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA324 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA324->setUSE("HAnimSegmentLineColorRGBA");
LineSet322->setColor(*ColorRGBA324);

Shape321->setGeometry(LineSet322);

HAnimSegment317->addChildren(*Shape321);

CHAnimSite* HAnimSite325 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite325->setName("r_metatarsal_phalanx_1");
HAnimSite325->setDEF("hanim_r_metatarsal_phalanx_1");
CTouchSensor* TouchSensor326 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor326->setDescription("HAnimSite r_metatarsal_phalanx_1");
HAnimSite325->addChildren(*TouchSensor326);

CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
Shape327->setUSE("HAnimSiteShape");
HAnimSite325->addChildren(*Shape327);

HAnimSegment317->addChildren(*HAnimSite325);

CHAnimSite* HAnimSite328 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite328->setName("r_metatarsal_phalanx_5");
HAnimSite328->setDEF("hanim_r_metatarsal_phalanx_5");
CTouchSensor* TouchSensor329 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor329->setDescription("HAnimSite r_metatarsal_phalanx_5");
HAnimSite328->addChildren(*TouchSensor329);

CShape* Shape330 = (CShape *)(m_pScene.createNode("Shape"));
Shape330->setUSE("HAnimSiteShape");
HAnimSite328->addChildren(*Shape330);

HAnimSegment317->addChildren(*HAnimSite328);

CHAnimSite* HAnimSite331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite331->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite331->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor332 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor332->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite331->addChildren(*TouchSensor332);

CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
Shape333->setUSE("HAnimSiteShape");
HAnimSite331->addChildren(*Shape333);

HAnimSegment317->addChildren(*HAnimSite331);

CHAnimSite* HAnimSite334 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite334->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite334->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite334->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor335 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor335->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite334->addChildren(*TouchSensor335);

CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
Shape336->setUSE("HAnimSiteShape");
HAnimSite334->addChildren(*Shape336);

HAnimSegment317->addChildren(*HAnimSite334);

CHAnimSite* HAnimSite337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite337->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite337->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor338 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor338->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite337->addChildren(*TouchSensor338);

CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("HAnimSiteShape");
HAnimSite337->addChildren(*Shape339);

HAnimSegment317->addChildren(*HAnimSite337);

CHAnimSite* HAnimSite340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite340->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite340->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor341 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor341->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite340->addChildren(*TouchSensor341);

CShape* Shape342 = (CShape *)(m_pScene.createNode("Shape"));
Shape342->setUSE("HAnimSiteShape");
HAnimSite340->addChildren(*Shape342);

HAnimSegment317->addChildren(*HAnimSite340);

CHAnimSite* HAnimSite343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite343->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite343->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor344 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor344->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite343->addChildren(*TouchSensor344);

CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("HAnimSiteShape");
HAnimSite343->addChildren(*Shape345);

HAnimSegment317->addChildren(*HAnimSite343);

HAnimJoint316->addChildren(*HAnimSegment317);

CHAnimJoint* HAnimJoint346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint346->setName("r_metatarsophalangeal_2");
HAnimJoint346->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint346->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint346->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint346->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint316->addChildren(*HAnimJoint346);

HAnimJoint301->addChildren(*HAnimJoint316);

HAnimJoint283->addChildren(*HAnimJoint301);

HAnimJoint182->addChildren(*HAnimJoint283);

HAnimJoint52->addChildren(*HAnimJoint182);

CHAnimJoint* HAnimJoint347 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint347->setName("vl5");
HAnimJoint347->setDEF("hanim_vl5");
HAnimJoint347->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint347->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint347->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment348 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment348->setName("l5");
HAnimSegment348->setDEF("hanim_l5");
CTransform* Transform349 = (CTransform *)(m_pScene.createNode("Transform"));
Transform349->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform350 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape351 = (CShape *)(m_pScene.createNode("Shape"));
Shape351->setUSE("HAnimJointShape");
Transform350->addChild(*Shape351);

Transform349->addChildren(*Transform350);

HAnimSegment348->addChildren(*Transform349);

CShape* Shape352 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet353 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet353->setVertexCount(new int[1]{2});
CCoordinate* Coordinate354 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate354->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236});
LineSet353->setCoord(*Coordinate354);

//from vl5 to skullbase vertices 2
CColorRGBA* ColorRGBA355 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA355->setUSE("HAnimSegmentLineColorRGBA");
LineSet353->setColor(*ColorRGBA355);

Shape352->setGeometry(LineSet353);

HAnimSegment348->addChildren(*Shape352);

CHAnimSite* HAnimSite356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite356->setName("glabella");
HAnimSite356->setDEF("hanim_glabella");
CTouchSensor* TouchSensor357 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor357->setDescription("HAnimSite glabella");
HAnimSite356->addChildren(*TouchSensor357);

CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
Shape358->setUSE("HAnimSiteShape");
HAnimSite356->addChildren(*Shape358);

HAnimSegment348->addChildren(*HAnimSite356);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setName("l_ectocanthus");
HAnimSite359->setDEF("hanim_l_ectocanthus");
CTouchSensor* TouchSensor360 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor360->setDescription("HAnimSite l_ectocanthus");
HAnimSite359->addChildren(*TouchSensor360);

CShape* Shape361 = (CShape *)(m_pScene.createNode("Shape"));
Shape361->setUSE("HAnimSiteShape");
HAnimSite359->addChildren(*Shape361);

HAnimSegment348->addChildren(*HAnimSite359);

CHAnimSite* HAnimSite362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite362->setName("l_gonion");
HAnimSite362->setDEF("hanim_l_gonion");
HAnimSite362->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor363 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor363->setDescription("HAnimSite l_gonion");
HAnimSite362->addChildren(*TouchSensor363);

CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
Shape364->setUSE("HAnimSiteShape");
HAnimSite362->addChildren(*Shape364);

HAnimSegment348->addChildren(*HAnimSite362);

CHAnimSite* HAnimSite365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite365->setName("l_infraorbitale");
HAnimSite365->setDEF("hanim_l_infraorbitale");
HAnimSite365->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor366 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor366->setDescription("HAnimSite l_infraorbitale");
HAnimSite365->addChildren(*TouchSensor366);

CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
Shape367->setUSE("HAnimSiteShape");
HAnimSite365->addChildren(*Shape367);

HAnimSegment348->addChildren(*HAnimSite365);

CHAnimSite* HAnimSite368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite368->setName("l_tragion");
HAnimSite368->setDEF("hanim_l_tragion");
HAnimSite368->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor369->setDescription("HAnimSite l_tragion");
HAnimSite368->addChildren(*TouchSensor369);

CShape* Shape370 = (CShape *)(m_pScene.createNode("Shape"));
Shape370->setUSE("HAnimSiteShape");
HAnimSite368->addChildren(*Shape370);

HAnimSegment348->addChildren(*HAnimSite368);

CHAnimSite* HAnimSite371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite371->setName("menton");
HAnimSite371->setDEF("hanim_menton");
CTouchSensor* TouchSensor372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor372->setDescription("HAnimSite menton");
HAnimSite371->addChildren(*TouchSensor372);

CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
Shape373->setUSE("HAnimSiteShape");
HAnimSite371->addChildren(*Shape373);

HAnimSegment348->addChildren(*HAnimSite371);

CHAnimSite* HAnimSite374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite374->setName("nuchale");
HAnimSite374->setDEF("hanim_nuchale");
HAnimSite374->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor375 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor375->setDescription("HAnimSite nuchale");
HAnimSite374->addChildren(*TouchSensor375);

CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
Shape376->setUSE("HAnimSiteShape");
HAnimSite374->addChildren(*Shape376);

HAnimSegment348->addChildren(*HAnimSite374);

CHAnimSite* HAnimSite377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite377->setName("opisthocranion");
HAnimSite377->setDEF("hanim_opisthocranion");
CTouchSensor* TouchSensor378 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor378->setDescription("HAnimSite opisthocranion");
HAnimSite377->addChildren(*TouchSensor378);

CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
Shape379->setUSE("HAnimSiteShape");
HAnimSite377->addChildren(*Shape379);

HAnimSegment348->addChildren(*HAnimSite377);

CHAnimSite* HAnimSite380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite380->setName("r_ectocanthus");
HAnimSite380->setDEF("hanim_r_ectocanthus");
CTouchSensor* TouchSensor381 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor381->setDescription("HAnimSite r_ectocanthus");
HAnimSite380->addChildren(*TouchSensor381);

CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
Shape382->setUSE("HAnimSiteShape");
HAnimSite380->addChildren(*Shape382);

HAnimSegment348->addChildren(*HAnimSite380);

CHAnimSite* HAnimSite383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite383->setName("r_gonion");
HAnimSite383->setDEF("hanim_r_gonion");
HAnimSite383->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor384 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor384->setDescription("HAnimSite r_gonion");
HAnimSite383->addChildren(*TouchSensor384);

CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
Shape385->setUSE("HAnimSiteShape");
HAnimSite383->addChildren(*Shape385);

HAnimSegment348->addChildren(*HAnimSite383);

CHAnimSite* HAnimSite386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite386->setName("r_infraorbitale");
HAnimSite386->setDEF("hanim_r_infraorbitale");
HAnimSite386->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor387->setDescription("HAnimSite r_infraorbitale");
HAnimSite386->addChildren(*TouchSensor387);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
Shape388->setUSE("HAnimSiteShape");
HAnimSite386->addChildren(*Shape388);

HAnimSegment348->addChildren(*HAnimSite386);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setName("r_tragion");
HAnimSite389->setDEF("hanim_r_tragion");
HAnimSite389->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor390->setDescription("HAnimSite r_tragion");
HAnimSite389->addChildren(*TouchSensor390);

CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
Shape391->setUSE("HAnimSiteShape");
HAnimSite389->addChildren(*Shape391);

HAnimSegment348->addChildren(*HAnimSite389);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setName("sellion");
HAnimSite392->setDEF("hanim_sellion");
HAnimSite392->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor393->setDescription("HAnimSite sellion");
HAnimSite392->addChildren(*TouchSensor393);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(*Shape394);

HAnimSegment348->addChildren(*HAnimSite392);

CHAnimSite* HAnimSite395 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite395->setName("skull_vertex");
HAnimSite395->setDEF("hanim_skull_vertex");
CTouchSensor* TouchSensor396 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor396->setDescription("HAnimSite skull_vertex");
HAnimSite395->addChildren(*TouchSensor396);

CShape* Shape397 = (CShape *)(m_pScene.createNode("Shape"));
Shape397->setUSE("HAnimSiteShape");
HAnimSite395->addChildren(*Shape397);

HAnimSegment348->addChildren(*HAnimSite395);

CHAnimSite* HAnimSite398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite398->setName("supramenton");
HAnimSite398->setDEF("hanim_supramenton");
HAnimSite398->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor399 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor399->setDescription("HAnimSite supramenton");
HAnimSite398->addChildren(*TouchSensor399);

CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("HAnimSiteShape");
HAnimSite398->addChildren(*Shape400);

HAnimSegment348->addChildren(*HAnimSite398);

CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet402 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet402->setVertexCount(new int[1]{2});
CCoordinate* Coordinate403 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate403->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387});
LineSet402->setCoord(*Coordinate403);

//from vl5 to l_shoulder vertices 2
CColorRGBA* ColorRGBA404 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA404->setUSE("HAnimSegmentLineColorRGBA");
LineSet402->setColor(*ColorRGBA404);

Shape401->setGeometry(LineSet402);

HAnimSegment348->addChildren(*Shape401);

CHAnimSite* HAnimSite405 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite405->setName("l_bideltoid");
HAnimSite405->setDEF("hanim_l_bideltoid");
CTouchSensor* TouchSensor406 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor406->setDescription("HAnimSite l_bideltoid");
HAnimSite405->addChildren(*TouchSensor406);

CShape* Shape407 = (CShape *)(m_pScene.createNode("Shape"));
Shape407->setUSE("HAnimSiteShape");
HAnimSite405->addChildren(*Shape407);

HAnimSegment348->addChildren(*HAnimSite405);

CHAnimSite* HAnimSite408 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite408->setName("l_humeral_lateral_epicondyles");
HAnimSite408->setDEF("hanim_l_humeral_lateral_epicondyles");
HAnimSite408->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor409 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor409->setDescription("HAnimSite l_humeral_lateral_epicondyles");
HAnimSite408->addChildren(*TouchSensor409);

CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
Shape410->setUSE("HAnimSiteShape");
HAnimSite408->addChildren(*Shape410);

HAnimSegment348->addChildren(*HAnimSite408);

CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet412 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet412->setVertexCount(new int[1]{2});
CCoordinate* Coordinate413 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate413->setPoint(new float[6]{0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325});
LineSet412->setCoord(*Coordinate413);

//from vl5 to r_shoulder vertices 2
CColorRGBA* ColorRGBA414 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA414->setUSE("HAnimSegmentLineColorRGBA");
LineSet412->setColor(*ColorRGBA414);

Shape411->setGeometry(LineSet412);

HAnimSegment348->addChildren(*Shape411);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setName("r_bideltoid");
HAnimSite415->setDEF("hanim_r_bideltoid");
CTouchSensor* TouchSensor416 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor416->setDescription("HAnimSite r_bideltoid");
HAnimSite415->addChildren(*TouchSensor416);

CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
Shape417->setUSE("HAnimSiteShape");
HAnimSite415->addChildren(*Shape417);

HAnimSegment348->addChildren(*HAnimSite415);

CHAnimSite* HAnimSite418 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite418->setName("r_humeral_lateral_epicondyles");
HAnimSite418->setDEF("hanim_r_humeral_lateral_epicondyles");
HAnimSite418->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor419 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor419->setDescription("HAnimSite r_humeral_lateral_epicondyles");
HAnimSite418->addChildren(*TouchSensor419);

CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
Shape420->setUSE("HAnimSiteShape");
HAnimSite418->addChildren(*Shape420);

HAnimSegment348->addChildren(*HAnimSite418);

HAnimJoint347->addChildren(*HAnimSegment348);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setName("skullbase");
HAnimJoint421->setDEF("hanim_skullbase");
HAnimJoint421->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint421->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint421->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint347->addChildren(*HAnimJoint421);

CHAnimJoint* HAnimJoint422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint422->setName("l_shoulder");
HAnimJoint422->setDEF("hanim_l_shoulder");
HAnimJoint422->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint422->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint422->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment423 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment423->setName("l_upperarm");
HAnimSegment423->setDEF("hanim_l_upperarm");
CTransform* Transform424 = (CTransform *)(m_pScene.createNode("Transform"));
Transform424->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform425 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape426 = (CShape *)(m_pScene.createNode("Shape"));
Shape426->setUSE("HAnimJointShape");
Transform425->addChild(*Shape426);

Transform424->addChildren(*Transform425);

HAnimSegment423->addChildren(*Transform424);

CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet428 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet428->setVertexCount(new int[1]{2});
CCoordinate* Coordinate429 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate429->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet428->setCoord(*Coordinate429);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA430 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA430->setUSE("HAnimSegmentLineColorRGBA");
LineSet428->setColor(*ColorRGBA430);

Shape427->setGeometry(LineSet428);

HAnimSegment423->addChildren(*Shape427);

CHAnimSite* HAnimSite431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite431->setName("l_humeral_medial_epicondyles");
HAnimSite431->setDEF("hanim_l_humeral_medial_epicondyles");
HAnimSite431->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor432 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor432->setDescription("HAnimSite l_humeral_medial_epicondyles");
HAnimSite431->addChildren(*TouchSensor432);

CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
Shape433->setUSE("HAnimSiteShape");
HAnimSite431->addChildren(*Shape433);

HAnimSegment423->addChildren(*HAnimSite431);

CHAnimSite* HAnimSite434 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite434->setName("l_olecranon");
HAnimSite434->setDEF("hanim_l_olecranon");
HAnimSite434->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor435 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor435->setDescription("HAnimSite l_olecranon");
HAnimSite434->addChildren(*TouchSensor435);

CShape* Shape436 = (CShape *)(m_pScene.createNode("Shape"));
Shape436->setUSE("HAnimSiteShape");
HAnimSite434->addChildren(*Shape436);

HAnimSegment423->addChildren(*HAnimSite434);

CHAnimSite* HAnimSite437 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite437->setName("l_radial_styloid");
HAnimSite437->setDEF("hanim_l_radial_styloid");
HAnimSite437->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor438->setDescription("HAnimSite l_radial_styloid");
HAnimSite437->addChildren(*TouchSensor438);

CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
Shape439->setUSE("HAnimSiteShape");
HAnimSite437->addChildren(*Shape439);

HAnimSegment423->addChildren(*HAnimSite437);

CHAnimSite* HAnimSite440 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite440->setName("l_radiale");
HAnimSite440->setDEF("hanim_l_radiale");
HAnimSite440->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor441 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor441->setDescription("HAnimSite l_radiale");
HAnimSite440->addChildren(*TouchSensor441);

CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("HAnimSiteShape");
HAnimSite440->addChildren(*Shape442);

HAnimSegment423->addChildren(*HAnimSite440);

HAnimJoint422->addChildren(*HAnimSegment423);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setName("l_elbow");
HAnimJoint443->setDEF("hanim_l_elbow");
HAnimJoint443->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint443->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint443->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment444->setName("l_forearm");
HAnimSegment444->setDEF("hanim_l_forearm");
CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
Transform445->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
Shape447->setUSE("HAnimJointShape");
Transform446->addChild(*Shape447);

Transform445->addChildren(*Transform446);

HAnimSegment444->addChildren(*Transform445);

CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet449 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet449->setVertexCount(new int[1]{2});
CCoordinate* Coordinate450 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate450->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet449->setCoord(*Coordinate450);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA451 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA451->setUSE("HAnimSegmentLineColorRGBA");
LineSet449->setColor(*ColorRGBA451);

Shape448->setGeometry(LineSet449);

HAnimSegment444->addChildren(*Shape448);

CHAnimSite* HAnimSite452 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite452->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite452->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor453 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor453->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite452->addChildren(*TouchSensor453);

CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
Shape454->setUSE("HAnimSiteShape");
HAnimSite452->addChildren(*Shape454);

HAnimSegment444->addChildren(*HAnimSite452);

CHAnimSite* HAnimSite455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite455->setName("l_dactylion");
HAnimSite455->setDEF("hanim_l_dactylion");
HAnimSite455->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor456 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor456->setDescription("HAnimSite l_dactylion");
HAnimSite455->addChildren(*TouchSensor456);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
Shape457->setUSE("HAnimSiteShape");
HAnimSite455->addChildren(*Shape457);

HAnimSegment444->addChildren(*HAnimSite455);

CHAnimSite* HAnimSite458 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite458->setName("l_metacarpal_phalanx_2");
HAnimSite458->setDEF("hanim_l_metacarpal_phalanx_2");
HAnimSite458->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor459 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor459->setDescription("HAnimSite l_metacarpal_phalanx_2");
HAnimSite458->addChildren(*TouchSensor459);

CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
Shape460->setUSE("HAnimSiteShape");
HAnimSite458->addChildren(*Shape460);

HAnimSegment444->addChildren(*HAnimSite458);

CHAnimSite* HAnimSite461 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite461->setName("l_metacarpal_phalanx_3");
HAnimSite461->setDEF("hanim_l_metacarpal_phalanx_3");
CTouchSensor* TouchSensor462 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor462->setDescription("HAnimSite l_metacarpal_phalanx_3");
HAnimSite461->addChildren(*TouchSensor462);

CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
Shape463->setUSE("HAnimSiteShape");
HAnimSite461->addChildren(*Shape463);

HAnimSegment444->addChildren(*HAnimSite461);

CHAnimSite* HAnimSite464 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite464->setName("l_metacarpal_phalanx_5");
HAnimSite464->setDEF("hanim_l_metacarpal_phalanx_5");
HAnimSite464->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor465 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor465->setDescription("HAnimSite l_metacarpal_phalanx_5");
HAnimSite464->addChildren(*TouchSensor465);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
Shape466->setUSE("HAnimSiteShape");
HAnimSite464->addChildren(*Shape466);

HAnimSegment444->addChildren(*HAnimSite464);

CHAnimSite* HAnimSite467 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite467->setName("l_ulnar_styloid");
HAnimSite467->setDEF("hanim_l_ulnar_styloid");
HAnimSite467->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor468 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor468->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite467->addChildren(*TouchSensor468);

CShape* Shape469 = (CShape *)(m_pScene.createNode("Shape"));
Shape469->setUSE("HAnimSiteShape");
HAnimSite467->addChildren(*Shape469);

HAnimSegment444->addChildren(*HAnimSite467);

HAnimJoint443->addChildren(*HAnimSegment444);

CHAnimJoint* HAnimJoint470 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint470->setName("l_radiocarpal");
HAnimJoint470->setDEF("hanim_l_radiocarpal");
HAnimJoint470->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint470->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint470->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint443->addChildren(*HAnimJoint470);

HAnimJoint422->addChildren(*HAnimJoint443);

HAnimJoint347->addChildren(*HAnimJoint422);

CHAnimJoint* HAnimJoint471 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint471->setName("r_shoulder");
HAnimJoint471->setDEF("hanim_r_shoulder");
HAnimJoint471->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint471->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint471->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment472->setName("r_upperarm");
HAnimSegment472->setDEF("hanim_r_upperarm");
CTransform* Transform473 = (CTransform *)(m_pScene.createNode("Transform"));
Transform473->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform474 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
Shape475->setUSE("HAnimJointShape");
Transform474->addChild(*Shape475);

Transform473->addChildren(*Transform474);

HAnimSegment472->addChildren(*Transform473);

CShape* Shape476 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet477 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet477->setVertexCount(new int[1]{2});
CCoordinate* Coordinate478 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate478->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet477->setCoord(*Coordinate478);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA479 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA479->setUSE("HAnimSegmentLineColorRGBA");
LineSet477->setColor(*ColorRGBA479);

Shape476->setGeometry(LineSet477);

HAnimSegment472->addChildren(*Shape476);

CHAnimSite* HAnimSite480 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite480->setName("r_humeral_medial_epicondyles");
HAnimSite480->setDEF("hanim_r_humeral_medial_epicondyles");
HAnimSite480->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor481 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor481->setDescription("HAnimSite r_humeral_medial_epicondyles");
HAnimSite480->addChildren(*TouchSensor481);

CShape* Shape482 = (CShape *)(m_pScene.createNode("Shape"));
Shape482->setUSE("HAnimSiteShape");
HAnimSite480->addChildren(*Shape482);

HAnimSegment472->addChildren(*HAnimSite480);

CHAnimSite* HAnimSite483 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite483->setName("r_olecranon");
HAnimSite483->setDEF("hanim_r_olecranon");
HAnimSite483->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor484->setDescription("HAnimSite r_olecranon");
HAnimSite483->addChildren(*TouchSensor484);

CShape* Shape485 = (CShape *)(m_pScene.createNode("Shape"));
Shape485->setUSE("HAnimSiteShape");
HAnimSite483->addChildren(*Shape485);

HAnimSegment472->addChildren(*HAnimSite483);

CHAnimSite* HAnimSite486 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite486->setName("r_radial_styloid");
HAnimSite486->setDEF("hanim_r_radial_styloid");
HAnimSite486->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor487 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor487->setDescription("HAnimSite r_radial_styloid");
HAnimSite486->addChildren(*TouchSensor487);

CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
Shape488->setUSE("HAnimSiteShape");
HAnimSite486->addChildren(*Shape488);

HAnimSegment472->addChildren(*HAnimSite486);

CHAnimSite* HAnimSite489 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite489->setName("r_radiale");
HAnimSite489->setDEF("hanim_r_radiale");
HAnimSite489->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor490 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor490->setDescription("HAnimSite r_radiale");
HAnimSite489->addChildren(*TouchSensor490);

CShape* Shape491 = (CShape *)(m_pScene.createNode("Shape"));
Shape491->setUSE("HAnimSiteShape");
HAnimSite489->addChildren(*Shape491);

HAnimSegment472->addChildren(*HAnimSite489);

HAnimJoint471->addChildren(*HAnimSegment472);

CHAnimJoint* HAnimJoint492 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint492->setName("r_elbow");
HAnimJoint492->setDEF("hanim_r_elbow");
HAnimJoint492->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint492->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint492->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment493->setName("r_forearm");
HAnimSegment493->setDEF("hanim_r_forearm");
CTransform* Transform494 = (CTransform *)(m_pScene.createNode("Transform"));
Transform494->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform495 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape496 = (CShape *)(m_pScene.createNode("Shape"));
Shape496->setUSE("HAnimJointShape");
Transform495->addChild(*Shape496);

Transform494->addChildren(*Transform495);

HAnimSegment493->addChildren(*Transform494);

CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet498 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet498->setVertexCount(new int[1]{2});
CCoordinate* Coordinate499 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate499->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet498->setCoord(*Coordinate499);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA500 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA500->setUSE("HAnimSegmentLineColorRGBA");
LineSet498->setColor(*ColorRGBA500);

Shape497->setGeometry(LineSet498);

HAnimSegment493->addChildren(*Shape497);

CHAnimSite* HAnimSite501 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite501->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite501->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor502 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor502->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite501->addChildren(*TouchSensor502);

CShape* Shape503 = (CShape *)(m_pScene.createNode("Shape"));
Shape503->setUSE("HAnimSiteShape");
HAnimSite501->addChildren(*Shape503);

HAnimSegment493->addChildren(*HAnimSite501);

CHAnimSite* HAnimSite504 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite504->setName("r_dactylion");
HAnimSite504->setDEF("hanim_r_dactylion");
HAnimSite504->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor505 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor505->setDescription("HAnimSite r_dactylion");
HAnimSite504->addChildren(*TouchSensor505);

CShape* Shape506 = (CShape *)(m_pScene.createNode("Shape"));
Shape506->setUSE("HAnimSiteShape");
HAnimSite504->addChildren(*Shape506);

HAnimSegment493->addChildren(*HAnimSite504);

CHAnimSite* HAnimSite507 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite507->setName("r_metacarpal_phalanx_2");
HAnimSite507->setDEF("hanim_r_metacarpal_phalanx_2");
HAnimSite507->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor508 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor508->setDescription("HAnimSite r_metacarpal_phalanx_2");
HAnimSite507->addChildren(*TouchSensor508);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
Shape509->setUSE("HAnimSiteShape");
HAnimSite507->addChildren(*Shape509);

HAnimSegment493->addChildren(*HAnimSite507);

CHAnimSite* HAnimSite510 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite510->setName("r_metacarpal_phalanx_3");
HAnimSite510->setDEF("hanim_r_metacarpal_phalanx_3");
CTouchSensor* TouchSensor511 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor511->setDescription("HAnimSite r_metacarpal_phalanx_3");
HAnimSite510->addChildren(*TouchSensor511);

CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
Shape512->setUSE("HAnimSiteShape");
HAnimSite510->addChildren(*Shape512);

HAnimSegment493->addChildren(*HAnimSite510);

CHAnimSite* HAnimSite513 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite513->setName("r_metacarpal_phalanx_5");
HAnimSite513->setDEF("hanim_r_metacarpal_phalanx_5");
HAnimSite513->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor514 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor514->setDescription("HAnimSite r_metacarpal_phalanx_5");
HAnimSite513->addChildren(*TouchSensor514);

CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("HAnimSiteShape");
HAnimSite513->addChildren(*Shape515);

HAnimSegment493->addChildren(*HAnimSite513);

CHAnimSite* HAnimSite516 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite516->setName("r_ulnar_styloid");
HAnimSite516->setDEF("hanim_r_ulnar_styloid");
HAnimSite516->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor517 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor517->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite516->addChildren(*TouchSensor517);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("HAnimSiteShape");
HAnimSite516->addChildren(*Shape518);

HAnimSegment493->addChildren(*HAnimSite516);

HAnimJoint492->addChildren(*HAnimSegment493);

CHAnimJoint* HAnimJoint519 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint519->setName("r_radiocarpal");
HAnimJoint519->setDEF("hanim_r_radiocarpal");
HAnimJoint519->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint519->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint519->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint492->addChildren(*HAnimJoint519);

HAnimJoint471->addChildren(*HAnimJoint492);

HAnimJoint347->addChildren(*HAnimJoint471);

HAnimJoint52->addChildren(*HAnimJoint347);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint520 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint520->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint520);

CHAnimJoint* HAnimJoint521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint521->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint521);

CHAnimJoint* HAnimJoint522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint522->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint522);

CHAnimJoint* HAnimJoint523 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint523->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint523);

CHAnimJoint* HAnimJoint524 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint524->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint524);

CHAnimJoint* HAnimJoint525 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint525->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint525);

CHAnimJoint* HAnimJoint526 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint526->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint526);

CHAnimJoint* HAnimJoint527 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint527->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint527);

CHAnimJoint* HAnimJoint528 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint528->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint528);

CHAnimJoint* HAnimJoint529 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint529->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint529);

CHAnimJoint* HAnimJoint530 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint530->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint530);

CHAnimJoint* HAnimJoint531 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint531->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint531);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint532);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint533);

CHAnimJoint* HAnimJoint534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint534->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint534);

CHAnimJoint* HAnimJoint535 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint535->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint535);

CHAnimJoint* HAnimJoint536 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint536->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint536);

CHAnimJoint* HAnimJoint537 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint537->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint537);

CHAnimSegment* HAnimSegment538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment538->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment538);

CHAnimSegment* HAnimSegment539 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment539->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment539);

CHAnimSegment* HAnimSegment540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment540->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment540);

CHAnimSegment* HAnimSegment541 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment541->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment541);

CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment542);

CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment543);

CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment544);

CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment545);

CHAnimSegment* HAnimSegment546 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment546->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment546);

CHAnimSegment* HAnimSegment547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment547->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment547);

CHAnimSegment* HAnimSegment548 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment548->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment548);

CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment549);

CHAnimSegment* HAnimSegment550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment550->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment550);

CHAnimSite* HAnimSite551 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite551->setUSE("hanim_buttocks_standing_wall_contact_point");
HAnimHumanoid43->setSites(*HAnimSite551);

CHAnimSite* HAnimSite552 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite552->setUSE("hanim_crotch");
HAnimHumanoid43->setSites(*HAnimSite552);

CHAnimSite* HAnimSite553 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite553->setUSE("hanim_l_asis");
HAnimHumanoid43->setSites(*HAnimSite553);

CHAnimSite* HAnimSite554 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite554->setUSE("hanim_l_iliocristale");
HAnimHumanoid43->setSites(*HAnimSite554);

CHAnimSite* HAnimSite555 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite555->setUSE("hanim_l_psis");
HAnimHumanoid43->setSites(*HAnimSite555);

CHAnimSite* HAnimSite556 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite556->setUSE("hanim_l_trochanterion");
HAnimHumanoid43->setSites(*HAnimSite556);

CHAnimSite* HAnimSite557 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite557->setUSE("hanim_r_asis");
HAnimHumanoid43->setSites(*HAnimSite557);

CHAnimSite* HAnimSite558 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite558->setUSE("hanim_r_iliocristale");
HAnimHumanoid43->setSites(*HAnimSite558);

CHAnimSite* HAnimSite559 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite559->setUSE("hanim_r_psis");
HAnimHumanoid43->setSites(*HAnimSite559);

CHAnimSite* HAnimSite560 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite560->setUSE("hanim_r_trochanterion");
HAnimHumanoid43->setSites(*HAnimSite560);

CHAnimSite* HAnimSite561 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite561->setUSE("hanim_adams_apple");
HAnimHumanoid43->setSites(*HAnimSite561);

CHAnimSite* HAnimSite562 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite562->setUSE("hanim_cervicale");
HAnimHumanoid43->setSites(*HAnimSite562);

CHAnimSite* HAnimSite563 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite563->setUSE("hanim_l_acromion");
HAnimHumanoid43->setSites(*HAnimSite563);

CHAnimSite* HAnimSite564 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite564->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite564);

CHAnimSite* HAnimSite565 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite565->setUSE("hanim_l_axilla_posterior_folds");
HAnimHumanoid43->setSites(*HAnimSite565);

CHAnimSite* HAnimSite566 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite566->setUSE("hanim_l_axilla_proximal");
HAnimHumanoid43->setSites(*HAnimSite566);

CHAnimSite* HAnimSite567 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite567->setUSE("hanim_l_chest_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite567);

CHAnimSite* HAnimSite568 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite568->setUSE("hanim_l_clavicale");
HAnimHumanoid43->setSites(*HAnimSite568);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setUSE("hanim_l_neck_base");
HAnimHumanoid43->setSites(*HAnimSite569);

CHAnimSite* HAnimSite570 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite570->setUSE("hanim_l_rib10");
HAnimHumanoid43->setSites(*HAnimSite570);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setUSE("hanim_l_thelion");
HAnimHumanoid43->setSites(*HAnimSite571);

CHAnimSite* HAnimSite572 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite572->setUSE("hanim_mesosternale");
HAnimHumanoid43->setSites(*HAnimSite572);

CHAnimSite* HAnimSite573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite573->setUSE("hanim_navel");
HAnimHumanoid43->setSites(*HAnimSite573);

CHAnimSite* HAnimSite574 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite574->setUSE("hanim_r_acromion");
HAnimHumanoid43->setSites(*HAnimSite574);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite575);

CHAnimSite* HAnimSite576 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite576->setUSE("hanim_r_axilla_posterior_folds");
HAnimHumanoid43->setSites(*HAnimSite576);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setUSE("hanim_r_axilla_proximal");
HAnimHumanoid43->setSites(*HAnimSite577);

CHAnimSite* HAnimSite578 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite578->setUSE("hanim_r_chest_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite578);

CHAnimSite* HAnimSite579 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite579->setUSE("hanim_r_clavicale");
HAnimHumanoid43->setSites(*HAnimSite579);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setUSE("hanim_r_neck_base");
HAnimHumanoid43->setSites(*HAnimSite580);

CHAnimSite* HAnimSite581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite581->setUSE("hanim_r_rib10");
HAnimHumanoid43->setSites(*HAnimSite581);

CHAnimSite* HAnimSite582 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite582->setUSE("hanim_r_thelion");
HAnimHumanoid43->setSites(*HAnimSite582);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setUSE("hanim_rear_center_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite583);

CHAnimSite* HAnimSite584 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite584->setUSE("hanim_spine_1_middle_back");
HAnimHumanoid43->setSites(*HAnimSite584);

CHAnimSite* HAnimSite585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite585->setUSE("hanim_spine_2_middle_back");
HAnimHumanoid43->setSites(*HAnimSite585);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setUSE("hanim_substernale");
HAnimHumanoid43->setSites(*HAnimSite586);

CHAnimSite* HAnimSite587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite587->setUSE("hanim_suprasternale");
HAnimHumanoid43->setSites(*HAnimSite587);

CHAnimSite* HAnimSite588 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite588->setUSE("hanim_waist_preferred_anterior");
HAnimHumanoid43->setSites(*HAnimSite588);

CHAnimSite* HAnimSite589 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite589->setUSE("hanim_waist_preferred_posterior");
HAnimHumanoid43->setSites(*HAnimSite589);

CHAnimSite* HAnimSite590 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite590->setUSE("hanim_l_femoral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite590);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setUSE("hanim_l_femoral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite591);

CHAnimSite* HAnimSite592 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite592->setUSE("hanim_l_knee_crease");
HAnimHumanoid43->setSites(*HAnimSite592);

CHAnimSite* HAnimSite593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite593->setUSE("hanim_l_suprapatella");
HAnimHumanoid43->setSites(*HAnimSite593);

CHAnimSite* HAnimSite594 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite594->setUSE("hanim_r_femoral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite594);

CHAnimSite* HAnimSite595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite595->setUSE("hanim_r_femoral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite595);

CHAnimSite* HAnimSite596 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite596->setUSE("hanim_r_knee_crease");
HAnimHumanoid43->setSites(*HAnimSite596);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setUSE("hanim_r_suprapatella");
HAnimHumanoid43->setSites(*HAnimSite597);

CHAnimSite* HAnimSite598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite598->setUSE("hanim_l_lateral_malleolus");
HAnimHumanoid43->setSites(*HAnimSite598);

CHAnimSite* HAnimSite599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite599->setUSE("hanim_l_medial_malleolus");
HAnimHumanoid43->setSites(*HAnimSite599);

CHAnimSite* HAnimSite600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite600->setUSE("hanim_l_tibiale");
HAnimHumanoid43->setSites(*HAnimSite600);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setUSE("hanim_l_calcaneus_posterior");
HAnimHumanoid43->setSites(*HAnimSite601);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setUSE("hanim_l_sphyrion");
HAnimHumanoid43->setSites(*HAnimSite602);

CHAnimSite* HAnimSite603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite603->setUSE("hanim_l_metatarsal_phalanx_1");
HAnimHumanoid43->setSites(*HAnimSite603);

CHAnimSite* HAnimSite604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite604->setUSE("hanim_l_metatarsal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite604);

CHAnimSite* HAnimSite605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite605->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite605);

CHAnimSite* HAnimSite606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite606->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite606);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite607);

CHAnimSite* HAnimSite608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite608->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite608);

CHAnimSite* HAnimSite609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite609->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite609);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setUSE("hanim_r_lateral_malleolus");
HAnimHumanoid43->setSites(*HAnimSite610);

CHAnimSite* HAnimSite611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite611->setUSE("hanim_r_medial_malleolus");
HAnimHumanoid43->setSites(*HAnimSite611);

CHAnimSite* HAnimSite612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite612->setUSE("hanim_r_tibiale");
HAnimHumanoid43->setSites(*HAnimSite612);

CHAnimSite* HAnimSite613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite613->setUSE("hanim_r_calcaneus_posterior");
HAnimHumanoid43->setSites(*HAnimSite613);

CHAnimSite* HAnimSite614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite614->setUSE("hanim_r_sphyrion");
HAnimHumanoid43->setSites(*HAnimSite614);

CHAnimSite* HAnimSite615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite615->setUSE("hanim_r_metatarsal_phalanx_1");
HAnimHumanoid43->setSites(*HAnimSite615);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setUSE("hanim_r_metatarsal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite616);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite617);

CHAnimSite* HAnimSite618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite618->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite618);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite619);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite620);

CHAnimSite* HAnimSite621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite621->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite621);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setUSE("hanim_glabella");
HAnimHumanoid43->setSites(*HAnimSite622);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setUSE("hanim_l_ectocanthus");
HAnimHumanoid43->setSites(*HAnimSite623);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setUSE("hanim_l_gonion");
HAnimHumanoid43->setSites(*HAnimSite624);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setUSE("hanim_l_infraorbitale");
HAnimHumanoid43->setSites(*HAnimSite625);

CHAnimSite* HAnimSite626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite626->setUSE("hanim_l_tragion");
HAnimHumanoid43->setSites(*HAnimSite626);

CHAnimSite* HAnimSite627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite627->setUSE("hanim_menton");
HAnimHumanoid43->setSites(*HAnimSite627);

CHAnimSite* HAnimSite628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite628->setUSE("hanim_nuchale");
HAnimHumanoid43->setSites(*HAnimSite628);

CHAnimSite* HAnimSite629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite629->setUSE("hanim_opisthocranion");
HAnimHumanoid43->setSites(*HAnimSite629);

CHAnimSite* HAnimSite630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite630->setUSE("hanim_r_ectocanthus");
HAnimHumanoid43->setSites(*HAnimSite630);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setUSE("hanim_r_gonion");
HAnimHumanoid43->setSites(*HAnimSite631);

CHAnimSite* HAnimSite632 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite632->setUSE("hanim_r_infraorbitale");
HAnimHumanoid43->setSites(*HAnimSite632);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setUSE("hanim_r_tragion");
HAnimHumanoid43->setSites(*HAnimSite633);

CHAnimSite* HAnimSite634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite634->setUSE("hanim_sellion");
HAnimHumanoid43->setSites(*HAnimSite634);

CHAnimSite* HAnimSite635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite635->setUSE("hanim_skull_vertex");
HAnimHumanoid43->setSites(*HAnimSite635);

CHAnimSite* HAnimSite636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite636->setUSE("hanim_supramenton");
HAnimHumanoid43->setSites(*HAnimSite636);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setUSE("hanim_l_bideltoid");
HAnimHumanoid43->setSites(*HAnimSite637);

CHAnimSite* HAnimSite638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite638->setUSE("hanim_l_humeral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite638);

CHAnimSite* HAnimSite639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite639->setUSE("hanim_r_bideltoid");
HAnimHumanoid43->setSites(*HAnimSite639);

CHAnimSite* HAnimSite640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite640->setUSE("hanim_r_humeral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite640);

CHAnimSite* HAnimSite641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite641->setUSE("hanim_l_humeral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite641);

CHAnimSite* HAnimSite642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite642->setUSE("hanim_l_olecranon");
HAnimHumanoid43->setSites(*HAnimSite642);

CHAnimSite* HAnimSite643 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite643->setUSE("hanim_l_radial_styloid");
HAnimHumanoid43->setSites(*HAnimSite643);

CHAnimSite* HAnimSite644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite644->setUSE("hanim_l_radiale");
HAnimHumanoid43->setSites(*HAnimSite644);

CHAnimSite* HAnimSite645 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite645->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite645);

CHAnimSite* HAnimSite646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite646->setUSE("hanim_l_dactylion");
HAnimHumanoid43->setSites(*HAnimSite646);

CHAnimSite* HAnimSite647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite647->setUSE("hanim_l_metacarpal_phalanx_2");
HAnimHumanoid43->setSites(*HAnimSite647);

CHAnimSite* HAnimSite648 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite648->setUSE("hanim_l_metacarpal_phalanx_3");
HAnimHumanoid43->setSites(*HAnimSite648);

CHAnimSite* HAnimSite649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite649->setUSE("hanim_l_metacarpal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite649);

CHAnimSite* HAnimSite650 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite650->setUSE("hanim_l_ulnar_styloid");
HAnimHumanoid43->setSites(*HAnimSite650);

CHAnimSite* HAnimSite651 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite651->setUSE("hanim_r_humeral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite651);

CHAnimSite* HAnimSite652 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite652->setUSE("hanim_r_olecranon");
HAnimHumanoid43->setSites(*HAnimSite652);

CHAnimSite* HAnimSite653 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite653->setUSE("hanim_r_radial_styloid");
HAnimHumanoid43->setSites(*HAnimSite653);

CHAnimSite* HAnimSite654 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite654->setUSE("hanim_r_radiale");
HAnimHumanoid43->setSites(*HAnimSite654);

CHAnimSite* HAnimSite655 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite655->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite655);

CHAnimSite* HAnimSite656 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite656->setUSE("hanim_r_dactylion");
HAnimHumanoid43->setSites(*HAnimSite656);

CHAnimSite* HAnimSite657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite657->setUSE("hanim_r_metacarpal_phalanx_2");
HAnimHumanoid43->setSites(*HAnimSite657);

CHAnimSite* HAnimSite658 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite658->setUSE("hanim_r_metacarpal_phalanx_3");
HAnimHumanoid43->setSites(*HAnimSite658);

CHAnimSite* HAnimSite659 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite659->setUSE("hanim_r_metacarpal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite659);

CHAnimSite* HAnimSite660 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite660->setUSE("hanim_r_ulnar_styloid");
HAnimHumanoid43->setSites(*HAnimSite660);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
