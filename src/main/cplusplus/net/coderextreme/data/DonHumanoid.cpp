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
meta3->setContent("JohnBoy.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d");
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

Transform12->addChildren(*Shape13);

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

Transform19->addChildren(*Shape20);

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

Transform24->addChildren(*Shape25);

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

Transform29->addChildren(*Shape30);

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

Transform34->addChildren(*Shape35);

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
ImageTexture49->setUrl(new CString[2]{"zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 2);
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
Transform55->addChildren(*Shape56);

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
Transform107->addChildren(*Shape108);

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
Transform144->addChildren(*Shape145);

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
Transform162->addChildren(*Shape163);

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
Transform177->addChildren(*Shape178);

Transform176->addChildren(*Transform177);

HAnimSegment175->addChildren(*Transform176);

CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet180 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet180->setVertexCount(new int[1]{2});
CCoordinate* Coordinate181 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate181->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097});
LineSet180->setCoord(*Coordinate181);

//from l_talocrural to l_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA182 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA182->setUSE("HAnimSegmentLineColorRGBA");
LineSet180->setColor(*ColorRGBA182);

Shape179->setGeometry(LineSet180);

HAnimSegment175->addChildren(*Shape179);

CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet184 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet184->setVertexCount(new int[1]{2});
CCoordinate* Coordinate185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate185->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278});
LineSet184->setCoord(*Coordinate185);

//from l_talocrural to l_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA186 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA186->setUSE("HAnimSegmentLineColorRGBA");
LineSet184->setColor(*ColorRGBA186);

Shape183->setGeometry(LineSet184);

HAnimSegment175->addChildren(*Shape183);

HAnimJoint174->addChildren(*HAnimSegment175);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setName("l_talocalcaneonavicular");
HAnimJoint187->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint187->setCenter(new float[3]{0.0781,0.0283,-0.097});
HAnimJoint187->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint187->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment188 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment188->setName("l_navicular");
HAnimSegment188->setDEF("hanim_l_navicular");
CTransform* Transform189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform189->setTranslation(new float[3]{0.0781,0.0283,-0.097});
CTransform* Transform190 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape191 = (CShape *)(m_pScene.createNode("Shape"));
Shape191->setUSE("HAnimJointShape");
Transform190->addChildren(*Shape191);

Transform189->addChildren(*Transform190);

HAnimSegment188->addChildren(*Transform189);

CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet193 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet193->setVertexCount(new int[1]{2});
CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835});
LineSet193->setCoord(*Coordinate194);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA195 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA195->setUSE("HAnimSegmentLineColorRGBA");
LineSet193->setColor(*ColorRGBA195);

Shape192->setGeometry(LineSet193);

HAnimSegment188->addChildren(*Shape192);

CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet197 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet197->setVertexCount(new int[1]{2});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0812,0.025,-0.0805});
LineSet197->setCoord(*Coordinate198);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA199 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA199->setUSE("HAnimSegmentLineColorRGBA");
LineSet197->setColor(*ColorRGBA199);

Shape196->setGeometry(LineSet197);

HAnimSegment188->addChildren(*Shape196);

CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet201 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet201->setVertexCount(new int[1]{2});
CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821});
LineSet201->setCoord(*Coordinate202);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA203 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA203->setUSE("HAnimSegmentLineColorRGBA");
LineSet201->setColor(*ColorRGBA203);

Shape200->setGeometry(LineSet201);

HAnimSegment188->addChildren(*Shape200);

HAnimJoint187->addChildren(*HAnimSegment188);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setName("l_cuneonavicular_1");
HAnimJoint204->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint204->setCenter(new float[3]{0.0672,0.0235,-0.0835});
HAnimJoint204->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint204->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment205->setName("l_cuneiform_1");
HAnimSegment205->setDEF("hanim_l_cuneiform_1");
CTransform* Transform206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform206->setTranslation(new float[3]{0.0672,0.0235,-0.0835});
CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
Shape208->setUSE("HAnimJointShape");
Transform207->addChildren(*Shape208);

Transform206->addChildren(*Transform207);

HAnimSegment205->addChildren(*Transform206);

CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet210 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet210->setVertexCount(new int[1]{2});
CCoordinate* Coordinate211 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate211->setPoint(new float[6]{0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577});
LineSet210->setCoord(*Coordinate211);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA212 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA212->setUSE("HAnimSegmentLineColorRGBA");
LineSet210->setColor(*ColorRGBA212);

Shape209->setGeometry(LineSet210);

HAnimSegment205->addChildren(*Shape209);

HAnimJoint204->addChildren(*HAnimSegment205);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("l_tarsometatarsal_1");
HAnimJoint213->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint213->setCenter(new float[3]{0.0644,0.0147,-0.0577});
HAnimJoint213->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint213->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setName("l_metatarsal_1");
HAnimSegment214->setDEF("hanim_l_metatarsal_1");
CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setTranslation(new float[3]{0.0644,0.0147,-0.0577});
CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("HAnimJointShape");
Transform216->addChildren(*Shape217);

Transform215->addChildren(*Transform216);

HAnimSegment214->addChildren(*Transform215);

CShape* Shape218 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet219 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet219->setVertexCount(new int[1]{2});
CCoordinate* Coordinate220 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate220->setPoint(new float[6]{0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083});
LineSet219->setCoord(*Coordinate220);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA221 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA221->setUSE("HAnimSegmentLineColorRGBA");
LineSet219->setColor(*ColorRGBA221);

Shape218->setGeometry(LineSet219);

HAnimSegment214->addChildren(*Shape218);

CHAnimSite* HAnimSite222 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite222->setName("l_metatarsal_phalanx_1_pt");
HAnimSite222->setDEF("hanim_l_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor223 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor223->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite222->addChildren(*TouchSensor223);

CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
Shape224->setUSE("HAnimSiteShape");
HAnimSite222->addChildren(*Shape224);

HAnimSegment214->addChildren(*HAnimSite222);

HAnimJoint213->addChildren(*HAnimSegment214);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setName("l_metatarsophalangeal_1");
HAnimJoint225->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint225->setCenter(new float[3]{0.0619,0.0059,-0.0083});
HAnimJoint225->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint225->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment226 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment226->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment226->setDEF("hanim_l_tarsal_proximal_phalanx_1");
CTransform* Transform227 = (CTransform *)(m_pScene.createNode("Transform"));
Transform227->setTranslation(new float[3]{0.0619,0.0059,-0.0083});
CTransform* Transform228 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
Shape229->setUSE("HAnimJointShape");
Transform228->addChildren(*Shape229);

Transform227->addChildren(*Transform228);

HAnimSegment226->addChildren(*Transform227);

CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet231 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet231->setVertexCount(new int[1]{2});
CCoordinate* Coordinate232 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate232->setPoint(new float[6]{0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083});
LineSet231->setCoord(*Coordinate232);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA233 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA233->setUSE("HAnimSegmentLineColorRGBA");
LineSet231->setColor(*ColorRGBA233);

Shape230->setGeometry(LineSet231);

HAnimSegment226->addChildren(*Shape230);

CHAnimSite* HAnimSite234 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite234->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite234->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor235 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor235->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite234->addChildren(*TouchSensor235);

CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
Shape236->setUSE("HAnimSiteShape");
HAnimSite234->addChildren(*Shape236);

HAnimSegment226->addChildren(*HAnimSite234);

HAnimJoint225->addChildren(*HAnimSegment226);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setName("l_tarsal_interphalangeal_1");
HAnimJoint237->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint237->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint237->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint225->addChildren(*HAnimJoint237);

HAnimJoint213->addChildren(*HAnimJoint225);

HAnimJoint204->addChildren(*HAnimJoint213);

HAnimJoint187->addChildren(*HAnimJoint204);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setName("l_cuneonavicular_2");
HAnimJoint238->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint238->setCenter(new float[3]{0.0812,0.025,-0.0805});
HAnimJoint238->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint238->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setName("l_cuneiform_2");
HAnimSegment239->setDEF("hanim_l_cuneiform_2");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{0.0812,0.025,-0.0805});
CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
Shape242->setUSE("HAnimJointShape");
Transform241->addChildren(*Shape242);

Transform240->addChildren(*Transform241);

HAnimSegment239->addChildren(*Transform240);

CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet244 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet244->setVertexCount(new int[1]{2});
CCoordinate* Coordinate245 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate245->setPoint(new float[6]{0.0812,0.025,-0.0805,0.08,0.0175,-0.0608});
LineSet244->setCoord(*Coordinate245);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA246 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA246->setUSE("HAnimSegmentLineColorRGBA");
LineSet244->setColor(*ColorRGBA246);

Shape243->setGeometry(LineSet244);

HAnimSegment239->addChildren(*Shape243);

HAnimJoint238->addChildren(*HAnimSegment239);

CHAnimJoint* HAnimJoint247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint247->setName("l_tarsometatarsal_2");
HAnimJoint247->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint247->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimJoint247->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint247->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setName("l_metatarsal_2");
HAnimSegment248->setDEF("hanim_l_metatarsal_2");
CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setTranslation(new float[3]{0.08,0.0175,-0.0608});
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("HAnimJointShape");
Transform250->addChildren(*Shape251);

Transform249->addChildren(*Transform250);

HAnimSegment248->addChildren(*Transform249);

CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet253->setVertexCount(new int[1]{2});
CCoordinate* Coordinate254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate254->setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004});
LineSet253->setCoord(*Coordinate254);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA255->setUSE("HAnimSegmentLineColorRGBA");
LineSet253->setColor(*ColorRGBA255);

Shape252->setGeometry(LineSet253);

HAnimSegment248->addChildren(*Shape252);

HAnimJoint247->addChildren(*HAnimSegment248);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setName("l_metatarsophalangeal_2");
HAnimJoint256->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint256->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment257->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment257->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{0.0824,0.0064,-0.004});
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape260 = (CShape *)(m_pScene.createNode("Shape"));
Shape260->setUSE("HAnimJointShape");
Transform259->addChildren(*Shape260);

Transform258->addChildren(*Transform259);

HAnimSegment257->addChildren(*Transform258);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet262 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet262->setVertexCount(new int[1]{2});
CCoordinate* Coordinate263 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate263->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0041,0.0121});
LineSet262->setCoord(*Coordinate263);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA264 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA264->setUSE("HAnimSegmentLineColorRGBA");
LineSet262->setColor(*ColorRGBA264);

Shape261->setGeometry(LineSet262);

HAnimSegment257->addChildren(*Shape261);

HAnimJoint256->addChildren(*HAnimSegment257);

CHAnimJoint* HAnimJoint265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint265->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint265->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint265->setCenter(new float[3]{0.0841,0.0041,0.0121});
HAnimJoint265->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint265->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment266->setName("l_tarsal_middle_phalanx_2");
HAnimSegment266->setDEF("hanim_l_tarsal_middle_phalanx_2");
CTransform* Transform267 = (CTransform *)(m_pScene.createNode("Transform"));
Transform267->setTranslation(new float[3]{0.0841,0.0041,0.0121});
CTransform* Transform268 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimJointShape");
Transform268->addChildren(*Shape269);

Transform267->addChildren(*Transform268);

HAnimSegment266->addChildren(*Transform267);

CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet271 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet271->setVertexCount(new int[1]{2});
CCoordinate* Coordinate272 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate272->setPoint(new float[6]{0.0841,0.0041,0.0121,0.0841,0.0013,0.0216});
LineSet271->setCoord(*Coordinate272);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA273 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA273->setUSE("HAnimSegmentLineColorRGBA");
LineSet271->setColor(*ColorRGBA273);

Shape270->setGeometry(LineSet271);

HAnimSegment266->addChildren(*Shape270);

CHAnimSite* HAnimSite274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite274->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite274->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite274->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor275 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor275->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite274->addChildren(*TouchSensor275);

CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
Shape276->setUSE("HAnimSiteShape");
HAnimSite274->addChildren(*Shape276);

HAnimSegment266->addChildren(*HAnimSite274);

HAnimJoint265->addChildren(*HAnimSegment266);

CHAnimJoint* HAnimJoint277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint277->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint277->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint277->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint277->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint277->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint265->addChildren(*HAnimJoint277);

HAnimJoint256->addChildren(*HAnimJoint265);

HAnimJoint247->addChildren(*HAnimJoint256);

HAnimJoint238->addChildren(*HAnimJoint247);

HAnimJoint187->addChildren(*HAnimJoint238);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setName("l_cuneonavicular_3");
HAnimJoint278->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint278->setCenter(new float[3]{0.0928,0.0248,-0.0821});
HAnimJoint278->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint278->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setName("l_cuneiform_3");
HAnimSegment279->setDEF("hanim_l_cuneiform_3");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{0.0928,0.0248,-0.0821});
CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
Shape282->setUSE("HAnimJointShape");
Transform281->addChildren(*Shape282);

Transform280->addChildren(*Transform281);

HAnimSegment279->addChildren(*Transform280);

CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet284 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet284->setVertexCount(new int[1]{2});
CCoordinate* Coordinate285 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate285->setPoint(new float[6]{0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625});
LineSet284->setCoord(*Coordinate285);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA286->setUSE("HAnimSegmentLineColorRGBA");
LineSet284->setColor(*ColorRGBA286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setName("l_tarsometatarsal_3");
HAnimJoint287->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint287->setCenter(new float[3]{0.0944,0.0175,-0.0625});
HAnimJoint287->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint287->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setName("l_metatarsal_3");
HAnimSegment288->setDEF("hanim_l_metatarsal_3");
CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{0.0944,0.0175,-0.0625});
CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("HAnimJointShape");
Transform290->addChildren(*Shape291);

Transform289->addChildren(*Transform290);

HAnimSegment288->addChildren(*Transform289);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet293 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet293->setVertexCount(new int[1]{2});
CCoordinate* Coordinate294 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate294->setPoint(new float[6]{0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065});
LineSet293->setCoord(*Coordinate294);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
CColorRGBA* ColorRGBA295 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA295->setUSE("HAnimSegmentLineColorRGBA");
LineSet293->setColor(*ColorRGBA295);

Shape292->setGeometry(LineSet293);

HAnimSegment288->addChildren(*Shape292);

HAnimJoint287->addChildren(*HAnimSegment288);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setName("l_metatarsophalangeal_3");
HAnimJoint296->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint296->setCenter(new float[3]{0.0963,0.0065,-0.0065});
HAnimJoint296->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint296->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment297->setDEF("hanim_l_tarsal_proximal_phalanx_3");
CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
Transform298->setTranslation(new float[3]{0.0963,0.0065,-0.0065});
CTransform* Transform299 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
Shape300->setUSE("HAnimJointShape");
Transform299->addChildren(*Shape300);

Transform298->addChildren(*Transform299);

HAnimSegment297->addChildren(*Transform298);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet302 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet302->setVertexCount(new int[1]{2});
CCoordinate* Coordinate303 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate303->setPoint(new float[6]{0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086});
LineSet302->setCoord(*Coordinate303);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA304 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA304->setUSE("HAnimSegmentLineColorRGBA");
LineSet302->setColor(*ColorRGBA304);

Shape301->setGeometry(LineSet302);

HAnimSegment297->addChildren(*Shape301);

HAnimJoint296->addChildren(*HAnimSegment297);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint305->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint305->setCenter(new float[3]{0.0987,0.0034,0.0086});
HAnimJoint305->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint305->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setName("l_tarsal_middle_phalanx_3");
HAnimSegment306->setDEF("hanim_l_tarsal_middle_phalanx_3");
CTransform* Transform307 = (CTransform *)(m_pScene.createNode("Transform"));
Transform307->setTranslation(new float[3]{0.0987,0.0034,0.0086});
CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimJointShape");
Transform308->addChildren(*Shape309);

Transform307->addChildren(*Transform308);

HAnimSegment306->addChildren(*Transform307);

CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet311 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet311->setVertexCount(new int[1]{2});
CCoordinate* Coordinate312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate312->setPoint(new float[6]{0.0987,0.0034,0.0086,0.1002,0.0013,0.0178});
LineSet311->setCoord(*Coordinate312);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA313->setUSE("HAnimSegmentLineColorRGBA");
LineSet311->setColor(*ColorRGBA313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChildren(*Shape310);

CHAnimSite* HAnimSite314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite314->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite314->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor315 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor315->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite314->addChildren(*TouchSensor315);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
Shape316->setUSE("HAnimSiteShape");
HAnimSite314->addChildren(*Shape316);

HAnimSegment306->addChildren(*HAnimSite314);

HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint317->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint317->setCenter(new float[3]{0.1002,0.0013,0.0178});
HAnimJoint317->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint317->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint305->addChildren(*HAnimJoint317);

HAnimJoint296->addChildren(*HAnimJoint305);

HAnimJoint287->addChildren(*HAnimJoint296);

HAnimJoint278->addChildren(*HAnimJoint287);

HAnimJoint187->addChildren(*HAnimJoint278);

HAnimJoint174->addChildren(*HAnimJoint187);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setName("l_calcaneocuboid");
HAnimJoint318->setDEF("hanim_l_calcaneocuboid");
HAnimJoint318->setCenter(new float[3]{0.0889,0.0494,-0.1278});
HAnimJoint318->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint318->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setName("l_calcaneus");
HAnimSegment319->setDEF("hanim_l_calcaneus");
CTransform* Transform320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform320->setTranslation(new float[3]{0.0889,0.0494,-0.1278});
CTransform* Transform321 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
Shape322->setUSE("HAnimJointShape");
Transform321->addChildren(*Shape322);

Transform320->addChildren(*Transform321);

HAnimSegment319->addChildren(*Transform320);

CShape* Shape323 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet324 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet324->setVertexCount(new int[1]{2});
CCoordinate* Coordinate325 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate325->setPoint(new float[6]{0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998});
LineSet324->setCoord(*Coordinate325);

//from l_calcaneocuboid to l_transversetarsal vertices 2
CColorRGBA* ColorRGBA326 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA326->setUSE("HAnimSegmentLineColorRGBA");
LineSet324->setColor(*ColorRGBA326);

Shape323->setGeometry(LineSet324);

HAnimSegment319->addChildren(*Shape323);

HAnimJoint318->addChildren(*HAnimSegment319);

CHAnimJoint* HAnimJoint327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint327->setName("l_transversetarsal");
HAnimJoint327->setDEF("hanim_l_transversetarsal");
HAnimJoint327->setCenter(new float[3]{0.1105,0.0267,-0.0998});
HAnimJoint327->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint327->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment328->setName("l_cuboid");
HAnimSegment328->setDEF("hanim_l_cuboid");
CTransform* Transform329 = (CTransform *)(m_pScene.createNode("Transform"));
Transform329->setTranslation(new float[3]{0.1105,0.0267,-0.0998});
CTransform* Transform330 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
Shape331->setUSE("HAnimJointShape");
Transform330->addChildren(*Shape331);

Transform329->addChildren(*Transform330);

HAnimSegment328->addChildren(*Transform329);

CShape* Shape332 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet333 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet333->setVertexCount(new int[1]{2});
CCoordinate* Coordinate334 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate334->setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634});
LineSet333->setCoord(*Coordinate334);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA335 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA335->setUSE("HAnimSegmentLineColorRGBA");
LineSet333->setColor(*ColorRGBA335);

Shape332->setGeometry(LineSet333);

HAnimSegment328->addChildren(*Shape332);

CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet337 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet337->setVertexCount(new int[1]{2});
CCoordinate* Coordinate338 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate338->setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671});
LineSet337->setCoord(*Coordinate338);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA339 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA339->setUSE("HAnimSegmentLineColorRGBA");
LineSet337->setColor(*ColorRGBA339);

Shape336->setGeometry(LineSet337);

HAnimSegment328->addChildren(*Shape336);

HAnimJoint327->addChildren(*HAnimSegment328);

CHAnimJoint* HAnimJoint340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint340->setName("l_tarsometatarsal_4");
HAnimJoint340->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint340->setCenter(new float[3]{0.1063,0.016,-0.0634});
HAnimJoint340->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint340->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment341 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment341->setName("l_metatarsal_4");
HAnimSegment341->setDEF("hanim_l_metatarsal_4");
CTransform* Transform342 = (CTransform *)(m_pScene.createNode("Transform"));
Transform342->setTranslation(new float[3]{0.1063,0.016,-0.0634});
CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimJointShape");
Transform343->addChildren(*Shape344);

Transform342->addChildren(*Transform343);

HAnimSegment341->addChildren(*Transform342);

CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet346 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet346->setVertexCount(new int[1]{2});
CCoordinate* Coordinate347 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate347->setPoint(new float[6]{0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107});
LineSet346->setCoord(*Coordinate347);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA348 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA348->setUSE("HAnimSegmentLineColorRGBA");
LineSet346->setColor(*ColorRGBA348);

Shape345->setGeometry(LineSet346);

HAnimSegment341->addChildren(*Shape345);

HAnimJoint340->addChildren(*HAnimSegment341);

CHAnimJoint* HAnimJoint349 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint349->setName("l_metatarsophalangeal_4");
HAnimJoint349->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint349->setCenter(new float[3]{0.1097,0.0058,-0.0107});
HAnimJoint349->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint349->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment350 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment350->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment350->setDEF("hanim_l_tarsal_proximal_phalanx_4");
CTransform* Transform351 = (CTransform *)(m_pScene.createNode("Transform"));
Transform351->setTranslation(new float[3]{0.1097,0.0058,-0.0107});
CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("HAnimJointShape");
Transform352->addChildren(*Shape353);

Transform351->addChildren(*Transform352);

HAnimSegment350->addChildren(*Transform351);

CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet355 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet355->setVertexCount(new int[1]{2});
CCoordinate* Coordinate356 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate356->setPoint(new float[6]{0.1097,0.0058,-0.0107,0.114,0.0037,0.0044});
LineSet355->setCoord(*Coordinate356);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA357 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA357->setUSE("HAnimSegmentLineColorRGBA");
LineSet355->setColor(*ColorRGBA357);

Shape354->setGeometry(LineSet355);

HAnimSegment350->addChildren(*Shape354);

HAnimJoint349->addChildren(*HAnimSegment350);

CHAnimJoint* HAnimJoint358 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint358->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint358->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint358->setCenter(new float[3]{0.114,0.0037,0.0044});
HAnimJoint358->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint358->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment359 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment359->setName("l_tarsal_middle_phalanx_4");
HAnimSegment359->setDEF("hanim_l_tarsal_middle_phalanx_4");
CTransform* Transform360 = (CTransform *)(m_pScene.createNode("Transform"));
Transform360->setTranslation(new float[3]{0.114,0.0037,0.0044});
CTransform* Transform361 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
Shape362->setUSE("HAnimJointShape");
Transform361->addChildren(*Shape362);

Transform360->addChildren(*Transform361);

HAnimSegment359->addChildren(*Transform360);

CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet364 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet364->setVertexCount(new int[1]{2});
CCoordinate* Coordinate365 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate365->setPoint(new float[6]{0.114,0.0037,0.0044,0.1155,0.0008,0.0118});
LineSet364->setCoord(*Coordinate365);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA366 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA366->setUSE("HAnimSegmentLineColorRGBA");
LineSet364->setColor(*ColorRGBA366);

Shape363->setGeometry(LineSet364);

HAnimSegment359->addChildren(*Shape363);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite367->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor368 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor368->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite367->addChildren(*TouchSensor368);

CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
Shape369->setUSE("HAnimSiteShape");
HAnimSite367->addChildren(*Shape369);

HAnimSegment359->addChildren(*HAnimSite367);

HAnimJoint358->addChildren(*HAnimSegment359);

CHAnimJoint* HAnimJoint370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint370->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint370->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint370->setCenter(new float[3]{0.1155,0.0008,0.0118});
HAnimJoint370->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint370->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint358->addChildren(*HAnimJoint370);

