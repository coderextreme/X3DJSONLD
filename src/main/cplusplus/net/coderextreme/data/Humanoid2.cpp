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
meta3->setContent("Humanoid2.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d");
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
HAnimSite61->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite61->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
CTouchSensor* TouchSensor62 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor62->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite61->addChildren(*TouchSensor62);

CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
Shape63->setUSE("HAnimSiteShape");
HAnimSite61->addChildren(*Shape63);

HAnimSegment53->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite64 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite64->setName("crotch_pt");
HAnimSite64->setDEF("hanim_crotch_pt");
HAnimSite64->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor65 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor65->setDescription("HAnimSite crotch_pt");
HAnimSite64->addChildren(*TouchSensor65);

CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("HAnimSiteShape");
HAnimSite64->addChildren(*Shape66);

HAnimSegment53->addChildren(*HAnimSite64);

CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_asis_pt");
HAnimSite67->setDEF("hanim_l_asis_pt");
HAnimSite67->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor68 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor68->setDescription("HAnimSite l_asis_pt");
HAnimSite67->addChildren(*TouchSensor68);

CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
Shape69->setUSE("HAnimSiteShape");
HAnimSite67->addChildren(*Shape69);

HAnimSegment53->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite70 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite70->setName("l_iliocristale_pt");
HAnimSite70->setDEF("hanim_l_iliocristale_pt");
HAnimSite70->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor71 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor71->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite70->addChildren(*TouchSensor71);

CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("HAnimSiteShape");
HAnimSite70->addChildren(*Shape72);

HAnimSegment53->addChildren(*HAnimSite70);

CHAnimSite* HAnimSite73 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite73->setName("l_psis_pt");
HAnimSite73->setDEF("hanim_l_psis_pt");
HAnimSite73->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor74 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor74->setDescription("HAnimSite l_psis_pt");
HAnimSite73->addChildren(*TouchSensor74);

CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
Shape75->setUSE("HAnimSiteShape");
HAnimSite73->addChildren(*Shape75);

HAnimSegment53->addChildren(*HAnimSite73);

CHAnimSite* HAnimSite76 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite76->setName("l_trochanterion_pt");
HAnimSite76->setDEF("hanim_l_trochanterion_pt");
HAnimSite76->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor77 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor77->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite76->addChildren(*TouchSensor77);

CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("HAnimSiteShape");
HAnimSite76->addChildren(*Shape78);

HAnimSegment53->addChildren(*HAnimSite76);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setName("r_asis_pt");
HAnimSite79->setDEF("hanim_r_asis_pt");
HAnimSite79->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor80 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor80->setDescription("HAnimSite r_asis_pt");
HAnimSite79->addChildren(*TouchSensor80);

CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("HAnimSiteShape");
HAnimSite79->addChildren(*Shape81);

HAnimSegment53->addChildren(*HAnimSite79);

CHAnimSite* HAnimSite82 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite82->setName("r_iliocristale_pt");
HAnimSite82->setDEF("hanim_r_iliocristale_pt");
HAnimSite82->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor83 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor83->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite82->addChildren(*TouchSensor83);

CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
Shape84->setUSE("HAnimSiteShape");
HAnimSite82->addChildren(*Shape84);

HAnimSegment53->addChildren(*HAnimSite82);

CHAnimSite* HAnimSite85 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite85->setName("r_psis_pt");
HAnimSite85->setDEF("hanim_r_psis_pt");
HAnimSite85->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor86 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor86->setDescription("HAnimSite r_psis_pt");
HAnimSite85->addChildren(*TouchSensor86);

CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
Shape87->setUSE("HAnimSiteShape");
HAnimSite85->addChildren(*Shape87);

HAnimSegment53->addChildren(*HAnimSite85);

CHAnimSite* HAnimSite88 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite88->setName("r_trochanterion_pt");
HAnimSite88->setDEF("hanim_r_trochanterion_pt");
HAnimSite88->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor89 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor89->setDescription("HAnimSite r_trochanterion_pt");
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
HAnimSite95->setName("navel_pt");
HAnimSite95->setDEF("hanim_navel_pt");
HAnimSite95->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor96 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor96->setDescription("HAnimSite navel_pt");
HAnimSite95->addChildren(*TouchSensor96);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("HAnimSiteShape");
HAnimSite95->addChildren(*Shape97);

HAnimSegment53->addChildren(*HAnimSite95);

CHAnimSite* HAnimSite98 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite98->setName("waist_preferred_anterior_pt");
HAnimSite98->setDEF("hanim_waist_preferred_anterior_pt");
CTouchSensor* TouchSensor99 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor99->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite98->addChildren(*TouchSensor99);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("HAnimSiteShape");
HAnimSite98->addChildren(*Shape100);

HAnimSegment53->addChildren(*HAnimSite98);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("waist_preferred_posterior_pt");
HAnimSite101->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite101->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor102->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite101->addChildren(*TouchSensor102);

CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
Shape103->setUSE("HAnimSiteShape");
HAnimSite101->addChildren(*Shape103);

HAnimSegment53->addChildren(*HAnimSite101);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setName("sacroiliac");
HAnimJoint104->setDEF("hanim_sacroiliac");
HAnimJoint104->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment105->setName("pelvis");
HAnimSegment105->setDEF("hanim_pelvis");
CTransform* Transform106 = (CTransform *)(m_pScene.createNode("Transform"));
Transform106->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
Shape108->setUSE("HAnimJointShape");
Transform107->addChild(*Shape108);

Transform106->addChildren(*Transform107);

HAnimSegment105->addChildren(*Transform106);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet110 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet110->setVertexCount(new int[1]{2});
CCoordinate* Coordinate111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate111->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet110->setCoord(*Coordinate111);

//from sacroiliac to l_hip vertices 2
CColorRGBA* ColorRGBA112 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA112->setUSE("HAnimSegmentLineColorRGBA");
LineSet110->setColor(*ColorRGBA112);

Shape109->setGeometry(LineSet110);

HAnimSegment105->addChildren(*Shape109);

CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite113->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite113->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor114 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor114->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite113->addChildren(*TouchSensor114);

CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("HAnimSiteShape");
HAnimSite113->addChildren(*Shape115);

HAnimSegment105->addChildren(*HAnimSite113);

CHAnimSite* HAnimSite116 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite116->setName("l_femoral_medial_epicondyles_pt");
HAnimSite116->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite116->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor117 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor117->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite116->addChildren(*TouchSensor117);

CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
Shape118->setUSE("HAnimSiteShape");
HAnimSite116->addChildren(*Shape118);

HAnimSegment105->addChildren(*HAnimSite116);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("l_knee_crease_pt");
HAnimSite119->setDEF("hanim_l_knee_crease_pt");
HAnimSite119->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor120 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor120->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite119->addChildren(*TouchSensor120);

CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("HAnimSiteShape");
HAnimSite119->addChildren(*Shape121);

HAnimSegment105->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("l_suprapatella_pt");
HAnimSite122->setDEF("hanim_l_suprapatella_pt");
CTouchSensor* TouchSensor123 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor123->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite122->addChildren(*TouchSensor123);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("HAnimSiteShape");
HAnimSite122->addChildren(*Shape124);

HAnimSegment105->addChildren(*HAnimSite122);

CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet126 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet126->setVertexCount(new int[1]{2});
CCoordinate* Coordinate127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate127->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet126->setCoord(*Coordinate127);

//from sacroiliac to r_hip vertices 2
CColorRGBA* ColorRGBA128 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA128->setUSE("HAnimSegmentLineColorRGBA");
LineSet126->setColor(*ColorRGBA128);

Shape125->setGeometry(LineSet126);

HAnimSegment105->addChildren(*Shape125);

CHAnimSite* HAnimSite129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite129->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite129->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite129->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor130 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor130->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite129->addChildren(*TouchSensor130);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("HAnimSiteShape");
HAnimSite129->addChildren(*Shape131);

HAnimSegment105->addChildren(*HAnimSite129);

CHAnimSite* HAnimSite132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite132->setName("r_femoral_medial_epicondyles_pt");
HAnimSite132->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite132->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor133 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor133->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite132->addChildren(*TouchSensor133);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setUSE("HAnimSiteShape");
HAnimSite132->addChildren(*Shape134);

HAnimSegment105->addChildren(*HAnimSite132);

CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("r_knee_crease_pt");
HAnimSite135->setDEF("hanim_r_knee_crease_pt");
HAnimSite135->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor136 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor136->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite135->addChildren(*TouchSensor136);

CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("HAnimSiteShape");
HAnimSite135->addChildren(*Shape137);

HAnimSegment105->addChildren(*HAnimSite135);

CHAnimSite* HAnimSite138 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite138->setName("r_suprapatella_pt");
HAnimSite138->setDEF("hanim_r_suprapatella_pt");
CTouchSensor* TouchSensor139 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor139->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite138->addChildren(*TouchSensor139);

CShape* Shape140 = (CShape *)(m_pScene.createNode("Shape"));
Shape140->setUSE("HAnimSiteShape");
HAnimSite138->addChildren(*Shape140);

HAnimSegment105->addChildren(*HAnimSite138);

HAnimJoint104->addChildren(*HAnimSegment105);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("l_hip");
HAnimJoint141->setDEF("hanim_l_hip");
HAnimJoint141->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("l_thigh");
HAnimSegment142->setDEF("hanim_l_thigh");
CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CTransform* Transform144 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("HAnimJointShape");
Transform144->addChild(*Shape145);

Transform143->addChildren(*Transform144);

HAnimSegment142->addChildren(*Transform143);

CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet147 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet147->setVertexCount(new int[1]{2});
CCoordinate* Coordinate148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate148->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet147->setCoord(*Coordinate148);

//from l_hip to l_knee vertices 2
CColorRGBA* ColorRGBA149 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA149->setUSE("HAnimSegmentLineColorRGBA");
LineSet147->setColor(*ColorRGBA149);

Shape146->setGeometry(LineSet147);

HAnimSegment142->addChildren(*Shape146);

CHAnimSite* HAnimSite150 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite150->setName("l_lateral_malleolus_pt");
HAnimSite150->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite150->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor151 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor151->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite150->addChildren(*TouchSensor151);

CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
Shape152->setUSE("HAnimSiteShape");
HAnimSite150->addChildren(*Shape152);

HAnimSegment142->addChildren(*HAnimSite150);

CHAnimSite* HAnimSite153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite153->setName("l_medial_malleolus_pt");
HAnimSite153->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite153->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor154 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor154->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite153->addChildren(*TouchSensor154);

CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
Shape155->setUSE("HAnimSiteShape");
HAnimSite153->addChildren(*Shape155);

HAnimSegment142->addChildren(*HAnimSite153);

CHAnimSite* HAnimSite156 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite156->setName("l_tibiale_pt");
HAnimSite156->setDEF("hanim_l_tibiale_pt");
CTouchSensor* TouchSensor157 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor157->setDescription("HAnimSite l_tibiale_pt");
HAnimSite156->addChildren(*TouchSensor157);

CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
Shape158->setUSE("HAnimSiteShape");
HAnimSite156->addChildren(*Shape158);

HAnimSegment142->addChildren(*HAnimSite156);

HAnimJoint141->addChildren(*HAnimSegment142);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setName("l_knee");
HAnimJoint159->setDEF("hanim_l_knee");
HAnimJoint159->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint159->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint159->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment160->setName("l_calf");
HAnimSegment160->setDEF("hanim_l_calf");
CTransform* Transform161 = (CTransform *)(m_pScene.createNode("Transform"));
Transform161->setTranslation(new float[3]{0.104,0.4867,0.0308});
CTransform* Transform162 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
Shape163->setUSE("HAnimJointShape");
Transform162->addChild(*Shape163);

Transform161->addChildren(*Transform162);

HAnimSegment160->addChildren(*Transform161);

CShape* Shape164 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet165 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet165->setVertexCount(new int[1]{2});
CCoordinate* Coordinate166 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate166->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet165->setCoord(*Coordinate166);

//from l_knee to l_talocrural vertices 2
CColorRGBA* ColorRGBA167 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA167->setUSE("HAnimSegmentLineColorRGBA");
LineSet165->setColor(*ColorRGBA167);

Shape164->setGeometry(LineSet165);

HAnimSegment160->addChildren(*Shape164);

CHAnimSite* HAnimSite168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite168->setName("l_calcaneus_posterior_pt");
HAnimSite168->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite168->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor169 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor169->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite168->addChildren(*TouchSensor169);

CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
Shape170->setUSE("HAnimSiteShape");
HAnimSite168->addChildren(*Shape170);

HAnimSegment160->addChildren(*HAnimSite168);

CHAnimSite* HAnimSite171 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite171->setName("l_sphyrion_pt");
HAnimSite171->setDEF("hanim_l_sphyrion_pt");
HAnimSite171->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor172 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor172->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite171->addChildren(*TouchSensor172);

CShape* Shape173 = (CShape *)(m_pScene.createNode("Shape"));
Shape173->setUSE("HAnimSiteShape");
HAnimSite171->addChildren(*Shape173);

HAnimSegment160->addChildren(*HAnimSite171);

HAnimJoint159->addChildren(*HAnimSegment160);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setName("l_talocrural");
HAnimJoint174->setDEF("hanim_l_talocrural");
HAnimJoint174->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint174->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint174->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment175 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment175->setName("l_talus");
HAnimSegment175->setDEF("hanim_l_talus");
CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setScale(new float[3]{0.15,0.15,0.15});
Transform176->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform176->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
CTransform* Transform177 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform left foot
CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
Shape178->setUSE("HAnimJointShape");
Transform177->addChild(*Shape178);

Transform176->addChildren(*Transform177);

HAnimSegment175->addChildren(*Transform176);

CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet180 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet180->setVertexCount(new int[1]{2});
CCoordinate* Coordinate181 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate181->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608});
LineSet180->setCoord(*Coordinate181);

//from l_talocrural to l_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA182 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA182->setUSE("HAnimSegmentLineColorRGBA");
LineSet180->setColor(*ColorRGBA182);

Shape179->setGeometry(LineSet180);

HAnimSegment175->addChildren(*Shape179);

