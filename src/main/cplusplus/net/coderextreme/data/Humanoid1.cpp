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
Coordinate181->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004});
LineSet180->setCoord(*Coordinate181);

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA182 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA182->setUSE("HAnimSegmentLineColorRGBA");
LineSet180->setColor(*ColorRGBA182);

Shape179->setGeometry(LineSet180);

HAnimSegment175->addChildren(*Shape179);

HAnimJoint174->addChildren(*HAnimSegment175);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setName("l_metatarsophalangeal_2");
HAnimJoint183->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint183->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint174->addChildren(*HAnimJoint183);

HAnimJoint159->addChildren(*HAnimJoint174);

HAnimJoint141->addChildren(*HAnimJoint159);

HAnimJoint104->addChildren(*HAnimJoint141);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setName("r_hip");
HAnimJoint184->setDEF("hanim_r_hip");
HAnimJoint184->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint184->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint184->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment185 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment185->setName("r_thigh");
HAnimSegment185->setDEF("hanim_r_thigh");
CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
Transform186->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform187 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
Shape188->setUSE("HAnimJointShape");
Transform187->addChildren(*Shape188);

Transform186->addChildren(*Transform187);

HAnimSegment185->addChildren(*Transform186);

CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet190 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet190->setVertexCount(new int[1]{2});
CCoordinate* Coordinate191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate191->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet190->setCoord(*Coordinate191);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA192 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA192->setUSE("HAnimSegmentLineColorRGBA");
LineSet190->setColor(*ColorRGBA192);

Shape189->setGeometry(LineSet190);

HAnimSegment185->addChildren(*Shape189);

CHAnimSite* HAnimSite193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite193->setName("r_lateral_malleolus_pt");
HAnimSite193->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite193->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor194 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor194->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite193->addChildren(*TouchSensor194);

CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
Shape195->setUSE("HAnimSiteShape");
HAnimSite193->addChildren(*Shape195);

HAnimSegment185->addChildren(*HAnimSite193);

CHAnimSite* HAnimSite196 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite196->setName("r_medial_malleolus_pt");
HAnimSite196->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite196->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor197 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor197->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite196->addChildren(*TouchSensor197);

CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
Shape198->setUSE("HAnimSiteShape");
HAnimSite196->addChildren(*Shape198);

HAnimSegment185->addChildren(*HAnimSite196);

CHAnimSite* HAnimSite199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite199->setName("r_tibiale_pt");
HAnimSite199->setDEF("hanim_r_tibiale_pt");
CTouchSensor* TouchSensor200 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor200->setDescription("HAnimSite r_tibiale_pt");
HAnimSite199->addChildren(*TouchSensor200);

CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("HAnimSiteShape");
HAnimSite199->addChildren(*Shape201);

HAnimSegment185->addChildren(*HAnimSite199);

HAnimJoint184->addChildren(*HAnimSegment185);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setName("r_knee");
HAnimJoint202->setDEF("hanim_r_knee");
HAnimJoint202->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint202->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint202->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment203->setName("r_calf");
HAnimSegment203->setDEF("hanim_r_calf");
CTransform* Transform204 = (CTransform *)(m_pScene.createNode("Transform"));
Transform204->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform205 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
Shape206->setUSE("HAnimJointShape");
Transform205->addChildren(*Shape206);

Transform204->addChildren(*Transform205);

HAnimSegment203->addChildren(*Transform204);

CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet208 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet208->setVertexCount(new int[1]{2});
CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet208->setCoord(*Coordinate209);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA210 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA210->setUSE("HAnimSegmentLineColorRGBA");
LineSet208->setColor(*ColorRGBA210);

Shape207->setGeometry(LineSet208);

HAnimSegment203->addChildren(*Shape207);

CHAnimSite* HAnimSite211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite211->setName("r_calcaneus_posterior_pt");
HAnimSite211->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite211->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor212 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor212->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite211->addChildren(*TouchSensor212);

CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
Shape213->setUSE("HAnimSiteShape");
HAnimSite211->addChildren(*Shape213);

HAnimSegment203->addChildren(*HAnimSite211);