HAnimJoint349->addChildren(*HAnimJoint358);

HAnimJoint340->addChildren(*HAnimJoint349);

HAnimJoint327->addChildren(*HAnimJoint340);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setName("l_tarsometatarsal_5");
HAnimJoint371->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint371->setCenter(new float[3]{0.1206,0.0124,-0.0671});
HAnimJoint371->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint371->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment372 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment372->setName("l_metatarsal_5");
HAnimSegment372->setDEF("hanim_l_metatarsal_5");
CTransform* Transform373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform373->setTranslation(new float[3]{0.1206,0.0124,-0.0671});
CTransform* Transform374 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
Shape375->setUSE("HAnimJointShape");
Transform374->addChildren(*Shape375);

Transform373->addChildren(*Transform374);

HAnimSegment372->addChildren(*Transform373);

CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet377 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet377->setVertexCount(new int[1]{2});
CCoordinate* Coordinate378 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate378->setPoint(new float[6]{0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153});
LineSet377->setCoord(*Coordinate378);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA379 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA379->setUSE("HAnimSegmentLineColorRGBA");
LineSet377->setColor(*ColorRGBA379);

Shape376->setGeometry(LineSet377);

HAnimSegment372->addChildren(*Shape376);

CHAnimSite* HAnimSite380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite380->setName("l_metatarsal_phalanx_5_pt");
HAnimSite380->setDEF("hanim_l_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor381 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor381->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite380->addChildren(*TouchSensor381);

CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
Shape382->setUSE("HAnimSiteShape");
HAnimSite380->addChildren(*Shape382);

HAnimSegment372->addChildren(*HAnimSite380);

HAnimJoint371->addChildren(*HAnimSegment372);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setName("l_metatarsophalangeal_5");
HAnimJoint383->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint383->setCenter(new float[3]{0.1239,0.0051,-0.0153});
HAnimJoint383->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint383->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment384 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment384->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment384->setDEF("hanim_l_tarsal_proximal_phalanx_5");
CTransform* Transform385 = (CTransform *)(m_pScene.createNode("Transform"));
Transform385->setTranslation(new float[3]{0.1239,0.0051,-0.0153});
CTransform* Transform386 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape387 = (CShape *)(m_pScene.createNode("Shape"));
Shape387->setUSE("HAnimJointShape");
Transform386->addChildren(*Shape387);

Transform385->addChildren(*Transform386);

HAnimSegment384->addChildren(*Transform385);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet389 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet389->setVertexCount(new int[1]{2});
CCoordinate* Coordinate390 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate390->setPoint(new float[6]{0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077});
LineSet389->setCoord(*Coordinate390);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA391 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA391->setUSE("HAnimSegmentLineColorRGBA");
LineSet389->setColor(*ColorRGBA391);

Shape388->setGeometry(LineSet389);

HAnimSegment384->addChildren(*Shape388);

HAnimJoint383->addChildren(*HAnimSegment384);

CHAnimJoint* HAnimJoint392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint392->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint392->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint392->setCenter(new float[3]{0.1262,0.0023,-0.0077});
HAnimJoint392->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint392->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment393 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment393->setName("l_tarsal_middle_phalanx_5");
HAnimSegment393->setDEF("hanim_l_tarsal_middle_phalanx_5");
CTransform* Transform394 = (CTransform *)(m_pScene.createNode("Transform"));
Transform394->setTranslation(new float[3]{0.1262,0.0023,-0.0077});
CTransform* Transform395 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
Shape396->setUSE("HAnimJointShape");
Transform395->addChildren(*Shape396);

Transform394->addChildren(*Transform395);

HAnimSegment393->addChildren(*Transform394);

CShape* Shape397 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet398 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet398->setVertexCount(new int[1]{2});
CCoordinate* Coordinate399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate399->setPoint(new float[6]{0.1262,0.0023,-0.0077,0.1271,0,0});
LineSet398->setCoord(*Coordinate399);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA400 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA400->setUSE("HAnimSegmentLineColorRGBA");
LineSet398->setColor(*ColorRGBA400);

Shape397->setGeometry(LineSet398);

HAnimSegment393->addChildren(*Shape397);

CHAnimSite* HAnimSite401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite401->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite401->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor402 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor402->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite401->addChildren(*TouchSensor402);

CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
Shape403->setUSE("HAnimSiteShape");
HAnimSite401->addChildren(*Shape403);

HAnimSegment393->addChildren(*HAnimSite401);

HAnimJoint392->addChildren(*HAnimSegment393);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint404->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint404->setCenter(new float[3]{0.1271,0,0});
HAnimJoint404->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint404->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint392->addChildren(*HAnimJoint404);

HAnimJoint383->addChildren(*HAnimJoint392);

HAnimJoint371->addChildren(*HAnimJoint383);

HAnimJoint327->addChildren(*HAnimJoint371);

HAnimJoint318->addChildren(*HAnimJoint327);

HAnimJoint174->addChildren(*HAnimJoint318);

HAnimJoint159->addChildren(*HAnimJoint174);

HAnimJoint141->addChildren(*HAnimJoint159);

HAnimJoint104->addChildren(*HAnimJoint141);

CHAnimJoint* HAnimJoint405 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint405->setName("r_hip");
HAnimJoint405->setDEF("hanim_r_hip");
HAnimJoint405->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint405->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint405->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment406 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment406->setName("r_thigh");
HAnimSegment406->setDEF("hanim_r_thigh");
CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform407->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform408 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
Shape409->setUSE("HAnimJointShape");
Transform408->addChildren(*Shape409);

Transform407->addChildren(*Transform408);

HAnimSegment406->addChildren(*Transform407);

CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet411 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet411->setVertexCount(new int[1]{2});
CCoordinate* Coordinate412 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate412->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet411->setCoord(*Coordinate412);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA413 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA413->setUSE("HAnimSegmentLineColorRGBA");
LineSet411->setColor(*ColorRGBA413);

Shape410->setGeometry(LineSet411);

HAnimSegment406->addChildren(*Shape410);

CHAnimSite* HAnimSite414 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite414->setName("r_lateral_malleolus_pt");
HAnimSite414->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite414->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor415 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor415->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite414->addChildren(*TouchSensor415);

CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
Shape416->setUSE("HAnimSiteShape");
HAnimSite414->addChildren(*Shape416);

HAnimSegment406->addChildren(*HAnimSite414);

CHAnimSite* HAnimSite417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite417->setName("r_medial_malleolus_pt");
HAnimSite417->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite417->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor418 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor418->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite417->addChildren(*TouchSensor418);

CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
Shape419->setUSE("HAnimSiteShape");
HAnimSite417->addChildren(*Shape419);

HAnimSegment406->addChildren(*HAnimSite417);

CHAnimSite* HAnimSite420 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite420->setName("r_tibiale_pt");
HAnimSite420->setDEF("hanim_r_tibiale_pt");
CTouchSensor* TouchSensor421 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor421->setDescription("HAnimSite r_tibiale_pt");
HAnimSite420->addChildren(*TouchSensor421);

CShape* Shape422 = (CShape *)(m_pScene.createNode("Shape"));
Shape422->setUSE("HAnimSiteShape");
HAnimSite420->addChildren(*Shape422);

HAnimSegment406->addChildren(*HAnimSite420);

HAnimJoint405->addChildren(*HAnimSegment406);

CHAnimJoint* HAnimJoint423 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint423->setName("r_knee");
HAnimJoint423->setDEF("hanim_r_knee");
HAnimJoint423->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint423->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint423->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment424 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment424->setName("r_calf");
HAnimSegment424->setDEF("hanim_r_calf");
CTransform* Transform425 = (CTransform *)(m_pScene.createNode("Transform"));
Transform425->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform426 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
Shape427->setUSE("HAnimJointShape");
Transform426->addChildren(*Shape427);

Transform425->addChildren(*Transform426);

HAnimSegment424->addChildren(*Transform425);

CShape* Shape428 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet429 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet429->setVertexCount(new int[1]{2});
CCoordinate* Coordinate430 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate430->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet429->setCoord(*Coordinate430);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA431 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA431->setUSE("HAnimSegmentLineColorRGBA");
LineSet429->setColor(*ColorRGBA431);

Shape428->setGeometry(LineSet429);

HAnimSegment424->addChildren(*Shape428);

CHAnimSite* HAnimSite432 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite432->setName("r_calcaneus_posterior_pt");
HAnimSite432->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite432->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor433 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor433->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite432->addChildren(*TouchSensor433);

CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
Shape434->setUSE("HAnimSiteShape");
HAnimSite432->addChildren(*Shape434);

HAnimSegment424->addChildren(*HAnimSite432);

CHAnimSite* HAnimSite435 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite435->setName("r_sphyrion_pt");
HAnimSite435->setDEF("hanim_r_sphyrion_pt");
HAnimSite435->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor436 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor436->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite435->addChildren(*TouchSensor436);

CShape* Shape437 = (CShape *)(m_pScene.createNode("Shape"));
Shape437->setUSE("HAnimSiteShape");
HAnimSite435->addChildren(*Shape437);

HAnimSegment424->addChildren(*HAnimSite435);

HAnimJoint423->addChildren(*HAnimSegment424);

CHAnimJoint* HAnimJoint438 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint438->setName("r_talocrural");
HAnimJoint438->setDEF("hanim_r_talocrural");
HAnimJoint438->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint438->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint438->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment439 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment439->setName("r_talus");
HAnimSegment439->setDEF("hanim_r_talus");
CTransform* Transform440 = (CTransform *)(m_pScene.createNode("Transform"));
Transform440->setScale(new float[3]{0.15,0.15,0.15});
Transform440->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform440->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform441 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("HAnimJointShape");
Transform441->addChildren(*Shape442);

Transform440->addChildren(*Transform441);

HAnimSegment439->addChildren(*Transform440);

CShape* Shape443 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet444 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet444->setVertexCount(new int[1]{2});
CCoordinate* Coordinate445 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate445->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097});
LineSet444->setCoord(*Coordinate445);

//from r_talocrural to r_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA446 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA446->setUSE("HAnimSegmentLineColorRGBA");
LineSet444->setColor(*ColorRGBA446);

Shape443->setGeometry(LineSet444);

HAnimSegment439->addChildren(*Shape443);

CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet448 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet448->setVertexCount(new int[1]{2});
CCoordinate* Coordinate449 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate449->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278});
LineSet448->setCoord(*Coordinate449);

//from r_talocrural to r_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA450 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA450->setUSE("HAnimSegmentLineColorRGBA");
LineSet448->setColor(*ColorRGBA450);

Shape447->setGeometry(LineSet448);

HAnimSegment439->addChildren(*Shape447);

HAnimJoint438->addChildren(*HAnimSegment439);

CHAnimJoint* HAnimJoint451 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint451->setName("r_talocalcaneonavicular");
HAnimJoint451->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint451->setCenter(new float[3]{-0.0781,0.0283,-0.097});
HAnimJoint451->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint451->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment452 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment452->setName("r_navicular");
HAnimSegment452->setDEF("hanim_r_navicular");
CTransform* Transform453 = (CTransform *)(m_pScene.createNode("Transform"));
Transform453->setTranslation(new float[3]{-0.0781,0.0283,-0.097});
CTransform* Transform454 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape455 = (CShape *)(m_pScene.createNode("Shape"));
Shape455->setUSE("HAnimJointShape");
Transform454->addChildren(*Shape455);

Transform453->addChildren(*Transform454);

HAnimSegment452->addChildren(*Transform453);

CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet457 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet457->setVertexCount(new int[1]{2});
CCoordinate* Coordinate458 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate458->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835});
LineSet457->setCoord(*Coordinate458);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA459 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA459->setUSE("HAnimSegmentLineColorRGBA");
LineSet457->setColor(*ColorRGBA459);

Shape456->setGeometry(LineSet457);

HAnimSegment452->addChildren(*Shape456);

CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet461 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet461->setVertexCount(new int[1]{2});
CCoordinate* Coordinate462 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate462->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805});
LineSet461->setCoord(*Coordinate462);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA463 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA463->setUSE("HAnimSegmentLineColorRGBA");
LineSet461->setColor(*ColorRGBA463);

Shape460->setGeometry(LineSet461);

HAnimSegment452->addChildren(*Shape460);

CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet465 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet465->setVertexCount(new int[1]{2});
CCoordinate* Coordinate466 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate466->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821});
LineSet465->setCoord(*Coordinate466);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA467 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA467->setUSE("HAnimSegmentLineColorRGBA");
LineSet465->setColor(*ColorRGBA467);

Shape464->setGeometry(LineSet465);

HAnimSegment452->addChildren(*Shape464);

HAnimJoint451->addChildren(*HAnimSegment452);

CHAnimJoint* HAnimJoint468 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint468->setName("r_cuneonavicular_1");
HAnimJoint468->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint468->setCenter(new float[3]{-0.0672,0.0235,-0.0835});
HAnimJoint468->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint468->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setName("r_cuneiform_1");
HAnimSegment469->setDEF("hanim_r_cuneiform_1");
CTransform* Transform470 = (CTransform *)(m_pScene.createNode("Transform"));
Transform470->setTranslation(new float[3]{-0.0672,0.0235,-0.0835});
CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("HAnimJointShape");
Transform471->addChildren(*Shape472);

Transform470->addChildren(*Transform471);

HAnimSegment469->addChildren(*Transform470);

CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet474 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet474->setVertexCount(new int[1]{2});
CCoordinate* Coordinate475 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate475->setPoint(new float[6]{-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577});
LineSet474->setCoord(*Coordinate475);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA476 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA476->setUSE("HAnimSegmentLineColorRGBA");
LineSet474->setColor(*ColorRGBA476);

Shape473->setGeometry(LineSet474);

HAnimSegment469->addChildren(*Shape473);

HAnimJoint468->addChildren(*HAnimSegment469);

CHAnimJoint* HAnimJoint477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint477->setName("r_tarsometatarsal_1");
HAnimJoint477->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint477->setCenter(new float[3]{-0.0644,0.0147,-0.0577});
HAnimJoint477->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint477->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setName("r_metatarsal_1");
HAnimSegment478->setDEF("hanim_r_metatarsal_1");
CTransform* Transform479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform479->setTranslation(new float[3]{-0.0644,0.0147,-0.0577});
CTransform* Transform480 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("HAnimJointShape");
Transform480->addChildren(*Shape481);

Transform479->addChildren(*Transform480);

HAnimSegment478->addChildren(*Transform479);

CShape* Shape482 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet483 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet483->setVertexCount(new int[1]{2});
CCoordinate* Coordinate484 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate484->setPoint(new float[6]{-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083});
LineSet483->setCoord(*Coordinate484);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA485 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA485->setUSE("HAnimSegmentLineColorRGBA");
LineSet483->setColor(*ColorRGBA485);

Shape482->setGeometry(LineSet483);

HAnimSegment478->addChildren(*Shape482);

CHAnimSite* HAnimSite486 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite486->setName("r_metatarsal_phalanx_1_pt");
HAnimSite486->setDEF("hanim_r_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor487 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor487->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite486->addChildren(*TouchSensor487);

CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
Shape488->setUSE("HAnimSiteShape");
HAnimSite486->addChildren(*Shape488);

HAnimSegment478->addChildren(*HAnimSite486);

HAnimJoint477->addChildren(*HAnimSegment478);

CHAnimJoint* HAnimJoint489 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint489->setName("r_metatarsophalangeal_1");
HAnimJoint489->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint489->setCenter(new float[3]{-0.0619,0.0059,-0.0083});
HAnimJoint489->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint489->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment490 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment490->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment490->setDEF("hanim_r_tarsal_proximal_phalanx_1");
CTransform* Transform491 = (CTransform *)(m_pScene.createNode("Transform"));
Transform491->setTranslation(new float[3]{-0.0619,0.0059,-0.0083});
CTransform* Transform492 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape493 = (CShape *)(m_pScene.createNode("Shape"));
Shape493->setUSE("HAnimJointShape");
Transform492->addChildren(*Shape493);

Transform491->addChildren(*Transform492);

HAnimSegment490->addChildren(*Transform491);

CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet495 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet495->setVertexCount(new int[1]{2});
CCoordinate* Coordinate496 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate496->setPoint(new float[6]{-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083});
LineSet495->setCoord(*Coordinate496);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA497 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA497->setUSE("HAnimSegmentLineColorRGBA");
LineSet495->setColor(*ColorRGBA497);

Shape494->setGeometry(LineSet495);

HAnimSegment490->addChildren(*Shape494);

CHAnimSite* HAnimSite498 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite498->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite498->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor499 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor499->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite498->addChildren(*TouchSensor499);

CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
Shape500->setUSE("HAnimSiteShape");
HAnimSite498->addChildren(*Shape500);

HAnimSegment490->addChildren(*HAnimSite498);

HAnimJoint489->addChildren(*HAnimSegment490);

CHAnimJoint* HAnimJoint501 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint501->setName("r_tarsal_interphalangeal_1");
HAnimJoint501->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint501->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint501->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint489->addChildren(*HAnimJoint501);

HAnimJoint477->addChildren(*HAnimJoint489);

HAnimJoint468->addChildren(*HAnimJoint477);

HAnimJoint451->addChildren(*HAnimJoint468);

CHAnimJoint* HAnimJoint502 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint502->setName("r_cuneonavicular_2");
HAnimJoint502->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint502->setCenter(new float[3]{-0.0812,0.025,-0.0805});
HAnimJoint502->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint502->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment503->setName("r_cuneiform_2");
HAnimSegment503->setDEF("hanim_r_cuneiform_2");
CTransform* Transform504 = (CTransform *)(m_pScene.createNode("Transform"));
Transform504->setTranslation(new float[3]{-0.0812,0.025,-0.0805});
CTransform* Transform505 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape506 = (CShape *)(m_pScene.createNode("Shape"));
Shape506->setUSE("HAnimJointShape");
Transform505->addChildren(*Shape506);

Transform504->addChildren(*Transform505);

HAnimSegment503->addChildren(*Transform504);

CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet508 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet508->setVertexCount(new int[1]{2});
CCoordinate* Coordinate509 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate509->setPoint(new float[6]{-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608});
LineSet508->setCoord(*Coordinate509);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA510 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA510->setUSE("HAnimSegmentLineColorRGBA");
LineSet508->setColor(*ColorRGBA510);

Shape507->setGeometry(LineSet508);

HAnimSegment503->addChildren(*Shape507);

HAnimJoint502->addChildren(*HAnimSegment503);

CHAnimJoint* HAnimJoint511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint511->setName("r_tarsometatarsal_2");
HAnimJoint511->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint511->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint511->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint511->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setName("r_metatarsal_2");
HAnimSegment512->setDEF("hanim_r_metatarsal_2");
CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("HAnimJointShape");
Transform514->addChildren(*Shape515);

Transform513->addChildren(*Transform514);

HAnimSegment512->addChildren(*Transform513);

CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet517 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet517->setVertexCount(new int[1]{2});
CCoordinate* Coordinate518 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate518->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004});
LineSet517->setCoord(*Coordinate518);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA519 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA519->setUSE("HAnimSegmentLineColorRGBA");
LineSet517->setColor(*ColorRGBA519);

Shape516->setGeometry(LineSet517);

HAnimSegment512->addChildren(*Shape516);

HAnimJoint511->addChildren(*HAnimSegment512);

CHAnimJoint* HAnimJoint520 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint520->setName("r_metatarsophalangeal_2");
HAnimJoint520->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint520->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint520->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint520->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment521 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment521->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment521->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform522 = (CTransform *)(m_pScene.createNode("Transform"));
Transform522->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
CTransform* Transform523 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape524 = (CShape *)(m_pScene.createNode("Shape"));
Shape524->setUSE("HAnimJointShape");
Transform523->addChildren(*Shape524);

Transform522->addChildren(*Transform523);

HAnimSegment521->addChildren(*Transform522);

CShape* Shape525 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet526 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet526->setVertexCount(new int[1]{2});
CCoordinate* Coordinate527 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate527->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121});
LineSet526->setCoord(*Coordinate527);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA528 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA528->setUSE("HAnimSegmentLineColorRGBA");
LineSet526->setColor(*ColorRGBA528);

Shape525->setGeometry(LineSet526);

HAnimSegment521->addChildren(*Shape525);

HAnimJoint520->addChildren(*HAnimSegment521);

CHAnimJoint* HAnimJoint529 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint529->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint529->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint529->setCenter(new float[3]{-0.0841,0.0041,0.0121});
HAnimJoint529->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint529->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment530 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment530->setName("r_tarsal_middle_phalanx_2");
HAnimSegment530->setDEF("hanim_r_tarsal_middle_phalanx_2");
CTransform* Transform531 = (CTransform *)(m_pScene.createNode("Transform"));
Transform531->setTranslation(new float[3]{-0.0841,0.0041,0.0121});
CTransform* Transform532 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
Shape533->setUSE("HAnimJointShape");
Transform532->addChildren(*Shape533);

Transform531->addChildren(*Transform532);

HAnimSegment530->addChildren(*Transform531);

CShape* Shape534 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet535 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet535->setVertexCount(new int[1]{2});
CCoordinate* Coordinate536 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate536->setPoint(new float[6]{-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216});
LineSet535->setCoord(*Coordinate536);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA537 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA537->setUSE("HAnimSegmentLineColorRGBA");
LineSet535->setColor(*ColorRGBA537);

Shape534->setGeometry(LineSet535);

HAnimSegment530->addChildren(*Shape534);

CHAnimSite* HAnimSite538 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite538->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite538->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite538->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor539 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor539->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite538->addChildren(*TouchSensor539);

CShape* Shape540 = (CShape *)(m_pScene.createNode("Shape"));
Shape540->setUSE("HAnimSiteShape");
HAnimSite538->addChildren(*Shape540);

HAnimSegment530->addChildren(*HAnimSite538);

HAnimJoint529->addChildren(*HAnimSegment530);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint541->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint541->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint541->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint541->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint529->addChildren(*HAnimJoint541);

HAnimJoint520->addChildren(*HAnimJoint529);

HAnimJoint511->addChildren(*HAnimJoint520);

HAnimJoint502->addChildren(*HAnimJoint511);

HAnimJoint451->addChildren(*HAnimJoint502);

CHAnimJoint* HAnimJoint542 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint542->setName("r_cuneonavicular_3");
HAnimJoint542->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint542->setCenter(new float[3]{-0.0928,0.0248,-0.0821});
HAnimJoint542->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint542->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setName("r_cuneiform_3");
HAnimSegment543->setDEF("hanim_r_cuneiform_3");
CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
Transform544->setTranslation(new float[3]{-0.0928,0.0248,-0.0821});
CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
Shape546->setUSE("HAnimJointShape");
Transform545->addChildren(*Shape546);

Transform544->addChildren(*Transform545);

HAnimSegment543->addChildren(*Transform544);

CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet548 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet548->setVertexCount(new int[1]{2});
CCoordinate* Coordinate549 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate549->setPoint(new float[6]{-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625});
LineSet548->setCoord(*Coordinate549);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA550 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA550->setUSE("HAnimSegmentLineColorRGBA");
LineSet548->setColor(*ColorRGBA550);

Shape547->setGeometry(LineSet548);

HAnimSegment543->addChildren(*Shape547);

HAnimJoint542->addChildren(*HAnimSegment543);

CHAnimJoint* HAnimJoint551 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint551->setName("r_tarsometatarsal_3");
HAnimJoint551->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint551->setCenter(new float[3]{-0.0944,0.0175,-0.0625});
HAnimJoint551->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint551->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment552 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment552->setName("r_metatarsal_3");
HAnimSegment552->setDEF("hanim_r_metatarsal_3");
CTransform* Transform553 = (CTransform *)(m_pScene.createNode("Transform"));
Transform553->setTranslation(new float[3]{-0.0944,0.0175,-0.0625});
CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
Shape555->setUSE("HAnimJointShape");
Transform554->addChildren(*Shape555);

