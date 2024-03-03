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
HAnimSite95->setName("navel");
HAnimSite95->setDEF("hanim_navel");
HAnimSite95->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor96 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor96->setDescription("HAnimSite navel");
HAnimSite95->addChildren(*TouchSensor96);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("HAnimSiteShape");
HAnimSite95->addChildren(*Shape97);

HAnimSegment53->addChildren(*HAnimSite95);

CHAnimSite* HAnimSite98 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite98->setName("waist_preferred_anterior");
HAnimSite98->setDEF("hanim_waist_preferred_anterior");
CTouchSensor* TouchSensor99 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor99->setDescription("HAnimSite waist_preferred_anterior");
HAnimSite98->addChildren(*TouchSensor99);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("HAnimSiteShape");
HAnimSite98->addChildren(*Shape100);

HAnimSegment53->addChildren(*HAnimSite98);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("waist_preferred_posterior");
HAnimSite101->setDEF("hanim_waist_preferred_posterior");
HAnimSite101->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor102->setDescription("HAnimSite waist_preferred_posterior");
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
HAnimSite113->setName("l_femoral_lateral_epicondyles");
HAnimSite113->setDEF("hanim_l_femoral_lateral_epicondyles");
HAnimSite113->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor114 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor114->setDescription("HAnimSite l_femoral_lateral_epicondyles");
HAnimSite113->addChildren(*TouchSensor114);

CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("HAnimSiteShape");
HAnimSite113->addChildren(*Shape115);

HAnimSegment105->addChildren(*HAnimSite113);

CHAnimSite* HAnimSite116 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite116->setName("l_femoral_medial_epicondyles");
HAnimSite116->setDEF("hanim_l_femoral_medial_epicondyles");
HAnimSite116->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor117 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor117->setDescription("HAnimSite l_femoral_medial_epicondyles");
HAnimSite116->addChildren(*TouchSensor117);

CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
Shape118->setUSE("HAnimSiteShape");
HAnimSite116->addChildren(*Shape118);

HAnimSegment105->addChildren(*HAnimSite116);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("l_knee_crease");
HAnimSite119->setDEF("hanim_l_knee_crease");
HAnimSite119->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor120 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor120->setDescription("HAnimSite l_knee_crease");
HAnimSite119->addChildren(*TouchSensor120);

CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("HAnimSiteShape");
HAnimSite119->addChildren(*Shape121);

HAnimSegment105->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("l_suprapatella");
HAnimSite122->setDEF("hanim_l_suprapatella");
CTouchSensor* TouchSensor123 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor123->setDescription("HAnimSite l_suprapatella");
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
HAnimSite129->setName("r_femoral_lateral_epicondyles");
HAnimSite129->setDEF("hanim_r_femoral_lateral_epicondyles");
HAnimSite129->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor130 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor130->setDescription("HAnimSite r_femoral_lateral_epicondyles");
HAnimSite129->addChildren(*TouchSensor130);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("HAnimSiteShape");
HAnimSite129->addChildren(*Shape131);

HAnimSegment105->addChildren(*HAnimSite129);

CHAnimSite* HAnimSite132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite132->setName("r_femoral_medial_epicondyles");
HAnimSite132->setDEF("hanim_r_femoral_medial_epicondyles");
HAnimSite132->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor133 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor133->setDescription("HAnimSite r_femoral_medial_epicondyles");
HAnimSite132->addChildren(*TouchSensor133);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setUSE("HAnimSiteShape");
HAnimSite132->addChildren(*Shape134);

HAnimSegment105->addChildren(*HAnimSite132);

CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("r_knee_crease");
HAnimSite135->setDEF("hanim_r_knee_crease");
HAnimSite135->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor136 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor136->setDescription("HAnimSite r_knee_crease");
HAnimSite135->addChildren(*TouchSensor136);

CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("HAnimSiteShape");
HAnimSite135->addChildren(*Shape137);

HAnimSegment105->addChildren(*HAnimSite135);

CHAnimSite* HAnimSite138 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite138->setName("r_suprapatella");
HAnimSite138->setDEF("hanim_r_suprapatella");
CTouchSensor* TouchSensor139 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor139->setDescription("HAnimSite r_suprapatella");
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
HAnimSite150->setName("l_lateral_malleolus");
HAnimSite150->setDEF("hanim_l_lateral_malleolus");
HAnimSite150->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor151 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor151->setDescription("HAnimSite l_lateral_malleolus");
HAnimSite150->addChildren(*TouchSensor151);

CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
Shape152->setUSE("HAnimSiteShape");
HAnimSite150->addChildren(*Shape152);

HAnimSegment142->addChildren(*HAnimSite150);

CHAnimSite* HAnimSite153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite153->setName("l_medial_malleolus");
HAnimSite153->setDEF("hanim_l_medial_malleolus");
HAnimSite153->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor154 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor154->setDescription("HAnimSite l_medial_malleolus");
HAnimSite153->addChildren(*TouchSensor154);

CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
Shape155->setUSE("HAnimSiteShape");
HAnimSite153->addChildren(*Shape155);

HAnimSegment142->addChildren(*HAnimSite153);

CHAnimSite* HAnimSite156 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite156->setName("l_tibiale");
HAnimSite156->setDEF("hanim_l_tibiale");
CTouchSensor* TouchSensor157 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor157->setDescription("HAnimSite l_tibiale");
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
HAnimSite168->setName("l_calcaneus_posterior");
HAnimSite168->setDEF("hanim_l_calcaneus_posterior");
HAnimSite168->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor169 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor169->setDescription("HAnimSite l_calcaneus_posterior");
HAnimSite168->addChildren(*TouchSensor169);

CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
Shape170->setUSE("HAnimSiteShape");
HAnimSite168->addChildren(*Shape170);

HAnimSegment160->addChildren(*HAnimSite168);

CHAnimSite* HAnimSite171 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite171->setName("l_sphyrion");
HAnimSite171->setDEF("hanim_l_sphyrion");
HAnimSite171->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor172 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor172->setDescription("HAnimSite l_sphyrion");
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

CHAnimSite* HAnimSite192 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite192->setName("l_metatarsal_phalanx_1");
HAnimSite192->setDEF("hanim_l_metatarsal_phalanx_1");
CTouchSensor* TouchSensor193 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor193->setDescription("HAnimSite l_metatarsal_phalanx_1");
HAnimSite192->addChildren(*TouchSensor193);

CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
Shape194->setUSE("HAnimSiteShape");
HAnimSite192->addChildren(*Shape194);

HAnimSegment184->addChildren(*HAnimSite192);

CHAnimSite* HAnimSite195 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite195->setName("l_metatarsal_phalanx_5");
HAnimSite195->setDEF("hanim_l_metatarsal_phalanx_5");
CTouchSensor* TouchSensor196 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor196->setDescription("HAnimSite l_metatarsal_phalanx_5");
HAnimSite195->addChildren(*TouchSensor196);

CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
Shape197->setUSE("HAnimSiteShape");
HAnimSite195->addChildren(*Shape197);

HAnimSegment184->addChildren(*HAnimSite195);

CHAnimSite* HAnimSite198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite198->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite198->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor199 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor199->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite198->addChildren(*TouchSensor199);

CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
Shape200->setUSE("HAnimSiteShape");
HAnimSite198->addChildren(*Shape200);

HAnimSegment184->addChildren(*HAnimSite198);

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

HAnimSegment184->addChildren(*HAnimSite201);

CHAnimSite* HAnimSite204 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite204->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite204->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor205 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor205->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite204->addChildren(*TouchSensor205);

CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
Shape206->setUSE("HAnimSiteShape");
HAnimSite204->addChildren(*Shape206);

HAnimSegment184->addChildren(*HAnimSite204);

CHAnimSite* HAnimSite207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite207->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite207->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor208 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor208->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite207->addChildren(*TouchSensor208);

CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("HAnimSiteShape");
HAnimSite207->addChildren(*Shape209);

HAnimSegment184->addChildren(*HAnimSite207);

CHAnimSite* HAnimSite210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite210->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite210->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor211 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor211->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite210->addChildren(*TouchSensor211);

CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
Shape212->setUSE("HAnimSiteShape");
HAnimSite210->addChildren(*Shape212);

HAnimSegment184->addChildren(*HAnimSite210);

HAnimJoint183->addChildren(*HAnimSegment184);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("l_metatarsophalangeal_2");
HAnimJoint213->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint213->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint213->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint213->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment214->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setTranslation(new float[3]{0.0824,0.0064,-0.004});
CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("HAnimJointShape");
Transform216->addChild(*Shape217);

Transform215->addChildren(*Transform216);

HAnimSegment214->addChildren(*Transform215);

CShape* Shape218 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet219 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet219->setVertexCount(new int[1]{2});
CCoordinate* Coordinate220 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate220->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0013,0.0216});
LineSet219->setCoord(*Coordinate220);

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA221 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA221->setUSE("HAnimSegmentLineColorRGBA");
LineSet219->setColor(*ColorRGBA221);

Shape218->setGeometry(LineSet219);

HAnimSegment214->addChildren(*Shape218);

HAnimJoint213->addChildren(*HAnimSegment214);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint222->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint222->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint222->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint222->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint213->addChildren(*HAnimJoint222);

HAnimJoint183->addChildren(*HAnimJoint213);

HAnimJoint174->addChildren(*HAnimJoint183);

HAnimJoint159->addChildren(*HAnimJoint174);

HAnimJoint141->addChildren(*HAnimJoint159);

HAnimJoint104->addChildren(*HAnimJoint141);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setName("r_hip");
HAnimJoint223->setDEF("hanim_r_hip");
HAnimJoint223->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint223->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint223->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment224 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment224->setName("r_thigh");
HAnimSegment224->setDEF("hanim_r_thigh");
CTransform* Transform225 = (CTransform *)(m_pScene.createNode("Transform"));
Transform225->setTranslation(new float[3]{-0.095,0.9171,0.0029});
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
Coordinate230->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet229->setCoord(*Coordinate230);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA231 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA231->setUSE("HAnimSegmentLineColorRGBA");
LineSet229->setColor(*ColorRGBA231);

Shape228->setGeometry(LineSet229);

HAnimSegment224->addChildren(*Shape228);

CHAnimSite* HAnimSite232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite232->setName("r_lateral_malleolus");
HAnimSite232->setDEF("hanim_r_lateral_malleolus");
HAnimSite232->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor233 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor233->setDescription("HAnimSite r_lateral_malleolus");
HAnimSite232->addChildren(*TouchSensor233);

CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
Shape234->setUSE("HAnimSiteShape");
HAnimSite232->addChildren(*Shape234);

HAnimSegment224->addChildren(*HAnimSite232);

CHAnimSite* HAnimSite235 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite235->setName("r_medial_malleolus");
HAnimSite235->setDEF("hanim_r_medial_malleolus");
HAnimSite235->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor236 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor236->setDescription("HAnimSite r_medial_malleolus");
HAnimSite235->addChildren(*TouchSensor236);

CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
Shape237->setUSE("HAnimSiteShape");
HAnimSite235->addChildren(*Shape237);

HAnimSegment224->addChildren(*HAnimSite235);

CHAnimSite* HAnimSite238 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite238->setName("r_tibiale");
HAnimSite238->setDEF("hanim_r_tibiale");
CTouchSensor* TouchSensor239 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor239->setDescription("HAnimSite r_tibiale");
HAnimSite238->addChildren(*TouchSensor239);

CShape* Shape240 = (CShape *)(m_pScene.createNode("Shape"));
Shape240->setUSE("HAnimSiteShape");
HAnimSite238->addChildren(*Shape240);

HAnimSegment224->addChildren(*HAnimSite238);

HAnimJoint223->addChildren(*HAnimSegment224);

CHAnimJoint* HAnimJoint241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint241->setName("r_knee");
HAnimJoint241->setDEF("hanim_r_knee");
HAnimJoint241->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint241->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint241->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setName("r_calf");
HAnimSegment242->setDEF("hanim_r_calf");
CTransform* Transform243 = (CTransform *)(m_pScene.createNode("Transform"));
Transform243->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform244 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
Shape245->setUSE("HAnimJointShape");
Transform244->addChild(*Shape245);

Transform243->addChildren(*Transform244);

HAnimSegment242->addChildren(*Transform243);

CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet247 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet247->setVertexCount(new int[1]{2});
CCoordinate* Coordinate248 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate248->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet247->setCoord(*Coordinate248);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA249 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA249->setUSE("HAnimSegmentLineColorRGBA");
LineSet247->setColor(*ColorRGBA249);

Shape246->setGeometry(LineSet247);

HAnimSegment242->addChildren(*Shape246);

CHAnimSite* HAnimSite250 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite250->setName("r_calcaneus_posterior");
HAnimSite250->setDEF("hanim_r_calcaneus_posterior");
HAnimSite250->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor251 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor251->setDescription("HAnimSite r_calcaneus_posterior");
HAnimSite250->addChildren(*TouchSensor251);

CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
Shape252->setUSE("HAnimSiteShape");
HAnimSite250->addChildren(*Shape252);

HAnimSegment242->addChildren(*HAnimSite250);

CHAnimSite* HAnimSite253 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite253->setName("r_sphyrion");
HAnimSite253->setDEF("hanim_r_sphyrion");
HAnimSite253->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor254 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor254->setDescription("HAnimSite r_sphyrion");
HAnimSite253->addChildren(*TouchSensor254);

CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
Shape255->setUSE("HAnimSiteShape");
HAnimSite253->addChildren(*Shape255);

HAnimSegment242->addChildren(*HAnimSite253);

HAnimJoint241->addChildren(*HAnimSegment242);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setName("r_talocrural");
HAnimJoint256->setDEF("hanim_r_talocrural");
HAnimJoint256->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment257->setName("r_talus");
HAnimSegment257->setDEF("hanim_r_talus");
CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setScale(new float[3]{0.15,0.15,0.15});
Transform258->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform258->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape260 = (CShape *)(m_pScene.createNode("Shape"));
Shape260->setUSE("HAnimJointShape");
Transform259->addChild(*Shape260);

Transform258->addChildren(*Transform259);

HAnimSegment257->addChildren(*Transform258);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet262 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet262->setVertexCount(new int[1]{2});
CCoordinate* Coordinate263 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate263->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608});
LineSet262->setCoord(*Coordinate263);

//from r_talocrural to r_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA264 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA264->setUSE("HAnimSegmentLineColorRGBA");
LineSet262->setColor(*ColorRGBA264);

Shape261->setGeometry(LineSet262);

HAnimSegment257->addChildren(*Shape261);

HAnimJoint256->addChildren(*HAnimSegment257);

CHAnimJoint* HAnimJoint265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint265->setName("r_tarsometatarsal_2");
HAnimJoint265->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint265->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint265->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint265->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment266->setName("r_metatarsal_2");
HAnimSegment266->setDEF("hanim_r_metatarsal_2");
CTransform* Transform267 = (CTransform *)(m_pScene.createNode("Transform"));
Transform267->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
CTransform* Transform268 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimJointShape");
Transform268->addChild(*Shape269);

Transform267->addChildren(*Transform268);

HAnimSegment266->addChildren(*Transform267);

CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet271 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet271->setVertexCount(new int[1]{2});
CCoordinate* Coordinate272 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate272->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004});
LineSet271->setCoord(*Coordinate272);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA273 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA273->setUSE("HAnimSegmentLineColorRGBA");
LineSet271->setColor(*ColorRGBA273);

Shape270->setGeometry(LineSet271);

HAnimSegment266->addChildren(*Shape270);

CHAnimSite* HAnimSite274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite274->setName("r_metatarsal_phalanx_1");
HAnimSite274->setDEF("hanim_r_metatarsal_phalanx_1");
CTouchSensor* TouchSensor275 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor275->setDescription("HAnimSite r_metatarsal_phalanx_1");
HAnimSite274->addChildren(*TouchSensor275);

CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
Shape276->setUSE("HAnimSiteShape");
HAnimSite274->addChildren(*Shape276);

HAnimSegment266->addChildren(*HAnimSite274);

CHAnimSite* HAnimSite277 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite277->setName("r_metatarsal_phalanx_5");
HAnimSite277->setDEF("hanim_r_metatarsal_phalanx_5");
CTouchSensor* TouchSensor278 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor278->setDescription("HAnimSite r_metatarsal_phalanx_5");
HAnimSite277->addChildren(*TouchSensor278);

CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
Shape279->setUSE("HAnimSiteShape");
HAnimSite277->addChildren(*Shape279);

HAnimSegment266->addChildren(*HAnimSite277);

CHAnimSite* HAnimSite280 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite280->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite280->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor281 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor281->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite280->addChildren(*TouchSensor281);

CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
Shape282->setUSE("HAnimSiteShape");
HAnimSite280->addChildren(*Shape282);

HAnimSegment266->addChildren(*HAnimSite280);

CHAnimSite* HAnimSite283 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite283->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite283->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite283->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor284 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor284->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite283->addChildren(*TouchSensor284);

CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
Shape285->setUSE("HAnimSiteShape");
HAnimSite283->addChildren(*Shape285);

HAnimSegment266->addChildren(*HAnimSite283);

CHAnimSite* HAnimSite286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite286->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite286->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor287 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor287->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite286->addChildren(*TouchSensor287);

CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
Shape288->setUSE("HAnimSiteShape");
HAnimSite286->addChildren(*Shape288);

HAnimSegment266->addChildren(*HAnimSite286);

CHAnimSite* HAnimSite289 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite289->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite289->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor290 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor290->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite289->addChildren(*TouchSensor290);

CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("HAnimSiteShape");
HAnimSite289->addChildren(*Shape291);

HAnimSegment266->addChildren(*HAnimSite289);

CHAnimSite* HAnimSite292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite292->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite292->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor293 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor293->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite292->addChildren(*TouchSensor293);

CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("HAnimSiteShape");
HAnimSite292->addChildren(*Shape294);

HAnimSegment266->addChildren(*HAnimSite292);

HAnimJoint265->addChildren(*HAnimSegment266);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setName("r_metatarsophalangeal_2");
HAnimJoint295->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint295->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint295->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint295->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment296->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment296->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform297 = (CTransform *)(m_pScene.createNode("Transform"));
Transform297->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape299 = (CShape *)(m_pScene.createNode("Shape"));
Shape299->setUSE("HAnimJointShape");
Transform298->addChild(*Shape299);

Transform297->addChildren(*Transform298);

HAnimSegment296->addChildren(*Transform297);

CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet301 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet301->setVertexCount(new int[1]{2});
CCoordinate* Coordinate302 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate302->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216});
LineSet301->setCoord(*Coordinate302);

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA303 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA303->setUSE("HAnimSegmentLineColorRGBA");
LineSet301->setColor(*ColorRGBA303);

Shape300->setGeometry(LineSet301);

HAnimSegment296->addChildren(*Shape300);

HAnimJoint295->addChildren(*HAnimSegment296);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint304->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint304->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint304->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint304->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint295->addChildren(*HAnimJoint304);

HAnimJoint265->addChildren(*HAnimJoint295);

HAnimJoint256->addChildren(*HAnimJoint265);

HAnimJoint241->addChildren(*HAnimJoint256);

HAnimJoint223->addChildren(*HAnimJoint241);

HAnimJoint104->addChildren(*HAnimJoint223);

HAnimJoint52->addChildren(*HAnimJoint104);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setName("vl5");
HAnimJoint305->setDEF("hanim_vl5");
HAnimJoint305->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint305->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint305->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setName("l5");
HAnimSegment306->setDEF("hanim_l5");
CTransform* Transform307 = (CTransform *)(m_pScene.createNode("Transform"));
Transform307->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimJointShape");
Transform308->addChild(*Shape309);

Transform307->addChildren(*Transform308);

HAnimSegment306->addChildren(*Transform307);

CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet311 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet311->setVertexCount(new int[1]{2});
CCoordinate* Coordinate312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate312->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796});
LineSet311->setCoord(*Coordinate312);

//from vl5 to vl3 vertices 2
CColorRGBA* ColorRGBA313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA313->setUSE("HAnimSegmentLineColorRGBA");
LineSet311->setColor(*ColorRGBA313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChildren(*Shape310);

CHAnimSite* HAnimSite314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite314->setName("l_rib10");
HAnimSite314->setDEF("hanim_l_rib10");
HAnimSite314->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor315 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor315->setDescription("HAnimSite l_rib10");
HAnimSite314->addChildren(*TouchSensor315);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
Shape316->setUSE("HAnimSiteShape");
HAnimSite314->addChildren(*Shape316);

HAnimSegment306->addChildren(*HAnimSite314);

CHAnimSite* HAnimSite317 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite317->setName("r_rib10");
HAnimSite317->setDEF("hanim_r_rib10");
HAnimSite317->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor318 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor318->setDescription("HAnimSite r_rib10");
HAnimSite317->addChildren(*TouchSensor318);

CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
Shape319->setUSE("HAnimSiteShape");
HAnimSite317->addChildren(*Shape319);

HAnimSegment306->addChildren(*HAnimSite317);

CHAnimSite* HAnimSite320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite320->setName("spine_1_middle_back");
HAnimSite320->setDEF("hanim_spine_1_middle_back");
CTouchSensor* TouchSensor321 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor321->setDescription("HAnimSite spine_1_middle_back");
HAnimSite320->addChildren(*TouchSensor321);

CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
Shape322->setUSE("HAnimSiteShape");
HAnimSite320->addChildren(*Shape322);

HAnimSegment306->addChildren(*HAnimSite320);

CHAnimSite* HAnimSite323 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite323->setName("spine_2_middle_back");
HAnimSite323->setDEF("hanim_spine_2_middle_back");
CTouchSensor* TouchSensor324 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor324->setDescription("HAnimSite spine_2_middle_back");
HAnimSite323->addChildren(*TouchSensor324);

CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
Shape325->setUSE("HAnimSiteShape");
HAnimSite323->addChildren(*Shape325);

HAnimSegment306->addChildren(*HAnimSite323);

HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint326->setName("vl3");
HAnimJoint326->setDEF("hanim_vl3");
HAnimJoint326->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint326->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint326->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment327->setName("l3");
HAnimSegment327->setDEF("hanim_l3");
CTransform* Transform328 = (CTransform *)(m_pScene.createNode("Transform"));
Transform328->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform329 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape330 = (CShape *)(m_pScene.createNode("Shape"));
Shape330->setUSE("HAnimJointShape");
Transform329->addChild(*Shape330);

Transform328->addChildren(*Transform329);

HAnimSegment327->addChildren(*Transform328);

CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet332 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet332->setVertexCount(new int[1]{2});
CCoordinate* Coordinate333 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate333->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805});
LineSet332->setCoord(*Coordinate333);

//from vl3 to vl1 vertices 2
CColorRGBA* ColorRGBA334 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA334->setUSE("HAnimSegmentLineColorRGBA");
LineSet332->setColor(*ColorRGBA334);

Shape331->setGeometry(LineSet332);

HAnimSegment327->addChildren(*Shape331);

HAnimJoint326->addChildren(*HAnimSegment327);

CHAnimJoint* HAnimJoint335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint335->setName("vl1");
HAnimJoint335->setDEF("hanim_vl1");
HAnimJoint335->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint335->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint335->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment336->setName("l1");
HAnimSegment336->setDEF("hanim_l1");
CTransform* Transform337 = (CTransform *)(m_pScene.createNode("Transform"));
Transform337->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
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
Coordinate342->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822});
LineSet341->setCoord(*Coordinate342);

//from vl1 to vt10 vertices 2
CColorRGBA* ColorRGBA343 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA343->setUSE("HAnimSegmentLineColorRGBA");
LineSet341->setColor(*ColorRGBA343);

Shape340->setGeometry(LineSet341);

HAnimSegment336->addChildren(*Shape340);

CHAnimSite* HAnimSite344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite344->setName("l_thelion");
HAnimSite344->setDEF("hanim_l_thelion");
HAnimSite344->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor345 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor345->setDescription("HAnimSite l_thelion");
HAnimSite344->addChildren(*TouchSensor345);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
Shape346->setUSE("HAnimSiteShape");
HAnimSite344->addChildren(*Shape346);

HAnimSegment336->addChildren(*HAnimSite344);

CHAnimSite* HAnimSite347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite347->setName("r_thelion");
HAnimSite347->setDEF("hanim_r_thelion");
HAnimSite347->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor348 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor348->setDescription("HAnimSite r_thelion");
HAnimSite347->addChildren(*TouchSensor348);

CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
Shape349->setUSE("HAnimSiteShape");
HAnimSite347->addChildren(*Shape349);

HAnimSegment336->addChildren(*HAnimSite347);

CHAnimSite* HAnimSite350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite350->setName("substernale");
HAnimSite350->setDEF("hanim_substernale");
HAnimSite350->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor351 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor351->setDescription("HAnimSite substernale");
HAnimSite350->addChildren(*TouchSensor351);

CShape* Shape352 = (CShape *)(m_pScene.createNode("Shape"));
Shape352->setUSE("HAnimSiteShape");
HAnimSite350->addChildren(*Shape352);

HAnimSegment336->addChildren(*HAnimSite350);

HAnimJoint335->addChildren(*HAnimSegment336);

CHAnimJoint* HAnimJoint353 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint353->setName("vt10");
HAnimJoint353->setDEF("hanim_vt10");
HAnimJoint353->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint353->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint353->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment354 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment354->setName("t10");
HAnimSegment354->setDEF("hanim_t10");
CTransform* Transform355 = (CTransform *)(m_pScene.createNode("Transform"));
Transform355->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform356 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape357 = (CShape *)(m_pScene.createNode("Shape"));
Shape357->setUSE("HAnimJointShape");
Transform356->addChild(*Shape357);

Transform355->addChildren(*Transform356);

HAnimSegment354->addChildren(*Transform355);

CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet359 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet359->setVertexCount(new int[1]{2});
CCoordinate* Coordinate360 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate360->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08});
LineSet359->setCoord(*Coordinate360);

//from vt10 to vt6 vertices 2
CColorRGBA* ColorRGBA361 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA361->setUSE("HAnimSegmentLineColorRGBA");
LineSet359->setColor(*ColorRGBA361);

Shape358->setGeometry(LineSet359);

HAnimSegment354->addChildren(*Shape358);

CHAnimSite* HAnimSite362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite362->setName("l_chest_midsagittal_plane");
HAnimSite362->setDEF("hanim_l_chest_midsagittal_plane");
CTouchSensor* TouchSensor363 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor363->setDescription("HAnimSite l_chest_midsagittal_plane");
HAnimSite362->addChildren(*TouchSensor363);

CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
Shape364->setUSE("HAnimSiteShape");
HAnimSite362->addChildren(*Shape364);

HAnimSegment354->addChildren(*HAnimSite362);

CHAnimSite* HAnimSite365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite365->setName("mesosternale");
HAnimSite365->setDEF("hanim_mesosternale");
CTouchSensor* TouchSensor366 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor366->setDescription("HAnimSite mesosternale");
HAnimSite365->addChildren(*TouchSensor366);

CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
Shape367->setUSE("HAnimSiteShape");
HAnimSite365->addChildren(*Shape367);

HAnimSegment354->addChildren(*HAnimSite365);

CHAnimSite* HAnimSite368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite368->setName("r_chest_midsagittal_plane");
HAnimSite368->setDEF("hanim_r_chest_midsagittal_plane");
CTouchSensor* TouchSensor369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor369->setDescription("HAnimSite r_chest_midsagittal_plane");
HAnimSite368->addChildren(*TouchSensor369);

CShape* Shape370 = (CShape *)(m_pScene.createNode("Shape"));
Shape370->setUSE("HAnimSiteShape");
HAnimSite368->addChildren(*Shape370);

HAnimSegment354->addChildren(*HAnimSite368);

CHAnimSite* HAnimSite371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite371->setName("rear_center_midsagittal_plane");
HAnimSite371->setDEF("hanim_rear_center_midsagittal_plane");
CTouchSensor* TouchSensor372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor372->setDescription("HAnimSite rear_center_midsagittal_plane");
HAnimSite371->addChildren(*TouchSensor372);

CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
Shape373->setUSE("HAnimSiteShape");
HAnimSite371->addChildren(*Shape373);

HAnimSegment354->addChildren(*HAnimSite371);

HAnimJoint353->addChildren(*HAnimSegment354);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setName("vt6");
HAnimJoint374->setDEF("hanim_vt6");
HAnimJoint374->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint374->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint374->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment375 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment375->setName("t6");
HAnimSegment375->setDEF("hanim_t6");
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
Transform376->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform377 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
Shape378->setUSE("HAnimJointShape");
Transform377->addChild(*Shape378);

Transform376->addChildren(*Transform377);

HAnimSegment375->addChildren(*Transform376);

CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet380 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet380->setVertexCount(new int[1]{2});
CCoordinate* Coordinate381 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate381->setPoint(new float[6]{0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387});
LineSet380->setCoord(*Coordinate381);

//from vt6 to vt1 vertices 2
CColorRGBA* ColorRGBA382 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA382->setUSE("HAnimSegmentLineColorRGBA");
LineSet380->setColor(*ColorRGBA382);

Shape379->setGeometry(LineSet380);

HAnimSegment375->addChildren(*Shape379);

CHAnimSite* HAnimSite383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite383->setName("cervicale");
HAnimSite383->setDEF("hanim_cervicale");
HAnimSite383->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor384 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor384->setDescription("HAnimSite cervicale");
HAnimSite383->addChildren(*TouchSensor384);

CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
Shape385->setUSE("HAnimSiteShape");
HAnimSite383->addChildren(*Shape385);

HAnimSegment375->addChildren(*HAnimSite383);

CHAnimSite* HAnimSite386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite386->setName("l_neck_base");
HAnimSite386->setDEF("hanim_l_neck_base");
HAnimSite386->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor387->setDescription("HAnimSite l_neck_base");
HAnimSite386->addChildren(*TouchSensor387);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
Shape388->setUSE("HAnimSiteShape");
HAnimSite386->addChildren(*Shape388);

HAnimSegment375->addChildren(*HAnimSite386);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setName("r_neck_base");
HAnimSite389->setDEF("hanim_r_neck_base");
HAnimSite389->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor390->setDescription("HAnimSite r_neck_base");
HAnimSite389->addChildren(*TouchSensor390);

CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
Shape391->setUSE("HAnimSiteShape");
HAnimSite389->addChildren(*Shape391);

HAnimSegment375->addChildren(*HAnimSite389);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setName("suprasternale");
HAnimSite392->setDEF("hanim_suprasternale");
HAnimSite392->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor393->setDescription("HAnimSite suprasternale");
HAnimSite392->addChildren(*TouchSensor393);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(*Shape394);

HAnimSegment375->addChildren(*HAnimSite392);

HAnimJoint374->addChildren(*HAnimSegment375);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setName("vt1");
HAnimJoint395->setDEF("hanim_vt1");
HAnimJoint395->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint395->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint395->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment396 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment396->setName("t1");
HAnimSegment396->setDEF("hanim_t1");
CTransform* Transform397 = (CTransform *)(m_pScene.createNode("Transform"));
Transform397->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform398 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape399 = (CShape *)(m_pScene.createNode("Shape"));
Shape399->setUSE("HAnimJointShape");
Transform398->addChild(*Shape399);

Transform397->addChildren(*Transform398);

HAnimSegment396->addChildren(*Transform397);

CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet401 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet401->setVertexCount(new int[1]{2});
CCoordinate* Coordinate402 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate402->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084});
LineSet401->setCoord(*Coordinate402);

//from vt1 to vc4 vertices 2
CColorRGBA* ColorRGBA403 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA403->setUSE("HAnimSegmentLineColorRGBA");
LineSet401->setColor(*ColorRGBA403);

Shape400->setGeometry(LineSet401);

HAnimSegment396->addChildren(*Shape400);

CShape* Shape404 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet405 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet405->setVertexCount(new int[1]{2});
CCoordinate* Coordinate406 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate406->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet405->setCoord(*Coordinate406);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA407 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA407->setUSE("HAnimSegmentLineColorRGBA");
LineSet405->setColor(*ColorRGBA407);

Shape404->setGeometry(LineSet405);

HAnimSegment396->addChildren(*Shape404);