HAnimJoint174->addChildren(*HAnimSegment175);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setName("l_tarsometatarsal_2");
HAnimJoint183->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint183->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setName("l_metatarsal_2");
HAnimSegment184->setDEF("hanim_l_metatarsal_2");
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{0.08,0.0175,-0.0608});
CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
Shape187->setUSE("HAnimJointShape");
Transform186->addChild(*Shape187);

Transform185->addChildren(*Transform186);

HAnimSegment184->addChildren(*Transform185);

CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet189 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet189->setVertexCount(new int[1]{2});
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004});
LineSet189->setCoord(*Coordinate190);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA191 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA191->setUSE("HAnimSegmentLineColorRGBA");
LineSet189->setColor(*ColorRGBA191);

Shape188->setGeometry(LineSet189);

HAnimSegment184->addChildren(*Shape188);

HAnimJoint183->addChildren(*HAnimSegment184);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setName("l_metatarsophalangeal_2");
HAnimJoint192->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint192->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint192->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint192->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment193 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment193->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment193->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform194->setTranslation(new float[3]{0.0824,0.0064,-0.004});
CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
Shape196->setUSE("HAnimJointShape");
Transform195->addChild(*Shape196);

Transform194->addChildren(*Transform195);

HAnimSegment193->addChildren(*Transform194);

CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet198 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet198->setVertexCount(new int[1]{2});
CCoordinate* Coordinate199 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate199->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0013,0.0216});
LineSet198->setCoord(*Coordinate199);

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA200 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA200->setUSE("HAnimSegmentLineColorRGBA");
LineSet198->setColor(*ColorRGBA200);

Shape197->setGeometry(LineSet198);

HAnimSegment193->addChildren(*Shape197);

CHAnimSite* HAnimSite201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite201->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite201->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite201->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor202 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor202->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite201->addChildren(*TouchSensor202);

CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
Shape203->setUSE("HAnimSiteShape");
HAnimSite201->addChildren(*Shape203);

HAnimSegment193->addChildren(*HAnimSite201);

HAnimJoint192->addChildren(*HAnimSegment193);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint204->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint204->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint204->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint204->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint192->addChildren(*HAnimJoint204);

HAnimJoint183->addChildren(*HAnimJoint192);

HAnimJoint174->addChildren(*HAnimJoint183);

HAnimJoint159->addChildren(*HAnimJoint174);

HAnimJoint141->addChildren(*HAnimJoint159);

HAnimJoint104->addChildren(*HAnimJoint141);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setName("r_hip");
HAnimJoint205->setDEF("hanim_r_hip");
HAnimJoint205->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint205->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint205->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment206->setName("r_thigh");
HAnimSegment206->setDEF("hanim_r_thigh");
CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
Transform207->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("HAnimJointShape");
Transform208->addChild(*Shape209);

Transform207->addChildren(*Transform208);

HAnimSegment206->addChildren(*Transform207);

CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet211 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet211->setVertexCount(new int[1]{2});
CCoordinate* Coordinate212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate212->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet211->setCoord(*Coordinate212);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA213 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA213->setUSE("HAnimSegmentLineColorRGBA");
LineSet211->setColor(*ColorRGBA213);

Shape210->setGeometry(LineSet211);

HAnimSegment206->addChildren(*Shape210);

CHAnimSite* HAnimSite214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite214->setName("r_lateral_malleolus_pt");
HAnimSite214->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite214->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor215 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor215->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite214->addChildren(*TouchSensor215);

CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("HAnimSiteShape");
HAnimSite214->addChildren(*Shape216);

HAnimSegment206->addChildren(*HAnimSite214);

CHAnimSite* HAnimSite217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite217->setName("r_medial_malleolus_pt");
HAnimSite217->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite217->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor218 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor218->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite217->addChildren(*TouchSensor218);

CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
Shape219->setUSE("HAnimSiteShape");
HAnimSite217->addChildren(*Shape219);

HAnimSegment206->addChildren(*HAnimSite217);

CHAnimSite* HAnimSite220 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite220->setName("r_tibiale_pt");
HAnimSite220->setDEF("hanim_r_tibiale_pt");
CTouchSensor* TouchSensor221 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor221->setDescription("HAnimSite r_tibiale_pt");
HAnimSite220->addChildren(*TouchSensor221);

CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("HAnimSiteShape");
HAnimSite220->addChildren(*Shape222);

HAnimSegment206->addChildren(*HAnimSite220);

HAnimJoint205->addChildren(*HAnimSegment206);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setName("r_knee");
HAnimJoint223->setDEF("hanim_r_knee");
HAnimJoint223->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint223->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint223->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment224 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment224->setName("r_calf");
HAnimSegment224->setDEF("hanim_r_calf");
CTransform* Transform225 = (CTransform *)(m_pScene.createNode("Transform"));
Transform225->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform226 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape227 = (CShape *)(m_pScene.createNode("Shape"));
Shape227->setUSE("HAnimJointShape");
Transform226->addChild(*Shape227);

Transform225->addChildren(*Transform226);

HAnimSegment224->addChildren(*Transform225);

CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet229 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet229->setVertexCount(new int[1]{2});
CCoordinate* Coordinate230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate230->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet229->setCoord(*Coordinate230);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA231 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA231->setUSE("HAnimSegmentLineColorRGBA");
LineSet229->setColor(*ColorRGBA231);

Shape228->setGeometry(LineSet229);

HAnimSegment224->addChildren(*Shape228);

CHAnimSite* HAnimSite232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite232->setName("r_calcaneus_posterior_pt");
HAnimSite232->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite232->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor233 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor233->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite232->addChildren(*TouchSensor233);

CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
Shape234->setUSE("HAnimSiteShape");
HAnimSite232->addChildren(*Shape234);

HAnimSegment224->addChildren(*HAnimSite232);

CHAnimSite* HAnimSite235 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite235->setName("r_sphyrion_pt");
HAnimSite235->setDEF("hanim_r_sphyrion_pt");
HAnimSite235->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor236 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor236->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite235->addChildren(*TouchSensor236);

CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
Shape237->setUSE("HAnimSiteShape");
HAnimSite235->addChildren(*Shape237);

HAnimSegment224->addChildren(*HAnimSite235);

HAnimJoint223->addChildren(*HAnimSegment224);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setName("r_talocrural");
HAnimJoint238->setDEF("hanim_r_talocrural");
HAnimJoint238->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint238->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint238->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setName("r_talus");
HAnimSegment239->setDEF("hanim_r_talus");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setScale(new float[3]{0.15,0.15,0.15});
Transform240->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform240->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
Shape242->setUSE("HAnimJointShape");
Transform241->addChild(*Shape242);

Transform240->addChildren(*Transform241);

HAnimSegment239->addChildren(*Transform240);

CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet244 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet244->setVertexCount(new int[1]{2});
CCoordinate* Coordinate245 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate245->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608});
LineSet244->setCoord(*Coordinate245);

//from r_talocrural to r_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA246 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA246->setUSE("HAnimSegmentLineColorRGBA");
LineSet244->setColor(*ColorRGBA246);

Shape243->setGeometry(LineSet244);

HAnimSegment239->addChildren(*Shape243);

HAnimJoint238->addChildren(*HAnimSegment239);

CHAnimJoint* HAnimJoint247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint247->setName("r_tarsometatarsal_2");
HAnimJoint247->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint247->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint247->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint247->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setName("r_metatarsal_2");
HAnimSegment248->setDEF("hanim_r_metatarsal_2");
CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("HAnimJointShape");
Transform250->addChild(*Shape251);

Transform249->addChildren(*Transform250);

HAnimSegment248->addChildren(*Transform249);

CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet253->setVertexCount(new int[1]{2});
CCoordinate* Coordinate254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate254->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004});
LineSet253->setCoord(*Coordinate254);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA255->setUSE("HAnimSegmentLineColorRGBA");
LineSet253->setColor(*ColorRGBA255);

Shape252->setGeometry(LineSet253);

HAnimSegment248->addChildren(*Shape252);

HAnimJoint247->addChildren(*HAnimSegment248);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setName("r_metatarsophalangeal_2");
HAnimJoint256->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint256->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment257->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment257->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape260 = (CShape *)(m_pScene.createNode("Shape"));
Shape260->setUSE("HAnimJointShape");
Transform259->addChild(*Shape260);

Transform258->addChildren(*Transform259);

HAnimSegment257->addChildren(*Transform258);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet262 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet262->setVertexCount(new int[1]{2});
CCoordinate* Coordinate263 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate263->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216});
LineSet262->setCoord(*Coordinate263);

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA264 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA264->setUSE("HAnimSegmentLineColorRGBA");
LineSet262->setColor(*ColorRGBA264);

Shape261->setGeometry(LineSet262);

HAnimSegment257->addChildren(*Shape261);

CHAnimSite* HAnimSite265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite265->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite265->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite265->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor266 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor266->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite265->addChildren(*TouchSensor266);

CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
Shape267->setUSE("HAnimSiteShape");
HAnimSite265->addChildren(*Shape267);

HAnimSegment257->addChildren(*HAnimSite265);

HAnimJoint256->addChildren(*HAnimSegment257);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint268->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint268->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint268->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->addChildren(*HAnimJoint268);

HAnimJoint247->addChildren(*HAnimJoint256);

HAnimJoint238->addChildren(*HAnimJoint247);

HAnimJoint223->addChildren(*HAnimJoint238);

HAnimJoint205->addChildren(*HAnimJoint223);

HAnimJoint104->addChildren(*HAnimJoint205);

HAnimJoint52->addChildren(*HAnimJoint104);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setName("vl5");
HAnimJoint269->setDEF("hanim_vl5");
HAnimJoint269->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint269->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint269->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setName("l5");
HAnimSegment270->setDEF("hanim_l5");
CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
Shape273->setUSE("HAnimJointShape");
Transform272->addChild(*Shape273);

Transform271->addChildren(*Transform272);

HAnimSegment270->addChildren(*Transform271);

CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet275 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet275->setVertexCount(new int[1]{2});
CCoordinate* Coordinate276 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate276->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796});
LineSet275->setCoord(*Coordinate276);

//from vl5 to vl3 vertices 2
CColorRGBA* ColorRGBA277 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA277->setUSE("HAnimSegmentLineColorRGBA");
LineSet275->setColor(*ColorRGBA277);

Shape274->setGeometry(LineSet275);

HAnimSegment270->addChildren(*Shape274);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setName("vl3");
HAnimJoint278->setDEF("hanim_vl3");
HAnimJoint278->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint278->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint278->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setName("l3");
HAnimSegment279->setDEF("hanim_l3");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
Shape282->setUSE("HAnimJointShape");
Transform281->addChild(*Shape282);

Transform280->addChildren(*Transform281);

HAnimSegment279->addChildren(*Transform280);

CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet284 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet284->setVertexCount(new int[1]{2});
CCoordinate* Coordinate285 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate285->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805});
LineSet284->setCoord(*Coordinate285);

//from vl3 to vl1 vertices 2
CColorRGBA* ColorRGBA286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA286->setUSE("HAnimSegmentLineColorRGBA");
LineSet284->setColor(*ColorRGBA286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setName("vl1");
HAnimJoint287->setDEF("hanim_vl1");
HAnimJoint287->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint287->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint287->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setName("l1");
HAnimSegment288->setDEF("hanim_l1");
CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("HAnimJointShape");
Transform290->addChild(*Shape291);

Transform289->addChildren(*Transform290);

HAnimSegment288->addChildren(*Transform289);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet293 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet293->setVertexCount(new int[1]{2});
CCoordinate* Coordinate294 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate294->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822});
LineSet293->setCoord(*Coordinate294);

//from vl1 to vt10 vertices 2
CColorRGBA* ColorRGBA295 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA295->setUSE("HAnimSegmentLineColorRGBA");
LineSet293->setColor(*ColorRGBA295);

Shape292->setGeometry(LineSet293);

HAnimSegment288->addChildren(*Shape292);

CHAnimSite* HAnimSite296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite296->setName("substernale_pt");
HAnimSite296->setDEF("hanim_substernale_pt");
HAnimSite296->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor297 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor297->setDescription("HAnimSite substernale_pt");
HAnimSite296->addChildren(*TouchSensor297);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("HAnimSiteShape");
HAnimSite296->addChildren(*Shape298);

HAnimSegment288->addChildren(*HAnimSite296);

HAnimJoint287->addChildren(*HAnimSegment288);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setName("vt10");
HAnimJoint299->setDEF("hanim_vt10");
HAnimJoint299->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint299->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint299->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setName("t10");
HAnimSegment300->setDEF("hanim_t10");
CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
Transform301->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform302 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
Shape303->setUSE("HAnimJointShape");
Transform302->addChild(*Shape303);

Transform301->addChildren(*Transform302);

HAnimSegment300->addChildren(*Transform301);

CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet305 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet305->setVertexCount(new int[1]{2});
CCoordinate* Coordinate306 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate306->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08});
LineSet305->setCoord(*Coordinate306);

//from vt10 to vt6 vertices 2
CColorRGBA* ColorRGBA307 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA307->setUSE("HAnimSegmentLineColorRGBA");
LineSet305->setColor(*ColorRGBA307);

Shape304->setGeometry(LineSet305);

HAnimSegment300->addChildren(*Shape304);