Transform553->addChildren(*Transform554);

HAnimSegment552->addChildren(*Transform553);

CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet557 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet557->setVertexCount(new int[1]{2});
CCoordinate* Coordinate558 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate558->setPoint(new float[6]{-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065});
LineSet557->setCoord(*Coordinate558);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
CColorRGBA* ColorRGBA559 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA559->setUSE("HAnimSegmentLineColorRGBA");
LineSet557->setColor(*ColorRGBA559);

Shape556->setGeometry(LineSet557);

HAnimSegment552->addChildren(*Shape556);

HAnimJoint551->addChildren(*HAnimSegment552);

CHAnimJoint* HAnimJoint560 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint560->setName("r_metatarsophalangeal_3");
HAnimJoint560->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint560->setCenter(new float[3]{-0.0963,0.0065,-0.0065});
HAnimJoint560->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint560->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment561 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment561->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment561->setDEF("hanim_r_tarsal_proximal_phalanx_3");
CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
Transform562->setTranslation(new float[3]{-0.0963,0.0065,-0.0065});
CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setUSE("HAnimJointShape");
Transform563->addChildren(*Shape564);

Transform562->addChildren(*Transform563);

HAnimSegment561->addChildren(*Transform562);

CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet566 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet566->setVertexCount(new int[1]{2});
CCoordinate* Coordinate567 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate567->setPoint(new float[6]{-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086});
LineSet566->setCoord(*Coordinate567);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA568 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA568->setUSE("HAnimSegmentLineColorRGBA");
LineSet566->setColor(*ColorRGBA568);

Shape565->setGeometry(LineSet566);

HAnimSegment561->addChildren(*Shape565);

HAnimJoint560->addChildren(*HAnimSegment561);

CHAnimJoint* HAnimJoint569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint569->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint569->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint569->setCenter(new float[3]{-0.0987,0.0034,0.0086});
HAnimJoint569->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint569->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment570 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment570->setName("r_tarsal_middle_phalanx_3");
HAnimSegment570->setDEF("hanim_r_tarsal_middle_phalanx_3");
CTransform* Transform571 = (CTransform *)(m_pScene.createNode("Transform"));
Transform571->setTranslation(new float[3]{-0.0987,0.0034,0.0086});
CTransform* Transform572 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimJointShape");
Transform572->addChildren(*Shape573);

Transform571->addChildren(*Transform572);

HAnimSegment570->addChildren(*Transform571);

CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet575 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet575->setVertexCount(new int[1]{2});
CCoordinate* Coordinate576 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate576->setPoint(new float[6]{-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178});
LineSet575->setCoord(*Coordinate576);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA577 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA577->setUSE("HAnimSegmentLineColorRGBA");
LineSet575->setColor(*ColorRGBA577);

Shape574->setGeometry(LineSet575);

HAnimSegment570->addChildren(*Shape574);

CHAnimSite* HAnimSite578 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite578->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite578->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor579 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor579->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite578->addChildren(*TouchSensor579);

CShape* Shape580 = (CShape *)(m_pScene.createNode("Shape"));
Shape580->setUSE("HAnimSiteShape");
HAnimSite578->addChildren(*Shape580);

HAnimSegment570->addChildren(*HAnimSite578);

HAnimJoint569->addChildren(*HAnimSegment570);

CHAnimJoint* HAnimJoint581 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint581->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint581->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint581->setCenter(new float[3]{-0.1002,0.0013,0.0178});
HAnimJoint581->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint581->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint569->addChildren(*HAnimJoint581);

HAnimJoint560->addChildren(*HAnimJoint569);

HAnimJoint551->addChildren(*HAnimJoint560);

HAnimJoint542->addChildren(*HAnimJoint551);

HAnimJoint451->addChildren(*HAnimJoint542);

HAnimJoint438->addChildren(*HAnimJoint451);

CHAnimJoint* HAnimJoint582 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint582->setName("r_calcaneocuboid");
HAnimJoint582->setDEF("hanim_r_calcaneocuboid");
HAnimJoint582->setCenter(new float[3]{-0.0889,0.0494,-0.1278});
HAnimJoint582->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint582->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment583 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment583->setName("r_calcaneus");
HAnimSegment583->setDEF("hanim_r_calcaneus");
CTransform* Transform584 = (CTransform *)(m_pScene.createNode("Transform"));
Transform584->setTranslation(new float[3]{-0.0889,0.0494,-0.1278});
CTransform* Transform585 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape586 = (CShape *)(m_pScene.createNode("Shape"));
Shape586->setUSE("HAnimJointShape");
Transform585->addChildren(*Shape586);

Transform584->addChildren(*Transform585);

HAnimSegment583->addChildren(*Transform584);

CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet588 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet588->setVertexCount(new int[1]{2});
CCoordinate* Coordinate589 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate589->setPoint(new float[6]{-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998});
LineSet588->setCoord(*Coordinate589);

//from r_calcaneocuboid to r_transversetarsal vertices 2
CColorRGBA* ColorRGBA590 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA590->setUSE("HAnimSegmentLineColorRGBA");
LineSet588->setColor(*ColorRGBA590);

Shape587->setGeometry(LineSet588);

HAnimSegment583->addChildren(*Shape587);

HAnimJoint582->addChildren(*HAnimSegment583);

CHAnimJoint* HAnimJoint591 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint591->setName("r_transversetarsal");
HAnimJoint591->setDEF("hanim_r_transversetarsal");
HAnimJoint591->setCenter(new float[3]{-0.1105,0.0267,-0.0998});
HAnimJoint591->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint591->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment592 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment592->setName("r_cuboid");
HAnimSegment592->setDEF("hanim_r_cuboid");
CTransform* Transform593 = (CTransform *)(m_pScene.createNode("Transform"));
Transform593->setTranslation(new float[3]{-0.1105,0.0267,-0.0998});
CTransform* Transform594 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape595 = (CShape *)(m_pScene.createNode("Shape"));
Shape595->setUSE("HAnimJointShape");
Transform594->addChildren(*Shape595);

Transform593->addChildren(*Transform594);

HAnimSegment592->addChildren(*Transform593);

CShape* Shape596 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet597 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet597->setVertexCount(new int[1]{2});
CCoordinate* Coordinate598 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate598->setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634});
LineSet597->setCoord(*Coordinate598);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA599 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA599->setUSE("HAnimSegmentLineColorRGBA");
LineSet597->setColor(*ColorRGBA599);

Shape596->setGeometry(LineSet597);

HAnimSegment592->addChildren(*Shape596);

CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet601 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet601->setVertexCount(new int[1]{2});
CCoordinate* Coordinate602 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate602->setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671});
LineSet601->setCoord(*Coordinate602);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA603 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA603->setUSE("HAnimSegmentLineColorRGBA");
LineSet601->setColor(*ColorRGBA603);

Shape600->setGeometry(LineSet601);

HAnimSegment592->addChildren(*Shape600);

HAnimJoint591->addChildren(*HAnimSegment592);

CHAnimJoint* HAnimJoint604 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint604->setName("r_tarsometatarsal_4");
HAnimJoint604->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint604->setCenter(new float[3]{-0.1063,0.016,-0.0634});
HAnimJoint604->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment605 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment605->setName("r_metatarsal_4");
HAnimSegment605->setDEF("hanim_r_metatarsal_4");
CTransform* Transform606 = (CTransform *)(m_pScene.createNode("Transform"));
Transform606->setTranslation(new float[3]{-0.1063,0.016,-0.0634});
CTransform* Transform607 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape608 = (CShape *)(m_pScene.createNode("Shape"));
Shape608->setUSE("HAnimJointShape");
Transform607->addChildren(*Shape608);

Transform606->addChildren(*Transform607);

HAnimSegment605->addChildren(*Transform606);

CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet610 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet610->setVertexCount(new int[1]{2});
CCoordinate* Coordinate611 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate611->setPoint(new float[6]{-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107});
LineSet610->setCoord(*Coordinate611);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA612 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA612->setUSE("HAnimSegmentLineColorRGBA");
LineSet610->setColor(*ColorRGBA612);

Shape609->setGeometry(LineSet610);

HAnimSegment605->addChildren(*Shape609);

HAnimJoint604->addChildren(*HAnimSegment605);

CHAnimJoint* HAnimJoint613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint613->setName("r_metatarsophalangeal_4");
HAnimJoint613->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint613->setCenter(new float[3]{-0.1097,0.0058,-0.0107});
HAnimJoint613->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint613->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment614 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment614->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment614->setDEF("hanim_r_tarsal_proximal_phalanx_4");
CTransform* Transform615 = (CTransform *)(m_pScene.createNode("Transform"));
Transform615->setTranslation(new float[3]{-0.1097,0.0058,-0.0107});
CTransform* Transform616 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape617 = (CShape *)(m_pScene.createNode("Shape"));
Shape617->setUSE("HAnimJointShape");
Transform616->addChildren(*Shape617);

Transform615->addChildren(*Transform616);

HAnimSegment614->addChildren(*Transform615);

CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet619 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet619->setVertexCount(new int[1]{2});
CCoordinate* Coordinate620 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate620->setPoint(new float[6]{-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044});
LineSet619->setCoord(*Coordinate620);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA621 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA621->setUSE("HAnimSegmentLineColorRGBA");
LineSet619->setColor(*ColorRGBA621);

Shape618->setGeometry(LineSet619);

HAnimSegment614->addChildren(*Shape618);

HAnimJoint613->addChildren(*HAnimSegment614);

CHAnimJoint* HAnimJoint622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint622->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint622->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint622->setCenter(new float[3]{-0.114,0.0037,0.0044});
HAnimJoint622->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint622->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment623 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment623->setName("r_tarsal_middle_phalanx_4");
HAnimSegment623->setDEF("hanim_r_tarsal_middle_phalanx_4");
CTransform* Transform624 = (CTransform *)(m_pScene.createNode("Transform"));
Transform624->setTranslation(new float[3]{-0.114,0.0037,0.0044});
CTransform* Transform625 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
Shape626->setUSE("HAnimJointShape");
Transform625->addChildren(*Shape626);

Transform624->addChildren(*Transform625);

HAnimSegment623->addChildren(*Transform624);

CShape* Shape627 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet628 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet628->setVertexCount(new int[1]{2});
CCoordinate* Coordinate629 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate629->setPoint(new float[6]{-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118});
LineSet628->setCoord(*Coordinate629);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA630 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA630->setUSE("HAnimSegmentLineColorRGBA");
LineSet628->setColor(*ColorRGBA630);

Shape627->setGeometry(LineSet628);

HAnimSegment623->addChildren(*Shape627);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite631->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor632 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor632->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite631->addChildren(*TouchSensor632);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
Shape633->setUSE("HAnimSiteShape");
HAnimSite631->addChildren(*Shape633);

HAnimSegment623->addChildren(*HAnimSite631);

HAnimJoint622->addChildren(*HAnimSegment623);

CHAnimJoint* HAnimJoint634 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint634->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint634->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint634->setCenter(new float[3]{-0.1155,0.0008,0.0118});
HAnimJoint634->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint634->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint622->addChildren(*HAnimJoint634);

HAnimJoint613->addChildren(*HAnimJoint622);

HAnimJoint604->addChildren(*HAnimJoint613);

HAnimJoint591->addChildren(*HAnimJoint604);

CHAnimJoint* HAnimJoint635 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint635->setName("r_tarsometatarsal_5");
HAnimJoint635->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint635->setCenter(new float[3]{-0.1206,0.0124,-0.0671});
HAnimJoint635->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint635->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment636 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment636->setName("r_metatarsal_5");
HAnimSegment636->setDEF("hanim_r_metatarsal_5");
CTransform* Transform637 = (CTransform *)(m_pScene.createNode("Transform"));
Transform637->setTranslation(new float[3]{-0.1206,0.0124,-0.0671});
CTransform* Transform638 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setUSE("HAnimJointShape");
Transform638->addChildren(*Shape639);

Transform637->addChildren(*Transform638);

HAnimSegment636->addChildren(*Transform637);

CShape* Shape640 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet641 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet641->setVertexCount(new int[1]{2});
CCoordinate* Coordinate642 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate642->setPoint(new float[6]{-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153});
LineSet641->setCoord(*Coordinate642);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA643 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA643->setUSE("HAnimSegmentLineColorRGBA");
LineSet641->setColor(*ColorRGBA643);

Shape640->setGeometry(LineSet641);

HAnimSegment636->addChildren(*Shape640);