CHAnimSite* HAnimSite408 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite408->setName("l_acromion");
HAnimSite408->setDEF("hanim_l_acromion");
HAnimSite408->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor409 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor409->setDescription("HAnimSite l_acromion");
HAnimSite408->addChildren(*TouchSensor409);

CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
Shape410->setUSE("HAnimSiteShape");
HAnimSite408->addChildren(*Shape410);

HAnimSegment396->addChildren(*HAnimSite408);

CHAnimSite* HAnimSite411 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite411->setName("l_axilla_distal_pt");
HAnimSite411->setDEF("hanim_l_axilla_distal_pt");
HAnimSite411->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor412 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor412->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite411->addChildren(*TouchSensor412);

CShape* Shape413 = (CShape *)(m_pScene.createNode("Shape"));
Shape413->setUSE("HAnimSiteShape");
HAnimSite411->addChildren(*Shape413);

HAnimSegment396->addChildren(*HAnimSite411);

CHAnimSite* HAnimSite414 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite414->setName("l_axilla_posterior_folds");
HAnimSite414->setDEF("hanim_l_axilla_posterior_folds");
CTouchSensor* TouchSensor415 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor415->setDescription("HAnimSite l_axilla_posterior_folds");
HAnimSite414->addChildren(*TouchSensor415);

CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
Shape416->setUSE("HAnimSiteShape");
HAnimSite414->addChildren(*Shape416);

HAnimSegment396->addChildren(*HAnimSite414);

CHAnimSite* HAnimSite417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite417->setName("l_axilla_proximal");
HAnimSite417->setDEF("hanim_l_axilla_proximal");
HAnimSite417->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor418 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor418->setDescription("HAnimSite l_axilla_proximal");
HAnimSite417->addChildren(*TouchSensor418);

CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
Shape419->setUSE("HAnimSiteShape");
HAnimSite417->addChildren(*Shape419);

HAnimSegment396->addChildren(*HAnimSite417);

CHAnimSite* HAnimSite420 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite420->setName("l_clavicale");
HAnimSite420->setDEF("hanim_l_clavicale");
HAnimSite420->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor421 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor421->setDescription("HAnimSite l_clavicale");
HAnimSite420->addChildren(*TouchSensor421);

CShape* Shape422 = (CShape *)(m_pScene.createNode("Shape"));
Shape422->setUSE("HAnimSiteShape");
HAnimSite420->addChildren(*Shape422);

HAnimSegment396->addChildren(*HAnimSite420);

CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet424 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet424->setVertexCount(new int[1]{2});
CCoordinate* Coordinate425 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate425->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet424->setCoord(*Coordinate425);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA426 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA426->setUSE("HAnimSegmentLineColorRGBA");
LineSet424->setColor(*ColorRGBA426);

Shape423->setGeometry(LineSet424);

HAnimSegment396->addChildren(*Shape423);

CHAnimSite* HAnimSite427 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite427->setName("r_acromion");
HAnimSite427->setDEF("hanim_r_acromion");
HAnimSite427->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor428 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor428->setDescription("HAnimSite r_acromion");
HAnimSite427->addChildren(*TouchSensor428);

CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
Shape429->setUSE("HAnimSiteShape");
HAnimSite427->addChildren(*Shape429);

HAnimSegment396->addChildren(*HAnimSite427);

CHAnimSite* HAnimSite430 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite430->setName("r_axilla_distal_pt");
HAnimSite430->setDEF("hanim_r_axilla_distal_pt");
HAnimSite430->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor431 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor431->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite430->addChildren(*TouchSensor431);

CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("HAnimSiteShape");
HAnimSite430->addChildren(*Shape432);

HAnimSegment396->addChildren(*HAnimSite430);

CHAnimSite* HAnimSite433 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite433->setName("r_axilla_posterior_folds");
HAnimSite433->setDEF("hanim_r_axilla_posterior_folds");
CTouchSensor* TouchSensor434 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor434->setDescription("HAnimSite r_axilla_posterior_folds");
HAnimSite433->addChildren(*TouchSensor434);

CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
Shape435->setUSE("HAnimSiteShape");
HAnimSite433->addChildren(*Shape435);

HAnimSegment396->addChildren(*HAnimSite433);

CHAnimSite* HAnimSite436 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite436->setName("r_axilla_proximal");
HAnimSite436->setDEF("hanim_r_axilla_proximal");
HAnimSite436->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor437 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor437->setDescription("HAnimSite r_axilla_proximal");
HAnimSite436->addChildren(*TouchSensor437);

CShape* Shape438 = (CShape *)(m_pScene.createNode("Shape"));
Shape438->setUSE("HAnimSiteShape");
HAnimSite436->addChildren(*Shape438);

HAnimSegment396->addChildren(*HAnimSite436);

CHAnimSite* HAnimSite439 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite439->setName("r_clavicale");
HAnimSite439->setDEF("hanim_r_clavicale");
HAnimSite439->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor440 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor440->setDescription("HAnimSite r_clavicale");
HAnimSite439->addChildren(*TouchSensor440);

CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setUSE("HAnimSiteShape");
HAnimSite439->addChildren(*Shape441);

HAnimSegment396->addChildren(*HAnimSite439);

HAnimJoint395->addChildren(*HAnimSegment396);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setName("vc4");
HAnimJoint442->setDEF("hanim_vc4");
HAnimJoint442->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint442->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint442->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment443 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment443->setName("c4");
HAnimSegment443->setDEF("hanim_c4");
CTransform* Transform444 = (CTransform *)(m_pScene.createNode("Transform"));
Transform444->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape446 = (CShape *)(m_pScene.createNode("Shape"));
Shape446->setUSE("HAnimJointShape");
Transform445->addChild(*Shape446);

Transform444->addChildren(*Transform445);

HAnimSegment443->addChildren(*Transform444);

CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet448 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet448->setVertexCount(new int[1]{2});
CCoordinate* Coordinate449 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate449->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103});
LineSet448->setCoord(*Coordinate449);

//from vc4 to vc2 vertices 2
CColorRGBA* ColorRGBA450 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA450->setUSE("HAnimSegmentLineColorRGBA");
LineSet448->setColor(*ColorRGBA450);

Shape447->setGeometry(LineSet448);

HAnimSegment443->addChildren(*Shape447);

CHAnimSite* HAnimSite451 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite451->setName("adams_apple");
HAnimSite451->setDEF("hanim_adams_apple");
CTouchSensor* TouchSensor452 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor452->setDescription("HAnimSite adams_apple");
HAnimSite451->addChildren(*TouchSensor452);

CShape* Shape453 = (CShape *)(m_pScene.createNode("Shape"));
Shape453->setUSE("HAnimSiteShape");
HAnimSite451->addChildren(*Shape453);

HAnimSegment443->addChildren(*HAnimSite451);

HAnimJoint442->addChildren(*HAnimSegment443);

CHAnimJoint* HAnimJoint454 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint454->setName("vc2");
HAnimJoint454->setDEF("hanim_vc2");
HAnimJoint454->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint454->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint454->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment455 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment455->setName("c2");
HAnimSegment455->setDEF("hanim_c2");
CTransform* Transform456 = (CTransform *)(m_pScene.createNode("Transform"));
Transform456->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform457 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape458 = (CShape *)(m_pScene.createNode("Shape"));
Shape458->setUSE("HAnimJointShape");
Transform457->addChild(*Shape458);

Transform456->addChildren(*Transform457);

HAnimSegment455->addChildren(*Transform456);

CShape* Shape459 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet460 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet460->setVertexCount(new int[1]{2});
CCoordinate* Coordinate461 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate461->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236});
LineSet460->setCoord(*Coordinate461);

//from vc2 to skullbase vertices 2
CColorRGBA* ColorRGBA462 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA462->setUSE("HAnimSegmentLineColorRGBA");
LineSet460->setColor(*ColorRGBA462);

Shape459->setGeometry(LineSet460);

HAnimSegment455->addChildren(*Shape459);

CHAnimSite* HAnimSite463 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite463->setName("glabella");
HAnimSite463->setDEF("hanim_glabella");
CTouchSensor* TouchSensor464 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor464->setDescription("HAnimSite glabella");
HAnimSite463->addChildren(*TouchSensor464);

CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("HAnimSiteShape");
HAnimSite463->addChildren(*Shape465);

HAnimSegment455->addChildren(*HAnimSite463);

CHAnimSite* HAnimSite466 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite466->setName("l_ectocanthus");
HAnimSite466->setDEF("hanim_l_ectocanthus");
CTouchSensor* TouchSensor467 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor467->setDescription("HAnimSite l_ectocanthus");
HAnimSite466->addChildren(*TouchSensor467);

CShape* Shape468 = (CShape *)(m_pScene.createNode("Shape"));
Shape468->setUSE("HAnimSiteShape");
HAnimSite466->addChildren(*Shape468);

HAnimSegment455->addChildren(*HAnimSite466);

CHAnimSite* HAnimSite469 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite469->setName("l_gonion");
HAnimSite469->setDEF("hanim_l_gonion");
HAnimSite469->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor470 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor470->setDescription("HAnimSite l_gonion");
HAnimSite469->addChildren(*TouchSensor470);

CShape* Shape471 = (CShape *)(m_pScene.createNode("Shape"));
Shape471->setUSE("HAnimSiteShape");
HAnimSite469->addChildren(*Shape471);

HAnimSegment455->addChildren(*HAnimSite469);

CHAnimSite* HAnimSite472 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite472->setName("l_infraorbitale");
HAnimSite472->setDEF("hanim_l_infraorbitale");
HAnimSite472->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor473 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor473->setDescription("HAnimSite l_infraorbitale");
HAnimSite472->addChildren(*TouchSensor473);

CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
Shape474->setUSE("HAnimSiteShape");
HAnimSite472->addChildren(*Shape474);

HAnimSegment455->addChildren(*HAnimSite472);

CHAnimSite* HAnimSite475 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite475->setName("l_tragion");
HAnimSite475->setDEF("hanim_l_tragion");
HAnimSite475->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor476 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor476->setDescription("HAnimSite l_tragion");
HAnimSite475->addChildren(*TouchSensor476);

CShape* Shape477 = (CShape *)(m_pScene.createNode("Shape"));
Shape477->setUSE("HAnimSiteShape");
HAnimSite475->addChildren(*Shape477);

HAnimSegment455->addChildren(*HAnimSite475);

CHAnimSite* HAnimSite478 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite478->setName("menton");
HAnimSite478->setDEF("hanim_menton");
CTouchSensor* TouchSensor479 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor479->setDescription("HAnimSite menton");
HAnimSite478->addChildren(*TouchSensor479);

CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
Shape480->setUSE("HAnimSiteShape");
HAnimSite478->addChildren(*Shape480);

HAnimSegment455->addChildren(*HAnimSite478);

CHAnimSite* HAnimSite481 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite481->setName("nuchale");
HAnimSite481->setDEF("hanim_nuchale");
HAnimSite481->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor482 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor482->setDescription("HAnimSite nuchale");
HAnimSite481->addChildren(*TouchSensor482);

CShape* Shape483 = (CShape *)(m_pScene.createNode("Shape"));
Shape483->setUSE("HAnimSiteShape");
HAnimSite481->addChildren(*Shape483);

HAnimSegment455->addChildren(*HAnimSite481);

CHAnimSite* HAnimSite484 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite484->setName("opisthocranion");
HAnimSite484->setDEF("hanim_opisthocranion");
CTouchSensor* TouchSensor485 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor485->setDescription("HAnimSite opisthocranion");
HAnimSite484->addChildren(*TouchSensor485);

CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("HAnimSiteShape");
HAnimSite484->addChildren(*Shape486);

HAnimSegment455->addChildren(*HAnimSite484);

CHAnimSite* HAnimSite487 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite487->setName("r_ectocanthus");
HAnimSite487->setDEF("hanim_r_ectocanthus");
CTouchSensor* TouchSensor488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor488->setDescription("HAnimSite r_ectocanthus");
HAnimSite487->addChildren(*TouchSensor488);

CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
Shape489->setUSE("HAnimSiteShape");
HAnimSite487->addChildren(*Shape489);

HAnimSegment455->addChildren(*HAnimSite487);

CHAnimSite* HAnimSite490 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite490->setName("r_gonion");
HAnimSite490->setDEF("hanim_r_gonion");
HAnimSite490->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor491 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor491->setDescription("HAnimSite r_gonion");
HAnimSite490->addChildren(*TouchSensor491);

CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
Shape492->setUSE("HAnimSiteShape");
HAnimSite490->addChildren(*Shape492);

HAnimSegment455->addChildren(*HAnimSite490);

CHAnimSite* HAnimSite493 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite493->setName("r_infraorbitale");
HAnimSite493->setDEF("hanim_r_infraorbitale");
HAnimSite493->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor494 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor494->setDescription("HAnimSite r_infraorbitale");
HAnimSite493->addChildren(*TouchSensor494);

CShape* Shape495 = (CShape *)(m_pScene.createNode("Shape"));
Shape495->setUSE("HAnimSiteShape");
HAnimSite493->addChildren(*Shape495);

HAnimSegment455->addChildren(*HAnimSite493);

CHAnimSite* HAnimSite496 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite496->setName("r_tragion");
HAnimSite496->setDEF("hanim_r_tragion");
HAnimSite496->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor497 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor497->setDescription("HAnimSite r_tragion");
HAnimSite496->addChildren(*TouchSensor497);

CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
Shape498->setUSE("HAnimSiteShape");
HAnimSite496->addChildren(*Shape498);

HAnimSegment455->addChildren(*HAnimSite496);

CHAnimSite* HAnimSite499 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite499->setName("sellion");
HAnimSite499->setDEF("hanim_sellion");
HAnimSite499->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor500 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor500->setDescription("HAnimSite sellion");
HAnimSite499->addChildren(*TouchSensor500);

CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
Shape501->setUSE("HAnimSiteShape");
HAnimSite499->addChildren(*Shape501);

HAnimSegment455->addChildren(*HAnimSite499);

CHAnimSite* HAnimSite502 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite502->setName("skull_vertex");
HAnimSite502->setDEF("hanim_skull_vertex");
CTouchSensor* TouchSensor503 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor503->setDescription("HAnimSite skull_vertex");
HAnimSite502->addChildren(*TouchSensor503);

CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
Shape504->setUSE("HAnimSiteShape");
HAnimSite502->addChildren(*Shape504);

HAnimSegment455->addChildren(*HAnimSite502);

CHAnimSite* HAnimSite505 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite505->setName("supramenton");
HAnimSite505->setDEF("hanim_supramenton");
HAnimSite505->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor506 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor506->setDescription("HAnimSite supramenton");
HAnimSite505->addChildren(*TouchSensor506);

CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
Shape507->setUSE("HAnimSiteShape");
HAnimSite505->addChildren(*Shape507);

HAnimSegment455->addChildren(*HAnimSite505);

HAnimJoint454->addChildren(*HAnimSegment455);

CHAnimJoint* HAnimJoint508 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint508->setName("skullbase");
HAnimJoint508->setDEF("hanim_skullbase");
HAnimJoint508->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint508->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint508->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint454->addChildren(*HAnimJoint508);

HAnimJoint442->addChildren(*HAnimJoint454);

HAnimJoint395->addChildren(*HAnimJoint442);

CHAnimJoint* HAnimJoint509 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint509->setName("l_sternoclavicular");
HAnimJoint509->setDEF("hanim_l_sternoclavicular");
HAnimJoint509->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint509->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint509->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment510->setName("l_clavicle");
HAnimSegment510->setDEF("hanim_l_clavicle");
CTransform* Transform511 = (CTransform *)(m_pScene.createNode("Transform"));
Transform511->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform512 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape513 = (CShape *)(m_pScene.createNode("Shape"));
Shape513->setUSE("HAnimJointShape");
Transform512->addChild(*Shape513);

Transform511->addChildren(*Transform512);

HAnimSegment510->addChildren(*Transform511);

CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet515 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet515->setVertexCount(new int[1]{2});
CCoordinate* Coordinate516 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate516->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet515->setCoord(*Coordinate516);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA517 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA517->setUSE("HAnimSegmentLineColorRGBA");
LineSet515->setColor(*ColorRGBA517);

Shape514->setGeometry(LineSet515);