CHAnimSite* HAnimSite214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite214->setName("r_sphyrion_pt");
HAnimSite214->setDEF("hanim_r_sphyrion_pt");
HAnimSite214->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor215 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor215->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite214->addChildren(*TouchSensor215);

CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("HAnimSiteShape");
HAnimSite214->addChildren(*Shape216);

HAnimSegment203->addChildren(*HAnimSite214);

HAnimJoint202->addChildren(*HAnimSegment203);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setName("r_talocrural");
HAnimJoint217->setDEF("hanim_r_talocrural");
HAnimJoint217->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint217->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint217->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment218 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment218->setName("r_talus");
HAnimSegment218->setDEF("hanim_r_talus");
CTransform* Transform219 = (CTransform *)(m_pScene.createNode("Transform"));
Transform219->setScale(new float[3]{0.15,0.15,0.15});
Transform219->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform219->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
Shape221->setUSE("HAnimJointShape");
Transform220->addChildren(*Shape221);

Transform219->addChildren(*Transform220);

HAnimSegment218->addChildren(*Transform219);

CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet223 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet223->setVertexCount(new int[1]{2});
CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004});
LineSet223->setCoord(*Coordinate224);

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA225 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA225->setUSE("HAnimSegmentLineColorRGBA");
LineSet223->setColor(*ColorRGBA225);

Shape222->setGeometry(LineSet223);

HAnimSegment218->addChildren(*Shape222);

HAnimJoint217->addChildren(*HAnimSegment218);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setName("r_metatarsophalangeal_2");
HAnimJoint226->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint226->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint226->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint226->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint217->addChildren(*HAnimJoint226);

HAnimJoint202->addChildren(*HAnimJoint217);

HAnimJoint184->addChildren(*HAnimJoint202);

HAnimJoint104->addChildren(*HAnimJoint184);

HAnimJoint52->addChildren(*HAnimJoint104);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("vl5");
HAnimJoint227->setDEF("hanim_vl5");
HAnimJoint227->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint227->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment228->setName("l5");
HAnimSegment228->setDEF("hanim_l5");
CTransform* Transform229 = (CTransform *)(m_pScene.createNode("Transform"));
Transform229->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform230 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
Shape231->setUSE("HAnimJointShape");
Transform230->addChildren(*Shape231);

Transform229->addChildren(*Transform230);

HAnimSegment228->addChildren(*Transform229);

CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet233 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet233->setVertexCount(new int[1]{2});
CCoordinate* Coordinate234 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate234->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236});
LineSet233->setCoord(*Coordinate234);

//from vl5 to skullbase vertices 2
CColorRGBA* ColorRGBA235 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA235->setUSE("HAnimSegmentLineColorRGBA");
LineSet233->setColor(*ColorRGBA235);

Shape232->setGeometry(LineSet233);

HAnimSegment228->addChildren(*Shape232);

CHAnimSite* HAnimSite236 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite236->setName("glabella_pt");
HAnimSite236->setDEF("hanim_glabella_pt");
CTouchSensor* TouchSensor237 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor237->setDescription("HAnimSite glabella_pt");
HAnimSite236->addChildren(*TouchSensor237);

CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
Shape238->setUSE("HAnimSiteShape");
HAnimSite236->addChildren(*Shape238);

HAnimSegment228->addChildren(*HAnimSite236);

CHAnimSite* HAnimSite239 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite239->setName("l_ectocanthus_pt");
HAnimSite239->setDEF("hanim_l_ectocanthus_pt");
CTouchSensor* TouchSensor240 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor240->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite239->addChildren(*TouchSensor240);

CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("HAnimSiteShape");
HAnimSite239->addChildren(*Shape241);

HAnimSegment228->addChildren(*HAnimSite239);

CHAnimSite* HAnimSite242 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite242->setName("l_infraorbitale_pt");
HAnimSite242->setDEF("hanim_l_infraorbitale_pt");
HAnimSite242->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor243 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor243->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite242->addChildren(*TouchSensor243);

CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
Shape244->setUSE("HAnimSiteShape");
HAnimSite242->addChildren(*Shape244);

HAnimSegment228->addChildren(*HAnimSite242);