CHAnimSite* HAnimSite644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite644->setName("r_metatarsal_phalanx_5_pt");
HAnimSite644->setDEF("hanim_r_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor645 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor645->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite644->addChildren(*TouchSensor645);

CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
Shape646->setUSE("HAnimSiteShape");
HAnimSite644->addChildren(*Shape646);

HAnimSegment636->addChildren(*HAnimSite644);

HAnimJoint635->addChildren(*HAnimSegment636);

CHAnimJoint* HAnimJoint647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint647->setName("r_metatarsophalangeal_5");
HAnimJoint647->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint647->setCenter(new float[3]{-0.1239,0.0051,-0.0153});
HAnimJoint647->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint647->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment648 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment648->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment648->setDEF("hanim_r_tarsal_proximal_phalanx_5");
CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
Transform649->setTranslation(new float[3]{-0.1239,0.0051,-0.0153});
CTransform* Transform650 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape651 = (CShape *)(m_pScene.createNode("Shape"));
Shape651->setUSE("HAnimJointShape");
Transform650->addChildren(*Shape651);

Transform649->addChildren(*Transform650);

HAnimSegment648->addChildren(*Transform649);

CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet653 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet653->setVertexCount(new int[1]{2});
CCoordinate* Coordinate654 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate654->setPoint(new float[6]{-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077});
LineSet653->setCoord(*Coordinate654);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA655 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA655->setUSE("HAnimSegmentLineColorRGBA");
LineSet653->setColor(*ColorRGBA655);

Shape652->setGeometry(LineSet653);

HAnimSegment648->addChildren(*Shape652);

HAnimJoint647->addChildren(*HAnimSegment648);

CHAnimJoint* HAnimJoint656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint656->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint656->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint656->setCenter(new float[3]{-0.1262,0.0023,-0.0077});
HAnimJoint656->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint656->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment657 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment657->setName("r_tarsal_middle_phalanx_5");
HAnimSegment657->setDEF("hanim_r_tarsal_middle_phalanx_5");
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
Transform658->setTranslation(new float[3]{-0.1262,0.0023,-0.0077});
CTransform* Transform659 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("HAnimJointShape");
Transform659->addChildren(*Shape660);

Transform658->addChildren(*Transform659);

HAnimSegment657->addChildren(*Transform658);

CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet662 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet662->setVertexCount(new int[1]{2});
CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setPoint(new float[6]{-0.1262,0.0023,-0.0077,-0.1271,0,0});
LineSet662->setCoord(*Coordinate663);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA664 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA664->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimSegment657->addChildren(*Shape661);

CHAnimSite* HAnimSite665 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite665->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite665->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor666 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor666->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite665->addChildren(*TouchSensor666);

CShape* Shape667 = (CShape *)(m_pScene.createNode("Shape"));
Shape667->setUSE("HAnimSiteShape");
HAnimSite665->addChildren(*Shape667);

HAnimSegment657->addChildren(*HAnimSite665);

HAnimJoint656->addChildren(*HAnimSegment657);

CHAnimJoint* HAnimJoint668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint668->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint668->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint668->setCenter(new float[3]{-0.1271,0,0});
HAnimJoint668->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint668->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint656->addChildren(*HAnimJoint668);

HAnimJoint647->addChildren(*HAnimJoint656);

HAnimJoint635->addChildren(*HAnimJoint647);

HAnimJoint591->addChildren(*HAnimJoint635);

HAnimJoint582->addChildren(*HAnimJoint591);

HAnimJoint438->addChildren(*HAnimJoint582);

HAnimJoint423->addChildren(*HAnimJoint438);

HAnimJoint405->addChildren(*HAnimJoint423);

HAnimJoint104->addChildren(*HAnimJoint405);

HAnimJoint52->addChildren(*HAnimJoint104);

CHAnimJoint* HAnimJoint669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint669->setName("vl5");
HAnimJoint669->setDEF("hanim_vl5");
HAnimJoint669->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint669->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint669->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment670 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment670->setName("l5");
HAnimSegment670->setDEF("hanim_l5");
CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
Shape673->setUSE("HAnimJointShape");
Transform672->addChildren(*Shape673);

Transform671->addChildren(*Transform672);

HAnimSegment670->addChildren(*Transform671);

CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet675 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet675->setVertexCount(new int[1]{2});
CCoordinate* Coordinate676 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate676->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet675->setCoord(*Coordinate676);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA677 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA677->setUSE("HAnimSegmentLineColorRGBA");
LineSet675->setColor(*ColorRGBA677);

Shape674->setGeometry(LineSet675);

HAnimSegment670->addChildren(*Shape674);

HAnimJoint669->addChildren(*HAnimSegment670);

CHAnimJoint* HAnimJoint678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint678->setName("vl4");
HAnimJoint678->setDEF("hanim_vl4");
HAnimJoint678->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint678->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint678->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment679 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment679->setName("l4");
HAnimSegment679->setDEF("hanim_l4");
CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
Transform680->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CTransform* Transform681 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
Shape682->setUSE("HAnimJointShape");
Transform681->addChildren(*Shape682);

Transform680->addChildren(*Transform681);

HAnimSegment679->addChildren(*Transform680);

CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet684 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet684->setVertexCount(new int[1]{2});
CCoordinate* Coordinate685 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate685->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet684->setCoord(*Coordinate685);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA686 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA686->setUSE("HAnimSegmentLineColorRGBA");
LineSet684->setColor(*ColorRGBA686);

Shape683->setGeometry(LineSet684);

HAnimSegment679->addChildren(*Shape683);

HAnimJoint678->addChildren(*HAnimSegment679);

CHAnimJoint* HAnimJoint687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint687->setName("vl3");
HAnimJoint687->setDEF("hanim_vl3");
HAnimJoint687->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint687->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint687->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment688 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment688->setName("l3");
HAnimSegment688->setDEF("hanim_l3");
CTransform* Transform689 = (CTransform *)(m_pScene.createNode("Transform"));
Transform689->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform690 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimJointShape");
Transform690->addChildren(*Shape691);

Transform689->addChildren(*Transform690);

HAnimSegment688->addChildren(*Transform689);

CShape* Shape692 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet693 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet693->setVertexCount(new int[1]{2});
CCoordinate* Coordinate694 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate694->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet693->setCoord(*Coordinate694);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA695 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA695->setUSE("HAnimSegmentLineColorRGBA");
LineSet693->setColor(*ColorRGBA695);

Shape692->setGeometry(LineSet693);

HAnimSegment688->addChildren(*Shape692);

CHAnimSite* HAnimSite696 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite696->setName("l_rib10_pt");
HAnimSite696->setDEF("hanim_l_rib10_pt");
HAnimSite696->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor697 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor697->setDescription("HAnimSite l_rib10_pt");
HAnimSite696->addChildren(*TouchSensor697);

CShape* Shape698 = (CShape *)(m_pScene.createNode("Shape"));
Shape698->setUSE("HAnimSiteShape");
HAnimSite696->addChildren(*Shape698);

HAnimSegment688->addChildren(*HAnimSite696);

CHAnimSite* HAnimSite699 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite699->setName("r_rib10_pt");
HAnimSite699->setDEF("hanim_r_rib10_pt");
HAnimSite699->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor700 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor700->setDescription("HAnimSite r_rib10_pt");
HAnimSite699->addChildren(*TouchSensor700);

CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
Shape701->setUSE("HAnimSiteShape");
HAnimSite699->addChildren(*Shape701);

HAnimSegment688->addChildren(*HAnimSite699);

CHAnimSite* HAnimSite702 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite702->setName("spine_2_middle_back_pt");
HAnimSite702->setDEF("hanim_spine_2_middle_back_pt");
CTouchSensor* TouchSensor703 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor703->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite702->addChildren(*TouchSensor703);

CShape* Shape704 = (CShape *)(m_pScene.createNode("Shape"));
Shape704->setUSE("HAnimSiteShape");
HAnimSite702->addChildren(*Shape704);

HAnimSegment688->addChildren(*HAnimSite702);

HAnimJoint687->addChildren(*HAnimSegment688);

CHAnimJoint* HAnimJoint705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint705->setName("vl2");
HAnimJoint705->setDEF("hanim_vl2");
HAnimJoint705->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint705->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint705->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment706 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment706->setName("l2");
HAnimSegment706->setDEF("hanim_l2");
CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
Transform707->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
Shape709->setUSE("HAnimJointShape");
Transform708->addChildren(*Shape709);

Transform707->addChildren(*Transform708);

HAnimSegment706->addChildren(*Transform707);

CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet711 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet711->setVertexCount(new int[1]{2});
CCoordinate* Coordinate712 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate712->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet711->setCoord(*Coordinate712);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA713 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA713->setUSE("HAnimSegmentLineColorRGBA");
LineSet711->setColor(*ColorRGBA713);

Shape710->setGeometry(LineSet711);

HAnimSegment706->addChildren(*Shape710);

HAnimJoint705->addChildren(*HAnimSegment706);

CHAnimJoint* HAnimJoint714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint714->setName("vl1");
HAnimJoint714->setDEF("hanim_vl1");
HAnimJoint714->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint714->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint714->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment715 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment715->setName("l1");
HAnimSegment715->setDEF("hanim_l1");
CTransform* Transform716 = (CTransform *)(m_pScene.createNode("Transform"));
Transform716->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform717 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
Shape718->setUSE("HAnimJointShape");
Transform717->addChildren(*Shape718);

Transform716->addChildren(*Transform717);

HAnimSegment715->addChildren(*Transform716);

CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet720 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet720->setVertexCount(new int[1]{2});
CCoordinate* Coordinate721 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate721->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet720->setCoord(*Coordinate721);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA722 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA722->setUSE("HAnimSegmentLineColorRGBA");
LineSet720->setColor(*ColorRGBA722);

Shape719->setGeometry(LineSet720);

HAnimSegment715->addChildren(*Shape719);

HAnimJoint714->addChildren(*HAnimSegment715);

CHAnimJoint* HAnimJoint723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint723->setName("vt12");
HAnimJoint723->setDEF("hanim_vt12");
HAnimJoint723->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint723->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint723->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment724 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment724->setName("t12");
HAnimSegment724->setDEF("hanim_t12");
CTransform* Transform725 = (CTransform *)(m_pScene.createNode("Transform"));
Transform725->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform726 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
Shape727->setUSE("HAnimJointShape");
Transform726->addChildren(*Shape727);

Transform725->addChildren(*Transform726);

HAnimSegment724->addChildren(*Transform725);

CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet729 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet729->setVertexCount(new int[1]{2});
CCoordinate* Coordinate730 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate730->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet729->setCoord(*Coordinate730);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA731 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA731->setUSE("HAnimSegmentLineColorRGBA");
LineSet729->setColor(*ColorRGBA731);

Shape728->setGeometry(LineSet729);

HAnimSegment724->addChildren(*Shape728);

HAnimJoint723->addChildren(*HAnimSegment724);

CHAnimJoint* HAnimJoint732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint732->setName("vt11");
HAnimJoint732->setDEF("hanim_vt11");
HAnimJoint732->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint732->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint732->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment733 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment733->setName("t11");
HAnimSegment733->setDEF("hanim_t11");
CTransform* Transform734 = (CTransform *)(m_pScene.createNode("Transform"));
Transform734->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform735 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
Shape736->setUSE("HAnimJointShape");
Transform735->addChildren(*Shape736);

Transform734->addChildren(*Transform735);

HAnimSegment733->addChildren(*Transform734);

CShape* Shape737 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet738 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet738->setVertexCount(new int[1]{2});
CCoordinate* Coordinate739 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate739->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet738->setCoord(*Coordinate739);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA740 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA740->setUSE("HAnimSegmentLineColorRGBA");
LineSet738->setColor(*ColorRGBA740);

Shape737->setGeometry(LineSet738);

HAnimSegment733->addChildren(*Shape737);

CHAnimSite* HAnimSite741 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite741->setName("substernale_pt");
HAnimSite741->setDEF("hanim_substernale_pt");
HAnimSite741->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor742 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor742->setDescription("HAnimSite substernale_pt");
HAnimSite741->addChildren(*TouchSensor742);

CShape* Shape743 = (CShape *)(m_pScene.createNode("Shape"));
Shape743->setUSE("HAnimSiteShape");
HAnimSite741->addChildren(*Shape743);

HAnimSegment733->addChildren(*HAnimSite741);

HAnimJoint732->addChildren(*HAnimSegment733);

CHAnimJoint* HAnimJoint744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint744->setName("vt10");
HAnimJoint744->setDEF("hanim_vt10");
HAnimJoint744->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint744->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint744->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment745 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment745->setName("t10");
HAnimSegment745->setDEF("hanim_t10");
CTransform* Transform746 = (CTransform *)(m_pScene.createNode("Transform"));
Transform746->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform747 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
Shape748->setUSE("HAnimJointShape");
Transform747->addChildren(*Shape748);

Transform746->addChildren(*Transform747);

HAnimSegment745->addChildren(*Transform746);

CShape* Shape749 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet750 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet750->setVertexCount(new int[1]{2});
CCoordinate* Coordinate751 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate751->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet750->setCoord(*Coordinate751);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA752 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA752->setUSE("HAnimSegmentLineColorRGBA");
LineSet750->setColor(*ColorRGBA752);

Shape749->setGeometry(LineSet750);

HAnimSegment745->addChildren(*Shape749);

CHAnimSite* HAnimSite753 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite753->setName("l_thelion_pt");
HAnimSite753->setDEF("hanim_l_thelion_pt");
HAnimSite753->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor754 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor754->setDescription("HAnimSite l_thelion_pt");
HAnimSite753->addChildren(*TouchSensor754);

CShape* Shape755 = (CShape *)(m_pScene.createNode("Shape"));
Shape755->setUSE("HAnimSiteShape");
HAnimSite753->addChildren(*Shape755);

HAnimSegment745->addChildren(*HAnimSite753);

CHAnimSite* HAnimSite756 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite756->setName("r_thelion_pt");
HAnimSite756->setDEF("hanim_r_thelion_pt");
HAnimSite756->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor757 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor757->setDescription("HAnimSite r_thelion_pt");
HAnimSite756->addChildren(*TouchSensor757);

CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
Shape758->setUSE("HAnimSiteShape");
HAnimSite756->addChildren(*Shape758);

HAnimSegment745->addChildren(*HAnimSite756);

HAnimJoint744->addChildren(*HAnimSegment745);

CHAnimJoint* HAnimJoint759 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint759->setName("vt9");
HAnimJoint759->setDEF("hanim_vt9");
HAnimJoint759->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint759->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint759->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment760->setName("t9");
HAnimSegment760->setDEF("hanim_t9");
CTransform* Transform761 = (CTransform *)(m_pScene.createNode("Transform"));
Transform761->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CTransform* Transform762 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape763 = (CShape *)(m_pScene.createNode("Shape"));
Shape763->setUSE("HAnimJointShape");
Transform762->addChildren(*Shape763);

Transform761->addChildren(*Transform762);

HAnimSegment760->addChildren(*Transform761);

CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet765 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet765->setVertexCount(new int[1]{2});
CCoordinate* Coordinate766 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate766->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet765->setCoord(*Coordinate766);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA767 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA767->setUSE("HAnimSegmentLineColorRGBA");
LineSet765->setColor(*ColorRGBA767);

Shape764->setGeometry(LineSet765);

HAnimSegment760->addChildren(*Shape764);

HAnimJoint759->addChildren(*HAnimSegment760);

CHAnimJoint* HAnimJoint768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint768->setName("vt8");
HAnimJoint768->setDEF("hanim_vt8");
HAnimJoint768->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint768->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint768->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment769->setName("t8");
HAnimSegment769->setDEF("hanim_t8");
CTransform* Transform770 = (CTransform *)(m_pScene.createNode("Transform"));
Transform770->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform771 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape772 = (CShape *)(m_pScene.createNode("Shape"));
Shape772->setUSE("HAnimJointShape");
Transform771->addChildren(*Shape772);

Transform770->addChildren(*Transform771);

HAnimSegment769->addChildren(*Transform770);

CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet774 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet774->setVertexCount(new int[1]{2});
CCoordinate* Coordinate775 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate775->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet774->setCoord(*Coordinate775);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA776 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA776->setUSE("HAnimSegmentLineColorRGBA");
LineSet774->setColor(*ColorRGBA776);

Shape773->setGeometry(LineSet774);

HAnimSegment769->addChildren(*Shape773);

HAnimJoint768->addChildren(*HAnimSegment769);

CHAnimJoint* HAnimJoint777 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint777->setName("vt7");
HAnimJoint777->setDEF("hanim_vt7");
HAnimJoint777->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint777->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint777->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment778->setName("t7");
HAnimSegment778->setDEF("hanim_t7");
CTransform* Transform779 = (CTransform *)(m_pScene.createNode("Transform"));
Transform779->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform780 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape781 = (CShape *)(m_pScene.createNode("Shape"));
Shape781->setUSE("HAnimJointShape");
Transform780->addChildren(*Shape781);

Transform779->addChildren(*Transform780);

HAnimSegment778->addChildren(*Transform779);

CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet783 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet783->setVertexCount(new int[1]{2});
CCoordinate* Coordinate784 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate784->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet783->setCoord(*Coordinate784);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA785 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA785->setUSE("HAnimSegmentLineColorRGBA");
LineSet783->setColor(*ColorRGBA785);

Shape782->setGeometry(LineSet783);

HAnimSegment778->addChildren(*Shape782);

CHAnimSite* HAnimSite786 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite786->setName("l_chest_midsagittal_plane_pt");
HAnimSite786->setDEF("hanim_l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor787 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor787->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite786->addChildren(*TouchSensor787);

CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
Shape788->setUSE("HAnimSiteShape");
HAnimSite786->addChildren(*Shape788);

HAnimSegment778->addChildren(*HAnimSite786);

CHAnimSite* HAnimSite789 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite789->setName("mesosternale_pt");
HAnimSite789->setDEF("hanim_mesosternale_pt");
CTouchSensor* TouchSensor790 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor790->setDescription("HAnimSite mesosternale_pt");
HAnimSite789->addChildren(*TouchSensor790);

CShape* Shape791 = (CShape *)(m_pScene.createNode("Shape"));
Shape791->setUSE("HAnimSiteShape");
HAnimSite789->addChildren(*Shape791);

HAnimSegment778->addChildren(*HAnimSite789);

CHAnimSite* HAnimSite792 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite792->setName("r_chest_midsagittal_plane_pt");
HAnimSite792->setDEF("hanim_r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor793 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor793->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite792->addChildren(*TouchSensor793);

CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("HAnimSiteShape");
HAnimSite792->addChildren(*Shape794);

HAnimSegment778->addChildren(*HAnimSite792);

CHAnimSite* HAnimSite795 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite795->setName("rear_center_midsagittal_plane_pt");
HAnimSite795->setDEF("hanim_rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor796 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor796->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite795->addChildren(*TouchSensor796);

CShape* Shape797 = (CShape *)(m_pScene.createNode("Shape"));
Shape797->setUSE("HAnimSiteShape");
HAnimSite795->addChildren(*Shape797);

HAnimSegment778->addChildren(*HAnimSite795);

HAnimJoint777->addChildren(*HAnimSegment778);

CHAnimJoint* HAnimJoint798 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint798->setName("vt6");
HAnimJoint798->setDEF("hanim_vt6");
HAnimJoint798->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint798->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint798->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment799->setName("t6");
HAnimSegment799->setDEF("hanim_t6");
CTransform* Transform800 = (CTransform *)(m_pScene.createNode("Transform"));
Transform800->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform801 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape802 = (CShape *)(m_pScene.createNode("Shape"));
Shape802->setUSE("HAnimJointShape");
Transform801->addChildren(*Shape802);

Transform800->addChildren(*Transform801);

HAnimSegment799->addChildren(*Transform800);

CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet804 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet804->setVertexCount(new int[1]{2});
CCoordinate* Coordinate805 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate805->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet804->setCoord(*Coordinate805);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA806 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA806->setUSE("HAnimSegmentLineColorRGBA");
LineSet804->setColor(*ColorRGBA806);

Shape803->setGeometry(LineSet804);

HAnimSegment799->addChildren(*Shape803);

CHAnimSite* HAnimSite807 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite807->setName("spine_1_middle_back_pt");
HAnimSite807->setDEF("hanim_spine_1_middle_back_pt");
CTouchSensor* TouchSensor808 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor808->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite807->addChildren(*TouchSensor808);

CShape* Shape809 = (CShape *)(m_pScene.createNode("Shape"));
Shape809->setUSE("HAnimSiteShape");
HAnimSite807->addChildren(*Shape809);

HAnimSegment799->addChildren(*HAnimSite807);

HAnimJoint798->addChildren(*HAnimSegment799);

CHAnimJoint* HAnimJoint810 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint810->setName("vt5");
HAnimJoint810->setDEF("hanim_vt5");
HAnimJoint810->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint810->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint810->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment811->setName("t5");
HAnimSegment811->setDEF("hanim_t5");
CTransform* Transform812 = (CTransform *)(m_pScene.createNode("Transform"));
Transform812->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform813 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape814 = (CShape *)(m_pScene.createNode("Shape"));
Shape814->setUSE("HAnimJointShape");
Transform813->addChildren(*Shape814);

Transform812->addChildren(*Transform813);

HAnimSegment811->addChildren(*Transform812);

CShape* Shape815 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet816 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet816->setVertexCount(new int[1]{2});
CCoordinate* Coordinate817 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate817->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet816->setCoord(*Coordinate817);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA818 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA818->setUSE("HAnimSegmentLineColorRGBA");
LineSet816->setColor(*ColorRGBA818);

Shape815->setGeometry(LineSet816);

HAnimSegment811->addChildren(*Shape815);

HAnimJoint810->addChildren(*HAnimSegment811);

CHAnimJoint* HAnimJoint819 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint819->setName("vt4");
HAnimJoint819->setDEF("hanim_vt4");
HAnimJoint819->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint819->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint819->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment820->setName("t4");
HAnimSegment820->setDEF("hanim_t4");
CTransform* Transform821 = (CTransform *)(m_pScene.createNode("Transform"));
Transform821->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform822 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape823 = (CShape *)(m_pScene.createNode("Shape"));
Shape823->setUSE("HAnimJointShape");
Transform822->addChildren(*Shape823);

Transform821->addChildren(*Transform822);

HAnimSegment820->addChildren(*Transform821);

CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet825 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet825->setVertexCount(new int[1]{2});
CCoordinate* Coordinate826 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate826->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet825->setCoord(*Coordinate826);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA827 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA827->setUSE("HAnimSegmentLineColorRGBA");
LineSet825->setColor(*ColorRGBA827);

Shape824->setGeometry(LineSet825);

HAnimSegment820->addChildren(*Shape824);

HAnimJoint819->addChildren(*HAnimSegment820);

CHAnimJoint* HAnimJoint828 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint828->setName("vt3");
HAnimJoint828->setDEF("hanim_vt3");
HAnimJoint828->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint828->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint828->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment829->setName("t3");
HAnimSegment829->setDEF("hanim_t3");
CTransform* Transform830 = (CTransform *)(m_pScene.createNode("Transform"));
Transform830->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform831 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape832 = (CShape *)(m_pScene.createNode("Shape"));
Shape832->setUSE("HAnimJointShape");
Transform831->addChildren(*Shape832);

Transform830->addChildren(*Transform831);

HAnimSegment829->addChildren(*Transform830);

CShape* Shape833 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet834 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet834->setVertexCount(new int[1]{2});
CCoordinate* Coordinate835 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate835->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet834->setCoord(*Coordinate835);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA836 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA836->setUSE("HAnimSegmentLineColorRGBA");
LineSet834->setColor(*ColorRGBA836);

Shape833->setGeometry(LineSet834);

HAnimSegment829->addChildren(*Shape833);

HAnimJoint828->addChildren(*HAnimSegment829);

CHAnimJoint* HAnimJoint837 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint837->setName("vt2");
HAnimJoint837->setDEF("hanim_vt2");
HAnimJoint837->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint837->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint837->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment838->setName("t2");
HAnimSegment838->setDEF("hanim_t2");
CTransform* Transform839 = (CTransform *)(m_pScene.createNode("Transform"));
Transform839->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform840 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape841 = (CShape *)(m_pScene.createNode("Shape"));
Shape841->setUSE("HAnimJointShape");
Transform840->addChildren(*Shape841);

Transform839->addChildren(*Transform840);

HAnimSegment838->addChildren(*Transform839);

CShape* Shape842 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet843 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet843->setVertexCount(new int[1]{2});
CCoordinate* Coordinate844 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate844->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet843->setCoord(*Coordinate844);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA845 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA845->setUSE("HAnimSegmentLineColorRGBA");
LineSet843->setColor(*ColorRGBA845);

Shape842->setGeometry(LineSet843);

HAnimSegment838->addChildren(*Shape842);

CHAnimSite* HAnimSite846 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite846->setName("cervicale_pt");
HAnimSite846->setDEF("hanim_cervicale_pt");
HAnimSite846->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor847 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor847->setDescription("HAnimSite cervicale_pt");
HAnimSite846->addChildren(*TouchSensor847);

CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
Shape848->setUSE("HAnimSiteShape");
HAnimSite846->addChildren(*Shape848);

HAnimSegment838->addChildren(*HAnimSite846);

CHAnimSite* HAnimSite849 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite849->setName("suprasternale_pt");
HAnimSite849->setDEF("hanim_suprasternale_pt");
HAnimSite849->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor850 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor850->setDescription("HAnimSite suprasternale_pt");
HAnimSite849->addChildren(*TouchSensor850);

CShape* Shape851 = (CShape *)(m_pScene.createNode("Shape"));
Shape851->setUSE("HAnimSiteShape");
HAnimSite849->addChildren(*Shape851);

HAnimSegment838->addChildren(*HAnimSite849);

HAnimJoint837->addChildren(*HAnimSegment838);

CHAnimJoint* HAnimJoint852 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint852->setName("vt1");
HAnimJoint852->setDEF("hanim_vt1");
HAnimJoint852->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint852->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint852->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment853->setName("t1");
HAnimSegment853->setDEF("hanim_t1");
CTransform* Transform854 = (CTransform *)(m_pScene.createNode("Transform"));
Transform854->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform855 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape856 = (CShape *)(m_pScene.createNode("Shape"));
Shape856->setUSE("HAnimJointShape");
Transform855->addChildren(*Shape856);

Transform854->addChildren(*Transform855);

HAnimSegment853->addChildren(*Transform854);

CShape* Shape857 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet858 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet858->setVertexCount(new int[1]{2});
CCoordinate* Coordinate859 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate859->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet858->setCoord(*Coordinate859);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA860 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA860->setUSE("HAnimSegmentLineColorRGBA");
LineSet858->setColor(*ColorRGBA860);

Shape857->setGeometry(LineSet858);

HAnimSegment853->addChildren(*Shape857);

CHAnimSite* HAnimSite861 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite861->setName("l_neck_base_pt");
HAnimSite861->setDEF("hanim_l_neck_base_pt");
HAnimSite861->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor862 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor862->setDescription("HAnimSite l_neck_base_pt");
HAnimSite861->addChildren(*TouchSensor862);

CShape* Shape863 = (CShape *)(m_pScene.createNode("Shape"));
Shape863->setUSE("HAnimSiteShape");
HAnimSite861->addChildren(*Shape863);

HAnimSegment853->addChildren(*HAnimSite861);

CHAnimSite* HAnimSite864 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite864->setName("r_neck_base_pt");
HAnimSite864->setDEF("hanim_r_neck_base_pt");
HAnimSite864->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor865 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor865->setDescription("HAnimSite r_neck_base_pt");
HAnimSite864->addChildren(*TouchSensor865);

CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
Shape866->setUSE("HAnimSiteShape");
HAnimSite864->addChildren(*Shape866);

HAnimSegment853->addChildren(*HAnimSite864);

CShape* Shape867 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet868 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet868->setVertexCount(new int[1]{2});
CCoordinate* Coordinate869 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate869->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet868->setCoord(*Coordinate869);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA870 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA870->setUSE("HAnimSegmentLineColorRGBA");
LineSet868->setColor(*ColorRGBA870);

Shape867->setGeometry(LineSet868);

HAnimSegment853->addChildren(*Shape867);

CHAnimSite* HAnimSite871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite871->setName("l_acromion_pt");
HAnimSite871->setDEF("hanim_l_acromion_pt");
HAnimSite871->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor872 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor872->setDescription("HAnimSite l_acromion_pt");
HAnimSite871->addChildren(*TouchSensor872);

CShape* Shape873 = (CShape *)(m_pScene.createNode("Shape"));
Shape873->setUSE("HAnimSiteShape");
HAnimSite871->addChildren(*Shape873);

HAnimSegment853->addChildren(*HAnimSite871);

CHAnimSite* HAnimSite874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite874->setName("l_axilla_distal_pt");
HAnimSite874->setDEF("hanim_l_axilla_distal_pt");
HAnimSite874->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor875 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor875->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite874->addChildren(*TouchSensor875);

CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
Shape876->setUSE("HAnimSiteShape");
HAnimSite874->addChildren(*Shape876);

HAnimSegment853->addChildren(*HAnimSite874);

CHAnimSite* HAnimSite877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite877->setName("l_axilla_posterior_folds_pt");
HAnimSite877->setDEF("hanim_l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor878 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor878->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite877->addChildren(*TouchSensor878);

CShape* Shape879 = (CShape *)(m_pScene.createNode("Shape"));
Shape879->setUSE("HAnimSiteShape");
HAnimSite877->addChildren(*Shape879);

HAnimSegment853->addChildren(*HAnimSite877);

CHAnimSite* HAnimSite880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite880->setName("l_axilla_proximal_pt");
HAnimSite880->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite880->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor881 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor881->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite880->addChildren(*TouchSensor881);

CShape* Shape882 = (CShape *)(m_pScene.createNode("Shape"));
Shape882->setUSE("HAnimSiteShape");
HAnimSite880->addChildren(*Shape882);

HAnimSegment853->addChildren(*HAnimSite880);

CHAnimSite* HAnimSite883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite883->setName("l_clavicale_pt");
HAnimSite883->setDEF("hanim_l_clavicale_pt");
HAnimSite883->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor884 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor884->setDescription("HAnimSite l_clavicale_pt");
HAnimSite883->addChildren(*TouchSensor884);

CShape* Shape885 = (CShape *)(m_pScene.createNode("Shape"));
Shape885->setUSE("HAnimSiteShape");
HAnimSite883->addChildren(*Shape885);

HAnimSegment853->addChildren(*HAnimSite883);

CShape* Shape886 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet887 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet887->setVertexCount(new int[1]{2});
CCoordinate* Coordinate888 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate888->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet887->setCoord(*Coordinate888);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA889 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA889->setUSE("HAnimSegmentLineColorRGBA");
LineSet887->setColor(*ColorRGBA889);

Shape886->setGeometry(LineSet887);

HAnimSegment853->addChildren(*Shape886);

CHAnimSite* HAnimSite890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite890->setName("r_acromion_pt");
HAnimSite890->setDEF("hanim_r_acromion_pt");
HAnimSite890->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor891 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor891->setDescription("HAnimSite r_acromion_pt");
HAnimSite890->addChildren(*TouchSensor891);

CShape* Shape892 = (CShape *)(m_pScene.createNode("Shape"));
Shape892->setUSE("HAnimSiteShape");
HAnimSite890->addChildren(*Shape892);

HAnimSegment853->addChildren(*HAnimSite890);

CHAnimSite* HAnimSite893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite893->setName("r_axilla_distal_pt");
HAnimSite893->setDEF("hanim_r_axilla_distal_pt");
HAnimSite893->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor894 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor894->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite893->addChildren(*TouchSensor894);

CShape* Shape895 = (CShape *)(m_pScene.createNode("Shape"));
Shape895->setUSE("HAnimSiteShape");
HAnimSite893->addChildren(*Shape895);

HAnimSegment853->addChildren(*HAnimSite893);

CHAnimSite* HAnimSite896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite896->setName("r_axilla_posterior_folds_pt");
HAnimSite896->setDEF("hanim_r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor897 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor897->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite896->addChildren(*TouchSensor897);

CShape* Shape898 = (CShape *)(m_pScene.createNode("Shape"));
Shape898->setUSE("HAnimSiteShape");
HAnimSite896->addChildren(*Shape898);

HAnimSegment853->addChildren(*HAnimSite896);

CHAnimSite* HAnimSite899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite899->setName("r_axilla_proximal_pt");
HAnimSite899->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite899->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor900 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor900->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite899->addChildren(*TouchSensor900);

CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
Shape901->setUSE("HAnimSiteShape");
HAnimSite899->addChildren(*Shape901);

HAnimSegment853->addChildren(*HAnimSite899);

CHAnimSite* HAnimSite902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite902->setName("r_clavicale_pt");
HAnimSite902->setDEF("hanim_r_clavicale_pt");
HAnimSite902->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor903 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor903->setDescription("HAnimSite r_clavicale_pt");
HAnimSite902->addChildren(*TouchSensor903);

CShape* Shape904 = (CShape *)(m_pScene.createNode("Shape"));
Shape904->setUSE("HAnimSiteShape");
HAnimSite902->addChildren(*Shape904);

HAnimSegment853->addChildren(*HAnimSite902);

HAnimJoint852->addChildren(*HAnimSegment853);

CHAnimJoint* HAnimJoint905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint905->setName("vc7");
HAnimJoint905->setDEF("hanim_vc7");
HAnimJoint905->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint905->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint905->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment906 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment906->setName("c7");
HAnimSegment906->setDEF("hanim_c7");
CTransform* Transform907 = (CTransform *)(m_pScene.createNode("Transform"));
Transform907->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform908 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
Shape909->setUSE("HAnimJointShape");
Transform908->addChildren(*Shape909);

Transform907->addChildren(*Transform908);

HAnimSegment906->addChildren(*Transform907);

CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet911 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet911->setVertexCount(new int[1]{2});
CCoordinate* Coordinate912 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate912->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet911->setCoord(*Coordinate912);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA913 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA913->setUSE("HAnimSegmentLineColorRGBA");
LineSet911->setColor(*ColorRGBA913);

Shape910->setGeometry(LineSet911);

HAnimSegment906->addChildren(*Shape910);

HAnimJoint905->addChildren(*HAnimSegment906);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setName("vc6");
HAnimJoint914->setDEF("hanim_vc6");
HAnimJoint914->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint914->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint914->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment915 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment915->setName("c6");
HAnimSegment915->setDEF("hanim_c6");
CTransform* Transform916 = (CTransform *)(m_pScene.createNode("Transform"));
Transform916->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
Shape918->setUSE("HAnimJointShape");
Transform917->addChildren(*Shape918);

Transform916->addChildren(*Transform917);

HAnimSegment915->addChildren(*Transform916);

CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet920 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet920->setVertexCount(new int[1]{2});
CCoordinate* Coordinate921 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate921->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet920->setCoord(*Coordinate921);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA922 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA922->setUSE("HAnimSegmentLineColorRGBA");
LineSet920->setColor(*ColorRGBA922);

Shape919->setGeometry(LineSet920);

HAnimSegment915->addChildren(*Shape919);

HAnimJoint914->addChildren(*HAnimSegment915);

CHAnimJoint* HAnimJoint923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint923->setName("vc5");
HAnimJoint923->setDEF("hanim_vc5");
HAnimJoint923->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint923->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint923->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment924 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment924->setName("c5");
HAnimSegment924->setDEF("hanim_c5");
CTransform* Transform925 = (CTransform *)(m_pScene.createNode("Transform"));
Transform925->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform926 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape927 = (CShape *)(m_pScene.createNode("Shape"));
Shape927->setUSE("HAnimJointShape");
Transform926->addChildren(*Shape927);

Transform925->addChildren(*Transform926);

HAnimSegment924->addChildren(*Transform925);

CShape* Shape928 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet929 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet929->setVertexCount(new int[1]{2});
CCoordinate* Coordinate930 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate930->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet929->setCoord(*Coordinate930);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA931 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA931->setUSE("HAnimSegmentLineColorRGBA");
LineSet929->setColor(*ColorRGBA931);

Shape928->setGeometry(LineSet929);

HAnimSegment924->addChildren(*Shape928);

HAnimJoint923->addChildren(*HAnimSegment924);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setName("vc4");
HAnimJoint932->setDEF("hanim_vc4");
HAnimJoint932->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint932->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint932->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment933 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment933->setName("c4");
HAnimSegment933->setDEF("hanim_c4");
CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform934->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform935 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape936 = (CShape *)(m_pScene.createNode("Shape"));
Shape936->setUSE("HAnimJointShape");
Transform935->addChildren(*Shape936);

Transform934->addChildren(*Transform935);

HAnimSegment933->addChildren(*Transform934);

CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet938 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet938->setVertexCount(new int[1]{2});
CCoordinate* Coordinate939 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate939->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet938->setCoord(*Coordinate939);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA940 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA940->setUSE("HAnimSegmentLineColorRGBA");
LineSet938->setColor(*ColorRGBA940);

Shape937->setGeometry(LineSet938);

HAnimSegment933->addChildren(*Shape937);

HAnimJoint932->addChildren(*HAnimSegment933);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setName("vc3");
HAnimJoint941->setDEF("hanim_vc3");
HAnimJoint941->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint941->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint941->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment942 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment942->setName("c3");
HAnimSegment942->setDEF("hanim_c3");
CTransform* Transform943 = (CTransform *)(m_pScene.createNode("Transform"));
Transform943->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform944 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
Shape945->setUSE("HAnimJointShape");
Transform944->addChildren(*Shape945);

Transform943->addChildren(*Transform944);

HAnimSegment942->addChildren(*Transform943);

CShape* Shape946 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet947 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet947->setVertexCount(new int[1]{2});
CCoordinate* Coordinate948 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate948->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet947->setCoord(*Coordinate948);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA949 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA949->setUSE("HAnimSegmentLineColorRGBA");
LineSet947->setColor(*ColorRGBA949);

Shape946->setGeometry(LineSet947);

HAnimSegment942->addChildren(*Shape946);

CHAnimSite* HAnimSite950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite950->setName("adams_apple_pt");
HAnimSite950->setDEF("hanim_adams_apple_pt");
CTouchSensor* TouchSensor951 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor951->setDescription("HAnimSite adams_apple_pt");
HAnimSite950->addChildren(*TouchSensor951);

CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
Shape952->setUSE("HAnimSiteShape");
HAnimSite950->addChildren(*Shape952);

HAnimSegment942->addChildren(*HAnimSite950);

HAnimJoint941->addChildren(*HAnimSegment942);

CHAnimJoint* HAnimJoint953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint953->setName("vc2");
HAnimJoint953->setDEF("hanim_vc2");
HAnimJoint953->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint953->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint953->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment954 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment954->setName("c2");
HAnimSegment954->setDEF("hanim_c2");
CTransform* Transform955 = (CTransform *)(m_pScene.createNode("Transform"));
Transform955->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform956 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape957 = (CShape *)(m_pScene.createNode("Shape"));
Shape957->setUSE("HAnimJointShape");
Transform956->addChildren(*Shape957);

Transform955->addChildren(*Transform956);

HAnimSegment954->addChildren(*Transform955);

CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet959 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet959->setVertexCount(new int[1]{2});
CCoordinate* Coordinate960 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate960->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet959->setCoord(*Coordinate960);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA961 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA961->setUSE("HAnimSegmentLineColorRGBA");
LineSet959->setColor(*ColorRGBA961);

Shape958->setGeometry(LineSet959);

HAnimSegment954->addChildren(*Shape958);

HAnimJoint953->addChildren(*HAnimSegment954);

CHAnimJoint* HAnimJoint962 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint962->setName("vc1");
HAnimJoint962->setDEF("hanim_vc1");
HAnimJoint962->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint962->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint962->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment963 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment963->setName("c1");
HAnimSegment963->setDEF("hanim_c1");
CTransform* Transform964 = (CTransform *)(m_pScene.createNode("Transform"));
Transform964->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CTransform* Transform965 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("HAnimJointShape");
Transform965->addChildren(*Shape966);

Transform964->addChildren(*Transform965);

HAnimSegment963->addChildren(*Transform964);

CShape* Shape967 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet968 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet968->setVertexCount(new int[1]{2});
CCoordinate* Coordinate969 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate969->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet968->setCoord(*Coordinate969);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA970 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA970->setUSE("HAnimSegmentLineColorRGBA");
LineSet968->setColor(*ColorRGBA970);

Shape967->setGeometry(LineSet968);

HAnimSegment963->addChildren(*Shape967);

CHAnimSite* HAnimSite971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite971->setName("glabella_pt");
HAnimSite971->setDEF("hanim_glabella_pt");
CTouchSensor* TouchSensor972 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor972->setDescription("HAnimSite glabella_pt");
HAnimSite971->addChildren(*TouchSensor972);

CShape* Shape973 = (CShape *)(m_pScene.createNode("Shape"));
Shape973->setUSE("HAnimSiteShape");
HAnimSite971->addChildren(*Shape973);

HAnimSegment963->addChildren(*HAnimSite971);

CHAnimSite* HAnimSite974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite974->setName("l_ectocanthus_pt");
HAnimSite974->setDEF("hanim_l_ectocanthus_pt");
CTouchSensor* TouchSensor975 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor975->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite974->addChildren(*TouchSensor975);

CShape* Shape976 = (CShape *)(m_pScene.createNode("Shape"));
Shape976->setUSE("HAnimSiteShape");
HAnimSite974->addChildren(*Shape976);

HAnimSegment963->addChildren(*HAnimSite974);

CHAnimSite* HAnimSite977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite977->setName("l_infraorbitale_pt");
HAnimSite977->setDEF("hanim_l_infraorbitale_pt");
HAnimSite977->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor978 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor978->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite977->addChildren(*TouchSensor978);

CShape* Shape979 = (CShape *)(m_pScene.createNode("Shape"));
Shape979->setUSE("HAnimSiteShape");
HAnimSite977->addChildren(*Shape979);

HAnimSegment963->addChildren(*HAnimSite977);

CHAnimSite* HAnimSite980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite980->setName("l_tragion_pt");
HAnimSite980->setDEF("hanim_l_tragion_pt");
HAnimSite980->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor981 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor981->setDescription("HAnimSite l_tragion_pt");
HAnimSite980->addChildren(*TouchSensor981);

CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("HAnimSiteShape");
HAnimSite980->addChildren(*Shape982);

HAnimSegment963->addChildren(*HAnimSite980);

CHAnimSite* HAnimSite983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite983->setName("nuchale_pt");
HAnimSite983->setDEF("hanim_nuchale_pt");
HAnimSite983->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor984 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor984->setDescription("HAnimSite nuchale_pt");
HAnimSite983->addChildren(*TouchSensor984);

CShape* Shape985 = (CShape *)(m_pScene.createNode("Shape"));
Shape985->setUSE("HAnimSiteShape");
HAnimSite983->addChildren(*Shape985);

HAnimSegment963->addChildren(*HAnimSite983);

CHAnimSite* HAnimSite986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite986->setName("opisthocranion_pt");
HAnimSite986->setDEF("hanim_opisthocranion_pt");
CTouchSensor* TouchSensor987 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor987->setDescription("HAnimSite opisthocranion_pt");
HAnimSite986->addChildren(*TouchSensor987);

CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
Shape988->setUSE("HAnimSiteShape");
HAnimSite986->addChildren(*Shape988);

HAnimSegment963->addChildren(*HAnimSite986);

CHAnimSite* HAnimSite989 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite989->setName("r_ectocanthus_pt");
HAnimSite989->setDEF("hanim_r_ectocanthus_pt");
CTouchSensor* TouchSensor990 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor990->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite989->addChildren(*TouchSensor990);

CShape* Shape991 = (CShape *)(m_pScene.createNode("Shape"));
Shape991->setUSE("HAnimSiteShape");
HAnimSite989->addChildren(*Shape991);

HAnimSegment963->addChildren(*HAnimSite989);

CHAnimSite* HAnimSite992 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite992->setName("r_infraorbitale_pt");
HAnimSite992->setDEF("hanim_r_infraorbitale_pt");
HAnimSite992->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor993 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor993->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite992->addChildren(*TouchSensor993);

CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
Shape994->setUSE("HAnimSiteShape");
HAnimSite992->addChildren(*Shape994);

HAnimSegment963->addChildren(*HAnimSite992);

CHAnimSite* HAnimSite995 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite995->setName("r_tragion_pt");
HAnimSite995->setDEF("hanim_r_tragion_pt");
HAnimSite995->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor996 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor996->setDescription("HAnimSite r_tragion_pt");
HAnimSite995->addChildren(*TouchSensor996);

CShape* Shape997 = (CShape *)(m_pScene.createNode("Shape"));
Shape997->setUSE("HAnimSiteShape");
HAnimSite995->addChildren(*Shape997);

HAnimSegment963->addChildren(*HAnimSite995);

CHAnimSite* HAnimSite998 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite998->setName("sellion_pt");
HAnimSite998->setDEF("hanim_sellion_pt");
HAnimSite998->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor999 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor999->setDescription("HAnimSite sellion_pt");
HAnimSite998->addChildren(*TouchSensor999);

CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
Shape1000->setUSE("HAnimSiteShape");
HAnimSite998->addChildren(*Shape1000);

HAnimSegment963->addChildren(*HAnimSite998);

CHAnimSite* HAnimSite1001 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1001->setName("skull_vertex_pt");
HAnimSite1001->setDEF("hanim_skull_vertex_pt");
HAnimSite1001->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor1002 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1002->setDescription("HAnimSite skull_vertex_pt");
HAnimSite1001->addChildren(*TouchSensor1002);

CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
Shape1003->setUSE("HAnimSiteShape");
HAnimSite1001->addChildren(*Shape1003);

HAnimSegment963->addChildren(*HAnimSite1001);

HAnimJoint962->addChildren(*HAnimSegment963);

CHAnimJoint* HAnimJoint1004 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1004->setName("skullbase");
HAnimJoint1004->setDEF("hanim_skullbase");
HAnimJoint1004->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint1004->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1005 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1005->setName("skull");
HAnimSegment1005->setDEF("hanim_skull");
CTransform* Transform1006 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1006->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CTransform* Transform1007 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1008 = (CShape *)(m_pScene.createNode("Shape"));
Shape1008->setUSE("HAnimJointShape");
Transform1007->addChildren(*Shape1008);

Transform1006->addChildren(*Transform1007);

HAnimSegment1005->addChildren(*Transform1006);

CShape* Shape1009 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1010 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1010->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1011 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1011->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689});
LineSet1010->setCoord(*Coordinate1011);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1012 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1012->setUSE("HAnimSegmentLineColorRGBA");
LineSet1010->setColor(*ColorRGBA1012);

Shape1009->setGeometry(LineSet1010);

HAnimSegment1005->addChildren(*Shape1009);

CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1014 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1014->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1015 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1015->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689});
LineSet1014->setCoord(*Coordinate1015);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1016 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1016->setUSE("HAnimSegmentLineColorRGBA");
LineSet1014->setColor(*ColorRGBA1016);

Shape1013->setGeometry(LineSet1014);

HAnimSegment1005->addChildren(*Shape1013);

CShape* Shape1017 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1018 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1018->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1019 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1019->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188});
LineSet1018->setCoord(*Coordinate1019);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1020 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1020->setUSE("HAnimSegmentLineColorRGBA");
LineSet1018->setColor(*ColorRGBA1020);