HAnimSegment510->addChildren(*Shape514);

HAnimJoint509->addChildren(*HAnimSegment510);

CHAnimJoint* HAnimJoint518 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint518->setName("l_acromioclavicular");
HAnimJoint518->setDEF("hanim_l_acromioclavicular");
HAnimJoint518->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint518->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint518->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment519 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment519->setName("l_scapula");
HAnimSegment519->setDEF("hanim_l_scapula");
CTransform* Transform520 = (CTransform *)(m_pScene.createNode("Transform"));
Transform520->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform521 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape522 = (CShape *)(m_pScene.createNode("Shape"));
Shape522->setUSE("HAnimJointShape");
Transform521->addChild(*Shape522);

Transform520->addChildren(*Transform521);

HAnimSegment519->addChildren(*Transform520);

CShape* Shape523 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet524 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet524->setVertexCount(new int[1]{2});
CCoordinate* Coordinate525 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate525->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet524->setCoord(*Coordinate525);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA526 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA526->setUSE("HAnimSegmentLineColorRGBA");
LineSet524->setColor(*ColorRGBA526);

Shape523->setGeometry(LineSet524);

HAnimSegment519->addChildren(*Shape523);

CHAnimSite* HAnimSite527 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite527->setName("l_bideltoid");
HAnimSite527->setDEF("hanim_l_bideltoid");
CTouchSensor* TouchSensor528 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor528->setDescription("HAnimSite l_bideltoid");
HAnimSite527->addChildren(*TouchSensor528);

CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
Shape529->setUSE("HAnimSiteShape");
HAnimSite527->addChildren(*Shape529);

HAnimSegment519->addChildren(*HAnimSite527);

CHAnimSite* HAnimSite530 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite530->setName("l_humeral_lateral_epicondyles");
HAnimSite530->setDEF("hanim_l_humeral_lateral_epicondyles");
HAnimSite530->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor531 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor531->setDescription("HAnimSite l_humeral_lateral_epicondyles");
HAnimSite530->addChildren(*TouchSensor531);

CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("HAnimSiteShape");
HAnimSite530->addChildren(*Shape532);

HAnimSegment519->addChildren(*HAnimSite530);

HAnimJoint518->addChildren(*HAnimSegment519);

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
CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
Shape537->setUSE("HAnimJointShape");
Transform536->addChild(*Shape537);

Transform535->addChildren(*Transform536);

HAnimSegment534->addChildren(*Transform535);

CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet539 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet539->setVertexCount(new int[1]{2});
CCoordinate* Coordinate540 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate540->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet539->setCoord(*Coordinate540);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA541 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA541->setUSE("HAnimSegmentLineColorRGBA");
LineSet539->setColor(*ColorRGBA541);

Shape538->setGeometry(LineSet539);

HAnimSegment534->addChildren(*Shape538);

CHAnimSite* HAnimSite542 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite542->setName("l_humeral_medial_epicondyles");
HAnimSite542->setDEF("hanim_l_humeral_medial_epicondyles");
HAnimSite542->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor543 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor543->setDescription("HAnimSite l_humeral_medial_epicondyles");
HAnimSite542->addChildren(*TouchSensor543);

CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
Shape544->setUSE("HAnimSiteShape");
HAnimSite542->addChildren(*Shape544);

HAnimSegment534->addChildren(*HAnimSite542);

CHAnimSite* HAnimSite545 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite545->setName("l_olecranon");
HAnimSite545->setDEF("hanim_l_olecranon");
HAnimSite545->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor546 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor546->setDescription("HAnimSite l_olecranon");
HAnimSite545->addChildren(*TouchSensor546);

CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
Shape547->setUSE("HAnimSiteShape");
HAnimSite545->addChildren(*Shape547);

HAnimSegment534->addChildren(*HAnimSite545);

CHAnimSite* HAnimSite548 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite548->setName("l_radial_styloid");
HAnimSite548->setDEF("hanim_l_radial_styloid");
HAnimSite548->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor549 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor549->setDescription("HAnimSite l_radial_styloid");
HAnimSite548->addChildren(*TouchSensor549);

CShape* Shape550 = (CShape *)(m_pScene.createNode("Shape"));
Shape550->setUSE("HAnimSiteShape");
HAnimSite548->addChildren(*Shape550);

HAnimSegment534->addChildren(*HAnimSite548);

CHAnimSite* HAnimSite551 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite551->setName("l_radiale");
HAnimSite551->setDEF("hanim_l_radiale");
HAnimSite551->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor552 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor552->setDescription("HAnimSite l_radiale");
HAnimSite551->addChildren(*TouchSensor552);

CShape* Shape553 = (CShape *)(m_pScene.createNode("Shape"));
Shape553->setUSE("HAnimSiteShape");
HAnimSite551->addChildren(*Shape553);

HAnimSegment534->addChildren(*HAnimSite551);

HAnimJoint533->addChildren(*HAnimSegment534);

CHAnimJoint* HAnimJoint554 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint554->setName("l_elbow");
HAnimJoint554->setDEF("hanim_l_elbow");
HAnimJoint554->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint554->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint554->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment555 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment555->setName("l_forearm");
HAnimSegment555->setDEF("hanim_l_forearm");
CTransform* Transform556 = (CTransform *)(m_pScene.createNode("Transform"));
Transform556->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform557 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
Shape558->setUSE("HAnimJointShape");
Transform557->addChild(*Shape558);

Transform556->addChildren(*Transform557);

HAnimSegment555->addChildren(*Transform556);

CShape* Shape559 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet560 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet560->setVertexCount(new int[1]{2});
CCoordinate* Coordinate561 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate561->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet560->setCoord(*Coordinate561);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA562 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA562->setUSE("HAnimSegmentLineColorRGBA");
LineSet560->setColor(*ColorRGBA562);

Shape559->setGeometry(LineSet560);

HAnimSegment555->addChildren(*Shape559);

CHAnimSite* HAnimSite563 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite563->setName("l_ulnar_styloid");
HAnimSite563->setDEF("hanim_l_ulnar_styloid");
HAnimSite563->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor564 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor564->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite563->addChildren(*TouchSensor564);

CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
Shape565->setUSE("HAnimSiteShape");
HAnimSite563->addChildren(*Shape565);

HAnimSegment555->addChildren(*HAnimSite563);

HAnimJoint554->addChildren(*HAnimSegment555);

CHAnimJoint* HAnimJoint566 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint566->setName("l_radiocarpal");
HAnimJoint566->setDEF("hanim_l_radiocarpal");
HAnimJoint566->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint566->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint566->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment567 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment567->setName("l_carpal");
HAnimSegment567->setDEF("hanim_l_carpal");
CTransform* Transform568 = (CTransform *)(m_pScene.createNode("Transform"));
Transform568->setScale(new float[3]{0.2,0.2,0.2});
Transform568->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform568->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform569 = (CTransform *)(m_pScene.createNode("Transform"));
Transform569->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape570 = (CShape *)(m_pScene.createNode("Shape"));
Shape570->setUSE("HAnimJointShape");
Transform569->addChild(*Shape570);

Transform568->addChildren(*Transform569);

HAnimSegment567->addChildren(*Transform568);

CShape* Shape571 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet572 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet572->setVertexCount(new int[1]{2});
CCoordinate* Coordinate573 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate573->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet572->setCoord(*Coordinate573);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA574 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA574->setUSE("HAnimSegmentLineColorRGBA");
LineSet572->setColor(*ColorRGBA574);

Shape571->setGeometry(LineSet572);

HAnimSegment567->addChildren(*Shape571);

CShape* Shape575 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet576 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet576->setVertexCount(new int[1]{2});
CCoordinate* Coordinate577 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate577->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet576->setCoord(*Coordinate577);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA578 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA578->setUSE("HAnimSegmentLineColorRGBA");
LineSet576->setColor(*ColorRGBA578);

Shape575->setGeometry(LineSet576);

HAnimSegment567->addChildren(*Shape575);

CHAnimSite* HAnimSite579 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite579->setName("l_metacarpal_phalanx_2");
HAnimSite579->setDEF("hanim_l_metacarpal_phalanx_2");
HAnimSite579->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor580 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor580->setDescription("HAnimSite l_metacarpal_phalanx_2");
HAnimSite579->addChildren(*TouchSensor580);

CShape* Shape581 = (CShape *)(m_pScene.createNode("Shape"));
Shape581->setUSE("HAnimSiteShape");
HAnimSite579->addChildren(*Shape581);

HAnimSegment567->addChildren(*HAnimSite579);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet583 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet583->setVertexCount(new int[1]{2});
CCoordinate* Coordinate584 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate584->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet583->setCoord(*Coordinate584);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA585 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA585->setUSE("HAnimSegmentLineColorRGBA");
LineSet583->setColor(*ColorRGBA585);

Shape582->setGeometry(LineSet583);

HAnimSegment567->addChildren(*Shape582);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setName("l_metacarpal_phalanx_3");
HAnimSite586->setDEF("hanim_l_metacarpal_phalanx_3");
CTouchSensor* TouchSensor587 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor587->setDescription("HAnimSite l_metacarpal_phalanx_3");
HAnimSite586->addChildren(*TouchSensor587);

CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimSiteShape");
HAnimSite586->addChildren(*Shape588);

HAnimSegment567->addChildren(*HAnimSite586);

CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet590 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet590->setVertexCount(new int[1]{2});
CCoordinate* Coordinate591 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate591->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet590->setCoord(*Coordinate591);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA592 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA592->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(*ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment567->addChildren(*Shape589);

CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet594 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet594->setVertexCount(new int[1]{2});
CCoordinate* Coordinate595 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate595->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet594->setCoord(*Coordinate595);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA596 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA596->setUSE("HAnimSegmentLineColorRGBA");
LineSet594->setColor(*ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment567->addChildren(*Shape593);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setName("l_metacarpal_phalanx_5");
HAnimSite597->setDEF("hanim_l_metacarpal_phalanx_5");
HAnimSite597->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor598 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor598->setDescription("HAnimSite l_metacarpal_phalanx_5");
HAnimSite597->addChildren(*TouchSensor598);

CShape* Shape599 = (CShape *)(m_pScene.createNode("Shape"));
Shape599->setUSE("HAnimSiteShape");
HAnimSite597->addChildren(*Shape599);

HAnimSegment567->addChildren(*HAnimSite597);

HAnimJoint566->addChildren(*HAnimSegment567);

CHAnimJoint* HAnimJoint600 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint600->setName("l_carpometacarpal_1");
HAnimJoint600->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint600->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint600->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint600->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment601 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment601->setName("l_metacarpal_1");
HAnimSegment601->setDEF("hanim_l_metacarpal_1");
CTransform* Transform602 = (CTransform *)(m_pScene.createNode("Transform"));
Transform602->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform603 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape604 = (CShape *)(m_pScene.createNode("Shape"));
Shape604->setUSE("HAnimJointShape");
Transform603->addChild(*Shape604);

Transform602->addChildren(*Transform603);

HAnimSegment601->addChildren(*Transform602);

CShape* Shape605 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet606 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet606->setVertexCount(new int[1]{2});
CCoordinate* Coordinate607 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate607->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet606->setCoord(*Coordinate607);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA608 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA608->setUSE("HAnimSegmentLineColorRGBA");
LineSet606->setColor(*ColorRGBA608);

Shape605->setGeometry(LineSet606);

HAnimSegment601->addChildren(*Shape605);

HAnimJoint600->addChildren(*HAnimSegment601);

CHAnimJoint* HAnimJoint609 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint609->setName("l_metacarpophalangeal_1");
HAnimJoint609->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint609->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint609->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint609->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment610 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment610->setName("l_carpal_proximal_phalanx_1");
HAnimSegment610->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform611 = (CTransform *)(m_pScene.createNode("Transform"));
Transform611->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform612 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape613 = (CShape *)(m_pScene.createNode("Shape"));
Shape613->setUSE("HAnimJointShape");
Transform612->addChild(*Shape613);

Transform611->addChildren(*Transform612);

HAnimSegment610->addChildren(*Transform611);

CShape* Shape614 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet615 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet615->setVertexCount(new int[1]{2});
CCoordinate* Coordinate616 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate616->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet615->setCoord(*Coordinate616);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA617 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA617->setUSE("HAnimSegmentLineColorRGBA");
LineSet615->setColor(*ColorRGBA617);

Shape614->setGeometry(LineSet615);

HAnimSegment610->addChildren(*Shape614);

CHAnimSite* HAnimSite618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite618->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite618->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor619 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor619->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite618->addChildren(*TouchSensor619);

CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
Shape620->setUSE("HAnimSiteShape");
HAnimSite618->addChildren(*Shape620);

HAnimSegment610->addChildren(*HAnimSite618);

HAnimJoint609->addChildren(*HAnimSegment610);

CHAnimJoint* HAnimJoint621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint621->setName("l_carpal_interphalangeal_1");
HAnimJoint621->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint621->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint621->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint621->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint609->addChildren(*HAnimJoint621);

HAnimJoint600->addChildren(*HAnimJoint609);

HAnimJoint566->addChildren(*HAnimJoint600);

CHAnimJoint* HAnimJoint622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint622->setName("l_carpometacarpal_2");
HAnimJoint622->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint622->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint622->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint622->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment623 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment623->setName("l_metacarpal_2");
HAnimSegment623->setDEF("hanim_l_metacarpal_2");
CTransform* Transform624 = (CTransform *)(m_pScene.createNode("Transform"));
Transform624->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform625 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
Shape626->setUSE("HAnimJointShape");
Transform625->addChild(*Shape626);

Transform624->addChildren(*Transform625);

HAnimSegment623->addChildren(*Transform624);

CShape* Shape627 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet628 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet628->setVertexCount(new int[1]{2});
CCoordinate* Coordinate629 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate629->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet628->setCoord(*Coordinate629);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA630 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA630->setUSE("HAnimSegmentLineColorRGBA");
LineSet628->setColor(*ColorRGBA630);

Shape627->setGeometry(LineSet628);

HAnimSegment623->addChildren(*Shape627);

HAnimJoint622->addChildren(*HAnimSegment623);

CHAnimJoint* HAnimJoint631 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint631->setName("l_metacarpophalangeal_2");
HAnimJoint631->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint631->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint631->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint631->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment632 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment632->setName("l_carpal_proximal_phalanx_2");
HAnimSegment632->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform633 = (CTransform *)(m_pScene.createNode("Transform"));
Transform633->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform634 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape635 = (CShape *)(m_pScene.createNode("Shape"));
Shape635->setUSE("HAnimJointShape");
Transform634->addChild(*Shape635);

Transform633->addChildren(*Transform634);

HAnimSegment632->addChildren(*Transform633);

CShape* Shape636 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet637 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet637->setVertexCount(new int[1]{2});
CCoordinate* Coordinate638 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate638->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet637->setCoord(*Coordinate638);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA639 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA639->setUSE("HAnimSegmentLineColorRGBA");
LineSet637->setColor(*ColorRGBA639);

Shape636->setGeometry(LineSet637);

HAnimSegment632->addChildren(*Shape636);

HAnimJoint631->addChildren(*HAnimSegment632);

CHAnimJoint* HAnimJoint640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint640->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint640->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint640->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint640->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment641 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment641->setName("l_carpal_middle_phalanx_2");
HAnimSegment641->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
Transform642->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform643 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
Shape644->setUSE("HAnimJointShape");
Transform643->addChild(*Shape644);

Transform642->addChildren(*Transform643);

HAnimSegment641->addChildren(*Transform642);

CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet646 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet646->setVertexCount(new int[1]{2});
CCoordinate* Coordinate647 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate647->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet646->setCoord(*Coordinate647);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA648 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA648->setUSE("HAnimSegmentLineColorRGBA");
LineSet646->setColor(*ColorRGBA648);

Shape645->setGeometry(LineSet646);

HAnimSegment641->addChildren(*Shape645);

CHAnimSite* HAnimSite649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite649->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite649->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor650 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor650->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite649->addChildren(*TouchSensor650);

CShape* Shape651 = (CShape *)(m_pScene.createNode("Shape"));
Shape651->setUSE("HAnimSiteShape");
HAnimSite649->addChildren(*Shape651);

HAnimSegment641->addChildren(*HAnimSite649);

CHAnimSite* HAnimSite652 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite652->setName("l_dactylion");
HAnimSite652->setDEF("hanim_l_dactylion");
HAnimSite652->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor653 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor653->setDescription("HAnimSite l_dactylion");
HAnimSite652->addChildren(*TouchSensor653);

CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
Shape654->setUSE("HAnimSiteShape");
HAnimSite652->addChildren(*Shape654);

HAnimSegment641->addChildren(*HAnimSite652);

HAnimJoint640->addChildren(*HAnimSegment641);

CHAnimJoint* HAnimJoint655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint655->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint655->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint655->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint655->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint655->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint655);

HAnimJoint631->addChildren(*HAnimJoint640);

HAnimJoint622->addChildren(*HAnimJoint631);

HAnimJoint566->addChildren(*HAnimJoint622);

CHAnimJoint* HAnimJoint656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint656->setName("l_carpometacarpal_3");
HAnimJoint656->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint656->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint656->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint656->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment657 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment657->setName("l_metacarpal_3");
HAnimSegment657->setDEF("hanim_l_metacarpal_3");
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
Transform658->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform659 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("HAnimJointShape");
Transform659->addChild(*Shape660);

Transform658->addChildren(*Transform659);

HAnimSegment657->addChildren(*Transform658);

CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet662 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet662->setVertexCount(new int[1]{2});
CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet662->setCoord(*Coordinate663);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA664 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA664->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimSegment657->addChildren(*Shape661);

HAnimJoint656->addChildren(*HAnimSegment657);

CHAnimJoint* HAnimJoint665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint665->setName("l_metacarpophalangeal_3");
HAnimJoint665->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint665->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint665->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint665->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment666 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment666->setName("l_carpal_proximal_phalanx_3");
HAnimSegment666->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform667 = (CTransform *)(m_pScene.createNode("Transform"));
Transform667->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform668 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
Shape669->setUSE("HAnimJointShape");
Transform668->addChild(*Shape669);

Transform667->addChildren(*Transform668);

HAnimSegment666->addChildren(*Transform667);

CShape* Shape670 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet671 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet671->setVertexCount(new int[1]{2});
CCoordinate* Coordinate672 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate672->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet671->setCoord(*Coordinate672);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA673 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA673->setUSE("HAnimSegmentLineColorRGBA");
LineSet671->setColor(*ColorRGBA673);

Shape670->setGeometry(LineSet671);

HAnimSegment666->addChildren(*Shape670);

HAnimJoint665->addChildren(*HAnimSegment666);

CHAnimJoint* HAnimJoint674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint674->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint674->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint674->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint674->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint674->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment675 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment675->setName("l_carpal_middle_phalanx_3");
HAnimSegment675->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform676 = (CTransform *)(m_pScene.createNode("Transform"));
Transform676->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform677 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape678 = (CShape *)(m_pScene.createNode("Shape"));
Shape678->setUSE("HAnimJointShape");
Transform677->addChild(*Shape678);

Transform676->addChildren(*Transform677);

HAnimSegment675->addChildren(*Transform676);

CShape* Shape679 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet680 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet680->setVertexCount(new int[1]{2});
CCoordinate* Coordinate681 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate681->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet680->setCoord(*Coordinate681);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA682 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA682->setUSE("HAnimSegmentLineColorRGBA");
LineSet680->setColor(*ColorRGBA682);

Shape679->setGeometry(LineSet680);

HAnimSegment675->addChildren(*Shape679);

CHAnimSite* HAnimSite683 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite683->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite683->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor684 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor684->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite683->addChildren(*TouchSensor684);

CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
Shape685->setUSE("HAnimSiteShape");
HAnimSite683->addChildren(*Shape685);

HAnimSegment675->addChildren(*HAnimSite683);

HAnimJoint674->addChildren(*HAnimSegment675);

CHAnimJoint* HAnimJoint686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint686->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint686->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint686->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint686->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint686->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint674->addChildren(*HAnimJoint686);

HAnimJoint665->addChildren(*HAnimJoint674);

HAnimJoint656->addChildren(*HAnimJoint665);

HAnimJoint566->addChildren(*HAnimJoint656);

CHAnimJoint* HAnimJoint687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint687->setName("l_carpometacarpal_4");
HAnimJoint687->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint687->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint687->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint687->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment688 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment688->setName("l_metacarpal_4");
HAnimSegment688->setDEF("hanim_l_metacarpal_4");
CTransform* Transform689 = (CTransform *)(m_pScene.createNode("Transform"));
Transform689->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform690 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimJointShape");
Transform690->addChild(*Shape691);

Transform689->addChildren(*Transform690);

HAnimSegment688->addChildren(*Transform689);

CShape* Shape692 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet693 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet693->setVertexCount(new int[1]{2});
CCoordinate* Coordinate694 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate694->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet693->setCoord(*Coordinate694);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA695 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA695->setUSE("HAnimSegmentLineColorRGBA");
LineSet693->setColor(*ColorRGBA695);

Shape692->setGeometry(LineSet693);

HAnimSegment688->addChildren(*Shape692);

HAnimJoint687->addChildren(*HAnimSegment688);

CHAnimJoint* HAnimJoint696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint696->setName("l_metacarpophalangeal_4");
HAnimJoint696->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint696->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint696->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment697 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment697->setName("l_carpal_proximal_phalanx_4");
HAnimSegment697->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform698 = (CTransform *)(m_pScene.createNode("Transform"));
Transform698->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform699 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("HAnimJointShape");
Transform699->addChild(*Shape700);

Transform698->addChildren(*Transform699);

HAnimSegment697->addChildren(*Transform698);

CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet702 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet702->setVertexCount(new int[1]{2});
CCoordinate* Coordinate703 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate703->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet702->setCoord(*Coordinate703);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA704 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA704->setUSE("HAnimSegmentLineColorRGBA");
LineSet702->setColor(*ColorRGBA704);

Shape701->setGeometry(LineSet702);

HAnimSegment697->addChildren(*Shape701);

HAnimJoint696->addChildren(*HAnimSegment697);

CHAnimJoint* HAnimJoint705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint705->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint705->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint705->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint705->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint705->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment706 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment706->setName("l_carpal_middle_phalanx_4");
HAnimSegment706->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
Transform707->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
Shape709->setUSE("HAnimJointShape");
Transform708->addChild(*Shape709);

Transform707->addChildren(*Transform708);

HAnimSegment706->addChildren(*Transform707);

CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet711 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet711->setVertexCount(new int[1]{2});
CCoordinate* Coordinate712 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate712->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet711->setCoord(*Coordinate712);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA713 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA713->setUSE("HAnimSegmentLineColorRGBA");
LineSet711->setColor(*ColorRGBA713);

Shape710->setGeometry(LineSet711);

HAnimSegment706->addChildren(*Shape710);

CHAnimSite* HAnimSite714 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite714->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite714->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor715 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor715->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite714->addChildren(*TouchSensor715);

CShape* Shape716 = (CShape *)(m_pScene.createNode("Shape"));
Shape716->setUSE("HAnimSiteShape");
HAnimSite714->addChildren(*Shape716);

HAnimSegment706->addChildren(*HAnimSite714);

HAnimJoint705->addChildren(*HAnimSegment706);

CHAnimJoint* HAnimJoint717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint717->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint717->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint717->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint717->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint717->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint705->addChildren(*HAnimJoint717);

HAnimJoint696->addChildren(*HAnimJoint705);

HAnimJoint687->addChildren(*HAnimJoint696);

HAnimJoint566->addChildren(*HAnimJoint687);

CHAnimJoint* HAnimJoint718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint718->setName("l_carpometacarpal_5");
HAnimJoint718->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint718->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint718->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint718->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment719 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment719->setName("l_metacarpal_5");
HAnimSegment719->setDEF("hanim_l_metacarpal_5");
CTransform* Transform720 = (CTransform *)(m_pScene.createNode("Transform"));
Transform720->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform721 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape722 = (CShape *)(m_pScene.createNode("Shape"));
Shape722->setUSE("HAnimJointShape");
Transform721->addChild(*Shape722);

Transform720->addChildren(*Transform721);

HAnimSegment719->addChildren(*Transform720);

CShape* Shape723 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet724 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet724->setVertexCount(new int[1]{2});
CCoordinate* Coordinate725 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate725->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet724->setCoord(*Coordinate725);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA726 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA726->setUSE("HAnimSegmentLineColorRGBA");
LineSet724->setColor(*ColorRGBA726);

Shape723->setGeometry(LineSet724);

HAnimSegment719->addChildren(*Shape723);

HAnimJoint718->addChildren(*HAnimSegment719);

CHAnimJoint* HAnimJoint727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint727->setName("l_metacarpophalangeal_5");
HAnimJoint727->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint727->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint727->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint727->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment728 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment728->setName("l_carpal_proximal_phalanx_5");
HAnimSegment728->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform729 = (CTransform *)(m_pScene.createNode("Transform"));
Transform729->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform730 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape731 = (CShape *)(m_pScene.createNode("Shape"));
Shape731->setUSE("HAnimJointShape");
Transform730->addChild(*Shape731);

Transform729->addChildren(*Transform730);

HAnimSegment728->addChildren(*Transform729);

CShape* Shape732 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet733 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet733->setVertexCount(new int[1]{2});
CCoordinate* Coordinate734 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate734->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet733->setCoord(*Coordinate734);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA735 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA735->setUSE("HAnimSegmentLineColorRGBA");
LineSet733->setColor(*ColorRGBA735);

Shape732->setGeometry(LineSet733);

HAnimSegment728->addChildren(*Shape732);

HAnimJoint727->addChildren(*HAnimSegment728);

CHAnimJoint* HAnimJoint736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint736->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint736->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint736->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint736->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint736->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment737 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment737->setName("l_carpal_middle_phalanx_5");
HAnimSegment737->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform738 = (CTransform *)(m_pScene.createNode("Transform"));
Transform738->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
Shape740->setUSE("HAnimJointShape");
Transform739->addChild(*Shape740);

Transform738->addChildren(*Transform739);

HAnimSegment737->addChildren(*Transform738);

CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet742 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet742->setVertexCount(new int[1]{2});
CCoordinate* Coordinate743 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate743->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet742->setCoord(*Coordinate743);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA744 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA744->setUSE("HAnimSegmentLineColorRGBA");
LineSet742->setColor(*ColorRGBA744);

Shape741->setGeometry(LineSet742);

HAnimSegment737->addChildren(*Shape741);

CHAnimSite* HAnimSite745 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite745->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite745->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor746 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor746->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite745->addChildren(*TouchSensor746);

CShape* Shape747 = (CShape *)(m_pScene.createNode("Shape"));
Shape747->setUSE("HAnimSiteShape");
HAnimSite745->addChildren(*Shape747);

HAnimSegment737->addChildren(*HAnimSite745);

HAnimJoint736->addChildren(*HAnimSegment737);

CHAnimJoint* HAnimJoint748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint748->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint748->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint748->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint748->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint748->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint736->addChildren(*HAnimJoint748);

HAnimJoint727->addChildren(*HAnimJoint736);

HAnimJoint718->addChildren(*HAnimJoint727);

HAnimJoint566->addChildren(*HAnimJoint718);

HAnimJoint554->addChildren(*HAnimJoint566);

HAnimJoint533->addChildren(*HAnimJoint554);

HAnimJoint518->addChildren(*HAnimJoint533);

HAnimJoint509->addChildren(*HAnimJoint518);

HAnimJoint395->addChildren(*HAnimJoint509);

CHAnimJoint* HAnimJoint749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint749->setName("r_sternoclavicular");
HAnimJoint749->setDEF("hanim_r_sternoclavicular");
HAnimJoint749->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint749->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint749->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment750->setName("r_clavicle");
HAnimSegment750->setDEF("hanim_r_clavicle");
CTransform* Transform751 = (CTransform *)(m_pScene.createNode("Transform"));
Transform751->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform752 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape753 = (CShape *)(m_pScene.createNode("Shape"));
Shape753->setUSE("HAnimJointShape");
Transform752->addChild(*Shape753);

Transform751->addChildren(*Transform752);

HAnimSegment750->addChildren(*Transform751);

CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet755 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet755->setVertexCount(new int[1]{2});
CCoordinate* Coordinate756 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate756->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet755->setCoord(*Coordinate756);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA757 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA757->setUSE("HAnimSegmentLineColorRGBA");
LineSet755->setColor(*ColorRGBA757);

Shape754->setGeometry(LineSet755);

HAnimSegment750->addChildren(*Shape754);

HAnimJoint749->addChildren(*HAnimSegment750);

CHAnimJoint* HAnimJoint758 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint758->setName("r_acromioclavicular");
HAnimJoint758->setDEF("hanim_r_acromioclavicular");
HAnimJoint758->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint758->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment759->setName("r_scapula");
HAnimSegment759->setDEF("hanim_r_scapula");
CTransform* Transform760 = (CTransform *)(m_pScene.createNode("Transform"));
Transform760->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform761 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape762 = (CShape *)(m_pScene.createNode("Shape"));
Shape762->setUSE("HAnimJointShape");
Transform761->addChild(*Shape762);

Transform760->addChildren(*Transform761);

HAnimSegment759->addChildren(*Transform760);

CShape* Shape763 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet764 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet764->setVertexCount(new int[1]{2});
CCoordinate* Coordinate765 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate765->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet764->setCoord(*Coordinate765);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA766 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA766->setUSE("HAnimSegmentLineColorRGBA");
LineSet764->setColor(*ColorRGBA766);

Shape763->setGeometry(LineSet764);

HAnimSegment759->addChildren(*Shape763);

CHAnimSite* HAnimSite767 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite767->setName("r_bideltoid");
HAnimSite767->setDEF("hanim_r_bideltoid");
CTouchSensor* TouchSensor768 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor768->setDescription("HAnimSite r_bideltoid");
HAnimSite767->addChildren(*TouchSensor768);

CShape* Shape769 = (CShape *)(m_pScene.createNode("Shape"));
Shape769->setUSE("HAnimSiteShape");
HAnimSite767->addChildren(*Shape769);

HAnimSegment759->addChildren(*HAnimSite767);

CHAnimSite* HAnimSite770 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite770->setName("r_humeral_lateral_epicondyles");
HAnimSite770->setDEF("hanim_r_humeral_lateral_epicondyles");
HAnimSite770->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor771 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor771->setDescription("HAnimSite r_humeral_lateral_epicondyles");
HAnimSite770->addChildren(*TouchSensor771);

CShape* Shape772 = (CShape *)(m_pScene.createNode("Shape"));
Shape772->setUSE("HAnimSiteShape");
HAnimSite770->addChildren(*Shape772);

HAnimSegment759->addChildren(*HAnimSite770);

HAnimJoint758->addChildren(*HAnimSegment759);

CHAnimJoint* HAnimJoint773 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint773->setName("r_shoulder");
HAnimJoint773->setDEF("hanim_r_shoulder");
HAnimJoint773->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint773->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint773->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment774->setName("r_upperarm");
HAnimSegment774->setDEF("hanim_r_upperarm");
CTransform* Transform775 = (CTransform *)(m_pScene.createNode("Transform"));
Transform775->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform776 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape777 = (CShape *)(m_pScene.createNode("Shape"));
Shape777->setUSE("HAnimJointShape");
Transform776->addChild(*Shape777);

Transform775->addChildren(*Transform776);

HAnimSegment774->addChildren(*Transform775);

CShape* Shape778 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet779 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet779->setVertexCount(new int[1]{2});
CCoordinate* Coordinate780 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate780->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet779->setCoord(*Coordinate780);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA781 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA781->setUSE("HAnimSegmentLineColorRGBA");
LineSet779->setColor(*ColorRGBA781);

Shape778->setGeometry(LineSet779);

HAnimSegment774->addChildren(*Shape778);

CHAnimSite* HAnimSite782 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite782->setName("r_humeral_medial_epicondyles");
HAnimSite782->setDEF("hanim_r_humeral_medial_epicondyles");
HAnimSite782->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor783 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor783->setDescription("HAnimSite r_humeral_medial_epicondyles");
HAnimSite782->addChildren(*TouchSensor783);

CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
Shape784->setUSE("HAnimSiteShape");
HAnimSite782->addChildren(*Shape784);

HAnimSegment774->addChildren(*HAnimSite782);

CHAnimSite* HAnimSite785 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite785->setName("r_olecranon");
HAnimSite785->setDEF("hanim_r_olecranon");
HAnimSite785->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor786 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor786->setDescription("HAnimSite r_olecranon");
HAnimSite785->addChildren(*TouchSensor786);

CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
Shape787->setUSE("HAnimSiteShape");
HAnimSite785->addChildren(*Shape787);

HAnimSegment774->addChildren(*HAnimSite785);

CHAnimSite* HAnimSite788 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite788->setName("r_radial_styloid");
HAnimSite788->setDEF("hanim_r_radial_styloid");
HAnimSite788->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor789 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor789->setDescription("HAnimSite r_radial_styloid");
HAnimSite788->addChildren(*TouchSensor789);

CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChildren(*Shape790);

HAnimSegment774->addChildren(*HAnimSite788);

CHAnimSite* HAnimSite791 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite791->setName("r_radiale");
HAnimSite791->setDEF("hanim_r_radiale");
HAnimSite791->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor792 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor792->setDescription("HAnimSite r_radiale");
HAnimSite791->addChildren(*TouchSensor792);

CShape* Shape793 = (CShape *)(m_pScene.createNode("Shape"));
Shape793->setUSE("HAnimSiteShape");
HAnimSite791->addChildren(*Shape793);

HAnimSegment774->addChildren(*HAnimSite791);

HAnimJoint773->addChildren(*HAnimSegment774);

CHAnimJoint* HAnimJoint794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint794->setName("r_elbow");
HAnimJoint794->setDEF("hanim_r_elbow");
HAnimJoint794->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint794->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint794->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment795->setName("r_forearm");
HAnimSegment795->setDEF("hanim_r_forearm");
CTransform* Transform796 = (CTransform *)(m_pScene.createNode("Transform"));
Transform796->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform797 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
Shape798->setUSE("HAnimJointShape");
Transform797->addChild(*Shape798);

Transform796->addChildren(*Transform797);

HAnimSegment795->addChildren(*Transform796);

CShape* Shape799 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet800 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet800->setVertexCount(new int[1]{2});
CCoordinate* Coordinate801 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate801->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet800->setCoord(*Coordinate801);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA802 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA802->setUSE("HAnimSegmentLineColorRGBA");
LineSet800->setColor(*ColorRGBA802);

Shape799->setGeometry(LineSet800);

HAnimSegment795->addChildren(*Shape799);

CHAnimSite* HAnimSite803 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite803->setName("r_ulnar_styloid");
HAnimSite803->setDEF("hanim_r_ulnar_styloid");
HAnimSite803->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor804 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor804->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite803->addChildren(*TouchSensor804);

CShape* Shape805 = (CShape *)(m_pScene.createNode("Shape"));
Shape805->setUSE("HAnimSiteShape");
HAnimSite803->addChildren(*Shape805);

HAnimSegment795->addChildren(*HAnimSite803);

HAnimJoint794->addChildren(*HAnimSegment795);

CHAnimJoint* HAnimJoint806 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint806->setName("r_radiocarpal");
HAnimJoint806->setDEF("hanim_r_radiocarpal");
HAnimJoint806->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint806->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint806->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment807->setName("r_carpal");
HAnimSegment807->setDEF("hanim_r_carpal");
CTransform* Transform808 = (CTransform *)(m_pScene.createNode("Transform"));
Transform808->setScale(new float[3]{0.2,0.2,0.2});
Transform808->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform808->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform809 = (CTransform *)(m_pScene.createNode("Transform"));
Transform809->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape810 = (CShape *)(m_pScene.createNode("Shape"));
Shape810->setUSE("HAnimJointShape");
Transform809->addChild(*Shape810);

Transform808->addChildren(*Transform809);

HAnimSegment807->addChildren(*Transform808);

CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet812 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet812->setVertexCount(new int[1]{2});
CCoordinate* Coordinate813 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate813->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473});
LineSet812->setCoord(*Coordinate813);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA814 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA814->setUSE("HAnimSegmentLineColorRGBA");
LineSet812->setColor(*ColorRGBA814);