CHAnimSite* HAnimSite245 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite245->setName("l_tragion_pt");
HAnimSite245->setDEF("hanim_l_tragion_pt");
HAnimSite245->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor246 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor246->setDescription("HAnimSite l_tragion_pt");
HAnimSite245->addChildren(*TouchSensor246);

CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
Shape247->setUSE("HAnimSiteShape");
HAnimSite245->addChildren(*Shape247);

HAnimSegment228->addChildren(*HAnimSite245);

CHAnimSite* HAnimSite248 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite248->setName("nuchale_pt");
HAnimSite248->setDEF("hanim_nuchale_pt");
HAnimSite248->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor249 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor249->setDescription("HAnimSite nuchale_pt");
HAnimSite248->addChildren(*TouchSensor249);

CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
Shape250->setUSE("HAnimSiteShape");
HAnimSite248->addChildren(*Shape250);

HAnimSegment228->addChildren(*HAnimSite248);

CHAnimSite* HAnimSite251 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite251->setName("opisthocranion_pt");
HAnimSite251->setDEF("hanim_opisthocranion_pt");
CTouchSensor* TouchSensor252 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor252->setDescription("HAnimSite opisthocranion_pt");
HAnimSite251->addChildren(*TouchSensor252);

CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("HAnimSiteShape");
HAnimSite251->addChildren(*Shape253);

HAnimSegment228->addChildren(*HAnimSite251);

CHAnimSite* HAnimSite254 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite254->setName("r_ectocanthus_pt");
HAnimSite254->setDEF("hanim_r_ectocanthus_pt");
CTouchSensor* TouchSensor255 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor255->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite254->addChildren(*TouchSensor255);

CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
Shape256->setUSE("HAnimSiteShape");
HAnimSite254->addChildren(*Shape256);

HAnimSegment228->addChildren(*HAnimSite254);

CHAnimSite* HAnimSite257 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite257->setName("r_infraorbitale_pt");
HAnimSite257->setDEF("hanim_r_infraorbitale_pt");
HAnimSite257->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor258 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor258->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite257->addChildren(*TouchSensor258);

CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
Shape259->setUSE("HAnimSiteShape");
HAnimSite257->addChildren(*Shape259);

HAnimSegment228->addChildren(*HAnimSite257);

CHAnimSite* HAnimSite260 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite260->setName("r_tragion_pt");
HAnimSite260->setDEF("hanim_r_tragion_pt");
HAnimSite260->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor261 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor261->setDescription("HAnimSite r_tragion_pt");
HAnimSite260->addChildren(*TouchSensor261);

CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
Shape262->setUSE("HAnimSiteShape");
HAnimSite260->addChildren(*Shape262);

HAnimSegment228->addChildren(*HAnimSite260);

CHAnimSite* HAnimSite263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite263->setName("sellion_pt");
HAnimSite263->setDEF("hanim_sellion_pt");
HAnimSite263->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor264 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor264->setDescription("HAnimSite sellion_pt");
HAnimSite263->addChildren(*TouchSensor264);

CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
Shape265->setUSE("HAnimSiteShape");
HAnimSite263->addChildren(*Shape265);

HAnimSegment228->addChildren(*HAnimSite263);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("skull_vertex_pt");
HAnimSite266->setDEF("hanim_skull_vertex_pt");
HAnimSite266->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor267->setDescription("HAnimSite skull_vertex_pt");
HAnimSite266->addChildren(*TouchSensor267);

CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
Shape268->setUSE("HAnimSiteShape");
HAnimSite266->addChildren(*Shape268);

HAnimSegment228->addChildren(*HAnimSite266);

CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet270 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet270->setVertexCount(new int[1]{2});
CCoordinate* Coordinate271 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate271->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387});
LineSet270->setCoord(*Coordinate271);

//from vl5 to l_shoulder vertices 2
CColorRGBA* ColorRGBA272 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA272->setUSE("HAnimSegmentLineColorRGBA");
LineSet270->setColor(*ColorRGBA272);

Shape269->setGeometry(LineSet270);

HAnimSegment228->addChildren(*Shape269);