CHAnimSite* HAnimSite308 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite308->setName("l_chest_midsagittal_plane_pt");
HAnimSite308->setDEF("hanim_l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor309 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor309->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite308->addChildren(*TouchSensor309);

CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
Shape310->setUSE("HAnimSiteShape");
HAnimSite308->addChildren(*Shape310);

HAnimSegment300->addChildren(*HAnimSite308);

CHAnimSite* HAnimSite311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite311->setName("mesosternale_pt");
HAnimSite311->setDEF("hanim_mesosternale_pt");
CTouchSensor* TouchSensor312 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor312->setDescription("HAnimSite mesosternale_pt");
HAnimSite311->addChildren(*TouchSensor312);

CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("HAnimSiteShape");
HAnimSite311->addChildren(*Shape313);

HAnimSegment300->addChildren(*HAnimSite311);

CHAnimSite* HAnimSite314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite314->setName("r_chest_midsagittal_plane_pt");
HAnimSite314->setDEF("hanim_r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor315 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor315->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite314->addChildren(*TouchSensor315);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
Shape316->setUSE("HAnimSiteShape");
HAnimSite314->addChildren(*Shape316);

HAnimSegment300->addChildren(*HAnimSite314);

CHAnimSite* HAnimSite317 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite317->setName("rear_center_midsagittal_plane_pt");
HAnimSite317->setDEF("hanim_rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor318 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor318->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite317->addChildren(*TouchSensor318);

CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
Shape319->setUSE("HAnimSiteShape");
HAnimSite317->addChildren(*Shape319);

HAnimSegment300->addChildren(*HAnimSite317);

HAnimJoint299->addChildren(*HAnimSegment300);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setName("vt6");
HAnimJoint320->setDEF("hanim_vt6");
HAnimJoint320->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint320->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint320->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setName("t6");
HAnimSegment321->setDEF("hanim_t6");
CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
Transform322->setTranslation(new float[3]{0.0059,1.3866,-0.08});
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
Coordinate327->setPoint(new float[6]{0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387});
LineSet326->setCoord(*Coordinate327);

//from vt6 to vt1 vertices 2
CColorRGBA* ColorRGBA328 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA328->setUSE("HAnimSegmentLineColorRGBA");
LineSet326->setColor(*ColorRGBA328);

Shape325->setGeometry(LineSet326);

HAnimSegment321->addChildren(*Shape325);

CHAnimSite* HAnimSite329 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite329->setName("cervicale_pt");
HAnimSite329->setDEF("hanim_cervicale_pt");
HAnimSite329->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor330 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor330->setDescription("HAnimSite cervicale_pt");
HAnimSite329->addChildren(*TouchSensor330);

CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
Shape331->setUSE("HAnimSiteShape");
HAnimSite329->addChildren(*Shape331);

HAnimSegment321->addChildren(*HAnimSite329);

CHAnimSite* HAnimSite332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite332->setName("suprasternale_pt");
HAnimSite332->setDEF("hanim_suprasternale_pt");
HAnimSite332->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor333 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor333->setDescription("HAnimSite suprasternale_pt");
HAnimSite332->addChildren(*TouchSensor333);

CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
Shape334->setUSE("HAnimSiteShape");
HAnimSite332->addChildren(*Shape334);

HAnimSegment321->addChildren(*HAnimSite332);

HAnimJoint320->addChildren(*HAnimSegment321);

CHAnimJoint* HAnimJoint335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint335->setName("vt1");
HAnimJoint335->setDEF("hanim_vt1");
HAnimJoint335->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint335->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint335->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment336->setName("t1");
HAnimSegment336->setDEF("hanim_t1");
CTransform* Transform337 = (CTransform *)(m_pScene.createNode("Transform"));
Transform337->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform338 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("HAnimJointShape");
Transform338->addChild(*Shape339);

Transform337->addChildren(*Transform338);

HAnimSegment336->addChildren(*Transform337);

CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet341 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet341->setVertexCount(new int[1]{2});
CCoordinate* Coordinate342 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate342->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084});
LineSet341->setCoord(*Coordinate342);

//from vt1 to vc4 vertices 2
CColorRGBA* ColorRGBA343 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA343->setUSE("HAnimSegmentLineColorRGBA");
LineSet341->setColor(*ColorRGBA343);

Shape340->setGeometry(LineSet341);

HAnimSegment336->addChildren(*Shape340);

CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet345 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet345->setVertexCount(new int[1]{2});
CCoordinate* Coordinate346 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate346->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet345->setCoord(*Coordinate346);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA347 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA347->setUSE("HAnimSegmentLineColorRGBA");
LineSet345->setColor(*ColorRGBA347);

Shape344->setGeometry(LineSet345);

HAnimSegment336->addChildren(*Shape344);

CHAnimSite* HAnimSite348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite348->setName("l_acromion_pt");
HAnimSite348->setDEF("hanim_l_acromion_pt");
HAnimSite348->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor349 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor349->setDescription("HAnimSite l_acromion_pt");
HAnimSite348->addChildren(*TouchSensor349);

CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
Shape350->setUSE("HAnimSiteShape");
HAnimSite348->addChildren(*Shape350);

HAnimSegment336->addChildren(*HAnimSite348);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setName("l_axilla_distal_pt");
HAnimSite351->setDEF("hanim_l_axilla_distal_pt");
HAnimSite351->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor352 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor352->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite351->addChildren(*TouchSensor352);

CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("HAnimSiteShape");
HAnimSite351->addChildren(*Shape353);

HAnimSegment336->addChildren(*HAnimSite351);

CHAnimSite* HAnimSite354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite354->setName("l_axilla_posterior_folds_pt");
HAnimSite354->setDEF("hanim_l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor355 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor355->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite354->addChildren(*TouchSensor355);

CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
Shape356->setUSE("HAnimSiteShape");
HAnimSite354->addChildren(*Shape356);

HAnimSegment336->addChildren(*HAnimSite354);

CHAnimSite* HAnimSite357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite357->setName("l_axilla_proximal_pt");
HAnimSite357->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite357->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor358 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor358->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite357->addChildren(*TouchSensor358);

CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
Shape359->setUSE("HAnimSiteShape");
HAnimSite357->addChildren(*Shape359);

HAnimSegment336->addChildren(*HAnimSite357);

CHAnimSite* HAnimSite360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite360->setName("l_clavicale_pt");
HAnimSite360->setDEF("hanim_l_clavicale_pt");
HAnimSite360->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor361 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor361->setDescription("HAnimSite l_clavicale_pt");
HAnimSite360->addChildren(*TouchSensor361);

CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
Shape362->setUSE("HAnimSiteShape");
HAnimSite360->addChildren(*Shape362);

HAnimSegment336->addChildren(*HAnimSite360);

CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet364 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet364->setVertexCount(new int[1]{2});
CCoordinate* Coordinate365 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate365->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet364->setCoord(*Coordinate365);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA366 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA366->setUSE("HAnimSegmentLineColorRGBA");
LineSet364->setColor(*ColorRGBA366);

Shape363->setGeometry(LineSet364);

HAnimSegment336->addChildren(*Shape363);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setName("r_acromion_pt");
HAnimSite367->setDEF("hanim_r_acromion_pt");
HAnimSite367->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor368 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor368->setDescription("HAnimSite r_acromion_pt");
HAnimSite367->addChildren(*TouchSensor368);

CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
Shape369->setUSE("HAnimSiteShape");
HAnimSite367->addChildren(*Shape369);

HAnimSegment336->addChildren(*HAnimSite367);

CHAnimSite* HAnimSite370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite370->setName("r_axilla_distal_pt");
HAnimSite370->setDEF("hanim_r_axilla_distal_pt");
HAnimSite370->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor371 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor371->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite370->addChildren(*TouchSensor371);

CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
Shape372->setUSE("HAnimSiteShape");
HAnimSite370->addChildren(*Shape372);

HAnimSegment336->addChildren(*HAnimSite370);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setName("r_axilla_posterior_folds_pt");
HAnimSite373->setDEF("hanim_r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor374 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor374->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite373->addChildren(*TouchSensor374);

CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
Shape375->setUSE("HAnimSiteShape");
HAnimSite373->addChildren(*Shape375);

HAnimSegment336->addChildren(*HAnimSite373);

CHAnimSite* HAnimSite376 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite376->setName("r_axilla_proximal_pt");
HAnimSite376->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite376->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor377 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor377->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite376->addChildren(*TouchSensor377);

CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
Shape378->setUSE("HAnimSiteShape");
HAnimSite376->addChildren(*Shape378);

HAnimSegment336->addChildren(*HAnimSite376);

CHAnimSite* HAnimSite379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite379->setName("r_clavicale_pt");
HAnimSite379->setDEF("hanim_r_clavicale_pt");
HAnimSite379->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor380 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor380->setDescription("HAnimSite r_clavicale_pt");
HAnimSite379->addChildren(*TouchSensor380);

CShape* Shape381 = (CShape *)(m_pScene.createNode("Shape"));
Shape381->setUSE("HAnimSiteShape");
HAnimSite379->addChildren(*Shape381);

HAnimSegment336->addChildren(*HAnimSite379);

HAnimJoint335->addChildren(*HAnimSegment336);

CHAnimJoint* HAnimJoint382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint382->setName("vc4");
HAnimJoint382->setDEF("hanim_vc4");
HAnimJoint382->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint382->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint382->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment383 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment383->setName("c4");
HAnimSegment383->setDEF("hanim_c4");
CTransform* Transform384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform384->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform385 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape386 = (CShape *)(m_pScene.createNode("Shape"));
Shape386->setUSE("HAnimJointShape");
Transform385->addChild(*Shape386);

Transform384->addChildren(*Transform385);

HAnimSegment383->addChildren(*Transform384);

CShape* Shape387 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet388 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet388->setVertexCount(new int[1]{2});
CCoordinate* Coordinate389 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate389->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103});
LineSet388->setCoord(*Coordinate389);

//from vc4 to vc2 vertices 2
CColorRGBA* ColorRGBA390 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA390->setUSE("HAnimSegmentLineColorRGBA");
LineSet388->setColor(*ColorRGBA390);

Shape387->setGeometry(LineSet388);

HAnimSegment383->addChildren(*Shape387);

CHAnimSite* HAnimSite391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite391->setName("adams_apple_pt");
HAnimSite391->setDEF("hanim_adams_apple_pt");
CTouchSensor* TouchSensor392 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor392->setDescription("HAnimSite adams_apple_pt");
HAnimSite391->addChildren(*TouchSensor392);

CShape* Shape393 = (CShape *)(m_pScene.createNode("Shape"));
Shape393->setUSE("HAnimSiteShape");
HAnimSite391->addChildren(*Shape393);

HAnimSegment383->addChildren(*HAnimSite391);

HAnimJoint382->addChildren(*HAnimSegment383);

CHAnimJoint* HAnimJoint394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint394->setName("vc2");
HAnimJoint394->setDEF("hanim_vc2");
HAnimJoint394->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint394->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint394->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment395 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment395->setName("c2");
HAnimSegment395->setDEF("hanim_c2");
CTransform* Transform396 = (CTransform *)(m_pScene.createNode("Transform"));
Transform396->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
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
Coordinate401->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236});
LineSet400->setCoord(*Coordinate401);

//from vc2 to skullbase vertices 2
CColorRGBA* ColorRGBA402 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA402->setUSE("HAnimSegmentLineColorRGBA");
LineSet400->setColor(*ColorRGBA402);

Shape399->setGeometry(LineSet400);

HAnimSegment395->addChildren(*Shape399);

CHAnimSite* HAnimSite403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite403->setName("glabella_pt");
HAnimSite403->setDEF("hanim_glabella_pt");
CTouchSensor* TouchSensor404 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor404->setDescription("HAnimSite glabella_pt");
HAnimSite403->addChildren(*TouchSensor404);

CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
Shape405->setUSE("HAnimSiteShape");
HAnimSite403->addChildren(*Shape405);

HAnimSegment395->addChildren(*HAnimSite403);

CHAnimSite* HAnimSite406 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite406->setName("l_ectocanthus_pt");
HAnimSite406->setDEF("hanim_l_ectocanthus_pt");
CTouchSensor* TouchSensor407 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor407->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite406->addChildren(*TouchSensor407);

CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setUSE("HAnimSiteShape");
HAnimSite406->addChildren(*Shape408);

HAnimSegment395->addChildren(*HAnimSite406);

CHAnimSite* HAnimSite409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite409->setName("l_infraorbitale_pt");
HAnimSite409->setDEF("hanim_l_infraorbitale_pt");
HAnimSite409->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor410 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor410->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite409->addChildren(*TouchSensor410);

CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
Shape411->setUSE("HAnimSiteShape");
HAnimSite409->addChildren(*Shape411);

HAnimSegment395->addChildren(*HAnimSite409);

CHAnimSite* HAnimSite412 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite412->setName("l_tragion_pt");
HAnimSite412->setDEF("hanim_l_tragion_pt");
HAnimSite412->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor413 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor413->setDescription("HAnimSite l_tragion_pt");
HAnimSite412->addChildren(*TouchSensor413);

CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("HAnimSiteShape");
HAnimSite412->addChildren(*Shape414);

HAnimSegment395->addChildren(*HAnimSite412);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setName("nuchale_pt");
HAnimSite415->setDEF("hanim_nuchale_pt");
HAnimSite415->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor416 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor416->setDescription("HAnimSite nuchale_pt");
HAnimSite415->addChildren(*TouchSensor416);

CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
Shape417->setUSE("HAnimSiteShape");
HAnimSite415->addChildren(*Shape417);

HAnimSegment395->addChildren(*HAnimSite415);

CHAnimSite* HAnimSite418 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite418->setName("opisthocranion_pt");
HAnimSite418->setDEF("hanim_opisthocranion_pt");
CTouchSensor* TouchSensor419 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor419->setDescription("HAnimSite opisthocranion_pt");
HAnimSite418->addChildren(*TouchSensor419);

CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
Shape420->setUSE("HAnimSiteShape");
HAnimSite418->addChildren(*Shape420);

HAnimSegment395->addChildren(*HAnimSite418);

CHAnimSite* HAnimSite421 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite421->setName("r_ectocanthus_pt");
HAnimSite421->setDEF("hanim_r_ectocanthus_pt");
CTouchSensor* TouchSensor422 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor422->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite421->addChildren(*TouchSensor422);

CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
Shape423->setUSE("HAnimSiteShape");
HAnimSite421->addChildren(*Shape423);

HAnimSegment395->addChildren(*HAnimSite421);

CHAnimSite* HAnimSite424 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite424->setName("r_infraorbitale_pt");
HAnimSite424->setDEF("hanim_r_infraorbitale_pt");
HAnimSite424->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor425 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor425->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite424->addChildren(*TouchSensor425);

CShape* Shape426 = (CShape *)(m_pScene.createNode("Shape"));
Shape426->setUSE("HAnimSiteShape");
HAnimSite424->addChildren(*Shape426);

HAnimSegment395->addChildren(*HAnimSite424);

CHAnimSite* HAnimSite427 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite427->setName("r_tragion_pt");
HAnimSite427->setDEF("hanim_r_tragion_pt");
HAnimSite427->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor428 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor428->setDescription("HAnimSite r_tragion_pt");
HAnimSite427->addChildren(*TouchSensor428);

CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
Shape429->setUSE("HAnimSiteShape");
HAnimSite427->addChildren(*Shape429);

HAnimSegment395->addChildren(*HAnimSite427);