Shape811->setGeometry(LineSet812);

HAnimSegment807->addChildren(*Shape811);

CShape* Shape815 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet816 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet816->setVertexCount(new int[1]{2});
CCoordinate* Coordinate817 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate817->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218});
LineSet816->setCoord(*Coordinate817);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA818 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA818->setUSE("HAnimSegmentLineColorRGBA");
LineSet816->setColor(*ColorRGBA818);

Shape815->setGeometry(LineSet816);

HAnimSegment807->addChildren(*Shape815);

CHAnimSite* HAnimSite819 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite819->setName("r_metacarpal_phalanx_2");
HAnimSite819->setDEF("hanim_r_metacarpal_phalanx_2");
HAnimSite819->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor820 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor820->setDescription("HAnimSite r_metacarpal_phalanx_2");
HAnimSite819->addChildren(*TouchSensor820);

CShape* Shape821 = (CShape *)(m_pScene.createNode("Shape"));
Shape821->setUSE("HAnimSiteShape");
HAnimSite819->addChildren(*Shape821);

HAnimSegment807->addChildren(*HAnimSite819);

CShape* Shape822 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet823 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet823->setVertexCount(new int[1]{2});
CCoordinate* Coordinate824 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate824->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468});
LineSet823->setCoord(*Coordinate824);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA825 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA825->setUSE("HAnimSegmentLineColorRGBA");
LineSet823->setColor(*ColorRGBA825);

Shape822->setGeometry(LineSet823);

HAnimSegment807->addChildren(*Shape822);

CHAnimSite* HAnimSite826 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite826->setName("r_metacarpal_phalanx_3");
HAnimSite826->setDEF("hanim_r_metacarpal_phalanx_3");
CTouchSensor* TouchSensor827 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor827->setDescription("HAnimSite r_metacarpal_phalanx_3");
HAnimSite826->addChildren(*TouchSensor827);

CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
Shape828->setUSE("HAnimSiteShape");
HAnimSite826->addChildren(*Shape828);

HAnimSegment807->addChildren(*HAnimSite826);

CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet830 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet830->setVertexCount(new int[1]{2});
CCoordinate* Coordinate831 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate831->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732});
LineSet830->setCoord(*Coordinate831);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA832 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA832->setUSE("HAnimSegmentLineColorRGBA");
LineSet830->setColor(*ColorRGBA832);

Shape829->setGeometry(LineSet830);

HAnimSegment807->addChildren(*Shape829);

CShape* Shape833 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet834 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet834->setVertexCount(new int[1]{2});
CCoordinate* Coordinate835 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate835->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975});
LineSet834->setCoord(*Coordinate835);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA836 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA836->setUSE("HAnimSegmentLineColorRGBA");
LineSet834->setColor(*ColorRGBA836);

Shape833->setGeometry(LineSet834);

HAnimSegment807->addChildren(*Shape833);

CHAnimSite* HAnimSite837 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite837->setName("r_metacarpal_phalanx_5");
HAnimSite837->setDEF("hanim_r_metacarpal_phalanx_5");
HAnimSite837->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor838 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor838->setDescription("HAnimSite r_metacarpal_phalanx_5");
HAnimSite837->addChildren(*TouchSensor838);

CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
Shape839->setUSE("HAnimSiteShape");
HAnimSite837->addChildren(*Shape839);

HAnimSegment807->addChildren(*HAnimSite837);

HAnimJoint806->addChildren(*HAnimSegment807);

CHAnimJoint* HAnimJoint840 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint840->setName("r_carpometacarpal_1");
HAnimJoint840->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint840->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint840->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint840->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment841->setName("r_metacarpal_1");
HAnimSegment841->setDEF("hanim_r_metacarpal_1");
CTransform* Transform842 = (CTransform *)(m_pScene.createNode("Transform"));
Transform842->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform843 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
Shape844->setUSE("HAnimJointShape");
Transform843->addChild(*Shape844);

Transform842->addChildren(*Transform843);

HAnimSegment841->addChildren(*Transform842);

CShape* Shape845 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet846 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet846->setVertexCount(new int[1]{2});
CCoordinate* Coordinate847 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate847->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet846->setCoord(*Coordinate847);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA848 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA848->setUSE("HAnimSegmentLineColorRGBA");
LineSet846->setColor(*ColorRGBA848);

Shape845->setGeometry(LineSet846);

HAnimSegment841->addChildren(*Shape845);

HAnimJoint840->addChildren(*HAnimSegment841);

CHAnimJoint* HAnimJoint849 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint849->setName("r_metacarpophalangeal_1");
HAnimJoint849->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint849->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint849->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint849->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment850->setName("r_carpal_proximal_phalanx_1");
HAnimSegment850->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform851 = (CTransform *)(m_pScene.createNode("Transform"));
Transform851->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform852 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape853 = (CShape *)(m_pScene.createNode("Shape"));
Shape853->setUSE("HAnimJointShape");
Transform852->addChild(*Shape853);

Transform851->addChildren(*Transform852);

HAnimSegment850->addChildren(*Transform851);

CShape* Shape854 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet855 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet855->setVertexCount(new int[1]{2});
CCoordinate* Coordinate856 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate856->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet855->setCoord(*Coordinate856);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA857 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA857->setUSE("HAnimSegmentLineColorRGBA");
LineSet855->setColor(*ColorRGBA857);

Shape854->setGeometry(LineSet855);

HAnimSegment850->addChildren(*Shape854);

CHAnimSite* HAnimSite858 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite858->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite858->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor859 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor859->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite858->addChildren(*TouchSensor859);

CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("HAnimSiteShape");
HAnimSite858->addChildren(*Shape860);

HAnimSegment850->addChildren(*HAnimSite858);

HAnimJoint849->addChildren(*HAnimSegment850);

CHAnimJoint* HAnimJoint861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint861->setName("r_carpal_interphalangeal_1");
HAnimJoint861->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint861->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint861->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint861->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint849->addChildren(*HAnimJoint861);

HAnimJoint840->addChildren(*HAnimJoint849);

HAnimJoint806->addChildren(*HAnimJoint840);

CHAnimJoint* HAnimJoint862 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint862->setName("r_carpometacarpal_2");
HAnimJoint862->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint862->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint862->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint862->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment863->setName("r_metacarpal_2");
HAnimSegment863->setDEF("hanim_r_metacarpal_2");
CTransform* Transform864 = (CTransform *)(m_pScene.createNode("Transform"));
Transform864->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform865 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
Shape866->setUSE("HAnimJointShape");
Transform865->addChild(*Shape866);

Transform864->addChildren(*Transform865);

HAnimSegment863->addChildren(*Transform864);

CShape* Shape867 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet868 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet868->setVertexCount(new int[1]{2});
CCoordinate* Coordinate869 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate869->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet868->setCoord(*Coordinate869);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA870 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA870->setUSE("HAnimSegmentLineColorRGBA");
LineSet868->setColor(*ColorRGBA870);

Shape867->setGeometry(LineSet868);

HAnimSegment863->addChildren(*Shape867);

HAnimJoint862->addChildren(*HAnimSegment863);

CHAnimJoint* HAnimJoint871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint871->setName("r_metacarpophalangeal_2");
HAnimJoint871->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint871->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint871->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint871->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment872->setName("r_carpal_proximal_phalanx_2");
HAnimSegment872->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform873 = (CTransform *)(m_pScene.createNode("Transform"));
Transform873->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform874 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimJointShape");
Transform874->addChild(*Shape875);

Transform873->addChildren(*Transform874);

HAnimSegment872->addChildren(*Transform873);

CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet877 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet877->setVertexCount(new int[1]{2});
CCoordinate* Coordinate878 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate878->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet877->setCoord(*Coordinate878);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA879 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA879->setUSE("HAnimSegmentLineColorRGBA");
LineSet877->setColor(*ColorRGBA879);

Shape876->setGeometry(LineSet877);

HAnimSegment872->addChildren(*Shape876);

HAnimJoint871->addChildren(*HAnimSegment872);

CHAnimJoint* HAnimJoint880 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint880->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint880->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint880->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint880->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint880->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment881 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment881->setName("r_carpal_middle_phalanx_2");
HAnimSegment881->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform882 = (CTransform *)(m_pScene.createNode("Transform"));
Transform882->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform883 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("HAnimJointShape");
Transform883->addChild(*Shape884);

Transform882->addChildren(*Transform883);

HAnimSegment881->addChildren(*Transform882);

CShape* Shape885 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet886 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet886->setVertexCount(new int[1]{2});
CCoordinate* Coordinate887 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate887->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet886->setCoord(*Coordinate887);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA888 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA888->setUSE("HAnimSegmentLineColorRGBA");
LineSet886->setColor(*ColorRGBA888);

Shape885->setGeometry(LineSet886);

HAnimSegment881->addChildren(*Shape885);

CHAnimSite* HAnimSite889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite889->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite889->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor890 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor890->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite889->addChildren(*TouchSensor890);

CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
Shape891->setUSE("HAnimSiteShape");
HAnimSite889->addChildren(*Shape891);

HAnimSegment881->addChildren(*HAnimSite889);

CHAnimSite* HAnimSite892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite892->setName("r_dactylion");
HAnimSite892->setDEF("hanim_r_dactylion");
HAnimSite892->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor893 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor893->setDescription("HAnimSite r_dactylion");
HAnimSite892->addChildren(*TouchSensor893);

CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("HAnimSiteShape");
HAnimSite892->addChildren(*Shape894);

HAnimSegment881->addChildren(*HAnimSite892);

HAnimJoint880->addChildren(*HAnimSegment881);

CHAnimJoint* HAnimJoint895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint895->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint895->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint895->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint895->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint895->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint880->addChildren(*HAnimJoint895);

HAnimJoint871->addChildren(*HAnimJoint880);

HAnimJoint862->addChildren(*HAnimJoint871);

HAnimJoint806->addChildren(*HAnimJoint862);

CHAnimJoint* HAnimJoint896 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint896->setName("r_carpometacarpal_3");
HAnimJoint896->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint896->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint896->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint896->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment897 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment897->setName("r_metacarpal_3");
HAnimSegment897->setDEF("hanim_r_metacarpal_3");
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
Transform898->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform899 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
Shape900->setUSE("HAnimJointShape");
Transform899->addChild(*Shape900);

Transform898->addChildren(*Transform899);

HAnimSegment897->addChildren(*Transform898);

CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet902 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet902->setVertexCount(new int[1]{2});
CCoordinate* Coordinate903 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate903->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet902->setCoord(*Coordinate903);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA904 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA904->setUSE("HAnimSegmentLineColorRGBA");
LineSet902->setColor(*ColorRGBA904);

Shape901->setGeometry(LineSet902);

HAnimSegment897->addChildren(*Shape901);

HAnimJoint896->addChildren(*HAnimSegment897);

CHAnimJoint* HAnimJoint905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint905->setName("r_metacarpophalangeal_3");
HAnimJoint905->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint905->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint905->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint905->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment906 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment906->setName("r_carpal_proximal_phalanx_3");
HAnimSegment906->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform907 = (CTransform *)(m_pScene.createNode("Transform"));
Transform907->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform908 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
Shape909->setUSE("HAnimJointShape");
Transform908->addChild(*Shape909);

Transform907->addChildren(*Transform908);

HAnimSegment906->addChildren(*Transform907);

CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet911 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet911->setVertexCount(new int[1]{2});
CCoordinate* Coordinate912 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate912->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet911->setCoord(*Coordinate912);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA913 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA913->setUSE("HAnimSegmentLineColorRGBA");
LineSet911->setColor(*ColorRGBA913);

Shape910->setGeometry(LineSet911);

HAnimSegment906->addChildren(*Shape910);

HAnimJoint905->addChildren(*HAnimSegment906);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint914->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint914->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint914->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint914->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment915 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment915->setName("r_carpal_middle_phalanx_3");
HAnimSegment915->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform916 = (CTransform *)(m_pScene.createNode("Transform"));
Transform916->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
Shape918->setUSE("HAnimJointShape");
Transform917->addChild(*Shape918);

Transform916->addChildren(*Transform917);