CHAnimSite* HAnimSite273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite273->setName("l_bideltoid_pt");
HAnimSite273->setDEF("hanim_l_bideltoid_pt");
CTouchSensor* TouchSensor274 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor274->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite273->addChildren(*TouchSensor274);

CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
Shape275->setUSE("HAnimSiteShape");
HAnimSite273->addChildren(*Shape275);

HAnimSegment228->addChildren(*HAnimSite273);

CHAnimSite* HAnimSite276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite276->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite276->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite276->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor277 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor277->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite276->addChildren(*TouchSensor277);

CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("HAnimSiteShape");
HAnimSite276->addChildren(*Shape278);

HAnimSegment228->addChildren(*HAnimSite276);

CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet280 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet280->setVertexCount(new int[1]{2});
CCoordinate* Coordinate281 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate281->setPoint(new float[6]{0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325});
LineSet280->setCoord(*Coordinate281);

//from vl5 to r_shoulder vertices 2
CColorRGBA* ColorRGBA282 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA282->setUSE("HAnimSegmentLineColorRGBA");
LineSet280->setColor(*ColorRGBA282);

Shape279->setGeometry(LineSet280);

HAnimSegment228->addChildren(*Shape279);

CHAnimSite* HAnimSite283 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite283->setName("r_bideltoid_pt");
HAnimSite283->setDEF("hanim_r_bideltoid_pt");
CTouchSensor* TouchSensor284 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor284->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite283->addChildren(*TouchSensor284);

CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
Shape285->setUSE("HAnimSiteShape");
HAnimSite283->addChildren(*Shape285);

HAnimSegment228->addChildren(*HAnimSite283);

CHAnimSite* HAnimSite286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite286->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite286->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite286->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor287 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor287->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite286->addChildren(*TouchSensor287);

CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
Shape288->setUSE("HAnimSiteShape");
HAnimSite286->addChildren(*Shape288);

HAnimSegment228->addChildren(*HAnimSite286);