CHAnimSite* HAnimSite430 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite430->setName("sellion_pt");
HAnimSite430->setDEF("hanim_sellion_pt");
HAnimSite430->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor431 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor431->setDescription("HAnimSite sellion_pt");
HAnimSite430->addChildren(*TouchSensor431);

CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("HAnimSiteShape");
HAnimSite430->addChildren(*Shape432);

HAnimSegment395->addChildren(*HAnimSite430);

CHAnimSite* HAnimSite433 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite433->setName("skull_vertex_pt");
HAnimSite433->setDEF("hanim_skull_vertex_pt");
HAnimSite433->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor434 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor434->setDescription("HAnimSite skull_vertex_pt");
HAnimSite433->addChildren(*TouchSensor434);

CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
Shape435->setUSE("HAnimSiteShape");
HAnimSite433->addChildren(*Shape435);

HAnimSegment395->addChildren(*HAnimSite433);

HAnimJoint394->addChildren(*HAnimSegment395);

CHAnimJoint* HAnimJoint436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint436->setName("skullbase");
HAnimJoint436->setDEF("hanim_skullbase");
HAnimJoint436->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint436->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint436->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint394->addChildren(*HAnimJoint436);

HAnimJoint382->addChildren(*HAnimJoint394);

HAnimJoint335->addChildren(*HAnimJoint382);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setName("l_sternoclavicular");
HAnimJoint437->setDEF("hanim_l_sternoclavicular");
HAnimJoint437->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint437->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint437->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment438->setName("l_clavicle");
HAnimSegment438->setDEF("hanim_l_clavicle");
CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform440 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setUSE("HAnimJointShape");
Transform440->addChild(*Shape441);

Transform439->addChildren(*Transform440);

HAnimSegment438->addChildren(*Transform439);

CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet443 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet443->setVertexCount(new int[1]{2});
CCoordinate* Coordinate444 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate444->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet443->setCoord(*Coordinate444);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA445 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA445->setUSE("HAnimSegmentLineColorRGBA");
LineSet443->setColor(*ColorRGBA445);

Shape442->setGeometry(LineSet443);

HAnimSegment438->addChildren(*Shape442);

HAnimJoint437->addChildren(*HAnimSegment438);

CHAnimJoint* HAnimJoint446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint446->setName("l_acromioclavicular");
HAnimJoint446->setDEF("hanim_l_acromioclavicular");
HAnimJoint446->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint446->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint446->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment447 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment447->setName("l_scapula");
HAnimSegment447->setDEF("hanim_l_scapula");
CTransform* Transform448 = (CTransform *)(m_pScene.createNode("Transform"));
Transform448->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform449 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape450 = (CShape *)(m_pScene.createNode("Shape"));
Shape450->setUSE("HAnimJointShape");
Transform449->addChild(*Shape450);

Transform448->addChildren(*Transform449);

HAnimSegment447->addChildren(*Transform448);

CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet452 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet452->setVertexCount(new int[1]{2});
CCoordinate* Coordinate453 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate453->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet452->setCoord(*Coordinate453);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA454->setUSE("HAnimSegmentLineColorRGBA");
LineSet452->setColor(*ColorRGBA454);

Shape451->setGeometry(LineSet452);

HAnimSegment447->addChildren(*Shape451);

CHAnimSite* HAnimSite455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite455->setName("l_bideltoid_pt");
HAnimSite455->setDEF("hanim_l_bideltoid_pt");
CTouchSensor* TouchSensor456 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor456->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite455->addChildren(*TouchSensor456);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
Shape457->setUSE("HAnimSiteShape");
HAnimSite455->addChildren(*Shape457);

HAnimSegment447->addChildren(*HAnimSite455);

CHAnimSite* HAnimSite458 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite458->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite458->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite458->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor459 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor459->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite458->addChildren(*TouchSensor459);

CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
Shape460->setUSE("HAnimSiteShape");
HAnimSite458->addChildren(*Shape460);

HAnimSegment447->addChildren(*HAnimSite458);

HAnimJoint446->addChildren(*HAnimSegment447);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setName("l_shoulder");
HAnimJoint461->setDEF("hanim_l_shoulder");
HAnimJoint461->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint461->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint461->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setName("l_upperarm");
HAnimSegment462->setDEF("hanim_l_upperarm");
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform464 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("HAnimJointShape");
Transform464->addChild(*Shape465);

Transform463->addChildren(*Transform464);

HAnimSegment462->addChildren(*Transform463);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet467 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet467->setVertexCount(new int[1]{2});
CCoordinate* Coordinate468 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate468->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet467->setCoord(*Coordinate468);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA469 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA469->setUSE("HAnimSegmentLineColorRGBA");
LineSet467->setColor(*ColorRGBA469);

Shape466->setGeometry(LineSet467);

HAnimSegment462->addChildren(*Shape466);

CHAnimSite* HAnimSite470 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite470->setName("l_humeral_medial_epicondyles_pt");
HAnimSite470->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite470->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor471 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor471->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite470->addChildren(*TouchSensor471);

CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("HAnimSiteShape");
HAnimSite470->addChildren(*Shape472);

HAnimSegment462->addChildren(*HAnimSite470);

CHAnimSite* HAnimSite473 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite473->setName("l_olecranon_pt");
HAnimSite473->setDEF("hanim_l_olecranon_pt");
HAnimSite473->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor474 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor474->setDescription("HAnimSite l_olecranon_pt");
HAnimSite473->addChildren(*TouchSensor474);

CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
Shape475->setUSE("HAnimSiteShape");
HAnimSite473->addChildren(*Shape475);

HAnimSegment462->addChildren(*HAnimSite473);

CHAnimSite* HAnimSite476 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite476->setName("l_radial_styloid_pt");
HAnimSite476->setDEF("hanim_l_radial_styloid_pt");
HAnimSite476->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor477 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor477->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite476->addChildren(*TouchSensor477);

CShape* Shape478 = (CShape *)(m_pScene.createNode("Shape"));
Shape478->setUSE("HAnimSiteShape");
HAnimSite476->addChildren(*Shape478);

HAnimSegment462->addChildren(*HAnimSite476);

CHAnimSite* HAnimSite479 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite479->setName("l_radiale_pt");
HAnimSite479->setDEF("hanim_l_radiale_pt");
HAnimSite479->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor480 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor480->setDescription("HAnimSite l_radiale_pt");
HAnimSite479->addChildren(*TouchSensor480);

CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("HAnimSiteShape");
HAnimSite479->addChildren(*Shape481);

HAnimSegment462->addChildren(*HAnimSite479);

HAnimJoint461->addChildren(*HAnimSegment462);

CHAnimJoint* HAnimJoint482 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint482->setName("l_elbow");
HAnimJoint482->setDEF("hanim_l_elbow");
HAnimJoint482->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint482->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint482->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setName("l_forearm");
HAnimSegment483->setDEF("hanim_l_forearm");
CTransform* Transform484 = (CTransform *)(m_pScene.createNode("Transform"));
Transform484->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform485 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("HAnimJointShape");
Transform485->addChild(*Shape486);

Transform484->addChildren(*Transform485);

HAnimSegment483->addChildren(*Transform484);

CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet488 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet488->setVertexCount(new int[1]{2});
CCoordinate* Coordinate489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate489->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet488->setCoord(*Coordinate489);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA490 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA490->setUSE("HAnimSegmentLineColorRGBA");
LineSet488->setColor(*ColorRGBA490);

Shape487->setGeometry(LineSet488);

HAnimSegment483->addChildren(*Shape487);

CHAnimSite* HAnimSite491 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite491->setName("l_ulnar_styloid_pt");
HAnimSite491->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite491->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor492 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor492->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite491->addChildren(*TouchSensor492);

CShape* Shape493 = (CShape *)(m_pScene.createNode("Shape"));
Shape493->setUSE("HAnimSiteShape");
HAnimSite491->addChildren(*Shape493);

HAnimSegment483->addChildren(*HAnimSite491);

HAnimJoint482->addChildren(*HAnimSegment483);

CHAnimJoint* HAnimJoint494 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint494->setName("l_radiocarpal");
HAnimJoint494->setDEF("hanim_l_radiocarpal");
HAnimJoint494->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint494->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint494->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment495->setName("l_carpal");
HAnimSegment495->setDEF("hanim_l_carpal");
CTransform* Transform496 = (CTransform *)(m_pScene.createNode("Transform"));
Transform496->setScale(new float[3]{0.2,0.2,0.2});
Transform496->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform496->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform497 = (CTransform *)(m_pScene.createNode("Transform"));
Transform497->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
Shape498->setUSE("HAnimJointShape");
Transform497->addChild(*Shape498);

Transform496->addChildren(*Transform497);

HAnimSegment495->addChildren(*Transform496);

CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet500 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet500->setVertexCount(new int[1]{2});
CCoordinate* Coordinate501 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate501->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet500->setCoord(*Coordinate501);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA502 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA502->setUSE("HAnimSegmentLineColorRGBA");
LineSet500->setColor(*ColorRGBA502);

Shape499->setGeometry(LineSet500);

HAnimSegment495->addChildren(*Shape499);

CShape* Shape503 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet504 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet504->setVertexCount(new int[1]{2});
CCoordinate* Coordinate505 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate505->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet504->setCoord(*Coordinate505);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA506 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA506->setUSE("HAnimSegmentLineColorRGBA");
LineSet504->setColor(*ColorRGBA506);

Shape503->setGeometry(LineSet504);

HAnimSegment495->addChildren(*Shape503);

CHAnimSite* HAnimSite507 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite507->setName("l_metacarpal_phalanx_2_pt");
HAnimSite507->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite507->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor508 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor508->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite507->addChildren(*TouchSensor508);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
Shape509->setUSE("HAnimSiteShape");
HAnimSite507->addChildren(*Shape509);

HAnimSegment495->addChildren(*HAnimSite507);

CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet511 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet511->setVertexCount(new int[1]{2});
CCoordinate* Coordinate512 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate512->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet511->setCoord(*Coordinate512);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA513 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA513->setUSE("HAnimSegmentLineColorRGBA");
LineSet511->setColor(*ColorRGBA513);

Shape510->setGeometry(LineSet511);

HAnimSegment495->addChildren(*Shape510);