Shape1017->setGeometry(LineSet1018);

HAnimSegment1005->addChildren(*Shape1017);

CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1022 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1022->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188});
LineSet1022->setCoord(*Coordinate1023);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1024 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1024->setUSE("HAnimSegmentLineColorRGBA");
LineSet1022->setColor(*ColorRGBA1024);

Shape1021->setGeometry(LineSet1022);

HAnimSegment1005->addChildren(*Shape1021);

CShape* Shape1025 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1026 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1026->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1027 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1027->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051});
LineSet1026->setCoord(*Coordinate1027);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1028 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1028->setUSE("HAnimSegmentLineColorRGBA");
LineSet1026->setColor(*ColorRGBA1028);

Shape1025->setGeometry(LineSet1026);

HAnimSegment1005->addChildren(*Shape1025);

CShape* Shape1029 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1030 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1030->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1031 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1031->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051});
LineSet1030->setCoord(*Coordinate1031);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1032 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1032->setUSE("HAnimSegmentLineColorRGBA");
LineSet1030->setColor(*ColorRGBA1032);

Shape1029->setGeometry(LineSet1030);

HAnimSegment1005->addChildren(*Shape1029);

CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1034 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1034->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1035 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1035->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865});
LineSet1034->setCoord(*Coordinate1035);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA1036 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1036->setUSE("HAnimSegmentLineColorRGBA");
LineSet1034->setColor(*ColorRGBA1036);

Shape1033->setGeometry(LineSet1034);

HAnimSegment1005->addChildren(*Shape1033);

CHAnimSite* HAnimSite1037 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1037->setName("l_gonion_pt");
HAnimSite1037->setDEF("hanim_l_gonion_pt");
HAnimSite1037->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor1038 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1038->setDescription("HAnimSite l_gonion_pt");
HAnimSite1037->addChildren(*TouchSensor1038);

CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
Shape1039->setUSE("HAnimSiteShape");
HAnimSite1037->addChildren(*Shape1039);

HAnimSegment1005->addChildren(*HAnimSite1037);

CHAnimSite* HAnimSite1040 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1040->setName("menton_pt");
HAnimSite1040->setDEF("hanim_menton_pt");
CTouchSensor* TouchSensor1041 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1041->setDescription("HAnimSite menton_pt");
HAnimSite1040->addChildren(*TouchSensor1041);

CShape* Shape1042 = (CShape *)(m_pScene.createNode("Shape"));
Shape1042->setUSE("HAnimSiteShape");
HAnimSite1040->addChildren(*Shape1042);

HAnimSegment1005->addChildren(*HAnimSite1040);

CHAnimSite* HAnimSite1043 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1043->setName("r_gonion_pt");
HAnimSite1043->setDEF("hanim_r_gonion_pt");
HAnimSite1043->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor1044 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1044->setDescription("HAnimSite r_gonion_pt");
HAnimSite1043->addChildren(*TouchSensor1044);

CShape* Shape1045 = (CShape *)(m_pScene.createNode("Shape"));
Shape1045->setUSE("HAnimSiteShape");
HAnimSite1043->addChildren(*Shape1045);

HAnimSegment1005->addChildren(*HAnimSite1043);

CHAnimSite* HAnimSite1046 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1046->setName("supramenton_pt");
HAnimSite1046->setDEF("hanim_supramenton_pt");
HAnimSite1046->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor1047 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1047->setDescription("HAnimSite supramenton_pt");
HAnimSite1046->addChildren(*TouchSensor1047);

CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
Shape1048->setUSE("HAnimSiteShape");
HAnimSite1046->addChildren(*Shape1048);

HAnimSegment1005->addChildren(*HAnimSite1046);

HAnimJoint1004->addChildren(*HAnimSegment1005);

CHAnimJoint* HAnimJoint1049 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1049->setName("l_eyelid_joint");
HAnimJoint1049->setDEF("hanim_l_eyelid_joint");
HAnimJoint1049->setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint1049->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1049->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1049);

CHAnimJoint* HAnimJoint1050 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1050->setName("r_eyelid_joint");
HAnimJoint1050->setDEF("hanim_r_eyelid_joint");
HAnimJoint1050->setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint1050->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1050->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1050);

CHAnimJoint* HAnimJoint1051 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1051->setName("l_eyeball_joint");
HAnimJoint1051->setDEF("hanim_l_eyeball_joint");
HAnimJoint1051->setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint1051->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1051->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1051);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setName("r_eyeball_joint");
HAnimJoint1052->setDEF("hanim_r_eyeball_joint");
HAnimJoint1052->setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint1052->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1052->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1052);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setName("l_eyebrow_joint");
HAnimJoint1053->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1053->setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint1053->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1053->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1053);

CHAnimJoint* HAnimJoint1054 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1054->setName("r_eyebrow_joint");
HAnimJoint1054->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1054->setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint1054->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1054->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1054);

CHAnimJoint* HAnimJoint1055 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1055->setName("temporomandibular");
HAnimJoint1055->setDEF("hanim_temporomandibular");
HAnimJoint1055->setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint1055->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1055->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->addChildren(*HAnimJoint1055);

HAnimJoint962->addChildren(*HAnimJoint1004);

HAnimJoint953->addChildren(*HAnimJoint962);

HAnimJoint941->addChildren(*HAnimJoint953);

HAnimJoint932->addChildren(*HAnimJoint941);

HAnimJoint923->addChildren(*HAnimJoint932);

HAnimJoint914->addChildren(*HAnimJoint923);

HAnimJoint905->addChildren(*HAnimJoint914);

HAnimJoint852->addChildren(*HAnimJoint905);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setName("l_sternoclavicular");
HAnimJoint1056->setDEF("hanim_l_sternoclavicular");
HAnimJoint1056->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint1056->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1056->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1057 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1057->setName("l_clavicle");
HAnimSegment1057->setDEF("hanim_l_clavicle");
CTransform* Transform1058 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1058->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform1059 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1060 = (CShape *)(m_pScene.createNode("Shape"));
Shape1060->setUSE("HAnimJointShape");
Transform1059->addChildren(*Shape1060);

Transform1058->addChildren(*Transform1059);

HAnimSegment1057->addChildren(*Transform1058);

CShape* Shape1061 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1062 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1062->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1063 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1063->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1062->setCoord(*Coordinate1063);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1064 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1064->setUSE("HAnimSegmentLineColorRGBA");
LineSet1062->setColor(*ColorRGBA1064);

Shape1061->setGeometry(LineSet1062);

HAnimSegment1057->addChildren(*Shape1061);

HAnimJoint1056->addChildren(*HAnimSegment1057);

CHAnimJoint* HAnimJoint1065 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1065->setName("l_acromioclavicular");
HAnimJoint1065->setDEF("hanim_l_acromioclavicular");
HAnimJoint1065->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint1065->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1065->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setName("l_scapula");
HAnimSegment1066->setDEF("hanim_l_scapula");
CTransform* Transform1067 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1067->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform1068 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1069 = (CShape *)(m_pScene.createNode("Shape"));
Shape1069->setUSE("HAnimJointShape");
Transform1068->addChildren(*Shape1069);

Transform1067->addChildren(*Transform1068);

HAnimSegment1066->addChildren(*Transform1067);

CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1071 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1071->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1072 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1072->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1071->setCoord(*Coordinate1072);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA1073 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1073->setUSE("HAnimSegmentLineColorRGBA");
LineSet1071->setColor(*ColorRGBA1073);

Shape1070->setGeometry(LineSet1071);

HAnimSegment1066->addChildren(*Shape1070);

CHAnimSite* HAnimSite1074 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1074->setName("l_bideltoid_pt");
HAnimSite1074->setDEF("hanim_l_bideltoid_pt");
CTouchSensor* TouchSensor1075 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1075->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1074->addChildren(*TouchSensor1075);

CShape* Shape1076 = (CShape *)(m_pScene.createNode("Shape"));
Shape1076->setUSE("HAnimSiteShape");
HAnimSite1074->addChildren(*Shape1076);

HAnimSegment1066->addChildren(*HAnimSite1074);

CHAnimSite* HAnimSite1077 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1077->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1077->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1077->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor1078 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1078->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1077->addChildren(*TouchSensor1078);

CShape* Shape1079 = (CShape *)(m_pScene.createNode("Shape"));
Shape1079->setUSE("HAnimSiteShape");
HAnimSite1077->addChildren(*Shape1079);

HAnimSegment1066->addChildren(*HAnimSite1077);

HAnimJoint1065->addChildren(*HAnimSegment1066);

CHAnimJoint* HAnimJoint1080 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1080->setName("l_shoulder");
HAnimJoint1080->setDEF("hanim_l_shoulder");
HAnimJoint1080->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint1080->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1080->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1081 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1081->setName("l_upperarm");
HAnimSegment1081->setDEF("hanim_l_upperarm");
CTransform* Transform1082 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1082->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform1083 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1084 = (CShape *)(m_pScene.createNode("Shape"));
Shape1084->setUSE("HAnimJointShape");
Transform1083->addChildren(*Shape1084);

Transform1082->addChildren(*Transform1083);

HAnimSegment1081->addChildren(*Transform1082);

CShape* Shape1085 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1086 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1086->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1087 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1087->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1086->setCoord(*Coordinate1087);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA1088 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1088->setUSE("HAnimSegmentLineColorRGBA");
LineSet1086->setColor(*ColorRGBA1088);

Shape1085->setGeometry(LineSet1086);

HAnimSegment1081->addChildren(*Shape1085);

CHAnimSite* HAnimSite1089 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1089->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1089->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1089->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor1090 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1090->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1089->addChildren(*TouchSensor1090);

CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
Shape1091->setUSE("HAnimSiteShape");
HAnimSite1089->addChildren(*Shape1091);

HAnimSegment1081->addChildren(*HAnimSite1089);

CHAnimSite* HAnimSite1092 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1092->setName("l_olecranon_pt");
HAnimSite1092->setDEF("hanim_l_olecranon_pt");
HAnimSite1092->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor1093 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1093->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1092->addChildren(*TouchSensor1093);

CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("HAnimSiteShape");
HAnimSite1092->addChildren(*Shape1094);

HAnimSegment1081->addChildren(*HAnimSite1092);

CHAnimSite* HAnimSite1095 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1095->setName("l_radial_styloid_pt");
HAnimSite1095->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1095->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor1096 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1096->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1095->addChildren(*TouchSensor1096);

CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
Shape1097->setUSE("HAnimSiteShape");
HAnimSite1095->addChildren(*Shape1097);

HAnimSegment1081->addChildren(*HAnimSite1095);

CHAnimSite* HAnimSite1098 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1098->setName("l_radiale_pt");
HAnimSite1098->setDEF("hanim_l_radiale_pt");
HAnimSite1098->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor1099 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1099->setDescription("HAnimSite l_radiale_pt");
HAnimSite1098->addChildren(*TouchSensor1099);

CShape* Shape1100 = (CShape *)(m_pScene.createNode("Shape"));
Shape1100->setUSE("HAnimSiteShape");
HAnimSite1098->addChildren(*Shape1100);

HAnimSegment1081->addChildren(*HAnimSite1098);