HAnimJoint227->addChildren(*HAnimSegment228);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setName("skullbase");
HAnimJoint289->setDEF("hanim_skullbase");
HAnimJoint289->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint289->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint289->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->addChildren(*HAnimJoint289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setName("l_shoulder");
HAnimJoint290->setDEF("hanim_l_shoulder");
HAnimJoint290->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint290->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint290->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setName("l_upperarm");
HAnimSegment291->setDEF("hanim_l_upperarm");
CTransform* Transform292 = (CTransform *)(m_pScene.createNode("Transform"));
Transform292->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform293 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("HAnimJointShape");
Transform293->addChildren(*Shape294);

Transform292->addChildren(*Transform293);

HAnimSegment291->addChildren(*Transform292);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet296 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet296->setVertexCount(new int[1]{2});
CCoordinate* Coordinate297 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate297->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet296->setCoord(*Coordinate297);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA298 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA298->setUSE("HAnimSegmentLineColorRGBA");
LineSet296->setColor(*ColorRGBA298);

Shape295->setGeometry(LineSet296);

HAnimSegment291->addChildren(*Shape295);

CHAnimSite* HAnimSite299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite299->setName("l_humeral_medial_epicondyles_pt");
HAnimSite299->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite299->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite299->addChildren(*TouchSensor300);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
Shape301->setUSE("HAnimSiteShape");
HAnimSite299->addChildren(*Shape301);

HAnimSegment291->addChildren(*HAnimSite299);

CHAnimSite* HAnimSite302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite302->setName("l_olecranon_pt");
HAnimSite302->setDEF("hanim_l_olecranon_pt");
HAnimSite302->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor303 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor303->setDescription("HAnimSite l_olecranon_pt");
HAnimSite302->addChildren(*TouchSensor303);

CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("HAnimSiteShape");
HAnimSite302->addChildren(*Shape304);

HAnimSegment291->addChildren(*HAnimSite302);

CHAnimSite* HAnimSite305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite305->setName("l_radial_styloid_pt");
HAnimSite305->setDEF("hanim_l_radial_styloid_pt");
HAnimSite305->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor306 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor306->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite305->addChildren(*TouchSensor306);

CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
Shape307->setUSE("HAnimSiteShape");
HAnimSite305->addChildren(*Shape307);

HAnimSegment291->addChildren(*HAnimSite305);

CHAnimSite* HAnimSite308 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite308->setName("l_radiale_pt");
HAnimSite308->setDEF("hanim_l_radiale_pt");
HAnimSite308->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor309 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor309->setDescription("HAnimSite l_radiale_pt");
HAnimSite308->addChildren(*TouchSensor309);

CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
Shape310->setUSE("HAnimSiteShape");
HAnimSite308->addChildren(*Shape310);

HAnimSegment291->addChildren(*HAnimSite308);

HAnimJoint290->addChildren(*HAnimSegment291);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setName("l_elbow");
HAnimJoint311->setDEF("hanim_l_elbow");
HAnimJoint311->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint311->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint311->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setName("l_forearm");
HAnimSegment312->setDEF("hanim_l_forearm");
CTransform* Transform313 = (CTransform *)(m_pScene.createNode("Transform"));
Transform313->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform314 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
Shape315->setUSE("HAnimJointShape");
Transform314->addChildren(*Shape315);

Transform313->addChildren(*Transform314);

HAnimSegment312->addChildren(*Transform313);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet317 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet317->setVertexCount(new int[1]{2});
CCoordinate* Coordinate318 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate318->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet317->setCoord(*Coordinate318);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA319 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA319->setUSE("HAnimSegmentLineColorRGBA");
LineSet317->setColor(*ColorRGBA319);

Shape316->setGeometry(LineSet317);

HAnimSegment312->addChildren(*Shape316);

CHAnimSite* HAnimSite320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite320->setName("l_ulnar_styloid_pt");
HAnimSite320->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite320->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor321 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor321->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite320->addChildren(*TouchSensor321);

CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
Shape322->setUSE("HAnimSiteShape");
HAnimSite320->addChildren(*Shape322);

HAnimSegment312->addChildren(*HAnimSite320);

HAnimJoint311->addChildren(*HAnimSegment312);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setName("l_radiocarpal");
HAnimJoint323->setDEF("hanim_l_radiocarpal");
HAnimJoint323->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint323->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint323->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint311->addChildren(*HAnimJoint323);

HAnimJoint290->addChildren(*HAnimJoint311);

HAnimJoint227->addChildren(*HAnimJoint290);

CHAnimJoint* HAnimJoint324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint324->setName("r_shoulder");
HAnimJoint324->setDEF("hanim_r_shoulder");
HAnimJoint324->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint324->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint324->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment325->setName("r_upperarm");
HAnimSegment325->setDEF("hanim_r_upperarm");
CTransform* Transform326 = (CTransform *)(m_pScene.createNode("Transform"));
Transform326->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
Shape328->setUSE("HAnimJointShape");
Transform327->addChildren(*Shape328);

Transform326->addChildren(*Transform327);

HAnimSegment325->addChildren(*Transform326);

CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet330 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet330->setVertexCount(new int[1]{2});
CCoordinate* Coordinate331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate331->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet330->setCoord(*Coordinate331);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA332 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA332->setUSE("HAnimSegmentLineColorRGBA");
LineSet330->setColor(*ColorRGBA332);

Shape329->setGeometry(LineSet330);

HAnimSegment325->addChildren(*Shape329);

CHAnimSite* HAnimSite333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite333->setName("r_humeral_medial_epicondyles_pt");
HAnimSite333->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite333->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor334 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor334->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite333->addChildren(*TouchSensor334);

CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
Shape335->setUSE("HAnimSiteShape");
HAnimSite333->addChildren(*Shape335);

HAnimSegment325->addChildren(*HAnimSite333);

CHAnimSite* HAnimSite336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite336->setName("r_olecranon_pt");
HAnimSite336->setDEF("hanim_r_olecranon_pt");
HAnimSite336->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor337 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor337->setDescription("HAnimSite r_olecranon_pt");
HAnimSite336->addChildren(*TouchSensor337);

CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
Shape338->setUSE("HAnimSiteShape");
HAnimSite336->addChildren(*Shape338);

HAnimSegment325->addChildren(*HAnimSite336);

CHAnimSite* HAnimSite339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite339->setName("r_radial_styloid_pt");
HAnimSite339->setDEF("hanim_r_radial_styloid_pt");
HAnimSite339->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor340 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor340->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite339->addChildren(*TouchSensor340);

CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("HAnimSiteShape");
HAnimSite339->addChildren(*Shape341);

HAnimSegment325->addChildren(*HAnimSite339);

CHAnimSite* HAnimSite342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite342->setName("r_radiale_pt");
HAnimSite342->setDEF("hanim_r_radiale_pt");
HAnimSite342->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor343 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor343->setDescription("HAnimSite r_radiale_pt");
HAnimSite342->addChildren(*TouchSensor343);

CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimSiteShape");
HAnimSite342->addChildren(*Shape344);

HAnimSegment325->addChildren(*HAnimSite342);

HAnimJoint324->addChildren(*HAnimSegment325);

CHAnimJoint* HAnimJoint345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint345->setName("r_elbow");
HAnimJoint345->setDEF("hanim_r_elbow");
HAnimJoint345->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint345->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint345->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment346 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment346->setName("r_forearm");
HAnimSegment346->setDEF("hanim_r_forearm");
CTransform* Transform347 = (CTransform *)(m_pScene.createNode("Transform"));
Transform347->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform348 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
Shape349->setUSE("HAnimJointShape");
Transform348->addChildren(*Shape349);

Transform347->addChildren(*Transform348);

HAnimSegment346->addChildren(*Transform347);

CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet351 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet351->setVertexCount(new int[1]{2});
CCoordinate* Coordinate352 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate352->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet351->setCoord(*Coordinate352);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA353 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA353->setUSE("HAnimSegmentLineColorRGBA");
LineSet351->setColor(*ColorRGBA353);

Shape350->setGeometry(LineSet351);

HAnimSegment346->addChildren(*Shape350);

CHAnimSite* HAnimSite354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite354->setName("r_ulnar_styloid_pt");
HAnimSite354->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite354->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor355 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor355->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite354->addChildren(*TouchSensor355);

CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
Shape356->setUSE("HAnimSiteShape");
HAnimSite354->addChildren(*Shape356);

HAnimSegment346->addChildren(*HAnimSite354);

HAnimJoint345->addChildren(*HAnimSegment346);

CHAnimJoint* HAnimJoint357 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint357->setName("r_radiocarpal");
HAnimJoint357->setDEF("hanim_r_radiocarpal");
HAnimJoint357->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint357->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint357->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint345->addChildren(*HAnimJoint357);

HAnimJoint324->addChildren(*HAnimJoint345);

HAnimJoint227->addChildren(*HAnimJoint324);

HAnimJoint52->addChildren(*HAnimJoint227);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint358 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint358->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint358);