CHAnimSite* HAnimSite514 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite514->setName("l_metacarpal_phalanx_3_pt");
HAnimSite514->setDEF("hanim_l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor515 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor515->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite514->addChildren(*TouchSensor515);

CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
Shape516->setUSE("HAnimSiteShape");
HAnimSite514->addChildren(*Shape516);

HAnimSegment495->addChildren(*HAnimSite514);

CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet518 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet518->setVertexCount(new int[1]{2});
CCoordinate* Coordinate519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate519->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet518->setCoord(*Coordinate519);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA520 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA520->setUSE("HAnimSegmentLineColorRGBA");
LineSet518->setColor(*ColorRGBA520);

Shape517->setGeometry(LineSet518);

HAnimSegment495->addChildren(*Shape517);

CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet522 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet522->setVertexCount(new int[1]{2});
CCoordinate* Coordinate523 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate523->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet522->setCoord(*Coordinate523);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA524 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA524->setUSE("HAnimSegmentLineColorRGBA");
LineSet522->setColor(*ColorRGBA524);

Shape521->setGeometry(LineSet522);

HAnimSegment495->addChildren(*Shape521);

CHAnimSite* HAnimSite525 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite525->setName("l_metacarpal_phalanx_5_pt");
HAnimSite525->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite525->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor526 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor526->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite525->addChildren(*TouchSensor526);

CShape* Shape527 = (CShape *)(m_pScene.createNode("Shape"));
Shape527->setUSE("HAnimSiteShape");
HAnimSite525->addChildren(*Shape527);

HAnimSegment495->addChildren(*HAnimSite525);

HAnimJoint494->addChildren(*HAnimSegment495);

CHAnimJoint* HAnimJoint528 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint528->setName("l_carpometacarpal_1");
HAnimJoint528->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint528->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint528->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint528->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment529 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment529->setName("l_metacarpal_1");
HAnimSegment529->setDEF("hanim_l_metacarpal_1");
CTransform* Transform530 = (CTransform *)(m_pScene.createNode("Transform"));
Transform530->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform531 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("HAnimJointShape");
Transform531->addChild(*Shape532);

Transform530->addChildren(*Transform531);

HAnimSegment529->addChildren(*Transform530);

CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet534 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet534->setVertexCount(new int[1]{2});
CCoordinate* Coordinate535 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate535->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet534->setCoord(*Coordinate535);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA536 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA536->setUSE("HAnimSegmentLineColorRGBA");
LineSet534->setColor(*ColorRGBA536);

Shape533->setGeometry(LineSet534);

HAnimSegment529->addChildren(*Shape533);

HAnimJoint528->addChildren(*HAnimSegment529);

CHAnimJoint* HAnimJoint537 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint537->setName("l_metacarpophalangeal_1");
HAnimJoint537->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint537->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint537->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint537->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment538->setName("l_carpal_proximal_phalanx_1");
HAnimSegment538->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform539 = (CTransform *)(m_pScene.createNode("Transform"));
Transform539->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform540 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape541 = (CShape *)(m_pScene.createNode("Shape"));
Shape541->setUSE("HAnimJointShape");
Transform540->addChild(*Shape541);

Transform539->addChildren(*Transform540);

HAnimSegment538->addChildren(*Transform539);

CShape* Shape542 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet543 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet543->setVertexCount(new int[1]{2});
CCoordinate* Coordinate544 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate544->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet543->setCoord(*Coordinate544);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA545 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA545->setUSE("HAnimSegmentLineColorRGBA");
LineSet543->setColor(*ColorRGBA545);

Shape542->setGeometry(LineSet543);

HAnimSegment538->addChildren(*Shape542);

CHAnimSite* HAnimSite546 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite546->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite546->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor547 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor547->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite546->addChildren(*TouchSensor547);

CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
Shape548->setUSE("HAnimSiteShape");
HAnimSite546->addChildren(*Shape548);

HAnimSegment538->addChildren(*HAnimSite546);

HAnimJoint537->addChildren(*HAnimSegment538);

CHAnimJoint* HAnimJoint549 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint549->setName("l_carpal_interphalangeal_1");
HAnimJoint549->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint549->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint549->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint549->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint537->addChildren(*HAnimJoint549);

HAnimJoint528->addChildren(*HAnimJoint537);

HAnimJoint494->addChildren(*HAnimJoint528);

CHAnimJoint* HAnimJoint550 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint550->setName("l_carpometacarpal_2");
HAnimJoint550->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint550->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint550->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint550->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment551 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment551->setName("l_metacarpal_2");
HAnimSegment551->setDEF("hanim_l_metacarpal_2");
CTransform* Transform552 = (CTransform *)(m_pScene.createNode("Transform"));
Transform552->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform553 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape554 = (CShape *)(m_pScene.createNode("Shape"));
Shape554->setUSE("HAnimJointShape");
Transform553->addChild(*Shape554);

Transform552->addChildren(*Transform553);

HAnimSegment551->addChildren(*Transform552);

CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet556 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet556->setVertexCount(new int[1]{2});
CCoordinate* Coordinate557 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate557->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet556->setCoord(*Coordinate557);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA558 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA558->setUSE("HAnimSegmentLineColorRGBA");
LineSet556->setColor(*ColorRGBA558);

Shape555->setGeometry(LineSet556);

HAnimSegment551->addChildren(*Shape555);

HAnimJoint550->addChildren(*HAnimSegment551);

CHAnimJoint* HAnimJoint559 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint559->setName("l_metacarpophalangeal_2");
HAnimJoint559->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint559->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint559->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint559->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment560 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment560->setName("l_carpal_proximal_phalanx_2");
HAnimSegment560->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform561 = (CTransform *)(m_pScene.createNode("Transform"));
Transform561->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
Shape563->setUSE("HAnimJointShape");
Transform562->addChild(*Shape563);

Transform561->addChildren(*Transform562);

HAnimSegment560->addChildren(*Transform561);

CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet565 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet565->setVertexCount(new int[1]{2});
CCoordinate* Coordinate566 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate566->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet565->setCoord(*Coordinate566);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA567 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA567->setUSE("HAnimSegmentLineColorRGBA");
LineSet565->setColor(*ColorRGBA567);

Shape564->setGeometry(LineSet565);

HAnimSegment560->addChildren(*Shape564);

HAnimJoint559->addChildren(*HAnimSegment560);

CHAnimJoint* HAnimJoint568 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint568->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint568->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint568->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint568->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint568->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment569 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment569->setName("l_carpal_middle_phalanx_2");
HAnimSegment569->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform570 = (CTransform *)(m_pScene.createNode("Transform"));
Transform570->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform571 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape572 = (CShape *)(m_pScene.createNode("Shape"));
Shape572->setUSE("HAnimJointShape");
Transform571->addChild(*Shape572);

Transform570->addChildren(*Transform571);

HAnimSegment569->addChildren(*Transform570);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet574 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet574->setVertexCount(new int[1]{2});
CCoordinate* Coordinate575 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate575->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet574->setCoord(*Coordinate575);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA576 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA576->setUSE("HAnimSegmentLineColorRGBA");
LineSet574->setColor(*ColorRGBA576);

Shape573->setGeometry(LineSet574);

HAnimSegment569->addChildren(*Shape573);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite577->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor578 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor578->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite577->addChildren(*TouchSensor578);

CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimSiteShape");
HAnimSite577->addChildren(*Shape579);

HAnimSegment569->addChildren(*HAnimSite577);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setName("l_dactylion_pt");
HAnimSite580->setDEF("hanim_l_dactylion_pt");
HAnimSite580->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor581 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor581->setDescription("HAnimSite l_dactylion_pt");
HAnimSite580->addChildren(*TouchSensor581);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("HAnimSiteShape");
HAnimSite580->addChildren(*Shape582);

HAnimSegment569->addChildren(*HAnimSite580);

HAnimJoint568->addChildren(*HAnimSegment569);

CHAnimJoint* HAnimJoint583 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint583->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint583->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint583->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint583->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint583->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint568->addChildren(*HAnimJoint583);

HAnimJoint559->addChildren(*HAnimJoint568);

HAnimJoint550->addChildren(*HAnimJoint559);

HAnimJoint494->addChildren(*HAnimJoint550);

CHAnimJoint* HAnimJoint584 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint584->setName("l_carpometacarpal_3");
HAnimJoint584->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint584->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint584->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint584->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment585 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment585->setName("l_metacarpal_3");
HAnimSegment585->setDEF("hanim_l_metacarpal_3");
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
Transform586->setTranslation(new float[3]{0.1987,0.8029,-0.053});
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
Coordinate591->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet590->setCoord(*Coordinate591);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA592 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA592->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(*ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChildren(*Shape589);

HAnimJoint584->addChildren(*HAnimSegment585);

CHAnimJoint* HAnimJoint593 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint593->setName("l_metacarpophalangeal_3");
HAnimJoint593->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint593->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint593->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint593->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment594 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment594->setName("l_carpal_proximal_phalanx_3");
HAnimSegment594->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform595 = (CTransform *)(m_pScene.createNode("Transform"));
Transform595->setTranslation(new float[3]{0.1987,0.7818,-0.053});
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
Coordinate600->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet599->setCoord(*Coordinate600);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA601 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA601->setUSE("HAnimSegmentLineColorRGBA");
LineSet599->setColor(*ColorRGBA601);

Shape598->setGeometry(LineSet599);

HAnimSegment594->addChildren(*Shape598);

HAnimJoint593->addChildren(*HAnimSegment594);

CHAnimJoint* HAnimJoint602 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint602->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint602->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint602->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint602->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint602->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment603 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment603->setName("l_carpal_middle_phalanx_3");
HAnimSegment603->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform604 = (CTransform *)(m_pScene.createNode("Transform"));
Transform604->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform605 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
Shape606->setUSE("HAnimJointShape");
Transform605->addChild(*Shape606);

Transform604->addChildren(*Transform605);

HAnimSegment603->addChildren(*Transform604);

CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet608 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet608->setVertexCount(new int[1]{2});
CCoordinate* Coordinate609 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate609->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet608->setCoord(*Coordinate609);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA610 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA610->setUSE("HAnimSegmentLineColorRGBA");
LineSet608->setColor(*ColorRGBA610);

Shape607->setGeometry(LineSet608);

HAnimSegment603->addChildren(*Shape607);

CHAnimSite* HAnimSite611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite611->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite611->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor612 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor612->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite611->addChildren(*TouchSensor612);

CShape* Shape613 = (CShape *)(m_pScene.createNode("Shape"));
Shape613->setUSE("HAnimSiteShape");
HAnimSite611->addChildren(*Shape613);

HAnimSegment603->addChildren(*HAnimSite611);

HAnimJoint602->addChildren(*HAnimSegment603);

CHAnimJoint* HAnimJoint614 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint614->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint614->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint614->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint614->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint614->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint602->addChildren(*HAnimJoint614);

HAnimJoint593->addChildren(*HAnimJoint602);

HAnimJoint584->addChildren(*HAnimJoint593);

HAnimJoint494->addChildren(*HAnimJoint584);

CHAnimJoint* HAnimJoint615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint615->setName("l_carpometacarpal_4");
HAnimJoint615->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint615->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint615->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint615->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment616 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment616->setName("l_metacarpal_4");
HAnimSegment616->setDEF("hanim_l_metacarpal_4");
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
Transform617->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
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
Coordinate622->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet621->setCoord(*Coordinate622);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA623 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA623->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(*ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChildren(*Shape620);

HAnimJoint615->addChildren(*HAnimSegment616);

CHAnimJoint* HAnimJoint624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint624->setName("l_metacarpophalangeal_4");
HAnimJoint624->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint624->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint624->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint624->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment625 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment625->setName("l_carpal_proximal_phalanx_4");
HAnimSegment625->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform626 = (CTransform *)(m_pScene.createNode("Transform"));
Transform626->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
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
Coordinate631->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet630->setCoord(*Coordinate631);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA632 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA632->setUSE("HAnimSegmentLineColorRGBA");
LineSet630->setColor(*ColorRGBA632);

Shape629->setGeometry(LineSet630);

HAnimSegment625->addChildren(*Shape629);

HAnimJoint624->addChildren(*HAnimSegment625);

CHAnimJoint* HAnimJoint633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint633->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint633->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint633->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint633->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint633->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment634 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment634->setName("l_carpal_middle_phalanx_4");
HAnimSegment634->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform635 = (CTransform *)(m_pScene.createNode("Transform"));
Transform635->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform636 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape637 = (CShape *)(m_pScene.createNode("Shape"));
Shape637->setUSE("HAnimJointShape");
Transform636->addChild(*Shape637);

Transform635->addChildren(*Transform636);

HAnimSegment634->addChildren(*Transform635);

CShape* Shape638 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet639 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet639->setVertexCount(new int[1]{2});
CCoordinate* Coordinate640 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate640->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet639->setCoord(*Coordinate640);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA641 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA641->setUSE("HAnimSegmentLineColorRGBA");
LineSet639->setColor(*ColorRGBA641);

Shape638->setGeometry(LineSet639);

HAnimSegment634->addChildren(*Shape638);

CHAnimSite* HAnimSite642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite642->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite642->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor643 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor643->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite642->addChildren(*TouchSensor643);

CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
Shape644->setUSE("HAnimSiteShape");
HAnimSite642->addChildren(*Shape644);

HAnimSegment634->addChildren(*HAnimSite642);

HAnimJoint633->addChildren(*HAnimSegment634);

CHAnimJoint* HAnimJoint645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint645->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint645->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint645->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint645->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint645->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint633->addChildren(*HAnimJoint645);

HAnimJoint624->addChildren(*HAnimJoint633);

HAnimJoint615->addChildren(*HAnimJoint624);

HAnimJoint494->addChildren(*HAnimJoint615);

CHAnimJoint* HAnimJoint646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint646->setName("l_carpometacarpal_5");
HAnimJoint646->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint646->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint646->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint646->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment647 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment647->setName("l_metacarpal_5");
HAnimSegment647->setDEF("hanim_l_metacarpal_5");
CTransform* Transform648 = (CTransform *)(m_pScene.createNode("Transform"));
Transform648->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape650 = (CShape *)(m_pScene.createNode("Shape"));
Shape650->setUSE("HAnimJointShape");
Transform649->addChild(*Shape650);

Transform648->addChildren(*Transform649);

HAnimSegment647->addChildren(*Transform648);

CShape* Shape651 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet652 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet652->setVertexCount(new int[1]{2});
CCoordinate* Coordinate653 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate653->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet652->setCoord(*Coordinate653);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA654 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA654->setUSE("HAnimSegmentLineColorRGBA");
LineSet652->setColor(*ColorRGBA654);

Shape651->setGeometry(LineSet652);

HAnimSegment647->addChildren(*Shape651);

HAnimJoint646->addChildren(*HAnimSegment647);

CHAnimJoint* HAnimJoint655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint655->setName("l_metacarpophalangeal_5");
HAnimJoint655->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint655->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint655->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint655->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment656 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment656->setName("l_carpal_proximal_phalanx_5");
HAnimSegment656->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform657 = (CTransform *)(m_pScene.createNode("Transform"));
Transform657->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
Shape659->setUSE("HAnimJointShape");
Transform658->addChild(*Shape659);

Transform657->addChildren(*Transform658);

HAnimSegment656->addChildren(*Transform657);

CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet661 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet661->setVertexCount(new int[1]{2});
CCoordinate* Coordinate662 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate662->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet661->setCoord(*Coordinate662);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA663 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA663->setUSE("HAnimSegmentLineColorRGBA");
LineSet661->setColor(*ColorRGBA663);

Shape660->setGeometry(LineSet661);

HAnimSegment656->addChildren(*Shape660);

HAnimJoint655->addChildren(*HAnimSegment656);

CHAnimJoint* HAnimJoint664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint664->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint664->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint664->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint664->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint664->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment665 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment665->setName("l_carpal_middle_phalanx_5");
HAnimSegment665->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform666 = (CTransform *)(m_pScene.createNode("Transform"));
Transform666->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform667 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape668 = (CShape *)(m_pScene.createNode("Shape"));
Shape668->setUSE("HAnimJointShape");
Transform667->addChild(*Shape668);

Transform666->addChildren(*Transform667);

HAnimSegment665->addChildren(*Transform666);

CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet670 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet670->setVertexCount(new int[1]{2});
CCoordinate* Coordinate671 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate671->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet670->setCoord(*Coordinate671);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA672 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA672->setUSE("HAnimSegmentLineColorRGBA");
LineSet670->setColor(*ColorRGBA672);

Shape669->setGeometry(LineSet670);

HAnimSegment665->addChildren(*Shape669);

CHAnimSite* HAnimSite673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite673->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite673->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor674 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor674->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite673->addChildren(*TouchSensor674);

CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("HAnimSiteShape");
HAnimSite673->addChildren(*Shape675);

HAnimSegment665->addChildren(*HAnimSite673);

HAnimJoint664->addChildren(*HAnimSegment665);

CHAnimJoint* HAnimJoint676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint676->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint676->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint676->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint676->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint676->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint664->addChildren(*HAnimJoint676);

HAnimJoint655->addChildren(*HAnimJoint664);

HAnimJoint646->addChildren(*HAnimJoint655);

HAnimJoint494->addChildren(*HAnimJoint646);

HAnimJoint482->addChildren(*HAnimJoint494);

HAnimJoint461->addChildren(*HAnimJoint482);

HAnimJoint446->addChildren(*HAnimJoint461);

HAnimJoint437->addChildren(*HAnimJoint446);

HAnimJoint335->addChildren(*HAnimJoint437);

CHAnimJoint* HAnimJoint677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint677->setName("r_sternoclavicular");
HAnimJoint677->setDEF("hanim_r_sternoclavicular");
HAnimJoint677->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint677->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint677->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment678 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment678->setName("r_clavicle");
HAnimSegment678->setDEF("hanim_r_clavicle");
CTransform* Transform679 = (CTransform *)(m_pScene.createNode("Transform"));
Transform679->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("HAnimJointShape");
Transform680->addChild(*Shape681);

Transform679->addChildren(*Transform680);

HAnimSegment678->addChildren(*Transform679);

CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet683 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet683->setVertexCount(new int[1]{2});
CCoordinate* Coordinate684 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate684->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet683->setCoord(*Coordinate684);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA685 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA685->setUSE("HAnimSegmentLineColorRGBA");
LineSet683->setColor(*ColorRGBA685);

Shape682->setGeometry(LineSet683);

HAnimSegment678->addChildren(*Shape682);

HAnimJoint677->addChildren(*HAnimSegment678);

CHAnimJoint* HAnimJoint686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint686->setName("r_acromioclavicular");
HAnimJoint686->setDEF("hanim_r_acromioclavicular");
HAnimJoint686->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint686->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint686->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment687 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment687->setName("r_scapula");
HAnimSegment687->setDEF("hanim_r_scapula");
CTransform* Transform688 = (CTransform *)(m_pScene.createNode("Transform"));
Transform688->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform689 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("HAnimJointShape");
Transform689->addChild(*Shape690);

Transform688->addChildren(*Transform689);

HAnimSegment687->addChildren(*Transform688);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet692 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet692->setVertexCount(new int[1]{2});
CCoordinate* Coordinate693 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate693->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet692->setCoord(*Coordinate693);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA694 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA694->setUSE("HAnimSegmentLineColorRGBA");
LineSet692->setColor(*ColorRGBA694);

Shape691->setGeometry(LineSet692);

HAnimSegment687->addChildren(*Shape691);

CHAnimSite* HAnimSite695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite695->setName("r_bideltoid_pt");
HAnimSite695->setDEF("hanim_r_bideltoid_pt");
CTouchSensor* TouchSensor696 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor696->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite695->addChildren(*TouchSensor696);

CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
Shape697->setUSE("HAnimSiteShape");
HAnimSite695->addChildren(*Shape697);

HAnimSegment687->addChildren(*HAnimSite695);

CHAnimSite* HAnimSite698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite698->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite698->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite698->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor699 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor699->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite698->addChildren(*TouchSensor699);

CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("HAnimSiteShape");
HAnimSite698->addChildren(*Shape700);

HAnimSegment687->addChildren(*HAnimSite698);

HAnimJoint686->addChildren(*HAnimSegment687);

CHAnimJoint* HAnimJoint701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint701->setName("r_shoulder");
HAnimJoint701->setDEF("hanim_r_shoulder");
HAnimJoint701->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint701->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint701->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment702 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment702->setName("r_upperarm");
HAnimSegment702->setDEF("hanim_r_upperarm");
CTransform* Transform703 = (CTransform *)(m_pScene.createNode("Transform"));
Transform703->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform704 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape705 = (CShape *)(m_pScene.createNode("Shape"));
Shape705->setUSE("HAnimJointShape");
Transform704->addChild(*Shape705);

Transform703->addChildren(*Transform704);

HAnimSegment702->addChildren(*Transform703);

CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet707 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet707->setVertexCount(new int[1]{2});
CCoordinate* Coordinate708 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate708->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet707->setCoord(*Coordinate708);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA709 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA709->setUSE("HAnimSegmentLineColorRGBA");
LineSet707->setColor(*ColorRGBA709);

Shape706->setGeometry(LineSet707);

HAnimSegment702->addChildren(*Shape706);

CHAnimSite* HAnimSite710 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite710->setName("r_humeral_medial_epicondyles_pt");
HAnimSite710->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite710->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor711 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor711->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite710->addChildren(*TouchSensor711);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
Shape712->setUSE("HAnimSiteShape");
HAnimSite710->addChildren(*Shape712);

HAnimSegment702->addChildren(*HAnimSite710);

CHAnimSite* HAnimSite713 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite713->setName("r_olecranon_pt");
HAnimSite713->setDEF("hanim_r_olecranon_pt");
HAnimSite713->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor714 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor714->setDescription("HAnimSite r_olecranon_pt");
HAnimSite713->addChildren(*TouchSensor714);

CShape* Shape715 = (CShape *)(m_pScene.createNode("Shape"));
Shape715->setUSE("HAnimSiteShape");
HAnimSite713->addChildren(*Shape715);

HAnimSegment702->addChildren(*HAnimSite713);

CHAnimSite* HAnimSite716 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite716->setName("r_radial_styloid_pt");
HAnimSite716->setDEF("hanim_r_radial_styloid_pt");
HAnimSite716->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor717 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor717->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite716->addChildren(*TouchSensor717);

CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
Shape718->setUSE("HAnimSiteShape");
HAnimSite716->addChildren(*Shape718);

HAnimSegment702->addChildren(*HAnimSite716);

CHAnimSite* HAnimSite719 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite719->setName("r_radiale_pt");
HAnimSite719->setDEF("hanim_r_radiale_pt");
HAnimSite719->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor720 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor720->setDescription("HAnimSite r_radiale_pt");
HAnimSite719->addChildren(*TouchSensor720);

CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
Shape721->setUSE("HAnimSiteShape");
HAnimSite719->addChildren(*Shape721);

HAnimSegment702->addChildren(*HAnimSite719);

HAnimJoint701->addChildren(*HAnimSegment702);

CHAnimJoint* HAnimJoint722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint722->setName("r_elbow");
HAnimJoint722->setDEF("hanim_r_elbow");
HAnimJoint722->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint722->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint722->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment723 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment723->setName("r_forearm");
HAnimSegment723->setDEF("hanim_r_forearm");
CTransform* Transform724 = (CTransform *)(m_pScene.createNode("Transform"));
Transform724->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform725 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape726 = (CShape *)(m_pScene.createNode("Shape"));
Shape726->setUSE("HAnimJointShape");
Transform725->addChild(*Shape726);

Transform724->addChildren(*Transform725);

HAnimSegment723->addChildren(*Transform724);

CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet728 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet728->setVertexCount(new int[1]{2});
CCoordinate* Coordinate729 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate729->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet728->setCoord(*Coordinate729);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA730 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA730->setUSE("HAnimSegmentLineColorRGBA");
LineSet728->setColor(*ColorRGBA730);

Shape727->setGeometry(LineSet728);

HAnimSegment723->addChildren(*Shape727);

CHAnimSite* HAnimSite731 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite731->setName("r_ulnar_styloid_pt");
HAnimSite731->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite731->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor732 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor732->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite731->addChildren(*TouchSensor732);

CShape* Shape733 = (CShape *)(m_pScene.createNode("Shape"));
Shape733->setUSE("HAnimSiteShape");
HAnimSite731->addChildren(*Shape733);

HAnimSegment723->addChildren(*HAnimSite731);

HAnimJoint722->addChildren(*HAnimSegment723);

CHAnimJoint* HAnimJoint734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint734->setName("r_radiocarpal");
HAnimJoint734->setDEF("hanim_r_radiocarpal");
HAnimJoint734->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint734->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint734->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment735 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment735->setName("r_carpal");
HAnimSegment735->setDEF("hanim_r_carpal");
CTransform* Transform736 = (CTransform *)(m_pScene.createNode("Transform"));
Transform736->setScale(new float[3]{0.2,0.2,0.2});
Transform736->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform736->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform737 = (CTransform *)(m_pScene.createNode("Transform"));
Transform737->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape738 = (CShape *)(m_pScene.createNode("Shape"));
Shape738->setUSE("HAnimJointShape");
Transform737->addChild(*Shape738);

Transform736->addChildren(*Transform737);

HAnimSegment735->addChildren(*Transform736);

CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet740 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet740->setVertexCount(new int[1]{2});
CCoordinate* Coordinate741 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate741->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473});
LineSet740->setCoord(*Coordinate741);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA742 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA742->setUSE("HAnimSegmentLineColorRGBA");
LineSet740->setColor(*ColorRGBA742);

Shape739->setGeometry(LineSet740);

HAnimSegment735->addChildren(*Shape739);

CShape* Shape743 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet744 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet744->setVertexCount(new int[1]{2});
CCoordinate* Coordinate745 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate745->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218});
LineSet744->setCoord(*Coordinate745);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA746 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA746->setUSE("HAnimSegmentLineColorRGBA");
LineSet744->setColor(*ColorRGBA746);