HAnimJoint1080->addChildren(*HAnimSegment1081);

CHAnimJoint* HAnimJoint1101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1101->setName("l_elbow");
HAnimJoint1101->setDEF("hanim_l_elbow");
HAnimJoint1101->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint1101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1101->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1102->setName("l_forearm");
HAnimSegment1102->setDEF("hanim_l_forearm");
CTransform* Transform1103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1103->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform1104 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1105 = (CShape *)(m_pScene.createNode("Shape"));
Shape1105->setUSE("HAnimJointShape");
Transform1104->addChildren(*Shape1105);

Transform1103->addChildren(*Transform1104);

HAnimSegment1102->addChildren(*Transform1103);

CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1107 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1107->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1108 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1108->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1107->setCoord(*Coordinate1108);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA1109 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1109->setUSE("HAnimSegmentLineColorRGBA");
LineSet1107->setColor(*ColorRGBA1109);

Shape1106->setGeometry(LineSet1107);

HAnimSegment1102->addChildren(*Shape1106);

CHAnimSite* HAnimSite1110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1110->setName("l_ulnar_styloid_pt");
HAnimSite1110->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1110->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor1111 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1111->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1110->addChildren(*TouchSensor1111);

CShape* Shape1112 = (CShape *)(m_pScene.createNode("Shape"));
Shape1112->setUSE("HAnimSiteShape");
HAnimSite1110->addChildren(*Shape1112);

HAnimSegment1102->addChildren(*HAnimSite1110);

HAnimJoint1101->addChildren(*HAnimSegment1102);

CHAnimJoint* HAnimJoint1113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1113->setName("l_radiocarpal");
HAnimJoint1113->setDEF("hanim_l_radiocarpal");
HAnimJoint1113->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint1113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1113->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1114->setName("l_carpal");
HAnimSegment1114->setDEF("hanim_l_carpal");
CTransform* Transform1115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1115->setScale(new float[3]{0.2,0.2,0.2});
Transform1115->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1115->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform1116 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1116->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape1117 = (CShape *)(m_pScene.createNode("Shape"));
Shape1117->setUSE("HAnimJointShape");
Transform1116->addChildren(*Shape1117);

Transform1115->addChildren(*Transform1116);

HAnimSegment1114->addChildren(*Transform1115);

CShape* Shape1118 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1119 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1119->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1120->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826});
LineSet1119->setCoord(*Coordinate1120);

//from l_radiocarpal to l_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1121 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1121->setUSE("HAnimSegmentLineColorRGBA");
LineSet1119->setColor(*ColorRGBA1121);

Shape1118->setGeometry(LineSet1119);

HAnimSegment1114->addChildren(*Shape1118);

CShape* Shape1122 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1123 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1123->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1124 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1124->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935});
LineSet1123->setCoord(*Coordinate1124);

//from l_radiocarpal to l_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1125 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1125->setUSE("HAnimSegmentLineColorRGBA");
LineSet1123->setColor(*ColorRGBA1125);

Shape1122->setGeometry(LineSet1123);

HAnimSegment1114->addChildren(*Shape1122);

CShape* Shape1126 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1127 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1127->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1128 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1128->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067});
LineSet1127->setCoord(*Coordinate1128);

//from l_radiocarpal to l_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1129 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1129->setUSE("HAnimSegmentLineColorRGBA");
LineSet1127->setColor(*ColorRGBA1129);

Shape1126->setGeometry(LineSet1127);

HAnimSegment1114->addChildren(*Shape1126);

CShape* Shape1130 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1131 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1131->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1132 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1132->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276});
LineSet1131->setCoord(*Coordinate1132);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1133 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1133->setUSE("HAnimSegmentLineColorRGBA");
LineSet1131->setColor(*ColorRGBA1133);

Shape1130->setGeometry(LineSet1131);

HAnimSegment1114->addChildren(*Shape1130);

HAnimJoint1113->addChildren(*HAnimSegment1114);

CHAnimJoint* HAnimJoint1134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1134->setName("l_midcarpal_1");
HAnimJoint1134->setDEF("hanim_l_midcarpal_1");
HAnimJoint1134->setCenter(new float[3]{0.1811,0.6975,-0.0826});
HAnimJoint1134->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1134->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1135 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1135->setName("l_trapezium");
HAnimSegment1135->setDEF("hanim_l_trapezium");
CTransform* Transform1136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1136->setTranslation(new float[3]{0.1811,0.6975,-0.0826});
CTransform* Transform1137 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1138 = (CShape *)(m_pScene.createNode("Shape"));
Shape1138->setUSE("HAnimJointShape");
Transform1137->addChildren(*Shape1138);

Transform1136->addChildren(*Transform1137);

HAnimSegment1135->addChildren(*Transform1136);

CShape* Shape1139 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1140 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1140->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1141 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1141->setPoint(new float[6]{0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534});
LineSet1140->setCoord(*Coordinate1141);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1142 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1142->setUSE("HAnimSegmentLineColorRGBA");
LineSet1140->setColor(*ColorRGBA1142);

Shape1139->setGeometry(LineSet1140);

HAnimSegment1135->addChildren(*Shape1139);

HAnimJoint1134->addChildren(*HAnimSegment1135);

CHAnimJoint* HAnimJoint1143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1143->setName("l_carpometacarpal_1");
HAnimJoint1143->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1143->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1144->setName("l_metacarpal_1");
HAnimSegment1144->setDEF("hanim_l_metacarpal_1");
CTransform* Transform1145 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1145->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform1146 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1147 = (CShape *)(m_pScene.createNode("Shape"));
Shape1147->setUSE("HAnimJointShape");
Transform1146->addChildren(*Shape1147);

Transform1145->addChildren(*Transform1146);

HAnimSegment1144->addChildren(*Transform1145);

CShape* Shape1148 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1149 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1149->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1150 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1150->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1149->setCoord(*Coordinate1150);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1151 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1151->setUSE("HAnimSegmentLineColorRGBA");
LineSet1149->setColor(*ColorRGBA1151);

Shape1148->setGeometry(LineSet1149);

HAnimSegment1144->addChildren(*Shape1148);

HAnimJoint1143->addChildren(*HAnimSegment1144);

CHAnimJoint* HAnimJoint1152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1152->setName("l_metacarpophalangeal_1");
HAnimJoint1152->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1152->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1152->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1152->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1153 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1153->setName("l_carpal_proximal_phalanx_1");
HAnimSegment1153->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform1154 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1154->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform1155 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1156 = (CShape *)(m_pScene.createNode("Shape"));
Shape1156->setUSE("HAnimJointShape");
Transform1155->addChildren(*Shape1156);

Transform1154->addChildren(*Transform1155);

HAnimSegment1153->addChildren(*Transform1154);

CShape* Shape1157 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1158 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1158->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1159 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1159->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1158->setCoord(*Coordinate1159);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1160 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1160->setUSE("HAnimSegmentLineColorRGBA");
LineSet1158->setColor(*ColorRGBA1160);

Shape1157->setGeometry(LineSet1158);

HAnimSegment1153->addChildren(*Shape1157);

CHAnimSite* HAnimSite1161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1161->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite1161->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1162 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1162->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1161->addChildren(*TouchSensor1162);

CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
Shape1163->setUSE("HAnimSiteShape");
HAnimSite1161->addChildren(*Shape1163);

HAnimSegment1153->addChildren(*HAnimSite1161);

HAnimJoint1152->addChildren(*HAnimSegment1153);

CHAnimJoint* HAnimJoint1164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1164->setName("l_carpal_interphalangeal_1");
HAnimJoint1164->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1164->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1164->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1164->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1152->addChildren(*HAnimJoint1164);

HAnimJoint1143->addChildren(*HAnimJoint1152);

HAnimJoint1134->addChildren(*HAnimJoint1143);

HAnimJoint1113->addChildren(*HAnimJoint1134);

CHAnimJoint* HAnimJoint1165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1165->setName("l_midcarpal_2");
HAnimJoint1165->setDEF("hanim_l_midcarpal_2");
HAnimJoint1165->setCenter(new float[3]{0.1811,0.6984,-0.0935});
HAnimJoint1165->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1165->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1166 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1166->setName("l_trapezoid");
HAnimSegment1166->setDEF("hanim_l_trapezoid");
CTransform* Transform1167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1167->setTranslation(new float[3]{0.1811,0.6984,-0.0935});
CTransform* Transform1168 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1169 = (CShape *)(m_pScene.createNode("Shape"));
Shape1169->setUSE("HAnimJointShape");
Transform1168->addChildren(*Shape1169);

Transform1167->addChildren(*Transform1168);

HAnimSegment1166->addChildren(*Transform1167);

CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1171 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1171->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1172 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1172->setPoint(new float[6]{0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028});
LineSet1171->setCoord(*Coordinate1172);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1173 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1173->setUSE("HAnimSegmentLineColorRGBA");
LineSet1171->setColor(*ColorRGBA1173);

Shape1170->setGeometry(LineSet1171);

HAnimSegment1166->addChildren(*Shape1170);

CHAnimSite* HAnimSite1174 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1174->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1174->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1174->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor1175 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1175->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1174->addChildren(*TouchSensor1175);

CShape* Shape1176 = (CShape *)(m_pScene.createNode("Shape"));
Shape1176->setUSE("HAnimSiteShape");
HAnimSite1174->addChildren(*Shape1176);

HAnimSegment1166->addChildren(*HAnimSite1174);

HAnimJoint1165->addChildren(*HAnimSegment1166);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setName("l_carpometacarpal_2");
HAnimJoint1177->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1177->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1177->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1177->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1178 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1178->setName("l_metacarpal_2");
HAnimSegment1178->setDEF("hanim_l_metacarpal_2");
CTransform* Transform1179 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1179->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform1180 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1181 = (CShape *)(m_pScene.createNode("Shape"));
Shape1181->setUSE("HAnimJointShape");
Transform1180->addChildren(*Shape1181);

Transform1179->addChildren(*Transform1180);

HAnimSegment1178->addChildren(*Transform1179);

CShape* Shape1182 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1183 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1183->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1184 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1184->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1183->setCoord(*Coordinate1184);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1185 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1185->setUSE("HAnimSegmentLineColorRGBA");
LineSet1183->setColor(*ColorRGBA1185);

Shape1182->setGeometry(LineSet1183);

HAnimSegment1178->addChildren(*Shape1182);

HAnimJoint1177->addChildren(*HAnimSegment1178);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setName("l_metacarpophalangeal_2");
HAnimJoint1186->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1186->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1186->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1186->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1187->setName("l_carpal_proximal_phalanx_2");
HAnimSegment1187->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform1188 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1188->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform1189 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1190 = (CShape *)(m_pScene.createNode("Shape"));
Shape1190->setUSE("HAnimJointShape");
Transform1189->addChildren(*Shape1190);

Transform1188->addChildren(*Transform1189);

HAnimSegment1187->addChildren(*Transform1188);

CShape* Shape1191 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1192 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1192->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1193 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1193->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1192->setCoord(*Coordinate1193);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1194 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1194->setUSE("HAnimSegmentLineColorRGBA");
LineSet1192->setColor(*ColorRGBA1194);

Shape1191->setGeometry(LineSet1192);

HAnimSegment1187->addChildren(*Shape1191);

HAnimJoint1186->addChildren(*HAnimSegment1187);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1195->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1195->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1195->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1195->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1196 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1196->setName("l_carpal_middle_phalanx_2");
HAnimSegment1196->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform1197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1197->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform1198 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1199 = (CShape *)(m_pScene.createNode("Shape"));
Shape1199->setUSE("HAnimJointShape");
Transform1198->addChildren(*Shape1199);

Transform1197->addChildren(*Transform1198);

HAnimSegment1196->addChildren(*Transform1197);

CShape* Shape1200 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1201 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1201->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1202->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1201->setCoord(*Coordinate1202);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1203 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1203->setUSE("HAnimSegmentLineColorRGBA");
LineSet1201->setColor(*ColorRGBA1203);

Shape1200->setGeometry(LineSet1201);

HAnimSegment1196->addChildren(*Shape1200);

CHAnimSite* HAnimSite1204 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1204->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite1204->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1205 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1205->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1204->addChildren(*TouchSensor1205);

CShape* Shape1206 = (CShape *)(m_pScene.createNode("Shape"));
Shape1206->setUSE("HAnimSiteShape");
HAnimSite1204->addChildren(*Shape1206);

HAnimSegment1196->addChildren(*HAnimSite1204);

CHAnimSite* HAnimSite1207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1207->setName("l_dactylion_pt");
HAnimSite1207->setDEF("hanim_l_dactylion_pt");
HAnimSite1207->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor1208 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1208->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1207->addChildren(*TouchSensor1208);

CShape* Shape1209 = (CShape *)(m_pScene.createNode("Shape"));
Shape1209->setUSE("HAnimSiteShape");
HAnimSite1207->addChildren(*Shape1209);

HAnimSegment1196->addChildren(*HAnimSite1207);

HAnimJoint1195->addChildren(*HAnimSegment1196);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1210->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1210->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1210->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1210->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1195->addChildren(*HAnimJoint1210);

HAnimJoint1186->addChildren(*HAnimJoint1195);

HAnimJoint1177->addChildren(*HAnimJoint1186);

HAnimJoint1165->addChildren(*HAnimJoint1177);

HAnimJoint1113->addChildren(*HAnimJoint1165);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setName("l_midcarpal_3");
HAnimJoint1211->setDEF("hanim_l_midcarpal_3");
HAnimJoint1211->setCenter(new float[3]{0.1809,0.7,-0.1067});
HAnimJoint1211->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1211->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1212 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1212->setName("l_capitate");
HAnimSegment1212->setDEF("hanim_l_capitate");
CTransform* Transform1213 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1213->setTranslation(new float[3]{0.1809,0.7,-0.1067});
CTransform* Transform1214 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1215 = (CShape *)(m_pScene.createNode("Shape"));
Shape1215->setUSE("HAnimJointShape");
Transform1214->addChildren(*Shape1215);

Transform1213->addChildren(*Transform1214);

HAnimSegment1212->addChildren(*Transform1213);

CShape* Shape1216 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1217 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1217->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1218 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1218->setPoint(new float[6]{0.1809,0.7,-0.1067,0.1987,0.8029,-0.053});
LineSet1217->setCoord(*Coordinate1218);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1219 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1219->setUSE("HAnimSegmentLineColorRGBA");
LineSet1217->setColor(*ColorRGBA1219);

Shape1216->setGeometry(LineSet1217);

HAnimSegment1212->addChildren(*Shape1216);

CHAnimSite* HAnimSite1220 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1220->setName("l_metacarpal_phalanx_3_pt");
HAnimSite1220->setDEF("hanim_l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1221 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1221->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1220->addChildren(*TouchSensor1221);

CShape* Shape1222 = (CShape *)(m_pScene.createNode("Shape"));
Shape1222->setUSE("HAnimSiteShape");
HAnimSite1220->addChildren(*Shape1222);

HAnimSegment1212->addChildren(*HAnimSite1220);

HAnimJoint1211->addChildren(*HAnimSegment1212);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setName("l_carpometacarpal_3");
HAnimJoint1223->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1223->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1223->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1223->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1224 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1224->setName("l_metacarpal_3");
HAnimSegment1224->setDEF("hanim_l_metacarpal_3");
CTransform* Transform1225 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1225->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform1226 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1227 = (CShape *)(m_pScene.createNode("Shape"));
Shape1227->setUSE("HAnimJointShape");
Transform1226->addChildren(*Shape1227);

Transform1225->addChildren(*Transform1226);

HAnimSegment1224->addChildren(*Transform1225);

CShape* Shape1228 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1229 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1229->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1230->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1229->setCoord(*Coordinate1230);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1231 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1231->setUSE("HAnimSegmentLineColorRGBA");
LineSet1229->setColor(*ColorRGBA1231);

Shape1228->setGeometry(LineSet1229);

HAnimSegment1224->addChildren(*Shape1228);

HAnimJoint1223->addChildren(*HAnimSegment1224);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setName("l_metacarpophalangeal_3");
HAnimJoint1232->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1232->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1232->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1232->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1233->setName("l_carpal_proximal_phalanx_3");
HAnimSegment1233->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform1234 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1234->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform1235 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1236 = (CShape *)(m_pScene.createNode("Shape"));
Shape1236->setUSE("HAnimJointShape");
Transform1235->addChildren(*Shape1236);

Transform1234->addChildren(*Transform1235);

HAnimSegment1233->addChildren(*Transform1234);

CShape* Shape1237 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1238 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1238->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1239->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1238->setCoord(*Coordinate1239);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1240 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1240->setUSE("HAnimSegmentLineColorRGBA");
LineSet1238->setColor(*ColorRGBA1240);

Shape1237->setGeometry(LineSet1238);

HAnimSegment1233->addChildren(*Shape1237);

HAnimJoint1232->addChildren(*HAnimSegment1233);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1241->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1241->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1241->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1241->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1242->setName("l_carpal_middle_phalanx_3");
HAnimSegment1242->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform1243 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1243->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform1244 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1245 = (CShape *)(m_pScene.createNode("Shape"));
Shape1245->setUSE("HAnimJointShape");
Transform1244->addChildren(*Shape1245);

Transform1243->addChildren(*Transform1244);

HAnimSegment1242->addChildren(*Transform1243);

CShape* Shape1246 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1247 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1247->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1248 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1248->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1247->setCoord(*Coordinate1248);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1249 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1249->setUSE("HAnimSegmentLineColorRGBA");
LineSet1247->setColor(*ColorRGBA1249);

Shape1246->setGeometry(LineSet1247);

HAnimSegment1242->addChildren(*Shape1246);

CHAnimSite* HAnimSite1250 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1250->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite1250->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1251 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1251->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1250->addChildren(*TouchSensor1251);

CShape* Shape1252 = (CShape *)(m_pScene.createNode("Shape"));
Shape1252->setUSE("HAnimSiteShape");
HAnimSite1250->addChildren(*Shape1252);

HAnimSegment1242->addChildren(*HAnimSite1250);

HAnimJoint1241->addChildren(*HAnimSegment1242);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1253->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1253->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1253->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1253->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1241->addChildren(*HAnimJoint1253);

HAnimJoint1232->addChildren(*HAnimJoint1241);

HAnimJoint1223->addChildren(*HAnimJoint1232);

HAnimJoint1211->addChildren(*HAnimJoint1223);

HAnimJoint1113->addChildren(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setName("l_midcarpal_4_5");
HAnimJoint1254->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint1254->setCenter(new float[3]{0.1809,0.6973,-0.1276});
HAnimJoint1254->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1254->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1255 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1255->setName("l_hamate");
HAnimSegment1255->setDEF("hanim_l_hamate");
CTransform* Transform1256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1256->setTranslation(new float[3]{0.1809,0.6973,-0.1276});
CTransform* Transform1257 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1258 = (CShape *)(m_pScene.createNode("Shape"));
Shape1258->setUSE("HAnimJointShape");
Transform1257->addChildren(*Shape1258);

Transform1256->addChildren(*Transform1257);

HAnimSegment1255->addChildren(*Transform1256);

CShape* Shape1259 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1260 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1260->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1261 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1261->setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794});
LineSet1260->setCoord(*Coordinate1261);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1262 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1262->setUSE("HAnimSegmentLineColorRGBA");
LineSet1260->setColor(*ColorRGBA1262);

Shape1259->setGeometry(LineSet1260);

HAnimSegment1255->addChildren(*Shape1259);

CShape* Shape1263 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1264 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1264->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1265 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1265->setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036});
LineSet1264->setCoord(*Coordinate1265);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1266 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1266->setUSE("HAnimSegmentLineColorRGBA");
LineSet1264->setColor(*ColorRGBA1266);

Shape1263->setGeometry(LineSet1264);

HAnimSegment1255->addChildren(*Shape1263);

CHAnimSite* HAnimSite1267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1267->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1267->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1267->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor1268 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1268->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1267->addChildren(*TouchSensor1268);

CShape* Shape1269 = (CShape *)(m_pScene.createNode("Shape"));
Shape1269->setUSE("HAnimSiteShape");
HAnimSite1267->addChildren(*Shape1269);

HAnimSegment1255->addChildren(*HAnimSite1267);

HAnimJoint1254->addChildren(*HAnimSegment1255);

CHAnimJoint* HAnimJoint1270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1270->setName("l_carpometacarpal_4");
HAnimJoint1270->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1270->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1270->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1270->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1271->setName("l_metacarpal_4");
HAnimSegment1271->setDEF("hanim_l_metacarpal_4");
CTransform* Transform1272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1272->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform1273 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1274 = (CShape *)(m_pScene.createNode("Shape"));
Shape1274->setUSE("HAnimJointShape");
Transform1273->addChildren(*Shape1274);

Transform1272->addChildren(*Transform1273);

HAnimSegment1271->addChildren(*Transform1272);

CShape* Shape1275 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1276 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1276->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1277 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1277->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1276->setCoord(*Coordinate1277);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1278 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1278->setUSE("HAnimSegmentLineColorRGBA");
LineSet1276->setColor(*ColorRGBA1278);

Shape1275->setGeometry(LineSet1276);

HAnimSegment1271->addChildren(*Shape1275);

HAnimJoint1270->addChildren(*HAnimSegment1271);

CHAnimJoint* HAnimJoint1279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1279->setName("l_metacarpophalangeal_4");
HAnimJoint1279->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1279->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1279->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1279->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1280->setName("l_carpal_proximal_phalanx_4");
HAnimSegment1280->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform1281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1281->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform1282 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1283 = (CShape *)(m_pScene.createNode("Shape"));
Shape1283->setUSE("HAnimJointShape");
Transform1282->addChildren(*Shape1283);

Transform1281->addChildren(*Transform1282);

HAnimSegment1280->addChildren(*Transform1281);

CShape* Shape1284 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1285 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1285->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1286->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1285->setCoord(*Coordinate1286);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1287 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1287->setUSE("HAnimSegmentLineColorRGBA");
LineSet1285->setColor(*ColorRGBA1287);

Shape1284->setGeometry(LineSet1285);

HAnimSegment1280->addChildren(*Shape1284);

HAnimJoint1279->addChildren(*HAnimSegment1280);

CHAnimJoint* HAnimJoint1288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1288->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1288->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1288->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1288->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1288->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1289->setName("l_carpal_middle_phalanx_4");
HAnimSegment1289->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform1290 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1290->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform1291 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1292 = (CShape *)(m_pScene.createNode("Shape"));
Shape1292->setUSE("HAnimJointShape");
Transform1291->addChildren(*Shape1292);

Transform1290->addChildren(*Transform1291);

HAnimSegment1289->addChildren(*Transform1290);

CShape* Shape1293 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1294 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1294->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1295 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1295->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1294->setCoord(*Coordinate1295);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1296 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1296->setUSE("HAnimSegmentLineColorRGBA");
LineSet1294->setColor(*ColorRGBA1296);

Shape1293->setGeometry(LineSet1294);

HAnimSegment1289->addChildren(*Shape1293);

CHAnimSite* HAnimSite1297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1297->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite1297->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1298 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1298->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1297->addChildren(*TouchSensor1298);

CShape* Shape1299 = (CShape *)(m_pScene.createNode("Shape"));
Shape1299->setUSE("HAnimSiteShape");
HAnimSite1297->addChildren(*Shape1299);

HAnimSegment1289->addChildren(*HAnimSite1297);

HAnimJoint1288->addChildren(*HAnimSegment1289);

CHAnimJoint* HAnimJoint1300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1300->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1300->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1300->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1300->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1300->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1288->addChildren(*HAnimJoint1300);

HAnimJoint1279->addChildren(*HAnimJoint1288);

HAnimJoint1270->addChildren(*HAnimJoint1279);

HAnimJoint1254->addChildren(*HAnimJoint1270);