CHAnimJoint* HAnimJoint359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint359->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint359);

CHAnimJoint* HAnimJoint360 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint360->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint360);

CHAnimJoint* HAnimJoint361 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint361->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint361);

CHAnimJoint* HAnimJoint362 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint362->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint362);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint363);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint364);

CHAnimJoint* HAnimJoint365 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint365->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint365);

CHAnimJoint* HAnimJoint366 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint366->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint366);

CHAnimJoint* HAnimJoint367 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint367->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint367);

CHAnimJoint* HAnimJoint368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint368->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint368);

CHAnimJoint* HAnimJoint369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint369->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint369);

CHAnimJoint* HAnimJoint370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint370->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint370);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint371);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint372);

CHAnimJoint* HAnimJoint373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint373->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint373);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint374);

CHAnimJoint* HAnimJoint375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint375->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint375);

CHAnimSegment* HAnimSegment376 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment376->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment376);

CHAnimSegment* HAnimSegment377 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment377->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment377);

CHAnimSegment* HAnimSegment378 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment378->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment378);

CHAnimSegment* HAnimSegment379 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment379->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment379);

CHAnimSegment* HAnimSegment380 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment380->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment380);

CHAnimSegment* HAnimSegment381 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment381->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment381);

CHAnimSegment* HAnimSegment382 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment382->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment382);