HAnimSegment915->addChildren(*Transform916);

CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet920 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet920->setVertexCount(new int[1]{2});
CCoordinate* Coordinate921 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate921->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet920->setCoord(*Coordinate921);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA922 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA922->setUSE("HAnimSegmentLineColorRGBA");
LineSet920->setColor(*ColorRGBA922);

Shape919->setGeometry(LineSet920);

HAnimSegment915->addChildren(*Shape919);

CHAnimSite* HAnimSite923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite923->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite923->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor924 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor924->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite923->addChildren(*TouchSensor924);

CShape* Shape925 = (CShape *)(m_pScene.createNode("Shape"));
Shape925->setUSE("HAnimSiteShape");
HAnimSite923->addChildren(*Shape925);

HAnimSegment915->addChildren(*HAnimSite923);

HAnimJoint914->addChildren(*HAnimSegment915);

CHAnimJoint* HAnimJoint926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint926->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint926->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint926->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint926->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint926->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint914->addChildren(*HAnimJoint926);

HAnimJoint905->addChildren(*HAnimJoint914);

HAnimJoint896->addChildren(*HAnimJoint905);

HAnimJoint806->addChildren(*HAnimJoint896);

CHAnimJoint* HAnimJoint927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint927->setName("r_carpometacarpal_4");
HAnimJoint927->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint927->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint927->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint927->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment928 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment928->setName("r_metacarpal_4");
HAnimSegment928->setDEF("hanim_r_metacarpal_4");
CTransform* Transform929 = (CTransform *)(m_pScene.createNode("Transform"));
Transform929->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform930 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
Shape931->setUSE("HAnimJointShape");
Transform930->addChild(*Shape931);

Transform929->addChildren(*Transform930);

HAnimSegment928->addChildren(*Transform929);

CShape* Shape932 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet933 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet933->setVertexCount(new int[1]{2});
CCoordinate* Coordinate934 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate934->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet933->setCoord(*Coordinate934);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA935 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA935->setUSE("HAnimSegmentLineColorRGBA");
LineSet933->setColor(*ColorRGBA935);

Shape932->setGeometry(LineSet933);

HAnimSegment928->addChildren(*Shape932);

HAnimJoint927->addChildren(*HAnimSegment928);

CHAnimJoint* HAnimJoint936 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint936->setName("r_metacarpophalangeal_4");
HAnimJoint936->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint936->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint936->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint936->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment937 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment937->setName("r_carpal_proximal_phalanx_4");
HAnimSegment937->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform938 = (CTransform *)(m_pScene.createNode("Transform"));
Transform938->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform939 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
Shape940->setUSE("HAnimJointShape");
Transform939->addChild(*Shape940);

Transform938->addChildren(*Transform939);

HAnimSegment937->addChildren(*Transform938);

CShape* Shape941 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet942 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet942->setVertexCount(new int[1]{2});
CCoordinate* Coordinate943 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate943->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet942->setCoord(*Coordinate943);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA944 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA944->setUSE("HAnimSegmentLineColorRGBA");
LineSet942->setColor(*ColorRGBA944);

Shape941->setGeometry(LineSet942);

HAnimSegment937->addChildren(*Shape941);

HAnimJoint936->addChildren(*HAnimSegment937);

CHAnimJoint* HAnimJoint945 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint945->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint945->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint945->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint945->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint945->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment946 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment946->setName("r_carpal_middle_phalanx_4");
HAnimSegment946->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform947 = (CTransform *)(m_pScene.createNode("Transform"));
Transform947->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform948 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape949 = (CShape *)(m_pScene.createNode("Shape"));
Shape949->setUSE("HAnimJointShape");
Transform948->addChild(*Shape949);

Transform947->addChildren(*Transform948);

HAnimSegment946->addChildren(*Transform947);

CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet951 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet951->setVertexCount(new int[1]{2});
CCoordinate* Coordinate952 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate952->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet951->setCoord(*Coordinate952);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA953 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA953->setUSE("HAnimSegmentLineColorRGBA");
LineSet951->setColor(*ColorRGBA953);

Shape950->setGeometry(LineSet951);

HAnimSegment946->addChildren(*Shape950);

CHAnimSite* HAnimSite954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite954->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite954->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor955 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor955->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite954->addChildren(*TouchSensor955);

CShape* Shape956 = (CShape *)(m_pScene.createNode("Shape"));
Shape956->setUSE("HAnimSiteShape");
HAnimSite954->addChildren(*Shape956);

HAnimSegment946->addChildren(*HAnimSite954);

HAnimJoint945->addChildren(*HAnimSegment946);

CHAnimJoint* HAnimJoint957 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint957->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint957->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint957->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint957->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint957->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint945->addChildren(*HAnimJoint957);

HAnimJoint936->addChildren(*HAnimJoint945);

HAnimJoint927->addChildren(*HAnimJoint936);

HAnimJoint806->addChildren(*HAnimJoint927);

CHAnimJoint* HAnimJoint958 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint958->setName("r_carpometacarpal_5");
HAnimJoint958->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint958->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint958->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint958->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment959 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment959->setName("r_metacarpal_5");
HAnimSegment959->setDEF("hanim_r_metacarpal_5");
CTransform* Transform960 = (CTransform *)(m_pScene.createNode("Transform"));
Transform960->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform961 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape962 = (CShape *)(m_pScene.createNode("Shape"));
Shape962->setUSE("HAnimJointShape");
Transform961->addChild(*Shape962);

Transform960->addChildren(*Transform961);

HAnimSegment959->addChildren(*Transform960);

CShape* Shape963 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet964 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet964->setVertexCount(new int[1]{2});
CCoordinate* Coordinate965 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate965->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet964->setCoord(*Coordinate965);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA966 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA966->setUSE("HAnimSegmentLineColorRGBA");
LineSet964->setColor(*ColorRGBA966);

Shape963->setGeometry(LineSet964);

HAnimSegment959->addChildren(*Shape963);

HAnimJoint958->addChildren(*HAnimSegment959);

CHAnimJoint* HAnimJoint967 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint967->setName("r_metacarpophalangeal_5");
HAnimJoint967->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint967->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint967->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint967->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment968 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment968->setName("r_carpal_proximal_phalanx_5");
HAnimSegment968->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform969 = (CTransform *)(m_pScene.createNode("Transform"));
Transform969->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform970 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape971 = (CShape *)(m_pScene.createNode("Shape"));
Shape971->setUSE("HAnimJointShape");
Transform970->addChild(*Shape971);

Transform969->addChildren(*Transform970);

HAnimSegment968->addChildren(*Transform969);

CShape* Shape972 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet973 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet973->setVertexCount(new int[1]{2});
CCoordinate* Coordinate974 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate974->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet973->setCoord(*Coordinate974);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA975 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA975->setUSE("HAnimSegmentLineColorRGBA");
LineSet973->setColor(*ColorRGBA975);

Shape972->setGeometry(LineSet973);

HAnimSegment968->addChildren(*Shape972);

HAnimJoint967->addChildren(*HAnimSegment968);

CHAnimJoint* HAnimJoint976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint976->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint976->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint976->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint976->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint976->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment977 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment977->setName("r_carpal_middle_phalanx_5");
HAnimSegment977->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform978 = (CTransform *)(m_pScene.createNode("Transform"));
Transform978->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform979 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape980 = (CShape *)(m_pScene.createNode("Shape"));
Shape980->setUSE("HAnimJointShape");
Transform979->addChild(*Shape980);

Transform978->addChildren(*Transform979);

HAnimSegment977->addChildren(*Transform978);

CShape* Shape981 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet982 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet982->setVertexCount(new int[1]{2});
CCoordinate* Coordinate983 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate983->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet982->setCoord(*Coordinate983);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA984 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA984->setUSE("HAnimSegmentLineColorRGBA");
LineSet982->setColor(*ColorRGBA984);

Shape981->setGeometry(LineSet982);

HAnimSegment977->addChildren(*Shape981);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite985->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor986 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor986->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite985->addChildren(*TouchSensor986);

CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
Shape987->setUSE("HAnimSiteShape");
HAnimSite985->addChildren(*Shape987);

HAnimSegment977->addChildren(*HAnimSite985);

HAnimJoint976->addChildren(*HAnimSegment977);

CHAnimJoint* HAnimJoint988 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint988->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint988->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint988->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint988->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint988->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint976->addChildren(*HAnimJoint988);

HAnimJoint967->addChildren(*HAnimJoint976);

HAnimJoint958->addChildren(*HAnimJoint967);

HAnimJoint806->addChildren(*HAnimJoint958);

HAnimJoint794->addChildren(*HAnimJoint806);

HAnimJoint773->addChildren(*HAnimJoint794);

HAnimJoint758->addChildren(*HAnimJoint773);

HAnimJoint749->addChildren(*HAnimJoint758);

HAnimJoint395->addChildren(*HAnimJoint749);

HAnimJoint374->addChildren(*HAnimJoint395);

HAnimJoint353->addChildren(*HAnimJoint374);

HAnimJoint335->addChildren(*HAnimJoint353);

HAnimJoint326->addChildren(*HAnimJoint335);

HAnimJoint305->addChildren(*HAnimJoint326);

HAnimJoint52->addChildren(*HAnimJoint305);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint989 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint989->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint989);

CHAnimJoint* HAnimJoint990 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint990->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint990);

CHAnimJoint* HAnimJoint991 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint991->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint991);

CHAnimJoint* HAnimJoint992 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint992->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint992);

CHAnimJoint* HAnimJoint993 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint993->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint993);

CHAnimJoint* HAnimJoint994 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint994->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint994);

CHAnimJoint* HAnimJoint995 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint995->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint995);

CHAnimJoint* HAnimJoint996 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint996->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint996);

CHAnimJoint* HAnimJoint997 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint997->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint997);

CHAnimJoint* HAnimJoint998 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint998->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint998);

CHAnimJoint* HAnimJoint999 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint999->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint999);

CHAnimJoint* HAnimJoint1000 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1000->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1000);

CHAnimJoint* HAnimJoint1001 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1001->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1001);

CHAnimJoint* HAnimJoint1002 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1002->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1002);

CHAnimJoint* HAnimJoint1003 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1003->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1003);

CHAnimJoint* HAnimJoint1004 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1004->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1004);

CHAnimJoint* HAnimJoint1005 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1005->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1005);

CHAnimJoint* HAnimJoint1006 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1006->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1006);

CHAnimJoint* HAnimJoint1007 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1007->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1007);

CHAnimJoint* HAnimJoint1008 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1008->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1008);

CHAnimJoint* HAnimJoint1009 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1009->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1009);

CHAnimJoint* HAnimJoint1010 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1010->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1010);

CHAnimJoint* HAnimJoint1011 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1011->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1011);

CHAnimJoint* HAnimJoint1012 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1012->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1012);

CHAnimJoint* HAnimJoint1013 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1013->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1013);

CHAnimJoint* HAnimJoint1014 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1014->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1014);

CHAnimJoint* HAnimJoint1015 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1015->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1015);

CHAnimJoint* HAnimJoint1016 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1016->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1016);

CHAnimJoint* HAnimJoint1017 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1017->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1017);

CHAnimJoint* HAnimJoint1018 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1018->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1018);

CHAnimJoint* HAnimJoint1019 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1019->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1019);

CHAnimJoint* HAnimJoint1020 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1020->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1020);

CHAnimJoint* HAnimJoint1021 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1021->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1021);

CHAnimJoint* HAnimJoint1022 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1022->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1022);

CHAnimJoint* HAnimJoint1023 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1023->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1023);

CHAnimJoint* HAnimJoint1024 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1024->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1024);

CHAnimJoint* HAnimJoint1025 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1025->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1025);

CHAnimJoint* HAnimJoint1026 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1026->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1026);

CHAnimJoint* HAnimJoint1027 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1027->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1027);

CHAnimJoint* HAnimJoint1028 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1028->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1028);

CHAnimJoint* HAnimJoint1029 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1029->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1029);

CHAnimJoint* HAnimJoint1030 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1030->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1030);

CHAnimJoint* HAnimJoint1031 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1031->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1031);

CHAnimJoint* HAnimJoint1032 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1032->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1032);

CHAnimJoint* HAnimJoint1033 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1033->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1033);

CHAnimJoint* HAnimJoint1034 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1034->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1034);

CHAnimJoint* HAnimJoint1035 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1035->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1035);

CHAnimJoint* HAnimJoint1036 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1036->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1036);

CHAnimJoint* HAnimJoint1037 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1037->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1037);

CHAnimJoint* HAnimJoint1038 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1038->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1038);

CHAnimJoint* HAnimJoint1039 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1039->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1039);

CHAnimJoint* HAnimJoint1040 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1040->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1040);

CHAnimJoint* HAnimJoint1041 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1041->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1041);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1044);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1046 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1046->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1046);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1048);

CHAnimJoint* HAnimJoint1049 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1049->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1049);

CHAnimJoint* HAnimJoint1050 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1050->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1050);

CHAnimJoint* HAnimJoint1051 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1051->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1051);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1052);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1053);

CHAnimJoint* HAnimJoint1054 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1054->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1054);

CHAnimJoint* HAnimJoint1055 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1055->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1055);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1056);

CHAnimJoint* HAnimJoint1057 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1057->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1057);

CHAnimJoint* HAnimJoint1058 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1058->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1058);

CHAnimJoint* HAnimJoint1059 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1059->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1059);

CHAnimSegment* HAnimSegment1060 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1060->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1060);

CHAnimSegment* HAnimSegment1061 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1061->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1061);

CHAnimSegment* HAnimSegment1062 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1062->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1062);

CHAnimSegment* HAnimSegment1063 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1063->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1063);

CHAnimSegment* HAnimSegment1064 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1064->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1064);

CHAnimSegment* HAnimSegment1065 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1065->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1065);

CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1066);

CHAnimSegment* HAnimSegment1067 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1067->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1067);

CHAnimSegment* HAnimSegment1068 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1068->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1068);

CHAnimSegment* HAnimSegment1069 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1069->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1069);

CHAnimSegment* HAnimSegment1070 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1070->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1070);

CHAnimSegment* HAnimSegment1071 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1071->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1071);

CHAnimSegment* HAnimSegment1072 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1072->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1072);

CHAnimSegment* HAnimSegment1073 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1073->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1073);

CHAnimSegment* HAnimSegment1074 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1074->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1074);

CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1075);

CHAnimSegment* HAnimSegment1076 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1076->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1076);

CHAnimSegment* HAnimSegment1077 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1077->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1077);

CHAnimSegment* HAnimSegment1078 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1078->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1078);

CHAnimSegment* HAnimSegment1079 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1079->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1079);

CHAnimSegment* HAnimSegment1080 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1080->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1080);

CHAnimSegment* HAnimSegment1081 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1081->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1081);

CHAnimSegment* HAnimSegment1082 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1082->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1082);

CHAnimSegment* HAnimSegment1083 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1083->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1083);

CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1084);

CHAnimSegment* HAnimSegment1085 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1085->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1085);

CHAnimSegment* HAnimSegment1086 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1086->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1086);

CHAnimSegment* HAnimSegment1087 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1087->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1087);

CHAnimSegment* HAnimSegment1088 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1088->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1088);

CHAnimSegment* HAnimSegment1089 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1089->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1089);

CHAnimSegment* HAnimSegment1090 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1090->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1090);

CHAnimSegment* HAnimSegment1091 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1091->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1091);

CHAnimSegment* HAnimSegment1092 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1092->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1092);

CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1093);

CHAnimSegment* HAnimSegment1094 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1094->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1094);

CHAnimSegment* HAnimSegment1095 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1095->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1095);

CHAnimSegment* HAnimSegment1096 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1096->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1096);

CHAnimSegment* HAnimSegment1097 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1097->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1097);

CHAnimSegment* HAnimSegment1098 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1098->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1098);

CHAnimSegment* HAnimSegment1099 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1099->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1099);

CHAnimSegment* HAnimSegment1100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1100->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1100);

CHAnimSegment* HAnimSegment1101 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1101->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1101);

CHAnimSegment* HAnimSegment1102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1102->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1102);

CHAnimSegment* HAnimSegment1103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1103->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1103);

CHAnimSegment* HAnimSegment1104 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1104->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1104);