CHAnimJoint* HAnimJoint1301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1301->setName("l_carpometacarpal_5");
HAnimJoint1301->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1301->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1301->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1301->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1302->setName("l_metacarpal_5");
HAnimSegment1302->setDEF("hanim_l_metacarpal_5");
CTransform* Transform1303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1303->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform1304 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1305 = (CShape *)(m_pScene.createNode("Shape"));
Shape1305->setUSE("HAnimJointShape");
Transform1304->addChildren(*Shape1305);

Transform1303->addChildren(*Transform1304);

HAnimSegment1302->addChildren(*Transform1303);

CShape* Shape1306 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1307 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1307->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1308 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1308->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1307->setCoord(*Coordinate1308);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1309 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1309->setUSE("HAnimSegmentLineColorRGBA");
LineSet1307->setColor(*ColorRGBA1309);

Shape1306->setGeometry(LineSet1307);

HAnimSegment1302->addChildren(*Shape1306);

HAnimJoint1301->addChildren(*HAnimSegment1302);

CHAnimJoint* HAnimJoint1310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1310->setName("l_metacarpophalangeal_5");
HAnimJoint1310->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1310->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1310->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1310->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1311->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1311->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform1312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1312->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform1313 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1314 = (CShape *)(m_pScene.createNode("Shape"));
Shape1314->setUSE("HAnimJointShape");
Transform1313->addChildren(*Shape1314);

Transform1312->addChildren(*Transform1313);

HAnimSegment1311->addChildren(*Transform1312);

CShape* Shape1315 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1316 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1316->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1317 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1317->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1316->setCoord(*Coordinate1317);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1318 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1318->setUSE("HAnimSegmentLineColorRGBA");
LineSet1316->setColor(*ColorRGBA1318);

Shape1315->setGeometry(LineSet1316);

HAnimSegment1311->addChildren(*Shape1315);

HAnimJoint1310->addChildren(*HAnimSegment1311);

CHAnimJoint* HAnimJoint1319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1319->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1319->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1319->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1319->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1319->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1320->setName("l_carpal_middle_phalanx_5");
HAnimSegment1320->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform1321 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1321->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform1322 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1323 = (CShape *)(m_pScene.createNode("Shape"));
Shape1323->setUSE("HAnimJointShape");
Transform1322->addChildren(*Shape1323);

Transform1321->addChildren(*Transform1322);

HAnimSegment1320->addChildren(*Transform1321);

CShape* Shape1324 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1325 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1325->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1326 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1326->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1325->setCoord(*Coordinate1326);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1327 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1327->setUSE("HAnimSegmentLineColorRGBA");
LineSet1325->setColor(*ColorRGBA1327);

Shape1324->setGeometry(LineSet1325);

HAnimSegment1320->addChildren(*Shape1324);

CHAnimSite* HAnimSite1328 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1328->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite1328->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1329 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1329->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1328->addChildren(*TouchSensor1329);

CShape* Shape1330 = (CShape *)(m_pScene.createNode("Shape"));
Shape1330->setUSE("HAnimSiteShape");
HAnimSite1328->addChildren(*Shape1330);

HAnimSegment1320->addChildren(*HAnimSite1328);

HAnimJoint1319->addChildren(*HAnimSegment1320);

CHAnimJoint* HAnimJoint1331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1331->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1331->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1331->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1331->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1331->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1319->addChildren(*HAnimJoint1331);

HAnimJoint1310->addChildren(*HAnimJoint1319);

HAnimJoint1301->addChildren(*HAnimJoint1310);

HAnimJoint1254->addChildren(*HAnimJoint1301);

HAnimJoint1113->addChildren(*HAnimJoint1254);

HAnimJoint1101->addChildren(*HAnimJoint1113);

HAnimJoint1080->addChildren(*HAnimJoint1101);

HAnimJoint1065->addChildren(*HAnimJoint1080);

HAnimJoint1056->addChildren(*HAnimJoint1065);

HAnimJoint852->addChildren(*HAnimJoint1056);

CHAnimJoint* HAnimJoint1332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1332->setName("r_sternoclavicular");
HAnimJoint1332->setDEF("hanim_r_sternoclavicular");
HAnimJoint1332->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint1332->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1332->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1333->setName("r_clavicle");
HAnimSegment1333->setDEF("hanim_r_clavicle");
CTransform* Transform1334 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1334->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform1335 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1336 = (CShape *)(m_pScene.createNode("Shape"));
Shape1336->setUSE("HAnimJointShape");
Transform1335->addChildren(*Shape1336);

Transform1334->addChildren(*Transform1335);

HAnimSegment1333->addChildren(*Transform1334);

CShape* Shape1337 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1338 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1338->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1339 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1339->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1338->setCoord(*Coordinate1339);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1340 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1340->setUSE("HAnimSegmentLineColorRGBA");
LineSet1338->setColor(*ColorRGBA1340);

Shape1337->setGeometry(LineSet1338);

HAnimSegment1333->addChildren(*Shape1337);

HAnimJoint1332->addChildren(*HAnimSegment1333);

CHAnimJoint* HAnimJoint1341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1341->setName("r_acromioclavicular");
HAnimJoint1341->setDEF("hanim_r_acromioclavicular");
HAnimJoint1341->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint1341->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1341->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1342 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1342->setName("r_scapula");
HAnimSegment1342->setDEF("hanim_r_scapula");
CTransform* Transform1343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1343->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform1344 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1345 = (CShape *)(m_pScene.createNode("Shape"));
Shape1345->setUSE("HAnimJointShape");
Transform1344->addChildren(*Shape1345);

Transform1343->addChildren(*Transform1344);

HAnimSegment1342->addChildren(*Transform1343);

CShape* Shape1346 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1347 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1347->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1348->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1347->setCoord(*Coordinate1348);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA1349 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1349->setUSE("HAnimSegmentLineColorRGBA");
LineSet1347->setColor(*ColorRGBA1349);

Shape1346->setGeometry(LineSet1347);

HAnimSegment1342->addChildren(*Shape1346);

CHAnimSite* HAnimSite1350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1350->setName("r_bideltoid_pt");
HAnimSite1350->setDEF("hanim_r_bideltoid_pt");
CTouchSensor* TouchSensor1351 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1351->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1350->addChildren(*TouchSensor1351);

CShape* Shape1352 = (CShape *)(m_pScene.createNode("Shape"));
Shape1352->setUSE("HAnimSiteShape");
HAnimSite1350->addChildren(*Shape1352);

HAnimSegment1342->addChildren(*HAnimSite1350);

CHAnimSite* HAnimSite1353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1353->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1353->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1353->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor1354 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1354->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1353->addChildren(*TouchSensor1354);

CShape* Shape1355 = (CShape *)(m_pScene.createNode("Shape"));
Shape1355->setUSE("HAnimSiteShape");
HAnimSite1353->addChildren(*Shape1355);

HAnimSegment1342->addChildren(*HAnimSite1353);

HAnimJoint1341->addChildren(*HAnimSegment1342);

CHAnimJoint* HAnimJoint1356 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1356->setName("r_shoulder");
HAnimJoint1356->setDEF("hanim_r_shoulder");
HAnimJoint1356->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint1356->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1356->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1357 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1357->setName("r_upperarm");
HAnimSegment1357->setDEF("hanim_r_upperarm");
CTransform* Transform1358 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1358->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform1359 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1360 = (CShape *)(m_pScene.createNode("Shape"));
Shape1360->setUSE("HAnimJointShape");
Transform1359->addChildren(*Shape1360);

Transform1358->addChildren(*Transform1359);

HAnimSegment1357->addChildren(*Transform1358);

CShape* Shape1361 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1362 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1362->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1363 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1363->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1362->setCoord(*Coordinate1363);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA1364 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1364->setUSE("HAnimSegmentLineColorRGBA");
LineSet1362->setColor(*ColorRGBA1364);

Shape1361->setGeometry(LineSet1362);

HAnimSegment1357->addChildren(*Shape1361);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1365->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1365->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor1366 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1366->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1365->addChildren(*TouchSensor1366);

CShape* Shape1367 = (CShape *)(m_pScene.createNode("Shape"));
Shape1367->setUSE("HAnimSiteShape");
HAnimSite1365->addChildren(*Shape1367);

HAnimSegment1357->addChildren(*HAnimSite1365);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setName("r_olecranon_pt");
HAnimSite1368->setDEF("hanim_r_olecranon_pt");
HAnimSite1368->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor1369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1369->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1368->addChildren(*TouchSensor1369);

CShape* Shape1370 = (CShape *)(m_pScene.createNode("Shape"));
Shape1370->setUSE("HAnimSiteShape");
HAnimSite1368->addChildren(*Shape1370);

HAnimSegment1357->addChildren(*HAnimSite1368);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setName("r_radial_styloid_pt");
HAnimSite1371->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1371->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor1372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1372->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1371->addChildren(*TouchSensor1372);

CShape* Shape1373 = (CShape *)(m_pScene.createNode("Shape"));
Shape1373->setUSE("HAnimSiteShape");
HAnimSite1371->addChildren(*Shape1373);

HAnimSegment1357->addChildren(*HAnimSite1371);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setName("r_radiale_pt");
HAnimSite1374->setDEF("hanim_r_radiale_pt");
HAnimSite1374->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor1375 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1375->setDescription("HAnimSite r_radiale_pt");
HAnimSite1374->addChildren(*TouchSensor1375);

CShape* Shape1376 = (CShape *)(m_pScene.createNode("Shape"));
Shape1376->setUSE("HAnimSiteShape");
HAnimSite1374->addChildren(*Shape1376);

HAnimSegment1357->addChildren(*HAnimSite1374);

HAnimJoint1356->addChildren(*HAnimSegment1357);

CHAnimJoint* HAnimJoint1377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1377->setName("r_elbow");
HAnimJoint1377->setDEF("hanim_r_elbow");
HAnimJoint1377->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint1377->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1377->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1378 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1378->setName("r_forearm");
HAnimSegment1378->setDEF("hanim_r_forearm");
CTransform* Transform1379 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1379->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform1380 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1381 = (CShape *)(m_pScene.createNode("Shape"));
Shape1381->setUSE("HAnimJointShape");
Transform1380->addChildren(*Shape1381);

Transform1379->addChildren(*Transform1380);

HAnimSegment1378->addChildren(*Transform1379);

CShape* Shape1382 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1383 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1383->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1384 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1384->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1383->setCoord(*Coordinate1384);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA1385 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1385->setUSE("HAnimSegmentLineColorRGBA");
LineSet1383->setColor(*ColorRGBA1385);

Shape1382->setGeometry(LineSet1383);

HAnimSegment1378->addChildren(*Shape1382);

CHAnimSite* HAnimSite1386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1386->setName("r_ulnar_styloid_pt");
HAnimSite1386->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1386->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor1387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1387->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1386->addChildren(*TouchSensor1387);

CShape* Shape1388 = (CShape *)(m_pScene.createNode("Shape"));
Shape1388->setUSE("HAnimSiteShape");
HAnimSite1386->addChildren(*Shape1388);

HAnimSegment1378->addChildren(*HAnimSite1386);

HAnimJoint1377->addChildren(*HAnimSegment1378);

CHAnimJoint* HAnimJoint1389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1389->setName("r_radiocarpal");
HAnimJoint1389->setDEF("hanim_r_radiocarpal");
HAnimJoint1389->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint1389->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1389->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1390 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1390->setName("r_carpal");
HAnimSegment1390->setDEF("hanim_r_carpal");
CTransform* Transform1391 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1391->setScale(new float[3]{0.2,0.2,0.2});
Transform1391->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1391->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform1392 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1392->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape1393 = (CShape *)(m_pScene.createNode("Shape"));
Shape1393->setUSE("HAnimJointShape");
Transform1392->addChildren(*Shape1393);

Transform1391->addChildren(*Transform1392);

HAnimSegment1390->addChildren(*Transform1391);

CShape* Shape1394 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1395 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1395->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1396 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1396->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826});
LineSet1395->setCoord(*Coordinate1396);

//from r_radiocarpal to r_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1397 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1397->setUSE("HAnimSegmentLineColorRGBA");
LineSet1395->setColor(*ColorRGBA1397);

Shape1394->setGeometry(LineSet1395);

HAnimSegment1390->addChildren(*Shape1394);

CShape* Shape1398 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1399 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1399->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1400 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1400->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935});
LineSet1399->setCoord(*Coordinate1400);

//from r_radiocarpal to r_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1401 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1401->setUSE("HAnimSegmentLineColorRGBA");
LineSet1399->setColor(*ColorRGBA1401);

Shape1398->setGeometry(LineSet1399);

HAnimSegment1390->addChildren(*Shape1398);

CShape* Shape1402 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1403 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1403->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1404 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1404->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067});
LineSet1403->setCoord(*Coordinate1404);

//from r_radiocarpal to r_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1405 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1405->setUSE("HAnimSegmentLineColorRGBA");
LineSet1403->setColor(*ColorRGBA1405);

Shape1402->setGeometry(LineSet1403);

HAnimSegment1390->addChildren(*Shape1402);

CShape* Shape1406 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1407 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1407->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1408 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1408->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276});
LineSet1407->setCoord(*Coordinate1408);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1409 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1409->setUSE("HAnimSegmentLineColorRGBA");
LineSet1407->setColor(*ColorRGBA1409);

Shape1406->setGeometry(LineSet1407);

HAnimSegment1390->addChildren(*Shape1406);

HAnimJoint1389->addChildren(*HAnimSegment1390);

CHAnimJoint* HAnimJoint1410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1410->setName("r_midcarpal_1");
HAnimJoint1410->setDEF("hanim_r_midcarpal_1");
HAnimJoint1410->setCenter(new float[3]{-0.1811,0.6975,-0.0826});
HAnimJoint1410->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1410->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1411->setName("r_trapezium");
HAnimSegment1411->setDEF("hanim_r_trapezium");
CTransform* Transform1412 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1412->setTranslation(new float[3]{-0.1811,0.6975,-0.0826});
CTransform* Transform1413 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1414 = (CShape *)(m_pScene.createNode("Shape"));
Shape1414->setUSE("HAnimJointShape");
Transform1413->addChildren(*Shape1414);

Transform1412->addChildren(*Transform1413);

HAnimSegment1411->addChildren(*Transform1412);

CShape* Shape1415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1416->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1417->setPoint(new float[6]{-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473});
LineSet1416->setCoord(*Coordinate1417);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1418 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1418->setUSE("HAnimSegmentLineColorRGBA");
LineSet1416->setColor(*ColorRGBA1418);

Shape1415->setGeometry(LineSet1416);

HAnimSegment1411->addChildren(*Shape1415);

HAnimJoint1410->addChildren(*HAnimSegment1411);

CHAnimJoint* HAnimJoint1419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1419->setName("r_carpometacarpal_1");
HAnimJoint1419->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1419->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1419->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1419->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1420->setName("r_metacarpal_1");
HAnimSegment1420->setDEF("hanim_r_metacarpal_1");
CTransform* Transform1421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1421->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform1422 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1423 = (CShape *)(m_pScene.createNode("Shape"));
Shape1423->setUSE("HAnimJointShape");
Transform1422->addChildren(*Shape1423);

Transform1421->addChildren(*Transform1422);

HAnimSegment1420->addChildren(*Transform1421);

CShape* Shape1424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1425->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1426 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1426->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1425->setCoord(*Coordinate1426);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1427 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1427->setUSE("HAnimSegmentLineColorRGBA");
LineSet1425->setColor(*ColorRGBA1427);

Shape1424->setGeometry(LineSet1425);

HAnimSegment1420->addChildren(*Shape1424);

HAnimJoint1419->addChildren(*HAnimSegment1420);

CHAnimJoint* HAnimJoint1428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1428->setName("r_metacarpophalangeal_1");
HAnimJoint1428->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1428->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1428->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1428->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1429->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1429->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform1430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1430->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform1431 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1432 = (CShape *)(m_pScene.createNode("Shape"));
Shape1432->setUSE("HAnimJointShape");
Transform1431->addChildren(*Shape1432);

Transform1430->addChildren(*Transform1431);

HAnimSegment1429->addChildren(*Transform1430);

CShape* Shape1433 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1434 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1434->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1435 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1435->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1434->setCoord(*Coordinate1435);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1436 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1436->setUSE("HAnimSegmentLineColorRGBA");
LineSet1434->setColor(*ColorRGBA1436);

Shape1433->setGeometry(LineSet1434);

HAnimSegment1429->addChildren(*Shape1433);

CHAnimSite* HAnimSite1437 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1437->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1437->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1438->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1437->addChildren(*TouchSensor1438);

CShape* Shape1439 = (CShape *)(m_pScene.createNode("Shape"));
Shape1439->setUSE("HAnimSiteShape");
HAnimSite1437->addChildren(*Shape1439);

HAnimSegment1429->addChildren(*HAnimSite1437);

HAnimJoint1428->addChildren(*HAnimSegment1429);

CHAnimJoint* HAnimJoint1440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1440->setName("r_carpal_interphalangeal_1");
HAnimJoint1440->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1440->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1440->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1440->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1428->addChildren(*HAnimJoint1440);

HAnimJoint1419->addChildren(*HAnimJoint1428);

HAnimJoint1410->addChildren(*HAnimJoint1419);

HAnimJoint1389->addChildren(*HAnimJoint1410);

CHAnimJoint* HAnimJoint1441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1441->setName("r_midcarpal_2");
HAnimJoint1441->setDEF("hanim_r_midcarpal_2");
HAnimJoint1441->setCenter(new float[3]{-0.1811,0.6984,-0.0935});
HAnimJoint1441->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1441->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1442 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1442->setName("r_trapezoid");
HAnimSegment1442->setDEF("hanim_r_trapezoid");
CTransform* Transform1443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1443->setTranslation(new float[3]{-0.1811,0.6984,-0.0935});
CTransform* Transform1444 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1445 = (CShape *)(m_pScene.createNode("Shape"));
Shape1445->setUSE("HAnimJointShape");
Transform1444->addChildren(*Shape1445);

Transform1443->addChildren(*Transform1444);

HAnimSegment1442->addChildren(*Transform1443);

CShape* Shape1446 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1447 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1447->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1448 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1448->setPoint(new float[6]{-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218});
LineSet1447->setCoord(*Coordinate1448);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1449 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1449->setUSE("HAnimSegmentLineColorRGBA");
LineSet1447->setColor(*ColorRGBA1449);

Shape1446->setGeometry(LineSet1447);

HAnimSegment1442->addChildren(*Shape1446);

CHAnimSite* HAnimSite1450 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1450->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1450->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1450->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1451 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1451->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1450->addChildren(*TouchSensor1451);

CShape* Shape1452 = (CShape *)(m_pScene.createNode("Shape"));
Shape1452->setUSE("HAnimSiteShape");
HAnimSite1450->addChildren(*Shape1452);

HAnimSegment1442->addChildren(*HAnimSite1450);

HAnimJoint1441->addChildren(*HAnimSegment1442);

CHAnimJoint* HAnimJoint1453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1453->setName("r_carpometacarpal_2");
HAnimJoint1453->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1453->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1453->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1453->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1454->setName("r_metacarpal_2");
HAnimSegment1454->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1455 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1455->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1456 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1457 = (CShape *)(m_pScene.createNode("Shape"));
Shape1457->setUSE("HAnimJointShape");
Transform1456->addChildren(*Shape1457);

Transform1455->addChildren(*Transform1456);

HAnimSegment1454->addChildren(*Transform1455);

CShape* Shape1458 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1459 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1459->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1460->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1459->setCoord(*Coordinate1460);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1461 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1461->setUSE("HAnimSegmentLineColorRGBA");
LineSet1459->setColor(*ColorRGBA1461);

Shape1458->setGeometry(LineSet1459);

HAnimSegment1454->addChildren(*Shape1458);

HAnimJoint1453->addChildren(*HAnimSegment1454);

CHAnimJoint* HAnimJoint1462 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1462->setName("r_metacarpophalangeal_2");
HAnimJoint1462->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1462->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1462->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1462->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1463 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1463->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1463->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1464 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1464->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1465 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1466 = (CShape *)(m_pScene.createNode("Shape"));
Shape1466->setUSE("HAnimJointShape");
Transform1465->addChildren(*Shape1466);

Transform1464->addChildren(*Transform1465);

HAnimSegment1463->addChildren(*Transform1464);

CShape* Shape1467 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1468 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1468->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1469 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1469->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1468->setCoord(*Coordinate1469);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1470 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1470->setUSE("HAnimSegmentLineColorRGBA");
LineSet1468->setColor(*ColorRGBA1470);

Shape1467->setGeometry(LineSet1468);

HAnimSegment1463->addChildren(*Shape1467);

HAnimJoint1462->addChildren(*HAnimSegment1463);

CHAnimJoint* HAnimJoint1471 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1471->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1471->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1471->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1471->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1471->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1472->setName("r_carpal_middle_phalanx_2");
HAnimSegment1472->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1473 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1473->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1474 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1475 = (CShape *)(m_pScene.createNode("Shape"));
Shape1475->setUSE("HAnimJointShape");
Transform1474->addChildren(*Shape1475);

Transform1473->addChildren(*Transform1474);

HAnimSegment1472->addChildren(*Transform1473);

CShape* Shape1476 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1477 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1477->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1478 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1478->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1477->setCoord(*Coordinate1478);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1479 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1479->setUSE("HAnimSegmentLineColorRGBA");
LineSet1477->setColor(*ColorRGBA1479);

Shape1476->setGeometry(LineSet1477);

HAnimSegment1472->addChildren(*Shape1476);

CHAnimSite* HAnimSite1480 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1480->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1480->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1481 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1481->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1480->addChildren(*TouchSensor1481);

CShape* Shape1482 = (CShape *)(m_pScene.createNode("Shape"));
Shape1482->setUSE("HAnimSiteShape");
HAnimSite1480->addChildren(*Shape1482);

HAnimSegment1472->addChildren(*HAnimSite1480);

CHAnimSite* HAnimSite1483 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1483->setName("r_dactylion_pt");
HAnimSite1483->setDEF("hanim_r_dactylion_pt");
HAnimSite1483->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1484->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1483->addChildren(*TouchSensor1484);

CShape* Shape1485 = (CShape *)(m_pScene.createNode("Shape"));
Shape1485->setUSE("HAnimSiteShape");
HAnimSite1483->addChildren(*Shape1485);

HAnimSegment1472->addChildren(*HAnimSite1483);

HAnimJoint1471->addChildren(*HAnimSegment1472);

CHAnimJoint* HAnimJoint1486 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1486->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1486->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1486->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1486->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1486->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1471->addChildren(*HAnimJoint1486);

HAnimJoint1462->addChildren(*HAnimJoint1471);

HAnimJoint1453->addChildren(*HAnimJoint1462);

HAnimJoint1441->addChildren(*HAnimJoint1453);

HAnimJoint1389->addChildren(*HAnimJoint1441);

CHAnimJoint* HAnimJoint1487 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1487->setName("r_midcarpal_3");
HAnimJoint1487->setDEF("hanim_r_midcarpal_3");
HAnimJoint1487->setCenter(new float[3]{-0.1809,0.7,-0.1067});
HAnimJoint1487->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1487->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1488 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1488->setName("r_capitate");
HAnimSegment1488->setDEF("hanim_r_capitate");
CTransform* Transform1489 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1489->setTranslation(new float[3]{-0.1809,0.7,-0.1067});
CTransform* Transform1490 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1491 = (CShape *)(m_pScene.createNode("Shape"));
Shape1491->setUSE("HAnimJointShape");
Transform1490->addChildren(*Shape1491);

Transform1489->addChildren(*Transform1490);

HAnimSegment1488->addChildren(*Transform1489);

CShape* Shape1492 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1493 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1493->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1494 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1494->setPoint(new float[6]{-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468});
LineSet1493->setCoord(*Coordinate1494);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1495 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1495->setUSE("HAnimSegmentLineColorRGBA");
LineSet1493->setColor(*ColorRGBA1495);

