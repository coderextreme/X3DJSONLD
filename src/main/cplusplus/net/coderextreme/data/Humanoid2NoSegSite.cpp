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
ImageTexture49->setUrl(new CString[3]{"../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 3);
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
HAnimJoint52->setSkinCoordIndex(new int[1]{0});
HAnimJoint52->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("sacroiliac");
HAnimJoint53->setDEF("hanim_sacroiliac");
HAnimJoint53->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint53->setSkinCoordIndex(new int[1]{0});
HAnimJoint53->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint54 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint54->setName("l_hip");
HAnimJoint54->setDEF("hanim_l_hip");
HAnimJoint54->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint54->setSkinCoordIndex(new int[1]{0});
HAnimJoint54->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint54->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint54->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint55 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint55->setName("l_knee");
HAnimJoint55->setDEF("hanim_l_knee");
HAnimJoint55->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint55->setSkinCoordIndex(new int[1]{0});
HAnimJoint55->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint55->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint55->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setName("l_talocrural");
HAnimJoint56->setDEF("hanim_l_talocrural");
HAnimJoint56->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint56->setSkinCoordIndex(new int[1]{0});
HAnimJoint56->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint56->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint56->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setName("l_tarsometatarsal_2");
HAnimJoint57->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint57->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimJoint57->setSkinCoordIndex(new int[1]{0});
HAnimJoint57->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint57->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint57->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setName("l_metatarsophalangeal_2");
HAnimJoint58->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint58->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint58->setSkinCoordIndex(new int[1]{0});
HAnimJoint58->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint58->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint58->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint59 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint59->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint59->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint59->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint59->setSkinCoordIndex(new int[1]{0});
HAnimJoint59->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint59->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint59->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint58->addChildren(*HAnimJoint59);

HAnimJoint57->addChildren(*HAnimJoint58);

HAnimJoint56->addChildren(*HAnimJoint57);

HAnimJoint55->addChildren(*HAnimJoint56);

HAnimJoint54->addChildren(*HAnimJoint55);

HAnimJoint53->addChildren(*HAnimJoint54);

CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setName("r_hip");
HAnimJoint60->setDEF("hanim_r_hip");
HAnimJoint60->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint60->setSkinCoordIndex(new int[1]{0});
HAnimJoint60->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint60->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setName("r_knee");
HAnimJoint61->setDEF("hanim_r_knee");
HAnimJoint61->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint61->setSkinCoordIndex(new int[1]{0});
HAnimJoint61->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint61->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint61->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setName("r_talocrural");
HAnimJoint62->setDEF("hanim_r_talocrural");
HAnimJoint62->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint62->setSkinCoordIndex(new int[1]{0});
HAnimJoint62->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint62->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint62->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setName("r_tarsometatarsal_2");
HAnimJoint63->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint63->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint63->setSkinCoordIndex(new int[1]{0});
HAnimJoint63->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint63->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint63->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setName("r_metatarsophalangeal_2");
HAnimJoint64->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint64->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint64->setSkinCoordIndex(new int[1]{0});
HAnimJoint64->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint64->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint64->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint65->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint65->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint65->setSkinCoordIndex(new int[1]{0});
HAnimJoint65->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint65->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint64->addChildren(*HAnimJoint65);

HAnimJoint63->addChildren(*HAnimJoint64);

HAnimJoint62->addChildren(*HAnimJoint63);

HAnimJoint61->addChildren(*HAnimJoint62);

HAnimJoint60->addChildren(*HAnimJoint61);

HAnimJoint53->addChildren(*HAnimJoint60);

HAnimJoint52->addChildren(*HAnimJoint53);

CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setName("vl5");
HAnimJoint66->setDEF("hanim_vl5");
HAnimJoint66->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint66->setSkinCoordIndex(new int[1]{0});
HAnimJoint66->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint66->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint66->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setName("vl3");
HAnimJoint67->setDEF("hanim_vl3");
HAnimJoint67->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint67->setSkinCoordIndex(new int[1]{0});
HAnimJoint67->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint67->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint67->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setName("vl1");
HAnimJoint68->setDEF("hanim_vl1");
HAnimJoint68->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint68->setSkinCoordIndex(new int[1]{0});
HAnimJoint68->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint68->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint68->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint69 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint69->setName("vt10");
HAnimJoint69->setDEF("hanim_vt10");
HAnimJoint69->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint69->setSkinCoordIndex(new int[1]{0});
HAnimJoint69->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint69->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint69->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setName("vt6");
HAnimJoint70->setDEF("hanim_vt6");
HAnimJoint70->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint70->setSkinCoordIndex(new int[1]{0});
HAnimJoint70->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint70->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint70->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("vt1");
HAnimJoint71->setDEF("hanim_vt1");
HAnimJoint71->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint71->setSkinCoordIndex(new int[1]{0});
HAnimJoint71->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint71->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint71->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setName("vc4");
HAnimJoint72->setDEF("hanim_vc4");
HAnimJoint72->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint72->setSkinCoordIndex(new int[1]{0});
HAnimJoint72->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint72->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint72->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("vc2");
HAnimJoint73->setDEF("hanim_vc2");
HAnimJoint73->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint73->setSkinCoordIndex(new int[1]{0});
HAnimJoint73->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint73->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint73->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setName("skullbase");
HAnimJoint74->setDEF("hanim_skullbase");
HAnimJoint74->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint74->setSkinCoordIndex(new int[1]{0});
HAnimJoint74->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint74->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint74->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint73->addChildren(*HAnimJoint74);

HAnimJoint72->addChildren(*HAnimJoint73);

HAnimJoint71->addChildren(*HAnimJoint72);

CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setName("l_sternoclavicular");
HAnimJoint75->setDEF("hanim_l_sternoclavicular");
HAnimJoint75->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint75->setSkinCoordIndex(new int[1]{0});
HAnimJoint75->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint75->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint75->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setName("l_acromioclavicular");
HAnimJoint76->setDEF("hanim_l_acromioclavicular");
HAnimJoint76->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint76->setSkinCoordIndex(new int[1]{0});
HAnimJoint76->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint76->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint76->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint77 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint77->setName("l_shoulder");
HAnimJoint77->setDEF("hanim_l_shoulder");
HAnimJoint77->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint77->setSkinCoordIndex(new int[1]{0});
HAnimJoint77->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint77->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("l_elbow");
HAnimJoint78->setDEF("hanim_l_elbow");
HAnimJoint78->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint78->setSkinCoordIndex(new int[1]{0});
HAnimJoint78->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint79 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint79->setName("l_radiocarpal");
HAnimJoint79->setDEF("hanim_l_radiocarpal");
HAnimJoint79->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint79->setSkinCoordIndex(new int[1]{0});
HAnimJoint79->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint79->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint79->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setName("l_carpometacarpal_1");
HAnimJoint80->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint80->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint80->setSkinCoordIndex(new int[1]{0});
HAnimJoint80->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint80->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint80->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setName("l_metacarpophalangeal_1");
HAnimJoint81->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint81->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint81->setSkinCoordIndex(new int[1]{0});
HAnimJoint81->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint81->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint81->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("l_carpal_interphalangeal_1");
HAnimJoint82->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint82->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint82->setSkinCoordIndex(new int[1]{0});
HAnimJoint82->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint82->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint82->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint81->addChildren(*HAnimJoint82);

HAnimJoint80->addChildren(*HAnimJoint81);

HAnimJoint79->addChildren(*HAnimJoint80);

CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setName("l_carpometacarpal_2");
HAnimJoint83->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint83->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint83->setSkinCoordIndex(new int[1]{0});
HAnimJoint83->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint83->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint83->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setName("l_metacarpophalangeal_2");
HAnimJoint84->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint84->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint84->setSkinCoordIndex(new int[1]{0});
HAnimJoint84->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint84->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint84->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint85->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint85->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint85->setSkinCoordIndex(new int[1]{0});
HAnimJoint85->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint85->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint85->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint86->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint86->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint86->setSkinCoordIndex(new int[1]{0});
HAnimJoint86->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint86->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint86->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint85->addChildren(*HAnimJoint86);

HAnimJoint84->addChildren(*HAnimJoint85);

HAnimJoint83->addChildren(*HAnimJoint84);

HAnimJoint79->addChildren(*HAnimJoint83);

CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("l_carpometacarpal_3");
HAnimJoint87->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint87->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint87->setSkinCoordIndex(new int[1]{0});
HAnimJoint87->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setName("l_metacarpophalangeal_3");
HAnimJoint88->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint88->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint88->setSkinCoordIndex(new int[1]{0});
HAnimJoint88->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint88->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint88->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint89 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint89->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint89->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint89->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint89->setSkinCoordIndex(new int[1]{0});
HAnimJoint89->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint89->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint89->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint90->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint90->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint90->setSkinCoordIndex(new int[1]{0});
HAnimJoint90->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint90->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint89->addChildren(*HAnimJoint90);

HAnimJoint88->addChildren(*HAnimJoint89);

HAnimJoint87->addChildren(*HAnimJoint88);

HAnimJoint79->addChildren(*HAnimJoint87);

CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setName("l_carpometacarpal_4");
HAnimJoint91->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint91->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint91->setSkinCoordIndex(new int[1]{0});
HAnimJoint91->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint91->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint91->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setName("l_metacarpophalangeal_4");
HAnimJoint92->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint92->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint92->setSkinCoordIndex(new int[1]{0});
HAnimJoint92->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint92->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint93->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint93->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint93->setSkinCoordIndex(new int[1]{0});
HAnimJoint93->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint93->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint94->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint94->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint94->setSkinCoordIndex(new int[1]{0});
HAnimJoint94->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint94->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint94->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->addChildren(*HAnimJoint94);

HAnimJoint92->addChildren(*HAnimJoint93);

HAnimJoint91->addChildren(*HAnimJoint92);

HAnimJoint79->addChildren(*HAnimJoint91);

CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setName("l_carpometacarpal_5");
HAnimJoint95->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint95->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint95->setSkinCoordIndex(new int[1]{0});
HAnimJoint95->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint95->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint95->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("l_metacarpophalangeal_5");
HAnimJoint96->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint96->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint96->setSkinCoordIndex(new int[1]{0});
HAnimJoint96->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint97->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint97->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint97->setSkinCoordIndex(new int[1]{0});
HAnimJoint97->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint97->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint97->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint98->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint98->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint98->setSkinCoordIndex(new int[1]{0});
HAnimJoint98->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint98->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint98->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint97->addChildren(*HAnimJoint98);

HAnimJoint96->addChildren(*HAnimJoint97);

HAnimJoint95->addChildren(*HAnimJoint96);

HAnimJoint79->addChildren(*HAnimJoint95);

HAnimJoint78->addChildren(*HAnimJoint79);

HAnimJoint77->addChildren(*HAnimJoint78);

HAnimJoint76->addChildren(*HAnimJoint77);

HAnimJoint75->addChildren(*HAnimJoint76);

HAnimJoint71->addChildren(*HAnimJoint75);

CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setName("r_sternoclavicular");
HAnimJoint99->setDEF("hanim_r_sternoclavicular");
HAnimJoint99->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint99->setSkinCoordIndex(new int[1]{0});
HAnimJoint99->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint99->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint99->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setName("r_acromioclavicular");
HAnimJoint100->setDEF("hanim_r_acromioclavicular");
HAnimJoint100->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint100->setSkinCoordIndex(new int[1]{0});
HAnimJoint100->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint100->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setName("r_shoulder");
HAnimJoint101->setDEF("hanim_r_shoulder");
HAnimJoint101->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint101->setSkinCoordIndex(new int[1]{0});
HAnimJoint101->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint101->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("r_elbow");
HAnimJoint102->setDEF("hanim_r_elbow");
HAnimJoint102->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint102->setSkinCoordIndex(new int[1]{0});
HAnimJoint102->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("r_radiocarpal");
HAnimJoint103->setDEF("hanim_r_radiocarpal");
HAnimJoint103->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint103->setSkinCoordIndex(new int[1]{0});
HAnimJoint103->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setName("r_carpometacarpal_1");
HAnimJoint104->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint104->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint104->setSkinCoordIndex(new int[1]{0});
HAnimJoint104->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setName("r_metacarpophalangeal_1");
HAnimJoint105->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint105->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint105->setSkinCoordIndex(new int[1]{0});
HAnimJoint105->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("r_carpal_interphalangeal_1");
HAnimJoint106->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint106->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint106->setSkinCoordIndex(new int[1]{0});
HAnimJoint106->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint106->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint106->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->addChildren(*HAnimJoint106);

HAnimJoint104->addChildren(*HAnimJoint105);

HAnimJoint103->addChildren(*HAnimJoint104);

CHAnimJoint* HAnimJoint107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint107->setName("r_carpometacarpal_2");
HAnimJoint107->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint107->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint107->setSkinCoordIndex(new int[1]{0});
HAnimJoint107->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint107->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint107->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setName("r_metacarpophalangeal_2");
HAnimJoint108->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint108->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint108->setSkinCoordIndex(new int[1]{0});
HAnimJoint108->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint108->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint108->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint109->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint109->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint109->setSkinCoordIndex(new int[1]{0});
HAnimJoint109->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint109->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint110->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint110->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint110->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint110->setSkinCoordIndex(new int[1]{0});
HAnimJoint110->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint110->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->addChildren(*HAnimJoint110);

HAnimJoint108->addChildren(*HAnimJoint109);

HAnimJoint107->addChildren(*HAnimJoint108);

HAnimJoint103->addChildren(*HAnimJoint107);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("r_carpometacarpal_3");
HAnimJoint111->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint111->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint111->setSkinCoordIndex(new int[1]{0});
HAnimJoint111->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("r_metacarpophalangeal_3");
HAnimJoint112->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint112->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint112->setSkinCoordIndex(new int[1]{0});
HAnimJoint112->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint112->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint112->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint113->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint113->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint113->setSkinCoordIndex(new int[1]{0});
HAnimJoint113->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint114->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint114->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint114->setSkinCoordIndex(new int[1]{0});
HAnimJoint114->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint114->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint114->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->addChildren(*HAnimJoint114);

HAnimJoint112->addChildren(*HAnimJoint113);

HAnimJoint111->addChildren(*HAnimJoint112);

HAnimJoint103->addChildren(*HAnimJoint111);

CHAnimJoint* HAnimJoint115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint115->setName("r_carpometacarpal_4");
HAnimJoint115->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint115->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint115->setSkinCoordIndex(new int[1]{0});
HAnimJoint115->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint115->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint115->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setName("r_metacarpophalangeal_4");
HAnimJoint116->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint116->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint116->setSkinCoordIndex(new int[1]{0});
HAnimJoint116->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint117->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint117->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint117->setSkinCoordIndex(new int[1]{0});
HAnimJoint117->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint117->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint118->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint118->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint118->setSkinCoordIndex(new int[1]{0});
HAnimJoint118->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint118->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint118->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->addChildren(*HAnimJoint118);

HAnimJoint116->addChildren(*HAnimJoint117);

HAnimJoint115->addChildren(*HAnimJoint116);

HAnimJoint103->addChildren(*HAnimJoint115);

CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setName("r_carpometacarpal_5");
HAnimJoint119->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint119->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint119->setSkinCoordIndex(new int[1]{0});
HAnimJoint119->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setName("r_metacarpophalangeal_5");
HAnimJoint120->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint120->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint120->setSkinCoordIndex(new int[1]{0});
HAnimJoint120->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint120->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint121->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint121->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint121->setSkinCoordIndex(new int[1]{0});
HAnimJoint121->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint121->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint122->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint122->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint122->setSkinCoordIndex(new int[1]{0});
HAnimJoint122->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint122->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint122->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->addChildren(*HAnimJoint122);

HAnimJoint120->addChildren(*HAnimJoint121);

HAnimJoint119->addChildren(*HAnimJoint120);

HAnimJoint103->addChildren(*HAnimJoint119);

HAnimJoint102->addChildren(*HAnimJoint103);

HAnimJoint101->addChildren(*HAnimJoint102);

HAnimJoint100->addChildren(*HAnimJoint101);

HAnimJoint99->addChildren(*HAnimJoint100);

HAnimJoint71->addChildren(*HAnimJoint99);

HAnimJoint70->addChildren(*HAnimJoint71);

HAnimJoint69->addChildren(*HAnimJoint70);

HAnimJoint68->addChildren(*HAnimJoint69);

HAnimJoint67->addChildren(*HAnimJoint68);

HAnimJoint66->addChildren(*HAnimJoint67);

HAnimJoint52->addChildren(*HAnimJoint66);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint123);

CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint124);

CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint125);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint126);

CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint127);

CHAnimJoint* HAnimJoint128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint128->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint128);

CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint129);

CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint130);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint131);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint132);

CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint133);

CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint134);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint135);

CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint136);

CHAnimJoint* HAnimJoint137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint137->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint137);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint138);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint139);

CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint140);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint141);

CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint142);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint143);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint144);

CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint145);

CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint146);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint147);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint148);

CHAnimJoint* HAnimJoint149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint149->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint149);

CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint150);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint151);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint152);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint153);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint154);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint155);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint156);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint157);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint158);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint159);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint161);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint163);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint164);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint165);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint166);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint167);

CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint168);

CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint169);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint171);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint172);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint173);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint174);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint175);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint176);

CHAnimJoint* HAnimJoint177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint177->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint177);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint178);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint179);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint180);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint181);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint182);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint183);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint184);

CHAnimJoint* HAnimJoint185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint185->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint185);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint186);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint187);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint188);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint189);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint190);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint191);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint192);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint193);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}