CHAnimSegment* HAnimSegment1105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1105->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1105);

CHAnimSegment* HAnimSegment1106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1106->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1106);

CHAnimSegment* HAnimSegment1107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1107->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1107);

CHAnimSegment* HAnimSegment1108 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1108->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1108);

CHAnimSegment* HAnimSegment1109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1109->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1109);

CHAnimSegment* HAnimSegment1110 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1110->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1110);

CHAnimSegment* HAnimSegment1111 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1111->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1111);

CHAnimSegment* HAnimSegment1112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1112->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1112);

CHAnimSegment* HAnimSegment1113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1113->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1113);

CHAnimSegment* HAnimSegment1114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1114->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1114);

CHAnimSegment* HAnimSegment1115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1115->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1115);

CHAnimSegment* HAnimSegment1116 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1116->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1116);

CHAnimSegment* HAnimSegment1117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1117->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1117);

CHAnimSite* HAnimSite1118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1118->setUSE("hanim_buttocks_standing_wall_contact_point");
HAnimHumanoid43->setSites(*HAnimSite1118);

CHAnimSite* HAnimSite1119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1119->setUSE("hanim_crotch");
HAnimHumanoid43->setSites(*HAnimSite1119);

CHAnimSite* HAnimSite1120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1120->setUSE("hanim_l_asis");
HAnimHumanoid43->setSites(*HAnimSite1120);

CHAnimSite* HAnimSite1121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1121->setUSE("hanim_l_iliocristale");
HAnimHumanoid43->setSites(*HAnimSite1121);

CHAnimSite* HAnimSite1122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1122->setUSE("hanim_l_psis");
HAnimHumanoid43->setSites(*HAnimSite1122);

CHAnimSite* HAnimSite1123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1123->setUSE("hanim_l_trochanterion");
HAnimHumanoid43->setSites(*HAnimSite1123);

CHAnimSite* HAnimSite1124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1124->setUSE("hanim_r_asis");
HAnimHumanoid43->setSites(*HAnimSite1124);

CHAnimSite* HAnimSite1125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1125->setUSE("hanim_r_iliocristale");
HAnimHumanoid43->setSites(*HAnimSite1125);

CHAnimSite* HAnimSite1126 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1126->setUSE("hanim_r_psis");
HAnimHumanoid43->setSites(*HAnimSite1126);

CHAnimSite* HAnimSite1127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1127->setUSE("hanim_r_trochanterion");
HAnimHumanoid43->setSites(*HAnimSite1127);

CHAnimSite* HAnimSite1128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1128->setUSE("hanim_navel");
HAnimHumanoid43->setSites(*HAnimSite1128);

CHAnimSite* HAnimSite1129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1129->setUSE("hanim_waist_preferred_anterior");
HAnimHumanoid43->setSites(*HAnimSite1129);

CHAnimSite* HAnimSite1130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1130->setUSE("hanim_waist_preferred_posterior");
HAnimHumanoid43->setSites(*HAnimSite1130);

CHAnimSite* HAnimSite1131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1131->setUSE("hanim_l_femoral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1131);

CHAnimSite* HAnimSite1132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1132->setUSE("hanim_l_femoral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1132);

CHAnimSite* HAnimSite1133 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1133->setUSE("hanim_l_knee_crease");
HAnimHumanoid43->setSites(*HAnimSite1133);

CHAnimSite* HAnimSite1134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1134->setUSE("hanim_l_suprapatella");
HAnimHumanoid43->setSites(*HAnimSite1134);

CHAnimSite* HAnimSite1135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1135->setUSE("hanim_r_femoral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1135);

CHAnimSite* HAnimSite1136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1136->setUSE("hanim_r_femoral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1136);

CHAnimSite* HAnimSite1137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1137->setUSE("hanim_r_knee_crease");
HAnimHumanoid43->setSites(*HAnimSite1137);

CHAnimSite* HAnimSite1138 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1138->setUSE("hanim_r_suprapatella");
HAnimHumanoid43->setSites(*HAnimSite1138);

CHAnimSite* HAnimSite1139 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1139->setUSE("hanim_l_lateral_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1139);

CHAnimSite* HAnimSite1140 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1140->setUSE("hanim_l_medial_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1140);

CHAnimSite* HAnimSite1141 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1141->setUSE("hanim_l_tibiale");
HAnimHumanoid43->setSites(*HAnimSite1141);

CHAnimSite* HAnimSite1142 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1142->setUSE("hanim_l_calcaneus_posterior");
HAnimHumanoid43->setSites(*HAnimSite1142);

CHAnimSite* HAnimSite1143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1143->setUSE("hanim_l_sphyrion");
HAnimHumanoid43->setSites(*HAnimSite1143);

CHAnimSite* HAnimSite1144 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1144->setUSE("hanim_l_metatarsal_phalanx_1");
HAnimHumanoid43->setSites(*HAnimSite1144);

CHAnimSite* HAnimSite1145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1145->setUSE("hanim_l_metatarsal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1145);

CHAnimSite* HAnimSite1146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1146->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1146);

CHAnimSite* HAnimSite1147 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1147->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1147);

CHAnimSite* HAnimSite1148 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1148->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1148);

CHAnimSite* HAnimSite1149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1149->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1149);

CHAnimSite* HAnimSite1150 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1150->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1150);

CHAnimSite* HAnimSite1151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1151->setUSE("hanim_r_lateral_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1151);

CHAnimSite* HAnimSite1152 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1152->setUSE("hanim_r_medial_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1152);

CHAnimSite* HAnimSite1153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1153->setUSE("hanim_r_tibiale");
HAnimHumanoid43->setSites(*HAnimSite1153);

CHAnimSite* HAnimSite1154 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1154->setUSE("hanim_r_calcaneus_posterior");
HAnimHumanoid43->setSites(*HAnimSite1154);

CHAnimSite* HAnimSite1155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1155->setUSE("hanim_r_sphyrion");
HAnimHumanoid43->setSites(*HAnimSite1155);

CHAnimSite* HAnimSite1156 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1156->setUSE("hanim_r_metatarsal_phalanx_1");
HAnimHumanoid43->setSites(*HAnimSite1156);

CHAnimSite* HAnimSite1157 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1157->setUSE("hanim_r_metatarsal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1157);

CHAnimSite* HAnimSite1158 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1158->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1158);

CHAnimSite* HAnimSite1159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1159->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1159);

CHAnimSite* HAnimSite1160 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1160->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1160);

CHAnimSite* HAnimSite1161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1161->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1161);

CHAnimSite* HAnimSite1162 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1162->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1162);

CHAnimSite* HAnimSite1163 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1163->setUSE("hanim_l_rib10");
HAnimHumanoid43->setSites(*HAnimSite1163);

CHAnimSite* HAnimSite1164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1164->setUSE("hanim_r_rib10");
HAnimHumanoid43->setSites(*HAnimSite1164);

CHAnimSite* HAnimSite1165 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1165->setUSE("hanim_spine_1_middle_back");
HAnimHumanoid43->setSites(*HAnimSite1165);

CHAnimSite* HAnimSite1166 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1166->setUSE("hanim_spine_2_middle_back");
HAnimHumanoid43->setSites(*HAnimSite1166);

CHAnimSite* HAnimSite1167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1167->setUSE("hanim_l_thelion");
HAnimHumanoid43->setSites(*HAnimSite1167);

CHAnimSite* HAnimSite1168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1168->setUSE("hanim_r_thelion");
HAnimHumanoid43->setSites(*HAnimSite1168);

CHAnimSite* HAnimSite1169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1169->setUSE("hanim_substernale");
HAnimHumanoid43->setSites(*HAnimSite1169);

CHAnimSite* HAnimSite1170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1170->setUSE("hanim_l_chest_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite1170);

CHAnimSite* HAnimSite1171 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1171->setUSE("hanim_mesosternale");
HAnimHumanoid43->setSites(*HAnimSite1171);

CHAnimSite* HAnimSite1172 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1172->setUSE("hanim_r_chest_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite1172);

CHAnimSite* HAnimSite1173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1173->setUSE("hanim_rear_center_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite1173);

CHAnimSite* HAnimSite1174 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1174->setUSE("hanim_cervicale");
HAnimHumanoid43->setSites(*HAnimSite1174);

CHAnimSite* HAnimSite1175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1175->setUSE("hanim_l_neck_base");
HAnimHumanoid43->setSites(*HAnimSite1175);

CHAnimSite* HAnimSite1176 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1176->setUSE("hanim_r_neck_base");
HAnimHumanoid43->setSites(*HAnimSite1176);

CHAnimSite* HAnimSite1177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1177->setUSE("hanim_suprasternale");
HAnimHumanoid43->setSites(*HAnimSite1177);

CHAnimSite* HAnimSite1178 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1178->setUSE("hanim_l_acromion");
HAnimHumanoid43->setSites(*HAnimSite1178);

CHAnimSite* HAnimSite1179 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1179->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1179);

CHAnimSite* HAnimSite1180 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1180->setUSE("hanim_l_axilla_posterior_folds");
HAnimHumanoid43->setSites(*HAnimSite1180);

CHAnimSite* HAnimSite1181 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1181->setUSE("hanim_l_axilla_proximal");
HAnimHumanoid43->setSites(*HAnimSite1181);

CHAnimSite* HAnimSite1182 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1182->setUSE("hanim_l_clavicale");
HAnimHumanoid43->setSites(*HAnimSite1182);

CHAnimSite* HAnimSite1183 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1183->setUSE("hanim_r_acromion");
HAnimHumanoid43->setSites(*HAnimSite1183);

CHAnimSite* HAnimSite1184 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1184->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1184);

CHAnimSite* HAnimSite1185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1185->setUSE("hanim_r_axilla_posterior_folds");
HAnimHumanoid43->setSites(*HAnimSite1185);

CHAnimSite* HAnimSite1186 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1186->setUSE("hanim_r_axilla_proximal");
HAnimHumanoid43->setSites(*HAnimSite1186);

CHAnimSite* HAnimSite1187 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1187->setUSE("hanim_r_clavicale");
HAnimHumanoid43->setSites(*HAnimSite1187);

CHAnimSite* HAnimSite1188 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1188->setUSE("hanim_adams_apple");
HAnimHumanoid43->setSites(*HAnimSite1188);

CHAnimSite* HAnimSite1189 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1189->setUSE("hanim_glabella");
HAnimHumanoid43->setSites(*HAnimSite1189);

CHAnimSite* HAnimSite1190 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1190->setUSE("hanim_l_ectocanthus");
HAnimHumanoid43->setSites(*HAnimSite1190);

CHAnimSite* HAnimSite1191 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1191->setUSE("hanim_l_gonion");
HAnimHumanoid43->setSites(*HAnimSite1191);

CHAnimSite* HAnimSite1192 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1192->setUSE("hanim_l_infraorbitale");
HAnimHumanoid43->setSites(*HAnimSite1192);

CHAnimSite* HAnimSite1193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1193->setUSE("hanim_l_tragion");
HAnimHumanoid43->setSites(*HAnimSite1193);

CHAnimSite* HAnimSite1194 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1194->setUSE("hanim_menton");
HAnimHumanoid43->setSites(*HAnimSite1194);

CHAnimSite* HAnimSite1195 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1195->setUSE("hanim_nuchale");
HAnimHumanoid43->setSites(*HAnimSite1195);

CHAnimSite* HAnimSite1196 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1196->setUSE("hanim_opisthocranion");
HAnimHumanoid43->setSites(*HAnimSite1196);

CHAnimSite* HAnimSite1197 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1197->setUSE("hanim_r_ectocanthus");
HAnimHumanoid43->setSites(*HAnimSite1197);

CHAnimSite* HAnimSite1198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1198->setUSE("hanim_r_gonion");
HAnimHumanoid43->setSites(*HAnimSite1198);

CHAnimSite* HAnimSite1199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1199->setUSE("hanim_r_infraorbitale");
HAnimHumanoid43->setSites(*HAnimSite1199);

CHAnimSite* HAnimSite1200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1200->setUSE("hanim_r_tragion");
HAnimHumanoid43->setSites(*HAnimSite1200);

CHAnimSite* HAnimSite1201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1201->setUSE("hanim_sellion");
HAnimHumanoid43->setSites(*HAnimSite1201);

CHAnimSite* HAnimSite1202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1202->setUSE("hanim_skull_vertex");
HAnimHumanoid43->setSites(*HAnimSite1202);

CHAnimSite* HAnimSite1203 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1203->setUSE("hanim_supramenton");
HAnimHumanoid43->setSites(*HAnimSite1203);

CHAnimSite* HAnimSite1204 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1204->setUSE("hanim_l_bideltoid");
HAnimHumanoid43->setSites(*HAnimSite1204);

CHAnimSite* HAnimSite1205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1205->setUSE("hanim_l_humeral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1205);

CHAnimSite* HAnimSite1206 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1206->setUSE("hanim_l_humeral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1206);

CHAnimSite* HAnimSite1207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1207->setUSE("hanim_l_olecranon");
HAnimHumanoid43->setSites(*HAnimSite1207);

CHAnimSite* HAnimSite1208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1208->setUSE("hanim_l_radial_styloid");
HAnimHumanoid43->setSites(*HAnimSite1208);

CHAnimSite* HAnimSite1209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1209->setUSE("hanim_l_radiale");
HAnimHumanoid43->setSites(*HAnimSite1209);

CHAnimSite* HAnimSite1210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1210->setUSE("hanim_l_ulnar_styloid");
HAnimHumanoid43->setSites(*HAnimSite1210);

CHAnimSite* HAnimSite1211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1211->setUSE("hanim_l_metacarpal_phalanx_2");
HAnimHumanoid43->setSites(*HAnimSite1211);

CHAnimSite* HAnimSite1212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1212->setUSE("hanim_l_metacarpal_phalanx_3");
HAnimHumanoid43->setSites(*HAnimSite1212);

CHAnimSite* HAnimSite1213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1213->setUSE("hanim_l_metacarpal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1213);

CHAnimSite* HAnimSite1214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1214->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1214);

CHAnimSite* HAnimSite1215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1215->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1215);

CHAnimSite* HAnimSite1216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1216->setUSE("hanim_l_dactylion");
HAnimHumanoid43->setSites(*HAnimSite1216);

CHAnimSite* HAnimSite1217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1217->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1217);

CHAnimSite* HAnimSite1218 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1218->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1218);

CHAnimSite* HAnimSite1219 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1219->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1219);

CHAnimSite* HAnimSite1220 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1220->setUSE("hanim_r_bideltoid");
HAnimHumanoid43->setSites(*HAnimSite1220);

CHAnimSite* HAnimSite1221 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1221->setUSE("hanim_r_humeral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1221);

CHAnimSite* HAnimSite1222 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1222->setUSE("hanim_r_humeral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1222);

CHAnimSite* HAnimSite1223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1223->setUSE("hanim_r_olecranon");
HAnimHumanoid43->setSites(*HAnimSite1223);

CHAnimSite* HAnimSite1224 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1224->setUSE("hanim_r_radial_styloid");
HAnimHumanoid43->setSites(*HAnimSite1224);

CHAnimSite* HAnimSite1225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1225->setUSE("hanim_r_radiale");
HAnimHumanoid43->setSites(*HAnimSite1225);

CHAnimSite* HAnimSite1226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1226->setUSE("hanim_r_ulnar_styloid");
HAnimHumanoid43->setSites(*HAnimSite1226);

CHAnimSite* HAnimSite1227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1227->setUSE("hanim_r_metacarpal_phalanx_2");
HAnimHumanoid43->setSites(*HAnimSite1227);

CHAnimSite* HAnimSite1228 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1228->setUSE("hanim_r_metacarpal_phalanx_3");
HAnimHumanoid43->setSites(*HAnimSite1228);

CHAnimSite* HAnimSite1229 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1229->setUSE("hanim_r_metacarpal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1229);

CHAnimSite* HAnimSite1230 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1230->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1230);

CHAnimSite* HAnimSite1231 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1231->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1231);

CHAnimSite* HAnimSite1232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1232->setUSE("hanim_r_dactylion");
HAnimHumanoid43->setSites(*HAnimSite1232);

CHAnimSite* HAnimSite1233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1233->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1233);

CHAnimSite* HAnimSite1234 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1234->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1234);

CHAnimSite* HAnimSite1235 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1235->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1235);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