Shape1492->setGeometry(LineSet1493);

HAnimSegment1488->addChildren(*Shape1492);

CHAnimSite* HAnimSite1496 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1496->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1496->setDEF("hanim_r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1497 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1497->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1496->addChildren(*TouchSensor1497);

CShape* Shape1498 = (CShape *)(m_pScene.createNode("Shape"));
Shape1498->setUSE("HAnimSiteShape");
HAnimSite1496->addChildren(*Shape1498);

HAnimSegment1488->addChildren(*HAnimSite1496);

HAnimJoint1487->addChildren(*HAnimSegment1488);

CHAnimJoint* HAnimJoint1499 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1499->setName("r_carpometacarpal_3");
HAnimJoint1499->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1499->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1499->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1499->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1500->setName("r_metacarpal_3");
HAnimSegment1500->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1501 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1501->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1502 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1503 = (CShape *)(m_pScene.createNode("Shape"));
Shape1503->setUSE("HAnimJointShape");
Transform1502->addChildren(*Shape1503);

Transform1501->addChildren(*Transform1502);

HAnimSegment1500->addChildren(*Transform1501);

CShape* Shape1504 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1505 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1505->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1506 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1506->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1505->setCoord(*Coordinate1506);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1507 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1507->setUSE("HAnimSegmentLineColorRGBA");
LineSet1505->setColor(*ColorRGBA1507);

Shape1504->setGeometry(LineSet1505);

HAnimSegment1500->addChildren(*Shape1504);

HAnimJoint1499->addChildren(*HAnimSegment1500);

CHAnimJoint* HAnimJoint1508 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1508->setName("r_metacarpophalangeal_3");
HAnimJoint1508->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1508->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1508->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1508->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1509->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1509->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1510 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1510->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1511 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1512 = (CShape *)(m_pScene.createNode("Shape"));
Shape1512->setUSE("HAnimJointShape");
Transform1511->addChildren(*Shape1512);

Transform1510->addChildren(*Transform1511);

HAnimSegment1509->addChildren(*Transform1510);

CShape* Shape1513 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1514 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1514->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1515 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1515->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1514->setCoord(*Coordinate1515);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1516 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1516->setUSE("HAnimSegmentLineColorRGBA");
LineSet1514->setColor(*ColorRGBA1516);

Shape1513->setGeometry(LineSet1514);

HAnimSegment1509->addChildren(*Shape1513);

HAnimJoint1508->addChildren(*HAnimSegment1509);

CHAnimJoint* HAnimJoint1517 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1517->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1517->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1517->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1517->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1517->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1518 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1518->setName("r_carpal_middle_phalanx_3");
HAnimSegment1518->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1519->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1520 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1521 = (CShape *)(m_pScene.createNode("Shape"));
Shape1521->setUSE("HAnimJointShape");
Transform1520->addChildren(*Shape1521);

Transform1519->addChildren(*Transform1520);

HAnimSegment1518->addChildren(*Transform1519);

CShape* Shape1522 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1523 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1523->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1524 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1524->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1523->setCoord(*Coordinate1524);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1525 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1525->setUSE("HAnimSegmentLineColorRGBA");
LineSet1523->setColor(*ColorRGBA1525);

Shape1522->setGeometry(LineSet1523);

HAnimSegment1518->addChildren(*Shape1522);

CHAnimSite* HAnimSite1526 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1526->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1526->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1527 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1527->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1526->addChildren(*TouchSensor1527);

CShape* Shape1528 = (CShape *)(m_pScene.createNode("Shape"));
Shape1528->setUSE("HAnimSiteShape");
HAnimSite1526->addChildren(*Shape1528);

HAnimSegment1518->addChildren(*HAnimSite1526);

HAnimJoint1517->addChildren(*HAnimSegment1518);

CHAnimJoint* HAnimJoint1529 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1529->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1529->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1529->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1529->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1529->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1517->addChildren(*HAnimJoint1529);

HAnimJoint1508->addChildren(*HAnimJoint1517);

HAnimJoint1499->addChildren(*HAnimJoint1508);

HAnimJoint1487->addChildren(*HAnimJoint1499);

HAnimJoint1389->addChildren(*HAnimJoint1487);

CHAnimJoint* HAnimJoint1530 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1530->setName("r_midcarpal_4_5");
HAnimJoint1530->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1530->setCenter(new float[3]{-0.1809,0.6973,-0.1276});
HAnimJoint1530->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1530->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1531 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1531->setName("r_hamate");
HAnimSegment1531->setDEF("hanim_r_hamate");
CTransform* Transform1532 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1532->setTranslation(new float[3]{-0.1809,0.6973,-0.1276});
CTransform* Transform1533 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1534 = (CShape *)(m_pScene.createNode("Shape"));
Shape1534->setUSE("HAnimJointShape");
Transform1533->addChildren(*Shape1534);

Transform1532->addChildren(*Transform1533);

HAnimSegment1531->addChildren(*Transform1532);

CShape* Shape1535 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1536 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1536->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1537 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1537->setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732});
LineSet1536->setCoord(*Coordinate1537);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1538 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1538->setUSE("HAnimSegmentLineColorRGBA");
LineSet1536->setColor(*ColorRGBA1538);

Shape1535->setGeometry(LineSet1536);

HAnimSegment1531->addChildren(*Shape1535);

CShape* Shape1539 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1540 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1540->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1541->setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975});
LineSet1540->setCoord(*Coordinate1541);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1542 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1542->setUSE("HAnimSegmentLineColorRGBA");
LineSet1540->setColor(*ColorRGBA1542);

Shape1539->setGeometry(LineSet1540);

HAnimSegment1531->addChildren(*Shape1539);

CHAnimSite* HAnimSite1543 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1543->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1543->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1543->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1544 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1544->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1543->addChildren(*TouchSensor1544);

CShape* Shape1545 = (CShape *)(m_pScene.createNode("Shape"));
Shape1545->setUSE("HAnimSiteShape");
HAnimSite1543->addChildren(*Shape1545);

HAnimSegment1531->addChildren(*HAnimSite1543);

HAnimJoint1530->addChildren(*HAnimSegment1531);

CHAnimJoint* HAnimJoint1546 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1546->setName("r_carpometacarpal_4");
HAnimJoint1546->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1546->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1546->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1546->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1547->setName("r_metacarpal_4");
HAnimSegment1547->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1548 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1548->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1549 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1550 = (CShape *)(m_pScene.createNode("Shape"));
Shape1550->setUSE("HAnimJointShape");
Transform1549->addChildren(*Shape1550);

Transform1548->addChildren(*Transform1549);

HAnimSegment1547->addChildren(*Transform1548);

CShape* Shape1551 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1552 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1552->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1553 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1553->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1552->setCoord(*Coordinate1553);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1554 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1554->setUSE("HAnimSegmentLineColorRGBA");
LineSet1552->setColor(*ColorRGBA1554);

Shape1551->setGeometry(LineSet1552);

HAnimSegment1547->addChildren(*Shape1551);

HAnimJoint1546->addChildren(*HAnimSegment1547);

CHAnimJoint* HAnimJoint1555 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1555->setName("r_metacarpophalangeal_4");
HAnimJoint1555->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1555->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1555->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1555->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1556 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1556->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1556->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1557 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1557->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1558 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1559 = (CShape *)(m_pScene.createNode("Shape"));
Shape1559->setUSE("HAnimJointShape");
Transform1558->addChildren(*Shape1559);

Transform1557->addChildren(*Transform1558);

HAnimSegment1556->addChildren(*Transform1557);

CShape* Shape1560 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1561 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1561->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1562 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1562->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1561->setCoord(*Coordinate1562);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1563 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1563->setUSE("HAnimSegmentLineColorRGBA");
LineSet1561->setColor(*ColorRGBA1563);

Shape1560->setGeometry(LineSet1561);

HAnimSegment1556->addChildren(*Shape1560);

HAnimJoint1555->addChildren(*HAnimSegment1556);

CHAnimJoint* HAnimJoint1564 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1564->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1564->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1564->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1564->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1564->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1565 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1565->setName("r_carpal_middle_phalanx_4");
HAnimSegment1565->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1566 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1566->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1567 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1568 = (CShape *)(m_pScene.createNode("Shape"));
Shape1568->setUSE("HAnimJointShape");
Transform1567->addChildren(*Shape1568);

Transform1566->addChildren(*Transform1567);

HAnimSegment1565->addChildren(*Transform1566);

CShape* Shape1569 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1570 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1570->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1571 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1571->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1570->setCoord(*Coordinate1571);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1572 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1572->setUSE("HAnimSegmentLineColorRGBA");
LineSet1570->setColor(*ColorRGBA1572);

Shape1569->setGeometry(LineSet1570);

HAnimSegment1565->addChildren(*Shape1569);

CHAnimSite* HAnimSite1573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1573->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1573->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1574 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1574->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1573->addChildren(*TouchSensor1574);

CShape* Shape1575 = (CShape *)(m_pScene.createNode("Shape"));
Shape1575->setUSE("HAnimSiteShape");
HAnimSite1573->addChildren(*Shape1575);

HAnimSegment1565->addChildren(*HAnimSite1573);

HAnimJoint1564->addChildren(*HAnimSegment1565);

CHAnimJoint* HAnimJoint1576 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1576->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1576->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1576->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1576->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1576->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1564->addChildren(*HAnimJoint1576);

HAnimJoint1555->addChildren(*HAnimJoint1564);

HAnimJoint1546->addChildren(*HAnimJoint1555);

HAnimJoint1530->addChildren(*HAnimJoint1546);

CHAnimJoint* HAnimJoint1577 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1577->setName("r_carpometacarpal_5");
HAnimJoint1577->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1577->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1577->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1577->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1578 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1578->setName("r_metacarpal_5");
HAnimSegment1578->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1579 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1579->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1580 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1581 = (CShape *)(m_pScene.createNode("Shape"));
Shape1581->setUSE("HAnimJointShape");
Transform1580->addChildren(*Shape1581);

Transform1579->addChildren(*Transform1580);

HAnimSegment1578->addChildren(*Transform1579);

CShape* Shape1582 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1583 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1583->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1584 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1584->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1583->setCoord(*Coordinate1584);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1585 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1585->setUSE("HAnimSegmentLineColorRGBA");
LineSet1583->setColor(*ColorRGBA1585);

Shape1582->setGeometry(LineSet1583);

HAnimSegment1578->addChildren(*Shape1582);

HAnimJoint1577->addChildren(*HAnimSegment1578);

CHAnimJoint* HAnimJoint1586 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1586->setName("r_metacarpophalangeal_5");
HAnimJoint1586->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1586->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1586->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1586->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1587 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1587->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1587->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1588 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1588->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1589 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1590 = (CShape *)(m_pScene.createNode("Shape"));
Shape1590->setUSE("HAnimJointShape");
Transform1589->addChildren(*Shape1590);

Transform1588->addChildren(*Transform1589);

HAnimSegment1587->addChildren(*Transform1588);

CShape* Shape1591 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1592 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1592->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1593 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1593->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1592->setCoord(*Coordinate1593);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1594 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1594->setUSE("HAnimSegmentLineColorRGBA");
LineSet1592->setColor(*ColorRGBA1594);

Shape1591->setGeometry(LineSet1592);

HAnimSegment1587->addChildren(*Shape1591);

HAnimJoint1586->addChildren(*HAnimSegment1587);

CHAnimJoint* HAnimJoint1595 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1595->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1595->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1595->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1595->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1595->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1596 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1596->setName("r_carpal_middle_phalanx_5");
HAnimSegment1596->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1597 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1597->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1598 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1599 = (CShape *)(m_pScene.createNode("Shape"));
Shape1599->setUSE("HAnimJointShape");
Transform1598->addChildren(*Shape1599);

Transform1597->addChildren(*Transform1598);

HAnimSegment1596->addChildren(*Transform1597);

CShape* Shape1600 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1601 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1601->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1602 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1602->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1601->setCoord(*Coordinate1602);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1603 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1603->setUSE("HAnimSegmentLineColorRGBA");
LineSet1601->setColor(*ColorRGBA1603);

Shape1600->setGeometry(LineSet1601);

HAnimSegment1596->addChildren(*Shape1600);

CHAnimSite* HAnimSite1604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1604->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1604->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1605 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1605->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1604->addChildren(*TouchSensor1605);

CShape* Shape1606 = (CShape *)(m_pScene.createNode("Shape"));
Shape1606->setUSE("HAnimSiteShape");
HAnimSite1604->addChildren(*Shape1606);

HAnimSegment1596->addChildren(*HAnimSite1604);

HAnimJoint1595->addChildren(*HAnimSegment1596);

CHAnimJoint* HAnimJoint1607 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1607->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1607->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1607->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1607->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1607->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1595->addChildren(*HAnimJoint1607);

HAnimJoint1586->addChildren(*HAnimJoint1595);

HAnimJoint1577->addChildren(*HAnimJoint1586);

HAnimJoint1530->addChildren(*HAnimJoint1577);

HAnimJoint1389->addChildren(*HAnimJoint1530);

HAnimJoint1377->addChildren(*HAnimJoint1389);

HAnimJoint1356->addChildren(*HAnimJoint1377);

HAnimJoint1341->addChildren(*HAnimJoint1356);

HAnimJoint1332->addChildren(*HAnimJoint1341);

HAnimJoint852->addChildren(*HAnimJoint1332);

HAnimJoint837->addChildren(*HAnimJoint852);

HAnimJoint828->addChildren(*HAnimJoint837);

HAnimJoint819->addChildren(*HAnimJoint828);

HAnimJoint810->addChildren(*HAnimJoint819);

HAnimJoint798->addChildren(*HAnimJoint810);

HAnimJoint777->addChildren(*HAnimJoint798);

HAnimJoint768->addChildren(*HAnimJoint777);

HAnimJoint759->addChildren(*HAnimJoint768);

HAnimJoint744->addChildren(*HAnimJoint759);

HAnimJoint732->addChildren(*HAnimJoint744);

HAnimJoint723->addChildren(*HAnimJoint732);

HAnimJoint714->addChildren(*HAnimJoint723);

HAnimJoint705->addChildren(*HAnimJoint714);

HAnimJoint687->addChildren(*HAnimJoint705);

HAnimJoint678->addChildren(*HAnimJoint687);

HAnimJoint669->addChildren(*HAnimJoint678);

HAnimJoint52->addChildren(*HAnimJoint669);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint1608 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1608->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1608);

CHAnimJoint* HAnimJoint1609 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1609->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1609);

CHAnimJoint* HAnimJoint1610 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1610->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1610);

CHAnimJoint* HAnimJoint1611 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1611->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1611);

CHAnimJoint* HAnimJoint1612 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1612->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1612);

CHAnimJoint* HAnimJoint1613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1613->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1613);

CHAnimJoint* HAnimJoint1614 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1614->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1614);

CHAnimJoint* HAnimJoint1615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1615->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1615);

CHAnimJoint* HAnimJoint1616 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1616->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1616);

CHAnimJoint* HAnimJoint1617 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1617->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1617);

CHAnimJoint* HAnimJoint1618 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1618->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1618);

CHAnimJoint* HAnimJoint1619 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1619->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1619);

CHAnimJoint* HAnimJoint1620 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1620->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1620);

CHAnimJoint* HAnimJoint1621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1621->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1621);

CHAnimJoint* HAnimJoint1622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1622->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1622);

CHAnimJoint* HAnimJoint1623 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1623->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1623);

CHAnimJoint* HAnimJoint1624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1624->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1624);

CHAnimJoint* HAnimJoint1625 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1625->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1625);

CHAnimJoint* HAnimJoint1626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1626->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1626);

CHAnimJoint* HAnimJoint1627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1627->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1627);

CHAnimJoint* HAnimJoint1628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1628->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1628);

CHAnimJoint* HAnimJoint1629 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1629->setUSE("hanim_l_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1629);

CHAnimJoint* HAnimJoint1630 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1630->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1630);

CHAnimJoint* HAnimJoint1631 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1631->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1631);

CHAnimJoint* HAnimJoint1632 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1632->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1632);

CHAnimJoint* HAnimJoint1633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1633->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1633);

CHAnimJoint* HAnimJoint1634 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1634->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1634);

CHAnimJoint* HAnimJoint1635 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1635->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1635);

CHAnimJoint* HAnimJoint1636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1636->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1636);

CHAnimJoint* HAnimJoint1637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1637->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1637);

CHAnimJoint* HAnimJoint1638 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1638->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1638);

CHAnimJoint* HAnimJoint1639 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1639->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1639);

CHAnimJoint* HAnimJoint1640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1640->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1640);

CHAnimJoint* HAnimJoint1641 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1641->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1641);

CHAnimJoint* HAnimJoint1642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1642->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1642);

CHAnimJoint* HAnimJoint1643 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1643->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1643);

CHAnimJoint* HAnimJoint1644 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1644->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1644);

CHAnimJoint* HAnimJoint1645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1645->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1645);

CHAnimJoint* HAnimJoint1646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1646->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1646);

CHAnimJoint* HAnimJoint1647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1647->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1647);

CHAnimJoint* HAnimJoint1648 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1648->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1648);

CHAnimJoint* HAnimJoint1649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1649->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1649);

CHAnimJoint* HAnimJoint1650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1650->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1650);

CHAnimJoint* HAnimJoint1651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1651->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1651);

CHAnimJoint* HAnimJoint1652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1652->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1652);

CHAnimJoint* HAnimJoint1653 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1653->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1653);

CHAnimJoint* HAnimJoint1654 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1654->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1654);

CHAnimJoint* HAnimJoint1655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1655->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1655);

CHAnimJoint* HAnimJoint1656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1656->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1656);

CHAnimJoint* HAnimJoint1657 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1657->setUSE("hanim_r_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1657);

CHAnimJoint* HAnimJoint1658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1658->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1658);

CHAnimJoint* HAnimJoint1659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1659->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1659);

CHAnimJoint* HAnimJoint1660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1660->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1660);

CHAnimJoint* HAnimJoint1661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1661->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1661);

CHAnimJoint* HAnimJoint1662 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1662->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1662);

CHAnimJoint* HAnimJoint1663 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1663->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1663);

CHAnimJoint* HAnimJoint1664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1664->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1664);

CHAnimJoint* HAnimJoint1665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1665->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1665);

CHAnimJoint* HAnimJoint1666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1666->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1666);

CHAnimJoint* HAnimJoint1667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1667->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1667);

CHAnimJoint* HAnimJoint1668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1668->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1668);

CHAnimJoint* HAnimJoint1669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1669->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1669);

CHAnimJoint* HAnimJoint1670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1670->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1670);

CHAnimJoint* HAnimJoint1671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1671->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1671);

CHAnimJoint* HAnimJoint1672 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1672->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1672);

CHAnimJoint* HAnimJoint1673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1673->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1673);

CHAnimJoint* HAnimJoint1674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1674->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1674);

CHAnimJoint* HAnimJoint1675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1675->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1675);

CHAnimJoint* HAnimJoint1676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1676->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1676);

CHAnimJoint* HAnimJoint1677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1677->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1677);

CHAnimJoint* HAnimJoint1678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1678->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1678);

CHAnimJoint* HAnimJoint1679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1679->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1679);

CHAnimJoint* HAnimJoint1680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1680->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1680);

CHAnimJoint* HAnimJoint1681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1681->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1681);

CHAnimJoint* HAnimJoint1682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1682->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1682);

CHAnimJoint* HAnimJoint1683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1683->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1683);

CHAnimJoint* HAnimJoint1684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1684->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1684);

CHAnimJoint* HAnimJoint1685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1685->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1685);

CHAnimJoint* HAnimJoint1686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1686->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1686);

CHAnimJoint* HAnimJoint1687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1687->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1687);

CHAnimJoint* HAnimJoint1688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1688->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1688);

CHAnimJoint* HAnimJoint1689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1689->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1689);

CHAnimJoint* HAnimJoint1690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1690->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1690);

CHAnimJoint* HAnimJoint1691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1691->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1691);

CHAnimJoint* HAnimJoint1692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1692->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1692);

CHAnimJoint* HAnimJoint1693 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1693->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1693);

CHAnimJoint* HAnimJoint1694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1694->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1694);

CHAnimJoint* HAnimJoint1695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1695->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1695);

CHAnimJoint* HAnimJoint1696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1696->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1696);

CHAnimJoint* HAnimJoint1697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1697->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1697);

CHAnimJoint* HAnimJoint1698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1698->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1698);

CHAnimJoint* HAnimJoint1699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1699->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1699);

CHAnimJoint* HAnimJoint1700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1700->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1747->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1748->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1749->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1750->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1751->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1752->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1753->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1753);

CHAnimSegment* HAnimSegment1754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1754->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1754);

CHAnimSegment* HAnimSegment1755 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1755->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1755);

CHAnimSegment* HAnimSegment1756 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1756->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_l_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_l_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_l_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_r_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_r_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_r_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_l_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_l_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_l_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_l_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1852->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1853->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1854->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1855->setUSE("hanim_r_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1856->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1857->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1858->setUSE("hanim_r_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1859->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1860->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1861->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1862->setUSE("hanim_r_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1863->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1864->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1864);

CHAnimSegment* HAnimSegment1865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1865->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1865);

CHAnimSegment* HAnimSegment1866 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1866->setUSE("hanim_r_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1866);

CHAnimSegment* HAnimSegment1867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1867->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1867);

CHAnimSegment* HAnimSegment1868 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1868->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1868);

CHAnimSegment* HAnimSegment1869 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1869->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1869);

CHAnimSegment* HAnimSegment1870 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1870->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1870);

CHAnimSegment* HAnimSegment1871 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1871->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1871);

CHAnimSegment* HAnimSegment1872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1872->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1872);

CHAnimSite* HAnimSite1873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1873->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(*HAnimSite1873);

CHAnimSite* HAnimSite1874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1874->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1874);

CHAnimSite* HAnimSite1875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1875->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1875);

CHAnimSite* HAnimSite1876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1876->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1876);

CHAnimSite* HAnimSite1877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1877->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1877);

CHAnimSite* HAnimSite1878 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1878->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1878);

CHAnimSite* HAnimSite1879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1879->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1879);

CHAnimSite* HAnimSite1880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1880->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1880);

CHAnimSite* HAnimSite1881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1881->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1881);

CHAnimSite* HAnimSite1882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1882->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1882);

CHAnimSite* HAnimSite1883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1883->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1883);

CHAnimSite* HAnimSite1884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1884->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1884);

CHAnimSite* HAnimSite1885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1885->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1885);

CHAnimSite* HAnimSite1886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1886->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1886);

CHAnimSite* HAnimSite1887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1887->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1887);

CHAnimSite* HAnimSite1888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1888->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1943->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(*HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1944->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1945->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1946->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1947->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1948->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1949->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1950->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1951->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1952->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1953->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1954->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1955->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1956->setUSE("hanim_menton_pt");
HAnimHumanoid43->setSites(*HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1957->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1958->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1959->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1960->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1961->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1962->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1963->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1964->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1965->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1966->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1967->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1968->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1969->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1970->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1971->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1972->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1973->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1974->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1975->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1976->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1977->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1978->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1979->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1979);

CHAnimSite* HAnimSite1980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1980->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1980);

CHAnimSite* HAnimSite1981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1981->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1981);

CHAnimSite* HAnimSite1982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1982->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1982);

CHAnimSite* HAnimSite1983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1983->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1983);

CHAnimSite* HAnimSite1984 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1984->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1984);

CHAnimSite* HAnimSite1985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1985->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1985);

CHAnimSite* HAnimSite1986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1986->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1986);

CHAnimSite* HAnimSite1987 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1987->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1987);

CHAnimSite* HAnimSite1988 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1988->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1988);

CHAnimSite* HAnimSite1989 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1989->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1989);

CHAnimSite* HAnimSite1990 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1990->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1990);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