Shape743->setGeometry(LineSet744);

HAnimSegment735->addChildren(*Shape743);

CHAnimSite* HAnimSite747 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite747->setName("r_metacarpal_phalanx_2_pt");
HAnimSite747->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite747->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor748 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor748->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite747->addChildren(*TouchSensor748);

CShape* Shape749 = (CShape *)(m_pScene.createNode("Shape"));
Shape749->setUSE("HAnimSiteShape");
HAnimSite747->addChildren(*Shape749);

HAnimSegment735->addChildren(*HAnimSite747);

CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet751 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet751->setVertexCount(new int[1]{2});
CCoordinate* Coordinate752 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate752->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468});
LineSet751->setCoord(*Coordinate752);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA753 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA753->setUSE("HAnimSegmentLineColorRGBA");
LineSet751->setColor(*ColorRGBA753);

Shape750->setGeometry(LineSet751);

HAnimSegment735->addChildren(*Shape750);

CHAnimSite* HAnimSite754 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite754->setName("r_metacarpal_phalanx_3_pt");
HAnimSite754->setDEF("hanim_r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor755 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor755->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite754->addChildren(*TouchSensor755);

CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
Shape756->setUSE("HAnimSiteShape");
HAnimSite754->addChildren(*Shape756);

HAnimSegment735->addChildren(*HAnimSite754);

CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet758 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet758->setVertexCount(new int[1]{2});
CCoordinate* Coordinate759 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate759->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732});
LineSet758->setCoord(*Coordinate759);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA760 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA760->setUSE("HAnimSegmentLineColorRGBA");
LineSet758->setColor(*ColorRGBA760);

Shape757->setGeometry(LineSet758);

HAnimSegment735->addChildren(*Shape757);

CShape* Shape761 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet762 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet762->setVertexCount(new int[1]{2});
CCoordinate* Coordinate763 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate763->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975});
LineSet762->setCoord(*Coordinate763);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA764 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA764->setUSE("HAnimSegmentLineColorRGBA");
LineSet762->setColor(*ColorRGBA764);

Shape761->setGeometry(LineSet762);

HAnimSegment735->addChildren(*Shape761);

CHAnimSite* HAnimSite765 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite765->setName("r_metacarpal_phalanx_5_pt");
HAnimSite765->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite765->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor766 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor766->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite765->addChildren(*TouchSensor766);

CShape* Shape767 = (CShape *)(m_pScene.createNode("Shape"));
Shape767->setUSE("HAnimSiteShape");
HAnimSite765->addChildren(*Shape767);

HAnimSegment735->addChildren(*HAnimSite765);

HAnimJoint734->addChildren(*HAnimSegment735);

CHAnimJoint* HAnimJoint768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint768->setName("r_carpometacarpal_1");
HAnimJoint768->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint768->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint768->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint768->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment769->setName("r_metacarpal_1");
HAnimSegment769->setDEF("hanim_r_metacarpal_1");
CTransform* Transform770 = (CTransform *)(m_pScene.createNode("Transform"));
Transform770->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform771 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape772 = (CShape *)(m_pScene.createNode("Shape"));
Shape772->setUSE("HAnimJointShape");
Transform771->addChild(*Shape772);

Transform770->addChildren(*Transform771);

HAnimSegment769->addChildren(*Transform770);

CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet774 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet774->setVertexCount(new int[1]{2});
CCoordinate* Coordinate775 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate775->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet774->setCoord(*Coordinate775);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA776 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA776->setUSE("HAnimSegmentLineColorRGBA");
LineSet774->setColor(*ColorRGBA776);

Shape773->setGeometry(LineSet774);

HAnimSegment769->addChildren(*Shape773);

HAnimJoint768->addChildren(*HAnimSegment769);

CHAnimJoint* HAnimJoint777 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint777->setName("r_metacarpophalangeal_1");
HAnimJoint777->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint777->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint777->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint777->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment778->setName("r_carpal_proximal_phalanx_1");
HAnimSegment778->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform779 = (CTransform *)(m_pScene.createNode("Transform"));
Transform779->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform780 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape781 = (CShape *)(m_pScene.createNode("Shape"));
Shape781->setUSE("HAnimJointShape");
Transform780->addChild(*Shape781);

Transform779->addChildren(*Transform780);

HAnimSegment778->addChildren(*Transform779);

CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet783 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet783->setVertexCount(new int[1]{2});
CCoordinate* Coordinate784 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate784->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet783->setCoord(*Coordinate784);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA785 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA785->setUSE("HAnimSegmentLineColorRGBA");
LineSet783->setColor(*ColorRGBA785);

Shape782->setGeometry(LineSet783);

HAnimSegment778->addChildren(*Shape782);

CHAnimSite* HAnimSite786 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite786->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite786->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor787 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor787->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite786->addChildren(*TouchSensor787);

CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
Shape788->setUSE("HAnimSiteShape");
HAnimSite786->addChildren(*Shape788);

HAnimSegment778->addChildren(*HAnimSite786);

HAnimJoint777->addChildren(*HAnimSegment778);

CHAnimJoint* HAnimJoint789 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint789->setName("r_carpal_interphalangeal_1");
HAnimJoint789->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint789->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint789->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint789->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint777->addChildren(*HAnimJoint789);

HAnimJoint768->addChildren(*HAnimJoint777);

HAnimJoint734->addChildren(*HAnimJoint768);

CHAnimJoint* HAnimJoint790 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint790->setName("r_carpometacarpal_2");
HAnimJoint790->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint790->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint790->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint790->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment791->setName("r_metacarpal_2");
HAnimSegment791->setDEF("hanim_r_metacarpal_2");
CTransform* Transform792 = (CTransform *)(m_pScene.createNode("Transform"));
Transform792->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("HAnimJointShape");
Transform793->addChild(*Shape794);

Transform792->addChildren(*Transform793);

HAnimSegment791->addChildren(*Transform792);

CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet796 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet796->setVertexCount(new int[1]{2});
CCoordinate* Coordinate797 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate797->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet796->setCoord(*Coordinate797);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA798 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA798->setUSE("HAnimSegmentLineColorRGBA");
LineSet796->setColor(*ColorRGBA798);

Shape795->setGeometry(LineSet796);

HAnimSegment791->addChildren(*Shape795);

HAnimJoint790->addChildren(*HAnimSegment791);

CHAnimJoint* HAnimJoint799 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint799->setName("r_metacarpophalangeal_2");
HAnimJoint799->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint799->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint799->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint799->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment800->setName("r_carpal_proximal_phalanx_2");
HAnimSegment800->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform801 = (CTransform *)(m_pScene.createNode("Transform"));
Transform801->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform802 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
Shape803->setUSE("HAnimJointShape");
Transform802->addChild(*Shape803);