CHAnimSegment* HAnimSegment383 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment383->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment383);

CHAnimSegment* HAnimSegment384 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment384->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment384);

CHAnimSegment* HAnimSegment385 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment385->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment385);

CHAnimSegment* HAnimSegment386 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment386->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment386);

CHAnimSegment* HAnimSegment387 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment387->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment387);

CHAnimSegment* HAnimSegment388 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment388->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment388);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setUSE("hanim_buttocks_standing_wall_contact_point");
HAnimHumanoid43->setSites(*HAnimSite389);

CHAnimSite* HAnimSite390 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite390->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite390);

CHAnimSite* HAnimSite391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite391->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite391);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite392);

CHAnimSite* HAnimSite393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite393->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite393);

CHAnimSite* HAnimSite394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite394->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite394);

CHAnimSite* HAnimSite395 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite395->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite395);

CHAnimSite* HAnimSite396 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite396->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite396);

CHAnimSite* HAnimSite397 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite397->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite397);

CHAnimSite* HAnimSite398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite398->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite398);

CHAnimSite* HAnimSite399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite399->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite399);

CHAnimSite* HAnimSite400 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite400->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite400);

CHAnimSite* HAnimSite401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite401->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite401);

CHAnimSite* HAnimSite402 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite402->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite402);

CHAnimSite* HAnimSite403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite403->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite403);

CHAnimSite* HAnimSite404 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite404->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite404);

CHAnimSite* HAnimSite405 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite405->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite405);

CHAnimSite* HAnimSite406 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite406->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite406);

CHAnimSite* HAnimSite407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite407->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite407);

CHAnimSite* HAnimSite408 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite408->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite408);

CHAnimSite* HAnimSite409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite409->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite409);

CHAnimSite* HAnimSite410 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite410->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite410);

CHAnimSite* HAnimSite411 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite411->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite411);

CHAnimSite* HAnimSite412 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite412->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite412);

CHAnimSite* HAnimSite413 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite413->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite413);

CHAnimSite* HAnimSite414 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite414->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite414);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite415);

CHAnimSite* HAnimSite416 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite416->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite416);

CHAnimSite* HAnimSite417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite417->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite417);

CHAnimSite* HAnimSite418 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite418->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite418);

CHAnimSite* HAnimSite419 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite419->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite419);

CHAnimSite* HAnimSite420 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite420->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite420);

CHAnimSite* HAnimSite421 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite421->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite421);

CHAnimSite* HAnimSite422 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite422->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite422);

CHAnimSite* HAnimSite423 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite423->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite423);

CHAnimSite* HAnimSite424 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite424->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite424);

CHAnimSite* HAnimSite425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite425->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite425);

CHAnimSite* HAnimSite426 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite426->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite426);

CHAnimSite* HAnimSite427 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite427->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite427);

CHAnimSite* HAnimSite428 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite428->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite428);

CHAnimSite* HAnimSite429 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite429->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite429);

CHAnimSite* HAnimSite430 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite430->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite430);

CHAnimSite* HAnimSite431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite431->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite431);

CHAnimSite* HAnimSite432 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite432->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite432);

CHAnimSite* HAnimSite433 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite433->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite433);

CHAnimSite* HAnimSite434 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite434->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite434);

CHAnimSite* HAnimSite435 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite435->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite435);

CHAnimSite* HAnimSite436 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite436->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite436);

CHAnimSite* HAnimSite437 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite437->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite437);

CHAnimSite* HAnimSite438 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite438->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite438);

CHAnimSite* HAnimSite439 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite439->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite439);

CHAnimSite* HAnimSite440 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite440->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite440);

CHAnimSite* HAnimSite441 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite441->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite441);

CHAnimSite* HAnimSite442 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite442->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite442);

CHAnimSite* HAnimSite443 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite443->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite443);

CHAnimSite* HAnimSite444 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite444->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite444);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