Transform801->addChildren(*Transform802);

HAnimSegment800->addChildren(*Transform801);

CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet805 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet805->setVertexCount(new int[1]{2});
CCoordinate* Coordinate806 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate806->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet805->setCoord(*Coordinate806);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA807 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA807->setUSE("HAnimSegmentLineColorRGBA");
LineSet805->setColor(*ColorRGBA807);

Shape804->setGeometry(LineSet805);

HAnimSegment800->addChildren(*Shape804);

HAnimJoint799->addChildren(*HAnimSegment800);

CHAnimJoint* HAnimJoint808 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint808->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint808->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint808->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint808->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint808->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment809->setName("r_carpal_middle_phalanx_2");
HAnimSegment809->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform810 = (CTransform *)(m_pScene.createNode("Transform"));
Transform810->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform811 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape812 = (CShape *)(m_pScene.createNode("Shape"));
Shape812->setUSE("HAnimJointShape");
Transform811->addChild(*Shape812);

Transform810->addChildren(*Transform811);

HAnimSegment809->addChildren(*Transform810);

CShape* Shape813 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet814 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet814->setVertexCount(new int[1]{2});
CCoordinate* Coordinate815 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate815->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet814->setCoord(*Coordinate815);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA816 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA816->setUSE("HAnimSegmentLineColorRGBA");
LineSet814->setColor(*ColorRGBA816);

Shape813->setGeometry(LineSet814);

HAnimSegment809->addChildren(*Shape813);

CHAnimSite* HAnimSite817 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite817->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite817->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor818 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor818->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite817->addChildren(*TouchSensor818);

CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
Shape819->setUSE("HAnimSiteShape");
HAnimSite817->addChildren(*Shape819);

HAnimSegment809->addChildren(*HAnimSite817);

CHAnimSite* HAnimSite820 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite820->setName("r_dactylion_pt");
HAnimSite820->setDEF("hanim_r_dactylion_pt");
HAnimSite820->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor821 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor821->setDescription("HAnimSite r_dactylion_pt");
HAnimSite820->addChildren(*TouchSensor821);

CShape* Shape822 = (CShape *)(m_pScene.createNode("Shape"));
Shape822->setUSE("HAnimSiteShape");
HAnimSite820->addChildren(*Shape822);

HAnimSegment809->addChildren(*HAnimSite820);

HAnimJoint808->addChildren(*HAnimSegment809);

CHAnimJoint* HAnimJoint823 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint823->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint823->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint823->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint823->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint823->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint808->addChildren(*HAnimJoint823);

HAnimJoint799->addChildren(*HAnimJoint808);

HAnimJoint790->addChildren(*HAnimJoint799);

HAnimJoint734->addChildren(*HAnimJoint790);

CHAnimJoint* HAnimJoint824 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint824->setName("r_carpometacarpal_3");
HAnimJoint824->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint824->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint824->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint824->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment825->setName("r_metacarpal_3");
HAnimSegment825->setDEF("hanim_r_metacarpal_3");
CTransform* Transform826 = (CTransform *)(m_pScene.createNode("Transform"));
Transform826->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform827 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
Shape828->setUSE("HAnimJointShape");
Transform827->addChild(*Shape828);

Transform826->addChildren(*Transform827);

HAnimSegment825->addChildren(*Transform826);

CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet830 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet830->setVertexCount(new int[1]{2});
CCoordinate* Coordinate831 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate831->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet830->setCoord(*Coordinate831);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA832 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA832->setUSE("HAnimSegmentLineColorRGBA");
LineSet830->setColor(*ColorRGBA832);

Shape829->setGeometry(LineSet830);

HAnimSegment825->addChildren(*Shape829);

HAnimJoint824->addChildren(*HAnimSegment825);

CHAnimJoint* HAnimJoint833 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint833->setName("r_metacarpophalangeal_3");
HAnimJoint833->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint833->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint833->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint833->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment834->setName("r_carpal_proximal_phalanx_3");
HAnimSegment834->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform835 = (CTransform *)(m_pScene.createNode("Transform"));
Transform835->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform836 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape837 = (CShape *)(m_pScene.createNode("Shape"));
Shape837->setUSE("HAnimJointShape");
Transform836->addChild(*Shape837);

Transform835->addChildren(*Transform836);

HAnimSegment834->addChildren(*Transform835);

CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet839 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet839->setVertexCount(new int[1]{2});
CCoordinate* Coordinate840 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate840->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet839->setCoord(*Coordinate840);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA841 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA841->setUSE("HAnimSegmentLineColorRGBA");
LineSet839->setColor(*ColorRGBA841);

Shape838->setGeometry(LineSet839);

HAnimSegment834->addChildren(*Shape838);

HAnimJoint833->addChildren(*HAnimSegment834);

CHAnimJoint* HAnimJoint842 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint842->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint842->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint842->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint842->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint842->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment843->setName("r_carpal_middle_phalanx_3");
HAnimSegment843->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform844 = (CTransform *)(m_pScene.createNode("Transform"));
Transform844->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform845 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape846 = (CShape *)(m_pScene.createNode("Shape"));
Shape846->setUSE("HAnimJointShape");
Transform845->addChild(*Shape846);

Transform844->addChildren(*Transform845);

HAnimSegment843->addChildren(*Transform844);

CShape* Shape847 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet848 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet848->setVertexCount(new int[1]{2});
CCoordinate* Coordinate849 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate849->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet848->setCoord(*Coordinate849);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA850 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA850->setUSE("HAnimSegmentLineColorRGBA");
LineSet848->setColor(*ColorRGBA850);

Shape847->setGeometry(LineSet848);

HAnimSegment843->addChildren(*Shape847);

CHAnimSite* HAnimSite851 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite851->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite851->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor852 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor852->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite851->addChildren(*TouchSensor852);

CShape* Shape853 = (CShape *)(m_pScene.createNode("Shape"));
Shape853->setUSE("HAnimSiteShape");
HAnimSite851->addChildren(*Shape853);

HAnimSegment843->addChildren(*HAnimSite851);

HAnimJoint842->addChildren(*HAnimSegment843);

CHAnimJoint* HAnimJoint854 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint854->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint854->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint854->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint854->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint854->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint842->addChildren(*HAnimJoint854);

HAnimJoint833->addChildren(*HAnimJoint842);

HAnimJoint824->addChildren(*HAnimJoint833);

HAnimJoint734->addChildren(*HAnimJoint824);

CHAnimJoint* HAnimJoint855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint855->setName("r_carpometacarpal_4");
HAnimJoint855->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint855->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint855->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint855->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment856->setName("r_metacarpal_4");
HAnimSegment856->setDEF("hanim_r_metacarpal_4");
CTransform* Transform857 = (CTransform *)(m_pScene.createNode("Transform"));
Transform857->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform858 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
Shape859->setUSE("HAnimJointShape");
Transform858->addChild(*Shape859);

Transform857->addChildren(*Transform858);

HAnimSegment856->addChildren(*Transform857);

CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet861 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet861->setVertexCount(new int[1]{2});
CCoordinate* Coordinate862 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate862->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet861->setCoord(*Coordinate862);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA863 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA863->setUSE("HAnimSegmentLineColorRGBA");
LineSet861->setColor(*ColorRGBA863);

Shape860->setGeometry(LineSet861);

HAnimSegment856->addChildren(*Shape860);

HAnimJoint855->addChildren(*HAnimSegment856);

CHAnimJoint* HAnimJoint864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint864->setName("r_metacarpophalangeal_4");
HAnimJoint864->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint864->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint864->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint864->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment865->setName("r_carpal_proximal_phalanx_4");
HAnimSegment865->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform866 = (CTransform *)(m_pScene.createNode("Transform"));
Transform866->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform867 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape868 = (CShape *)(m_pScene.createNode("Shape"));
Shape868->setUSE("HAnimJointShape");
Transform867->addChild(*Shape868);

Transform866->addChildren(*Transform867);

HAnimSegment865->addChildren(*Transform866);

CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet870 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet870->setVertexCount(new int[1]{2});
CCoordinate* Coordinate871 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate871->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet870->setCoord(*Coordinate871);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA872 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA872->setUSE("HAnimSegmentLineColorRGBA");
LineSet870->setColor(*ColorRGBA872);

Shape869->setGeometry(LineSet870);

HAnimSegment865->addChildren(*Shape869);

HAnimJoint864->addChildren(*HAnimSegment865);

CHAnimJoint* HAnimJoint873 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint873->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint873->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint873->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint873->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint873->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment874 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment874->setName("r_carpal_middle_phalanx_4");
HAnimSegment874->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform875 = (CTransform *)(m_pScene.createNode("Transform"));
Transform875->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform876 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape877 = (CShape *)(m_pScene.createNode("Shape"));
Shape877->setUSE("HAnimJointShape");
Transform876->addChild(*Shape877);

Transform875->addChildren(*Transform876);

HAnimSegment874->addChildren(*Transform875);

CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet879 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet879->setVertexCount(new int[1]{2});
CCoordinate* Coordinate880 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate880->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet879->setCoord(*Coordinate880);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA881 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA881->setUSE("HAnimSegmentLineColorRGBA");
LineSet879->setColor(*ColorRGBA881);

Shape878->setGeometry(LineSet879);

HAnimSegment874->addChildren(*Shape878);

CHAnimSite* HAnimSite882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite882->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite882->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor883 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor883->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite882->addChildren(*TouchSensor883);

CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("HAnimSiteShape");
HAnimSite882->addChildren(*Shape884);

HAnimSegment874->addChildren(*HAnimSite882);

HAnimJoint873->addChildren(*HAnimSegment874);

CHAnimJoint* HAnimJoint885 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint885->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint885->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint885->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint885->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint885->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint873->addChildren(*HAnimJoint885);

HAnimJoint864->addChildren(*HAnimJoint873);

HAnimJoint855->addChildren(*HAnimJoint864);

HAnimJoint734->addChildren(*HAnimJoint855);

CHAnimJoint* HAnimJoint886 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint886->setName("r_carpometacarpal_5");
HAnimJoint886->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint886->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint886->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint886->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment887 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment887->setName("r_metacarpal_5");
HAnimSegment887->setDEF("hanim_r_metacarpal_5");
CTransform* Transform888 = (CTransform *)(m_pScene.createNode("Transform"));
Transform888->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform889 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape890 = (CShape *)(m_pScene.createNode("Shape"));
Shape890->setUSE("HAnimJointShape");
Transform889->addChild(*Shape890);

Transform888->addChildren(*Transform889);

HAnimSegment887->addChildren(*Transform888);

CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet892 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet892->setVertexCount(new int[1]{2});
CCoordinate* Coordinate893 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate893->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet892->setCoord(*Coordinate893);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA894 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA894->setUSE("HAnimSegmentLineColorRGBA");
LineSet892->setColor(*ColorRGBA894);

Shape891->setGeometry(LineSet892);

HAnimSegment887->addChildren(*Shape891);

HAnimJoint886->addChildren(*HAnimSegment887);

CHAnimJoint* HAnimJoint895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint895->setName("r_metacarpophalangeal_5");
HAnimJoint895->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint895->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint895->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint895->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment896 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment896->setName("r_carpal_proximal_phalanx_5");
HAnimSegment896->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform897 = (CTransform *)(m_pScene.createNode("Transform"));
Transform897->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape899 = (CShape *)(m_pScene.createNode("Shape"));
Shape899->setUSE("HAnimJointShape");
Transform898->addChild(*Shape899);

Transform897->addChildren(*Transform898);

HAnimSegment896->addChildren(*Transform897);

CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet901 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet901->setVertexCount(new int[1]{2});
CCoordinate* Coordinate902 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate902->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet901->setCoord(*Coordinate902);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA903 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA903->setUSE("HAnimSegmentLineColorRGBA");
LineSet901->setColor(*ColorRGBA903);

Shape900->setGeometry(LineSet901);

HAnimSegment896->addChildren(*Shape900);

HAnimJoint895->addChildren(*HAnimSegment896);

CHAnimJoint* HAnimJoint904 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint904->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint904->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint904->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint904->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint904->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment905 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment905->setName("r_carpal_middle_phalanx_5");
HAnimSegment905->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform906 = (CTransform *)(m_pScene.createNode("Transform"));
Transform906->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform907 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape908 = (CShape *)(m_pScene.createNode("Shape"));
Shape908->setUSE("HAnimJointShape");
Transform907->addChild(*Shape908);

Transform906->addChildren(*Transform907);

HAnimSegment905->addChildren(*Transform906);

CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet910 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet910->setVertexCount(new int[1]{2});
CCoordinate* Coordinate911 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate911->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet910->setCoord(*Coordinate911);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA912 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA912->setUSE("HAnimSegmentLineColorRGBA");
LineSet910->setColor(*ColorRGBA912);

Shape909->setGeometry(LineSet910);

HAnimSegment905->addChildren(*Shape909);

CHAnimSite* HAnimSite913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite913->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite913->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor914 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor914->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite913->addChildren(*TouchSensor914);

CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
Shape915->setUSE("HAnimSiteShape");
HAnimSite913->addChildren(*Shape915);

HAnimSegment905->addChildren(*HAnimSite913);

HAnimJoint904->addChildren(*HAnimSegment905);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint916->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint916->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint916->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint916->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint904->addChildren(*HAnimJoint916);

HAnimJoint895->addChildren(*HAnimJoint904);

HAnimJoint886->addChildren(*HAnimJoint895);

HAnimJoint734->addChildren(*HAnimJoint886);

HAnimJoint722->addChildren(*HAnimJoint734);

HAnimJoint701->addChildren(*HAnimJoint722);

HAnimJoint686->addChildren(*HAnimJoint701);

HAnimJoint677->addChildren(*HAnimJoint686);

HAnimJoint335->addChildren(*HAnimJoint677);

HAnimJoint320->addChildren(*HAnimJoint335);

HAnimJoint299->addChildren(*HAnimJoint320);

HAnimJoint287->addChildren(*HAnimJoint299);

HAnimJoint278->addChildren(*HAnimJoint287);

HAnimJoint269->addChildren(*HAnimJoint278);

HAnimJoint52->addChildren(*HAnimJoint269);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint917 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint917->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint917);

CHAnimJoint* HAnimJoint918 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint918->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint918);

CHAnimJoint* HAnimJoint919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint919->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint919);

CHAnimJoint* HAnimJoint920 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint920->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint920);

CHAnimJoint* HAnimJoint921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint921->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint921);

CHAnimJoint* HAnimJoint922 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint922->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint922);

CHAnimJoint* HAnimJoint923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint923->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint923);

CHAnimJoint* HAnimJoint924 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint924->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint924);

CHAnimJoint* HAnimJoint925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint925->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint925);

CHAnimJoint* HAnimJoint926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint926->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint926);

CHAnimJoint* HAnimJoint927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint927->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint927);

CHAnimJoint* HAnimJoint928 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint928->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint928);

CHAnimJoint* HAnimJoint929 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint929->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint929);

CHAnimJoint* HAnimJoint930 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint930->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint930);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint931);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint932);

CHAnimJoint* HAnimJoint933 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint933->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint933);

CHAnimJoint* HAnimJoint934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint934->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint934);

CHAnimJoint* HAnimJoint935 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint935->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint935);

CHAnimJoint* HAnimJoint936 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint936->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint936);

CHAnimJoint* HAnimJoint937 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint937->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint937);

CHAnimJoint* HAnimJoint938 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint938->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint938);

CHAnimJoint* HAnimJoint939 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint939->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint939);

CHAnimJoint* HAnimJoint940 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint940->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint940);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint941);

CHAnimJoint* HAnimJoint942 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint942->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint942);

CHAnimJoint* HAnimJoint943 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint943->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint943);

CHAnimJoint* HAnimJoint944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint944->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint944);

CHAnimJoint* HAnimJoint945 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint945->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint945);

CHAnimJoint* HAnimJoint946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint946->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint946);

CHAnimJoint* HAnimJoint947 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint947->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint947);

CHAnimJoint* HAnimJoint948 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint948->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint948);

CHAnimJoint* HAnimJoint949 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint949->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint949);

CHAnimJoint* HAnimJoint950 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint950->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint950);

CHAnimJoint* HAnimJoint951 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint951->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint951);

CHAnimJoint* HAnimJoint952 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint952->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint952);

CHAnimJoint* HAnimJoint953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint953->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint953);

CHAnimJoint* HAnimJoint954 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint954->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint954);

CHAnimJoint* HAnimJoint955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint955->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint955);

CHAnimJoint* HAnimJoint956 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint956->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint956);

CHAnimJoint* HAnimJoint957 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint957->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint957);

CHAnimJoint* HAnimJoint958 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint958->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint958);

CHAnimJoint* HAnimJoint959 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint959->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint959);

CHAnimJoint* HAnimJoint960 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint960->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint960);

CHAnimJoint* HAnimJoint961 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint961->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint961);

CHAnimJoint* HAnimJoint962 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint962->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint962);

CHAnimJoint* HAnimJoint963 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint963->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint963);

CHAnimJoint* HAnimJoint964 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint964->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint964);

CHAnimJoint* HAnimJoint965 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint965->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint965);

CHAnimJoint* HAnimJoint966 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint966->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint966);

CHAnimJoint* HAnimJoint967 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint967->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint967);

CHAnimJoint* HAnimJoint968 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint968->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint968);

CHAnimJoint* HAnimJoint969 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint969->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint969);

CHAnimJoint* HAnimJoint970 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint970->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint970);

CHAnimJoint* HAnimJoint971 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint971->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint971);

CHAnimJoint* HAnimJoint972 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint972->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint972);

CHAnimJoint* HAnimJoint973 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint973->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint973);

CHAnimJoint* HAnimJoint974 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint974->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint974);

CHAnimJoint* HAnimJoint975 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint975->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint975);

CHAnimJoint* HAnimJoint976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint976->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint976);

CHAnimJoint* HAnimJoint977 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint977->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint977);

CHAnimJoint* HAnimJoint978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint978->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint978);

CHAnimJoint* HAnimJoint979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint979->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint979);

CHAnimJoint* HAnimJoint980 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint980->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint980);

CHAnimJoint* HAnimJoint981 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint981->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint981);

CHAnimJoint* HAnimJoint982 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint982->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint982);

CHAnimJoint* HAnimJoint983 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint983->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint983);

CHAnimJoint* HAnimJoint984 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint984->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint984);

CHAnimJoint* HAnimJoint985 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint985->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint985);

CHAnimJoint* HAnimJoint986 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint986->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint986);

CHAnimJoint* HAnimJoint987 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint987->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint987);

CHAnimSegment* HAnimSegment988 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment988->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment988);

CHAnimSegment* HAnimSegment989 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment989->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment989);

CHAnimSegment* HAnimSegment990 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment990->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment990);

CHAnimSegment* HAnimSegment991 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment991->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment991);

CHAnimSegment* HAnimSegment992 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment992->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment992);

CHAnimSegment* HAnimSegment993 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment993->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment993);

CHAnimSegment* HAnimSegment994 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment994->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment994);

CHAnimSegment* HAnimSegment995 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment995->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment995);

CHAnimSegment* HAnimSegment996 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment996->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment996);

CHAnimSegment* HAnimSegment997 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment997->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment997);

CHAnimSegment* HAnimSegment998 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment998->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment998);

CHAnimSegment* HAnimSegment999 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment999->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment999);

CHAnimSegment* HAnimSegment1000 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1000->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1000);

CHAnimSegment* HAnimSegment1001 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1001->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1001);

CHAnimSegment* HAnimSegment1002 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1002->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1002);

CHAnimSegment* HAnimSegment1003 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1003->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1003);

CHAnimSegment* HAnimSegment1004 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1004->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1004);

CHAnimSegment* HAnimSegment1005 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1005->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1005);

CHAnimSegment* HAnimSegment1006 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1006->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1006);

CHAnimSegment* HAnimSegment1007 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1007->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1007);

CHAnimSegment* HAnimSegment1008 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1008->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1008);

CHAnimSegment* HAnimSegment1009 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1009->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1009);

CHAnimSegment* HAnimSegment1010 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1010->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1010);

CHAnimSegment* HAnimSegment1011 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1011->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1011);

CHAnimSegment* HAnimSegment1012 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1012->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1012);

CHAnimSegment* HAnimSegment1013 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1013->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1013);

CHAnimSegment* HAnimSegment1014 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1014->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1014);

CHAnimSegment* HAnimSegment1015 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1015->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1015);

CHAnimSegment* HAnimSegment1016 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1016->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1016);

CHAnimSegment* HAnimSegment1017 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1017->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1017);

CHAnimSegment* HAnimSegment1018 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1018->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1018);

CHAnimSegment* HAnimSegment1019 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1019->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1019);

CHAnimSegment* HAnimSegment1020 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1020->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1020);

CHAnimSegment* HAnimSegment1021 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1021->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1021);

CHAnimSegment* HAnimSegment1022 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1022->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1022);

CHAnimSegment* HAnimSegment1023 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1023->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1023);

CHAnimSegment* HAnimSegment1024 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1024->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1024);

CHAnimSegment* HAnimSegment1025 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1025->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1025);

CHAnimSegment* HAnimSegment1026 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1026->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1026);

CHAnimSegment* HAnimSegment1027 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1027->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1027);

CHAnimSegment* HAnimSegment1028 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1028->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1028);

CHAnimSegment* HAnimSegment1029 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1029->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1029);

CHAnimSegment* HAnimSegment1030 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1030->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1030);

CHAnimSegment* HAnimSegment1031 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1031->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1031);

CHAnimSegment* HAnimSegment1032 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1032->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1032);

CHAnimSegment* HAnimSegment1033 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1033->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1033);

CHAnimSegment* HAnimSegment1034 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1034->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1034);

CHAnimSegment* HAnimSegment1035 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1035->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1035);

CHAnimSegment* HAnimSegment1036 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1036->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1036);

CHAnimSegment* HAnimSegment1037 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1037->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1037);

CHAnimSegment* HAnimSegment1038 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1038->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1038);

CHAnimSegment* HAnimSegment1039 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1039->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1039);

CHAnimSegment* HAnimSegment1040 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1040->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1040);

CHAnimSegment* HAnimSegment1041 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1041->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1041);

CHAnimSegment* HAnimSegment1042 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1042->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1042);

CHAnimSegment* HAnimSegment1043 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1043->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1043);

CHAnimSegment* HAnimSegment1044 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1044->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1044);

CHAnimSegment* HAnimSegment1045 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1045->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1045);

CHAnimSite* HAnimSite1046 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1046->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(*HAnimSite1046);

CHAnimSite* HAnimSite1047 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1047->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1047);

CHAnimSite* HAnimSite1048 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1048->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1048);

CHAnimSite* HAnimSite1049 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1049->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1049);

CHAnimSite* HAnimSite1050 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1050->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1050);

CHAnimSite* HAnimSite1051 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1051->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1051);

CHAnimSite* HAnimSite1052 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1052->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1052);

CHAnimSite* HAnimSite1053 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1053->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1053);

CHAnimSite* HAnimSite1054 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1054->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1054);

CHAnimSite* HAnimSite1055 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1055->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1055);

CHAnimSite* HAnimSite1056 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1056->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1056);

CHAnimSite* HAnimSite1057 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1057->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1057);

CHAnimSite* HAnimSite1058 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1058->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1058);

CHAnimSite* HAnimSite1059 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1059->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1059);

CHAnimSite* HAnimSite1060 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1060->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1060);

CHAnimSite* HAnimSite1061 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1061->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1061);

CHAnimSite* HAnimSite1062 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1062->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1062);

CHAnimSite* HAnimSite1063 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1063->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1063);

CHAnimSite* HAnimSite1064 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1064->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1064);

CHAnimSite* HAnimSite1065 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1065->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1065);

CHAnimSite* HAnimSite1066 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1066->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1066);

CHAnimSite* HAnimSite1067 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1067->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1067);

CHAnimSite* HAnimSite1068 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1068->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1068);

CHAnimSite* HAnimSite1069 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1069->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1069);

CHAnimSite* HAnimSite1070 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1070->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1070);

CHAnimSite* HAnimSite1071 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1071->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1071);

CHAnimSite* HAnimSite1072 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1072->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1072);

CHAnimSite* HAnimSite1073 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1073->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1073);

CHAnimSite* HAnimSite1074 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1074->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1074);

CHAnimSite* HAnimSite1075 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1075->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1075);

CHAnimSite* HAnimSite1076 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1076->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1076);

CHAnimSite* HAnimSite1077 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1077->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1077);

CHAnimSite* HAnimSite1078 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1078->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1078);

CHAnimSite* HAnimSite1079 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1079->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1079);

CHAnimSite* HAnimSite1080 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1080->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1080);

CHAnimSite* HAnimSite1081 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1081->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1081);

CHAnimSite* HAnimSite1082 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1082->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1082);

CHAnimSite* HAnimSite1083 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1083->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1083);

CHAnimSite* HAnimSite1084 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1084->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1084);

CHAnimSite* HAnimSite1085 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1085->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1085);

CHAnimSite* HAnimSite1086 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1086->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1086);

CHAnimSite* HAnimSite1087 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1087->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1087);

CHAnimSite* HAnimSite1088 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1088->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1088);

CHAnimSite* HAnimSite1089 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1089->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1089);

CHAnimSite* HAnimSite1090 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1090->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1090);

CHAnimSite* HAnimSite1091 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1091->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1091);

CHAnimSite* HAnimSite1092 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1092->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1092);

CHAnimSite* HAnimSite1093 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1093->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1093);

CHAnimSite* HAnimSite1094 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1094->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1094);

CHAnimSite* HAnimSite1095 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1095->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1095);

CHAnimSite* HAnimSite1096 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1096->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(*HAnimSite1096);

CHAnimSite* HAnimSite1097 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1097->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite1097);

CHAnimSite* HAnimSite1098 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1098->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1098);

CHAnimSite* HAnimSite1099 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1099->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1099);

CHAnimSite* HAnimSite1100 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1100->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1100);

CHAnimSite* HAnimSite1101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1101->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1101);

CHAnimSite* HAnimSite1102 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1102->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite1102);

CHAnimSite* HAnimSite1103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1103->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1103);

CHAnimSite* HAnimSite1104 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1104->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1104);

CHAnimSite* HAnimSite1105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1105->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1105);

CHAnimSite* HAnimSite1106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1106->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1106);

CHAnimSite* HAnimSite1107 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1107->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1107);

CHAnimSite* HAnimSite1108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1108->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1108);

CHAnimSite* HAnimSite1109 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1109->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1109);

CHAnimSite* HAnimSite1110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1110->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1110);

CHAnimSite* HAnimSite1111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1111->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1111);

CHAnimSite* HAnimSite1112 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1112->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1112);

CHAnimSite* HAnimSite1113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1113->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1113);

CHAnimSite* HAnimSite1114 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1114->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1114);

CHAnimSite* HAnimSite1115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1115->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1115);

CHAnimSite* HAnimSite1116 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1116->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1116);

CHAnimSite* HAnimSite1117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1117->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1117);

CHAnimSite* HAnimSite1118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1118->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1118);

CHAnimSite* HAnimSite1119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1119->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1119);

CHAnimSite* HAnimSite1120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1120->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1120);

CHAnimSite* HAnimSite1121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1121->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1121);

CHAnimSite* HAnimSite1122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1122->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1122);

CHAnimSite* HAnimSite1123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1123->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1123);

CHAnimSite* HAnimSite1124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1124->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1124);

CHAnimSite* HAnimSite1125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1125->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1125);

CHAnimSite* HAnimSite1126 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1126->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1126);

CHAnimSite* HAnimSite1127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1127->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1127);

CHAnimSite* HAnimSite1128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1128->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1128);

CHAnimSite* HAnimSite1129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1129->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1129);

CHAnimSite* HAnimSite1130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1130->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1130);

CHAnimSite* HAnimSite1131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1131->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1131);

CHAnimSite* HAnimSite1132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1132->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1132);

CHAnimSite* HAnimSite1133 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1133->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1133);

CHAnimSite* HAnimSite1134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1134->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1134);

CHAnimSite* HAnimSite1135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1135->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1135);

CHAnimSite* HAnimSite1136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1136->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1136);

CHAnimSite* HAnimSite1137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1137->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1137);

CHAnimSite* HAnimSite1138 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1138->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1138);

CHAnimSite* HAnimSite1139 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1139->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1139);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
